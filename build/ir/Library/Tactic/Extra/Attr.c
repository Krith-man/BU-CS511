// Lean compiler output
// Module: Library.Tactic.Extra.Attr
// Imports: Init Aesop
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
static uint8_t l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__6;
size_t lean_usize_of_nat(lean_object*);
static lean_object* l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__2;
LEAN_EXPORT lean_object* l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4_(lean_object*);
static size_t l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__7;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__1;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Aesop_Frontend_initFn____x40_Aesop_Frontend_Extension___hyg_311____spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___rarg(lean_object*);
static lean_object* l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__3;
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__4;
static uint8_t l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__5;
static lean_object* _init_l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("extra", 5);
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__2;
x_2 = l_Array_mkArray1___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__3;
x_2 = lean_array_get_size(x_1);
return x_2;
}
}
static uint8_t _init_l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__4;
x_3 = lean_nat_dec_lt(x_1, x_2);
return x_3;
}
}
static uint8_t _init_l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__6() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__4;
x_2 = lean_nat_dec_le(x_1, x_1);
return x_2;
}
}
static size_t _init_l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__7() {
_start:
{
lean_object* x_1; size_t x_2; 
x_1 = l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__4;
x_2 = lean_usize_of_nat(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4_(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__5;
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__6;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_1);
return x_7;
}
else
{
size_t x_8; lean_object* x_9; size_t x_10; lean_object* x_11; lean_object* x_12; 
x_8 = 0;
x_9 = l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__3;
x_10 = l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__7;
x_11 = lean_box(0);
x_12 = l_Array_foldlMUnsafe_fold___at_Aesop_Frontend_initFn____x40_Aesop_Frontend_Extension___hyg_311____spec__1(x_9, x_8, x_10, x_11, x_1);
return x_12;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Aesop(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Library_Tactic_Extra_Attr(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Aesop(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__1 = _init_l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__1();
lean_mark_persistent(l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__1);
l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__2 = _init_l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__2();
lean_mark_persistent(l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__2);
l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__3 = _init_l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__3();
lean_mark_persistent(l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__3);
l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__4 = _init_l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__4();
lean_mark_persistent(l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__4);
l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__5 = _init_l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__5();
l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__6 = _init_l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__6();
l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__7 = _init_l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4____closed__7();
res = l_initFn____x40_Library_Tactic_Extra_Attr___hyg_4_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
