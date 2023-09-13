// Lean compiler output
// Module: Library.Tactic.Extra
// Imports: Init Library.Theory.ModEq.Lemmas Library.Tactic.Extra.Attr Mathlib.Tactic.Positivity
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
LEAN_EXPORT lean_object* l_extra_Positivity(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_extra___closed__3;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__29;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_extra___closed__2;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__25;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__46;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__63;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__19;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__15;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__24;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__67;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__60;
lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__11;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__21;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__9;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__33;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__52;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__35;
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__54;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__55;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__49;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__38;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__4;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__12;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__43;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__5;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__8;
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__3;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__41;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__10;
lean_object* l_Lean_Elab_Tactic_withMainContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__59;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__48;
static lean_object* l_extra_Positivity___closed__1;
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__26;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__57;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__51;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__28;
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__13;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__62;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__66;
static lean_object* l_extra___closed__4;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__53;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__16;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__65;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__45;
LEAN_EXPORT lean_object* l_extra;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__61;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__42;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__58;
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__27;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__23;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__64;
static lean_object* l_extra___closed__1;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__32;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__30;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__37;
LEAN_EXPORT lean_object* l_extra_Positivity___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__6;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__68;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__44;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__56;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__39;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__36;
lean_object* l_Mathlib_Meta_Positivity_positivity(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__17;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__47;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__7;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__34;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__18;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__50;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__40;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__20;
lean_object* l_String_toSubstring_x27(lean_object*);
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__31;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__14;
lean_object* l_Lean_Elab_Tactic_replaceMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1;
static lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__22;
static lean_object* _init_l_extra___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("extra", 5);
return x_1;
}
}
static lean_object* _init_l_extra___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_extra___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_extra___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_extra___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_extra___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_extra___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_extra___closed__3;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_extra() {
_start:
{
lean_object* x_1; 
x_1 = l_extra___closed__4;
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean", 4);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Parser", 6);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Tactic", 6);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("first", 5);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1;
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
x_3 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__3;
x_4 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("null", 4);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("group", 5);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__8;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("|", 1);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("tacticSeq", 9);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1;
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
x_3 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__3;
x_4 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__11;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("tacticSeq1Indented", 18);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1;
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
x_3 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__3;
x_4 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__13;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("focus", 5);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1;
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
x_3 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__3;
x_4 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__15;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("paren", 5);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1;
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
x_3 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__3;
x_4 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__17;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("(", 1);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Aesop", 5);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Frontend", 8);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("aesopTactic", 11);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__20;
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__21;
x_3 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
x_4 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__22;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__24() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("aesop", 5);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("tactic_clause(Rule_sets[_])", 27);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__20;
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__21;
x_3 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
x_4 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__25;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("rule_sets", 9);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("[", 1);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__29() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ruleSetSpec", 11);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__20;
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__21;
x_3 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
x_4 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__29;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_extra___closed__1;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__33() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(",", 1);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__34() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("-", 1);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__35() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("default", 7);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__35;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__35;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__38() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("]", 1);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__39() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(")", 1);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__40() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("tactic_clause(Simp_options:=_)", 30);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__20;
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__21;
x_3 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
x_4 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__40;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__42() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("simp_options", 12);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__43() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(":=", 2);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__44() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Term", 4);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__45() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("structInst", 10);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1;
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
x_3 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__44;
x_4 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__45;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__47() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("{", 1);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__48() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("structInstField", 15);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__49() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1;
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
x_3 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__44;
x_4 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__48;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__50() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("structInstLVal", 14);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__51() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1;
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
x_3 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__44;
x_4 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__50;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__52() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("enabled", 7);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__53() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__52;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__54() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__52;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__55() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("false", 5);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__56() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__55;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__57() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__55;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__58() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("optEllipsis", 11);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__59() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1;
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
x_3 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__44;
x_4 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__58;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__60() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("}", 1);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__61() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(";", 1);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__62() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("done", 4);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__63() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1;
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
x_3 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__3;
x_4 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__62;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__64() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("fail", 4);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__65() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1;
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2;
x_3 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__3;
x_4 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__64;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__66() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("str", 3);
return x_1;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__67() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__66;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__68() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\"out of scope: extra proves relations between a LHS and a RHS differing by some neutral quantity for the relation\"", 114);
return x_1;
}
}
LEAN_EXPORT lean_object* l___aux__Library__Tactic__Extra______macroRules__extra__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_extra___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_8 = lean_ctor_get(x_2, 5);
lean_inc(x_8);
lean_dec(x_2);
x_9 = 0;
x_10 = l_Lean_SourceInfo_fromRef(x_8, x_9);
x_11 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__4;
lean_inc(x_10);
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__10;
lean_inc(x_10);
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__15;
lean_inc(x_10);
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
x_17 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__19;
lean_inc(x_10);
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_10);
lean_ctor_set(x_18, 1, x_17);
x_19 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__24;
lean_inc(x_10);
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_10);
lean_ctor_set(x_20, 1, x_19);
x_21 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__27;
lean_inc(x_10);
x_22 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_22, 0, x_10);
lean_ctor_set(x_22, 1, x_21);
x_23 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__28;
lean_inc(x_10);
x_24 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_24, 0, x_10);
lean_ctor_set(x_24, 1, x_23);
x_25 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__7;
x_26 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__31;
lean_inc(x_10);
x_27 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_27, 0, x_10);
lean_ctor_set(x_27, 1, x_25);
lean_ctor_set(x_27, 2, x_26);
x_28 = lean_box(0);
x_29 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__32;
lean_inc(x_10);
x_30 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_30, 0, x_10);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_30, 2, x_4);
lean_ctor_set(x_30, 3, x_28);
x_31 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__30;
lean_inc(x_27);
lean_inc(x_10);
x_32 = l_Lean_Syntax_node2(x_10, x_31, x_27, x_30);
x_33 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__33;
lean_inc(x_10);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_10);
lean_ctor_set(x_34, 1, x_33);
x_35 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__34;
lean_inc(x_10);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_10);
lean_ctor_set(x_36, 1, x_35);
lean_inc(x_10);
x_37 = l_Lean_Syntax_node1(x_10, x_25, x_36);
x_38 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__36;
x_39 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__37;
lean_inc(x_10);
x_40 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_40, 0, x_10);
lean_ctor_set(x_40, 1, x_38);
lean_ctor_set(x_40, 2, x_39);
lean_ctor_set(x_40, 3, x_28);
lean_inc(x_10);
x_41 = l_Lean_Syntax_node2(x_10, x_31, x_37, x_40);
lean_inc(x_10);
x_42 = l_Lean_Syntax_node3(x_10, x_25, x_32, x_34, x_41);
x_43 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__38;
lean_inc(x_10);
x_44 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_44, 0, x_10);
lean_ctor_set(x_44, 1, x_43);
x_45 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__39;
lean_inc(x_10);
x_46 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_46, 0, x_10);
lean_ctor_set(x_46, 1, x_45);
x_47 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__26;
lean_inc(x_46);
lean_inc(x_18);
lean_inc(x_10);
x_48 = l_Lean_Syntax_node6(x_10, x_47, x_18, x_22, x_24, x_42, x_44, x_46);
x_49 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__42;
lean_inc(x_10);
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_10);
lean_ctor_set(x_50, 1, x_49);
x_51 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__43;
lean_inc(x_10);
x_52 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_52, 0, x_10);
lean_ctor_set(x_52, 1, x_51);
x_53 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__47;
lean_inc(x_10);
x_54 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_54, 0, x_10);
lean_ctor_set(x_54, 1, x_53);
x_55 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__53;
x_56 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__54;
lean_inc(x_10);
x_57 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_57, 0, x_10);
lean_ctor_set(x_57, 1, x_55);
lean_ctor_set(x_57, 2, x_56);
lean_ctor_set(x_57, 3, x_28);
x_58 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__51;
lean_inc(x_27);
lean_inc(x_10);
x_59 = l_Lean_Syntax_node2(x_10, x_58, x_57, x_27);
x_60 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__56;
x_61 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__57;
lean_inc(x_10);
x_62 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_62, 0, x_10);
lean_ctor_set(x_62, 1, x_60);
lean_ctor_set(x_62, 2, x_61);
lean_ctor_set(x_62, 3, x_28);
x_63 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__49;
lean_inc(x_52);
lean_inc(x_10);
x_64 = l_Lean_Syntax_node3(x_10, x_63, x_59, x_52, x_62);
lean_inc(x_10);
x_65 = l_Lean_Syntax_node1(x_10, x_25, x_64);
x_66 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__59;
lean_inc(x_27);
lean_inc(x_10);
x_67 = l_Lean_Syntax_node1(x_10, x_66, x_27);
x_68 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__60;
lean_inc(x_10);
x_69 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_69, 0, x_10);
lean_ctor_set(x_69, 1, x_68);
x_70 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__46;
lean_inc(x_27);
lean_inc(x_10);
x_71 = l_Lean_Syntax_node6(x_10, x_70, x_54, x_27, x_65, x_67, x_27, x_69);
x_72 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__41;
lean_inc(x_46);
lean_inc(x_18);
lean_inc(x_10);
x_73 = l_Lean_Syntax_node5(x_10, x_72, x_18, x_50, x_52, x_71, x_46);
lean_inc(x_10);
x_74 = l_Lean_Syntax_node2(x_10, x_25, x_48, x_73);
x_75 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__23;
lean_inc(x_10);
x_76 = l_Lean_Syntax_node2(x_10, x_75, x_20, x_74);
x_77 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__61;
lean_inc(x_10);
x_78 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_78, 0, x_10);
lean_ctor_set(x_78, 1, x_77);
x_79 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__62;
lean_inc(x_10);
x_80 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_80, 0, x_10);
lean_ctor_set(x_80, 1, x_79);
x_81 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__63;
lean_inc(x_10);
x_82 = l_Lean_Syntax_node1(x_10, x_81, x_80);
lean_inc(x_10);
x_83 = l_Lean_Syntax_node3(x_10, x_25, x_76, x_78, x_82);
x_84 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__14;
lean_inc(x_10);
x_85 = l_Lean_Syntax_node1(x_10, x_84, x_83);
x_86 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__12;
lean_inc(x_10);
x_87 = l_Lean_Syntax_node1(x_10, x_86, x_85);
x_88 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__18;
lean_inc(x_10);
x_89 = l_Lean_Syntax_node3(x_10, x_88, x_18, x_87, x_46);
lean_inc(x_10);
x_90 = l_Lean_Syntax_node1(x_10, x_25, x_89);
lean_inc(x_10);
x_91 = l_Lean_Syntax_node1(x_10, x_84, x_90);
lean_inc(x_10);
x_92 = l_Lean_Syntax_node1(x_10, x_86, x_91);
x_93 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__16;
lean_inc(x_10);
x_94 = l_Lean_Syntax_node2(x_10, x_93, x_16, x_92);
lean_inc(x_10);
x_95 = l_Lean_Syntax_node1(x_10, x_25, x_94);
lean_inc(x_10);
x_96 = l_Lean_Syntax_node1(x_10, x_84, x_95);
lean_inc(x_10);
x_97 = l_Lean_Syntax_node1(x_10, x_86, x_96);
x_98 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__9;
lean_inc(x_14);
lean_inc(x_10);
x_99 = l_Lean_Syntax_node2(x_10, x_98, x_14, x_97);
x_100 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__64;
lean_inc(x_10);
x_101 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_101, 0, x_10);
lean_ctor_set(x_101, 1, x_100);
x_102 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__68;
lean_inc(x_10);
x_103 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_103, 0, x_10);
lean_ctor_set(x_103, 1, x_102);
x_104 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__67;
lean_inc(x_10);
x_105 = l_Lean_Syntax_node1(x_10, x_104, x_103);
lean_inc(x_10);
x_106 = l_Lean_Syntax_node1(x_10, x_25, x_105);
x_107 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__65;
lean_inc(x_10);
x_108 = l_Lean_Syntax_node2(x_10, x_107, x_101, x_106);
lean_inc(x_10);
x_109 = l_Lean_Syntax_node1(x_10, x_25, x_108);
lean_inc(x_10);
x_110 = l_Lean_Syntax_node1(x_10, x_84, x_109);
lean_inc(x_10);
x_111 = l_Lean_Syntax_node1(x_10, x_86, x_110);
lean_inc(x_10);
x_112 = l_Lean_Syntax_node2(x_10, x_98, x_14, x_111);
lean_inc(x_10);
x_113 = l_Lean_Syntax_node2(x_10, x_25, x_99, x_112);
x_114 = l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__5;
x_115 = l_Lean_Syntax_node2(x_10, x_114, x_12, x_113);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_3);
return x_116;
}
}
}
LEAN_EXPORT lean_object* l_extra_Positivity___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Elab_Tactic_getMainGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Mathlib_Meta_Positivity_positivity(x_11, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_box(0);
x_16 = l_Lean_Elab_Tactic_replaceMainGoal(x_15, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_16);
if (x_23 == 0)
{
return x_16;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_16, 0);
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_16);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_13);
if (x_27 == 0)
{
return x_13;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_13, 0);
x_29 = lean_ctor_get(x_13, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_13);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_10);
if (x_31 == 0)
{
return x_10;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_10, 0);
x_33 = lean_ctor_get(x_10, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_10);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
static lean_object* _init_l_extra_Positivity___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_extra_Positivity___lambda__1), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_extra_Positivity(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_extra_Positivity___closed__1;
x_11 = l_Lean_Elab_Tactic_withMainContext___rarg(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Library_Theory_ModEq_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Library_Tactic_Extra_Attr(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Positivity(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Library_Tactic_Extra(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Library_Theory_ModEq_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Library_Tactic_Extra_Attr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Positivity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_extra___closed__1 = _init_l_extra___closed__1();
lean_mark_persistent(l_extra___closed__1);
l_extra___closed__2 = _init_l_extra___closed__2();
lean_mark_persistent(l_extra___closed__2);
l_extra___closed__3 = _init_l_extra___closed__3();
lean_mark_persistent(l_extra___closed__3);
l_extra___closed__4 = _init_l_extra___closed__4();
lean_mark_persistent(l_extra___closed__4);
l_extra = _init_l_extra();
lean_mark_persistent(l_extra);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__1);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__2);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__3 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__3();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__3);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__4 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__4();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__4);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__5 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__5();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__5);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__6 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__6();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__6);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__7 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__7();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__7);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__8 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__8();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__8);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__9 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__9();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__9);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__10 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__10();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__10);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__11 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__11();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__11);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__12 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__12();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__12);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__13 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__13();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__13);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__14 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__14();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__14);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__15 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__15();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__15);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__16 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__16();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__16);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__17 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__17();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__17);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__18 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__18();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__18);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__19 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__19();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__19);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__20 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__20();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__20);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__21 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__21();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__21);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__22 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__22();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__22);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__23 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__23();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__23);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__24 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__24();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__24);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__25 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__25();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__25);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__26 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__26();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__26);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__27 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__27();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__27);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__28 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__28();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__28);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__29 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__29();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__29);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__30 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__30();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__30);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__31 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__31();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__31);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__32 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__32();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__32);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__33 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__33();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__33);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__34 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__34();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__34);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__35 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__35();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__35);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__36 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__36();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__36);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__37 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__37();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__37);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__38 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__38();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__38);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__39 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__39();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__39);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__40 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__40();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__40);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__41 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__41();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__41);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__42 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__42();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__42);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__43 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__43();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__43);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__44 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__44();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__44);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__45 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__45();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__45);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__46 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__46();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__46);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__47 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__47();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__47);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__48 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__48();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__48);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__49 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__49();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__49);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__50 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__50();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__50);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__51 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__51();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__51);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__52 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__52();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__52);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__53 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__53();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__53);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__54 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__54();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__54);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__55 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__55();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__55);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__56 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__56();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__56);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__57 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__57();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__57);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__58 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__58();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__58);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__59 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__59();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__59);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__60 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__60();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__60);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__61 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__61();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__61);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__62 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__62();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__62);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__63 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__63();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__63);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__64 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__64();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__64);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__65 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__65();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__65);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__66 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__66();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__66);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__67 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__67();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__67);
l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__68 = _init_l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__68();
lean_mark_persistent(l___aux__Library__Tactic__Extra______macroRules__extra__1___closed__68);
l_extra_Positivity___closed__1 = _init_l_extra_Positivity___closed__1();
lean_mark_persistent(l_extra_Positivity___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
