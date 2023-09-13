// Lean compiler output
// Module: Library.Tactic.Rel.Attr
// Imports: Init Mathlib.Tactic.LabelAttr
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6_(lean_object*);
static lean_object* l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__1;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Parser_Attr_iff__rules___closed__3;
LEAN_EXPORT lean_object* l_Parser_Attr_iff__rules;
static lean_object* l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__3;
static lean_object* l_Parser_Attr_iff__rules___closed__4;
static lean_object* l_Parser_Attr_iff__rules___closed__1;
static lean_object* l_Parser_Attr_iff__rules___closed__2;
static lean_object* l_Parser_Attr_iff__rules___closed__5;
lean_object* l_Mathlib_Tactic_LabelAttr_registerLabelAttr(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__2;
LEAN_EXPORT lean_object* l_ext____x40_Library_Tactic_Rel_Attr___hyg_3_;
static lean_object* _init_l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("iff_rules", 9);
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("labelled declarations for iff_rules", 35);
return x_1;
}
}
LEAN_EXPORT lean_object* l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__2;
x_3 = l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__3;
x_4 = l_Mathlib_Tactic_LabelAttr_registerLabelAttr(x_2, x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Parser_Attr_iff__rules___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Parser", 6);
return x_1;
}
}
static lean_object* _init_l_Parser_Attr_iff__rules___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Attr", 4);
return x_1;
}
}
static lean_object* _init_l_Parser_Attr_iff__rules___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Parser_Attr_iff__rules___closed__1;
x_2 = l_Parser_Attr_iff__rules___closed__2;
x_3 = l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__1;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Parser_Attr_iff__rules___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Parser_Attr_iff__rules___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Parser_Attr_iff__rules___closed__3;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Parser_Attr_iff__rules___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Parser_Attr_iff__rules() {
_start:
{
lean_object* x_1; 
x_1 = l_Parser_Attr_iff__rules___closed__5;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_LabelAttr(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Library_Tactic_Rel_Attr(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_LabelAttr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__1 = _init_l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__1();
lean_mark_persistent(l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__1);
l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__2 = _init_l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__2();
lean_mark_persistent(l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__2);
l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__3 = _init_l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__3();
lean_mark_persistent(l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6____closed__3);
res = l_initFn____x40_Library_Tactic_Rel_Attr___hyg_6_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_ext____x40_Library_Tactic_Rel_Attr___hyg_3_ = lean_io_result_get_value(res);
lean_mark_persistent(l_ext____x40_Library_Tactic_Rel_Attr___hyg_3_);
lean_dec_ref(res);
l_Parser_Attr_iff__rules___closed__1 = _init_l_Parser_Attr_iff__rules___closed__1();
lean_mark_persistent(l_Parser_Attr_iff__rules___closed__1);
l_Parser_Attr_iff__rules___closed__2 = _init_l_Parser_Attr_iff__rules___closed__2();
lean_mark_persistent(l_Parser_Attr_iff__rules___closed__2);
l_Parser_Attr_iff__rules___closed__3 = _init_l_Parser_Attr_iff__rules___closed__3();
lean_mark_persistent(l_Parser_Attr_iff__rules___closed__3);
l_Parser_Attr_iff__rules___closed__4 = _init_l_Parser_Attr_iff__rules___closed__4();
lean_mark_persistent(l_Parser_Attr_iff__rules___closed__4);
l_Parser_Attr_iff__rules___closed__5 = _init_l_Parser_Attr_iff__rules___closed__5();
lean_mark_persistent(l_Parser_Attr_iff__rules___closed__5);
l_Parser_Attr_iff__rules = _init_l_Parser_Attr_iff__rules();
lean_mark_persistent(l_Parser_Attr_iff__rules);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
