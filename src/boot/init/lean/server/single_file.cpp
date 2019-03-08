// Lean compiler output
// Module: init.lean.server.single_file
// Imports: init.default init.lean.frontend init.lean.parser.module init.lean.server.jsonrpc init.lean.server.lsp
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
obj* l_lean_server_single__file__state_poll(obj*, obj*);
obj* l_lean_server_server__state_run__except_x_27___rarg(obj*, obj*, obj*);
obj* l_lean_server_server__state_handle__did__open___closed__4;
obj* l_state__t_pure___at_lean_server_server__state_handle__msg___spec__1___rarg(obj*, obj*, obj*);
obj* l_rbmap__of___at_lean_server_server__state_close__file___spec__2___boxed(obj*, obj*);
extern obj* l_jsonrpc_read__header___main___rarg___lambda__2___closed__1;
obj* l_lean_server_server__state_log___closed__2;
obj* l_lean_server_server__state_run__core___closed__2;
obj* l_json_pretty(obj*, obj*);
obj* l_lean_server_server__state_handle__did__change___closed__1;
obj* l_lean_server_server__state_handle__did__change(obj*, obj*, obj*);
obj* l_lean_server_server__state_handle__msg___closed__6;
obj* l_list_filter___main___at_lean_server_server__state_cancel__requests__core___spec__1(obj*, obj*);
obj* l_rbnode_find___main___at_lean_server_server__state_handle__hover___spec__3___rarg___boxed(obj*, obj*);
obj* l_lean_server_server__state_run__except__async___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_server_processed__file_messages__now___main(obj*, obj*);
obj* l_lean_server_server__state_diag__of__msg___closed__1;
obj* l_lean_server_server__state_handle__did__change___closed__2;
obj* l_lean_server_processed__file_proc__core___main___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_server_server__state_run__except(obj*);
obj* l_list_map___main___at_lean_server_server__state_wait___spec__5(obj*);
obj* l_lean_server_server__state_send__diagnostics__core___closed__1;
obj* l_lean_server_server__state_cancel__requests__core(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_expand(obj*, obj*);
obj* l_json_parse(obj*);
obj* l_lean_server_processed__file_proc(obj*, obj*, obj*);
obj* l_lean_server_server__state_log(obj*, obj*, obj*);
obj* l_list_mmap_x_27___main___at_lean_server_server__state_cancel__requests__core___spec__4(obj*, obj*, obj*, obj*, obj*);
obj* l_task_peek(obj*);
extern obj* l_jsonrpc_read__header___main___rarg___lambda__3___closed__1;
obj* l_lean_server_processed__file_proc__core___main___closed__2;
extern obj* l_lean_elaborator_run___closed__2;
obj* l_list_map___main___at_lean_parser_syntax_find__idents___spec__4(obj*, obj*, obj*);
obj* l_jsonrpc_read__msg___at_lean_server_server__state_run__core___spec__1___rarg(obj*);
extern "C" obj* lean_io_wait_any_2(obj*, obj*);
obj* l_rbnode_find___main___at_lean_server_server__state_handle__hover___spec__3___rarg(obj*, obj*);
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_lean_server_server__state_handle__did__change___closed__3;
obj* l_lean_server_server__state_send__diagnostics(obj*, obj*, obj*, obj*);
extern obj* l_jsonrpc_message_has__to__json___closed__9;
extern obj* l_jsonrpc_message_has__from__json___closed__3;
obj* l_state__t_pure___at_lean_server_server__state_handle__msg___spec__1___boxed(obj*);
obj* l_task_force___boxed(obj*);
obj* l_lean_server_processed__file_next(obj*);
obj* l_lean_server_server__state_loop(obj*, obj*);
obj* l_lean_server_server__state_json__of__pos(obj*);
obj* l_lean_server_server__state_handle__cancel(obj*, obj*, obj*);
obj* l_lean_server_processed__file_next___main(obj*);
obj* l_rbmap_find___main___at_lean_server_server__state_handle__hover___spec__2(obj*, obj*);
obj* l_lean_parser_run___at_lean_run__frontend___spec__1(obj*, obj*, obj*);
obj* l_lean_server_server__state_with__state___boxed(obj*);
obj* l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__3(obj*, obj*);
obj* l_lean_server_server__state_handle__msg___closed__9;
obj* l_lean_server_server__state_send__diagnostics__core___closed__2;
obj* l_except__t_bind__cont___at_lean_server_server__state_run__except__async___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_parser_syntax_find__idents___spec__4___closed__1;
uint8 l_list_empty___main___rarg(obj*);
extern obj* l_json_parser_any__core___main___closed__9;
obj* l_jsonrpc_mk__msg__raw(obj*);
obj* l_jsonrpc_write__msg__raw___at_lean_server_server__state_send__msg___spec__2___rarg(obj*, obj*);
obj* l_json_get_x_27___at_lean_server_server__state_handle__did__change___spec__1(obj*, obj*);
extern uint8 l_false_decidable;
obj* l_list_map___main___at_lean_server_server__state_cancel__requests__core___spec__2(obj*);
obj* l_list_map___main___at_lean_server_server__state_wait___spec__2(obj*);
obj* l_lean_server_server__state_clear__requests___lambda__1___boxed(obj*, obj*);
obj* l_rbmap_insert___main___at_lean_server_server__state_close__file___spec__4(obj*, obj*, obj*);
obj* l_list_reverse___rarg(obj*);
extern obj* l_jsonrpc_message_has__to__json___closed__3;
extern obj* l_lsp_location_has__to__json___closed__2;
obj* l_state__t_bind___at_lean_server_server__state_run__except__async___spec__2___boxed(obj*, obj*);
extern "C" obj* lean_io_mk_task(obj*, obj*, obj*);
obj* l_lean_server_processed__file_get__expanded__at__core___main___closed__1;
obj* l_lean_server_server__state_handle__msg___closed__8;
obj* l_rbmap_from__list___at_lean_server_server__state_close__file___spec__3(obj*, obj*);
obj* l_lean_server_processed__file_proc___lambda__1(obj*, obj*, obj*, obj*);
extern obj* l_jsonrpc_message_has__from__json___closed__1;
obj* l_rbmap_insert___main___at_lean_server_server__state_handle__poll___spec__1(obj*, obj*, obj*);
obj* l_lean_server_server__state_run__except_x_27(obj*);
obj* l_lean_server_server__state_diag__of__msg___closed__2;
uint8 l_lean_parser_syntax_is__of__kind___main(obj*, obj*);
extern "C" obj* lean_task_has_finished(obj*, obj*, obj*);
extern obj* l_jsonrpc_read__header___main___rarg___lambda__5___closed__1;
extern obj* l_lean_expander_expand__bracketed__binder___main___closed__4;
obj* l_lean_server_server__state_handle__did__open___closed__2;
obj* l_lean_server_processed__file_proc__core___main___lambda__3___closed__2;
obj* l_lean_parser_syntax_idents___main(obj*);
extern obj* l_jsonrpc_message_has__to__json___closed__7;
obj* l_lean_server_processed__file_proc__core___main___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_lsp_range_has__to__json___closed__1;
obj* l_list_map___main___at_lean_parser_syntax_find__idents___spec__1(obj*, obj*);
obj* l_json_to__nat___main(obj*);
namespace lean {
obj* string_iterator_next(obj*);
}
extern obj* l_lsp_range_has__to__json___closed__2;
obj* l_lean_server_server__state_run__except__async(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_server_processed__file_proc__core___main___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_state__t_bind___at_lean_server_server__state_run__except__async___spec__2(obj*, obj*);
extern obj* l_lean_expander_builtin__transformers;
obj* l_list_map___main___at_lean_server_server__state_wait___spec__3(obj*);
obj* l_list_filter___main___at_lean_server_server__state_close__file___spec__1(obj*, obj*);
obj* l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3(obj*);
obj* l_lean_mk__config(obj*, obj*);
obj* l_list_foldl___main___at_lean_server_server__state_close__file___spec__5(obj*, obj*);
obj* l_rbnode_insert___at_lean_server_server__state_handle__poll___spec__2(obj*, obj*, obj*);
obj* l_task_force___rarg(obj*);
extern obj* l_jsonrpc_read__msg___rarg___lambda__1___closed__1;
obj* l_jsonrpc_write__msg___at_lean_server_server__state_send__msg___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_server_single__file__state_messages__now(obj*, obj*);
obj* l_rbmap_to__list___main___rarg(obj*);
obj* l_option_orelse___main___rarg(obj*, obj*);
obj* l_lean_server_server__state_handle__hover___closed__1;
uint8 l_lean_server_single__file__state_finished(obj*);
obj* l_jsonrpc_read__msg___at_lean_server_server__state_run__core___spec__1(obj*);
namespace lean {
obj* string_append(obj*, obj*);
}
obj* l_lean_server_single__file__state_get__expanded__at(obj*, obj*);
obj* l_lean_server_processed__file_proc__core___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_server_server__state_json__of__range(obj*, obj*);
obj* l_lean_server_server__state_handle__cancel___closed__3;
obj* l_jsonrpc_write__msg___at_lean_server_server__state_send__msg___spec__1(obj*, obj*, obj*);
obj* l_lean_server_server__state_handle__msg___closed__5;
obj* l_lean_server_single__file__state_poll___main(obj*, obj*);
obj* l_lean_server_server__state_send__msg(obj*, obj*, obj*);
obj* l_io_prim_iterate___main___at_lean_server_server__state_loop___spec__1(obj*, obj*);
obj* l_lean_server_server__state_run__core___closed__3;
obj* l_lean_server_server__state_loop1(obj*, obj*);
obj* l_lean_server_server__state_handle__msg___closed__4;
obj* l_lean_server_single__file__state_finished___boxed(obj*);
obj* l_lean_server_server__state_handle__hover___closed__4;
obj* l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__1(obj*, obj*);
obj* l_json_get_x_27___at_lean_server_server__state_handle__did__change___spec__1___boxed(obj*, obj*);
obj* l_rbnode_find___main___at_lean_server_server__state_handle__hover___spec__3(obj*);
obj* l_lean_server_server__state_run__except_x_27___boxed(obj*);
obj* l_lean_server_processed__file_proc__core___main___closed__1;
obj* l_lean_server_server__state_run__core___closed__1;
obj* l_list_join___main___rarg(obj*);
obj* l_list_filter___main___at_lean_server_server__state_close__file___spec__1___boxed(obj*, obj*);
namespace lean {
uint8 string_dec_lt(obj*, obj*);
}
obj* l_lean_server_processed__file_proc__core___main(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_file__map_from__position(obj*, obj*);
obj* l_lean_server_server__state_handle__hover___closed__5;
obj* l_list_map___main___at_lean_server_server__state_send__diagnostics__core___spec__1(obj*);
namespace lean {
obj* string_iterator_to_end(obj*);
}
extern obj* l_jsonrpc_message_has__from__json___closed__2;
obj* l_lean_parser_syntax_find__idents___boxed(obj*, obj*);
namespace lean {
obj* string_iterator_extract(obj*, obj*);
}
obj* l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3___rarg___closed__1;
extern obj* l_lsp_position_has__to__json___closed__2;
obj* l_option_get__or__else___main___rarg(obj*, obj*);
obj* l_lean_server_server__state_run__except___boxed(obj*);
obj* l_match__failed___at_lean_server_server__state_run__core___spec__2___closed__1;
obj* l_lean_server_server__state_handle__cancel___lambda__1___boxed(obj*, obj*);
obj* l_list_lookup___main___at_jsonrpc_read__msg__raw___spec__1(obj*, obj*);
obj* l_lean_server_server__state_diag__of__msg___closed__4;
extern obj* l_lsp_position_has__to__json___closed__1;
obj* l_lean_server_processed__file_proc__core___main___lambda__4(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_syntax_as__node___main(obj*);
extern obj* l_jsonrpc_message_has__to__json___closed__8;
obj* l_lean_server_processed__file_get__expanded__at__core___main(obj*, obj*, obj*);
extern obj* l_lean_parser_module_eoi;
obj* l___private_init_io_13__put__str___at_lean_run__frontend___spec__5(obj*, obj*);
obj* l_lean_server_server__state_clear__requests___closed__2;
obj* l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__1(obj*, obj*);
extern obj* l_io_prim_iterate__eio___at_lean_run__frontend___spec__13___closed__1;
obj* l_lean_server_single__file__state_get__expanded__at___lambda__1(obj*, obj*, obj*);
obj* l_lean_elaborator_run(obj*);
obj* l_json__number_from__nat(obj*);
extern obj* l_lean_message__log_empty;
obj* l_lean_server_server__state_handle__hover___lambda__1(obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_list_map___main___at_lean_parser_syntax_find__idents___spec__5___boxed(obj*, obj*);
extern obj* l_jsonrpc_message_has__to__json___closed__4;
obj* l_lean_server_server__state_close__file(obj*, obj*, obj*);
obj* l_json_get_x_27___at_lean_server_server__state_handle__hover___spec__1___boxed(obj*, obj*);
uint8 l_lean_server_server__state_handle__cancel___lambda__1(obj*, obj*);
obj* l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__2(obj*, obj*);
obj* l_lean_server_single__file__state_get__expanded__at___lambda__1___boxed(obj*, obj*, obj*);
obj* l_lean_server_server__state_log___closed__1;
obj* l_lean_server_server__state_sync__file(obj*, obj*, obj*, obj*);
extern obj* l_jsonrpc_message_has__to__json___closed__6;
obj* l_lean_server_processed__file_proc__core___main___lambda__4___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_syntax_to__format___main(obj*);
obj* l_lean_parser_syntax_find__idents(obj*, obj*);
obj* l_lean_server_server__state_clear__requests___closed__1;
extern obj* l_string_join___closed__1;
obj* l_lean_server_server__state_handle__cancel___closed__1;
obj* l_json_get_x_27___at_lean_server_server__state_handle__hover___spec__1(obj*, obj*);
obj* l_list_map___main___at_lean_parser_syntax_find__idents___spec__5(obj*, obj*);
obj* l_lean_server_server__state_handle__msg___closed__3;
obj* l_list_map___main___at_lean_server_server__state_wait___spec__4(obj*);
namespace lean {
obj* int_add(obj*, obj*);
}
namespace lean {
uint8 nat_dec_le(obj*, obj*);
}
obj* l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__4(obj*, obj*);
obj* l_state__t_pure___at_lean_server_server__state_handle__msg___spec__1(obj*);
obj* l_jsonrpc_write__msg__raw___at_lean_server_server__state_send__msg___spec__2(obj*);
obj* l_lean_server_server__state_m;
obj* l_lean_server_server__state_run__core___closed__4;
obj* l_rbnode_balance2___main___rarg(obj*, obj*);
obj* l_lean_server_server__state_send__diagnostics__core(obj*, obj*, obj*, obj*);
obj* l_lean_server_processed__file_messages__here___main(obj*);
obj* l_lean_server_server__state_handle__cancel___closed__2;
obj* l_list_map___main___at_lean_parser_syntax_find__idents___spec__3(obj*, obj*);
obj* l_lean_server_processed__file_proc__core(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_server_processed__file_messages__here(obj*);
namespace lean {
obj* string_iterator_prev(obj*);
}
obj* l_rbnode_ins___main___at_lean_server_server__state_handle__poll___spec__3(obj*, obj*, obj*);
obj* l_jsonrpc_read__msg___at_lean_server_server__state_run__core___spec__1___boxed(obj*);
obj* l_lean_server_processed__file_messages__now(obj*, obj*);
obj* l_lean_server_server__state_handle__did__open(obj*, obj*, obj*);
obj* l_lean_server_server__state_send__unrelated__error(obj*, obj*, obj*, obj*);
obj* l_lean_server_server__state_run__core(obj*, obj*, obj*);
obj* l_lean_server_server__state_handle__msg___closed__2;
obj* l_lean_server_server__state_send__error(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_syntax_idents(obj*);
namespace lean {
obj* string_iterator_offset(obj*);
}
obj* l_lean_server_processed__file_proc__core___main___lambda__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_state__t_bind___at_lean_server_server__state_run__except__async___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_except__t_bind__cont___at_lean_server_server__state_run__except__async___spec__1(obj*, obj*);
extern "C" obj* lean_io_prim_get_bytes(obj*, obj*);
extern obj* l_jsonrpc_message_has__to__json___closed__5;
obj* l_lean_server_server__state_wait(obj*, obj*);
obj* l_lean_file__map_from__string(obj*);
obj* l_lean_server_server__state_send__error___closed__1;
obj* l_lean_server_processed__file_get__expanded__at(obj*, obj*);
obj* l_lean_server_server__state_handle__msg___closed__10;
obj* l_io_get__bytes___at_lean_server_server__state_loop1___spec__6(obj*, obj*);
obj* lean_server_run(obj*, obj*, obj*);
obj* l_lean_format_pretty(obj*, obj*);
obj* l_rbnode_find___main___at_lean_server_server__state_handle__hover___spec__3___boxed(obj*);
obj* l_lean_server_server__state_diag__of__msg(obj*);
extern obj* l_jsonrpc_read__msg__raw___rarg___lambda__3___closed__1;
obj* l_lean_server_server__state_handle__poll(obj*, obj*, obj*, obj*);
extern "C" obj* lean_io_prim_get_line(obj*);
namespace lean {
uint8 string_dec_eq(obj*, obj*);
}
obj* l_lean_server_processed__file_proc__core___main___lambda__3___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_except__t_bind__cont___at_lean_server_server__state_run__except__async___spec__1___boxed(obj*, obj*);
obj* l_lean_server_document__uri;
obj* l_lean_server_server__state_handle__did__open___closed__1;
obj* l_lean_server_server__state_handle__msg___closed__1;
obj* l_lean_server_server__state_handle__hover(obj*, obj*, obj*);
namespace lean {
obj* string_mk_iterator(obj*);
}
obj* l_match__failed___at_lean_server_server__state_run__core___spec__2(obj*);
obj* l_list_mmap_x_27___main___at_lean_server_server__state_loop1___spec__2(obj*, obj*, obj*);
obj* l_rbnode_balance1___main___rarg(obj*, obj*);
obj* l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3___boxed(obj*);
obj* l_lean_server_server__state_run__except___rarg(obj*, obj*, obj*, obj*);
obj* l_list_filter___main___at_lean_server_server__state_cancel__requests__core___spec__3(obj*, obj*);
obj* l_lean_server_server__state_handle__cancel___lambda__1___closed__1;
extern obj* l_jsonrpc_message_has__to__json___closed__2;
obj* l_lean_server_processed__file_get__expanded__at__core(obj*, obj*, obj*);
namespace lean {
obj* int_neg(obj*);
}
obj* l_lean_server_server__state_diag__of__msg___closed__3;
obj* l_lean_server_server__state_handle__msg(obj*, obj*, obj*);
obj* l_lean_server_server__state_clear__requests(obj*, obj*, obj*);
obj* l_lean_server_processed__file_proc__core___main___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_io_println___at_lean_run__frontend___spec__3(obj*, obj*);
extern obj* l_jsonrpc_message_has__to__json___closed__1;
obj* l_list_map___main___at_lean_server_server__state_handle__hover___spec__4(obj*);
extern obj* l_list_mmap___main___at_list_has__from__json___spec__1___rarg___closed__1;
obj* l_jsonrpc_write__msg__raw___at_lean_server_server__state_send__msg___spec__2___boxed(obj*);
uint8 l_lean_server_server__state_clear__requests___lambda__1(obj*, obj*);
obj* l_json_get___main(obj*, obj*);
namespace lean {
uint32 uint32_of_nat(obj*);
}
obj* l_json_get__or__null(obj*, obj*);
obj* l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(obj*, obj*);
obj* l_lean_server_server__state_handle__did__close(obj*, obj*, obj*);
obj* l_jsonrpc_read__header___main___at_lean_server_server__state_loop1___spec__4(obj*, obj*);
obj* l_lean_server_server__state_server__capabilities;
obj* l_rbmap__of___at_lean_server_server__state_close__file___spec__2(obj*, obj*);
obj* l_task_force___rarg___boxed(obj*);
obj* l_lean_server_server__state_clear__diagnostics(obj*, obj*, obj*);
obj* l_lean_server_server__state_handle__hover___closed__3;
namespace lean {
obj* nat_sub(obj*, obj*);
}
extern obj* l_jsonrpc_read__header___main___rarg___lambda__4___closed__1;
obj* l_lean_file__map_to__position(obj*, obj*);
obj* l_jsonrpc_read__header___main___at_lean_server_server__state_loop1___spec__4___boxed(obj*, obj*);
obj* l_task_force(obj*);
uint8 l_rbnode_is__red___main___rarg(obj*);
obj* l_list_mfilter___main___at_lean_server_server__state_loop1___spec__1(obj*, obj*, obj*);
obj* l_list_map___main___at_lean_parser_syntax_find__idents___spec__2(obj*, obj*);
obj* l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3___rarg(obj*);
obj* l_rbmap_find___main___at_lean_server_server__state_handle__hover___spec__2___boxed(obj*, obj*);
extern obj* l_lsp_location_has__to__json___closed__1;
obj* l_list_append___rarg(obj*, obj*);
extern obj* l_lean_parser_monad__parsec_num___rarg___closed__1;
obj* l_option_map___rarg(obj*, obj*);
obj* l_lean_server_server__state_with__state___rarg(obj*, obj*, obj*);
extern obj* l_list_mmap_x_27___main___at_lean_run__frontend___spec__6___closed__1;
obj* l_lean_server_processed__file_proc__core___main___lambda__3___closed__1;
obj* l_lean_server_server__state_with__state(obj*);
obj* l_lean_server_server__state_handle__did__open___closed__3;
obj* l_rbmap_from__list___at_lean_server_server__state_close__file___spec__3___boxed(obj*, obj*);
obj* l_lean_server_server__state_handle__msg___closed__7;
obj* l_task_peek___boxed(obj*);
obj* l_lean_server_processed__file_proc__core___main___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_server_server__state_handle__did__change___spec__2(obj*);
obj* l_string_find(uint32, obj*);
obj* l_list_map___main___at_lean_server_server__state_wait___spec__1(obj*);
obj* l_lean_server_server__state_handle__hover___closed__2;
extern obj* l_int_one;
obj* l_lean_server_single__file__state_create(obj*, obj*);
obj* l_task_peek___rarg(obj*, obj*);
extern obj* l_lean_process__file___lambda__1___closed__4;
obj* l_io_get__line___at_lean_server_server__state_loop1___spec__5(obj*);
namespace lean {
uint8 nat_dec_lt(obj*, obj*);
}
obj* l_rbnode_set__black___main___rarg(obj*);
obj* l_jsonrpc_read__header___main___at_lean_server_server__state_loop1___spec__4___closed__1;
obj* l_list_map___main___at_lean_parser_syntax_find__idents___spec__4___boxed(obj*, obj*, obj*);
obj* l_list_map___main___at_lean_parser_syntax_idents___main___spec__1(obj*);
obj* l_lean_server_processed__file_proc___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_task_peek___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_3; obj* x_4; uint8 x_6; 
lean::inc(x_0);
x_3 = lean_task_has_finished(lean::box(0), x_0, x_1);
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::unbox(x_4);
if (x_6 == 0)
{
obj* x_8; obj* x_10; obj* x_11; obj* x_12; 
lean::dec(x_0);
x_8 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 x_10 = x_3;
} else {
 lean::inc(x_8);
 lean::dec(x_3);
 x_10 = lean::box(0);
}
x_11 = lean::box(0);
if (lean::is_scalar(x_10)) {
 x_12 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_12 = x_10;
}
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_8);
return x_12;
}
else
{
obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_19; 
x_13 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 x_15 = x_3;
} else {
 lean::inc(x_13);
 lean::dec(x_3);
 x_15 = lean::box(0);
}
x_16 = lean::task_get(x_0);
lean::dec(x_0);
x_18 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_18, 0, x_16);
if (lean::is_scalar(x_15)) {
 x_19 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_19 = x_15;
}
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_13);
return x_19;
}
}
}
obj* l_task_peek(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_task_peek___rarg), 2, 0);
return x_1;
}
}
obj* l_task_peek___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_task_peek(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_task_force___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::task_get(x_0);
x_2 = lean::task_pure(x_1);
return x_2;
}
}
obj* l_task_force(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_task_force___rarg___boxed), 1, 0);
return x_1;
}
}
obj* l_task_force___rarg___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_task_force___rarg(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_task_force___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_task_force(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_list_map___main___at_lean_parser_syntax_idents___main___spec__1(obj* x_0) {
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
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
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
x_7 = l_lean_parser_syntax_idents___main(x_2);
x_8 = l_list_map___main___at_lean_parser_syntax_idents___main___spec__1(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_lean_parser_syntax_idents___main(obj* x_0) {
_start:
{
obj* x_2; 
lean::inc(x_0);
x_2 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_2) == 0)
{
switch (lean::obj_tag(x_0)) {
case 1:
{
obj* x_3; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_3);
lean::cnstr_set(x_7, 1, x_6);
return x_7;
}
case 3:
{
obj* x_8; 
x_8 = lean::box(0);
return x_8;
}
default:
{
obj* x_10; 
lean::dec(x_0);
x_10 = lean::box(0);
return x_10;
}
}
}
else
{
obj* x_12; obj* x_15; obj* x_18; obj* x_19; 
lean::dec(x_0);
x_12 = lean::cnstr_get(x_2, 0);
lean::inc(x_12);
lean::dec(x_2);
x_15 = lean::cnstr_get(x_12, 1);
lean::inc(x_15);
lean::dec(x_12);
x_18 = l_list_map___main___at_lean_parser_syntax_idents___main___spec__1(x_15);
x_19 = l_list_join___main___rarg(x_18);
return x_19;
}
}
}
obj* l_lean_parser_syntax_idents(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_syntax_idents___main(x_0);
return x_1;
}
}
obj* l_list_map___main___at_lean_parser_syntax_find__idents___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; 
x_4 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_6 = x_1;
} else {
 lean::inc(x_4);
 lean::dec(x_1);
 x_6 = lean::box(0);
}
x_7 = lean::box(0);
lean::inc(x_0);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_0);
lean::cnstr_set(x_9, 1, x_7);
x_10 = l_list_map___main___at_lean_parser_syntax_find__idents___spec__1(x_0, x_4);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
}
obj* l_list_map___main___at_lean_parser_syntax_find__idents___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; 
x_4 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_6 = x_1;
} else {
 lean::inc(x_4);
 lean::dec(x_1);
 x_6 = lean::box(0);
}
x_7 = lean::box(0);
lean::inc(x_0);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_0);
lean::cnstr_set(x_9, 1, x_7);
x_10 = l_list_map___main___at_lean_parser_syntax_find__idents___spec__2(x_0, x_4);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
}
obj* l_list_map___main___at_lean_parser_syntax_find__idents___spec__3(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; 
x_4 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_6 = x_1;
} else {
 lean::inc(x_4);
 lean::dec(x_1);
 x_6 = lean::box(0);
}
x_7 = lean::box(0);
lean::inc(x_0);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_0);
lean::cnstr_set(x_9, 1, x_7);
x_10 = l_list_map___main___at_lean_parser_syntax_find__idents___spec__3(x_0, x_4);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
}
obj* _init_l_list_map___main___at_lean_parser_syntax_find__idents___spec__4___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
return x_2;
}
}
obj* l_list_map___main___at_lean_parser_syntax_find__idents___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; 
lean::dec(x_1);
x_4 = lean::box(0);
return x_4;
}
else
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; 
x_5 = lean::cnstr_get(x_2, 0);
x_7 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 lean::cnstr_set(x_2, 1, lean::box(0));
 x_9 = x_2;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_2);
 x_9 = lean::box(0);
}
lean::inc(x_1);
x_11 = l_list_map___main___at_lean_parser_syntax_find__idents___spec__4(x_0, x_1, x_7);
if (lean::obj_tag(x_5) == 0)
{
obj* x_13; obj* x_14; 
lean::dec(x_1);
x_13 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_14 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_14 = x_9;
}
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_11);
return x_14;
}
else
{
obj* x_15; obj* x_18; obj* x_20; obj* x_23; uint8 x_25; 
x_15 = lean::cnstr_get(x_5, 0);
lean::inc(x_15);
lean::dec(x_5);
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_18, 0);
lean::inc(x_20);
lean::dec(x_18);
x_23 = lean::string_iterator_offset(x_20);
lean::dec(x_20);
x_25 = lean::nat_dec_le(x_23, x_0);
lean::dec(x_23);
if (x_25 == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
lean::dec(x_15);
x_28 = lean::box(0);
x_29 = l_list_map___main___at_lean_parser_syntax_find__idents___spec__1(x_1, x_28);
x_30 = l_list_join___main___rarg(x_29);
if (lean::is_scalar(x_9)) {
 x_31 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_31 = x_9;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_11);
return x_31;
}
else
{
obj* x_32; obj* x_35; obj* x_38; uint8 x_40; 
x_32 = lean::cnstr_get(x_15, 2);
lean::inc(x_32);
lean::dec(x_15);
x_35 = lean::cnstr_get(x_32, 1);
lean::inc(x_35);
lean::dec(x_32);
x_38 = lean::string_iterator_offset(x_35);
lean::dec(x_35);
x_40 = lean::nat_dec_le(x_0, x_38);
lean::dec(x_38);
if (x_40 == 0)
{
obj* x_42; obj* x_43; obj* x_44; obj* x_45; 
x_42 = lean::box(0);
x_43 = l_list_map___main___at_lean_parser_syntax_find__idents___spec__2(x_1, x_42);
x_44 = l_list_join___main___rarg(x_43);
if (lean::is_scalar(x_9)) {
 x_45 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_45 = x_9;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_11);
return x_45;
}
else
{
obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_46 = l_list_map___main___at_lean_parser_syntax_find__idents___spec__4___closed__1;
x_47 = l_list_map___main___at_lean_parser_syntax_find__idents___spec__3(x_1, x_46);
x_48 = l_list_join___main___rarg(x_47);
if (lean::is_scalar(x_9)) {
 x_49 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_49 = x_9;
}
lean::cnstr_set(x_49, 0, x_48);
lean::cnstr_set(x_49, 1, x_11);
return x_49;
}
}
}
}
}
}
obj* l_list_map___main___at_lean_parser_syntax_find__idents___spec__5(obj* x_0, obj* x_1) {
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
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_3 = lean::cnstr_get(x_1, 0);
x_5 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 x_7 = x_1;
} else {
 lean::inc(x_3);
 lean::inc(x_5);
 lean::dec(x_1);
 x_7 = lean::box(0);
}
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
x_10 = lean::box(0);
if (lean::is_scalar(x_7)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_7;
}
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_10);
x_12 = l_list_map___main___at_lean_parser_syntax_find__idents___spec__4(x_0, x_3, x_11);
x_13 = l_list_join___main___rarg(x_12);
x_14 = l_list_map___main___at_lean_parser_syntax_find__idents___spec__5(x_0, x_5);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
return x_15;
}
}
}
obj* l_lean_parser_syntax_find__idents(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
x_2 = l_lean_parser_syntax_idents___main(x_1);
x_3 = l_list_map___main___at_lean_parser_syntax_find__idents___spec__5(x_0, x_2);
x_4 = l_list_join___main___rarg(x_3);
return x_4;
}
}
obj* l_list_map___main___at_lean_parser_syntax_find__idents___spec__4___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_list_map___main___at_lean_parser_syntax_find__idents___spec__4(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_list_map___main___at_lean_parser_syntax_find__idents___spec__5___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_list_map___main___at_lean_parser_syntax_find__idents___spec__5(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_lean_parser_syntax_find__idents___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_syntax_find__idents(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_lean_server_processed__file_next___main(obj* x_0) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 1:
{
obj* x_1; obj* x_4; 
x_1 = lean::cnstr_get(x_0, 3);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_1);
return x_4;
}
case 6:
{
obj* x_6; 
lean::dec(x_0);
x_6 = lean::box(0);
return x_6;
}
case 7:
{
obj* x_7; 
x_7 = lean::box(0);
return x_7;
}
default:
{
obj* x_8; obj* x_11; 
x_8 = lean::cnstr_get(x_0, 2);
lean::inc(x_8);
lean::dec(x_0);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_8);
return x_11;
}
}
}
}
obj* l_lean_server_processed__file_next(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_server_processed__file_next___main(x_0);
return x_1;
}
}
obj* l_lean_server_processed__file_messages__here___main(obj* x_0) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_1; obj* x_4; 
x_1 = lean::cnstr_get(x_0, 1);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
return x_4;
}
case 1:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_0, 2);
lean::inc(x_7);
lean::dec(x_0);
return x_7;
}
case 2:
{
obj* x_11; 
lean::dec(x_0);
x_11 = l_lean_message__log_empty;
return x_11;
}
case 3:
{
obj* x_12; obj* x_15; obj* x_16; 
x_12 = lean::cnstr_get(x_0, 1);
lean::inc(x_12);
lean::dec(x_0);
x_15 = l_lean_message__log_empty;
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_12);
lean::cnstr_set(x_16, 1, x_15);
return x_16;
}
case 4:
{
obj* x_17; obj* x_20; 
x_17 = lean::cnstr_get(x_0, 1);
lean::inc(x_17);
lean::dec(x_0);
x_20 = lean::cnstr_get(x_17, 5);
lean::inc(x_20);
lean::dec(x_17);
return x_20;
}
case 7:
{
obj* x_23; 
x_23 = l_lean_message__log_empty;
return x_23;
}
default:
{
obj* x_24; 
x_24 = lean::cnstr_get(x_0, 1);
lean::inc(x_24);
lean::dec(x_0);
return x_24;
}
}
}
}
obj* l_lean_server_processed__file_messages__here(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_server_processed__file_messages__here___main(x_0);
return x_1;
}
}
obj* l_lean_server_processed__file_messages__now___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_3; obj* x_4; uint8 x_6; 
lean::inc(x_0);
x_3 = lean_task_has_finished(lean::box(0), x_0, x_1);
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::unbox(x_4);
if (x_6 == 0)
{
obj* x_8; obj* x_10; obj* x_11; obj* x_12; 
lean::dec(x_0);
x_8 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 x_10 = x_3;
} else {
 lean::inc(x_8);
 lean::dec(x_3);
 x_10 = lean::box(0);
}
x_11 = lean::box(0);
if (lean::is_scalar(x_10)) {
 x_12 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_12 = x_10;
}
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_8);
return x_12;
}
else
{
obj* x_13; obj* x_15; obj* x_16; obj* x_19; 
x_13 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_set(x_3, 1, lean::box(0));
 x_15 = x_3;
} else {
 lean::inc(x_13);
 lean::dec(x_3);
 x_15 = lean::box(0);
}
x_16 = lean::task_get(x_0);
lean::dec(x_0);
lean::inc(x_16);
x_19 = l_lean_server_processed__file_next___main(x_16);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_20 = lean::box(0);
x_21 = l_lean_server_processed__file_messages__here___main(x_16);
x_22 = l_list_reverse___rarg(x_21);
x_23 = l_list_append___rarg(x_22, x_20);
if (lean::is_scalar(x_15)) {
 x_24 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_24 = x_15;
}
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_13);
return x_24;
}
else
{
obj* x_26; obj* x_29; obj* x_30; obj* x_32; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
lean::dec(x_15);
x_26 = lean::cnstr_get(x_19, 0);
lean::inc(x_26);
lean::dec(x_19);
x_29 = l_lean_server_processed__file_messages__now___main(x_26, x_13);
x_30 = lean::cnstr_get(x_29, 0);
x_32 = lean::cnstr_get(x_29, 1);
if (lean::is_exclusive(x_29)) {
 x_34 = x_29;
} else {
 lean::inc(x_30);
 lean::inc(x_32);
 lean::dec(x_29);
 x_34 = lean::box(0);
}
x_35 = l_lean_server_processed__file_messages__here___main(x_16);
x_36 = l_list_reverse___rarg(x_35);
x_37 = l_list_append___rarg(x_36, x_30);
if (lean::is_scalar(x_34)) {
 x_38 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_38 = x_34;
}
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_32);
return x_38;
}
}
}
}
obj* l_lean_server_processed__file_messages__now(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_server_processed__file_messages__now___main(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_server_processed__file_get__expanded__at__core___main___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::task_pure(x_0);
return x_1;
}
}
obj* l_lean_server_processed__file_get__expanded__at__core___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_3; obj* x_5; uint8 x_8; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 2);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::nat_dec_lt(x_0, x_3);
lean::dec(x_3);
if (x_8 == 0)
{
obj* x_10; obj* x_11; 
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_processed__file_get__expanded__at__core___main), 3, 2);
lean::closure_set(x_10, 0, x_0);
lean::closure_set(x_10, 1, x_1);
x_11 = lean::task_bind(x_5, x_10);
return x_11;
}
else
{
obj* x_15; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_0);
x_15 = l_lean_server_processed__file_get__expanded__at__core___main___closed__1;
return x_15;
}
}
case 1:
{
obj* x_16; obj* x_18; uint8 x_21; 
x_16 = lean::cnstr_get(x_2, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_2, 3);
lean::inc(x_18);
lean::dec(x_2);
x_21 = lean::nat_dec_lt(x_0, x_16);
lean::dec(x_16);
if (x_21 == 0)
{
obj* x_23; obj* x_24; 
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_processed__file_get__expanded__at__core___main), 3, 2);
lean::closure_set(x_23, 0, x_0);
lean::closure_set(x_23, 1, x_1);
x_24 = lean::task_bind(x_18, x_23);
return x_24;
}
else
{
obj* x_28; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_18);
x_28 = l_lean_server_processed__file_get__expanded__at__core___main___closed__1;
return x_28;
}
}
case 2:
{
obj* x_29; obj* x_31; obj* x_33; uint8 x_36; 
x_29 = lean::cnstr_get(x_2, 0);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_2, 1);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_2, 2);
lean::inc(x_33);
lean::dec(x_2);
x_36 = lean::nat_dec_le(x_0, x_29);
lean::dec(x_29);
if (x_36 == 0)
{
obj* x_39; obj* x_40; 
lean::dec(x_31);
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_processed__file_get__expanded__at__core___main), 3, 2);
lean::closure_set(x_39, 0, x_0);
lean::closure_set(x_39, 1, x_1);
x_40 = lean::task_bind(x_33, x_39);
return x_40;
}
else
{
obj* x_43; obj* x_44; obj* x_45; 
lean::dec(x_0);
lean::dec(x_33);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_1);
lean::cnstr_set(x_43, 1, x_31);
x_44 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_44, 0, x_43);
x_45 = lean::task_pure(x_44);
return x_45;
}
}
case 4:
{
obj* x_47; obj* x_49; obj* x_51; uint8 x_54; 
lean::dec(x_1);
x_47 = lean::cnstr_get(x_2, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_2, 1);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_2, 2);
lean::inc(x_51);
lean::dec(x_2);
x_54 = lean::nat_dec_lt(x_0, x_47);
lean::dec(x_47);
if (x_54 == 0)
{
obj* x_56; obj* x_59; obj* x_60; 
x_56 = lean::cnstr_get(x_49, 8);
lean::inc(x_56);
lean::dec(x_49);
x_59 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_processed__file_get__expanded__at__core___main), 3, 2);
lean::closure_set(x_59, 0, x_0);
lean::closure_set(x_59, 1, x_56);
x_60 = lean::task_bind(x_51, x_59);
return x_60;
}
else
{
obj* x_64; 
lean::dec(x_0);
lean::dec(x_49);
lean::dec(x_51);
x_64 = l_lean_server_processed__file_get__expanded__at__core___main___closed__1;
return x_64;
}
}
case 6:
{
obj* x_68; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_68 = l_lean_server_processed__file_get__expanded__at__core___main___closed__1;
return x_68;
}
case 7:
{
obj* x_71; 
lean::dec(x_1);
lean::dec(x_0);
x_71 = l_lean_server_processed__file_get__expanded__at__core___main___closed__1;
return x_71;
}
default:
{
obj* x_72; obj* x_74; uint8 x_77; 
x_72 = lean::cnstr_get(x_2, 0);
lean::inc(x_72);
x_74 = lean::cnstr_get(x_2, 2);
lean::inc(x_74);
lean::dec(x_2);
x_77 = lean::nat_dec_lt(x_0, x_72);
lean::dec(x_72);
if (x_77 == 0)
{
obj* x_79; obj* x_80; 
x_79 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_processed__file_get__expanded__at__core___main), 3, 2);
lean::closure_set(x_79, 0, x_0);
lean::closure_set(x_79, 1, x_1);
x_80 = lean::task_bind(x_74, x_79);
return x_80;
}
else
{
obj* x_84; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_74);
x_84 = l_lean_server_processed__file_get__expanded__at__core___main___closed__1;
return x_84;
}
}
}
}
}
obj* l_lean_server_processed__file_get__expanded__at__core(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_server_processed__file_get__expanded__at__core___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_server_processed__file_get__expanded__at(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = l_lean_elaborator_run___closed__2;
x_3 = l_lean_server_processed__file_get__expanded__at__core___main(x_1, x_2, x_0);
return x_3;
}
}
obj* l_lean_server_processed__file_proc__core___main___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
obj* x_9; 
x_9 = l_lean_server_processed__file_proc__core___main(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
obj* l_lean_server_processed__file_proc__core___main___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_10; obj* x_13; 
x_8 = lean::cnstr_get(x_0, 7);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 6);
lean::inc(x_10);
lean::dec(x_0);
x_13 = l_lean_server_processed__file_proc__core___main(x_1, x_2, x_3, x_4, x_8, x_10, x_5, x_6);
return x_13;
}
}
obj* _init_l_lean_server_processed__file_proc__core___main___lambda__3___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("elaborator died");
return x_0;
}
}
obj* _init_l_lean_server_processed__file_proc__core___main___lambda__3___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(7);
x_1 = lean::task_pure(x_0);
return x_1;
}
}
obj* l_lean_server_processed__file_proc__core___main___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10) {
_start:
{
obj* x_13; 
lean::inc(x_1);
lean::inc(x_0);
x_13 = lean::apply_1(x_0, x_1);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; obj* x_17; uint8 x_18; 
x_14 = lean::cnstr_get(x_13, 0);
lean::inc(x_14);
lean::dec(x_13);
x_17 = l_lean_parser_module_eoi;
x_18 = l_lean_parser_syntax_is__of__kind___main(x_17, x_1);
lean::dec(x_1);
if (x_18 == 0)
{
obj* x_20; obj* x_24; obj* x_25; uint8 x_26; obj* x_27; obj* x_28; obj* x_30; obj* x_31; obj* x_32; obj* x_34; obj* x_35; obj* x_36; 
x_20 = lean::cnstr_get(x_2, 2);
lean::inc(x_20);
lean::dec(x_2);
lean::inc(x_3);
x_24 = l_lean_file__map_to__position(x_3, x_4);
x_25 = lean::box(0);
x_26 = 2;
x_27 = l_string_join___closed__1;
x_28 = l_lean_server_processed__file_proc__core___main___lambda__3___closed__1;
lean::inc(x_5);
x_30 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_30, 0, x_5);
lean::cnstr_set(x_30, 1, x_24);
lean::cnstr_set(x_30, 2, x_25);
lean::cnstr_set(x_30, 3, x_27);
lean::cnstr_set(x_30, 4, x_28);
lean::cnstr_set_scalar(x_30, sizeof(void*)*5, x_26);
x_31 = x_30;
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_14);
lean::inc(x_20);
x_34 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_processed__file_proc__core___main___lambda__1___boxed), 9, 8);
lean::closure_set(x_34, 0, x_5);
lean::closure_set(x_34, 1, x_3);
lean::closure_set(x_34, 2, x_6);
lean::closure_set(x_34, 3, x_20);
lean::closure_set(x_34, 4, x_7);
lean::closure_set(x_34, 5, x_8);
lean::closure_set(x_34, 6, x_9);
lean::closure_set(x_34, 7, x_0);
x_35 = lean::mk_task(x_34);
x_36 = lean::alloc_cnstr(5, 3, 0);
lean::cnstr_set(x_36, 0, x_20);
lean::cnstr_set(x_36, 1, x_32);
lean::cnstr_set(x_36, 2, x_35);
return x_36;
}
else
{
obj* x_45; obj* x_48; obj* x_49; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_8);
lean::dec(x_7);
lean::dec(x_4);
lean::dec(x_6);
lean::dec(x_3);
lean::dec(x_0);
x_45 = lean::cnstr_get(x_2, 2);
lean::inc(x_45);
lean::dec(x_2);
x_48 = l_lean_server_processed__file_proc__core___main___lambda__3___closed__2;
x_49 = lean::alloc_cnstr(5, 3, 0);
lean::cnstr_set(x_49, 0, x_45);
lean::cnstr_set(x_49, 1, x_14);
lean::cnstr_set(x_49, 2, x_48);
return x_49;
}
}
else
{
obj* x_55; obj* x_57; obj* x_60; obj* x_65; obj* x_66; obj* x_67; 
lean::dec(x_8);
lean::dec(x_7);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_0);
x_55 = lean::cnstr_get(x_13, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_13, 1);
lean::inc(x_57);
lean::dec(x_13);
x_60 = lean::cnstr_get(x_2, 2);
lean::inc(x_60);
lean::dec(x_2);
lean::inc(x_60);
lean::inc(x_55);
x_65 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_processed__file_proc__core___main___lambda__2___boxed), 8, 7);
lean::closure_set(x_65, 0, x_55);
lean::closure_set(x_65, 1, x_5);
lean::closure_set(x_65, 2, x_3);
lean::closure_set(x_65, 3, x_6);
lean::closure_set(x_65, 4, x_60);
lean::closure_set(x_65, 5, x_9);
lean::closure_set(x_65, 6, x_57);
x_66 = lean::mk_task(x_65);
x_67 = lean::alloc_cnstr(4, 3, 0);
lean::cnstr_set(x_67, 0, x_60);
lean::cnstr_set(x_67, 1, x_55);
lean::cnstr_set(x_67, 2, x_66);
return x_67;
}
}
}
obj* l_lean_server_processed__file_proc__core___main___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
obj* x_10; obj* x_13; 
x_10 = lean::cnstr_get(x_0, 0);
lean::inc(x_10);
lean::inc(x_1);
x_13 = l_lean_expander_expand(x_10, x_1);
if (lean::obj_tag(x_13) == 0)
{
obj* x_15; obj* x_18; obj* x_22; obj* x_23; obj* x_24; 
lean::dec(x_8);
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
lean::dec(x_13);
x_18 = lean::cnstr_get(x_0, 2);
lean::inc(x_18);
lean::dec(x_0);
lean::inc(x_18);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_processed__file_proc__core___main___lambda__1___boxed), 9, 8);
lean::closure_set(x_22, 0, x_2);
lean::closure_set(x_22, 1, x_3);
lean::closure_set(x_22, 2, x_4);
lean::closure_set(x_22, 3, x_18);
lean::closure_set(x_22, 4, x_1);
lean::closure_set(x_22, 5, x_5);
lean::closure_set(x_22, 6, x_6);
lean::closure_set(x_22, 7, x_7);
x_23 = lean::mk_task(x_22);
x_24 = lean::alloc_cnstr(3, 3, 0);
lean::cnstr_set(x_24, 0, x_18);
lean::cnstr_set(x_24, 1, x_15);
lean::cnstr_set(x_24, 2, x_23);
return x_24;
}
else
{
obj* x_25; obj* x_30; obj* x_31; obj* x_32; 
x_25 = lean::cnstr_get(x_13, 0);
lean::inc(x_25);
lean::dec(x_13);
lean::inc(x_8);
lean::inc(x_25);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_processed__file_proc__core___main___lambda__3___boxed), 11, 10);
lean::closure_set(x_30, 0, x_7);
lean::closure_set(x_30, 1, x_25);
lean::closure_set(x_30, 2, x_0);
lean::closure_set(x_30, 3, x_3);
lean::closure_set(x_30, 4, x_8);
lean::closure_set(x_30, 5, x_2);
lean::closure_set(x_30, 6, x_4);
lean::closure_set(x_30, 7, x_1);
lean::closure_set(x_30, 8, x_5);
lean::closure_set(x_30, 9, x_6);
x_31 = lean::mk_task(x_30);
x_32 = lean::alloc_cnstr(2, 3, 0);
lean::cnstr_set(x_32, 0, x_8);
lean::cnstr_set(x_32, 1, x_25);
lean::cnstr_set(x_32, 2, x_31);
return x_32;
}
}
}
obj* _init_l_lean_server_processed__file_proc__core___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("parser died");
return x_0;
}
}
obj* _init_l_lean_server_processed__file_proc__core___main___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("lean server fuel exhausted");
return x_0;
}
}
obj* l_lean_server_processed__file_proc__core___main(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; uint8 x_9; 
x_8 = lean::mk_nat_obj(0u);
x_9 = lean::nat_dec_eq(x_2, x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::inc(x_5);
x_11 = lean::apply_1(x_6, x_5);
if (lean::obj_tag(x_11) == 0)
{
obj* x_15; obj* x_18; obj* x_20; obj* x_24; obj* x_25; uint8 x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
lean::dec(x_5);
lean::dec(x_7);
lean::dec(x_4);
x_15 = lean::cnstr_get(x_11, 0);
lean::inc(x_15);
lean::dec(x_11);
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_15, 1);
lean::inc(x_20);
lean::dec(x_15);
lean::inc(x_3);
x_24 = l_lean_file__map_to__position(x_1, x_3);
x_25 = lean::box(0);
x_26 = 2;
x_27 = l_string_join___closed__1;
x_28 = l_lean_server_processed__file_proc__core___main___closed__1;
x_29 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_29, 0, x_0);
lean::cnstr_set(x_29, 1, x_24);
lean::cnstr_set(x_29, 2, x_25);
lean::cnstr_set(x_29, 3, x_27);
lean::cnstr_set(x_29, 4, x_28);
lean::cnstr_set_scalar(x_29, sizeof(void*)*5, x_26);
x_30 = x_29;
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_20);
if (lean::obj_tag(x_18) == 0)
{
obj* x_33; obj* x_34; 
lean::dec(x_18);
x_33 = l_lean_server_processed__file_proc__core___main___lambda__3___closed__2;
x_34 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_34, 0, x_3);
lean::cnstr_set(x_34, 1, x_25);
lean::cnstr_set(x_34, 2, x_31);
lean::cnstr_set(x_34, 3, x_33);
return x_34;
}
else
{
obj* x_35; obj* x_38; obj* x_39; obj* x_40; 
x_35 = lean::cnstr_get(x_18, 0);
lean::inc(x_35);
lean::dec(x_18);
x_38 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_38, 0, x_35);
x_39 = l_lean_server_processed__file_proc__core___main___lambda__3___closed__2;
x_40 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_40, 0, x_3);
lean::cnstr_set(x_40, 1, x_38);
lean::cnstr_set(x_40, 2, x_31);
lean::cnstr_set(x_40, 3, x_39);
return x_40;
}
}
else
{
obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_50; obj* x_51; obj* x_52; 
x_41 = lean::cnstr_get(x_11, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_11, 1);
lean::inc(x_43);
lean::dec(x_11);
x_46 = lean::mk_nat_obj(1u);
x_47 = lean::nat_sub(x_2, x_46);
lean::inc(x_3);
lean::inc(x_41);
x_50 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_processed__file_proc__core___main___lambda__4___boxed), 10, 9);
lean::closure_set(x_50, 0, x_41);
lean::closure_set(x_50, 1, x_4);
lean::closure_set(x_50, 2, x_0);
lean::closure_set(x_50, 3, x_1);
lean::closure_set(x_50, 4, x_47);
lean::closure_set(x_50, 5, x_5);
lean::closure_set(x_50, 6, x_43);
lean::closure_set(x_50, 7, x_7);
lean::closure_set(x_50, 8, x_3);
x_51 = lean::mk_task(x_50);
x_52 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_52, 0, x_3);
lean::cnstr_set(x_52, 1, x_41);
lean::cnstr_set(x_52, 2, x_51);
return x_52;
}
}
else
{
obj* x_58; obj* x_59; uint8 x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
lean::dec(x_5);
lean::dec(x_7);
lean::dec(x_4);
lean::dec(x_6);
lean::inc(x_3);
x_58 = l_lean_file__map_to__position(x_1, x_3);
x_59 = lean::box(0);
x_60 = 2;
x_61 = l_string_join___closed__1;
x_62 = l_lean_server_processed__file_proc__core___main___closed__2;
x_63 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_63, 0, x_0);
lean::cnstr_set(x_63, 1, x_58);
lean::cnstr_set(x_63, 2, x_59);
lean::cnstr_set(x_63, 3, x_61);
lean::cnstr_set(x_63, 4, x_62);
lean::cnstr_set_scalar(x_63, sizeof(void*)*5, x_60);
x_64 = x_63;
x_65 = l_lean_message__log_empty;
x_66 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_66, 0, x_64);
lean::cnstr_set(x_66, 1, x_65);
x_67 = lean::alloc_cnstr(6, 2, 0);
lean::cnstr_set(x_67, 0, x_3);
lean::cnstr_set(x_67, 1, x_66);
return x_67;
}
}
}
obj* l_lean_server_processed__file_proc__core___main___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
obj* x_9; 
x_9 = l_lean_server_processed__file_proc__core___main___lambda__1(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean::dec(x_2);
lean::dec(x_8);
return x_9;
}
}
obj* l_lean_server_processed__file_proc__core___main___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_lean_server_processed__file_proc__core___main___lambda__2(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_3);
lean::dec(x_7);
return x_8;
}
}
obj* l_lean_server_processed__file_proc__core___main___lambda__3___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10) {
_start:
{
obj* x_11; 
x_11 = l_lean_server_processed__file_proc__core___main___lambda__3(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean::dec(x_10);
return x_11;
}
}
obj* l_lean_server_processed__file_proc__core___main___lambda__4___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
obj* x_10; 
x_10 = l_lean_server_processed__file_proc__core___main___lambda__4(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean::dec(x_9);
return x_10;
}
}
obj* l_lean_server_processed__file_proc__core___main___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_lean_server_processed__file_proc__core___main(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_2);
return x_8;
}
}
obj* l_lean_server_processed__file_proc__core(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
obj* x_9; 
x_9 = l_lean_server_processed__file_proc__core___main(x_0, x_1, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
obj* l_lean_server_processed__file_proc__core___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
obj* x_9; 
x_9 = l_lean_server_processed__file_proc__core(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean::dec(x_2);
lean::dec(x_3);
return x_9;
}
}
obj* l_lean_server_processed__file_proc___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; 
lean::inc(x_1);
lean::inc(x_0);
x_6 = l_lean_mk__config(x_0, x_1);
if (lean::obj_tag(x_6) == 0)
{
obj* x_8; obj* x_11; obj* x_12; obj* x_13; uint8 x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
lean::dec(x_1);
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
lean::dec(x_6);
x_11 = lean::mk_nat_obj(0u);
x_12 = l_lean_file__map_to__position(x_2, x_11);
x_13 = lean::box(0);
x_14 = 2;
x_15 = l_string_join___closed__1;
x_16 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_16, 0, x_0);
lean::cnstr_set(x_16, 1, x_12);
lean::cnstr_set(x_16, 2, x_13);
lean::cnstr_set(x_16, 3, x_15);
lean::cnstr_set(x_16, 4, x_8);
lean::cnstr_set_scalar(x_16, sizeof(void*)*5, x_14);
x_17 = x_16;
x_18 = l_lean_message__log_empty;
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_17);
lean::cnstr_set(x_19, 1, x_18);
x_20 = lean::alloc_cnstr(6, 2, 0);
lean::cnstr_set(x_20, 0, x_11);
lean::cnstr_set(x_20, 1, x_19);
return x_20;
}
else
{
obj* x_21; obj* x_25; obj* x_28; obj* x_29; obj* x_31; obj* x_32; obj* x_34; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; 
x_21 = lean::cnstr_get(x_6, 0);
lean::inc(x_21);
lean::dec(x_6);
lean::inc(x_1);
x_25 = l_lean_file__map_from__string(x_1);
lean::inc(x_1);
lean::inc(x_0);
x_28 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_28, 0, x_0);
lean::cnstr_set(x_28, 1, x_1);
lean::cnstr_set(x_28, 2, x_25);
x_29 = l_lean_expander_builtin__transformers;
lean::inc(x_28);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_28);
lean::cnstr_set(x_31, 1, x_29);
x_32 = l_io_prim_iterate__eio___at_lean_run__frontend___spec__13___closed__1;
lean::inc(x_21);
x_34 = l_lean_parser_run___at_lean_run__frontend___spec__1(x_21, x_1, x_32);
lean::inc(x_21);
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_28);
lean::cnstr_set(x_36, 1, x_21);
x_37 = l_lean_elaborator_run(x_36);
x_38 = lean::mk_nat_obj(9999999u);
x_39 = lean::mk_nat_obj(0u);
x_40 = l_lean_server_processed__file_proc__core___main(x_0, x_2, x_38, x_39, x_31, x_21, x_34, x_37);
return x_40;
}
}
}
obj* l_lean_server_processed__file_proc(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_processed__file_proc___lambda__1___boxed), 4, 3);
lean::closure_set(x_3, 0, x_0);
lean::closure_set(x_3, 1, x_2);
lean::closure_set(x_3, 2, x_1);
x_4 = lean::mk_task(x_3);
return x_4;
}
}
obj* l_lean_server_processed__file_proc___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_server_processed__file_proc___lambda__1(x_0, x_1, x_2, x_3);
lean::dec(x_3);
return x_4;
}
}
obj* l_lean_server_single__file__state_create(obj* x_0, obj* x_1) {
_start:
{
obj* x_3; obj* x_7; obj* x_9; obj* x_10; 
lean::inc(x_1);
x_3 = l_lean_file__map_from__string(x_1);
lean::inc(x_1);
lean::inc(x_3);
lean::inc(x_0);
x_7 = l_lean_server_processed__file_proc(x_0, x_3, x_1);
lean::inc(x_7);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_7);
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_0);
lean::cnstr_set(x_10, 1, x_1);
lean::cnstr_set(x_10, 2, x_3);
lean::cnstr_set(x_10, 3, x_7);
lean::cnstr_set(x_10, 4, x_9);
return x_10;
}
}
uint8 l_lean_server_single__file__state_finished(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 4);
if (lean::obj_tag(x_1) == 0)
{
uint8 x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
}
}
obj* l_lean_server_single__file__state_finished___boxed(obj* x_0) {
_start:
{
uint8 x_1; obj* x_2; 
x_1 = l_lean_server_single__file__state_finished(x_0);
x_2 = lean::box(x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_lean_server_single__file__state_messages__now(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 3);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_lean_server_processed__file_messages__now___main(x_2, x_1);
return x_5;
}
}
obj* l_lean_server_single__file__state_get__expanded__at___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_7; obj* x_8; 
x_3 = lean::cnstr_get(x_0, 2);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_lean_file__map_from__position(x_3, x_1);
x_7 = l_lean_elaborator_run___closed__2;
x_8 = l_lean_server_processed__file_get__expanded__at__core___main(x_6, x_7, x_2);
return x_8;
}
}
obj* l_lean_server_single__file__state_get__expanded__at(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 3);
lean::inc(x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_single__file__state_get__expanded__at___lambda__1___boxed), 3, 2);
lean::closure_set(x_4, 0, x_0);
lean::closure_set(x_4, 1, x_1);
x_5 = lean::task_bind(x_2, x_4);
return x_5;
}
}
obj* l_lean_server_single__file__state_get__expanded__at___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_server_single__file__state_get__expanded__at___lambda__1(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_lean_server_single__file__state_poll___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::cnstr_get(x_0, 4);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
uint8 x_4; 
x_4 = l_false_decidable;
if (x_4 == 0)
{
uint8 x_5; obj* x_6; obj* x_7; obj* x_8; 
x_5 = 0;
x_6 = lean::box(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_0);
lean::cnstr_set(x_7, 1, x_6);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
return x_8;
}
else
{
uint8 x_9; obj* x_10; obj* x_11; obj* x_12; 
x_9 = 1;
x_10 = lean::box(x_9);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_0);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_1);
return x_12;
}
}
else
{
obj* x_13; obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_23; uint8 x_25; 
x_13 = lean::cnstr_get(x_2, 0);
lean::inc(x_13);
lean::dec(x_2);
lean::inc(x_13);
x_17 = lean_task_has_finished(lean::box(0), x_13, x_1);
x_18 = lean::cnstr_get(x_17, 0);
x_20 = lean::cnstr_get(x_17, 1);
if (lean::is_exclusive(x_17)) {
 lean::cnstr_set(x_17, 0, lean::box(0));
 lean::cnstr_set(x_17, 1, lean::box(0));
 x_22 = x_17;
} else {
 lean::inc(x_18);
 lean::inc(x_20);
 lean::dec(x_17);
 x_22 = lean::box(0);
}
x_25 = lean::unbox(x_18);
if (x_25 == 0)
{
uint8 x_27; 
lean::dec(x_13);
x_27 = l_false_decidable;
if (x_27 == 0)
{
uint8 x_28; obj* x_29; obj* x_30; obj* x_31; 
x_28 = 0;
x_29 = lean::box(x_28);
if (lean::is_scalar(x_22)) {
 x_30 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_30 = x_22;
}
lean::cnstr_set(x_30, 0, x_0);
lean::cnstr_set(x_30, 1, x_29);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_20);
return x_31;
}
else
{
uint8 x_32; obj* x_33; obj* x_34; obj* x_35; 
x_32 = 1;
x_33 = lean::box(x_32);
if (lean::is_scalar(x_22)) {
 x_34 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_34 = x_22;
}
lean::cnstr_set(x_34, 0, x_0);
lean::cnstr_set(x_34, 1, x_33);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_20);
return x_35;
}
}
else
{
obj* x_37; 
lean::dec(x_22);
x_37 = lean::box(0);
x_23 = x_37;
goto lbl_24;
}
lbl_24:
{
obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_48; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_56; uint8 x_58; 
lean::dec(x_23);
x_39 = lean::cnstr_get(x_0, 0);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_0, 1);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_0, 2);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_0, 3);
lean::inc(x_45);
lean::dec(x_0);
x_48 = lean::task_get(x_13);
lean::dec(x_13);
lean::inc(x_48);
x_51 = l_lean_server_processed__file_next___main(x_48);
x_52 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_52, 0, x_39);
lean::cnstr_set(x_52, 1, x_41);
lean::cnstr_set(x_52, 2, x_43);
lean::cnstr_set(x_52, 3, x_45);
lean::cnstr_set(x_52, 4, x_51);
x_53 = l_lean_server_single__file__state_poll___main(x_52, x_20);
x_54 = lean::cnstr_get(x_53, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_54, 1);
lean::inc(x_56);
x_58 = lean::unbox(x_56);
if (x_58 == 0)
{
obj* x_59; obj* x_61; obj* x_62; obj* x_64; obj* x_65; obj* x_66; uint8 x_67; 
x_59 = lean::cnstr_get(x_53, 1);
if (lean::is_exclusive(x_53)) {
 lean::cnstr_release(x_53, 0);
 lean::cnstr_set(x_53, 1, lean::box(0));
 x_61 = x_53;
} else {
 lean::inc(x_59);
 lean::dec(x_53);
 x_61 = lean::box(0);
}
x_62 = lean::cnstr_get(x_54, 0);
if (lean::is_exclusive(x_54)) {
 lean::cnstr_set(x_54, 0, lean::box(0));
 lean::cnstr_release(x_54, 1);
 x_64 = x_54;
} else {
 lean::inc(x_62);
 lean::dec(x_54);
 x_64 = lean::box(0);
}
x_65 = l_lean_server_processed__file_messages__here___main(x_48);
x_66 = l_list_reverse___rarg(x_65);
x_67 = l_list_empty___main___rarg(x_66);
lean::dec(x_66);
if (x_67 == 0)
{
uint8 x_69; obj* x_70; obj* x_71; obj* x_72; 
x_69 = 1;
x_70 = lean::box(x_69);
if (lean::is_scalar(x_64)) {
 x_71 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_71 = x_64;
}
lean::cnstr_set(x_71, 0, x_62);
lean::cnstr_set(x_71, 1, x_70);
if (lean::is_scalar(x_61)) {
 x_72 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_72 = x_61;
}
lean::cnstr_set(x_72, 0, x_71);
lean::cnstr_set(x_72, 1, x_59);
return x_72;
}
else
{
uint8 x_73; obj* x_74; obj* x_75; obj* x_76; 
x_73 = 0;
x_74 = lean::box(x_73);
if (lean::is_scalar(x_64)) {
 x_75 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_75 = x_64;
}
lean::cnstr_set(x_75, 0, x_62);
lean::cnstr_set(x_75, 1, x_74);
if (lean::is_scalar(x_61)) {
 x_76 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_76 = x_61;
}
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_59);
return x_76;
}
}
else
{
obj* x_78; obj* x_80; obj* x_81; obj* x_83; uint8 x_84; obj* x_85; obj* x_86; obj* x_87; 
lean::dec(x_48);
x_78 = lean::cnstr_get(x_53, 1);
if (lean::is_exclusive(x_53)) {
 lean::cnstr_release(x_53, 0);
 x_80 = x_53;
} else {
 lean::inc(x_78);
 lean::dec(x_53);
 x_80 = lean::box(0);
}
x_81 = lean::cnstr_get(x_54, 0);
if (lean::is_exclusive(x_54)) {
 lean::cnstr_release(x_54, 1);
 x_83 = x_54;
} else {
 lean::inc(x_81);
 lean::dec(x_54);
 x_83 = lean::box(0);
}
x_84 = 1;
x_85 = lean::box(x_84);
if (lean::is_scalar(x_83)) {
 x_86 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_86 = x_83;
}
lean::cnstr_set(x_86, 0, x_81);
lean::cnstr_set(x_86, 1, x_85);
if (lean::is_scalar(x_80)) {
 x_87 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_87 = x_80;
}
lean::cnstr_set(x_87, 0, x_86);
lean::cnstr_set(x_87, 1, x_78);
return x_87;
}
}
}
}
}
obj* l_lean_server_single__file__state_poll(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_server_single__file__state_poll___main(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_server_document__uri() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_server_server__state_m() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* l_lean_server_server__state_with__state___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_11; 
lean::inc(x_1);
x_4 = lean::apply_2(x_0, x_1, x_2);
x_5 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 x_9 = x_4;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_4);
 x_9 = lean::box(0);
}
if (lean::is_scalar(x_9)) {
 x_10 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_10 = x_9;
}
lean::cnstr_set(x_10, 0, x_5);
lean::cnstr_set(x_10, 1, x_1);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_7);
return x_11;
}
}
obj* l_lean_server_server__state_with__state(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_server__state_with__state___rarg), 3, 0);
return x_1;
}
}
obj* l_lean_server_server__state_with__state___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_server_server__state_with__state(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_jsonrpc_write__msg__raw___at_lean_server_server__state_send__msg___spec__2___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = l_jsonrpc_mk__msg__raw(x_0);
x_3 = l___private_init_io_13__put__str___at_lean_run__frontend___spec__5(x_2, x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_jsonrpc_write__msg__raw___at_lean_server_server__state_send__msg___spec__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_write__msg__raw___at_lean_server_server__state_send__msg___spec__2___rarg), 2, 0);
return x_1;
}
}
obj* l_jsonrpc_write__msg___at_lean_server_server__state_send__msg___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 2);
lean::inc(x_7);
lean::dec(x_1);
x_10 = l_jsonrpc_message_has__to__json___closed__1;
x_11 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__2(x_10, x_3);
x_12 = l_jsonrpc_message_has__to__json___closed__2;
x_13 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__1(x_12, x_5);
x_14 = l_jsonrpc_message_has__to__json___closed__3;
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_7);
x_16 = lean::box(0);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_13);
lean::cnstr_set(x_18, 1, x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_11);
lean::cnstr_set(x_19, 1, x_18);
x_20 = l_jsonrpc_message_has__to__json___closed__4;
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_19);
x_22 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_22, 0, x_21);
x_23 = l_jsonrpc_write__msg__raw___at_lean_server_server__state_send__msg___spec__2___rarg(x_22, x_2);
return x_23;
}
case 1:
{
obj* x_24; obj* x_26; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
x_24 = lean::cnstr_get(x_1, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_1, 1);
lean::inc(x_26);
lean::dec(x_1);
x_29 = l_jsonrpc_message_has__to__json___closed__1;
x_30 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__2(x_29, x_24);
x_31 = l_jsonrpc_message_has__to__json___closed__5;
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_26);
x_33 = lean::box(0);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_32);
lean::cnstr_set(x_34, 1, x_33);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_30);
lean::cnstr_set(x_35, 1, x_34);
x_36 = l_jsonrpc_message_has__to__json___closed__4;
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_35);
x_38 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_38, 0, x_37);
x_39 = l_jsonrpc_write__msg__raw___at_lean_server_server__state_send__msg___spec__2___rarg(x_38, x_2);
return x_39;
}
case 2:
{
obj* x_40; obj* x_42; obj* x_44; obj* x_46; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
x_40 = lean::cnstr_get(x_1, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_1, 1);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_1, 2);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_1, 3);
lean::inc(x_46);
lean::dec(x_1);
x_49 = l_jsonrpc_message_has__to__json___closed__1;
x_50 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__2(x_49, x_40);
x_51 = l_jsonrpc_message_has__to__json___closed__6;
x_52 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__4(x_51, x_42);
x_53 = l_jsonrpc_message_has__to__json___closed__7;
x_54 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__1(x_53, x_44);
x_55 = l_jsonrpc_message_has__to__json___closed__8;
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_55);
lean::cnstr_set(x_56, 1, x_46);
x_57 = lean::box(0);
x_58 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_58, 0, x_56);
lean::cnstr_set(x_58, 1, x_57);
x_59 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_59, 0, x_54);
lean::cnstr_set(x_59, 1, x_58);
x_60 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_60, 0, x_52);
lean::cnstr_set(x_60, 1, x_59);
x_61 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_61, 0, x_60);
x_62 = l_jsonrpc_message_has__to__json___closed__9;
x_63 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_61);
x_64 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_57);
x_65 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_65, 0, x_50);
lean::cnstr_set(x_65, 1, x_64);
x_66 = l_jsonrpc_message_has__to__json___closed__4;
x_67 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_65);
x_68 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_68, 0, x_67);
x_69 = l_jsonrpc_write__msg__raw___at_lean_server_server__state_send__msg___spec__2___rarg(x_68, x_2);
return x_69;
}
default:
{
obj* x_70; obj* x_72; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; 
x_70 = lean::cnstr_get(x_1, 0);
lean::inc(x_70);
x_72 = lean::cnstr_get(x_1, 1);
lean::inc(x_72);
lean::dec(x_1);
x_75 = l_jsonrpc_message_has__to__json___closed__2;
x_76 = l___private_init_lean_server_jsonrpc_1__mk__field___at_jsonrpc_message_has__to__json___spec__1(x_75, x_70);
x_77 = l_jsonrpc_message_has__to__json___closed__3;
x_78 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_78, 0, x_77);
lean::cnstr_set(x_78, 1, x_72);
x_79 = lean::box(0);
x_80 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_80, 0, x_78);
lean::cnstr_set(x_80, 1, x_79);
x_81 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_81, 0, x_76);
lean::cnstr_set(x_81, 1, x_80);
x_82 = l_jsonrpc_message_has__to__json___closed__4;
x_83 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_83, 0, x_82);
lean::cnstr_set(x_83, 1, x_81);
x_84 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_84, 0, x_83);
x_85 = l_jsonrpc_write__msg__raw___at_lean_server_server__state_send__msg___spec__2___rarg(x_84, x_2);
return x_85;
}
}
}
}
obj* l_lean_server_server__state_send__msg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_1, 4);
lean::inc(x_3);
x_5 = l_jsonrpc_write__msg___at_lean_server_server__state_send__msg___spec__1(x_3, x_0, x_2);
lean::dec(x_3);
x_7 = lean::cnstr_get(x_5, 1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 x_9 = x_5;
} else {
 lean::inc(x_7);
 lean::dec(x_5);
 x_9 = lean::box(0);
}
x_10 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_11 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_11 = x_9;
}
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_1);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_7);
return x_12;
}
}
obj* l_jsonrpc_write__msg__raw___at_lean_server_server__state_send__msg___spec__2___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_jsonrpc_write__msg__raw___at_lean_server_server__state_send__msg___spec__2(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_jsonrpc_write__msg___at_lean_server_server__state_send__msg___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_jsonrpc_write__msg___at_lean_server_server__state_send__msg___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* _init_l_lean_server_server__state_send__error___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_43; 
x_0 = l_int_one;
x_1 = lean::int_add(x_0, x_0);
x_2 = lean::int_add(x_1, x_0);
lean::dec(x_1);
x_4 = lean::int_add(x_2, x_2);
lean::dec(x_2);
x_6 = lean::int_add(x_4, x_0);
lean::dec(x_4);
x_8 = lean::int_add(x_6, x_6);
lean::dec(x_6);
x_10 = lean::int_add(x_8, x_0);
lean::dec(x_8);
x_12 = lean::int_add(x_10, x_10);
lean::dec(x_10);
x_14 = lean::int_add(x_12, x_0);
lean::dec(x_12);
x_16 = lean::int_add(x_14, x_14);
lean::dec(x_14);
x_18 = lean::int_add(x_16, x_16);
lean::dec(x_16);
x_20 = lean::int_add(x_18, x_0);
lean::dec(x_18);
x_22 = lean::int_add(x_20, x_20);
lean::dec(x_20);
x_24 = lean::int_add(x_22, x_22);
lean::dec(x_22);
x_26 = lean::int_add(x_24, x_24);
lean::dec(x_24);
x_28 = lean::int_add(x_26, x_26);
lean::dec(x_26);
x_30 = lean::int_add(x_28, x_28);
lean::dec(x_28);
x_32 = lean::int_add(x_30, x_30);
lean::dec(x_30);
x_34 = lean::int_add(x_32, x_32);
lean::dec(x_32);
x_36 = lean::int_add(x_34, x_34);
lean::dec(x_34);
x_38 = lean::int_add(x_36, x_0);
lean::dec(x_36);
x_40 = lean::int_neg(x_38);
lean::dec(x_38);
x_42 = lean::mk_nat_obj(0u);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_40);
lean::cnstr_set(x_43, 1, x_42);
return x_43;
}
}
obj* l_lean_server_server__state_send__error(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = l_lean_server_server__state_send__error___closed__1;
x_6 = lean::alloc_cnstr(2, 4, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_5);
lean::cnstr_set(x_6, 2, x_1);
lean::cnstr_set(x_6, 3, x_2);
x_7 = l_lean_server_server__state_send__msg(x_6, x_3, x_4);
return x_7;
}
}
obj* l_lean_server_server__state_send__unrelated__error(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = lean::box(2);
x_5 = l_lean_server_server__state_send__error(x_4, x_0, x_1, x_2, x_3);
return x_5;
}
}
obj* _init_l_lean_server_server__state_log___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = lean::mk_nat_obj(0u);
x_1 = l_json__number_from__nat(x_0);
x_2 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
x_3 = lean::mk_string("type");
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
return x_4;
}
}
obj* _init_l_lean_server_server__state_log___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("window/logMessage");
return x_0;
}
}
obj* l_lean_server_server__state_log(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_3 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_3, 0, x_0);
x_4 = l_jsonrpc_message_has__to__json___closed__7;
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_6);
x_8 = l_lean_server_server__state_log___closed__1;
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_10, 0, x_9);
x_11 = l_lean_server_server__state_log___closed__2;
x_12 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_10);
x_13 = l_lean_server_server__state_send__msg(x_12, x_1, x_2);
return x_13;
}
}
obj* l_list_map___main___at_lean_server_server__state_wait___spec__1(obj* x_0) {
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
obj* x_2; obj* x_4; obj* x_6; obj* x_7; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_list_map___main___at_lean_server_server__state_wait___spec__1(x_4);
if (lean::obj_tag(x_2) == 0)
{
obj* x_8; obj* x_9; 
x_8 = lean::box(0);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
return x_9;
}
else
{
obj* x_10; obj* x_13; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_2, 0);
lean::inc(x_10);
lean::dec(x_2);
x_13 = lean::box(0);
if (lean::is_scalar(x_6)) {
 x_14 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_14 = x_6;
}
lean::cnstr_set(x_14, 0, x_10);
lean::cnstr_set(x_14, 1, x_13);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_7);
return x_15;
}
}
}
}
obj* l_list_map___main___at_lean_server_server__state_wait___spec__2(obj* x_0) {
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
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_10; obj* x_11; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
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
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
lean::dec(x_2);
x_10 = l_list_map___main___at_lean_server_server__state_wait___spec__2(x_4);
x_11 = lean::cnstr_get(x_7, 4);
lean::inc(x_11);
lean::dec(x_7);
x_14 = lean::box(0);
if (lean::is_scalar(x_6)) {
 x_15 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_15 = x_6;
}
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_14);
x_16 = l_list_map___main___at_lean_server_server__state_wait___spec__1(x_15);
x_17 = l_list_join___main___rarg(x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_10);
return x_18;
}
}
}
obj* l_list_map___main___at_lean_server_server__state_wait___spec__3(obj* x_0) {
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
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
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
x_7 = lean::cnstr_get(x_2, 2);
lean::inc(x_7);
lean::dec(x_2);
x_10 = l_list_map___main___at_lean_server_server__state_wait___spec__3(x_4);
x_11 = lean::box(0);
if (lean::is_scalar(x_6)) {
 x_12 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_12 = x_6;
}
lean::cnstr_set(x_12, 0, x_7);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_10);
return x_13;
}
}
}
obj* l_list_map___main___at_lean_server_server__state_wait___spec__4(obj* x_0) {
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
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; 
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
x_7 = l_list_map___main___at_lean_server_server__state_wait___spec__4(x_4);
if (lean::is_scalar(x_6)) {
 x_8 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_8 = x_6;
}
lean::cnstr_set(x_8, 0, x_2);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
}
obj* l_list_map___main___at_lean_server_server__state_wait___spec__5(obj* x_0) {
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
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; 
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
x_7 = l_list_map___main___at_lean_server_server__state_wait___spec__5(x_4);
if (lean::is_scalar(x_6)) {
 x_8 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_8 = x_6;
}
lean::cnstr_set(x_8, 0, x_2);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
}
obj* l_lean_server_server__state_wait(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_23; obj* x_24; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = l_rbmap_to__list___main___rarg(x_2);
x_5 = l_list_map___main___at_lean_server_server__state_wait___spec__2(x_4);
x_6 = l_list_join___main___rarg(x_5);
x_7 = lean::cnstr_get(x_0, 2);
lean::inc(x_7);
x_9 = l_list_map___main___at_lean_server_server__state_wait___spec__3(x_7);
x_10 = l_list_join___main___rarg(x_9);
x_11 = lean::cnstr_get(x_0, 1);
lean::inc(x_11);
x_13 = l_list_map___main___at_lean_server_server__state_wait___spec__4(x_6);
x_14 = l_list_map___main___at_lean_server_server__state_wait___spec__5(x_10);
x_15 = l_list_append___rarg(x_13, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_11);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean_io_wait_any_2(x_16, x_1);
x_18 = lean::cnstr_get(x_17, 0);
x_20 = lean::cnstr_get(x_17, 1);
if (lean::is_exclusive(x_17)) {
 x_22 = x_17;
} else {
 lean::inc(x_18);
 lean::inc(x_20);
 lean::dec(x_17);
 x_22 = lean::box(0);
}
if (lean::is_scalar(x_22)) {
 x_23 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_23 = x_22;
}
lean::cnstr_set(x_23, 0, x_18);
lean::cnstr_set(x_23, 1, x_0);
x_24 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_20);
return x_24;
}
}
obj* l_lean_server_server__state_json__of__pos(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::mk_nat_obj(1u);
x_4 = lean::nat_sub(x_1, x_3);
lean::dec(x_1);
x_6 = l_json__number_from__nat(x_4);
x_7 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
x_8 = l_lsp_position_has__to__json___closed__1;
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
x_13 = l_json__number_from__nat(x_10);
x_14 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_14, 0, x_13);
x_15 = l_lsp_position_has__to__json___closed__2;
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_14);
x_17 = lean::box(0);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_9);
lean::cnstr_set(x_19, 1, x_18);
x_20 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_20, 0, x_19);
return x_20;
}
}
obj* l_lean_server_server__state_json__of__range(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_2 = l_lean_server_server__state_json__of__pos(x_0);
x_3 = l_lsp_range_has__to__json___closed__1;
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
x_5 = l_lean_server_server__state_json__of__pos(x_1);
x_6 = l_lsp_range_has__to__json___closed__2;
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_5);
x_8 = lean::box(0);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_4);
lean::cnstr_set(x_10, 1, x_9);
x_11 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
}
obj* _init_l_lean_server_server__state_diag__of__msg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::mk_string("Lean");
x_1 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::mk_string("source");
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l_lean_server_server__state_diag__of__msg___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = lean::mk_nat_obj(3u);
x_1 = l_json__number_from__nat(x_0);
x_2 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
x_3 = lean::mk_string("severity");
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
return x_4;
}
}
obj* _init_l_lean_server_server__state_diag__of__msg___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = lean::mk_nat_obj(2u);
x_1 = l_json__number_from__nat(x_0);
x_2 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
x_3 = lean::mk_string("severity");
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
return x_4;
}
}
obj* _init_l_lean_server_server__state_diag__of__msg___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = lean::mk_nat_obj(1u);
x_1 = l_json__number_from__nat(x_0);
x_2 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
x_3 = lean::mk_string("severity");
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
return x_4;
}
}
obj* l_lean_server_server__state_diag__of__msg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; uint8 x_10; obj* x_11; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_1 = lean::cnstr_get(x_0, 1);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 2);
lean::inc(x_3);
x_5 = l_option_get__or__else___main___rarg(x_3, x_1);
lean::dec(x_3);
x_7 = l_lean_server_server__state_json__of__range(x_1, x_5);
x_8 = l_lsp_location_has__to__json___closed__2;
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*5);
x_11 = lean::cnstr_get(x_0, 4);
lean::inc(x_11);
lean::dec(x_0);
x_14 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_14, 0, x_11);
x_15 = l_jsonrpc_message_has__to__json___closed__7;
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_14);
x_17 = lean::box(0);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_17);
x_19 = l_lean_server_server__state_diag__of__msg___closed__1;
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_18);
switch (x_10) {
case 0:
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_21 = l_lean_server_server__state_diag__of__msg___closed__2;
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_20);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_9);
lean::cnstr_set(x_23, 1, x_22);
x_24 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
return x_24;
}
case 1:
{
obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_25 = l_lean_server_server__state_diag__of__msg___closed__3;
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_20);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_9);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_28, 0, x_27);
return x_28;
}
default:
{
obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_29 = l_lean_server_server__state_diag__of__msg___closed__4;
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_20);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_9);
lean::cnstr_set(x_31, 1, x_30);
x_32 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_32, 0, x_31);
return x_32;
}
}
}
}
obj* l_list_map___main___at_lean_server_server__state_send__diagnostics__core___spec__1(obj* x_0) {
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
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
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
x_7 = l_lean_server_server__state_diag__of__msg(x_2);
x_8 = l_list_map___main___at_lean_server_server__state_send__diagnostics__core___spec__1(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_lean_server_server__state_send__diagnostics__core___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("diagnostics");
return x_0;
}
}
obj* _init_l_lean_server_server__state_send__diagnostics__core___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("textDocument/publishDiagnostics");
return x_0;
}
}
obj* l_lean_server_server__state_send__diagnostics__core(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_4 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_4, 0, x_0);
x_5 = l_lsp_location_has__to__json___closed__1;
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_4);
x_7 = l_list_map___main___at_lean_server_server__state_send__diagnostics__core___spec__1(x_1);
x_8 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
x_9 = l_lean_server_server__state_send__diagnostics__core___closed__1;
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_8);
x_11 = lean::box(0);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_6);
lean::cnstr_set(x_13, 1, x_12);
x_14 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_14, 0, x_13);
x_15 = l_lean_server_server__state_send__diagnostics__core___closed__2;
x_16 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_14);
x_17 = l_lean_server_server__state_send__msg(x_16, x_2, x_3);
return x_17;
}
}
obj* l_lean_server_server__state_send__diagnostics(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_10; 
x_4 = l_lean_server_single__file__state_messages__now(x_1, x_3);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
lean::dec(x_4);
x_10 = l_lean_server_server__state_send__diagnostics__core(x_0, x_5, x_2, x_7);
return x_10;
}
}
obj* l_lean_server_server__state_clear__diagnostics(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = l_lean_server_server__state_send__diagnostics__core(x_0, x_3, x_1, x_2);
return x_4;
}
}
obj* l_list_filter___main___at_lean_server_server__state_cancel__requests__core___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_10; uint8 x_11; 
x_3 = lean::cnstr_get(x_1, 0);
x_5 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_7 = x_1;
} else {
 lean::inc(x_3);
 lean::inc(x_5);
 lean::dec(x_1);
 x_7 = lean::box(0);
}
lean::inc(x_3);
lean::inc(x_0);
x_10 = lean::apply_1(x_0, x_3);
x_11 = lean::unbox(x_10);
if (x_11 == 0)
{
lean::dec(x_7);
lean::dec(x_3);
x_1 = x_5;
goto _start;
}
else
{
obj* x_15; obj* x_16; 
x_15 = l_list_filter___main___at_lean_server_server__state_cancel__requests__core___spec__1(x_0, x_5);
if (lean::is_scalar(x_7)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_7;
}
lean::cnstr_set(x_16, 0, x_3);
lean::cnstr_set(x_16, 1, x_15);
return x_16;
}
}
}
}
obj* l_list_map___main___at_lean_server_server__state_cancel__requests__core___spec__2(obj* x_0) {
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
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_10; obj* x_11; 
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
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
lean::dec(x_2);
x_10 = l_list_map___main___at_lean_server_server__state_cancel__requests__core___spec__2(x_4);
if (lean::is_scalar(x_6)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_6;
}
lean::cnstr_set(x_11, 0, x_7);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
}
obj* l_list_filter___main___at_lean_server_server__state_cancel__requests__core___spec__3(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_10; uint8 x_11; 
x_3 = lean::cnstr_get(x_1, 0);
x_5 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_7 = x_1;
} else {
 lean::inc(x_3);
 lean::inc(x_5);
 lean::dec(x_1);
 x_7 = lean::box(0);
}
lean::inc(x_3);
lean::inc(x_0);
x_10 = lean::apply_1(x_0, x_3);
x_11 = lean::unbox(x_10);
if (x_11 == 0)
{
obj* x_12; obj* x_13; 
x_12 = l_list_filter___main___at_lean_server_server__state_cancel__requests__core___spec__3(x_0, x_5);
if (lean::is_scalar(x_7)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_7;
}
lean::cnstr_set(x_13, 0, x_3);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
else
{
lean::dec(x_7);
lean::dec(x_3);
x_1 = x_5;
goto _start;
}
}
}
}
obj* l_list_mmap_x_27___main___at_lean_server_server__state_cancel__requests__core___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_4);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_27; 
x_10 = lean::cnstr_get(x_2, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_2, 1);
lean::inc(x_12);
lean::dec(x_2);
x_15 = lean::mk_nat_obj(0u);
lean::inc(x_0);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_0);
lean::cnstr_set(x_17, 1, x_15);
x_18 = l_json_parser_any__core___main___closed__9;
lean::inc(x_1);
x_20 = lean::alloc_cnstr(2, 4, 0);
lean::cnstr_set(x_20, 0, x_10);
lean::cnstr_set(x_20, 1, x_17);
lean::cnstr_set(x_20, 2, x_1);
lean::cnstr_set(x_20, 3, x_18);
x_21 = l_lean_server_server__state_send__msg(x_20, x_3, x_4);
x_22 = lean::cnstr_get(x_21, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_21, 1);
lean::inc(x_24);
lean::dec(x_21);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
lean::dec(x_22);
x_2 = x_12;
x_3 = x_27;
x_4 = x_24;
goto _start;
}
}
}
obj* l_lean_server_server__state_cancel__requests__core(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_9; obj* x_10; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_21; obj* x_22; 
x_5 = lean::cnstr_get(x_3, 2);
lean::inc(x_5);
lean::inc(x_5);
lean::inc(x_0);
x_9 = l_list_filter___main___at_lean_server_server__state_cancel__requests__core___spec__1(x_0, x_5);
x_10 = l_list_map___main___at_lean_server_server__state_cancel__requests__core___spec__2(x_9);
x_11 = lean::cnstr_get(x_3, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_3, 1);
lean::inc(x_13);
x_15 = l_list_filter___main___at_lean_server_server__state_cancel__requests__core___spec__3(x_0, x_5);
x_16 = lean::cnstr_get(x_3, 3);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_3, 4);
lean::inc(x_18);
lean::dec(x_3);
x_21 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_21, 0, x_11);
lean::cnstr_set(x_21, 1, x_13);
lean::cnstr_set(x_21, 2, x_15);
lean::cnstr_set(x_21, 3, x_16);
lean::cnstr_set(x_21, 4, x_18);
x_22 = l_list_mmap_x_27___main___at_lean_server_server__state_cancel__requests__core___spec__4(x_1, x_2, x_10, x_21, x_4);
return x_22;
}
}
uint8 l_lean_server_server__state_clear__requests___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::cnstr_get(x_1, 0);
if (lean::obj_tag(x_2) == 0)
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
else
{
obj* x_4; uint8 x_5; 
x_4 = lean::cnstr_get(x_2, 0);
x_5 = lean::string_dec_eq(x_4, x_0);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = 0;
return x_6;
}
else
{
uint8 x_7; 
x_7 = 1;
return x_7;
}
}
}
}
obj* _init_l_lean_server_server__state_clear__requests___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_34; 
x_0 = l_int_one;
x_1 = lean::int_add(x_0, x_0);
x_2 = lean::int_add(x_1, x_1);
lean::dec(x_1);
x_4 = lean::int_add(x_2, x_2);
lean::dec(x_2);
x_6 = lean::int_add(x_4, x_4);
lean::dec(x_4);
x_8 = lean::int_add(x_6, x_6);
lean::dec(x_6);
x_10 = lean::int_add(x_8, x_8);
lean::dec(x_8);
x_12 = lean::int_add(x_10, x_10);
lean::dec(x_10);
x_14 = lean::int_add(x_12, x_12);
lean::dec(x_12);
x_16 = lean::int_add(x_14, x_14);
lean::dec(x_14);
x_18 = lean::int_add(x_16, x_16);
lean::dec(x_16);
x_20 = lean::int_add(x_18, x_0);
lean::dec(x_18);
x_22 = lean::int_add(x_20, x_20);
lean::dec(x_20);
x_24 = lean::int_add(x_22, x_22);
lean::dec(x_22);
x_26 = lean::int_add(x_24, x_24);
lean::dec(x_24);
x_28 = lean::int_add(x_26, x_26);
lean::dec(x_26);
x_30 = lean::int_add(x_28, x_28);
lean::dec(x_28);
x_32 = lean::int_add(x_30, x_0);
lean::dec(x_30);
x_34 = lean::int_neg(x_32);
lean::dec(x_32);
return x_34;
}
}
obj* _init_l_lean_server_server__state_clear__requests___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("content modified");
return x_0;
}
}
obj* l_lean_server_server__state_clear__requests(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_server__state_clear__requests___lambda__1___boxed), 2, 1);
lean::closure_set(x_3, 0, x_0);
x_4 = l_lean_server_server__state_clear__requests___closed__1;
x_5 = l_lean_server_server__state_clear__requests___closed__2;
x_6 = l_lean_server_server__state_cancel__requests__core(x_3, x_4, x_5, x_1, x_2);
return x_6;
}
}
obj* l_lean_server_server__state_clear__requests___lambda__1___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_server_server__state_clear__requests___lambda__1(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* l_rbnode_ins___main___at_lean_server_server__state_handle__poll___spec__3(obj* x_0, obj* x_1, obj* x_2) {
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
x_16 = lean::string_dec_lt(x_1, x_9);
if (x_16 == 0)
{
uint8 x_17; 
x_17 = lean::string_dec_lt(x_9, x_1);
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
x_22 = l_rbnode_ins___main___at_lean_server_server__state_handle__poll___spec__3(x_13, x_1, x_2);
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
x_25 = l_rbnode_ins___main___at_lean_server_server__state_handle__poll___spec__3(x_7, x_1, x_2);
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
x_37 = lean::string_dec_lt(x_1, x_30);
if (x_37 == 0)
{
uint8 x_38; 
x_38 = lean::string_dec_lt(x_30, x_1);
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
x_44 = l_rbnode_ins___main___at_lean_server_server__state_handle__poll___spec__3(x_34, x_1, x_2);
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
x_50 = l_rbnode_ins___main___at_lean_server_server__state_handle__poll___spec__3(x_34, x_1, x_2);
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
x_53 = l_rbnode_ins___main___at_lean_server_server__state_handle__poll___spec__3(x_28, x_1, x_2);
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
x_59 = l_rbnode_ins___main___at_lean_server_server__state_handle__poll___spec__3(x_28, x_1, x_2);
x_60 = l_rbnode_balance1___main___rarg(x_58, x_59);
return x_60;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_server_server__state_handle__poll___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = l_rbnode_is__red___main___rarg(x_0);
if (x_3 == 0)
{
obj* x_4; 
x_4 = l_rbnode_ins___main___at_lean_server_server__state_handle__poll___spec__3(x_0, x_1, x_2);
return x_4;
}
else
{
obj* x_5; obj* x_6; 
x_5 = l_rbnode_ins___main___at_lean_server_server__state_handle__poll___spec__3(x_0, x_1, x_2);
x_6 = l_rbnode_set__black___main___rarg(x_5);
return x_6;
}
}
}
obj* l_rbmap_insert___main___at_lean_server_server__state_handle__poll___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_server_server__state_handle__poll___spec__2(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_server_server__state_handle__poll(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_14; obj* x_15; obj* x_19; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_29; uint8 x_30; 
x_4 = l_lean_server_single__file__state_poll___main(x_1, x_3);
x_5 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_set(x_4, 0, lean::box(0));
 lean::cnstr_set(x_4, 1, lean::box(0));
 x_9 = x_4;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_4);
 x_9 = lean::box(0);
}
x_10 = lean::cnstr_get(x_5, 0);
x_12 = lean::cnstr_get(x_5, 1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_set(x_5, 0, lean::box(0));
 lean::cnstr_set(x_5, 1, lean::box(0));
 x_14 = x_5;
} else {
 lean::inc(x_10);
 lean::inc(x_12);
 lean::dec(x_5);
 x_14 = lean::box(0);
}
x_15 = lean::cnstr_get(x_2, 0);
lean::inc(x_15);
lean::inc(x_10);
lean::inc(x_0);
x_19 = l_rbnode_insert___at_lean_server_server__state_handle__poll___spec__2(x_15, x_0, x_10);
x_20 = lean::cnstr_get(x_2, 1);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_2, 2);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_2, 3);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_2, 4);
lean::inc(x_26);
lean::dec(x_2);
x_29 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_29, 0, x_19);
lean::cnstr_set(x_29, 1, x_20);
lean::cnstr_set(x_29, 2, x_22);
lean::cnstr_set(x_29, 3, x_24);
lean::cnstr_set(x_29, 4, x_26);
x_30 = lean::unbox(x_12);
if (x_30 == 0)
{
obj* x_33; obj* x_34; obj* x_35; 
lean::dec(x_10);
lean::dec(x_0);
x_33 = lean::box(0);
if (lean::is_scalar(x_14)) {
 x_34 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_34 = x_14;
}
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_29);
if (lean::is_scalar(x_9)) {
 x_35 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_35 = x_9;
}
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_7);
return x_35;
}
else
{
obj* x_38; 
lean::dec(x_14);
lean::dec(x_9);
x_38 = l_lean_server_server__state_send__diagnostics(x_0, x_10, x_29, x_7);
return x_38;
}
}
}
obj* l_lean_server_server__state_run__except___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; 
x_4 = lean::apply_2(x_1, x_2, x_3);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_5, 0);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_9; obj* x_12; obj* x_15; obj* x_18; obj* x_19; 
x_9 = lean::cnstr_get(x_4, 1);
lean::inc(x_9);
lean::dec(x_4);
x_12 = lean::cnstr_get(x_5, 1);
lean::inc(x_12);
lean::dec(x_5);
x_15 = lean::cnstr_get(x_7, 0);
lean::inc(x_15);
lean::dec(x_7);
x_18 = lean::box(0);
x_19 = l_lean_server_server__state_send__error(x_0, x_15, x_18, x_12, x_9);
return x_19;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
lean::dec(x_7);
lean::dec(x_0);
x_22 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 x_24 = x_4;
} else {
 lean::inc(x_22);
 lean::dec(x_4);
 x_24 = lean::box(0);
}
x_25 = lean::cnstr_get(x_5, 1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 x_27 = x_5;
} else {
 lean::inc(x_25);
 lean::dec(x_5);
 x_27 = lean::box(0);
}
x_28 = lean::box(0);
if (lean::is_scalar(x_27)) {
 x_29 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_29 = x_27;
}
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_25);
if (lean::is_scalar(x_24)) {
 x_30 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_30 = x_24;
}
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_22);
return x_30;
}
}
}
obj* l_lean_server_server__state_run__except(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_server__state_run__except___rarg), 4, 0);
return x_1;
}
}
obj* l_lean_server_server__state_run__except___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_server_server__state_run__except(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_server_server__state_run__except_x_27___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::box(2);
x_4 = l_lean_server_server__state_run__except___rarg(x_3, x_0, x_1, x_2);
return x_4;
}
}
obj* l_lean_server_server__state_run__except_x_27(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_server__state_run__except_x_27___rarg), 3, 0);
return x_1;
}
}
obj* l_lean_server_server__state_run__except_x_27___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_server_server__state_run__except_x_27(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_except__t_bind__cont___at_lean_server_server__state_run__except__async___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_0);
x_5 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_7 = x_1;
} else {
 lean::inc(x_5);
 lean::dec(x_1);
 x_7 = lean::box(0);
}
if (lean::is_scalar(x_7)) {
 x_8 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_8 = x_7;
}
lean::cnstr_set(x_8, 0, x_5);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_2);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_3);
return x_10;
}
else
{
obj* x_11; obj* x_14; 
x_11 = lean::cnstr_get(x_1, 0);
lean::inc(x_11);
lean::dec(x_1);
x_14 = lean::apply_3(x_0, x_11, x_2, x_3);
return x_14;
}
}
}
obj* l_except__t_bind__cont___at_lean_server_server__state_run__except__async___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_server_server__state_run__except__async___spec__1___rarg), 4, 0);
return x_2;
}
}
obj* l_state__t_bind___at_lean_server_server__state_run__except__async___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_10; obj* x_12; obj* x_15; 
x_4 = lean::apply_2(x_0, x_2, x_3);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_5, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_5, 1);
lean::inc(x_12);
lean::dec(x_5);
x_15 = lean::apply_3(x_1, x_10, x_12, x_7);
return x_15;
}
}
obj* l_state__t_bind___at_lean_server_server__state_run__except__async___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_state__t_bind___at_lean_server_server__state_run__except__async___spec__2___rarg), 4, 0);
return x_2;
}
}
obj* l_lean_server_server__state_run__except__async___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_15; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_5 = lean::cnstr_get(x_3, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_3, 1);
lean::inc(x_7);
x_9 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_9, 0, x_0);
lean::cnstr_set(x_9, 1, x_1);
lean::cnstr_set(x_9, 2, x_2);
x_10 = lean::cnstr_get(x_3, 2);
lean::inc(x_10);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_9);
lean::cnstr_set(x_12, 1, x_10);
x_13 = lean::cnstr_get(x_3, 3);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_3, 4);
lean::inc(x_15);
lean::dec(x_3);
x_18 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_18, 0, x_5);
lean::cnstr_set(x_18, 1, x_7);
lean::cnstr_set(x_18, 2, x_12);
lean::cnstr_set(x_18, 3, x_13);
lean::cnstr_set(x_18, 4, x_15);
x_19 = l_list_mmap_x_27___main___at_lean_run__frontend___spec__6___closed__1;
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_18);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_4);
return x_21;
}
}
obj* l_lean_server_server__state_run__except__async(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::inc(x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_server__state_run__except__async___lambda__1), 5, 2);
lean::closure_set(x_6, 0, x_0);
lean::closure_set(x_6, 1, x_1);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_server_server__state_run__except__async___spec__1___rarg), 4, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_state__t_bind___at_lean_server_server__state_run__except__async___spec__2___rarg), 4, 2);
lean::closure_set(x_8, 0, x_2);
lean::closure_set(x_8, 1, x_7);
x_9 = l_lean_server_server__state_run__except___rarg(x_1, x_8, x_3, x_4);
return x_9;
}
}
obj* l_except__t_bind__cont___at_lean_server_server__state_run__except__async___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_except__t_bind__cont___at_lean_server_server__state_run__except__async___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_state__t_bind___at_lean_server_server__state_run__except__async___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_state__t_bind___at_lean_server_server__state_run__except__async___spec__2(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_server_server__state_sync__file(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_27; obj* x_30; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::inc(x_0);
x_7 = l_lean_server_single__file__state_create(x_0, x_1);
lean::inc(x_0);
x_9 = l_rbnode_insert___at_lean_server_server__state_handle__poll___spec__2(x_4, x_0, x_7);
x_10 = lean::cnstr_get(x_2, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_2, 2);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_2, 3);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_2, 4);
lean::inc(x_16);
lean::dec(x_2);
x_19 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_19, 0, x_9);
lean::cnstr_set(x_19, 1, x_10);
lean::cnstr_set(x_19, 2, x_12);
lean::cnstr_set(x_19, 3, x_14);
lean::cnstr_set(x_19, 4, x_16);
lean::inc(x_0);
x_21 = l_lean_server_server__state_clear__requests(x_0, x_19, x_3);
x_22 = lean::cnstr_get(x_21, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_21, 1);
lean::inc(x_24);
lean::dec(x_21);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
lean::dec(x_22);
x_30 = l_lean_server_server__state_clear__diagnostics(x_0, x_27, x_24);
return x_30;
}
}
obj* l_list_filter___main___at_lean_server_server__state_close__file___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; uint8 x_9; 
x_2 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_6 = x_1;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_1);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::string_dec_eq(x_7, x_0);
lean::dec(x_7);
if (x_9 == 0)
{
obj* x_11; obj* x_12; 
x_11 = l_list_filter___main___at_lean_server_server__state_close__file___spec__1(x_0, x_4);
if (lean::is_scalar(x_6)) {
 x_12 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_12 = x_6;
}
lean::cnstr_set(x_12, 0, x_2);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
else
{
lean::dec(x_6);
lean::dec(x_2);
x_1 = x_4;
goto _start;
}
}
}
}
obj* l_rbmap_insert___main___at_lean_server_server__state_close__file___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_server_server__state_handle__poll___spec__2(x_0, x_1, x_2);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_server_server__state_close__file___spec__5(obj* x_0, obj* x_1) {
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
x_12 = l_rbnode_insert___at_lean_server_server__state_handle__poll___spec__2(x_0, x_7, x_9);
x_0 = x_12;
x_1 = x_4;
goto _start;
}
}
}
obj* l_rbmap_from__list___at_lean_server_server__state_close__file___spec__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
lean::dec(x_1);
x_5 = l_rbmap_to__list___main___rarg(x_2);
x_6 = l_list_filter___main___at_lean_server_server__state_close__file___spec__1(x_0, x_5);
x_7 = lean::box(0);
x_8 = l_list_foldl___main___at_lean_server_server__state_close__file___spec__5(x_7, x_6);
return x_8;
}
}
obj* l_rbmap__of___at_lean_server_server__state_close__file___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap_from__list___at_lean_server_server__state_close__file___spec__3(x_0, x_1);
return x_2;
}
}
obj* l_lean_server_server__state_close__file(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_14; obj* x_16; obj* x_17; obj* x_19; obj* x_22; obj* x_25; 
lean::inc(x_1);
x_4 = l_rbmap_from__list___at_lean_server_server__state_close__file___spec__3(x_0, x_1);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 2);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_1, 3);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_1, 4);
lean::inc(x_11);
lean::dec(x_1);
x_14 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_14, 0, x_4);
lean::cnstr_set(x_14, 1, x_5);
lean::cnstr_set(x_14, 2, x_7);
lean::cnstr_set(x_14, 3, x_9);
lean::cnstr_set(x_14, 4, x_11);
lean::inc(x_0);
x_16 = l_lean_server_server__state_clear__requests(x_0, x_14, x_2);
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_16, 1);
lean::inc(x_19);
lean::dec(x_16);
x_22 = lean::cnstr_get(x_17, 1);
lean::inc(x_22);
lean::dec(x_17);
x_25 = l_lean_server_server__state_clear__diagnostics(x_0, x_22, x_19);
return x_25;
}
}
obj* l_list_filter___main___at_lean_server_server__state_close__file___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_list_filter___main___at_lean_server_server__state_close__file___spec__1(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_rbmap_from__list___at_lean_server_server__state_close__file___spec__3___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap_from__list___at_lean_server_server__state_close__file___spec__3(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_rbmap__of___at_lean_server_server__state_close__file___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap__of___at_lean_server_server__state_close__file___spec__2(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* _init_l_lean_server_server__state_handle__did__open___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("textDocument");
return x_0;
}
}
obj* _init_l_lean_server_server__state_handle__did__open___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("no textDocument field");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_server_server__state_handle__did__open___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("no uri field");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_server_server__state_handle__did__open___closed__4() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("no text field");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_server_server__state_handle__did__open(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_lean_server_server__state_handle__did__open___closed__1;
x_4 = l_json_get___main(x_0, x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = l_lean_server_server__state_handle__did__open___closed__2;
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_11; obj* x_13; 
x_8 = lean::cnstr_get(x_4, 0);
lean::inc(x_8);
lean::dec(x_4);
x_11 = l_lsp_location_has__to__json___closed__1;
lean::inc(x_8);
x_13 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_8, x_11);
if (lean::obj_tag(x_13) == 0)
{
obj* x_15; obj* x_16; obj* x_17; 
lean::dec(x_8);
x_15 = l_lean_server_server__state_handle__did__open___closed__3;
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_1);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_2);
return x_17;
}
else
{
obj* x_18; obj* x_21; obj* x_22; 
x_18 = lean::cnstr_get(x_13, 0);
lean::inc(x_18);
lean::dec(x_13);
x_21 = l_lean_process__file___lambda__1___closed__4;
x_22 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_8, x_21);
if (lean::obj_tag(x_22) == 0)
{
obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_18);
x_24 = l_lean_server_server__state_handle__did__open___closed__4;
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_1);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_2);
return x_26;
}
else
{
obj* x_27; obj* x_30; obj* x_31; obj* x_33; obj* x_35; obj* x_36; obj* x_38; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_27 = lean::cnstr_get(x_22, 0);
lean::inc(x_27);
lean::dec(x_22);
x_30 = l_lean_server_server__state_sync__file(x_18, x_27, x_1, x_2);
x_31 = lean::cnstr_get(x_30, 0);
x_33 = lean::cnstr_get(x_30, 1);
if (lean::is_exclusive(x_30)) {
 x_35 = x_30;
} else {
 lean::inc(x_31);
 lean::inc(x_33);
 lean::dec(x_30);
 x_35 = lean::box(0);
}
x_36 = lean::cnstr_get(x_31, 0);
x_38 = lean::cnstr_get(x_31, 1);
if (lean::is_exclusive(x_31)) {
 x_40 = x_31;
} else {
 lean::inc(x_36);
 lean::inc(x_38);
 lean::dec(x_31);
 x_40 = lean::box(0);
}
x_41 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_41, 0, x_36);
if (lean::is_scalar(x_40)) {
 x_42 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_42 = x_40;
}
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_38);
if (lean::is_scalar(x_35)) {
 x_43 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_43 = x_35;
}
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_33);
return x_43;
}
}
}
}
}
obj* l_list_mmap___main___at_lean_server_server__state_handle__did__change___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_list_mmap___main___at_list_has__from__json___spec__1___rarg___closed__1;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_list_mmap___main___at_lean_server_server__state_handle__did__change___spec__2(x_4);
if (lean::obj_tag(x_7) == 0)
{
obj* x_10; 
lean::dec(x_6);
lean::dec(x_2);
x_10 = lean::box(0);
return x_10;
}
else
{
obj* x_11; obj* x_13; obj* x_14; obj* x_15; 
x_11 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_13 = x_7;
} else {
 lean::inc(x_11);
 lean::dec(x_7);
 x_13 = lean::box(0);
}
if (lean::is_scalar(x_6)) {
 x_14 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_14 = x_6;
}
lean::cnstr_set(x_14, 0, x_2);
lean::cnstr_set(x_14, 1, x_11);
if (lean::is_scalar(x_13)) {
 x_15 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_15 = x_13;
}
lean::cnstr_set(x_15, 0, x_14);
return x_15;
}
}
}
}
obj* l_json_get_x_27___at_lean_server_server__state_handle__did__change___spec__1(obj* x_0, obj* x_1) {
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
obj* x_4; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
switch (lean::obj_tag(x_4)) {
case 0:
{
obj* x_7; 
x_7 = lean::box(0);
return x_7;
}
case 4:
{
obj* x_8; obj* x_11; 
x_8 = lean::cnstr_get(x_4, 0);
lean::inc(x_8);
lean::dec(x_4);
x_11 = l_list_mmap___main___at_lean_server_server__state_handle__did__change___spec__2(x_8);
return x_11;
}
default:
{
obj* x_13; 
lean::dec(x_4);
x_13 = lean::box(0);
return x_13;
}
}
}
}
}
obj* _init_l_lean_server_server__state_handle__did__change___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("contentChanges");
return x_0;
}
}
obj* _init_l_lean_server_server__state_handle__did__change___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("no contentChanges field");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_server_server__state_handle__did__change___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("no text field in content change");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_server_server__state_handle__did__change(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; 
x_3 = l_lean_server_server__state_handle__did__open___closed__1;
lean::inc(x_0);
x_5 = l_json_get___main(x_0, x_3);
if (lean::obj_tag(x_5) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_0);
x_7 = l_lean_server_server__state_handle__did__open___closed__2;
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_2);
return x_9;
}
else
{
obj* x_10; obj* x_13; obj* x_14; 
x_10 = lean::cnstr_get(x_5, 0);
lean::inc(x_10);
lean::dec(x_5);
x_13 = l_lsp_location_has__to__json___closed__1;
x_14 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_10, x_13);
if (lean::obj_tag(x_14) == 0)
{
obj* x_16; obj* x_17; obj* x_18; 
lean::dec(x_0);
x_16 = l_lean_server_server__state_handle__did__open___closed__3;
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_1);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_2);
return x_18;
}
else
{
obj* x_19; obj* x_22; obj* x_23; 
x_19 = lean::cnstr_get(x_14, 0);
lean::inc(x_19);
lean::dec(x_14);
x_22 = l_lean_server_server__state_handle__did__change___closed__1;
x_23 = l_json_get_x_27___at_lean_server_server__state_handle__did__change___spec__1(x_0, x_22);
if (lean::obj_tag(x_23) == 0)
{
obj* x_25; obj* x_26; obj* x_27; 
lean::dec(x_19);
x_25 = l_lean_server_server__state_handle__did__change___closed__2;
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_1);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_2);
return x_27;
}
else
{
obj* x_28; 
x_28 = lean::cnstr_get(x_23, 0);
lean::inc(x_28);
lean::dec(x_23);
if (lean::obj_tag(x_28) == 0)
{
obj* x_32; obj* x_33; obj* x_34; 
lean::dec(x_19);
x_32 = l_lean_server_server__state_handle__did__change___closed__2;
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_1);
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_2);
return x_34;
}
else
{
obj* x_35; 
x_35 = lean::cnstr_get(x_28, 1);
lean::inc(x_35);
if (lean::obj_tag(x_35) == 0)
{
obj* x_37; obj* x_40; obj* x_41; 
x_37 = lean::cnstr_get(x_28, 0);
lean::inc(x_37);
lean::dec(x_28);
x_40 = l_lean_process__file___lambda__1___closed__4;
x_41 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_37, x_40);
if (lean::obj_tag(x_41) == 0)
{
obj* x_43; obj* x_44; obj* x_45; 
lean::dec(x_19);
x_43 = l_lean_server_server__state_handle__did__change___closed__3;
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_43);
lean::cnstr_set(x_44, 1, x_1);
x_45 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_2);
return x_45;
}
else
{
obj* x_46; obj* x_49; obj* x_50; obj* x_52; obj* x_54; obj* x_55; obj* x_57; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
x_46 = lean::cnstr_get(x_41, 0);
lean::inc(x_46);
lean::dec(x_41);
x_49 = l_lean_server_server__state_sync__file(x_19, x_46, x_1, x_2);
x_50 = lean::cnstr_get(x_49, 0);
x_52 = lean::cnstr_get(x_49, 1);
if (lean::is_exclusive(x_49)) {
 x_54 = x_49;
} else {
 lean::inc(x_50);
 lean::inc(x_52);
 lean::dec(x_49);
 x_54 = lean::box(0);
}
x_55 = lean::cnstr_get(x_50, 0);
x_57 = lean::cnstr_get(x_50, 1);
if (lean::is_exclusive(x_50)) {
 x_59 = x_50;
} else {
 lean::inc(x_55);
 lean::inc(x_57);
 lean::dec(x_50);
 x_59 = lean::box(0);
}
x_60 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_60, 0, x_55);
if (lean::is_scalar(x_59)) {
 x_61 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_61 = x_59;
}
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_57);
if (lean::is_scalar(x_54)) {
 x_62 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_62 = x_54;
}
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_52);
return x_62;
}
}
else
{
obj* x_66; obj* x_67; obj* x_68; 
lean::dec(x_19);
lean::dec(x_35);
lean::dec(x_28);
x_66 = l_lean_server_server__state_handle__did__change___closed__2;
x_67 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_1);
x_68 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_2);
return x_68;
}
}
}
}
}
}
}
obj* l_json_get_x_27___at_lean_server_server__state_handle__did__change___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json_get_x_27___at_lean_server_server__state_handle__did__change___spec__1(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_server_server__state_handle__did__close(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_lean_server_server__state_handle__did__open___closed__1;
x_4 = l_json_get___main(x_0, x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = l_lean_server_server__state_handle__did__open___closed__2;
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_11; obj* x_12; 
x_8 = lean::cnstr_get(x_4, 0);
lean::inc(x_8);
lean::dec(x_4);
x_11 = l_lsp_location_has__to__json___closed__1;
x_12 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_8, x_11);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; obj* x_15; 
x_13 = l_lean_server_server__state_handle__did__open___closed__3;
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_1);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_2);
return x_15;
}
else
{
obj* x_16; obj* x_19; obj* x_20; obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_16 = lean::cnstr_get(x_12, 0);
lean::inc(x_16);
lean::dec(x_12);
x_19 = l_lean_server_server__state_close__file(x_16, x_1, x_2);
x_20 = lean::cnstr_get(x_19, 0);
x_22 = lean::cnstr_get(x_19, 1);
if (lean::is_exclusive(x_19)) {
 x_24 = x_19;
} else {
 lean::inc(x_20);
 lean::inc(x_22);
 lean::dec(x_19);
 x_24 = lean::box(0);
}
x_25 = lean::cnstr_get(x_20, 0);
x_27 = lean::cnstr_get(x_20, 1);
if (lean::is_exclusive(x_20)) {
 x_29 = x_20;
} else {
 lean::inc(x_25);
 lean::inc(x_27);
 lean::dec(x_20);
 x_29 = lean::box(0);
}
x_30 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_30, 0, x_25);
if (lean::is_scalar(x_29)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_29;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_27);
if (lean::is_scalar(x_24)) {
 x_32 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_32 = x_24;
}
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_22);
return x_32;
}
}
}
}
obj* _init_l_lean_server_server__state_handle__cancel___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(80u);
x_2 = l_json_pretty(x_0, x_1);
return x_2;
}
}
uint8 l_lean_server_server__state_handle__cancel___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; 
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
switch (lean::obj_tag(x_4)) {
case 0:
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_10, 0, x_7);
x_2 = x_10;
goto lbl_3;
}
case 1:
{
obj* x_11; obj* x_14; 
x_11 = lean::cnstr_get(x_4, 0);
lean::inc(x_11);
lean::dec(x_4);
x_14 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_14, 0, x_11);
x_2 = x_14;
goto lbl_3;
}
default:
{
obj* x_15; 
x_15 = lean::box(0);
x_2 = x_15;
goto lbl_3;
}
}
lbl_3:
{
obj* x_16; obj* x_17; 
x_16 = lean::mk_nat_obj(80u);
x_17 = l_json_pretty(x_2, x_16);
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_18; obj* x_21; obj* x_22; uint8 x_23; 
x_18 = lean::cnstr_get(x_0, 0);
lean::inc(x_18);
lean::dec(x_0);
x_21 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_21, 0, x_18);
x_22 = l_json_pretty(x_21, x_16);
x_23 = lean::string_dec_eq(x_17, x_22);
lean::dec(x_22);
lean::dec(x_17);
if (x_23 == 0)
{
uint8 x_26; 
x_26 = 0;
return x_26;
}
else
{
uint8 x_27; 
x_27 = 1;
return x_27;
}
}
case 1:
{
obj* x_28; obj* x_31; obj* x_32; uint8 x_33; 
x_28 = lean::cnstr_get(x_0, 0);
lean::inc(x_28);
lean::dec(x_0);
x_31 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_31, 0, x_28);
x_32 = l_json_pretty(x_31, x_16);
x_33 = lean::string_dec_eq(x_17, x_32);
lean::dec(x_32);
lean::dec(x_17);
if (x_33 == 0)
{
uint8 x_36; 
x_36 = 0;
return x_36;
}
else
{
uint8 x_37; 
x_37 = 1;
return x_37;
}
}
default:
{
obj* x_38; uint8 x_39; 
x_38 = l_lean_server_server__state_handle__cancel___lambda__1___closed__1;
x_39 = lean::string_dec_eq(x_17, x_38);
lean::dec(x_17);
if (x_39 == 0)
{
uint8 x_41; 
x_41 = 0;
return x_41;
}
else
{
uint8 x_42; 
x_42 = 1;
return x_42;
}
}
}
}
}
}
obj* _init_l_lean_server_server__state_handle__cancel___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("no id field");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_server_server__state_handle__cancel___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_32; 
x_0 = l_int_one;
x_1 = lean::int_add(x_0, x_0);
x_2 = lean::int_add(x_1, x_1);
lean::dec(x_1);
x_4 = lean::int_add(x_2, x_2);
lean::dec(x_2);
x_6 = lean::int_add(x_4, x_4);
lean::dec(x_4);
x_8 = lean::int_add(x_6, x_6);
lean::dec(x_6);
x_10 = lean::int_add(x_8, x_8);
lean::dec(x_8);
x_12 = lean::int_add(x_10, x_10);
lean::dec(x_10);
x_14 = lean::int_add(x_12, x_12);
lean::dec(x_12);
x_16 = lean::int_add(x_14, x_14);
lean::dec(x_14);
x_18 = lean::int_add(x_16, x_16);
lean::dec(x_16);
x_20 = lean::int_add(x_18, x_0);
lean::dec(x_18);
x_22 = lean::int_add(x_20, x_20);
lean::dec(x_20);
x_24 = lean::int_add(x_22, x_22);
lean::dec(x_22);
x_26 = lean::int_add(x_24, x_24);
lean::dec(x_24);
x_28 = lean::int_add(x_26, x_26);
lean::dec(x_26);
x_30 = lean::int_add(x_28, x_28);
lean::dec(x_28);
x_32 = lean::int_neg(x_30);
lean::dec(x_30);
return x_32;
}
}
obj* _init_l_lean_server_server__state_handle__cancel___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("request cancelled");
return x_0;
}
}
obj* l_lean_server_server__state_handle__cancel(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_jsonrpc_message_has__to__json___closed__1;
x_4 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__1(x_0, x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = l_lean_server_server__state_handle__cancel___closed__1;
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_8 = lean::cnstr_get(x_4, 0);
lean::inc(x_8);
lean::dec(x_4);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_server__state_handle__cancel___lambda__1___boxed), 2, 1);
lean::closure_set(x_11, 0, x_8);
x_12 = l_lean_server_server__state_handle__cancel___closed__2;
x_13 = l_lean_server_server__state_handle__cancel___closed__3;
x_14 = l_lean_server_server__state_cancel__requests__core(x_11, x_12, x_13, x_1, x_2);
x_15 = lean::cnstr_get(x_14, 0);
x_17 = lean::cnstr_get(x_14, 1);
if (lean::is_exclusive(x_14)) {
 x_19 = x_14;
} else {
 lean::inc(x_15);
 lean::inc(x_17);
 lean::dec(x_14);
 x_19 = lean::box(0);
}
x_20 = lean::cnstr_get(x_15, 0);
x_22 = lean::cnstr_get(x_15, 1);
if (lean::is_exclusive(x_15)) {
 x_24 = x_15;
} else {
 lean::inc(x_20);
 lean::inc(x_22);
 lean::dec(x_15);
 x_24 = lean::box(0);
}
x_25 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_25, 0, x_20);
if (lean::is_scalar(x_24)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_24;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_22);
if (lean::is_scalar(x_19)) {
 x_27 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_27 = x_19;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_17);
