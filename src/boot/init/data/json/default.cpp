// Lean compiler output
// Module: init.data.json.default
// Imports: init.data.json.printer init.data.json.parser init.data.json.from_to_json init.io
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
void initialize_init_data_json_printer();
void initialize_init_data_json_parser();
void initialize_init_data_json_from__to__json();
void initialize_init_io();
static bool _G_initialized = false;
void initialize_init_data_json_default() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_data_json_printer();
 initialize_init_data_json_parser();
 initialize_init_data_json_from__to__json();
 initialize_init_io();
}
