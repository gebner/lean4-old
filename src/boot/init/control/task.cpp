// Lean compiler output
// Module: init.control.task
// Imports: init.io
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
obj* l_bundled__task_has__coe(obj*);
obj* l_bundled__task_has__coe___rarg(obj*);
obj* l_bundled__task_has__coe___rarg___boxed(obj*);
obj* l_bundled__task_has__coe___boxed(obj*);
obj* l_bundled__task_has__coe___rarg(obj* x_0) {
_start:
{
lean::inc(x_0);
return x_0;
}
}
obj* l_bundled__task_has__coe(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_bundled__task_has__coe___rarg___boxed), 1, 0);
return x_1;
}
}
obj* l_bundled__task_has__coe___rarg___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_bundled__task_has__coe___rarg(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_bundled__task_has__coe___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_bundled__task_has__coe(x_0);
lean::dec(x_0);
return x_1;
}
}
void initialize_init_io();
static bool _G_initialized = false;
void initialize_init_control_task() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_io();
}