return x_27;
}
}
}
obj* l_lean_server_server__state_handle__cancel___lambda__1___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_server_server__state_handle__cancel___lambda__1(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_json_get_x_27___at_lean_server_server__state_handle__hover___spec__1(obj* x_0, obj* x_1) {
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
obj* x_4; obj* x_7; obj* x_9; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_7 = l_lsp_position_has__to__json___closed__1;
lean::inc(x_4);
x_9 = l_json_get___main(x_4, x_7);
if (lean::obj_tag(x_9) == 0)
{
obj* x_11; 
lean::dec(x_4);
x_11 = lean::box(0);
return x_11;
}
else
{
obj* x_12; obj* x_15; 
x_12 = lean::cnstr_get(x_9, 0);
lean::inc(x_12);
lean::dec(x_9);
x_15 = l_json_to__nat___main(x_12);
lean::dec(x_12);
if (lean::obj_tag(x_15) == 0)
{
obj* x_18; 
lean::dec(x_4);
x_18 = lean::box(0);
return x_18;
}
else
{
obj* x_19; obj* x_22; obj* x_23; 
x_19 = lean::cnstr_get(x_15, 0);
lean::inc(x_19);
lean::dec(x_15);
x_22 = l_lsp_position_has__to__json___closed__2;
x_23 = l_json_get___main(x_4, x_22);
if (lean::obj_tag(x_23) == 0)
{
obj* x_25; 
lean::dec(x_19);
x_25 = lean::box(0);
return x_25;
}
else
{
obj* x_26; obj* x_29; 
x_26 = lean::cnstr_get(x_23, 0);
lean::inc(x_26);
lean::dec(x_23);
x_29 = l_json_to__nat___main(x_26);
lean::dec(x_26);
if (lean::obj_tag(x_29) == 0)
{
obj* x_32; 
lean::dec(x_19);
x_32 = lean::box(0);
return x_32;
}
else
{
obj* x_33; obj* x_35; obj* x_36; obj* x_37; 
x_33 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_35 = x_29;
} else {
 lean::inc(x_33);
 lean::dec(x_29);
 x_35 = lean::box(0);
}
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_19);
lean::cnstr_set(x_36, 1, x_33);
if (lean::is_scalar(x_35)) {
 x_37 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_37 = x_35;
}
lean::cnstr_set(x_37, 0, x_36);
return x_37;
}
}
}
}
}
}
}
obj* l_rbnode_find___main___at_lean_server_server__state_handle__hover___spec__3___rarg(obj* x_0, obj* x_1) {
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
x_12 = lean::string_dec_lt(x_1, x_5);
if (x_12 == 0)
{
uint8 x_14; 
lean::dec(x_3);
x_14 = lean::string_dec_lt(x_5, x_1);
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
obj* l_rbnode_find___main___at_lean_server_server__state_handle__hover___spec__3(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_find___main___at_lean_server_server__state_handle__hover___spec__3___rarg___boxed), 2, 0);
return x_1;
}
}
obj* l_rbmap_find___main___at_lean_server_server__state_handle__hover___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_server_server__state_handle__hover___spec__3___rarg(x_0, x_1);
return x_2;
}
}
obj* l_list_map___main___at_lean_server_server__state_handle__hover___spec__4(obj* x_0) {
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
obj* x_2; obj* x_4; obj* x_6; obj* x_7; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_list_map___main___at_lean_server_server__state_handle__hover___spec__4(x_4);
if (lean::obj_tag(x_2) == 0)
{
obj* x_8; obj* x_9; 
x_8 = lean::box(0);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
return x_9;
}
else
{
obj* x_10; obj* x_13; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_10 = lean::cnstr_get(x_2, 0);
lean::inc(x_10);
lean::dec(x_2);
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
x_16 = l_lean_parser_syntax_to__format___main(x_13);
x_17 = lean::mk_nat_obj(80u);
x_18 = l_lean_format_pretty(x_16, x_17);
x_19 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
x_20 = lean::box(0);
if (lean::is_scalar(x_6)) {
 x_21 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_21 = x_6;
}
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_20);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_7);
return x_22;
}
}
}
}
obj* l_lean_server_server__state_handle__hover___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_1 = lean::box(0);
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = l_list_map___main___at_lean_server_server__state_handle__hover___spec__4(x_2);
x_4 = l_list_join___main___rarg(x_3);
x_5 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
}
obj* _init_l_lean_server_server__state_handle__hover___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("handle_hover");
return x_0;
}
}
obj* _init_l_lean_server_server__state_handle__hover___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("position");
return x_0;
}
}
obj* _init_l_lean_server_server__state_handle__hover___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("no position field");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_server_server__state_handle__hover___closed__4() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("document not open");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_server_server__state_handle__hover___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_server__state_handle__hover___lambda__1), 1, 0);
return x_0;
}
}
obj* l_lean_server_server__state_handle__hover(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_15; 
x_3 = l_lean_server_server__state_handle__hover___closed__1;
x_4 = l_lean_server_server__state_log(x_3, x_1, x_2);
x_5 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_set(x_4, 0, lean::box(0));
 lean::cnstr_set(x_4, 1, lean::box(0));
 x_9 = x_4;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_4);
 x_9 = lean::box(0);
}
x_10 = lean::cnstr_get(x_5, 1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_set(x_5, 1, lean::box(0));
 x_12 = x_5;
} else {
 lean::inc(x_10);
 lean::dec(x_5);
 x_12 = lean::box(0);
}
x_13 = l_lean_server_server__state_handle__did__open___closed__1;
lean::inc(x_0);
x_15 = l_json_get___main(x_0, x_13);
if (lean::obj_tag(x_15) == 0)
{
obj* x_17; obj* x_18; obj* x_19; 
lean::dec(x_0);
x_17 = l_lean_server_server__state_handle__did__open___closed__2;
if (lean::is_scalar(x_12)) {
 x_18 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_18 = x_12;
}
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_10);
if (lean::is_scalar(x_9)) {
 x_19 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_19 = x_9;
}
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_7);
return x_19;
}
else
{
obj* x_20; obj* x_23; obj* x_24; 
x_20 = lean::cnstr_get(x_15, 0);
lean::inc(x_20);
lean::dec(x_15);
x_23 = l_lsp_location_has__to__json___closed__1;
x_24 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_20, x_23);
if (lean::obj_tag(x_24) == 0)
{
obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_0);
x_26 = l_lean_server_server__state_handle__did__open___closed__3;
if (lean::is_scalar(x_12)) {
 x_27 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_27 = x_12;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_10);
