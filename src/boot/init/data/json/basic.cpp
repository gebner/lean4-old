// Lean compiler output
// Module: init.data.json.basic
// Imports: init.data.string.default init.data.int.default
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
namespace lean {
obj* nat_abs(obj*);
}
obj* l_json_to__obj(obj*);
obj* l_json__number_shiftl___boxed(obj*, obj*);
namespace lean {
obj* nat2int(obj*);
}
obj* l_json_has__coe__str(obj*);
obj* l_json_get___main___boxed(obj*, obj*);
obj* l_json__number_to__string___main___closed__1;
obj* l_list_nth___main___rarg(obj*, obj*);
obj* l_json__number_from__int(obj*);
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_json_to__bool(obj*);
obj* l_json_get(obj*, obj*);
obj* l_json__number_to__string___main___boxed(obj*);
obj* l_json_get__or__null___boxed(obj*, obj*);
obj* l_list_lookup___main___at_json_get___main___spec__1(obj*, obj*);
namespace lean {
uint8 int_dec_le(obj*, obj*);
}
obj* l_json__number_to__string___boxed(obj*);
obj* l_int_repr___main(obj*);
obj* l_json_has__coe__bool___boxed(obj*);
obj* l_json_to__nat___main(obj*);
namespace lean {
obj* string_iterator_next(obj*);
}
namespace lean {
obj* int_mod(obj*, obj*);
}
obj* l_json__number_shiftl___main(obj*, obj*);
namespace lean {
obj* string_append(obj*, obj*);
}
obj* l_json_nth(obj*, obj*);
obj* l_json__number_decidable__eq___boxed(obj*, obj*);
obj* l_json_to__int(obj*);
obj* l_json_to__obj___main(obj*);
obj* l_json_has__coe__int(obj*);
obj* l_json_to__num(obj*);
obj* l_json_to__nat(obj*);
obj* l_option_get__or__else___main___rarg(obj*, obj*);
obj* l_json__number_has__coe;
obj* l_json__number_from__nat(obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
namespace lean {
obj* string_iterator_remaining_to_string(obj*);
}
obj* l_json_to__bool___main___boxed(obj*);
obj* l_json__number_has__repr(obj*);
extern obj* l_string_join___closed__1;
obj* l_json_has__coe(obj*);
obj* l_json_has__coe__bool(uint8);
namespace lean {
obj* int_add(obj*, obj*);
}
extern obj* l_int_zero;
obj* l_json_to__nat___main___boxed(obj*);
obj* l_json_to__string(obj*);
obj* l_json__number_shiftl___main___boxed(obj*, obj*);
extern obj* l_sigma_has__repr___rarg___closed__1;
obj* l_json_get___boxed(obj*, obj*);
obj* l_json_to__nat___boxed(obj*);
namespace lean {
obj* nat_div(obj*, obj*);
}
extern obj* l_int_repr___main___closed__1;
obj* l_json__number_has__coe__int;
obj* l_json_to__bool___main(obj*);
obj* l_json_to__bool___boxed(obj*);
obj* l_json_to__string___main(obj*);
namespace lean {
uint8 string_dec_eq(obj*, obj*);
}
obj* l_nat_pow___main(obj*, obj*);
obj* l_json__number_to__string(obj*);
obj* l_json_to__arr___main(obj*);
obj* l_json__number_has__to__string;
obj* l_json__number_shiftl(obj*, obj*);
obj* l_list_lookup___main___at_json_get___main___spec__1___boxed(obj*, obj*);
obj* l_json__number_shiftr___main(obj*, obj*);
namespace lean {
obj* string_mk_iterator(obj*);
}
obj* l_json_to__arr(obj*);
obj* l_json_nth___main(obj*, obj*);
extern obj* l_int_repr___main___closed__2;
obj* l_json__number_to__string___main(obj*);
obj* l_json__number_shiftr(obj*, obj*);
obj* l_json_to__num___main(obj*);
obj* l_json__number_shiftr___boxed(obj*, obj*);
obj* l_nat_repr(obj*);
obj* l_json_get___main(obj*, obj*);
obj* l_json_get__or__null(obj*, obj*);
extern obj* l_sigma_has__repr___rarg___closed__2;
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_json__number_shiftr___main___boxed(obj*, obj*);
obj* l_json_to__int___main(obj*);
obj* l_json__number_has__repr___closed__1;
namespace lean {
obj* int_mul(obj*, obj*);
}
uint8 l_json__number_decidable__eq(obj*, obj*);
namespace lean {
uint8 int_dec_lt(obj*, obj*);
}
namespace lean {
uint8 int_dec_eq(obj*, obj*);
}
uint8 l_json__number_decidable__eq(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; uint8 x_6; 
x_2 = lean::cnstr_get(x_0, 0);
x_3 = lean::cnstr_get(x_0, 1);
x_4 = lean::cnstr_get(x_1, 0);
x_5 = lean::cnstr_get(x_1, 1);
x_6 = lean::int_dec_eq(x_2, x_4);
if (x_6 == 0)
{
uint8 x_7; 
x_7 = 0;
return x_7;
}
else
{
uint8 x_8; 
x_8 = lean::nat_dec_eq(x_3, x_5);
if (x_8 == 0)
{
uint8 x_9; 
x_9 = 0;
return x_9;
}
else
{
uint8 x_10; 
x_10 = 1;
return x_10;
}
}
}
}
obj* l_json__number_decidable__eq___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_json__number_decidable__eq(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* l_json__number_from__nat(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::nat2int(x_0);
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_json__number_from__int(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::mk_nat_obj(0u);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_json__number_has__coe() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_json__number_from__nat), 1, 0);
return x_0;
}
}
obj* _init_l_json__number_has__coe__int() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_json__number_from__int), 1, 0);
return x_0;
}
}
obj* _init_l_json__number_to__string___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string(".");
return x_0;
}
}
obj* l_json__number_to__string___main(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; uint8 x_4; 
x_1 = lean::cnstr_get(x_0, 0);
x_2 = lean::cnstr_get(x_0, 1);
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
obj* x_5; uint8 x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_16; obj* x_19; obj* x_21; obj* x_22; obj* x_23; 
x_5 = l_int_zero;
x_6 = lean::int_dec_le(x_5, x_1);
x_7 = lean::nat_abs(x_1);
x_8 = lean::mk_nat_obj(10u);
x_9 = l_nat_pow___main(x_8, x_2);
x_10 = lean::nat_div(x_7, x_9);
x_11 = l_nat_repr(x_10);
x_12 = lean::nat2int(x_9);
x_13 = lean::nat2int(x_7);
x_14 = lean::int_mod(x_13, x_12);
lean::dec(x_13);
x_16 = lean::int_add(x_12, x_14);
lean::dec(x_14);
lean::dec(x_12);
x_19 = l_int_repr___main(x_16);
lean::dec(x_16);
x_21 = lean::string_mk_iterator(x_19);
x_22 = lean::string_iterator_next(x_21);
x_23 = lean::string_iterator_remaining_to_string(x_22);
lean::dec(x_22);
if (x_6 == 0)
{
obj* x_25; obj* x_26; obj* x_28; obj* x_29; obj* x_30; 
x_25 = l_int_repr___main___closed__2;
x_26 = lean::string_append(x_25, x_11);
lean::dec(x_11);
x_28 = l_json__number_to__string___main___closed__1;
x_29 = lean::string_append(x_26, x_28);
x_30 = lean::string_append(x_29, x_23);
lean::dec(x_23);
return x_30;
}
else
{
obj* x_32; obj* x_33; obj* x_35; obj* x_36; obj* x_37; 
x_32 = l_string_join___closed__1;
x_33 = lean::string_append(x_32, x_11);
lean::dec(x_11);
x_35 = l_json__number_to__string___main___closed__1;
x_36 = lean::string_append(x_33, x_35);
x_37 = lean::string_append(x_36, x_23);
lean::dec(x_23);
return x_37;
}
}
else
{
obj* x_39; 
x_39 = l_int_repr___main(x_1);
return x_39;
}
}
}
obj* l_json__number_to__string___main___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json__number_to__string___main(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_json__number_to__string(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json__number_to__string___main(x_0);
return x_1;
}
}
obj* l_json__number_to__string___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json__number_to__string(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_json__number_shiftl___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_15; obj* x_17; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::nat_sub(x_1, x_4);
x_8 = lean::mk_nat_obj(10u);
x_9 = l_nat_pow___main(x_8, x_7);
lean::dec(x_7);
x_11 = lean::nat2int(x_9);
x_12 = lean::int_mul(x_2, x_11);
lean::dec(x_11);
lean::dec(x_2);
x_15 = lean::nat_sub(x_4, x_1);
lean::dec(x_4);
if (lean::is_scalar(x_6)) {
 x_17 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_17 = x_6;
}
lean::cnstr_set(x_17, 0, x_12);
lean::cnstr_set(x_17, 1, x_15);
return x_17;
}
}
obj* l_json__number_shiftl___main___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json__number_shiftl___main(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_json__number_shiftl(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json__number_shiftl___main(x_0, x_1);
return x_2;
}
}
obj* l_json__number_shiftl___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json__number_shiftl(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_json__number_shiftr___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::nat_add(x_4, x_1);
lean::dec(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_2);
lean::cnstr_set(x_9, 1, x_7);
return x_9;
}
}
obj* l_json__number_shiftr___main___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json__number_shiftr___main(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_json__number_shiftr(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json__number_shiftr___main(x_0, x_1);
return x_2;
}
}
obj* l_json__number_shiftr___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json__number_shiftr(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_json__number_has__to__string() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_json__number_to__string___boxed), 1, 0);
return x_0;
}
}
obj* _init_l_json__number_has__repr___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string(",");
return x_0;
}
}
obj* l_json__number_has__repr(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_16; obj* x_17; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_int_repr___main(x_1);
lean::dec(x_1);
x_8 = l_sigma_has__repr___rarg___closed__1;
x_9 = lean::string_append(x_8, x_6);
lean::dec(x_6);
x_11 = l_json__number_has__repr___closed__1;
x_12 = lean::string_append(x_9, x_11);
x_13 = l_nat_repr(x_3);
x_14 = lean::string_append(x_12, x_13);
lean::dec(x_13);
x_16 = l_sigma_has__repr___rarg___closed__2;
x_17 = lean::string_append(x_14, x_16);
return x_17;
}
}
obj* l_json_has__coe(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_json__number_from__nat(x_0);
x_2 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_json_has__coe__int(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::mk_nat_obj(0u);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* l_json_has__coe__str(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_json_has__coe__bool(uint8 x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::alloc_cnstr(1, 0, 1);
lean::cnstr_set_scalar(x_1, 0, x_0);
x_2 = x_1;
return x_2;
}
}
obj* l_json_has__coe__bool___boxed(obj* x_0) {
_start:
{
uint8 x_1; obj* x_2; 
x_1 = lean::unbox(x_0);
x_2 = l_json_has__coe__bool(x_1);
return x_2;
}
}
obj* l_json_to__obj___main(obj* x_0) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
case 5:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_2);
return x_5;
}
default:
{
obj* x_7; 
lean::dec(x_0);
x_7 = lean::box(0);
return x_7;
}
}
}
}
obj* l_json_to__obj(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json_to__obj___main(x_0);
return x_1;
}
}
obj* l_json_to__arr___main(obj* x_0) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
case 4:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_2);
return x_5;
}
default:
{
obj* x_7; 
lean::dec(x_0);
x_7 = lean::box(0);
return x_7;
}
}
}
}
obj* l_json_to__arr(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json_to__arr___main(x_0);
return x_1;
}
}
obj* l_json_to__string___main(obj* x_0) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
case 3:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_2);
return x_5;
}
default:
{
obj* x_7; 
lean::dec(x_0);
x_7 = lean::box(0);
return x_7;
}
}
}
}
obj* l_json_to__string(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json_to__string___main(x_0);
return x_1;
}
}
obj* l_json_to__nat___main(obj* x_0) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 2:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; uint8 x_5; 
x_1 = lean::cnstr_get(x_0, 0);
x_2 = lean::cnstr_get(x_1, 0);
x_3 = lean::cnstr_get(x_1, 1);
x_4 = l_int_repr___main___closed__1;
x_5 = lean::int_dec_lt(x_2, x_4);
if (x_5 == 0)
{
obj* x_6; uint8 x_7; 
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
obj* x_8; 
x_8 = lean::box(0);
return x_8;
}
else
{
obj* x_9; obj* x_10; 
x_9 = lean::nat_abs(x_2);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_9);
return x_10;
}
}
else
{
obj* x_11; 
x_11 = lean::box(0);
return x_11;
}
}
default:
{
obj* x_12; 
x_12 = lean::box(0);
return x_12;
}
}
}
}
obj* l_json_to__nat___main___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json_to__nat___main(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_json_to__nat(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json_to__nat___main(x_0);
return x_1;
}
}
obj* l_json_to__nat___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json_to__nat(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_json_to__int___main(obj* x_0) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
case 2:
{
obj* x_2; obj* x_5; obj* x_7; obj* x_10; uint8 x_11; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
lean::dec(x_2);
x_10 = lean::mk_nat_obj(0u);
x_11 = lean::nat_dec_eq(x_7, x_10);
lean::dec(x_7);
if (x_11 == 0)
{
obj* x_14; 
lean::dec(x_5);
x_14 = lean::box(0);
return x_14;
}
else
{
obj* x_15; 
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_5);
return x_15;
}
}
default:
{
obj* x_17; 
lean::dec(x_0);
x_17 = lean::box(0);
return x_17;
}
}
}
}
obj* l_json_to__int(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json_to__int___main(x_0);
return x_1;
}
}
obj* l_json_to__bool___main(obj* x_0) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 1:
{
uint8 x_1; obj* x_2; obj* x_3; 
x_1 = lean::cnstr_get_scalar<uint8>(x_0, 0);
x_2 = lean::box(x_1);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
default:
{
obj* x_4; 
x_4 = lean::box(0);
return x_4;
}
}
}
}
obj* l_json_to__bool___main___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json_to__bool___main(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_json_to__bool(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json_to__bool___main(x_0);
return x_1;
}
}
obj* l_json_to__bool___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json_to__bool(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_json_to__num___main(obj* x_0) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
case 2:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_2);
return x_5;
}
default:
{
obj* x_7; 
lean::dec(x_0);
x_7 = lean::box(0);
return x_7;
}
}
}
}
obj* l_json_to__num(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json_to__num___main(x_0);
return x_1;
}
}
obj* l_list_lookup___main___at_json_get___main___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_10; uint8 x_13; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
x_13 = lean::string_dec_eq(x_0, x_8);
lean::dec(x_8);
if (x_13 == 0)
{
lean::dec(x_10);
x_1 = x_5;
goto _start;
}
else
{
obj* x_18; 
lean::dec(x_5);
x_18 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_18, 0, x_10);
return x_18;
}
}
}
}
obj* l_json_get___main(obj* x_0, obj* x_1) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_2; 
x_2 = lean::box(0);
return x_2;
}
case 5:
{
obj* x_3; obj* x_6; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_list_lookup___main___at_json_get___main___spec__1(x_1, x_3);
return x_6;
}
default:
{
obj* x_8; 
lean::dec(x_0);
x_8 = lean::box(0);
return x_8;
}
}
}
}
obj* l_list_lookup___main___at_json_get___main___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_list_lookup___main___at_json_get___main___spec__1(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_json_get___main___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json_get___main(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_json_get(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json_get___main(x_0, x_1);
return x_2;
}
}
obj* l_json_get___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json_get(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_json_nth___main(obj* x_0, obj* x_1) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_3; 
lean::dec(x_1);
x_3 = lean::box(0);
return x_3;
}
case 4:
{
obj* x_4; obj* x_7; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
x_7 = l_list_nth___main___rarg(x_4, x_1);
return x_7;
}
default:
{
obj* x_10; 
lean::dec(x_1);
lean::dec(x_0);
x_10 = lean::box(0);
return x_10;
}
}
}
}
obj* l_json_nth(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json_nth___main(x_0, x_1);
return x_2;
}
}
obj* l_json_get__or__null(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
x_2 = l_json_get___main(x_0, x_1);
x_3 = lean::box(0);
x_4 = l_option_get__or__else___main___rarg(x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_json_get__or__null___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json_get__or__null(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
void initialize_init_data_string_default();
void initialize_init_data_int_default();
static bool _G_initialized = false;
void initialize_init_data_json_basic() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_data_string_default();
 initialize_init_data_int_default();
 l_json__number_has__coe = _init_l_json__number_has__coe();
lean::mark_persistent(l_json__number_has__coe);
 l_json__number_has__coe__int = _init_l_json__number_has__coe__int();
lean::mark_persistent(l_json__number_has__coe__int);
 l_json__number_to__string___main___closed__1 = _init_l_json__number_to__string___main___closed__1();
lean::mark_persistent(l_json__number_to__string___main___closed__1);
 l_json__number_has__to__string = _init_l_json__number_has__to__string();
lean::mark_persistent(l_json__number_has__to__string);
 l_json__number_has__repr___closed__1 = _init_l_json__number_has__repr___closed__1();
lean::mark_persistent(l_json__number_has__repr___closed__1);
}
