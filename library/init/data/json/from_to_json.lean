prelude
import init.data.json.basic init.control.combinators

universes u

class has_from_json (α : Type u) :=
(from_json {} : json → option α)
export has_from_json (from_json)

class has_to_json (α : Type u) :=
(to_json : α → json)
export has_to_json (to_json)

instance json.has_from_json : has_from_json json := ⟨some⟩
instance json.has_to_json : has_to_json json := ⟨id⟩

instance json_number.has_from_json : has_from_json json_number := ⟨json.to_num⟩
instance json_number.has_to_json : has_to_json json_number := ⟨json.num⟩

instance bool.has_to_json : has_to_json bool := ⟨λ b, b⟩
instance nat.has_to_json : has_to_json nat := ⟨λ n, n⟩
instance int.has_to_json : has_to_json int := ⟨λ n, json.num n⟩
instance string.has_to_json : has_to_json string := ⟨λ s, s⟩

instance list.has_from_json {α : Type u} [has_from_json α] : has_from_json (list α) :=
⟨λ j, match j with json.arr a := a.mmap from_json | _ := none⟩
instance list.has_to_json {α : Type u} [has_to_json α] : has_to_json (list α) :=
⟨λ l, json.arr (l.map to_json)⟩

instance nat.has_from_json : has_from_json nat := ⟨json.to_nat⟩
instance int.has_from_json : has_from_json int := ⟨json.to_int⟩
instance string.has_from_json : has_from_json string := ⟨json.to_string⟩

def json.get' {α : Type u} [has_from_json α] (j : json) (k : string) : option α :=
(j.get k).bind from_json

def json.get_as (j : json) (α : Type u) [has_from_json α] (k : string) : option α :=
j.get' k
