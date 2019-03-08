// Lean compiler output
// Module: init.version
// Imports: init.data.nat.basic init.data.string.basic
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
obj* l_lean_version;
obj* l_lean_is__release___boxed;
uint8 l_lean_is__release;
obj* l_lean_githash;
obj* l_lean_special__version__desc;
obj* _init_l_lean_version() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::mk_nat_obj(3u);
x_1 = lean::mk_nat_obj(1u);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_lean_githash() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("8601d88a01129873b0fec1429f6d8f7248aa3d62");
return x_0;
}
}
uint8 _init_l_lean_is__release() {
_start:
{
uint8 x_0; 
x_0 = 0;
return x_0;
}
}
obj* _init_l_lean_is__release___boxed() {
_start:
{
uint8 x_0; obj* x_1; 
x_0 = l_lean_is__release;
x_1 = lean::box(x_0);
return x_1;
}
}
obj* _init_l_lean_special__version__desc() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("");
return x_0;
}
}
void initialize_init_data_nat_basic();
void initialize_init_data_string_basic();
static bool _G_initialized = false;
void initialize_init_version() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_data_nat_basic();
 initialize_init_data_string_basic();
 l_lean_version = _init_l_lean_version();
lean::mark_persistent(l_lean_version);
 l_lean_githash = _init_l_lean_githash();
lean::mark_persistent(l_lean_githash);
 l_lean_is__release = _init_l_lean_is__release();
 l_lean_is__release___boxed = _init_l_lean_is__release___boxed();
lean::mark_persistent(l_lean_is__release___boxed);
 l_lean_special__version__desc = _init_l_lean_special__version__desc();
lean::mark_persistent(l_lean_special__version__desc);
}
