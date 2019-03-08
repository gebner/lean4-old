import init.lean.frontend init.lean.parser.module init.lean.server.jsonrpc init.lean.server.lsp
universes u

def task.peek {α : Type} (t : task α) : io (option α) := do
finished ← t.has_finished,
if finished then pure t.get else pure none

def task.force {α : Type u} (t : task α) : task α :=
task.pure t.get

namespace lean

namespace parser

def syntax.idents : syntax → list syntax_ident | syn :=
match syn.as_node with
| some node := node.args.bind syntax.idents
| none := match syn with syntax.ident i := [i] | _ := []

def syntax.find_idents (pos : parsec.position) (syn : syntax) : list syntax_ident := do
ident ← syn.idents,
some info ← pure ident.info | [],
guard $ info.leading.start.offset ≤ pos ∧ pos ≤ info.trailing.stop.offset,
pure ident

end parser

namespace server
open lean.parser
open lean.expander
open lean.elaborator
open lean

inductive processed_file
| parsed
  (pos : parsec.position)
  (output : module_parser_output)
  (next : task processed_file)
| failed_parse
  (pos : parsec.position)
  (partial_syntax : option syntax)
  (msgs : message_log)
  (next : task processed_file)
| expanded
  (pos : parsec.position)
  (cmd : syntax)
  (next : task processed_file)
| failed_expand
  (end_pos : parsec.position)
  (msg : message)
  (next : task processed_file)
| elaborated
  (end_pos : parsec.position)
  (st : elaborator_state)
  (next : task processed_file)
| failed_elab
  (end_pos : parsec.position)
  (msgs : message_log)
  (next : task processed_file)
| error
  (pos : parsec.position)
  (msgs : message_log)
| done

namespace processed_file

def next : processed_file → option (task processed_file)
| (parsed _ _ n) := n
| (failed_parse _ _ _ n) := n
| (expanded _ _ n) := n
| (failed_expand _ _ n) := n
| (elaborated _ _ n) := n
| (failed_elab _ _ n) := n
| (error _ _) := none
| done := none

def messages_here : processed_file → message_log
| (parsed _ output _) := output.messages
| (failed_parse _ _ m _) := m
| (expanded _ _ _) := message_log.empty
| (failed_expand _ m _) := message_log.empty.add m
| (elaborated _ st _) := st.messages
| (failed_elab _ m _) := m
| (error _ m) := m
| done := message_log.empty

def messages_now : task processed_file → io (list message) | pf :=
do finished ← pf.has_finished, if ¬ finished then pure [] else
(λ l, pf.get.messages_here.to_list ++ l) <$> match pf.get.next with
| some next := messages_now next
| none := pure []

def get_expanded_at_core (pos : parsec.position) : environment → processed_file → task (option (environment × syntax))
| e (parsed p _ next) := if pos < p then task.pure none else next.bind (get_expanded_at_core e)
| e (failed_parse p ps _ next) :=
  if pos < p then task.pure none
  else next.bind (get_expanded_at_core e) -- TODO: use partial syntax as fallback
| e (expanded ep syn next) := if pos ≤ ep then task.pure (some (e, syn)) else next.bind (get_expanded_at_core e)
| e (failed_expand ep _ next) := if pos < ep then task.pure none else next.bind (get_expanded_at_core e)
| _ (elaborated ep es next) := if pos < ep then task.pure none else next.bind (get_expanded_at_core es.env)
| e (failed_elab ep _ next) := if pos < ep then task.pure none else next.bind (get_expanded_at_core e)
| e (error _ _) := task.pure none
| e done := task.pure none

def get_expanded_at (p : processed_file) (pos : parsec.position) : task (option (environment × syntax)) :=
get_expanded_at_core pos (environment.mk_empty ()) p

protected def proc_core (filename : string) (fm : file_map) (content : string) :
nat → parsec.position → expander_config → module_parser_config →
coroutine module_parser_config module_parser_output ((sum unit parser.syntax) × message_log) →
coroutine syntax elaborator_state message_log → processed_file
| 0 pos expander_cfg parser_cfg parser_k elab_k :=
  error pos $ message_log.empty.add {
    filename := filename,
    text := "lean server fuel exhausted",
    pos := fm.to_position pos,
  }