if (lean::is_scalar(x_9)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_9;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_7);
return x_28;
}
else
{
obj* x_29; obj* x_32; obj* x_33; 
x_29 = lean::cnstr_get(x_24, 0);
lean::inc(x_29);
lean::dec(x_24);
x_32 = l_lean_server_server__state_handle__hover___closed__2;
x_33 = l_json_get_x_27___at_lean_server_server__state_handle__hover___spec__1(x_0, x_32);
if (lean::obj_tag(x_33) == 0)
{
obj* x_35; obj* x_36; obj* x_37; 
lean::dec(x_29);
x_35 = l_lean_server_server__state_handle__hover___closed__3;
if (lean::is_scalar(x_12)) {
 x_36 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_36 = x_12;
}
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_10);
if (lean::is_scalar(x_9)) {
 x_37 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_37 = x_9;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_7);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; 
x_38 = lean::cnstr_get(x_33, 0);
lean::inc(x_38);
lean::dec(x_33);
x_41 = lean::cnstr_get(x_10, 0);
lean::inc(x_41);
x_43 = l_rbnode_find___main___at_lean_server_server__state_handle__hover___spec__3___rarg(x_41, x_29);
lean::dec(x_29);
if (lean::obj_tag(x_43) == 0)
{
obj* x_46; obj* x_47; obj* x_48; 
lean::dec(x_38);
x_46 = l_lean_server_server__state_handle__hover___closed__4;
if (lean::is_scalar(x_12)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_12;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_10);
if (lean::is_scalar(x_9)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_9;
}
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_7);
return x_48;
}
else
{
obj* x_49; obj* x_52; obj* x_54; obj* x_55; obj* x_57; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; 
x_49 = lean::cnstr_get(x_43, 0);
lean::inc(x_49);
lean::dec(x_43);
x_52 = lean::cnstr_get(x_38, 0);
lean::inc(x_52);
x_54 = lean::mk_nat_obj(1u);
x_55 = lean::nat_add(x_52, x_54);
lean::dec(x_52);
x_57 = lean::cnstr_get(x_38, 1);
lean::inc(x_57);
lean::dec(x_38);
x_60 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_60, 0, x_55);
lean::cnstr_set(x_60, 1, x_57);
x_61 = l_lean_server_single__file__state_get__expanded__at(x_49, x_60);
x_62 = l_lean_server_server__state_handle__hover___closed__5;
x_63 = lean::task_map(x_62, x_61);
x_64 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_64, 0, x_63);
if (lean::is_scalar(x_12)) {
 x_65 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_65 = x_12;
}
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_10);
if (lean::is_scalar(x_9)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_9;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_7);
return x_66;
}
}
}
}
}
}
obj* l_json_get_x_27___at_lean_server_server__state_handle__hover___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_json_get_x_27___at_lean_server_server__state_handle__hover___spec__1(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_rbnode_find___main___at_lean_server_server__state_handle__hover___spec__3___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_server_server__state_handle__hover___spec__3___rarg(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_rbnode_find___main___at_lean_server_server__state_handle__hover___spec__3___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_rbnode_find___main___at_lean_server_server__state_handle__hover___spec__3(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_rbmap_find___main___at_lean_server_server__state_handle__hover___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap_find___main___at_lean_server_server__state_handle__hover___spec__2(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_state__t_pure___at_lean_server_server__state_handle__msg___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
return x_4;
}
}
obj* l_state__t_pure___at_lean_server_server__state_handle__msg___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_state__t_pure___at_lean_server_server__state_handle__msg___spec__1___rarg), 3, 0);
return x_1;
}
}
obj* _init_l_lean_server_server__state_handle__msg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("textDocument/hover");
return x_0;
}
}
obj* _init_l_lean_server_server__state_handle__msg___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown request: ");
return x_0;
}
}
obj* _init_l_lean_server_server__state_handle__msg___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("textDocument/didOpen");
return x_0;
}
}
obj* _init_l_lean_server_server__state_handle__msg___closed__4() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("textDocument/didChange");
return x_0;
}
}
obj* _init_l_lean_server_server__state_handle__msg___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("textDocument/didClose");
return x_0;
}
}
obj* _init_l_lean_server_server__state_handle__msg___closed__6() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("textDocument/didSave");
return x_0;
}
}
obj* _init_l_lean_server_server__state_handle__msg___closed__7() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("$/cancelRequest");
return x_0;
}
}
obj* _init_l_lean_server_server__state_handle__msg___closed__8() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown notification: ");
return x_0;
}
}
obj* _init_l_lean_server_server__state_handle__msg___closed__9() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_state__t_pure___at_lean_server_server__state_handle__msg___spec__1___rarg), 3, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_lean_server_server__state_handle__msg___closed__10() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("could not parse request");
return x_0;
}
}
obj* l_lean_server_server__state_handle__msg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; 
x_7 = l_jsonrpc_message_has__from__json___closed__1;
lean::inc(x_0);
x_9 = l_json_get___main(x_0, x_7);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_11; obj* x_12; 
x_10 = lean::box(2);
x_11 = l_lean_server_server__state_handle__msg___closed__10;
x_12 = l_lean_server_server__state_send__error(x_10, x_11, x_0, x_1, x_2);
return x_12;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_set(x_9, 0, lean::box(0));
 x_15 = x_9;
} else {
 lean::inc(x_13);
 lean::dec(x_9);
 x_15 = lean::box(0);
}
switch (lean::obj_tag(x_13)) {
case 0:
{
obj* x_17; obj* x_18; obj* x_19; 
lean::dec(x_15);
x_17 = lean::box(2);
x_18 = l_lean_server_server__state_handle__msg___closed__10;
x_19 = l_lean_server_server__state_send__error(x_17, x_18, x_0, x_1, x_2);
return x_19;
}
case 3:
{
obj* x_20; obj* x_23; uint8 x_24; 
x_20 = lean::cnstr_get(x_13, 0);
lean::inc(x_20);
lean::dec(x_13);
x_23 = l_jsonrpc_message_has__from__json___closed__2;
x_24 = lean::string_dec_eq(x_20, x_23);
lean::dec(x_20);
if (x_24 == 0)
{
obj* x_27; obj* x_28; obj* x_29; 
lean::dec(x_15);
x_27 = lean::box(2);
x_28 = l_lean_server_server__state_handle__msg___closed__10;
x_29 = l_lean_server_server__state_send__error(x_27, x_28, x_0, x_1, x_2);
return x_29;
}
else
{
obj* x_30; obj* x_32; obj* x_33; obj* x_35; obj* x_36; 
x_30 = l_jsonrpc_message_has__to__json___closed__1;
lean::inc(x_0);
x_32 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__1(x_0, x_30);
x_33 = l_jsonrpc_message_has__to__json___closed__2;
lean::inc(x_0);
x_35 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_0, x_33);
if (lean::obj_tag(x_32) == 0)
{
obj* x_38; 
x_38 = lean::box(0);
x_36 = x_38;
goto lbl_37;
}
else
{
obj* x_39; obj* x_41; obj* x_43; 
x_39 = lean::cnstr_get(x_32, 0);
lean::inc(x_39);
x_41 = l_jsonrpc_message_has__to__json___closed__5;
lean::inc(x_0);
x_43 = l_json_get___main(x_0, x_41);
if (lean::obj_tag(x_43) == 0)
{
obj* x_45; 
lean::dec(x_39);
x_45 = lean::box(0);
x_36 = x_45;
goto lbl_37;
}
else
{
obj* x_46; obj* x_48; obj* x_49; obj* x_50; 
x_46 = lean::cnstr_get(x_43, 0);
if (lean::is_exclusive(x_43)) {
 x_48 = x_43;
} else {
 lean::inc(x_46);
 lean::dec(x_43);
 x_48 = lean::box(0);
}
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_39);
lean::cnstr_set(x_49, 1, x_46);
if (lean::is_scalar(x_48)) {
 x_50 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_50 = x_48;
}
lean::cnstr_set(x_50, 0, x_49);
x_36 = x_50;
goto lbl_37;
}
}
lbl_37:
{
obj* x_51; obj* x_53; obj* x_54; 
if (lean::obj_tag(x_32) == 0)
{
obj* x_56; 
x_56 = lean::box(0);
if (lean::obj_tag(x_32) == 0)
{
lean::dec(x_15);
x_51 = x_56;
goto lbl_52;
}
else
{
obj* x_58; 
x_58 = lean::cnstr_get(x_32, 0);
lean::inc(x_58);
lean::dec(x_32);
x_53 = x_56;
x_54 = x_58;
goto lbl_55;
}
}
else
{
obj* x_61; obj* x_63; obj* x_65; 
x_61 = lean::cnstr_get(x_32, 0);
lean::inc(x_61);
x_63 = l_jsonrpc_message_has__to__json___closed__9;
lean::inc(x_0);
x_65 = l_json_get___main(x_0, x_63);
if (lean::obj_tag(x_65) == 0)
{
obj* x_66; 
x_66 = lean::box(0);
if (lean::obj_tag(x_32) == 0)
{
lean::dec(x_15);
lean::dec(x_61);
x_51 = x_66;
goto lbl_52;
}
else
{
lean::dec(x_32);
x_53 = x_66;
x_54 = x_61;
goto lbl_55;
}
}
else
{
obj* x_71; obj* x_73; 
lean::dec(x_65);
x_71 = l_jsonrpc_message_has__to__json___closed__6;
lean::inc(x_0);
x_73 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__3(x_0, x_71);
if (lean::obj_tag(x_73) == 0)
{
obj* x_74; 
x_74 = lean::box(0);
if (lean::obj_tag(x_32) == 0)
{
lean::dec(x_15);
lean::dec(x_61);
x_51 = x_74;
goto lbl_52;
}
else
{
lean::dec(x_32);
x_53 = x_74;
x_54 = x_61;
goto lbl_55;
}
}
else
{
obj* x_78; obj* x_81; obj* x_83; 
x_78 = lean::cnstr_get(x_73, 0);
lean::inc(x_78);
lean::dec(x_73);
x_81 = l_jsonrpc_message_has__to__json___closed__7;
lean::inc(x_0);
x_83 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_0, x_81);
if (lean::obj_tag(x_83) == 0)
{
obj* x_85; 
lean::dec(x_78);
x_85 = lean::box(0);
if (lean::obj_tag(x_32) == 0)
{
lean::dec(x_15);
lean::dec(x_61);
x_51 = x_85;
goto lbl_52;
}
else
{
lean::dec(x_32);
x_53 = x_85;
x_54 = x_61;
goto lbl_55;
}
}
else
{
obj* x_89; obj* x_91; obj* x_92; obj* x_94; obj* x_96; obj* x_97; 
x_89 = lean::cnstr_get(x_83, 0);
if (lean::is_exclusive(x_83)) {
 x_91 = x_83;
} else {
 lean::inc(x_89);
 lean::dec(x_83);
 x_91 = lean::box(0);
}
x_92 = l_jsonrpc_message_has__to__json___closed__8;
lean::inc(x_0);
x_94 = l_json_get__or__null(x_0, x_92);
lean::inc(x_61);
x_96 = lean::alloc_cnstr(2, 4, 0);
lean::cnstr_set(x_96, 0, x_61);
lean::cnstr_set(x_96, 1, x_78);
lean::cnstr_set(x_96, 2, x_89);
lean::cnstr_set(x_96, 3, x_94);
if (lean::is_scalar(x_91)) {
 x_97 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_97 = x_91;
}
lean::cnstr_set(x_97, 0, x_96);
if (lean::obj_tag(x_32) == 0)
{
lean::dec(x_15);
lean::dec(x_61);
x_51 = x_97;
goto lbl_52;
}
else
{
lean::dec(x_32);
x_53 = x_97;
x_54 = x_61;
goto lbl_55;
}
}
}
}
}
lbl_52:
{
if (lean::obj_tag(x_35) == 0)
{
obj* x_101; obj* x_102; obj* x_104; 
x_101 = l_jsonrpc_message_has__from__json___closed__3;
x_102 = l_option_orelse___main___rarg(x_51, x_101);
lean::dec(x_51);
x_104 = l_option_orelse___main___rarg(x_36, x_102);
lean::dec(x_102);
lean::dec(x_36);
x_5 = x_104;
goto lbl_6;
}
else
{
obj* x_107; obj* x_109; obj* x_110; obj* x_111; obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_118; obj* x_121; 
x_107 = lean::cnstr_get(x_35, 0);
if (lean::is_exclusive(x_35)) {
 x_109 = x_35;
} else {
 lean::inc(x_107);
 lean::dec(x_35);
 x_109 = lean::box(0);
}
x_110 = lean::box(0);
x_111 = l_jsonrpc_message_has__to__json___closed__3;
lean::inc(x_0);
x_113 = l_json_get__or__null(x_0, x_111);
x_114 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_114, 0, x_107);
lean::cnstr_set(x_114, 1, x_113);
if (lean::is_scalar(x_109)) {
 x_115 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_115 = x_109;
}
lean::cnstr_set(x_115, 0, x_114);
x_116 = l_option_orelse___main___rarg(x_110, x_115);
lean::dec(x_115);
x_118 = l_option_orelse___main___rarg(x_51, x_116);
lean::dec(x_116);
lean::dec(x_51);
x_121 = l_option_orelse___main___rarg(x_36, x_118);
lean::dec(x_118);
lean::dec(x_36);
x_5 = x_121;
goto lbl_6;
}
}
lbl_55:
{
if (lean::obj_tag(x_35) == 0)
{
lean::dec(x_15);
lean::dec(x_54);
if (lean::obj_tag(x_35) == 0)
{
obj* x_126; obj* x_127; obj* x_129; 
x_126 = l_jsonrpc_message_has__from__json___closed__3;
x_127 = l_option_orelse___main___rarg(x_53, x_126);
lean::dec(x_53);
x_129 = l_option_orelse___main___rarg(x_36, x_127);
lean::dec(x_127);
lean::dec(x_36);
x_5 = x_129;
goto lbl_6;
}
else
{
obj* x_132; obj* x_134; obj* x_135; obj* x_136; obj* x_138; obj* x_139; obj* x_140; obj* x_141; obj* x_143; obj* x_146; 
x_132 = lean::cnstr_get(x_35, 0);
if (lean::is_exclusive(x_35)) {
 x_134 = x_35;
} else {
 lean::inc(x_132);
 lean::dec(x_35);
 x_134 = lean::box(0);
}
x_135 = lean::box(0);
x_136 = l_jsonrpc_message_has__to__json___closed__3;
lean::inc(x_0);
x_138 = l_json_get__or__null(x_0, x_136);
x_139 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_139, 0, x_132);
lean::cnstr_set(x_139, 1, x_138);
if (lean::is_scalar(x_134)) {
 x_140 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_140 = x_134;
}
lean::cnstr_set(x_140, 0, x_139);
x_141 = l_option_orelse___main___rarg(x_135, x_140);
lean::dec(x_140);
x_143 = l_option_orelse___main___rarg(x_53, x_141);
lean::dec(x_141);
lean::dec(x_53);
x_146 = l_option_orelse___main___rarg(x_36, x_143);
lean::dec(x_143);
lean::dec(x_36);
x_5 = x_146;
goto lbl_6;
}
}
else
{
obj* x_149; obj* x_151; obj* x_153; obj* x_156; obj* x_157; 
x_149 = lean::cnstr_get(x_35, 0);
lean::inc(x_149);
x_151 = l_jsonrpc_message_has__to__json___closed__3;
lean::inc(x_0);
x_153 = l_json_get__or__null(x_0, x_151);
lean::inc(x_153);
lean::inc(x_149);
x_156 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_156, 0, x_54);
lean::cnstr_set(x_156, 1, x_149);
lean::cnstr_set(x_156, 2, x_153);
if (lean::is_scalar(x_15)) {
 x_157 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_157 = x_15;
}
lean::cnstr_set(x_157, 0, x_156);
if (lean::obj_tag(x_35) == 0)
{
obj* x_160; obj* x_161; obj* x_163; obj* x_166; 
lean::dec(x_153);
lean::dec(x_149);
x_160 = lean::box(0);
x_161 = l_option_orelse___main___rarg(x_157, x_160);
lean::dec(x_157);
x_163 = l_option_orelse___main___rarg(x_53, x_161);
lean::dec(x_161);
lean::dec(x_53);
x_166 = l_option_orelse___main___rarg(x_36, x_163);
lean::dec(x_163);
lean::dec(x_36);
x_5 = x_166;
goto lbl_6;
}
else
{
obj* x_169; obj* x_170; obj* x_171; obj* x_172; obj* x_175; obj* x_178; 
if (lean::is_exclusive(x_35)) {
 lean::cnstr_release(x_35, 0);
 x_169 = x_35;
} else {
 lean::dec(x_35);
 x_169 = lean::box(0);
}
x_170 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_170, 0, x_149);
lean::cnstr_set(x_170, 1, x_153);
if (lean::is_scalar(x_169)) {
 x_171 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_171 = x_169;
}
lean::cnstr_set(x_171, 0, x_170);
x_172 = l_option_orelse___main___rarg(x_157, x_171);
lean::dec(x_171);
lean::dec(x_157);
x_175 = l_option_orelse___main___rarg(x_53, x_172);
lean::dec(x_172);
lean::dec(x_53);
x_178 = l_option_orelse___main___rarg(x_36, x_175);
lean::dec(x_175);
lean::dec(x_36);
x_5 = x_178;
goto lbl_6;
}
}
}
}
}
}
default:
{
obj* x_183; obj* x_184; obj* x_185; 
lean::dec(x_15);
lean::dec(x_13);
x_183 = lean::box(2);
x_184 = l_lean_server_server__state_handle__msg___closed__10;
x_185 = l_lean_server_server__state_send__error(x_183, x_184, x_0, x_1, x_2);
return x_185;
}
}
}
lbl_4:
{
switch (lean::obj_tag(x_3)) {
case 0:
{
obj* x_186; obj* x_188; obj* x_190; obj* x_193; obj* x_195; obj* x_196; uint8 x_197; 
x_186 = lean::cnstr_get(x_3, 0);
lean::inc(x_186);
x_188 = lean::cnstr_get(x_3, 1);
lean::inc(x_188);
x_190 = lean::cnstr_get(x_3, 2);
lean::inc(x_190);
lean::dec(x_3);
x_193 = l_lean_server_server__state_handle__did__open___closed__1;
lean::inc(x_190);
x_195 = l_json_get___main(x_190, x_193);
x_196 = l_lean_server_server__state_handle__msg___closed__1;
x_197 = lean::string_dec_eq(x_188, x_196);
if (lean::obj_tag(x_195) == 0)
{
obj* x_198; 
x_198 = lean::box(0);
if (x_197 == 0)
{
obj* x_200; obj* x_201; obj* x_203; obj* x_204; obj* x_205; 
lean::dec(x_190);
x_200 = l_lean_server_server__state_handle__msg___closed__2;
x_201 = lean::string_append(x_200, x_188);
lean::dec(x_188);
x_203 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_203, 0, x_201);
x_204 = lean::alloc_closure(reinterpret_cast<void*>(l_state__t_pure___at_lean_server_server__state_handle__msg___spec__1___rarg), 3, 1);
lean::closure_set(x_204, 0, x_203);
x_205 = l_lean_server_server__state_run__except__async(x_198, x_186, x_204, x_1, x_2);
return x_205;
}
else
{
obj* x_207; obj* x_208; 
lean::dec(x_188);
x_207 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_server__state_handle__hover), 3, 1);
lean::closure_set(x_207, 0, x_190);
x_208 = l_lean_server_server__state_run__except__async(x_198, x_186, x_207, x_1, x_2);
return x_208;
}
}
else
{
obj* x_209; obj* x_212; obj* x_213; 
x_209 = lean::cnstr_get(x_195, 0);
lean::inc(x_209);
lean::dec(x_195);
x_212 = l_lsp_location_has__to__json___closed__1;
x_213 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_209, x_212);
if (x_197 == 0)
{
obj* x_215; obj* x_216; obj* x_218; obj* x_219; obj* x_220; 
lean::dec(x_190);
x_215 = l_lean_server_server__state_handle__msg___closed__2;
x_216 = lean::string_append(x_215, x_188);
lean::dec(x_188);
x_218 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_218, 0, x_216);
x_219 = lean::alloc_closure(reinterpret_cast<void*>(l_state__t_pure___at_lean_server_server__state_handle__msg___spec__1___rarg), 3, 1);
lean::closure_set(x_219, 0, x_218);
x_220 = l_lean_server_server__state_run__except__async(x_213, x_186, x_219, x_1, x_2);
return x_220;
}
else
{
obj* x_222; obj* x_223; 
lean::dec(x_188);
x_222 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_server__state_handle__hover), 3, 1);
lean::closure_set(x_222, 0, x_190);
x_223 = l_lean_server_server__state_run__except__async(x_213, x_186, x_222, x_1, x_2);
return x_223;
}
}
}
case 3:
{
obj* x_224; obj* x_226; obj* x_229; uint8 x_230; 
x_224 = lean::cnstr_get(x_3, 0);
lean::inc(x_224);
x_226 = lean::cnstr_get(x_3, 1);
lean::inc(x_226);
lean::dec(x_3);
x_229 = l_lean_server_server__state_handle__msg___closed__3;
x_230 = lean::string_dec_eq(x_224, x_229);
if (x_230 == 0)
{
obj* x_231; uint8 x_232; 
x_231 = l_lean_server_server__state_handle__msg___closed__4;
x_232 = lean::string_dec_eq(x_224, x_231);
if (x_232 == 0)
{
obj* x_233; uint8 x_234; 
x_233 = l_lean_server_server__state_handle__msg___closed__5;
x_234 = lean::string_dec_eq(x_224, x_233);
if (x_234 == 0)
{
obj* x_235; uint8 x_236; 
x_235 = l_lean_server_server__state_handle__msg___closed__6;
x_236 = lean::string_dec_eq(x_224, x_235);
if (x_236 == 0)
{
obj* x_237; uint8 x_238; 
x_237 = l_lean_server_server__state_handle__msg___closed__7;
x_238 = lean::string_dec_eq(x_224, x_237);
if (x_238 == 0)
{
obj* x_240; obj* x_241; obj* x_243; obj* x_244; obj* x_245; obj* x_246; 
lean::dec(x_226);
x_240 = l_lean_server_server__state_handle__msg___closed__8;
x_241 = lean::string_append(x_240, x_224);
lean::dec(x_224);
x_243 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_243, 0, x_241);
x_244 = lean::alloc_closure(reinterpret_cast<void*>(l_state__t_pure___at_lean_server_server__state_handle__msg___spec__1___rarg), 3, 1);
lean::closure_set(x_244, 0, x_243);
x_245 = lean::box(2);
x_246 = l_lean_server_server__state_run__except___rarg(x_245, x_244, x_1, x_2);
return x_246;
}
else
{
obj* x_248; obj* x_249; obj* x_250; 
lean::dec(x_224);
x_248 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_server__state_handle__cancel), 3, 1);
lean::closure_set(x_248, 0, x_226);
x_249 = lean::box(2);
x_250 = l_lean_server_server__state_run__except___rarg(x_249, x_248, x_1, x_2);
return x_250;
}
}
else
{
obj* x_253; obj* x_254; obj* x_255; 
lean::dec(x_226);
lean::dec(x_224);
x_253 = lean::box(2);
x_254 = l_lean_server_server__state_handle__msg___closed__9;
x_255 = l_lean_server_server__state_run__except___rarg(x_253, x_254, x_1, x_2);
return x_255;
}
}
else
{
obj* x_257; obj* x_258; obj* x_259; 
lean::dec(x_224);
x_257 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_server__state_handle__did__close), 3, 1);
lean::closure_set(x_257, 0, x_226);
x_258 = lean::box(2);
x_259 = l_lean_server_server__state_run__except___rarg(x_258, x_257, x_1, x_2);
return x_259;
}
}
else
{
obj* x_261; obj* x_262; obj* x_263; 
lean::dec(x_224);
x_261 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_server__state_handle__did__change), 3, 1);
lean::closure_set(x_261, 0, x_226);
x_262 = lean::box(2);
x_263 = l_lean_server_server__state_run__except___rarg(x_262, x_261, x_1, x_2);
return x_263;
}
}
else
{
obj* x_265; obj* x_266; obj* x_267; 
lean::dec(x_224);
x_265 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_server_server__state_handle__did__open), 3, 1);
lean::closure_set(x_265, 0, x_226);
x_266 = lean::box(2);
x_267 = l_lean_server_server__state_run__except___rarg(x_266, x_265, x_1, x_2);
return x_267;
}
}
default:
{
obj* x_269; obj* x_270; obj* x_271; 
lean::dec(x_3);
x_269 = lean::box(0);
x_270 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_270, 0, x_269);
lean::cnstr_set(x_270, 1, x_1);
x_271 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_271, 0, x_270);
lean::cnstr_set(x_271, 1, x_2);
return x_271;
}
}
}
lbl_6:
{
if (lean::obj_tag(x_5) == 0)
{
obj* x_272; obj* x_273; obj* x_274; 
x_272 = lean::box(2);
x_273 = l_lean_server_server__state_handle__msg___closed__10;
x_274 = l_lean_server_server__state_send__error(x_272, x_273, x_0, x_1, x_2);
return x_274;
}
else
{
obj* x_276; 
lean::dec(x_0);
x_276 = lean::cnstr_get(x_5, 0);
lean::inc(x_276);
lean::dec(x_5);
x_3 = x_276;
goto lbl_4;
}
}
}
}
obj* l_state__t_pure___at_lean_server_server__state_handle__msg___spec__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_state__t_pure___at_lean_server_server__state_handle__msg___spec__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_list_mfilter___main___at_lean_server_server__state_loop1___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_3; obj* x_4; 
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
return x_4;
}
else
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_12; 
x_5 = lean::cnstr_get(x_0, 0);
x_7 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_9 = x_0;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_0);
 x_9 = lean::box(0);
}
x_10 = lean::cnstr_get(x_5, 1);
lean::inc(x_10);
switch (lean::obj_tag(x_10)) {
case 0:
{
obj* x_14; obj* x_16; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
x_16 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_16, 0, x_14);
x_12 = x_16;
goto lbl_13;
}
case 1:
{
obj* x_17; obj* x_19; 
x_17 = lean::cnstr_get(x_10, 0);
lean::inc(x_17);
x_19 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_19, 0, x_17);
x_12 = x_19;
goto lbl_13;
}
default:
{
obj* x_20; 
x_20 = lean::box(0);
x_12 = x_20;
goto lbl_13;
}
}
lbl_13:
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_26; obj* x_29; obj* x_32; obj* x_34; obj* x_35; 
x_21 = lean::mk_nat_obj(80u);
x_22 = l_json_pretty(x_12, x_21);
x_23 = l_lean_server_server__state_log(x_22, x_1, x_2);
x_24 = lean::cnstr_get(x_23, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_23, 1);
lean::inc(x_26);
lean::dec(x_23);
x_29 = lean::cnstr_get(x_24, 1);
lean::inc(x_29);
lean::dec(x_24);
x_32 = lean::cnstr_get(x_5, 2);
lean::inc(x_32);
x_34 = l_task_peek___rarg(x_32, x_26);
x_35 = lean::cnstr_get(x_34, 0);
lean::inc(x_35);
if (lean::obj_tag(x_35) == 0)
{
obj* x_38; obj* x_41; obj* x_42; obj* x_44; obj* x_46; obj* x_47; obj* x_49; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
lean::dec(x_10);
x_38 = lean::cnstr_get(x_34, 1);
lean::inc(x_38);
lean::dec(x_34);
x_41 = l_list_mfilter___main___at_lean_server_server__state_loop1___spec__1(x_7, x_29, x_38);
x_42 = lean::cnstr_get(x_41, 0);
x_44 = lean::cnstr_get(x_41, 1);
if (lean::is_exclusive(x_41)) {
 x_46 = x_41;
} else {
 lean::inc(x_42);
 lean::inc(x_44);
 lean::dec(x_41);
 x_46 = lean::box(0);
}
x_47 = lean::cnstr_get(x_42, 0);
x_49 = lean::cnstr_get(x_42, 1);
if (lean::is_exclusive(x_42)) {
 x_51 = x_42;
} else {
 lean::inc(x_47);
 lean::inc(x_49);
 lean::dec(x_42);
 x_51 = lean::box(0);
}
if (lean::is_scalar(x_9)) {
 x_52 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_52 = x_9;
}
lean::cnstr_set(x_52, 0, x_5);
lean::cnstr_set(x_52, 1, x_47);
if (lean::is_scalar(x_51)) {
 x_53 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_53 = x_51;
}
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_49);
if (lean::is_scalar(x_46)) {
 x_54 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_54 = x_46;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_44);
