// Lean compiler output
// Module: Library.Tactic.ExistsDelaborator
// Imports: Init Mathlib.Lean.Expr.Basic
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at_Lean_PrettyPrinter_Delaborator_getExprKind___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_fixExists(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_withFixedExists(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_fixExists___closed__2;
LEAN_EXPORT lean_object* l_fixExists___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_fixExists___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_failure___rarg(lean_object*);
uint8_t l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_473_(uint8_t, uint8_t);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_withFixedExists___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_withFixedExists___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_fixExists___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Exists", 6);
return x_1;
}
}
static lean_object* _init_l_fixExists___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_fixExists(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_7 = l_Lean_Expr_getAppFnArgs(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_ctor_get(x_7, 1);
x_12 = lean_ctor_get(x_7, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = l_fixExists___closed__1;
x_15 = lean_string_dec_eq(x_13, x_14);
lean_dec(x_13);
if (x_15 == 0)
{
uint8_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_11);
x_16 = 0;
x_17 = lean_box(x_16);
lean_ctor_set(x_7, 1, x_1);
lean_ctor_set(x_7, 0, x_17);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_6);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_array_get_size(x_11);
x_20 = lean_unsigned_to_nat(2u);
x_21 = lean_nat_dec_eq(x_19, x_20);
lean_dec(x_19);
if (x_21 == 0)
{
uint8_t x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_11);
x_22 = 0;
x_23 = lean_box(x_22);
lean_ctor_set(x_7, 1, x_1);
lean_ctor_set(x_7, 0, x_23);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_7);
lean_ctor_set(x_24, 1, x_6);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_array_fget(x_11, x_25);
if (lean_obj_tag(x_26) == 6)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
lean_free_object(x_7);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 2);
lean_inc(x_29);
x_30 = lean_ctor_get_uint8(x_26, sizeof(void*)*3 + 8);
lean_dec(x_26);
x_31 = lean_unsigned_to_nat(0u);
x_32 = lean_array_fget(x_11, x_31);
lean_dec(x_11);
x_33 = l_fixExists(x_29, x_2, x_3, x_4, x_5, x_6);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_ctor_get(x_35, 1);
x_39 = l_Lean_Expr_getAppFn(x_1);
lean_dec(x_1);
x_40 = 0;
x_41 = l_Lean_Expr_lam___override(x_27, x_28, x_38, x_40);
x_42 = l_fixExists___closed__2;
x_43 = lean_array_push(x_42, x_32);
x_44 = lean_array_push(x_43, x_41);
x_45 = l_Lean_mkAppN(x_39, x_44);
x_46 = lean_unbox(x_37);
lean_dec(x_37);
if (x_46 == 0)
{
uint8_t x_47; 
x_47 = l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_473_(x_30, x_40);
if (x_47 == 0)
{
uint8_t x_48; lean_object* x_49; 
x_48 = 1;
x_49 = lean_box(x_48);
lean_ctor_set(x_35, 1, x_45);
lean_ctor_set(x_35, 0, x_49);
return x_33;
}
else
{
uint8_t x_50; lean_object* x_51; 
x_50 = 0;
x_51 = lean_box(x_50);
lean_ctor_set(x_35, 1, x_45);
lean_ctor_set(x_35, 0, x_51);
return x_33;
}
}
else
{
uint8_t x_52; lean_object* x_53; 
x_52 = 1;
x_53 = lean_box(x_52);
lean_ctor_set(x_35, 1, x_45);
lean_ctor_set(x_35, 0, x_53);
return x_33;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_54 = lean_ctor_get(x_35, 0);
x_55 = lean_ctor_get(x_35, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_35);
x_56 = l_Lean_Expr_getAppFn(x_1);
lean_dec(x_1);
x_57 = 0;
x_58 = l_Lean_Expr_lam___override(x_27, x_28, x_55, x_57);
x_59 = l_fixExists___closed__2;
x_60 = lean_array_push(x_59, x_32);
x_61 = lean_array_push(x_60, x_58);
x_62 = l_Lean_mkAppN(x_56, x_61);
x_63 = lean_unbox(x_54);
lean_dec(x_54);
if (x_63 == 0)
{
uint8_t x_64; 
x_64 = l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_473_(x_30, x_57);
if (x_64 == 0)
{
uint8_t x_65; lean_object* x_66; lean_object* x_67; 
x_65 = 1;
x_66 = lean_box(x_65);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_62);
lean_ctor_set(x_33, 0, x_67);
return x_33;
}
else
{
uint8_t x_68; lean_object* x_69; lean_object* x_70; 
x_68 = 0;
x_69 = lean_box(x_68);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_62);
lean_ctor_set(x_33, 0, x_70);
return x_33;
}
}
else
{
uint8_t x_71; lean_object* x_72; lean_object* x_73; 
x_71 = 1;
x_72 = lean_box(x_71);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_62);
lean_ctor_set(x_33, 0, x_73);
return x_33;
}
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_74 = lean_ctor_get(x_33, 0);
x_75 = lean_ctor_get(x_33, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_33);
x_76 = lean_ctor_get(x_74, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_74, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_78 = x_74;
} else {
 lean_dec_ref(x_74);
 x_78 = lean_box(0);
}
x_79 = l_Lean_Expr_getAppFn(x_1);
lean_dec(x_1);
x_80 = 0;
x_81 = l_Lean_Expr_lam___override(x_27, x_28, x_77, x_80);
x_82 = l_fixExists___closed__2;
x_83 = lean_array_push(x_82, x_32);
x_84 = lean_array_push(x_83, x_81);
x_85 = l_Lean_mkAppN(x_79, x_84);
x_86 = lean_unbox(x_76);
lean_dec(x_76);
if (x_86 == 0)
{
uint8_t x_87; 
x_87 = l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_473_(x_30, x_80);
if (x_87 == 0)
{
uint8_t x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_88 = 1;
x_89 = lean_box(x_88);
if (lean_is_scalar(x_78)) {
 x_90 = lean_alloc_ctor(0, 2, 0);
} else {
 x_90 = x_78;
}
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_85);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_75);
return x_91;
}
else
{
uint8_t x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_92 = 0;
x_93 = lean_box(x_92);
if (lean_is_scalar(x_78)) {
 x_94 = lean_alloc_ctor(0, 2, 0);
} else {
 x_94 = x_78;
}
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_85);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_75);
return x_95;
}
}
else
{
uint8_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_96 = 1;
x_97 = lean_box(x_96);
if (lean_is_scalar(x_78)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_78;
}
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_85);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_75);
return x_99;
}
}
}
else
{
uint8_t x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_26);
lean_dec(x_11);
x_100 = 0;
x_101 = lean_box(x_100);
lean_ctor_set(x_7, 1, x_1);
lean_ctor_set(x_7, 0, x_101);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_7);
lean_ctor_set(x_102, 1, x_6);
return x_102;
}
}
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_103 = lean_ctor_get(x_7, 1);
lean_inc(x_103);
lean_dec(x_7);
x_104 = lean_ctor_get(x_8, 1);
lean_inc(x_104);
lean_dec(x_8);
x_105 = l_fixExists___closed__1;
x_106 = lean_string_dec_eq(x_104, x_105);
lean_dec(x_104);
if (x_106 == 0)
{
uint8_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_103);
x_107 = 0;
x_108 = lean_box(x_107);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_1);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_6);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_111 = lean_array_get_size(x_103);
x_112 = lean_unsigned_to_nat(2u);
x_113 = lean_nat_dec_eq(x_111, x_112);
lean_dec(x_111);
if (x_113 == 0)
{
uint8_t x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_103);
x_114 = 0;
x_115 = lean_box(x_114);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_1);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_6);
return x_117;
}
else
{
lean_object* x_118; lean_object* x_119; 
x_118 = lean_unsigned_to_nat(1u);
x_119 = lean_array_fget(x_103, x_118);
if (lean_obj_tag(x_119) == 6)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; uint8_t x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; uint8_t x_140; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
x_122 = lean_ctor_get(x_119, 2);
lean_inc(x_122);
x_123 = lean_ctor_get_uint8(x_119, sizeof(void*)*3 + 8);
lean_dec(x_119);
x_124 = lean_unsigned_to_nat(0u);
x_125 = lean_array_fget(x_103, x_124);
lean_dec(x_103);
x_126 = l_fixExists(x_122, x_2, x_3, x_4, x_5, x_6);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_129 = x_126;
} else {
 lean_dec_ref(x_126);
 x_129 = lean_box(0);
}
x_130 = lean_ctor_get(x_127, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_127, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_132 = x_127;
} else {
 lean_dec_ref(x_127);
 x_132 = lean_box(0);
}
x_133 = l_Lean_Expr_getAppFn(x_1);
lean_dec(x_1);
x_134 = 0;
x_135 = l_Lean_Expr_lam___override(x_120, x_121, x_131, x_134);
x_136 = l_fixExists___closed__2;
x_137 = lean_array_push(x_136, x_125);
x_138 = lean_array_push(x_137, x_135);
x_139 = l_Lean_mkAppN(x_133, x_138);
x_140 = lean_unbox(x_130);
lean_dec(x_130);
if (x_140 == 0)
{
uint8_t x_141; 
x_141 = l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_473_(x_123, x_134);
if (x_141 == 0)
{
uint8_t x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_142 = 1;
x_143 = lean_box(x_142);
if (lean_is_scalar(x_132)) {
 x_144 = lean_alloc_ctor(0, 2, 0);
} else {
 x_144 = x_132;
}
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_139);
if (lean_is_scalar(x_129)) {
 x_145 = lean_alloc_ctor(0, 2, 0);
} else {
 x_145 = x_129;
}
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_128);
return x_145;
}
else
{
uint8_t x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_146 = 0;
x_147 = lean_box(x_146);
if (lean_is_scalar(x_132)) {
 x_148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_148 = x_132;
}
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_139);
if (lean_is_scalar(x_129)) {
 x_149 = lean_alloc_ctor(0, 2, 0);
} else {
 x_149 = x_129;
}
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_128);
return x_149;
}
}
else
{
uint8_t x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_150 = 1;
x_151 = lean_box(x_150);
if (lean_is_scalar(x_132)) {
 x_152 = lean_alloc_ctor(0, 2, 0);
} else {
 x_152 = x_132;
}
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_139);
if (lean_is_scalar(x_129)) {
 x_153 = lean_alloc_ctor(0, 2, 0);
} else {
 x_153 = x_129;
}
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_128);
return x_153;
}
}
else
{
uint8_t x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_119);
lean_dec(x_103);
x_154 = 0;
x_155 = lean_box(x_154);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_1);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_6);
return x_157;
}
}
}
}
}
else
{
uint8_t x_158; 
lean_dec(x_9);
lean_dec(x_8);
x_158 = !lean_is_exclusive(x_7);
if (x_158 == 0)
{
lean_object* x_159; lean_object* x_160; uint8_t x_161; lean_object* x_162; lean_object* x_163; 
x_159 = lean_ctor_get(x_7, 1);
lean_dec(x_159);
x_160 = lean_ctor_get(x_7, 0);
lean_dec(x_160);
x_161 = 0;
x_162 = lean_box(x_161);
lean_ctor_set(x_7, 1, x_1);
lean_ctor_set(x_7, 0, x_162);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_7);
lean_ctor_set(x_163, 1, x_6);
return x_163;
}
else
{
uint8_t x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
lean_dec(x_7);
x_164 = 0;
x_165 = lean_box(x_164);
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_1);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_6);
return x_167;
}
}
}
else
{
uint8_t x_168; 
lean_dec(x_8);
x_168 = !lean_is_exclusive(x_7);
if (x_168 == 0)
{
lean_object* x_169; lean_object* x_170; uint8_t x_171; lean_object* x_172; lean_object* x_173; 
x_169 = lean_ctor_get(x_7, 1);
lean_dec(x_169);
x_170 = lean_ctor_get(x_7, 0);
lean_dec(x_170);
x_171 = 0;
x_172 = lean_box(x_171);
lean_ctor_set(x_7, 1, x_1);
lean_ctor_set(x_7, 0, x_172);
x_173 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_173, 0, x_7);
lean_ctor_set(x_173, 1, x_6);
return x_173;
}
else
{
uint8_t x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_7);
x_174 = 0;
x_175 = lean_box(x_174);
x_176 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_1);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_6);
return x_177;
}
}
}
}
LEAN_EXPORT lean_object* l_fixExists___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_fixExists(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_withFixedExists___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_3, 3);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_dec(x_13);
lean_ctor_set(x_11, 0, x_1);
x_14 = l_Lean_PrettyPrinter_Delaborator_delab(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_3, 3, x_16);
x_17 = l_Lean_PrettyPrinter_Delaborator_delab(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_3, 3);
x_19 = lean_ctor_get(x_3, 0);
x_20 = lean_ctor_get(x_3, 1);
x_21 = lean_ctor_get(x_3, 2);
x_22 = lean_ctor_get_uint8(x_3, sizeof(void*)*4);
lean_inc(x_18);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_3);
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_24 = x_18;
} else {
 lean_dec_ref(x_18);
 x_24 = lean_box(0);
}
if (lean_is_scalar(x_24)) {
 x_25 = lean_alloc_ctor(0, 2, 0);
} else {
 x_25 = x_24;
}
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_23);
x_26 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_26, 0, x_19);
lean_ctor_set(x_26, 1, x_20);
lean_ctor_set(x_26, 2, x_21);
lean_ctor_set(x_26, 3, x_25);
lean_ctor_set_uint8(x_26, sizeof(void*)*4, x_22);
x_27 = l_Lean_PrettyPrinter_Delaborator_delab(x_26, x_4, x_5, x_6, x_7, x_8, x_9);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_withFixedExists(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_8 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at_Lean_PrettyPrinter_Delaborator_getExprKind___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_fixExists(x_9, x_3, x_4, x_5, x_6, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = l_Lean_PrettyPrinter_Delaborator_failure___rarg(x_15);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_dec(x_11);
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_dec(x_12);
x_23 = lean_box(0);
x_24 = l_withFixedExists___lambda__1(x_22, x_23, x_1, x_2, x_3, x_4, x_5, x_6, x_21);
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_withFixedExists___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_withFixedExists___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Lean_Expr_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Library_Tactic_ExistsDelaborator(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Lean_Expr_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_fixExists___closed__1 = _init_l_fixExists___closed__1();
lean_mark_persistent(l_fixExists___closed__1);
l_fixExists___closed__2 = _init_l_fixExists___closed__2();
lean_mark_persistent(l_fixExists___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
