// Lean compiler output
// Module: init.lean.server.lsp
// Imports: init.default init.lean.server.jsonrpc
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
obj* l_lsp_diagnostic__severity_to__nat(uint8);
obj* l_lsp_diagnostic__severity_has__from__json___closed__4;
obj* l_lsp_document__uri_has__to__json;
obj* l_lsp_document__uri;
obj* l_lsp_diagnostic__severity_has__from__json___closed__3;
obj* l_lsp_range_has__to__json(obj*);
obj* l_lsp_diagnostic__severity_has__to__json(uint8);
obj* l_lsp_document__uri_has__from__json;
obj* l_list_lookup___main___at_json_get___main___spec__1(obj*, obj*);
obj* l_lsp_location_has__to__json___closed__2;
obj* l_lsp_diagnostic__severity_has__from__json___closed__2;
obj* l_lsp_diagnostic__severity_has__from__json(obj*);
obj* l_lsp_range_has__to__json___closed__1;
obj* l_json_to__nat___main(obj*);
obj* l_lsp_range_has__to__json___closed__2;
obj* l_lsp_location_has__to__json(obj*);
obj* l_json_to__obj___main(obj*);
obj* l_lsp_diagnostic__severity_has__from__json___boxed(obj*);
obj* l_lsp_position_has__to__json___closed__2;
obj* l_lsp_position_has__to__json___closed__1;
obj* l_lsp_diagnostic__severity_to__nat___boxed(obj*);
obj* l_json__number_from__nat(obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_lsp_range_has__from__json(obj*);
extern obj* l_string_has__from__json;
obj* l_lsp_diagnostic__severity_has__to__json___boxed(obj*);
obj* l_lsp_location_has__from__json(obj*);
extern obj* l_int_repr___main___closed__1;
obj* l_json_to__string___main(obj*);
obj* l_lsp_diagnostic__severity_to__nat___main(uint8);
obj* l_lsp_diagnostic__severity_to__nat___main___boxed(obj*);
obj* l_lsp_position_has__to__json(obj*);
obj* l_string_has__to__json(obj*);
obj* l_lsp_diagnostic__severity_has__from__json___closed__1;
obj* l_json_get___main(obj*, obj*);
obj* l_lsp_location_has__to__json___closed__1;
obj* l_lsp_position_has__from__json(obj*);
namespace lean {
uint8 int_dec_lt(obj*, obj*);
}
obj* _init_l_lsp_position_has__to__json___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("line");
return x_0;
}
}
obj* _init_l_lsp_position_has__to__json___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("character");
return x_0;
}
}
obj* l_lsp_position_has__to__json(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_json__number_from__nat(x_1);
x_7 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
x_8 = l_lsp_position_has__to__json___closed__1;
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
x_10 = l_json__number_from__nat(x_3);
x_11 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
x_12 = l_lsp_position_has__to__json___closed__2;
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_11);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_9);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_17, 0, x_16);
return x_17;
}
}
obj* l_lsp_position_has__from__json(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = l_lsp_position_has__to__json___closed__1;
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
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l_json_to__nat___main(x_6);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
lean::dec(x_0);
x_12 = lean::box(0);
return x_12;
}
else
{
obj* x_13; obj* x_16; obj* x_17; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
lean::dec(x_9);
x_16 = l_lsp_position_has__to__json___closed__2;
x_17 = l_json_get___main(x_0, x_16);
if (lean::obj_tag(x_17) == 0)
{
obj* x_19; 
lean::dec(x_13);
x_19 = lean::box(0);
return x_19;
}
else
{
obj* x_20; obj* x_23; 
x_20 = lean::cnstr_get(x_17, 0);
lean::inc(x_20);
lean::dec(x_17);
x_23 = l_json_to__nat___main(x_20);
lean::dec(x_20);
if (lean::obj_tag(x_23) == 0)
{
obj* x_26; 
lean::dec(x_13);
x_26 = lean::box(0);
return x_26;
}
else
{
obj* x_27; obj* x_29; obj* x_30; obj* x_31; 
x_27 = lean::cnstr_get(x_23, 0);
if (lean::is_exclusive(x_23)) {
 x_29 = x_23;
} else {
 lean::inc(x_27);
 lean::dec(x_23);
 x_29 = lean::box(0);
}
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_13);
lean::cnstr_set(x_30, 1, x_27);
if (lean::is_scalar(x_29)) {
 x_31 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_31 = x_29;
}
lean::cnstr_set(x_31, 0, x_30);
return x_31;
}
}
}
}
}
}
obj* _init_l_lsp_range_has__to__json___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("start");
return x_0;
}
}
obj* _init_l_lsp_range_has__to__json___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("end");
return x_0;
}
}
obj* l_lsp_range_has__to__json(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_8; obj* x_11; obj* x_13; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 1);
lean::inc(x_8);
lean::dec(x_1);
x_11 = lean::cnstr_get(x_3, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_3, 1);
lean::inc(x_13);
lean::dec(x_3);
x_16 = lean::box(0);
x_17 = l_json__number_from__nat(x_6);
x_18 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_18, 0, x_17);
x_19 = l_lsp_position_has__to__json___closed__1;
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_18);
x_21 = l_json__number_from__nat(x_8);
x_22 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_22, 0, x_21);
x_23 = l_lsp_position_has__to__json___closed__2;
x_24 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_22);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_16);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_20);
lean::cnstr_set(x_26, 1, x_25);
x_27 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
x_28 = l_lsp_range_has__to__json___closed__1;
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_27);
x_30 = l_json__number_from__nat(x_11);
x_31 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_31, 0, x_30);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_19);
lean::cnstr_set(x_32, 1, x_31);
x_33 = l_json__number_from__nat(x_13);
x_34 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_34, 0, x_33);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_23);
lean::cnstr_set(x_35, 1, x_34);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_16);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_32);
lean::cnstr_set(x_37, 1, x_36);
x_38 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_38, 0, x_37);
x_39 = l_lsp_range_has__to__json___closed__2;
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_38);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_16);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_29);
lean::cnstr_set(x_42, 1, x_41);
x_43 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_43, 0, x_42);
return x_43;
}
}
obj* l_lsp_range_has__from__json(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; 
x_3 = l_lsp_range_has__to__json___closed__1;
lean::inc(x_0);
x_5 = l_json_get___main(x_0, x_3);
if (lean::obj_tag(x_5) == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = lean::box(0);
return x_7;
}
else
{
obj* x_8; obj* x_11; obj* x_13; 
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
lean::dec(x_5);
x_11 = l_lsp_position_has__to__json___closed__1;
lean::inc(x_8);
x_13 = l_json_get___main(x_8, x_11);
if (lean::obj_tag(x_13) == 0)
{
obj* x_16; 
lean::dec(x_8);
lean::dec(x_0);
x_16 = lean::box(0);
return x_16;
}
else
{
obj* x_17; obj* x_20; 
x_17 = lean::cnstr_get(x_13, 0);
lean::inc(x_17);
lean::dec(x_13);
x_20 = l_json_to__nat___main(x_17);
lean::dec(x_17);
if (lean::obj_tag(x_20) == 0)
{
obj* x_24; 
lean::dec(x_8);
lean::dec(x_0);
x_24 = lean::box(0);
return x_24;
}
else
{
obj* x_25; obj* x_28; obj* x_29; 
x_25 = lean::cnstr_get(x_20, 0);
lean::inc(x_25);
lean::dec(x_20);
x_28 = l_lsp_position_has__to__json___closed__2;
x_29 = l_json_get___main(x_8, x_28);
if (lean::obj_tag(x_29) == 0)
{
obj* x_32; 
lean::dec(x_25);
lean::dec(x_0);
x_32 = lean::box(0);
return x_32;
}
else
{
obj* x_33; obj* x_36; 
x_33 = lean::cnstr_get(x_29, 0);
lean::inc(x_33);
lean::dec(x_29);
x_36 = l_json_to__nat___main(x_33);
lean::dec(x_33);
if (lean::obj_tag(x_36) == 0)
{
obj* x_40; 
lean::dec(x_25);
lean::dec(x_0);
x_40 = lean::box(0);
return x_40;
}
else
{
obj* x_41; obj* x_44; 
x_41 = lean::cnstr_get(x_36, 0);
lean::inc(x_41);
lean::dec(x_36);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_25);
lean::cnstr_set(x_44, 1, x_41);
x_1 = x_44;
goto lbl_2;
}
}
}
}
}
lbl_2:
{
obj* x_45; obj* x_46; 
x_45 = l_lsp_range_has__to__json___closed__2;
x_46 = l_json_get___main(x_0, x_45);
if (lean::obj_tag(x_46) == 0)
{
obj* x_48; 
lean::dec(x_1);
x_48 = lean::box(0);
return x_48;
}
else
{
obj* x_49; obj* x_52; obj* x_54; 
x_49 = lean::cnstr_get(x_46, 0);
lean::inc(x_49);
lean::dec(x_46);
x_52 = l_lsp_position_has__to__json___closed__1;
lean::inc(x_49);
x_54 = l_json_get___main(x_49, x_52);
if (lean::obj_tag(x_54) == 0)
{
obj* x_57; 
lean::dec(x_49);
lean::dec(x_1);
x_57 = lean::box(0);
return x_57;
}
else
{
obj* x_58; obj* x_61; 
x_58 = lean::cnstr_get(x_54, 0);
lean::inc(x_58);
lean::dec(x_54);
x_61 = l_json_to__nat___main(x_58);
lean::dec(x_58);
if (lean::obj_tag(x_61) == 0)
{
obj* x_65; 
lean::dec(x_49);
lean::dec(x_1);
x_65 = lean::box(0);
return x_65;
}
else
{
obj* x_66; obj* x_69; obj* x_70; 
x_66 = lean::cnstr_get(x_61, 0);
lean::inc(x_66);
lean::dec(x_61);
x_69 = l_lsp_position_has__to__json___closed__2;
x_70 = l_json_get___main(x_49, x_69);
if (lean::obj_tag(x_70) == 0)
{
obj* x_73; 
lean::dec(x_66);
lean::dec(x_1);
x_73 = lean::box(0);
return x_73;
}
else
{
obj* x_74; obj* x_77; 
x_74 = lean::cnstr_get(x_70, 0);
lean::inc(x_74);
lean::dec(x_70);
x_77 = l_json_to__nat___main(x_74);
lean::dec(x_74);
if (lean::obj_tag(x_77) == 0)
{
obj* x_81; 
lean::dec(x_66);
lean::dec(x_1);
x_81 = lean::box(0);
return x_81;
}
else
{
obj* x_82; obj* x_84; obj* x_85; obj* x_86; obj* x_87; 
x_82 = lean::cnstr_get(x_77, 0);
if (lean::is_exclusive(x_77)) {
 x_84 = x_77;
} else {
 lean::inc(x_82);
 lean::dec(x_77);
 x_84 = lean::box(0);
}
x_85 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_85, 0, x_66);
lean::cnstr_set(x_85, 1, x_82);
x_86 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_86, 0, x_1);
lean::cnstr_set(x_86, 1, x_85);
if (lean::is_scalar(x_84)) {
 x_87 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_87 = x_84;
}
lean::cnstr_set(x_87, 0, x_86);
return x_87;
}
}
}
}
}
}
}
}
obj* _init_l_lsp_document__uri_has__from__json() {
_start:
{
obj* x_0; 
x_0 = l_string_has__from__json;
return x_0;
}
}
obj* _init_l_lsp_document__uri_has__to__json() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_string_has__to__json), 1, 0);
return x_0;
}
}
obj* _init_l_lsp_document__uri() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lsp_location_has__to__json___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("uri");
return x_0;
}
}
obj* _init_l_lsp_location_has__to__json___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("range");
return x_0;
}
}
obj* l_lsp_location_has__to__json(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_8; obj* x_11; obj* x_13; obj* x_16; obj* x_18; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
x_1 = lean::cnstr_get(x_0, 1);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
lean::dec(x_0);
x_11 = lean::cnstr_get(x_3, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_3, 1);
lean::inc(x_13);
lean::dec(x_3);
x_16 = lean::cnstr_get(x_5, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_5, 1);
lean::inc(x_18);
lean::dec(x_5);
x_21 = lean::box(0);
x_22 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_22, 0, x_8);
x_23 = l_lsp_location_has__to__json___closed__1;
x_24 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_22);
x_25 = l_json__number_from__nat(x_11);
x_26 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_26, 0, x_25);
x_27 = l_lsp_position_has__to__json___closed__1;
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_26);
x_29 = l_json__number_from__nat(x_13);
x_30 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_30, 0, x_29);
x_31 = l_lsp_position_has__to__json___closed__2;
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_30);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_21);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_28);
lean::cnstr_set(x_34, 1, x_33);
x_35 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_35, 0, x_34);
x_36 = l_lsp_range_has__to__json___closed__1;
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_35);
x_38 = l_json__number_from__nat(x_16);
x_39 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_39, 0, x_38);
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_27);
lean::cnstr_set(x_40, 1, x_39);
x_41 = l_json__number_from__nat(x_18);
x_42 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_42, 0, x_41);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_31);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_43);
lean::cnstr_set(x_44, 1, x_21);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_40);
lean::cnstr_set(x_45, 1, x_44);
x_46 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_46, 0, x_45);
x_47 = l_lsp_range_has__to__json___closed__2;
x_48 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_46);
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_48);
lean::cnstr_set(x_49, 1, x_21);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_37);
lean::cnstr_set(x_50, 1, x_49);
x_51 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_51, 0, x_50);
x_52 = l_lsp_location_has__to__json___closed__2;
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_51);
x_54 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_21);
x_55 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_55, 0, x_24);
lean::cnstr_set(x_55, 1, x_54);
x_56 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_56, 0, x_55);
return x_56;
}
}
obj* l_lsp_location_has__from__json(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_json_to__obj___main(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_6; obj* x_8; obj* x_10; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
lean::dec(x_1);
x_8 = l_lsp_location_has__to__json___closed__1;
lean::inc(x_3);
x_10 = l_list_lookup___main___at_json_get___main___spec__1(x_8, x_3);
if (lean::obj_tag(x_10) == 0)
{
obj* x_12; 
lean::dec(x_3);
x_12 = lean::box(0);
return x_12;
}
else
{
obj* x_13; obj* x_16; 
x_13 = lean::cnstr_get(x_10, 0);
lean::inc(x_13);
lean::dec(x_10);
x_16 = l_json_to__string___main(x_13);
if (lean::obj_tag(x_16) == 0)
{
obj* x_18; 
lean::dec(x_3);
x_18 = lean::box(0);
return x_18;
}
else
{
obj* x_19; 
x_19 = lean::cnstr_get(x_16, 0);
lean::inc(x_19);
lean::dec(x_16);
x_6 = x_19;
goto lbl_7;
}
}
lbl_7:
{
obj* x_22; obj* x_23; 
x_22 = l_lsp_location_has__to__json___closed__2;
x_23 = l_list_lookup___main___at_json_get___main___spec__1(x_22, x_3);
if (lean::obj_tag(x_23) == 0)
{
obj* x_25; 
lean::dec(x_6);
x_25 = lean::box(0);
return x_25;
}
else
{
obj* x_26; obj* x_29; obj* x_31; obj* x_33; 
x_26 = lean::cnstr_get(x_23, 0);
lean::inc(x_26);
lean::dec(x_23);
x_31 = l_lsp_range_has__to__json___closed__1;
lean::inc(x_26);
x_33 = l_json_get___main(x_26, x_31);
if (lean::obj_tag(x_33) == 0)
{
obj* x_36; 
lean::dec(x_6);
lean::dec(x_26);
x_36 = lean::box(0);
return x_36;
}
else
{
obj* x_37; obj* x_40; obj* x_42; 
x_37 = lean::cnstr_get(x_33, 0);
lean::inc(x_37);
lean::dec(x_33);
x_40 = l_lsp_position_has__to__json___closed__1;
lean::inc(x_37);
x_42 = l_json_get___main(x_37, x_40);
if (lean::obj_tag(x_42) == 0)
{
obj* x_46; 
lean::dec(x_6);
lean::dec(x_37);
lean::dec(x_26);
x_46 = lean::box(0);
return x_46;
}
else
{
obj* x_47; obj* x_50; 
x_47 = lean::cnstr_get(x_42, 0);
lean::inc(x_47);
lean::dec(x_42);
x_50 = l_json_to__nat___main(x_47);
lean::dec(x_47);
if (lean::obj_tag(x_50) == 0)
{
obj* x_55; 
lean::dec(x_6);
lean::dec(x_37);
lean::dec(x_26);
x_55 = lean::box(0);
return x_55;
}
else
{
obj* x_56; obj* x_59; obj* x_60; 
x_56 = lean::cnstr_get(x_50, 0);
lean::inc(x_56);
lean::dec(x_50);
x_59 = l_lsp_position_has__to__json___closed__2;
x_60 = l_json_get___main(x_37, x_59);
if (lean::obj_tag(x_60) == 0)
{
obj* x_64; 
lean::dec(x_6);
lean::dec(x_56);
lean::dec(x_26);
x_64 = lean::box(0);
return x_64;
}
else
{
obj* x_65; obj* x_68; 
x_65 = lean::cnstr_get(x_60, 0);
lean::inc(x_65);
lean::dec(x_60);
x_68 = l_json_to__nat___main(x_65);
lean::dec(x_65);
if (lean::obj_tag(x_68) == 0)
{
obj* x_73; 
lean::dec(x_6);
lean::dec(x_56);
lean::dec(x_26);
x_73 = lean::box(0);
return x_73;
}
else
{
obj* x_74; obj* x_77; 
x_74 = lean::cnstr_get(x_68, 0);
lean::inc(x_74);
lean::dec(x_68);
x_77 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_77, 0, x_56);
lean::cnstr_set(x_77, 1, x_74);
x_29 = x_77;
goto lbl_30;
}
}
}
}
}
lbl_30:
{
obj* x_78; obj* x_79; 
x_78 = l_lsp_range_has__to__json___closed__2;
x_79 = l_json_get___main(x_26, x_78);
if (lean::obj_tag(x_79) == 0)
{
obj* x_82; 
lean::dec(x_6);
lean::dec(x_29);
x_82 = lean::box(0);
return x_82;
}
else
{
obj* x_83; obj* x_86; obj* x_88; 
x_83 = lean::cnstr_get(x_79, 0);
lean::inc(x_83);
lean::dec(x_79);
x_86 = l_lsp_position_has__to__json___closed__1;
lean::inc(x_83);
x_88 = l_json_get___main(x_83, x_86);
if (lean::obj_tag(x_88) == 0)
{
obj* x_92; 
lean::dec(x_6);
lean::dec(x_29);
lean::dec(x_83);
x_92 = lean::box(0);
return x_92;
}
else
{
obj* x_93; obj* x_96; 
x_93 = lean::cnstr_get(x_88, 0);
lean::inc(x_93);
lean::dec(x_88);
x_96 = l_json_to__nat___main(x_93);
lean::dec(x_93);
if (lean::obj_tag(x_96) == 0)
{
obj* x_101; 
lean::dec(x_6);
lean::dec(x_29);
lean::dec(x_83);
x_101 = lean::box(0);
return x_101;
}
else
{
obj* x_102; obj* x_105; obj* x_106; 
x_102 = lean::cnstr_get(x_96, 0);
lean::inc(x_102);
lean::dec(x_96);
x_105 = l_lsp_position_has__to__json___closed__2;
x_106 = l_json_get___main(x_83, x_105);
if (lean::obj_tag(x_106) == 0)
{
obj* x_110; 
lean::dec(x_6);
lean::dec(x_29);
lean::dec(x_102);
x_110 = lean::box(0);
return x_110;
}
else
{
obj* x_111; obj* x_114; 
x_111 = lean::cnstr_get(x_106, 0);
lean::inc(x_111);
lean::dec(x_106);
x_114 = l_json_to__nat___main(x_111);
lean::dec(x_111);
if (lean::obj_tag(x_114) == 0)
{
obj* x_119; 
lean::dec(x_6);
lean::dec(x_29);
lean::dec(x_102);
x_119 = lean::box(0);
return x_119;
}
else
{
obj* x_120; obj* x_122; obj* x_123; obj* x_124; obj* x_125; obj* x_126; 
x_120 = lean::cnstr_get(x_114, 0);
if (lean::is_exclusive(x_114)) {
 x_122 = x_114;
} else {
 lean::inc(x_120);
 lean::dec(x_114);
 x_122 = lean::box(0);
}
x_123 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_123, 0, x_102);
lean::cnstr_set(x_123, 1, x_120);
x_124 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_124, 0, x_29);
lean::cnstr_set(x_124, 1, x_123);
x_125 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_125, 0, x_6);
lean::cnstr_set(x_125, 1, x_124);
if (lean::is_scalar(x_122)) {
 x_126 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_126 = x_122;
}
lean::cnstr_set(x_126, 0, x_125);
return x_126;
}
}
}
}
}
}
}
}
}
}
}
obj* l_lsp_diagnostic__severity_to__nat___main(uint8 x_0) {
_start:
{
switch (x_0) {
case 0:
{
obj* x_1; 
x_1 = lean::mk_nat_obj(1u);
return x_1;
}
case 1:
{
obj* x_2; 
x_2 = lean::mk_nat_obj(2u);
return x_2;
}
case 2:
{
obj* x_3; 
x_3 = lean::mk_nat_obj(3u);
return x_3;
}
default:
{
obj* x_4; 
x_4 = lean::mk_nat_obj(4u);
return x_4;
}
}
}
}
obj* l_lsp_diagnostic__severity_to__nat___main___boxed(obj* x_0) {
_start:
{
uint8 x_1; obj* x_2; 
x_1 = lean::unbox(x_0);
x_2 = l_lsp_diagnostic__severity_to__nat___main(x_1);
return x_2;
}
}
obj* l_lsp_diagnostic__severity_to__nat(uint8 x_0) {
_start:
{
obj* x_1; 
x_1 = l_lsp_diagnostic__severity_to__nat___main(x_0);
return x_1;
}
}
obj* l_lsp_diagnostic__severity_to__nat___boxed(obj* x_0) {
_start:
{
uint8 x_1; obj* x_2; 
x_1 = lean::unbox(x_0);
x_2 = l_lsp_diagnostic__severity_to__nat(x_1);
return x_2;
}
}
obj* l_lsp_diagnostic__severity_has__to__json(uint8 x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_lsp_diagnostic__severity_to__nat___main(x_0);
x_2 = l_json__number_from__nat(x_1);
x_3 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* l_lsp_diagnostic__severity_has__to__json___boxed(obj* x_0) {
_start:
{
uint8 x_1; obj* x_2; 
x_1 = lean::unbox(x_0);
x_2 = l_lsp_diagnostic__severity_has__to__json(x_1);
return x_2;
}
}
obj* _init_l_lsp_diagnostic__severity_has__from__json___closed__1() {
_start:
{
uint8 x_0; obj* x_1; obj* x_2; 
x_0 = 3;
x_1 = lean::box(x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_lsp_diagnostic__severity_has__from__json___closed__2() {
_start:
{
uint8 x_0; obj* x_1; obj* x_2; 
x_0 = 2;
x_1 = lean::box(x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_lsp_diagnostic__severity_has__from__json___closed__3() {
_start:
{
uint8 x_0; obj* x_1; obj* x_2; 
x_0 = 1;
x_1 = lean::box(x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_lsp_diagnostic__severity_has__from__json___closed__4() {
_start:
{
uint8 x_0; obj* x_1; obj* x_2; 
x_0 = 0;
x_1 = lean::box(x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_lsp_diagnostic__severity_has__from__json(obj* x_0) {
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
obj* x_6; obj* x_7; uint8 x_8; 
x_6 = lean::nat_abs(x_2);
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_dec_eq(x_6, x_7);
if (x_8 == 0)
{
obj* x_9; uint8 x_10; 
x_9 = lean::mk_nat_obj(2u);
x_10 = lean::nat_dec_eq(x_6, x_9);
if (x_10 == 0)
{
obj* x_11; uint8 x_12; 
x_11 = lean::mk_nat_obj(3u);
x_12 = lean::nat_dec_eq(x_6, x_11);
if (x_12 == 0)
{
obj* x_13; uint8 x_14; 
x_13 = lean::mk_nat_obj(4u);
x_14 = lean::nat_dec_eq(x_6, x_13);
lean::dec(x_6);
if (x_14 == 0)
{
obj* x_16; 
x_16 = lean::box(0);
return x_16;
}
else
{
obj* x_17; uint8 x_18; 
x_17 = lean::mk_nat_obj(0u);
x_18 = lean::nat_dec_eq(x_3, x_17);
if (x_18 == 0)
{
obj* x_19; 
x_19 = lean::box(0);
return x_19;
}
else
{
obj* x_20; 
x_20 = l_lsp_diagnostic__severity_has__from__json___closed__1;
return x_20;
}
}
}
else
{
obj* x_22; uint8 x_23; 
lean::dec(x_6);
x_22 = lean::mk_nat_obj(0u);
x_23 = lean::nat_dec_eq(x_3, x_22);
if (x_23 == 0)
{
obj* x_24; 
x_24 = lean::box(0);
return x_24;
}
else
{
obj* x_25; 
x_25 = l_lsp_diagnostic__severity_has__from__json___closed__2;
return x_25;
}
}
}
else
{
obj* x_27; uint8 x_28; 
lean::dec(x_6);
x_27 = lean::mk_nat_obj(0u);
x_28 = lean::nat_dec_eq(x_3, x_27);
if (x_28 == 0)
{
obj* x_29; 
x_29 = lean::box(0);
return x_29;
}
else
{
obj* x_30; 
x_30 = l_lsp_diagnostic__severity_has__from__json___closed__3;
return x_30;
}
}
}
else
{
obj* x_32; uint8 x_33; 
lean::dec(x_6);
x_32 = lean::mk_nat_obj(0u);
x_33 = lean::nat_dec_eq(x_3, x_32);
if (x_33 == 0)
{
obj* x_34; 
x_34 = lean::box(0);
return x_34;
}
else
{
obj* x_35; 
x_35 = l_lsp_diagnostic__severity_has__from__json___closed__4;
return x_35;
}
}
}
else
{
obj* x_36; 
x_36 = lean::box(0);
return x_36;
}
}
default:
{
obj* x_37; 
x_37 = lean::box(0);
return x_37;
}
}
}
}
obj* l_lsp_diagnostic__severity_has__from__json___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lsp_diagnostic__severity_has__from__json(x_0);
lean::dec(x_0);
return x_1;
}
}
void initialize_init_default();
void initialize_init_lean_server_jsonrpc();
static bool _G_initialized = false;
void initialize_init_lean_server_lsp() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_default();
 initialize_init_lean_server_jsonrpc();
 l_lsp_position_has__to__json___closed__1 = _init_l_lsp_position_has__to__json___closed__1();
lean::mark_persistent(l_lsp_position_has__to__json___closed__1);
 l_lsp_position_has__to__json___closed__2 = _init_l_lsp_position_has__to__json___closed__2();
lean::mark_persistent(l_lsp_position_has__to__json___closed__2);
 l_lsp_range_has__to__json___closed__1 = _init_l_lsp_range_has__to__json___closed__1();
lean::mark_persistent(l_lsp_range_has__to__json___closed__1);
 l_lsp_range_has__to__json___closed__2 = _init_l_lsp_range_has__to__json___closed__2();
lean::mark_persistent(l_lsp_range_has__to__json___closed__2);
 l_lsp_document__uri_has__from__json = _init_l_lsp_document__uri_has__from__json();
lean::mark_persistent(l_lsp_document__uri_has__from__json);
 l_lsp_document__uri_has__to__json = _init_l_lsp_document__uri_has__to__json();
lean::mark_persistent(l_lsp_document__uri_has__to__json);
 l_lsp_document__uri = _init_l_lsp_document__uri();
lean::mark_persistent(l_lsp_document__uri);
 l_lsp_location_has__to__json___closed__1 = _init_l_lsp_location_has__to__json___closed__1();
lean::mark_persistent(l_lsp_location_has__to__json___closed__1);
 l_lsp_location_has__to__json___closed__2 = _init_l_lsp_location_has__to__json___closed__2();
lean::mark_persistent(l_lsp_location_has__to__json___closed__2);
 l_lsp_diagnostic__severity_has__from__json___closed__1 = _init_l_lsp_diagnostic__severity_has__from__json___closed__1();
lean::mark_persistent(l_lsp_diagnostic__severity_has__from__json___closed__1);
 l_lsp_diagnostic__severity_has__from__json___closed__2 = _init_l_lsp_diagnostic__severity_has__from__json___closed__2();
lean::mark_persistent(l_lsp_diagnostic__severity_has__from__json___closed__2);
 l_lsp_diagnostic__severity_has__from__json___closed__3 = _init_l_lsp_diagnostic__severity_has__from__json___closed__3();
lean::mark_persistent(l_lsp_diagnostic__severity_has__from__json___closed__3);
 l_lsp_diagnostic__severity_has__from__json___closed__4 = _init_l_lsp_diagnostic__severity_has__from__json___closed__4();
lean::mark_persistent(l_lsp_diagnostic__severity_has__from__json___closed__4);
}