return x_54;
}
else
{
obj* x_57; 
lean::dec(x_5);
lean::dec(x_9);
x_57 = lean::cnstr_get(x_35, 0);
lean::inc(x_57);
lean::dec(x_35);
if (lean::obj_tag(x_57) == 0)
{
obj* x_60; obj* x_63; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_72; obj* x_75; obj* x_78; obj* x_79; obj* x_81; obj* x_83; obj* x_84; obj* x_86; obj* x_88; obj* x_89; obj* x_90; 
x_60 = lean::cnstr_get(x_34, 1);
lean::inc(x_60);
lean::dec(x_34);
x_63 = lean::cnstr_get(x_57, 0);
lean::inc(x_63);
lean::dec(x_57);
x_66 = l_lean_server_server__state_send__error___closed__1;
x_67 = lean::box(0);
x_68 = lean::alloc_cnstr(2, 4, 0);
lean::cnstr_set(x_68, 0, x_10);
lean::cnstr_set(x_68, 1, x_66);
lean::cnstr_set(x_68, 2, x_63);
lean::cnstr_set(x_68, 3, x_67);
x_69 = l_lean_server_server__state_send__msg(x_68, x_29, x_60);
x_70 = lean::cnstr_get(x_69, 0);
lean::inc(x_70);
x_72 = lean::cnstr_get(x_69, 1);
lean::inc(x_72);
lean::dec(x_69);
x_75 = lean::cnstr_get(x_70, 1);
lean::inc(x_75);
lean::dec(x_70);
x_78 = l_list_mfilter___main___at_lean_server_server__state_loop1___spec__1(x_7, x_75, x_72);
x_79 = lean::cnstr_get(x_78, 0);
x_81 = lean::cnstr_get(x_78, 1);
if (lean::is_exclusive(x_78)) {
 x_83 = x_78;
} else {
 lean::inc(x_79);
 lean::inc(x_81);
 lean::dec(x_78);
 x_83 = lean::box(0);
}
x_84 = lean::cnstr_get(x_79, 0);
x_86 = lean::cnstr_get(x_79, 1);
if (lean::is_exclusive(x_79)) {
 x_88 = x_79;
} else {
 lean::inc(x_84);
 lean::inc(x_86);
 lean::dec(x_79);
 x_88 = lean::box(0);
}
if (lean::is_scalar(x_88)) {
 x_89 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_89 = x_88;
}
lean::cnstr_set(x_89, 0, x_84);
lean::cnstr_set(x_89, 1, x_86);
if (lean::is_scalar(x_83)) {
 x_90 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_90 = x_83;
}
lean::cnstr_set(x_90, 0, x_89);
lean::cnstr_set(x_90, 1, x_81);
return x_90;
}
else
{
obj* x_91; obj* x_94; obj* x_97; obj* x_98; obj* x_99; obj* x_101; obj* x_104; obj* x_107; obj* x_108; obj* x_110; obj* x_112; obj* x_113; obj* x_115; obj* x_117; obj* x_118; obj* x_119; 
x_91 = lean::cnstr_get(x_34, 1);
lean::inc(x_91);
lean::dec(x_34);
x_94 = lean::cnstr_get(x_57, 0);
lean::inc(x_94);
lean::dec(x_57);
x_97 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_97, 0, x_10);
lean::cnstr_set(x_97, 1, x_94);
x_98 = l_lean_server_server__state_send__msg(x_97, x_29, x_91);
x_99 = lean::cnstr_get(x_98, 0);
lean::inc(x_99);
x_101 = lean::cnstr_get(x_98, 1);
lean::inc(x_101);
lean::dec(x_98);
x_104 = lean::cnstr_get(x_99, 1);
lean::inc(x_104);
lean::dec(x_99);
x_107 = l_list_mfilter___main___at_lean_server_server__state_loop1___spec__1(x_7, x_104, x_101);
x_108 = lean::cnstr_get(x_107, 0);
x_110 = lean::cnstr_get(x_107, 1);
if (lean::is_exclusive(x_107)) {
 x_112 = x_107;
} else {
 lean::inc(x_108);
 lean::inc(x_110);
 lean::dec(x_107);
 x_112 = lean::box(0);
}
x_113 = lean::cnstr_get(x_108, 0);
x_115 = lean::cnstr_get(x_108, 1);
if (lean::is_exclusive(x_108)) {
 x_117 = x_108;
} else {
 lean::inc(x_113);
 lean::inc(x_115);
 lean::dec(x_108);
 x_117 = lean::box(0);
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_113);
lean::cnstr_set(x_118, 1, x_115);
if (lean::is_scalar(x_112)) {
 x_119 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_119 = x_112;
}
lean::cnstr_set(x_119, 0, x_118);
lean::cnstr_set(x_119, 1, x_110);
return x_119;
}
}
}
}
}
}
obj* l_list_mmap_x_27___main___at_lean_server_server__state_loop1___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = lean::box(0);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_11; obj* x_13; obj* x_16; obj* x_17; obj* x_19; obj* x_22; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_0, 1);
lean::inc(x_8);
lean::dec(x_0);
x_11 = lean::cnstr_get(x_6, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_6, 1);
lean::inc(x_13);
lean::dec(x_6);
x_16 = l_lean_server_server__state_handle__poll(x_11, x_13, x_1, x_2);
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_16, 1);
lean::inc(x_19);
lean::dec(x_16);
x_22 = lean::cnstr_get(x_17, 1);
lean::inc(x_22);
lean::dec(x_17);
x_0 = x_8;
x_1 = x_22;
x_2 = x_19;
goto _start;
}
}
}
obj* l_io_get__line___at_lean_server_server__state_loop1___spec__5(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean_io_prim_get_line(x_0);
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; 
x_4 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_6 = x_1;
} else {
 lean::inc(x_4);
 lean::dec(x_1);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_2, 0);