| (fuel+1) pos expander_cfg parser_cfg parser_k elab_k :=
match parser_k.resume parser_cfg with
| (coroutine_result_core.done ⟨partial, msgs⟩) := do
  failed_parse pos (match partial with sum.inr p := p | _ := none)
    (msgs.add {
      filename := filename,
      text := "parser died",
      pos := fm.to_position pos,
    }) (task.pure done)
| (coroutine_result_core.yielded out parser_k) := do
  parsed pos out $ task.mk $ λ _,
  match (expand out.cmd).run expander_cfg with
  | except.error e :=
    failed_expand out.end_pos e $ task.mk $ λ _,
    proc_core fuel out.end_pos expander_cfg parser_cfg parser_k elab_k
  | except.ok cmd' :=
    expanded pos cmd' $ task.mk $ λ _,
    match elab_k.resume cmd' with
    | coroutine_result_core.done msgs :=
      let is_eoi := cmd'.is_of_kind module.eoi in
      let msgs' := if is_eoi then msgs else
        msgs.add {
          filename := filename,
          text := "elaborator died",
          pos := fm.to_position pos,
        } in
      failed_elab out.end_pos msgs' $
      if is_eoi then task.pure done else task.mk $ λ _,
      proc_core fuel out.end_pos expander_cfg parser_cfg parser_k elab_k
    | coroutine_result_core.yielded elab_out elab_k :=
      elaborated out.end_pos elab_out $ task.mk $ λ _,
      proc_core fuel out.end_pos elab_out.expander_cfg elab_out.parser_cfg parser_k elab_k

protected def proc (filename : string) (fm : file_map) (content : string) : task processed_file :=
task.mk $ λ _,
let expander_cfg : expander_config := {
    filename := filename,
    input := content,
    transformers := builtin_transformers,
  } in
match mk_config filename content with
| except.error e := error 0 $ message_log.empty.add {
    filename := filename,
    pos := fm.to_position 0,
    text := e,
  }
| except.ok parser_cfg :=
  processed_file.proc_core filename fm content 9999999 0
    expander_cfg parser_cfg
    (parser.run parser_cfg content (λ st _, module.parser st))
    (elaborator.run { filename := filename, input := content, initial_parser_cfg := parser_cfg })

end processed_file

structure single_file_state :=
(filename : string)
(content : string)
(fm : file_map)
(proc_result : task processed_file)
(watched : option (task processed_file))

namespace single_file_state

def create (filename : string) (content : string) : single_file_state :=
let fm := file_map.from_string content in
let pr := processed_file.proc filename fm content in {
  filename := filename, content := content, fm := fm,
  proc_result := pr, watched := pr,
}

def finished (st : single_file_state) : bool :=
match st.watched with none := tt | _ := ff

def messages_now (st : single_file_state) : io (list message) :=
processed_file.messages_now st.proc_result

def get_expanded_at (sfst : single_file_state) (pos : position) :=
sfst.proc_result.bind $ λ res,
res.get_expanded_at (sfst.fm.from_position pos)

def poll : single_file_state → io (single_file_state × bool) | st :=
match st.watched with
| none := pure (st, false)
| some w := do
  finished ← w.has_finished,
  if ¬ finished then pure (st, false) else do
  (st, has_new_msgs) ← poll { watched := w.get.next, ..st },
  pure (st, has_new_msgs ∨ ¬ w.get.messages_here.to_list.empty)

end single_file_state

abbreviation document_uri := string

structure server_state.request :=
(uri : option document_uri)
(id : jsonrpc.request_id)
(result : task (except string json))

structure server_state :=
(files : rbmap document_uri single_file_state (<))
(next_msg : task (except string json))
(requests : list server_state.request)
(input : io.fs.handle) (output : io.fs.handle)

namespace server_state

abbreviation m := state_t server_state io

@[inline]
def with_state {α : Type} (f : server_state → io α) : m α :=
state_t.get >>= state_t.lift ∘ f

def send_msg (msg : jsonrpc.message) : m unit :=
with_state $ λ st, do (jsonrpc.write_msg st.output msg : except_t string io unit).run, pure ()

def send_error (id : jsonrpc.request_id) (e : string) (data := json.null) : m unit :=
send_msg $ jsonrpc.message.response_error id (-32001 : int) e data

def send_unrelated_error (e : string) (data := json.null) : m unit :=
send_error jsonrpc.request_id.null e data

def log (msg : string) : m unit :=
send_msg $ jsonrpc.message.notification_message "window/logMessage" $
json.obj [("type", (0 : nat)), ("message", msg)]

