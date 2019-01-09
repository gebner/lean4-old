prelude
import init.data.string init.data.int

-- mantissa * 10^-exponent
structure json_number :=
(mantissa : int) (exponent : nat)

namespace json_number

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
instance has_coe_str : has_coe string json := ⟨json.str⟩

end json
