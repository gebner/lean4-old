prelude
import init.data.string init.data.int

-- mantissa * 10^-exponent
structure json_number :=
(mantissa : int) (exponent : nat)

namespace json_number

instance : decidable_eq json_number :=
{ dec_eq := λ ⟨m1, e1⟩ ⟨m2, e2⟩,
  match dec_eq m1 m2 with
  | (is_true hm) :=
    (match dec_eq e1 e2 with
    | (is_true he) := is_true (hm ▸ he ▸ rfl)
    | (is_false he) := is_false (λ h, json_number.no_confusion h (λ hm he2, he he2)) )
  | (is_false hm) := is_false (λ h, json_number.no_confusion h (λ hm2 he, hm hm2)) }

protected def from_nat (n : nat) : json_number := ⟨n, 0⟩
protected def from_int (n : int) : json_number := ⟨n, 0⟩

instance : has_coe nat json_number := ⟨json_number.from_nat⟩
instance has_coe_int : has_coe int json_number := ⟨json_number.from_int⟩

protected def to_string : json_number → string
| ⟨m, 0⟩ := m.repr
| ⟨m, e⟩ :=
    let s : bool := m ≥ 0, m := m.nat_abs, f := 10 ^ e in
    (if s then "" else "-") ++
    (m / f).repr ++ "." ++
    ((f : int) + m % f).repr.mk_iterator.next.remaining_to_string

protected def shiftl : json_number → nat → json_number
| ⟨m, e⟩ s := ⟨m * (10 ^ (s - e) : nat), e - s⟩

protected def shiftr : json_number → nat → json_number
| ⟨m, e⟩ s := ⟨m, e + s⟩

instance : has_to_string json_number :=
⟨json_number.to_string⟩

instance : has_repr json_number :=
⟨λ ⟨m, e⟩, "⟨" ++ m.repr ++ "," ++ e.repr ++ "⟩"⟩

end json_number

inductive json
| null
| bool (b : bool)
| num (n : json_number)
| str (s : string)
| arr (elems : list json)
| obj (kv_pairs : list (string × json))

namespace json

instance : has_coe nat json := ⟨λ n, json.num n⟩
instance has_coe_int : has_coe int json := ⟨λ n, json.num n⟩
instance has_coe_str : has_coe string json := ⟨json.str⟩
instance has_coe_bool : has_coe _root_.bool json := ⟨json.bool⟩

def to_obj : json → option (list (string × json))
| (obj kvs) := kvs
| _ := none

def to_arr : json → option (list json)
| (arr a) := a
| _ := none

def to_string : json → option string
| (str s) := some s
| _ := none

def to_nat : json → option nat
| (n : ℕ) := some n
| _ := none

def to_int : json → option int
| (i : ℤ) := some i
| _ := none

def to_bool : json → option _root_.bool
| (b : _root_.bool) := some b
| _ := none

def to_num : json → option json_number
| (json.num n) := n
| _ := none

def get : json → string → option json
| (obj kvs) k := kvs.lookup k
| _         _ := none

def nth : json → nat → option json
| (arr a) i := a.nth i
| _       _ := none

def get_or_null (j : json) (k : string) : json :=
(j.get k).get_or_else null

end json