def wait : m unit := do
st ← state_t.get,
let ws := (do (_, sfst) ← st.files.to_list, some w ← pure sfst.watched | [], [w]),
let rs := (do ⟨_,_,r⟩ ← st.requests, [r]),
state_t.lift $ io.wait_any' (btask.mk st.next_msg :: (ws.map btask.mk ++ rs.map btask.mk))

def json_of_pos (p : position) : json :=
json.obj [("line", (p.line-1 : nat)), ("character", p.column)]

def json_of_range (p1 : position) (p2 : position) : json :=
json.obj [("start", json_of_pos p1), ("end", json_of_pos p2)]

def diag_of_msg (m : message) : json := json.obj [
  ("range", json_of_range m.pos (m.end_pos.get_or_else m.pos)),
  ("severity", (match m.severity with
    | message_severity.error := 1
    | message_severity.warning := 2
    | message_severity.information := 3 : nat)),
  ("source", "Lean"),
  ("message", m.text)
]

def send_diagnostics_core (uri : document_uri) (msgs : list message) : m unit :=
send_msg $ jsonrpc.message.notification_message "textDocument/publishDiagnostics" $ json.obj [
  ("uri", uri),
  ("diagnostics", json.arr $ msgs.map diag_of_msg)
]

def send_diagnostics (uri : document_uri) (sfst : single_file_state) : m unit := do
msgs ← state_t.lift sfst.messages_now,
send_diagnostics_core uri msgs

def clear_diagnostics (uri : document_uri) : m unit :=
send_diagnostics_core uri []

def cancel_requests_core (pred : request → bool) (code : int) (message : string) : m unit := do
st ← state_t.get,
let to_cancel := st.requests.filter (λ r, pred r),
let to_cancel := to_cancel.map (λ r, r.id),
state_t.put { requests := st.requests.filter (λ r, ¬ pred r), ..st },
to_cancel.mfor $ λ id, send_msg $
jsonrpc.message.response_error id code message (json.obj [])

def clear_requests (uri : document_uri) : m unit :=
cancel_requests_core (λ r, r.uri = some uri) (-32801) "content modified"

def handle_poll (uri : document_uri) (sfst : single_file_state) : m unit := do
(sfst, has_new_msgs) ← state_t.lift sfst.poll,
state_t.modify $ λ st, { files := st.files.insert uri sfst, ..st },
when has_new_msgs $
send_diagnostics uri sfst

def run_except {α : Type} (id : jsonrpc.request_id) (f : except_t string m α) : m unit := do
res ← f.run,
match res with
| except.ok a := pure ()
| except.error e := send_error id e

def run_except' {α : Type} (f : except_t string m α) : m unit :=
run_except jsonrpc.request_id.null f

def run_except_async (uri : option document_uri) (id : jsonrpc.request_id)
    (f : except_t string m (task (except string json))) : m unit :=
run_except id $ do t ← f,
except_t.lift $ state_t.modify $ λ st,
  { requests := ⟨uri, id, t⟩ :: st.requests, ..st }

def sync_file (uri : document_uri) (content : string) : m unit := do
let filename := uri, -- TODO(gabriel)
state_t.modify $ λ st, {
  files := st.files.insert uri (single_file_state.create filename content),
  ..st
},
clear_requests uri,
clear_diagnostics uri

def close_file (uri : document_uri) : m unit := do
state_t.modify $ λ st, { files := rbmap_of (st.files.to_list.filter $ λ e, e.1 ≠ uri) _, ..st },
clear_requests uri,
clear_diagnostics uri