if (lean::is_exclusive(x_2)) {
 x_9 = x_2;
} else {
 lean::inc(x_7);
 lean::dec(x_2);
 x_9 = lean::box(0);
}
if (lean::is_scalar(x_9)) {
 x_10 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_10 = x_9;
}
lean::cnstr_set(x_10, 0, x_7);
if (lean::is_scalar(x_6)) {
 x_11 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_11 = x_6;
}
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_18; obj* x_19; 
x_12 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_14 = x_1;
} else {
 lean::inc(x_12);
 lean::dec(x_1);
 x_14 = lean::box(0);
}
x_15 = lean::cnstr_get(x_2, 0);
if (lean::is_exclusive(x_2)) {
 x_17 = x_2;
} else {
 lean::inc(x_15);
 lean::dec(x_2);
 x_17 = lean::box(0);
}
if (lean::is_scalar(x_17)) {
 x_18 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_18 = x_17;
}
lean::cnstr_set(x_18, 0, x_15);
if (lean::is_scalar(x_14)) {
 x_19 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_19 = x_14;
}
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_12);
return x_19;
}
}
}
obj* _init_l_jsonrpc_read__header___main___at_lean_server_server__state_loop1___spec__4___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("maximum header length exceeded");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_jsonrpc_read__header___main___at_lean_server_server__state_loop1___spec__4(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; uint8 x_3; 
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::nat_dec_eq(x_0, x_2);
if (x_3 == 0)
{
obj* x_4; obj* x_5; 
x_4 = l_io_get__line___at_lean_server_server__state_loop1___spec__5(x_1);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
if (lean::obj_tag(x_5) == 0)
{
obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; 
x_7 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 x_9 = x_4;
} else {
 lean::inc(x_7);
 lean::dec(x_4);
 x_9 = lean::box(0);
}
x_10 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_12 = x_5;
} else {
 lean::inc(x_10);
 lean::dec(x_5);
 x_12 = lean::box(0);
}
if (lean::is_scalar(x_12)) {
 x_13 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_13 = x_12;
}
lean::cnstr_set(x_13, 0, x_10);
if (lean::is_scalar(x_9)) {
 x_14 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_14 = x_9;
}
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_7);
return x_14;
}
else
{
obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_21; uint8 x_22; 
x_15 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_set(x_4, 1, lean::box(0));
 x_17 = x_4;
} else {
 lean::inc(x_15);
 lean::dec(x_4);
 x_17 = lean::box(0);
}
x_18 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_set(x_5, 0, lean::box(0));
 x_20 = x_5;
} else {
 lean::inc(x_18);
 lean::dec(x_5);
 x_20 = lean::box(0);
}
x_21 = l_jsonrpc_read__header___main___rarg___lambda__5___closed__1;
x_22 = lean::string_dec_eq(x_18, x_21);
if (x_22 == 0)
{
obj* x_23; obj* x_24; uint32 x_25; obj* x_27; 
x_23 = lean::mk_nat_obj(1u);
x_24 = lean::nat_sub(x_0, x_23);
x_25 = 58;
lean::inc(x_18);
x_27 = l_string_find(x_25, x_18);
if (lean::obj_tag(x_27) == 0)
{
obj* x_29; obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_24);
x_29 = l_jsonrpc_read__header___main___rarg___lambda__4___closed__1;
x_30 = lean::string_append(x_29, x_18);
lean::dec(x_18);
if (lean::is_scalar(x_20)) {
 x_32 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_32 = x_20;
 lean::cnstr_set_tag(x_20, 0);
}
lean::cnstr_set(x_32, 0, x_30);
if (lean::is_scalar(x_17)) {
 x_33 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_33 = x_17;
}
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_15);
return x_33;
}
else
{
obj* x_34; obj* x_38; obj* x_39; 
x_34 = lean::cnstr_get(x_27, 0);
lean::inc(x_34);
lean::dec(x_27);
lean::inc(x_18);
x_38 = lean::string_mk_iterator(x_18);
x_39 = lean::string_iterator_extract(x_38, x_34);
if (lean::obj_tag(x_39) == 0)
{
obj* x_43; obj* x_44; obj* x_46; obj* x_47; 
lean::dec(x_24);
lean::dec(x_38);
lean::dec(x_34);
x_43 = l_jsonrpc_read__header___main___rarg___lambda__3___closed__1;
x_44 = lean::string_append(x_43, x_18);
lean::dec(x_18);
if (lean::is_scalar(x_20)) {
 x_46 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_46 = x_20;
 lean::cnstr_set_tag(x_20, 0);
}
lean::cnstr_set(x_46, 0, x_44);
if (lean::is_scalar(x_17)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_17;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_15);
return x_47;
}
else
{
obj* x_48; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
x_48 = lean::cnstr_get(x_39, 0);
lean::inc(x_48);
lean::dec(x_39);
x_51 = lean::string_iterator_next(x_34);
x_52 = lean::string_iterator_to_end(x_38);
x_53 = lean::string_iterator_prev(x_52);
x_54 = lean::string_iterator_extract(x_51, x_53);
lean::dec(x_53);
lean::dec(x_51);
if (lean::obj_tag(x_54) == 0)
{
obj* x_59; obj* x_60; obj* x_62; obj* x_63; 
lean::dec(x_24);
lean::dec(x_48);
x_59 = l_jsonrpc_read__header___main___rarg___lambda__2___closed__1;
x_60 = lean::string_append(x_59, x_18);
lean::dec(x_18);
if (lean::is_scalar(x_20)) {
 x_62 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_62 = x_20;
 lean::cnstr_set_tag(x_20, 0);
}
lean::cnstr_set(x_62, 0, x_60);
if (lean::is_scalar(x_17)) {
 x_63 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_63 = x_17;
}
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_15);
return x_63;
}
else
{
obj* x_66; obj* x_69; obj* x_71; 
lean::dec(x_18);
lean::dec(x_20);
x_66 = lean::cnstr_get(x_54, 0);
lean::inc(x_66);
lean::dec(x_54);
x_69 = l_jsonrpc_read__header___main___at_lean_server_server__state_loop1___spec__4(x_24, x_15);
lean::dec(x_24);
x_71 = lean::cnstr_get(x_69, 0);
lean::inc(x_71);
if (lean::obj_tag(x_71) == 0)
{
obj* x_76; obj* x_78; obj* x_79; obj* x_81; obj* x_82; obj* x_83; 
lean::dec(x_66);
lean::dec(x_17);
lean::dec(x_48);
x_76 = lean::cnstr_get(x_69, 1);
if (lean::is_exclusive(x_69)) {
 lean::cnstr_release(x_69, 0);
 x_78 = x_69;
} else {
 lean::inc(x_76);
 lean::dec(x_69);
 x_78 = lean::box(0);
}
x_79 = lean::cnstr_get(x_71, 0);
if (lean::is_exclusive(x_71)) {
 x_81 = x_71;
} else {
 lean::inc(x_79);
 lean::dec(x_71);
 x_81 = lean::box(0);
}
if (lean::is_scalar(x_81)) {
 x_82 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_82 = x_81;
}
lean::cnstr_set(x_82, 0, x_79);
if (lean::is_scalar(x_78)) {
 x_83 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_83 = x_78;
}
lean::cnstr_set(x_83, 0, x_82);
lean::cnstr_set(x_83, 1, x_76);
return x_83;
}
else
{
obj* x_84; obj* x_86; obj* x_87; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; 
x_84 = lean::cnstr_get(x_69, 1);
if (lean::is_exclusive(x_69)) {
 lean::cnstr_release(x_69, 0);
 x_86 = x_69;
} else {
 lean::inc(x_84);
 lean::dec(x_69);
 x_86 = lean::box(0);
}
x_87 = lean::cnstr_get(x_71, 0);
if (lean::is_exclusive(x_71)) {
 x_89 = x_71;
} else {
 lean::inc(x_87);
 lean::dec(x_71);
 x_89 = lean::box(0);
}
if (lean::is_scalar(x_86)) {
 x_90 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_90 = x_86;
}
lean::cnstr_set(x_90, 0, x_48);
lean::cnstr_set(x_90, 1, x_66);
x_91 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_91, 0, x_90);
lean::cnstr_set(x_91, 1, x_87);
if (lean::is_scalar(x_89)) {
 x_92 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_92 = x_89;
}
lean::cnstr_set(x_92, 0, x_91);
if (lean::is_scalar(x_17)) {
 x_93 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_93 = x_17;
}
lean::cnstr_set(x_93, 0, x_92);
lean::cnstr_set(x_93, 1, x_84);
return x_93;
}
}
}
}
}
else
{
obj* x_96; obj* x_97; 
lean::dec(x_18);
lean::dec(x_20);
x_96 = l_lean_expander_expand__bracketed__binder___main___closed__4;
if (lean::is_scalar(x_17)) {
 x_97 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_97 = x_17;
}
lean::cnstr_set(x_97, 0, x_96);
lean::cnstr_set(x_97, 1, x_15);
return x_97;
}
}
}
else
{
obj* x_98; obj* x_99; 
x_98 = l_jsonrpc_read__header___main___at_lean_server_server__state_loop1___spec__4___closed__1;
x_99 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_99, 0, x_98);
lean::cnstr_set(x_99, 1, x_1);
return x_99;
}
}
}
obj* l_io_get__bytes___at_lean_server_server__state_loop1___spec__6(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean_io_prim_get_bytes(x_0, x_1);
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
if (lean::obj_tag(x_3) == 0)
{
obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_11; obj* x_12; 
x_5 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 x_7 = x_2;
} else {
 lean::inc(x_5);
 lean::dec(x_2);
 x_7 = lean::box(0);
}
x_8 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_10 = x_3;
} else {
 lean::inc(x_8);
 lean::dec(x_3);
 x_10 = lean::box(0);
}
if (lean::is_scalar(x_10)) {
 x_11 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_11 = x_10;
}
lean::cnstr_set(x_11, 0, x_8);
if (lean::is_scalar(x_7)) {
 x_12 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_12 = x_7;
}
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_5);
return x_12;
}
else
{
obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_19; obj* x_20; 
x_13 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 x_15 = x_2;
} else {
 lean::inc(x_13);
 lean::dec(x_2);
 x_15 = lean::box(0);
}
x_16 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_18 = x_3;
} else {
 lean::inc(x_16);
 lean::dec(x_3);
 x_18 = lean::box(0);
}
if (lean::is_scalar(x_18)) {
 x_19 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_19 = x_18;
}
lean::cnstr_set(x_19, 0, x_16);
if (lean::is_scalar(x_15)) {
 x_20 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_20 = x_15;
}
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_13);
return x_20;
}
}
}
obj* _init_l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("no Content-Length header");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::mk_nat_obj(100u);
x_2 = l_jsonrpc_read__header___main___at_lean_server_server__state_loop1___spec__4(x_1, x_0);
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
if (lean::obj_tag(x_3) == 0)
{
obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_11; obj* x_12; 
x_5 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 x_7 = x_2;
} else {
 lean::inc(x_5);
 lean::dec(x_2);
 x_7 = lean::box(0);
}
x_8 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_10 = x_3;
} else {
 lean::inc(x_8);
 lean::dec(x_3);
 x_10 = lean::box(0);
}
if (lean::is_scalar(x_10)) {
 x_11 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_11 = x_10;
}
lean::cnstr_set(x_11, 0, x_8);
if (lean::is_scalar(x_7)) {
 x_12 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_12 = x_7;
}
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_5);
return x_12;
}
else
{
obj* x_13; obj* x_15; obj* x_16; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_13 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_set(x_2, 1, lean::box(0));
 x_15 = x_2;
} else {
 lean::inc(x_13);
 lean::dec(x_2);
 x_15 = lean::box(0);
}
x_16 = lean::cnstr_get(x_3, 0);
lean::inc(x_16);
lean::dec(x_3);
x_19 = l_jsonrpc_read__msg__raw___rarg___lambda__3___closed__1;
x_20 = l_list_lookup___main___at_jsonrpc_read__msg__raw___spec__1(x_19, x_16);
x_21 = l_lean_parser_monad__parsec_num___rarg___closed__1;
x_22 = l_option_map___rarg(x_21, x_20);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_24; 
x_23 = l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3___rarg___closed__1;
if (lean::is_scalar(x_15)) {
 x_24 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_24 = x_15;
}
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_13);
return x_24;
}
else
{
obj* x_26; obj* x_29; obj* x_30; 
lean::dec(x_15);
x_26 = lean::cnstr_get(x_22, 0);
lean::inc(x_26);
lean::dec(x_22);
x_29 = l_io_get__bytes___at_lean_server_server__state_loop1___spec__6(x_26, x_13);
x_30 = lean::cnstr_get(x_29, 0);
lean::inc(x_30);
if (lean::obj_tag(x_30) == 0)
{
obj* x_32; obj* x_34; obj* x_35; obj* x_37; obj* x_38; obj* x_39; 
x_32 = lean::cnstr_get(x_29, 1);
if (lean::is_exclusive(x_29)) {
 lean::cnstr_release(x_29, 0);
 x_34 = x_29;
} else {
 lean::inc(x_32);
 lean::dec(x_29);
 x_34 = lean::box(0);
}
x_35 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_37 = x_30;
} else {
 lean::inc(x_35);
 lean::dec(x_30);
 x_37 = lean::box(0);
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_35);
if (lean::is_scalar(x_34)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_34;
}
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_32);
return x_39;
}
else
{
obj* x_40; obj* x_42; obj* x_43; obj* x_46; 
x_40 = lean::cnstr_get(x_29, 1);
if (lean::is_exclusive(x_29)) {
 lean::cnstr_release(x_29, 0);
 lean::cnstr_set(x_29, 1, lean::box(0));
 x_42 = x_29;
} else {
 lean::inc(x_40);
 lean::dec(x_29);
 x_42 = lean::box(0);
}
x_43 = lean::cnstr_get(x_30, 0);
lean::inc(x_43);
lean::dec(x_30);
x_46 = l_json_parse(x_43);
if (lean::obj_tag(x_46) == 0)
{
obj* x_47; obj* x_49; obj* x_50; obj* x_51; 
x_47 = lean::cnstr_get(x_46, 0);
if (lean::is_exclusive(x_46)) {
 x_49 = x_46;
} else {
 lean::inc(x_47);
 lean::dec(x_46);
 x_49 = lean::box(0);
}
if (lean::is_scalar(x_49)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_49;
}
lean::cnstr_set(x_50, 0, x_47);
if (lean::is_scalar(x_42)) {
 x_51 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_51 = x_42;
}
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_40);
return x_51;
}
else
{
obj* x_52; obj* x_54; obj* x_55; obj* x_56; 
x_52 = lean::cnstr_get(x_46, 0);
if (lean::is_exclusive(x_46)) {
 x_54 = x_46;
} else {
 lean::inc(x_52);
 lean::dec(x_46);
 x_54 = lean::box(0);
}
if (lean::is_scalar(x_54)) {
 x_55 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_55 = x_54;
}
lean::cnstr_set(x_55, 0, x_52);
if (lean::is_scalar(x_42)) {
 x_56 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_56 = x_42;
}
lean::cnstr_set(x_56, 0, x_55);
lean::cnstr_set(x_56, 1, x_40);
return x_56;
}
}
}
}
}
}
obj* l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3___rarg), 1, 0);
return x_1;
}
}
obj* l_lean_server_server__state_loop1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_8; obj* x_11; obj* x_14; obj* x_15; 
x_2 = l_lean_server_server__state_wait(x_0, x_1);
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_3, 1);
lean::inc(x_8);
lean::dec(x_3);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
lean::inc(x_11);
x_14 = l_task_peek___rarg(x_11, x_5);
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
if (lean::obj_tag(x_15) == 0)
{
obj* x_17; obj* x_20; obj* x_23; obj* x_24; obj* x_26; obj* x_29; obj* x_32; obj* x_34; obj* x_36; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_45; obj* x_47; obj* x_48; obj* x_50; uint8 x_51; obj* x_52; obj* x_53; obj* x_54; 
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
lean::dec(x_14);
x_20 = lean::cnstr_get(x_8, 2);
lean::inc(x_20);
lean::inc(x_8);
x_23 = l_list_mfilter___main___at_lean_server_server__state_loop1___spec__1(x_20, x_8, x_17);
x_24 = lean::cnstr_get(x_23, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_23, 1);
lean::inc(x_26);
lean::dec(x_23);
x_29 = lean::cnstr_get(x_24, 0);
lean::inc(x_29);
lean::dec(x_24);
x_32 = lean::cnstr_get(x_8, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_8, 3);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_8, 4);
lean::inc(x_36);
lean::dec(x_8);
lean::inc(x_32);
x_40 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_40, 0, x_32);
lean::cnstr_set(x_40, 1, x_11);
lean::cnstr_set(x_40, 2, x_29);
lean::cnstr_set(x_40, 3, x_34);
lean::cnstr_set(x_40, 4, x_36);
x_41 = l_rbmap_to__list___main___rarg(x_32);
x_42 = l_list_mmap_x_27___main___at_lean_server_server__state_loop1___spec__2(x_41, x_40, x_26);
x_43 = lean::cnstr_get(x_42, 0);
x_45 = lean::cnstr_get(x_42, 1);
if (lean::is_exclusive(x_42)) {
 x_47 = x_42;
} else {
 lean::inc(x_43);
 lean::inc(x_45);
 lean::dec(x_42);
 x_47 = lean::box(0);
}
x_48 = lean::cnstr_get(x_43, 1);
if (lean::is_exclusive(x_43)) {
 lean::cnstr_release(x_43, 0);
 x_50 = x_43;
} else {
 lean::inc(x_48);
 lean::dec(x_43);
 x_50 = lean::box(0);
}
x_51 = 1;
x_52 = lean::box(x_51);
if (lean::is_scalar(x_50)) {
 x_53 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_53 = x_50;
}
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_48);
if (lean::is_scalar(x_47)) {
 x_54 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_54 = x_47;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_45);
