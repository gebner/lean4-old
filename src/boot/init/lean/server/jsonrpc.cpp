// Lean compiler output
// Module: init.lean.server.jsonrpc
// Imports: init.lean.parser.parsec init.data.json.default init.io
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
obj* l_io_print___at_jsonrpc_write__msg___spec__5___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_write__msg(obj*, obj*);
obj* l_io_print___at_jsonrpc_write__msg__raw___spec__1(obj*, obj*);
obj* l_jsonrpc_read__msg__raw___boxed(obj*, obj*);
obj* l_jsonrpc_mk__msg__raw___closed__1;
obj* l_jsonrpc_request__id_has__from__json(obj*);
obj* l_jsonrpc_read__header___main___rarg___lambda__2___closed__1;
obj* l_json_pretty(obj*, obj*);
obj* l_io_print___at_jsonrpc_write__msg___spec__11___boxed(obj*, obj*);
obj* l_jsonrpc_read__msg___boxed(obj*, obj*);
obj* l_io_print___at_jsonrpc_write__msg__raw___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__4(obj*, obj*);
obj* l_io_prim_lift__eio___rarg___lambda__1(obj*, obj*, obj*, obj*);
extern obj* l_json_render___main___rarg___closed__4;
obj* l_jsonrpc_write__msg___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_json_no__whitespace__formattable;
obj* l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__1___boxed(obj*, obj*);
obj* l_json_parse(obj*);
obj* l_jsonrpc_read__header___main___rarg___lambda__3___closed__1;
obj* l_jsonrpc_message_has__to__json___closed__9;
obj* l_jsonrpc_message_has__from__json___closed__3;
obj* l_io_get__bytes___at_jsonrpc_read__msg__raw___spec__2(obj*, obj*);
obj* l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__3(obj*, obj*);
obj* l_io_print___at_jsonrpc_write__msg___spec__8___boxed(obj*, obj*);
obj* l_jsonrpc_read__header___main___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_mk__msg__raw(obj*);
obj* l_list_lookup___main___at_jsonrpc_read__msg__raw___spec__1___boxed(obj*, obj*);
obj* l_jsonrpc_message_has__to__json___closed__3;
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__12(obj*, obj*);
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__10___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_write__msg__raw___boxed(obj*, obj*);
obj* l_jsonrpc_message_has__from__json___closed__1;
obj* l_io_get__line___at_jsonrpc_read__header___main___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__6___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_read__header___main___rarg___lambda__5___closed__1;
obj* l_jsonrpc_read__msg___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__7(obj*, obj*);
obj* l_jsonrpc_message_has__to__json___closed__7;
namespace lean {
obj* string_iterator_next(obj*);
}
obj* l___private_init_lean_server_jsonrpc_1__mk__field(obj*);
obj* l_jsonrpc_read__msg__raw___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_server_jsonrpc_1__mk__field___boxed(obj*);
obj* l_io_print___at_jsonrpc_write__msg___spec__8(obj*, obj*);
obj* l_jsonrpc_read__msg___rarg___lambda__1___closed__1;
obj* l_jsonrpc_read__header___main___rarg___lambda__4(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_option_orelse___main___rarg(obj*, obj*);
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__9___boxed(obj*, obj*);
namespace lean {
obj* string_append(obj*, obj*);
}
obj* l_jsonrpc_write__msg___boxed(obj*, obj*);
obj* l_io_get__bytes___at_jsonrpc_read__msg__raw___spec__2___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__6(obj*, obj*);
obj* l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__1(obj*, obj*);
obj* l_jsonrpc_read__header___main___rarg___lambda__5(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_read__msg(obj*, obj*);
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg__raw___spec__2(obj*, obj*);
obj* l_string_utf8__length(obj*);
obj* l_io_prim_put__str___boxed(obj*, obj*);
obj* l_io_print___at_jsonrpc_write__msg___spec__2___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_read__header___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
namespace lean {
obj* string_iterator_to_end(obj*);
}
obj* l_jsonrpc_message_has__from__json___closed__2;
namespace lean {
obj* string_iterator_extract(obj*, obj*);
}
obj* l_jsonrpc_read__header___main___rarg___lambda__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_write__msg___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_io_print___at_jsonrpc_write__msg___spec__11___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_list_lookup___main___at_jsonrpc_read__msg__raw___spec__1(obj*, obj*);
obj* l_jsonrpc_message_has__to__json___closed__8;
obj* l_jsonrpc_read__header___main___rarg___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__1(obj*, obj*);
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__4___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_list_repr___main___rarg___closed__3;
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_jsonrpc_mk__msg__raw___closed__3;
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__10___boxed(obj*, obj*);
obj* l_jsonrpc_message_has__to__json___closed__4;
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__9___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__7___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_io_print___at_jsonrpc_write__msg___spec__11(obj*, obj*);
obj* l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__2(obj*, obj*);
obj* l_json_render__elems___main___at_jsonrpc_mk__msg__raw___spec__2(obj*, obj*);
obj* l_jsonrpc_message_has__to__json___closed__6;
obj* l_jsonrpc_write__msg__raw___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_string_join___closed__1;
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__12___boxed(obj*, obj*);
extern obj* l_json_parser_any__core___main___closed__1;
obj* l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__4(obj*, obj*);
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__7___boxed(obj*, obj*);
obj* l_jsonrpc_read__header___main___rarg___lambda__1(obj*, obj*, obj*, obj*);
extern obj* l_json_parser_any__core___main___closed__3;
extern obj* l_io_get__line___rarg___closed__1;
obj* l_jsonrpc_mk__msg__raw___closed__2;
obj* l_jsonrpc_read__header___boxed(obj*, obj*);
namespace lean {
obj* string_iterator_prev(obj*);
}
obj* l_io_print___at_jsonrpc_write__msg___spec__8___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_io_print___at_jsonrpc_write__msg__raw___spec__1___boxed(obj*, obj*);
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__1___boxed(obj*, obj*);
obj* l_io_prim_get__bytes___boxed(obj*, obj*);
obj* l_jsonrpc_message_has__to__json___closed__5;
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__3___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_read__msg___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_read__msg__raw___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_jsonrpc_message_has__from__json(obj*);
obj* l_json_render___main___at_jsonrpc_mk__msg__raw___spec__1(obj*, obj*);
obj* l_jsonrpc_read__header___main___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_list_repr___main___rarg___closed__2;
obj* l_io_print___at_jsonrpc_write__msg___spec__5(obj*, obj*);
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__1(obj*, obj*);
obj* l_jsonrpc_read__msg__raw___rarg___lambda__3___closed__1;
obj* l_io_print___at_jsonrpc_write__msg___spec__5___boxed(obj*, obj*);
extern obj* l_json_render__elems___main___at_json_dump___spec__2___closed__2;
obj* l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__3___boxed(obj*, obj*);
extern obj* l_json_parser_any__core___main___closed__6;
obj* l_jsonrpc_message_has__to__json(obj*);
obj* l_json_to__string___main(obj*);
namespace lean {
uint8 string_dec_eq(obj*, obj*);
}
obj* l_jsonrpc_read__header___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_request__id_has__from__json___closed__1;
obj* l_io_print___at_jsonrpc_write__msg___spec__2(obj*, obj*);
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__7___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg__raw___spec__2___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__9(obj*, obj*);
namespace lean {
obj* string_mk_iterator(obj*);
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__10(obj*, obj*);
obj* l_jsonrpc_message_has__to__json___closed__2;
extern obj* l_json_render___main___rarg___closed__5;
obj* l_io_get__line___at_jsonrpc_read__header___main___spec__1___boxed(obj*, obj*);
obj* l_jsonrpc_read__msg__raw___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_json__number_to__string___main(obj*);
obj* l_jsonrpc_message_has__to__json___closed__1;
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__3(obj*, obj*);
obj* l_jsonrpc_read__header___main___rarg___closed__1;
obj* l_io_get__bytes___at_jsonrpc_read__msg__raw___spec__2___boxed(obj*, obj*);
obj* l_jsonrpc_read__header___main(obj*, obj*);
obj* l_json_to__num___main(obj*);
obj* l_jsonrpc_read__msg___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_nat_repr(obj*);
obj* l_json_get___main(obj*, obj*);
namespace lean {
uint32 uint32_of_nat(obj*);
}
obj* l_jsonrpc_request__id_has__to__json(obj*);
obj* l_json_get__or__null(obj*, obj*);
obj* l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(obj*, obj*);
obj* l_jsonrpc_read__msg__raw___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_read__msg__raw(obj*, obj*);
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__6___boxed(obj*, obj*);
obj* l_jsonrpc_read__msg___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*);
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_jsonrpc_read__header___main___rarg___lambda__4___closed__1;
obj* l_io_get__line___at_jsonrpc_read__header___main___spec__1(obj*, obj*);
obj* l_jsonrpc_read__header___main___boxed(obj*, obj*);
extern obj* l_json_render__kv___main___at_json_dump___spec__4___closed__1;
obj* l_jsonrpc_read__header___main___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2___boxed(obj*, obj*);
extern obj* l_lean_parser_monad__parsec_num___rarg___closed__1;
obj* l_jsonrpc_write__msg__raw___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_option_map___rarg(obj*, obj*);
extern obj* l_json_render__elems___main___at_json_dump___spec__2___closed__1;
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__4___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_read__msg__raw___rarg___lambda__3(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_json_render__kv___main___at_jsonrpc_mk__msg__raw___spec__4(obj*, obj*);
obj* l_json_render__string(obj*, obj*);
obj* l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__3(obj*, obj*);
obj* l_io_print___at_jsonrpc_write__msg___spec__2___boxed(obj*, obj*);
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__3___boxed(obj*, obj*);
obj* l___private_init_lean_server_jsonrpc_1__mk__field___rarg(obj*, obj*, obj*);
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg__raw___spec__2___boxed(obj*, obj*);
obj* l_string_find(uint32, obj*);
obj* l_jsonrpc_read__msg__raw___rarg___lambda__2___closed__1;
obj* l_jsonrpc_write__msg__raw(obj*, obj*);
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__12___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__4___boxed(obj*, obj*);
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__10___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_json_render__kvs___main___at_jsonrpc_mk__msg__raw___spec__3(obj*, obj*);
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_jsonrpc_read__header(obj*, obj*);
obj* l_io_get__line___at_jsonrpc_read__header___main___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
x_6 = l_io_get__line___rarg___closed__1;
x_7 = lean::apply_2(x_0, lean::box(0), x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_io_prim_lift__eio___rarg___lambda__1), 4, 3);
lean::closure_set(x_8, 0, x_1);
lean::closure_set(x_8, 1, x_2);
lean::closure_set(x_8, 2, x_3);
x_9 = lean::apply_4(x_4, lean::box(0), lean::box(0), x_7, x_8);
return x_9;
}
}
obj* l_io_get__line___at_jsonrpc_read__header___main___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_io_get__line___at_jsonrpc_read__header___main___spec__1___rarg), 4, 0);
return x_2;
}
}
obj* l_jsonrpc_read__header___main___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::apply_2(x_2, lean::box(0), x_5);
return x_6;
}
}
obj* _init_l_jsonrpc_read__header___main___rarg___lambda__2___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid value: ");
return x_0;
}
}
obj* l_jsonrpc_read__header___main___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_15; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
lean::dec(x_8);
lean::dec(x_7);
lean::dec(x_4);
lean::dec(x_6);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_0, 0);
lean::inc(x_15);
lean::dec(x_0);
x_18 = l_jsonrpc_read__header___main___rarg___lambda__2___closed__1;
x_19 = lean::string_append(x_18, x_1);
x_20 = lean::apply_1(x_2, x_19);
x_21 = lean::apply_2(x_15, lean::box(0), x_20);
return x_21;
}
else
{
obj* x_22; obj* x_25; obj* x_26; obj* x_27; 
x_22 = lean::cnstr_get(x_9, 0);
lean::inc(x_22);
lean::dec(x_9);
x_25 = l_jsonrpc_read__header___main___rarg(x_3, x_0, x_2, x_4, x_5);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__header___main___rarg___lambda__1), 4, 3);
lean::closure_set(x_26, 0, x_6);
lean::closure_set(x_26, 1, x_22);
lean::closure_set(x_26, 2, x_7);
x_27 = lean::apply_4(x_8, lean::box(0), lean::box(0), x_25, x_26);
return x_27;
}
}
}
obj* _init_l_jsonrpc_read__header___main___rarg___lambda__3___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("no key before `:`: `");
return x_0;
}
}
obj* l_jsonrpc_read__header___main___rarg___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10) {
_start:
{
if (lean::obj_tag(x_10) == 0)
{
obj* x_18; obj* x_21; obj* x_22; obj* x_24; obj* x_25; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_8);
lean::dec(x_7);
lean::dec(x_4);
lean::dec(x_6);
lean::dec(x_3);
x_18 = lean::cnstr_get(x_0, 0);
lean::inc(x_18);
lean::dec(x_0);
x_21 = l_jsonrpc_read__header___main___rarg___lambda__3___closed__1;
x_22 = lean::string_append(x_21, x_1);
lean::dec(x_1);
x_24 = lean::apply_1(x_2, x_22);
x_25 = lean::apply_2(x_18, lean::box(0), x_24);
return x_25;
}
else
{
obj* x_26; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_36; obj* x_38; obj* x_39; 
x_26 = lean::cnstr_get(x_10, 0);
lean::inc(x_26);
lean::dec(x_10);
x_29 = lean::string_iterator_next(x_3);
x_30 = lean::string_iterator_to_end(x_4);
x_31 = lean::string_iterator_prev(x_30);
x_32 = lean::string_iterator_extract(x_29, x_31);
lean::dec(x_31);
lean::dec(x_29);
lean::inc(x_5);
x_36 = lean::apply_2(x_5, lean::box(0), x_32);
lean::inc(x_9);
x_38 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__header___main___rarg___lambda__2___boxed), 10, 9);
lean::closure_set(x_38, 0, x_0);
lean::closure_set(x_38, 1, x_1);
lean::closure_set(x_38, 2, x_2);
lean::closure_set(x_38, 3, x_6);
lean::closure_set(x_38, 4, x_7);
lean::closure_set(x_38, 5, x_8);
lean::closure_set(x_38, 6, x_26);
lean::closure_set(x_38, 7, x_5);
lean::closure_set(x_38, 8, x_9);
x_39 = lean::apply_4(x_9, lean::box(0), lean::box(0), x_36, x_38);
return x_39;
}
}
}
obj* _init_l_jsonrpc_read__header___main___rarg___lambda__4___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("no `:` found in header: ");
return x_0;
}
}
obj* l_jsonrpc_read__header___main___rarg___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_14; obj* x_17; obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_5);
lean::dec(x_7);
lean::dec(x_4);
lean::dec(x_6);
lean::dec(x_3);
x_14 = lean::cnstr_get(x_0, 0);
lean::inc(x_14);
lean::dec(x_0);
x_17 = l_jsonrpc_read__header___main___rarg___lambda__4___closed__1;
x_18 = lean::string_append(x_17, x_1);
lean::dec(x_1);
x_20 = lean::apply_1(x_2, x_18);
x_21 = lean::apply_2(x_14, lean::box(0), x_20);
return x_21;
}
else
{
obj* x_22; obj* x_26; obj* x_27; obj* x_29; obj* x_31; obj* x_32; 
x_22 = lean::cnstr_get(x_8, 0);
lean::inc(x_22);
lean::dec(x_8);
lean::inc(x_1);
x_26 = lean::string_mk_iterator(x_1);
x_27 = lean::string_iterator_extract(x_26, x_22);
lean::inc(x_3);
x_29 = lean::apply_2(x_3, lean::box(0), x_27);
lean::inc(x_7);
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__header___main___rarg___lambda__3), 11, 10);
lean::closure_set(x_31, 0, x_0);
lean::closure_set(x_31, 1, x_1);
lean::closure_set(x_31, 2, x_2);
lean::closure_set(x_31, 3, x_22);
lean::closure_set(x_31, 4, x_26);
lean::closure_set(x_31, 5, x_3);
lean::closure_set(x_31, 6, x_4);
lean::closure_set(x_31, 7, x_5);
lean::closure_set(x_31, 8, x_6);
lean::closure_set(x_31, 9, x_7);
x_32 = lean::apply_4(x_7, lean::box(0), lean::box(0), x_29, x_31);
return x_32;
}
}
}
obj* _init_l_jsonrpc_read__header___main___rarg___lambda__5___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("\x0d");
return x_0;
}
}
obj* l_jsonrpc_read__header___main___rarg___lambda__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; uint8 x_8; 
x_7 = l_jsonrpc_read__header___main___rarg___lambda__5___closed__1;
x_8 = lean::string_dec_eq(x_6, x_7);
if (x_8 == 0)
{
obj* x_9; obj* x_11; uint32 x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_21; 
x_9 = lean::cnstr_get(x_0, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 1);
lean::inc(x_11);
lean::dec(x_9);
x_14 = 58;
lean::inc(x_6);
x_16 = l_string_find(x_14, x_6);
lean::inc(x_11);
x_18 = lean::apply_2(x_11, lean::box(0), x_16);
lean::inc(x_5);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__header___main___rarg___lambda__4), 9, 8);
lean::closure_set(x_20, 0, x_1);
lean::closure_set(x_20, 1, x_6);
lean::closure_set(x_20, 2, x_2);
lean::closure_set(x_20, 3, x_11);
lean::closure_set(x_20, 4, x_3);
lean::closure_set(x_20, 5, x_0);
lean::closure_set(x_20, 6, x_4);
lean::closure_set(x_20, 7, x_5);
x_21 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_18, x_20);
return x_21;
}
else
{
obj* x_28; obj* x_31; obj* x_34; obj* x_35; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_6);
lean::dec(x_3);
lean::dec(x_2);
x_28 = lean::cnstr_get(x_0, 0);
lean::inc(x_28);
lean::dec(x_0);
x_31 = lean::cnstr_get(x_28, 1);
lean::inc(x_31);
lean::dec(x_28);
x_34 = lean::box(0);
x_35 = lean::apply_2(x_31, lean::box(0), x_34);
return x_35;
}
}
}
obj* _init_l_jsonrpc_read__header___main___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("maximum header length exceeded");
return x_0;
}
}
obj* l_jsonrpc_read__header___main___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_15; obj* x_17; obj* x_18; 
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_sub(x_4, x_7);
x_9 = lean::cnstr_get(x_3, 1);
lean::inc(x_9);
lean::inc(x_3);
lean::inc(x_2);
lean::inc(x_1);
lean::inc(x_0);
x_15 = l_io_get__line___at_jsonrpc_read__header___main___spec__1___rarg(x_0, x_1, x_2, x_3);
lean::inc(x_9);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__header___main___rarg___lambda__5), 7, 6);
lean::closure_set(x_17, 0, x_3);
lean::closure_set(x_17, 1, x_1);
lean::closure_set(x_17, 2, x_2);
lean::closure_set(x_17, 3, x_0);
lean::closure_set(x_17, 4, x_8);
lean::closure_set(x_17, 5, x_9);
x_18 = lean::apply_4(x_9, lean::box(0), lean::box(0), x_15, x_17);
return x_18;
}
else
{
obj* x_21; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_3);
lean::dec(x_0);
x_21 = lean::cnstr_get(x_1, 0);
lean::inc(x_21);
lean::dec(x_1);
x_24 = l_jsonrpc_read__header___main___rarg___closed__1;
x_25 = lean::apply_1(x_2, x_24);
x_26 = lean::apply_2(x_21, lean::box(0), x_25);
return x_26;
}
}
}
obj* l_jsonrpc_read__header___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__header___main___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_io_get__line___at_jsonrpc_read__header___main___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_io_get__line___at_jsonrpc_read__header___main___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_jsonrpc_read__header___main___rarg___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
obj* x_10; 
x_10 = l_jsonrpc_read__header___main___rarg___lambda__2(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean::dec(x_1);
lean::dec(x_5);
return x_10;
}
}
obj* l_jsonrpc_read__header___main___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_jsonrpc_read__header___main___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_4);
return x_5;
}
}
obj* l_jsonrpc_read__header___main___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_jsonrpc_read__header___main(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_jsonrpc_read__header___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_jsonrpc_read__header___main___rarg(x_0, x_1, x_2, x_3, x_5);
return x_6;
}
}
obj* l_jsonrpc_read__header(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__header___rarg___boxed), 6, 0);
return x_2;
}
}
obj* l_jsonrpc_read__header___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_jsonrpc_read__header___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_5);
return x_6;
}
}
obj* l_jsonrpc_read__header___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_jsonrpc_read__header(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_list_lookup___main___at_jsonrpc_read__msg__raw___spec__1(obj* x_0, obj* x_1) {
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
obj* l_io_get__bytes___at_jsonrpc_read__msg__raw___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_io_prim_get__bytes___boxed), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
x_8 = lean::apply_2(x_0, lean::box(0), x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_io_prim_lift__eio___rarg___lambda__1), 4, 3);
lean::closure_set(x_9, 0, x_1);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
x_10 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_io_get__bytes___at_jsonrpc_read__msg__raw___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_io_get__bytes___at_jsonrpc_read__msg__raw___spec__2___rarg), 5, 0);
return x_2;
}
}
obj* l_jsonrpc_read__msg__raw___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_json_parse(x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_9; obj* x_12; obj* x_13; 
lean::dec(x_2);
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_0, 0);
lean::inc(x_9);
lean::dec(x_0);
x_12 = lean::apply_1(x_1, x_6);
x_13 = lean::apply_2(x_9, lean::box(0), x_12);
return x_13;
}
else
{
obj* x_16; obj* x_19; 
lean::dec(x_1);
lean::dec(x_0);
x_16 = lean::cnstr_get(x_4, 0);
lean::inc(x_16);
lean::dec(x_4);
x_19 = lean::apply_2(x_2, lean::box(0), x_16);
return x_19;
}
}
}
obj* _init_l_jsonrpc_read__msg__raw___rarg___lambda__2___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("no Content-Length header");
return x_0;
}
}
obj* l_jsonrpc_read__msg__raw___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_11; obj* x_14; obj* x_15; obj* x_16; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
x_11 = lean::cnstr_get(x_0, 0);
lean::inc(x_11);
lean::dec(x_0);
x_14 = l_jsonrpc_read__msg__raw___rarg___lambda__2___closed__1;
x_15 = lean::apply_1(x_1, x_14);
x_16 = lean::apply_2(x_11, lean::box(0), x_15);
return x_16;
}
else
{
obj* x_17; obj* x_22; obj* x_23; obj* x_24; 
x_17 = lean::cnstr_get(x_6, 0);
lean::inc(x_17);
lean::dec(x_6);
lean::inc(x_1);
lean::inc(x_0);
x_22 = l_io_get__bytes___at_jsonrpc_read__msg__raw___spec__2___rarg(x_2, x_0, x_1, x_3, x_17);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__msg__raw___rarg___lambda__1), 4, 3);
lean::closure_set(x_23, 0, x_0);
lean::closure_set(x_23, 1, x_1);
lean::closure_set(x_23, 2, x_4);
x_24 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_22, x_23);
return x_24;
}
}
}
obj* _init_l_jsonrpc_read__msg__raw___rarg___lambda__3___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("Content-Length");
return x_0;
}
}
obj* l_jsonrpc_read__msg__raw___rarg___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_16; obj* x_18; obj* x_19; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_6, 1);
lean::inc(x_8);
lean::dec(x_6);
x_11 = l_jsonrpc_read__msg__raw___rarg___lambda__3___closed__1;
x_12 = l_list_lookup___main___at_jsonrpc_read__msg__raw___spec__1(x_11, x_5);
x_13 = l_lean_parser_monad__parsec_num___rarg___closed__1;
x_14 = l_option_map___rarg(x_13, x_12);
lean::inc(x_8);
x_16 = lean::apply_2(x_8, lean::box(0), x_14);
lean::inc(x_4);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__msg__raw___rarg___lambda__2), 7, 6);
lean::closure_set(x_18, 0, x_1);
lean::closure_set(x_18, 1, x_2);
lean::closure_set(x_18, 2, x_3);
lean::closure_set(x_18, 3, x_0);
lean::closure_set(x_18, 4, x_8);
lean::closure_set(x_18, 5, x_4);
x_19 = lean::apply_4(x_4, lean::box(0), lean::box(0), x_16, x_18);
return x_19;
}
}
obj* l_jsonrpc_read__msg__raw___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_12; obj* x_14; obj* x_15; 
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
x_7 = lean::mk_nat_obj(100u);
lean::inc(x_3);
lean::inc(x_2);
lean::inc(x_1);
lean::inc(x_0);
x_12 = l_jsonrpc_read__header___main___rarg(x_0, x_1, x_2, x_3, x_7);
lean::inc(x_5);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__msg__raw___rarg___lambda__3), 6, 5);
lean::closure_set(x_14, 0, x_3);
lean::closure_set(x_14, 1, x_1);
lean::closure_set(x_14, 2, x_2);
lean::closure_set(x_14, 3, x_0);
lean::closure_set(x_14, 4, x_5);
x_15 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_12, x_14);
return x_15;
}
}
obj* l_jsonrpc_read__msg__raw(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__msg__raw___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_list_lookup___main___at_jsonrpc_read__msg__raw___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_list_lookup___main___at_jsonrpc_read__msg__raw___spec__1(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_io_get__bytes___at_jsonrpc_read__msg__raw___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_io_get__bytes___at_jsonrpc_read__msg__raw___spec__2(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_jsonrpc_read__msg__raw___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_jsonrpc_read__msg__raw___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_4);
return x_5;
}
}
obj* l_jsonrpc_read__msg__raw___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_jsonrpc_read__msg__raw(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_json_render__elems___main___at_jsonrpc_mk__msg__raw___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; obj* x_3; obj* x_6; 
x_2 = l_json_no__whitespace__formattable;
x_3 = lean::cnstr_get(x_2, 1);
lean::inc(x_3);
lean::dec(x_2);
x_6 = lean::apply_1(x_3, x_1);
return x_6;
}
else
{
obj* x_7; 
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_9; obj* x_12; 
x_9 = lean::cnstr_get(x_0, 0);
lean::inc(x_9);
lean::dec(x_0);
x_12 = l_json_render___main___at_jsonrpc_mk__msg__raw___spec__1(x_9, x_1);
return x_12;
}
else
{
obj* x_13; obj* x_16; obj* x_17; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_26; obj* x_27; obj* x_28; 
x_13 = lean::cnstr_get(x_0, 0);
lean::inc(x_13);
lean::dec(x_0);
x_16 = l_json_no__whitespace__formattable;
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
lean::dec(x_16);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_json_render___main___at_jsonrpc_mk__msg__raw___spec__1), 2, 1);
lean::closure_set(x_20, 0, x_13);
x_21 = l_json_render__elems___main___at_json_dump___spec__2___closed__1;
lean::inc(x_17);
x_23 = lean::apply_2(x_17, x_20, x_21);
x_24 = l_json_render__elems___main___at_json_dump___spec__2___closed__2;
lean::inc(x_17);
x_26 = lean::apply_2(x_17, x_23, x_24);
x_27 = lean::alloc_closure(reinterpret_cast<void*>(l_json_render__elems___main___at_jsonrpc_mk__msg__raw___spec__2), 2, 1);
lean::closure_set(x_27, 0, x_7);
x_28 = lean::apply_3(x_17, x_26, x_27, x_1);
return x_28;
}
}
}
}
obj* l_json_render__kv___main___at_jsonrpc_mk__msg__raw___spec__4(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = l_json_no__whitespace__formattable;
x_8 = lean::cnstr_get(x_7, 7);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_7, 4);
lean::inc(x_12);
lean::dec(x_7);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_json_render__string), 2, 1);
lean::closure_set(x_15, 0, x_2);
x_16 = lean::apply_1(x_12, x_15);
x_17 = l_json_render__kv___main___at_json_dump___spec__4___closed__1;
lean::inc(x_10);
x_19 = lean::apply_2(x_10, x_16, x_17);
x_20 = l_json_render__elems___main___at_json_dump___spec__2___closed__2;
lean::inc(x_10);
x_22 = lean::apply_2(x_10, x_19, x_20);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_json_render___main___at_jsonrpc_mk__msg__raw___spec__1), 2, 1);
lean::closure_set(x_23, 0, x_4);
x_24 = lean::apply_2(x_10, x_22, x_23);
x_25 = lean::apply_2(x_8, x_24, x_1);
return x_25;
}
}
obj* l_json_render__kvs___main___at_jsonrpc_mk__msg__raw___spec__3(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; obj* x_3; obj* x_6; 
x_2 = l_json_no__whitespace__formattable;
x_3 = lean::cnstr_get(x_2, 1);
lean::inc(x_3);
lean::dec(x_2);
x_6 = lean::apply_1(x_3, x_1);
return x_6;
}
else
{
obj* x_7; 
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_9; obj* x_12; 
x_9 = lean::cnstr_get(x_0, 0);
lean::inc(x_9);
lean::dec(x_0);
x_12 = l_json_render__kv___main___at_jsonrpc_mk__msg__raw___spec__4(x_9, x_1);
return x_12;
}
else
{
obj* x_13; obj* x_16; obj* x_17; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_26; obj* x_27; obj* x_28; 
x_13 = lean::cnstr_get(x_0, 0);
lean::inc(x_13);
lean::dec(x_0);
x_16 = l_json_no__whitespace__formattable;
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
lean::dec(x_16);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_json_render__kv___main___at_jsonrpc_mk__msg__raw___spec__4), 2, 1);
lean::closure_set(x_20, 0, x_13);
x_21 = l_json_render__elems___main___at_json_dump___spec__2___closed__1;
lean::inc(x_17);
x_23 = lean::apply_2(x_17, x_20, x_21);
x_24 = l_json_render__elems___main___at_json_dump___spec__2___closed__2;
lean::inc(x_17);
x_26 = lean::apply_2(x_17, x_23, x_24);
x_27 = lean::alloc_closure(reinterpret_cast<void*>(l_json_render__kvs___main___at_jsonrpc_mk__msg__raw___spec__3), 2, 1);
lean::closure_set(x_27, 0, x_7);
x_28 = lean::apply_3(x_17, x_26, x_27, x_1);
return x_28;
}
}
}
}
obj* l_json_render___main___at_jsonrpc_mk__msg__raw___spec__1(obj* x_0, obj* x_1) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_2; obj* x_3; obj* x_6; obj* x_7; 
x_2 = l_json_no__whitespace__formattable;
x_3 = lean::cnstr_get(x_2, 2);
lean::inc(x_3);
lean::dec(x_2);
x_6 = l_json_parser_any__core___main___closed__1;
x_7 = lean::apply_2(x_3, x_6, x_1);
return x_7;
}
case 1:
{
uint8 x_8; 
x_8 = lean::cnstr_get_scalar<uint8>(x_0, 0);
lean::dec(x_0);
if (x_8 == 0)
{
obj* x_10; obj* x_11; obj* x_14; obj* x_15; 
x_10 = l_json_no__whitespace__formattable;
x_11 = lean::cnstr_get(x_10, 2);
lean::inc(x_11);
lean::dec(x_10);
x_14 = l_json_parser_any__core___main___closed__6;
x_15 = lean::apply_2(x_11, x_14, x_1);
return x_15;
}
else
{
obj* x_16; obj* x_17; obj* x_20; obj* x_21; 
x_16 = l_json_no__whitespace__formattable;
x_17 = lean::cnstr_get(x_16, 2);
lean::inc(x_17);
lean::dec(x_16);
x_20 = l_json_parser_any__core___main___closed__3;
x_21 = lean::apply_2(x_17, x_20, x_1);
return x_21;
}
}
case 2:
{
obj* x_22; obj* x_25; obj* x_26; obj* x_29; obj* x_31; 
x_22 = lean::cnstr_get(x_0, 0);
lean::inc(x_22);
lean::dec(x_0);
x_25 = l_json_no__whitespace__formattable;
x_26 = lean::cnstr_get(x_25, 2);
lean::inc(x_26);
lean::dec(x_25);
x_29 = l_json__number_to__string___main(x_22);
lean::dec(x_22);
x_31 = lean::apply_2(x_26, x_29, x_1);
return x_31;
}
case 3:
{
obj* x_32; obj* x_35; obj* x_36; obj* x_39; obj* x_40; 
x_32 = lean::cnstr_get(x_0, 0);
lean::inc(x_32);
lean::dec(x_0);
x_35 = l_json_no__whitespace__formattable;
x_36 = lean::cnstr_get(x_35, 4);
lean::inc(x_36);
lean::dec(x_35);
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_json_render__string), 2, 1);
lean::closure_set(x_39, 0, x_32);
x_40 = lean::apply_2(x_36, x_39, x_1);
return x_40;
}
case 4:
{
obj* x_41; obj* x_44; obj* x_45; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_41 = lean::cnstr_get(x_0, 0);
lean::inc(x_41);
lean::dec(x_0);
x_44 = l_json_no__whitespace__formattable;
x_45 = lean::cnstr_get(x_44, 6);
lean::inc(x_45);
lean::dec(x_44);
x_48 = lean::alloc_closure(reinterpret_cast<void*>(l_json_render__elems___main___at_jsonrpc_mk__msg__raw___spec__2), 2, 1);
lean::closure_set(x_48, 0, x_41);
x_49 = l_list_repr___main___rarg___closed__2;
x_50 = l_list_repr___main___rarg___closed__3;
x_51 = lean::apply_4(x_45, x_49, x_48, x_50, x_1);
return x_51;
}
default:
{
obj* x_52; obj* x_55; obj* x_56; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
x_52 = lean::cnstr_get(x_0, 0);
lean::inc(x_52);
lean::dec(x_0);
x_55 = l_json_no__whitespace__formattable;
x_56 = lean::cnstr_get(x_55, 6);
lean::inc(x_56);
lean::dec(x_55);
x_59 = lean::alloc_closure(reinterpret_cast<void*>(l_json_render__kvs___main___at_jsonrpc_mk__msg__raw___spec__3), 2, 1);
lean::closure_set(x_59, 0, x_52);
x_60 = l_json_render___main___rarg___closed__4;
x_61 = l_json_render___main___rarg___closed__5;
x_62 = lean::apply_4(x_56, x_60, x_59, x_61, x_1);
return x_62;
}
}
}
}
obj* _init_l_jsonrpc_mk__msg__raw___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("\x0d\n");
return x_0;
}
}
obj* _init_l_jsonrpc_mk__msg__raw___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("Content-Length: ");
return x_0;
}
}
obj* _init_l_jsonrpc_mk__msg__raw___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("\x0d\n\x0d\n");
return x_0;
}
}
obj* l_jsonrpc_mk__msg__raw(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; 
x_1 = l_string_join___closed__1;
x_2 = l_json_render___main___at_jsonrpc_mk__msg__raw___spec__1(x_0, x_1);
x_3 = l_jsonrpc_mk__msg__raw___closed__1;
x_4 = lean::string_append(x_2, x_3);
lean::inc(x_4);
x_6 = l_string_utf8__length(x_4);
x_7 = l_nat_repr(x_6);
x_8 = l_jsonrpc_mk__msg__raw___closed__2;
x_9 = lean::string_append(x_8, x_7);
lean::dec(x_7);
x_11 = l_jsonrpc_mk__msg__raw___closed__3;
x_12 = lean::string_append(x_9, x_11);
x_13 = lean::string_append(x_12, x_4);
lean::dec(x_4);
return x_13;
}
}
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg__raw___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_io_prim_put__str___boxed), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
x_8 = lean::apply_2(x_0, lean::box(0), x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_io_prim_lift__eio___rarg___lambda__1), 4, 3);
lean::closure_set(x_9, 0, x_1);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
x_10 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg__raw___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_io_13__put__str___at_jsonrpc_write__msg__raw___spec__2___rarg), 5, 0);
return x_2;
}
}
obj* l_io_print___at_jsonrpc_write__msg__raw___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l___private_init_io_13__put__str___at_jsonrpc_write__msg__raw___spec__2___rarg(x_0, x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* l_io_print___at_jsonrpc_write__msg__raw___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_io_print___at_jsonrpc_write__msg__raw___spec__1___rarg), 5, 0);
return x_2;
}
}
obj* l_jsonrpc_write__msg__raw___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = l_jsonrpc_mk__msg__raw(x_5);
x_7 = l___private_init_io_13__put__str___at_jsonrpc_write__msg__raw___spec__2___rarg(x_0, x_1, x_2, x_3, x_6);
return x_7;
}
}
obj* l_jsonrpc_write__msg__raw(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_write__msg__raw___rarg___boxed), 6, 0);
return x_2;
}
}
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg__raw___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l___private_init_io_13__put__str___at_jsonrpc_write__msg__raw___spec__2(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_io_print___at_jsonrpc_write__msg__raw___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_io_print___at_jsonrpc_write__msg__raw___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_jsonrpc_write__msg__raw___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_jsonrpc_write__msg__raw___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
return x_6;
}
}
obj* l_jsonrpc_write__msg__raw___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_jsonrpc_write__msg__raw(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_lean_server_jsonrpc_1__mk__field___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::apply_1(x_0, x_2);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_1);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
}
obj* l___private_init_lean_server_jsonrpc_1__mk__field(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_server_jsonrpc_1__mk__field___rarg), 3, 0);
return x_1;
}
}
obj* l___private_init_lean_server_jsonrpc_1__mk__field___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l___private_init_lean_server_jsonrpc_1__mk__field(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_jsonrpc_request__id_has__to__json(obj* x_0) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_1; obj* x_4; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_4, 0, x_1);
return x_4;
}
case 1:
{
obj* x_5; obj* x_8; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_8, 0, x_5);
return x_8;
}
default:
{
obj* x_9; 
x_9 = lean::box(0);
return x_9;
}
}
}
}
obj* _init_l_jsonrpc_request__id_has__from__json___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(2);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_jsonrpc_request__id_has__from__json(obj* x_0) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_1; 
x_1 = l_jsonrpc_request__id_has__from__json___closed__1;
return x_1;
}
case 2:
{
obj* x_2; obj* x_5; obj* x_6; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
case 3:
{
obj* x_7; obj* x_10; obj* x_11; 
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_10, 0, x_7);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
default:
{
obj* x_13; 
lean::dec(x_0);
x_13 = lean::box(0);
return x_13;
}
}
}
}
obj* l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__2(obj* x_0, obj* x_1) {
_start:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_2; obj* x_5; obj* x_6; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
lean::dec(x_1);
x_5 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_5, 0, x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
case 1:
{
obj* x_7; obj* x_10; obj* x_11; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
lean::dec(x_1);
x_10 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_10, 0, x_7);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_0);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
default:
{
obj* x_12; obj* x_13; 
x_12 = lean::box(0);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_0);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
}
}
obj* l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__4(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_jsonrpc_message_has__to__json___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("id");
return x_0;
}
}
obj* _init_l_jsonrpc_message_has__to__json___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("method");
return x_0;
}
}
obj* _init_l_jsonrpc_message_has__to__json___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("params");
return x_0;
}
}
obj* _init_l_jsonrpc_message_has__to__json___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("jsonrpc");
x_1 = lean::mk_string("2.0");
x_2 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__1(x_0, x_1);
return x_2;
}
}
obj* _init_l_jsonrpc_message_has__to__json___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("result");
return x_0;
}
}
obj* _init_l_jsonrpc_message_has__to__json___closed__6() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("code");
return x_0;
}
}
obj* _init_l_jsonrpc_message_has__to__json___closed__7() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("message");
return x_0;
}
}
obj* _init_l_jsonrpc_message_has__to__json___closed__8() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("data");
return x_0;
}
}
obj* _init_l_jsonrpc_message_has__to__json___closed__9() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("error");
return x_0;
}
}
obj* l_jsonrpc_message_has__to__json(obj* x_0) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
lean::dec(x_0);
x_8 = l_jsonrpc_message_has__to__json___closed__1;
x_9 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__2(x_8, x_1);
x_10 = l_jsonrpc_message_has__to__json___closed__2;
x_11 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__1(x_10, x_3);
x_12 = l_jsonrpc_message_has__to__json___closed__3;
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_5);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_11);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_9);
lean::cnstr_set(x_17, 1, x_16);
x_18 = l_jsonrpc_message_has__to__json___closed__4;
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_17);
x_20 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_20, 0, x_19);
return x_20;
}
case 1:
{
obj* x_21; obj* x_23; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_21 = lean::cnstr_get(x_0, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_0, 1);
lean::inc(x_23);
lean::dec(x_0);
x_26 = l_jsonrpc_message_has__to__json___closed__1;
x_27 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__2(x_26, x_21);
x_28 = l_jsonrpc_message_has__to__json___closed__5;
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_23);
x_30 = lean::box(0);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_29);
lean::cnstr_set(x_31, 1, x_30);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_27);
lean::cnstr_set(x_32, 1, x_31);
x_33 = l_jsonrpc_message_has__to__json___closed__4;
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_32);
x_35 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_35, 0, x_34);
return x_35;
}
case 2:
{
obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
x_36 = lean::cnstr_get(x_0, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_0, 1);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_0, 2);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_0, 3);
lean::inc(x_42);
lean::dec(x_0);
x_45 = l_jsonrpc_message_has__to__json___closed__1;
x_46 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__2(x_45, x_36);
x_47 = l_jsonrpc_message_has__to__json___closed__6;
x_48 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__4(x_47, x_38);
x_49 = l_jsonrpc_message_has__to__json___closed__7;
x_50 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__1(x_49, x_40);
x_51 = l_jsonrpc_message_has__to__json___closed__8;
x_52 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_42);
x_53 = lean::box(0);
x_54 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_54, 0, x_52);
lean::cnstr_set(x_54, 1, x_53);
x_55 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_55, 0, x_50);
lean::cnstr_set(x_55, 1, x_54);
x_56 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_56, 0, x_48);
lean::cnstr_set(x_56, 1, x_55);
x_57 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_57, 0, x_56);
x_58 = l_jsonrpc_message_has__to__json___closed__9;
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_57);
x_60 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_60, 0, x_59);
lean::cnstr_set(x_60, 1, x_53);
x_61 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_61, 0, x_46);
lean::cnstr_set(x_61, 1, x_60);
x_62 = l_jsonrpc_message_has__to__json___closed__4;
x_63 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_61);
x_64 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_64, 0, x_63);
return x_64;
}
default:
{
obj* x_65; obj* x_67; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; 
x_65 = lean::cnstr_get(x_0, 0);
lean::inc(x_65);
x_67 = lean::cnstr_get(x_0, 1);
lean::inc(x_67);
lean::dec(x_0);
x_70 = l_jsonrpc_message_has__to__json___closed__2;
x_71 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__1(x_70, x_65);
x_72 = l_jsonrpc_message_has__to__json___closed__3;
x_73 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_73, 0, x_72);
lean::cnstr_set(x_73, 1, x_67);
x_74 = lean::box(0);
x_75 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_75, 0, x_73);
lean::cnstr_set(x_75, 1, x_74);
x_76 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_76, 0, x_71);
lean::cnstr_set(x_76, 1, x_75);
x_77 = l_jsonrpc_message_has__to__json___closed__4;
x_78 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_78, 0, x_77);
lean::cnstr_set(x_78, 1, x_76);
x_79 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_79, 0, x_78);
return x_79;
}
}
}
}
obj* l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json_get___main(x_0, x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; 
x_4 = lean::cnstr_get(x_2, 0);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 x_6 = x_2;
} else {
 lean::inc(x_4);
 lean::dec(x_2);
 x_6 = lean::box(0);
}
switch (lean::obj_tag(x_4)) {
case 0:
{
obj* x_8; 
lean::dec(x_6);
x_8 = l_jsonrpc_request__id_has__from__json___closed__1;
return x_8;
}
case 2:
{
obj* x_9; obj* x_12; obj* x_13; 
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
lean::dec(x_4);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_9);
if (lean::is_scalar(x_6)) {
 x_13 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_13 = x_6;
}
lean::cnstr_set(x_13, 0, x_12);
return x_13;
}
case 3:
{
obj* x_14; obj* x_17; obj* x_18; 
x_14 = lean::cnstr_get(x_4, 0);
lean::inc(x_14);
lean::dec(x_4);
x_17 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_17, 0, x_14);
if (lean::is_scalar(x_6)) {
 x_18 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_18 = x_6;
}
lean::cnstr_set(x_18, 0, x_17);
return x_18;
}
default:
{
obj* x_21; 
lean::dec(x_6);
lean::dec(x_4);
x_21 = lean::box(0);
return x_21;
}
}
}
}
}
obj* l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json_get___main(x_0, x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_7; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_7 = l_json_to__string___main(x_4);
return x_7;
}
}
}
obj* l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json_get___main(x_0, x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_7; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_7 = l_json_to__num___main(x_4);
return x_7;
}
}
}
obj* _init_l_jsonrpc_message_has__from__json___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("jsonrpc");
return x_0;
}
}
obj* _init_l_jsonrpc_message_has__from__json___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("2.0");
return x_0;
}
}
obj* _init_l_jsonrpc_message_has__from__json___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = l_option_orelse___main___rarg(x_0, x_0);
return x_1;
}
}
obj* l_jsonrpc_message_has__from__json(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = l_jsonrpc_message_has__from__json___closed__1;
lean::inc(x_0);
x_3 = l_json_get___main(x_0, x_1);
if (lean::obj_tag(x_3) == 0)
{
obj* x_5; 
lean::dec(x_0);
x_5 = lean::box(0);
return x_5;
}
else
{
obj* x_6; obj* x_8; 
x_6 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_set(x_3, 0, lean::box(0));
 x_8 = x_3;
} else {
 lean::inc(x_6);
 lean::dec(x_3);
 x_8 = lean::box(0);
}
switch (lean::obj_tag(x_6)) {
case 0:
{
obj* x_11; 
lean::dec(x_8);
lean::dec(x_0);
x_11 = lean::box(0);
return x_11;
}
case 3:
{
obj* x_12; obj* x_15; uint8 x_16; 
x_12 = lean::cnstr_get(x_6, 0);
lean::inc(x_12);
lean::dec(x_6);
x_15 = l_jsonrpc_message_has__from__json___closed__2;
x_16 = lean::string_dec_eq(x_12, x_15);
lean::dec(x_12);
if (x_16 == 0)
{
obj* x_20; 
lean::dec(x_8);
lean::dec(x_0);
x_20 = lean::box(0);
return x_20;
}
else
{
obj* x_21; obj* x_23; obj* x_24; obj* x_26; obj* x_27; 
x_21 = l_jsonrpc_message_has__to__json___closed__1;
lean::inc(x_0);
x_23 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__1(x_0, x_21);
x_24 = l_jsonrpc_message_has__to__json___closed__2;
lean::inc(x_0);
x_26 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_0, x_24);
if (lean::obj_tag(x_23) == 0)
{
obj* x_29; 
x_29 = lean::box(0);
x_27 = x_29;
goto lbl_28;
}
else
{
obj* x_30; obj* x_32; obj* x_34; 
x_30 = lean::cnstr_get(x_23, 0);
lean::inc(x_30);
x_32 = l_jsonrpc_message_has__to__json___closed__5;
lean::inc(x_0);
x_34 = l_json_get___main(x_0, x_32);
if (lean::obj_tag(x_34) == 0)
{
obj* x_36; 
lean::dec(x_30);
x_36 = lean::box(0);
x_27 = x_36;
goto lbl_28;
}
else
{
obj* x_37; obj* x_39; obj* x_40; obj* x_41; 
x_37 = lean::cnstr_get(x_34, 0);
if (lean::is_exclusive(x_34)) {
 x_39 = x_34;
} else {
 lean::inc(x_37);
 lean::dec(x_34);
 x_39 = lean::box(0);
}
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_30);
lean::cnstr_set(x_40, 1, x_37);
if (lean::is_scalar(x_39)) {
 x_41 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_41 = x_39;
}
lean::cnstr_set(x_41, 0, x_40);
x_27 = x_41;
goto lbl_28;
}
}
lbl_28:
{
obj* x_42; obj* x_44; obj* x_45; 
if (lean::obj_tag(x_23) == 0)
{
obj* x_47; 
x_47 = lean::box(0);
if (lean::obj_tag(x_23) == 0)
{
lean::dec(x_8);
x_42 = x_47;
goto lbl_43;
}
else
{
obj* x_49; 
x_49 = lean::cnstr_get(x_23, 0);
lean::inc(x_49);
lean::dec(x_23);
x_44 = x_47;
x_45 = x_49;
goto lbl_46;
}
}
else
{
obj* x_52; obj* x_54; obj* x_56; 
x_52 = lean::cnstr_get(x_23, 0);
lean::inc(x_52);
x_54 = l_jsonrpc_message_has__to__json___closed__9;
lean::inc(x_0);
x_56 = l_json_get___main(x_0, x_54);
if (lean::obj_tag(x_56) == 0)
{
obj* x_57; 
x_57 = lean::box(0);
if (lean::obj_tag(x_23) == 0)
{
lean::dec(x_8);
lean::dec(x_52);
x_42 = x_57;
goto lbl_43;
}
else
{
lean::dec(x_23);
x_44 = x_57;
x_45 = x_52;
goto lbl_46;
}
}
else
{
obj* x_62; obj* x_64; 
lean::dec(x_56);
x_62 = l_jsonrpc_message_has__to__json___closed__6;
lean::inc(x_0);
x_64 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__3(x_0, x_62);
if (lean::obj_tag(x_64) == 0)
{
obj* x_65; 
x_65 = lean::box(0);
if (lean::obj_tag(x_23) == 0)
{
lean::dec(x_8);
lean::dec(x_52);
x_42 = x_65;
goto lbl_43;
}
else
{
lean::dec(x_23);
x_44 = x_65;
x_45 = x_52;
goto lbl_46;
}
}
else
{
obj* x_69; obj* x_72; obj* x_74; 
x_69 = lean::cnstr_get(x_64, 0);
lean::inc(x_69);
lean::dec(x_64);
x_72 = l_jsonrpc_message_has__to__json___closed__7;
lean::inc(x_0);
x_74 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_0, x_72);
if (lean::obj_tag(x_74) == 0)
{
obj* x_76; 
lean::dec(x_69);
x_76 = lean::box(0);
if (lean::obj_tag(x_23) == 0)
{
lean::dec(x_8);
lean::dec(x_52);
x_42 = x_76;
goto lbl_43;
}
else
{
lean::dec(x_23);
x_44 = x_76;
x_45 = x_52;
goto lbl_46;
}
}
else
{
obj* x_80; obj* x_82; obj* x_83; obj* x_85; obj* x_87; obj* x_88; 
x_80 = lean::cnstr_get(x_74, 0);
if (lean::is_exclusive(x_74)) {
 x_82 = x_74;
} else {
 lean::inc(x_80);
 lean::dec(x_74);
 x_82 = lean::box(0);
}
x_83 = l_jsonrpc_message_has__to__json___closed__8;
lean::inc(x_0);
x_85 = l_json_get__or__null(x_0, x_83);
lean::inc(x_52);
x_87 = lean::alloc_cnstr(2, 4, 0);
lean::cnstr_set(x_87, 0, x_52);
lean::cnstr_set(x_87, 1, x_69);
lean::cnstr_set(x_87, 2, x_80);
lean::cnstr_set(x_87, 3, x_85);
if (lean::is_scalar(x_82)) {
 x_88 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_88 = x_82;
}
lean::cnstr_set(x_88, 0, x_87);
if (lean::obj_tag(x_23) == 0)
{
lean::dec(x_8);
lean::dec(x_52);
x_42 = x_88;
goto lbl_43;
}
else
{
lean::dec(x_23);
x_44 = x_88;
x_45 = x_52;
goto lbl_46;
}
}
}
}
}
lbl_43:
{
if (lean::obj_tag(x_26) == 0)
{
obj* x_93; obj* x_94; obj* x_96; 
lean::dec(x_0);
x_93 = l_jsonrpc_message_has__from__json___closed__3;
x_94 = l_option_orelse___main___rarg(x_42, x_93);
lean::dec(x_42);
x_96 = l_option_orelse___main___rarg(x_27, x_94);
lean::dec(x_94);
lean::dec(x_27);
return x_96;
}
else
{
obj* x_99; obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_109; obj* x_112; 
x_99 = lean::cnstr_get(x_26, 0);
if (lean::is_exclusive(x_26)) {
 x_101 = x_26;
} else {
 lean::inc(x_99);
 lean::dec(x_26);
 x_101 = lean::box(0);
}
x_102 = lean::box(0);
x_103 = l_jsonrpc_message_has__to__json___closed__3;
x_104 = l_json_get__or__null(x_0, x_103);
x_105 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_105, 0, x_99);
lean::cnstr_set(x_105, 1, x_104);
if (lean::is_scalar(x_101)) {
 x_106 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_106 = x_101;
}
lean::cnstr_set(x_106, 0, x_105);
x_107 = l_option_orelse___main___rarg(x_102, x_106);
lean::dec(x_106);
x_109 = l_option_orelse___main___rarg(x_42, x_107);
lean::dec(x_107);
lean::dec(x_42);
x_112 = l_option_orelse___main___rarg(x_27, x_109);
lean::dec(x_109);
lean::dec(x_27);
return x_112;
}
}
lbl_46:
{
if (lean::obj_tag(x_26) == 0)
{
lean::dec(x_8);
lean::dec(x_45);
if (lean::obj_tag(x_26) == 0)
{
obj* x_118; obj* x_119; obj* x_121; 
lean::dec(x_0);
x_118 = l_jsonrpc_message_has__from__json___closed__3;
x_119 = l_option_orelse___main___rarg(x_44, x_118);
lean::dec(x_44);
x_121 = l_option_orelse___main___rarg(x_27, x_119);
lean::dec(x_119);
lean::dec(x_27);
return x_121;
}
else
{
obj* x_124; obj* x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_130; obj* x_131; obj* x_132; obj* x_134; obj* x_137; 
x_124 = lean::cnstr_get(x_26, 0);
if (lean::is_exclusive(x_26)) {
 x_126 = x_26;
} else {
 lean::inc(x_124);
 lean::dec(x_26);
 x_126 = lean::box(0);
}
x_127 = lean::box(0);
x_128 = l_jsonrpc_message_has__to__json___closed__3;
x_129 = l_json_get__or__null(x_0, x_128);
x_130 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_130, 0, x_124);
lean::cnstr_set(x_130, 1, x_129);
if (lean::is_scalar(x_126)) {
 x_131 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_131 = x_126;
}
lean::cnstr_set(x_131, 0, x_130);
x_132 = l_option_orelse___main___rarg(x_127, x_131);
lean::dec(x_131);
x_134 = l_option_orelse___main___rarg(x_44, x_132);
lean::dec(x_132);
lean::dec(x_44);
x_137 = l_option_orelse___main___rarg(x_27, x_134);
lean::dec(x_134);
lean::dec(x_27);
return x_137;
}
}
else
{
obj* x_140; obj* x_142; obj* x_143; obj* x_146; obj* x_147; 
x_140 = lean::cnstr_get(x_26, 0);
lean::inc(x_140);
x_142 = l_jsonrpc_message_has__to__json___closed__3;
x_143 = l_json_get__or__null(x_0, x_142);
lean::inc(x_143);
lean::inc(x_140);
x_146 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_146, 0, x_45);
lean::cnstr_set(x_146, 1, x_140);
lean::cnstr_set(x_146, 2, x_143);
if (lean::is_scalar(x_8)) {
 x_147 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_147 = x_8;
}
lean::cnstr_set(x_147, 0, x_146);
if (lean::obj_tag(x_26) == 0)
{
obj* x_150; obj* x_151; obj* x_153; obj* x_156; 
lean::dec(x_140);
lean::dec(x_143);
x_150 = lean::box(0);
x_151 = l_option_orelse___main___rarg(x_147, x_150);
lean::dec(x_147);
x_153 = l_option_orelse___main___rarg(x_44, x_151);
lean::dec(x_151);
lean::dec(x_44);
x_156 = l_option_orelse___main___rarg(x_27, x_153);
lean::dec(x_153);
lean::dec(x_27);
return x_156;
}
else
{
obj* x_159; obj* x_160; obj* x_161; obj* x_162; obj* x_165; obj* x_168; 
if (lean::is_exclusive(x_26)) {
 lean::cnstr_release(x_26, 0);
 x_159 = x_26;
} else {
 lean::dec(x_26);
 x_159 = lean::box(0);
}
x_160 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_160, 0, x_140);
lean::cnstr_set(x_160, 1, x_143);
if (lean::is_scalar(x_159)) {
 x_161 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_161 = x_159;
}
lean::cnstr_set(x_161, 0, x_160);
x_162 = l_option_orelse___main___rarg(x_147, x_161);
lean::dec(x_161);
lean::dec(x_147);
x_165 = l_option_orelse___main___rarg(x_44, x_162);
lean::dec(x_162);
lean::dec(x_44);
x_168 = l_option_orelse___main___rarg(x_27, x_165);
lean::dec(x_165);
lean::dec(x_27);
return x_168;
}
}
}
}
}
}
default:
{
obj* x_174; 
lean::dec(x_8);
lean::dec(x_6);
lean::dec(x_0);
x_174 = lean::box(0);
return x_174;
}
}
}
}
}
obj* l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__1(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__3___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__3(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_jsonrpc_read__msg___rarg___lambda__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid message:\n");
return x_0;
}
}
obj* l_jsonrpc_read__msg___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_15; 
lean::dec(x_3);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::mk_nat_obj(80u);
x_10 = l_json_pretty(x_1, x_9);
x_11 = l_jsonrpc_read__msg___rarg___lambda__1___closed__1;
x_12 = lean::string_append(x_11, x_10);
lean::dec(x_10);
x_14 = lean::apply_1(x_2, x_12);
x_15 = lean::apply_2(x_6, lean::box(0), x_14);
return x_15;
}
else
{
obj* x_19; obj* x_22; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_19 = lean::cnstr_get(x_4, 0);
lean::inc(x_19);
lean::dec(x_4);
x_22 = lean::apply_2(x_3, lean::box(0), x_19);
return x_22;
}
}
}
obj* l_jsonrpc_read__msg___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_11; obj* x_13; obj* x_16; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = l_jsonrpc_message_has__from__json___closed__1;
lean::inc(x_4);
x_13 = l_json_get___main(x_4, x_11);
lean::inc(x_8);
lean::inc(x_4);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__msg___rarg___lambda__1), 5, 4);
lean::closure_set(x_16, 0, x_1);
lean::closure_set(x_16, 1, x_4);
lean::closure_set(x_16, 2, x_2);
lean::closure_set(x_16, 3, x_8);
if (lean::obj_tag(x_13) == 0)
{
obj* x_18; obj* x_19; obj* x_20; 
lean::dec(x_4);
x_18 = lean::box(0);
x_19 = lean::apply_2(x_8, lean::box(0), x_18);
x_20 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_19, x_16);
return x_20;
}
else
{
obj* x_21; obj* x_23; 
x_21 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 lean::cnstr_set(x_13, 0, lean::box(0));
 x_23 = x_13;
} else {
 lean::inc(x_21);
 lean::dec(x_13);
 x_23 = lean::box(0);
}
switch (lean::obj_tag(x_21)) {
case 0:
{
obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_4);
lean::dec(x_23);
x_26 = lean::box(0);
x_27 = lean::apply_2(x_8, lean::box(0), x_26);
x_28 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_27, x_16);
return x_28;
}
case 3:
{
obj* x_29; obj* x_32; uint8 x_33; 
x_29 = lean::cnstr_get(x_21, 0);
lean::inc(x_29);
lean::dec(x_21);
x_32 = l_jsonrpc_message_has__from__json___closed__2;
x_33 = lean::string_dec_eq(x_29, x_32);
lean::dec(x_29);
if (x_33 == 0)
{
obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_4);
lean::dec(x_23);
x_37 = lean::box(0);
x_38 = lean::apply_2(x_8, lean::box(0), x_37);
x_39 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_38, x_16);
return x_39;
}
else
{
obj* x_40; obj* x_42; obj* x_43; obj* x_45; obj* x_46; 
x_40 = l_jsonrpc_message_has__to__json___closed__1;
lean::inc(x_4);
x_42 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__1(x_4, x_40);
x_43 = l_jsonrpc_message_has__to__json___closed__2;
lean::inc(x_4);
x_45 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_4, x_43);
if (lean::obj_tag(x_42) == 0)
{
obj* x_48; 
x_48 = lean::box(0);
x_46 = x_48;
goto lbl_47;
}
else
{
obj* x_49; obj* x_51; obj* x_53; 
x_49 = lean::cnstr_get(x_42, 0);
lean::inc(x_49);
x_51 = l_jsonrpc_message_has__to__json___closed__5;
lean::inc(x_4);
x_53 = l_json_get___main(x_4, x_51);
if (lean::obj_tag(x_53) == 0)
{
obj* x_55; 
lean::dec(x_49);
x_55 = lean::box(0);
x_46 = x_55;
goto lbl_47;
}
else
{
obj* x_56; obj* x_58; obj* x_59; obj* x_60; 
x_56 = lean::cnstr_get(x_53, 0);
if (lean::is_exclusive(x_53)) {
 x_58 = x_53;
} else {
 lean::inc(x_56);
 lean::dec(x_53);
 x_58 = lean::box(0);
}
x_59 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_59, 0, x_49);
lean::cnstr_set(x_59, 1, x_56);
if (lean::is_scalar(x_58)) {
 x_60 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_60 = x_58;
}
lean::cnstr_set(x_60, 0, x_59);
x_46 = x_60;
goto lbl_47;
}
}
lbl_47:
{
obj* x_61; obj* x_63; obj* x_64; 
if (lean::obj_tag(x_42) == 0)
{
obj* x_66; 
x_66 = lean::box(0);
if (lean::obj_tag(x_42) == 0)
{
lean::dec(x_23);
x_61 = x_66;
goto lbl_62;
}
else
{
obj* x_68; 
x_68 = lean::cnstr_get(x_42, 0);
lean::inc(x_68);
lean::dec(x_42);
x_63 = x_66;
x_64 = x_68;
goto lbl_65;
}
}
else
{
obj* x_71; obj* x_73; obj* x_75; 
x_71 = lean::cnstr_get(x_42, 0);
lean::inc(x_71);
x_73 = l_jsonrpc_message_has__to__json___closed__9;
lean::inc(x_4);
x_75 = l_json_get___main(x_4, x_73);
if (lean::obj_tag(x_75) == 0)
{
obj* x_76; 
x_76 = lean::box(0);
if (lean::obj_tag(x_42) == 0)
{
lean::dec(x_71);
lean::dec(x_23);
x_61 = x_76;
goto lbl_62;
}
else
{
lean::dec(x_42);
x_63 = x_76;
x_64 = x_71;
goto lbl_65;
}
}
else
{
obj* x_81; obj* x_83; 
lean::dec(x_75);
x_81 = l_jsonrpc_message_has__to__json___closed__6;
lean::inc(x_4);
x_83 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__3(x_4, x_81);
if (lean::obj_tag(x_83) == 0)
{
obj* x_84; 
x_84 = lean::box(0);
if (lean::obj_tag(x_42) == 0)
{
lean::dec(x_71);
lean::dec(x_23);
x_61 = x_84;
goto lbl_62;
}
else
{
lean::dec(x_42);
x_63 = x_84;
x_64 = x_71;
goto lbl_65;
}
}
else
{
obj* x_88; obj* x_91; obj* x_93; 
x_88 = lean::cnstr_get(x_83, 0);
lean::inc(x_88);
lean::dec(x_83);
x_91 = l_jsonrpc_message_has__to__json___closed__7;
lean::inc(x_4);
x_93 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_4, x_91);
if (lean::obj_tag(x_93) == 0)
{
obj* x_95; 
lean::dec(x_88);
x_95 = lean::box(0);
if (lean::obj_tag(x_42) == 0)
{
lean::dec(x_71);
lean::dec(x_23);
x_61 = x_95;
goto lbl_62;
}
else
{
lean::dec(x_42);
x_63 = x_95;
x_64 = x_71;
goto lbl_65;
}
}
else
{
obj* x_99; obj* x_101; obj* x_102; obj* x_104; obj* x_106; obj* x_107; 
x_99 = lean::cnstr_get(x_93, 0);
if (lean::is_exclusive(x_93)) {
 x_101 = x_93;
} else {
 lean::inc(x_99);
 lean::dec(x_93);
 x_101 = lean::box(0);
}
x_102 = l_jsonrpc_message_has__to__json___closed__8;
lean::inc(x_4);
x_104 = l_json_get__or__null(x_4, x_102);
lean::inc(x_71);
x_106 = lean::alloc_cnstr(2, 4, 0);
lean::cnstr_set(x_106, 0, x_71);
lean::cnstr_set(x_106, 1, x_88);
lean::cnstr_set(x_106, 2, x_99);
lean::cnstr_set(x_106, 3, x_104);
if (lean::is_scalar(x_101)) {
 x_107 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_107 = x_101;
}
lean::cnstr_set(x_107, 0, x_106);
if (lean::obj_tag(x_42) == 0)
{
lean::dec(x_71);
lean::dec(x_23);
x_61 = x_107;
goto lbl_62;
}
else
{
lean::dec(x_42);
x_63 = x_107;
x_64 = x_71;
goto lbl_65;
}
}
}
}
}
lbl_62:
{
if (lean::obj_tag(x_45) == 0)
{
obj* x_112; obj* x_113; obj* x_115; obj* x_118; obj* x_119; 
lean::dec(x_4);
x_112 = l_jsonrpc_message_has__from__json___closed__3;
x_113 = l_option_orelse___main___rarg(x_61, x_112);
lean::dec(x_61);
x_115 = l_option_orelse___main___rarg(x_46, x_113);
lean::dec(x_113);
lean::dec(x_46);
x_118 = lean::apply_2(x_8, lean::box(0), x_115);
x_119 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_118, x_16);
return x_119;
}
else
{
obj* x_120; obj* x_122; obj* x_123; obj* x_124; obj* x_125; obj* x_126; obj* x_127; obj* x_128; obj* x_130; obj* x_133; obj* x_136; obj* x_137; 
x_120 = lean::cnstr_get(x_45, 0);
if (lean::is_exclusive(x_45)) {
 x_122 = x_45;
} else {
 lean::inc(x_120);
 lean::dec(x_45);
 x_122 = lean::box(0);
}
x_123 = lean::box(0);
x_124 = l_jsonrpc_message_has__to__json___closed__3;
x_125 = l_json_get__or__null(x_4, x_124);
x_126 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_126, 0, x_120);
lean::cnstr_set(x_126, 1, x_125);
if (lean::is_scalar(x_122)) {
 x_127 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_127 = x_122;
}
lean::cnstr_set(x_127, 0, x_126);
x_128 = l_option_orelse___main___rarg(x_123, x_127);
lean::dec(x_127);
x_130 = l_option_orelse___main___rarg(x_61, x_128);
lean::dec(x_128);
lean::dec(x_61);
x_133 = l_option_orelse___main___rarg(x_46, x_130);
lean::dec(x_130);
lean::dec(x_46);
x_136 = lean::apply_2(x_8, lean::box(0), x_133);
x_137 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_136, x_16);
return x_137;
}
}
lbl_65:
{
if (lean::obj_tag(x_45) == 0)
{
lean::dec(x_23);
lean::dec(x_64);
if (lean::obj_tag(x_45) == 0)
{
obj* x_141; obj* x_142; obj* x_144; obj* x_147; obj* x_148; 
lean::dec(x_4);
x_141 = l_jsonrpc_message_has__from__json___closed__3;
x_142 = l_option_orelse___main___rarg(x_63, x_141);
lean::dec(x_63);
x_144 = l_option_orelse___main___rarg(x_46, x_142);
lean::dec(x_142);
lean::dec(x_46);
x_147 = lean::apply_2(x_8, lean::box(0), x_144);
x_148 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_147, x_16);
return x_148;
}
else
{
obj* x_149; obj* x_151; obj* x_152; obj* x_153; obj* x_154; obj* x_155; obj* x_156; obj* x_157; obj* x_159; obj* x_162; obj* x_165; obj* x_166; 
x_149 = lean::cnstr_get(x_45, 0);
if (lean::is_exclusive(x_45)) {
 x_151 = x_45;
} else {
 lean::inc(x_149);
 lean::dec(x_45);
 x_151 = lean::box(0);
}
x_152 = lean::box(0);
x_153 = l_jsonrpc_message_has__to__json___closed__3;
x_154 = l_json_get__or__null(x_4, x_153);
x_155 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_155, 0, x_149);
lean::cnstr_set(x_155, 1, x_154);
if (lean::is_scalar(x_151)) {
 x_156 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_156 = x_151;
}
lean::cnstr_set(x_156, 0, x_155);
x_157 = l_option_orelse___main___rarg(x_152, x_156);
lean::dec(x_156);
x_159 = l_option_orelse___main___rarg(x_63, x_157);
lean::dec(x_157);
lean::dec(x_63);
x_162 = l_option_orelse___main___rarg(x_46, x_159);
lean::dec(x_159);
lean::dec(x_46);
x_165 = lean::apply_2(x_8, lean::box(0), x_162);
x_166 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_165, x_16);
return x_166;
}
}
else
{
obj* x_167; obj* x_169; obj* x_170; obj* x_173; obj* x_174; 
x_167 = lean::cnstr_get(x_45, 0);
lean::inc(x_167);
x_169 = l_jsonrpc_message_has__to__json___closed__3;
x_170 = l_json_get__or__null(x_4, x_169);
lean::inc(x_170);
lean::inc(x_167);
x_173 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_173, 0, x_64);
lean::cnstr_set(x_173, 1, x_167);
lean::cnstr_set(x_173, 2, x_170);
if (lean::is_scalar(x_23)) {
 x_174 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_174 = x_23;
}
lean::cnstr_set(x_174, 0, x_173);
if (lean::obj_tag(x_45) == 0)
{
obj* x_177; obj* x_178; obj* x_180; obj* x_183; obj* x_186; obj* x_187; 
lean::dec(x_170);
lean::dec(x_167);
x_177 = lean::box(0);
x_178 = l_option_orelse___main___rarg(x_174, x_177);
lean::dec(x_174);
x_180 = l_option_orelse___main___rarg(x_63, x_178);
lean::dec(x_178);
lean::dec(x_63);
x_183 = l_option_orelse___main___rarg(x_46, x_180);
lean::dec(x_180);
lean::dec(x_46);
x_186 = lean::apply_2(x_8, lean::box(0), x_183);
x_187 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_186, x_16);
return x_187;
}
else
{
obj* x_188; obj* x_189; obj* x_190; obj* x_191; obj* x_194; obj* x_197; obj* x_200; obj* x_201; 
if (lean::is_exclusive(x_45)) {
 lean::cnstr_release(x_45, 0);
 x_188 = x_45;
} else {
 lean::dec(x_45);
 x_188 = lean::box(0);
}
x_189 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_189, 0, x_167);
lean::cnstr_set(x_189, 1, x_170);
if (lean::is_scalar(x_188)) {
 x_190 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_190 = x_188;
}
lean::cnstr_set(x_190, 0, x_189);
x_191 = l_option_orelse___main___rarg(x_174, x_190);
lean::dec(x_190);
lean::dec(x_174);
x_194 = l_option_orelse___main___rarg(x_63, x_191);
lean::dec(x_191);
lean::dec(x_63);
x_197 = l_option_orelse___main___rarg(x_46, x_194);
lean::dec(x_194);
lean::dec(x_46);
x_200 = lean::apply_2(x_8, lean::box(0), x_197);
x_201 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_200, x_16);
return x_201;
}
}
}
}
}
}
default:
{
obj* x_205; obj* x_206; obj* x_207; 
lean::dec(x_4);
lean::dec(x_21);
lean::dec(x_23);
x_205 = lean::box(0);
x_206 = lean::apply_2(x_8, lean::box(0), x_205);
x_207 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_206, x_16);
return x_207;
}
}
}
}
}
obj* l_jsonrpc_read__msg___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_10; obj* x_12; obj* x_13; 
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
lean::inc(x_3);
lean::inc(x_2);
lean::inc(x_1);
x_10 = l_jsonrpc_read__msg__raw___rarg(x_0, x_1, x_2, x_3, x_4);
lean::inc(x_5);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__msg___rarg___lambda__2), 5, 4);
lean::closure_set(x_12, 0, x_3);
lean::closure_set(x_12, 1, x_1);
lean::closure_set(x_12, 2, x_2);
lean::closure_set(x_12, 3, x_5);
x_13 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_10, x_12);
return x_13;
}
}
obj* l_jsonrpc_read__msg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__msg___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_jsonrpc_read__msg___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_jsonrpc_read__msg___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_4);
return x_5;
}
}
obj* l_jsonrpc_read__msg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_jsonrpc_read__msg(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_io_prim_put__str___boxed), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
x_8 = lean::apply_2(x_0, lean::box(0), x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_io_prim_lift__eio___rarg___lambda__1), 4, 3);
lean::closure_set(x_9, 0, x_1);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
x_10 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__3___rarg), 5, 0);
return x_2;
}
}
obj* l_io_print___at_jsonrpc_write__msg___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__3___rarg(x_0, x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* l_io_print___at_jsonrpc_write__msg___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_io_print___at_jsonrpc_write__msg___spec__2___rarg), 5, 0);
return x_2;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = l_jsonrpc_mk__msg__raw(x_5);
x_7 = l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__3___rarg(x_0, x_1, x_2, x_3, x_6);
return x_7;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__6___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_io_prim_put__str___boxed), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
x_8 = lean::apply_2(x_0, lean::box(0), x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_io_prim_lift__eio___rarg___lambda__1), 4, 3);
lean::closure_set(x_9, 0, x_1);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
x_10 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__6(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__6___rarg), 5, 0);
return x_2;
}
}
obj* l_io_print___at_jsonrpc_write__msg___spec__5___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__6___rarg(x_0, x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* l_io_print___at_jsonrpc_write__msg___spec__5(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_io_print___at_jsonrpc_write__msg___spec__5___rarg), 5, 0);
return x_2;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__4___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = l_jsonrpc_mk__msg__raw(x_5);
x_7 = l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__6___rarg(x_0, x_1, x_2, x_3, x_6);
return x_7;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__4(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__4___rarg___boxed), 6, 0);
return x_2;
}
}
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__9___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_io_prim_put__str___boxed), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
x_8 = lean::apply_2(x_0, lean::box(0), x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_io_prim_lift__eio___rarg___lambda__1), 4, 3);
lean::closure_set(x_9, 0, x_1);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
x_10 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__9(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__9___rarg), 5, 0);
return x_2;
}
}
obj* l_io_print___at_jsonrpc_write__msg___spec__8___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__9___rarg(x_0, x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* l_io_print___at_jsonrpc_write__msg___spec__8(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_io_print___at_jsonrpc_write__msg___spec__8___rarg), 5, 0);
return x_2;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__7___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = l_jsonrpc_mk__msg__raw(x_5);
x_7 = l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__9___rarg(x_0, x_1, x_2, x_3, x_6);
return x_7;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__7(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__7___rarg___boxed), 6, 0);
return x_2;
}
}
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__12___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_io_prim_put__str___boxed), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
x_8 = lean::apply_2(x_0, lean::box(0), x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_io_prim_lift__eio___rarg___lambda__1), 4, 3);
lean::closure_set(x_9, 0, x_1);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
x_10 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__12(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__12___rarg), 5, 0);
return x_2;
}
}
obj* l_io_print___at_jsonrpc_write__msg___spec__11___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__12___rarg(x_0, x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* l_io_print___at_jsonrpc_write__msg___spec__11(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_io_print___at_jsonrpc_write__msg___spec__11___rarg), 5, 0);
return x_2;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__10___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = l_jsonrpc_mk__msg__raw(x_5);
x_7 = l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__12___rarg(x_0, x_1, x_2, x_3, x_6);
return x_7;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__10(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__10___rarg___boxed), 6, 0);
return x_2;
}
}
obj* l_jsonrpc_write__msg___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
switch (lean::obj_tag(x_5)) {
case 0:
{
obj* x_6; obj* x_8; obj* x_10; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_5, 2);
lean::inc(x_10);
lean::dec(x_5);
x_13 = l_jsonrpc_message_has__to__json___closed__1;
x_14 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__2(x_13, x_6);
x_15 = l_jsonrpc_message_has__to__json___closed__2;
x_16 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__1(x_15, x_8);
x_17 = l_jsonrpc_message_has__to__json___closed__3;
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_10);
x_19 = lean::box(0);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_18);
lean::cnstr_set(x_20, 1, x_19);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_16);
lean::cnstr_set(x_21, 1, x_20);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_14);
lean::cnstr_set(x_22, 1, x_21);
x_23 = l_jsonrpc_message_has__to__json___closed__4;
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_22);
x_25 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_25, 0, x_24);
x_26 = l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_25);
return x_26;
}
case 1:
{
obj* x_27; obj* x_29; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_27 = lean::cnstr_get(x_5, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_5, 1);
lean::inc(x_29);
lean::dec(x_5);
x_32 = l_jsonrpc_message_has__to__json___closed__1;
x_33 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__2(x_32, x_27);
x_34 = l_jsonrpc_message_has__to__json___closed__5;
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_29);
x_36 = lean::box(0);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_35);
lean::cnstr_set(x_37, 1, x_36);
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_33);
lean::cnstr_set(x_38, 1, x_37);
x_39 = l_jsonrpc_message_has__to__json___closed__4;
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_38);
x_41 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_41, 0, x_40);
x_42 = l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__4___rarg(x_0, x_1, x_2, x_3, x_4, x_41);
return x_42;
}
case 2:
{
obj* x_43; obj* x_45; obj* x_47; obj* x_49; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; 
x_43 = lean::cnstr_get(x_5, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_5, 1);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_5, 2);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_5, 3);
lean::inc(x_49);
lean::dec(x_5);
x_52 = l_jsonrpc_message_has__to__json___closed__1;
x_53 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__2(x_52, x_43);
x_54 = l_jsonrpc_message_has__to__json___closed__6;
x_55 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__4(x_54, x_45);
x_56 = l_jsonrpc_message_has__to__json___closed__7;
x_57 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__1(x_56, x_47);
x_58 = l_jsonrpc_message_has__to__json___closed__8;
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_49);
x_60 = lean::box(0);
x_61 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_61, 0, x_59);
lean::cnstr_set(x_61, 1, x_60);
x_62 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_62, 0, x_57);
lean::cnstr_set(x_62, 1, x_61);
x_63 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_63, 0, x_55);
lean::cnstr_set(x_63, 1, x_62);
x_64 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_64, 0, x_63);
x_65 = l_jsonrpc_message_has__to__json___closed__9;
x_66 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_64);
x_67 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_60);
x_68 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_68, 0, x_53);
lean::cnstr_set(x_68, 1, x_67);
x_69 = l_jsonrpc_message_has__to__json___closed__4;
x_70 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_70, 0, x_69);
lean::cnstr_set(x_70, 1, x_68);
x_71 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_71, 0, x_70);
x_72 = l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__7___rarg(x_0, x_1, x_2, x_3, x_4, x_71);
return x_72;
}
default:
{
obj* x_73; obj* x_75; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; 
x_73 = lean::cnstr_get(x_5, 0);
lean::inc(x_73);
x_75 = lean::cnstr_get(x_5, 1);
lean::inc(x_75);
lean::dec(x_5);
x_78 = l_jsonrpc_message_has__to__json___closed__2;
x_79 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__1(x_78, x_73);
x_80 = l_jsonrpc_message_has__to__json___closed__3;
x_81 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_81, 0, x_80);
lean::cnstr_set(x_81, 1, x_75);
x_82 = lean::box(0);
x_83 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_83, 0, x_81);
lean::cnstr_set(x_83, 1, x_82);
x_84 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_84, 0, x_79);
lean::cnstr_set(x_84, 1, x_83);
x_85 = l_jsonrpc_message_has__to__json___closed__4;
x_86 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_86, 0, x_85);
lean::cnstr_set(x_86, 1, x_84);
x_87 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_87, 0, x_86);
x_88 = l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__10___rarg(x_0, x_1, x_2, x_3, x_4, x_87);
return x_88;
}
}
}
}
obj* l_jsonrpc_write__msg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_write__msg___rarg___boxed), 6, 0);
return x_2;
}
}
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__3___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__3(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_io_print___at_jsonrpc_write__msg___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_io_print___at_jsonrpc_write__msg___spec__2(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
return x_6;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__6___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__6(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_io_print___at_jsonrpc_write__msg___spec__5___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_io_print___at_jsonrpc_write__msg___spec__5(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__4___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__4___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
return x_6;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__4___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__4(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__9___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__9(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_io_print___at_jsonrpc_write__msg___spec__8___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_io_print___at_jsonrpc_write__msg___spec__8(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__7___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__7___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
return x_6;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__7___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__7(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__12___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l___private_init_io_13__put__str___at_jsonrpc_write__msg___spec__12(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_io_print___at_jsonrpc_write__msg___spec__11___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_io_print___at_jsonrpc_write__msg___spec__11(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__10___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__10___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
return x_6;
}
}
obj* l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__10___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_jsonrpc_write__msg__raw___at_jsonrpc_write__msg___spec__10(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_jsonrpc_write__msg___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_jsonrpc_write__msg___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
return x_6;
}
}
obj* l_jsonrpc_write__msg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_jsonrpc_write__msg(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
void initialize_init_lean_parser_parsec();
void initialize_init_data_json_default();
void initialize_init_io();
static bool _G_initialized = false;
void initialize_init_lean_server_jsonrpc() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_lean_parser_parsec();
 initialize_init_data_json_default();
 initialize_init_io();
 l_jsonrpc_read__header___main___rarg___lambda__2___closed__1 = _init_l_jsonrpc_read__header___main___rarg___lambda__2___closed__1();
lean::mark_persistent(l_jsonrpc_read__header___main___rarg___lambda__2___closed__1);
 l_jsonrpc_read__header___main___rarg___lambda__3___closed__1 = _init_l_jsonrpc_read__header___main___rarg___lambda__3___closed__1();
lean::mark_persistent(l_jsonrpc_read__header___main___rarg___lambda__3___closed__1);
 l_jsonrpc_read__header___main___rarg___lambda__4___closed__1 = _init_l_jsonrpc_read__header___main___rarg___lambda__4___closed__1();
lean::mark_persistent(l_jsonrpc_read__header___main___rarg___lambda__4___closed__1);
 l_jsonrpc_read__header___main___rarg___lambda__5___closed__1 = _init_l_jsonrpc_read__header___main___rarg___lambda__5___closed__1();
lean::mark_persistent(l_jsonrpc_read__header___main___rarg___lambda__5___closed__1);
 l_jsonrpc_read__header___main___rarg___closed__1 = _init_l_jsonrpc_read__header___main___rarg___closed__1();
lean::mark_persistent(l_jsonrpc_read__header___main___rarg___closed__1);
 l_jsonrpc_read__msg__raw___rarg___lambda__2___closed__1 = _init_l_jsonrpc_read__msg__raw___rarg___lambda__2___closed__1();
lean::mark_persistent(l_jsonrpc_read__msg__raw___rarg___lambda__2___closed__1);
 l_jsonrpc_read__msg__raw___rarg___lambda__3___closed__1 = _init_l_jsonrpc_read__msg__raw___rarg___lambda__3___closed__1();
lean::mark_persistent(l_jsonrpc_read__msg__raw___rarg___lambda__3___closed__1);
 l_jsonrpc_mk__msg__raw___closed__1 = _init_l_jsonrpc_mk__msg__raw___closed__1();
lean::mark_persistent(l_jsonrpc_mk__msg__raw___closed__1);
 l_jsonrpc_mk__msg__raw___closed__2 = _init_l_jsonrpc_mk__msg__raw___closed__2();
lean::mark_persistent(l_jsonrpc_mk__msg__raw___closed__2);
 l_jsonrpc_mk__msg__raw___closed__3 = _init_l_jsonrpc_mk__msg__raw___closed__3();
lean::mark_persistent(l_jsonrpc_mk__msg__raw___closed__3);
 l_jsonrpc_request__id_has__from__json___closed__1 = _init_l_jsonrpc_request__id_has__from__json___closed__1();
lean::mark_persistent(l_jsonrpc_request__id_has__from__json___closed__1);
 l_jsonrpc_message_has__to__json___closed__1 = _init_l_jsonrpc_message_has__to__json___closed__1();
lean::mark_persistent(l_jsonrpc_message_has__to__json___closed__1);
 l_jsonrpc_message_has__to__json___closed__2 = _init_l_jsonrpc_message_has__to__json___closed__2();
lean::mark_persistent(l_jsonrpc_message_has__to__json___closed__2);
 l_jsonrpc_message_has__to__json___closed__3 = _init_l_jsonrpc_message_has__to__json___closed__3();
lean::mark_persistent(l_jsonrpc_message_has__to__json___closed__3);
 l_jsonrpc_message_has__to__json___closed__4 = _init_l_jsonrpc_message_has__to__json___closed__4();
lean::mark_persistent(l_jsonrpc_message_has__to__json___closed__4);
 l_jsonrpc_message_has__to__json___closed__5 = _init_l_jsonrpc_message_has__to__json___closed__5();
lean::mark_persistent(l_jsonrpc_message_has__to__json___closed__5);
 l_jsonrpc_message_has__to__json___closed__6 = _init_l_jsonrpc_message_has__to__json___closed__6();
lean::mark_persistent(l_jsonrpc_message_has__to__json___closed__6);
 l_jsonrpc_message_has__to__json___closed__7 = _init_l_jsonrpc_message_has__to__json___closed__7();
lean::mark_persistent(l_jsonrpc_message_has__to__json___closed__7);
 l_jsonrpc_message_has__to__json___closed__8 = _init_l_jsonrpc_message_has__to__json___closed__8();
lean::mark_persistent(l_jsonrpc_message_has__to__json___closed__8);
 l_jsonrpc_message_has__to__json___closed__9 = _init_l_jsonrpc_message_has__to__json___closed__9();
lean::mark_persistent(l_jsonrpc_message_has__to__json___closed__9);
 l_jsonrpc_message_has__from__json___closed__1 = _init_l_jsonrpc_message_has__from__json___closed__1();
lean::mark_persistent(l_jsonrpc_message_has__from__json___closed__1);
 l_jsonrpc_message_has__from__json___closed__2 = _init_l_jsonrpc_message_has__from__json___closed__2();
lean::mark_persistent(l_jsonrpc_message_has__from__json___closed__2);
 l_jsonrpc_message_has__from__json___closed__3 = _init_l_jsonrpc_message_has__from__json___closed__3();
lean::mark_persistent(l_jsonrpc_message_has__from__json___closed__3);
 l_jsonrpc_read__msg___rarg___lambda__1___closed__1 = _init_l_jsonrpc_read__msg___rarg___lambda__1___closed__1();
lean::mark_persistent(l_jsonrpc_read__msg___rarg___lambda__1___closed__1);
}