def handle_did_open (params : json) : except_t string m unit := do
some doc ← pure (params.get "textDocument") | throw "no textDocument field",
some uri ← pure (doc.get' "uri") | throw "no uri field",
some content ← pure (doc.get' "text") | throw "no text field",
except_t.lift $ sync_file uri content

def handle_did_change (params : json) : except_t string m unit := do
some doc ← pure (params.get "textDocument") | throw "no textDocument field",
some uri ← pure (doc.get' "uri") | throw "no uri field",
some ([change] : list json) ← pure (params.get' "contentChanges") | throw "no contentChanges field",
some content ← pure (change.get' "text") | throw "no text field in content change",
except_t.lift $ sync_file uri content

def handle_did_close (params : json) : except_t string m unit := do
some doc ← pure (params.get "textDocument") | throw "no textDocument field",
some uri ← pure (doc.get' "uri") | throw "no uri field",
except_t.lift $ close_file uri

def handle_cancel (params : json) : except_t string m unit := do
some (id : jsonrpc.request_id) ← pure (params.get' "id") | throw "no id field",
except_t.lift $ cancel_requests_core
  (λ r, to_string (to_json r.id) = to_string (to_json id)) -- HACK(gabriel): use decidable_eq for request_id
  (-32800) "request cancelled"

def handle_hover (params : json) : except_t string m (task (except string json)) := do
except_t.lift $ log "handle_hover",
some doc ← pure (params.get "textDocument") | throw "no textDocument field",
some uri ← pure (doc.get' "uri") | throw "no uri field",
some (pos : lsp.position) ← pure (params.get' "position") | throw "no position field",
some sfst ← except_t.lift $ with_state $ λ st, pure (st.files.find uri) | throw "document not open",
pure $ (sfst.get_expanded_at ⟨pos.line+1, pos.character⟩).map $ λ syn,
except.ok $ json.arr $ do
some (env, syn) ← pure syn | [],
[to_string syn]
-- ident ← syn.find_idents (sfst.fm.from_position ⟨pos.line+1, pos.character⟩),
-- preresolved_name ← ident.preresolved,
-- pure preresolved_name.to_string

def handle_msg (msg : json) : m unit :=
match (from_json msg : option jsonrpc.message) with
| none := send_unrelated_error "could not parse request" msg
| some (jsonrpc.message.notification_message method params) := run_except'
  (match method with
  | "textDocument/didOpen" := handle_did_open params
  | "textDocument/didChange" := handle_did_change params
  | "textDocument/didClose" := handle_did_close params
  | "textDocument/didSave" := pure ()
  | "$/cancelRequest" := handle_cancel params
  | method := throw $ "unknown notification: " ++ method)
| some (jsonrpc.message.request id method params) :=
  run_except_async (do doc ← params.get "textDocument", doc.get' "uri") id $
  (match method with
  | "textDocument/hover" := handle_hover params
  | method := throw $ "unknown request: " ++ method)
| some msg := pure ()

def loop1 : m bool := do
wait,
next_msg ← with_state $ λ st, st.next_msg.peek,
match next_msg with
| some $ except.error e := do
  send_unrelated_error e,
  pure ff
| some $ except.ok msg := do
  next_msg ← with_state $ λ st, io.mk_task $ (jsonrpc.read_msg_raw st.input : except_t string io json).run,
  state_t.modify $ λ st, { next_msg := next_msg, ..st },
  handle_msg msg,
  pure tt
| none := do
  (do st ← state_t.get,
      rs ← st.requests.mfilter (λ r, do
        log $ to_string $ to_json r.id,
        res ← state_t.lift r.result.peek,
        match res with
        | some (except.ok a) := do
               send_msg $ jsonrpc.message.response r.id a,
               pure ff
        | some (except.error err) := do
               send_msg $ jsonrpc.message.response_error r.id (-32001 : int) err json.null,
               pure ff
        | none := pure tt),
      state_t.put { requests := rs, ..st }),
  (do st ← state_t.get,
      st.files.to_list.mfor $ λ ⟨uri, sfst⟩, handle_poll uri sfst),
  pure tt

def loop (st : server_state) : io unit :=
io.prim.iterate st $ λ st, do
(continue, st') ← loop1 st,
pure $ if continue then sum.inl st' else sum.inr ()

def server_capabilities : json := json.obj [
  ("hoverProvider", tt),
  ("textDocumentSync", (1 : nat)) -- full sync
]

def run_core (input : io.fs.handle) (output : io.fs.handle) : except_t string io unit := do
jsonrpc.message.request init_id "initialize" init_params ← jsonrpc.read_msg input,
jsonrpc.write_msg output $ jsonrpc.message.response init_id $
  json.obj [("capabilities", server_capabilities)],
jsonrpc.message.notification_message "initialized" initd_params ← jsonrpc.read_msg input,
next_msg ← except_t.lift $ io.mk_task $ (jsonrpc.read_msg_raw input : except_t string io json).run,
except_t.lift $ loop {
  input := input, output := output,
  next_msg := next_msg,
  requests := [],
  files := mk_rbmap _ _ _,
}

@[export lean_server_run]
def run (input : io.fs.handle) (output : io.fs.handle) : io unit := do
res ← (run_core input output).run,
match res with
| except.ok () := pure ()
| except.error e := (io.println e : except_t string io unit).run *> pure ()

end server_state

end server
end lean