return x_54;
}
else
{
obj* x_56; 
lean::dec(x_11);
x_56 = lean::cnstr_get(x_15, 0);
lean::inc(x_56);
lean::dec(x_15);
if (lean::obj_tag(x_56) == 0)
{
obj* x_59; obj* x_62; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_70; obj* x_72; obj* x_73; obj* x_75; uint8 x_76; obj* x_77; obj* x_78; obj* x_79; 
x_59 = lean::cnstr_get(x_14, 1);
lean::inc(x_59);
lean::dec(x_14);
x_62 = lean::cnstr_get(x_56, 0);
lean::inc(x_62);
lean::dec(x_56);
x_65 = lean::box(2);
x_66 = lean::box(0);
x_67 = l_lean_server_server__state_send__error(x_65, x_62, x_66, x_8, x_59);
x_68 = lean::cnstr_get(x_67, 0);
x_70 = lean::cnstr_get(x_67, 1);
if (lean::is_exclusive(x_67)) {
 x_72 = x_67;
} else {
 lean::inc(x_68);
 lean::inc(x_70);
 lean::dec(x_67);
 x_72 = lean::box(0);
}
x_73 = lean::cnstr_get(x_68, 1);
if (lean::is_exclusive(x_68)) {
 lean::cnstr_release(x_68, 0);
 x_75 = x_68;
} else {
 lean::inc(x_73);
 lean::dec(x_68);
 x_75 = lean::box(0);
}
x_76 = 0;
x_77 = lean::box(x_76);
if (lean::is_scalar(x_75)) {
 x_78 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_78 = x_75;
}
lean::cnstr_set(x_78, 0, x_77);
lean::cnstr_set(x_78, 1, x_73);
if (lean::is_scalar(x_72)) {
 x_79 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_79 = x_72;
}
lean::cnstr_set(x_79, 0, x_78);
lean::cnstr_set(x_79, 1, x_70);
return x_79;
}
else
{
obj* x_80; obj* x_83; obj* x_86; obj* x_87; obj* x_88; obj* x_90; obj* x_93; obj* x_95; obj* x_97; obj* x_99; obj* x_102; obj* x_103; obj* x_104; obj* x_106; obj* x_108; obj* x_109; obj* x_111; uint8 x_112; obj* x_113; obj* x_114; obj* x_115; 
x_80 = lean::cnstr_get(x_14, 1);
lean::inc(x_80);
lean::dec(x_14);
x_83 = lean::cnstr_get(x_56, 0);
lean::inc(x_83);
lean::dec(x_56);
x_86 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3___rarg), 1, 0);
x_87 = lean_io_mk_task(lean::box(0), x_86, x_80);
x_88 = lean::cnstr_get(x_87, 0);
lean::inc(x_88);
x_90 = lean::cnstr_get(x_87, 1);
lean::inc(x_90);
lean::dec(x_87);
x_93 = lean::cnstr_get(x_8, 3);
lean::inc(x_93);
x_95 = lean::cnstr_get(x_8, 0);
lean::inc(x_95);
x_97 = lean::cnstr_get(x_8, 2);
lean::inc(x_97);
x_99 = lean::cnstr_get(x_8, 4);
lean::inc(x_99);
lean::dec(x_8);
x_102 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_102, 0, x_95);
lean::cnstr_set(x_102, 1, x_88);
lean::cnstr_set(x_102, 2, x_97);
lean::cnstr_set(x_102, 3, x_93);
lean::cnstr_set(x_102, 4, x_99);
x_103 = l_lean_server_server__state_handle__msg(x_83, x_102, x_90);
x_104 = lean::cnstr_get(x_103, 0);
x_106 = lean::cnstr_get(x_103, 1);
if (lean::is_exclusive(x_103)) {
 x_108 = x_103;
} else {
 lean::inc(x_104);
 lean::inc(x_106);
 lean::dec(x_103);
 x_108 = lean::box(0);
}
x_109 = lean::cnstr_get(x_104, 1);
if (lean::is_exclusive(x_104)) {
 lean::cnstr_release(x_104, 0);
 x_111 = x_104;
} else {
 lean::inc(x_109);
 lean::dec(x_104);
 x_111 = lean::box(0);
}
x_112 = 1;
x_113 = lean::box(x_112);
if (lean::is_scalar(x_111)) {
 x_114 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_114 = x_111;
}
lean::cnstr_set(x_114, 0, x_113);
lean::cnstr_set(x_114, 1, x_109);
if (lean::is_scalar(x_108)) {
 x_115 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_115 = x_108;
}
lean::cnstr_set(x_115, 0, x_114);
lean::cnstr_set(x_115, 1, x_106);
return x_115;
}
}
}
}
obj* l_jsonrpc_read__header___main___at_lean_server_server__state_loop1___spec__4___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_jsonrpc_read__header___main___at_lean_server_server__state_loop1___spec__4(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_io_prim_iterate___main___at_lean_server_server__state_loop___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; uint8 x_7; 
x_2 = l_lean_server_server__state_loop1(x_0, x_1);
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_3, 0);
lean::inc(x_5);
x_7 = lean::unbox(x_5);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_12; obj* x_13; 
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 x_8 = x_3;
} else {
 lean::dec(x_3);
 x_8 = lean::box(0);
}
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::dec(x_2);
x_12 = lean::box(0);
if (lean::is_scalar(x_8)) {
 x_13 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_13 = x_8;
}
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_9);
return x_13;
}
else
{
obj* x_14; obj* x_17; 
x_14 = lean::cnstr_get(x_2, 1);
lean::inc(x_14);
lean::dec(x_2);
x_17 = lean::cnstr_get(x_3, 1);
lean::inc(x_17);
lean::dec(x_3);
x_0 = x_17;
x_1 = x_14;
goto _start;
}
}
}
obj* l_lean_server_server__state_loop(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_io_prim_iterate___main___at_lean_server_server__state_loop___spec__1(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_server_server__state_server__capabilities() {
_start:
{
uint8 x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_0 = 1;
x_1 = lean::alloc_cnstr(1, 0, 1);
lean::cnstr_set_scalar(x_1, 0, x_0);
x_2 = x_1;
x_3 = lean::mk_string("hoverProvider");
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::mk_nat_obj(1u);
x_6 = l_json__number_from__nat(x_5);
x_7 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
x_8 = lean::mk_string("textDocumentSync");
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_4);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_13, 0, x_12);
return x_13;
}
}
obj* l_jsonrpc_read__msg___at_lean_server_server__state_run__core___spec__1___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3___rarg(x_0);
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; 
x_4 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_6 = x_1;
} else {
 lean::inc(x_4);
 lean::dec(x_1);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_2, 0);
