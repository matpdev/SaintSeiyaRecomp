#include "r5900.h"
#include "functab.h"

void JP_F_0025A9B0(Ctx *c) { /* func_0025A9B0 */
ENTER(0x25a9b0);
SET32(29, RW(29) + -64);
SET64(3, RSD(5) < (s64)2);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, RD(0) + RD(0));
{ int t = RD(3) != RD(0); SET64(6, RD(4) + RD(0)); if (t) goto L_0025AA38; }
SET64(3, rd16(c, (RW(6) + 0)));
SET64(7, RD(0) | 0x8000);
SET32(6, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(6));
SET64(3, RD(3) & 0xffff);
if (RD(3) != RD(7)) { SET64(16, rd64(c, (RW(29) + 48))); goto L_0025AA3C; }
SET32(2, RW(29) + 24);
SET32(3, RW(29) + 28);
SET32(6, RW(29) + 16);
SET32(7, RW(29) + 18);
SET32(8, RW(29) + 19);
SET32(9, RW(29) + 20);
SET32(10, RW(29) + 21);
SET32(11, RW(29) + 32);
wr32(c, (RW(29) + 0), RW(2));
SET64(31, 0x25aa1c); wr32(c, (RW(29) + 8), RW(3)); JP_F_0024AB88(c);
{ int t = RSD(2) >= 0; SET64(3, (s16)rd16(c, (RW(29) + 16))); if (t) goto L_0025AA30; }
SET64(2, RD(0) + RD(0)); goto L_0025AA38;
L_0025AA30:;
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 0), RW(3));
L_0025AA38:;
SET64(16, rd64(c, (RW(29) + 48)));
L_0025AA3C:;
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0025AA48(Ctx *c) { /* func_0025AA48 */
ENTER(0x25aa48);
SET64(7, RD(5) + RD(0));
SET64(3, RSD(7) < (s64)2);
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0025AA80; }
SET64(3, rd16(c, (RW(4) + 0)));
SET64(5, RD(0) | 0x8001);
SET32(4, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(5);  if (t) goto L_0025AA80; }
wr32(c, (RW(6) + 0), RW(7));
SET32(2, RW(0) + 1);
L_0025AA80:;
 return;
}

void JP_F_0025AA88(Ctx *c) { /* func_0025AA88 */
ENTER(0x25aa88);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x25aaac); SET64(18, RD(6) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x25aabc); SET64(6, RD(18) + RD(0)); JP_F_0025AAE0(c);
SET64(31, 0x25aac4); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025AAE0(Ctx *c) { /* func_0025AAE0 */
ENTER(0x25aae0);
SET32(29, RW(29) + -96);
SET32(3, RW(6) + 31);
wr64(c, (RW(29) + 32), RD(16));
SET64(2, RSD(6) < (s64)0);
wr64(c, (RW(29) + 40), RD(17));
if (RD(2) != 0) SET64(6, RD(3));
wr64(c, (RW(29) + 48), RD(18));
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 56), RD(19));
SET32(3, RW(2) << 3);
wr64(c, (RW(29) + 64), RD(20));
SET32(3, RW(3) + RW(2));
wr64(c, (RW(29) + 72), RD(21));
SET32(6, RSW(6) >> 5);
wr64(c, (RW(29) + 80), RD(31));
SET64(5, RD(0) + RD(0));
SET64(2, RD(0) + RD(0));
SET32(16, RW(3) << 1);
SET64(20, (s32)rd32(c, (RW(4) + 20)));
{ int t = RD(20) == RD(0); SET64(4, RD(20) + RD(0)); if (t) goto L_0025AC60; }
mul_s(c, 0, 19, RSW(6), RSW(16));
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(7, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x25ab4c); SET64(6, RD(19) + RD(0)); rt_call(c, t); }
if (RD(16) == RD(0)) { rt_break(c, 0x25ab50); goto L_0025AB54; }
L_0025AB54:;
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(5, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
div_s(c, 0, RSW(2), RSW(16));
SET64(2, c->lo.d[0]);
mul_s(c, 0, 21, RSW(2), RSW(16));
SET64(17, RD(21) + RD(0));
SET64(31, 0x25ab78); SET64(6, RD(17) + RD(0)); JP_F_001273D0(c);
SET64(5, RD(17) + RD(0));
SET32(18, RW(29) + 16);
SET64(4, RD(29) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x25ab90); SET64(7, RD(18) + RD(0)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(6, RD(29) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x25aba8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x25abc0); SET64(6, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(7, RD(29) + RD(0));
SET32(6, RW(19) - RW(17));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
SET64(4, RD(20) + RD(0));
{ u32 t = RW(2); SET64(31, 0x25abdc); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
if (RD(16) == RD(0)) { rt_break(c, 0x25abe0); goto L_0025ABE4; }
L_0025ABE4:;
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(5, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
div_s(c, 0, RSW(2), RSW(16));
SET64(2, c->lo.d[0]);
mul_s(c, 0, 21, RSW(2), RSW(16));
SET64(6, RD(21) + RD(0));
SET64(31, 0x25ac08); SET32(17, RW(17) + RW(21)); JP_F_001273D0(c);
SET64(5, RD(21) + RD(0));
SET64(4, RD(29) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x25ac1c); SET64(7, RD(18) + RD(0)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(6, RD(29) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x25ac34); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(4, RD(20) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x25ac4c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
div_s(c, 0, RSW(17), RSW(16));
if (RD(16) == RD(0)) { rt_break(c, 0x25ac54); goto L_0025AC58; }
L_0025AC58:;
SET64(17, c->lo.d[0]);
SET32(2, RW(17) << 5);
L_0025AC60:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(21, rd64(c, (RW(29) + 72)));
SET64(31, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 96); return;
}

void JP_F_0025AC88(Ctx *c) { /* func_0025AC88 */
ENTER(0x25ac88);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
wr32(c, (RW(2) + 17520), RW(4));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(3) + 17536);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 15);
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(0) + 1);
L_0025ACB8:;
SET64(2, (s8)rd8(c, (RW(17) + 0)));
if (RD(2) != RD(19)) { SET32(18, RW(18) + -1); goto L_0025AD1C; }
SET64(2, (s8)rd8(c, (RW(17) + 3)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_0025AD04; }
SET64(5, RD(16) + RD(0));
L_0025ACD8:;
SET64(31, 0x25ace0); SET64(4, RD(17) + RD(0)); JP_F_002591F0(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET32(16, RW(16) + 1);
SET64(31, 0x25acf4); SET64(6, RD(2) + RD(0)); JP_F_00259090(c);
SET64(2, (s8)rd8(c, (RW(17) + 3)));
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET64(5, RD(16) + RD(0)); if (t) { POLL(); goto L_0025ACD8; } }
L_0025AD04:;
SET64(31, 0x25ad0c); SET64(4, RD(17) + RD(0)); JP_F_00259330(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25ad18); SET64(5, RD(2) + RD(0)); JP_F_00259270(c);
SET32(18, RW(18) + -1);
L_0025AD1C:;
{ int t = RSD(18) >= 0; SET32(17, RW(17) + 196); if (t) { POLL(); goto L_0025ACB8; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0025AD40(Ctx *c) { /* func_0025AD40 */
ENTER(0x25ad40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25ad5c); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x25ad68); SET64(5, RD(17) + RD(0)); JP_F_0025AD80(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025AD80(Ctx *c) { /* func_0025AD80 */
ENTER(0x25ad80);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025ADA0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 8232);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_0025ADA0:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00253020(c); return; }
}

void JP_F_0025ADB0(Ctx *c) { /* func_0025ADB0 */
ENTER(0x25adb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25adc4); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25adcc); SET64(4, RD(16) + RD(0)); JP_F_0025ADE0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025ADE0(Ctx *c) { /* func_0025ADE0 */
ENTER(0x25ade0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00253038(c); return; }
}

void JP_F_0025ADF8(Ctx *c) { /* func_0025ADF8 */
ENTER(0x25adf8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25ae0c); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25ae14); SET64(4, RD(16) + RD(0)); JP_F_0025AE30(c);
SET64(31, 0x25ae1c); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025AE30(Ctx *c) { /* func_0025AE30 */
ENTER(0x25ae30);
SET64(2, (s32)rd32(c, (RW(4) + 12))); return;
}

void JP_F_0025AE38(Ctx *c) { /* func_0025AE38 */
ENTER(0x25ae38);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25ae54); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x25ae60); SET64(5, RD(17) + RD(0)); JP_F_0025AE78(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025AE78(Ctx *c) { /* func_0025AE78 */
ENTER(0x25ae78);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00253098(c); return; }
}

void JP_F_0025AE90(Ctx *c) { /* func_0025AE90 */
ENTER(0x25ae90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x25aeb4); SET64(18, RD(6) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x25aec4); SET64(6, RD(18) + RD(0)); JP_F_0025AEE0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025AEE0(Ctx *c) { /* func_0025AEE0 */
ENTER(0x25aee0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 56), RD(31)); if (t) goto L_0025AF18; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25af10); SET32(4, RW(4) + 8280); JP_F_0024BDE8(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0025AFC4;
L_0025AF18:;
SET64(31, 0x25af20);  JP_F_00258558(c);
SET64(4, RD(17) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 176)));
SET64(5, RD(18) + RD(0));
SET32(7, RW(29) + 16);
SET32(8, RW(29) + 20);
SET64(31, 0x25af3c); SET32(9, RW(29) + 24); JP_F_0024E828(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0025AFC4; }
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) != RD(0)) { SET64(7, (s32)rd32(c, (RW(29) + 16))); goto L_0025AF88; }
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x25af64); SET32(7, RW(0) + 16); JP_F_0024BFB8(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 8328);
SET64(31, 0x25af74); SET64(5, RD(29) + RD(0)); JP_F_0024BE40(c);
SET32(2, RW(0) + -1);
SET32(3, RW(0) + 6);
wr16(c, (RW(16) + 96), (u16)RW(2));
wr8(c, (RW(16) + 1), (u8)RW(3)); goto L_0025AFC0;
L_0025AF88:;
SET32(2, RW(0) + 1);
SET64(6, (s32)rd32(c, (RW(29) + 20)));
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 24)));
SET64(5, RD(0) + RD(0));
SET64(8, (s32)rd32(c, (RW(16) + 176)));
wr32(c, (RW(16) + 184), RW(7));
wr32(c, (RW(16) + 180), RW(8));
wr32(c, (RW(16) + 188), RW(6));
wr32(c, (RW(16) + 192), RW(3));
wr8(c, (RW(16) + 2), (u8)RW(2));
wr8(c, (RW(16) + 1), (u8)RW(2));
SET64(31, 0x25afc0); wr8(c, (RW(16) + 172), (u8)RW(2)); JP_F_0025A730(c);
L_0025AFC0:;
SET64(16, rd64(c, (RW(29) + 32)));
L_0025AFC4:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0025AFD8(Ctx *c) { /* func_0025AFD8 */
ENTER(0x25afd8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x25b004); SET64(19, RD(7) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x25b018); SET64(7, RD(19) + RD(0)); JP_F_0025B038(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025B038(Ctx *c) { /* func_0025B038 */
ENTER(0x25b038);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_0025B06C; }
{ int t = RD(17) != RD(0);  if (t) goto L_0025B090; }
L_0025B06C:;
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 8368);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024BDE8(c); return; }
L_0025B090:;
SET64(31, 0x25b098);  JP_F_00258558(c);
SET64(4, (s32)rd32(c, (RW(16) + 176)));
SET64(31, 0x25b0a4); SET64(5, RD(17) + RD(0)); JP_F_0012A3C0(c);
SET64(3, (s32)rd32(c, (RW(16) + 176)));
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 188), RW(18));
wr32(c, (RW(16) + 192), RW(19));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 180), RW(3));
SET64(5, RD(0) + RD(0));
wr8(c, (RW(16) + 172), (u8)RW(2));
wr32(c, (RW(16) + 184), RW(0));
wr8(c, (RW(16) + 1), (u8)RW(2));
wr8(c, (RW(16) + 2), (u8)RW(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0025A730(c); return; }
}

void JP_F_0025B0F0(Ctx *c) { /* func_0025B0F0 */
ENTER(0x25b0f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25b10c); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x25b118); SET64(5, RD(17) + RD(0)); JP_F_0025B130(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025B130(Ctx *c) { /* func_0025B130 */
ENTER(0x25b130);
SET32(29, RW(29) + -16);
SET64(7, (s64)(s32)0xf0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(7, RD(7) | 0xffff);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0025B038(c); return; }
}

void JP_F_0025B150(Ctx *c) { /* func_0025B150 */
ENTER(0x25b150);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25b16c); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x25b178); SET64(5, RD(17) + RD(0)); JP_F_0025B190(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025B190(Ctx *c) { /* func_0025B190 */
ENTER(0x25b190);
SET32(29, RW(29) + -16);
SET64(6, (s64)(s32)0x40000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0025B1F8(c); return; }
}

void JP_F_0025B1A8(Ctx *c) { /* func_0025B1A8 */
ENTER(0x25b1a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x25b1cc); SET64(18, RD(6) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x25b1dc); SET64(6, RD(18) + RD(0)); JP_F_0025B1F8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025B1F8(Ctx *c) { /* func_0025B1F8 */
ENTER(0x25b1f8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_0025B22C; }
if (RD(17) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025B230; }
{ int t = RSD(18) >= 0;  if (t) goto L_0025B250; }
L_0025B22C:;
SET64(4, (s64)(s32)0x4b0000);
L_0025B230:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 8416);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024BDE8(c); return; }
L_0025B250:;
SET64(31, 0x25b258);  JP_F_00258558(c);
SET64(31, 0x25b260);  JP_F_0024A8C0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25b26c); SET64(5, RD(18) + RD(0)); JP_F_00269060(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(2) + RD(0)); if (t) goto L_0025B2A0; }
SET64(31, 0x25b280);  JP_F_0024A8D8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 8464);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024BDE8(c); return; }
L_0025B2A0:;
SET64(31, 0x25b2a8);  JP_F_00258200(c);
SET32(2, RW(0) + 2);
wr8(c, (RW(16) + 2), (u8)RW(2));
SET64(4, RD(16) + RD(0));
SET64(31, 0x25b2bc); SET64(5, RD(0) + RD(0)); JP_F_0025A730(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024A8D8(c); return; }
}

void JP_F_0025B2D8(Ctx *c) { /* func_0025B2D8 */
ENTER(0x25b2d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x25b2fc); SET64(18, RD(6) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x25b30c); SET64(6, RD(18) + RD(0)); JP_F_0025B328(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025B328(Ctx *c) { /* func_0025B328 */
ENTER(0x25b328);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
{ int t = RD(18) == RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_0025B360; }
if (RD(17) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025B364; }
{ int t = RSD(16) >= 0;  if (t) goto L_0025B388; }
L_0025B360:;
SET64(4, (s64)(s32)0x4b0000);
L_0025B364:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 8512);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024BDE8(c); return; }
L_0025B388:;
SET64(31, 0x25b390); SET64(19, (s64)(s32)0xff0000); JP_F_00258558(c);
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(5, RSW(3) >> 8);
SET32(4, RW(3) << 8);
SET32(2, RW(3) >> 24);
SET32(3, RW(3) << 24);
SET64(4, RD(4) & RD(19));
SET64(5, RD(5) & 0xff00);
SET64(2, RD(2) | RD(3));
SET64(4, RD(4) | RD(5));
SET64(2, RD(2) | RD(4));
SET64(2, RSD(16) < RSD(2));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0025B480; }
if (RSD(16) < 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0025B480; }
SET64(31, 0x25b3d4);  JP_F_0024A8C0(c);
SET64(5, (s64)(s32)0x40000000);
SET32(2, RW(16) << 3);
SET32(2, RW(2) + RW(17));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET32(6, RSW(3) >> 8);
SET32(2, RW(3) << 8);
SET64(6, RD(6) & 0xff00);
SET32(4, RW(3) >> 24);
SET64(2, RD(2) & RD(19));
SET32(3, RW(3) << 24);
SET64(4, RD(4) | RD(3));
SET64(2, RD(2) | RD(6));
SET64(4, RD(4) | RD(2));
SET64(31, 0x25b410); SET32(4, RW(17) + RW(4)); JP_F_00269060(c);
SET64(4, RD(18) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(2) + RD(0)); if (t) goto L_0025B448; }
SET64(31, 0x25b424);  JP_F_0024A8D8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 8560);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024BDE8(c); return; }
L_0025B448:;
SET64(31, 0x25b450);  JP_F_00258200(c);
SET32(2, RW(0) + 2);
wr8(c, (RW(18) + 2), (u8)RW(2));
SET64(4, RD(18) + RD(0));
SET64(31, 0x25b464); SET64(5, RD(0) + RD(0)); JP_F_0025A730(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024A8D8(c); return; }
L_0025B480:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0025B498(Ctx *c) { /* func_0025B498 */
ENTER(0x25b498);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(31));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x25b4c4); SET64(4, RD(17) + RD(0)); JP_F_00253250(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25b4d0); SET64(19, RD(2) + RD(0)); JP_F_00253268(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25b4dc); SET64(20, RD(2) + RD(0)); JP_F_00253298(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25b4e8); SET64(16, RD(2) + RD(0)); JP_F_00253420(c);
SET32(16, RW(16) - RW(19));
SET64(4, RD(17) + RD(0));
SET64(31, 0x25b4f8); SET64(5, RD(0) + RD(0)); JP_F_00253140(c);
wr32(c, (RW(18) + 144), RW(16));
SET64(5, RD(16) + RD(0));
SET64(31, 0x25b508); SET64(4, RD(17) + RD(0)); JP_F_00253130(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25b514); SET64(5, RD(20) + RD(0)); JP_F_00253150(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25b520); SET64(5, RD(19) + RD(0)); JP_F_00253000(c);
SET64(5, (s64)(s32)0x260000);
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(5) + -19120);
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_00253120(c); return; }
}

void JP_F_0025B550(Ctx *c) { /* func_0025B550 */
ENTER(0x25b550);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 56), RD(21));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 64), RD(31));
SET64(18, (s32)rd32(c, (RW(17) + 4)));
SET64(16, (s32)rd32(c, (RW(17) + 20)));
SET64(31, 0x25b584); SET64(4, RD(18) + RD(0)); JP_F_00253250(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x25b590); SET64(19, RD(2) + RD(0)); JP_F_00253268(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x25b59c); SET64(21, RD(2) + RD(0)); JP_F_00253298(c);
SET64(4, RD(16) + RD(0));
SET64(20, RD(2) + RD(0));
SET64(2, rd8(c, (RW(17) + 2)));
SET32(5, RW(0) + 1);
SET32(2, RW(2) + -2);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); SET64(7, RD(29) + RD(0)); if (t) goto L_0025B5E0; }
SET64(2, (s8)rd8(c, (RW(17) + 108)));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_0025B5E4; }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x25b5d4); SET32(5, RW(0) + -1); JP_F_00253130(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0025B6C8;
L_0025B5E0:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
L_0025B5E4:;
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x25b5f0); SET64(6, (s32)rd32(c, (RW(17) + 80))); rt_call(c, t); }
SET64(4, (s64)(s32)0x4b0000);
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(3, (s32)rd32(c, (RW(17) + 80)));
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 8608); if (t) goto L_0025B610; }
SET64(31, 0x25b610);  JP_F_0024BDE8(c);
L_0025B610:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(6, RD(29) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x25b628); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(31, 0x25b634); SET64(5, RD(0) + RD(0)); JP_F_00253140(c);
SET32(5, RW(20) - RW(19));
wr32(c, (RW(17) + 144), RW(5));
SET64(31, 0x25b644); SET64(4, RD(18) + RD(0)); JP_F_00253130(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x25b650); SET64(5, RD(21) + RD(0)); JP_F_00253150(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x25b65c); SET64(5, RD(19) + RD(0)); JP_F_00253000(c);
SET64(3, (s8)rd8(c, (RW(17) + 2)));
SET32(2, RW(0) + 2);
{ int t = RD(3) != RD(2); SET64(4, RD(16) + RD(0)); if (t) goto L_0025B6B0; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(3); SET64(31, 0x25b67c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(6, RD(21) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
SET32(5, RW(0) + 1);
{ u32 t = RW(3); SET64(31, 0x25b698); SET64(7, RD(29) + RD(0)); rt_call(c, t); }
SET64(6, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(6) + 32)));
{ u32 t = RW(2); SET64(31, 0x25b6b0); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
L_0025B6B0:;
SET64(31, 0x25b6b8); SET64(4, RD(18) + RD(0)); JP_F_00253438(c);
SET64(2, (s32)rd32(c, (RW(17) + 76)));
SET32(2, RW(2) + 1);
wr32(c, (RW(17) + 76), RW(2));
SET64(16, rd64(c, (RW(29) + 16)));
L_0025B6C8:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0025B6E8(Ctx *c) { /* func_0025B6E8 */
ENTER(0x25b6e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(17, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(17) == RD(0); SET64(4, (s32)rd32(c, (RW(16) + 4))); if (t) goto L_0025B760; }
if (RD(4) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0025B764; }
SET64(31, 0x25b718);  JP_F_00253268(c);
SET32(5, RW(0) + -1);
SET64(6, RD(2) + RD(0));
SET32(2, RW(6) + 2047);
SET64(3, RSD(6) < (s64)0);
if (RD(3) != 0) SET64(6, RD(2));
SET64(2, (s8)rd8(c, (RW(16) + 108)));
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0025B758; }
SET64(31, 0x25b740); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00253130(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(5, (s64)(s32)0x7fff0000);
SET64(31, 0x25b750); SET64(5, RD(5) | 0xffff); JP_F_002566C0(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0025B764;
L_0025B758:;
SET64(31, 0x25b760); SET32(5, RSW(6) >> 11); JP_F_00256350(c);
L_0025B760:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0025B764:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025B778(Ctx *c) { /* func_0025B778 */
ENTER(0x25b778);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25b790); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00253190(c);
SET64(4, RD(16) + RD(0));
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(5, RD(0) + RD(0)); if (t) goto L_0025B7B8; }
SET64(6, (s16)rd16(c, (RW(4) + 66)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00259040(c); return; }
L_0025B7B8:;
SET64(6, (s16)rd16(c, (RW(16) + 66)));
SET64(31, 0x25b7c4); SET64(4, RD(16) + RD(0)); JP_F_00259040(c);
SET64(4, RD(16) + RD(0));
SET64(6, (s16)rd16(c, (RW(4) + 68)));
SET32(5, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00259040(c); return; }
}

void JP_F_0025B7E0(Ctx *c) { /* func_0025B7E0 */
ENTER(0x25b7e0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 112), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 80), RD(16));
wr64(c, (RW(29) + 88), RD(17));
wr64(c, (RW(29) + 96), RD(18));
wr64(c, (RW(29) + 104), RD(19));
wr64(c, (RW(29) + 120), RD(21));
wr64(c, (RW(29) + 128), RD(22));
wr64(c, (RW(29) + 136), RD(31));
SET64(2, (s8)rd8(c, (RW(20) + 152)));
SET64(18, (s32)rd32(c, (RW(20) + 4)));
{ int t = RD(2) == RD(0); SET64(17, (s32)rd32(c, (RW(20) + 20))); if (t) goto L_0025BA9C; }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(6, (s64)(s32)0x7fff0000);
wr16(c, (RW(29) + 66), (u16)RW(0));
SET64(7, RD(29) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
{ u32 t = RW(3); SET64(31, 0x25b83c); SET64(6, RD(6) | 0xffff); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET32(21, RW(29) + 32);
SET64(6, (s64)(s32)0x7fff0000);
SET64(3, (s32)rd32(c, (RW(2) + 24)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(6, RD(6) | 0xffff);
{ u32 t = RW(3); SET64(31, 0x25b860); SET64(7, RD(21) + RD(0)); rt_call(c, t); }
SET32(19, RW(29) + 64);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(31, 0x25b874); SET64(6, RD(19) + RD(0)); JP_F_0024B338(c);
{ int t = RD(2) == RD(0); SET64(4, RD(20) + RD(0)); if (t) goto L_0025B8C0; }
SET64(31, 0x25b884); SET64(5, RD(0) + RD(0)); JP_F_0025A730(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(6, RD(21) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x25b89c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x25b8b4); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 80))); goto L_0025BAA0;
L_0025B8C0:;
SET64(16, (s16)rd16(c, (RW(29) + 64)));
SET64(6, RD(19) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET32(4, RW(4) + RW(16));
SET64(31, 0x25b8dc); SET32(5, RW(5) - RW(16)); JP_F_0024AA60(c);
SET64(19, RD(2) + RD(0));
{ int t = RD(19) == RD(0); SET32(3, RW(0) + -1); if (t) goto L_0025B8FC; }
SET64(4, (s32)rd32(c, (RW(29) + 32)));
SET32(6, RW(29) + 66);
SET64(31, 0x25b8f8); SET64(5, (s32)rd32(c, (RW(29) + 36))); JP_F_0024AA60(c);
SET64(3, RD(2) + RD(0));
L_0025B8FC:;
SET64(2, (s16)rd16(c, (RW(29) + 64)));
SET64(22, (s16)rd16(c, (RW(29) + 66)));
{ int t = RD(19) == RD(0); SET32(16, RW(16) + RW(2)); if (t) goto L_0025B948; }
{ int t = RD(3) == RD(0); SET64(6, RD(21) + RD(0)); if (t) goto L_0025B9B0; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x25b928); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x25b940); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(4, RD(20) + RD(0)); goto L_0025BA54;
L_0025B948:;
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(6, RD(21) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x25b960); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(5, RD(16) + RD(0));
SET32(16, RW(29) + 16);
SET64(4, RD(29) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x25b978); SET64(7, RD(16) + RD(0)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x25b990); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x25b9a8); SET32(5, RW(0) + 1); rt_call(c, t); }
 goto L_0025BA10;
L_0025B9B0:;
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(6, RD(29) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x25b9c8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, RD(21) + RD(0));
SET32(16, RW(29) + 48);
SET64(5, RD(22) + RD(0));
SET64(6, RD(21) + RD(0));
SET64(31, 0x25b9e0); SET64(7, RD(16) + RD(0)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(6, RD(21) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x25b9f8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x25ba10); SET32(5, RW(0) + 1); rt_call(c, t); }
L_0025BA10:;
SET64(31, 0x25ba18); SET64(4, RD(18) + RD(0)); JP_F_00252FE0(c);
SET64(3, (s32)rd32(c, (RW(20) + 164)));
SET64(4, RD(18) + RD(0));
SET32(3, RW(3) + RW(2));
SET64(31, 0x25ba2c); wr32(c, (RW(20) + 164), RW(3)); JP_F_00252178(c);
SET64(31, 0x25ba34); SET64(4, RD(18) + RD(0)); JP_F_00252148(c);
SET64(31, 0x25ba3c); SET64(4, RD(18) + RD(0)); JP_F_00252C40(c);
SET64(31, 0x25ba44); SET64(4, RD(18) + RD(0)); JP_F_00252080(c);
SET32(3, RW(0) + 2);
if (RD(2) == RD(3)) { SET64(5, (s32)rd32(c, (RW(20) + 72))); goto L_0025BA68; }
SET64(4, RD(20) + RD(0));
L_0025BA54:;
SET64(31, 0x25ba5c); SET64(5, RD(0) + RD(0)); JP_F_0025A730(c);
SET64(16, rd64(c, (RW(29) + 80))); goto L_0025BAA0;
L_0025BA68:;
SET64(31, 0x25ba70); SET64(4, RD(18) + RD(0)); JP_F_002520D8(c);
SET64(31, 0x25ba78); SET64(4, RD(18) + RD(0)); JP_F_002531F0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x25ba84); SET64(5, RD(2) + RD(0)); JP_F_00253130(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x25ba90); SET64(5, RD(0) + RD(0)); JP_F_00253150(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x25ba9c); SET64(5, RD(0) + RD(0)); JP_F_00253140(c);
L_0025BA9C:;
SET64(16, rd64(c, (RW(29) + 80)));
L_0025BAA0:;
SET64(17, rd64(c, (RW(29) + 88)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(19, rd64(c, (RW(29) + 104)));
SET64(20, rd64(c, (RW(29) + 112)));
SET64(21, rd64(c, (RW(29) + 120)));
SET64(22, rd64(c, (RW(29) + 128)));
SET64(31, rd64(c, (RW(29) + 136)));
SET32(29, RW(29) + 144); return;
}

void JP_F_0025BAC8(Ctx *c) { /* func_0025BAC8 */
ENTER(0x25bac8);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 72), RD(19));
SET32(19, RW(0) + 2048);
wr64(c, (RW(29) + 56), RD(17));
wr64(c, (RW(29) + 64), RD(18));
wr64(c, (RW(29) + 80), RD(20));
wr64(c, (RW(29) + 88), RD(21));
wr64(c, (RW(29) + 96), RD(31));
wr32(c, (RW(29) + 32), RW(0));
SET64(17, (s32)rd32(c, (RW(16) + 4)));
SET64(2, rd8(c, (RW(16) + 2)));
wr32(c, (RW(29) + 36), RW(0));
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); wr32(c, (RW(16) + 168), RW(0)); if (t) goto L_0025BB68; }
SET64(3, (s8)rd8(c, (RW(16) + 172)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2);  if (t) goto L_0025BB68; }
SET64(31, 0x25bb24); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_00256310(c);
SET32(3, RW(0) + 2);
if (RD(2) == RD(3)) { SET64(16, rd64(c, (RW(29) + 48))); goto L_0025BEB4; }
SET64(4, (s32)rd32(c, (RW(16) + 16)));
if (RD(4) == RD(0)) { SET64(5, (s32)rd32(c, (RW(16) + 180))); goto L_0025BB50; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 20)));
{ u32 t = RW(2); SET64(31, 0x25bb4c);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 180)));
L_0025BB50:;
SET64(4, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 184)));
SET64(7, (s32)rd32(c, (RW(16) + 188)));
SET64(31, 0x25bb64); SET64(8, (s32)rd32(c, (RW(16) + 192))); JP_F_002582F0(c);
wr8(c, (RW(16) + 172), (u8)RW(0));
L_0025BB68:;
SET64(31, 0x25bb70); SET64(4, RD(17) + RD(0)); JP_F_00252080(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET32(2, RW(0) + 4); goto L_0025BEA0; }
SET64(31, 0x25bb88); SET64(4, RD(17) + RD(0)); JP_F_00253190(c);
SET64(5, (s8)rd8(c, (RW(16) + 3)));
SET64(20, RD(2) + RD(0));
SET64(2, RSD(5) < RSD(20));
{ int t = RD(2) == RD(0); SET64(6, RD(29) + RD(0)); if (t) goto L_0025BBC8; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x25bba8); SET32(7, RW(0) + 16); JP_F_0024BFB8(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 8656);
SET64(31, 0x25bbb8); SET64(5, RD(29) + RD(0)); JP_F_0024BE40(c);
SET64(31, 0x25bbc0); SET64(4, RD(16) + RD(0)); JP_F_00258558(c);
SET64(16, rd64(c, (RW(29) + 48))); goto L_0025BEB4;
L_0025BBC8:;
SET64(31, 0x25bbd0); SET64(4, RD(17) + RD(0)); JP_F_00253178(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25bbdc); SET64(18, RD(2) + RD(0)); JP_F_00253220(c);
SET64(20, RD(2) + RD(0));
if (RSD(20) <= 0) { SET64(3, (s32)rd32(c, (RW(16) + 56))); goto L_0025BC10; }
SET64(2, (s32)rd32(c, (RW(16) + 56)));
div_s(c, 0, RSW(18), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x25bbf4); goto L_0025BBF8; }
L_0025BBF8:;
SET64(4, c->lo.d[0]);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(16) + 72), RW(3)); goto L_0025BC38;
L_0025BC10:;
div_s(c, 0, RSW(18), RSW(3));
if (RD(3) == RD(0)) { rt_break(c, 0x25bc18); goto L_0025BC1C; }
L_0025BC1C:;
SET64(4, c->lo.d[0]);
SET32(2, RW(4) << 1);
SET32(2, RW(2) + RW(4));
SET32(3, RW(2) >> 31);
SET32(2, RW(2) + RW(3));
SET32(2, RSW(2) >> 1);
wr32(c, (RW(16) + 72), RW(2));
L_0025BC38:;
SET64(31, 0x25bc40); SET64(4, RD(17) + RD(0)); JP_F_002531C0(c);
SET64(5, (s32)rd32(c, (RW(16) + 72)));
SET32(2, RW(2) << 1);
SET64(4, RD(17) + RD(0));
SET32(5, RW(5) + RW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x25bc54); goto L_0025BC58; }
L_0025BC58:;
div_s(c, 0, RSW(5), RSW(2));
SET64(5, c->lo.d[0]);
mul_s(c, 0, 5, RSW(5), RSW(2));
SET64(31, 0x25bc6c); wr32(c, (RW(16) + 72), RW(5)); JP_F_002520D8(c);
if (RSD(20) <= 0) { SET64(4, (s32)rd32(c, (RW(16) + 8))); goto L_0025BD40; }
SET64(3, (s8)rd8(c, (RW(16) + 2)));
SET32(2, RW(0) + 2);
{ int t = RD(3) != RD(2);  if (t) goto L_0025BC90; }
wr32(c, (RW(16) + 80), RW(0)); goto L_0025BCEC;
L_0025BC90:;
SET64(31, 0x25bc98); SET64(4, RD(17) + RD(0)); JP_F_002532B0(c);
if (RD(19) == RD(0)) { rt_break(c, 0x25bc9c); goto L_0025BCA0; }
L_0025BCA0:;
div_s(c, 0, RSW(2), RSW(19));
SET32(2, RW(2) + 2047);
SET64(3, c->hi.d[0]);
div_s(c, 0, RSW(2), RSW(19));
SET32(3, RW(19) - RW(3));
wr32(c, (RW(16) + 80), RW(3));
SET64(2, c->lo.d[0]);
div_s(c, 0, RSW(3), RSW(19));
SET64(5, RD(2) + RD(0));
SET64(4, c->hi.d[0]);
wr32(c, (RW(16) + 80), RW(4));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x25bcd8); wr32(c, (RW(16) + 140), RW(2)); JP_F_002566C0(c);
SET64(5, (s64)(s32)0x260000);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET32(5, RW(5) + -18712);
SET64(31, 0x25bcec); SET64(6, RD(16) + RD(0)); JP_F_00256660(c);
L_0025BCEC:;
SET64(31, 0x25bcf4); SET64(4, RD(17) + RD(0)); JP_F_00253298(c);
SET64(31, 0x25bcfc); SET64(4, RD(17) + RD(0)); JP_F_00253250(c);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(16) + 144), RW(2));
SET64(31, 0x25bd0c); SET64(5, RD(2) + RD(0)); JP_F_00253130(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25bd18); SET64(5, RD(0) + RD(0)); JP_F_00253150(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25bd24); SET64(5, RD(0) + RD(0)); JP_F_00253140(c);
SET64(5, (s64)(s32)0x260000);
SET32(5, RW(5) + -19304);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25bd38); SET64(6, RD(16) + RD(0)); JP_F_00253120(c);
 goto L_0025BD94;
L_0025BD40:;
{ int t = RD(4) == RD(0);  if (t) goto L_0025BD54; }
SET64(5, (s64)(s32)0x7fff0000);
SET64(31, 0x25bd54); SET64(5, RD(5) | 0xffff); JP_F_002566C0(c);
L_0025BD54:;
SET64(31, 0x25bd5c); SET64(4, RD(17) + RD(0)); JP_F_002531F0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25bd68); SET64(5, RD(2) + RD(0)); JP_F_00253130(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25bd74); SET64(5, RD(0) + RD(0)); JP_F_00253150(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25bd80); SET64(5, RD(0) + RD(0)); JP_F_00253140(c);
SET64(5, (s64)(s32)0x260000);
SET32(5, RW(5) + -18464);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25bd94); SET64(6, RD(16) + RD(0)); JP_F_00253120(c);
L_0025BD94:;
SET64(31, 0x25bd9c); SET64(4, RD(17) + RD(0)); JP_F_00253178(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25bda8); SET64(18, RD(2) + RD(0)); JP_F_00253190(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25bdb4); SET64(20, RD(2) + RD(0)); JP_F_002531F0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25bdc0); SET64(21, RD(2) + RD(0)); JP_F_002531A8(c);
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x25bdcc); SET64(5, RD(2) + RD(0)); JP_F_00251C90(c);
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x25bdd8); SET64(5, RD(18) + RD(0)); JP_F_00251C30(c);
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x25bde4); SET64(5, RD(20) + RD(0)); JP_F_00251C18(c);
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x25bdf0); SET64(5, RD(21) + RD(0)); JP_F_00251D78(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x25bdfc); SET64(5, (s16)rd16(c, (RW(16) + 64))); JP_F_00259360(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 32);
SET64(31, 0x25be0c); SET32(6, RW(29) + 36); JP_F_0025A440(c);
SET64(5, (s32)rd32(c, (RW(29) + 32)));
{ int t = RD(5) != RD(0); SET64(6, (s32)rd32(c, (RW(29) + 36))); if (t) goto L_0025BE20; }
{ int t = RD(6) == RD(0);  if (t) goto L_0025BE28; }
L_0025BE20:;
SET64(31, 0x25be28); SET64(4, RD(16) + RD(0)); JP_F_0025A438(c);
L_0025BE28:;
SET64(31, 0x25be30); SET64(4, RD(16) + RD(0)); JP_F_0025B778(c);
SET64(4, (s32)rd32(c, (RW(16) + 116)));
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_0025BE48; }
SET64(31, 0x25be44); SET64(5, RD(18) + RD(0)); JP_F_00246E50(c);
SET64(4, RD(17) + RD(0));
L_0025BE48:;
SET64(31, 0x25be50); SET32(19, RW(0) + 2); JP_F_00253160(c);
if (RD(2) != RD(19)) { SET64(4, (s32)rd32(c, (RW(16) + 12))); goto L_0025BE70; }
SET64(31, 0x25be60); SET64(4, RD(17) + RD(0)); JP_F_00253418(c);
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x25be6c); SET64(5, RD(2) + RD(0)); JP_F_00251D88(c);
SET64(4, (s32)rd32(c, (RW(16) + 12)));
L_0025BE70:;
SET64(31, 0x25be78); SET32(5, RW(0) + 1); JP_F_00251B38(c);
SET64(2, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(2) + 2592)));
{ int t = RD(2) == RD(0); SET64(5, RD(18) + RD(0)); if (t) goto L_0025BE98; }
SET64(6, RD(20) + RD(0));
SET64(7, RD(21) + RD(0));
{ u32 t = RW(2); SET64(31, 0x25be98); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
L_0025BE98:;
wr8(c, (RW(16) + 1), (u8)RW(19)); goto L_0025BEB0;
L_0025BEA0:;
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 48))); goto L_0025BEB4; }
SET32(2, RW(0) + 6);
wr8(c, (RW(16) + 1), (u8)RW(2));
L_0025BEB0:;
SET64(16, rd64(c, (RW(29) + 48)));
L_0025BEB4:;
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(21, rd64(c, (RW(29) + 88)));
SET64(31, rd64(c, (RW(29) + 96)));
SET32(29, RW(29) + 112); return;
}

void JP_F_0025BED8(Ctx *c) { /* func_0025BED8 */
ENTER(0x25bed8);
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + 2592);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
wr32(c, (RW(3) + 0), RW(4)); return;
}

void JP_F_0025BEF0(Ctx *c) { /* func_0025BEF0 */
ENTER(0x25bef0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 56), RD(31));
SET64(18, (s32)rd32(c, (RW(17) + 12)));
SET64(20, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x25bf20); SET64(4, RD(18) + RD(0)); JP_F_00251B80(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x25bf2c); SET64(16, RD(2) + RD(0)); JP_F_00251B98(c);
SET64(19, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 72)));
SET32(2, RW(2) << 1);
SET64(16, RSD(16) < RSD(2));
if (RD(16) == RD(0)) { SET64(2, (s8)rd8(c, (RW(17) + 112))); goto L_0025BF70; }
SET64(31, 0x25bf4c); SET64(4, RD(20) + RD(0)); JP_F_002531C0(c);
SET64(2, RSD(2) < RSD(19));
if (RD(2) == RD(0)) { SET64(2, (s8)rd8(c, (RW(17) + 112))); goto L_0025BF70; }
SET64(31, 0x25bf60); SET64(4, (s32)rd32(c, (RW(17) + 4))); JP_F_00252080(c);
SET32(3, RW(0) + 3);
{ int t = RD(2) != RD(3);  if (t) goto L_0025BFB4; }
SET64(2, (s8)rd8(c, (RW(17) + 112)));
L_0025BF70:;
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0025BFB0; }
SET64(2, (s8)rd8(c, (RW(17) + 114)));
if (RD(2) != RD(0)) { SET32(2, RW(0) + 3); goto L_0025BFA8; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x25bf90); SET32(5, RW(0) + 1); JP_F_00251B50(c);
wr32(c, (RW(17) + 156), RW(0));
SET64(2, (s64)(s32)0x3f0000);
SET32(2, RW(2) + 17528);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(17) + 160), RW(3));
SET32(2, RW(0) + 3);
L_0025BFA8:;
wr8(c, (RW(17) + 1), (u8)RW(2));
SET32(2, RW(0) + 1);
L_0025BFB0:;
wr8(c, (RW(17) + 113), (u8)RW(2));
L_0025BFB4:;
SET64(31, 0x25bfbc); SET64(4, (s32)rd32(c, (RW(17) + 4))); JP_F_00252080(c);
SET32(3, RW(0) + 3);
{ int t = RD(2) != RD(3); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_0025C048; }
SET64(31, 0x25bfd0); SET64(4, RD(17) + RD(0)); JP_F_00258EA8(c);
SET64(3, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 72)));
mul_s(c, 0, 2, RSW(2), RSW(3));
{ int t = RSD(3) <= 0; SET32(19, RW(2) << 1); if (t) goto L_0025C044; }
SET32(18, RW(17) + 24);
SET64(17, RD(3) + RD(0));
SET64(16, (s32)rd32(c, (RW(18) + 0)));
L_0025BFF0:;
SET32(18, RW(18) + 4);
SET64(7, RD(29) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x25c014); SET32(17, RW(17) + -1); rt_call(c, t); }
SET64(5, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x25c024); SET64(6, (s32)rd32(c, (RW(29) + 4))); JP_F_001273D0(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x25c03c); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
if (RD(17) != RD(0)) { SET64(16, (s32)rd32(c, (RW(18) + 0))); { POLL(); goto L_0025BFF0; } }
L_0025C044:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0025C048:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0025C068(Ctx *c) { /* func_0025C068 */
ENTER(0x25c068);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x25c090); SET64(4, (s32)rd32(c, (RW(19) + 4))); JP_F_00252080(c);
SET32(3, RW(0) + 3);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0025C104; }
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(18, RD(0) + RD(0));
SET64(20, (s64)(s32)0x400000);
SET64(31, 0x25c0b0); SET32(16, RW(19) + 24); JP_F_00253190(c);
SET64(17, RD(2) + RD(0));
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(2) + 2596), RW(17)); goto L_0025C0C4;
L_0025C0C0:;
SET32(18, RW(18) + 1);
L_0025C0C4:;
SET64(2, RSD(18) < RSD(17));
{ int t = RD(2) == RD(0);  if (t) goto L_0025C0F4; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(16, RW(16) + 4);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x25c0e8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, RSD(2) < (s64)64);
{ int t = RD(3) != RD(0); wr32(c, (RW(20) + 2600), RW(2)); if (t) { POLL(); goto L_0025C0C0; } }
L_0025C0F4:;
{ int t = RD(18) != RD(17); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0025C104; }
SET32(2, RW(0) + 4);
wr8(c, (RW(19) + 1), (u8)RW(2));
L_0025C104:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0025C120(Ctx *c) { /* func_0025C120 */
ENTER(0x25c120);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(20));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 72), RD(21));
wr64(c, (RW(29) + 80), RD(22));
SET64(22, RD(4) + RD(0));
wr64(c, (RW(29) + 88), RD(23));
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 96), RD(30));
wr64(c, (RW(29) + 104), RD(31));
SET64(31, 0x25c15c); SET64(4, (s32)rd32(c, (RW(22) + 12))); JP_F_00251B80(c);
SET64(3, (s64)(s32)0x400000);
wr32(c, (RW(3) + 2604), RW(2));
SET64(31, 0x25c16c); SET64(4, (s32)rd32(c, (RW(22) + 4))); JP_F_00253190(c);
SET64(31, 0x25c174); SET64(23, RD(2) + RD(0)); JP_F_0024A8C0(c);
{ int t = RSD(23) <= 0; SET64(21, (s32)rd32(c, (RW(22) + 72))); if (t) goto L_0025C1C8; }
SET32(17, RW(22) + 24);
L_0025C180:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET32(17, RW(17) + 4);
SET32(16, RW(20) << 3);
SET32(20, RW(20) + 1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(6, RW(21) << 1);
SET32(7, RW(29) + RW(16));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x25c1a8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, RSD(20) < RSD(23));
SET32(2, RW(29) + 4);
SET32(16, RW(2) + RW(16));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(3) >> 1);
SET64(2, RD(3) < RD(21));
{ int t = RD(4) != RD(0); if (RD(2) != 0) SET64(21, RD(3)); if (t) { POLL(); goto L_0025C180; } }
L_0025C1C8:;
{ int t = RSD(23) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_0025C25C; }
SET32(30, RW(21) << 1);
SET32(19, RW(22) + 24);
SET32(2, RW(29) + 16);
L_0025C1E0:;
SET32(16, RW(20) << 3);
SET32(17, RW(29) + RW(16));
SET32(18, RW(2) + RW(16));
SET64(7, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(30) + RD(0));
SET64(31, 0x25c200); SET64(6, RD(17) + RD(0)); JP_F_0026B318(c);
SET64(5, RD(0) + RD(0));
SET32(2, RW(29) + 4);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET32(16, RW(2) + RW(16));
SET32(20, RW(20) + 1);
SET64(31, 0x25c21c); SET64(6, (s32)rd32(c, (RW(16) + 0))); JP_F_001273D0(c);
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(6, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x25c234); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(6, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x25c250); SET32(19, RW(19) + 4); rt_call(c, t); }
SET64(3, RSD(20) < RSD(23));
{ int t = RD(3) != RD(0); SET32(2, RW(29) + 16); if (t) { POLL(); goto L_0025C1E0; } }
L_0025C25C:;
SET64(2, (s32)rd32(c, (RW(22) + 168)));
SET64(17, RD(0) + RD(0));
SET32(2, RW(2) + RW(21));
SET64(31, 0x25c270); wr32(c, (RW(22) + 168), RW(2)); JP_F_0024A8D8(c);
{ int t = RSD(23) <= 0;  if (t) goto L_0025C2AC; }
SET64(20, RD(23) + RD(0));
SET32(16, RW(22) + 24);
L_0025C280:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(16, RW(16) + 4);
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x25c29c); SET32(20, RW(20) + -1); rt_call(c, t); }
SET32(2, RW(2) >> 1);
SET64(3, RSD(2) < RSD(17));
{ int t = RD(20) != RD(0); if (RD(3) == 0) SET64(17, RD(2)); if (t) { POLL(); goto L_0025C280; } }
L_0025C2AC:;
SET64(31, 0x25c2b4); SET64(4, (s32)rd32(c, (RW(22) + 12))); JP_F_00251B80(c);
SET64(3, (s32)rd32(c, (RW(22) + 168)));
SET32(2, RW(17) + RW(2));
SET32(2, RW(2) - RW(3));
if (RSD(2) > 0) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0025C2F8; }
SET64(4, (s32)rd32(c, (RW(22) + 12)));
SET64(31, 0x25c2d4); SET64(5, RD(0) + RD(0)); JP_F_00251B38(c);
SET64(4, (s32)rd32(c, (RW(22) + 12)));
SET64(31, 0x25c2e0); SET64(5, RD(0) + RD(0)); JP_F_00251B50(c);
SET64(4, (s32)rd32(c, (RW(22) + 12)));
SET64(31, 0x25c2ec); SET32(5, RW(0) + 1); JP_F_002684A8(c);
SET32(2, RW(0) + 5);
wr8(c, (RW(22) + 1), (u8)RW(2));
SET64(16, rd64(c, (RW(29) + 32)));
L_0025C2F8:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(21, rd64(c, (RW(29) + 72)));
SET64(22, rd64(c, (RW(29) + 80)));
SET64(23, rd64(c, (RW(29) + 88)));
SET64(30, rd64(c, (RW(29) + 96)));
SET64(31, rd64(c, (RW(29) + 104)));
SET32(29, RW(29) + 112); return;
}

void JP_F_0025C328(Ctx *c) { /* func_0025C328 */
ENTER(0x25c328);
 return;
}

void JP_F_0025C330(Ctx *c) { /* func_0025C330 */
ENTER(0x25c330);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x25c34c); SET64(17, RD(4) + RD(0)); JP_F_0024A8C0(c);
SET64(4, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x25c358); SET64(5, RD(0) + RD(0)); JP_F_00251B38(c);
SET64(4, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x25c364); SET64(5, RD(0) + RD(0)); JP_F_00251B50(c);
SET64(31, 0x25c36c); SET64(4, (s32)rd32(c, (RW(17) + 4))); JP_F_00252178(c);
SET64(31, 0x25c374);  JP_F_0024A8D8(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
{ int t = RD(4) == RD(0);  if (t) goto L_0025C39C; }
SET64(31, 0x25c388);  JP_F_002565E0(c);
SET64(4, (s32)rd32(c, (RW(17) + 20)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 20)));
{ u32 t = RW(2); SET64(31, 0x25c39c);  rt_call(c, t); }
L_0025C39C:;
SET64(31, 0x25c3a4); SET64(18, RD(0) + RD(0)); JP_F_0024A8C0(c);
SET64(2, (s8)rd8(c, (RW(17) + 3)));
if (RSD(2) <= 0) { SET64(4, (s32)rd32(c, (RW(17) + 8))); goto L_0025C3E0; }
SET32(16, RW(17) + 24);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_0025C3B8:;
SET32(16, RW(16) + 4);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(3); SET64(31, 0x25c3cc); SET32(18, RW(18) + 1); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(17) + 3)));
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_0025C3B8; } }
SET64(4, (s32)rd32(c, (RW(17) + 8)));
L_0025C3E0:;
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_0025C3FC; }
SET64(31, 0x25c3f0); SET64(5, RD(0) + RD(0)); JP_F_00256350(c);
SET64(31, 0x25c3f8); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_00256440(c);
SET64(4, RD(17) + RD(0));
L_0025C3FC:;
SET64(31, 0x25c404); SET64(5, (s32)rd32(c, (RW(4) + 20))); JP_F_00258200(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024A8D8(c); return; }
}

void JP_F_0025C420(Ctx *c) { /* func_0025C420 */
ENTER(0x25c420);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(17, (s8)rd8(c, (RW(16) + 1)));
if (RD(17) != RD(2)) { wr16(c, (RW(16) + 104), (u16)RW(0)); goto L_0025C4E4; }
SET64(2, (s8)rd8(c, (RW(16) + 114)));
if (RD(2) != RD(0)) { wr16(c, (RW(16) + 104), (u16)RW(0)); goto L_0025C4E4; }
SET64(31, 0x25c458); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00252080(c);
if (RD(2) == RD(17)) { wr16(c, (RW(16) + 104), (u16)RW(0)); goto L_0025C4E4; }
SET64(31, 0x25c468); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00252FE0(c);
SET64(6, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 100)));
if (RD(2) != RD(6)) { wr16(c, (RW(16) + 104), (u16)RW(0)); goto L_0025C4A8; }
SET64(4, rd16(c, (RW(16) + 104)));
SET64(5, (s32)rd32(c, (RW(16) + 56)));
SET32(4, RW(4) + 1);
SET32(3, RW(4) << 16);
SET32(2, RW(5) << 2);
SET32(2, RW(2) + RW(5));
SET32(3, RSW(3) >> 16);
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) == RD(0); wr16(c, (RW(16) + 104), (u16)RW(4)); if (t) goto L_0025C4A8; }
SET32(2, RW(0) + -2);
wr16(c, (RW(16) + 96), (u16)RW(2));
L_0025C4A8:;
SET64(2, (s16)rd16(c, (RW(16) + 96)));
{ int t = RD(2) == RD(0); wr32(c, (RW(16) + 100), RW(6)); if (t) goto L_0025C4E4; }
SET64(3, rd8(c, (RW(16) + 109)));
SET32(2, RW(3) + -1);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0);  if (t) goto L_0025C4D4; }
SET64(31, 0x25c4d0); SET64(4, RD(16) + RD(0)); JP_F_00258558(c);
SET64(3, rd8(c, (RW(16) + 109)));
L_0025C4D4:;
{ int t = RD(3) == RD(0); SET32(2, RW(17) + -1); if (t) goto L_0025C4E8; }
wr16(c, (RW(16) + 96), (u16)RW(0));
wr16(c, (RW(16) + 104), (u16)RW(0));
L_0025C4E4:;
SET32(2, RW(17) + -1);
L_0025C4E8:;
SET64(2, RD(2) < (u64)(s64)3);
if (RD(2) == RD(0)) { wr16(c, (RW(16) + 106), (u16)RW(0)); goto L_0025C5F0; }
SET64(2, (s8)rd8(c, (RW(16) + 114)));
if (RD(2) != RD(0)) { wr16(c, (RW(16) + 106), (u16)RW(0)); goto L_0025C5F0; }
SET64(31, 0x25c508); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00252080(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { wr16(c, (RW(16) + 106), (u16)RW(0)); goto L_0025C5F0; }
SET64(4, (s32)rd32(c, (RW(16) + 20)));
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0025C538; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x25c530); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, RSD(2) < (s64)64); goto L_0025C53C;
L_0025C538:;
SET64(2, RSD(2) < (s64)64);
L_0025C53C:;
if (RD(2) == RD(0)) { wr16(c, (RW(16) + 106), (u16)RW(0)); goto L_0025C5F0; }
SET64(2, rd16(c, (RW(16) + 106)));
SET32(3, RW(0) + 3);
SET32(2, RW(2) + 1);
{ int t = RD(17) != RD(3); wr16(c, (RW(16) + 106), (u16)RW(2)); if (t) goto L_0025C570; }
SET64(4, (s32)rd32(c, (RW(16) + 56)));
SET32(3, RW(2) << 16);
SET32(3, RSW(3) >> 16);
SET32(2, RW(4) << 2);
SET32(2, RW(2) + RW(4)); goto L_0025C588;
L_0025C570:;
SET64(4, (s32)rd32(c, (RW(16) + 56)));
SET32(3, RW(2) << 16);
SET32(3, RSW(3) >> 16);
SET32(2, RW(4) << 2);
SET32(2, RW(2) + RW(4));
SET32(2, RW(2) << 2);
L_0025C588:;
SET64(2, RSD(2) < RSD(3));
if (RD(2) == RD(0)) { SET64(2, (s16)rd16(c, (RW(16) + 96))); goto L_0025C5A0; }
SET32(2, RW(0) + -1);
wr16(c, (RW(16) + 96), (u16)RW(2));
SET64(2, (s16)rd16(c, (RW(16) + 96)));
L_0025C5A0:;
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0025C5F0; }
SET64(4, (s8)rd8(c, (RW(16) + 109)));
{ int t = RD(4) != RD(2); SET64(3, rd8(c, (RW(16) + 109))); if (t) goto L_0025C5C8; }
SET64(31, 0x25c5bc); SET64(4, RD(16) + RD(0)); JP_F_00258558(c);
SET64(3, rd8(c, (RW(16) + 109))); goto L_0025C5E0;
L_0025C5C8:;
SET32(2, RW(0) + 2);
{ int t = RD(4) != RD(2);  if (t) goto L_0025C5E0; }
SET64(31, 0x25c5dc); SET64(4, RD(16) + RD(0)); JP_F_0025C330(c);
SET64(3, rd8(c, (RW(16) + 109)));
L_0025C5E0:;
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 8))); goto L_0025C5F4; }
wr16(c, (RW(16) + 96), (u16)RW(0));
wr16(c, (RW(16) + 106), (u16)RW(0));
L_0025C5F0:;
SET64(4, (s32)rd32(c, (RW(16) + 8)));
L_0025C5F4:;
if (RD(4) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0025C65C; }
SET64(31, 0x25c604);  JP_F_00256310(c);
SET32(3, RW(0) + 4);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0025C65C; }
SET64(4, (s8)rd8(c, (RW(16) + 109)));
SET32(2, RW(0) + 1);
{ int t = RD(4) != RD(2); SET64(3, rd8(c, (RW(16) + 109))); if (t) goto L_0025C630; }
SET64(31, 0x25c628); SET64(4, RD(16) + RD(0)); JP_F_00258558(c);
SET64(3, rd8(c, (RW(16) + 109))); goto L_0025C648;
L_0025C630:;
SET32(2, RW(0) + 2);
{ int t = RD(4) != RD(2);  if (t) goto L_0025C648; }
SET64(31, 0x25c644); SET64(4, RD(16) + RD(0)); JP_F_0025C330(c);
SET64(3, rd8(c, (RW(16) + 109)));
L_0025C648:;
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0025C65C; }
wr16(c, (RW(16) + 106), (u16)RW(0));
wr16(c, (RW(16) + 96), (u16)RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_0025C65C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025C670(Ctx *c) { /* func_0025C670 */
ENTER(0x25c670);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0025C6B0; }
SET64(31, 0x25c694);  JP_F_00256310(c);
SET32(3, RW(0) + 4);
if (RD(2) != RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 148))); goto L_0025C6B4; }
SET32(2, RW(0) + -1);
SET32(3, RW(0) + 6);
wr16(c, (RW(16) + 96), (u16)RW(2));
wr8(c, (RW(16) + 1), (u8)RW(3));
L_0025C6B0:;
SET64(4, (s32)rd32(c, (RW(16) + 148)));
L_0025C6B4:;
if (RD(4) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0025C6E4; }
SET64(31, 0x25c6c4);  JP_F_00264E80(c);
SET32(3, RW(0) + 3);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0025C6E4; }
SET32(2, RW(0) + 6);
SET32(3, RW(0) + -1);
wr8(c, (RW(16) + 1), (u8)RW(2));
wr16(c, (RW(16) + 96), (u16)RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_0025C6E4:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

static void JP_B_0025C6F0(Ctx *c, u32 entry) { /* func_0025C6F0 */
ENTER(entry);
switch (entry) { case 0x25c748: goto L_0025C748; case 0x25c770: goto L_0025C770; case 0x25c778: goto L_0025C778; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0025C77C; }
SET64(31, 0x25c714);  JP_F_00258648(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0025C77C; }
SET64(3, (s8)rd8(c, (RW(16) + 2)));
SET64(2, RD(3) < (u64)(s64)5);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0025C77C; }
SET32(2, RW(3) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 8720)));
{ u32 t = RW(3);  switch (t) { case 0x25c748: goto L_0025C748; case 0x25c770: goto L_0025C770; case 0x25c778: goto L_0025C778; default: rt_jump(c, t); return; } }
L_0025C748:;
SET64(31, 0x25c750); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_00256310(c);
SET32(3, RW(0) + 3);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0025C77C; }
SET64(31, 0x25c764); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00252118(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0025C77C;
L_0025C770:;
SET64(31, 0x25c778); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00252118(c);
L_0025C778:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0025C77C:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}
void JP_F_0025C6F0(Ctx *c) { JP_B_0025C6F0(c, 0x25c6f0); }
void JP_F_0025C748(Ctx *c) { JP_B_0025C6F0(c, 0x25c748); }
void JP_F_0025C770(Ctx *c) { JP_B_0025C6F0(c, 0x25c770); }
void JP_F_0025C778(Ctx *c) { JP_B_0025C6F0(c, 0x25c778); }

void JP_F_0025C788(Ctx *c) { /* func_0025C788 */
ENTER(0x25c788);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25c79c); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25c7a4); SET64(4, RD(16) + RD(0)); JP_F_0025C7B8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025C7B8(Ctx *c) { /* func_0025C7B8 */
ENTER(0x25c7b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0025C7E8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 8744);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_0025C7E8:;
SET64(3, (s8)rd8(c, (RW(16) + 1)));
SET32(2, RW(0) + 3);
{ int t = RD(3) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_0025C808; }
SET64(31, 0x25c800);  JP_F_0025C068(c);
 goto L_0025C860;
L_0025C808:;
{ int t = RD(3) != RD(2); SET32(2, RW(0) + 2); if (t) goto L_0025C820; }
SET64(31, 0x25c818);  JP_F_0025BAC8(c);
 goto L_0025C860;
L_0025C820:;
{ int t = RD(3) != RD(2); SET32(2, RW(0) + 4); if (t) goto L_0025C838; }
SET64(31, 0x25c830);  JP_F_0025BEF0(c);
 goto L_0025C860;
L_0025C838:;
{ int t = RD(3) != RD(2); SET32(2, RW(0) + 5); if (t) goto L_0025C850; }
SET64(31, 0x25c848);  JP_F_0025C120(c);
 goto L_0025C860;
L_0025C850:;
{ int t = RD(3) != RD(2);  if (t) goto L_0025C860; }
SET64(31, 0x25c860);  JP_F_0025C328(c);
L_0025C860:;
SET64(31, 0x25c868); SET64(4, RD(16) + RD(0)); JP_F_0025C6F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0025C670(c); return; }
}

void JP_F_0025C880(Ctx *c) { /* func_0025C880 */
ENTER(0x25c880);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25c894); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25c89c); SET64(4, RD(16) + RD(0)); JP_F_0025C8B8(c);
SET64(31, 0x25c8a4); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025C8B8(Ctx *c) { /* func_0025C8B8 */
ENTER(0x25c8b8);
SET32(29, RW(29) + -16);
SET64(3, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0025C918; }
SET64(2, (s32)rd32(c, (RW(3) + 8)));
{ int t = RD(2) != RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0025C908; }
SET64(4, (s32)rd32(c, (RW(3) + 148)));
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0025C918; }
SET64(2, (s32)rd32(c, (RW(4) + 40)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0025C900; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00257440(c); return; }
L_0025C900:;
SET64(2, RD(0) + RD(0)); goto L_0025C918;
L_0025C908:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00257440(c); return; }
L_0025C918:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025C928(Ctx *c) { /* func_0025C928 */
ENTER(0x25c928);
SET32(29, RW(29) + -16);
SET64(4, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 2616);
SET32(6, RW(0) + 960);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_0025C950(Ctx *c) { /* func_0025C950 */
ENTER(0x25c950);
SET32(29, RW(29) + -16);
SET64(4, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 2616);
SET32(6, RW(0) + 960);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_0025C978(Ctx *c) { /* func_0025C978 */
ENTER(0x25c978);
SET32(29, RW(29) + -32);
SET64(4, (s64)(s32)0x400000);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(4) + 2616);
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_0025C9C4; }
SET32(17, RW(17) + 1);
L_0025C9A0:;
SET64(2, RSD(17) < (s64)16);
{ int t = RD(2) == RD(0); SET32(3, RW(3) + 60); if (t) goto L_0025C9C4; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
if (RD(2) != RD(0)) { SET32(17, RW(17) + 1); { POLL(); goto L_0025C9A0; } }
L_0025C9C4:;
SET32(3, RW(0) + 16);
{ int t = RD(17) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0025CA30; }
SET32(16, RW(17) << 4);
SET32(2, RW(4) + 2616);
SET32(16, RW(16) - RW(17));
SET64(5, RD(0) + RD(0));
SET32(16, RW(16) << 2);
SET32(6, RW(0) + 60);
SET32(16, RW(16) + RW(2));
SET64(31, 0x25c9f4); SET64(4, RD(16) + RD(0)); JP_F_001273D0(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 0), RW(3));
SET32(4, RW(0) + 500);
wr32(c, (RW(16) + 4), RW(17));
SET64(5, RD(0) | 0xac44);
wr32(c, (RW(16) + 8), RW(0));
SET32(6, RW(16) + 48);
wr32(c, (RW(16) + 12), RW(0));
SET64(31, 0x25ca1c); SET32(7, RW(16) + 50); JP_F_0024A900(c);
SET32(4, RW(16) + 40);
SET64(5, RD(0) + RD(0));
SET64(31, 0x25ca2c); SET32(6, RW(0) + 8); JP_F_001273D0(c);
SET64(2, RD(16) + RD(0));
L_0025CA30:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025CA48(Ctx *c) { /* func_0025CA48 */
ENTER(0x25ca48);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(7, RW(2) + 50);
SET64(4, RD(6) + RD(0));
SET32(6, RW(2) + 48);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024A900(c); return; }
}

void JP_F_0025CA70(Ctx *c) { /* func_0025CA70 */
ENTER(0x25ca70);
SET64(3, rd16(c, (RW(5) + 0)));
wr16(c, (RW(4) + 40), (u16)RW(3));
SET64(2, rd16(c, (RW(6) + 0)));
wr16(c, (RW(4) + 42), (u16)RW(2));
SET64(3, rd16(c, (RW(5) + 2)));
wr16(c, (RW(4) + 44), (u16)RW(3));
SET64(2, rd16(c, (RW(6) + 2)));
wr16(c, (RW(4) + 46), (u16)RW(2)); return;
}

void JP_F_0025CA98(Ctx *c) { /* func_0025CA98 */
ENTER(0x25ca98);
SET64(3, rd16(c, (RW(4) + 40)));
wr16(c, (RW(5) + 0), (u16)RW(3));
SET64(2, rd16(c, (RW(4) + 42)));
wr16(c, (RW(6) + 0), (u16)RW(2));
SET64(3, rd16(c, (RW(4) + 44)));
wr16(c, (RW(5) + 2), (u16)RW(3));
SET64(2, rd16(c, (RW(4) + 46)));
wr16(c, (RW(6) + 2), (u16)RW(2)); return;
}

void JP_F_0025CAC0(Ctx *c) { /* func_0025CAC0 */
ENTER(0x25cac0);
wr16(c, (RW(4) + 56), (u16)RW(7));
wr16(c, (RW(4) + 52), (u16)RW(5));
wr16(c, (RW(4) + 54), (u16)RW(6)); return;
}

void JP_F_0025CAD0(Ctx *c) { /* func_0025CAD0 */
ENTER(0x25cad0);
SET64(2, rd16(c, (RW(4) + 52)));
wr16(c, (RW(5) + 0), (u16)RW(2));
SET64(3, rd16(c, (RW(4) + 54)));
wr16(c, (RW(6) + 0), (u16)RW(3));
SET64(2, rd16(c, (RW(4) + 56)));
wr16(c, (RW(7) + 0), (u16)RW(2)); return;
}

void JP_F_0025CAF0(Ctx *c) { /* func_0025CAF0 */
ENTER(0x25caf0);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025CB18; }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 60);
wr32(c, (RW(2) + 0), RW(0));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
L_0025CB18:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025CB28(Ctx *c) { /* func_0025CB28 */
ENTER(0x25cb28);
wr32(c, (RW(4) + 8), RW(5)); return;
}

void JP_F_0025CB30(Ctx *c) { /* func_0025CB30 */
ENTER(0x25cb30);
SET64(2, (s32)rd32(c, (RW(4) + 12))); return;
}

void JP_F_0025CB38(Ctx *c) { /* func_0025CB38 */
ENTER(0x25cb38);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(2) != RD(0); SET32(3, RW(0) + 1); if (t) goto L_0025CB60; }
wr32(c, (RW(4) + 36), RW(8));
wr32(c, (RW(4) + 24), RW(5));
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 28), RW(6));
wr32(c, (RW(4) + 20), RW(3));
wr32(c, (RW(4) + 32), RW(7)); return;
L_0025CB60:;
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0025CB68(Ctx *c) { /* func_0025CB68 */
ENTER(0x25cb68);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(2) != RD(0); SET32(3, RW(0) + 2); if (t) goto L_0025CB90; }
wr32(c, (RW(4) + 36), RW(8));
wr32(c, (RW(4) + 24), RW(5));
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 28), RW(6));
wr32(c, (RW(4) + 20), RW(3));
wr32(c, (RW(4) + 32), RW(7)); return;
L_0025CB90:;
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0025CB98(Ctx *c) { /* func_0025CB98 */
ENTER(0x25cb98);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(2) != RD(0); SET32(3, RW(0) + 1); if (t) goto L_0025CBC0; }
wr32(c, (RW(4) + 36), RW(8));
wr32(c, (RW(4) + 24), RW(5));
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 28), RW(6));
wr32(c, (RW(4) + 20), RW(3));
wr32(c, (RW(4) + 32), RW(7)); return;
L_0025CBC0:;
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0025CBC8(Ctx *c) { /* func_0025CBC8 */
ENTER(0x25cbc8);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0025CBDC; }
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 12), RW(2));
L_0025CBDC:;
 return;
}

void JP_F_0025CBE8(Ctx *c) { /* func_0025CBE8 */
ENTER(0x25cbe8);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 8);
wr32(c, (RW(4) + 12), RW(0));
SET32(4, RW(4) + 40);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_0025CC10(Ctx *c) { /* func_0025CC10 */
ENTER(0x25cc10);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { wr32(c, (RW(4) + 12), RW(0)); goto L_0025CC20; }
L_0025CC20:;
 return;
}

void JP_F_0025CC28(Ctx *c) { /* func_0025CC28 */
ENTER(0x25cc28);
SET64(2, (s32)rd32(c, (RW(4) + 16))); return;
}

void JP_F_0025CC30(Ctx *c) { /* func_0025CC30 */
ENTER(0x25cc30);
SET64(3, (s64)(s32)0x400000);
SET32(2, RW(0) + 1);
wr32(c, (RW(3) + 2608), RW(2)); return;
}

void JP_F_0025CC40(Ctx *c) { /* func_0025CC40 */
ENTER(0x25cc40);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET32(17, RW(0) + 1);
wr64(c, (RW(29) + 48), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(3) != RD(17); SET32(2, RW(0) + 2); if (t) goto L_0025CC70; }
SET32(3, RW(0) + 2);
wr32(c, (RW(16) + 12), RW(2));
SET32(2, RW(0) + 2);
L_0025CC70:;
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0025CD24; }
SET64(2, (s32)rd32(c, (RW(16) + 20)));
if (RD(2) != RD(17)) { SET64(3, (s16)rd16(c, (RW(16) + 54))); goto L_0025CCB8; }
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET32(7, RW(16) + 40);
SET64(5, (s32)rd32(c, (RW(16) + 28)));
SET32(10, RW(16) + 52);
SET64(6, (s32)rd32(c, (RW(16) + 32)));
SET64(8, (s16)rd16(c, (RW(16) + 48)));
SET64(9, (s16)rd16(c, (RW(16) + 50)));
SET64(11, (s16)rd16(c, (RW(16) + 54)));
SET64(2, (s16)rd16(c, (RW(16) + 56)));
SET64(31, 0x25ccb0); wr32(c, (RW(29) + 0), RW(2)); JP_F_0024B3F0(c);
wr32(c, (RW(16) + 16), RW(2)); goto L_0025CD18;
L_0025CCB8:;
SET32(12, RW(16) + 52);
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET32(7, RW(16) + 40);
SET64(5, (s32)rd32(c, (RW(16) + 28)));
SET32(9, RW(16) + 44);
SET64(6, (s32)rd32(c, (RW(16) + 32)));
SET64(8, (s32)rd32(c, (RW(16) + 36)));
SET64(10, (s16)rd16(c, (RW(16) + 48)));
SET64(11, (s16)rd16(c, (RW(16) + 50)));
SET64(2, (s16)rd16(c, (RW(16) + 56)));
wr32(c, (RW(29) + 8), RW(3));
wr32(c, (RW(29) + 0), RW(12));
SET64(31, 0x25ccf0); wr32(c, (RW(29) + 16), RW(2)); JP_F_0024BCE0(c);
SET32(3, RW(2) >> 31);
wr32(c, (RW(16) + 16), RW(2));
SET32(3, RW(2) + RW(3));
SET32(3, RSW(3) >> 1);
SET32(3, RW(3) << 1);
SET32(2, RW(2) - RW(3));
{ int t = RD(2) != RD(17); SET32(2, RW(0) + 3); if (t) goto L_0025CD1C; }
SET64(31, 0x25cd18);  JP_F_0025CC30(c);
L_0025CD18:;
SET32(2, RW(0) + 3);
L_0025CD1C:;
wr32(c, (RW(16) + 12), RW(2));
SET64(16, rd64(c, (RW(29) + 32)));
L_0025CD24:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0025CD38(Ctx *c) { /* func_0025CD38 */
ENTER(0x25cd38);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 2616);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 15);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 1);
L_0025CD60:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_0025CD78; }
SET64(31, 0x25cd74); SET64(4, RD(16) + RD(0)); JP_F_0025CC40(c);
SET32(17, RW(17) + -1);
L_0025CD78:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 60); if (t) { POLL(); goto L_0025CD60; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025CD98(Ctx *c) { /* func_0025CD98 */
ENTER(0x25cd98);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x530000);
SET64(2, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(3) + -16728);
SET32(2, RW(2) + 8792);
SET64(16, (s64)(s32)0x530000);
wr64(c, (RW(29) + 8), RD(31));
SET32(16, RW(16) + -16712);
wr32(c, (RW(3) + 0), RW(2));
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x25cdd0); SET32(6, RW(0) + 256); JP_F_001273D0(c);
SET64(7, (s64)(s32)0x530000);
SET32(4, RW(16) + 3);
SET32(3, RW(0) + -4);
SET64(4, RD(4) & RD(3));
SET32(2, RW(0) + 256);
SET32(16, RW(4) - RW(16));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(2, RW(2) - RW(16));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(2) + 15);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(5));
SET64(6, (s64)(s32)0x530000);
SET32(2, RSW(2) >> 4);
wr32(c, (RW(7) + -16724), RW(4));
wr32(c, (RW(6) + -16720), RW(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025CE18(Ctx *c) { /* func_0025CE18 */
ENTER(0x25ce18);
SET64(2, (s64)(s32)0x530000);
SET64(3, (s64)(s32)0x530000);
wr32(c, (RW(2) + -16724), RW(0));
wr32(c, (RW(3) + -16720), RW(0)); return;
}

void JP_F_0025CE30(Ctx *c) { /* func_0025CE30 */
ENTER(0x25ce30);
SET64(2, (s64)(s32)0x530000);
SET64(3, (s64)(s32)0x530000);
SET64(2, (s32)rd32(c, (RW(2) + -16720)));
SET64(5, RD(0) + RD(0));
{ int t = RSD(2) <= 0; SET64(4, (s32)rd32(c, (RW(3) + -16724))); if (t) goto L_0025CE74; }
SET64(6, RD(2) + RD(0));
SET64(3, (s8)rd8(c, (RW(4) + 0)));
L_0025CE50:;
SET64(2, RD(4) + RD(0));
{ int t = RD(3) == RD(0); SET32(4, RW(4) + 16); if (t) goto L_0025CE78; }
SET32(5, RW(5) + 1);
SET64(2, RSD(5) < RSD(6));
if (RD(2) != RD(0)) { SET64(3, (s8)rd8(c, (RW(4) + 0))); { POLL(); goto L_0025CE50; } }
L_0025CE74:;
SET64(2, RD(0) + RD(0));
L_0025CE78:;
 return;
}

void JP_F_0025CE80(Ctx *c) { /* func_0025CE80 */
ENTER(0x25ce80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(2, (s8)rd8(c, (RW(18) + 0)));
{ int t = RD(2) != RD(0); SET64(19, (s64)(s32)0x530000); if (t) goto L_0025CEB8; }
SET64(2, RD(0) + RD(0)); goto L_0025CEFC;
L_0025CEB0:;
SET64(2, RD(16) + RD(0)); goto L_0025CEFC;
L_0025CEB8:;
SET64(2, (s64)(s32)0x530000);
SET64(3, (s32)rd32(c, (RW(19) + -16720)));
SET64(17, RD(0) + RD(0));
{ int t = RSD(3) <= 0; SET64(16, (s32)rd32(c, (RW(2) + -16724))); if (t) goto L_0025CEF8; }
L_0025CED0:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x25cee0); SET32(6, RW(0) + 12); JP_F_0012A7C0(c);
{ int t = RD(2) == RD(0); SET32(17, RW(17) + 1); if (t) { POLL(); goto L_0025CEB0; } }
SET64(2, (s32)rd32(c, (RW(19) + -16720)));
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 16); if (t) { POLL(); goto L_0025CED0; } }
L_0025CEF8:;
SET64(2, RD(0) + RD(0));
L_0025CEFC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0025CF18(Ctx *c) { /* func_0025CF18 */
ENTER(0x25cf18);
SET64(2, (s64)(s32)0x530000);
SET32(29, RW(29) + -32);
SET64(3, (s32)rd32(c, (RW(2) + -16724)));
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_0025CF74; }
SET64(31, 0x25cf4c);  JP_F_0025CE30(c);
SET32(6, RW(0) + 12);
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + -2);
SET64(5, RD(17) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0025CF74; }
SET64(31, 0x25cf6c);  JP_F_0012A978(c);
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 12), RW(18));
L_0025CF74:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025CF90(Ctx *c) { /* func_0025CF90 */
ENTER(0x25cf90);
SET64(2, (s64)(s32)0x530000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + -16724)));
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0025CFD0; }
SET64(31, 0x25cfb8);  JP_F_0025CE80(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -3); if (t) goto L_0025CFD0; }
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(3));
L_0025CFD0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025CFE0(Ctx *c) { /* func_0025CFE0 */
ENTER(0x25cfe0);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + 3580)));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025D000; }
SET64(2, (s64)(s32)0x400000);
{ u32 t = RW(3); SET64(31, 0x25d000); SET64(4, (s32)rd32(c, (RW(2) + 3584))); rt_call(c, t); }
L_0025D000:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025D010(Ctx *c) { /* func_0025D010 */
ENTER(0x25d010);
SET32(29, RW(29) + -16);
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s64)(s32)0x400000);
SET32(4, RW(4) + 3584);
SET64(6, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0025CFE0(c); return; }
}

void JP_F_0025D038(Ctx *c) { /* func_0025D038 */
ENTER(0x25d038);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(2) + 3576);
wr64(c, (RW(29) + 16), RD(31));
SET64(3, (s32)rd32(c, (RW(17) + 3588)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(3) != RD(0); SET32(3, RW(17) + 3588); if (t) goto L_0025D0DC; }
SET64(2, (s64)(s32)0x530000);
SET32(3, RW(0) + 39);
SET32(2, RW(2) + -16456);
L_0025D070:;
SET32(3, RW(3) + -1);
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
{ int t = RSD(3) >= 0; SET32(2, RW(2) + 8); if (t) { POLL(); goto L_0025D070; } }
SET64(2, (s64)(s32)0x530000);
SET32(3, RW(0) + 31);
SET32(2, RW(2) + -16136);
SET32(2, RW(2) + 500);
L_0025D0A0:;
SET32(3, RW(3) + -1);
wr8(c, (RW(2) + 0), (u8)RW(0));
{ int t = RSD(3) >= 0; SET32(2, RW(2) + -16); if (t) { POLL(); goto L_0025D0A0; } }
SET64(16, (s64)(s32)0x530000);
SET64(5, RD(0) + RD(0));
SET32(16, RW(16) + -15624);
SET32(6, RW(0) + 9);
SET64(31, 0x25d0d4); SET64(4, RD(16) + RD(0)); JP_F_001273D0(c);
wr8(c, (RW(16) + 0), (u8)RW(0));
SET32(3, RW(17) + 3588);
L_0025D0DC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025D100(Ctx *c) { /* func_0025D100 */
ENTER(0x25d100);
SET32(29, RW(29) + -64);
SET64(3, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(3) + 3588);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_0025D1E0; }
SET64(2, (s64)(s32)0x530000);
SET64(17, RD(0) + RD(0));
SET32(20, RW(2) + -16456);
SET32(21, RW(20) + 4);
SET64(18, RD(20) + RD(0));
L_0025D150:;
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET32(19, RW(17) << 3);
{ int t = RD(2) == RD(0); SET32(17, RW(17) + 1); if (t) goto L_0025D178; }
SET64(2, (s32)rd32(c, (RW(2) + 20)));
SET64(16, RD(21) + RD(0));
{ u32 t = RW(2); SET64(31, 0x25d170); SET64(4, (s32)rd32(c, (RW(18) + 4))); rt_call(c, t); }
SET32(2, RW(19) + RW(16)); goto L_0025D180;
L_0025D178:;
SET32(16, RW(20) + 4);
SET32(2, RW(19) + RW(16));
L_0025D180:;
SET64(3, RSD(17) < (s64)40);
wr32(c, (RW(18) + 0), RW(0));
SET32(18, RW(18) + 8);
{ int t = RD(3) != RD(0); wr32(c, (RW(2) + 0), RW(0)); if (t) { POLL(); goto L_0025D150; } }
SET64(2, (s64)(s32)0x530000);
SET32(17, RW(0) + 31);
SET32(2, RW(2) + -16136);
SET32(2, RW(2) + 500);
L_0025D1A8:;
SET32(17, RW(17) + -1);
wr8(c, (RW(2) + 0), (u8)RW(0));
{ int t = RSD(17) >= 0; SET32(2, RW(2) + -16); if (t) { POLL(); goto L_0025D1A8; } }
SET64(16, (s64)(s32)0x530000);
SET64(5, RD(0) + RD(0));
SET32(16, RW(16) + -15624);
SET32(6, RW(0) + 9);
SET64(31, 0x25d1dc); SET64(4, RD(16) + RD(0)); JP_F_001273D0(c);
wr8(c, (RW(16) + 0), (u8)RW(0));
L_0025D1E0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0025D208(Ctx *c) { /* func_0025D208 */
ENTER(0x25d208);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + 3576);
SET64(6, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) != RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0025D238; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 8928);
SET32(29, RW(29) + 16); { JP_F_0025D010(c); return; }
L_0025D238:;
{ int t = RD(6) != RD(0);  if (t) goto L_0025D250; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 8968);
SET32(29, RW(29) + 16); { JP_F_0025D010(c); return; }
L_0025D250:;
SET64(31, 0x25d258);  JP_F_0025D298(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(2) + 4))); goto L_0025D278; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 9008);
SET32(29, RW(29) + 16); { JP_F_0025D010(c); return; }
L_0025D278:;
{ int t = RD(2) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_0025D28C; }
SET64(4, (s64)(s32)0x260000);
{ u32 t = RW(2); SET64(31, 0x25d28c); SET32(4, RW(4) + -12320); rt_call(c, t); }
L_0025D28C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025D298(Ctx *c) { /* func_0025D298 */
ENTER(0x25d298);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x25d2b8); SET64(17, RD(4) + RD(0)); JP_F_0025D408(c);
{ u32 t = RW(16); SET64(31, 0x25d2c0);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(18, RD(2) + RD(0));
SET64(31, 0x25d2d0); SET64(16, RD(0) + RD(0)); JP_F_0025D370(c);
{ int t = RD(2) != RD(0); SET64(2, RD(18) + RD(0)); if (t) goto L_0025D354; }
SET64(4, (s64)(s32)0x530000);
SET32(3, RW(4) + -16136);
SET64(2, (s8)rd8(c, (RW(3) + 4)));
{ int t = RD(2) == RD(0); SET32(3, RW(3) + 4); if (t) goto L_0025D314; }
SET32(16, RW(16) + 1);
L_0025D2F0:;
SET64(2, RSD(16) < (s64)32);
{ int t = RD(2) == RD(0); SET32(3, RW(3) + 16); if (t) goto L_0025D314; }
SET64(2, (s8)rd8(c, (RW(3) + 0)));
if (RD(2) != RD(0)) { SET32(16, RW(16) + 1); { POLL(); goto L_0025D2F0; } }
L_0025D314:;
SET32(3, RW(0) + 32);
{ int t = RD(16) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0025D354; }
SET32(2, RW(4) + -16136);
SET64(4, RD(17) + RD(0));
SET32(16, RW(16) << 4);
SET32(3, RW(2) + 4);
SET32(2, RW(16) + RW(2));
SET32(16, RW(16) + RW(3));
SET64(31, 0x25d340); wr32(c, (RW(2) + 0), RW(18)); JP_F_0012A4D8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x25d350); SET32(6, RW(2) + 1); JP_F_00127218(c);
SET64(2, RD(18) + RD(0));
L_0025D354:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025D370(Ctx *c) { /* func_0025D370 */
ENTER(0x25d370);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x25d39c); SET64(20, RD(4) + RD(0)); JP_F_0012A4D8(c);
SET64(19, RD(2) + RD(0));
SET64(2, (s64)(s32)0x530000);
SET32(18, RW(2) + -16132);
SET32(21, RW(18) + -4);
SET32(16, RW(17) << 4);
L_0025D3B0:;
SET32(17, RW(17) + 1);
SET64(4, RD(20) + RD(0));
SET32(5, RW(16) + RW(18));
SET64(31, 0x25d3c4); SET64(6, RD(19) + RD(0)); JP_F_0012A7C0(c);
{ int t = RD(2) != RD(0); SET64(3, RD(17) < (u64)(s64)32); if (t) goto L_0025D3D8; }
SET32(3, RW(16) + RW(21));
SET64(2, (s32)rd32(c, (RW(3) + 0))); goto L_0025D3E4;
L_0025D3D8:;
{ int t = RD(3) != RD(0); SET32(16, RW(17) << 4); if (t) { POLL(); goto L_0025D3B0; } }
SET64(2, RD(0) + RD(0));
L_0025D3E4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0025D408(Ctx *c) { /* func_0025D408 */
ENTER(0x25d408);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25d41c); SET64(16, RD(4) + RD(0)); JP_F_0012A4D8(c);
SET32(2, RW(2) + 1);
{ int t = RD(2) == RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_0025D458; }
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + RW(6));
L_0025D430:;
SET32(6, RW(6) + 1);
SET64(2, rd8(c, (RW(4) + 0)));
SET32(3, RW(2) + -32);
SET32(2, RW(2) + -97);
SET64(2, RD(2) < (u64)(s64)26);
{ int t = RD(2) == RD(0); SET64(5, RD(6) < RD(7)); if (t) goto L_0025D450; }
wr8(c, (RW(4) + 0), (u8)RW(3));
L_0025D450:;
{ int t = RD(5) != RD(0); SET32(4, RW(16) + RW(6)); if (t) { POLL(); goto L_0025D430; } }
L_0025D458:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025D468(Ctx *c) { /* func_0025D468 */
ENTER(0x25d468);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
{ int t = RD(18) != RD(0); wr64(c, (RW(29) + 48), RD(31)); if (t) goto L_0025D4D0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 9048);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); { JP_F_0025D010(c); return; }
L_0025D4C0:;
SET32(2, RW(21) + -4);
SET32(2, RW(19) + RW(2));
wr8(c, (RW(2) + 4), (u8)RW(0)); goto L_0025D518;
L_0025D4D0:;
SET64(31, 0x25d4d8); SET64(16, RD(0) + RD(0)); JP_F_0012A4D8(c);
SET64(20, RD(2) + RD(0));
SET64(2, (s64)(s32)0x530000);
SET32(17, RW(2) + -16132);
SET64(21, RD(17) + RD(0));
SET64(5, RD(17) + RD(0));
L_0025D4F0:;
SET32(17, RW(17) + 16);
SET64(4, RD(18) + RD(0));
SET64(6, RD(20) + RD(0));
SET32(19, RW(16) << 4);
SET64(31, 0x25d508); SET32(16, RW(16) + 1); JP_F_0012A7C0(c);
{ int t = RD(2) == RD(0); SET64(3, RD(16) < (u64)(s64)32); if (t) { POLL(); goto L_0025D4C0; } }
{ int t = RD(3) != RD(0); SET64(5, RD(17) + RD(0)); if (t) { POLL(); goto L_0025D4F0; } }
L_0025D518:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0025D540(Ctx *c) { /* func_0025D540 */
ENTER(0x25d540);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0025D578; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 9088);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0025D010(c); return; }
L_0025D578:;
SET64(31, 0x25d580);  JP_F_0012A4D8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0025D5A8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x530000);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
wr8(c, (RW(2) + -15624), (u8)RW(0));
SET32(29, RW(29) + 32); return;
L_0025D5A8:;
SET64(31, 0x25d5b0);  JP_F_0025D408(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x25d5bc); SET64(5, RD(17) + RD(0)); JP_F_0025D608(c);
SET64(4, (s64)(s32)0x530000);
SET32(3, RW(0) + 1);
SET32(4, RW(4) + -15624);
SET64(5, RD(16) + RD(0));
{ int t = RD(2) != RD(3); SET32(6, RW(17) + 1); if (t) goto L_0025D5E8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00127218(c); return; }
L_0025D5E8:;
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 9128);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0025D010(c); return; }
}

void JP_F_0025D608(Ctx *c) { /* func_0025D608 */
ENTER(0x25d608);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 32), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(2) + -16132);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(4) + RD(0));
SET64(5, RD(17) + RD(0));
L_0025D638:;
SET32(17, RW(17) + 16);
SET64(4, RD(19) + RD(0));
SET64(31, 0x25d648); SET64(6, RD(18) + RD(0)); JP_F_0012A7C0(c);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 1); if (t) goto L_0025D658; }
SET32(2, RW(0) + 1); goto L_0025D668;
L_0025D658:;
SET64(2, RSD(16) < (s64)32);
{ int t = RD(2) != RD(0); SET64(5, RD(17) + RD(0)); if (t) { POLL(); goto L_0025D638; } }
SET64(2, RD(0) + RD(0));
L_0025D668:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0025D688(Ctx *c) { /* func_0025D688 */
ENTER(0x25d688);
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -15624); return;
}

void JP_F_0025D698(Ctx *c) { /* func_0025D698 */
ENTER(0x25d698);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(2, (s8)rd8(c, (RW(17) + 0)));
{ int t = RD(2) != RD(0); SET64(19, RD(6) + RD(0)); if (t) goto L_0025D6D8; }
SET64(31, 0x25d6cc);  JP_F_0025DA28(c);
SET64(3, (s8)rd8(c, (RW(17) + 0)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0025D724; }
L_0025D6D8:;
SET64(5, RD(18) + RD(0));
SET64(31, 0x25d6e4); SET64(4, RD(17) + RD(0)); JP_F_0025EDF8(c);
SET64(31, 0x25d6ec); SET64(4, RD(17) + RD(0)); JP_F_0025D370(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0025D720; }
SET64(31, 0x25d700);  JP_F_0025DA28(c);
SET64(31, 0x25d708); SET64(4, RD(17) + RD(0)); JP_F_0025D370(c);
SET64(4, RD(18) + RD(0));
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(5, RD(19) + RD(0)); if (t) goto L_0025D724; }
SET64(31, 0x25d720);  JP_F_0012A3C0(c);
L_0025D720:;
SET64(2, RD(16) + RD(0));
L_0025D724:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0025D740(Ctx *c) { /* func_0025D740 */
ENTER(0x25d740);
SET32(29, RW(29) + -656);
wr64(c, (RW(29) + 616), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 632), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 640), RD(20));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 608), RD(16));
wr64(c, (RW(29) + 624), RD(18));
{ int t = RD(17) != RD(0); wr64(c, (RW(29) + 648), RD(31)); if (t) goto L_0025D778; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 9168); goto L_0025D83C;
L_0025D778:;
SET32(18, RW(29) + 304);
SET64(4, RD(29) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x25d78c); SET64(6, RD(17) + RD(0)); JP_F_0025D8E0(c);
SET64(2, (s8)rd8(c, (RW(29) + 304)));
{ int t = RD(2) != RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0025D7A0; }
SET32(4, RW(4) + 9168); goto L_0025D83C;
L_0025D7A0:;
SET64(31, 0x25d7a8);  JP_F_0025D868(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_0025D7C0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 9200); goto L_0025D83C;
L_0025D7C0:;
SET64(4, RD(29) + RD(0));
SET64(31, 0x25d7cc); SET64(5, RD(18) + RD(0)); JP_F_0025D698(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(16) + 0), RW(2)); if (t) goto L_0025D7E8; }
SET64(31, 0x25d7dc); SET64(4, RD(16) + RD(0)); JP_F_0025D8D0(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 9272); goto L_0025D83C;
L_0025D7E8:;
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(2) == RD(0); SET64(5, RD(19) + RD(0)); if (t) goto L_0025D808; }
SET64(4, RD(18) + RD(0));
{ u32 t = RW(2); SET64(31, 0x25d800); SET64(6, RD(20) + RD(0)); rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(2)); goto L_0025D820;
L_0025D808:;
SET64(31, 0x25d810); SET64(4, RD(16) + RD(0)); JP_F_0025D8D0(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 9304); goto L_0025D83C;
L_0025D820:;
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RD(2) != RD(0)) { SET64(2, RD(16) + RD(0)); goto L_0025D848; }
SET64(31, 0x25d834); SET64(4, RD(16) + RD(0)); JP_F_0025D8D0(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 9328);
L_0025D83C:;
SET64(31, 0x25d844);  JP_F_0025D010(c);
SET64(2, RD(0) + RD(0));
L_0025D848:;
SET64(16, rd64(c, (RW(29) + 608)));
SET64(17, rd64(c, (RW(29) + 616)));
SET64(18, rd64(c, (RW(29) + 624)));
SET64(19, rd64(c, (RW(29) + 632)));
SET64(20, rd64(c, (RW(29) + 640)));
SET64(31, rd64(c, (RW(29) + 648)));
SET32(29, RW(29) + 656); return;
}

void JP_F_0025D868(Ctx *c) { /* func_0025D868 */
ENTER(0x25d868);
SET64(5, (s64)(s32)0x530000);
SET32(2, RW(5) + -16456);
SET32(2, RW(2) + 4);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(3) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0025D8AC; }
SET64(3, RD(2) + RD(0));
SET32(4, RW(4) + 1);
L_0025D888:;
SET64(2, RSD(4) < (s64)40);
{ int t = RD(2) == RD(0); SET32(3, RW(3) + 8); if (t) goto L_0025D8AC; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
if (RD(2) != RD(0)) { SET32(4, RW(4) + 1); { POLL(); goto L_0025D888; } }
L_0025D8AC:;
SET32(3, RW(0) + 40);
{ int t = RD(4) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0025D8C4; }
SET32(3, RW(4) << 3);
SET32(2, RW(5) + -16456);
SET32(2, RW(3) + RW(2));
L_0025D8C4:;
 return;
}

void JP_F_0025D8D0(Ctx *c) { /* func_0025D8D0 */
ENTER(0x25d8d0);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0)); return;
}

void JP_F_0025D8E0(Ctx *c) { /* func_0025D8E0 */
ENTER(0x25d8e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
{ int t = RD(6) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0025DA10; }
SET64(3, (s8)rd8(c, (RW(6) + 0)));
SET32(2, RW(0) + 58);
{ int t = RD(3) == RD(2); SET64(8, RD(0) + RD(0)); if (t) goto L_0025D958; }
{ int t = RD(3) == RD(0); SET64(5, RD(6) + RD(0)); if (t) goto L_0025D968; }
SET32(7, RW(0) + 58);
SET64(4, rd8(c, (RW(5) + 0)));
L_0025D920:;
SET32(3, RW(16) + RW(8));
SET32(8, RW(8) + 1);
SET64(2, RSD(8) < (s64)297);
SET32(5, RW(6) + RW(8));
{ int t = RD(2) == RD(0); wr8(c, (RW(3) + 0), (u8)RW(4)); if (t) goto L_0025D95C; }
SET64(2, (s8)rd8(c, (RW(5) + 0)));
{ int t = RD(2) == RD(7);  if (t) goto L_0025D960; }
if (RD(2) != RD(0)) { SET64(4, rd8(c, (RW(5) + 0))); { POLL(); goto L_0025D920; } }
 goto L_0025D960;
L_0025D958:;
SET64(5, RD(6) + RD(0));
L_0025D95C:;
SET64(2, (s8)rd8(c, (RW(5) + 0)));
L_0025D960:;
{ int t = RD(2) != RD(0); SET32(3, RW(16) + RW(8)); if (t) goto L_0025D990; }
L_0025D968:;
SET32(2, RW(16) + RW(8));
SET64(4, RD(16) + RD(0));
SET64(31, 0x25d978); wr8(c, (RW(2) + 0), (u8)RW(0)); JP_F_0012A4D8(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x25d988); SET32(6, RW(2) + 1); JP_F_00127218(c);
wr8(c, (RW(16) + 0), (u8)RW(0)); goto L_0025DA10;
L_0025D990:;
SET32(8, RW(8) + 1);
SET32(2, RW(0) + 2);
{ int t = RD(8) != RD(2); wr8(c, (RW(3) + 0), (u8)RW(0)); if (t) goto L_0025D9A8; }
wr8(c, (RW(16) + 0), (u8)RW(0));
SET64(8, RD(0) + RD(0));
L_0025D9A8:;
SET64(2, RSD(8) < (s64)297);
{ int t = RD(2) == RD(0); SET64(5, RD(8) + RD(0)); if (t) goto L_0025D9EC; }
SET32(3, RW(6) + RW(8));
SET64(2, (s8)rd8(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET64(7, RD(17) + RD(0)); if (t) goto L_0025D9EC; }
SET64(2, rd8(c, (RW(3) + 0)));
L_0025D9C8:;
SET32(5, RW(5) + 1);
SET64(4, RSD(5) < (s64)297);
SET32(3, RW(6) + RW(5));
wr8(c, (RW(7) + 0), (u8)RW(2));
{ int t = RD(4) == RD(0); SET32(7, RW(7) + 1); if (t) goto L_0025D9EC; }
SET64(2, (s8)rd8(c, (RW(3) + 0)));
if (RD(2) != RD(0)) { SET64(2, rd8(c, (RW(3) + 0))); { POLL(); goto L_0025D9C8; } }
L_0025D9EC:;
SET32(2, RW(5) - RW(8));
SET64(4, RD(16) + RD(0));
SET32(2, RW(17) + RW(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
wr8(c, (RW(2) + 0), (u8)RW(0));
SET32(29, RW(29) + 32); { JP_F_0025D408(c); return; }
L_0025DA10:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025DA28(Ctx *c) { /* func_0025DA28 */
ENTER(0x25da28);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x530000);
SET32(16, RW(16) + -15624);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25da4c); SET64(4, RD(16) + RD(0)); JP_F_0012A4D8(c);
SET32(6, RW(2) + 1);
SET64(2, (s8)rd8(c, (RW(16) + 0)));
SET64(4, RD(17) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_0025DA78; }
wr8(c, (RW(17) + 0), (u8)RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
L_0025DA78:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00127218(c); return; }
}

void JP_F_0025DA90(Ctx *c) { /* func_0025DA90 */
ENTER(0x25da90);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0025DAC0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 9352);
SET32(29, RW(29) + 16); { JP_F_0025D010(c); return; }
L_0025DAC0:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 20)));
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025DAF0; }
{ u32 t = RW(2); SET64(31, 0x25dad8); SET64(4, (s32)rd32(c, (RW(16) + 4))); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0025D8D0(c); return; }
L_0025DAF0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 9384);
SET32(29, RW(29) + 16); { JP_F_0025D010(c); return; }
}

void JP_F_0025DB08(Ctx *c) { /* func_0025DB08 */
ENTER(0x25db08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0025DB30; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25db24); SET32(4, RW(4) + 9408); JP_F_0025D010(c);
SET64(2, RD(0) + RD(0)); goto L_0025DB60;
L_0025DB30:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 28)));
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025DB50; }
{ u32 t = RW(2); SET64(31, 0x25db48); SET64(4, (s32)rd32(c, (RW(4) + 4))); rt_call(c, t); }
SET64(16, RD(2) + RD(0)); goto L_0025DB5C;
L_0025DB50:;
SET64(16, RD(0) + RD(0));
SET64(31, 0x25db5c); SET32(4, RW(4) + 9440); JP_F_0025D010(c);
L_0025DB5C:;
SET64(2, RD(16) + RD(0));
L_0025DB60:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025DB70(Ctx *c) { /* func_0025DB70 */
ENTER(0x25db70);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0025DB98; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25db8c); SET32(4, RW(4) + 9464); JP_F_0025D010(c);
SET64(2, RD(0) + RD(0)); goto L_0025DBC8;
L_0025DB98:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025DBB8; }
{ u32 t = RW(2); SET64(31, 0x25dbb0); SET64(4, (s32)rd32(c, (RW(4) + 4))); rt_call(c, t); }
SET64(16, RD(2) + RD(0)); goto L_0025DBC4;
L_0025DBB8:;
SET64(16, RD(0) + RD(0));
SET64(31, 0x25dbc4); SET32(4, RW(4) + 9496); JP_F_0025D010(c);
L_0025DBC4:;
SET64(2, RD(16) + RD(0));
L_0025DBC8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025DBD8(Ctx *c) { /* func_0025DBD8 */
ENTER(0x25dbd8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0025DC00; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25dbf4); SET32(4, RW(4) + 9520); JP_F_0025D010(c);
SET64(2, RD(0) + RD(0)); goto L_0025DC30;
L_0025DC00:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025DC20; }
{ u32 t = RW(2); SET64(31, 0x25dc18); SET64(4, (s32)rd32(c, (RW(4) + 4))); rt_call(c, t); }
SET64(16, RD(2) + RD(0)); goto L_0025DC2C;
L_0025DC20:;
SET64(16, RD(0) + RD(0));
SET64(31, 0x25dc2c); SET32(4, RW(4) + 9552); JP_F_0025D010(c);
L_0025DC2C:;
SET64(2, RD(16) + RD(0));
L_0025DC30:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025DC40(Ctx *c) { /* func_0025DC40 */
ENTER(0x25dc40);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0025DC68; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25dc60); SET32(4, RW(4) + 9576); JP_F_0025D010(c);
SET64(2, RD(0) + RD(0)); goto L_0025DC94;
L_0025DC68:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 36)));
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025DC88; }
{ u32 t = RW(2); SET64(31, 0x25dc80); SET64(4, (s32)rd32(c, (RW(4) + 4))); rt_call(c, t); }
SET64(16, RD(2) + RD(0)); goto L_0025DC90;
L_0025DC88:;
SET64(31, 0x25dc90); SET32(4, RW(4) + 9608); JP_F_0025D010(c);
L_0025DC90:;
SET64(2, RD(16) + RD(0));
L_0025DC94:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025DCA8(Ctx *c) { /* func_0025DCA8 */
ENTER(0x25dca8);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025DCC8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 9632);
SET32(29, RW(29) + 16); { JP_F_0025D010(c); return; }
L_0025DCC8:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 40)));
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025DCF0; }
{ u32 t = RW(2); SET64(31, 0x25dce0); SET64(4, (s32)rd32(c, (RW(4) + 4))); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
L_0025DCF0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 9664);
SET32(29, RW(29) + 16); { JP_F_0025D010(c); return; }
}

void JP_F_0025DD00(Ctx *c) { /* func_0025DD00 */
ENTER(0x25dd00);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 16), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + -16136);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 31);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
L_0025DD20:;
{ int t = RD(2) == RD(0); SET32(16, RW(16) + 16); if (t) goto L_0025DD3C; }
SET64(2, (s32)rd32(c, (RW(2) + 0)));
if (RD(2) == RD(0)) { SET32(17, RW(17) + -1); goto L_0025DD40; }
{ u32 t = RW(2); SET64(31, 0x25dd3c);  rt_call(c, t); }
L_0025DD3C:;
SET32(17, RW(17) + -1);
L_0025DD40:;
if (RSD(17) >= 0) { SET64(2, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_0025DD20; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025DD60(Ctx *c) { /* func_0025DD60 */
ENTER(0x25dd60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 3);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0025DD88; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25dd80); SET32(4, RW(4) + 9696); JP_F_0025D010(c);
SET32(2, RW(0) + 3); goto L_0025DDB4;
L_0025DD88:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 44)));
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025DDA8; }
{ u32 t = RW(2); SET64(31, 0x25dda0); SET64(4, (s32)rd32(c, (RW(4) + 4))); rt_call(c, t); }
SET64(16, RD(2) + RD(0)); goto L_0025DDB0;
L_0025DDA8:;
SET64(31, 0x25ddb0); SET32(4, RW(4) + 9728); JP_F_0025D010(c);
L_0025DDB0:;
SET64(2, RD(16) + RD(0));
L_0025DDB4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025DDC8(Ctx *c) { /* func_0025DDC8 */
ENTER(0x25ddc8);
SET32(29, RW(29) + -640);
wr64(c, (RW(29) + 608), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 616), RD(17));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 624), RD(31)); if (t) goto L_0025DDF0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 9760); goto L_0025DE64;
L_0025DDF0:;
SET32(17, RW(29) + 304);
SET64(4, RD(29) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x25de04); SET64(6, RD(16) + RD(0)); JP_F_0025D8E0(c);
SET64(2, (s8)rd8(c, (RW(29) + 304)));
{ int t = RD(2) != RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_0025DE20; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 9760); goto L_0025DE64;
L_0025DE20:;
SET64(4, RD(29) + RD(0));
SET64(31, 0x25de2c); SET64(5, RD(17) + RD(0)); JP_F_0025D698(c);
SET64(16, RD(2) + RD(0));
if (RD(16) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 8))); goto L_0025DE48; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25de44); SET32(4, RW(4) + 9840); JP_F_0025D010(c);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
L_0025DE48:;
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025DE60; }
{ u32 t = RW(2); SET64(31, 0x25de58); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 608))); goto L_0025DE74;
L_0025DE60:;
SET32(4, RW(4) + 9880);
L_0025DE64:;
SET64(31, 0x25de6c);  JP_F_0025D010(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 608)));
L_0025DE74:;
SET64(17, rd64(c, (RW(29) + 616)));
SET64(31, rd64(c, (RW(29) + 624)));
SET32(29, RW(29) + 640); return;
}

void JP_F_0025DE88(Ctx *c) { /* func_0025DE88 */
ENTER(0x25de88);
SET32(29, RW(29) + -640);
wr64(c, (RW(29) + 608), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 624), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 616), RD(17));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 632), RD(31)); if (t) goto L_0025DEB8; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 9912); goto L_0025DF30;
L_0025DEB8:;
SET32(17, RW(29) + 304);
SET64(4, RD(29) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x25decc); SET64(6, RD(16) + RD(0)); JP_F_0025D8E0(c);
SET64(2, (s8)rd8(c, (RW(29) + 304)));
{ int t = RD(2) != RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_0025DEE8; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 9912); goto L_0025DF30;
L_0025DEE8:;
SET64(4, RD(29) + RD(0));
SET64(31, 0x25def4); SET64(5, RD(17) + RD(0)); JP_F_0025D698(c);
SET64(16, RD(2) + RD(0));
if (RD(16) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 92))); goto L_0025DF10; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25df0c); SET32(4, RW(4) + 10000); JP_F_0025D010(c);
SET64(2, (s32)rd32(c, (RW(16) + 92)));
L_0025DF10:;
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0025DF28; }
{ u32 t = RW(2); SET64(31, 0x25df20); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 608))); goto L_0025DF40;
L_0025DF28:;
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 10040);
L_0025DF30:;
SET64(31, 0x25df38);  JP_F_0025D010(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 608)));
L_0025DF40:;
SET64(17, rd64(c, (RW(29) + 616)));
SET64(18, rd64(c, (RW(29) + 624)));
SET64(31, rd64(c, (RW(29) + 632)));
SET32(29, RW(29) + 640); return;
}

void JP_F_0025DF58(Ctx *c) { /* func_0025DF58 */
ENTER(0x25df58);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025DF78; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25df70); SET32(4, RW(4) + 10072); JP_F_0025D010(c);
SET32(2, RW(0) + -1); goto L_0025DFA8;
L_0025DF78:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s64)(s32)0x7fff0000);
SET64(2, (s32)rd32(c, (RW(2) + 96)));
{ int t = RD(2) == RD(0); SET64(3, RD(3) | 0xffff); if (t) goto L_0025DFA4; }
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET32(5, RW(0) + 300);
SET64(6, RD(0) + RD(0));
{ u32 t = RW(2); SET64(31, 0x25dfa0); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, RD(2) + RD(0));
L_0025DFA4:;
SET64(2, RD(3) + RD(0));
L_0025DFA8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025DFB8(Ctx *c) { /* func_0025DFB8 */
ENTER(0x25dfb8);
SET32(29, RW(29) + -368);
wr64(c, (RW(29) + 304), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 336), RD(20));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 312), RD(17));
wr64(c, (RW(29) + 320), RD(18));
wr64(c, (RW(29) + 328), RD(19));
wr64(c, (RW(29) + 344), RD(21));
wr64(c, (RW(29) + 352), RD(22));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 360), RD(31)); if (t) goto L_0025DFF4; }
SET64(2, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_0025E018; }
L_0025DFF4:;
SET64(31, 0x25dffc); SET64(4, RD(29) + RD(0)); JP_F_0025DA28(c);
SET64(2, (s8)rd8(c, (RW(29) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_0025E030; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 10120); goto L_0025E0B0;
L_0025E018:;
SET64(31, 0x25e020);  JP_F_0012A4D8(c);
SET64(5, RD(16) + RD(0));
SET64(4, RD(29) + RD(0));
SET64(31, 0x25e030); SET32(6, RW(2) + 1); JP_F_00127218(c);
L_0025E030:;
SET64(31, 0x25e038); SET64(4, RD(29) + RD(0)); JP_F_0012A4D8(c);
SET64(18, RD(2) + RD(0));
if (RSD(18) > 0) { SET64(2, (s64)(s32)0x530000); goto L_0025E050; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 10120); goto L_0025E0B0;
L_0025E050:;
SET64(17, RD(0) + RD(0));
SET32(19, RW(2) + -16132);
SET64(22, (s64)(s32)0x4b0000);
SET32(21, RW(19) + -4);
SET32(16, RW(17) << 4);
L_0025E068:;
SET32(17, RW(17) + 1);
SET32(5, RW(16) + RW(19));
SET32(16, RW(16) + RW(21));
SET64(4, RD(29) + RD(0));
SET64(31, 0x25e080); SET64(6, RD(18) + RD(0)); JP_F_0012A7C0(c);
if (RD(2) != RD(0)) { SET64(2, RSD(17) < (s64)32); goto L_0025E0C4; }
SET64(16, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(16) == RD(0); SET32(4, RW(22) + 10160); if (t) goto L_0025E0B0; }
SET64(16, (s32)rd32(c, (RW(16) + 12)));
if (RD(16) == RD(0)) { SET64(2, RSD(17) < (s64)32); goto L_0025E0C4; }
{ u32 t = RW(16); SET64(31, 0x25e0a8);  rt_call(c, t); }
SET64(20, RD(2) + RD(0)); goto L_0025E0C0;
L_0025E0B0:;
SET64(31, 0x25e0b8);  JP_F_0025D010(c);
SET64(2, RD(0) + RD(0)); goto L_0025E0D0;
L_0025E0C0:;
SET64(2, RSD(17) < (s64)32);
L_0025E0C4:;
{ int t = RD(2) != RD(0); SET32(16, RW(17) << 4); if (t) { POLL(); goto L_0025E068; } }
SET64(2, RD(20) + RD(0));
L_0025E0D0:;
SET64(16, rd64(c, (RW(29) + 304)));
SET64(17, rd64(c, (RW(29) + 312)));
SET64(18, rd64(c, (RW(29) + 320)));
SET64(19, rd64(c, (RW(29) + 328)));
SET64(20, rd64(c, (RW(29) + 336)));
SET64(21, rd64(c, (RW(29) + 344)));
SET64(22, rd64(c, (RW(29) + 352)));
SET64(31, rd64(c, (RW(29) + 360)));
SET32(29, RW(29) + 368); return;
}

void JP_F_0025E0F8(Ctx *c) { /* func_0025E0F8 */
ENTER(0x25e0f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0025E120; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25e118); SET32(4, RW(4) + 10192); JP_F_0025D010(c);
SET64(2, RD(0) + RD(0)); goto L_0025E14C;
L_0025E120:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 48)));
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025E140; }
{ u32 t = RW(2); SET64(31, 0x25e138); SET64(4, (s32)rd32(c, (RW(4) + 4))); rt_call(c, t); }
SET64(16, RD(2) + RD(0)); goto L_0025E148;
L_0025E140:;
SET64(31, 0x25e148); SET32(4, RW(4) + 10224); JP_F_0025D010(c);
L_0025E148:;
SET64(2, RD(16) + RD(0));
L_0025E14C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025E160(Ctx *c) { /* func_0025E160 */
ENTER(0x25e160);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025E180; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 10256);
SET32(29, RW(29) + 16); { JP_F_0025D010(c); return; }
L_0025E180:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 52)));
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025E1A8; }
{ u32 t = RW(2); SET64(31, 0x25e198); SET64(4, (s32)rd32(c, (RW(4) + 4))); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
L_0025E1A8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 10288);
SET32(29, RW(29) + 16); { JP_F_0025D010(c); return; }
}

void JP_F_0025E1B8(Ctx *c) { /* func_0025E1B8 */
ENTER(0x25e1b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0025E1E0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25e1d8); SET32(4, RW(4) + 10320); JP_F_0025D010(c);
SET64(2, RD(0) + RD(0)); goto L_0025E20C;
L_0025E1E0:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 56)));
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025E200; }
{ u32 t = RW(2); SET64(31, 0x25e1f8); SET64(4, (s32)rd32(c, (RW(4) + 4))); rt_call(c, t); }
SET64(16, RD(2) + RD(0)); goto L_0025E208;
L_0025E200:;
SET64(31, 0x25e208); SET32(4, RW(4) + 10352); JP_F_0025D010(c);
L_0025E208:;
SET64(2, RD(16) + RD(0));
L_0025E20C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025E220(Ctx *c) { /* func_0025E220 */
ENTER(0x25e220);
SET32(29, RW(29) + -640);
wr64(c, (RW(29) + 608), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 616), RD(17));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 624), RD(31)); if (t) goto L_0025E248; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 10384); goto L_0025E2BC;
L_0025E248:;
SET32(17, RW(29) + 304);
SET64(4, RD(29) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x25e25c); SET64(6, RD(16) + RD(0)); JP_F_0025D8E0(c);
SET64(2, (s8)rd8(c, (RW(29) + 304)));
{ int t = RD(2) != RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_0025E278; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 10384); goto L_0025E2BC;
L_0025E278:;
SET64(4, RD(29) + RD(0));
SET64(31, 0x25e284); SET64(5, RD(17) + RD(0)); JP_F_0025D698(c);
SET64(16, RD(2) + RD(0));
if (RD(16) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 60))); goto L_0025E2A0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25e29c); SET32(4, RW(4) + 10464); JP_F_0025D010(c);
SET64(2, (s32)rd32(c, (RW(16) + 60)));
L_0025E2A0:;
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025E2B8; }
{ u32 t = RW(2); SET64(31, 0x25e2b0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 608))); goto L_0025E2CC;
L_0025E2B8:;
SET32(4, RW(4) + 10504);
L_0025E2BC:;
SET64(31, 0x25e2c4);  JP_F_0025D010(c);
SET32(2, RW(0) + -1);
SET64(16, rd64(c, (RW(29) + 608)));
L_0025E2CC:;
SET64(17, rd64(c, (RW(29) + 616)));
SET64(31, rd64(c, (RW(29) + 624)));
SET32(29, RW(29) + 640); return;
}

void JP_F_0025E2E0(Ctx *c) { /* func_0025E2E0 */
ENTER(0x25e2e0);
SET32(29, RW(29) + -640);
wr64(c, (RW(29) + 608), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 616), RD(17));
SET32(17, RW(29) + 304);
SET64(4, RD(29) + RD(0));
SET64(6, RD(16) + RD(0));
wr64(c, (RW(29) + 624), RD(31));
SET64(31, 0x25e308); SET64(5, RD(17) + RD(0)); JP_F_0025D8E0(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(2, (s8)rd8(c, (RW(29) + 304)));
SET32(4, RW(4) + 10536);
SET64(6, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0025E364; }
SET64(31, 0x25e328); SET64(4, RD(29) + RD(0)); JP_F_0025D698(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET32(4, RW(4) + 10616); if (t) goto L_0025E340; }
SET64(31, 0x25e340);  JP_F_0025D010(c);
L_0025E340:;
SET64(2, (s32)rd32(c, (RW(16) + 64)));
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025E360; }
{ u32 t = RW(2); SET64(31, 0x25e354); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 608))); goto L_0025E374;
L_0025E360:;
SET32(4, RW(4) + 10656);
L_0025E364:;
SET64(31, 0x25e36c);  JP_F_0025D010(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 608)));
L_0025E374:;
SET64(17, rd64(c, (RW(29) + 616)));
SET64(31, rd64(c, (RW(29) + 624)));
SET32(29, RW(29) + 640); return;
}

void JP_F_0025E388(Ctx *c) { /* func_0025E388 */
ENTER(0x25e388);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 72), RD(21));
wr64(c, (RW(29) + 80), RD(22));
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 88), RD(31));
SET64(31, 0x25e3bc); SET64(20, RD(0) + RD(0)); JP_F_0012A4D8(c);
SET64(21, RD(2) + RD(0));
SET64(2, (s64)(s32)0x530000);
SET32(19, RW(2) + -16132);
SET32(22, RW(19) + -4);
SET32(16, RW(17) << 4);
L_0025E3D0:;
SET32(17, RW(17) + 1);
SET64(4, RD(18) + RD(0));
SET32(5, RW(16) + RW(19));
SET64(6, RD(21) + RD(0));
SET64(31, 0x25e3e8); SET32(16, RW(16) + RW(22)); JP_F_0012A7C0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_0025E460; }
SET64(31, 0x25e3f8); SET64(16, (s32)rd32(c, (RW(16) + 0))); JP_F_0025EDA8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0025E438; }
{ int t = RD(16) == RD(0); SET64(2, RSD(17) < (s64)32); if (t) goto L_0025E464; }
SET64(2, (s32)rd32(c, (RW(16) + 96)));
{ int t = RD(2) == RD(0); SET64(2, RSD(17) < (s64)32); if (t) goto L_0025E464; }
wr32(c, (RW(29) + 4), RW(18));
SET64(4, RD(29) + RD(0));
SET32(5, RW(0) + 4);
SET64(6, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 96)));
{ u32 t = RW(2); SET64(31, 0x25e430); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(20, RD(2) + RD(0)); goto L_0025E46C;
L_0025E438:;
{ int t = RD(16) == RD(0); SET64(2, RSD(17) < (s64)32); if (t) goto L_0025E464; }
SET64(16, (s32)rd32(c, (RW(16) + 68)));
{ int t = RD(16) == RD(0);  if (t) goto L_0025E464; }
{ u32 t = RW(16); SET64(31, 0x25e454);  rt_call(c, t); }
SET64(20, RD(2) + RD(0)); goto L_0025E46C;
L_0025E460:;
SET64(2, RSD(17) < (s64)32);
L_0025E464:;
{ int t = RD(2) != RD(0); SET32(16, RW(17) << 4); if (t) { POLL(); goto L_0025E3D0; } }
L_0025E46C:;
SET64(2, RD(20) + RD(0));
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(21, rd64(c, (RW(29) + 72)));
SET64(22, rd64(c, (RW(29) + 80)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); return;
}

void JP_F_0025E498(Ctx *c) { /* func_0025E498 */
ENTER(0x25e498);
SET32(29, RW(29) + -656);
wr64(c, (RW(29) + 608), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 616), RD(17));
SET32(17, RW(29) + 304);
wr64(c, (RW(29) + 624), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 632), RD(19));
SET64(19, RD(6) + RD(0));
SET64(4, RD(29) + RD(0));
SET64(5, RD(17) + RD(0));
wr64(c, (RW(29) + 640), RD(20));
wr64(c, (RW(29) + 648), RD(31));
SET64(31, 0x25e4d4); SET64(6, RD(16) + RD(0)); JP_F_0025D8E0(c);
SET64(2, (s8)rd8(c, (RW(29) + 0)));
SET64(20, RD(0) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_0025E510; }
SET64(31, 0x25e4ec);  JP_F_0025DA28(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(2, (s8)rd8(c, (RW(29) + 0)));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 10576); if (t) goto L_0025E510; }
SET64(31, 0x25e504);  JP_F_0025D010(c);
SET64(2, RD(0) + RD(0)); goto L_0025E54C;
L_0025E510:;
SET64(4, RD(29) + RD(0));
SET64(31, 0x25e51c); SET64(5, RD(17) + RD(0)); JP_F_0025EDF8(c);
SET64(31, 0x25e524); SET64(4, RD(29) + RD(0)); JP_F_0025D370(c);
if (RD(2) == RD(0)) { SET64(2, RD(20) + RD(0)); goto L_0025E54C; }
SET64(2, (s32)rd32(c, (RW(2) + 72)));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0025E548; }
SET64(5, RD(18) + RD(0));
{ u32 t = RW(2); SET64(31, 0x25e544); SET64(6, RD(19) + RD(0)); rt_call(c, t); }
SET64(20, RD(2) + RD(0));
L_0025E548:;
SET64(2, RD(20) + RD(0));
L_0025E54C:;
SET64(16, rd64(c, (RW(29) + 608)));
SET64(17, rd64(c, (RW(29) + 616)));
SET64(18, rd64(c, (RW(29) + 624)));
SET64(19, rd64(c, (RW(29) + 632)));
SET64(20, rd64(c, (RW(29) + 640)));
SET64(31, rd64(c, (RW(29) + 648)));
SET32(29, RW(29) + 656); return;
}

void JP_F_0025E570(Ctx *c) { /* func_0025E570 */
ENTER(0x25e570);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025E590; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25e588); SET32(4, RW(4) + 10688); JP_F_0025D010(c);
SET64(2, RD(0) + RD(0)); goto L_0025E5BC;
L_0025E590:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 76)));
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025E5B0; }
{ u32 t = RW(2); SET64(31, 0x25e5a8); SET64(4, (s32)rd32(c, (RW(4) + 4))); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0))); goto L_0025E5C0;
L_0025E5B0:;
SET64(31, 0x25e5b8); SET32(4, RW(4) + 10728); JP_F_0025D010(c);
SET64(2, RD(0) + RD(0));
L_0025E5BC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_0025E5C0:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0025E5C8(Ctx *c) { /* func_0025E5C8 */
ENTER(0x25e5c8);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 96), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 104), RD(17));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 112), RD(31)); if (t) goto L_0025E5F0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 10768); goto L_0025E664;
L_0025E5F0:;
SET32(17, RW(29) + 48);
SET64(4, RD(29) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x25e604); SET64(6, RD(16) + RD(0)); JP_F_0025D8E0(c);
SET64(2, (s8)rd8(c, (RW(29) + 48)));
{ int t = RD(2) != RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_0025E620; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 10768); goto L_0025E664;
L_0025E620:;
SET64(4, RD(29) + RD(0));
SET64(31, 0x25e62c); SET64(5, RD(17) + RD(0)); JP_F_0025D698(c);
SET64(16, RD(2) + RD(0));
if (RD(16) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 80))); goto L_0025E648; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25e644); SET32(4, RW(4) + 10848); JP_F_0025D010(c);
SET64(2, (s32)rd32(c, (RW(16) + 80)));
L_0025E648:;
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025E660; }
{ u32 t = RW(2); SET64(31, 0x25e658); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 96))); goto L_0025E674;
L_0025E660:;
SET32(4, RW(4) + 10880);
L_0025E664:;
SET64(31, 0x25e66c);  JP_F_0025D010(c);
SET32(2, RW(0) + -1);
SET64(16, rd64(c, (RW(29) + 96)));
L_0025E674:;
SET64(17, rd64(c, (RW(29) + 104)));
SET64(31, rd64(c, (RW(29) + 112)));
SET32(29, RW(29) + 128); return;
}

void JP_F_0025E688(Ctx *c) { /* func_0025E688 */
ENTER(0x25e688);
SET32(29, RW(29) + -640);
wr64(c, (RW(29) + 608), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 616), RD(17));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 624), RD(31)); if (t) goto L_0025E6B0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 10912); goto L_0025E724;
L_0025E6B0:;
SET32(17, RW(29) + 304);
SET64(4, RD(29) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x25e6c4); SET64(6, RD(16) + RD(0)); JP_F_0025D8E0(c);
SET64(2, (s8)rd8(c, (RW(29) + 304)));
{ int t = RD(2) != RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_0025E6E0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 10912); goto L_0025E724;
L_0025E6E0:;
SET64(4, RD(29) + RD(0));
SET64(31, 0x25e6ec); SET64(5, RD(17) + RD(0)); JP_F_0025D698(c);
SET64(16, RD(2) + RD(0));
if (RD(16) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 84))); goto L_0025E708; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25e704); SET32(4, RW(4) + 10992); JP_F_0025D010(c);
SET64(2, (s32)rd32(c, (RW(16) + 84)));
L_0025E708:;
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025E720; }
{ u32 t = RW(2); SET64(31, 0x25e718); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 608))); goto L_0025E734;
L_0025E720:;
SET32(4, RW(4) + 11032);
L_0025E724:;
SET64(31, 0x25e72c);  JP_F_0025D010(c);
SET32(2, RW(0) + -1);
SET64(16, rd64(c, (RW(29) + 608)));
L_0025E734:;
SET64(17, rd64(c, (RW(29) + 616)));
SET64(31, rd64(c, (RW(29) + 624)));
SET32(29, RW(29) + 640); return;
}

void JP_F_0025E748(Ctx *c) { /* func_0025E748 */
ENTER(0x25e748);
SET32(29, RW(29) + -640);
wr64(c, (RW(29) + 608), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 616), RD(17));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 624), RD(31)); if (t) goto L_0025E770; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 11064); goto L_0025E7E4;
L_0025E770:;
SET32(17, RW(29) + 304);
SET64(4, RD(29) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x25e784); SET64(6, RD(16) + RD(0)); JP_F_0025D8E0(c);
SET64(2, (s8)rd8(c, (RW(29) + 304)));
{ int t = RD(2) != RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_0025E7A0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 11064); goto L_0025E7E4;
L_0025E7A0:;
SET64(4, RD(29) + RD(0));
SET64(31, 0x25e7ac); SET64(5, RD(17) + RD(0)); JP_F_0025D698(c);
SET64(16, RD(2) + RD(0));
if (RD(16) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 88))); goto L_0025E7C8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25e7c4); SET32(4, RW(4) + 11144); JP_F_0025D010(c);
SET64(2, (s32)rd32(c, (RW(16) + 88)));
L_0025E7C8:;
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025E7E0; }
{ u32 t = RW(2); SET64(31, 0x25e7d8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 608))); goto L_0025E7F4;
L_0025E7E0:;
SET32(4, RW(4) + 11184);
L_0025E7E4:;
SET64(31, 0x25e7ec);  JP_F_0025D010(c);
SET32(2, RW(0) + -1);
SET64(16, rd64(c, (RW(29) + 608)));
L_0025E7F4:;
SET64(17, rd64(c, (RW(29) + 616)));
SET64(31, rd64(c, (RW(29) + 624)));
SET32(29, RW(29) + 640); return;
}

void JP_F_0025E808(Ctx *c) { /* func_0025E808 */
ENTER(0x25e808);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025E828; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25e820); SET32(4, RW(4) + 11216); JP_F_0025D010(c);
SET64(2, RD(0) + RD(0)); goto L_0025E880;
L_0025E828:;
SET64(2, (s64)(s32)0x530000);
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(2) + -16136);
SET64(6, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) == RD(4); SET64(5, RD(0) + RD(0)); if (t) goto L_0025E874; }
SET64(7, RD(3) + RD(0));
SET32(6, RW(6) + 1);
L_0025E850:;
SET32(5, RW(6) << 4);
SET64(2, RSD(6) < (s64)32);
{ int t = RD(2) == RD(0); SET32(3, RW(5) + RW(7)); if (t) goto L_0025E874; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
if (RD(2) != RD(4)) { SET32(6, RW(6) + 1); { POLL(); goto L_0025E850; } }
L_0025E874:;
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -16132);
SET32(2, RW(2) + RW(5));
L_0025E880:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025E890(Ctx *c) { /* func_0025E890 */
ENTER(0x25e890);
{ int t = RD(4) != RD(0); SET64(2, (s64)(s32)0x400000); if (t) goto L_0025E8A8; }
SET64(3, (s64)(s32)0x400000);
wr32(c, (RW(2) + 3580), RW(0));
wr32(c, (RW(3) + 3584), RW(0)); return;
L_0025E8A8:;
SET64(3, (s64)(s32)0x400000);
wr32(c, (RW(2) + 3580), RW(4));
wr32(c, (RW(3) + 3584), RW(5)); return;
}

void JP_F_0025E8B8(Ctx *c) { /* func_0025E8B8 */
ENTER(0x25e8b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0025E8E0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25e8d8); SET32(4, RW(4) + 11248); JP_F_0025D010(c);
SET64(2, RD(0) + RD(0)); goto L_0025E90C;
L_0025E8E0:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 96)));
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025E900; }
{ u32 t = RW(2); SET64(31, 0x25e8f8); SET64(4, (s32)rd32(c, (RW(4) + 4))); rt_call(c, t); }
SET64(16, RD(2) + RD(0)); goto L_0025E908;
L_0025E900:;
SET64(31, 0x25e908); SET32(4, RW(4) + 11280); JP_F_0025D010(c);
L_0025E908:;
SET64(2, RD(16) + RD(0));
L_0025E90C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025E920(Ctx *c) { /* func_0025E920 */
ENTER(0x25e920);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0025E948; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25e940); SET32(4, RW(4) + 11312); JP_F_0025D010(c);
SET64(2, RD(0) + RD(0)); goto L_0025E974;
L_0025E948:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 100)));
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0025E968; }
{ u32 t = RW(2); SET64(31, 0x25e960); SET64(4, (s32)rd32(c, (RW(4) + 4))); rt_call(c, t); }
SET64(16, RD(2) + RD(0)); goto L_0025E970;
L_0025E968:;
SET64(31, 0x25e970); SET32(4, RW(4) + 11344); JP_F_0025D010(c);
L_0025E970:;
SET64(2, RD(16) + RD(0));
L_0025E974:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025E988(Ctx *c) { /* func_0025E988 */
ENTER(0x25e988);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 48), RD(31)); if (t) goto L_0025E9B0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 11376); goto L_0025E9EC;
L_0025E9B0:;
{ int t = RD(16) != RD(0);  if (t) goto L_0025E9C8; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 11416); goto L_0025E9EC;
L_0025E9C8:;
SET64(31, 0x25e9d0);  JP_F_0025D370(c);
SET64(5, RD(0) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(4, RD(29) + RD(0));
{ int t = RD(17) != RD(0); SET32(6, RW(0) + 20); if (t) goto L_0025EA00; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 11464);
L_0025E9EC:;
SET64(31, 0x25e9f4);  JP_F_0025D010(c);
SET32(2, RW(0) + -1); goto L_0025EA30;
L_0025EA00:;
SET64(31, 0x25ea08);  JP_F_001273D0(c);
SET32(2, RW(0) + -1);
wr32(c, (RW(29) + 0), RW(16));
SET64(4, RD(29) + RD(0));
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(17) + 96)));
{ int t = RD(3) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_0025EA30; }
{ u32 t = RW(3); SET64(31, 0x25ea30);  rt_call(c, t); }
L_0025EA30:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0025EA48(Ctx *c) { /* func_0025EA48 */
ENTER(0x25ea48);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0025EA50(Ctx *c) { /* func_0025EA50 */
ENTER(0x25ea50);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 56), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 64), RD(31)); if (t) goto L_0025EA90; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25ea84); SET32(4, RW(4) + 11504); JP_F_0025D010(c);
SET32(2, RW(0) + -1); goto L_0025EB3C;
L_0025EA90:;
{ int t = RD(18) != RD(0);  if (t) goto L_0025EAB0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25eaa4); SET32(4, RW(4) + 11544); JP_F_0025D010(c);
SET32(2, RW(0) + -1); goto L_0025EB3C;
L_0025EAB0:;
{ int t = RD(17) != RD(0);  if (t) goto L_0025EAD0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25eac4); SET32(4, RW(4) + 11584); JP_F_0025D010(c);
SET32(2, RW(0) + -1); goto L_0025EB3C;
L_0025EAD0:;
SET64(31, 0x25ead8);  JP_F_0025D370(c);
SET64(16, RD(2) + RD(0));
if (RD(16) != RD(0)) { SET64(4, RD(29) + RD(0)); goto L_0025EAF8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25eaf0); SET32(4, RW(4) + 11624); JP_F_0025D010(c);
SET32(2, RW(0) + -1); goto L_0025EB3C;
L_0025EAF8:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x25eb04); SET32(6, RW(0) + 20); JP_F_001273D0(c);
wr32(c, (RW(29) + 0), RW(17));
wr32(c, (RW(29) + 4), RW(18));
wr32(c, (RW(29) + 8), RW(19));
SET64(2, (s32)rd32(c, (RW(16) + 96)));
{ int t = RD(2) == RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_0025EB38; }
SET32(5, RW(0) + 2);
SET64(6, RD(0) + RD(0));
{ u32 t = RW(2); SET64(31, 0x25eb2c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 32))); goto L_0025EB40;
L_0025EB38:;
SET32(2, RW(0) + -1);
L_0025EB3C:;
SET64(16, rd64(c, (RW(29) + 32)));
L_0025EB40:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0025EB58(Ctx *c) { /* func_0025EB58 */
ENTER(0x25eb58);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 48), RD(31)); if (t) goto L_0025EB80; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 11664); goto L_0025EBBC;
L_0025EB80:;
{ int t = RD(16) != RD(0);  if (t) goto L_0025EB98; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 11704); goto L_0025EBBC;
L_0025EB98:;
SET64(31, 0x25eba0);  JP_F_0025D370(c);
SET64(5, RD(0) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(4, RD(29) + RD(0));
{ int t = RD(17) != RD(0); SET32(6, RW(0) + 20); if (t) goto L_0025EBD0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 11744);
L_0025EBBC:;
SET64(31, 0x25ebc4);  JP_F_0025D010(c);
SET32(2, RW(0) + -1); goto L_0025EC00;
L_0025EBD0:;
SET64(31, 0x25ebd8);  JP_F_001273D0(c);
SET32(2, RW(0) + -1);
wr32(c, (RW(29) + 4), RW(16));
SET64(4, RD(29) + RD(0));
SET32(5, RW(0) + 3);
SET64(6, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(17) + 96)));
{ int t = RD(3) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_0025EC00; }
{ u32 t = RW(3); SET64(31, 0x25ec00);  rt_call(c, t); }
L_0025EC00:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0025EC18(Ctx *c) { /* func_0025EC18 */
ENTER(0x25ec18);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 56), RD(31)); if (t) goto L_0025EC48; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 11784); goto L_0025EC84;
L_0025EC48:;
{ int t = RD(16) != RD(0);  if (t) goto L_0025EC60; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 11832); goto L_0025EC84;
L_0025EC60:;
SET64(31, 0x25ec68);  JP_F_0025D370(c);
SET64(5, RD(0) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(4, RD(29) + RD(0));
{ int t = RD(17) != RD(0); SET32(6, RW(0) + 20); if (t) goto L_0025EC98; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 11880);
L_0025EC84:;
SET64(31, 0x25ec8c);  JP_F_0025D010(c);
SET32(2, RW(0) + -1); goto L_0025ECCC;
L_0025EC98:;
SET64(31, 0x25eca0);  JP_F_001273D0(c);
SET32(2, RW(0) + -1);
wr32(c, (RW(29) + 4), RW(16));
SET64(4, RD(29) + RD(0));
wr32(c, (RW(29) + 8), RW(18));
SET32(5, RW(0) + 5);
SET64(6, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(17) + 96)));
{ int t = RD(3) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_0025ECCC; }
{ u32 t = RW(3); SET64(31, 0x25eccc);  rt_call(c, t); }
L_0025ECCC:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0025ECE8(Ctx *c) { /* func_0025ECE8 */
ENTER(0x25ece8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 48), RD(31)); if (t) goto L_0025ED18; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25ed0c); SET32(4, RW(4) + 11920); JP_F_0025D010(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0025ED98;
L_0025ED18:;
{ int t = RD(16) != RD(0);  if (t) goto L_0025ED38; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25ed2c); SET32(4, RW(4) + 11960); JP_F_0025D010(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0025ED98;
L_0025ED38:;
SET64(31, 0x25ed40);  JP_F_0025D370(c);
SET64(5, RD(0) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(4, RD(29) + RD(0));
{ int t = RD(17) != RD(0); SET32(6, RW(0) + 20); if (t) goto L_0025ED68; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25ed60); SET32(4, RW(4) + 12000); JP_F_0025D010(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0025ED98;
L_0025ED68:;
SET64(31, 0x25ed70);  JP_F_001273D0(c);
SET32(5, RW(0) + 6);
wr32(c, (RW(29) + 4), RW(16));
SET64(4, RD(29) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 96)));
{ int t = RD(2) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_0025ED94; }
{ u32 t = RW(2); SET64(31, 0x25ed94);  rt_call(c, t); }
L_0025ED94:;
SET64(16, rd64(c, (RW(29) + 32)));
L_0025ED98:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0025EDA8(Ctx *c) { /* func_0025EDA8 */
ENTER(0x25eda8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x25edb8);  JP_F_0025D370(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0025EDF0; }
SET64(2, (s32)rd32(c, (RW(3) + 96)));
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0025EDE8; }
SET32(5, RW(0) + 100);
SET64(6, RD(0) + RD(0));
{ u32 t = RW(2); SET64(31, 0x25ede0); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0))); goto L_0025EDF0;
L_0025EDE8:;
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
L_0025EDF0:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0025EDF8(Ctx *c) { /* func_0025EDF8 */
ENTER(0x25edf8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_0025EE24; }
SET64(31, 0x25ee20);  JP_F_0025D688(c);
SET64(16, RD(2) + RD(0));
L_0025EE24:;
SET64(31, 0x25ee2c); SET64(4, RD(16) + RD(0)); JP_F_0025EDA8(c);
SET64(3, (s64)(s32)0x530000);
SET32(18, RW(3) + -15608);
SET32(3, RW(0) + 1);
SET64(5, RD(17) + RD(0));
{ int t = RD(2) != RD(3); SET64(4, RD(18) + RD(0)); if (t) goto L_0025EE78; }
SET64(31, 0x25ee4c);  JP_F_0012A3C0(c);
SET64(5, (s64)(s32)0x4b0000);
SET64(6, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(7, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(5, RW(5) + 12040);
SET32(29, RW(29) + 32); { JP_F_00129C30(c); return; }
L_0025EE78:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025EE90(Ctx *c) { /* func_0025EE90 */
ENTER(0x25ee90);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x25eea0);  JP_F_0025D370(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025EEB0(Ctx *c) { /* func_0025EEB0 */
ENTER(0x25eeb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
{ int t = RD(17) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0025EEE0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25eed8); SET32(4, RW(4) + 12048); JP_F_0025D010(c);
SET64(2, RD(0) + RD(0)); goto L_0025EF34;
L_0025EEE0:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 96)));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 200); if (t) goto L_0025EF30; }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(6, RD(0) + RD(0));
{ u32 t = RW(2); SET64(31, 0x25ef00); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(16, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(2, (s32)rd32(c, (RW(3) + 96)));
SET32(5, RW(0) + 201);
SET64(6, RD(0) + RD(0));
{ u32 t = RW(2); SET64(31, 0x25ef20); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(16, RD(16) << 32);
SET64(2, RD(2) << 32);
SET64(2, RD(2) >> 32);
SET64(16, RD(16) + RD(2));
L_0025EF30:;
SET64(2, RD(16) + RD(0));
L_0025EF34:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025EF48(Ctx *c) { /* func_0025EF48 */
ENTER(0x25ef48);
SET32(29, RW(29) + -656);
wr64(c, (RW(29) + 616), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 632), RD(19));
SET32(19, RW(29) + 304);
SET64(4, RD(29) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(5, RD(19) + RD(0));
wr64(c, (RW(29) + 608), RD(16));
wr64(c, (RW(29) + 624), RD(18));
wr64(c, (RW(29) + 640), RD(31));
SET64(31, 0x25ef7c); SET64(16, RD(0) + RD(0)); JP_F_0025D8E0(c);
SET64(4, RD(29) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x25ef8c); SET64(6, RD(17) + RD(0)); JP_F_0025D698(c);
SET64(4, RD(17) + RD(0));
SET64(18, RD(2) + RD(0));
SET32(5, RW(0) + 202);
SET64(2, (s32)rd32(c, (RW(18) + 96)));
SET64(6, RD(19) + RD(0));
{ int t = RD(2) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_0025EFDC; }
{ u32 t = RW(2); SET64(31, 0x25efb0);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 96)));
SET64(6, RD(19) + RD(0));
SET32(5, RW(0) + 203);
SET64(7, RD(0) + RD(0));
{ u32 t = RW(2); SET64(31, 0x25efd0); SET64(16, RD(16) << 32); rt_call(c, t); }
SET64(2, RD(2) << 32);
SET64(2, RD(2) >> 32);
SET64(16, RD(16) + RD(2));
L_0025EFDC:;
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 608)));
SET64(17, rd64(c, (RW(29) + 616)));
SET64(18, rd64(c, (RW(29) + 624)));
SET64(19, rd64(c, (RW(29) + 632)));
SET64(31, rd64(c, (RW(29) + 640)));
SET32(29, RW(29) + 656); return;
}

void JP_F_0025F000(Ctx *c) { /* func_0025F000 */
ENTER(0x25f000);
SET32(29, RW(29) + -656);
wr64(c, (RW(29) + 624), RD(18));
SET64(18, RD(4) + RD(0));
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 616), RD(17));
wr64(c, (RW(29) + 632), RD(19));
wr64(c, (RW(29) + 640), RD(20));
wr64(c, (RW(29) + 608), RD(16));
wr64(c, (RW(29) + 648), RD(31));
SET64(31, 0x25f02c); SET64(20, RD(5) + RD(0)); JP_F_0025D370(c);
SET64(17, RD(2) + RD(0));
SET64(2, RD(0) + RD(0));
SET32(19, RW(29) + 304);
SET64(4, RD(29) + RD(0));
SET64(5, RD(19) + RD(0));
{ int t = RD(17) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_0025F0A0; }
SET64(31, 0x25f050);  JP_F_0025D8E0(c);
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(17) + 96)));
SET64(4, RD(18) + RD(0));
SET64(7, RD(20) + RD(0));
SET32(5, RW(0) + 204);
{ int t = RD(3) == RD(0); SET64(6, RD(19) + RD(0)); if (t) goto L_0025F0A0; }
{ u32 t = RW(3); SET64(31, 0x25f074);  rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 96)));
SET64(6, RD(19) + RD(0));
SET64(7, RD(20) + RD(0));
SET32(5, RW(0) + 205);
{ u32 t = RW(2); SET64(31, 0x25f094); SET64(16, RD(16) << 32); rt_call(c, t); }
SET64(2, RD(2) << 32);
SET64(2, RD(2) >> 32);
SET64(2, RD(16) + RD(2));
L_0025F0A0:;
SET64(16, rd64(c, (RW(29) + 608)));
SET64(17, rd64(c, (RW(29) + 616)));
SET64(18, rd64(c, (RW(29) + 624)));
SET64(19, rd64(c, (RW(29) + 632)));
SET64(20, rd64(c, (RW(29) + 640)));
SET64(31, rd64(c, (RW(29) + 648)));
SET32(29, RW(29) + 656); return;
}

void JP_F_0025F0C0(Ctx *c) { /* func_0025F0C0 */
ENTER(0x25f0c0);
SET32(29, RW(29) + -16);
SET64(3, RD(0) + RD(0));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025F0E8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25f0dc); SET32(4, RW(4) + 12080); JP_F_0025D010(c);
SET64(2, RD(0) + RD(0)); goto L_0025F110;
L_0025F0E8:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 96)));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 299); if (t) goto L_0025F10C; }
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(6, RD(0) + RD(0));
{ u32 t = RW(2); SET64(31, 0x25f108); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, RD(2) + RD(0));
L_0025F10C:;
SET64(2, RD(3) + RD(0));
L_0025F110:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025F120(Ctx *c) { /* func_0025F120 */
ENTER(0x25f120);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + 3648);
SET64(4, (s64)(s32)0x400000);
SET64(5, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(4) + 3592);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(6, RW(0) + 56);
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_0025F150(Ctx *c) { /* func_0025F150 */
ENTER(0x25f150);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25f168); SET64(17, RD(0) + RD(0)); JP_F_0026C098(c);
SET64(2, (s64)(s32)0x400000);
SET32(16, RW(2) + 3592);
SET64(2, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_0025F1B4; }
SET64(31, 0x25f184);  JP_F_0025F120(c);
SET32(4, RW(0) + 1);
wr8(c, (RW(16) + 0), (u8)RW(4));
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + 3688);
SET32(5, RW(0) + -1);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(17, RD(16) + RD(0));
wr8(c, (RW(16) + 3), (u8)RW(5));
SET32(2, RW(2) + 1);
wr8(c, (RW(16) + 2), (u8)RW(0));
wr32(c, (RW(3) + 0), RW(2));
wr32(c, (RW(16) + 4), RW(0));
L_0025F1B4:;
SET64(31, 0x25f1bc);  JP_F_0026C110(c);
SET64(2, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025F1D8(Ctx *c) { /* func_0025F1D8 */
ENTER(0x25f1d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25f1f4); SET64(16, RD(4) + RD(0)); JP_F_0026C098(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(2, RW(17) + 3592);
SET32(4, RW(4) + 12176);
SET64(5, RD(16) + RD(0));
{ int t = RD(16) == RD(2); SET64(6, RD(2) + RD(0)); if (t) goto L_0025F220; }
SET64(31, 0x25f214);  JP_F_00111888(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0025F268;
L_0025F220:;
SET64(4, (s8)rd8(c, (RW(16) + 2)));
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 3); if (t) goto L_0025F244; }
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 9); if (t) goto L_0025F244; }
{ int t = RD(4) == RD(2); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0025F244; }
SET64(31, 0x25f244); SET32(4, RW(4) + 12240); JP_F_00111888(c);
L_0025F244:;
SET64(31, 0x25f24c);  JP_F_0025F120(c);
SET64(3, (s64)(s32)0x400000);
wr8(c, (RW(17) + 3592), (u8)RW(0));
SET32(3, RW(3) + 3692);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_0025F268:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0026C110(c); return; }
}

void JP_F_0025F278(Ctx *c) { /* func_0025F278 */
ENTER(0x25f278);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET32(4, RW(0) + 4608);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(8) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 56), RD(31));
SET64(31, 0x25f2bc); SET64(22, RD(7) + RD(0)); JP_F_00260080(c);
SET64(31, 0x25f2c4); SET32(4, RW(0) + 1); JP_F_00122F20(c);
SET32(4, RW(0) + 4609);
SET64(31, 0x25f2d0); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
SET32(3, RW(0) + 1);
{ int t = RD(16) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0025F33C; }
SET64(31, 0x25f2e4);  JP_F_0026C098(c);
SET32(4, RW(0) + 1);
SET64(3, (s8)rd8(c, (RW(17) + 2)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 3); if (t) goto L_0025F304; }
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 9); if (t) goto L_0025F304; }
{ int t = RD(3) != RD(2);  if (t) goto L_0025F330; }
L_0025F304:;
wr8(c, (RW(17) + 2), (u8)RW(4));
SET32(20, RW(0) + 1);
wr8(c, (RW(17) + 1), (u8)RW(4));
wr32(c, (RW(17) + 8), RW(19));
lwl(c, 2, (RW(18) + 3));
lwr(c, 2, (RW(18) + 0));
swl(c, 2, (RW(17) + 23));
swr(c, 2, (RW(17) + 20));
wr32(c, (RW(17) + 12), RW(21));
wr32(c, (RW(17) + 16), RW(22));
wr32(c, (RW(17) + 4), RW(0));
L_0025F330:;
SET64(31, 0x25f338);  JP_F_0026C110(c);
SET64(2, RD(20) + RD(0));
L_0025F33C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0025F368(Ctx *c) { /* func_0025F368 */
ENTER(0x25f368);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(8) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x25f3a4); SET64(21, RD(6) + RD(0)); JP_F_0026C098(c);
SET64(3, (s8)rd8(c, (RW(16) + 2)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 3); if (t) goto L_0025F3C0; }
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 9); if (t) goto L_0025F3C0; }
{ int t = RD(3) != RD(2);  if (t) goto L_0025F3E8; }
L_0025F3C0:;
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 48), RW(18));
wr8(c, (RW(16) + 1), (u8)RW(2));
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 2), (u8)RW(2));
SET32(20, RW(0) + 1);
wr32(c, (RW(16) + 24), RW(17));
wr64(c, (RW(16) + 32), RD(19));
wr64(c, (RW(16) + 40), RD(21));
wr32(c, (RW(16) + 4), RW(0));
L_0025F3E8:;
SET64(31, 0x25f3f0);  JP_F_0026C110(c);
SET64(2, RD(20) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0025F418(Ctx *c) { /* func_0025F418 */
ENTER(0x25f418);
SET64(2, (s8)rd8(c, (RW(4) + 2))); return;
}

void JP_F_0025F420(Ctx *c) { /* func_0025F420 */
ENTER(0x25f420);
SET32(2, RW(0) + 16383);
SET32(2, RW(2) + -32);
L_0025F428:;
if (RSD(2) >= 0) { SET32(2, RW(2) + -32); { POLL(); goto L_0025F428; } }
 return;
}

void JP_F_0025F450(Ctx *c) { /* func_0025F450 */
ENTER(0x25f450);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x25f460); SET32(4, RW(0) + 4864); JP_F_00260080(c);
SET64(31, 0x25f468); SET64(4, RD(0) + RD(0)); JP_F_00122F20(c);
SET32(4, RW(0) + 4865);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00260080(c); return; }
}

void JP_F_0025F478(Ctx *c) { /* func_0025F478 */
ENTER(0x25f478);
SET32(29, RW(29) + -80);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 72), RD(31));
wr32(c, (RW(29) + 0), RW(2));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(0) | 0x9000);
wr64(c, (RW(29) + 48), RD(20));
SET32(20, RW(0) + 1);
wr64(c, (RW(29) + 56), RD(21));
SET64(21, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 64), RD(22));
SET32(22, RW(0) + 9);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
L_0025F4C0:;
{ int t = RD(2) != RD(20); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_0025F520; }
SET64(31, 0x25f4d0); SET32(4, RW(0) + 4352); JP_F_00260080(c);
SET64(4, (s32)rd32(c, (RW(17) + 48)));
SET32(5, RW(0) + 1);
SET64(31, 0x25f4e0); SET64(6, RD(29) + RD(0)); JP_F_00260318(c);
SET32(4, RW(0) + 4353);
SET64(31, 0x25f4ec); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
{ int t = RSD(16) >= 0;  if (t) goto L_0025F500; }
wr32(c, (RW(17) + 52), RW(16));
wr8(c, (RW(17) + 2), (u8)RW(22)); goto L_0025F51C;
L_0025F500:;
SET64(31, 0x25f508); SET32(18, RW(18) + 1); JP_F_0025F420(c);
SET64(2, RSD(19) < RSD(18));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(29) + 0))); { POLL(); goto L_0025F4C0; } }
SET64(31, 0x25f51c); SET32(4, RW(21) + 12272); JP_F_00111888(c);
L_0025F51C:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0025F520:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0025F548(Ctx *c) { /* func_0025F548 */
ENTER(0x25f548);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(19, (s64)(s32)0x400000); goto L_0025F578;
L_0025F570:;
SET32(2, RW(2) << 16);
SET32(16, RSW(2) >> 16);
L_0025F578:;
SET64(2, RSD(16) < (s64)1000);
if (RD(2) == RD(0)) { SET64(18, (s8)rd8(c, (RW(17) + 2))); goto L_0025F5C4; }
SET64(31, 0x25f58c);  JP_F_0026C068(c);
SET32(4, RW(19) + 3652);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_0025F5B8; }
SET64(31, 0x25f5a8);  JP_F_0026C080(c);
SET64(31, 0x25f5b0);  JP_F_0025F420(c);
SET32(2, RW(16) + 1); { POLL(); goto L_0025F570; }
L_0025F5B8:;
SET64(31, 0x25f5c0); wr32(c, (RW(4) + 0), RW(3)); JP_F_0026C080(c);
SET64(18, (s8)rd8(c, (RW(17) + 2)));
L_0025F5C4:;
SET32(2, RW(0) + 2);
if (RD(18) != RD(2)) { wr32(c, (RW(19) + 3652), RW(0)); goto L_0025F638; }
SET64(2, (s64)(s32)0x400000);
SET32(4, RW(0) + 1);
SET32(16, RW(2) + 3592);
SET64(3, (s8)rd8(c, (RW(16) + 1)));
{ int t = RD(3) != RD(4); SET64(2, rd8(c, (RW(16) + 1))); if (t) goto L_0025F5F4; }
SET64(31, 0x25f5f0); SET64(4, RD(17) + RD(0)); JP_F_0025F450(c);
SET64(2, rd8(c, (RW(16) + 1)));
L_0025F5F4:;
SET32(2, RW(2) << 24);
SET32(2, RSW(2) >> 24);
if (RD(2) != RD(18)) { SET64(3, (s8)rd8(c, (RW(17) + 2))); goto L_0025F610; }
SET64(31, 0x25f60c); SET64(4, RD(17) + RD(0)); JP_F_0025F478(c);
SET64(3, (s8)rd8(c, (RW(17) + 2)));
L_0025F610:;
SET32(2, RW(0) + 9);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 3); if (t) goto L_0025F634; }
SET64(3, (s64)(s32)0x400000);
wr8(c, (RW(17) + 2), (u8)RW(2));
SET32(3, RW(3) + 3684);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
L_0025F634:;
wr32(c, (RW(19) + 3652), RW(0));
L_0025F638:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0025F658(Ctx *c) { /* func_0025F658 */
ENTER(0x25f658);
SET32(29, RW(29) + -16);
SET64(4, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(4) + 3592);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0025F548(c); return; }
}

void JP_F_0025F678(Ctx *c) { /* func_0025F678 */
ENTER(0x25f678);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25f68c); SET64(16, RD(4) + RD(0)); JP_F_0026C098(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(3, RW(0) + 1);
{ int t = RD(16) != RD(0); SET32(4, RW(4) + 12304); if (t) goto L_0025F6B0; }
SET64(31, 0x25f6a4);  JP_F_00111888(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0025F6D4;
L_0025F6B0:;
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RD(2) != RD(3)) { wr32(c, (RW(16) + 4), RW(3)); goto L_0025F6D0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25f6c8); SET32(4, RW(4) + 12336); JP_F_00111888(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0025F6D4;
L_0025F6D0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0025F6D4:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0026C110(c); return; }
}

void JP_F_0025F6E0(Ctx *c) { /* func_0025F6E0 */
ENTER(0x25f6e0);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x400000);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(3) + 3668);
wr64(c, (RW(29) + 16), RD(18));
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) == RD(0); SET32(3, RW(0) + 2); if (t) goto L_0025F7D4; }
SET64(4, (s8)rd8(c, (RW(17) + 2)));
if (RD(4) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0025F7D8; }
SET64(18, (s64)(s32)0x400000);
SET32(5, RW(0) + 1);
SET32(4, RW(18) + 3676);
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(4) + 0), RW(5));
SET32(2, RW(2) + 3664);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(3) != RD(5);  if (t) goto L_0025F778; }
SET64(31, 0x25f748);  JP_F_0026C0C8(c);
SET64(31, 0x25f750); SET32(4, RW(0) + 5120); JP_F_00260080(c);
SET64(31, 0x25f758);  JP_F_00123C78(c);
SET32(4, RW(0) + 5121);
SET64(31, 0x25f764); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
SET64(31, 0x25f76c);  JP_F_0026C140(c);
SET32(2, RW(16) + 1); goto L_0025F798;
L_0025F778:;
SET64(31, 0x25f780); SET32(4, RW(0) + 5376); JP_F_00260080(c);
SET64(31, 0x25f788);  JP_F_00123C78(c);
SET32(4, RW(0) + 5377);
SET64(31, 0x25f794); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
SET32(2, RW(16) + 1);
L_0025F798:;
SET32(3, RW(18) + 3676);
SET64(2, RD(2) < (u64)(s64)2);
wr32(c, (RW(3) + 0), RW(0));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0025F7D4; }
SET32(2, RW(0) + 32);
{ int t = RD(16) == RD(2); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0025F7D0; }
wr32(c, (RW(17) + 52), RW(16));
SET64(5, RD(16) + RD(0));
SET64(31, 0x25f7c8); SET32(4, RW(4) + 12360); JP_F_00111888(c);
SET32(2, RW(0) + 1); goto L_0025F7D4;
L_0025F7D0:;
SET64(2, RD(0) + RD(0));
L_0025F7D4:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0025F7D8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025F7F0(Ctx *c) { /* func_0025F7F0 */
ENTER(0x25f7f0);
SET64(2, (s64)(s32)0x400000);
wr8(c, (RW(2) + 3716), (u8)RW(4)); return;
}

void JP_F_0025F800(Ctx *c) { /* func_0025F800 */
ENTER(0x25f800);
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(2) + 3712), RW(4)); return;
}

void JP_F_0025F810(Ctx *c) { /* func_0025F810 */
ENTER(0x25f810);
SET64(3, (s64)(s32)0x400000);
SET64(2, rd8(c, (RW(3) + 3716))); return;
}

void JP_F_0025F820(Ctx *c) { /* func_0025F820 */
ENTER(0x25f820);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + 3712))); return;
}

static void JP_B_0025F830(Ctx *c, u32 entry) { /* func_0025F830 */
ENTER(entry);
switch (entry) { case 0x25f880: goto L_0025F880; case 0x25f8f8: goto L_0025F8F8; case 0x25f900: goto L_0025F900; }
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(2) != RD(3); SET64(5, rd8(c, (RW(17) + 2))); if (t) goto L_0025F904; }
SET64(3, (s8)rd8(c, (RW(17) + 2)));
SET64(2, RD(3) < (u64)(s64)10);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_0025F904; }
SET32(2, RW(3) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 12448)));
{ u32 t = RW(3);  switch (t) { case 0x25f880: goto L_0025F880; case 0x25f8f8: goto L_0025F8F8; case 0x25f900: goto L_0025F900; default: rt_jump(c, t); return; } }
L_0025F880:;
SET64(31, 0x25f888); SET32(4, RW(0) + 5632); JP_F_00260080(c);
SET64(31, 0x25f890);  JP_F_00123D10(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x25f89c); SET32(4, RW(0) + 5633); JP_F_00260080(c);
{ int t = RD(16) != RD(0); SET64(2, (s64)(s32)0x400000); if (t) goto L_0025F8B8; }
SET64(4, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 3676);
SET32(4, RW(4) + 12408);
SET64(31, 0x25f8b8); SET64(5, (s32)rd32(c, (RW(2) + 0))); JP_F_00111888(c);
L_0025F8B8:;
SET64(31, 0x25f8c0); SET32(4, RW(0) + 5888); JP_F_00260080(c);
SET64(31, 0x25f8c8); SET64(4, RD(0) + RD(0)); JP_F_00122F20(c);
SET64(31, 0x25f8d0); SET32(4, RW(0) + 5889); JP_F_00260080(c);
wr8(c, (RW(17) + 2), (u8)RW(0));
SET64(3, (s64)(s32)0x400000);
SET64(5, RD(0) + RD(0));
SET32(3, RW(3) + 3684);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
wr32(c, (RW(17) + 4), RW(0)); goto L_0025F904;
L_0025F8F8:;
wr8(c, (RW(17) + 2), (u8)RW(0));
SET64(5, RD(0) + RD(0));
L_0025F900:;
wr32(c, (RW(17) + 4), RW(0));
L_0025F904:;
SET32(2, RW(5) << 24);
SET32(3, RW(0) + 1);
SET32(18, RSW(2) >> 24);
if (RD(18) != RD(3)) { SET32(3, RW(0) + 2); goto L_0025F9A0; }
SET64(31, 0x25f920); SET32(4, RW(0) + 6144); JP_F_00260080(c);
SET64(2, (s64)(s32)0x400000);
SET64(3, (s32)rd32(c, (RW(2) + 3712)));
if (RD(3) != RD(18)) { SET64(4, (s32)rd32(c, (RW(17) + 8))); goto L_0025F940; }
SET64(2, (s64)(s32)0x400000);
SET64(3, rd8(c, (RW(2) + 3716)));
wr8(c, (RW(17) + 21), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(17) + 8)));
L_0025F940:;
SET32(7, RW(17) + 20);
SET64(5, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x25f950); SET64(6, (s32)rd32(c, (RW(17) + 16))); JP_F_00123930(c);
SET32(4, RW(0) + 6145);
SET64(31, 0x25f95c); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
{ int t = RD(16) != RD(18); SET32(2, RW(0) + 9); if (t) goto L_0025F988; }
SET64(2, (s64)(s32)0x400000);
SET32(4, RW(0) + 2);
SET32(2, RW(2) + 3680);
SET32(5, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) + 1);
wr32(c, (RW(2) + 0), RW(3));
wr8(c, (RW(17) + 2), (u8)RW(4)); goto L_0025F998;
L_0025F988:;
SET32(3, RW(0) + -1);
wr8(c, (RW(17) + 2), (u8)RW(2));
SET32(5, RW(0) + 9);
wr32(c, (RW(17) + 52), RW(3));
L_0025F998:;
SET32(2, RW(5) << 24);
SET32(3, RW(0) + 2);
L_0025F9A0:;
SET32(2, RSW(2) >> 24);
{ int t = RD(2) != RD(3); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0025FA04; }
SET64(31, 0x25f9b4); SET32(4, RW(0) + 6400); JP_F_00260080(c);
SET64(31, 0x25f9bc); SET32(4, RW(0) + 1); JP_F_00122F20(c);
SET32(4, RW(0) + 6401);
SET64(31, 0x25f9c8); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
SET64(31, 0x25f9d0); SET64(4, RD(17) + RD(0)); JP_F_0025F6E0(c);
{ int t = RD(16) != RD(0); SET64(3, RD(2) + RD(0)); if (t) goto L_0025FA00; }
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET32(2, RW(0) + 3); goto L_0025F9E8; }
SET32(2, RW(0) + 9);
L_0025F9E8:;
wr8(c, (RW(17) + 2), (u8)RW(2));
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + 3684);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
L_0025FA00:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0025FA04:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}
void JP_F_0025F830(Ctx *c) { JP_B_0025F830(c, 0x25f830); }
void JP_F_0025F880(Ctx *c) { JP_B_0025F830(c, 0x25f880); }
void JP_F_0025F8F8(Ctx *c) { JP_B_0025F830(c, 0x25f8f8); }
void JP_F_0025F900(Ctx *c) { JP_B_0025F830(c, 0x25f900); }

static void JP_B_0025FA18(Ctx *c, u32 entry) { /* func_0025FA18 */
ENTER(entry);
switch (entry) { case 0x25fa68: goto L_0025FA68; case 0x25fa88: goto L_0025FA88; case 0x25fa90: goto L_0025FA90; }
SET32(29, RW(29) + -48);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(2, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(2) != RD(3); SET64(4, rd8(c, (RW(17) + 2))); if (t) goto L_0025FA94; }
SET64(3, (s8)rd8(c, (RW(17) + 2)));
SET64(2, RD(3) < (u64)(s64)10);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_0025FA94; }
SET32(2, RW(3) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 12496)));
{ u32 t = RW(3);  switch (t) { case 0x25fa68: goto L_0025FA68; case 0x25fa88: goto L_0025FA88; case 0x25fa90: goto L_0025FA90; default: rt_jump(c, t); return; } }
L_0025FA68:;
SET64(31, 0x25fa70); SET64(4, RD(17) + RD(0)); JP_F_0025F478(c);
wr8(c, (RW(17) + 2), (u8)RW(0));
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + 3684);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
L_0025FA88:;
wr8(c, (RW(17) + 2), (u8)RW(0));
SET64(4, RD(0) + RD(0));
L_0025FA90:;
wr32(c, (RW(17) + 4), RW(0));
L_0025FA94:;
SET32(2, RW(4) << 24);
SET32(3, RW(0) + 1);
SET32(2, RSW(2) >> 24);
if (RD(2) != RD(3)) { SET32(2, RW(4) << 24); goto L_0025FB54; }
SET64(31, 0x25fab0); SET32(4, RW(0) + 8192); JP_F_00260080(c);
SET64(5, rd64(c, (RW(17) + 40)));
SET64(4, (s32)rd32(c, (RW(17) + 48)));
SET64(6, RD(0) + RD(0));
SET64(31, 0x25fac4); SET64(5, RD(5) << 11); JP_F_00260260(c);
SET32(4, RW(0) + 8193);
SET64(31, 0x25fad0); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
{ int t = RSD(16) >= 0; SET32(2, RW(0) + 9); if (t) goto L_0025FAE8; }
SET64(3, RD(16) << 32);
SET64(3, RSD(3) >> 32);
wr8(c, (RW(17) + 2), (u8)RW(2));
wr32(c, (RW(17) + 52), RW(3));
L_0025FAE8:;
SET64(31, 0x25faf0); SET32(4, RW(0) + 8448); JP_F_00260080(c);
SET64(4, (s32)rd32(c, (RW(17) + 48)));
SET64(5, (s32)rd32(c, (RW(17) + 24)));
SET64(31, 0x25fb00); SET64(6, (s32)rd32(c, (RW(17) + 32))); JP_F_00260450(c);
SET32(4, RW(0) + 8449);
SET64(31, 0x25fb0c); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
{ int t = RSD(16) < 0; SET32(2, RW(0) + 2); if (t) goto L_0025FB38; }
SET64(3, (s64)(s32)0x400000);
wr8(c, (RW(17) + 2), (u8)RW(2));
SET32(3, RW(3) + 3680);
SET32(4, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET32(2, RW(4) << 24); goto L_0025FB54;
L_0025FB38:;
SET64(3, RD(16) << 32);
SET64(3, RSD(3) >> 32);
SET32(2, RW(0) + 9);
wr8(c, (RW(17) + 2), (u8)RW(2));
SET32(4, RW(0) + 9);
wr32(c, (RW(17) + 52), RW(3));
SET32(2, RW(4) << 24);
L_0025FB54:;
SET32(3, RW(0) + 2);
SET32(2, RSW(2) >> 24);
{ int t = RD(2) != RD(3); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_0025FBD4; }
SET64(31, 0x25fb6c); SET32(4, RW(0) + 8704); JP_F_00260080(c);
SET64(4, (s32)rd32(c, (RW(17) + 48)));
SET32(5, RW(0) + 1);
SET64(31, 0x25fb7c); SET64(6, RD(29) + RD(0)); JP_F_00260318(c);
{ int t = RSD(2) >= 0;  if (t) goto L_0025FBA0; }
SET64(31, 0x25fb8c); SET32(4, RW(0) + 8705); JP_F_00260080(c);
SET32(2, RW(0) + 9);
SET32(3, RW(0) + -1);
wr8(c, (RW(17) + 2), (u8)RW(2));
wr32(c, (RW(17) + 52), RW(3)); goto L_0025FBD0;
L_0025FBA0:;
SET64(31, 0x25fba8); SET32(4, RW(0) + 8706); JP_F_00260080(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_0025FBD4; }
SET32(2, RW(0) + 3);
SET64(3, (s64)(s32)0x400000);
wr8(c, (RW(17) + 2), (u8)RW(2));
SET32(3, RW(3) + 3684);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
L_0025FBD0:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0025FBD4:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}
void JP_F_0025FA18(Ctx *c) { JP_B_0025FA18(c, 0x25fa18); }
void JP_F_0025FA68(Ctx *c) { JP_B_0025FA18(c, 0x25fa68); }
void JP_F_0025FA88(Ctx *c) { JP_B_0025FA18(c, 0x25fa88); }
void JP_F_0025FA90(Ctx *c) { JP_B_0025FA18(c, 0x25fa90); }

void JP_F_0025FBE8(Ctx *c) { /* func_0025FBE8 */
ENTER(0x25fbe8);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + 3652))); return;
}

void JP_F_0025FBF8(Ctx *c) { /* func_0025FBF8 */
ENTER(0x25fbf8);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, (s64)(s32)0x400000);
SET32(4, RW(19) + 3652);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x25fc24); SET32(17, RW(2) + 3592); JP_F_0026CC20(c);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0025FCC8; }
SET64(16, (s8)rd8(c, (RW(17) + 1)));
{ int t = RD(16) != RD(2); SET64(3, rd8(c, (RW(17) + 1))); if (t) goto L_0025FC74; }
SET64(2, (s64)(s32)0x400000);
SET32(18, RW(2) + 3656);
SET64(3, (s32)rd32(c, (RW(18) + 0)));
{ int t = RD(3) != RD(16);  if (t) goto L_0025FC54; }
SET64(31, 0x25fc54);  JP_F_0026C0C8(c);
L_0025FC54:;
SET64(31, 0x25fc5c); SET64(4, RD(17) + RD(0)); JP_F_0025F830(c);
SET64(2, (s32)rd32(c, (RW(18) + 0)));
if (RD(2) != RD(16)) { SET64(3, rd8(c, (RW(17) + 1))); goto L_0025FC74; }
SET64(31, 0x25fc70);  JP_F_0026C140(c);
SET64(3, rd8(c, (RW(17) + 1)));
L_0025FC74:;
SET32(2, RW(3) << 24);
SET32(3, RW(0) + 2);
SET32(2, RSW(2) >> 24);
if (RD(2) != RD(3)) { wr32(c, (RW(19) + 3652), RW(0)); goto L_0025FCC8; }
SET64(3, (s64)(s32)0x400000);
SET32(18, RW(0) + 1);
SET32(16, RW(3) + 3660);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) != RD(18);  if (t) goto L_0025FCA8; }
SET64(31, 0x25fca8);  JP_F_0026C0C8(c);
L_0025FCA8:;
SET64(31, 0x25fcb0); SET64(4, RD(17) + RD(0)); JP_F_0025FA18(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { wr32(c, (RW(19) + 3652), RW(0)); goto L_0025FCC8; }
SET64(31, 0x25fcc4);  JP_F_0026C140(c);
wr32(c, (RW(19) + 3652), RW(0));
L_0025FCC8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0025FCE8(Ctx *c) { /* func_0025FCE8 */
ENTER(0x25fce8);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s8)rd8(c, (RW(3) + 3593))); return;
}

void JP_F_0025FCF8(Ctx *c) { /* func_0025FCF8 */
ENTER(0x25fcf8);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + 3644))); return;
}

void JP_F_0025FD08(Ctx *c) { /* func_0025FD08 */
ENTER(0x25fd08);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET32(2, RW(2) + 3672);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(2) + 0), RW(0));
SET64(8, (s64)(s32)0x400000);
SET32(7, RW(0) + 1);
SET64(5, RD(2) + RD(0));
SET64(6, (s64)(s32)0x19640000);
SET64(4, (s64)(s32)0x4b0000);
SET64(2, (s32)rd32(c, (RW(8) + 3652)));
L_0025FD38:;
{ int t = RD(2) != RD(7); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0025FD68; }
SET64(2, (s32)rd32(c, (RW(5) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(5) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET64(3, RD(6) < RD(3));
if (RD(3) == RD(0)) { SET64(2, (s32)rd32(c, (RW(8) + 3652))); { POLL(); goto L_0025FD38; } }
SET64(31, 0x25fd64); SET32(4, RW(4) + 12536); JP_F_00111888(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0025FD68:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0025FD70(Ctx *c) { /* func_0025FD70 */
ENTER(0x25fd70);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25fd84); SET64(16, RD(4) + RD(0)); JP_F_0025FD08(c);
SET32(16, RW(16) << 24);
SET64(2, (s64)(s32)0x400000);
SET32(2, RW(2) + 3656);
SET32(16, RSW(16) >> 24);
wr32(c, (RW(2) + 0), RW(16));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025FDA8(Ctx *c) { /* func_0025FDA8 */
ENTER(0x25fda8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25fdbc); SET64(16, RD(4) + RD(0)); JP_F_0025FD08(c);
SET32(16, RW(16) << 24);
SET64(2, (s64)(s32)0x400000);
SET32(2, RW(2) + 3660);
SET32(16, RSW(16) >> 24);
wr32(c, (RW(2) + 0), RW(16));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025FDE0(Ctx *c) { /* func_0025FDE0 */
ENTER(0x25fde0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25fdf4); SET64(16, RD(4) + RD(0)); JP_F_0025FD08(c);
SET32(16, RW(16) << 24);
SET64(2, (s64)(s32)0x400000);
SET32(2, RW(2) + 3664);
SET32(16, RSW(16) >> 24);
wr32(c, (RW(2) + 0), RW(16));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025FE18(Ctx *c) { /* func_0025FE18 */
ENTER(0x25fe18);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25fe2c); SET64(16, RD(4) + RD(0)); JP_F_0025FD08(c);
SET32(16, RW(16) << 24);
SET64(2, (s64)(s32)0x400000);
SET32(2, RW(2) + 3668);
SET32(16, RSW(16) >> 24);
wr32(c, (RW(2) + 0), RW(16));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025FE50(Ctx *c) { /* func_0025FE50 */
ENTER(0x25fe50);
SET64(3, (s64)(s32)0x400000);
SET32(2, RW(0) + 9);
wr8(c, (RW(3) + 3594), (u8)RW(2)); return;
}

void JP_F_0025FE60(Ctx *c) { /* func_0025FE60 */
ENTER(0x25fe60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25fe74); SET32(4, RW(0) + 8960); JP_F_00260080(c);
SET64(31, 0x25fe7c); SET32(4, RW(0) + 1); JP_F_00122F20(c);
SET32(4, RW(0) + 8961);
SET64(31, 0x25fe88); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025FEA0(Ctx *c) { /* func_0025FEA0 */
ENTER(0x25fea0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 16), RD(16));
SET32(16, RW(2) + 3592);
SET64(3, (s8)rd8(c, (RW(16) + 2)));
SET32(4, RW(0) + 2);
{ int t = RD(3) != RD(4); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_0025FF28; }
SET64(31, 0x25fec8);  JP_F_0026C068(c);
SET64(31, 0x25fed0); SET32(4, RW(0) + 9216); JP_F_00260080(c);
SET32(5, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(16) + 48)));
SET64(31, 0x25fee0); SET64(6, RD(29) + RD(0)); JP_F_00260318(c);
{ int t = RSD(2) >= 0; SET32(4, RW(0) + 9218); if (t) goto L_0025FEF8; }
SET64(31, 0x25fef0); SET32(4, RW(0) + 9217); JP_F_00260080(c);
 goto L_0025FF20;
L_0025FEF8:;
SET64(31, 0x25ff00);  JP_F_00260080(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_0025FF20; }
SET64(31, 0x25ff14);  JP_F_0026C080(c);
SET32(2, RW(0) + 1); goto L_0025FF2C;
L_0025FF20:;
SET64(31, 0x25ff28);  JP_F_0026C080(c);
L_0025FF28:;
SET64(2, RD(0) + RD(0));
L_0025FF2C:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025FF40(Ctx *c) { /* func_0025FF40 */
ENTER(0x25ff40);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(4, (s8)rd8(c, (RW(2) + 3593)));
SET32(3, RW(0) + 1);
{ int t = RD(4) != RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025FF68; }
SET64(31, 0x25ff60);  JP_F_0025FE60(c);
SET32(2, RW(2) << 1); goto L_0025FF80;
L_0025FF68:;
SET32(3, RW(0) + 2);
{ int t = RD(4) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0025FF80; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0025FEA0(c); return; }
L_0025FF80:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

static void JP_B_0025FF90(Ctx *c, u32 entry) { /* func_0025FF90 */
ENTER(entry);
switch (entry) { case 0x260000: goto L_00260000; case 0x260018: goto L_00260018; case 0x26001c: goto L_0026001C; case 0x260020: goto L_00260020; case 0x260024: goto L_00260024; case 0x260028: goto L_00260028; case 0x260034: goto L_00260034; case 0x260038: goto L_00260038; case 0x26003c: goto L_0026003C; case 0x260040: goto L_00260040; case 0x260058: goto L_00260058; }
SET64(4, (s64)(s32)0x4b0000);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25ffa8); SET32(4, RW(4) + 12584); JP_F_00111888(c);
SET64(2, (s64)(s32)0x400000);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s32)rd32(c, (RW(2) + 3652)));
SET64(31, 0x25ffbc); SET32(4, RW(4) + 12600); JP_F_00111888(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(2, (s64)(s32)0x400000);
SET32(4, RW(4) + 12632);
SET32(2, RW(2) + 3676);
SET64(31, 0x25ffd4); SET64(5, (s32)rd32(c, (RW(2) + 0))); JP_F_00111888(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(2, (s64)(s32)0x400000);
SET32(4, RW(4) + 12664);
SET32(16, RW(2) + 3592);
SET64(31, 0x25ffec); SET64(5, (s8)rd8(c, (RW(16) + 2))); JP_F_00111888(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(3, (s8)rd8(c, (RW(16) + 1)));
SET32(2, RW(0) + 1);
SET32(4, RW(4) + 12696);
{ int t = RD(3) != RD(2); SET64(5, rd8(c, (RW(16) + 1))); if (t) goto L_00260010; }
if (0) { L_00260000:; SET64(5, rd8(c, (RW(16) + 1))); }
SET64(31, 0x26000c);  JP_F_00111888(c);
SET64(5, rd8(c, (RW(16) + 1)));
L_00260010:;
SET32(2, RW(5) << 24);
SET32(3, RW(0) + 2);
L_00260018:;
SET32(2, RSW(2) >> 24);
L_0026001C:;
{ int t = RD(2) != RD(3);  if (t) goto L_00260030; }
if (0) { L_00260020:;  }
L_00260024:;
SET64(4, (s64)(s32)0x4b0000);
L_00260028:;
SET64(31, 0x260030); SET32(4, RW(4) + 12728); JP_F_00111888(c);
L_00260030:;
SET64(31, 0x260038);  JP_F_0025FF40(c);
if (0) { L_00260034:;  }
L_00260038:;
SET64(4, (s64)(s32)0x4b0000);
L_0026003C:;
SET64(5, RD(2) + RD(0));
L_00260040:;
SET64(31, 0x260048); SET32(4, RW(4) + 12760); JP_F_00111888(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
if (0) { L_00260058:; SET32(29, RW(29) + 16); }
}
void JP_F_0025FF90(Ctx *c) { JP_B_0025FF90(c, 0x25ff90); }
void JP_F_00260000(Ctx *c) { JP_B_0025FF90(c, 0x260000); }
void JP_F_00260018(Ctx *c) { JP_B_0025FF90(c, 0x260018); }
void JP_F_0026001C(Ctx *c) { JP_B_0025FF90(c, 0x26001c); }
void JP_F_00260020(Ctx *c) { JP_B_0025FF90(c, 0x260020); }
void JP_F_00260024(Ctx *c) { JP_B_0025FF90(c, 0x260024); }
void JP_F_00260028(Ctx *c) { JP_B_0025FF90(c, 0x260028); }
void JP_F_00260034(Ctx *c) { JP_B_0025FF90(c, 0x260034); }
void JP_F_00260038(Ctx *c) { JP_B_0025FF90(c, 0x260038); }
void JP_F_0026003C(Ctx *c) { JP_B_0025FF90(c, 0x26003c); }
void JP_F_00260040(Ctx *c) { JP_B_0025FF90(c, 0x260040); }
void JP_F_00260058(Ctx *c) { JP_B_0025FF90(c, 0x260058); }

void JP_F_00260060(Ctx *c) { /* func_00260060 */
ENTER(0x260060);
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + 3684);
SET64(2, (s32)rd32(c, (RW(3) + 0))); return;
}

void JP_F_00260070(Ctx *c) { /* func_00260070 */
ENTER(0x260070);
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + 3680);
SET64(2, (s32)rd32(c, (RW(3) + 0))); return;
}

static void JP_B_00260080(Ctx *c, u32 entry) { /* func_00260080 */
ENTER(entry);
switch (entry) { case 0x260094: goto L_00260094; }
SET64(3, (s64)(s32)0x400000);
SET64(2, (s64)(s32)0x400000);
SET32(3, RW(3) + 3700);
SET32(2, RW(2) + 3696);
SET64(5, (s32)rd32(c, (RW(3) + 0)));
L_00260094:;
wr32(c, (RW(2) + 0), RW(5));
wr32(c, (RW(3) + 0), RW(4)); return;
}
void JP_F_00260080(Ctx *c) { JP_B_00260080(c, 0x260080); }
void JP_F_00260094(Ctx *c) { JP_B_00260080(c, 0x260094); }

void JP_F_002600A0(Ctx *c) { /* func_002600A0 */
ENTER(0x2600a0);
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + 3700);
SET64(2, (s32)rd32(c, (RW(3) + 0))); return;
}

void JP_F_002600B0(Ctx *c) { /* func_002600B0 */
ENTER(0x2600b0);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x400000);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(4) != RD(3); wr32(c, (RW(2) + 3704), RW(4)); if (t) goto L_002600E0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 12792);
SET32(29, RW(29) + 16); { JP_F_00111888(c); return; }
L_002600E0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002600F0(Ctx *c) { /* func_002600F0 */
ENTER(0x2600f0);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + 3704))); return;
}

void JP_F_00260100(Ctx *c) { /* func_00260100 */
ENTER(0x260100);
SET64(3, (s64)(s32)0x400000);
SET32(2, RW(4) << 24);
SET32(3, RW(3) + 3660);
SET32(2, RSW(2) >> 24);
SET32(29, RW(29) + -16);
SET64(6, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) != RD(5); wr32(c, (RW(6) + 3708), RW(2)); if (t) goto L_00260148; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 12824);
SET32(29, RW(29) + 16); { JP_F_00111888(c); return; }
L_00260148:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00260158(Ctx *c) { /* func_00260158 */
ENTER(0x260158);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + 3708))); return;
}

void JP_F_00260168(Ctx *c) { /* func_00260168 */
ENTER(0x260168);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + 3708)));
SET32(4, RW(0) + 1);
{ int t = RD(3) != RD(4); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00260190; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C0C8(c); return; }
L_00260190:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002601A0(Ctx *c) { /* func_002601A0 */
ENTER(0x2601a0);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + 3708)));
SET32(4, RW(0) + 1);
{ int t = RD(3) != RD(4); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002601C8; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C140(c); return; }
L_002601C8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002601D8(Ctx *c) { /* func_002601D8 */
ENTER(0x2601d8);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(2) + 3652);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x260200); SET64(4, RD(18) + RD(0)); JP_F_0026CC20(c);
SET64(17, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(4, RD(0) | 0x9600); if (t) goto L_00260244; }
SET64(31, 0x260214);  JP_F_00260080(c);
SET64(31, 0x26021c); SET64(4, RD(16) + RD(0)); JP_F_00123B10(c);
SET64(4, RD(0) | 0x9601);
SET64(31, 0x260228); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
if (RD(16) != RD(0)) { wr32(c, (RW(18) + 0), RW(0)); goto L_00260240; }
SET64(31, 0x260238);  JP_F_00123C78(c);
SET64(17, RD(2) + RD(0));
wr32(c, (RW(18) + 0), RW(0));
L_00260240:;
SET64(2, RD(17) + RD(0));
L_00260244:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00260260(Ctx *c) { /* func_00260260 */
ENTER(0x260260);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x260284); SET64(18, RD(6) + RD(0)); JP_F_00260168(c);
SET64(2, (s64)(s32)0x400000);
SET32(3, RW(0) + 1);
SET64(7, (s32)rd32(c, (RW(2) + 3704)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) << 32);
SET64(5, RSD(5) >> 32);
{ int t = RD(7) != RD(3); SET64(6, RD(18) + RD(0)); if (t) goto L_002602D0; }
SET64(31, 0x2602ac); SET64(5, RD(17) + RD(0)); JP_F_00116050(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(16, RD(2) + RD(0));
SET32(4, RW(4) + 12848);
{ int t = RSD(16) >= 0; SET64(5, RD(16) + RD(0)); if (t) goto L_002602F4; }
SET64(31, 0x2602c8);  JP_F_00111888(c);
 goto L_002602F4;
L_002602D0:;
SET64(31, 0x2602d8);  JP_F_00113EB8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(16, RD(2) + RD(0));
SET32(4, RW(4) + 12880);
{ int t = RSD(16) >= 0; SET64(5, RD(16) + RD(0)); if (t) goto L_002602F4; }
SET64(31, 0x2602f4);  JP_F_00111888(c);
L_002602F4:;
SET64(31, 0x2602fc);  JP_F_002601A0(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00260318(Ctx *c) { /* func_00260318 */
ENTER(0x260318);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x26033c); SET64(18, RD(6) + RD(0)); JP_F_00260168(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x26034c); SET64(6, RD(18) + RD(0)); JP_F_00114610(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(16, RD(2) + RD(0));
SET32(4, RW(4) + 12912);
{ int t = RSD(16) >= 0; SET64(5, RD(16) + RD(0)); if (t) goto L_00260368; }
SET64(31, 0x260368);  JP_F_00111888(c);
L_00260368:;
SET64(31, 0x260370);  JP_F_002601A0(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00260390(Ctx *c) { /* func_00260390 */
ENTER(0x260390);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2603ac); SET64(17, RD(5) + RD(0)); JP_F_00260168(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2603b8); SET64(5, RD(17) + RD(0)); JP_F_00113AB0(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(16, RD(2) + RD(0));
SET32(4, RW(4) + 12944);
{ int t = RSD(16) >= 0; SET64(5, RD(16) + RD(0)); if (t) goto L_002603D4; }
SET64(31, 0x2603d4);  JP_F_00111888(c);
L_002603D4:;
SET64(31, 0x2603dc);  JP_F_002601A0(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002603F8(Ctx *c) { /* func_002603F8 */
ENTER(0x2603f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x26040c); SET64(16, RD(4) + RD(0)); JP_F_00260168(c);
SET64(31, 0x260414); SET64(4, RD(16) + RD(0)); JP_F_00113D38(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(16, RD(2) + RD(0));
SET32(4, RW(4) + 12976);
{ int t = RSD(16) >= 0; SET64(5, RD(16) + RD(0)); if (t) goto L_00260430; }
SET64(31, 0x260430);  JP_F_00111888(c);
L_00260430:;
SET64(31, 0x260438);  JP_F_002601A0(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00260450(Ctx *c) { /* func_00260450 */
ENTER(0x260450);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x260474); SET64(18, RD(6) + RD(0)); JP_F_00260168(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x260484); SET64(6, RD(18) + RD(0)); JP_F_001140F0(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(16, RD(2) + RD(0));
SET32(4, RW(4) + 13008);
{ int t = RSD(16) >= 0; SET64(5, RD(16) + RD(0)); if (t) goto L_002604A0; }
SET64(31, 0x2604a0);  JP_F_00111888(c);
L_002604A0:;
SET64(31, 0x2604a8);  JP_F_002601A0(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002604C8(Ctx *c) { /* func_002604C8 */
ENTER(0x2604c8);
SET32(29, RW(29) + -112);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 80), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(16));
wr64(c, (RW(29) + 72), RD(17));
wr64(c, (RW(29) + 88), RD(19));
wr64(c, (RW(29) + 96), RD(31));
SET64(4, (s8)rd8(c, (RW(18) + 1)));
{ int t = RD(4) != RD(2); SET64(16, rd64(c, (RW(29) + 64))); if (t) goto L_0026081C; }
SET64(2, (s8)rd8(c, (RW(18) + 2)));
{ int t = RD(2) != RD(4); SET64(3, rd8(c, (RW(18) + 2))); if (t) goto L_00260594; }
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET32(16, RW(18) + 12);
SET64(5, RD(0) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x260520); SET32(17, RW(18) + 20); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 8)));
SET32(5, RW(0) + 1);
wr32(c, (RW(18) + 16), RW(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x260540); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 60)));
SET64(3, (s32)rd32(c, (RW(18) + 16)));
wr32(c, (RW(18) + 24), RW(0));
SET32(2, RW(2) + RW(3));
wr8(c, (RW(18) + 2), (u8)RW(0));
{ int t = RD(3) == RD(0); wr32(c, (RW(18) + 60), RW(2)); if (t) goto L_00260590; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x26056c); SET32(4, RW(4) + 13088); JP_F_00251820(c);
L_00260570:;
 { POLL(); goto L_00260570; }
L_00260590:;
SET64(3, rd8(c, (RW(18) + 2)));
L_00260594:;
{ int t = RD(3) != RD(0); SET64(16, rd64(c, (RW(29) + 64))); if (t) goto L_0026081C; }
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(6, (s64)(s32)0x7fff0000);
SET64(7, RD(29) + RD(0));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x2605bc); SET64(6, RD(6) | 0xffff); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 8)));
SET32(19, RW(29) + 32);
SET64(6, (s64)(s32)0x7fff0000);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(5, RD(0) + RD(0));
SET64(6, RD(6) | 0xffff);
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x2605e0); SET64(7, RD(19) + RD(0)); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(18) + 56)));
SET64(17, (s32)rd32(c, (RW(29) + 36)));
SET32(16, RW(29) + 16);
SET64(8, (s32)rd32(c, (RW(29) + 4)));
SET64(4, RD(29) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(3, RSD(8) < RSD(17));
if (RD(5) == RD(0)) { rt_break(c, 0x260604); goto L_00260608; }
L_00260608:;
if (RD(3) != 0) SET64(17, RD(8));
div_s(c, 0, RSW(17), RSW(5));
SET64(2, c->lo.d[0]);
mul_s(c, 0, 17, RSW(2), RSW(5));
SET64(31, 0x260620); SET64(5, RD(17) + RD(0)); JP_F_0026B318(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(6, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x260638); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(19) + RD(0));
SET32(16, RW(29) + 48);
SET64(5, RD(17) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(31, 0x260650); SET64(7, RD(16) + RD(0)); JP_F_0026B318(c);
SET64(4, (s32)rd32(c, (RW(18) + 8)));
SET64(6, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x260668); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
if (RSD(17) <= 0) { SET64(16, rd64(c, (RW(29) + 64))); goto L_0026081C; }
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(2, RD(3) & 0x3f);
{ int t = RD(2) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_002606C0; }
SET64(31, 0x260688); SET32(4, RW(4) + 13120); JP_F_00251820(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET32(4, RW(4) + 13160);
SET64(6, (s32)rd32(c, (RW(29) + 32)));
SET64(31, 0x2606a0); SET64(7, (s32)rd32(c, (RW(29) + 4))); JP_F_00251820(c);
L_002606A0:;
 { POLL(); goto L_002606A0; }
L_002606C0:;
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(4) & 0x3f);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(29) + 32))); goto L_00260718; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2606dc); SET32(4, RW(4) + 13208); JP_F_00251820(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET32(4, RW(4) + 13160);
SET64(6, (s32)rd32(c, (RW(29) + 32)));
SET64(31, 0x2606f4); SET64(7, (s32)rd32(c, (RW(29) + 4))); JP_F_00251820(c);
L_002606F8:;
 { POLL(); goto L_002606F8; }
L_00260718:;
SET64(2, RD(2) & 0x3f);
{ int t = RD(2) == RD(0); SET32(5, RW(4) + RW(3)); if (t) goto L_00260768; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x260730); SET32(4, RW(4) + 13248); JP_F_00251820(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET32(4, RW(4) + 13160);
SET64(6, (s32)rd32(c, (RW(29) + 32)));
SET64(31, 0x260748); SET64(7, (s32)rd32(c, (RW(29) + 4))); JP_F_00251820(c);
L_00260748:;
 { POLL(); goto L_00260748; }
L_00260768:;
SET64(31, 0x260770); SET32(5, RW(5) + -1); JP_F_0010FF58(c);
SET64(2, (s64)(s32)0xfff0000);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(2) | 0xffff);
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET32(4, RW(18) + 28);
SET64(7, (s32)rd32(c, (RW(29) + 32)));
SET64(3, RD(3) & RD(2));
wr32(c, (RW(18) + 28), RW(3));
SET32(5, RW(0) + 1);
wr32(c, (RW(18) + 32), RW(7));
wr32(c, (RW(18) + 36), RW(6));
SET64(31, 0x2607a4); wr32(c, (RW(18) + 40), RW(0)); JP_F_0010FA20(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(18) + 44), RW(2)); if (t) goto L_002607F0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2607b8); SET32(4, RW(4) + 13288); JP_F_00251820(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x2607d0); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 8)));
SET64(6, RD(19) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x2607e8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 64))); goto L_0026081C;
L_002607F0:;
ldl(c, 4, (RW(29) + 7));
ldr(c, 4, (RW(29) + 0));
sdl(c, 4, (RW(18) + 19));
sdr(c, 4, (RW(18) + 12));
SET32(2, RW(0) + 1);
ldl(c, 4, (RW(19) + 7));
ldr(c, 4, (RW(19) + 0));
sdl(c, 4, (RW(18) + 27));
sdr(c, 4, (RW(18) + 20));
wr8(c, (RW(18) + 2), (u8)RW(2));
SET64(16, rd64(c, (RW(29) + 64)));
L_0026081C:;
SET64(17, rd64(c, (RW(29) + 72)));
SET64(18, rd64(c, (RW(29) + 80)));
SET64(19, rd64(c, (RW(29) + 88)));
SET64(31, rd64(c, (RW(29) + 96)));
SET32(29, RW(29) + 112); return;
}

void JP_F_00260838(Ctx *c) { /* func_00260838 */
ENTER(0x260838);
SET64(2, (s8)rd8(c, (RW(4) + 1))); return;
}

void JP_F_00260840(Ctx *c) { /* func_00260840 */
ENTER(0x260840);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 3728);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 1);
L_00260868:;
SET64(3, (s8)rd8(c, (RW(16) + 1)));
if (RD(3) != RD(18)) { SET32(17, RW(17) + 1); goto L_00260894; }
SET64(2, (s8)rd8(c, (RW(16) + 2)));
if (RD(2) != RD(3)) { SET32(17, RW(17) + 1); goto L_00260894; }
SET64(31, 0x260888); SET64(4, (s32)rd32(c, (RW(16) + 44))); JP_F_0010FA00(c);
if (RSD(2) >= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002608E8; }
SET32(17, RW(17) + 1);
L_00260894:;
SET64(2, RSD(17) < (s64)32);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 64); if (t) { POLL(); goto L_00260868; } }
SET64(2, (s64)(s32)0x400000);
SET32(18, RW(0) + 1);
SET32(16, RW(2) + 3728);
SET32(17, RW(0) + 31);
L_002608B0:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_002608C8; }
SET64(31, 0x2608c4); SET64(4, RD(16) + RD(0)); JP_F_002604C8(c);
SET32(17, RW(17) + -1);
L_002608C8:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 64); if (t) { POLL(); goto L_002608B0; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00261408(c); return; }
L_002608E8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00260900(Ctx *c) { /* func_00260900 */
ENTER(0x260900);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 3724);
wr64(c, (RW(29) + 8), RD(31));
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 13328);
SET64(31, 0x260924); SET64(5, (s32)rd32(c, (RW(16) + 0))); JP_F_00251820(c);
SET64(4, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(4, RW(4) + 3728);
SET64(5, RD(0) + RD(0));
{ int t = RD(2) != RD(0); SET32(6, RW(0) + 2048); if (t) goto L_00260948; }
SET64(31, 0x260944);  JP_F_001273D0(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
L_00260948:;
SET32(2, RW(2) + 1);
SET64(4, (s64)(s32)0x4b0000);
wr32(c, (RW(16) + 0), RW(2));
SET32(4, RW(4) + 13352);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00251820(c); return; }
}

void JP_F_00260968(Ctx *c) { /* func_00260968 */
ENTER(0x260968);
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + 3724);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 0), RW(2)); return;
}

void JP_F_00260980(Ctx *c) { /* func_00260980 */
ENTER(0x260980);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2609a4); SET64(19, RD(5) + RD(0)); JP_F_00268EB0(c);
SET64(2, (s64)(s32)0x400000);
SET32(17, RW(2) + 3728);
SET64(3, (s8)rd8(c, (RW(17) + 0)));
{ int t = RD(3) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002609E4; }
SET64(6, RD(17) + RD(0));
SET64(4, RD(17) + RD(0));
L_002609C0:;
SET32(5, RW(5) + 1);
SET32(4, RW(4) + 64);
SET64(2, RSD(5) < (s64)32);
{ int t = RD(2) == RD(0); SET32(3, RW(5) << 6); if (t) goto L_002609E4; }
SET64(2, (s8)rd8(c, (RW(4) + 0)));
{ int t = RD(2) != RD(0); SET32(17, RW(3) + RW(6)); if (t) { POLL(); goto L_002609C0; } }
L_002609E4:;
SET32(2, RW(0) + 32);
{ int t = RD(5) != RD(2); SET64(4, RD(17) + RD(0)); if (t) goto L_00260A10; }
SET64(4, (s64)(s32)0x4b0000);
SET32(5, RW(0) + 32);
SET32(4, RW(4) + 13368);
SET64(31, 0x260a04); SET32(6, RW(0) + 32); JP_F_00251820(c);
SET64(17, RD(0) + RD(0)); goto L_00260A44;
L_00260A10:;
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 64);
SET64(31, 0x260a20); SET32(16, RW(0) + 64); JP_F_001273D0(c);
wr8(c, (RW(17) + 1), (u8)RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 56), RW(16));
wr32(c, (RW(17) + 4), RW(18));
wr32(c, (RW(17) + 8), RW(19));
wr8(c, (RW(17) + 0), (u8)RW(2));
wr8(c, (RW(17) + 2), (u8)RW(0));
wr32(c, (RW(17) + 48), RW(2));
wr32(c, (RW(17) + 52), RW(0));
L_00260A44:;
SET64(31, 0x260a4c);  JP_F_00268EC8(c);
SET64(2, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00260A70(Ctx *c) { /* func_00260A70 */
ENTER(0x260a70);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x260a84); SET64(16, RD(4) + RD(0)); JP_F_00268EB0(c);
SET64(31, rd64(c, (RW(29) + 8)));
wr8(c, (RW(16) + 0), (u8)RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268EC8(c); return; }
}

void JP_F_00260A98(Ctx *c) { /* func_00260A98 */
ENTER(0x260a98);
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 60), RW(0));
wr8(c, (RW(4) + 1), (u8)RW(2)); return;
}

void JP_F_00260AA8(Ctx *c) { /* func_00260AA8 */
ENTER(0x260aa8);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
wr8(c, (RW(18) + 1), (u8)RW(0));
SET64(2, (s8)rd8(c, (RW(18) + 2)));
{ int t = RD(2) != RD(3); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00260B44; }
L_00260AD8:;
SET64(31, 0x260ae0); SET64(4, (s32)rd32(c, (RW(18) + 44))); JP_F_0010FA00(c);
{ int t = RSD(2) >= 0; SET32(16, RW(18) + 12); if (t) { POLL(); goto L_00260AD8; } }
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(5, RD(0) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x260b04); SET32(17, RW(18) + 20); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 8)));
SET32(5, RW(0) + 1);
wr32(c, (RW(18) + 16), RW(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x260b24); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 60)));
SET64(3, (s32)rd32(c, (RW(18) + 16)));
wr8(c, (RW(18) + 2), (u8)RW(0));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(18) + 24), RW(0));
wr32(c, (RW(18) + 60), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00260B44:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00260B58(Ctx *c) { /* func_00260B58 */
ENTER(0x260b58);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
{ int t = RD(4) == RD(2); SET64(3, RD(4) < (u64)(s64)2); if (t) goto L_00260B90; }
{ int t = RD(3) != RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_00260BF8; }
SET32(2, RW(0) + 3);
{ int t = RD(4) == RD(2); SET32(2, RW(4) + -1024); if (t) goto L_00260BB0; }
SET32(3, RW(2) << 2); goto L_00260BC0;
L_00260B90:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET64(6, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x260ba4); SET64(7, (s32)rd32(c, (RW(16) + 12))); JP_F_00260E18(c);
wr32(c, (RW(16) + 0), RW(2)); goto L_00260BF4;
L_00260BB0:;
SET64(31, 0x260bb8); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00260FB0(c);
SET64(2, RD(16) + RD(0)); goto L_00260BF8;
L_00260BC0:;
SET64(2, RD(2) < (u64)(s64)64);
{ int t = RD(2) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_00260BF8; }
SET64(2, (s64)(s32)0x400000);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 8384)));
{ int t = RD(2) == RD(0); SET32(6, RW(6) >> 2); if (t) goto L_00260BF4; }
SET64(4, (s64)(s32)0x400000);
SET32(4, RW(4) + RW(3));
SET64(4, (s32)rd32(c, (RW(4) + 8640)));
{ u32 t = RW(2); SET64(31, 0x260bf4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_00260BF4:;
SET64(2, RD(16) + RD(0));
L_00260BF8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00260C08(Ctx *c) { /* func_00260C08 */
ENTER(0x260c08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x260c1c); SET64(16, (s64)(s32)0x400000); JP_F_0010F550(c);
SET32(16, RW(16) + 8096);
SET64(5, RD(2) + RD(0));
SET64(31, 0x260c2c); SET64(4, RD(16) + RD(0)); JP_F_00112C60(c);
SET64(4, (s64)(s32)0x400000);
SET64(2, (s64)(s32)0x400000);
SET64(6, (s64)(s32)0x260000);
SET64(5, (s32)rd32(c, (RW(2) + 5780)));
SET64(7, (s64)(s32)0x400000);
SET64(10, RD(16) + RD(0));
SET32(6, RW(6) + 2904);
SET32(7, RW(7) + 8128);
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x260c5c); SET32(4, RW(4) + 8024); JP_F_00112CF8(c);
SET64(2, (s64)(s32)0x400000);
SET32(2, RW(2) + 5784);
SET32(3, RW(0) + 1);
wr32(c, (RW(2) + 0), RW(3));
SET64(31, 0x260c74); SET64(4, RD(16) + RD(0)); JP_F_00113110(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00260C88(Ctx *c) { /* func_00260C88 */
ENTER(0x260c88);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, (s64)(s32)0x530000);
SET32(2, RW(2) + -15296);
wr64(c, (RW(29) + 24), RD(31));
SET32(16, RW(16) + -15040);
SET64(3, (s64)(s32)0x400000);
wr32(c, (RW(2) + 0), RW(4));
SET32(4, RW(3) + 7984);
wr32(c, (RW(2) + 4), RW(5));
SET32(5, RW(0) + 2);
wr32(c, (RW(2) + 8), RW(6));
SET64(6, RD(0) + RD(0));
wr32(c, (RW(2) + 12), RW(7));
SET64(7, RD(2) + RD(0));
SET64(9, RD(16) + RD(0));
SET32(8, RW(0) + 16);
SET32(10, RW(0) + 4);
SET64(11, RD(0) + RD(0));
SET64(31, 0x260ce0); wr32(c, (RW(29) + 0), RW(0)); JP_F_00112A28(c);
SET64(31, rd64(c, (RW(29) + 24)));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00260CF8(Ctx *c) { /* func_00260CF8 */
ENTER(0x260cf8);
SET64(7, (s64)(s32)0x530000);
SET32(29, RW(29) + -32);
SET32(7, RW(7) + -15296);
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s64)(s32)0x400000);
SET64(9, (s64)(s32)0x530000);
wr32(c, (RW(7) + 0), RW(4));
SET32(4, RW(2) + 7984);
SET32(9, RW(9) + -15040);
SET32(5, RW(0) + 3);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 4);
SET64(10, RD(0) + RD(0));
SET64(11, RD(0) + RD(0));
SET64(31, 0x260d38); wr32(c, (RW(29) + 0), RW(0)); JP_F_00112A28(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00260D48(Ctx *c) { /* func_00260D48 */
ENTER(0x260d48);
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + 5792);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2)); return;
}

void JP_F_00260D60(Ctx *c) { /* func_00260D60 */
ENTER(0x260d60);
SET32(29, RW(29) + -16);
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(5, RD(0) + RD(0));
{ int t = RSD(6) <= 0; wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00260D9C; }
SET32(7, RW(0) + -86);
L_00260D80:;
SET32(3, RW(4) + RW(5));
SET32(5, RW(5) + 1);
SET64(2, RSD(5) < RSD(6));
{ int t = RD(2) != RD(0); wr8(c, (RW(3) + 0), (u8)RW(7)); if (t) { POLL(); goto L_00260D80; } }
L_00260D9C:;
SET64(16, (s64)(s32)0x400000);
SET64(5, (s64)(s32)0x4b0000);
SET32(16, RW(16) + 5796);
SET32(5, RW(5) + 13440);
SET64(31, 0x260db4); SET64(6, (s32)rd32(c, (RW(16) + 0))); JP_F_00129C30(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(3, RW(3) + 1);
wr32(c, (RW(16) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00260DD0(Ctx *c) { /* func_00260DD0 */
ENTER(0x260dd0);
SET32(3, RW(4) << 4);
SET64(5, RD(4) < (u64)(s64)16);
SET64(2, RD(0) + RD(0));
{ int t = RD(5) == RD(0); SET32(3, RW(3) + RW(4)); if (t) goto L_00260DF4; }
SET32(2, RW(3) << 2);
SET64(1, (s64)(s32)0x400000);
SET32(1, RW(1) + 5808);
SET32(2, RW(1) + RW(2));
L_00260DF4:;
 return;
}

void JP_F_00260E00(Ctx *c) { /* func_00260E00 */
ENTER(0x260e00);
wr32(c, (RW(4) + 44), RW(0));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(0)); return;
}

void JP_F_00260E18(Ctx *c) { /* func_00260E18 */
ENTER(0x260e18);
SET32(29, RW(29) + -48);
SET64(8, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
SET64(2, RD(18) & 0x3f);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(17, RD(7) + RD(0));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_00260E58; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 13464); goto L_00260EE8;
L_00260E58:;
SET64(2, RD(19) & 0x1f);
{ int t = RD(2) == RD(0); SET64(2, RD(17) & 0x3f); if (t) goto L_00260E70; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 13496); goto L_00260EE8;
L_00260E70:;
{ int t = RD(2) == RD(0); SET64(2, RD(8) < (u64)(s64)16); if (t) goto L_00260E88; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(17) + RD(0));
SET32(4, RW(4) + 13528); goto L_00260E9C;
L_00260E88:;
{ int t = RD(2) != RD(0); SET32(3, RW(8) << 4); if (t) goto L_00260EB0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(8) + RD(0));
SET32(4, RW(4) + 13552);
L_00260E9C:;
SET64(31, 0x260ea4);  JP_F_00251820(c);
SET64(2, RD(0) + RD(0)); goto L_00260F94;
L_00260EB0:;
SET32(3, RW(3) + RW(8));
SET32(3, RW(3) << 2);
SET64(16, (s64)(s32)0x400000);
SET32(16, RW(16) + 5808);
SET32(16, RW(16) + RW(3));
SET64(8, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(8) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00260F94; }
SET64(31, 0x260ed8);  JP_F_00260C88(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(16) + 4), RW(2)); if (t) goto L_00260EF8; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 13576);
L_00260EE8:;
SET64(31, 0x260ef0);  JP_F_00251820(c);
SET64(2, RD(0) + RD(0)); goto L_00260F94;
L_00260EF8:;
SET32(3, RW(17) + -64);
SET64(4, (s64)(s32)0x20000000);
SET32(2, RW(18) + RW(3));
SET64(6, RD(3) + RD(0));
SET64(2, RD(2) | RD(4));
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
wr32(c, (RW(16) + 16), RW(3));
wr32(c, (RW(16) + 28), RW(17));
wr32(c, (RW(16) + 24), RW(19));
wr32(c, (RW(16) + 20), RW(2));
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 12), RW(18));
SET64(31, 0x260f34); wr8(c, (RW(16) + 1), (u8)RW(0)); JP_F_001273D0(c);
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(4, RD(5) + RD(0));
SET32(5, RW(5) + RW(2));
SET64(31, 0x260f4c); SET32(5, RW(5) + 63); JP_F_0010FF58(c);
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(4, RD(5) + RD(0));
SET32(5, RW(5) + RW(2));
SET64(31, 0x260f64); SET32(5, RW(5) + 63); JP_F_00110098(c);
SET64(2, (s64)(s32)0x260000);
SET64(3, (s64)(s32)0x260000);
SET32(4, RW(0) + 1);
SET32(3, RW(3) + 3424);
SET32(2, RW(2) + 3400);
wr32(c, (RW(16) + 40), RW(3));
wr8(c, (RW(16) + 0), (u8)RW(4));
wr32(c, (RW(16) + 36), RW(0));
wr32(c, (RW(16) + 44), RW(0));
wr8(c, (RW(16) + 2), (u8)RW(4));
wr32(c, (RW(16) + 32), RW(2));
SET64(2, RD(16) + RD(0));
L_00260F94:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00260FB0(Ctx *c) { /* func_00260FB0 */
ENTER(0x260fb0);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
wr8(c, (RW(16) + 2), (u8)RW(0));
SET64(2, (s8)rd8(c, (RW(16) + 1)));
{ int t = RD(2) != RD(3); SET32(17, RW(0) + 1); if (t) goto L_00260FEC; }
L_00260FD8:;
SET64(31, 0x260fe0);  JP_F_00261408(c);
SET64(2, (s8)rd8(c, (RW(16) + 1)));
{ int t = RD(2) == RD(17);  if (t) { POLL(); goto L_00260FD8; } }
L_00260FEC:;
SET64(31, 0x260ff4); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00260CF8(c);
SET64(4, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(6, RW(0) + 68);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_001273D0(c); return; }
}

void JP_F_00261018(Ctx *c) { /* func_00261018 */
ENTER(0x261018);
wr32(c, (RW(4) + 36), RW(6));
wr32(c, (RW(4) + 32), RW(5)); return;
}

void JP_F_00261028(Ctx *c) { /* func_00261028 */
ENTER(0x261028);
wr32(c, (RW(4) + 44), RW(6));
wr32(c, (RW(4) + 40), RW(5)); return;
}

void JP_F_00261038(Ctx *c) { /* func_00261038 */
ENTER(0x261038);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(3, RW(3) + 5800);
wr64(c, (RW(29) + 16), RD(31));
SET32(4, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(5, (s8)rd8(c, (RW(16) + 1)));
SET32(2, RW(2) + 1);
{ int t = RD(5) != RD(4); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_002610C0; }
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(4, (s32)rd32(c, (RW(2) + 60)));
SET64(3, RSD(3) < RSD(4));
if (RD(3) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_002610C4; }
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET64(4, RD(5) + RD(0));
SET32(5, RW(5) + RW(2));
SET64(31, 0x26109c); SET32(5, RW(5) + -1); JP_F_00110098(c);
SET64(3, (s32)rd32(c, (RW(16) + 32)));
SET64(4, (s32)rd32(c, (RW(16) + 36)));
SET64(5, (s32)rd32(c, (RW(16) + 12)));
{ u32 t = RW(3); SET64(31, 0x2610b0); SET64(6, (s32)rd32(c, (RW(16) + 16))); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(3, (s32)rd32(c, (RW(2) + 60)));
wr8(c, (RW(16) + 1), (u8)RW(0));
wr32(c, (RW(16) + 8), RW(3));
L_002610C0:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
L_002610C4:;
SET64(3, (s64)(s32)0xff0000);
SET64(3, RD(3) | 0xff00);
SET64(4, (s64)(s32)0x10000);
SET64(2, RD(2) & RD(3));
if (RD(2) != RD(4)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00261188; }
SET64(2, (s64)(s32)0x400000);
SET32(3, RW(0) + 1);
SET64(17, (s32)rd32(c, (RW(2) + 5788)));
if (RD(17) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00261188; }
SET64(6, (s32)rd32(c, (RW(16) + 16)));
SET64(4, (s32)rd32(c, (RW(16) + 44)));
SET64(2, (s32)rd32(c, (RW(16) + 40)));
{ u32 t = RW(2); SET64(31, 0x261104); SET64(5, (s32)rd32(c, (RW(16) + 12))); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(3, RW(3) + 1);
SET64(5, (s32)rd32(c, (RW(16) + 12)));
wr32(c, (RW(16) + 8), RW(3));
wr32(c, (RW(2) + 60), RW(3));
SET64(4, RD(5) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET32(5, RW(5) + RW(2));
SET64(31, 0x261130); SET32(5, RW(5) + -1); JP_F_0010FF58(c);
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(4, RD(5) + RD(0));
SET32(5, RW(5) + RW(2));
SET64(31, 0x261148); SET32(5, RW(5) + 63); JP_F_00110098(c);
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET64(2, (s64)(s32)0xfff0000);
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET64(5, (s32)rd32(c, (RW(16) + 28)));
SET64(2, RD(2) | 0xffff);
SET64(3, RD(3) & RD(2));
wr32(c, (RW(16) + 52), RW(4));
wr32(c, (RW(16) + 56), RW(5));
SET32(5, RW(0) + 1);
wr32(c, (RW(16) + 48), RW(3));
SET32(4, RW(16) + 48);
SET64(31, 0x26117c); wr32(c, (RW(16) + 60), RW(0)); JP_F_0010FA20(c);
wr8(c, (RW(16) + 1), (u8)RW(17));
wr32(c, (RW(16) + 64), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00261188:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00261198(Ctx *c) { /* func_00261198 */
ENTER(0x261198);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(19) + 5804)));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(20));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_00261258; }
SET64(16, (s64)(s32)0x400000);
SET64(18, (s64)(s32)0x400000);
SET64(20, (s64)(s32)0x4b0000);
SET32(17, RW(16) + 7984);
SET64(5, (s32)rd32(c, (RW(18) + 5780)));
L_002611D8:;
SET32(4, RW(16) + 7984);
SET64(31, 0x2611e4); SET64(6, RD(0) + RD(0)); JP_F_00112858(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(17) + 36))); goto L_00261218; }
SET64(31, 0x2611f4); SET32(4, RW(20) + 13616); JP_F_00251820(c);
L_002611F8:;
 { POLL(); goto L_002611F8; }
L_00261218:;
{ int t = RD(2) != RD(0); SET32(3, RW(19) + 5804); if (t) goto L_0026125C; }
SET32(3, RW(0) + -1);
SET64(2, RD(0) | 0xffff);
SET32(2, RW(2) + -4);
L_00261230:;
if (RD(2) != RD(3)) { SET32(2, RW(2) + -4); { POLL(); goto L_00261230; } }
SET64(5, (s32)rd32(c, (RW(18) + 5780))); { POLL(); goto L_002611D8; }
L_00261258:;
SET32(3, RW(19) + 5804);
L_0026125C:;
SET64(19, rd64(c, (RW(29) + 24)));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(2, RW(2) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
wr32(c, (RW(3) + 0), RW(2));
SET32(29, RW(29) + 48); return;
}

void JP_F_00261288(Ctx *c) { /* func_00261288 */
ENTER(0x261288);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(3) + 5804);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_002612E8; }
SET64(2, (s64)(s32)0x400000);
SET32(18, RW(0) + 1);
SET32(16, RW(2) + 5808);
SET32(17, RW(0) + 15);
L_002612C8:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_002612E0; }
SET64(31, 0x2612dc); SET64(4, RD(16) + RD(0)); JP_F_00260FB0(c);
SET32(17, RW(17) + -1);
L_002612E0:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 68); if (t) { POLL(); goto L_002612C8; } }
L_002612E8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00261300(Ctx *c) { /* func_00261300 */
ENTER(0x261300);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(8) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 56), RD(21));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x261338); SET64(20, RD(7) + RD(0)); JP_F_0026C068(c);
{ int t = RSD(16) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_00261370; }
SET64(7, (s64)(s32)0x530000);
SET32(8, RW(7) + -15296);
L_00261348:;
SET32(2, RW(6) << 2);
SET32(6, RW(6) + 1);
SET32(3, RW(2) + RW(18));
SET32(2, RW(2) + RW(8));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(5, RSD(6) < RSD(16));
{ int t = RD(5) != RD(0); wr32(c, (RW(2) + 0), RW(4)); if (t) { POLL(); goto L_00261348; } }
SET64(21, (s64)(s32)0x530000); goto L_00261378;
L_00261370:;
SET64(7, (s64)(s32)0x530000);
SET64(21, (s64)(s32)0x530000);
L_00261378:;
SET64(4, (s64)(s32)0x400000);
SET32(18, RW(21) + -15040);
SET64(6, RD(0) + RD(0));
SET32(4, RW(4) + 7984);
SET32(5, RW(19) + 1024);
SET32(7, RW(7) + -15296);
SET32(8, RW(16) << 2);
SET64(9, RD(18) + RD(0));
SET32(10, RW(17) << 2);
SET64(11, RD(0) + RD(0));
SET64(31, 0x2613a8); wr32(c, (RW(29) + 0), RW(0)); JP_F_00112A28(c);
{ int t = RSD(17) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_002613D8; }
SET64(9, RD(18) + RD(0));
L_002613B8:;
SET32(2, RW(6) << 2);
SET32(6, RW(6) + 1);
SET32(3, RW(2) + RW(9));
SET32(2, RW(2) + RW(20));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(5, RSD(6) < RSD(17));
{ int t = RD(5) != RD(0); wr32(c, (RW(2) + 0), RW(4)); if (t) { POLL(); goto L_002613B8; } }
L_002613D8:;
SET64(31, 0x2613e0);  JP_F_0026C080(c);
SET64(2, (s32)rd32(c, (RW(21) + -15040)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00261408(Ctx *c) { /* func_00261408 */
ENTER(0x261408);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 15);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x261428); SET32(18, RW(0) + 1); JP_F_00268EB0(c);
SET64(2, (s64)(s32)0x400000);
SET32(16, RW(2) + 5808);
L_00261430:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00261448; }
SET64(31, 0x261444); SET64(4, RD(16) + RD(0)); JP_F_00261038(c);
SET32(17, RW(17) + -1);
L_00261448:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 68); if (t) { POLL(); goto L_00261430; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00268EC8(c); return; }
}

void JP_F_00261468(Ctx *c) { /* func_00261468 */
ENTER(0x261468);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + 8896);
SET64(4, RD(0) + RD(0));
SET64(31, 0x261484); SET64(3, (s32)rd32(c, (RW(2) + 0))); JP_F_00262D00(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x400000);
SET32(2, RW(2) + 8920);
SET32(29, RW(29) + 16); return;
}

void JP_F_00261498(Ctx *c) { /* func_00261498 */
ENTER(0x261498);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + 8900)));
SET64(6, RD(4) + RD(0));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002614BC; }
SET64(2, (s64)(s32)0x400000);
{ u32 t = RW(3); SET64(31, 0x2614bc); SET64(4, (s32)rd32(c, (RW(2) + 8904))); rt_call(c, t); }
L_002614BC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002614C8(Ctx *c) { /* func_002614C8 */
ENTER(0x2614c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
SET64(4, RD(0) | 0x8000);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2614e8); SET64(17, RD(5) + RD(0)); JP_F_00260080(c);
SET64(2, (s64)(s32)0x400000);
SET64(6, (s32)rd32(c, (RW(2) + 8908)));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2614fc); SET64(4, RD(16) + RD(0)); JP_F_001229E0(c);
SET64(4, RD(0) | 0x8001);
SET64(31, 0x261508); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00261520(Ctx *c) { /* func_00261520 */
ENTER(0x261520);
SET64(2, (s64)(s32)0x400000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(2) + 9024);
SET32(7, RW(0) + 1);
SET32(6, RW(0) + 2);
L_00261538:;
SET64(2, (s8)rd8(c, (RW(4) + 0)));
if (RD(2) != RD(7)) { SET32(5, RW(5) + 1); goto L_00261554; }
SET64(3, (s8)rd8(c, (RW(4) + 2)));
{ int t = RD(3) == RD(6); SET32(2, RW(0) + 1); if (t) goto L_00261568; }
SET32(5, RW(5) + 1);
L_00261554:;
SET64(2, RSD(5) < (s64)40);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 72); if (t) { POLL(); goto L_00261538; } }
SET64(2, RD(0) + RD(0));
L_00261568:;
 return;
}

static void JP_B_00261570(Ctx *c, u32 entry) { /* func_00261570 */
ENTER(entry);
switch (entry) { case 0x2615c8: goto L_002615C8; case 0x2615d8: goto L_002615D8; case 0x261600: goto L_00261600; case 0x261614: goto L_00261614; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 28)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00261628; }
SET64(31, 0x261594);  JP_F_0026C098(c);
SET64(31, 0x26159c); SET64(4, (s32)rd32(c, (RW(16) + 28))); JP_F_0025F418(c);
SET64(3, RD(2) + RD(0));
SET64(2, RD(3) < (u64)(s64)10);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00261618; }
SET32(2, RW(3) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 13712)));
{ u32 t = RW(3);  switch (t) { case 0x2615c8: goto L_002615C8; case 0x2615d8: goto L_002615D8; case 0x261600: goto L_00261600; case 0x261614: goto L_00261614; default: rt_jump(c, t); return; } }
L_002615C8:;
SET32(2, RW(0) + 3);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
wr8(c, (RW(16) + 2), (u8)RW(2)); goto L_00261608;
L_002615D8:;
SET64(4, (s32)rd32(c, (RW(16) + 16)));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(16) + 12)));
wr32(c, (RW(16) + 20), RW(4));
SET32(2, RW(2) + RW(4));
SET64(4, (s32)rd32(c, (RW(16) + 28)));
wr8(c, (RW(16) + 2), (u8)RW(3));
wr32(c, (RW(16) + 12), RW(2)); goto L_00261608;
L_00261600:;
wr8(c, (RW(16) + 2), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 28)));
L_00261608:;
SET64(31, 0x261610);  JP_F_0025F1D8(c);
wr32(c, (RW(16) + 28), RW(0));
L_00261614:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00261618:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0026C110(c); return; }
L_00261628:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}
void JP_F_00261570(Ctx *c) { JP_B_00261570(c, 0x261570); }
void JP_F_002615C8(Ctx *c) { JP_B_00261570(c, 0x2615c8); }
void JP_F_002615D8(Ctx *c) { JP_B_00261570(c, 0x2615d8); }
void JP_F_00261600(Ctx *c) { JP_B_00261570(c, 0x261600); }
void JP_F_00261614(Ctx *c) { JP_B_00261570(c, 0x261614); }

void JP_F_00261638(Ctx *c) { /* func_00261638 */
ENTER(0x261638);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x26165c); SET32(4, RW(19) + 8912); JP_F_0026CC20(c);
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x400000); if (t) goto L_00261694; }
SET32(18, RW(0) + 1);
SET32(16, RW(2) + 9024);
SET32(17, RW(0) + 39);
L_00261670:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00261688; }
SET64(31, 0x261684); SET64(4, RD(16) + RD(0)); JP_F_00261570(c);
SET32(17, RW(17) + -1);
L_00261688:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 72); if (t) { POLL(); goto L_00261670; } }
wr32(c, (RW(19) + 8912), RW(0));
L_00261694:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002616B0(Ctx *c) { /* func_002616B0 */
ENTER(0x2616b0);
SET64(2, (s64)(s32)0x400000);
SET64(3, (s64)(s32)0x400000);
wr32(c, (RW(2) + 8900), RW(4));
wr32(c, (RW(3) + 8904), RW(5)); return;
}

void JP_F_002616C8(Ctx *c) { /* func_002616C8 */
ENTER(0x2616c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2616dc); SET64(16, RD(4) + RD(0)); JP_F_0012A4D8(c);
SET64(7, RD(2) + RD(0));
{ int t = RD(7) == RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_00261730; }
SET32(9, RW(0) + 47);
SET32(8, RW(0) + 92);
SET32(4, RW(16) + RW(6));
L_002616F8:;
SET32(6, RW(6) + 1);
SET64(2, (s8)rd8(c, (RW(4) + 0)));
SET64(5, RD(6) < RD(7));
{ int t = RD(2) != RD(9); SET64(3, rd8(c, (RW(4) + 0))); if (t) goto L_00261714; }
wr8(c, (RW(4) + 0), (u8)RW(8));
SET64(3, RD(8) + RD(0));
L_00261714:;
SET32(2, RW(3) + -97);
SET64(2, RD(2) < (u64)(s64)26);
{ int t = RD(2) == RD(0); SET32(2, RW(3) + -32); if (t) goto L_00261728; }
wr8(c, (RW(4) + 0), (u8)RW(2));
L_00261728:;
{ int t = RD(5) != RD(0); SET32(4, RW(16) + RW(6)); if (t) { POLL(); goto L_002616F8; } }
L_00261730:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00261740(Ctx *c) { /* func_00261740 */
ENTER(0x261740);
SET32(29, RW(29) + -80);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 64), RD(31)); if (t) goto L_002617B4; }
SET64(31, 0x261764); SET64(5, RD(29) + RD(0)); JP_F_00262910(c);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET32(17, RW(3) + 11904);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_002617B0; }
SET64(31, 0x261784);  JP_F_002620A0(c);
SET64(31, 0x26178c); SET64(4, RD(0) | 0x8100); JP_F_00260080(c);
SET64(31, 0x261794); SET64(4, RD(0) + RD(0)); JP_F_00122F20(c);
SET64(31, 0x26179c); SET64(4, RD(0) | 0x8101); JP_F_00260080(c);
SET64(5, RD(17) + RD(0));
SET64(31, 0x2617a8); SET64(4, RD(29) + RD(0)); JP_F_002614C8(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 48))); if (t) goto L_002617B8; }
L_002617B0:;
SET32(2, RW(0) + 1);
L_002617B4:;
SET64(16, rd64(c, (RW(29) + 48)));
L_002617B8:;
SET64(17, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_002617C8(Ctx *c) { /* func_002617C8 */
ENTER(0x2617c8);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 64), RD(31)); if (t) goto L_002617F0; }
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 13752); goto L_00261860;
L_002617F0:;
SET64(31, 0x2617f8); SET64(5, RD(29) + RD(0)); JP_F_00262910(c);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET32(17, RW(3) + 11904);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00261874; }
SET64(31, 0x261818);  JP_F_002620A0(c);
SET64(31, 0x261820); SET64(4, RD(0) | 0x8200); JP_F_00260080(c);
SET64(31, 0x261828); SET64(4, RD(0) + RD(0)); JP_F_00122F20(c);
SET64(31, 0x261830); SET64(4, RD(0) | 0x8201); JP_F_00260080(c);
SET64(5, RD(17) + RD(0));
SET64(31, 0x26183c); SET64(4, RD(29) + RD(0)); JP_F_002614C8(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 13800);
{ int t = RD(2) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00261870; }
SET64(31, 0x261854);  JP_F_00251820(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 13840);
SET64(4, RD(0) + RD(0));
L_00261860:;
SET64(31, 0x261868);  JP_F_00261498(c);
SET64(2, RD(0) + RD(0)); goto L_00261874;
L_00261870:;
SET64(2, (s32)rd32(c, (RW(29) + 4)));
L_00261874:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00261888(Ctx *c) { /* func_00261888 */
ENTER(0x261888);
SET64(2, (s64)(s32)0x400000);
SET64(5, RD(0) + RD(0));
SET32(3, RW(2) + 9024);
SET32(4, RW(0) + 39);
L_00261898:;
SET64(2, (s8)rd8(c, (RW(3) + 0)));
SET32(4, RW(4) + -1);
SET64(2, RD(2) ^ 0x0);
if (RD(2) == 0) SET64(5, RD(3));
{ int t = RSD(4) >= 0; SET32(3, RW(3) + 72); if (t) { POLL(); goto L_00261898; } }
SET64(2, RD(5) + RD(0)); return;
}

void JP_F_002618C0(Ctx *c) { /* func_002618C0 */
ENTER(0x2618c0);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 72);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_002618E0(Ctx *c) { /* func_002618E0 */
ENTER(0x2618e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
{ int t = RD(18) != RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_00261910; }
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 13888); goto L_00261948;
L_00261910:;
{ int t = RD(6) == RD(0); SET64(5, (s64)(s32)0x4b0000); if (t) goto L_00261928; }
SET64(4, RD(0) + RD(0));
SET32(5, RW(5) + 13928); goto L_00261948;
L_00261928:;
SET64(31, 0x261930);  JP_F_00261888(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(0); SET32(19, RW(17) + 32); if (t) goto L_00261958; }
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(0) + RD(0));
SET32(5, RW(5) + 13968);
L_00261948:;
SET64(31, 0x261950);  JP_F_00261498(c);
SET64(2, RD(0) + RD(0)); goto L_00261A38;
L_00261958:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x261964); SET64(5, RD(19) + RD(0)); JP_F_00262910(c);
SET64(5, (s32)rd32(c, (RW(17) + 36)));
{ int t = RD(5) != RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002619E8; }
SET64(16, (s64)(s32)0x400000);
SET64(4, RD(18) + RD(0));
SET32(16, RW(16) + 11904);
SET64(31, 0x261984); SET64(5, RD(16) + RD(0)); JP_F_002620A0(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(16) + RD(0));
SET64(31, 0x261994); SET32(4, RW(4) + 14016); JP_F_00251820(c);
SET64(31, 0x26199c); SET64(4, RD(0) | 0x8300); JP_F_00260080(c);
SET64(31, 0x2619a4); SET64(4, RD(0) + RD(0)); JP_F_00122F20(c);
SET64(31, 0x2619ac); SET64(4, RD(0) | 0x8301); JP_F_00260080(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2619b8); SET64(5, RD(16) + RD(0)); JP_F_002614C8(c);
if (RD(2) != RD(0)) { wr8(c, (RW(17) + 1), (u8)RW(0)); goto L_002619E0; }
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(0) + RD(0));
SET64(31, 0x2619d0); SET32(5, RW(5) + 14056); JP_F_00261498(c);
SET64(31, 0x2619d8); SET64(4, RD(17) + RD(0)); JP_F_002618C0(c);
SET64(2, RD(0) + RD(0)); goto L_00261A38;
L_002619E0:;
SET64(5, (s32)rd32(c, (RW(17) + 36))); goto L_002619F0;
L_002619E8:;
SET32(2, RW(0) + 1);
wr8(c, (RW(17) + 1), (u8)RW(2));
L_002619F0:;
SET32(2, RW(5) + 2047);
SET32(3, RW(0) + 1);
SET32(2, RW(2) >> 11);
SET32(4, RW(0) + 1);
wr32(c, (RW(17) + 8), RW(2));
wr8(c, (RW(17) + 0), (u8)RW(3));
wr32(c, (RW(17) + 4), RW(5));
wr32(c, (RW(17) + 12), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 20), RW(0));
wr8(c, (RW(17) + 2), (u8)RW(0));
{ int t = RD(20) != RD(4); wr32(c, (RW(17) + 28), RW(0)); if (t) goto L_00261A34; }
SET64(2, (s64)(s32)0x7fff0000);
SET64(2, RD(2) | 0xffff);
wr32(c, (RW(17) + 8), RW(2));
L_00261A34:;
SET64(2, RD(17) + RD(0));
L_00261A38:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00261A58(Ctx *c) { /* func_00261A58 */
ENTER(0x261a58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00261AA0; }
SET64(2, rd8(c, (RW(16) + 2)));
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) != RD(0)) { wr8(c, (RW(16) + 0), (u8)RW(0)); goto L_00261A88; }
SET64(31, 0x261a84);  JP_F_00261D28(c);
wr8(c, (RW(16) + 0), (u8)RW(0));
L_00261A88:;
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002618C0(c); return; }
L_00261AA0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00261AB0(Ctx *c) { /* func_00261AB0 */
ENTER(0x261ab0);
SET32(29, RW(29) + -16);
SET64(7, RD(4) + RD(0));
{ int t = RD(7) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00261AD8; }
SET64(5, (s64)(s32)0x4b0000);
SET64(31, 0x261acc); SET32(5, RW(5) + 14104); JP_F_00261498(c);
SET64(2, RD(0) + RD(0)); goto L_00261B38;
L_00261AD8:;
{ int t = RD(6) != RD(0); SET32(2, RW(0) + 2); if (t) goto L_00261AE8; }
wr32(c, (RW(7) + 12), RW(5)); goto L_00261B18;
L_00261AE8:;
{ int t = RD(6) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_00261B00; }
SET64(4, (s32)rd32(c, (RW(7) + 8)));
SET32(2, RW(4) + RW(5));
wr32(c, (RW(7) + 12), RW(2)); goto L_00261B1C;
L_00261B00:;
{ int t = RD(6) != RD(2); SET64(4, (s32)rd32(c, (RW(7) + 8))); if (t) goto L_00261B1C; }
SET64(2, (s32)rd32(c, (RW(7) + 12)));
SET32(2, RW(2) + RW(5));
wr32(c, (RW(7) + 12), RW(2)); goto L_00261B1C;
L_00261B18:;
SET64(4, (s32)rd32(c, (RW(7) + 8)));
L_00261B1C:;
SET64(2, (s32)rd32(c, (RW(7) + 12)));
wr32(c, (RW(7) + 20), RW(0));
SET64(3, RSD(2) < RSD(4));
if (RD(3) == 0) SET64(2, RD(4));
SET64(4, RSD(2) < (s64)0);
if (RD(4) != 0) SET64(2, RD(0));
wr32(c, (RW(7) + 12), RW(2));
L_00261B38:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00261B48(Ctx *c) { /* func_00261B48 */
ENTER(0x261b48);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00261B70; }
SET64(5, (s64)(s32)0x4b0000);
SET64(31, 0x261b64); SET32(5, RW(5) + 14104); JP_F_00261498(c);
SET64(2, RD(0) + RD(0)); goto L_00261B74;
L_00261B70:;
SET64(2, (s32)rd32(c, (RW(2) + 12)));
L_00261B74:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00261B80(Ctx *c) { /* func_00261B80 */
ENTER(0x261b80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_00261BB8; }
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 14104); goto L_00261BD8;
L_00261BB8:;
{ int t = RSD(18) >= 0; SET64(5, (s64)(s32)0x4b0000); if (t) goto L_00261BC8; }
SET32(5, RW(5) + 14128); goto L_00261BD8;
L_00261BC8:;
if (RD(17) != RD(0)) { SET64(3, (s8)rd8(c, (RW(16) + 2))); goto L_00261BE8; }
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 14160);
L_00261BD8:;
SET64(31, 0x261be0);  JP_F_00261498(c);
SET64(2, RD(0) + RD(0)); goto L_00261D08;
L_00261BE8:;
SET32(19, RW(0) + 2);
{ int t = RD(3) == RD(19); SET64(2, RD(0) + RD(0)); if (t) goto L_00261D08; }
{ int t = RD(18) != RD(0); SET32(3, RW(0) + 1); if (t) goto L_00261C08; }
wr8(c, (RW(16) + 2), (u8)RW(3)); goto L_00261D08;
L_00261C08:;
SET64(31, 0x261c10);  JP_F_0025F150(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 28), RW(3)); if (t) goto L_00261D08; }
SET64(6, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(16) + 12)));
SET32(6, RW(6) + 12224);
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(5, rd8(c, (RW(6) + 0)));
SET64(7, RD(18) + RD(0));
SET32(3, RW(3) - RW(2));
SET64(4, RD(17) + RD(0));
wr8(c, (RW(16) + 68), (u8)RW(5));
SET64(2, RSD(18) < RSD(3));
if (RD(2) == 0) SET64(7, RD(3));
SET64(8, rd8(c, (RW(6) + 1)));
SET32(5, RW(7) << 11);
SET32(5, RW(17) + RW(5));
wr8(c, (RW(16) + 69), (u8)RW(8));
SET32(5, RW(5) + -1);
SET64(2, rd8(c, (RW(6) + 2)));
wr32(c, (RW(16) + 16), RW(7));
wr8(c, (RW(16) + 70), (u8)RW(2));
SET64(31, 0x261c70); wr32(c, (RW(16) + 24), RW(17)); JP_F_00110098(c);
SET64(2, (s32)rd32(c, (RW(16) + 32)));
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET32(8, RW(16) + 68);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET64(6, (s32)rd32(c, (RW(16) + 16)));
SET32(5, RW(2) + RW(5));
SET64(31, 0x261c90); SET64(7, (s32)rd32(c, (RW(16) + 24))); JP_F_0025F278(c);
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x400000); goto L_00261CA8; }
SET64(31, 0x261ca0); SET64(4, (s32)rd32(c, (RW(16) + 28))); JP_F_0025F1D8(c);
SET64(2, RD(0) + RD(0)); goto L_00261D08;
L_00261CA8:;
SET32(3, RW(0) + 1);
SET64(17, (s32)rd32(c, (RW(2) + 12228)));
if (RD(17) != RD(3)) { wr8(c, (RW(16) + 2), (u8)RW(19)); goto L_00261D00; }
SET64(31, 0x261cc0); SET64(4, RD(0) + RD(0)); JP_F_00122F20(c);
SET64(31, 0x261cc8);  JP_F_0025FD08(c);
SET64(31, 0x261cd0);  JP_F_0025FBF8(c);
SET64(31, 0x261cd8); SET64(4, (s32)rd32(c, (RW(16) + 28))); JP_F_0025F548(c);
SET64(31, 0x261ce0); SET64(4, (s32)rd32(c, (RW(16) + 28))); JP_F_0025F1D8(c);
wr32(c, (RW(16) + 28), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
SET64(3, (s32)rd32(c, (RW(16) + 16)));
wr32(c, (RW(16) + 20), RW(18));
SET32(2, RW(2) + RW(3));
wr8(c, (RW(16) + 2), (u8)RW(17));
wr32(c, (RW(16) + 12), RW(2)); goto L_00261D04;
L_00261D00:;
SET64(3, (s32)rd32(c, (RW(16) + 16)));
L_00261D04:;
SET64(2, RD(3) + RD(0));
L_00261D08:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00261D28(Ctx *c) { /* func_00261D28 */
ENTER(0x261d28);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_00261D78; }
SET64(5, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(5) + 14104);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_00261498(c); return; }
L_00261D78:;
SET64(2, rd8(c, (RW(16) + 2)));
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00261DF0; }
SET64(4, (s32)rd32(c, (RW(16) + 28)));
{ int t = RD(4) == RD(0); SET64(17, (s64)(s32)0x90000); if (t) goto L_00261D9C; }
SET64(31, 0x261d9c);  JP_F_0025F678(c);
L_00261D9C:;
SET32(19, RW(0) + 2);
SET64(17, RD(17) | 0xffff);
SET64(20, (s64)(s32)0x4b0000);
L_00261DA8:;
SET64(31, 0x261db0);  JP_F_0025FBF8(c);
SET64(31, 0x261db8);  JP_F_00261638(c);
SET64(31, 0x261dc0); SET64(4, RD(16) + RD(0)); JP_F_00261E10(c);
SET64(3, (s8)rd8(c, (RW(16) + 2)));
if (RD(3) != RD(19)) { wr32(c, (RW(16) + 20), RW(0)); goto L_00261DE8; }
SET32(18, RW(18) + 1);
SET64(2, RSD(17) < RSD(18));
{ int t = RD(2) == RD(0);  if (t) { POLL(); goto L_00261DA8; } }
SET64(31, 0x261de4); SET32(4, RW(20) + 14200); JP_F_00251820(c);
wr32(c, (RW(16) + 20), RW(0));
L_00261DE8:;
wr8(c, (RW(16) + 2), (u8)RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_00261DF0:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00261E10(Ctx *c) { /* func_00261E10 */
ENTER(0x261e10);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00261E38; }
SET64(5, (s64)(s32)0x4b0000);
SET64(31, 0x261e2c); SET32(5, RW(5) + 14104); JP_F_00261498(c);
SET64(2, RD(0) + RD(0)); goto L_00261E3C;
L_00261E38:;
SET64(2, (s8)rd8(c, (RW(2) + 2)));
L_00261E3C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00261E48(Ctx *c) { /* func_00261E48 */
ENTER(0x261e48);
SET32(2, RW(0) + 2048); return;
}

void JP_F_00261E50(Ctx *c) { /* func_00261E50 */
ENTER(0x261e50);
SET32(29, RW(29) + -16);
SET64(5, RD(4) + RD(0));
{ int t = RD(5) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00261E78; }
SET64(5, (s64)(s32)0x4b0000);
SET64(31, 0x261e6c); SET32(5, RW(5) + 14104); JP_F_00261498(c);
SET64(2, RD(0) + RD(0)); goto L_00261E90;
L_00261E78:;
SET64(3, (s8)rd8(c, (RW(5) + 2)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_00261E90; }
SET64(2, (s32)rd32(c, (RW(5) + 20)));
SET32(2, RW(2) << 11);
L_00261E90:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00261EA0(Ctx *c) { /* func_00261EA0 */
ENTER(0x261ea0);
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(2) + 12232), RW(4)); return;
}

void JP_F_00261EB0(Ctx *c) { /* func_00261EB0 */
ENTER(0x261eb0);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + 12232))); return;
}

void JP_F_00261EC0(Ctx *c) { /* func_00261EC0 */
ENTER(0x261ec0);
SET64(2, (s64)(s32)0x400000);
SET64(3, RD(4) < (u64)(s64)2);
SET32(2, RW(2) + 8908);
{ int t = RD(3) != RD(0); wr32(c, (RW(2) + 0), RW(4)); if (t) goto L_00261ED8; }
wr32(c, (RW(2) + 0), RW(0));
L_00261ED8:;
 return;
}

void JP_F_00261EE0(Ctx *c) { /* func_00261EE0 */
ENTER(0x261ee0);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + 8908))); return;
}

void JP_F_00261EF0(Ctx *c) { /* func_00261EF0 */
ENTER(0x261ef0);
SET32(29, RW(29) + -80);
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 48), RD(16));
wr64(c, (RW(29) + 56), RD(17));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x261f0c); SET64(16, RD(4) + RD(0)); JP_F_00262910(c);
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(3, (s64)(s32)0x400000);
SET32(17, RW(3) + 11904);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00261F74; }
SET64(31, 0x261f2c);  JP_F_002620A0(c);
SET64(31, 0x261f34); SET64(4, RD(0) | 0x8400); JP_F_00260080(c);
SET64(31, 0x261f3c); SET64(4, RD(0) + RD(0)); JP_F_00122F20(c);
SET64(31, 0x261f44); SET64(4, RD(0) | 0x8401); JP_F_00260080(c);
SET64(5, RD(17) + RD(0));
SET64(31, 0x261f50); SET64(4, RD(29) + RD(0)); JP_F_002614C8(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 13800);
{ int t = RD(2) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00261F70; }
SET64(31, 0x261f68);  JP_F_00251820(c);
SET64(2, RD(0) + RD(0)); goto L_00261F74;
L_00261F70:;
SET64(2, (s32)rd32(c, (RW(29) + 4)));
L_00261F74:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00261F88(Ctx *c) { /* func_00261F88 */
ENTER(0x261f88);
SET64(2, (s32)rd32(c, (RW(4) + 20)));
SET64(2, RD(2) << 11);
SET64(2, RSD(2) >> 32); return;
}

void JP_F_00261F98(Ctx *c) { /* func_00261F98 */
ENTER(0x261f98);
SET64(2, (s32)rd32(c, (RW(4) + 20)));
SET64(3, (s64)(s32)0xffff0000);
SET64(3, RD(3) >> 32);
SET64(2, RD(2) << 11);
SET64(2, RD(2) & RD(3));
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32); return;
}

void JP_F_00261FB8(Ctx *c) { /* func_00261FB8 */
ENTER(0x261fb8);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00261FC0(Ctx *c) { /* func_00261FC0 */
ENTER(0x261fc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00261EF0(c); return; }
}

void JP_F_00261FD8(Ctx *c) { /* func_00261FD8 */
ENTER(0x261fd8);
SET32(29, RW(29) + -16);
SET64(3, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00262090; }
SET32(2, RW(0) + 203);
{ int t = RD(5) == RD(2); SET64(2, RSD(5) < (s64)204); if (t) goto L_00262078; }
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 205); if (t) goto L_00262028; }
SET32(2, RW(0) + 201);
{ int t = RD(5) == RD(2); SET64(2, RSD(5) < (s64)202); if (t) goto L_00262058; }
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 200); if (t) goto L_00262068; }
{ int t = RD(5) == RD(2); SET64(2, RD(3) + RD(0)); if (t) goto L_00262048; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_00262094;
L_00262028:;
{ int t = RD(5) == RD(2); SET64(2, RSD(5) < (s64)205); if (t) goto L_00262078; }
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 299); if (t) goto L_00262068; }
{ int t = RD(5) == RD(2); SET64(2, RD(3) + RD(0)); if (t) goto L_00262088; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_00262094;
L_00262048:;
SET64(31, 0x262050);  JP_F_00261F88(c);
SET64(3, RD(2) + RD(0)); goto L_0026208C;
L_00262058:;
SET64(31, 0x262060);  JP_F_00261F98(c);
SET64(3, RD(2) + RD(0)); goto L_0026208C;
L_00262068:;
SET64(31, 0x262070);  JP_F_00261FB8(c);
SET64(3, RD(2) + RD(0)); goto L_0026208C;
L_00262078:;
SET64(31, 0x262080);  JP_F_00261FC0(c);
SET64(3, RD(2) + RD(0)); goto L_0026208C;
L_00262088:;
SET32(3, RW(0) + 1);
L_0026208C:;
SET64(2, RD(3) + RD(0));
L_00262090:;
SET64(31, rd64(c, (RW(29) + 0)));
L_00262094:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002620A0(Ctx *c) { /* func_002620A0 */
ENTER(0x2620a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET64(5, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(16));
SET32(5, RW(5) + 12240);
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2620c8); SET64(4, RD(17) + RD(0)); JP_F_0012A3C0(c);
SET64(3, (s8)rd8(c, (RW(16) + 0)));
SET32(2, RW(0) + 47);
{ int t = RD(3) == RD(2); SET32(4, RW(0) + 92); if (t) goto L_002620EC; }
{ int t = RD(3) == RD(4); SET64(5, (s64)(s32)0x4b0000); if (t) goto L_002620EC; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2620ec); SET32(5, RW(5) + 14240); JP_F_00129FB8(c);
L_002620EC:;
SET64(5, RD(16) + RD(0));
SET64(16, (s64)(s32)0x4b0000);
SET64(4, RD(17) + RD(0));
SET64(31, 0x262100); SET32(16, RW(16) + 14248); JP_F_00129FB8(c);
SET64(31, 0x262108); SET64(4, RD(17) + RD(0)); JP_F_0012A4D8(c);
SET64(5, RD(16) + RD(0));
SET32(2, RW(17) + RW(2));
SET64(31, 0x262118); SET32(4, RW(2) + -2); JP_F_0012A278(c);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00262130; }
SET64(31, 0x26212c);  JP_F_00129FB8(c);
SET64(4, RD(17) + RD(0));
L_00262130:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_002616C8(c); return; }
}

void JP_F_00262148(Ctx *c) { /* func_00262148 */
ENTER(0x262148);
SET32(4, RW(4) << 24);
SET32(4, RSW(4) >> 24);
SET32(2, RW(4) + -97);
SET32(3, RW(4) + -32);
SET64(2, RD(2) < (u64)(s64)26);
SET32(5, RW(3) << 24);
{ int t = RD(2) == RD(0); SET64(3, RD(4) + RD(0)); if (t) goto L_0026216C; }
SET32(4, RSW(5) >> 24);
L_0026216C:;
SET64(3, RD(3) ^ 0x5c);
SET32(2, RW(0) + 47);
if (RD(3) != 0) SET64(2, RD(4)); return;
}

void JP_F_00262180(Ctx *c) { /* func_00262180 */
ENTER(0x262180);
SET32(29, RW(29) + -32);
SET32(4, RW(4) << 24);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(5) << 24);
SET32(17, RSW(17) >> 24);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2621a4); SET32(4, RSW(4) >> 24); JP_F_00262148(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2621b0); SET64(16, RD(2) + RD(0)); JP_F_00262148(c);
SET32(3, RW(0) + -1);
SET64(16, RD(16) ^ RD(2));
SET64(2, RD(0) + RD(0));
if (RD(16) != 0) SET64(2, RD(3));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002621D8(Ctx *c) { /* func_002621D8 */
ENTER(0x2621d8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2621fc); SET64(19, RD(4) + RD(0)); JP_F_0012A4D8(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x262208); SET64(17, RD(2) + RD(0)); JP_F_0012A4D8(c);
{ int t = RD(17) == RD(2);  if (t) goto L_00262218; }
L_00262210:;
SET32(2, RW(0) + -1); goto L_00262250;
L_00262218:;
{ int t = RSD(17) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_0026224C; }
SET32(3, RW(18) + RW(16));
L_00262228:;
SET32(2, RW(19) + RW(16));
SET64(5, (s8)rd8(c, (RW(3) + 0)));
SET32(16, RW(16) + 1);
SET64(31, 0x26223c); SET64(4, (s8)rd8(c, (RW(2) + 0))); JP_F_00262180(c);
{ int t = RD(2) != RD(0); SET64(3, RSD(16) < RSD(17)); if (t) { POLL(); goto L_00262210; } }
{ int t = RD(3) != RD(0); SET32(3, RW(18) + RW(16)); if (t) { POLL(); goto L_00262228; } }
L_0026224C:;
SET64(2, RD(0) + RD(0));
L_00262250:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00262270(Ctx *c) { /* func_00262270 */
ENTER(0x262270);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(0) + RD(0));
wr64(c, (RW(29) + 64), RD(22));
SET64(22, RD(7) + RD(0));
wr64(c, (RW(29) + 72), RD(23));
SET64(23, RD(8) + RD(0));
wr32(c, (RW(29) + 0), RW(4));
SET64(4, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 80), RD(30));
wr64(c, (RW(29) + 88), RD(31));
SET64(2, (s8)rd8(c, (RW(19) + 0)));
{ int t = RD(2) == RD(0); wr32(c, (RW(29) + 4), RW(6)); if (t) goto L_002623A8; }
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(22) << 3);
SET32(20, RW(0) + 10);
SET32(30, RW(0) + 13);
SET32(16, RW(2) + RW(3));
SET64(2, (s8)rd8(c, (RW(5) + 0)));
L_002622E0:;
if (RD(2) == RD(20)) { SET64(2, (s8)rd8(c, (RW(5) + 1))); goto L_002622F4; }
{ int t = RD(2) != RD(0); SET32(3, RW(18) + 1); if (t) goto L_00262384; }
SET64(2, (s8)rd8(c, (RW(5) + 1)));
L_002622F4:;
if (RD(2) == RD(20)) { SET32(18, RW(18) + 1); goto L_00262308; }
{ int t = RD(2) != RD(0); SET32(3, RW(5) + -1); if (t) goto L_00262310; }
SET32(18, RW(18) + 1);
L_00262308:;
SET32(5, RW(19) + RW(18));
SET32(3, RW(5) + -1);
L_00262310:;
SET64(2, (s8)rd8(c, (RW(3) + 0)));
{ int t = RD(2) == RD(20); SET32(17, RW(18) - RW(4)); if (t) goto L_00262324; }
{ int t = RD(2) != RD(30); SET32(2, RW(5) + -2); if (t) goto L_0026232C; }
L_00262324:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(5) + -2);
L_0026232C:;
SET64(3, (s8)rd8(c, (RW(2) + 0)));
if (RD(3) == RD(20)) { wr8(c, (RW(2) + 0), (u8)RW(0)); goto L_00262344; }
{ int t = RD(3) != RD(30); SET32(5, RW(19) + RW(4)); if (t) goto L_00262348; }
wr8(c, (RW(2) + 0), (u8)RW(0));
L_00262344:;
SET32(5, RW(19) + RW(4));
L_00262348:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x262354); SET64(6, RD(17) + RD(0)); JP_F_00127218(c);
SET64(31, 0x26235c); SET64(4, RD(16) + RD(0)); JP_F_002616C8(c);
SET32(6, RW(16) + RW(17));
SET64(2, (s8)rd8(c, (RW(6) + -1)));
if (RD(2) != RD(0)) { wr8(c, (RW(6) + 0), (u8)RW(0)); goto L_0026236C; }
L_0026236C:;
SET32(3, RW(18) + 1);
SET32(2, RW(23) + RW(16));
SET32(21, RW(21) + 1);
SET32(16, RW(2) + 1);
{ int t = RD(21) == RD(22); SET64(4, RD(3) + RD(0)); if (t) goto L_002623A8; }
L_00262384:;
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(2, RSD(5) < RSD(3));
{ int t = RD(2) != RD(0); SET64(18, RD(3) + RD(0)); if (t) goto L_002623A8; }
SET32(2, RW(19) + RW(3));
SET64(5, RD(2) + RD(0));
SET64(3, (s8)rd8(c, (RW(5) + 0)));
if (RD(3) != RD(0)) { SET64(2, (s8)rd8(c, (RW(5) + 0))); { POLL(); goto L_002622E0; } }
L_002623A8:;
SET64(2, (s64)(s32)0x400000);
SET32(2, RW(2) + 12208);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
if (RD(3) != RD(0)) { SET64(2, RD(21) + RD(0)); goto L_002623D4; }
wr32(c, (RW(2) + 12), RW(23));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
wr32(c, (RW(2) + 8), RW(22));
wr32(c, (RW(2) + 0), RW(3));
wr32(c, (RW(2) + 4), RW(21));
SET64(2, RD(21) + RD(0));
L_002623D4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(23, rd64(c, (RW(29) + 72)));
SET64(30, rd64(c, (RW(29) + 80)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); return;
}

void JP_F_00262408(Ctx *c) { /* func_00262408 */
ENTER(0x262408);
SET32(29, RW(29) + -128);
SET64(3, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 88), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 96), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 80), RD(16));
SET32(2, RW(29) + 64);
wr64(c, (RW(29) + 104), RD(19));
SET32(5, RW(3) + 14256);
wr64(c, (RW(29) + 112), RD(31));
SET64(4, RD(2) + RD(0));
lwl(c, 3, (RW(17) + 3));
lwr(c, 3, (RW(17) + 0));
SET64(6, (s8)rd8(c, (RW(17) + 4)));
swl(c, 3, (RW(2) + 3));
swr(c, 3, (RW(2) + 0));
wr8(c, (RW(2) + 4), (u8)RW(6));
SET64(31, 0x262458); wr8(c, (RW(29) + 68), (u8)RW(0)); JP_F_00129EE0(c);
if (RD(2) != RD(0)) { SET64(19, (s64)(s32)0x400000); goto L_00262478; }
SET32(4, RW(17) + 4);
SET64(31, 0x26246c); SET64(5, RD(18) + RD(0)); JP_F_002640C0(c);
SET64(16, rd64(c, (RW(29) + 80))); goto L_00262578;
L_00262478:;
SET32(6, RW(0) + 128);
SET32(16, RW(19) + 12504);
SET64(5, RD(0) + RD(0));
SET64(31, 0x26248c); SET64(4, RD(16) + RD(0)); JP_F_001273D0(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x26249c); SET32(16, RW(0) + 1); JP_F_002620A0(c);
SET64(31, 0x2624a4); SET64(4, RD(0) | 0x9000); JP_F_00260080(c);
L_002624A8:;
SET64(31, 0x2624b0); SET32(4, RW(0) + 1); JP_F_00122F20(c);
{ int t = RD(2) == RD(16);  if (t) { POLL(); goto L_002624A8; } }
SET64(31, 0x2624c0); SET64(4, RD(0) | 0x9001); JP_F_00260080(c);
SET64(31, 0x2624c8); SET64(4, RD(0) | 0x9100); JP_F_00260080(c);
SET32(5, RW(19) + 12504);
SET64(31, 0x2624d4); SET64(4, RD(29) + RD(0)); JP_F_002614C8(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002624E8; }
SET64(4, RD(0) | 0x9101); goto L_0026252C;
L_002624E8:;
SET64(31, 0x2624f0); SET64(4, RD(0) | 0x9102); JP_F_00260080(c);
SET32(2, RW(0) + 1);
SET64(4, RD(0) | 0x9200);
wr8(c, (RW(29) + 49), (u8)RW(2));
wr8(c, (RW(29) + 48), (u8)RW(0));
wr8(c, (RW(29) + 50), (u8)RW(0));
SET64(31, 0x26250c); wr8(c, (RW(29) + 51), (u8)RW(0)); JP_F_00260080(c);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET32(7, RW(29) + 48);
SET64(6, RD(18) + RD(0));
SET64(31, 0x262520); SET32(5, RW(0) + 2); JP_F_00123930(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00262540; }
SET64(4, RD(0) | 0x9201);
L_0026252C:;
SET64(31, 0x262534);  JP_F_00260080(c);
SET64(2, RD(0) + RD(0)); goto L_00262574;
L_00262540:;
SET64(31, 0x262548); SET64(4, RD(0) | 0x9202); JP_F_00260080(c);
SET64(31, 0x262550); SET64(4, RD(0) | 0x9300); JP_F_00260080(c);
SET32(16, RW(0) + 1);
L_00262558:;
SET64(31, 0x262560); SET32(4, RW(0) + 1); JP_F_00122F20(c);
{ int t = RD(2) == RD(16);  if (t) { POLL(); goto L_00262558; } }
SET64(31, 0x262570); SET64(4, RD(0) | 0x9301); JP_F_00260080(c);
SET32(2, RW(0) + 1);
L_00262574:;
SET64(16, rd64(c, (RW(29) + 80)));
L_00262578:;
SET64(17, rd64(c, (RW(29) + 88)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(19, rd64(c, (RW(29) + 104)));
SET64(31, rd64(c, (RW(29) + 112)));
SET32(29, RW(29) + 128); return;
}

static void JP_B_00262590(Ctx *c, u32 entry) { /* func_00262590 */
ENTER(entry);
switch (entry) { case 0x262600: goto L_00262600; case 0x262700: goto L_00262700; }
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 112), RD(22));
SET64(22, RD(5) + RD(0));
wr64(c, (RW(29) + 96), RD(20));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 104), RD(21));
SET64(21, RD(4) + RD(0));
wr64(c, (RW(29) + 120), RD(23));
SET64(23, RD(0) + RD(0));
wr64(c, (RW(29) + 64), RD(16));
wr64(c, (RW(29) + 72), RD(17));
wr64(c, (RW(29) + 80), RD(18));
wr64(c, (RW(29) + 88), RD(19));
wr64(c, (RW(29) + 128), RD(30));
wr64(c, (RW(29) + 136), RD(31));
{ int t = RSD(22) <= 0; wr32(c, (RW(29) + 48), RW(0)); if (t) goto L_002626C0; }
SET64(2, (s64)(s32)0x400000);
SET64(18, RD(21) + RD(0));
SET32(30, RW(2) + 12208);
L_002625E0:;
SET64(2, (s32)rd32(c, (RW(30) + 12)));
SET64(3, (s32)rd32(c, (RW(30) + 8)));
mul_s(c, 0, 4, RSW(2), RSW(20));
SET32(3, RW(3) << 3);
SET32(2, RW(4) + RW(20));
SET32(3, RW(3) + RW(2));
SET32(17, RW(21) + RW(3));
SET64(2, (s8)rd8(c, (RW(17) + 0)));
L_00262600:;
{ int t = RD(2) == RD(0); SET64(19, (s64)(s32)0x400000); if (t) goto L_002626B0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x262614); SET32(5, RW(19) + 12504); JP_F_002620A0(c);
SET64(31, 0x26261c); SET64(4, RD(0) | 0x9400); JP_F_00260080(c);
SET32(16, RW(0) + 1);
L_00262620:;
SET64(31, 0x262628); SET32(4, RW(0) + 1); JP_F_00122F20(c);
{ int t = RD(2) == RD(16);  if (t) { POLL(); goto L_00262620; } }
SET64(31, 0x262638); SET64(4, RD(0) | 0x9401); JP_F_00260080(c);
SET64(31, 0x262640); SET64(4, RD(0) | 0x9500); JP_F_00260080(c);
SET32(5, RW(19) + 12504);
SET64(31, 0x26264c); SET64(4, RD(29) + RD(0)); JP_F_002614C8(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(3, (s32)rd32(c, (RW(29) + 48))); goto L_00262690; }
SET64(4, RD(0) | 0x9501);
SET64(31, 0x262664); SET32(23, RW(23) + 1); JP_F_00260080(c);
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(4, RW(2) + 14264);
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(5, RD(17) + RD(0));
wr32(c, (RW(18) + 0), RW(3));
SET64(31, 0x262684); wr32(c, (RW(18) + 4), RW(2)); JP_F_002517A8(c);
SET32(20, RW(20) + 1); goto L_002626B4;
L_00262690:;
SET64(4, RD(0) | 0x9502);
SET32(3, RW(3) + 1);
SET64(31, 0x2626a0); wr32(c, (RW(29) + 48), RW(3)); JP_F_00260080(c);
SET64(2, (s64)(s32)0x4b0000);
SET64(5, RD(17) + RD(0));
SET64(31, 0x2626b0); SET32(4, RW(2) + 14288); JP_F_002517A8(c);
L_002626B0:;
SET32(20, RW(20) + 1);
L_002626B4:;
SET64(2, RSD(20) < RSD(22));
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 8); if (t) { POLL(); goto L_002625E0; } }
L_002626C0:;
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(23) + RD(0));
SET64(31, 0x2626d0); SET32(4, RW(4) + 14312); JP_F_002517A8(c);
SET64(3, (s32)rd32(c, (RW(29) + 48)));
{ int t = RSD(3) <= 0; SET64(2, RD(23) + RD(0)); if (t) goto L_002626F0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(5, RW(0) + 10);
SET64(31, 0x2626ec); SET32(4, RW(4) + 14336); JP_F_00251820(c);
SET64(2, RD(23) + RD(0));
L_002626F0:;
SET64(16, rd64(c, (RW(29) + 64)));
SET64(17, rd64(c, (RW(29) + 72)));
SET64(18, rd64(c, (RW(29) + 80)));
SET64(19, rd64(c, (RW(29) + 88)));
L_00262700:;
SET64(20, rd64(c, (RW(29) + 96)));
SET64(21, rd64(c, (RW(29) + 104)));
SET64(22, rd64(c, (RW(29) + 112)));
SET64(23, rd64(c, (RW(29) + 120)));
SET64(30, rd64(c, (RW(29) + 128)));
SET64(31, rd64(c, (RW(29) + 136)));
SET32(29, RW(29) + 144); return;
}
void JP_F_00262590(Ctx *c) { JP_B_00262590(c, 0x262590); }
void JP_F_00262600(Ctx *c) { JP_B_00262590(c, 0x262600); }
void JP_F_00262700(Ctx *c) { JP_B_00262590(c, 0x262700); }

void JP_F_00262720(Ctx *c) { /* func_00262720 */
ENTER(0x262720);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(22));
SET64(22, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 40), RD(21));
{ int t = RSD(20) <= 0; wr64(c, (RW(29) + 56), RD(31)); if (t) goto L_002627B8; }
SET64(2, (s64)(s32)0x400000);
SET64(17, RD(18) + RD(0));
SET32(21, RW(2) + 12208);
L_00262768:;
SET64(2, (s32)rd32(c, (RW(21) + 12)));
SET64(4, RD(22) + RD(0));
SET64(5, (s32)rd32(c, (RW(21) + 8)));
mul_s(c, 0, 3, RSW(2), RSW(16));
SET32(5, RW(5) << 3);
SET32(2, RW(3) + RW(16));
SET32(16, RW(16) + 1);
SET32(5, RW(5) + RW(2));
SET64(31, 0x262790); SET32(5, RW(18) + RW(5)); JP_F_002621D8(c);
{ int t = RD(2) != RD(0); SET64(3, RSD(16) < RSD(20)); if (t) goto L_002627B0; }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(19) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(19) + 4), RW(3)); goto L_002627C0;
L_002627B0:;
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 8); if (t) { POLL(); goto L_00262768; } }
L_002627B8:;
wr32(c, (RW(19) + 4), RW(0));
wr32(c, (RW(19) + 0), RW(0));
L_002627C0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_002627E8(Ctx *c) { /* func_002627E8 */
ENTER(0x2627e8);
SET32(29, RW(29) + -16);
SET64(4, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 12208);
SET32(6, RW(0) + 16);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_00262810(Ctx *c) { /* func_00262810 */
ENTER(0x262810);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x262824); SET64(16, RD(4) + RD(0)); JP_F_0012A4D8(c);
SET32(3, RW(0) + 17);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0026283C; }
SET64(2, (s8)rd8(c, (RW(16) + 8)));
SET64(2, RD(2) ^ 0x2e);
SET64(2, RD(2) < (u64)(s64)1);
L_0026283C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

static void JP_B_00262850(Ctx *c, u32 entry) { /* func_00262850 */
ENTER(entry);
switch (entry) { case 0x262900: goto L_00262900; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
SET32(6, RW(0) + 16);
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x262880); wr32(c, (RW(29) + 0), RW(17)); JP_F_0012C010(c);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET64(5, RD(29) + RD(0));
wr32(c, (RW(18) + 0), RW(2));
SET32(6, RW(0) + 16);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(3, (s8)rd8(c, (RW(2) + 0)));
{ int t = RD(3) == RD(0); SET32(2, RW(2) + 1); if (t) goto L_002628A8; }
wr32(c, (RW(29) + 0), RW(2));
L_002628A8:;
if (RD(16) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_002628C8; }
SET64(31, 0x2628b8); SET64(4, (s32)rd32(c, (RW(29) + 0))); JP_F_0012C010(c);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
wr32(c, (RW(16) + 0), RW(2));
SET64(4, (s64)(s32)0x4b0000);
L_002628C8:;
SET64(5, RD(17) + RD(0));
SET64(31, 0x2628d4); SET32(4, RW(4) + 14384); JP_F_002517A8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s32)rd32(c, (RW(18) + 0)));
SET64(31, 0x2628e4); SET32(4, RW(4) + 14408); JP_F_002517A8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2628f4); SET32(4, RW(4) + 14424); JP_F_002517A8(c);
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
L_00262900:;
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}
void JP_F_00262850(Ctx *c) { JP_B_00262850(c, 0x262850); }
void JP_F_00262900(Ctx *c) { JP_B_00262850(c, 0x262900); }

void JP_F_00262910(Ctx *c) { /* func_00262910 */
ENTER(0x262910);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
SET64(4, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 16), RD(16));
SET32(4, RW(4) + 14448);
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x262938); SET64(5, RD(17) + RD(0)); JP_F_0012A278(c);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 46); if (t) goto L_00262968; }
SET32(2, RW(0) + -1);
SET64(4, (s64)(s32)0x4b0000);
wr32(c, (RW(16) + 4), RW(2));
SET32(4, RW(4) + 14456);
SET64(31, 0x26295c); wr32(c, (RW(16) + 0), RW(0)); JP_F_00251820(c);
SET32(2, RW(0) + 1); goto L_002629D8;
L_00262968:;
SET64(31, 0x262970);  JP_F_00262810(c);
SET64(3, (s64)(s32)0x400000);
SET32(7, RW(0) + 1);
SET32(3, RW(3) + 12208);
SET64(4, RD(17) + RD(0));
SET64(5, RD(29) + RD(0));
{ int t = RD(2) != RD(7); SET32(6, RW(29) + 4); if (t) goto L_002629B0; }
SET64(31, 0x262994);  JP_F_00262850(c);
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET32(3, RW(3) << 11);
wr32(c, (RW(16) + 4), RW(3));
wr32(c, (RW(16) + 0), RW(4)); goto L_002629D8;
L_002629B0:;
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET64(6, RD(2) + RD(0)); if (t) goto L_002629D4; }
SET64(7, (s32)rd32(c, (RW(3) + 4)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2629d4); SET64(5, RD(17) + RD(0)); JP_F_00262720(c);
L_002629D4:;
SET64(2, RD(0) + RD(0));
L_002629D8:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002629F0(Ctx *c) { /* func_002629F0 */
ENTER(0x2629f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(20));
SET64(20, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
SET32(6, RW(0) + 4096);
SET32(4, RW(20) + -14784);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x262a30); SET64(19, RD(7) + RD(0)); JP_F_001273D0(c);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + 12208)));
{ int t = RD(2) == RD(0);  if (t) goto L_00262A48; }
SET64(31, 0x262a48);  JP_F_002627E8(c);
L_00262A48:;
{ int t = RD(16) == RD(0);  if (t) goto L_00262A60; }
{ int t = RD(18) == RD(0);  if (t) goto L_00262A60; }
{ int t = RD(17) != RD(0);  if (t) goto L_00262A68; }
L_00262A60:;
SET64(31, 0x262a68);  JP_F_002627E8(c);
L_00262A68:;
{ int t = RD(16) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00262B4C; }
{ int t = RD(18) != RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_00262A88; }
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 14496); goto L_00262A9C;
L_00262A88:;
{ int t = RD(17) != RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_00262AB0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 14544);
L_00262A9C:;
SET64(31, 0x262aa4);  JP_F_002517A8(c);
SET64(2, RD(0) + RD(0)); goto L_00262B4C;
L_00262AB0:;
SET64(5, RD(0) + RD(0));
SET32(20, RW(20) + -14784);
SET64(31, 0x262ac0); SET64(6, RD(17) + RD(0)); JP_F_001273D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x262acc); SET64(5, RD(20) + RD(0)); JP_F_00262408(c);
if (RD(2) != RD(0)) { SET32(16, RW(19) + 9); goto L_00262B00; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(16) + RD(0));
SET64(31, 0x262ae4); SET32(4, RW(4) + 14592); JP_F_002517A8(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 14632);
SET64(31, 0x262af4); SET64(4, RD(0) + RD(0)); JP_F_00261498(c);
SET64(2, RD(0) + RD(0)); goto L_00262B4C;
L_00262B00:;
SET64(5, RD(20) + RD(0));
div_u(c, 0, RW(17), RW(16));
SET32(6, RW(0) + 4096);
SET64(8, RD(19) + RD(0));
SET64(4, RD(18) + RD(0));
if (RD(16) == RD(0)) { rt_break(c, 0x262b18); goto L_00262B1C; }
L_00262B1C:;
SET64(17, c->lo.d[0]);
SET64(7, RD(17) + RD(0));
SET64(31, 0x262b2c); SET32(17, RW(17) << 3); JP_F_00262270(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x262b38); SET64(5, RD(2) + RD(0)); JP_F_00262590(c);
if (RD(16) == RD(0)) { rt_break(c, 0x262b3c); goto L_00262B40; }
L_00262B40:;
SET32(3, RW(19) + 1);
mul_s(c, 0, 2, RSW(2), RSW(3));
SET32(2, RW(17) + RW(2));
L_00262B4C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00262B70(Ctx *c) { /* func_00262B70 */
ENTER(0x262b70);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(4) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 4096);
SET32(4, RW(2) + -14784);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(8) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x262bb8); SET64(17, RD(7) + RD(0)); JP_F_001273D0(c);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + 12208)));
{ int t = RD(2) == RD(0);  if (t) goto L_00262BD0; }
SET64(31, 0x262bd0);  JP_F_002627E8(c);
L_00262BD0:;
{ int t = RD(20) == RD(0);  if (t) goto L_00262BF0; }
{ int t = RD(18) == RD(0);  if (t) goto L_00262BF0; }
{ int t = RD(19) == RD(0);  if (t) goto L_00262BF0; }
{ int t = RD(17) != RD(0);  if (t) goto L_00262BF8; }
L_00262BF0:;
SET64(31, 0x262bf8);  JP_F_002627E8(c);
L_00262BF8:;
{ int t = RD(20) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00262C94; }
{ int t = RD(18) != RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_00262C18; }
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 14496); goto L_00262C34;
L_00262C18:;
{ int t = RD(19) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_00262C2C; }
{ int t = RD(17) != RD(0); SET32(16, RW(21) + 9); if (t) goto L_00262C48; }
SET64(4, (s64)(s32)0x4b0000);
L_00262C2C:;
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 14544);
L_00262C34:;
SET64(31, 0x262c3c);  JP_F_002517A8(c);
SET64(2, RD(0) + RD(0)); goto L_00262C94;
L_00262C48:;
SET64(6, RD(19) + RD(0));
div_u(c, 0, RW(17), RW(16));
SET64(5, RD(20) + RD(0));
SET64(8, RD(21) + RD(0));
SET64(4, RD(18) + RD(0));
if (RD(16) == RD(0)) { rt_break(c, 0x262c60); goto L_00262C64; }
L_00262C64:;
SET64(17, c->lo.d[0]);
SET64(7, RD(17) + RD(0));
SET64(31, 0x262c74); SET32(17, RW(17) << 3); JP_F_00262270(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x262c80); SET64(5, RD(2) + RD(0)); JP_F_00262590(c);
if (RD(16) == RD(0)) { rt_break(c, 0x262c84); goto L_00262C88; }
L_00262C88:;
SET32(3, RW(21) + 1);
mul_s(c, 0, 2, RSW(2), RSW(3));
SET32(2, RW(17) + RW(2));
L_00262C94:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00262CB8(Ctx *c) { /* func_00262CB8 */
ENTER(0x262cb8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x262cc8); SET64(5, RD(29) + RD(0)); JP_F_00262910(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 48)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 64); return;
}

void JP_F_00262CE0(Ctx *c) { /* func_00262CE0 */
ENTER(0x262ce0);
SET64(2, (s64)(s32)0x400000);
SET64(3, (s64)(s32)0x400000);
SET32(2, RW(2) + 12224);
wr32(c, (RW(3) + 12228), RW(7));
wr8(c, (RW(2) + 2), (u8)RW(6));
wr8(c, (RW(2) + 0), (u8)RW(4));
wr8(c, (RW(2) + 1), (u8)RW(5)); return;
}

void JP_F_00262D00(Ctx *c) { /* func_00262D00 */
ENTER(0x262d00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(5, RD(16) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00262D28; }
SET64(2, (s64)(s32)0x400000);
wr8(c, (RW(2) + 12240), (u8)RW(0)); goto L_00262DB4;
L_00262D28:;
SET64(3, (s8)rd8(c, (RW(16) + 0)));
SET32(2, RW(0) + 47);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 92); if (t) goto L_00262D68; }
{ int t = RD(3) == RD(2); SET64(2, (s64)(s32)0x4b0000); if (t) goto L_00262D68; }
SET64(4, (s64)(s32)0x400000);
SET32(8, RW(2) + 14240);
SET32(7, RW(4) + 12240);
SET64(3, (s8)rd8(c, (RW(8) + 0)));
SET64(6, (s8)rd8(c, (RW(8) + 1)));
wr8(c, (RW(7) + 0), (u8)RW(3));
wr8(c, (RW(7) + 1), (u8)RW(6));
SET32(17, RW(4) + 12240); goto L_00262D74;
L_00262D68:;
SET64(4, (s64)(s32)0x400000);
wr8(c, (RW(4) + 12240), (u8)RW(0));
SET32(17, RW(4) + 12240);
L_00262D74:;
SET64(31, 0x262d7c); SET64(4, RD(17) + RD(0)); JP_F_00129FB8(c);
SET64(31, 0x262d84); SET64(4, RD(16) + RD(0)); JP_F_0012A4D8(c);
SET64(4, RD(17) + RD(0));
SET32(2, RW(16) + RW(2));
SET32(3, RW(0) + 47);
SET64(2, (s8)rd8(c, (RW(2) + -1)));
{ int t = RD(2) == RD(3); SET32(5, RW(0) + 92); if (t) goto L_00262DA4; }
{ int t = RD(2) != RD(5); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00262DB8; }
L_00262DA4:;
SET64(31, 0x262dac);  JP_F_0012A4D8(c);
SET32(2, RW(2) + RW(17));
wr8(c, (RW(2) + -1), (u8)RW(0));
L_00262DB4:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00262DB8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00262DC8(Ctx *c) { /* func_00262DC8 */
ENTER(0x262dc8);
SET64(2, (s64)(s32)0x400000);
SET32(2, RW(2) + 12240); return;
}

void JP_F_00262DD8(Ctx *c) { /* func_00262DD8 */
ENTER(0x262dd8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002601D8(c); return; }
}

void JP_F_00262DF0(Ctx *c) { /* func_00262DF0 */
ENTER(0x262df0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002600B0(c); return; }
}

void JP_F_00262E08(Ctx *c) { /* func_00262E08 */
ENTER(0x262e08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002600F0(c); return; }
}

void JP_F_00262E20(Ctx *c) { /* func_00262E20 */
ENTER(0x262e20);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00260100(c); return; }
}

void JP_F_00262E38(Ctx *c) { /* func_00262E38 */
ENTER(0x262e38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00260158(c); return; }
}

void JP_F_00262E50(Ctx *c) { /* func_00262E50 */
ENTER(0x262e50);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + 12632);
SET64(4, RD(0) + RD(0));
SET64(31, 0x262e6c); SET64(3, (s32)rd32(c, (RW(2) + 0))); JP_F_002647F8(c);
SET64(31, 0x262e74); SET64(4, RD(0) + RD(0)); JP_F_00264888(c);
SET64(2, (s64)(s32)0x400000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) + 12648);
SET32(29, RW(29) + 16); return;
}

void JP_F_00262E88(Ctx *c) { /* func_00262E88 */
ENTER(0x262e88);
SET32(2, RW(0) + 8191);
SET32(2, RW(2) + -32);
L_00262E90:;
if (RSD(2) >= 0) { SET32(2, RW(2) + -32); { POLL(); goto L_00262E90; } }
 return;
}

void JP_F_00262EB8(Ctx *c) { /* func_00262EB8 */
ENTER(0x262eb8);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + 12636)));
SET64(6, RD(4) + RD(0));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00262EDC; }
SET64(2, (s64)(s32)0x400000);
{ u32 t = RW(3); SET64(31, 0x262edc); SET64(4, (s32)rd32(c, (RW(2) + 12640))); rt_call(c, t); }
L_00262EDC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00262EE8(Ctx *c) { /* func_00262EE8 */
ENTER(0x262ee8);
SET64(2, (s64)(s32)0x400000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(2) + 12752);
SET32(7, RW(0) + 1);
SET32(6, RW(0) + 2);
L_00262F00:;
SET64(2, (s8)rd8(c, (RW(4) + 0)));
if (RD(2) != RD(7)) { SET32(5, RW(5) + 1); goto L_00262F1C; }
SET64(3, (s8)rd8(c, (RW(4) + 2)));
{ int t = RD(3) == RD(6); SET32(2, RW(0) + 1); if (t) goto L_00262F30; }
SET32(5, RW(5) + 1);
L_00262F1C:;
SET64(2, RSD(5) < (s64)13);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 48); if (t) { POLL(); goto L_00262F00; } }
SET64(2, RD(0) + RD(0));
L_00262F30:;
 return;
}

void JP_F_00262F38(Ctx *c) { /* func_00262F38 */
ENTER(0x262f38);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x262f54); SET32(4, RW(0) + 16384); JP_F_00260080(c);
SET32(17, RW(16) + 20);
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET32(5, RW(0) + 1);
SET64(31, 0x262f68); SET64(6, RD(17) + RD(0)); JP_F_00260318(c);
SET32(4, RW(0) + 16385);
SET64(31, 0x262f74); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
{ int t = RSD(16) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00262F88; }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(0) < RD(2));
L_00262F88:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00262FA0(Ctx *c) { /* func_00262FA0 */
ENTER(0x262fa0);
SET32(29, RW(29) + -16);
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(5) + 36)));
SET64(2, (s32)rd32(c, (RW(5) + 28)));
SET64(3, rd64(c, (RW(5) + 8)));
SET32(7, RW(4) << 11);
SET64(2, RD(2) + RD(4));
SET64(2, RD(2) << 11);
SET64(4, RD(2) - RD(3));
SET64(3, RD(3) < RD(2));
SET64(2, RD(4) << 32);
SET64(2, RSD(2) >> 32);
{ int t = RD(3) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00262FF8; }
SET64(4, (s32)rd32(c, (RW(5) + 32)));
SET64(5, RD(0) + RD(0));
SET64(6, RD(2) + RD(0));
SET32(4, RW(4) + RW(7));
SET32(4, RW(4) - RW(2));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
L_00262FF8:;
SET32(29, RW(29) + 16); return;
}

static void JP_B_00263000(Ctx *c, u32 entry) { /* func_00263000 */
ENTER(entry);
switch (entry) { case 0x263058: goto L_00263058; case 0x263068: goto L_00263068; case 0x263090: goto L_00263090; case 0x2630a4: goto L_002630A4; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 44)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002630B8; }
SET64(31, 0x263024);  JP_F_0026C098(c);
SET64(31, 0x26302c); SET64(4, (s32)rd32(c, (RW(16) + 44))); JP_F_0025F418(c);
SET64(3, RD(2) + RD(0));
SET64(2, RD(3) < (u64)(s64)10);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002630A8; }
SET32(2, RW(3) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 14752)));
{ u32 t = RW(3);  switch (t) { case 0x263058: goto L_00263058; case 0x263068: goto L_00263068; case 0x263090: goto L_00263090; case 0x2630a4: goto L_002630A4; default: rt_jump(c, t); return; } }
L_00263058:;
SET32(2, RW(0) + 3);
SET64(4, (s32)rd32(c, (RW(16) + 44)));
wr8(c, (RW(16) + 2), (u8)RW(2)); goto L_00263098;
L_00263068:;
SET64(4, (s32)rd32(c, (RW(16) + 36)));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(16) + 28)));
wr32(c, (RW(16) + 40), RW(4));
SET32(2, RW(2) + RW(4));
SET64(4, (s32)rd32(c, (RW(16) + 44)));
wr8(c, (RW(16) + 2), (u8)RW(3));
wr32(c, (RW(16) + 28), RW(2)); goto L_00263098;
L_00263090:;
wr8(c, (RW(16) + 2), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 44)));
L_00263098:;
SET64(31, 0x2630a0);  JP_F_0025F1D8(c);
wr32(c, (RW(16) + 44), RW(0));
L_002630A4:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002630A8:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0026C110(c); return; }
L_002630B8:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}
void JP_F_00263000(Ctx *c) { JP_B_00263000(c, 0x263000); }
void JP_F_00263058(Ctx *c) { JP_B_00263000(c, 0x263058); }
void JP_F_00263068(Ctx *c) { JP_B_00263000(c, 0x263068); }
void JP_F_00263090(Ctx *c) { JP_B_00263000(c, 0x263090); }
void JP_F_002630A4(Ctx *c) { JP_B_00263000(c, 0x2630a4); }

void JP_F_002630C8(Ctx *c) { /* func_002630C8 */
ENTER(0x2630c8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2630ec); SET32(4, RW(19) + 12644); JP_F_0026CC20(c);
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x400000); if (t) goto L_00263124; }
SET32(18, RW(0) + 1);
SET32(16, RW(2) + 12752);
SET32(17, RW(0) + 12);
L_00263100:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00263118; }
SET64(31, 0x263114); SET64(4, RD(16) + RD(0)); JP_F_00263000(c);
SET32(17, RW(17) + -1);
L_00263118:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 48); if (t) { POLL(); goto L_00263100; } }
wr32(c, (RW(19) + 12644), RW(0));
L_00263124:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00263140(Ctx *c) { /* func_00263140 */
ENTER(0x263140);
SET64(2, (s64)(s32)0x400000);
SET64(3, (s64)(s32)0x400000);
wr32(c, (RW(2) + 12636), RW(4));
wr32(c, (RW(3) + 12640), RW(5)); return;
}

void JP_F_00263158(Ctx *c) { /* func_00263158 */
ENTER(0x263158);
SET32(29, RW(29) + -48);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_002631E4; }
SET64(31, 0x26317c); SET64(5, RD(29) + RD(0)); JP_F_002645F8(c);
SET64(2, (s64)(s32)0x400000);
SET32(17, RW(2) + 13376);
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_002631E0; }
SET64(31, 0x26319c);  JP_F_00263D00(c);
SET64(31, 0x2631a4); SET32(4, RW(0) + 16896); JP_F_00260080(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2631b0); SET32(5, RW(0) + 1); JP_F_00260390(c);
SET32(4, RW(0) + 16897);
SET64(31, 0x2631bc); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
SET32(4, RW(0) + 17152);
{ int t = RSD(16) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_002631E4; }
SET64(31, 0x2631d0);  JP_F_00260080(c);
SET64(31, 0x2631d8); SET64(4, RD(16) + RD(0)); JP_F_002603F8(c);
SET64(31, 0x2631e0); SET32(4, RW(0) + 17153); JP_F_00260080(c);
L_002631E0:;
SET32(2, RW(0) + 1);
L_002631E4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002631F8(Ctx *c) { /* func_002631F8 */
ENTER(0x2631f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x263208);  JP_F_00263220(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET32(29, RW(29) + 16); return;
}

void JP_F_00263220(Ctx *c) { /* func_00263220 */
ENTER(0x263220);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_00263248; }
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 14792); goto L_002633B0;
L_00263248:;
SET64(31, 0x263250); SET64(5, RD(29) + RD(0)); JP_F_002645F8(c);
SET64(2, (s32)rd32(c, (RW(29) + 4)));
{ int t = RD(2) != RD(0); SET64(17, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_002633C0; }
SET64(2, (s64)(s32)0x400000);
SET64(4, RD(16) + RD(0));
SET32(17, RW(2) + 13376);
SET64(31, 0x263270); SET64(5, RD(17) + RD(0)); JP_F_00263D00(c);
SET64(31, 0x263278); SET32(4, RW(0) + 17408); JP_F_00260080(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x263284); SET32(5, RW(0) + 1); JP_F_00260390(c);
SET32(4, RW(0) + 17409);
SET64(31, 0x263290); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
{ int t = RSD(16) >= 0; SET64(2, (s64)(s32)0x10000); if (t) goto L_002632B8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(17) + RD(0));
SET64(31, 0x2632a8); SET32(4, RW(4) + 14840); JP_F_00251820(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 14872);
SET64(4, RD(0) + RD(0)); goto L_002633B0;
L_002632B8:;
SET64(2, RD(2) | 0x4);
if (RD(16) != RD(2)) { SET32(2, RW(0) + 19); goto L_002632E0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2632d0); SET32(4, RW(4) + 14912); JP_F_00251820(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 14968);
SET64(4, RD(0) + RD(0)); goto L_002633B0;
L_002632E0:;
{ int t = RD(16) != RD(2);  if (t) goto L_00263308; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2632f4); SET32(4, RW(4) + 15008); JP_F_00251820(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 14968);
SET64(4, RD(0) + RD(0)); goto L_002633B0;
L_00263308:;
SET64(31, 0x263310); SET32(4, RW(0) + 17920); JP_F_00260080(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x263320); SET64(6, RD(0) + RD(0)); JP_F_00260260(c);
SET64(31, 0x263328); SET32(4, RW(0) + 17921); JP_F_00260080(c);
SET64(31, 0x263330); SET32(4, RW(0) + 17920); JP_F_00260080(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x263340); SET32(6, RW(0) + 2); JP_F_00260260(c);
SET32(4, RW(0) + 17921);
SET64(31, 0x26334c); SET64(17, RD(2) + RD(0)); JP_F_00260080(c);
{ int t = RSD(17) >= 0; SET64(5, (s64)(s32)0x4b0000); if (t) goto L_00263380; }
SET64(4, RD(0) + RD(0));
SET64(31, 0x263360); SET32(5, RW(5) + 15064); JP_F_00262EB8(c);
SET64(31, 0x263368); SET32(4, RW(0) + 17664); JP_F_00260080(c);
SET64(31, 0x263370); SET64(4, RD(16) + RD(0)); JP_F_002603F8(c);
SET64(31, 0x263378); SET32(4, RW(0) + 17665); JP_F_00260080(c);
SET64(2, RD(0) + RD(0)); goto L_002633C4;
L_00263380:;
SET64(31, 0x263388); SET32(4, RW(0) + 20480); JP_F_00260080(c);
SET64(31, 0x263390); SET64(4, RD(16) + RD(0)); JP_F_002603F8(c);
SET32(4, RW(0) + 20481);
SET64(31, 0x26339c); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
if (RSD(16) >= 0) { SET64(2, RD(17) + RD(0)); goto L_002633C4; }
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(0) + RD(0));
SET32(5, RW(5) + 15112);
L_002633B0:;
SET64(31, 0x2633b8);  JP_F_00262EB8(c);
SET64(2, RD(0) + RD(0)); goto L_002633C4;
L_002633C0:;
SET64(2, RD(17) + RD(0));
L_002633C4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002633D8(Ctx *c) { /* func_002633D8 */
ENTER(0x2633d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2633f4); SET32(4, RW(0) + 18176); JP_F_00260080(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x263404); SET64(6, RD(0) + RD(0)); JP_F_00260260(c);
SET32(4, RW(0) + 18177);
SET64(31, 0x263410); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
SET32(4, RW(0) + 18432);
{ int t = RSD(16) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_0026344C; }
SET64(31, 0x263424);  JP_F_00260080(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x263434); SET32(6, RW(0) + 2); JP_F_00260260(c);
SET32(4, RW(0) + 18433);
SET64(31, 0x263440); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
SET64(3, RSD(16) < (s64)0);
SET64(2, RD(0) + RD(0));
if (RD(3) == 0) SET64(2, RD(16));
L_0026344C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00263460(Ctx *c) { /* func_00263460 */
ENTER(0x263460);
SET64(2, (s64)(s32)0x400000);
SET64(5, RD(0) + RD(0));
SET32(3, RW(2) + 12752);
SET32(4, RW(0) + 12);
L_00263470:;
SET64(2, (s8)rd8(c, (RW(3) + 0)));
SET32(4, RW(4) + -1);
SET64(2, RD(2) ^ 0x0);
if (RD(2) == 0) SET64(5, RD(3));
{ int t = RSD(4) >= 0; SET32(3, RW(3) + 48); if (t) { POLL(); goto L_00263470; } }
SET64(2, RD(5) + RD(0)); return;
}

void JP_F_00263498(Ctx *c) { /* func_00263498 */
ENTER(0x263498);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 48);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_002634B8(Ctx *c) { /* func_002634B8 */
ENTER(0x2634b8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
{ int t = RD(17) != RD(0); wr64(c, (RW(29) + 0), RD(0)); if (t) goto L_002634E8; }
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 15160); goto L_00263520;
L_002634E8:;
{ int t = RD(6) == RD(0); SET64(5, (s64)(s32)0x4b0000); if (t) goto L_00263500; }
SET64(4, RD(0) + RD(0));
SET32(5, RW(5) + 15200); goto L_00263520;
L_00263500:;
SET64(31, 0x263508);  JP_F_00263460(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00263530; }
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(0) + RD(0));
SET32(5, RW(5) + 15240);
L_00263520:;
SET64(31, 0x263528);  JP_F_00262EB8(c);
SET64(2, RD(0) + RD(0)); goto L_00263618;
L_00263530:;
SET64(31, 0x263538); SET64(5, RD(29) + RD(0)); JP_F_002645F8(c);
SET64(2, (s32)rd32(c, (RW(29) + 4)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_002635D0; }
SET64(2, (s64)(s32)0x400000);
SET64(4, RD(17) + RD(0));
SET32(18, RW(2) + 13376);
SET64(31, 0x263558); SET64(5, RD(18) + RD(0)); JP_F_00263D00(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 15288);
SET64(31, 0x263568); SET64(5, RD(17) + RD(0)); JP_F_002517A8(c);
SET64(31, 0x263570); SET64(4, RD(17) + RD(0)); JP_F_00263220(c);
SET64(3, RD(2) + RD(0));
SET64(2, RD(0) + RD(0));
{ int t = RD(3) == RD(0); wr64(c, (RW(16) + 8), RD(3)); if (t) goto L_00263618; }
SET64(31, 0x263588); SET32(4, RW(0) + 18688); JP_F_00260080(c);
SET64(2, (s64)(s32)0x400000);
SET64(5, (s32)rd32(c, (RW(2) + 13696)));
SET64(31, 0x263598); SET64(4, RD(18) + RD(0)); JP_F_00260390(c);
SET32(4, RW(0) + 18689);
SET64(31, 0x2635a4); wr32(c, (RW(16) + 24), RW(2)); JP_F_00260080(c);
SET64(2, (s32)rd32(c, (RW(16) + 24)));
if (RSD(2) >= 0) { wr8(c, (RW(16) + 1), (u8)RW(0)); goto L_002635E4; }
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(0) + RD(0));
SET64(31, 0x2635c0); SET32(5, RW(5) + 15328); JP_F_00262EB8(c);
SET64(31, 0x2635c8); SET64(4, RD(16) + RD(0)); JP_F_00263498(c);
SET64(2, RD(0) + RD(0)); goto L_00263618;
L_002635D0:;
wr8(c, (RW(16) + 1), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
wr32(c, (RW(16) + 24), RW(3));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
wr64(c, (RW(16) + 8), RD(2));
L_002635E4:;
SET64(3, rd64(c, (RW(16) + 8)));
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 28), RW(0));
SET64(3, RD(3) + (s64)2047);
wr32(c, (RW(16) + 32), RW(0));
SET64(3, RD(3) << 21);
SET64(3, RSD(3) >> 32);
wr32(c, (RW(16) + 36), RW(0));
wr32(c, (RW(16) + 16), RW(3));
wr32(c, (RW(16) + 20), RW(0));
wr8(c, (RW(16) + 2), (u8)RW(0));
wr8(c, (RW(16) + 0), (u8)RW(2));
SET64(2, RD(16) + RD(0));
L_00263618:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00263630(Ctx *c) { /* func_00263630 */
ENTER(0x263630);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
{ int t = RD(17) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_002636B8; }
SET64(2, rd8(c, (RW(17) + 2)));
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) != RD(0)) { SET64(2, (s8)rd8(c, (RW(17) + 1))); goto L_00263664; }
SET64(31, 0x263660);  JP_F_00263930(c);
SET64(2, (s8)rd8(c, (RW(17) + 1)));
L_00263664:;
if (RD(2) != RD(0)) { wr8(c, (RW(17) + 0), (u8)RW(0)); goto L_002636A0; }
SET64(31, 0x263674); SET32(4, RW(0) + 20480); JP_F_00260080(c);
SET64(31, 0x26367c); SET64(4, (s32)rd32(c, (RW(17) + 24))); JP_F_002603F8(c);
SET32(4, RW(0) + 20481);
SET64(31, 0x263688); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RSD(16) >= 0; SET32(4, RW(4) + 15368); if (t) goto L_0026369C; }
SET64(31, 0x26369c);  JP_F_002517A8(c);
L_0026369C:;
wr8(c, (RW(17) + 0), (u8)RW(0));
L_002636A0:;
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00263498(c); return; }
L_002636B8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002636D0(Ctx *c) { /* func_002636D0 */
ENTER(0x2636d0);
SET32(29, RW(29) + -16);
SET64(7, RD(4) + RD(0));
{ int t = RD(7) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002636F8; }
SET64(5, (s64)(s32)0x4b0000);
SET64(31, 0x2636ec); SET32(5, RW(5) + 15392); JP_F_00262EB8(c);
SET64(2, RD(0) + RD(0)); goto L_00263758;
L_002636F8:;
{ int t = RD(6) != RD(0); SET32(2, RW(0) + 2); if (t) goto L_00263708; }
wr32(c, (RW(7) + 28), RW(5)); goto L_00263738;
L_00263708:;
{ int t = RD(6) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_00263720; }
SET64(4, (s32)rd32(c, (RW(7) + 16)));
SET32(2, RW(4) + RW(5));
wr32(c, (RW(7) + 28), RW(2)); goto L_0026373C;
L_00263720:;
{ int t = RD(6) != RD(2); SET64(4, (s32)rd32(c, (RW(7) + 16))); if (t) goto L_0026373C; }
SET64(2, (s32)rd32(c, (RW(7) + 28)));
SET32(2, RW(2) + RW(5));
wr32(c, (RW(7) + 28), RW(2)); goto L_0026373C;
L_00263738:;
SET64(4, (s32)rd32(c, (RW(7) + 16)));
L_0026373C:;
SET64(2, (s32)rd32(c, (RW(7) + 28)));
wr32(c, (RW(7) + 40), RW(0));
SET64(3, RSD(2) < RSD(4));
if (RD(3) == 0) SET64(2, RD(4));
SET64(4, RSD(2) < (s64)0);
if (RD(4) != 0) SET64(2, RD(0));
wr32(c, (RW(7) + 28), RW(2));
L_00263758:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00263768(Ctx *c) { /* func_00263768 */
ENTER(0x263768);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00263790; }
SET64(5, (s64)(s32)0x4b0000);
SET64(31, 0x263784); SET32(5, RW(5) + 15392); JP_F_00262EB8(c);
SET64(2, RD(0) + RD(0)); goto L_00263794;
L_00263790:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
L_00263794:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002637A0(Ctx *c) { /* func_002637A0 */
ENTER(0x2637a0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
{ int t = RD(17) != RD(0); wr64(c, (RW(29) + 48), RD(31)); if (t) goto L_002637E0; }
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 15392); goto L_002637FC;
L_002637E0:;
{ int t = RSD(18) >= 0; SET64(5, (s64)(s32)0x4b0000); if (t) goto L_002637F0; }
SET32(5, RW(5) + 15416); goto L_002637FC;
L_002637F0:;
{ int t = RD(19) != RD(0); SET64(5, (s64)(s32)0x4b0000); if (t) goto L_00263810; }
SET32(5, RW(5) + 15448);
L_002637FC:;
SET64(31, 0x263804);  JP_F_00262EB8(c);
SET64(2, RD(0) + RD(0)); goto L_0026390C;
L_00263810:;
SET64(31, 0x263818); SET32(20, RW(0) + 1); JP_F_00262EE8(c);
if (RD(2) != RD(20)) { SET64(3, (s8)rd8(c, (RW(17) + 2))); goto L_00263828; }
SET64(2, RD(0) + RD(0)); goto L_0026390C;
L_00263828:;
SET32(21, RW(0) + 2);
{ int t = RD(3) == RD(21); SET64(2, RD(0) + RD(0)); if (t) goto L_0026390C; }
{ int t = RD(18) != RD(0);  if (t) goto L_00263848; }
wr8(c, (RW(17) + 2), (u8)RW(20)); goto L_0026390C;
L_00263848:;
SET64(31, 0x263850);  JP_F_0025F150(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); wr32(c, (RW(17) + 44), RW(3)); if (t) goto L_0026390C; }
SET64(3, (s32)rd32(c, (RW(17) + 28)));
SET64(5, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 16)));
SET32(16, RW(18) << 11);
SET64(7, rd64(c, (RW(17) + 8)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(17) + 32), RW(19));
SET64(3, RSD(18) < RSD(2));
SET64(6, RD(7) < RD(16));
if (RD(3) == 0) SET64(5, RD(2));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 36), RW(5));
SET64(31, 0x263894); if (RD(6) != 0) SET64(16, RD(7)); JP_F_00262FA0(c);
SET64(4, (s32)rd32(c, (RW(17) + 44)));
SET64(5, (s32)rd32(c, (RW(17) + 24)));
SET64(7, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(17) + 28)));
SET64(31, 0x2638ac); SET64(8, RD(19) + RD(0)); JP_F_0025F368(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00263910; }
SET64(2, (s64)(s32)0x400000);
SET64(16, (s32)rd32(c, (RW(2) + 13696)));
if (RD(16) != RD(20)) { wr8(c, (RW(17) + 2), (u8)RW(21)); goto L_00263900; }
SET64(31, 0x2638cc);  JP_F_0025FD08(c);
SET64(31, 0x2638d4);  JP_F_0025FBF8(c);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(3, (s32)rd32(c, (RW(17) + 36)));
SET64(4, (s32)rd32(c, (RW(17) + 44)));
SET32(2, RW(2) + RW(3));
SET64(31, 0x2638ec); wr32(c, (RW(17) + 28), RW(2)); JP_F_0025F1D8(c);
wr32(c, (RW(17) + 44), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 36)));
wr8(c, (RW(17) + 2), (u8)RW(16));
wr32(c, (RW(17) + 40), RW(2)); goto L_00263908;
L_00263900:;
wr32(c, (RW(17) + 40), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 36)));
L_00263908:;
wr32(c, (RW(17) + 20), RW(0));
L_0026390C:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00263910:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00263930(Ctx *c) { /* func_00263930 */
ENTER(0x263930);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_00263980; }
SET64(5, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(5) + 15488);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_00262EB8(c); return; }
L_00263980:;
SET64(2, rd8(c, (RW(16) + 2)));
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00263A08; }
SET64(4, (s32)rd32(c, (RW(16) + 44)));
{ int t = RD(4) == RD(0); SET64(17, (s64)(s32)0x630000); if (t) goto L_002639A4; }
SET64(31, 0x2639a4);  JP_F_0025F678(c);
L_002639A4:;
SET32(19, RW(0) + 2);
SET64(17, RD(17) | 0xfff6);
SET64(20, (s64)(s32)0x4b0000); goto L_002639C0;
L_002639B8:;
SET64(31, 0x2639c0);  JP_F_00262E88(c);
L_002639C0:;
SET64(31, 0x2639c8);  JP_F_0025FBF8(c);
SET64(31, 0x2639d0);  JP_F_002630C8(c);
SET64(31, 0x2639d8); SET64(4, RD(16) + RD(0)); JP_F_00263A28(c);
SET64(3, (s8)rd8(c, (RW(16) + 2)));
if (RD(3) != RD(19)) { wr32(c, (RW(16) + 40), RW(0)); goto L_00263A00; }
SET32(18, RW(18) + 1);
SET64(2, RSD(17) < RSD(18));
{ int t = RD(2) == RD(0);  if (t) { POLL(); goto L_002639B8; } }
SET64(31, 0x2639fc); SET32(4, RW(20) + 15512); JP_F_00251820(c);
wr32(c, (RW(16) + 40), RW(0));
L_00263A00:;
wr8(c, (RW(16) + 2), (u8)RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_00263A08:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00263A28(Ctx *c) { /* func_00263A28 */
ENTER(0x263a28);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00263A50; }
SET64(5, (s64)(s32)0x4b0000);
SET64(31, 0x263a44); SET32(5, RW(5) + 15392); JP_F_00262EB8(c);
SET64(2, RD(0) + RD(0)); goto L_00263A54;
L_00263A50:;
SET64(2, (s8)rd8(c, (RW(2) + 2)));
L_00263A54:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00263A60(Ctx *c) { /* func_00263A60 */
ENTER(0x263a60);
SET32(2, RW(0) + 2048); return;
}

void JP_F_00263A68(Ctx *c) { /* func_00263A68 */
ENTER(0x263a68);
SET32(29, RW(29) + -16);
SET64(5, RD(4) + RD(0));
{ int t = RD(5) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00263A90; }
SET64(5, (s64)(s32)0x4b0000);
SET64(31, 0x263a84); SET32(5, RW(5) + 15392); JP_F_00262EB8(c);
SET64(2, RD(0) + RD(0)); goto L_00263AA8;
L_00263A90:;
SET64(3, (s8)rd8(c, (RW(5) + 2)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_00263AA8; }
SET64(2, (s32)rd32(c, (RW(5) + 40)));
SET32(2, RW(2) << 11);
L_00263AA8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00263AB8(Ctx *c) { /* func_00263AB8 */
ENTER(0x263ab8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00263220(c); return; }
}

void JP_F_00263AD0(Ctx *c) { /* func_00263AD0 */
ENTER(0x263ad0);
SET64(2, (s32)rd32(c, (RW(4) + 40)));
SET64(5, rd64(c, (RW(4) + 8)));
SET64(2, RD(2) << 11);
SET64(3, RD(5) < RD(2));
if (RD(3) != 0) SET64(2, RD(5));
SET64(2, RSD(2) >> 32); return;
}

void JP_F_00263AF0(Ctx *c) { /* func_00263AF0 */
ENTER(0x263af0);
SET64(2, (s32)rd32(c, (RW(4) + 40)));
SET64(6, (s64)(s32)0xffff0000);
SET64(6, RD(6) >> 32);
SET64(5, rd64(c, (RW(4) + 8)));
SET64(2, RD(2) << 11);
SET64(3, RD(5) < RD(2));
if (RD(3) != 0) SET64(2, RD(5));
SET64(2, RD(2) & RD(6));
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32); return;
}

void JP_F_00263B20(Ctx *c) { /* func_00263B20 */
ENTER(0x263b20);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x263b30);  JP_F_00263AB8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RSD(2) >> 32);
SET32(29, RW(29) + 16); return;
}

void JP_F_00263B40(Ctx *c) { /* func_00263B40 */
ENTER(0x263b40);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x263b50);  JP_F_00263AB8(c);
SET64(3, (s64)(s32)0xffff0000);
SET64(3, RD(3) >> 32);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) & RD(3));
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET32(29, RW(29) + 16); return;
}

void JP_F_00263B70(Ctx *c) { /* func_00263B70 */
ENTER(0x263b70);
SET32(29, RW(29) + -16);
SET64(3, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00263C28; }
SET32(2, RW(0) + 203);
{ int t = RD(5) == RD(2); SET64(2, RSD(5) < (s64)204); if (t) goto L_00263C10; }
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 205); if (t) goto L_00263BC0; }
SET32(2, RW(0) + 201);
{ int t = RD(5) == RD(2); SET64(2, RSD(5) < (s64)202); if (t) goto L_00263BF0; }
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 200); if (t) goto L_00263C00; }
{ int t = RD(5) == RD(2); SET64(2, RD(3) + RD(0)); if (t) goto L_00263BE0; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_00263C2C;
L_00263BC0:;
{ int t = RD(5) == RD(2); SET64(2, RSD(5) < (s64)205); if (t) goto L_00263C10; }
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 299); if (t) goto L_00263C00; }
{ int t = RD(5) == RD(2); SET64(2, RD(3) + RD(0)); if (t) goto L_00263C20; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_00263C2C;
L_00263BE0:;
SET64(31, 0x263be8);  JP_F_00263AD0(c);
SET64(3, RD(2) + RD(0)); goto L_00263C24;
L_00263BF0:;
SET64(31, 0x263bf8);  JP_F_00263AF0(c);
SET64(3, RD(2) + RD(0)); goto L_00263C24;
L_00263C00:;
SET64(31, 0x263c08);  JP_F_00263B20(c);
SET64(3, RD(2) + RD(0)); goto L_00263C24;
L_00263C10:;
SET64(31, 0x263c18);  JP_F_00263B40(c);
SET64(3, RD(2) + RD(0)); goto L_00263C24;
L_00263C20:;
SET32(3, RW(0) + 1);
L_00263C24:;
SET64(2, RD(3) + RD(0));
L_00263C28:;
SET64(31, rd64(c, (RW(29) + 0)));
L_00263C2C:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00263C38(Ctx *c) { /* func_00263C38 */
ENTER(0x263c38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x263c4c); SET64(16, RD(4) + RD(0)); JP_F_0012A4D8(c);
SET64(6, RD(2) + RD(0));
SET32(2, RW(0) + 16);
SET64(3, RD(6) < (u64)(s64)17);
if (RD(3) == 0) SET64(6, RD(2));
{ int t = RD(6) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00263C94; }
SET32(7, RW(0) + 58);
SET32(2, RW(16) + RW(5));
L_00263C70:;
SET32(5, RW(5) + 1);
SET64(3, (s8)rd8(c, (RW(2) + 0)));
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(7); SET64(4, RD(5) < RD(6)); if (t) goto L_00263C98; }
{ int t = RD(4) != RD(0); SET32(2, RW(16) + RW(5)); if (t) { POLL(); goto L_00263C70; } }
L_00263C94:;
SET64(2, RD(0) + RD(0));
L_00263C98:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00263CA8(Ctx *c) { /* func_00263CA8 */
ENTER(0x263ca8);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 6);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x263cc8); SET64(4, RD(29) + RD(0)); JP_F_001273D0(c);
lwl(c, 2, (RW(16) + 3));
lwr(c, 2, (RW(16) + 0));
swl(c, 2, (RW(29) + 3));
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 15544);
SET64(4, RD(29) + RD(0));
swr(c, 2, (RW(29) + 0));
SET64(31, 0x263cec); wr8(c, (RW(29) + 5), (u8)RW(0)); JP_F_0012A278(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(2, RD(2) < (u64)(s64)1);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00263D00(Ctx *c) { /* func_00263D00 */
ENTER(0x263d00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x263d24); wr8(c, (RW(17) + 0), (u8)RW(0)); JP_F_00263C38(c);
{ int t = RD(2) != RD(0); SET64(5, (s64)(s32)0x400000); if (t) goto L_00263D38; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x263d38); SET32(5, RW(5) + 13968); JP_F_0012A3C0(c);
L_00263D38:;
SET64(31, 0x263d40); SET64(4, RD(17) + RD(0)); JP_F_00263CA8(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(5, RD(18) + RD(0)); goto L_00263DB0; }
SET64(16, (s64)(s32)0x400000);
SET64(4, RD(17) + RD(0));
SET32(16, RW(16) + 13704);
SET64(31, 0x263d60); SET64(5, RD(16) + RD(0)); JP_F_00129FB8(c);
SET64(31, 0x263d68); SET64(4, RD(16) + RD(0)); JP_F_0012A4D8(c);
SET32(4, RW(0) + 92);
SET32(2, RW(2) + RW(16));
SET64(2, (s8)rd8(c, (RW(2) + -1)));
{ int t = RD(2) == RD(4); SET32(3, RW(0) + 47); if (t) goto L_00263DAC; }
{ int t = RD(2) == RD(3); SET64(5, RD(18) + RD(0)); if (t) goto L_00263DB0; }
{ int t = RD(2) == RD(0);  if (t) goto L_00263DB0; }
SET64(2, (s8)rd8(c, (RW(18) + 0)));
{ int t = RD(2) == RD(4);  if (t) goto L_00263DB0; }
{ int t = RD(2) == RD(3); SET64(5, (s64)(s32)0x4b0000); if (t) goto L_00263DAC; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x263dac); SET32(5, RW(5) + 15552); JP_F_00129FB8(c);
L_00263DAC:;
SET64(5, RD(18) + RD(0));
L_00263DB0:;
SET64(31, 0x263db8); SET64(4, RD(17) + RD(0)); JP_F_00129FB8(c);
SET64(31, 0x263dc0); SET64(4, RD(17) + RD(0)); JP_F_0012A4D8(c);
SET64(6, RD(2) + RD(0));
{ int t = RSD(6) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_00263DFC; }
SET32(8, RW(0) + 92);
SET32(7, RW(0) + 47);
SET32(4, RW(17) + RW(5));
L_00263DD8:;
SET32(5, RW(5) + 1);
SET64(2, (s8)rd8(c, (RW(4) + 0)));
{ int t = RD(2) != RD(8); SET64(3, RSD(5) < RSD(6)); if (t) goto L_00263DEC; }
wr8(c, (RW(4) + 0), (u8)RW(7));
L_00263DEC:;
{ int t = RD(3) != RD(0); SET32(4, RW(17) + RW(5)); if (t) { POLL(); goto L_00263DD8; } }
L_00263DFC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00263E18(Ctx *c) { /* func_00263E18 */
ENTER(0x263e18);
SET32(4, RW(4) << 24);
SET32(2, RW(0) + 47);
SET32(4, RSW(4) >> 24);
SET64(3, RD(4) ^ 0x5c);
if (RD(3) != 0) SET64(2, RD(4)); return;
}

void JP_F_00263E30(Ctx *c) { /* func_00263E30 */
ENTER(0x263e30);
SET32(29, RW(29) + -32);
SET32(4, RW(4) << 24);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(5) << 24);
SET32(17, RSW(17) >> 24);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x263e54); SET32(4, RSW(4) >> 24); JP_F_00263E18(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x263e60); SET64(16, RD(2) + RD(0)); JP_F_00263E18(c);
SET32(3, RW(0) + -1);
SET64(16, RD(16) ^ RD(2));
SET64(2, RD(0) + RD(0));
if (RD(16) != 0) SET64(2, RD(3));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00263E88(Ctx *c) { /* func_00263E88 */
ENTER(0x263e88);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x263eac); SET64(19, RD(4) + RD(0)); JP_F_0012A4D8(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x263eb8); SET64(17, RD(2) + RD(0)); JP_F_0012A4D8(c);
{ int t = RD(17) == RD(2);  if (t) goto L_00263EC8; }
L_00263EC0:;
SET32(2, RW(0) + -1); goto L_00263F00;
L_00263EC8:;
{ int t = RSD(17) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00263EFC; }
SET32(3, RW(18) + RW(16));
L_00263ED8:;
SET32(2, RW(19) + RW(16));
SET64(5, (s8)rd8(c, (RW(3) + 0)));
SET32(16, RW(16) + 1);
SET64(31, 0x263eec); SET64(4, (s8)rd8(c, (RW(2) + 0))); JP_F_00263E30(c);
{ int t = RD(2) != RD(0); SET64(3, RSD(16) < RSD(17)); if (t) { POLL(); goto L_00263EC0; } }
{ int t = RD(3) != RD(0); SET32(3, RW(18) + RW(16)); if (t) { POLL(); goto L_00263ED8; } }
L_00263EFC:;
SET64(2, RD(0) + RD(0));
L_00263F00:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00263F20(Ctx *c) { /* func_00263F20 */
ENTER(0x263f20);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(6) + RD(0));
wr64(c, (RW(29) + 80), RD(30));
SET64(30, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 64), RD(22));
wr64(c, (RW(29) + 72), RD(23));
wr64(c, (RW(29) + 88), RD(31));
wr32(c, (RW(29) + 0), RW(4));
SET64(2, (s8)rd8(c, (RW(19) + 0)));
{ int t = RD(2) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00264060; }
SET32(2, RW(21) << 3);
SET64(4, RD(19) + RD(0));
wr32(c, (RW(29) + 4), RW(2));
SET32(23, RW(0) + 10);
SET32(22, RW(0) + 13);
SET64(2, (s8)rd8(c, (RW(4) + 0)));
L_00263F88:;
SET32(6, RW(0) + 92);
{ int t = RD(2) != RD(6); SET64(3, rd8(c, (RW(4) + 0))); if (t) goto L_00263FA0; }
SET32(2, RW(0) + 47);
SET32(3, RW(0) + 47);
wr8(c, (RW(4) + 0), (u8)RW(2));
L_00263FA0:;
SET32(2, RW(3) << 24);
SET32(2, RSW(2) >> 24);
if (RD(2) == RD(23)) { SET64(2, (s8)rd8(c, (RW(4) + 1))); goto L_00263FC4; }
if (RD(2) == RD(22)) { SET64(2, (s8)rd8(c, (RW(4) + 1))); goto L_00263FC4; }
{ int t = RD(2) != RD(0); SET32(3, RW(18) + 1); if (t) goto L_00264048; }
SET64(2, (s8)rd8(c, (RW(4) + 1)));
L_00263FC4:;
if (RD(2) == RD(23)) { SET32(18, RW(18) + 1); goto L_00263FE0; }
if (RD(2) == RD(22)) { SET32(18, RW(18) + 1); goto L_00263FE0; }
{ int t = RD(2) != RD(0); SET32(2, RW(4) + -1); if (t) goto L_00263FE8; }
SET32(18, RW(18) + 1);
L_00263FE0:;
SET32(4, RW(19) + RW(18));
SET32(2, RW(4) + -1);
L_00263FE8:;
SET64(3, (s8)rd8(c, (RW(2) + 0)));
{ int t = RD(3) == RD(23); SET32(17, RW(18) - RW(5)); if (t) goto L_00263FFC; }
if (RD(3) != RD(22)) { mul_s(c, 0, 2, RSW(30), RSW(20)); goto L_00264004; }
L_00263FFC:;
wr8(c, (RW(2) + 0), (u8)RW(0));
mul_s(c, 0, 2, RSW(30), RSW(20));
L_00264004:;
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(6, RD(17) + RD(0));
SET32(5, RW(19) + RW(5));
SET32(16, RW(2) + RW(20));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET32(16, RW(3) + RW(16));
SET32(16, RW(2) + RW(16));
SET64(31, 0x264028); SET64(4, RD(16) + RD(0)); JP_F_00127218(c);
SET32(6, RW(16) + RW(17));
SET64(2, (s8)rd8(c, (RW(6) + -1)));
if (RD(2) != RD(0)) { wr8(c, (RW(6) + 0), (u8)RW(0)); goto L_00264038; }
L_00264038:;
SET32(3, RW(18) + 1);
SET32(20, RW(20) + 1);
{ int t = RD(20) == RD(21); SET64(5, RD(3) + RD(0)); if (t) goto L_00264060; }
L_00264048:;
SET64(18, RD(3) + RD(0));
SET32(2, RW(19) + RW(18));
SET64(4, RD(2) + RD(0));
SET64(3, (s8)rd8(c, (RW(4) + 0)));
if (RD(3) != RD(0)) { SET64(2, (s8)rd8(c, (RW(4) + 0))); { POLL(); goto L_00263F88; } }
L_00264060:;
SET64(2, (s64)(s32)0x400000);
SET32(2, RW(2) + 13680);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
if (RD(3) != RD(0)) { SET64(2, RD(20) + RD(0)); goto L_0026408C; }
wr32(c, (RW(2) + 12), RW(30));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
wr32(c, (RW(2) + 8), RW(21));
wr32(c, (RW(2) + 0), RW(3));
wr32(c, (RW(2) + 4), RW(20));
SET64(2, RD(20) + RD(0));
L_0026408C:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(23, rd64(c, (RW(29) + 72)));
SET64(30, rd64(c, (RW(29) + 80)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); return;
}

void JP_F_002640C0(Ctx *c) { /* func_002640C0 */
ENTER(0x2640c0);
SET32(29, RW(29) + -304);
SET32(6, RW(0) + 256);
wr64(c, (RW(29) + 256), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 280), RD(19));
SET64(19, RD(5) + RD(0));
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 272), RD(18));
wr64(c, (RW(29) + 264), RD(17));
wr64(c, (RW(29) + 288), RD(31));
SET64(31, 0x2640f0); SET64(5, RD(0) + RD(0)); JP_F_001273D0(c);
SET64(5, RD(29) + RD(0));
SET64(31, 0x2640fc); SET64(4, RD(16) + RD(0)); JP_F_00263D00(c);
SET64(31, 0x264104); SET32(4, RW(0) + 24576); JP_F_00260080(c);
SET32(5, RW(0) + 1);
SET64(31, 0x264110); SET64(4, RD(29) + RD(0)); JP_F_00260390(c);
SET32(4, RW(0) + 24577);
SET64(31, 0x26411c); SET64(18, RD(2) + RD(0)); JP_F_00260080(c);
SET32(4, RW(0) + 24832);
{ int t = RSD(18) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00264204; }
SET64(31, 0x264130);  JP_F_00260080(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x264140); SET32(6, RW(0) + 2); JP_F_00260260(c);
SET32(4, RW(0) + 24833);
SET64(31, 0x26414c); SET64(17, RD(2) + RD(0)); JP_F_00260080(c);
SET32(4, RW(0) + 25088);
{ int t = RSD(17) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00264204; }
SET64(31, 0x264160);  JP_F_00260080(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x264170); SET64(6, RD(0) + RD(0)); JP_F_00260260(c);
SET64(16, RD(2) << 32);
SET64(16, RSD(16) >> 32);
SET64(31, 0x264180); SET32(4, RW(0) + 25089); JP_F_00260080(c);
SET32(2, RW(0) + 4096);
SET64(3, RSD(17) < (s64)4097);
if (RD(3) == 0) SET64(17, RD(2));
SET64(2, RD(0) + RD(0));
{ int t = RSD(16) < 0; SET32(4, RW(0) + 25344); if (t) goto L_00264204; }
SET64(31, 0x2641a0);  JP_F_00260080(c);
SET64(4, RD(18) + RD(0));
SET64(6, RD(17) << 32);
SET64(6, RSD(6) >> 32);
SET64(31, 0x2641b4); SET64(5, RD(19) + RD(0)); JP_F_00260450(c);
SET32(4, RW(0) + 25345);
SET64(31, 0x2641c0); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
{ int t = RSD(16) >= 0; SET32(4, RW(0) + 25856); if (t) goto L_002641E8; }
SET64(31, 0x2641d0);  JP_F_00260080(c);
SET64(31, 0x2641d8); SET64(4, RD(18) + RD(0)); JP_F_002603F8(c);
SET64(31, 0x2641e0); SET32(4, RW(0) + 25857); JP_F_00260080(c);
SET64(2, RD(0) + RD(0)); goto L_00264204;
L_002641E8:;
SET64(31, 0x2641f0); SET32(4, RW(0) + 25600); JP_F_00260080(c);
SET64(31, 0x2641f8); SET64(4, RD(18) + RD(0)); JP_F_002603F8(c);
SET64(31, 0x264200); SET32(4, RW(0) + 25601); JP_F_00260080(c);
SET32(2, RW(0) + 1);
L_00264204:;
SET64(16, rd64(c, (RW(29) + 256)));
SET64(17, rd64(c, (RW(29) + 264)));
SET64(18, rd64(c, (RW(29) + 272)));
SET64(19, rd64(c, (RW(29) + 280)));
SET64(31, rd64(c, (RW(29) + 288)));
SET32(29, RW(29) + 304); return;
}

void JP_F_00264220(Ctx *c) { /* func_00264220 */
ENTER(0x264220);
SET32(29, RW(29) + -336);
SET32(6, RW(0) + 256);
wr64(c, (RW(29) + 288), RD(20));
SET64(20, RD(5) + RD(0));
wr64(c, (RW(29) + 296), RD(21));
SET64(21, RD(4) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 280), RD(19));
SET64(19, RD(0) + RD(0));
wr64(c, (RW(29) + 304), RD(22));
SET64(22, RD(0) + RD(0));
wr64(c, (RW(29) + 320), RD(30));
wr64(c, (RW(29) + 256), RD(16));
wr64(c, (RW(29) + 264), RD(17));
wr64(c, (RW(29) + 272), RD(18));
wr64(c, (RW(29) + 312), RD(23));
wr64(c, (RW(29) + 328), RD(31));
SET64(31, 0x264270); SET64(30, RD(0) + RD(0)); JP_F_001273D0(c);
SET64(3, RSD(20) < (s64)14);
SET32(2, RW(0) + 13);
if (RD(3) == 0) SET64(20, RD(2));
if (RSD(20) <= 0) { SET64(4, (s64)(s32)0x4b0000); goto L_00264380; }
SET64(2, (s64)(s32)0x400000);
SET64(18, RD(21) + RD(0));
SET32(23, RW(2) + 13680);
L_00264290:;
SET64(3, (s32)rd32(c, (RW(23) + 12)));
SET64(5, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(23) + 8)));
mul_s(c, 0, 4, RSW(3), RSW(19));
SET32(2, RW(2) << 3);
SET32(3, RW(4) + RW(19));
SET32(19, RW(19) + 1);
SET32(2, RW(2) + RW(3));
SET32(17, RW(21) + RW(2));
SET64(31, 0x2642bc); SET64(4, RD(17) + RD(0)); JP_F_00263D00(c);
SET64(2, (s8)rd8(c, (RW(17) + 0)));
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 26112); if (t) goto L_00264370; }
SET64(31, 0x2642d0);  JP_F_00260080(c);
SET32(5, RW(0) + 1);
SET64(31, 0x2642dc); SET64(4, RD(29) + RD(0)); JP_F_00260390(c);
SET32(4, RW(0) + 26113);
SET64(31, 0x2642e8); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
SET64(5, RD(29) + RD(0));
{ int t = RSD(16) >= 0; SET64(4, RD(16) + RD(0)); if (t) goto L_00264310; }
SET64(2, (s64)(s32)0x4b0000);
SET32(30, RW(30) + 1);
SET64(31, 0x264304); SET32(4, RW(2) + 15560); JP_F_002517A8(c);
SET64(2, RSD(19) < RSD(20)); goto L_00264374;
L_00264310:;
wr32(c, (RW(18) + 0), RW(16));
SET64(31, 0x26431c); SET32(22, RW(22) + 1); JP_F_002633D8(c);
SET64(3, (s64)(s32)0x4b0000);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET32(4, RW(3) + 15600);
wr32(c, (RW(18) + 4), RW(2));
SET64(31, 0x264338); SET64(5, RD(17) + RD(0)); JP_F_002517A8(c);
SET64(31, 0x264340); SET32(4, RW(0) + 26624); JP_F_00260080(c);
SET64(31, 0x264348); SET64(4, RD(16) + RD(0)); JP_F_002603F8(c);
SET64(31, 0x264350); SET32(4, RW(0) + 26625); JP_F_00260080(c);
SET64(31, 0x264358); SET32(4, RW(0) + 26368); JP_F_00260080(c);
SET64(2, (s64)(s32)0x400000);
SET64(5, (s32)rd32(c, (RW(2) + 13696)));
SET64(31, 0x264368); SET64(4, RD(29) + RD(0)); JP_F_00260390(c);
SET64(31, 0x264370); SET32(4, RW(0) + 26369); JP_F_00260080(c);
L_00264370:;
SET64(2, RSD(19) < RSD(20));
L_00264374:;
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 8); if (t) { POLL(); goto L_00264290; } }
SET64(4, (s64)(s32)0x4b0000);
L_00264380:;
SET64(5, RD(22) + RD(0));
SET64(31, 0x26438c); SET32(4, RW(4) + 15632); JP_F_002517A8(c);
{ int t = RSD(30) <= 0; SET64(2, RD(22) + RD(0)); if (t) goto L_002643A8; }
SET64(4, (s64)(s32)0x4b0000);
SET32(5, RW(0) + 10);
SET64(31, 0x2643a4); SET32(4, RW(4) + 15656); JP_F_00251820(c);
SET64(2, RD(22) + RD(0));
L_002643A8:;
SET64(16, rd64(c, (RW(29) + 256)));
SET64(17, rd64(c, (RW(29) + 264)));
SET64(18, rd64(c, (RW(29) + 272)));
SET64(19, rd64(c, (RW(29) + 280)));
SET64(20, rd64(c, (RW(29) + 288)));
SET64(21, rd64(c, (RW(29) + 296)));
SET64(22, rd64(c, (RW(29) + 304)));
SET64(23, rd64(c, (RW(29) + 312)));
SET64(30, rd64(c, (RW(29) + 320)));
SET64(31, rd64(c, (RW(29) + 328)));
SET32(29, RW(29) + 336); return;
}

void JP_F_002643D8(Ctx *c) { /* func_002643D8 */
ENTER(0x2643d8);
SET32(29, RW(29) + -336);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 304), RD(22));
SET64(22, RD(0) + RD(0));
wr64(c, (RW(29) + 256), RD(16));
SET32(3, RW(2) + 13680);
wr64(c, (RW(29) + 264), RD(17));
wr64(c, (RW(29) + 272), RD(18));
wr64(c, (RW(29) + 280), RD(19));
wr64(c, (RW(29) + 288), RD(20));
wr64(c, (RW(29) + 296), RD(21));
wr64(c, (RW(29) + 312), RD(23));
wr64(c, (RW(29) + 320), RD(30));
wr64(c, (RW(29) + 328), RD(31));
SET64(19, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(19) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002644D8; }
SET64(20, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(20) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002644BC; }
SET64(21, RD(3) + RD(0));
SET64(30, (s64)(s32)0x4b0000);
SET64(23, (s64)(s32)0x4b0000);
SET64(18, RD(19) + RD(0));
L_00264438:;
SET64(2, (s32)rd32(c, (RW(21) + 12)));
SET64(5, RD(29) + RD(0));
SET64(16, (s32)rd32(c, (RW(21) + 8)));
mul_s(c, 0, 3, RSW(2), RSW(17));
SET32(16, RW(16) << 3);
SET32(2, RW(3) + RW(17));
SET32(17, RW(17) + 1);
SET32(16, RW(16) + RW(2));
SET32(16, RW(19) + RW(16));
SET64(31, 0x264464); SET64(4, RD(16) + RD(0)); JP_F_00263D00(c);
SET64(2, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 26880); if (t) goto L_002644B0; }
SET64(31, 0x264478);  JP_F_00260080(c);
SET64(31, 0x264480); SET64(4, (s32)rd32(c, (RW(18) + 0))); JP_F_002603F8(c);
SET32(4, RW(0) + 26881);
SET64(31, 0x26448c); SET64(16, RD(2) + RD(0)); JP_F_00260080(c);
SET64(5, RD(29) + RD(0));
{ int t = RSD(16) >= 0; SET32(4, RW(23) + 15744); if (t) goto L_002644A8; }
SET64(31, 0x2644a0); SET32(4, RW(30) + 15704); JP_F_00251820(c);
SET64(2, RD(17) < RD(20)); goto L_002644B4;
L_002644A8:;
SET64(31, 0x2644b0); SET32(22, RW(22) + 1); JP_F_00251820(c);
L_002644B0:;
SET64(2, RD(17) < RD(20));
L_002644B4:;
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 8); if (t) { POLL(); goto L_00264438; } }
L_002644BC:;
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(22) + RD(0));
SET64(31, 0x2644cc); SET32(4, RW(4) + 15776); JP_F_00251820(c);
SET64(31, 0x2644d4);  JP_F_002645D0(c);
SET32(2, RW(0) + 1);
L_002644D8:;
SET64(16, rd64(c, (RW(29) + 256)));
SET64(17, rd64(c, (RW(29) + 264)));
SET64(18, rd64(c, (RW(29) + 272)));
SET64(19, rd64(c, (RW(29) + 280)));
SET64(20, rd64(c, (RW(29) + 288)));
SET64(21, rd64(c, (RW(29) + 296)));
SET64(22, rd64(c, (RW(29) + 304)));
SET64(23, rd64(c, (RW(29) + 312)));
SET64(30, rd64(c, (RW(29) + 320)));
SET64(31, rd64(c, (RW(29) + 328)));
SET32(29, RW(29) + 336); return;
}

void JP_F_00264508(Ctx *c) { /* func_00264508 */
ENTER(0x264508);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(22));
SET64(22, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 40), RD(21));
{ int t = RSD(20) <= 0; wr64(c, (RW(29) + 56), RD(31)); if (t) goto L_002645A0; }
SET64(2, (s64)(s32)0x400000);
SET64(17, RD(18) + RD(0));
SET32(21, RW(2) + 13680);
L_00264550:;
SET64(2, (s32)rd32(c, (RW(21) + 12)));
SET64(4, RD(22) + RD(0));
SET64(5, (s32)rd32(c, (RW(21) + 8)));
mul_s(c, 0, 3, RSW(2), RSW(16));
SET32(5, RW(5) << 3);
SET32(2, RW(3) + RW(16));
SET32(16, RW(16) + 1);
SET32(5, RW(5) + RW(2));
SET64(31, 0x264578); SET32(5, RW(18) + RW(5)); JP_F_00263E88(c);
{ int t = RD(2) != RD(0); SET64(3, RSD(16) < RSD(20)); if (t) goto L_00264598; }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(19) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(19) + 4), RW(3)); goto L_002645A8;
L_00264598:;
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 8); if (t) { POLL(); goto L_00264550; } }
L_002645A0:;
wr32(c, (RW(19) + 4), RW(0));
wr32(c, (RW(19) + 0), RW(0));
L_002645A8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_002645D0(Ctx *c) { /* func_002645D0 */
ENTER(0x2645d0);
SET32(29, RW(29) + -16);
SET64(4, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 13680);
SET32(6, RW(0) + 16);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_002645F8(Ctx *c) { /* func_002645F8 */
ENTER(0x2645f8);
SET64(3, RD(5) + RD(0));
SET64(5, RD(4) + RD(0));
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET32(7, RW(2) + 13680);
wr32(c, (RW(3) + 0), RW(0));
SET64(4, RD(3) + RD(0));
wr32(c, (RW(3) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(7) + 0)));
{ int t = RD(2) == RD(0); SET64(6, RD(2) + RD(0)); if (t) goto L_00264638; }
SET64(7, (s32)rd32(c, (RW(7) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00264508(c); return; }
L_00264638:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00264648(Ctx *c) { /* func_00264648 */
ENTER(0x264648);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 32), RD(20));
SET32(20, RW(2) + -10688);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
SET32(6, RW(0) + 4096);
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x26468c); SET64(18, RD(7) + RD(0)); JP_F_001273D0(c);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + 13680)));
{ int t = RD(2) != RD(0);  if (t) goto L_002646A4; }
SET64(31, 0x2646a4);  JP_F_002645D0(c);
L_002646A4:;
SET64(31, 0x2646ac);  JP_F_002643D8(c);
{ int t = RD(16) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00264780; }
{ int t = RD(19) != RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_002646C8; }
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 15800); goto L_002646DC;
L_002646C8:;
{ int t = RD(17) != RD(0); SET64(4, RD(19) + RD(0)); if (t) goto L_002646F0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 15848);
L_002646DC:;
SET64(31, 0x2646e4);  JP_F_002517A8(c);
SET64(2, RD(0) + RD(0)); goto L_00264780;
L_002646F0:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x2646fc); SET64(6, RD(17) + RD(0)); JP_F_001273D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x264708); SET64(5, RD(20) + RD(0)); JP_F_002640C0(c);
if (RD(2) != RD(0)) { SET32(16, RW(18) + 9); goto L_00264738; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(16) + RD(0));
SET64(31, 0x264720); SET32(4, RW(4) + 15896); JP_F_002517A8(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 15936);
SET64(31, 0x264730); SET64(4, RD(0) + RD(0)); JP_F_00262EB8(c);
SET64(2, RD(0) + RD(0)); goto L_00264780;
L_00264738:;
SET64(7, RD(18) + RD(0));
div_u(c, 0, RW(17), RW(16));
SET64(5, RD(20) + RD(0));
SET64(4, RD(19) + RD(0));
if (RD(16) == RD(0)) { rt_break(c, 0x26474c); goto L_00264750; }
L_00264750:;
SET32(18, RW(18) + 1);
SET64(17, c->lo.d[0]);
SET64(6, RD(17) + RD(0));
SET64(31, 0x264764); SET32(17, RW(17) << 3); JP_F_00263F20(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x264770); SET64(5, RD(2) + RD(0)); JP_F_00264220(c);
if (RD(16) == RD(0)) { rt_break(c, 0x264774); goto L_00264778; }
L_00264778:;
mul_s(c, 0, 2, RSW(2), RSW(18));
SET32(2, RW(17) + RW(2));
L_00264780:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002647A0(Ctx *c) { /* func_002647A0 */
ENTER(0x2647a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2647b0); SET64(5, RD(29) + RD(0)); JP_F_002645F8(c);
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 32); return;
}

void JP_F_002647C8(Ctx *c) { /* func_002647C8 */
ENTER(0x2647c8);
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_002647E8; }
{ int t = RD(4) != RD(2); SET64(3, (s64)(s32)0x400000); if (t) goto L_002647EC; }
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(2) + 13696), RW(4)); return;
L_002647E8:;
SET64(3, (s64)(s32)0x400000);
L_002647EC:;
SET64(2, RD(0) | 0x8001);
wr32(c, (RW(3) + 13696), RW(2)); return;
}

void JP_F_002647F8(Ctx *c) { /* func_002647F8 */
ENTER(0x2647f8);
SET32(29, RW(29) + -16);
SET64(5, RD(4) + RD(0));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00264820; }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x400000);
wr8(c, (RW(2) + 13704), (u8)RW(0));
SET32(29, RW(29) + 16); return;
L_00264820:;
SET64(4, (s8)rd8(c, (RW(4) + 0)));
SET32(2, RW(0) + 47);
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 92); if (t) goto L_00264860; }
{ int t = RD(4) == RD(2); SET64(4, (s64)(s32)0x400000); if (t) goto L_00264860; }
SET64(2, (s64)(s32)0x4b0000);
SET32(8, RW(2) + 15552);
SET32(7, RW(4) + 13704);
SET64(3, (s8)rd8(c, (RW(8) + 0)));
SET64(6, (s8)rd8(c, (RW(8) + 1)));
wr8(c, (RW(7) + 0), (u8)RW(3));
wr8(c, (RW(7) + 1), (u8)RW(6));
SET64(31, rd64(c, (RW(29) + 0))); goto L_0026486C;
L_00264860:;
SET64(4, (s64)(s32)0x400000);
wr8(c, (RW(4) + 13704), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 0)));
L_0026486C:;
SET32(4, RW(4) + 13704);
SET32(29, RW(29) + 16); { JP_F_0012A3C0(c); return; }
}

void JP_F_00264878(Ctx *c) { /* func_00264878 */
ENTER(0x264878);
SET64(2, (s64)(s32)0x400000);
SET32(2, RW(2) + 13704); return;
}

void JP_F_00264888(Ctx *c) { /* func_00264888 */
ENTER(0x264888);
SET32(29, RW(29) + -16);
SET64(5, RD(4) + RD(0));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002648D8; }
SET64(3, (s64)(s32)0x400000);
SET64(2, (s64)(s32)0x4b0000);
SET32(7, RW(2) + 15984);
SET32(6, RW(3) + 13968);
lwl(c, 4, (RW(7) + 3));
lwr(c, 4, (RW(7) + 0));
SET64(5, (s8)rd8(c, (RW(7) + 4)));
swl(c, 4, (RW(6) + 3));
swr(c, 4, (RW(6) + 0));
wr8(c, (RW(6) + 4), (u8)RW(5));
SET64(4, (s8)rd8(c, (RW(7) + 5)));
wr8(c, (RW(6) + 5), (u8)RW(4));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
L_002648D8:;
SET64(4, (s64)(s32)0x400000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 13968);
SET32(29, RW(29) + 16); { JP_F_0012A3C0(c); return; }
}

void JP_F_002648F0(Ctx *c) { /* func_002648F0 */
ENTER(0x2648f0);
SET64(2, (s64)(s32)0x400000);
SET32(2, RW(2) + 13968); return;
}

void JP_F_00264900(Ctx *c) { /* func_00264900 */
ENTER(0x264900);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + 13696))); return;
}

void JP_F_00264910(Ctx *c) { /* func_00264910 */
ENTER(0x264910);
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(2) + 13700), RW(4)); return;
}

void JP_F_00264920(Ctx *c) { /* func_00264920 */
ENTER(0x264920);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + 13700))); return;
}

void JP_F_00264930(Ctx *c) { /* func_00264930 */
ENTER(0x264930);
SET64(6, (s64)(s32)0x400000);
SET64(7, RD(0) + RD(0));
SET32(3, RW(6) + 14320);
SET64(2, (s8)rd8(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00264950; }
SET64(7, RD(3) + RD(0)); goto L_00264988;
L_00264950:;
SET32(5, RW(5) + 1);
L_00264954:;
SET32(2, RW(5) << 3);
SET64(3, RSD(5) < (s64)32);
{ int t = RD(3) == RD(0); SET32(2, RW(2) + RW(5)); if (t) goto L_00264988; }
SET32(2, RW(2) << 3);
SET32(4, RW(6) + 14320);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(4));
SET64(3, (s8)rd8(c, (RW(2) + 0)));
if (RD(3) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00264954; } }
SET64(7, RD(2) + RD(0));
L_00264988:;
SET64(2, RD(7) + RD(0)); return;
}

void JP_F_00264990(Ctx *c) { /* func_00264990 */
ENTER(0x264990);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(18));
{ int t = RD(17) != RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_002649C0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2649b8); SET32(4, RW(4) + 15992); JP_F_002652D8(c);
SET64(2, RD(0) + RD(0)); goto L_00264A80;
L_002649C0:;
SET64(31, 0x2649c8); SET64(4, RD(29) + RD(0)); JP_F_00265278(c);
SET64(31, 0x2649d0);  JP_F_00264930(c);
SET64(18, RD(2) + RD(0));
if (RD(18) != RD(0)) { wr8(c, (RW(18) + 1), (u8)RW(0)); goto L_002649F0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2649e8); SET32(4, RW(4) + 16040); JP_F_002652D8(c);
 goto L_00264A74;
L_002649F0:;
SET64(4, RD(17) + RD(0));
wr32(c, (RW(18) + 8), RW(17));
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x264a08); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(16, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x264a20); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(3, RW(0) + 10);
SET32(16, RW(16) + RW(2));
SET32(4, RW(0) + 15);
SET32(2, RW(16) << 3);
wr32(c, (RW(18) + 24), RW(16));
div_s(c, 0, RSW(2), RSW(3));
if (RD(3) == RD(0)) { rt_break(c, 0x264a3c); goto L_00264A40; }
L_00264A40:;
SET32(3, RW(18) + 560);
SET64(2, c->lo.d[0]);
wr32(c, (RW(18) + 20), RW(2));
L_00264A50:;
SET32(4, RW(4) + -1);
wr32(c, (RW(3) + 0), RW(0));
{ int t = RSD(4) >= 0; SET32(3, RW(3) + -32); if (t) { POLL(); goto L_00264A50; } }
SET32(2, RW(0) + 1);
wr8(c, (RW(18) + 0), (u8)RW(2));
L_00264A74:;
SET64(31, 0x264a7c); SET64(4, RD(29) + RD(0)); JP_F_00265298(c);
SET64(2, RD(18) + RD(0));
L_00264A80:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00264A98(Ctx *c) { /* func_00264A98 */
ENTER(0x264a98);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00264AD8; }
SET64(31, 0x264ab4);  JP_F_00264D58(c);
SET64(5, RD(0) + RD(0));
wr8(c, (RW(16) + 0), (u8)RW(0));
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(6, RW(0) + 568);
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
L_00264AD8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00264AE8(Ctx *c) { /* func_00264AE8 */
ENTER(0x264ae8);
wr32(c, (RW(4) + 40), RW(5)); return;
}

void JP_F_00264AF0(Ctx *c) { /* func_00264AF0 */
ENTER(0x264af0);
SET32(29, RW(29) + -16);
SET64(8, (s64)(s32)0xf0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(8) | 0xffff);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00264B18(c); return; }
}

void JP_F_00264B18(Ctx *c) { /* func_00264B18 */
ENTER(0x264b18);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(8) + RD(0));
wr64(c, (RW(29) + 48), RD(22));
SET64(22, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(19));
{ int t = RD(17) != RD(0); wr64(c, (RW(29) + 56), RD(31)); if (t) goto L_00264B68; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x264b60); SET32(4, RW(4) + 16088); JP_F_002652D8(c);
SET32(2, RW(0) + -1); goto L_00264C88;
L_00264B68:;
SET64(3, (s32)rd32(c, (RW(17) + 36)));
SET64(3, RSD(3) < (s64)16);
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_00264C88; }
if (RD(18) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 28))); goto L_00264B98; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x264b8c); SET32(4, RW(4) + 16128); JP_F_002652D8(c);
SET32(2, RW(0) + -1); goto L_00264C88;
L_00264B98:;
SET64(8, (s64)(s32)0x7fff0000);
SET64(8, RD(8) | 0xffff);
SET64(19, RD(0) + RD(0));
SET32(6, RW(3) + 15);
SET32(7, RW(3) + 30);
SET64(5, RSD(6) < (s64)0);
SET64(2, RD(6) + RD(0));
if (RD(5) != 0) SET64(2, RD(7));
SET32(3, RW(3) << 5);
SET32(2, RSW(2) >> 4);
SET32(3, RW(17) + RW(3));
SET32(2, RW(2) << 4);
SET32(16, RW(3) + 56);
SET32(2, RW(6) - RW(2));
wr32(c, (RW(16) + 4), RW(18));
SET32(2, RW(2) << 5);
SET64(4, RD(18) + RD(0));
SET32(2, RW(2) + RW(17));
SET64(3, (s32)rd32(c, (RW(2) + 56)));
SET64(8, RD(3) ^ RD(8));
SET32(3, RW(3) + 1);
if (RD(8) != 0) SET64(19, RD(3));
SET64(31, 0x264bf8); wr32(c, (RW(16) + 0), RW(19)); JP_F_0012A4D8(c);
wr32(c, (RW(16) + 8), RW(0));
SET64(6, RD(2) + RD(0));
{ int t = RD(6) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00264C28; }
L_00264C08:;
SET32(2, RW(18) + RW(5));
SET32(5, RW(5) + 1);
SET64(3, rd8(c, (RW(2) + 0)));
SET64(4, RD(5) < RD(6));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET32(2, RW(2) + RW(3));
{ int t = RD(4) != RD(0); wr32(c, (RW(16) + 8), RW(2)); if (t) { POLL(); goto L_00264C08; } }
L_00264C28:;
wr32(c, (RW(16) + 16), RW(20));
SET32(8, RW(0) + 1);
wr32(c, (RW(16) + 20), RW(21));
wr32(c, (RW(16) + 28), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 12), RW(22));
SET64(3, (s32)rd32(c, (RW(17) + 28)));
SET64(6, (s32)rd32(c, (RW(17) + 36)));
SET32(4, RW(3) + 1);
SET32(3, RW(3) + 16);
SET64(5, RSD(4) < (s64)0);
SET64(2, RD(4) + RD(0));
if (RD(5) != 0) SET64(2, RD(3));
SET64(7, (s8)rd8(c, (RW(17) + 1)));
SET32(2, RSW(2) >> 4);
SET32(6, RW(6) + 1);
SET32(2, RW(2) << 4);
wr32(c, (RW(17) + 36), RW(6));
SET32(4, RW(4) - RW(2));
{ int t = RD(7) != RD(8); wr32(c, (RW(17) + 28), RW(4)); if (t) goto L_00264C84; }
SET32(2, RW(0) + 2);
wr8(c, (RW(17) + 1), (u8)RW(2));
L_00264C84:;
SET64(2, RD(19) + RD(0));
L_00264C88:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00264CB0(Ctx *c) { /* func_00264CB0 */
ENTER(0x264cb0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00264CD0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 16088);
SET32(29, RW(29) + 16); { JP_F_002652D8(c); return; }
L_00264CD0:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00264CE8; }
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 28), RW(0));
wr32(c, (RW(4) + 32), RW(0));
L_00264CE8:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00264CF0(Ctx *c) { /* func_00264CF0 */
ENTER(0x264cf0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00264D20; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 16088);
SET32(29, RW(29) + 16); { JP_F_002652D8(c); return; }
L_00264D20:;
SET64(2, (s8)rd8(c, (RW(16) + 1)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 36))); goto L_00264D38; }
SET64(31, 0x264d34);  JP_F_00264D58(c);
SET64(2, (s32)rd32(c, (RW(16) + 36)));
L_00264D38:;
if (RSD(2) <= 0) { SET32(2, RW(0) + 1); goto L_00264D44; }
SET32(2, RW(0) + 2);
L_00264D44:;
wr8(c, (RW(16) + 1), (u8)RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00264D58(Ctx *c) { /* func_00264D58 */
ENTER(0x264d58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00264D88; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 16088);
SET32(29, RW(29) + 16); { JP_F_002652D8(c); return; }
L_00264D88:;
SET64(2, (s8)rd8(c, (RW(16) + 1)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00264DD0; }
SET64(4, (s32)rd32(c, (RW(16) + 40)));
{ int t = RD(4) == RD(0); wr8(c, (RW(16) + 1), (u8)RW(0)); if (t) goto L_00264DBC; }
SET64(3, (s8)rd8(c, (RW(16) + 2)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { wr32(c, (RW(16) + 44), RW(0)); goto L_00264DC0; }
SET64(31, 0x264db8);  JP_F_002565E0(c);
wr8(c, (RW(16) + 2), (u8)RW(0));
L_00264DBC:;
wr32(c, (RW(16) + 44), RW(0));
L_00264DC0:;
SET64(31, 0x264dc8); SET64(4, RD(16) + RD(0)); JP_F_00264CB0(c);
wr32(c, (RW(16) + 52), RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_00264DD0:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00264DE0(Ctx *c) { /* func_00264DE0 */
ENTER(0x264de0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00264E00; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 16088);
SET32(29, RW(29) + 16); { JP_F_002652D8(c); return; }
L_00264E00:;
SET32(2, RW(0) + 1);
if (RD(5) != RD(2)) { wr8(c, (RW(4) + 4), (u8)RW(0)); goto L_00264E10; }
wr8(c, (RW(4) + 4), (u8)RW(5));
L_00264E10:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00264E20(Ctx *c) { /* func_00264E20 */
ENTER(0x264e20);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 14320);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 31);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 1);
L_00264E48:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00264E60; }
SET64(31, 0x264e5c); SET64(4, RD(16) + RD(0)); JP_F_002657B0(c);
SET32(17, RW(17) + -1);
L_00264E60:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 568); if (t) { POLL(); goto L_00264E48; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00264E80(Ctx *c) { /* func_00264E80 */
ENTER(0x264e80);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00264EA0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x264e98); SET32(4, RW(4) + 16088); JP_F_002652D8(c);
SET32(2, RW(0) + -1); goto L_00264EA4;
L_00264EA0:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
L_00264EA4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00264EB0(Ctx *c) { /* func_00264EB0 */
ENTER(0x264eb0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00264ED0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x264ec8); SET32(4, RW(4) + 16088); JP_F_002652D8(c);
SET32(2, RW(0) + -1); goto L_00264ED4;
L_00264ED0:;
SET64(2, (s32)rd32(c, (RW(4) + 36)));
L_00264ED4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00264EE0(Ctx *c) { /* func_00264EE0 */
ENTER(0x264ee0);
SET32(29, RW(29) + -16);
SET64(6, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(6) != RD(0); SET64(3, RD(5) + RD(0)); if (t) goto L_00264F08; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x264f00); SET32(4, RW(4) + 16088); JP_F_002652D8(c);
SET32(2, RW(0) + -1); goto L_00264F64;
L_00264F08:;
{ int t = RSD(3) < 0; SET64(4, (s64)(s32)0x4b0000); if (t) goto L_00264F24; }
SET64(2, (s32)rd32(c, (RW(6) + 36)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(5, (s32)rd32(c, (RW(6) + 32))); goto L_00264F38; }
SET64(4, (s64)(s32)0x4b0000);
L_00264F24:;
SET64(31, 0x264f2c); SET32(4, RW(4) + 16168); JP_F_002652D8(c);
SET32(2, RW(0) + -1); goto L_00264F64;
L_00264F38:;
SET32(5, RW(5) + RW(3));
SET32(4, RW(5) + 15);
SET64(3, RSD(5) < (s64)0);
SET64(2, RD(5) + RD(0));
if (RD(3) != 0) SET64(2, RD(4));
SET32(2, RSW(2) >> 4);
SET32(4, RW(2) << 4);
SET32(2, RW(5) - RW(4));
SET32(3, RW(2) << 5);
SET32(3, RW(3) + RW(6));
SET64(2, (s32)rd32(c, (RW(3) + 56)));
L_00264F64:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00264F70(Ctx *c) { /* func_00264F70 */
ENTER(0x264f70);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00264F90; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x264f88); SET32(4, RW(4) + 16088); JP_F_002652D8(c);
SET64(2, RD(0) + RD(0)); goto L_00264FF8;
L_00264F90:;
SET32(6, RW(4) + 56);
SET64(2, (s32)rd32(c, (RW(6) + 0)));
{ int t = RD(2) == RD(5); SET64(3, RD(0) + RD(0)); if (t) goto L_00264FCC; }
SET32(3, RW(3) + 1);
L_00264FA8:;
SET64(2, RSD(3) < (s64)16);
{ int t = RD(2) == RD(0); SET32(6, RW(6) + 32); if (t) goto L_00264FCC; }
SET64(2, (s32)rd32(c, (RW(6) + 0)));
if (RD(2) != RD(5)) { SET32(3, RW(3) + 1); { POLL(); goto L_00264FA8; } }
L_00264FCC:;
SET32(2, RW(0) + 16);
if (RD(3) != RD(2)) { SET32(3, RW(3) << 5); goto L_00264FF0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x264fe4); SET32(4, RW(4) + 16200); JP_F_002652D8(c);
SET64(2, RD(0) + RD(0)); goto L_00264FF8;
L_00264FF0:;
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(3) + 60)));
L_00264FF8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

static void JP_B_00265008(Ctx *c, u32 entry) { /* func_00265008 */
ENTER(entry);
switch (entry) { case 0x265050: goto L_00265050; }
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00265028; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x265020); SET32(4, RW(4) + 16088); JP_F_002652D8(c);
SET32(2, RW(0) + -1); goto L_00265090;
L_00265028:;
SET32(6, RW(4) + 56);
SET64(2, (s32)rd32(c, (RW(6) + 0)));
{ int t = RD(2) == RD(5); SET64(3, RD(0) + RD(0)); if (t) goto L_00265064; }
SET32(3, RW(3) + 1);
L_00265040:;
SET64(2, RSD(3) < (s64)16);
{ int t = RD(2) == RD(0); SET32(6, RW(6) + 32); if (t) goto L_00265064; }
SET64(2, (s32)rd32(c, (RW(6) + 0)));
L_00265050:;
if (RD(2) != RD(5)) { SET32(3, RW(3) + 1); { POLL(); goto L_00265040; } }
L_00265064:;
SET32(2, RW(0) + 16);
if (RD(3) != RD(2)) { SET32(3, RW(3) << 5); goto L_00265088; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x26507c); SET32(4, RW(4) + 16200); JP_F_002652D8(c);
SET32(2, RW(0) + -1); goto L_00265090;
L_00265088:;
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(3) + 80)));
L_00265090:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}
void JP_F_00265008(Ctx *c) { JP_B_00265008(c, 0x265008); }
void JP_F_00265050(Ctx *c) { JP_B_00265008(c, 0x265050); }

void JP_F_002650A0(Ctx *c) { /* func_002650A0 */
ENTER(0x2650a0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002650C0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2650b8); SET32(4, RW(4) + 16088); JP_F_002652D8(c);
SET64(2, RD(0) + RD(0)); goto L_00265128;
L_002650C0:;
SET32(6, RW(4) + 56);
SET64(2, (s32)rd32(c, (RW(6) + 0)));
{ int t = RD(2) == RD(5); SET64(3, RD(0) + RD(0)); if (t) goto L_002650FC; }
SET32(3, RW(3) + 1);
L_002650D8:;
SET64(2, RSD(3) < (s64)16);
{ int t = RD(2) == RD(0); SET32(6, RW(6) + 32); if (t) goto L_002650FC; }
SET64(2, (s32)rd32(c, (RW(6) + 0)));
if (RD(2) != RD(5)) { SET32(3, RW(3) + 1); { POLL(); goto L_002650D8; } }
L_002650FC:;
SET32(2, RW(0) + 16);
if (RD(3) != RD(2)) { SET32(3, RW(3) << 5); goto L_00265120; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x265114); SET32(4, RW(4) + 16200); JP_F_002652D8(c);
SET64(2, RD(0) + RD(0)); goto L_00265128;
L_00265120:;
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(3) + 84)));
L_00265128:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00265138(Ctx *c) { /* func_00265138 */
ENTER(0x265138);
SET32(29, RW(29) + -16);
SET64(3, RD(5) + RD(0));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00265160; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 16088);
SET32(29, RW(29) + 16); { JP_F_002652D8(c); return; }
L_00265160:;
if (RSD(3) < 0) { SET64(4, (s64)(s32)0x4b0000); goto L_0026517C; }
SET64(2, (s32)rd32(c, (RW(4) + 24)));
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00265190; }
SET64(4, (s64)(s32)0x4b0000);
L_0026517C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 16240);
SET32(29, RW(29) + 16); { JP_F_002652D8(c); return; }
L_00265190:;
wr32(c, (RW(4) + 20), RW(3));
SET32(29, RW(29) + 16); return;
}

void JP_F_002651A0(Ctx *c) { /* func_002651A0 */
ENTER(0x2651a0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002651C0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2651b8); SET32(4, RW(4) + 16088); JP_F_002652D8(c);
SET32(2, RW(0) + -1); goto L_002651C4;
L_002651C0:;
SET64(2, (s32)rd32(c, (RW(4) + 20)));
L_002651C4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002651D0(Ctx *c) { /* func_002651D0 */
ENTER(0x2651d0);
SET64(7, RD(4) + RD(0));
{ int t = RD(7) != RD(0); SET64(2, (s64)(s32)0x400000); if (t) goto L_002651F8; }
SET64(3, (s64)(s32)0x400000);
SET64(4, (s64)(s32)0x400000);
wr32(c, (RW(2) + 14008), RW(0));
wr32(c, (RW(3) + 14012), RW(0));
wr32(c, (RW(4) + 14016), RW(0)); return;
L_002651F8:;
SET64(3, (s64)(s32)0x400000);
SET64(4, (s64)(s32)0x400000);
wr32(c, (RW(2) + 14008), RW(7));
wr32(c, (RW(3) + 14012), RW(5));
wr32(c, (RW(4) + 14016), RW(6)); return;
}

void JP_F_00265210(Ctx *c) { /* func_00265210 */
ENTER(0x265210);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(6, (s32)rd32(c, (RW(2) + 14008)));
{ int t = RD(6) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00265238; }
SET64(2, (s64)(s32)0x400000);
SET64(3, (s64)(s32)0x400000);
SET64(4, (s32)rd32(c, (RW(2) + 14012)));
{ u32 t = RW(6); SET64(31, 0x265238); SET64(5, (s32)rd32(c, (RW(3) + 14016))); rt_call(c, t); }
L_00265238:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00265248(Ctx *c) { /* func_00265248 */
ENTER(0x265248);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00265268; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 16088);
SET32(29, RW(29) + 16); { JP_F_002652D8(c); return; }
L_00265268:;
SET64(31, rd64(c, (RW(29) + 0)));
wr8(c, (RW(4) + 3), (u8)RW(5));
SET32(29, RW(29) + 16); return;
}

void JP_F_00265278(Ctx *c) { /* func_00265278 */
ENTER(0x265278);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x265288);  JP_F_00268EB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00265298(Ctx *c) { /* func_00265298 */
ENTER(0x265298);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268EC8(c); return; }
}

void JP_F_002652B0(Ctx *c) { /* func_002652B0 */
ENTER(0x2652b0);
{ int t = RD(4) != RD(0); SET64(2, (s64)(s32)0x400000); if (t) goto L_002652C8; }
SET64(3, (s64)(s32)0x400000);
wr32(c, (RW(2) + 14024), RW(0));
wr32(c, (RW(3) + 14028), RW(0)); return;
L_002652C8:;
SET64(3, (s64)(s32)0x400000);
wr32(c, (RW(2) + 14024), RW(4));
wr32(c, (RW(3) + 14028), RW(5)); return;
}

void JP_F_002652D8(Ctx *c) { /* func_002652D8 */
ENTER(0x2652d8);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x400000);
SET32(16, RW(16) + 14032);
wr64(c, (RW(29) + 56), RD(5));
wr64(c, (RW(29) + 64), RD(6));
SET32(6, RW(29) + 56);
SET64(5, RD(4) + RD(0));
SET64(4, RD(16) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
wr64(c, (RW(29) + 72), RD(7));
wr64(c, (RW(29) + 80), RD(8));
wr64(c, (RW(29) + 88), RD(9));
wr64(c, (RW(29) + 96), RD(10));
wr64(c, (RW(29) + 104), RD(11));
wr32(c, (RW(29) + 24), c->f[12].u);
wr32(c, (RW(29) + 28), c->f[13].u);
wr32(c, (RW(29) + 32), c->f[14].u);
wr32(c, (RW(29) + 36), c->f[15].u);
wr32(c, (RW(29) + 40), c->f[16].u);
wr32(c, (RW(29) + 44), c->f[17].u);
wr32(c, (RW(29) + 48), c->f[18].u);
SET64(31, 0x265338); wr32(c, (RW(29) + 52), c->f[19].u); JP_F_0012EAC8(c);
SET64(3, (s64)(s32)0x400000);
SET64(3, (s32)rd32(c, (RW(3) + 14024)));
{ int t = RD(3) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00265354; }
SET64(2, (s64)(s32)0x400000);
{ u32 t = RW(3); SET64(31, 0x265354); SET64(4, (s32)rd32(c, (RW(2) + 14028))); rt_call(c, t); }
L_00265354:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 112); return;
}

void JP_F_00265368(Ctx *c) { /* func_00265368 */
ENTER(0x265368);
 return;
}

void JP_F_00265370(Ctx *c) { /* func_00265370 */
ENTER(0x265370);
 return;
}

void JP_F_00265378(Ctx *c) { /* func_00265378 */
ENTER(0x265378);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 16), RD(16));
SET32(2, RW(2) + 14288);
wr64(c, (RW(29) + 24), RD(31));
SET64(4, RD(29) + RD(0));
SET64(31, 0x265398); SET64(3, (s32)rd32(c, (RW(2) + 0))); JP_F_00265278(c);
SET64(2, (s64)(s32)0x400000);
SET64(4, (s64)(s32)0x400000);
SET32(16, RW(2) + 14312);
SET32(4, RW(4) + 14320);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(0) + RD(0));
{ int t = RD(2) != RD(0); SET32(6, RW(0) + 18176); if (t) goto L_002653D8; }
SET64(31, 0x2653c0);  JP_F_001273D0(c);
SET64(31, 0x2653c8);  JP_F_00265368(c);
SET64(4, RD(0) + RD(0));
SET64(31, 0x2653d4); SET64(5, RD(0) + RD(0)); JP_F_002652B0(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
L_002653D8:;
SET32(2, RW(2) + 1);
SET64(4, RD(29) + RD(0));
SET64(31, 0x2653e8); wr32(c, (RW(16) + 0), RW(2)); JP_F_00265298(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002653F8(Ctx *c) { /* func_002653F8 */
ENTER(0x2653f8);
SET32(29, RW(29) + -48);
SET64(3, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(3) + 14312);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_00265498; }
SET64(19, (s64)(s32)0x400000);
SET32(18, RW(0) + 1);
SET32(16, RW(19) + 14320);
SET32(17, RW(0) + 31);
L_00265438:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00265450; }
SET64(31, 0x26544c); SET64(4, RD(16) + RD(0)); JP_F_00264A98(c);
SET32(17, RW(17) + -1);
L_00265450:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 568); if (t) { POLL(); goto L_00265438; } }
SET32(4, RW(19) + 14320);
SET64(5, RD(0) + RD(0));
SET64(31, 0x265468); SET32(6, RW(0) + 18176); JP_F_001273D0(c);
SET64(31, 0x265470);  JP_F_00265370(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(0) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_002652B0(c); return; }
L_00265498:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002654B8(Ctx *c) { /* func_002654B8 */
ENTER(0x2654b8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 32)));
SET64(3, (s32)rd32(c, (RW(16) + 36)));
SET32(2, RW(2) << 5);
SET32(2, RW(16) + RW(2));
{ int t = RSD(3) <= 0; SET32(17, RW(2) + 56); if (t) goto L_002655C8; }
SET64(31, 0x2654f0); SET64(4, (s32)rd32(c, (RW(16) + 40))); JP_F_00256548(c);
SET64(31, 0x2654f8); SET64(4, (s32)rd32(c, (RW(16) + 40))); JP_F_00256218(c);
SET64(18, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x265504); SET64(4, RD(18) + RD(0)); JP_F_0012A4D8(c);
SET64(5, RD(0) + RD(0));
SET64(6, RD(2) + RD(0));
{ int t = RD(6) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_00265534; }
L_00265518:;
SET32(2, RW(18) + RW(5));
SET32(5, RW(5) + 1);
SET64(3, rd8(c, (RW(2) + 0)));
SET64(4, RD(5) < RD(6));
{ int t = RD(4) != RD(0); SET32(7, RW(7) + RW(3)); if (t) { POLL(); goto L_00265518; } }
L_00265534:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
{ int t = RD(7) == RD(2); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_00265560; }
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 16328);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_002652D8(c); return; }
L_00265560:;
SET64(7, (s32)rd32(c, (RW(17) + 16)));
SET64(8, (s32)rd32(c, (RW(17) + 20)));
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET64(4, (s32)rd32(c, (RW(16) + 40)));
SET64(31, 0x265578); SET64(5, (s32)rd32(c, (RW(17) + 4))); JP_F_00256088(c);
SET64(4, (s32)rd32(c, (RW(16) + 40)));
SET64(31, 0x265584); SET64(5, (s32)rd32(c, (RW(17) + 20))); JP_F_002566C0(c);
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET64(4, (s32)rd32(c, (RW(16) + 40)));
wr32(c, (RW(16) + 44), RW(2));
wr32(c, (RW(17) + 28), RW(0));
wr8(c, (RW(16) + 2), (u8)RW(0));
SET64(6, (s32)rd32(c, (RW(16) + 24)));
SET64(31, 0x2655a4); SET64(5, (s32)rd32(c, (RW(16) + 20))); JP_F_00256F18(c);
SET64(4, (s32)rd32(c, (RW(16) + 40)));
SET64(31, 0x2655b0); SET64(5, RD(0) + RD(0)); JP_F_00256350(c);
SET64(31, 0x2655b8); SET64(4, (s32)rd32(c, (RW(16) + 40))); JP_F_00256440(c);
SET32(3, RW(0) + 1);
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 2), (u8)RW(3));
wr32(c, (RW(17) + 24), RW(2));
L_002655C8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002655E0(Ctx *c) { /* func_002655E0 */
ENTER(0x2655e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(4, (s32)rd32(c, (RW(16) + 40)));
if (RD(4) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 32))); goto L_00265620; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 16392);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_002652D8(c); return; }
L_00265620:;
SET32(2, RW(2) << 5);
SET32(2, RW(16) + RW(2));
SET64(31, 0x265630); SET32(17, RW(2) + 56); JP_F_00256310(c);
SET64(3, RD(2) + RD(0));
SET32(4, RW(0) + 3);
{ int t = RD(3) == RD(4); SET64(2, RSD(3) < (s64)4); if (t) goto L_00265680; }
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_00265660; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2);  if (t) goto L_00265670; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_00265694;
L_00265660:;
if (RD(3) == RD(2)) { wr8(c, (RW(16) + 1), (u8)RW(4)); goto L_00265690; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_00265694;
L_00265670:;
SET64(31, 0x265678); SET64(4, (s32)rd32(c, (RW(16) + 40))); JP_F_002563B8(c);
wr32(c, (RW(17) + 28), RW(2)); goto L_00265690;
L_00265680:;
SET64(3, (s32)rd32(c, (RW(16) + 44)));
SET32(2, RW(0) + 2);
wr32(c, (RW(17) + 24), RW(2));
wr32(c, (RW(17) + 28), RW(3));
L_00265690:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00265694:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002656A8(Ctx *c) { /* func_002656A8 */
ENTER(0x2656a8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(0) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 48), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 40)));
{ int t = RD(2) == RD(0); SET64(21, RD(0) + RD(0)); if (t) goto L_00265788; }
SET64(2, (s8)rd8(c, (RW(16) + 3)));
SET32(17, RW(0) + 1);
{ int t = RD(2) != RD(17); SET64(7, rd8(c, (RW(16) + 3))); if (t) goto L_00265718; }
SET64(6, (s32)rd32(c, (RW(16) + 32)));
SET32(2, RW(6) << 5);
SET32(2, RW(16) + RW(2));
SET32(2, RW(2) + 56);
SET64(21, (s32)rd32(c, (RW(2) + 20)));
SET64(20, (s32)rd32(c, (RW(2) + 16)));
SET64(19, (s32)rd32(c, (RW(2) + 4)));
SET64(18, (s32)rd32(c, (RW(2) + 12))); goto L_0026571C;
L_00265718:;
SET64(6, (s32)rd32(c, (RW(16) + 32)));
L_0026571C:;
SET32(4, RW(6) + 1);
SET32(6, RW(6) + 16);
SET64(5, RSD(4) < (s64)0);
SET64(2, RD(4) + RD(0));
if (RD(5) != 0) SET64(2, RD(6));
SET64(3, (s32)rd32(c, (RW(16) + 36)));
SET32(2, RSW(2) >> 4);
SET32(2, RW(2) << 4);
SET32(3, RW(3) + -1);
SET32(4, RW(4) - RW(2));
wr32(c, (RW(16) + 36), RW(3));
{ int t = RSD(3) > 0; wr32(c, (RW(16) + 32), RW(4)); if (t) goto L_00265760; }
SET64(31, 0x265758);  JP_F_00265210(c);
wr8(c, (RW(16) + 1), (u8)RW(17));
SET64(7, rd8(c, (RW(16) + 3)));
L_00265760:;
SET32(2, RW(7) << 24);
SET32(2, RSW(2) >> 24);
if (RD(2) != RD(17)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0026578C; }
SET64(4, RD(16) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(20) + RD(0));
SET64(31, 0x265788); SET64(8, RD(21) + RD(0)); JP_F_00264B18(c);
L_00265788:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0026578C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_002657B0(Ctx *c) { /* func_002657B0 */
ENTER(0x2657b0);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s8)rd8(c, (RW(16) + 4)));
{ int t = RD(2) == RD(6); SET32(2, RW(0) + 2); if (t) goto L_00265868; }
SET64(18, (s8)rd8(c, (RW(16) + 1)));
if (RD(18) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0026586C; }
SET64(2, (s32)rd32(c, (RW(16) + 36)));
if (RSD(2) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0026586C; }
SET64(5, (s32)rd32(c, (RW(16) + 32)));
SET32(17, RW(16) + 16);
SET32(2, RW(5) << 5);
SET32(2, RW(2) + RW(17));
SET64(3, (s32)rd32(c, (RW(2) + 64)));
{ int t = RD(3) != RD(6); SET32(2, RW(5) << 5); if (t) goto L_0026581C; }
SET64(31, 0x265814);  JP_F_002655E0(c);
SET64(5, (s32)rd32(c, (RW(16) + 32)));
SET32(2, RW(5) << 5);
L_0026581C:;
SET32(2, RW(2) + RW(17));
SET64(3, (s32)rd32(c, (RW(2) + 64)));
{ int t = RD(3) != RD(18); SET32(2, RW(5) << 5); if (t) goto L_0026583C; }
SET64(31, 0x265834); SET64(4, RD(16) + RD(0)); JP_F_002656A8(c);
SET64(5, (s32)rd32(c, (RW(16) + 32)));
SET32(2, RW(5) << 5);
L_0026583C:;
SET32(2, RW(2) + RW(17));
SET64(3, (s32)rd32(c, (RW(2) + 64)));
if (RD(3) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0026586C; }
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_002654B8(c); return; }
L_00265868:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0026586C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00265880(Ctx *c) { /* func_00265880 */
ENTER(0x265880);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C068(c); return; }
}

static void JP_B_00265898(Ctx *c, u32 entry) { /* func_00265898 */
ENTER(entry);
switch (entry) { case 0x2658a4: goto L_002658A4; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
L_002658A4:;
SET32(29, RW(29) + 16); { JP_F_0026C080(c); return; }
}
void JP_F_00265898(Ctx *c) { JP_B_00265898(c, 0x265898); }
void JP_F_002658A4(Ctx *c) { JP_B_00265898(c, 0x2658a4); }

void JP_F_002658B0(Ctx *c) { /* func_002658B0 */
ENTER(0x2658b0);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s64)(s32)0x400000);
SET32(3, RW(3) + 32496);
SET32(2, RW(2) + 32512);
SET64(4, (s32)rd32(c, (RW(3) + 0))); return;
}

void JP_F_002658C8(Ctx *c) { /* func_002658C8 */
ENTER(0x2658c8);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + 32500)));
SET64(6, RD(4) + RD(0));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002658EC; }
SET64(2, (s64)(s32)0x400000);
{ u32 t = RW(3); SET64(31, 0x2658ec); SET64(4, (s32)rd32(c, (RW(2) + 32504))); rt_call(c, t); }
L_002658EC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002658F8(Ctx *c) { /* func_002658F8 */
ENTER(0x2658f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0012C010(c); return; }
}

void JP_F_00265910(Ctx *c) { /* func_00265910 */
ENTER(0x265910);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x265930); SET64(18, RD(5) + RD(0)); JP_F_0012A4D8(c);
SET64(3, (s64)(s32)0x410000);
SET64(5, (s64)(s32)0x4b0000);
SET32(16, RW(3) + -30680);
SET32(3, RW(0) + 17);
SET32(5, RW(5) + 16472);
SET64(6, RD(17) + RD(0));
{ int t = RD(2) == RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00265964; }
SET64(31, 0x265958);  JP_F_00129C30(c);
SET64(5, RD(16) + RD(0));
SET64(31, 0x265964); SET64(4, RD(0) + RD(0)); JP_F_002658C8(c);
L_00265964:;
SET64(3, (s8)rd8(c, (RW(17) + 8)));
SET32(2, RW(0) + 46);
{ int t = RD(3) == RD(2); SET64(16, (s64)(s32)0x410000); if (t) goto L_00265998; }
SET64(5, (s64)(s32)0x4b0000);
SET32(16, RW(16) + -30680);
SET32(5, RW(5) + 16536);
SET64(4, RD(16) + RD(0));
SET64(31, 0x26598c); SET64(6, RD(17) + RD(0)); JP_F_00129C30(c);
SET64(4, RD(0) + RD(0));
SET64(31, 0x265998); SET64(5, RD(16) + RD(0)); JP_F_002658C8(c);
L_00265998:;
SET64(5, RD(29) + RD(0));
SET32(6, RW(0) + 16);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2659ac); wr32(c, (RW(29) + 0), RW(17)); JP_F_002658F8(c);
SET32(6, RW(0) + 16);
SET64(16, RD(2) << 32);
SET64(16, RSD(16) >> 32);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(5, RD(29) + RD(0));
SET64(3, (s8)rd8(c, (RW(2) + 0)));
{ int t = RD(3) == RD(0); SET32(2, RW(2) + 1); if (t) goto L_002659D0; }
wr32(c, (RW(29) + 0), RW(2));
L_002659D0:;
{ int t = RD(18) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002659F0; }
SET64(31, 0x2659e0); SET64(4, (s32)rd32(c, (RW(29) + 0))); JP_F_002658F8(c);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
wr32(c, (RW(18) + 0), RW(2));
SET64(2, RD(16) + RD(0));
L_002659F0:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00265A08(Ctx *c) { /* func_00265A08 */
ENTER(0x265a08);
 return;
}

void JP_F_00265A10(Ctx *c) { /* func_00265A10 */
ENTER(0x265a10);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 16), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 32616);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 39);
L_00265A30:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) == RD(0)) { SET32(17, RW(17) + -1); goto L_00265A48; }
SET64(31, 0x265a44); SET64(4, RD(16) + RD(0)); JP_F_00265A08(c);
SET32(17, RW(17) + -1);
L_00265A48:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 56); if (t) { POLL(); goto L_00265A30; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00265A68(Ctx *c) { /* func_00265A68 */
ENTER(0x265a68);
SET64(2, (s64)(s32)0x400000);
SET64(3, (s64)(s32)0x400000);
wr32(c, (RW(2) + 32500), RW(4));
wr32(c, (RW(3) + 32504), RW(5)); return;
}

void JP_F_00265A80(Ctx *c) { /* func_00265A80 */
ENTER(0x265a80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x265a90); SET64(5, RD(29) + RD(0)); JP_F_00265910(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00265AA0(Ctx *c) { /* func_00265AA0 */
ENTER(0x265aa0);
SET64(6, (s64)(s32)0x400000);
SET64(7, RD(0) + RD(0));
SET32(3, RW(6) + 32616);
SET64(2, (s8)rd8(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00265AC0; }
SET64(7, RD(3) + RD(0)); goto L_00265AF0;
L_00265AC0:;
SET32(5, RW(5) + 1);
L_00265AC4:;
SET32(2, RW(5) << 3);
SET64(3, RSD(5) < (s64)40);
{ int t = RD(3) == RD(0); SET32(2, RW(2) - RW(5)); if (t) goto L_00265AF0; }
SET32(2, RW(2) << 3);
SET32(3, RW(6) + 32616);
SET32(2, RW(2) + RW(3));
SET64(4, (s8)rd8(c, (RW(2) + 0)));
if (RD(4) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00265AC4; } }
SET64(7, RD(2) + RD(0));
L_00265AF0:;
SET64(2, RD(7) + RD(0)); return;
}

void JP_F_00265AF8(Ctx *c) { /* func_00265AF8 */
ENTER(0x265af8);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 56);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_00265B18(Ctx *c) { /* func_00265B18 */
ENTER(0x265b18);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 2048);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET32(4, RW(16) + 28);
SET64(31, 0x265b38); wr32(c, (RW(16) + 4), RW(2)); JP_F_00265A80(c);
SET64(3, (s32)rd32(c, (RW(16) + 4)));
wr32(c, (RW(16) + 8), RW(2));
SET32(4, RW(0) + 1);
SET32(2, RW(2) + RW(3));
if (RD(3) == RD(0)) { rt_break(c, 0x265b4c); goto L_00265B50; }
L_00265B50:;
SET32(2, RW(2) + -1);
wr8(c, (RW(16) + 0), (u8)RW(4));
div_s(c, 0, RSW(2), RSW(3));
wr32(c, (RW(16) + 16), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 20), RW(0));
wr8(c, (RW(16) + 1), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, c->lo.d[0]);
wr32(c, (RW(16) + 12), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00265B88(Ctx *c) { /* func_00265B88 */
ENTER(0x265b88);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
{ int t = RD(17) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00265BB0; }
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 16600); goto L_00265BE4;
L_00265BB0:;
{ int t = RD(6) == RD(0); SET64(5, (s64)(s32)0x4b0000); if (t) goto L_00265BC8; }
SET64(4, RD(0) + RD(0));
SET32(5, RW(5) + 16640); goto L_00265BE4;
L_00265BC8:;
SET64(31, 0x265bd0);  JP_F_00265AA0(c);
SET64(5, (s64)(s32)0x4b0000);
SET64(16, RD(2) + RD(0));
SET32(5, RW(5) + 16680);
{ int t = RD(16) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00265BF8; }
L_00265BE4:;
SET64(31, 0x265bec);  JP_F_002658C8(c);
SET64(2, RD(0) + RD(0)); goto L_00265C10;
L_00265BF8:;
SET64(5, RD(17) + RD(0));
SET64(31, 0x265c04); SET32(4, RW(16) + 28); JP_F_0012A3C0(c);
SET64(31, 0x265c0c); SET64(4, RD(16) + RD(0)); JP_F_00265B18(c);
SET64(2, RD(16) + RD(0));
L_00265C10:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00265C28(Ctx *c) { /* func_00265C28 */
ENTER(0x265c28);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00265C5C; }
SET64(31, 0x265c44);  JP_F_00265EF0(c);
SET32(3, RW(0) + 1);
SET64(2, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00265C5C; }
SET64(31, 0x265c5c); wr8(c, (RW(16) + 0), (u8)RW(0)); JP_F_00265AF8(c);
L_00265C5C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00265C70(Ctx *c) { /* func_00265C70 */
ENTER(0x265c70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_00265CA8; }
SET64(5, (s64)(s32)0x4b0000);
SET64(31, 0x265ca0); SET32(5, RW(5) + 16728); JP_F_002658C8(c);
SET64(2, RD(0) + RD(0)); goto L_00265D14;
L_00265CA8:;
SET64(31, 0x265cb0);  JP_F_00265880(c);
{ int t = RD(17) != RD(0); SET32(2, RW(0) + 2); if (t) goto L_00265CC0; }
wr32(c, (RW(16) + 16), RW(18)); goto L_00265CF0;
L_00265CC0:;
{ int t = RD(17) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_00265CD8; }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(2, RW(4) + RW(18));
wr32(c, (RW(16) + 16), RW(2)); goto L_00265CF4;
L_00265CD8:;
{ int t = RD(17) != RD(2); SET64(4, (s32)rd32(c, (RW(16) + 12))); if (t) goto L_00265CF4; }
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET32(2, RW(2) + RW(18));
wr32(c, (RW(16) + 16), RW(2)); goto L_00265CF4;
L_00265CF0:;
SET64(4, (s32)rd32(c, (RW(16) + 12)));
L_00265CF4:;
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(3, RSD(2) < RSD(4));
if (RD(3) == 0) SET64(2, RD(4));
SET64(4, RSD(2) < (s64)0);
if (RD(4) != 0) SET64(2, RD(0));
SET64(31, 0x265d10); wr32(c, (RW(16) + 16), RW(2)); JP_F_00265898(c);
SET64(2, (s32)rd32(c, (RW(16) + 16)));
L_00265D14:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00265D30(Ctx *c) { /* func_00265D30 */
ENTER(0x265d30);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00265D58; }
SET64(5, (s64)(s32)0x4b0000);
SET64(31, 0x265d4c); SET32(5, RW(5) + 16760); JP_F_002658C8(c);
SET64(2, RD(0) + RD(0)); goto L_00265D5C;
L_00265D58:;
SET64(2, (s32)rd32(c, (RW(2) + 16)));
L_00265D5C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00265D68(Ctx *c) { /* func_00265D68 */
ENTER(0x265d68);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
{ int t = RD(18) != RD(0); wr64(c, (RW(29) + 48), RD(31)); if (t) goto L_00265DA0; }
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 16792); goto L_00265DBC;
L_00265DA0:;
{ int t = RSD(16) >= 0; SET64(5, (s64)(s32)0x4b0000); if (t) goto L_00265DB0; }
SET32(5, RW(5) + 16824); goto L_00265DBC;
L_00265DB0:;
{ int t = RD(19) != RD(0); SET64(5, (s64)(s32)0x4b0000); if (t) goto L_00265DD0; }
SET32(5, RW(5) + 16856);
L_00265DBC:;
SET64(31, 0x265dc4);  JP_F_002658C8(c);
SET64(2, RD(0) + RD(0)); goto L_00265ED4;
L_00265DD0:;
if (RD(16) != RD(0)) { SET64(3, (s8)rd8(c, (RW(18) + 1))); goto L_00265DE8; }
SET32(3, RW(0) + 1);
SET64(2, RD(0) + RD(0));
wr8(c, (RW(18) + 1), (u8)RW(3)); goto L_00265ED4;
L_00265DE8:;
SET32(17, RW(0) + 2);
{ int t = RD(3) == RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_00265ED4; }
SET64(31, 0x265dfc);  JP_F_00265880(c);
wr32(c, (RW(18) + 20), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 16)));
SET64(2, (s32)rd32(c, (RW(18) + 12)));
SET64(5, (s32)rd32(c, (RW(18) + 4)));
SET32(2, RW(2) - RW(4));
SET64(3, RSD(16) < RSD(2));
mul_s(c, 0, 4, RSW(4), RSW(5));
if (RD(3) != 0) SET64(2, RD(16));
mul_s(c, 0, 3, RSW(2), RSW(5));
{ int t = RD(3) != RD(0); wr32(c, (RW(18) + 24), RW(2)); if (t) goto L_00265E40; }
SET32(2, RW(0) + 1);
SET64(31, 0x265e34); wr8(c, (RW(18) + 1), (u8)RW(2)); JP_F_00265898(c);
SET64(2, RD(0) + RD(0)); goto L_00265ED4;
L_00265E40:;
wr32(c, (RW(18) + 48), RW(4));
SET32(4, RW(18) + 28);
wr32(c, (RW(18) + 52), RW(3));
SET64(5, RD(29) + RD(0));
SET64(31, 0x265e58); wr8(c, (RW(18) + 1), (u8)RW(17)); JP_F_00265910(c);
SET64(4, (s32)rd32(c, (RW(18) + 48)));
SET64(17, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(16, (s32)rd32(c, (RW(18) + 52)));
SET32(2, RW(2) - RW(4));
SET64(3, RSD(2) < RSD(16));
SET64(31, 0x265e78); if (RD(3) != 0) SET64(16, RD(2)); JP_F_00265898(c);
SET64(5, (s32)rd32(c, (RW(18) + 48)));
SET64(4, RD(19) + RD(0));
SET64(6, (s32)rd32(c, (RW(18) + 52)));
SET64(31, 0x265e8c); SET32(5, RW(17) + RW(5)); JP_F_00127218(c);
SET64(6, (s32)rd32(c, (RW(18) + 52)));
SET32(4, RW(19) + RW(16));
SET64(5, RD(0) + RD(0));
SET64(31, 0x265ea0); SET32(6, RW(6) - RW(16)); JP_F_001273D0(c);
SET64(31, 0x265ea8);  JP_F_00265880(c);
SET64(4, (s32)rd32(c, (RW(18) + 24)));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(18) + 4)));
SET64(2, (s32)rd32(c, (RW(18) + 16)));
mul_s(c, 0, 3, RSW(4), RSW(3));
wr8(c, (RW(18) + 1), (u8)RW(5));
SET32(2, RW(2) + RW(4));
wr32(c, (RW(18) + 16), RW(2));
SET64(31, 0x265ed0); wr32(c, (RW(18) + 20), RW(3)); JP_F_00265898(c);
SET64(2, (s32)rd32(c, (RW(18) + 24)));
L_00265ED4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00265EF0(Ctx *c) { /* func_00265EF0 */
ENTER(0x265ef0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00265F20; }
SET64(5, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(5, RW(5) + 16896);
SET32(29, RW(29) + 16); { JP_F_002658C8(c); return; }
L_00265F20:;
SET64(31, 0x265f28);  JP_F_00265880(c);
wr8(c, (RW(16) + 1), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00265898(c); return; }
}

void JP_F_00265F40(Ctx *c) { /* func_00265F40 */
ENTER(0x265f40);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00265F68; }
SET64(5, (s64)(s32)0x4b0000);
SET64(31, 0x265f5c); SET32(5, RW(5) + 16896); JP_F_002658C8(c);
SET64(2, RD(0) + RD(0)); goto L_00265F6C;
L_00265F68:;
SET64(2, (s8)rd8(c, (RW(2) + 1)));
L_00265F6C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00265F78(Ctx *c) { /* func_00265F78 */
ENTER(0x265f78);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00265FA0; }
SET64(5, (s64)(s32)0x4b0000);
SET64(31, 0x265f94); SET32(5, RW(5) + 16920); JP_F_002658C8(c);
SET64(2, RD(0) + RD(0)); goto L_00265FA4;
L_00265FA0:;
SET64(2, (s32)rd32(c, (RW(2) + 4)));
L_00265FA4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00265FB0(Ctx *c) { /* func_00265FB0 */
ENTER(0x265fb0);
SET32(29, RW(29) + -16);
SET64(6, RD(4) + RD(0));
{ int t = RD(6) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00265FD8; }
SET64(5, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(5, RW(5) + 16944);
SET32(29, RW(29) + 16); { JP_F_002658C8(c); return; }
L_00265FD8:;
SET64(2, (s32)rd32(c, (RW(6) + 8)));
SET64(3, (s32)rd32(c, (RW(6) + 16)));
SET32(2, RW(2) + RW(5));
SET64(4, (s32)rd32(c, (RW(6) + 4)));
SET32(2, RW(2) + -1);
wr32(c, (RW(6) + 4), RW(5));
div_s(c, 0, RSW(2), RSW(5));
if (RD(5) == RD(0)) { rt_break(c, 0x265ff8); goto L_00265FFC; }
L_00265FFC:;
SET64(2, c->lo.d[0]);
mul_s(c, 0, 3, RSW(3), RSW(4));
wr32(c, (RW(6) + 12), RW(2));
SET64(2, (s32)rd32(c, (RW(6) + 24)));
SET64(31, rd64(c, (RW(29) + 0)));
div_s(c, 0, RSW(3), RSW(5));
SET64(3, c->lo.d[0]);
mul_s(c, 0, 2, RSW(2), RSW(5));
wr32(c, (RW(6) + 16), RW(3));
wr32(c, (RW(6) + 20), RW(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_00266030(Ctx *c) { /* func_00266030 */
ENTER(0x266030);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00266058; }
SET64(5, (s64)(s32)0x4b0000);
SET64(31, 0x26604c); SET32(5, RW(5) + 16896); JP_F_002658C8(c);
SET64(2, RD(0) + RD(0)); goto L_0026605C;
L_00266058:;
SET64(2, (s32)rd32(c, (RW(2) + 20)));
L_0026605C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00266068(Ctx *c) { /* func_00266068 */
ENTER(0x266068);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
{ int t = RSD(4) > 0; wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00266088; }
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(0) + RD(0));
SET32(5, RW(5) + 16968); goto L_002660BC;
L_00266088:;
{ int t = RD(6) == RD(0); SET64(5, (s64)(s32)0x4b0000); if (t) goto L_002660A0; }
SET64(4, RD(0) + RD(0));
SET32(5, RW(5) + 17016); goto L_002660BC;
L_002660A0:;
SET64(31, 0x2660a8);  JP_F_00265AA0(c);
SET64(5, (s64)(s32)0x4b0000);
SET64(16, RD(2) + RD(0));
SET32(5, RW(5) + 17056);
{ int t = RD(16) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002660D0; }
L_002660BC:;
SET64(31, 0x2660c4);  JP_F_002658C8(c);
SET64(2, RD(0) + RD(0)); goto L_002660DC;
L_002660D0:;
SET64(31, 0x2660d8); SET64(4, RD(16) + RD(0)); JP_F_00265B18(c);
SET64(2, RD(16) + RD(0));
L_002660DC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002660F0(Ctx *c) { /* func_002660F0 */
ENTER(0x2660f0);
SET32(29, RW(29) + -16);
SET64(3, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00266160; }
SET32(2, RW(0) + 203);
{ int t = RD(5) == RD(2); SET64(2, RSD(5) < (s64)204); if (t) goto L_00266150; }
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 205); if (t) goto L_00266130; }
SET32(2, RW(0) + 201);
{ int t = RD(5) == RD(2); SET64(2, RD(3) + RD(0)); if (t) goto L_00266140; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_00266164;
L_00266130:;
{ int t = RD(5) == RD(2); SET64(2, RD(3) + RD(0)); if (t) goto L_00266150; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_00266164;
L_00266140:;
SET64(31, 0x266148);  JP_F_00266030(c);
SET64(3, RD(2) + RD(0)); goto L_0026615C;
L_00266150:;
SET64(31, 0x266158);  JP_F_00265A80(c);
SET64(3, RD(2) + RD(0));
L_0026615C:;
SET64(2, RD(3) + RD(0));
L_00266160:;
SET64(31, rd64(c, (RW(29) + 0)));
L_00266164:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00266170(Ctx *c) { /* func_00266170 */
ENTER(0x266170);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C068(c); return; }
}

void JP_F_00266188(Ctx *c) { /* func_00266188 */
ENTER(0x266188);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C080(c); return; }
}

void JP_F_002661A0(Ctx *c) { /* func_002661A0 */
ENTER(0x2661a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2661bc); SET64(17, RD(5) + RD(0)); JP_F_00266170(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2661c8); SET64(5, RD(17) + RD(0)); JP_F_002661E0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00266188(c); return; }
}

void JP_F_002661E0(Ctx *c) { /* func_002661E0 */
ENTER(0x2661e0);
SET64(2, (s64)(s32)0x410000);
SET64(3, (s64)(s32)0x410000);
wr32(c, (RW(2) + -30324), RW(4));
wr32(c, (RW(3) + -30320), RW(5)); return;
}

void JP_F_002661F8(Ctx *c) { /* func_002661F8 */
ENTER(0x2661f8);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + -30324)));
SET64(5, RD(4) + RD(0));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0026621C; }
SET64(2, (s64)(s32)0x410000);
{ u32 t = RW(3); SET64(31, 0x26621c); SET64(4, (s32)rd32(c, (RW(2) + -30320))); rt_call(c, t); }
L_0026621C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00266228(Ctx *c) { /* func_00266228 */
ENTER(0x266228);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x26623c); SET64(16, RD(4) + RD(0)); JP_F_00266170(c);
SET64(31, 0x266244); SET64(4, RD(16) + RD(0)); JP_F_00266258(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00266188(c); return; }
}

void JP_F_00266258(Ctx *c) { /* func_00266258 */
ENTER(0x266258);
SET32(29, RW(29) + -16);
SET64(4, (s64)(s32)0x410000);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(4) + -30376);
SET32(6, RW(0) + 360);
SET64(31, 0x266274); SET64(5, RD(4) + RD(0)); JP_F_00127180(c);
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + -30328);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_00266298(Ctx *c) { /* func_00266298 */
ENTER(0x266298);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2662ac); SET64(16, RD(4) + RD(0)); JP_F_00266170(c);
SET64(31, 0x2662b4); SET64(4, RD(16) + RD(0)); JP_F_002662C8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00266188(c); return; }
}

void JP_F_002662C8(Ctx *c) { /* func_002662C8 */
ENTER(0x2662c8);
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + -30328);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 0), RW(2)); return;
}

void JP_F_002662E0(Ctx *c) { /* func_002662E0 */
ENTER(0x2662e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2662fc); SET64(17, RD(5) + RD(0)); JP_F_00266170(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x266308); SET64(5, RD(17) + RD(0)); JP_F_00266328(c);
SET64(31, 0x266310); SET64(16, RD(2) + RD(0)); JP_F_00266188(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00266328(Ctx *c) { /* func_00266328 */
ENTER(0x266328);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -48);
SET32(2, RW(2) + -30376);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
SET64(18, RD(4) + RD(0));
SET64(4, RD(2) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(6, RW(0) + 360);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x266360); SET64(5, RD(4) + RD(0)); JP_F_00127180(c);
if (RD(18) != RD(0)) { SET64(2, RSD(19) < (s64)1024); goto L_00266378; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 18136); goto L_00266400;
L_00266378:;
if (RD(2) == RD(0)) { SET64(2, RD(18) & 0x3); goto L_00266390; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 18176); goto L_00266400;
L_00266390:;
{ int t = RD(2) == RD(0); SET64(16, RD(18) + RD(0)); if (t) goto L_002663A0; }
SET32(2, RW(18) - RW(2));
SET32(16, RW(2) + 4);
L_002663A0:;
SET64(17, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(4, RD(17) + RD(0));
SET32(6, RW(0) + 44);
SET64(31, 0x2663b8); SET32(16, RW(17) + 44); JP_F_001273D0(c);
SET64(2, RD(16) & 0x3);
wr32(c, (RW(17) + 0), RW(18));
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 4), RW(19)); if (t) goto L_002663D0; }
SET32(2, RW(16) - RW(2));
SET32(16, RW(2) + 4);
L_002663D0:;
SET32(2, RW(16) + 384);
wr32(c, (RW(17) + 8), RW(16));
wr32(c, (RW(17) + 12), RW(2));
SET64(31, 0x2663e4); SET64(4, RD(17) + RD(0)); JP_F_002664A8(c);
SET32(3, RW(16) + 768);
SET32(2, RW(18) + RW(19));
SET64(2, RD(2) < RD(3));
if (RD(2) == RD(0)) { SET64(2, RD(17) + RD(0)); goto L_0026640C; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 18216);
L_00266400:;
SET64(31, 0x266408);  JP_F_002661F8(c);
SET64(2, RD(0) + RD(0));
L_0026640C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00266428(Ctx *c) { /* func_00266428 */
ENTER(0x266428);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x26643c); SET64(16, RD(4) + RD(0)); JP_F_00266170(c);
SET64(31, 0x266444); SET64(4, RD(16) + RD(0)); JP_F_00266458(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00266188(c); return; }
}

void JP_F_00266458(Ctx *c) { /* func_00266458 */
ENTER(0x266458);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 44);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_00266478(Ctx *c) { /* func_00266478 */
ENTER(0x266478);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x26648c); SET64(16, RD(4) + RD(0)); JP_F_00266170(c);
SET64(31, 0x266494); SET64(4, RD(16) + RD(0)); JP_F_002664A8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00266188(c); return; }
}

void JP_F_002664A8(Ctx *c) { /* func_002664A8 */
ENTER(0x2664a8);
SET64(6, RD(4) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(8, (s32)rd32(c, (RW(6) + 8)));
SET64(7, (s32)rd32(c, (RW(6) + 12)));
L_002664B8:;
SET32(2, RW(5) << 2);
SET32(5, RW(5) + 1);
SET32(4, RW(2) + RW(7));
SET32(2, RW(2) + RW(8));
SET64(3, RSD(5) < (s64)96);
wr32(c, (RW(2) + 0), RW(0));
{ int t = RD(3) != RD(0); wr32(c, (RW(4) + 0), RW(0)); if (t) { POLL(); goto L_002664B8; } }
SET32(2, RW(0) + 64);
wr32(c, (RW(6) + 20), RW(0));
wr32(c, (RW(6) + 24), RW(2)); return;
}

void JP_F_002664E8(Ctx *c) { /* func_002664E8 */
ENTER(0x2664e8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(5) << 16);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x266518); SET32(16, RSW(16) >> 16); JP_F_00266170(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x26652c); SET64(7, RD(19) + RD(0)); JP_F_00266548(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00266188(c); return; }
}

void JP_F_00266548(Ctx *c) { /* func_00266548 */
ENTER(0x266548);
SET32(29, RW(29) + -16);
SET64(24, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(13, (s64)(s32)0x4b0000);
SET32(13, RW(13) + 17112);
SET32(5, RW(5) << 16);
SET64(3, (s32)rd32(c, (RW(24) + 28)));
SET32(5, RSW(5) >> 16);
SET64(2, (s32)rd32(c, (RW(24) + 32)));
SET32(11, RW(0) + -3567);
SET32(3, RW(3) << 2);
SET32(15, RW(0) + -2006);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + RW(13));
SET32(2, RW(2) + RW(13));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(8, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(24) + 40)));
mul_s(c, 0, 4, RSW(5), RSW(4));
mul_s(c, 1, 5, RSW(5), RSW(8));
SET64(8, (s32)rd32(c, (RW(24) + 8)));
SET32(2, RW(2) << 2);
SET64(10, (s32)rd32(c, (RW(24) + 20)));
SET32(2, RW(2) + RW(13));
SET64(12, (s32)rd32(c, (RW(24) + 36)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET32(2, RW(0) + 3567);
SET32(4, RSW(4) >> 12);
SET32(5, RSW(5) >> 12);
mul_s(c, 0, 9, RSW(5), RSW(3));
mul_s(c, 1, 3, RSW(4), RSW(3));
SET64(16, (s32)rd32(c, (RW(24) + 12)));
SET32(14, RW(10) << 2);
SET64(10, RD(14) + RD(0));
SET32(14, RW(14) + RW(8));
SET32(12, RW(12) << 2);
SET32(8, RW(0) + 2006);
SET32(3, RSW(3) >> 12);
SET32(9, RSW(9) >> 12);
mul_s(c, 0, 11, RSW(3), RSW(11));
mul_s(c, 1, 3, RSW(3), RSW(8));
mul_s(c, 1, 15, RSW(9), RSW(15));
mul_s(c, 0, 9, RSW(9), RSW(2));
SET32(12, RW(12) + RW(13));
SET32(13, RW(10) + RW(16));
SET64(10, RD(14) + RD(0));
SET64(2, (s32)rd32(c, (RW(12) + 0)));
SET64(8, (s32)rd32(c, (RW(13) + 0)));
SET32(11, RW(11) + RW(15));
SET64(12, (s32)rd32(c, (RW(10) + 0)));
SET32(11, RSW(11) >> 12);
mul_s(c, 0, 5, RSW(5), RSW(2));
wr32(c, (RW(14) + 0), RW(11));
SET32(11, RW(0) + 32767);
mul_s(c, 1, 4, RSW(4), RSW(2));
SET32(9, RW(9) + RW(3));
SET64(2, (s32)rd32(c, (RW(24) + 20)));
SET32(9, RSW(9) >> 12);
SET32(5, RSW(5) >> 12);
SET32(10, RW(0) + 32767);
SET32(2, RW(2) << 2);
SET32(5, RW(5) + RW(8));
SET32(2, RW(2) + RW(16));
SET32(4, RSW(4) >> 12);
wr32(c, (RW(2) + 0), RW(9));
SET32(2, RW(0) + -32768);
SET32(4, RW(4) + RW(12));
SET32(12, RW(0) + -32768);
SET64(8, (s32)rd32(c, (RW(24) + 20)));
SET64(10, RSD(10) < RSD(4));
SET64(11, RSD(11) < RSD(5));
SET64(3, RSD(5) < (s64)-32768);
SET64(13, RSD(4) < (s64)-32768);
SET64(9, (s32)rd32(c, (RW(24) + 24)));
if (RD(3) != 0) SET64(5, RD(2));
SET32(2, RW(0) + 32767);
SET32(8, RW(8) + 1);
if (RD(13) != 0) SET64(4, RD(12));
SET64(10, RD(10) ^ 0x0);
SET64(11, RD(11) ^ 0x0);
SET32(3, RW(0) + 32767);
if (RD(10) != 0) SET64(4, RD(2));
if (RD(11) != 0) SET64(5, RD(3));
SET64(9, RSD(8) < RSD(9));
wr16(c, (RW(6) + 0), (u16)RW(4));
wr32(c, (RW(24) + 20), RW(8));
{ int t = RD(9) != RD(0); wr16(c, (RW(7) + 0), (u16)RW(5)); if (t) goto L_002666AC; }
wr32(c, (RW(24) + 20), RW(0));
L_002666AC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002666B8(Ctx *c) { /* func_002666B8 */
ENTER(0x2666b8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2666e4); SET64(19, RD(7) + RD(0)); JP_F_00266170(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2666f8); SET64(7, RD(19) + RD(0)); JP_F_00266718(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00266188(c); return; }
}

void JP_F_00266718(Ctx *c) { /* func_00266718 */
ENTER(0x266718);
SET32(29, RW(29) + -80);
SET64(15, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(2, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + -32768);
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(0) + 32767);
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(22));
SET64(22, RD(5) + RD(0));
wr64(c, (RW(29) + 56), RD(23));
SET32(23, RW(0) + 2006);
wr64(c, (RW(29) + 64), RD(30));
SET32(30, RW(0) + 3567);
SET32(17, RW(2) + 17112);
SET64(25, (s32)rd32(c, (RW(15) + 12)));
SET64(24, (s32)rd32(c, (RW(15) + 8)));
L_00266778:;
SET64(3, (s32)rd32(c, (RW(15) + 28)));
SET32(12, RW(16) << 1);
SET64(2, (s32)rd32(c, (RW(15) + 32)));
SET32(4, RW(12) + RW(22));
SET32(3, RW(3) << 2);
SET64(5, (s16)rd16(c, (RW(4) + 0)));
SET32(2, RW(2) << 2);
SET32(3, RW(3) + RW(17));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(6, (s32)rd32(c, (RW(2) + 0)));
SET32(14, RW(0) + 32767);
SET64(2, (s32)rd32(c, (RW(15) + 40)));
mul_s(c, 0, 4, RSW(5), RSW(4));
mul_s(c, 1, 5, RSW(5), RSW(6));
SET64(3, (s32)rd32(c, (RW(15) + 36)));
SET32(2, RW(2) << 2);
SET64(7, (s32)rd32(c, (RW(24) + 0)));
SET32(2, RW(2) + RW(17));
SET32(3, RW(3) << 2);
SET64(6, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RSW(4) >> 12);
SET32(5, RSW(5) >> 12);
SET32(3, RW(3) + RW(17));
mul_s(c, 0, 8, RSW(5), RSW(6));
mul_s(c, 1, 6, RSW(4), RSW(6));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(13, RW(0) + 32767);
SET64(3, (s32)rd32(c, (RW(25) + 0)));
SET32(16, RW(16) + 1);
mul_s(c, 0, 5, RSW(5), RSW(2));
mul_s(c, 1, 4, RSW(4), RSW(2));
SET32(6, RSW(6) >> 12);
SET32(2, RW(0) + -3567);
SET32(8, RSW(8) >> 12);
mul_s(c, 1, 11, RSW(6), RSW(23));
mul_s(c, 0, 6, RSW(6), RSW(2));
SET32(2, RW(0) + -2006);
mul_s(c, 0, 10, RSW(8), RSW(30));
mul_s(c, 1, 8, RSW(8), RSW(2));
SET32(4, RSW(4) >> 12);
SET32(5, RSW(5) >> 12);
SET32(4, RW(4) + RW(7));
SET32(5, RW(5) + RW(3));
SET64(2, RSD(19) < RSD(4));
SET64(3, RSD(19) < RSD(5));
SET64(7, RSD(4) < (s64)-32768);
SET64(9, RSD(5) < (s64)-32768);
SET64(2, RD(2) ^ 0x0);
SET64(3, RD(3) ^ 0x0);
SET32(6, RW(6) + RW(8));
SET32(10, RW(10) + RW(11));
if (RD(7) != 0) SET64(4, RD(18));
if (RD(9) != 0) SET64(5, RD(18));
if (RD(2) != 0) SET64(4, RD(14));
SET32(2, RW(12) + RW(20));
if (RD(3) != 0) SET64(5, RD(13));
SET64(3, RSD(16) < (s64)32);
SET32(6, RSW(6) >> 12);
SET32(10, RSW(10) >> 12);
SET32(12, RW(12) + RW(21));
wr32(c, (RW(24) + 0), RW(6));
wr16(c, (RW(12) + 0), (u16)RW(4));
SET32(24, RW(24) + 4);
wr32(c, (RW(25) + 0), RW(10));
SET32(25, RW(25) + 4);
{ int t = RD(3) != RD(0); wr16(c, (RW(2) + 0), (u16)RW(5)); if (t) { POLL(); goto L_00266778; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(23, rd64(c, (RW(29) + 56)));
SET64(30, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_002668B8(Ctx *c) { /* func_002668B8 */
ENTER(0x2668b8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2668dc); SET64(18, RD(6) + RD(0)); JP_F_00266170(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2668ec); SET64(6, RD(18) + RD(0)); JP_F_00266908(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00266188(c); return; }
}

void JP_F_00266908(Ctx *c) { /* func_00266908 */
ENTER(0x266908);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00266928; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 18256);
SET32(29, RW(29) + 16); { JP_F_002661F8(c); return; }
L_00266928:;
SET32(3, RW(5) + 127);
SET64(2, RD(3) < (u64)(s64)255);
if (RD(2) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_00266954; }
SET64(2, RSD(6) < (s64)-127);
if (RD(2) != RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_00266954; }
SET64(2, RSD(6) < (s64)128);
{ int t = RD(2) != RD(0); SET32(7, RW(5) + -127); if (t) goto L_00266968; }
SET64(4, (s64)(s32)0x4b0000);
L_00266954:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 18296);
SET32(29, RW(29) + 16); { JP_F_002661F8(c); return; }
L_00266968:;
{ int t = RSD(3) >= 0; SET64(2, RD(3) + RD(0)); if (t) goto L_00266974; }
SET32(2, RW(0) - RW(2));
L_00266974:;
{ int t = RSD(7) >= 0; wr32(c, (RW(4) + 28), RW(2)); if (t) goto L_00266984; }
SET32(2, RW(0) + 127);
SET32(7, RW(2) - RW(5));
L_00266984:;
SET32(2, RW(6) + 127);
SET32(3, RW(6) + -127);
if (RSD(2) < 0) { SET32(2, RW(0) - RW(2)); goto L_00266994; }
L_00266994:;
wr32(c, (RW(4) + 32), RW(7));
{ int t = RSD(3) >= 0; wr32(c, (RW(4) + 36), RW(2)); if (t) goto L_002669A8; }
SET32(2, RW(0) + 127);
SET32(3, RW(2) - RW(6));
L_002669A8:;
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(4) + 40), RW(3));
SET32(29, RW(29) + 16); return;
}

void JP_F_002669B8(Ctx *c) { /* func_002669B8 */
ENTER(0x2669b8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2669d4); SET64(17, RD(5) + RD(0)); JP_F_00266170(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2669e0); SET64(5, RD(17) + RD(0)); JP_F_002669F8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00266188(c); return; }
}

void JP_F_002669F8(Ctx *c) { /* func_002669F8 */
ENTER(0x2669f8);
SET32(29, RW(29) + -16);
SET64(7, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(7) != RD(0); SET64(4, RD(5) + RD(0)); if (t) goto L_00266A20; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 18344);
SET32(29, RW(29) + 16); { JP_F_002661F8(c); return; }
L_00266A20:;
{ int t = RSD(4) > 0; SET32(3, RW(0) + 750); if (t) goto L_00266A40; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 18384);
SET32(29, RW(29) + 16); { JP_F_002661F8(c); return; }
L_00266A40:;
SET32(5, RW(0) + 1);
div_s(c, 0, RSW(4), RSW(3));
if (RD(3) == RD(0)) { rt_break(c, 0x266a4c); goto L_00266A50; }
L_00266A50:;
wr32(c, (RW(7) + 16), RW(4));
SET32(6, RW(0) + 96);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, c->lo.d[0]);
SET64(3, RSD(2) < (s64)97);
SET64(4, RSD(0) < RSD(2));
if (RD(4) == 0) SET64(2, RD(5));
SET64(3, RD(3) ^ 0x0);
if (RD(3) == 0) SET64(2, RD(6));
wr32(c, (RW(7) + 24), RW(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_00266A80(Ctx *c) { /* func_00266A80 */
ENTER(0x266a80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(2, (s8)rd8(c, (RW(16) + 3)));
SET64(2, RSD(2) < (s64)2);
{ int t = RD(2) == RD(0); SET64(19, RD(5) + RD(0)); if (t) goto L_00266AD8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 18432);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024BDE8(c); return; }
L_00266AD8:;
SET64(31, 0x266ae0);  JP_F_00258558(c);
SET64(31, 0x266ae8); SET64(4, RD(16) + RD(0)); JP_F_00266BB8(c);
SET64(4, (s64)(s32)0x260000);
SET64(5, RD(0) + RD(0));
SET64(31, 0x266af8); SET32(4, RW(4) + 28000); JP_F_002661A0(c);
SET64(31, 0x266b00); SET64(4, RD(0) + RD(0)); JP_F_00266228(c);
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x266b0c); SET64(17, (s32)rd32(c, (RW(2) + 4))); JP_F_00250EE8(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x266b18); SET64(5, RD(18) + RD(0)); JP_F_002662E0(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00266B48; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 18496);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024BDE8(c); return; }
L_00266B48:;
SET64(5, (s32)rd32(c, (RW(17) + 236)));
SET64(31, 0x266b54); SET64(6, (s32)rd32(c, (RW(17) + 240))); JP_F_002668B8(c);
wr32(c, (RW(17) + 232), RW(16));
SET64(2, (s64)(s32)0x260000);
SET64(3, (s64)(s32)0x260000);
SET64(4, (s64)(s32)0x260000);
SET64(5, (s64)(s32)0x260000);
SET64(16, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) + 27784);
SET64(17, rd64(c, (RW(29) + 8)));
SET32(3, RW(3) + 27920);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(4, RW(4) + 27896);
SET64(19, rd64(c, (RW(29) + 24)));
SET32(5, RW(5) + 27976);
SET64(31, rd64(c, (RW(29) + 32)));
SET64(6, (s64)(s32)0x400000);
SET64(7, (s64)(s32)0x3f0000);
SET64(8, (s64)(s32)0x3f0000);
SET64(9, (s64)(s32)0x400000);
wr32(c, (RW(6) + 2536), RW(2));
wr32(c, (RW(7) + 2028), RW(3));
wr32(c, (RW(8) + 2032), RW(4));
wr32(c, (RW(9) + -12720), RW(5));
SET32(29, RW(29) + 48); { JP_F_00250F00(c); return; }
}

void JP_F_00266BB8(Ctx *c) { /* func_00266BB8 */
ENTER(0x266bb8);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(2, (s32)rd32(c, (RW(2) + 2536)));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00266BD4; }
{ u32 t = RW(2); SET64(31, 0x266bd4);  rt_call(c, t); }
L_00266BD4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00266BE0(Ctx *c) { /* func_00266BE0 */
ENTER(0x266be0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_00266C20; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 18552);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024BDE8(c); return; }
L_00266C20:;
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(2, (s8)rd8(c, (RW(4) + 3)));
SET64(16, (s32)rd32(c, (RW(3) + 4)));
SET64(2, RSD(2) < (s64)2);
{ int t = RD(2) != RD(0); SET64(4, (s32)rd32(c, (RW(16) + 232))); if (t) goto L_00266C40; }
{ int t = RD(4) != RD(0);  if (t) goto L_00266C60; }
L_00266C40:;
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 18600);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024BDE8(c); return; }
L_00266C60:;
SET64(31, 0x266c68);  JP_F_002668B8(c);
wr32(c, (RW(16) + 240), RW(17));
wr32(c, (RW(16) + 236), RW(18));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00266C88(Ctx *c) { /* func_00266C88 */
ENTER(0x266c88);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(17, (s32)rd32(c, (RW(2) + 4)));
SET64(16, (s32)rd32(c, (RW(17) + 232)));
if (RD(16) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00266CE8; }
SET64(31, 0x266cb4);  JP_F_00258558(c);
SET64(31, 0x266cbc);  JP_F_00250EE8(c);
SET64(31, 0x266cc4); SET64(4, RD(16) + RD(0)); JP_F_00266428(c);
wr32(c, (RW(17) + 232), RW(0));
SET64(31, 0x266cd0); SET64(4, RD(0) + RD(0)); JP_F_00266298(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00250F00(c); return; }
L_00266CE8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00266CF8(Ctx *c) { /* func_00266CF8 */
ENTER(0x266cf8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 232)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00266478(c); return; }
}

void JP_F_00266D10(Ctx *c) { /* func_00266D10 */
ENTER(0x266d10);
SET32(29, RW(29) + -16);
SET32(5, RW(5) << 16);
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RSW(5) >> 16);
SET64(4, (s32)rd32(c, (RW(4) + 232)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002664E8(c); return; }
}

void JP_F_00266D30(Ctx *c) { /* func_00266D30 */
ENTER(0x266d30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 232)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002668B8(c); return; }
}

