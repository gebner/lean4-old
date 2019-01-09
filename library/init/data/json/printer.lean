prelude
import init.control.except init.lean.format init.data.json.basic

open lean

namespace json

def string_builder := string → string

class formattable (α : Type) extends has_append α :=
(empty {} : α)
(from_str {} : string → α)
(from_char {} : char → α)
(from_string_builder {} : string_builder → α)
(line {} : α)
(bracket {} : string → α → string → α)
(group {} : α → α)

open formattable

instance format.formattable : formattable format :=
{ empty := "",
  from_str := λ x, x,
  from_char := to_fmt,
  from_string_builder := λ s, s "",
  line := format.line,
  group := format.group,
  bracket := format.bracket }

instance string_builder.formattable : formattable string_builder :=
{ empty := λ acc, acc,
  from_str := λ s acc, acc ++ s,
  from_char := λ c acc, acc.push c,
  from_string_builder := id,
  append := λ a b acc, b (a acc),
  line := λ acc, acc.push '\n',
  group := λ s, s,
  bracket := λ l s r acc, s (acc ++ l) ++ r
}

private def escape_aux : nat → string.iterator → string_builder
| 0     it := empty
| (i+1) it :=
  let c := it.curr in
  if c = '"' then -- "
    from_str "\\\"" ++ escape_aux i it.next
  else if c = '\\' then
    from_str "\\\\" ++ escape_aux i it.next
  else if c = '\n' then
    from_str "\\n" ++ escape_aux i it.next
  else if c = '\x0d' then
    from_str "\\r" ++ escape_aux i it.next
  else if 0x0020 ≤ c.val ∧ c.val ≤ 0x10ffff then
    from_char c ++ escape_aux i it.next
  else
    let n := c.to_nat in
    from_str "\\u" ++
    from_char (nat.digit_char (n / 4096)) ++
    from_char (nat.digit_char ((n % 4096) / 256)) ++
    from_char (nat.digit_char ((n % 256) / 16)) ++
    from_char (nat.digit_char (n % 16)) ++
    escape_aux i it.next

def escape (s : string) : string_builder :=
escape_aux s.length s.mk_iterator

def render_string (s : string) : string_builder :=
from_char '"' ++ escape s ++ from_char '"'

def no_whitespace_formattable : formattable string_builder :=
{ line := empty, ..string_builder.formattable }

section
variables {α : Type} [formattable α]

@[specialize]
mutual def render, render_elems, render_kvs, render_kv
with render : json → α
| null := from_str "null"
| (bool tt) := from_str "true"
| (bool ff) := from_str "false"
| (num s) := from_str s.to_string
| (str s) := from_string_builder $ render_string s
| (arr elems) := bracket "[" (render_elems elems) "]"
| (obj kvs) := bracket "{" (render_kvs kvs) "}"
with render_elems : list json → α
| [] := empty
| [x] := render x
| (list.cons x xs) := render x ++ from_str "," ++ line ++ render_elems xs
with render_kvs : list (string × json) → α
| [] := empty
| [x] := render_kv x
| (list.cons x xs) := render_kv x ++ from_str "," ++ line ++ render_kvs xs
with render_kv : string × json → α
| (k, v) := group (from_string_builder (render_string k) ++ from_str ":" ++ line ++ render v)

end

def pretty (j : json) (line_width := 80) : string :=
format.pretty (render j) line_width

def dump (j : json) : string :=
@render _ no_whitespace_formattable j ""

instance : has_to_format json := ⟨render⟩
instance : has_to_string json := ⟨pretty⟩
instance : has_repr json := ⟨dump⟩

end json
