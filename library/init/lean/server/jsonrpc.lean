prelude
import init.lean.parser.parsec init.data.json init.io

universes u

namespace jsonrpc

variables {m : Type → Type} {ε : Type} [monad_io m] [monad_except ε m]
  [has_lift_t string ε] [monad m]

def read_header (h : io.fs.handle) : ℕ → m (list (string × string))
| 0 := throw ↑"maximum header length exceeded"
| (n+1) := do
  l ← h.get_line,
  if l = "\x15\n" then
    pure []
  else do
    some colon ← pure (l.find ':') | throw ↑"no : found in header",
    some key ← pure (l.mk_iterator.extract colon) | throw ↑"no key before :",
    some value ← pure (colon.next.extract l.mk_iterator.to_end.prev) | throw ↑"invalid value",
    rest ← read_header n,
    pure ((key,value) :: rest)

def read_msg_raw (h : io.fs.handle) : m json := do
hdr ← read_header h 100,
some bytes ← pure ((hdr.lookup "Content-Length").map string.to_nat) | throw ↑"no Content-Length header",
content ← h.get_line, -- HACK(gabriel): we need to read `bytes` bytes as a UTF-8 string
match json.parse content with
| (except.error e) := throw ↑e
| (except.ok j) := pure j

def mk_msg_raw (msg : json) : string :=
let json_string := json.dump msg ++ "\x15\n", len := json_string.utf8_length in
"Content-Length: " ++ to_string len ++ "\x15\n\x15\n" ++ json_string

def write_msg_raw (h : io.fs.handle) (msg : json) : m unit :=
-- h.write (mk_msg_raw msg)
io.print (mk_msg_raw msg) -- HACK(gabriel): should write to handle `h` instead

private def mk_field {β} [has_to_json β] (a : string) (b : β) := (a, to_json b)
local infix `⇒ `:65 := mk_field

inductive request_id
| str (s : string)
| num (n : json_number)

namespace request_id

instance : has_to_json request_id :=
⟨λ r, match r with str s := s | num n := json.num n⟩

instance : has_from_json request_id :=
⟨λ j, match j with json.num n := num n | json.str s := str s | _ := none⟩

end request_id

inductive message
| request (id : request_id) (method : string) (params : json)
| response (id : request_id) (result : json)
| response_error (id : request_id) (code : json_number) (message : string) (data : json)
| notification_message (method : string) (params : json)

namespace message

instance : has_to_json message :=
⟨λ m, match m with
| request id method params := json.obj ["jsonrpc" ⇒ "2.0", "id" ⇒ id, "method" ⇒ method, "params" ⇒ params]
| response id result := json.obj ["jsonrpc" ⇒ "2.0", "id" ⇒ id, "result" ⇒ result]
| response_error id code message data := json.obj ["jsonrpc" ⇒ "2.0", "id" ⇒ id,
  "error" ⇒ json.obj ["code" ⇒ code, "message" ⇒ message, "data" ⇒ data]]
| notification_message method params := json.obj ["jsonrpc" ⇒ "2.0", "method" ⇒ method, "params" ⇒ params]
⟩

instance : has_from_json message :=
⟨λ j, do "2.0" ← j.get "jsonrpc" | none,
(do id ← j.get' "id", result ← j.get "result", pure (response id result)) <|>
(do id ← j.get' "id", error ← j.get "error",
    code ← j.get' "code", message ← j.get' "message",
    pure (response_error id code message (j.get_or_null "data"))) <|>
(do id ← j.get' "id", method ← j.get' "method",
    pure (request id method (j.get_or_null "params"))) <|>
(do method ← j.get' "method", pure (notification_message method (j.get_or_null "params")))⟩

end message

def read_msg (h : io.fs.handle) : m message := do
msg ← read_msg_raw h,
some msg ← pure (from_json msg) | throw ↑("invalid message:\n" ++ msg.pretty),
pure msg

def write_msg (h : io.fs.handle) (msg : message) : m unit :=
write_msg_raw h (to_json msg)

end jsonrpc