if (lean::is_exclusive(x_2)) {
 x_9 = x_2;
} else {
 lean::inc(x_7);
 lean::dec(x_2);
 x_9 = lean::box(0);
}
if (lean::is_scalar(x_9)) {
 x_10 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_10 = x_9;
}
lean::cnstr_set(x_10, 0, x_7);
if (lean::is_scalar(x_6)) {
 x_11 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_11 = x_6;
}
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_18; obj* x_20; 
x_12 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_14 = x_1;
} else {
 lean::inc(x_12);
 lean::dec(x_1);
 x_14 = lean::box(0);
}
x_15 = lean::cnstr_get(x_2, 0);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 x_17 = x_2;
} else {
 lean::inc(x_15);
 lean::dec(x_2);
 x_17 = lean::box(0);
}
x_18 = l_jsonrpc_message_has__from__json___closed__1;
lean::inc(x_15);
x_20 = l_json_get___main(x_15, x_18);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_26; obj* x_27; 
x_21 = lean::mk_nat_obj(80u);
x_22 = l_json_pretty(x_15, x_21);
x_23 = l_jsonrpc_read__msg___rarg___lambda__1___closed__1;
x_24 = lean::string_append(x_23, x_22);
lean::dec(x_22);
if (lean::is_scalar(x_17)) {
 x_26 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_26 = x_17;
 lean::cnstr_set_tag(x_17, 0);
}
lean::cnstr_set(x_26, 0, x_24);
if (lean::is_scalar(x_14)) {
 x_27 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_27 = x_14;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_12);
