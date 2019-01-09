prelude
import init.data.json.basic init.control.except

structure quickparse.result (α : Type) :=
(pos : string.iterator)
(ok : bool)
(res : if ok then α else string)

namespace quickparse.result

@[inline, pattern]
protected def success {α} (res : α) (remaining : string.iterator) : quickparse.result α :=
⟨remaining, tt, res⟩

@[inline, pattern]
protected def error {α} (pos : string.iterator) (msg : string) : quickparse.result α :=
⟨pos, ff, msg⟩

end quickparse.result

def quickparse (α : Type) : Type := string.iterator → quickparse.result α

def string.iterator.skip_ws_core : nat → string.iterator → string.iterator
| 0 it := it
| (i+1) it :=
  let c := it.curr in
  if c = ' ' ∨ c = '\u0009' ∨ c = '\u000a' ∨ c = '\u000d' ∨ c = '\u0020' then
    it.next.skip_ws_core i
  else
    it

def string.iterator.skip_ws (it : string.iterator) : string.iterator :=
it.skip_ws_core it.remaining

namespace quickparse

@[inline]
protected def pure {α : Type} (a : α) : quickparse α
| it := quickparse.result.success a it

@[inline]
protected def bind {α β : Type} (f : quickparse α) (g : α → quickparse β) : quickparse β
| it := match f it with
  | quickparse.result.success a rem := g a rem
  | quickparse.result.error pos msg := quickparse.result.error pos msg

@[inline]
def fail {α : Type} (msg : string) : quickparse α | it :=
result.error it msg

@[inline]
instance : monad quickparse :=
{ pure := @quickparse.pure, bind := @quickparse.bind }

@[inline]
def remaining : quickparse nat | it := result.success it.remaining it

def unexpected_end_of_input := "unexpected end of input"

@[inline]
def peek : quickparse (option char) | it :=
if it.has_next then result.success it.curr it else result.success none it

@[inline]
def skip : quickparse unit
| it := result.success () it.next

@[inline]
def next : quickparse char :=
do some c ← peek | fail unexpected_end_of_input, skip, pure c

def expect (s : string) : quickparse unit | it :=
if it.extract (it.forward s.length) = s then
  result.success () (it.forward s.length)
else
  result.error it ("expected: " ++ s)

@[inline]
def ws : quickparse unit
| it := result.success () it.skip_ws

def expected_end_of_input := "expected end of input"

@[inline]
def eoi : quickparse unit | it :=
if it.has_next then
  result.error it expected_end_of_input
else
  result.success () it

end quickparse

namespace json.parser

open quickparse

def invalid_hex_ch : string := "invalid hex character"

@[inline]
def hex_char : quickparse nat := do
c ← next,
if '0' ≤ c ∧ c ≤ '9' then
  pure $ c.val - '0'.val
else if 'a' ≤ c ∧ c ≤ 'f' then
  pure $ c.val - 'a'.val
else if 'A' ≤ c ∧ c ≤ 'F' then
  pure $ c.val - 'A'.val
else
  fail invalid_hex_ch

@[inline]
def escaped_char : quickparse char := do
c ← next,
if c = '\\' then do
  c2 ← next,
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
  | _ := fail "illegal escape"
else if 0x0020 ≤ c.val ∧ c.val ≤ 0x10ffff then
  pure c
else
  fail "unexpected character in string"

def str_core : nat → string → quickparse string
| 0 _ := fail "error in str_core"
| (i+1) acc := do c ← peek,
  if c = '"' then -- "
  skip *> pure acc else do
  c ← escaped_char, str_core i (acc.push c)

def str : quickparse string :=
do r ← remaining, str_core (r+1) ""

def nat_core : nat → nat → nat → quickparse (nat × nat)
| 0 _ _ := fail "error in nat_core"
| (i+1) acc ds := do c ← peek,
  match c with
  | some c := if '0' ≤ c ∧ c ≤ '9' then
                do skip, nat_core i (10*acc + (c.val - '0'.val)) (ds+1)
              else
                pure (acc, ds)
  | none := pure (acc, ds)

