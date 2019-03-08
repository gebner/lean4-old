// Lean compiler output
// Module: init.lean.default
// Imports: init.lean.compiler.default init.lean.frontend init.lean.extern init.lean.server.single_file
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
void initialize_init_lean_compiler_default();
void initialize_init_lean_frontend();
void initialize_init_lean_extern();
void initialize_init_lean_server_single__file();
static bool _G_initialized = false;
void initialize_init_lean_default() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_lean_compiler_default();
 initialize_init_lean_frontend();
 initialize_init_lean_extern();
 initialize_init_lean_server_single__file();
}
