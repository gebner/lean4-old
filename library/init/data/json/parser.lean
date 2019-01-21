prelude
import init.data.json.basic init.control.except init.lean.parser.parsec

namespace json.parser

def is_whitespace (c : char) : bool :=
c = ' ' ∨ c = '\u0009' ∨ c = '\u000a' ∨ c = '\u000d' ∨ c = '\u0020'

open lean.parser lean.parser.parsec lean.parser.monad_parsec
local notation `m ` := parsec'

def ws : m unit := take_while' is_whitespace

def invalid_hex_ch : string := "invalid hex character"

def between (a : char) (b : char) : char → bool
| c := a ≤ c ∧ c ≤ b

def between' (a : nat) (b : nat) : char → bool
| c := a ≤ c.val ∧ c.val ≤ b

def hex_char : m nat :=
(do c ← satisfy (between '0' '9'), pure (c.val - '0'.val)) <|>
(do c ← satisfy (between 'a' 'f'), pure (10 + (c.val - 'a'.val))) <|>
(do c ← satisfy (between 'A' 'F'), pure (10 + (c.val - 'A'.val))) <|>
error "invalid hex character"

def escaped_char : m char :=
(do c ← ch '\\', c2 ← any,
    match c2 with
    | '\\' := pure '\\'
    | '"' := pure '"'
    | '/' := pure '/'
    | 'b' := pure '\x08'
    | 'f' := pure '\x0c'
    | 'n' := pure '\n'
    | 'r' := pure '\x0d'
    | 't' := pure '\t'
    | 'u' := do
        u1 ← hex_char, u2 ← hex_char, u3 ← hex_char, u4 ← hex_char,
        pure $ char.of_nat $ 4096*u1 + 256*u2 + 16*u3 + u4
    | _ := error "illegal escape") <|>
satisfy (between' 0x0020 0x10ffff) <|>
unexpected "character in string"

def string_lit_core : nat → string → m string
| 0 _ := error "error in str_core"
| (i+1) acc :=
  (do ch '"', pure acc) <|> -- "
  (do c ← escaped_char, string_lit_core i (acc.push c))

def string_lit : m string :=
do ch '"', r ← remaining, string_lit_core (r+1) "" -- "

def nat_core : nat → nat → nat → m (nat × nat)
| 0 _ _ := error "error in nat_core"
| (i+1) acc ds :=
  (do c ← satisfy (between '0' '9'), nat_core i (10*acc + (c.val - '0'.val)) (ds+1)) <|>
  pure (acc, ds)

def lookahead_char (p : char → bool) (desc : string) : m unit :=
lookahead (satisfy p *> pure ()) <|> unexpected desc

def natnonzero : m nat := do
lookahead_char (between '1' '9') "1-9",
r ← remaining, (n, _) ← nat_core (r+1) 0 0, pure n

def nat_num_digits : m (nat × nat) := do
lookahead_char (between '0' '9') "digit",
r ← remaining, nat_core (r+1) 0 0

def natmaybezero : m nat := do
(n, _) ← nat_num_digits, pure n

def num : m json_number := do
sign : ℤ ← (ch '-' *> pure (-1)) <|> pure 1,
res ← (ch '0' *> pure 0) <|> natnonzero,
let res := json_number.from_int (sign * res),
res ← (do ch '.', (n, d) ← nat_num_digits,
          pure $ json_number.mk (res.mantissa * (10^d:nat) + n) (res.exponent + d))
      <|> pure res,
res ← (do satisfy (λ c, c = 'e' ∨ c = 'E'),
          is_pos ← (ch '-' *> pure ff) <|> (ch '+' *> pure tt) <|> pure tt,
          n ← natmaybezero,
          pure $ if is_pos then res.shiftl n else res.shiftr n)
      <|> pure res,
pure res

mutual def any_core, array_core, object_core
with any_core : nat → m json
| 0 := error "error in any_core"
| (i+1) :=
  (do ch '[', ws, (ch ']' *> ws *> pure (json.arr [])) <|> (json.arr <$> array_core i)) <|>
  (do ch '{', ws, (ch '}' *> ws *> pure (json.obj [])) <|> (json.obj <$> object_core i)) <|>
  (json.str <$> string_lit <* ws) <|>
  (do str "false", ws, pure ff) <|>
  (do str "true", ws, pure tt) <|>
  (do str "null", ws, pure json.null) <|>
  json.num <$> num
with array_core : nat → m (list json)
| 0 := error "error in array_core"
| (i+1) := do e ← any_core i,
  (do ch ']', ws, pure [e]) <|>
  (do ch ',', ws, list.cons e <$> array_core i)
with object_core : nat → m (list (string × json))
| 0 := error "error in object_core"
| (i+1) := do k ← string_lit, ws,
              ch ':', ws,
              v ← any_core i,
              (do ch '}', ws *> pure [(k,v)]) <|>
              (do ch ',', ws, list.cons (k,v) <$> object_core i)

def any : m json :=
do r ← remaining, ws, res ← any_core (2*r+1), eoi, pure res

end json.parser

namespace json

open lean.parser.parsec

protected def parse (s : string) : except string json :=
match json.parser.any s.mk_iterator with
| result.ok res _ _ := except.ok res
| result.error msg _ := except.error msg.to_string

end json