@[inline]
def lookahead (p : char → Prop) (desc : string) [decidable_pred p] : quickparse unit := do
some c ← peek | fail unexpected_end_of_input,
if p c then pure () else fail $ "expected " ++ desc

@[inline]
def natnonzero : quickparse nat := do
lookahead (λ c, '1' ≤ c ∧ c ≤ '9') "1-9",
r ← remaining, (n, _) ← nat_core (r+1) 0 0, pure n

@[inline]
def nat_num_digits : quickparse (nat × nat) := do
lookahead (λ c, '0' ≤ c ∧ c ≤ '9') "digit",
r ← remaining, nat_core (r+1) 0 0

@[inline]
def natmaybezero : quickparse nat := do
(n, _) ← nat_num_digits, pure n

def num : quickparse json_number := do
c ← peek, sign : int ← if c = '-' then skip *> pure (-1) else pure 1,
some c ← peek | fail unexpected_end_of_input,
res ← if c = '0' then skip *> pure 0 else natnonzero,
let res := json_number.from_int (sign * res),
c ← peek, res ← if c = '.' then do skip,
    (n, d) ← nat_num_digits,
    pure $ json_number.mk (res.mantissa * (10^d:nat) + n) (res.exponent + d)
  else pure res,
c ← peek, if c = 'e' ∨ c = 'E' then do
  skip, c ← peek,
  if c = '-' then do skip,
    n ← natmaybezero,
    pure (res.shiftr n)
  else do
    if c = '+' then skip else pure (),
    n ← natmaybezero,
    pure (res.shiftl n)
else pure res

mutual def any_core, array_core, object_core
with any_core : nat → quickparse json
| 0 := fail "error in any_core"
| (i+1) := do some c ← peek | fail unexpected_end_of_input,
  if c = '[' then
    do skip, ws, c ← peek,
    if c = ']' then skip *> ws *> pure (json.arr [])
    else do a ← array_core i, pure (json.arr a)
  else if c = '{' then
    do skip, ws, c ← peek,
    if c = '}' then skip *> ws *> pure (json.obj [])
    else do kvs ← object_core i, pure (json.obj kvs)
  else if c = '"' then -- "
    do skip, s ← str_core i "", ws, pure (json.str s)
  else if c = 'f' then
    do expect "false", ws, pure (json.bool ff)
  else if c = 't' then
    do expect "true", ws, pure (json.bool tt)
  else if c = 'n' then
    do expect "null", ws, pure json.null
  else if c = '-' ∨ ('0' ≤ c ∧ c ≤ '9') then
    do n ← num, ws, pure (json.num n)
  else
    fail "unexpected input"
with array_core : nat → quickparse (list json)
| 0 := fail "error in any_core"
| (i+1) := do e ← any_core i, c ← next,
  if c = ']' then ws *> pure [e]
  else if c = ',' then ws *> list.cons e <$> array_core i
  else fail "unexpected character in array"
with object_core : nat → quickparse (list (string × json))
| 0 := fail "error in any_core"
| (i+1) := do
  lookahead (λ c, c = '"') "\"", skip, -- "
  k ← str_core i "", ws,
  lookahead (λ c, c = ':') ":", skip, ws,
  v ← any_core i, c ← next,
  if c = '}' then ws *> pure [(k,v)]
  else if c = ',' then ws *> list.cons (k,v) <$> object_core i
  else fail $ "unexpected character in object"

def any : quickparse json :=
do r ← remaining, ws, res ← any_core (2*r+1), eoi, pure res

end json.parser

namespace json

protected def parse (s : string) : except string json :=
match json.parser.any s.mk_iterator with
| quickparse.result.success res _ := except.ok res
| quickparse.result.error it err := except.error ("offset " ++ it.offset.repr ++ ": " ++ err)

end json
