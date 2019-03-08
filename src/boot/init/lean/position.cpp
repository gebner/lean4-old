// Lean compiler output
// Module: init.lean.position
// Imports: init.data.nat.default init.data.rbmap.default init.lean.format
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
obj* l___private_init_lean_position_1__from__string__aux(obj*, obj*, obj*);
uint8 l_prod__has__decidable__lt___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_rbnode_find___main___at_lean_file__map_from__position___spec__6___boxed(obj*);
obj* l_lean_position_lean_has__to__format___closed__1;
obj* l_rbmap_of__list___main___at_lean_file__map_from__string___spec__1(obj*);
obj* l___private_init_lean_position_1__from__string__aux___main(obj*, obj*, obj*);
obj* l_lean_position_lt;
obj* l_lean_position_lean_has__to__format(obj*);
obj* l_rbmap__of___at_lean_file__map_from__position___spec__2(obj*);
namespace lean {
obj* string_iterator_next(obj*);
}
namespace lean {
obj* string_length(obj*);
}
obj* l_lean_position_has__lt;
obj* l_rbmap_to__list___main___rarg(obj*);
obj* l_lean_position_decidable__lt___boxed(obj*, obj*);
namespace lean {
uint32 string_iterator_curr(obj*);
}
obj* l_rbnode_lower__bound___main___at_lean_file__map_to__position___spec__2___boxed(obj*, obj*, obj*);
obj* l_lean_position_lean_has__to__format___closed__2;
obj* l_lean_file__map_from__position(obj*, obj*);
obj* l_rbmap_find___main___at_lean_file__map_from__position___spec__5___boxed(obj*, obj*);
obj* l_option_get__or__else___main___rarg(obj*, obj*);
uint8 l_lean_position_decidable__lt(obj*, obj*);
obj* l_lean_position_decidable__lt___main___boxed(obj*, obj*);
namespace lean {
uint8 string_iterator_has_next(obj*);
}
obj* l_rbmap_from__list___at_lean_file__map_from__position___spec__3(obj*);
obj* l_rbmap_insert___main___at_lean_file__map_from__string___spec__2(obj*, obj*, obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_lean_position_decidable__lt___main___closed__2;
obj* l_rbnode_find___main___at_lean_file__map_from__position___spec__6___rarg___boxed(obj*, obj*);
obj* l_nat_dec__eq___boxed(obj*, obj*);
obj* l_list_map___main___at_lean_file__map_from__position___spec__1(obj*);
obj* l_rbnode_balance2___main___rarg(obj*, obj*);
namespace lean {
obj* string_iterator_offset(obj*);
}
obj* l_lean_file__map_from__string(obj*);
obj* l_rbnode_find___main___at_lean_file__map_from__position___spec__6(obj*);
obj* l_lean_to__fmt___at_lean_position_lean_has__to__format___spec__1(obj*);
obj* l_rbnode_ins___main___at_lean_file__map_from__string___spec__4(obj*, obj*, obj*);
obj* l_lean_position_lean_has__to__format___closed__3;
obj* l_rbnode_lower__bound___main___at_lean_file__map_to__position___spec__2(obj*, obj*, obj*);
obj* l_rbnode_find___main___at_lean_file__map_from__position___spec__6___rarg(obj*, obj*);
obj* l_rbnode_insert___at_lean_file__map_from__string___spec__3(obj*, obj*, obj*);
namespace lean {
obj* string_mk_iterator(obj*);
}
obj* l_rbnode_balance1___main___rarg(obj*, obj*);
obj* l_lean_position_decidable__lt___main___closed__1;
obj* l_rbmap_lower__bound___main___at_lean_file__map_to__position___spec__1(obj*, obj*);
obj* l_nat_repr(obj*);
namespace lean {
uint32 uint32_of_nat(obj*);
}
uint8 l_lean_position_decidable__lt___main(obj*, obj*);
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_lean_file__map_to__position(obj*, obj*);
uint8 l_rbnode_is__red___main___rarg(obj*);
obj* l_lean_position_lt___main;
obj* l___private_init_lean_position_1__from__string__aux___main___boxed(obj*, obj*, obj*);
obj* l___private_init_lean_position_1__from__string__aux___boxed(obj*, obj*, obj*);
obj* l_lean_file__map_from__position___boxed(obj*, obj*);
obj* l_lean_position_inhabited;
obj* l_rbmap_lower__bound___main___at_lean_file__map_to__position___spec__1___boxed(obj*, obj*);
uint8 l_lean_position_decidable__eq(obj*, obj*);
obj* l_nat_dec__lt___boxed(obj*, obj*);
obj* l_list_foldl___main___at_lean_file__map_from__position___spec__4(obj*, obj*);
obj* l_lean_position_decidable__eq___boxed(obj*, obj*);
namespace lean {
uint8 nat_dec_lt(obj*, obj*);
}
obj* l_rbnode_set__black___main___rarg(obj*);
obj* l_rbmap_find___main___at_lean_file__map_from__position___spec__5(obj*, obj*);
uint8 l_lean_position_decidable__eq(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; uint8 x_6; 
x_2 = lean::cnstr_get(x_0, 0);
x_3 = lean::cnstr_get(x_0, 1);
x_4 = lean::cnstr_get(x_1, 0);
x_5 = lean::cnstr_get(x_1, 1);
x_6 = lean::nat_dec_eq(x_2, x_4);
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
obj* l_lean_position_decidable__eq___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_position_decidable__eq(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* _init_l_lean_position_lt___main() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_position_lt() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_position_has__lt() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_position_decidable__lt___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_nat_dec__eq___boxed), 2, 0);
return x_0;
}
}
obj* _init_l_lean_position_decidable__lt___main___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_nat_dec__lt___boxed), 2, 0);
return x_0;
}
}
uint8 l_lean_position_decidable__lt___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_12; obj* x_13; obj* x_14; obj* x_15; uint8 x_16; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_1, 1);
lean::inc(x_9);
lean::dec(x_1);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_2);
lean::cnstr_set(x_12, 1, x_4);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_7);
lean::cnstr_set(x_13, 1, x_9);
x_14 = l_lean_position_decidable__lt___main___closed__1;
x_15 = l_lean_position_decidable__lt___main___closed__2;
x_16 = l_prod__has__decidable__lt___rarg(x_14, x_14, x_15, x_15, x_12, x_13);
return x_16;
}
}
obj* l_lean_position_decidable__lt___main___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_position_decidable__lt___main(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l_lean_position_decidable__lt(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; 
x_2 = l_lean_position_decidable__lt___main(x_0, x_1);
return x_2;
}
}
obj* l_lean_position_decidable__lt___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_position_decidable__lt(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_lean_to__fmt___at_lean_position_lean_has__to__format___spec__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_nat_repr(x_0);
x_2 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_lean_position_lean_has__to__format___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("\xe2\x9f\xa8");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_position_lean_has__to__format___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string(", ");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_position_lean_has__to__format___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("\xe2\x9f\xa9");
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_position_lean_has__to__format(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; uint8 x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_lean_to__fmt___at_lean_position_lean_has__to__format___spec__1(x_1);
x_7 = 0;
x_8 = l_lean_position_lean_has__to__format___closed__1;
x_9 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_6);
lean::cnstr_set_scalar(x_9, sizeof(void*)*2, x_7);
x_10 = x_9;
x_11 = l_lean_position_lean_has__to__format___closed__2;
x_12 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_11);
lean::cnstr_set_scalar(x_12, sizeof(void*)*2, x_7);
x_13 = x_12;
x_14 = l_lean_to__fmt___at_lean_position_lean_has__to__format___spec__1(x_3);
x_15 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
lean::cnstr_set_scalar(x_15, sizeof(void*)*2, x_7);
x_16 = x_15;
x_17 = l_lean_position_lean_has__to__format___closed__3;
x_18 = lean::alloc_cnstr(4, 2, 1);
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_17);
lean::cnstr_set_scalar(x_18, sizeof(void*)*2, x_7);
x_19 = x_18;
return x_19;
}
}
obj* _init_l_lean_position_inhabited() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(1u);
x_1 = lean::mk_nat_obj(0u);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l___private_init_lean_position_1__from__string__aux___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_1);
if (x_5 == 0)
{
obj* x_8; 
lean::dec(x_1);
lean::dec(x_0);
x_8 = lean::box(0);
return x_8;
}
else
{
obj* x_9; obj* x_10; uint32 x_12; uint32 x_13; uint8 x_14; 
x_9 = lean::mk_nat_obj(1u);
x_10 = lean::nat_sub(x_0, x_9);
lean::dec(x_0);
x_12 = lean::string_iterator_curr(x_1);
x_13 = 10;
x_14 = x_12 == x_13;
if (x_14 == 0)
{
obj* x_15; 
x_15 = lean::string_iterator_next(x_1);
x_0 = x_10;
x_1 = x_15;
goto _start;
}
else
{
obj* x_17; obj* x_18; obj* x_19; obj* x_21; obj* x_22; obj* x_24; 
x_17 = lean::string_iterator_next(x_1);
x_18 = lean::string_iterator_offset(x_17);
x_19 = lean::nat_add(x_2, x_9);
lean::inc(x_19);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_18);
lean::cnstr_set(x_21, 1, x_19);
x_22 = l___private_init_lean_position_1__from__string__aux___main(x_10, x_17, x_19);
lean::dec(x_19);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_21);
lean::cnstr_set(x_24, 1, x_22);
return x_24;
}
}
}
else
{
obj* x_27; 
lean::dec(x_1);
lean::dec(x_0);
x_27 = lean::box(0);
return x_27;
}
}
}
obj* l___private_init_lean_position_1__from__string__aux___main___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l___private_init_lean_position_1__from__string__aux___main(x_0, x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l___private_init_lean_position_1__from__string__aux(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l___private_init_lean_position_1__from__string__aux___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l___private_init_lean_position_1__from__string__aux___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l___private_init_lean_position_1__from__string__aux(x_0, x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_rbnode_ins___main___at_lean_file__map_from__string___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_3; obj* x_4; obj* x_5; 
x_3 = 0;
x_4 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
lean::cnstr_set_scalar(x_4, sizeof(void*)*4, x_3);
x_5 = x_4;
return x_5;
}
else
{
uint8 x_6; 
x_6 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4);
if (x_6 == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
x_11 = lean::cnstr_get(x_0, 2);
x_13 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_15 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_0);
 x_15 = lean::box(0);
}
x_16 = lean::nat_dec_lt(x_1, x_9);
if (x_16 == 0)
{
uint8 x_17; 
x_17 = lean::nat_dec_lt(x_9, x_1);
if (x_17 == 0)
{
obj* x_20; obj* x_21; 
lean::dec(x_9);
lean::dec(x_11);
if (lean::is_scalar(x_15)) {
 x_20 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_20 = x_15;
}
lean::cnstr_set(x_20, 0, x_7);
lean::cnstr_set(x_20, 1, x_1);
lean::cnstr_set(x_20, 2, x_2);
lean::cnstr_set(x_20, 3, x_13);
lean::cnstr_set_scalar(x_20, sizeof(void*)*4, x_6);
x_21 = x_20;
return x_21;
}
else
{
obj* x_22; obj* x_23; obj* x_24; 
x_22 = l_rbnode_ins___main___at_lean_file__map_from__string___spec__4(x_13, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_23 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_23 = x_15;
}
lean::cnstr_set(x_23, 0, x_7);
lean::cnstr_set(x_23, 1, x_9);
lean::cnstr_set(x_23, 2, x_11);
lean::cnstr_set(x_23, 3, x_22);
lean::cnstr_set_scalar(x_23, sizeof(void*)*4, x_6);
x_24 = x_23;
return x_24;
}
}
else
{
obj* x_25; obj* x_26; obj* x_27; 
x_25 = l_rbnode_ins___main___at_lean_file__map_from__string___spec__4(x_7, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_26 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_26 = x_15;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_9);
lean::cnstr_set(x_26, 2, x_11);
lean::cnstr_set(x_26, 3, x_13);
lean::cnstr_set_scalar(x_26, sizeof(void*)*4, x_6);
x_27 = x_26;
return x_27;
}
}
else
{
obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; uint8 x_37; 
x_28 = lean::cnstr_get(x_0, 0);
x_30 = lean::cnstr_get(x_0, 1);
x_32 = lean::cnstr_get(x_0, 2);
x_34 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_36 = x_0;
} else {
 lean::inc(x_28);
 lean::inc(x_30);
 lean::inc(x_32);
 lean::inc(x_34);
 lean::dec(x_0);
 x_36 = lean::box(0);
}
x_37 = lean::nat_dec_lt(x_1, x_30);
if (x_37 == 0)
{
uint8 x_38; 
x_38 = lean::nat_dec_lt(x_30, x_1);
if (x_38 == 0)
{
obj* x_41; obj* x_42; 
lean::dec(x_30);
lean::dec(x_32);
if (lean::is_scalar(x_36)) {
 x_41 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_41 = x_36;
}
lean::cnstr_set(x_41, 0, x_28);
lean::cnstr_set(x_41, 1, x_1);
lean::cnstr_set(x_41, 2, x_2);
lean::cnstr_set(x_41, 3, x_34);
lean::cnstr_set_scalar(x_41, sizeof(void*)*4, x_6);
x_42 = x_41;
return x_42;
}
else
{
uint8 x_43; 
x_43 = l_rbnode_is__red___main___rarg(x_34);
if (x_43 == 0)
{
obj* x_44; obj* x_45; obj* x_46; 
x_44 = l_rbnode_ins___main___at_lean_file__map_from__string___spec__4(x_34, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_45 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_45 = x_36;
}
lean::cnstr_set(x_45, 0, x_28);
lean::cnstr_set(x_45, 1, x_30);
lean::cnstr_set(x_45, 2, x_32);
lean::cnstr_set(x_45, 3, x_44);
lean::cnstr_set_scalar(x_45, sizeof(void*)*4, x_6);
x_46 = x_45;
return x_46;
}
else
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_47 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_48 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_48 = x_36;
}
lean::cnstr_set(x_48, 0, x_28);
lean::cnstr_set(x_48, 1, x_30);
lean::cnstr_set(x_48, 2, x_32);
lean::cnstr_set(x_48, 3, x_47);
lean::cnstr_set_scalar(x_48, sizeof(void*)*4, x_6);
x_49 = x_48;
x_50 = l_rbnode_ins___main___at_lean_file__map_from__string___spec__4(x_34, x_1, x_2);
x_51 = l_rbnode_balance2___main___rarg(x_49, x_50);
return x_51;
}
}
}
else
{
uint8 x_52; 
x_52 = l_rbnode_is__red___main___rarg(x_28);
if (x_52 == 0)
{
obj* x_53; obj* x_54; obj* x_55; 
x_53 = l_rbnode_ins___main___at_lean_file__map_from__string___spec__4(x_28, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_54 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_54 = x_36;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_30);
lean::cnstr_set(x_54, 2, x_32);
lean::cnstr_set(x_54, 3, x_34);
lean::cnstr_set_scalar(x_54, sizeof(void*)*4, x_6);
x_55 = x_54;
return x_55;
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_56 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_57 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_57 = x_36;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_30);
lean::cnstr_set(x_57, 2, x_32);
lean::cnstr_set(x_57, 3, x_34);
lean::cnstr_set_scalar(x_57, sizeof(void*)*4, x_6);
x_58 = x_57;
x_59 = l_rbnode_ins___main___at_lean_file__map_from__string___spec__4(x_28, x_1, x_2);
x_60 = l_rbnode_balance1___main___rarg(x_58, x_59);
return x_60;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_file__map_from__string___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = l_rbnode_is__red___main___rarg(x_0);
if (x_3 == 0)
{
obj* x_4; 
x_4 = l_rbnode_ins___main___at_lean_file__map_from__string___spec__4(x_0, x_1, x_2);
return x_4;
}
else
{
obj* x_5; obj* x_6; 
x_5 = l_rbnode_ins___main___at_lean_file__map_from__string___spec__4(x_0, x_1, x_2);
x_6 = l_rbnode_set__black___main___rarg(x_5);
return x_6;
}
}
}
obj* l_rbmap_insert___main___at_lean_file__map_from__string___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_file__map_from__string___spec__3(x_0, x_1, x_2);
return x_3;
}
}
obj* l_rbmap_of__list___main___at_lean_file__map_from__string___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_12; obj* x_13; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::dec(x_2);
x_12 = l_rbmap_of__list___main___at_lean_file__map_from__string___spec__1(x_4);
x_13 = l_rbnode_insert___at_lean_file__map_from__string___spec__3(x_12, x_7, x_9);
return x_13;
}
}
}
obj* l_lean_file__map_from__string(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = lean::string_length(x_0);
x_2 = lean::string_mk_iterator(x_0);
x_3 = lean::mk_nat_obj(1u);
x_4 = l___private_init_lean_position_1__from__string__aux___main(x_1, x_2, x_3);
x_5 = l_rbmap_of__list___main___at_lean_file__map_from__string___spec__1(x_4);
return x_5;
}
}
obj* l_rbnode_lower__bound___main___at_lean_file__map_to__position___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; uint8 x_12; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 2);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 3);
lean::inc(x_9);
lean::dec(x_0);
x_12 = lean::nat_dec_lt(x_1, x_5);
if (x_12 == 0)
{
uint8 x_15; 
lean::dec(x_3);
lean::dec(x_2);
x_15 = lean::nat_dec_lt(x_5, x_1);
if (x_15 == 0)
{
obj* x_17; obj* x_18; 
lean::dec(x_9);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_5);
lean::cnstr_set(x_17, 1, x_7);
x_18 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_18, 0, x_17);
return x_18;
}
else
{
obj* x_19; obj* x_20; 
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_5);
lean::cnstr_set(x_19, 1, x_7);
x_20 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_20, 0, x_19);
x_0 = x_9;
x_2 = x_20;
goto _start;
}
}
else
{
lean::dec(x_7);
lean::dec(x_9);
lean::dec(x_5);
x_0 = x_3;
goto _start;
}
}
}
}
obj* l_rbmap_lower__bound___main___at_lean_file__map_to__position___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::box(0);
x_3 = l_rbnode_lower__bound___main___at_lean_file__map_to__position___spec__2(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_file__map_to__position(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap_lower__bound___main___at_lean_file__map_to__position___spec__1(x_0, x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(1u);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_1);
return x_4;
}
else
{
obj* x_5; obj* x_8; obj* x_10; obj* x_13; obj* x_16; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_5, 1);
lean::inc(x_10);
lean::dec(x_5);
x_13 = lean::nat_sub(x_1, x_8);
lean::dec(x_8);
lean::dec(x_1);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_10);
lean::cnstr_set(x_16, 1, x_13);
return x_16;
}
}
}
obj* l_rbnode_lower__bound___main___at_lean_file__map_to__position___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_lower__bound___main___at_lean_file__map_to__position___spec__2(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_rbmap_lower__bound___main___at_lean_file__map_to__position___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap_lower__bound___main___at_lean_file__map_to__position___spec__1(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_list_map___main___at_lean_file__map_from__position___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
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
x_7 = lean::cnstr_get(x_2, 0);
x_9 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 x_11 = x_2;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_2);
 x_11 = lean::box(0);
}
x_12 = l_list_map___main___at_lean_file__map_from__position___spec__1(x_4);
if (lean::is_scalar(x_11)) {
 x_13 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_13 = x_11;
}
lean::cnstr_set(x_13, 0, x_9);
lean::cnstr_set(x_13, 1, x_7);
if (lean::is_scalar(x_6)) {
 x_14 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_14 = x_6;
}
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_12);
return x_14;
}
}
}
obj* l_list_foldl___main___at_lean_file__map_from__position___spec__4(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_12; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::dec(x_2);
x_12 = l_rbnode_insert___at_lean_file__map_from__string___spec__3(x_0, x_7, x_9);
x_0 = x_12;
x_1 = x_4;
goto _start;
}
}
}
obj* l_rbmap_from__list___at_lean_file__map_from__position___spec__3(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_rbmap_to__list___main___rarg(x_0);
x_2 = l_list_map___main___at_lean_file__map_from__position___spec__1(x_1);
x_3 = lean::box(0);
x_4 = l_list_foldl___main___at_lean_file__map_from__position___spec__4(x_3, x_2);
return x_4;
}
}
obj* l_rbmap__of___at_lean_file__map_from__position___spec__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_rbmap_from__list___at_lean_file__map_from__position___spec__3(x_0);
return x_1;
}
}
obj* l_rbnode_find___main___at_lean_file__map_from__position___spec__6___rarg(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; uint8 x_12; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 2);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 3);
lean::inc(x_9);
lean::dec(x_0);
x_12 = lean::nat_dec_lt(x_1, x_5);
if (x_12 == 0)
{
uint8 x_14; 
lean::dec(x_3);
x_14 = lean::nat_dec_lt(x_5, x_1);
lean::dec(x_5);
if (x_14 == 0)
{
obj* x_17; 
lean::dec(x_9);
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_7);
return x_17;
}
else
{
lean::dec(x_7);
x_0 = x_9;
goto _start;
}
}
else
{
lean::dec(x_7);
lean::dec(x_9);
lean::dec(x_5);
x_0 = x_3;
goto _start;
}
}
}
}
obj* l_rbnode_find___main___at_lean_file__map_from__position___spec__6(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_find___main___at_lean_file__map_from__position___spec__6___rarg___boxed), 2, 0);
return x_1;
}
}
obj* l_rbmap_find___main___at_lean_file__map_from__position___spec__5(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_file__map_from__position___spec__6___rarg(x_0, x_1);
return x_2;
}
}
obj* l_lean_file__map_from__position(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_9; 
x_2 = l_rbmap_from__list___at_lean_file__map_from__position___spec__3(x_0);
x_3 = lean::cnstr_get(x_1, 0);
x_4 = l_rbnode_find___main___at_lean_file__map_from__position___spec__6___rarg(x_2, x_3);
x_5 = lean::mk_nat_obj(0u);
x_6 = l_option_get__or__else___main___rarg(x_4, x_5);
lean::dec(x_4);
x_8 = lean::cnstr_get(x_1, 1);
x_9 = lean::nat_add(x_6, x_8);
lean::dec(x_6);
return x_9;
}
}
obj* l_rbnode_find___main___at_lean_file__map_from__position___spec__6___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_file__map_from__position___spec__6___rarg(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_rbnode_find___main___at_lean_file__map_from__position___spec__6___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_rbnode_find___main___at_lean_file__map_from__position___spec__6(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_rbmap_find___main___at_lean_file__map_from__position___spec__5___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap_find___main___at_lean_file__map_from__position___spec__5(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_file__map_from__position___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_file__map_from__position(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
void initialize_init_data_nat_default();
void initialize_init_data_rbmap_default();
void initialize_init_lean_format();
static bool _G_initialized = false;
void initialize_init_lean_position() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_data_nat_default();
 initialize_init_data_rbmap_default();
 initialize_init_lean_format();
 l_lean_position_lt___main = _init_l_lean_position_lt___main();
lean::mark_persistent(l_lean_position_lt___main);
 l_lean_position_lt = _init_l_lean_position_lt();
lean::mark_persistent(l_lean_position_lt);
 l_lean_position_has__lt = _init_l_lean_position_has__lt();
lean::mark_persistent(l_lean_position_has__lt);
 l_lean_position_decidable__lt___main___closed__1 = _init_l_lean_position_decidable__lt___main___closed__1();
lean::mark_persistent(l_lean_position_decidable__lt___main___closed__1);
 l_lean_position_decidable__lt___main___closed__2 = _init_l_lean_position_decidable__lt___main___closed__2();
lean::mark_persistent(l_lean_position_decidable__lt___main___closed__2);
 l_lean_position_lean_has__to__format___closed__1 = _init_l_lean_position_lean_has__to__format___closed__1();
lean::mark_persistent(l_lean_position_lean_has__to__format___closed__1);
 l_lean_position_lean_has__to__format___closed__2 = _init_l_lean_position_lean_has__to__format___closed__2();
lean::mark_persistent(l_lean_position_lean_has__to__format___closed__2);
 l_lean_position_lean_has__to__format___closed__3 = _init_l_lean_position_lean_has__to__format___closed__3();
lean::mark_persistent(l_lean_position_lean_has__to__format___closed__3);
 l_lean_position_inhabited = _init_l_lean_position_inhabited();
lean::mark_persistent(l_lean_position_inhabited);
}