return x_27;
}
else
{
obj* x_28; obj* x_30; 
x_28 = lean::cnstr_get(x_20, 0);
if (lean::is_exclusive(x_20)) {
 lean::cnstr_set(x_20, 0, lean::box(0));
 x_30 = x_20;
} else {
 lean::inc(x_28);
 lean::dec(x_20);
 x_30 = lean::box(0);
}
switch (lean::obj_tag(x_28)) {
case 0:
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_37; obj* x_38; 
lean::dec(x_30);
x_32 = lean::mk_nat_obj(80u);
x_33 = l_json_pretty(x_15, x_32);
x_34 = l_jsonrpc_read__msg___rarg___lambda__1___closed__1;
x_35 = lean::string_append(x_34, x_33);
lean::dec(x_33);
if (lean::is_scalar(x_17)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_17;
 lean::cnstr_set_tag(x_17, 0);
}
lean::cnstr_set(x_37, 0, x_35);
if (lean::is_scalar(x_14)) {
 x_38 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_38 = x_14;
}
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_12);
return x_38;
}
case 3:
{
obj* x_39; obj* x_42; uint8 x_43; 
x_39 = lean::cnstr_get(x_28, 0);
lean::inc(x_39);
lean::dec(x_28);
x_42 = l_jsonrpc_message_has__from__json___closed__2;
x_43 = lean::string_dec_eq(x_39, x_42);
lean::dec(x_39);
if (x_43 == 0)
{
obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_51; obj* x_52; 
lean::dec(x_30);
x_46 = lean::mk_nat_obj(80u);
x_47 = l_json_pretty(x_15, x_46);
x_48 = l_jsonrpc_read__msg___rarg___lambda__1___closed__1;
x_49 = lean::string_append(x_48, x_47);
lean::dec(x_47);
if (lean::is_scalar(x_17)) {
 x_51 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_51 = x_17;
 lean::cnstr_set_tag(x_17, 0);
}
lean::cnstr_set(x_51, 0, x_49);
if (lean::is_scalar(x_14)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_14;
}
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_12);
return x_52;
}
else
{
obj* x_53; obj* x_55; obj* x_56; obj* x_58; obj* x_59; 
x_53 = l_jsonrpc_message_has__to__json___closed__1;
lean::inc(x_15);
x_55 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__1(x_15, x_53);
x_56 = l_jsonrpc_message_has__to__json___closed__2;
lean::inc(x_15);
x_58 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_15, x_56);
if (lean::obj_tag(x_55) == 0)
{
obj* x_61; 
x_61 = lean::box(0);
x_59 = x_61;
goto lbl_60;
}
else
{
obj* x_62; obj* x_64; obj* x_66; 
x_62 = lean::cnstr_get(x_55, 0);
lean::inc(x_62);
x_64 = l_jsonrpc_message_has__to__json___closed__5;
lean::inc(x_15);
x_66 = l_json_get___main(x_15, x_64);
if (lean::obj_tag(x_66) == 0)
{
obj* x_68; 
lean::dec(x_62);
x_68 = lean::box(0);
x_59 = x_68;
goto lbl_60;
}
else
{
obj* x_69; obj* x_71; obj* x_72; obj* x_73; 
x_69 = lean::cnstr_get(x_66, 0);
if (lean::is_exclusive(x_66)) {
 x_71 = x_66;
} else {
 lean::inc(x_69);
 lean::dec(x_66);
 x_71 = lean::box(0);
}
x_72 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_72, 0, x_62);
lean::cnstr_set(x_72, 1, x_69);
if (lean::is_scalar(x_71)) {
 x_73 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_73 = x_71;
}
lean::cnstr_set(x_73, 0, x_72);
x_59 = x_73;
goto lbl_60;
}
}
lbl_60:
{
obj* x_74; obj* x_76; obj* x_77; 
if (lean::obj_tag(x_55) == 0)
{
obj* x_79; 
x_79 = lean::box(0);
if (lean::obj_tag(x_55) == 0)
{
lean::dec(x_30);
x_74 = x_79;
goto lbl_75;
}
else
{
obj* x_83; 
lean::dec(x_17);
lean::dec(x_14);
x_83 = lean::cnstr_get(x_55, 0);
lean::inc(x_83);
lean::dec(x_55);
x_76 = x_79;
x_77 = x_83;
goto lbl_78;
}
}
else
{
obj* x_86; obj* x_88; obj* x_90; 
x_86 = lean::cnstr_get(x_55, 0);
lean::inc(x_86);
x_88 = l_jsonrpc_message_has__to__json___closed__9;
lean::inc(x_15);
x_90 = l_json_get___main(x_15, x_88);
if (lean::obj_tag(x_90) == 0)
{
obj* x_91; 
x_91 = lean::box(0);
if (lean::obj_tag(x_55) == 0)
{
lean::dec(x_30);
lean::dec(x_86);
x_74 = x_91;
goto lbl_75;
}
else
{
lean::dec(x_17);
lean::dec(x_55);
lean::dec(x_14);
x_76 = x_91;
x_77 = x_86;
goto lbl_78;
}
}
else
{
obj* x_98; obj* x_100; 
lean::dec(x_90);
x_98 = l_jsonrpc_message_has__to__json___closed__6;
lean::inc(x_15);
x_100 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__3(x_15, x_98);
if (lean::obj_tag(x_100) == 0)
{
obj* x_101; 
x_101 = lean::box(0);
if (lean::obj_tag(x_55) == 0)
{
lean::dec(x_30);
lean::dec(x_86);
x_74 = x_101;
goto lbl_75;
}
else
{
lean::dec(x_17);
lean::dec(x_55);
lean::dec(x_14);
x_76 = x_101;
x_77 = x_86;
goto lbl_78;
}
}
else
{
obj* x_107; obj* x_110; obj* x_112; 
x_107 = lean::cnstr_get(x_100, 0);
lean::inc(x_107);
lean::dec(x_100);
x_110 = l_jsonrpc_message_has__to__json___closed__7;
lean::inc(x_15);
x_112 = l_json_get_x_27___at_jsonrpc_message_has__from__json___spec__2(x_15, x_110);
if (lean::obj_tag(x_112) == 0)
{
obj* x_114; 
lean::dec(x_107);
x_114 = lean::box(0);
if (lean::obj_tag(x_55) == 0)
{
lean::dec(x_30);
lean::dec(x_86);
x_74 = x_114;
goto lbl_75;
}
else
{
lean::dec(x_17);
lean::dec(x_55);
lean::dec(x_14);
x_76 = x_114;
x_77 = x_86;
goto lbl_78;
}
}
else
{
obj* x_120; obj* x_122; obj* x_123; obj* x_125; obj* x_127; obj* x_128; 
x_120 = lean::cnstr_get(x_112, 0);
if (lean::is_exclusive(x_112)) {
 x_122 = x_112;
} else {
 lean::inc(x_120);
 lean::dec(x_112);
 x_122 = lean::box(0);
}
x_123 = l_jsonrpc_message_has__to__json___closed__8;
lean::inc(x_15);
x_125 = l_json_get__or__null(x_15, x_123);
lean::inc(x_86);
x_127 = lean::alloc_cnstr(2, 4, 0);
lean::cnstr_set(x_127, 0, x_86);
lean::cnstr_set(x_127, 1, x_107);
lean::cnstr_set(x_127, 2, x_120);
lean::cnstr_set(x_127, 3, x_125);
if (lean::is_scalar(x_122)) {
 x_128 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_128 = x_122;
}
lean::cnstr_set(x_128, 0, x_127);
if (lean::obj_tag(x_55) == 0)
{
lean::dec(x_30);
lean::dec(x_86);
x_74 = x_128;
goto lbl_75;
}
else
{
lean::dec(x_17);
lean::dec(x_55);
lean::dec(x_14);
x_76 = x_128;
x_77 = x_86;
goto lbl_78;
}
}
}
}
}
lbl_75:
{
if (lean::obj_tag(x_58) == 0)
{
obj* x_134; obj* x_135; obj* x_137; 
x_134 = l_jsonrpc_message_has__from__json___closed__3;
x_135 = l_option_orelse___main___rarg(x_74, x_134);
lean::dec(x_74);
x_137 = l_option_orelse___main___rarg(x_59, x_135);
lean::dec(x_135);
lean::dec(x_59);
if (lean::obj_tag(x_137) == 0)
{
obj* x_140; obj* x_141; obj* x_142; obj* x_143; obj* x_145; obj* x_146; 
x_140 = lean::mk_nat_obj(80u);
x_141 = l_json_pretty(x_15, x_140);
x_142 = l_jsonrpc_read__msg___rarg___lambda__1___closed__1;
x_143 = lean::string_append(x_142, x_141);
lean::dec(x_141);
if (lean::is_scalar(x_17)) {
 x_145 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_145 = x_17;
 lean::cnstr_set_tag(x_17, 0);
}
lean::cnstr_set(x_145, 0, x_143);
if (lean::is_scalar(x_14)) {
 x_146 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_146 = x_14;
}
lean::cnstr_set(x_146, 0, x_145);
lean::cnstr_set(x_146, 1, x_12);
return x_146;
}
else
{
obj* x_148; obj* x_151; obj* x_152; 
lean::dec(x_15);
x_148 = lean::cnstr_get(x_137, 0);
lean::inc(x_148);
lean::dec(x_137);
if (lean::is_scalar(x_17)) {
 x_151 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_151 = x_17;
}
lean::cnstr_set(x_151, 0, x_148);
if (lean::is_scalar(x_14)) {
 x_152 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_152 = x_14;
}
lean::cnstr_set(x_152, 0, x_151);
lean::cnstr_set(x_152, 1, x_12);
return x_152;
}
}
else
{
obj* x_153; obj* x_155; obj* x_156; obj* x_157; obj* x_159; obj* x_160; obj* x_161; obj* x_162; obj* x_164; obj* x_167; 
x_153 = lean::cnstr_get(x_58, 0);
if (lean::is_exclusive(x_58)) {
 x_155 = x_58;
} else {
 lean::inc(x_153);
 lean::dec(x_58);
 x_155 = lean::box(0);
}
x_156 = lean::box(0);
x_157 = l_jsonrpc_message_has__to__json___closed__3;
lean::inc(x_15);
x_159 = l_json_get__or__null(x_15, x_157);
x_160 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_160, 0, x_153);
lean::cnstr_set(x_160, 1, x_159);
if (lean::is_scalar(x_155)) {
 x_161 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_161 = x_155;
}
lean::cnstr_set(x_161, 0, x_160);
x_162 = l_option_orelse___main___rarg(x_156, x_161);
lean::dec(x_161);
x_164 = l_option_orelse___main___rarg(x_74, x_162);
lean::dec(x_162);
lean::dec(x_74);
x_167 = l_option_orelse___main___rarg(x_59, x_164);
lean::dec(x_164);
lean::dec(x_59);
if (lean::obj_tag(x_167) == 0)
{
obj* x_170; obj* x_171; obj* x_172; obj* x_173; obj* x_175; obj* x_176; 
x_170 = lean::mk_nat_obj(80u);
x_171 = l_json_pretty(x_15, x_170);
x_172 = l_jsonrpc_read__msg___rarg___lambda__1___closed__1;
x_173 = lean::string_append(x_172, x_171);
lean::dec(x_171);
if (lean::is_scalar(x_17)) {
 x_175 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_175 = x_17;
 lean::cnstr_set_tag(x_17, 0);
}
lean::cnstr_set(x_175, 0, x_173);
if (lean::is_scalar(x_14)) {
 x_176 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_176 = x_14;
}
lean::cnstr_set(x_176, 0, x_175);
lean::cnstr_set(x_176, 1, x_12);
return x_176;
}
else
{
obj* x_178; obj* x_181; obj* x_182; 
lean::dec(x_15);
x_178 = lean::cnstr_get(x_167, 0);
lean::inc(x_178);
lean::dec(x_167);
if (lean::is_scalar(x_17)) {
 x_181 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_181 = x_17;
}
lean::cnstr_set(x_181, 0, x_178);
if (lean::is_scalar(x_14)) {
 x_182 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_182 = x_14;
}
lean::cnstr_set(x_182, 0, x_181);
lean::cnstr_set(x_182, 1, x_12);
return x_182;
}
}
}
lbl_78:
{
if (lean::obj_tag(x_58) == 0)
{
lean::dec(x_77);
lean::dec(x_30);
if (lean::obj_tag(x_58) == 0)
{
obj* x_185; obj* x_186; obj* x_188; 
x_185 = l_jsonrpc_message_has__from__json___closed__3;
x_186 = l_option_orelse___main___rarg(x_76, x_185);
lean::dec(x_76);
x_188 = l_option_orelse___main___rarg(x_59, x_186);
lean::dec(x_186);
lean::dec(x_59);
if (lean::obj_tag(x_188) == 0)
{
obj* x_191; obj* x_192; obj* x_193; obj* x_194; obj* x_196; obj* x_197; 
x_191 = lean::mk_nat_obj(80u);
x_192 = l_json_pretty(x_15, x_191);
x_193 = l_jsonrpc_read__msg___rarg___lambda__1___closed__1;
x_194 = lean::string_append(x_193, x_192);
lean::dec(x_192);
x_196 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_196, 0, x_194);
x_197 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_197, 0, x_196);
lean::cnstr_set(x_197, 1, x_12);
return x_197;
}
else
{
obj* x_199; obj* x_202; obj* x_203; 
lean::dec(x_15);
x_199 = lean::cnstr_get(x_188, 0);
lean::inc(x_199);
lean::dec(x_188);
x_202 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_202, 0, x_199);
x_203 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_203, 0, x_202);
lean::cnstr_set(x_203, 1, x_12);
return x_203;
}
}
else
{
obj* x_204; obj* x_206; obj* x_207; obj* x_208; obj* x_210; obj* x_211; obj* x_212; obj* x_213; obj* x_215; obj* x_218; 
x_204 = lean::cnstr_get(x_58, 0);
if (lean::is_exclusive(x_58)) {
 x_206 = x_58;
} else {
 lean::inc(x_204);
 lean::dec(x_58);
 x_206 = lean::box(0);
}
x_207 = lean::box(0);
x_208 = l_jsonrpc_message_has__to__json___closed__3;
lean::inc(x_15);
x_210 = l_json_get__or__null(x_15, x_208);
x_211 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_211, 0, x_204);
lean::cnstr_set(x_211, 1, x_210);
if (lean::is_scalar(x_206)) {
 x_212 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_212 = x_206;
}
lean::cnstr_set(x_212, 0, x_211);
x_213 = l_option_orelse___main___rarg(x_207, x_212);
lean::dec(x_212);
x_215 = l_option_orelse___main___rarg(x_76, x_213);
lean::dec(x_213);
lean::dec(x_76);
x_218 = l_option_orelse___main___rarg(x_59, x_215);
lean::dec(x_215);
lean::dec(x_59);
if (lean::obj_tag(x_218) == 0)
{
obj* x_221; obj* x_222; obj* x_223; obj* x_224; obj* x_226; obj* x_227; 
x_221 = lean::mk_nat_obj(80u);
x_222 = l_json_pretty(x_15, x_221);
x_223 = l_jsonrpc_read__msg___rarg___lambda__1___closed__1;
x_224 = lean::string_append(x_223, x_222);
lean::dec(x_222);
x_226 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_226, 0, x_224);
x_227 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_227, 0, x_226);
lean::cnstr_set(x_227, 1, x_12);
return x_227;
}
else
{
obj* x_229; obj* x_232; obj* x_233; 
lean::dec(x_15);
x_229 = lean::cnstr_get(x_218, 0);
lean::inc(x_229);
lean::dec(x_218);
x_232 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_232, 0, x_229);
x_233 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_233, 0, x_232);
lean::cnstr_set(x_233, 1, x_12);
return x_233;
}
}
}
else
{
obj* x_234; obj* x_236; obj* x_238; obj* x_241; obj* x_242; 
x_234 = lean::cnstr_get(x_58, 0);
lean::inc(x_234);
x_236 = l_jsonrpc_message_has__to__json___closed__3;
lean::inc(x_15);
x_238 = l_json_get__or__null(x_15, x_236);
lean::inc(x_238);
lean::inc(x_234);
x_241 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_241, 0, x_77);
lean::cnstr_set(x_241, 1, x_234);
lean::cnstr_set(x_241, 2, x_238);
if (lean::is_scalar(x_30)) {
 x_242 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_242 = x_30;
}
lean::cnstr_set(x_242, 0, x_241);
if (lean::obj_tag(x_58) == 0)
{
obj* x_245; obj* x_246; obj* x_248; obj* x_251; 
lean::dec(x_234);
lean::dec(x_238);
x_245 = lean::box(0);
x_246 = l_option_orelse___main___rarg(x_242, x_245);
lean::dec(x_242);
x_248 = l_option_orelse___main___rarg(x_76, x_246);
lean::dec(x_246);
lean::dec(x_76);
x_251 = l_option_orelse___main___rarg(x_59, x_248);
lean::dec(x_248);
lean::dec(x_59);
if (lean::obj_tag(x_251) == 0)
{
obj* x_254; obj* x_255; obj* x_256; obj* x_257; obj* x_259; obj* x_260; 
x_254 = lean::mk_nat_obj(80u);
x_255 = l_json_pretty(x_15, x_254);
x_256 = l_jsonrpc_read__msg___rarg___lambda__1___closed__1;
x_257 = lean::string_append(x_256, x_255);
lean::dec(x_255);
x_259 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_259, 0, x_257);
x_260 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_260, 0, x_259);
lean::cnstr_set(x_260, 1, x_12);
return x_260;
}
else
{
obj* x_262; obj* x_265; obj* x_266; 
lean::dec(x_15);
x_262 = lean::cnstr_get(x_251, 0);
lean::inc(x_262);
lean::dec(x_251);
x_265 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_265, 0, x_262);
x_266 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_266, 0, x_265);
lean::cnstr_set(x_266, 1, x_12);
return x_266;
}
}
else
{
obj* x_267; obj* x_268; obj* x_269; obj* x_270; obj* x_273; obj* x_276; 
if (lean::is_exclusive(x_58)) {
 lean::cnstr_release(x_58, 0);
 x_267 = x_58;
} else {
 lean::dec(x_58);
 x_267 = lean::box(0);
}
x_268 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_268, 0, x_234);
lean::cnstr_set(x_268, 1, x_238);
if (lean::is_scalar(x_267)) {
 x_269 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_269 = x_267;
}
lean::cnstr_set(x_269, 0, x_268);
x_270 = l_option_orelse___main___rarg(x_242, x_269);
lean::dec(x_269);
lean::dec(x_242);
x_273 = l_option_orelse___main___rarg(x_76, x_270);
lean::dec(x_270);
lean::dec(x_76);
x_276 = l_option_orelse___main___rarg(x_59, x_273);
lean::dec(x_273);
lean::dec(x_59);
if (lean::obj_tag(x_276) == 0)
{
obj* x_279; obj* x_280; obj* x_281; obj* x_282; obj* x_284; obj* x_285; 
x_279 = lean::mk_nat_obj(80u);
x_280 = l_json_pretty(x_15, x_279);
x_281 = l_jsonrpc_read__msg___rarg___lambda__1___closed__1;
x_282 = lean::string_append(x_281, x_280);
lean::dec(x_280);
x_284 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_284, 0, x_282);
x_285 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_285, 0, x_284);
lean::cnstr_set(x_285, 1, x_12);
return x_285;
}
else
{
obj* x_287; obj* x_290; obj* x_291; 
lean::dec(x_15);
x_287 = lean::cnstr_get(x_276, 0);
lean::inc(x_287);
lean::dec(x_276);
x_290 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_290, 0, x_287);
x_291 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_291, 0, x_290);
lean::cnstr_set(x_291, 1, x_12);
return x_291;
}
}
}
}
}
}
}
default:
{
obj* x_294; obj* x_295; obj* x_296; obj* x_297; obj* x_299; obj* x_300; 
lean::dec(x_28);
lean::dec(x_30);
x_294 = lean::mk_nat_obj(80u);
x_295 = l_json_pretty(x_15, x_294);
x_296 = l_jsonrpc_read__msg___rarg___lambda__1___closed__1;
x_297 = lean::string_append(x_296, x_295);
lean::dec(x_295);
if (lean::is_scalar(x_17)) {
 x_299 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_299 = x_17;
 lean::cnstr_set_tag(x_17, 0);
}
lean::cnstr_set(x_299, 0, x_297);
if (lean::is_scalar(x_14)) {
 x_300 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_300 = x_14;
}
lean::cnstr_set(x_300, 0, x_299);
lean::cnstr_set(x_300, 1, x_12);
return x_300;
}
}
}
}
}
}
obj* l_jsonrpc_read__msg___at_lean_server_server__state_run__core___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__msg___at_lean_server_server__state_run__core___spec__1___rarg), 1, 0);
return x_1;
}
}
obj* _init_l_match__failed___at_lean_server_server__state_run__core___spec__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("match failed");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_match__failed___at_lean_server_server__state_run__core___spec__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_match__failed___at_lean_server_server__state_run__core___spec__2___closed__1;
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
return x_2;
}
}
obj* _init_l_lean_server_server__state_run__core___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("initialize");
return x_0;
}
}
obj* _init_l_lean_server_server__state_run__core___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_0 = lean::mk_string("capabilities");
x_1 = l_lean_server_server__state_server__capabilities;
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::box(0);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_server_server__state_run__core___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("initialized");
return x_0;
}
}
obj* _init_l_lean_server_server__state_run__core___closed__4() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3___rarg), 1, 0);
return x_0;
}
}
obj* l_lean_server_server__state_run__core(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_jsonrpc_read__msg___at_lean_server_server__state_run__core___spec__1___rarg(x_2);
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
if (lean::obj_tag(x_4) == 0)
{
obj* x_8; obj* x_10; obj* x_11; obj* x_13; obj* x_14; obj* x_15; 
lean::dec(x_1);
lean::dec(x_0);
x_8 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 x_10 = x_3;
} else {
 lean::inc(x_8);
 lean::dec(x_3);
 x_10 = lean::box(0);
}
x_11 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 x_13 = x_4;
} else {
 lean::inc(x_11);
 lean::dec(x_4);
 x_13 = lean::box(0);
}
if (lean::is_scalar(x_13)) {
 x_14 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_14 = x_13;
}
lean::cnstr_set(x_14, 0, x_11);
if (lean::is_scalar(x_10)) {
 x_15 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_15 = x_10;
}
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_8);
return x_15;
}
else
{
obj* x_16; 
x_16 = lean::cnstr_get(x_4, 0);
lean::inc(x_16);
lean::dec(x_4);
switch (lean::obj_tag(x_16)) {
case 0:
{
obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_27; uint8 x_28; 
x_19 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_set(x_3, 1, lean::box(0));
 x_21 = x_3;
} else {
 lean::inc(x_19);
 lean::dec(x_3);
 x_21 = lean::box(0);
}
x_22 = lean::cnstr_get(x_16, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_16, 1);
lean::inc(x_24);
lean::dec(x_16);
x_27 = l_lean_server_server__state_run__core___closed__1;
x_28 = lean::string_dec_eq(x_24, x_27);
lean::dec(x_24);
if (x_28 == 0)
{
obj* x_33; obj* x_34; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_22);
x_33 = l_match__failed___at_lean_server_server__state_run__core___spec__2___closed__1;
if (lean::is_scalar(x_21)) {
 x_34 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_34 = x_21;
}
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_19);
return x_34;
}
else
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_44; 
lean::dec(x_21);
x_36 = l_lean_server_server__state_run__core___closed__2;
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_22);
lean::cnstr_set(x_37, 1, x_36);
x_38 = l_jsonrpc_write__msg___at_lean_server_server__state_send__msg___spec__1(x_1, x_37, x_19);
x_39 = lean::cnstr_get(x_38, 0);
x_41 = lean::cnstr_get(x_38, 1);
if (lean::is_exclusive(x_38)) {
 lean::cnstr_set(x_38, 0, lean::box(0));
 lean::cnstr_set(x_38, 1, lean::box(0));
 x_43 = x_38;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_38);
 x_43 = lean::box(0);
}
x_44 = lean::box(0);
if (lean::obj_tag(x_39) == 0)
{
obj* x_47; obj* x_49; obj* x_50; obj* x_51; 
lean::dec(x_1);
lean::dec(x_0);
x_47 = lean::cnstr_get(x_39, 0);
if (lean::is_exclusive(x_39)) {
 x_49 = x_39;
} else {
 lean::inc(x_47);
 lean::dec(x_39);
 x_49 = lean::box(0);
}
if (lean::is_scalar(x_49)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_49;
}
lean::cnstr_set(x_50, 0, x_47);
if (lean::is_scalar(x_43)) {
 x_51 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_51 = x_43;
}
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_41);
return x_51;
}
else
{
obj* x_54; obj* x_55; 
lean::dec(x_43);
lean::dec(x_39);
x_54 = l_jsonrpc_read__msg___at_lean_server_server__state_run__core___spec__1___rarg(x_41);
x_55 = lean::cnstr_get(x_54, 0);
lean::inc(x_55);
if (lean::obj_tag(x_55) == 0)
{
obj* x_59; obj* x_61; obj* x_62; obj* x_64; obj* x_65; obj* x_66; 
lean::dec(x_1);
lean::dec(x_0);
x_59 = lean::cnstr_get(x_54, 1);
if (lean::is_exclusive(x_54)) {
 lean::cnstr_release(x_54, 0);
 x_61 = x_54;
} else {
 lean::inc(x_59);
 lean::dec(x_54);
 x_61 = lean::box(0);
}
x_62 = lean::cnstr_get(x_55, 0);
if (lean::is_exclusive(x_55)) {
 x_64 = x_55;
} else {
 lean::inc(x_62);
 lean::dec(x_55);
 x_64 = lean::box(0);
}
if (lean::is_scalar(x_64)) {
 x_65 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_65 = x_64;
}
lean::cnstr_set(x_65, 0, x_62);
if (lean::is_scalar(x_61)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_61;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_59);
return x_66;
}
else
{
obj* x_67; obj* x_69; 
x_67 = lean::cnstr_get(x_55, 0);
if (lean::is_exclusive(x_55)) {
 lean::cnstr_set(x_55, 0, lean::box(0));
 x_69 = x_55;
} else {
 lean::inc(x_67);
 lean::dec(x_55);
 x_69 = lean::box(0);
}
switch (lean::obj_tag(x_67)) {
case 3:
{
obj* x_70; obj* x_72; obj* x_73; obj* x_76; uint8 x_77; 
x_70 = lean::cnstr_get(x_54, 1);
if (lean::is_exclusive(x_54)) {
 lean::cnstr_release(x_54, 0);
 lean::cnstr_set(x_54, 1, lean::box(0));
 x_72 = x_54;
} else {
 lean::inc(x_70);
 lean::dec(x_54);
 x_72 = lean::box(0);
}
x_73 = lean::cnstr_get(x_67, 0);
lean::inc(x_73);
lean::dec(x_67);
x_76 = l_lean_server_server__state_run__core___closed__3;
x_77 = lean::string_dec_eq(x_73, x_76);
lean::dec(x_73);
if (x_77 == 0)
{
obj* x_82; obj* x_83; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_69);
x_82 = l_match__failed___at_lean_server_server__state_run__core___spec__2___closed__1;
if (lean::is_scalar(x_72)) {
 x_83 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_83 = x_72;
}
lean::cnstr_set(x_83, 0, x_82);
lean::cnstr_set(x_83, 1, x_70);
return x_83;
}
else
{
obj* x_85; obj* x_86; obj* x_87; obj* x_89; obj* x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_97; obj* x_99; obj* x_100; obj* x_101; 
lean::dec(x_72);
x_85 = l_lean_server_server__state_run__core___closed__4;
x_86 = lean_io_mk_task(lean::box(0), x_85, x_70);
x_87 = lean::cnstr_get(x_86, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_86, 1);
lean::inc(x_89);
lean::dec(x_86);
x_92 = lean::box(0);
x_93 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_93, 0, x_92);
lean::cnstr_set(x_93, 1, x_87);
lean::cnstr_set(x_93, 2, x_44);
lean::cnstr_set(x_93, 3, x_0);
lean::cnstr_set(x_93, 4, x_1);
x_94 = l_io_prim_iterate___main___at_lean_server_server__state_loop___spec__1(x_93, x_89);
x_95 = lean::cnstr_get(x_94, 0);
x_97 = lean::cnstr_get(x_94, 1);
if (lean::is_exclusive(x_94)) {
 x_99 = x_94;
} else {
 lean::inc(x_95);
 lean::inc(x_97);
 lean::dec(x_94);
 x_99 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_100 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_100 = x_69;
}
lean::cnstr_set(x_100, 0, x_95);
if (lean::is_scalar(x_99)) {
 x_101 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_101 = x_99;
}
lean::cnstr_set(x_101, 0, x_100);
lean::cnstr_set(x_101, 1, x_97);
return x_101;
}
}
default:
{
obj* x_106; obj* x_108; obj* x_109; obj* x_110; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_69);
lean::dec(x_67);
x_106 = lean::cnstr_get(x_54, 1);
if (lean::is_exclusive(x_54)) {
 lean::cnstr_release(x_54, 0);
 x_108 = x_54;
} else {
 lean::inc(x_106);
 lean::dec(x_54);
 x_108 = lean::box(0);
}
x_109 = l_match__failed___at_lean_server_server__state_run__core___spec__2___closed__1;
if (lean::is_scalar(x_108)) {
 x_110 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_110 = x_108;
}
lean::cnstr_set(x_110, 0, x_109);
lean::cnstr_set(x_110, 1, x_106);
return x_110;
}
}
}
}
}
}
default:
{
obj* x_114; obj* x_116; obj* x_117; obj* x_118; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_16);
x_114 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 x_116 = x_3;
} else {
 lean::inc(x_114);
 lean::dec(x_3);
 x_116 = lean::box(0);
}
x_117 = l_match__failed___at_lean_server_server__state_run__core___spec__2___closed__1;
if (lean::is_scalar(x_116)) {
 x_118 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_118 = x_116;
}
lean::cnstr_set(x_118, 0, x_117);
lean::cnstr_set(x_118, 1, x_114);
return x_118;
}
}
}
}
}
obj* l_jsonrpc_read__msg___at_lean_server_server__state_run__core___spec__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_jsonrpc_read__msg___at_lean_server_server__state_run__core___spec__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* lean_server_run(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_lean_server_server__state_run__core(x_0, x_1, x_2);
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_9; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; 
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
lean::dec(x_4);
x_12 = l_io_println___at_lean_run__frontend___spec__3(x_9, x_6);
lean::dec(x_9);
x_14 = lean::cnstr_get(x_12, 1);
if (lean::is_exclusive(x_12)) {
 lean::cnstr_release(x_12, 0);
 x_16 = x_12;
} else {
 lean::inc(x_14);
 lean::dec(x_12);
 x_16 = lean::box(0);
}
x_17 = lean::box(0);
if (lean::is_scalar(x_16)) {
 x_18 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_18 = x_16;
}
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_14);
return x_18;
}
else
{
obj* x_20; obj* x_22; obj* x_23; obj* x_24; 
lean::dec(x_4);
x_20 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 x_22 = x_3;
} else {
 lean::inc(x_20);
 lean::dec(x_3);
 x_22 = lean::box(0);
}
x_23 = lean::box(0);
if (lean::is_scalar(x_22)) {
 x_24 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_24 = x_22;
}
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_20);
return x_24;
}
}
}
void initialize_init_default();
void initialize_init_lean_frontend();
void initialize_init_lean_parser_module();
void initialize_init_lean_server_jsonrpc();
void initialize_init_lean_server_lsp();
static bool _G_initialized = false;
void initialize_init_lean_server_single__file() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_default();
 initialize_init_lean_frontend();
 initialize_init_lean_parser_module();
 initialize_init_lean_server_jsonrpc();
 initialize_init_lean_server_lsp();
 l_list_map___main___at_lean_parser_syntax_find__idents___spec__4___closed__1 = _init_l_list_map___main___at_lean_parser_syntax_find__idents___spec__4___closed__1();
lean::mark_persistent(l_list_map___main___at_lean_parser_syntax_find__idents___spec__4___closed__1);
 l_lean_server_processed__file_get__expanded__at__core___main___closed__1 = _init_l_lean_server_processed__file_get__expanded__at__core___main___closed__1();
lean::mark_persistent(l_lean_server_processed__file_get__expanded__at__core___main___closed__1);
 l_lean_server_processed__file_proc__core___main___lambda__3___closed__1 = _init_l_lean_server_processed__file_proc__core___main___lambda__3___closed__1();
lean::mark_persistent(l_lean_server_processed__file_proc__core___main___lambda__3___closed__1);
 l_lean_server_processed__file_proc__core___main___lambda__3___closed__2 = _init_l_lean_server_processed__file_proc__core___main___lambda__3___closed__2();
lean::mark_persistent(l_lean_server_processed__file_proc__core___main___lambda__3___closed__2);
 l_lean_server_processed__file_proc__core___main___closed__1 = _init_l_lean_server_processed__file_proc__core___main___closed__1();
lean::mark_persistent(l_lean_server_processed__file_proc__core___main___closed__1);
 l_lean_server_processed__file_proc__core___main___closed__2 = _init_l_lean_server_processed__file_proc__core___main___closed__2();
lean::mark_persistent(l_lean_server_processed__file_proc__core___main___closed__2);
 l_lean_server_document__uri = _init_l_lean_server_document__uri();
lean::mark_persistent(l_lean_server_document__uri);
 l_lean_server_server__state_m = _init_l_lean_server_server__state_m();
lean::mark_persistent(l_lean_server_server__state_m);
 l_lean_server_server__state_send__error___closed__1 = _init_l_lean_server_server__state_send__error___closed__1();
lean::mark_persistent(l_lean_server_server__state_send__error___closed__1);
 l_lean_server_server__state_log___closed__1 = _init_l_lean_server_server__state_log___closed__1();
lean::mark_persistent(l_lean_server_server__state_log___closed__1);
 l_lean_server_server__state_log___closed__2 = _init_l_lean_server_server__state_log___closed__2();
lean::mark_persistent(l_lean_server_server__state_log___closed__2);
 l_lean_server_server__state_diag__of__msg___closed__1 = _init_l_lean_server_server__state_diag__of__msg___closed__1();
lean::mark_persistent(l_lean_server_server__state_diag__of__msg___closed__1);
 l_lean_server_server__state_diag__of__msg___closed__2 = _init_l_lean_server_server__state_diag__of__msg___closed__2();
lean::mark_persistent(l_lean_server_server__state_diag__of__msg___closed__2);
 l_lean_server_server__state_diag__of__msg___closed__3 = _init_l_lean_server_server__state_diag__of__msg___closed__3();
lean::mark_persistent(l_lean_server_server__state_diag__of__msg___closed__3);
 l_lean_server_server__state_diag__of__msg___closed__4 = _init_l_lean_server_server__state_diag__of__msg___closed__4();
lean::mark_persistent(l_lean_server_server__state_diag__of__msg___closed__4);
 l_lean_server_server__state_send__diagnostics__core___closed__1 = _init_l_lean_server_server__state_send__diagnostics__core___closed__1();
lean::mark_persistent(l_lean_server_server__state_send__diagnostics__core___closed__1);
 l_lean_server_server__state_send__diagnostics__core___closed__2 = _init_l_lean_server_server__state_send__diagnostics__core___closed__2();
lean::mark_persistent(l_lean_server_server__state_send__diagnostics__core___closed__2);
 l_lean_server_server__state_clear__requests___closed__1 = _init_l_lean_server_server__state_clear__requests___closed__1();
lean::mark_persistent(l_lean_server_server__state_clear__requests___closed__1);
 l_lean_server_server__state_clear__requests___closed__2 = _init_l_lean_server_server__state_clear__requests___closed__2();
lean::mark_persistent(l_lean_server_server__state_clear__requests___closed__2);
 l_lean_server_server__state_handle__did__open___closed__1 = _init_l_lean_server_server__state_handle__did__open___closed__1();
lean::mark_persistent(l_lean_server_server__state_handle__did__open___closed__1);
 l_lean_server_server__state_handle__did__open___closed__2 = _init_l_lean_server_server__state_handle__did__open___closed__2();
lean::mark_persistent(l_lean_server_server__state_handle__did__open___closed__2);
 l_lean_server_server__state_handle__did__open___closed__3 = _init_l_lean_server_server__state_handle__did__open___closed__3();
lean::mark_persistent(l_lean_server_server__state_handle__did__open___closed__3);
 l_lean_server_server__state_handle__did__open___closed__4 = _init_l_lean_server_server__state_handle__did__open___closed__4();
lean::mark_persistent(l_lean_server_server__state_handle__did__open___closed__4);
 l_lean_server_server__state_handle__did__change___closed__1 = _init_l_lean_server_server__state_handle__did__change___closed__1();
lean::mark_persistent(l_lean_server_server__state_handle__did__change___closed__1);
 l_lean_server_server__state_handle__did__change___closed__2 = _init_l_lean_server_server__state_handle__did__change___closed__2();
lean::mark_persistent(l_lean_server_server__state_handle__did__change___closed__2);
 l_lean_server_server__state_handle__did__change___closed__3 = _init_l_lean_server_server__state_handle__did__change___closed__3();
lean::mark_persistent(l_lean_server_server__state_handle__did__change___closed__3);
 l_lean_server_server__state_handle__cancel___lambda__1___closed__1 = _init_l_lean_server_server__state_handle__cancel___lambda__1___closed__1();
lean::mark_persistent(l_lean_server_server__state_handle__cancel___lambda__1___closed__1);
 l_lean_server_server__state_handle__cancel___closed__1 = _init_l_lean_server_server__state_handle__cancel___closed__1();
lean::mark_persistent(l_lean_server_server__state_handle__cancel___closed__1);
 l_lean_server_server__state_handle__cancel___closed__2 = _init_l_lean_server_server__state_handle__cancel___closed__2();
lean::mark_persistent(l_lean_server_server__state_handle__cancel___closed__2);
 l_lean_server_server__state_handle__cancel___closed__3 = _init_l_lean_server_server__state_handle__cancel___closed__3();
lean::mark_persistent(l_lean_server_server__state_handle__cancel___closed__3);
 l_lean_server_server__state_handle__hover___closed__1 = _init_l_lean_server_server__state_handle__hover___closed__1();
lean::mark_persistent(l_lean_server_server__state_handle__hover___closed__1);
 l_lean_server_server__state_handle__hover___closed__2 = _init_l_lean_server_server__state_handle__hover___closed__2();
lean::mark_persistent(l_lean_server_server__state_handle__hover___closed__2);
 l_lean_server_server__state_handle__hover___closed__3 = _init_l_lean_server_server__state_handle__hover___closed__3();
lean::mark_persistent(l_lean_server_server__state_handle__hover___closed__3);
 l_lean_server_server__state_handle__hover___closed__4 = _init_l_lean_server_server__state_handle__hover___closed__4();
lean::mark_persistent(l_lean_server_server__state_handle__hover___closed__4);
 l_lean_server_server__state_handle__hover___closed__5 = _init_l_lean_server_server__state_handle__hover___closed__5();
lean::mark_persistent(l_lean_server_server__state_handle__hover___closed__5);
 l_lean_server_server__state_handle__msg___closed__1 = _init_l_lean_server_server__state_handle__msg___closed__1();
lean::mark_persistent(l_lean_server_server__state_handle__msg___closed__1);
 l_lean_server_server__state_handle__msg___closed__2 = _init_l_lean_server_server__state_handle__msg___closed__2();
lean::mark_persistent(l_lean_server_server__state_handle__msg___closed__2);
 l_lean_server_server__state_handle__msg___closed__3 = _init_l_lean_server_server__state_handle__msg___closed__3();
lean::mark_persistent(l_lean_server_server__state_handle__msg___closed__3);
 l_lean_server_server__state_handle__msg___closed__4 = _init_l_lean_server_server__state_handle__msg___closed__4();
lean::mark_persistent(l_lean_server_server__state_handle__msg___closed__4);
 l_lean_server_server__state_handle__msg___closed__5 = _init_l_lean_server_server__state_handle__msg___closed__5();
lean::mark_persistent(l_lean_server_server__state_handle__msg___closed__5);
 l_lean_server_server__state_handle__msg___closed__6 = _init_l_lean_server_server__state_handle__msg___closed__6();
lean::mark_persistent(l_lean_server_server__state_handle__msg___closed__6);
 l_lean_server_server__state_handle__msg___closed__7 = _init_l_lean_server_server__state_handle__msg___closed__7();
lean::mark_persistent(l_lean_server_server__state_handle__msg___closed__7);
 l_lean_server_server__state_handle__msg___closed__8 = _init_l_lean_server_server__state_handle__msg___closed__8();
lean::mark_persistent(l_lean_server_server__state_handle__msg___closed__8);
 l_lean_server_server__state_handle__msg___closed__9 = _init_l_lean_server_server__state_handle__msg___closed__9();
lean::mark_persistent(l_lean_server_server__state_handle__msg___closed__9);
 l_lean_server_server__state_handle__msg___closed__10 = _init_l_lean_server_server__state_handle__msg___closed__10();
lean::mark_persistent(l_lean_server_server__state_handle__msg___closed__10);
 l_jsonrpc_read__header___main___at_lean_server_server__state_loop1___spec__4___closed__1 = _init_l_jsonrpc_read__header___main___at_lean_server_server__state_loop1___spec__4___closed__1();
lean::mark_persistent(l_jsonrpc_read__header___main___at_lean_server_server__state_loop1___spec__4___closed__1);
 l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3___rarg___closed__1 = _init_l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3___rarg___closed__1();
lean::mark_persistent(l_jsonrpc_read__msg__raw___at_lean_server_server__state_loop1___spec__3___rarg___closed__1);
 l_lean_server_server__state_server__capabilities = _init_l_lean_server_server__state_server__capabilities();
lean::mark_persistent(l_lean_server_server__state_server__capabilities);
 l_match__failed___at_lean_server_server__state_run__core___spec__2___closed__1 = _init_l_match__failed___at_lean_server_server__state_run__core___spec__2___closed__1();
lean::mark_persistent(l_match__failed___at_lean_server_server__state_run__core___spec__2___closed__1);
 l_lean_server_server__state_run__core___closed__1 = _init_l_lean_server_server__state_run__core___closed__1();
lean::mark_persistent(l_lean_server_server__state_run__core___closed__1);
 l_lean_server_server__state_run__core___closed__2 = _init_l_lean_server_server__state_run__core___closed__2();
lean::mark_persistent(l_lean_server_server__state_run__core___closed__2);
 l_lean_server_server__state_run__core___closed__3 = _init_l_lean_server_server__state_run__core___closed__3();
lean::mark_persistent(l_lean_server_server__state_run__core___closed__3);
 l_lean_server_server__state_run__core___closed__4 = _init_l_lean_server_server__state_run__core___closed__4();
lean::mark_persistent(l_lean_server_server__state_run__core___closed__4);
}
