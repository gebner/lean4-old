import init.lean.server.jsonrpc

namespace lsp

structure position := (line : nat) (character : nat)
namespace position
instance : has_to_json position :=
⟨λ ⟨l,c⟩, json.obj [("line", l), ("character", c)]⟩
instance : has_from_json position :=
⟨λ j, do
l ← j.get "line" >>= from_json,
c ← j.get "character" >>= from_json,
pure ⟨l,c⟩⟩
end position

structure range := (start : position) (end' : position)
namespace range
instance : has_to_json range :=
⟨λ ⟨s,e⟩, json.obj [("start", to_json s), ("end", to_json e)]⟩
instance : has_from_json range :=
⟨λ j, do
s ← j.get "start" >>= from_json,
e ← j.get "end" >>= from_json,
pure ⟨s,e⟩⟩
end range

@[derive has_from_json has_to_json]
def document_uri := string

structure location := (uri : document_uri) (range : range)
namespace location
instance : has_to_json location :=
⟨λ ⟨start,range⟩, json.obj [("uri", to_json start), ("range", to_json range)]⟩
instance : has_from_json location :=
⟨λ j, do kvs ← j.to_obj,
start ← kvs.lookup "uri" >>= from_json,
range ← kvs.lookup "range" >>= from_json,
pure ⟨start,range⟩⟩
end location

inductive diagnostic_severity
| error | warning | information | hint
namespace diagnostic_severity
def to_nat : diagnostic_severity → ℕ
| error := 1 | warning := 2 | information := 3 | hint := 4
instance : has_to_json diagnostic_severity := ⟨λ s, s.to_nat⟩
instance : has_from_json diagnostic_severity :=
⟨λ j, match j with
| (1 : ℕ) := some error
| (2 : ℕ) := some warning
| (3 : ℕ) := some information
| (4 : ℕ) := some hint
| _ := none⟩
end diagnostic_severity

structure diagnostic_related_information :=
(location : location) (message : string)
namespace diagnostic_related_information
end diagnostic_related_information

structure diagnostic :=
(range : range)
(severity : option diagnostic_severity)
(code : option (sum json_number string))
(source : option string)
(message : string)
(related_information : list diagnostic_related_information)

#eval (to_json (⟨"file:///foo", ⟨⟨0,10⟩, ⟨1,20⟩⟩⟩ : location)).dump

end lsp