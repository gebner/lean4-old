// Lean compiler output
// Module: init.data.json.from_to_json
// Imports: init.data.json.basic init.control.combinators
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
obj* l_bool_has__to__json(uint8);
obj* l_list_map___main___rarg(obj*, obj*);
obj* l_int_has__from__json;
obj* l_list_has__from__json___boxed(obj*);
obj* l_list_mmap___main___at_list_has__from__json___spec__1(obj*);
obj* l_list_mmap___main___at_list_has__from__json___spec__1___boxed(obj*);
obj* l_list_mmap___main___at_list_has__from__json___spec__1___rarg(obj*, obj*);
obj* l_list_has__to__json___rarg(obj*, obj*);
obj* l_id___rarg___boxed(obj*);
obj* l_list_has__from__json___rarg(obj*, obj*);
obj* l_nat_has__to__json(obj*);
obj* l_json_get_x_27___boxed(obj*);
obj* l_json_to__int(obj*);
obj* l_json_get_x_27___rarg(obj*, obj*, obj*);
obj* l_json_to__num(obj*);
obj* l_json__number_has__from__json;
obj* l_json__number_from__nat(obj*);
obj* l_list_has__to__json(obj*);
obj* l_string_has__from__json;
obj* l_json_to__string(obj*);
obj* l_json_get__as(obj*, obj*, obj*, obj*);
obj* l_json_get_x_27___rarg___boxed(obj*, obj*, obj*);
obj* l_json_to__nat___boxed(obj*);
obj* l_json_has__from__json(obj*);
obj* l_json_get_x_27(obj*);
obj* l_json_has__to__json;
obj* l_list_has__from__json(obj*);
obj* l_bool_has__to__json___boxed(obj*);
obj* l_list_mmap___main___at_list_has__from__json___spec__1___rarg___closed__1;
obj* l_string_has__to__json(obj*);
obj* l_json_get__as___boxed(obj*, obj*, obj*, obj*);
obj* l_list_has__to__json___boxed(obj*);
obj* l_json_get___main(obj*, obj*);
obj* l_json__number_has__to__json(obj*);
obj* l_int_has__to__json(obj*);
obj* l_nat_has__from__json;
obj* l_json_has__from__json(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_json_has__to__json() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_id___rarg___boxed), 1, 0);
return x_0;
}
}
obj* _init_l_json__number_has__from__json() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_json_to__num), 1, 0);
return x_0;
}
}
obj* l_json__number_has__to__json(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_bool_has__to__json(uint8 x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::alloc_cnstr(1, 0, 1);
lean::cnstr_set_scalar(x_1, 0, x_0);
x_2 = x_1;
return x_2;
}
}
obj* l_bool_has__to__json___boxed(obj* x_0) {
_start:
{
uint8 x_1; obj* x_2; 
x_1 = lean::unbox(x_0);
x_2 = l_bool_has__to__json(x_1);
return x_2;
}
}
obj* l_nat_has__to__json(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_json__number_from__nat(x_0);
x_2 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_int_has__to__json(obj* x_0) {
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
obj* l_string_has__to__json(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_list_mmap___main___at_list_has__from__json___spec__1___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_list_mmap___main___at_list_has__from__json___spec__1___rarg(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = l_list_mmap___main___at_list_has__from__json___spec__1___rarg___closed__1;
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_10; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
lean::inc(x_0);
x_10 = lean::apply_1(x_0, x_4);
if (lean::obj_tag(x_10) == 0)
{
obj* x_14; 
lean::dec(x_8);
lean::dec(x_6);
lean::dec(x_0);
x_14 = lean::box(0);
return x_14;
}
else
{
obj* x_15; obj* x_18; 
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
x_18 = l_list_mmap___main___at_list_has__from__json___spec__1___rarg(x_0, x_6);
if (lean::obj_tag(x_18) == 0)
{
obj* x_21; 
lean::dec(x_15);
lean::dec(x_8);
x_21 = lean::box(0);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_26; 
x_22 = lean::cnstr_get(x_18, 0);
if (lean::is_exclusive(x_18)) {
 x_24 = x_18;
} else {
 lean::inc(x_22);
 lean::dec(x_18);
 x_24 = lean::box(0);
}
if (lean::is_scalar(x_8)) {
 x_25 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_25 = x_8;
}
lean::cnstr_set(x_25, 0, x_15);
lean::cnstr_set(x_25, 1, x_22);
if (lean::is_scalar(x_24)) {
 x_26 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_26 = x_24;
}
lean::cnstr_set(x_26, 0, x_25);
return x_26;
}
}
}
}
}
obj* l_list_mmap___main___at_list_has__from__json___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mmap___main___at_list_has__from__json___spec__1___rarg), 2, 0);
return x_1;
}
}
obj* l_list_has__from__json___rarg(obj* x_0, obj* x_1) {
_start:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
case 4:
{
obj* x_4; obj* x_7; 
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_list_mmap___main___at_list_has__from__json___spec__1___rarg(x_0, x_4);
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
obj* l_list_has__from__json(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_list_has__from__json___rarg), 2, 0);
return x_1;
}
}
obj* l_list_mmap___main___at_list_has__from__json___spec__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_list_mmap___main___at_list_has__from__json___spec__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_list_has__from__json___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_list_has__from__json(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_list_has__to__json___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = l_list_map___main___rarg(x_0, x_1);
x_3 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* l_list_has__to__json(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_list_has__to__json___rarg), 2, 0);
return x_1;
}
}
obj* l_list_has__to__json___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_list_has__to__json(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_nat_has__from__json() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_json_to__nat___boxed), 1, 0);
return x_0;
}
}
obj* _init_l_int_has__from__json() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_json_to__int), 1, 0);
return x_0;
}
}
obj* _init_l_string_has__from__json() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_json_to__string), 1, 0);
return x_0;
}
}
obj* l_json_get_x_27___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_json_get___main(x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_5; 
lean::dec(x_0);
x_5 = lean::box(0);
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::apply_1(x_0, x_6);
return x_9;
}
}
}
obj* l_json_get_x_27(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_json_get_x_27___rarg___boxed), 3, 0);
return x_1;
}
}
obj* l_json_get_x_27___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_json_get_x_27___rarg(x_0, x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_json_get_x_27___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json_get_x_27(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_json_get__as(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_json_get_x_27___rarg(x_2, x_0, x_3);
return x_4;
}
}
obj* l_json_get__as___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_json_get__as(x_0, x_1, x_2, x_3);
lean::dec(x_1);
lean::dec(x_3);
return x_4;
}
}
void initialize_init_data_json_basic();
void initialize_init_control_combinators();
static bool _G_initialized = false;
void initialize_init_data_json_from__to__json() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_data_json_basic();
 initialize_init_control_combinators();
 l_json_has__to__json = _init_l_json_has__to__json();
lean::mark_persistent(l_json_has__to__json);
 l_json__number_has__from__json = _init_l_json__number_has__from__json();
lean::mark_persistent(l_json__number_has__from__json);
 l_list_mmap___main___at_list_has__from__json___spec__1___rarg___closed__1 = _init_l_list_mmap___main___at_list_has__from__json___spec__1___rarg___closed__1();
lean::mark_persistent(l_list_mmap___main___at_list_has__from__json___spec__1___rarg___closed__1);
 l_nat_has__from__json = _init_l_nat_has__from__json();
lean::mark_persistent(l_nat_has__from__json);
 l_int_has__from__json = _init_l_int_has__from__json();
lean::mark_persistent(l_int_has__from__json);
 l_string_has__from__json = _init_l_string_has__from__json();
lean::mark_persistent(l_string_has__from__json);
}
