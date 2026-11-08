#include "r5900.h"
#include "functab.h"

void F_0022AAA0(Ctx *c) { /* func_0022AAA0 */
ENTER(0x22aaa0);
SET32(4, RW(4) + -24); { F_00228FC0(c); return; }
}

void F_0022AAB0(Ctx *c) { /* func_0022AAB0 */
ENTER(0x22aab0);
SET32(4, RW(4) + -60); { F_00228FC0(c); return; }
}

void F_0022AAC0(Ctx *c) { /* func_0022AAC0 */
ENTER(0x22aac0);
SET32(4, RW(4) + -4); { F_00228250(c); return; }
}

void F_0022AAD0(Ctx *c) { /* func_0022AAD0 */
ENTER(0x22aad0);
SET32(4, RW(4) + -24); { F_00228250(c); return; }
}

void F_0022AAE0(Ctx *c) { /* func_0022AAE0 */
ENTER(0x22aae0);
SET32(4, RW(4) + -60); { F_00228250(c); return; }
}

void F_0022AAF0(Ctx *c) { /* func_0022AAF0 */
ENTER(0x22aaf0);
SET32(4, RW(4) + -4); { F_002239A0(c); return; }
}

void F_0022AB00(Ctx *c) { /* func_0022AB00 */
ENTER(0x22ab00);
SET32(4, RW(4) + -24); { F_002239A0(c); return; }
}

void F_0022AB10(Ctx *c) { /* func_0022AB10 */
ENTER(0x22ab10);
SET32(4, RW(4) + -60); { F_002239A0(c); return; }
}

void F_0022AB20(Ctx *c) { /* func_0022AB20 */
ENTER(0x22ab20);
SET32(4, RW(4) + -4); { F_0017E8A0(c); return; }
}

void F_0022AB30(Ctx *c) { /* func_0022AB30 */
ENTER(0x22ab30);
SET32(4, RW(4) + -24); { F_0017E8A0(c); return; }
}

void F_0022AB40(Ctx *c) { /* func_0022AB40 */
ENTER(0x22ab40);
SET32(4, RW(4) + -60); { F_0017E8A0(c); return; }
}

void F_0022AB50(Ctx *c) { /* func_0022AB50 */
ENTER(0x22ab50);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -496);
SET32(4, RW(4) + RW(25)); { F_00223D10(c); return; }
}

void F_0022AB60(Ctx *c) { /* func_0022AB60 */
ENTER(0x22ab60);
SET32(4, RW(4) + -208); { F_00223D10(c); return; }
}

void F_0022AB70(Ctx *c) { /* func_0022AB70 */
ENTER(0x22ab70);
SET32(4, RW(4) + -4); { F_0017E420(c); return; }
}

void F_0022AB80(Ctx *c) { /* func_0022AB80 */
ENTER(0x22ab80);
SET32(4, RW(4) + -24); { F_0017E420(c); return; }
}

void F_0022AB90(Ctx *c) { /* func_0022AB90 */
ENTER(0x22ab90);
SET32(4, RW(4) + -60); { F_0017E420(c); return; }
}

void F_0022ABA0(Ctx *c) { /* func_0022ABA0 */
ENTER(0x22aba0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 48)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 48), RW(0)); goto L_0022ABD0; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x22abcc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 48), RW(0));
L_0022ABD0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0022ABE0(Ctx *c) { /* func_0022ABE0 */
ENTER(0x22abe0);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 28)));
SET64(5, rd16(c, (RW(2) + -28234)));
SET64(2, (s32)rd32(c, (RW(4) + 32)));
SET32(4, RW(5) << 2);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(0) + 64);
SET64(31, 0x22ac28); SET32(18, RW(2) + RW(3)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_0022AC38; }
SET64(31, 0x22ac38); SET64(4, RD(19) + RD(0)); F_0014F940(c);
L_0022AC38:;
SET64(4, RD(19) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(7, RD(18) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, 0x22ac54); wr32(c, (RW(17) + 48), RW(19)); F_0014F0A0(c);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0022AC70(Ctx *c) { /* func_0022AC70 */
ENTER(0x22ac70);
SET64(2, RD(5) & 0xffff);
SET32(3, RW(2) << 1);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + -28240);
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 28)));
SET64(2, (s32)rd32(c, (RW(4) + 32)));
SET32(4, RW(5) << 2);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(3)); return;
}

void F_0022ACB0(Ctx *c) { /* func_0022ACB0 */
ENTER(0x22acb0);
SET64(2, RD(5) & 0xffff);
SET32(3, RW(2) << 1);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + -28240);
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 28)));
SET64(2, (s32)rd32(c, (RW(4) + 32)));
SET32(4, RW(5) << 2);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(3)); return;
}

void F_0022ACF0(Ctx *c) { /* func_0022ACF0 */
ENTER(0x22acf0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x22ad04); SET64(16, RD(4) + RD(0)); F_0019E5F0(c);
SET64(5, (s64)(s32)0x3f0000);
SET32(4, RW(29) + 32);
SET32(5, RW(5) + -30336);
SET32(3, RW(0) + 7);
L_0022AD14:;
SET64(2, (s16)rd16(c, (RW(5) + 0)));
SET32(3, RW(3) + -1);
wr16(c, (RW(4) + 0), (u16)RW(2));
SET32(5, RW(5) + 2);
SET32(4, RW(4) + 2);
{ int t = RSD(3) > 0;  if (t) { POLL(); goto L_0022AD14; } }
SET64(2, rd16(c, (RW(28) + -30348)));
SET32(4, RW(16) + 8);
SET64(25, (s32)rd32(c, (RW(16) + 24)));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(29));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
SET64(2, (s16)rd16(c, (RW(2) + 32)));
{ u32 t = RW(25); SET64(31, 0x22ad54); SET32(5, RW(2) + 2225); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x22ad64); SET32(4, RW(16) + 8); rt_call(c, t); }
SET64(31, 0x22ad6c); SET64(4, RD(2) + RD(0)); F_00100530(c);
wr32(c, (RW(16) + 44), RW(2));
SET64(5, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 24)));
SET32(4, RW(16) + 8);
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x22ad8c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
L_0022AD8C:;
SET64(25, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x22ad9c); SET32(4, RW(16) + 8); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0022AD8C; } }
SET64(25, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x22adb8); SET32(4, RW(16) + 8); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022ADD0(Ctx *c) { /* func_0022ADD0 */
ENTER(0x22add0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0022AE3C; }
SET64(31, 0x22adf4);  F_0019E5A0(c);
SET64(31, 0x22adfc); SET64(4, (s32)rd32(c, (RW(17) + 44))); F_00100430(c);
SET32(4, RW(17) + 8);
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 44), RW(0)); if (t) goto L_0022AE24; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
SET64(31, 0x22ae18); wr32(c, (RW(17) + 24), RW(2)); F_00156AD0(c);
SET32(4, RW(17) + 8);
SET64(31, 0x22ae24); SET64(5, RD(0) + RD(0)); F_001575C0(c);
L_0022AE24:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0022AE40; }
SET64(31, 0x22ae3c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0022AE3C:;
SET64(2, RD(17) + RD(0));
L_0022AE40:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022AE60(Ctx *c) { /* func_0022AE60 */
ENTER(0x22ae60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET32(16, RW(17) + 8);
SET64(31, 0x22ae80); SET64(4, RD(16) + RD(0)); F_00157630(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(17) + RD(0));
SET32(3, RW(3) + -26960);
wr32(c, (RW(16) + 16), RW(3));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
wr32(c, (RW(17) + 44), RW(0));
wr32(c, (RW(17) + 48), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022AEC0(Ctx *c) { /* func_0022AEC0 */
ENTER(0x22aec0);
wr32(c, (RW(4) + 924), RW(5)); return;
}

void F_0022AED0(Ctx *c) { /* func_0022AED0 */
ENTER(0x22aed0);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 32), RD(31));
c->f[0].u = RW(2);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
c->f[1].u = rd32(c, (RW(5) + 0));
c->fcc = F(1) < F(0);
{ int t = c->fcc; SET64(16, RD(4) + RD(0)); if (t) goto L_0022AFBC; }
SET64(2, (s32)rd32(c, (RW(16) + 272)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x22af0c); SET32(5, RW(0) + 128); F_00153B70(c);
SET64(2, (s32)rd32(c, (RW(16) + 272)));
SET32(6, RW(0) + 1);
SET32(3, RW(0) + 4);
SET64(5, RD(0) + RD(0));
SET64(7, RD(6) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(9, RD(0) + RD(0));
wr16(c, (RW(2) + 48), (u16)RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 272)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x22af40); SET32(4, RW(2) + 144); F_002B0FA0(c);
SET64(2, (s32)rd32(c, (RW(16) + 272)));
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET32(8, RW(0) + 3);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(17, RW(2) + 240);
SET64(31, 0x22af64); SET64(4, RD(17) + RD(0)); F_002B1350(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x22af74); SET64(6, RD(0) + RD(0)); F_002B1310(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x22af84); SET32(6, RW(0) + 2); F_002B12E0(c);
SET64(2, (s32)rd32(c, (RW(16) + 272)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 152)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x22af9c); SET32(4, RW(2) + 144); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 272)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 248)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x22afb4); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32))); goto L_0022B084;
L_0022AFBC:;
wr32(c, (RW(16) + 268), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(16) + 272)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x22afd0); SET32(5, RW(0) + 128); F_00153B70(c);
SET64(2, (s32)rd32(c, (RW(16) + 272)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x22afe0); SET32(5, RW(0) + 64); F_00153C00(c);
c->f[0].u = rd32(c, (RW(17) + 0));
SET64(2, (s32)rd32(c, (RW(16) + 272)));
SET32(6, RW(0) + 1);
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(8, RD(6) + RD(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(9, (s32)c->f[0].u);
SET64(31, 0x22b00c); SET32(4, RW(2) + 144); F_002B0FA0(c);
SET64(2, (s32)rd32(c, (RW(16) + 272)));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 5);
SET32(7, RW(0) + 120);
SET64(8, RD(5) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(17, RW(2) + 240);
SET64(31, 0x22b030); SET64(4, RD(17) + RD(0)); F_002B1350(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x22b040); SET64(6, RD(0) + RD(0)); F_002B1310(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x22b050); SET32(6, RW(0) + 2); F_002B12E0(c);
SET64(2, (s32)rd32(c, (RW(16) + 272)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 152)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x22b068); SET32(4, RW(2) + 144); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 272)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 248)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x22b080); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
L_0022B084:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022B0A0(Ctx *c) { /* func_0022B0A0 */
ENTER(0x22b0a0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 912), RW(6));
SET64(2, rd16(c, (RW(6) + 898)));
wr16(c, (RW(4) + 898), (u16)RW(2));
SET64(2, rd16(c, (RW(5) + 264)));
wr16(c, (RW(4) + 264), (u16)RW(2));
SET64(2, rd16(c, (RW(4) + 264)));
SET64(31, 0x22b0e4); SET32(4, RW(2) << 2); F_00100530(c);
wr32(c, (RW(20) + 272), RW(2));
SET64(2, rd16(c, (RW(20) + 264)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_0022B158; }
SET64(16, RD(0) + RD(0));
L_0022B0F8:;
SET64(31, 0x22b100); SET32(4, RW(0) + 288); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0022B110; }
SET64(31, 0x22b110); SET64(4, RD(17) + RD(0)); F_00154480(c);
L_0022B110:;
SET64(2, (s32)rd32(c, (RW(20) + 272)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 0), RW(17));
SET64(4, (s32)rd32(c, (RW(20) + 272)));
SET64(3, (s32)rd32(c, (RW(19) + 272)));
SET64(2, (s32)rd32(c, (RW(20) + 912)));
SET32(4, RW(4) + RW(16));
SET32(3, RW(3) + RW(16));
SET64(5, (s32)rd32(c, (RW(3) + 0)));
SET64(6, (s32)rd32(c, (RW(2) + 900)));
SET64(31, 0x22b140); SET64(4, (s32)rd32(c, (RW(4) + 0))); F_00154210(c);
SET64(2, rd16(c, (RW(20) + 264)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_0022B0F8; } }
L_0022B158:;
SET64(31, 0x22b160); SET64(4, RD(20) + RD(0)); F_0022B340(c);
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_0022B180(Ctx *c) { /* func_0022B180 */
ENTER(0x22b180);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x22b190);  F_00151AE0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0022B1A0(Ctx *c) { /* func_0022B1A0 */
ENTER(0x22b1a0);
SET32(29, RW(29) + -256);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 924)));
{ int t = RD(16) == RD(0); SET64(17, RD(6) + RD(0)); if (t) goto L_0022B1D4; }
SET32(4, RW(29) + 192); goto L_0022B1E4;
L_0022B1D4:;
SET64(31, 0x22b1dc); SET32(4, RW(29) + 112); F_002AC130(c);
SET32(16, RW(29) + 112);
SET32(4, RW(29) + 192);
L_0022B1E4:;
SET64(31, 0x22b1ec);  F_002AC130(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
SET32(4, RW(29) + 192);
wr32(c, (RW(29) + 100), RW(0));
wr128(c, (RW(29) + 192) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 108), RW(2));
wr32(c, (RW(29) + 104), RW(0));
wr128(c, (RW(29) + 208) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 224) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 240) & ~15u, &c->r[3]);
SET64(31, 0x22b230); wr128(c, (RW(29) + 240) & ~15u, &c->r[2]); F_002ABA00(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 80);
wr32(c, (RW(29) + 184), RW(2));
SET32(5, RW(29) + 176);
wr32(c, (RW(29) + 188), RW(2));
SET32(6, RW(29) + 192);
wr32(c, (RW(29) + 176), RW(0));
SET64(31, 0x22b254); wr32(c, (RW(29) + 180), RW(0)); F_002ACE80(c);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(28) + -31544));
SET32(4, RW(29) + 176);
wr128(c, (RW(29) + 176) & ~15u, &c->r[2]);
SET64(31, 0x22b26c); wr32(c, (RW(29) + 180), c->f[0].u); F_002AD410(c);
rd128(c, (RW(29) + 176) & ~15u, &c->r[3]);
SET64(5, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 920)));
SET64(6, RD(17) + RD(0));
SET32(4, RW(19) + 288);
SET64(31, 0x22b288); wr128(c, (RW(2) + 48) & ~15u, &c->r[3]); F_002B7860(c);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 256); return;
}

void F_0022B2B0(Ctx *c) { /* func_0022B2B0 */
ENTER(0x22b2b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 912), RW(0));
SET64(5, (s32)rd32(c, (RW(4) + 916)));
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0022B2F4; }
SET64(31, 0x22b2d4);  F_001CA990(c);
SET64(4, (s32)rd32(c, (RW(16) + 916)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 916), RW(0)); goto L_0022B2F4; }
SET64(25, (s32)rd32(c, (RW(4) + 32)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x22b2f0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 916), RW(0));
L_0022B2F4:;
SET64(5, (s32)rd32(c, (RW(16) + 920)));
if (RD(5) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_0022B32C; }
SET64(31, 0x22b308); SET64(4, RD(16) + RD(0)); F_001CA990(c);
SET64(4, (s32)rd32(c, (RW(16) + 920)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 920), RW(0)); goto L_0022B328; }
SET64(25, (s32)rd32(c, (RW(4) + 32)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x22b324); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 920), RW(0));
L_0022B328:;
SET64(31, rd64(c, (RW(29) + 16)));
L_0022B32C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0022B340(Ctx *c) { /* func_0022B340 */
ENTER(0x22b340);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x22b35c); SET32(4, RW(0) + 48); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0022B390; }
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(29) + 64), RW(2));
SET32(5, RW(29) + 64);
wr32(c, (RW(29) + 68), RW(2));
wr32(c, (RW(29) + 72), RW(2));
SET64(31, 0x22b384); wr32(c, (RW(29) + 76), RW(2)); F_002B3100(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -20816);
wr32(c, (RW(17) + 32), RW(2));
L_0022B390:;
SET64(5, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x22b3a0); wr32(c, (RW(16) + 916), RW(17)); F_001CA9B0(c);
SET64(31, 0x22b3a8); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0022B3F0; }
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(29) + 84), RW(2));
SET32(5, RW(29) + 48);
wr32(c, (RW(29) + 92), RW(2));
SET32(6, RW(29) + 80);
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 48), RW(0));
wr32(c, (RW(29) + 52), RW(0));
wr32(c, (RW(29) + 56), RW(0));
SET64(31, 0x22b3e4); wr32(c, (RW(29) + 60), RW(0)); F_002B3040(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -20880);
wr32(c, (RW(17) + 32), RW(2));
L_0022B3F0:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x22b400); wr32(c, (RW(16) + 920), RW(17)); F_001CA9B0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_0022B420(Ctx *c) { /* func_0022B420 */
ENTER(0x22b420);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(6) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 256)));
SET64(31, 0x22b460); SET64(16, RD(5) + RD(0)); F_001419B0(c);
SET64(31, 0x22b468); SET64(4, RD(16) + RD(0)); F_0013FEC0(c);
SET64(17, rd16(c, (RW(2) + 2)));
SET64(22, RD(2) + RD(0));
SET64(6, RD(0) + RD(0));
{ int t = RSD(17) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_0022B4C8; }
SET64(4, (s32)rd32(c, (RW(22) + 8)));
SET64(3, RD(5) & 0xffff);
L_0022B484:;
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 4);
SET32(2, RW(4) + RW(2));
SET64(2, rd16(c, (RW(2) + 8)));
SET64(2, RD(2) & 0x8);
{ int t = RD(2) == RD(0);  if (t) goto L_0022B4B0; }
SET32(2, RW(6) + 1);
SET64(6, RD(2) & 0xffff);
L_0022B4B0:;
SET32(2, RW(5) + 1);
SET64(5, RD(2) & 0xffff);
SET64(2, rd16(c, (RW(22) + 2)));
SET64(2, RSD(5) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, RD(5) & 0xffff); { POLL(); goto L_0022B484; } }
L_0022B4C8:;
SET64(16, RD(6) & 0xffff);
if (RD(16) != RD(0)) { SET32(2, RW(0) + 1); goto L_0022B4DC; }
SET64(2, RD(0) + RD(0)); goto L_0022B6B0;
L_0022B4DC:;
wr16(c, (RW(21) + 264), (u16)RW(2));
SET64(2, rd16(c, (RW(21) + 264)));
SET64(31, 0x22b4ec); SET32(4, RW(2) << 2); F_00100530(c);
wr32(c, (RW(21) + 272), RW(2));
SET64(31, 0x22b4f8); SET32(4, RW(0) + 288); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0022B508; }
SET64(31, 0x22b508); SET64(4, RD(18) + RD(0)); F_00154480(c);
L_0022B508:;
SET64(2, (s32)rd32(c, (RW(21) + 272)));
wr32(c, (RW(2) + 0), RW(18));
SET64(2, (s32)rd32(c, (RW(21) + 272)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x22b520); SET64(5, RD(16) & 0xffff); F_001543C0(c);
SET64(30, RD(17) & 0xffff);
{ int t = RSD(30) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_0022B5E8; }
SET64(17, RD(0) + RD(0));
SET64(4, RD(20) & 0xffff);
L_0022B534:;
SET64(2, (s32)rd32(c, (RW(22) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 8)));
SET64(2, RD(2) & 0x8);
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_0022B5D0; }
SET64(5, (s32)rd32(c, (RW(23) + 272)));
SET32(6, RW(4) << 2);
SET64(4, (s32)rd32(c, (RW(21) + 272)));
SET64(2, (s64)(s32)0x1000000);
SET64(3, (s64)(s32)0x110000);
SET64(2, RD(2) | 0x101);
SET32(5, RW(5) + RW(6));
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET64(19, (s32)rd32(c, (RW(5) + 56)));
SET64(4, (s32)rd32(c, (RW(4) + 56)));
SET64(5, (s32)rd32(c, (RW(19) + 0)));
SET32(18, RW(4) + RW(17));
SET64(4, RD(18) + RD(0));
SET64(3, RD(5) & RD(3));
SET64(16, RD(3) | RD(2));
SET64(31, 0x22b5a4); SET64(5, RD(16) + RD(0)); F_001417A0(c);
SET64(6, (s32)rd32(c, (RW(23) + 900)));
SET64(5, RD(19) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(31, 0x22b5b8); SET64(4, RD(18) + RD(0)); F_00140230(c);
SET64(2, (s32)rd32(c, (RW(21) + 272)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x22b5c8); SET64(4, RD(18) + RD(0)); F_001416B0(c);
SET32(17, RW(17) + 28);
L_0022B5D0:;
SET32(2, RW(20) + 1);
SET64(20, RD(2) & 0xffff);
SET64(2, RSD(20) < RSD(30));
if (RD(2) != RD(0)) { SET64(4, RD(20) & 0xffff); { POLL(); goto L_0022B534; } }
L_0022B5E8:;
SET64(2, (s32)rd32(c, (RW(21) + 272)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr16(c, (RW(2) + 50), (u16)RW(0));
SET64(2, (s32)rd32(c, (RW(21) + 272)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x22b604); SET32(5, RW(0) + 128); F_00153B70(c);
SET64(2, (s32)rd32(c, (RW(21) + 272)));
SET32(6, RW(0) + 1);
SET32(3, RW(0) + 4);
SET64(5, RD(0) + RD(0));
SET64(7, RD(6) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(9, RD(0) + RD(0));
wr16(c, (RW(2) + 48), (u16)RW(3));
SET64(2, (s32)rd32(c, (RW(21) + 272)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x22b638); SET32(4, RW(2) + 144); F_002B0FA0(c);
SET64(2, (s32)rd32(c, (RW(21) + 272)));
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET32(8, RW(0) + 3);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(16, RW(2) + 240);
SET64(31, 0x22b65c); SET64(4, RD(16) + RD(0)); F_002B1350(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x22b66c); SET64(6, RD(0) + RD(0)); F_002B1310(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x22b67c); SET32(6, RW(0) + 2); F_002B12E0(c);
SET64(2, (s32)rd32(c, (RW(21) + 272)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 152)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x22b694); SET32(4, RW(2) + 144); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(21) + 272)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 248)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x22b6ac); SET32(4, RW(2) + 240); rt_call(c, t); }
SET32(2, RW(0) + 1);
L_0022B6B0:;
SET64(31, rd64(c, (RW(29) + 144)));
rd128(c, (RW(29) + 128) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[23]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void F_0022B6E0(Ctx *c) { /* func_0022B6E0 */
ENTER(0x22b6e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x22b6fc); SET64(16, RD(6) + RD(0)); F_0022B420(c);
if (RD(2) != RD(0)) { wr32(c, (RW(17) + 912), RW(16)); goto L_0022B70C; }
SET64(2, RD(0) + RD(0)); goto L_0022B724;
L_0022B70C:;
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(16) + 898)));
SET64(31, 0x22b71c); wr16(c, (RW(17) + 898), (u16)RW(2)); F_0022B340(c);
wr32(c, (RW(17) + 924), RW(0));
SET32(2, RW(0) + 1);
L_0022B724:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022B740(Ctx *c) { /* func_0022B740 */
ENTER(0x22b740);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -928);
SET32(4, RW(4) + RW(25)); { F_001511E0(c); return; }
}

void F_0022B750(Ctx *c) { /* func_0022B750 */
ENTER(0x22b750);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -928);
SET32(4, RW(4) + RW(25)); { F_0022B2B0(c); return; }
}

void F_0022B760(Ctx *c) { /* func_0022B760 */
ENTER(0x22b760);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -928);
SET32(4, RW(4) + RW(25)); { F_0015A2B0(c); return; }
}

void F_0022B770(Ctx *c) { /* func_0022B770 */
ENTER(0x22b770);
SET32(4, RW(4) + -288); { F_0022B180(c); return; }
}

void F_0022B780(Ctx *c) { /* func_0022B780 */
ENTER(0x22b780);
SET32(4, RW(4) + -288); { F_0022B1A0(c); return; }
}

void F_0022B790(Ctx *c) { /* func_0022B790 */
ENTER(0x22b790);
SET32(4, RW(4) + -288); { F_0015A2B0(c); return; }
}

void F_0022B7A0(Ctx *c) { /* func_0022B7A0 */
ENTER(0x22b7a0);
SET32(4, RW(4) + -704); { F_0015A2B0(c); return; }
}

void F_0022B7B0(Ctx *c) { /* func_0022B7B0 */
ENTER(0x22b7b0);
SET32(2, RW(5) << 2);
SET32(2, RW(2) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(2, (s32)rd32(c, (RW(2) + 0))); return;
}

void F_0022B7D0(Ctx *c) { /* func_0022B7D0 */
ENTER(0x22b7d0);
SET32(2, RW(5) << 2);
SET32(2, RW(2) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(2, (s32)rd32(c, (RW(2) + 4))); return;
}

void F_0022B7F0(Ctx *c) { /* func_0022B7F0 */
ENTER(0x22b7f0);
SET32(2, RW(5) << 2);
SET32(2, RW(2) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET32(2, RW(2) + 8); return;
}

void F_0022B810(Ctx *c) { /* func_0022B810 */
ENTER(0x22b810);
SET32(2, RW(5) << 2);
SET64(10, RD(0) + RD(0));
SET32(2, RW(2) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(6, (s32)rd32(c, (RW(2) + 0)));
{ int t = RSD(6) <= 0; SET32(7, RW(2) + 8); if (t) goto L_0022B888; }
SET32(4, RW(0) + 5);
L_0022B830:;
SET64(2, (s32)rd32(c, (RW(7) + 4)));
SET64(8, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
{ int t = RSD(5) <= 0; SET32(9, RW(2) + 4); if (t) goto L_0022B878; }
L_0022B848:;
SET64(2, (s32)rd32(c, (RW(9) + 0)));
if (RD(2) != RD(4)) { SET64(3, (s32)rd32(c, (RW(9) + 4))); goto L_0022B85C; }
SET32(2, RW(0) + 1); goto L_0022B88C;
L_0022B85C:;
SET32(8, RW(8) + 1);
SET64(2, RSD(8) < RSD(5));
SET32(3, RW(3) + 2);
SET32(3, RW(3) << 2);
{ int t = RD(2) != RD(0); SET32(9, RW(9) + RW(3)); if (t) { POLL(); goto L_0022B848; } }
L_0022B878:;
SET32(10, RW(10) + 1);
SET64(2, RSD(10) < RSD(6));
{ int t = RD(2) != RD(0); SET32(7, RW(7) + 12); if (t) { POLL(); goto L_0022B830; } }
L_0022B888:;
SET64(2, RD(0) + RD(0));
L_0022B88C:;
 return;
}

void F_0022B8A0(Ctx *c) { /* func_0022B8A0 */
ENTER(0x22b8a0);
SET64(3, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(3) != RD(0);  if (t) goto L_0022B970; }
SET64(5, (s32)rd32(c, (RW(4) + 8)));
{ int t = RSD(5) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_0022B8E8; }
SET64(6, RD(4) + RD(0));
L_0022B8BC:;
SET64(3, (s32)rd32(c, (RW(6) + 16)));
{ int t = RD(3) == RD(0);  if (t) goto L_0022B8D0; }
SET32(3, RW(4) + RW(3));
wr32(c, (RW(6) + 16), RW(3));
L_0022B8D0:;
SET64(5, (s32)rd32(c, (RW(4) + 8)));
SET32(7, RW(7) + 1);
SET64(3, RSD(7) < RSD(5));
{ int t = RD(3) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_0022B8BC; } }
L_0022B8E8:;
{ int t = RSD(5) <= 0; SET64(14, RD(0) + RD(0)); if (t) goto L_0022B968; }
SET64(12, RD(4) + RD(0));
SET32(6, RW(0) + 1);
L_0022B8F8:;
SET64(9, (s32)rd32(c, (RW(12) + 16)));
SET64(13, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(9) + 0)));
{ int t = RSD(7) <= 0; SET32(8, RW(9) + 8); if (t) goto L_0022B950; }
SET64(11, RD(8) + RD(0));
SET64(10, RD(6) + RD(0));
L_0022B918:;
SET64(3, (s32)rd32(c, (RW(11) + 4)));
{ int t = RD(3) == RD(0);  if (t) goto L_0022B938; }
SET32(5, RW(9) + RW(3));
SET32(3, RW(10) << 2);
SET32(3, RW(8) + RW(3));
wr32(c, (RW(3) + 0), RW(5));
L_0022B938:;
SET32(13, RW(13) + 1);
SET64(3, RSD(13) < RSD(7));
SET32(11, RW(11) + 12);
{ int t = RD(3) != RD(0); SET32(10, RW(10) + 3); if (t) { POLL(); goto L_0022B918; } }
L_0022B950:;
SET64(3, (s32)rd32(c, (RW(4) + 8)));
SET32(14, RW(14) + 1);
SET64(3, RSD(14) < RSD(3));
{ int t = RD(3) != RD(0); SET32(12, RW(12) + 4); if (t) { POLL(); goto L_0022B8F8; } }
L_0022B968:;
SET32(3, RW(0) + 1);
wr32(c, (RW(4) + 12), RW(3));
L_0022B970:;
 return;
}

void F_0022B980(Ctx *c) { /* func_0022B980 */
ENTER(0x22b980);
 return;
}

void F_0022B990(Ctx *c) { /* func_0022B990 */
ENTER(0x22b990);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + -28104); return;
}

void F_0022B9A0(Ctx *c) { /* func_0022B9A0 */
ENTER(0x22b9a0);
SET32(29, RW(29) + -48);
SET64(3, RD(5) << 48);
wr64(c, (RW(29) + 32), RD(31));
SET64(3, RSD(3) >> 48);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(2, RW(0) + -2);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(3) == RD(2); SET64(16, RD(0) + (s64)1); if (t) goto L_0022BA18; }
SET64(2, (s32)rd32(c, (RW(4) + 20)));
SET64(17, (s32)rd32(c, (RW(2) + 88)));
SET64(2, (s16)rd16(c, (RW(17) + 20)));
L_0022B9D0:;
if (RD(3) != RD(2)) { SET64(17, (s32)rd32(c, (RW(17) + 8))); goto L_0022BA0C; }
SET64(25, (s32)rd32(c, (RW(17) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x22b9e8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0022BA18; }
if (RD(17) == RD(0)) { SET64(2, rd8(c, (RW(17) + 692))); goto L_0022BA00; }
SET32(17, RW(17) + -80);
SET64(2, rd8(c, (RW(17) + 692)));
L_0022BA00:;
SET64(2, RD(2) & 0x1);
SET64(16, RD(0) < RD(2)); goto L_0022BA18;
L_0022BA0C:;
if (RD(17) != RD(0)) { SET64(2, (s16)rd16(c, (RW(17) + 20))); { POLL(); goto L_0022B9D0; } }
L_0022BA18:;
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022BA30(Ctx *c) { /* func_0022BA30 */
ENTER(0x22ba30);
SET64(2, RD(0) + RD(0)); return;
}

void F_0022BA40(Ctx *c) { /* func_0022BA40 */
ENTER(0x22ba40);
SET32(29, RW(29) + -16);
SET64(6, RD(6) << 48);
SET64(6, RSD(6) >> 48);
SET32(3, RW(0) + -2);
{ int t = RD(6) != RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0022BA74; }
SET64(4, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x22ba6c);  rt_call(c, t); }
 goto L_0022BAB0;
L_0022BA74:;
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET64(4, (s32)rd32(c, (RW(3) + 88)));
SET64(3, (s16)rd16(c, (RW(4) + 20)));
L_0022BA80:;
if (RD(6) != RD(3)) { SET64(4, (s32)rd32(c, (RW(4) + 8))); goto L_0022BAA4; }
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 248)));
{ u32 t = RW(25); SET64(31, 0x22ba9c);  rt_call(c, t); }
 goto L_0022BAB0;
L_0022BAA4:;
if (RD(4) != RD(0)) { SET64(3, (s16)rd16(c, (RW(4) + 20))); { POLL(); goto L_0022BA80; } }
L_0022BAB0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0022BAC0(Ctx *c) { /* func_0022BAC0 */
ENTER(0x22bac0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET64(16, RD(5) << 48);
SET64(16, RSD(16) >> 48);
SET64(17, (s32)rd32(c, (RW(3) + 88)));
SET32(3, RW(0) + -2);
L_0022BAEC:;
{ int t = RD(16) != RD(3);  if (t) goto L_0022BB10; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x22bb08); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 8))); goto L_0022BB3C;
L_0022BB10:;
SET64(3, (s16)rd16(c, (RW(17) + 20)));
{ int t = RD(16) != RD(3);  if (t) goto L_0022BB38; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x22bb30); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48))); goto L_0022BB48;
L_0022BB38:;
SET64(17, (s32)rd32(c, (RW(17) + 8)));
L_0022BB3C:;
if (RD(17) != RD(0)) { SET32(3, RW(0) + -2); { POLL(); goto L_0022BAEC; } }
SET64(31, rd64(c, (RW(29) + 48)));
L_0022BB48:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0022BB60(Ctx *c) { /* func_0022BB60 */
ENTER(0x22bb60);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + (s64)1);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 20)));
SET64(16, RD(5) << 48);
SET64(16, RSD(16) >> 48);
SET64(17, (s32)rd32(c, (RW(2) + 88)));
SET32(2, RW(0) + -2);
L_0022BB8C:;
if (RD(16) != RD(2)) { SET64(2, (s16)rd16(c, (RW(17) + 20))); goto L_0022BBB8; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x22bba8);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(17, (s32)rd32(c, (RW(17) + 8))); goto L_0022BBE0; }
SET64(18, RD(0) + RD(0)); goto L_0022BBE8;
L_0022BBB8:;
{ int t = RD(16) != RD(2);  if (t) goto L_0022BBDC; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x22bbd4);  rt_call(c, t); }
SET64(18, RD(2) & 0xff); goto L_0022BBE8;
L_0022BBDC:;
SET64(17, (s32)rd32(c, (RW(17) + 8)));
L_0022BBE0:;
if (RD(17) != RD(0)) { SET32(2, RW(0) + -2); { POLL(); goto L_0022BB8C; } }
L_0022BBE8:;
SET64(2, RD(18) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0022BC10(Ctx *c) { /* func_0022BC10 */
ENTER(0x22bc10);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET64(16, RD(5) << 48);
SET64(16, RSD(16) >> 48);
SET64(17, (s32)rd32(c, (RW(3) + 88)));
SET32(3, RW(0) + -2);
L_0022BC3C:;
{ int t = RD(16) != RD(3);  if (t) goto L_0022BC60; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x22bc58); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 8))); goto L_0022BC8C;
L_0022BC60:;
SET64(3, (s16)rd16(c, (RW(17) + 20)));
{ int t = RD(16) != RD(3);  if (t) goto L_0022BC88; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x22bc80); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48))); goto L_0022BC98;
L_0022BC88:;
SET64(17, (s32)rd32(c, (RW(17) + 8)));
L_0022BC8C:;
if (RD(17) != RD(0)) { SET32(3, RW(0) + -2); { POLL(); goto L_0022BC3C; } }
SET64(31, rd64(c, (RW(29) + 48)));
L_0022BC98:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0022BCB0(Ctx *c) { /* func_0022BCB0 */
ENTER(0x22bcb0);
c->f[0].u = rd32(c, (RW(4) + 16)); return;
}

void F_0022BCC0(Ctx *c) { /* func_0022BCC0 */
ENTER(0x22bcc0);
c->f[0].u = rd32(c, (RW(4) + 20)); return;
}

void F_0022BCD0(Ctx *c) { /* func_0022BCD0 */
ENTER(0x22bcd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 20)));
SET64(16, (s32)rd32(c, (RW(2) + 88)));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_0022BCF0:;
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x22bd00); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 8)));
if (RD(16) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_0022BCF0; } }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022BD20(Ctx *c) { /* func_0022BD20 */
ENTER(0x22bd20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET64(16, RD(5) << 48);
SET64(16, RSD(16) >> 48);
SET64(17, (s32)rd32(c, (RW(3) + 88)));
SET32(3, RW(0) + -2);
L_0022BD44:;
{ int t = RD(16) != RD(3);  if (t) goto L_0022BD68; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x22bd60); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
 goto L_0022BD88;
L_0022BD68:;
SET64(3, (s16)rd16(c, (RW(17) + 20)));
{ int t = RD(16) != RD(3);  if (t) goto L_0022BD88; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x22bd88); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
L_0022BD88:;
SET64(17, (s32)rd32(c, (RW(17) + 8)));
if (RD(17) != RD(0)) { SET32(3, RW(0) + -2); { POLL(); goto L_0022BD44; } }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022BDB0(Ctx *c) { /* func_0022BDB0 */
ENTER(0x22bdb0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET64(16, RD(5) << 48);
SET64(16, RSD(16) >> 48);
SET64(17, (s32)rd32(c, (RW(3) + 88)));
SET32(3, RW(0) + -2);
L_0022BDD4:;
{ int t = RD(16) != RD(3);  if (t) goto L_0022BDF8; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x22bdf0); SET32(5, RW(0) + 1); rt_call(c, t); }
 goto L_0022BE18;
L_0022BDF8:;
SET64(3, (s16)rd16(c, (RW(17) + 20)));
{ int t = RD(16) != RD(3);  if (t) goto L_0022BE18; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x22be18); SET32(5, RW(0) + 1); rt_call(c, t); }
L_0022BE18:;
SET64(17, (s32)rd32(c, (RW(17) + 8)));
if (RD(17) != RD(0)) { SET32(3, RW(0) + -2); { POLL(); goto L_0022BDD4; } }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022BE40(Ctx *c) { /* func_0022BE40 */
ENTER(0x22be40);
wr32(c, (RW(4) + 8), RW(5)); return;
}

void F_0022BE50(Ctx *c) { /* func_0022BE50 */
ENTER(0x22be50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 20)));
{ int t = RD(2) == RD(0); SET64(16, RD(0) + (s64)1); if (t) goto L_0022BEB8; }
SET64(17, (s32)rd32(c, (RW(2) + 88)));
SET64(3, (s32)rd32(c, (RW(17) + 16)));
L_0022BE74:;
SET32(2, RW(0) + 2);
{ int t = RD(3) != RD(2);  if (t) goto L_0022BEA8; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 236)));
{ u32 t = RW(25); SET64(31, 0x22be94);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_0022BEA8; }
SET64(16, RD(0) + RD(0));
L_0022BEA8:;
SET64(17, (s32)rd32(c, (RW(17) + 8)));
if (RD(17) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 16))); { POLL(); goto L_0022BE74; } }
L_0022BEB8:;
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022BED0(Ctx *c) { /* func_0022BED0 */
ENTER(0x22bed0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET64(16, (s32)rd32(c, (RW(3) + 88)));
SET64(4, (s32)rd32(c, (RW(16) + 16)));
L_0022BEE8:;
SET32(3, RW(0) + 2);
{ int t = RD(4) != RD(3);  if (t) goto L_0022BF08; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x22bf08);  rt_call(c, t); }
L_0022BF08:;
SET64(16, (s32)rd32(c, (RW(16) + 8)));
if (RD(16) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 16))); { POLL(); goto L_0022BEE8; } }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0022BF30(Ctx *c) { /* func_0022BF30 */
ENTER(0x22bf30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 20)));
SET64(16, (s32)rd32(c, (RW(2) + 88)));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_0022BF48:;
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x22bf58);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 16)));
SET32(3, RW(0) + 2);
{ int t = RD(4) != RD(3);  if (t) goto L_0022BF80; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x22bf7c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_0022BF80:;
SET64(16, (s32)rd32(c, (RW(16) + 8)));
if (RD(16) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_0022BF48; } }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0022BFA0(Ctx *c) { /* func_0022BFA0 */
ENTER(0x22bfa0);
SET32(29, RW(29) + -64);
SET32(3, RW(0) + 4);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s32)rd32(c, (RW(4) + 0)));
SET64(16, RD(4) + RD(0));
SET64(4, rd16(c, (RW(5) + 0)));
if (RD(4) == RD(3)) { SET64(4, RD(16) + RD(0)); goto L_0022C168; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 20))); goto L_0022C0FC; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(2, (s32)rd32(c, (RW(16) + 20))); goto L_0022C068; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(2, (s32)rd32(c, (RW(16) + 20))); goto L_0022C000; }
if (RD(4) == RD(0)) { wr16(c, (RW(5) + 0), (u16)RW(3)); goto L_0022C178; }
SET64(31, rd64(c, (RW(29) + 48))); goto L_0022C17C;
L_0022C000:;
SET64(17, (s32)rd32(c, (RW(2) + 88)));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
L_0022C008:;
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x22c018);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 240)));
{ u32 t = RW(25); SET64(31, 0x22c02c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0022C040; }
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 34), (u8)RW(3));
L_0022C040:;
SET64(17, (s32)rd32(c, (RW(17) + 8)));
if (RD(17) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_0022C008; } }
SET64(3, rd8(c, (RW(16) + 34)));
{ int t = RD(3) == RD(0);  if (t) goto L_0022C178; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(0) + 2);
wr16(c, (RW(2) + 0), (u16)RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
L_0022C068:;
SET64(17, (s32)rd32(c, (RW(2) + 88)));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
L_0022C070:;
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x22c080);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 16)));
SET32(3, RW(0) + 2);
{ int t = RD(4) != RD(3);  if (t) goto L_0022C0A8; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x22c0a4); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
L_0022C0A8:;
SET64(17, (s32)rd32(c, (RW(17) + 8)));
if (RD(17) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_0022C070; } }
SET64(3, (s32)rd32(c, (RW(16) + 20)));
SET64(17, (s32)rd32(c, (RW(3) + 88)));
SET64(4, (s32)rd32(c, (RW(17) + 16)));
L_0022C0C0:;
SET32(3, RW(0) + 2);
{ int t = RD(4) != RD(3);  if (t) goto L_0022C0E0; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x22c0e0);  rt_call(c, t); }
L_0022C0E0:;
SET64(17, (s32)rd32(c, (RW(17) + 8)));
if (RD(17) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 16))); { POLL(); goto L_0022C0C0; } }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET32(4, RW(0) + 3);
wr16(c, (RW(3) + 0), (u16)RW(4)); goto L_0022C178;
L_0022C0FC:;
{ int t = RD(3) == RD(0); SET64(17, RD(0) + (s64)1); if (t) goto L_0022C150; }
SET64(18, (s32)rd32(c, (RW(3) + 88)));
SET64(4, (s32)rd32(c, (RW(18) + 16)));
L_0022C10C:;
SET32(3, RW(0) + 2);
{ int t = RD(4) != RD(3);  if (t) goto L_0022C140; }
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 236)));
{ u32 t = RW(25); SET64(31, 0x22c12c);  rt_call(c, t); }
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_0022C140; }
SET64(17, RD(0) + RD(0));
L_0022C140:;
SET64(18, (s32)rd32(c, (RW(18) + 8)));
if (RD(18) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 16))); { POLL(); goto L_0022C10C; } }
L_0022C150:;
{ int t = RD(17) == RD(0);  if (t) goto L_0022C178; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(0) + 4);
wr16(c, (RW(2) + 0), (u16)RW(3));
SET64(4, RD(16) + RD(0));
L_0022C168:;
SET64(31, 0x22c170);  F_0022C410(c);
SET64(31, 0x22c178); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_00139AB0(c);
L_0022C178:;
SET64(31, rd64(c, (RW(29) + 48)));
L_0022C17C:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0022C190(Ctx *c) { /* func_0022C190 */
ENTER(0x22c190);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(4, RW(0) + 672);
SET64(31, 0x22c1bc); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0022C1D0; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x22c1d0); SET32(5, RW(0) + 1); F_0022EDE0(c);
L_0022C1D0:;
wr32(c, (RW(20) + 20), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x22c1e4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 20)));
SET32(4, RW(0) + -2);
wr16(c, (RW(3) + 100), (u16)RW(4));
SET64(3, (s32)rd32(c, (RW(19) + 8)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_0022C3D0; }
SET64(4, RD(19) + RD(0));
L_0022C200:;
SET64(31, 0x22c208); SET64(5, RD(16) + RD(0)); F_0022B810(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0022C248; }
SET64(31, 0x22c218); SET32(4, RW(0) + 2416); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0022C230; }
SET64(6, (s32)rd32(c, (RW(20) + 36)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x22c230); SET32(5, RW(0) + 1); F_0022E3B0(c);
L_0022C230:;
{ int t = RD(17) == RD(0);  if (t) goto L_0022C240; }
SET32(17, RW(17) + 80);
L_0022C240:;
 goto L_0022C278;
L_0022C248:;
SET64(31, 0x22c250); SET32(4, RW(0) + 672); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0022C268; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x22c264); SET32(5, RW(0) + 1); F_0022EDE0(c);
L_0022C268:;
{ int t = RD(17) == RD(0);  if (t) goto L_0022C278; }
SET32(17, RW(17) + 80);
L_0022C278:;
SET64(3, (s32)rd32(c, (RW(20) + 20)));
SET64(2, (s32)rd32(c, (RW(3) + 88)));
{ int t = RD(2) != RD(0);  if (t) goto L_0022C2A0; }
{ int t = RD(3) == RD(0);  if (t) goto L_0022C298; }
SET32(3, RW(3) + 80);
L_0022C298:;
SET64(18, RD(3) + RD(0));
L_0022C2A0:;
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(17) + 4), RW(18));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x22c2bc); SET64(18, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x22c2d0);  rt_call(c, t); }
SET64(4, RD(19) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x22c2e0); wr16(c, (RW(17) + 20), (u16)RW(16)); F_0022B7D0(c);
wr16(c, (RW(17) + 22), (u16)RW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x22c2f0); SET64(5, RD(16) + RD(0)); F_0022B7D0(c);
SET64(3, RD(2) << 48);
SET64(3, RSD(3) >> 48);
SET32(2, RW(0) + -1);
{ int t = RD(3) != RD(2);  if (t) goto L_0022C320; }
SET64(4, (s32)rd32(c, (RW(20) + 20)));
{ int t = RD(4) == RD(0);  if (t) goto L_0022C318; }
SET32(4, RW(4) + 80);
L_0022C318:;
 goto L_0022C340;
L_0022C320:;
SET64(2, (s32)rd32(c, (RW(20) + 20)));
SET64(4, (s32)rd32(c, (RW(2) + 88)));
L_0022C328:;
SET64(2, (s16)rd16(c, (RW(4) + 20)));
{ int t = RD(3) == RD(2);  if (t) goto L_0022C340; }
SET64(4, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(4) != RD(0);  if (t) { POLL(); goto L_0022C328; } }
L_0022C340:;
wr32(c, (RW(17) + 12), RW(4));
SET64(4, RD(19) + RD(0));
SET64(31, 0x22c350); SET64(5, RD(16) + RD(0)); F_0022B7B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x22c364); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET64(4, RD(19) + RD(0));
SET64(31, 0x22c370); SET64(5, RD(16) + RD(0)); F_0022B7F0(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x22c384); SET64(5, RD(2) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x22c398); SET64(5, (s32)rd32(c, (RW(20) + 8))); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x22c3ac);  rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(20) + 32)));
SET32(16, RW(16) + 1);
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 32), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(19) + 8)));
SET64(3, RSD(16) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, RD(19) + RD(0)); { POLL(); goto L_0022C200; } }
L_0022C3D0:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_0022C3F0(Ctx *c) { /* func_0022C3F0 */
ENTER(0x22c3f0);
wr16(c, (RW(4) + 32), (u16)RW(0));
wr8(c, (RW(4) + 34), (u8)RW(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
wr16(c, (RW(3) + 0), (u16)RW(0));
wr32(c, (RW(4) + 36), RW(5)); return;
}

void F_0022C410(Ctx *c) { /* func_0022C410 */
ENTER(0x22c410);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(18, (s32)rd32(c, (RW(4) + 20)));
{ int t = RD(18) == RD(0); SET64(19, RD(4) + RD(0)); if (t) goto L_0022C438; }
SET32(18, RW(18) + 80);
L_0022C438:;
SET64(2, (s32)rd32(c, (RW(18) + 8)));
{ int t = RD(2) == RD(0);  if (t) goto L_0022C460; }
L_0022C444:;
SET64(18, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0022C444; } }
L_0022C460:;
SET64(2, (s16)rd16(c, (RW(19) + 32)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_0022C520; }
L_0022C46C:;
SET64(3, (s32)rd32(c, (RW(18) + 16)));
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2); SET64(16, (s32)rd32(c, (RW(18) + 4))); if (t) goto L_0022C4C8; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_0022C490; }
 goto L_0022C508;
L_0022C490:;
{ int t = RD(18) == RD(0);  if (t) goto L_0022C4A0; }
SET32(18, RW(18) + -80);
L_0022C4A0:;
SET64(25, (s32)rd32(c, (RW(18) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 208)));
{ u32 t = RW(25); SET64(31, 0x22c4b0); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(31, 0x22c4bc); SET32(5, RW(0) + 1); F_0022EC80(c);
 goto L_0022C508;
L_0022C4C8:;
{ int t = RD(18) == RD(0);  if (t) goto L_0022C4D8; }
SET32(18, RW(18) + -80);
L_0022C4D8:;
SET64(25, (s32)rd32(c, (RW(18) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 208)));
{ u32 t = RW(25); SET64(31, 0x22c4e8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RD(18) == RD(0);  if (t) goto L_0022C508; }
SET64(25, (s32)rd32(c, (RW(18) + 624)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 252)));
{ u32 t = RW(25); SET64(31, 0x22c504); SET32(5, RW(0) + 1); rt_call(c, t); }
L_0022C508:;
SET64(2, (s16)rd16(c, (RW(19) + 32)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET64(18, RD(16) + RD(0)); if (t) { POLL(); goto L_0022C46C; } }
L_0022C520:;
SET64(4, (s32)rd32(c, (RW(19) + 20)));
SET64(31, 0x22c52c); SET32(5, RW(0) + 1); F_0022EC80(c);
wr32(c, (RW(19) + 20), RW(0));
wr32(c, (RW(19) + 8), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0022C550(Ctx *c) { /* func_0022C550 */
ENTER(0x22c550);
 return;
}

void F_0022C560(Ctx *c) { /* func_0022C560 */
ENTER(0x22c560);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0022C5EC; }
SET64(2, (s64)(s32)0x4e0000);
SET64(6, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -28272);
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 40), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET32(6, RW(6) + -28248);
SET32(5, RW(5) + -28240);
SET32(3, RW(3) + -28228);
SET32(4, RW(17) + 44);
wr32(c, (RW(2) + 56), RW(6));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(2) + 20), RW(5));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(2) + 36), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET32(2, RW(4) - RW(3));
{ int t = RD(16) == RD(0); wr32(c, (RW(3) + 60), RW(2)); if (t) goto L_0022C5D4; }
SET64(31, 0x22c5d4); SET64(5, RD(0) + RD(0)); F_00139F30(c);
L_0022C5D4:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0022C5F0; }
SET64(31, 0x22c5ec); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0022C5EC:;
SET64(2, RD(17) + RD(0));
L_0022C5F0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022C610(Ctx *c) { /* func_0022C610 */
ENTER(0x22c610);
SET32(29, RW(29) + -32);
SET64(2, RD(5) << 48);
wr64(c, (RW(29) + 16), RD(31));
SET64(2, RSD(2) >> 48);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0022C63C; }
SET32(4, RW(16) + 44);
SET32(5, RW(0) + 1536);
SET64(31, 0x22c63c); wr32(c, (RW(16) + 0), RW(4)); F_0013A040(c);
L_0022C63C:;
SET64(2, (s64)(s32)0x4e0000);
SET64(7, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -28272);
SET64(6, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 40), RW(2));
SET64(5, (s64)(s32)0x4e0000);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(7, RW(7) + -28248);
SET32(6, RW(6) + -28240);
SET32(5, RW(5) + -28228);
SET32(3, RW(16) + 44);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(4) + 56), RW(7));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(4) + 20), RW(6));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(4) + 36), RW(5));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 60), RW(3));
wr32(c, (RW(16) + 8), RW(0));
wr8(c, (RW(16) + 12), (u8)RW(0));
wr32(c, (RW(16) + 16), RW(0));
wr32(c, (RW(16) + 20), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr32(c, (RW(16) + 36), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0022C6C0(Ctx *c) { /* func_0022C6C0 */
ENTER(0x22c6c0);
 return;
}

void F_0022C6D0(Ctx *c) { /* func_0022C6D0 */
ENTER(0x22c6d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 2156)));
SET64(31, 0x22c6e8); SET64(16, RD(0) + RD(0)); F_001419B0(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET64(16, RD(0) + (s64)1); goto L_0022C708; }
{ int t = RD(2) == RD(0);  if (t) goto L_0022C704; }
SET64(2, RD(16) + RD(0)); goto L_0022C70C;
L_0022C704:;
SET64(16, RD(0) + (s64)1);
L_0022C708:;
SET64(2, RD(16) + RD(0));
L_0022C70C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0022C720(Ctx *c) { /* func_0022C720 */
ENTER(0x22c720);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x22c730); SET32(4, RW(4) + 2144); F_0014BBB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0022C740(Ctx *c) { /* func_0022C740 */
ENTER(0x22c740);
SET32(29, RW(29) + -16);
SET64(3, RD(5) << 48);
SET64(3, RSD(3) >> 48);
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0022C764; }
SET64(31, 0x22c75c); SET32(4, RW(4) + 2144); F_0014E900(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_0022C7A4;
L_0022C764:;
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET32(2, RW(0) + 2); goto L_0022C780; }
SET64(31, 0x22c778); SET32(4, RW(4) + 2144); F_0014E930(c);
 goto L_0022C7A0;
L_0022C780:;
if (RD(3) != RD(2)) { SET32(4, RW(4) + 2144); goto L_0022C798; }
SET64(31, 0x22c790); SET32(4, RW(4) + 2144); F_0014E8D0(c);
 goto L_0022C7A0;
L_0022C798:;
SET64(31, 0x22c7a0);  F_0014E8A0(c);
L_0022C7A0:;
SET64(31, rd64(c, (RW(29) + 0)));
L_0022C7A4:;
SET32(29, RW(29) + 16); return;
}

void F_0022C7B0(Ctx *c) { /* func_0022C7B0 */
ENTER(0x22c7b0);
SET64(4, (s32)rd32(c, (RW(4) + 2156)));
SET64(3, RD(0) < RD(5));
SET64(3, RD(3) ^ 0x1);
wr8(c, (RW(4) + 8), (u8)RW(3)); return;
}

void F_0022C7D0(Ctx *c) { /* func_0022C7D0 */
ENTER(0x22c7d0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(17) + RD(0));
{ int t = RD(17) == RD(0); wr32(c, (RW(29) + 0), c->f[20].u); if (t) goto L_0022C808; }
SET32(16, RW(16) + 2144);
L_0022C808:;
SET64(2, rd8(c, (RW(17) + 692)));
SET64(2, RD(2) & 0x1);
SET64(2, RD(0) < RD(2));
if (RD(2) != RD(0)) { SET32(6, RW(0) + 1); goto L_0022CB8C; }
SET64(6, (s32)rd32(c, (RW(6) + 4)));
SET32(4, RW(17) + 628);
SET64(5, RD(20) + RD(0));
SET32(7, RW(0) + -1);
SET64(31, 0x22c834); SET64(8, RD(0) + RD(0)); F_0014F0A0(c);
SET32(4, RW(17) + 2144);
SET64(31, 0x22c840); SET32(5, RW(0) + 4); F_0014C3D0(c);
{ int t = RD(17) == RD(0); SET64(2, RD(17) + RD(0)); if (t) goto L_0022C84C; }
SET32(2, RW(17) + 628);
L_0022C84C:;
wr32(c, (RW(16) + 188), RW(2));
SET64(2, rd16(c, (RW(16) + 168)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_0022C890; }
SET64(2, RD(18) & 0xffff);
L_0022C860:;
SET64(3, (s32)rd32(c, (RW(16) + 164)));
SET32(4, RW(2) << 4);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x22c878); SET32(4, RW(3) + RW(4)); F_00162CD0(c);
SET64(2, rd16(c, (RW(16) + 168)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, RD(18) & 0xffff); { POLL(); goto L_0022C860; } }
L_0022C890:;
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(4, RD(17) + RD(0));
SET64(31, 0x22c8a4); SET64(5, RD(0) + RD(0)); F_0022D0A0(c);
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(17) + RD(0));
c->f[12].u = RW(2);
SET64(31, 0x22c8b8); SET32(5, RW(0) + 1); F_0022D0A0(c);
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(17) + RD(0));
c->f[12].u = RW(2);
SET64(31, 0x22c8cc); SET32(5, RW(0) + 2); F_0022D0A0(c);
SET64(19, RD(0) + RD(0));
SET64(18, RD(17) + RD(0));
L_0022C8D4:;
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x22c8e4); SET32(4, RW(18) + 144); F_0022D040(c);
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < (s64)4);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 80); if (t) { POLL(); goto L_0022C8D4; } }
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x22c904); SET32(4, RW(17) + 464); F_0022D040(c);
c->f[12].u = RW(0);
SET64(31, 0x22c910); SET64(4, RD(17) + RD(0)); F_0022CFF0(c);
c->f[12].u = RW(0);
SET64(31, 0x22c91c); SET64(4, RD(17) + RD(0)); F_0022CFA0(c);
SET64(2, (s64)(s32)0x40000000);
c->f[12].u = RW(2);
SET64(31, 0x22c92c); SET64(4, RD(17) + RD(0)); F_0022CF50(c);
SET64(2, (s64)(s32)0x40000000);
c->f[12].u = RW(2);
SET64(31, 0x22c93c); SET64(4, RD(17) + RD(0)); F_0022CF00(c);
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x22c950); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x22c964); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(5, RD(20) + RD(0));
SET64(31, 0x22c970); SET64(4, RD(17) + RD(0)); F_0022D570(c);
{ int t = RD(17) == RD(0); SET64(18, RD(17) + RD(0)); if (t) goto L_0022C97C; }
SET32(18, RW(17) + 2144);
L_0022C97C:;
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22c98c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22c9a0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(20) * F(0));
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22c9b8); c->f[21].u = c->f[0].u ^ 0x80000000u; rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22c9cc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(20) * F(0));
SET64(2, (s32)rd32(c, (RW(18) + 160)));
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(2) + 0), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
wr32(c, (RW(2) + 4), c->f[21].u);
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22c9f4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22ca08); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[1].u = RW(2);
SET64(4, RD(17) + RD(0));
c->f[0].f = fpu(F(1) - F(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22ca28); c->f[21].f = fpu(F(20) * F(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22ca3c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(20) * F(0));
SET64(2, (s32)rd32(c, (RW(18) + 160)));
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(2) + 8), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
wr32(c, (RW(2) + 12), c->f[21].u);
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22ca64); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22ca78); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(20) * F(0));
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22ca90); c->f[21].u = c->f[0].u ^ 0x80000000u; rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22caa4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
c->f[1].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(20) * F(0));
wr32(c, (RW(2) + 16), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
wr32(c, (RW(2) + 20), c->f[21].u);
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22cad8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22caec); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[1].u = RW(2);
SET64(4, RD(17) + RD(0));
c->f[0].f = fpu(F(1) - F(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22cb0c); c->f[21].f = fpu(F(20) * F(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22cb20); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
c->f[1].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(20) * F(0));
wr32(c, (RW(2) + 24), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
wr32(c, (RW(2) + 28), c->f[21].u);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x22cb54); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(5, (s32)rd32(c, (RW(17) + 2340)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x22cb68); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x22cb7c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, rd8(c, (RW(17) + 692)));
SET64(3, RD(3) | 0x1);
wr8(c, (RW(17) + 692), (u8)RW(3)); goto L_0022CDEC;
L_0022CB8C:;
SET32(4, RW(17) + 628);
SET64(5, RD(20) + RD(0));
SET64(31, 0x22cb9c); SET64(7, RD(6) + RD(0)); F_0014EFD0(c);
c->f[12].u = RW(0);
SET64(31, 0x22cba8); SET64(4, RD(17) + RD(0)); F_0022CFF0(c);
c->f[12].u = RW(0);
SET64(31, 0x22cbb4); SET64(4, RD(17) + RD(0)); F_0022CFA0(c);
SET64(2, (s64)(s32)0x40000000);
c->f[12].u = RW(2);
SET64(31, 0x22cbc4); SET64(4, RD(17) + RD(0)); F_0022CF50(c);
SET64(2, (s64)(s32)0x40000000);
c->f[12].u = RW(2);
SET64(31, 0x22cbd4); SET64(4, RD(17) + RD(0)); F_0022CF00(c);
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x22cbe8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x22cbfc); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(5, RD(20) + RD(0));
SET64(31, 0x22cc08); SET64(4, RD(17) + RD(0)); F_0022D570(c);
{ int t = RD(17) == RD(0); SET64(18, RD(17) + RD(0)); if (t) goto L_0022CC14; }
SET32(18, RW(17) + 2144);
L_0022CC14:;
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22cc24); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22cc38); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(20) * F(0));
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22cc50); c->f[21].u = c->f[0].u ^ 0x80000000u; rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22cc64); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(20) * F(0));
SET64(2, (s32)rd32(c, (RW(18) + 160)));
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(2) + 0), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
wr32(c, (RW(2) + 4), c->f[21].u);
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22cc8c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22cca0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[1].u = RW(2);
SET64(4, RD(17) + RD(0));
c->f[0].f = fpu(F(1) - F(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22ccc0); c->f[21].f = fpu(F(20) * F(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22ccd4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(20) * F(0));
SET64(2, (s32)rd32(c, (RW(18) + 160)));
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(2) + 8), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
wr32(c, (RW(2) + 12), c->f[21].u);
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22ccfc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22cd10); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(20) * F(0));
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22cd28); c->f[21].u = c->f[0].u ^ 0x80000000u; rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22cd3c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
c->f[1].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(20) * F(0));
wr32(c, (RW(2) + 16), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
wr32(c, (RW(2) + 20), c->f[21].u);
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22cd70); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22cd84); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[1].u = RW(2);
SET64(4, RD(17) + RD(0));
c->f[0].f = fpu(F(1) - F(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22cda4); c->f[21].f = fpu(F(20) * F(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22cdb8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
c->f[1].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(20) * F(0));
wr32(c, (RW(2) + 24), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
wr32(c, (RW(2) + 28), c->f[21].u);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x22cdec); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
L_0022CDEC:;
SET64(31, rd64(c, (RW(29) + 96)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_0022CE20(Ctx *c) { /* func_0022CE20 */
ENTER(0x22ce20);
c->f[0].u = rd32(c, (RW(4) + 120)); return;
}

void F_0022CE30(Ctx *c) { /* func_0022CE30 */
ENTER(0x22ce30);
c->f[0].u = rd32(c, (RW(4) + 2000)); return;
}

void F_0022CE40(Ctx *c) { /* func_0022CE40 */
ENTER(0x22ce40);
c->f[0].u = rd32(c, (RW(4) + 124)); return;
}

void F_0022CE50(Ctx *c) { /* func_0022CE50 */
ENTER(0x22ce50);
c->f[0].u = rd32(c, (RW(4) + 2080)); return;
}

void F_0022CE60(Ctx *c) { /* func_0022CE60 */
ENTER(0x22ce60);
if (RD(5) == RD(0)) { SET64(3, rd8(c, (RW(4) + 692))); goto L_0022CE98; }
SET64(3, rd8(c, (RW(4) + 692)));
SET64(3, RD(3) & 0x4);
SET64(3, RD(0) < RD(3));
if (RD(3) == RD(0)) { SET64(3, rd8(c, (RW(4) + 692))); goto L_0022CE8C; }
SET64(3, rd8(c, (RW(4) + 692)));
SET64(3, RD(3) & 0xfb);
wr8(c, (RW(4) + 692), (u8)RW(3)); goto L_0022CEA0;
L_0022CE8C:;
SET64(3, RD(3) | 0x4);
wr8(c, (RW(4) + 692), (u8)RW(3)); goto L_0022CEA0;
L_0022CE98:;
SET64(3, RD(3) & 0xfb);
wr8(c, (RW(4) + 692), (u8)RW(3));
L_0022CEA0:;
 return;
}

void F_0022CEB0(Ctx *c) { /* func_0022CEB0 */
ENTER(0x22ceb0);
if (RD(5) == RD(0)) { SET64(3, rd8(c, (RW(4) + 692))); goto L_0022CEE8; }
SET64(3, rd8(c, (RW(4) + 692)));
SET64(3, RD(3) & 0x2);
SET64(3, RD(0) < RD(3));
if (RD(3) == RD(0)) { SET64(3, rd8(c, (RW(4) + 692))); goto L_0022CEDC; }
SET64(3, rd8(c, (RW(4) + 692)));
SET64(3, RD(3) & 0xfd);
wr8(c, (RW(4) + 692), (u8)RW(3)); goto L_0022CEF0;
L_0022CEDC:;
SET64(3, RD(3) | 0x2);
wr8(c, (RW(4) + 692), (u8)RW(3)); goto L_0022CEF0;
L_0022CEE8:;
SET64(3, RD(3) & 0xfd);
wr8(c, (RW(4) + 692), (u8)RW(3));
L_0022CEF0:;
 return;
}

void F_0022CF00(Ctx *c) { /* func_0022CF00 */
ENTER(0x22cf00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
c->f[13].u = RW(0);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[20].u = c->f[12].u;
SET64(31, 0x22cf24); SET32(4, RW(16) + 1904); F_00226830(c);
SET32(4, RW(16) + 1904);
c->f[13].u = RW(0);
SET64(31, 0x22cf34); c->f[12].u = c->f[20].u; F_002267F0(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022CF50(Ctx *c) { /* func_0022CF50 */
ENTER(0x22cf50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
c->f[13].u = RW(0);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[20].u = c->f[12].u;
SET64(31, 0x22cf74); SET32(4, RW(16) + 1824); F_00226830(c);
SET32(4, RW(16) + 1824);
c->f[13].u = RW(0);
SET64(31, 0x22cf84); c->f[12].u = c->f[20].u; F_002267F0(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022CFA0(Ctx *c) { /* func_0022CFA0 */
ENTER(0x22cfa0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
c->f[13].u = RW(0);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[20].u = c->f[12].u;
SET64(31, 0x22cfc4); SET32(4, RW(16) + 1744); F_00226830(c);
SET32(4, RW(16) + 1744);
c->f[13].u = RW(0);
SET64(31, 0x22cfd4); c->f[12].u = c->f[20].u; F_002267F0(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022CFF0(Ctx *c) { /* func_0022CFF0 */
ENTER(0x22cff0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
c->f[13].u = RW(0);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[20].u = c->f[12].u;
SET64(31, 0x22d014); SET32(4, RW(16) + 1664); F_00226830(c);
SET32(4, RW(16) + 1664);
c->f[13].u = RW(0);
SET64(31, 0x22d024); c->f[12].u = c->f[20].u; F_002267F0(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022D040(Ctx *c) { /* func_0022D040 */
ENTER(0x22d040);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
c->f[13].u = RW(0);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 16), c->f[12].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x22d060); wr32(c, (RW(4) + 20), RW(0)); F_002267C0(c);
c->f[12].u = RW(0);
SET64(31, 0x22d06c); SET64(4, RD(16) + RD(0)); F_002267B0(c);
c->f[12].u = RW(0);
SET64(31, 0x22d078); SET64(4, RD(16) + RD(0)); F_002267A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x22d084); SET32(5, RW(0) + 1); F_00226750(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0022D0A0(Ctx *c) { /* func_0022D0A0 */
ENTER(0x22d0a0);
SET32(29, RW(29) + -64);
SET64(3, RD(5) << 48);
wr64(c, (RW(29) + 48), RD(31));
SET64(3, RSD(3) >> 48);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET32(2, RW(3) << 2);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(2, RW(2) + RW(3));
wr32(c, (RW(29) + 0), c->f[20].u);
SET32(2, RW(2) << 6);
c->f[20].u = c->f[12].u;
SET64(17, RD(0) + RD(0));
SET32(16, RW(4) + RW(2));
SET64(3, RD(17) << 48);
L_0022D0D8:;
SET64(3, RSD(3) >> 48);
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 4);
SET32(2, RW(16) + RW(2));
c->f[12].u = c->f[20].u;
SET64(31, 0x22d0f8); SET32(4, RW(2) + 704); F_0022D040(c);
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)4);
if (RD(3) != RD(0)) { SET64(3, RD(17) << 48); { POLL(); goto L_0022D0D8; } }
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0022D120(Ctx *c) { /* func_0022D120 */
ENTER(0x22d120);
c->f[3].u = rd32(c, (RW(5) + 1920));
c->f[2].u = rd32(c, (RW(5) + 1840));
c->f[1].u = rd32(c, (RW(5) + 1760));
c->f[0].u = rd32(c, (RW(5) + 1680));
wr32(c, (RW(4) + 0), c->f[0].u);
wr32(c, (RW(4) + 4), c->f[1].u);
wr32(c, (RW(4) + 8), c->f[2].u);
wr32(c, (RW(4) + 12), c->f[3].u); return;
}

void F_0022D150(Ctx *c) { /* func_0022D150 */
ENTER(0x22d150);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(18) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(5) + RD(0));
{ int t = RD(18) == RD(0); wr32(c, (RW(29) + 0), c->f[20].u); if (t) goto L_0022D180; }
SET32(17, RW(17) + 2144);
L_0022D180:;
c->f[12].u = rd32(c, (RW(16) + 0));
SET64(31, 0x22d18c); SET32(4, RW(18) + 1664); F_0022D040(c);
c->f[12].u = rd32(c, (RW(16) + 4));
SET64(31, 0x22d198); SET32(4, RW(18) + 1744); F_0022D040(c);
c->f[1].u = rd32(c, (RW(16) + 8));
SET64(4, RD(18) + RD(0));
c->f[0].u = rd32(c, (RW(16) + 0));
SET64(31, 0x22d1ac); c->f[12].f = fpu(F(1) - F(0)); F_0022CF50(c);
SET64(31, 0x22d1b4); SET64(4, RD(18) + RD(0)); F_0022D560(c);
c->f[1].u = rd32(c, (RW(16) + 12));
SET64(4, RD(18) + RD(0));
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(31, 0x22d1c8); c->f[12].f = fpu(F(1) - F(0)); F_0022CF00(c);
SET64(31, 0x22d1d0); SET64(4, RD(18) + RD(0)); F_0022D550(c);
c->f[1].u = rd32(c, (RW(16) + 8));
SET64(25, (s32)rd32(c, (RW(18) + 624)));
c->f[0].u = rd32(c, (RW(16) + 0));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x22d1ec); c->f[12].f = fpu(F(1) - F(0)); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(16) + 12));
SET64(25, (s32)rd32(c, (RW(18) + 624)));
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x22d208); c->f[12].f = fpu(F(1) - F(0)); rt_call(c, t); }
{ int t = RD(18) == RD(0); SET64(16, RD(18) + RD(0)); if (t) goto L_0022D214; }
SET32(16, RW(18) + 2144);
L_0022D214:;
SET64(25, (s32)rd32(c, (RW(18) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22d224); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22d238); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(20) * F(0));
SET64(25, (s32)rd32(c, (RW(18) + 624)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22d250); c->f[21].u = c->f[0].u ^ 0x80000000u; rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22d264); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(20) * F(0));
SET64(2, (s32)rd32(c, (RW(16) + 160)));
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(2) + 0), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 4), c->f[21].u);
SET64(25, (s32)rd32(c, (RW(18) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22d28c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22d2a0); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET64(25, (s32)rd32(c, (RW(18) + 624)));
c->f[1].u = RW(2);
SET64(4, RD(18) + RD(0));
c->f[0].f = fpu(F(1) - F(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22d2c0); c->f[21].f = fpu(F(20) * F(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22d2d4); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(20) * F(0));
SET64(2, (s32)rd32(c, (RW(16) + 160)));
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(2) + 8), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 12), c->f[21].u);
SET64(25, (s32)rd32(c, (RW(18) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22d2fc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22d310); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(20) * F(0));
SET64(25, (s32)rd32(c, (RW(18) + 624)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22d328); c->f[21].u = c->f[0].u ^ 0x80000000u; rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22d33c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
c->f[1].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(20) * F(0));
wr32(c, (RW(2) + 16), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 20), c->f[21].u);
SET64(25, (s32)rd32(c, (RW(18) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22d370); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22d384); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET64(25, (s32)rd32(c, (RW(18) + 624)));
c->f[1].u = RW(2);
SET64(4, RD(18) + RD(0));
c->f[0].f = fpu(F(1) - F(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22d3a4); c->f[21].f = fpu(F(20) * F(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 624)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22d3b8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
c->f[1].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(20) * F(0));
wr32(c, (RW(2) + 24), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 28), c->f[21].u);
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x22d3ec); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0022D410(Ctx *c) { /* func_0022D410 */
ENTER(0x22d410);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x22d428); SET32(4, RW(16) + 2064); F_0022D450(c);
SET64(25, (s32)rd32(c, (RW(16) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22d438); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0022D450(Ctx *c) { /* func_0022D450 */
ENTER(0x22d450);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
c->f[13].u = RW(0);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 16), c->f[12].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x22d470); wr32(c, (RW(4) + 20), RW(0)); F_002267C0(c);
c->f[12].u = RW(0);
SET64(31, 0x22d47c); SET64(4, RD(16) + RD(0)); F_002267B0(c);
c->f[12].u = RW(0);
SET64(31, 0x22d488); SET64(4, RD(16) + RD(0)); F_002267A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x22d494); SET32(5, RW(0) + 1); F_00226750(c);
c->f[0].u = rd32(c, (RW(16) + 16));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0022D4B0(Ctx *c) { /* func_0022D4B0 */
ENTER(0x22d4b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x22d4c8); SET32(4, RW(16) + 1984); F_0022D4F0(c);
SET64(25, (s32)rd32(c, (RW(16) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22d4d8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0022D4F0(Ctx *c) { /* func_0022D4F0 */
ENTER(0x22d4f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
c->f[13].u = RW(0);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 16), c->f[12].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x22d510); wr32(c, (RW(4) + 20), RW(0)); F_002267C0(c);
c->f[12].u = RW(0);
SET64(31, 0x22d51c); SET64(4, RD(16) + RD(0)); F_002267B0(c);
c->f[12].u = RW(0);
SET64(31, 0x22d528); SET64(4, RD(16) + RD(0)); F_002267A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x22d534); SET32(5, RW(0) + 1); F_00226750(c);
c->f[0].u = rd32(c, (RW(16) + 16));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0022D550(Ctx *c) { /* func_0022D550 */
ENTER(0x22d550);
c->f[0].u = rd32(c, (RW(4) + 1920)); return;
}

void F_0022D560(Ctx *c) { /* func_0022D560 */
ENTER(0x22d560);
c->f[0].u = rd32(c, (RW(4) + 1840)); return;
}

void F_0022D570(Ctx *c) { /* func_0022D570 */
ENTER(0x22d570);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0022D594; }
SET32(5, RW(5) + 2144);
L_0022D594:;
SET64(2, (s32)rd32(c, (RW(5) + 192)));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(5) + 192)));
wr32(c, (RW(2) + 4), RW(0));
SET64(3, rd16(c, (RW(16) + 38)));
SET64(2, (s32)rd32(c, (RW(5) + 192)));
SET32(3, RW(3) + -1);
c->f[0].u = RW(3);
wr32(c, (RW(2) + 8), RW(0));
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s32)rd32(c, (RW(5) + 192)));
wr32(c, (RW(2) + 12), c->f[0].u);
SET64(3, rd16(c, (RW(16) + 36)));
SET64(2, (s32)rd32(c, (RW(5) + 192)));
SET32(3, RW(3) + -1);
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(2) + 16), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(5) + 192)));
wr32(c, (RW(2) + 20), RW(0));
SET64(4, rd16(c, (RW(16) + 38)));
SET64(3, rd16(c, (RW(16) + 36)));
SET64(2, (s32)rd32(c, (RW(5) + 192)));
SET32(4, RW(4) + -1);
c->f[0].u = RW(4);
SET32(3, RW(3) + -1);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(2) + 24), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(5) + 192)));
wr32(c, (RW(2) + 28), c->f[1].u);
SET64(2, rd16(c, (RW(16) + 36)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0022D634; }
c->f[0].u = RW(2);
c->f[12].f = (f32)(s32)c->f[0].u; goto L_0022D64C;
L_0022D634:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[12].f = (f32)(s32)c->f[0].u;
c->f[12].f = fpu(F(12) + F(12));
L_0022D64C:;
SET64(31, 0x22d654); SET64(4, RD(17) + RD(0)); F_0022CF50(c);
SET64(31, 0x22d65c); SET64(4, RD(17) + RD(0)); F_0022D560(c);
SET64(2, rd16(c, (RW(16) + 38)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0022D674; }
c->f[0].u = RW(2);
c->f[12].f = (f32)(s32)c->f[0].u; goto L_0022D68C;
L_0022D674:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[12].f = (f32)(s32)c->f[0].u;
c->f[12].f = fpu(F(12) + F(12));
L_0022D68C:;
SET64(31, 0x22d694); SET64(4, RD(17) + RD(0)); F_0022CF00(c);
SET64(31, 0x22d69c); SET64(4, RD(17) + RD(0)); F_0022D550(c);
SET64(2, rd16(c, (RW(16) + 36)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0022D6B4; }
c->f[0].u = RW(2);
c->f[12].f = (f32)(s32)c->f[0].u; goto L_0022D6CC;
L_0022D6B4:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[12].f = (f32)(s32)c->f[0].u;
c->f[12].f = fpu(F(12) + F(12));
L_0022D6CC:;
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x22d6dc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, rd16(c, (RW(16) + 38)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0022D6F4; }
c->f[0].u = RW(2);
c->f[12].f = (f32)(s32)c->f[0].u; goto L_0022D70C;
L_0022D6F4:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[12].f = (f32)(s32)c->f[0].u;
c->f[12].f = fpu(F(12) + F(12));
L_0022D70C:;
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x22d71c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022D730(Ctx *c) { /* func_0022D730 */
ENTER(0x22d730);
SET32(29, RW(29) + -336);
SET64(2, (s64)(s32)0x4d0000);
wr64(c, (RW(29) + 80), RD(31));
SET64(3, (s64)(s32)0x3f800000);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET32(2, RW(2) + -30464);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET32(4, RW(29) + 320);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[12].u = RW(0);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
wr32(c, (RW(29) + 288), RW(0));
c->f[21].u = RW(3);
wr32(c, (RW(29) + 292), RW(0));
wr32(c, (RW(29) + 296), RW(0));
wr32(c, (RW(29) + 324), RW(2));
wr32(c, (RW(29) + 300), RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x22d798); c->f[20].u = c->f[21].u; rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(19) + 102)));
SET32(2, RW(0) + -2);
if (RD(3) == RD(2)) { c->f[0].u = rd32(c, (RW(29) + 320)); goto L_0022D8E0; }
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22d7c0);  rt_call(c, t); }
wr32(c, (RW(29) + 288), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 224)));
{ u32 t = RW(25); SET64(31, 0x22d7dc);  rt_call(c, t); }
wr32(c, (RW(29) + 292), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 228)));
{ u32 t = RW(25); SET64(31, 0x22d7f8);  rt_call(c, t); }
wr32(c, (RW(29) + 296), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22d814);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 92)));
c->f[21].u = c->f[0].u;
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x22d830); SET32(5, RW(0) + 4); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 212)));
{ u32 t = RW(25); SET64(31, 0x22d848); c->f[20].u = c->f[0].u; rt_call(c, t); }
SET64(3, (s64)(s32)0x40c90000);
SET64(2, (s64)(s32)0x40490000);
SET64(3, RD(3) | 0xfdb);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(3);
c->f[12].f = fpu(F(13) * F(0));
c->f[1].u = RW(2);
c->fcc = F(12) <= F(1);
if (c->fcc) { SET64(2, (s64)(s32)0xc0490000); goto L_0022D894; }
SET64(31, 0x22d880); c->f[12].f = fpu(F(1) + F(12)); F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(0) - F(1)); goto L_0022D8C8;
L_0022D894:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_0022D8C8; }
SET64(31, 0x22d8b4); c->f[12].f = fpu(F(12) - F(1)); F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(1) + F(0));
L_0022D8C8:;
SET32(4, RW(29) + 320);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x22d8dc);  rt_call(c, t); }
c->f[0].u = rd32(c, (RW(29) + 320));
L_0022D8E0:;
SET32(4, RW(29) + 96);
SET64(31, 0x22d8ec); wr32(c, (RW(29) + 332), c->f[0].u); F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x22d8f8); SET32(5, RW(29) + 332); F_0013AD00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x22d904); SET32(4, RW(29) + 192); F_0013ADA0(c);
SET32(4, RW(29) + 256);
SET32(5, RW(19) + 16);
SET64(31, 0x22d914); SET32(6, RW(29) + 192); F_002ACE80(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 272), RW(0));
wr32(c, (RW(29) + 284), RW(2));
SET32(4, RW(29) + 160);
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
SET32(5, RW(29) + 272);
wr32(c, (RW(29) + 276), RW(0));
c->f[12].u = c->f[21].u;
wr32(c, (RW(29) + 280), RW(0));
SET64(31, 0x22d940); wr128(c, (RW(29) + 272) & ~15u, &c->r[2]); F_002ACFD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 176), RW(0));
wr32(c, (RW(29) + 188), RW(2));
c->f[4].u = rd32(c, (RW(29) + 288));
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
c->f[3].u = rd32(c, (RW(29) + 292));
wr32(c, (RW(29) + 180), RW(0));
c->f[1].u = rd32(c, (RW(29) + 296));
wr32(c, (RW(29) + 184), RW(0));
SET32(4, RW(19) + 2144);
wr128(c, (RW(29) + 176) & ~15u, &c->r[2]);
SET32(5, RW(29) + 288);
c->f[0].u = rd32(c, (RW(29) + 176));
c->f[2].u = rd32(c, (RW(29) + 180));
c->f[4].f = fpu(F(4) + F(0));
c->f[0].u = rd32(c, (RW(29) + 184));
c->f[2].f = fpu(F(3) + F(2));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 288), c->f[4].u);
wr32(c, (RW(29) + 292), c->f[2].u);
SET64(31, 0x22d998); wr32(c, (RW(29) + 296), c->f[0].u); F_0014E770(c);
{ int t = RD(19) == RD(0); SET64(17, RD(19) + RD(0)); if (t) goto L_0022D9A4; }
SET32(17, RW(19) + 2144);
L_0022D9A4:;
SET64(25, (s32)rd32(c, (RW(19) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22d9b4); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 624)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22d9c8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(22) * F(0));
SET64(25, (s32)rd32(c, (RW(19) + 624)));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22d9e0); c->f[23].u = c->f[0].u ^ 0x80000000u; rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 624)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22d9f4); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(22) * F(0));
SET64(2, (s32)rd32(c, (RW(17) + 160)));
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(2) + 0), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 160)));
wr32(c, (RW(2) + 4), c->f[23].u);
SET64(25, (s32)rd32(c, (RW(19) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22da1c); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 624)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22da30); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET64(25, (s32)rd32(c, (RW(19) + 624)));
c->f[1].u = RW(2);
SET64(4, RD(19) + RD(0));
c->f[0].f = fpu(F(1) - F(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22da50); c->f[23].f = fpu(F(22) * F(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 624)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22da64); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(22) * F(0));
SET64(2, (s32)rd32(c, (RW(17) + 160)));
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(2) + 8), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 160)));
wr32(c, (RW(2) + 12), c->f[23].u);
SET64(25, (s32)rd32(c, (RW(19) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22da8c); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 624)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22daa0); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(22) * F(0));
SET64(25, (s32)rd32(c, (RW(19) + 624)));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22dab8); c->f[23].u = c->f[0].u ^ 0x80000000u; rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 624)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22dacc); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s32)rd32(c, (RW(17) + 160)));
c->f[1].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(22) * F(0));
wr32(c, (RW(2) + 16), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 160)));
wr32(c, (RW(2) + 20), c->f[23].u);
SET64(25, (s32)rd32(c, (RW(19) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22db00); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 624)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x22db14); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET64(25, (s32)rd32(c, (RW(19) + 624)));
c->f[1].u = RW(2);
SET64(4, RD(19) + RD(0));
c->f[0].f = fpu(F(1) - F(0));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22db34); c->f[23].f = fpu(F(22) * F(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 624)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x22db48); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s32)rd32(c, (RW(17) + 160)));
c->f[1].u = RW(3);
SET64(18, RD(0) + RD(0));
c->f[0].f = fpu(F(1) - F(0));
SET64(16, RD(19) + RD(0));
c->f[0].f = fpu(F(22) * F(0));
wr32(c, (RW(2) + 24), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 160)));
wr32(c, (RW(2) + 28), c->f[23].u);
L_0022DB70:;
SET64(4, RD(18) << 48);
SET32(2, RW(0) + 4);
SET64(4, RSD(4) >> 48);
c->f[3].u = RW(0);
{ int t = RD(4) != RD(2);  if (t) goto L_0022DC80; }
{ int t = RSD(4) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0022DC60; }
SET64(1, RSD(4) < (s64)9);
{ int t = RD(1) != RD(0); SET32(3, RW(4) + -8); if (t) goto L_0022DC20; }
{ int t = RSD(4) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_0022DBC0; }
SET64(1, (s64)(s32)0x7fff0000);
SET64(1, RD(1) | 0xffff);
SET64(1, RSD(4) < RSD(1));
{ int t = RD(1) == RD(0);  if (t) goto L_0022DBC0; }
SET64(2, RD(0) + (s64)1);
L_0022DBC0:;
{ int t = RD(2) == RD(0);  if (t) goto L_0022DC20; }
SET64(5, RD(19) + RD(0));
L_0022DBD0:;
SET32(6, RW(6) + 8);
c->f[2].u = rd32(c, (RW(5) + 160));
SET64(2, RSD(6) < RSD(3));
c->f[1].u = rd32(c, (RW(5) + 240));
c->f[0].u = rd32(c, (RW(5) + 320));
c->f[2].f = fpu(F(3) + F(2));
c->f[1].f = fpu(F(2) + F(1));
c->f[3].f = fpu(F(1) + F(0));
c->f[2].u = rd32(c, (RW(5) + 400));
c->f[1].u = rd32(c, (RW(5) + 480));
c->f[0].u = rd32(c, (RW(5) + 560));
c->f[2].f = fpu(F(3) + F(2));
c->f[1].f = fpu(F(2) + F(1));
c->f[2].f = fpu(F(1) + F(0));
c->f[1].u = rd32(c, (RW(5) + 640));
c->f[0].u = rd32(c, (RW(5) + 720));
c->f[1].f = fpu(F(2) + F(1));
SET32(5, RW(5) + 640);
{ int t = RD(2) != RD(0); c->f[3].f = fpu(F(1) + F(0)); if (t) { POLL(); goto L_0022DBD0; } }
L_0022DC20:;
SET64(1, RSD(6) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_0022DC60; }
SET32(2, RW(6) << 2);
SET32(2, RW(2) + RW(6));
SET32(2, RW(2) << 4);
SET32(3, RW(19) + RW(2));
L_0022DC40:;
SET32(6, RW(6) + 1);
c->f[0].u = rd32(c, (RW(3) + 160));
SET64(2, RSD(6) < RSD(4));
c->f[3].f = fpu(F(3) + F(0));
SET32(3, RW(3) + 80);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0022DC40; } }
L_0022DC60:;
SET64(2, (s64)(s32)0x40800000);
c->f[0].u = RW(2);
c->f[3].f = fpu_div(F(3), F(0));
 goto L_0022DC88;
L_0022DC80:;
c->f[3].u = rd32(c, (RW(16) + 160));
L_0022DC88:;
SET64(2, RD(18) & 0xffff);
SET32(3, RW(2) << 4);
SET64(2, (s32)rd32(c, (RW(19) + 2308)));
c->f[12].f = fpu(F(20) * F(3));
SET64(31, 0x22dca0); SET32(4, RW(2) + RW(3)); F_00162CD0(c);
SET32(2, RW(18) + 1);
SET64(18, RD(2) << 48);
SET64(18, RSD(18) >> 48);
SET64(2, RSD(18) < (s64)4);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 80); if (t) { POLL(); goto L_0022DB70; } }
c->f[1].u = rd32(c, (RW(19) + 480));
SET64(2, (s64)(s32)0x40c90000);
SET64(3, RD(2) | 0xfdb);
SET32(4, RW(29) + 312);
SET64(2, (s64)(s32)0x4d0000);
c->f[1].f = fpu(F(21) * F(1));
SET32(2, RW(2) + -30464);
wr32(c, (RW(19) + 2320), c->f[1].u);
c->f[1].u = rd32(c, (RW(19) + 560));
c->f[0].u = RW(3);
wr32(c, (RW(29) + 316), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x22dcf4); c->f[12].f = fpu(F(0) * F(1)); rt_call(c, t); }
SET32(4, RW(29) + 312);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x22dd08); c->f[20].u = rd32(c, (RW(29) + 320)); rt_call(c, t); }
c->f[12].f = fpu(F(20) + F(0));
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->fcc = F(12) <= F(1);
if (c->fcc) { SET64(2, (s64)(s32)0xc0490000); goto L_0022DD50; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x22dd3c); c->f[12].f = fpu(F(1) + F(12)); F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(0) - F(1)); goto L_0022DD90;
L_0022DD50:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_0022DD90; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x22dd7c); c->f[12].f = fpu(F(12) - F(1)); F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(1) + F(0));
L_0022DD90:;
SET32(4, RW(29) + 312);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x22dda4);  rt_call(c, t); }
c->f[0].u = rd32(c, (RW(29) + 312));
wr32(c, (RW(19) + 2316), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(19) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 228)));
{ u32 t = RW(25); SET64(31, 0x22ddbc); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
wr32(c, (RW(19) + 2324), c->f[0].u);
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = rd32(c, (RW(19) + 1680));
SET64(3, rd8(c, (RW(19) + 692)));
c->f[0].u = rd32(c, (RW(19) + 1840));
c->f[1].u = RW(2);
c->f[3].u = rd32(c, (RW(19) + 1760));
SET64(2, RD(3) & 0x2);
c->f[0].f = fpu(F(2) + F(0));
SET64(2, RD(0) < RD(2));
c->f[7].f = fpu(F(0) - F(1));
c->f[0].u = rd32(c, (RW(19) + 1920));
c->f[5].u = c->f[2].u;
c->f[6].u = c->f[2].u;
c->f[0].f = fpu(F(3) + F(0));
c->f[0].f = fpu(F(0) - F(1));
c->f[4].u = c->f[3].u;
c->f[8].u = c->f[7].u;
{ int t = RD(2) == RD(0); c->f[1].u = c->f[0].u; if (t) goto L_0022DE1C; }
c->f[5].u = c->f[7].u;
c->f[6].u = c->f[7].u;
c->f[7].u = c->f[2].u;
c->f[8].u = c->f[2].u;
L_0022DE1C:;
SET64(2, RD(3) & 0x4);
SET64(2, RD(0) < RD(2));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(19) + 2336))); goto L_0022DE40; }
c->f[0].u = c->f[4].u;
c->f[3].u = c->f[1].u;
c->f[4].u = c->f[1].u;
c->f[1].u = c->f[0].u;
SET64(2, (s32)rd32(c, (RW(19) + 2336)));
L_0022DE40:;
SET64(17, RD(0) + RD(0));
SET64(16, RD(19) + RD(0));
wr32(c, (RW(2) + 0), c->f[6].u);
SET64(2, (s32)rd32(c, (RW(19) + 2336)));
wr32(c, (RW(2) + 4), c->f[4].u);
SET64(2, (s32)rd32(c, (RW(19) + 2336)));
wr32(c, (RW(2) + 8), c->f[5].u);
SET64(2, (s32)rd32(c, (RW(19) + 2336)));
wr32(c, (RW(2) + 12), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(19) + 2336)));
wr32(c, (RW(2) + 16), c->f[8].u);
SET64(2, (s32)rd32(c, (RW(19) + 2336)));
wr32(c, (RW(2) + 20), c->f[3].u);
SET64(2, (s32)rd32(c, (RW(19) + 2336)));
wr32(c, (RW(2) + 24), c->f[7].u);
SET64(2, (s32)rd32(c, (RW(19) + 2336)));
wr32(c, (RW(2) + 28), c->f[0].u);
L_0022DE84:;
SET64(2, (s32)rd32(c, (RW(19) + 2308)));
SET64(3, RD(17) & 0xffff);
c->f[12].u = rd32(c, (RW(16) + 720));
SET32(18, RW(3) << 4);
SET64(31, 0x22de9c); SET32(4, RW(2) + RW(18)); F_00162D00(c);
SET64(2, (s32)rd32(c, (RW(19) + 2308)));
c->f[12].u = rd32(c, (RW(16) + 1040));
SET64(31, 0x22deac); SET32(4, RW(2) + RW(18)); F_00162CF0(c);
SET64(2, (s32)rd32(c, (RW(19) + 2308)));
c->f[12].u = rd32(c, (RW(16) + 1360));
SET64(31, 0x22debc); SET32(4, RW(2) + RW(18)); F_00162CE0(c);
SET32(2, RW(17) + 1);
SET64(17, RD(2) << 48);
SET64(17, RSD(17) >> 48);
SET64(2, RSD(17) < (s64)4);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 80); if (t) { POLL(); goto L_0022DE84; } }
SET64(31, 0x22dedc); SET32(4, RW(19) + 2144); F_0014BE80(c);
SET64(31, rd64(c, (RW(29) + 80)));
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 336); return;
}

void F_0022DF10(Ctx *c) { /* func_0022DF10 */
ENTER(0x22df10);
c->f[0].u = rd32(c, (RW(4) + 128)); return;
}

void F_0022DF20(Ctx *c) { /* func_0022DF20 */
ENTER(0x22df20);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 108)));
SET64(16, RD(18) + RD(0));
wr32(c, (RW(2) + 12), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 108)));
wr16(c, (RW(2) + 16), (u16)RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 108)));
wr32(c, (RW(2) + 8), RW(0));
wr8(c, (RW(4) + 692), (u8)RW(0));
L_0022DF64:;
SET64(20, RD(0) + RD(0));
SET64(19, RD(16) + RD(0));
L_0022DF70:;
SET64(31, 0x22df78); SET32(4, RW(19) + 704); F_001F1E00(c);
SET32(20, RW(20) + 1);
SET32(19, RW(19) + 80);
SET64(2, RSD(20) < (s64)4);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0022DF70; } }
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 320); if (t) { POLL(); goto L_0022DF64; } }
SET64(31, 0x22dfa4); SET32(4, RW(18) + 1984); F_001F1E00(c);
SET64(31, 0x22dfac); SET32(4, RW(18) + 2064); F_001F1E00(c);
SET64(31, 0x22dfb4); SET32(4, RW(18) + 1664); F_001F1E00(c);
SET64(31, 0x22dfbc); SET32(4, RW(18) + 1744); F_001F1E00(c);
SET64(31, 0x22dfc4); SET32(4, RW(18) + 1824); F_001F1E00(c);
SET64(31, 0x22dfcc); SET32(4, RW(18) + 1904); F_001F1E00(c);
SET64(31, 0x22dfd4); SET64(4, RD(18) + RD(0)); F_0022E9D0(c);
SET32(3, RW(0) + 2);
wr32(c, (RW(18) + 96), RW(3));
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_0022E000(Ctx *c) { /* func_0022E000 */
ENTER(0x22e000);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, (s32)rd32(c, (RW(4) + 108)));
SET64(25, (s32)rd32(c, (RW(16) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x22e038); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(3, rd8(c, (RW(16) + 4))); goto L_0022E048; }
SET64(3, RD(0) + RD(0)); goto L_0022E084;
L_0022E048:;
SET64(3, RD(3) & 0x1);
SET64(3, RD(0) < RD(3));
if (RD(3) == RD(0)) { SET64(3, RD(17) & 0xff); goto L_0022E084; }
c->f[1].u = rd32(c, (RW(16) + 8));
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
if (c->fcc) { SET64(17, RD(0) + (s64)1); goto L_0022E080; }
SET64(3, (s64)(s32)0x520000);
c->f[0].u = rd32(c, (RW(3) + 14864));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(16) + 8), c->f[0].u);
L_0022E080:;
SET64(3, RD(17) & 0xff);
L_0022E084:;
if (RD(3) == RD(0)) { SET64(3, rd8(c, (RW(18) + 692))); goto L_0022E108; }
SET64(31, 0x22e094); SET64(4, RD(18) + RD(0)); F_0022EAE0(c);
SET64(16, RD(0) + RD(0));
SET64(19, RD(18) + RD(0));
L_0022E09C:;
SET64(20, RD(0) + RD(0));
SET64(17, RD(19) + RD(0));
L_0022E0A8:;
SET64(31, 0x22e0b0); SET32(4, RW(17) + 704); F_0022E150(c);
SET32(20, RW(20) + 1);
SET32(17, RW(17) + 80);
SET64(2, RSD(20) < (s64)4);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0022E0A8; } }
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < (s64)3);
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 320); if (t) { POLL(); goto L_0022E09C; } }
SET64(31, 0x22e0dc); SET32(4, RW(18) + 1984); F_0022E150(c);
SET64(31, 0x22e0e4); SET32(4, RW(18) + 2064); F_0022E150(c);
SET64(31, 0x22e0ec); SET32(4, RW(18) + 1664); F_0022E150(c);
SET64(31, 0x22e0f4); SET32(4, RW(18) + 1744); F_0022E150(c);
SET64(31, 0x22e0fc); SET32(4, RW(18) + 1824); F_0022E150(c);
SET64(31, 0x22e104); SET32(4, RW(18) + 1904); F_0022E150(c);
SET64(3, rd8(c, (RW(18) + 692)));
L_0022E108:;
SET64(3, RD(3) & 0x1);
SET64(3, RD(0) < RD(3));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_0022E12C; }
SET64(25, (s32)rd32(c, (RW(18) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x22e128); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 80)));
L_0022E12C:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_0022E150(Ctx *c) { /* func_0022E150 */
ENTER(0x22e150);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x520000);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x22e164); c->f[12].u = rd32(c, (RW(2) + 14864)); F_001F1AB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0022E170(Ctx *c) { /* func_0022E170 */
ENTER(0x22e170);
SET64(2, rd8(c, (RW(4) + 4)));
SET64(2, RD(2) & 0x4);
SET64(2, RD(0) < RD(2)); return;
}

void F_0022E180(Ctx *c) { /* func_0022E180 */
ENTER(0x22e180);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0022E38C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -26960);
SET64(11, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 624), RW(2));
SET64(9, (s64)(s32)0x4e0000);
SET64(2, (s32)rd32(c, (RW(17) + 108)));
SET32(4, RW(4) + -26368);
SET64(8, (s64)(s32)0x4e0000);
SET64(6, (s64)(s32)0x4e0000);
SET64(7, (s64)(s32)0x4e0000);
SET32(11, RW(11) + -26648);
wr32(c, (RW(2) + 28), RW(4));
SET32(9, RW(9) + -26952);
SET64(10, (s32)rd32(c, (RW(17) + 108)));
SET32(8, RW(8) + -26728);
SET32(6, RW(6) + -26704);
SET32(7, RW(7) + -26300);
SET32(3, RW(17) + 2344);
SET32(2, RW(17) + 2384);
SET64(10, (s32)rd32(c, (RW(10) + 0)));
SET32(4, RW(17) + 2144);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(10) + 0), RW(11));
wr32(c, (RW(17) + 104), RW(9));
wr32(c, (RW(17) + 688), RW(8));
wr32(c, (RW(17) + 2152), RW(6));
SET64(6, (s32)rd32(c, (RW(17) + 2156)));
wr32(c, (RW(6) + 16), RW(7));
SET64(6, (s32)rd32(c, (RW(17) + 80)));
SET32(3, RW(3) - RW(6));
wr32(c, (RW(6) + 4), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 2156)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x22e22c); wr32(c, (RW(3) + 20), RW(2)); F_0014C530(c);
{ int t = RD(17) == RD(0);  if (t) goto L_0022E304; }
SET64(2, (s64)(s32)0x4e0000);
SET64(9, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -27568);
SET64(8, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 624), RW(2));
SET64(6, (s64)(s32)0x4e0000);
SET64(7, (s32)rd32(c, (RW(17) + 108)));
SET32(9, RW(9) + -27032);
SET64(3, (s64)(s32)0x4e0000);
SET32(8, RW(8) + -27312);
SET32(6, RW(6) + -27560);
SET32(3, RW(3) + -27336);
wr32(c, (RW(7) + 28), RW(9));
SET32(2, RW(17) + 2144);
SET64(7, (s32)rd32(c, (RW(17) + 108)));
SET32(4, RW(17) + 2064);
SET32(5, RW(0) + -1);
SET64(7, (s32)rd32(c, (RW(7) + 0)));
wr32(c, (RW(7) + 0), RW(8));
wr32(c, (RW(17) + 104), RW(6));
wr32(c, (RW(17) + 688), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 80)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x22e298); wr32(c, (RW(3) + 4), RW(2)); F_001F1A30(c);
SET32(4, RW(17) + 1984);
SET64(31, 0x22e2a4); SET32(5, RW(0) + -1); F_001F1A30(c);
SET32(4, RW(17) + 1904);
SET64(31, 0x22e2b0); SET32(5, RW(0) + -1); F_001F1A30(c);
SET32(4, RW(17) + 1824);
SET64(31, 0x22e2bc); SET32(5, RW(0) + -1); F_001F1A30(c);
SET32(4, RW(17) + 1744);
SET64(31, 0x22e2c8); SET32(5, RW(0) + -1); F_001F1A30(c);
SET32(4, RW(17) + 1664);
SET64(31, 0x22e2d4); SET32(5, RW(0) + -1); F_001F1A30(c);
SET64(5, (s64)(s32)0x1f0000);
SET32(4, RW(17) + 704);
SET32(5, RW(5) + 6704);
SET32(6, RW(0) + 80);
SET64(31, 0x22e2ec); SET32(7, RW(0) + 12); F_00102360(c);
SET32(4, RW(17) + 628);
SET64(31, 0x22e2f8); SET64(5, RD(0) + RD(0)); F_0014F8D0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x22e304); SET64(5, RD(0) + RD(0)); F_0022EC80(c);
L_0022E304:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0022E378; }
SET32(4, RW(17) + 2384);
if (RD(4) == RD(0)) { SET32(2, RW(17) + 2352); goto L_0022E338; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 2400), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x22e334);  rt_call(c, t); }
SET32(2, RW(17) + 2352);
L_0022E338:;
{ int t = RD(2) == RD(0);  if (t) goto L_0022E374; }
SET64(2, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -25664);
SET32(4, RW(4) + -25596);
wr32(c, (RW(17) + 2380), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 2352)));
SET32(2, RW(17) + 2384);
wr32(c, (RW(3) + 0), RW(4));
SET64(3, (s32)rd32(c, (RW(17) + 2352)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 4), RW(2));
wr32(c, (RW(17) + 2372), RW(0));
wr32(c, (RW(17) + 2376), RW(0));
L_0022E374:;
SET64(2, RD(16) << 48);
L_0022E378:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0022E390; }
SET64(31, 0x22e38c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0022E38C:;
SET64(2, RD(17) + RD(0));
L_0022E390:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022E3B0(Ctx *c) { /* func_0022E3B0 */
ENTER(0x22e3b0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(2, RD(19) << 48);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RSD(2) >> 48);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(2) == RD(0); SET64(18, RD(6) + RD(0)); if (t) goto L_0022E440; }
SET32(3, RW(17) + 2344);
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 2352), RW(3));
SET32(2, RW(17) + 2352);
wr32(c, (RW(17) + 80), RW(3));
SET32(4, RW(17) + 2384);
wr32(c, (RW(17) + 108), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(5, RW(5) + -27856);
wr32(c, (RW(17) + 2156), RW(4));
SET32(2, RW(2) + -25664);
wr32(c, (RW(17) + 2344), RW(5));
SET32(3, RW(3) + -25596);
wr32(c, (RW(17) + 2380), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 2352)));
wr32(c, (RW(2) + 0), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 2352)));
SET32(2, RW(4) - RW(3));
wr32(c, (RW(3) + 4), RW(2));
wr8(c, (RW(17) + 2356), (u8)RW(0));
wr32(c, (RW(17) + 2372), RW(0));
SET64(31, 0x22e440); wr32(c, (RW(17) + 2376), RW(0)); F_00141AA0(c);
L_0022E440:;
SET64(16, RD(0) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x22e450); SET64(5, RD(0) + RD(0)); F_0022EDE0(c);
SET64(31, 0x22e458); SET32(4, RW(17) + 628); F_0014F940(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(8, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -27568);
SET64(7, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 624), RW(2));
SET64(5, (s64)(s32)0x4e0000);
SET64(6, (s32)rd32(c, (RW(17) + 108)));
SET32(8, RW(8) + -27032);
SET64(3, (s64)(s32)0x4e0000);
SET32(7, RW(7) + -27312);
SET32(5, RW(5) + -27560);
SET32(3, RW(3) + -27336);
wr32(c, (RW(6) + 28), RW(8));
SET32(2, RW(17) + 2144);
SET64(6, (s32)rd32(c, (RW(17) + 108)));
SET32(4, RW(17) + 692);
SET64(6, (s32)rd32(c, (RW(6) + 0)));
wr32(c, (RW(6) + 0), RW(7));
wr32(c, (RW(17) + 104), RW(5));
wr32(c, (RW(17) + 688), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 80)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x22e4b8); wr32(c, (RW(3) + 4), RW(2)); F_0022E800(c);
SET64(5, (s64)(s32)0x1f0000);
SET64(6, (s64)(s32)0x1f0000);
SET32(4, RW(17) + 704);
SET32(5, RW(5) + 6784);
SET32(6, RW(6) + 6704);
SET32(7, RW(0) + 80);
SET64(31, 0x22e4d8); SET32(8, RW(0) + 12); F_001023D0(c);
SET64(31, 0x22e4e0); SET32(4, RW(17) + 1664); F_001F1A80(c);
SET64(31, 0x22e4e8); SET32(4, RW(17) + 1744); F_001F1A80(c);
SET64(31, 0x22e4f0); SET32(4, RW(17) + 1824); F_001F1A80(c);
SET64(31, 0x22e4f8); SET32(4, RW(17) + 1904); F_001F1A80(c);
SET64(31, 0x22e500); SET32(4, RW(17) + 1984); F_001F1A80(c);
SET64(31, 0x22e508); SET32(4, RW(17) + 2064); F_001F1A80(c);
SET64(25, (s32)rd32(c, (RW(17) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x22e518); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 2144);
SET64(31, 0x22e524); SET64(5, RD(0) + RD(0)); F_0014C680(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -26960);
SET64(10, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 624), RW(2));
SET64(8, (s64)(s32)0x4e0000);
SET64(2, (s32)rd32(c, (RW(17) + 108)));
SET32(3, RW(3) + -26368);
SET64(7, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x4e0000);
SET64(6, (s64)(s32)0x4e0000);
SET32(10, RW(10) + -26648);
wr32(c, (RW(2) + 28), RW(3));
SET32(8, RW(8) + -26952);
SET64(9, (s32)rd32(c, (RW(17) + 108)));
SET32(7, RW(7) + -26728);
SET32(5, RW(5) + -26704);
SET32(6, RW(6) + -26300);
SET32(4, RW(17) + 2344);
SET32(3, RW(17) + 2384);
SET64(9, (s32)rd32(c, (RW(9) + 0)));
SET64(2, RD(17) + RD(0));
wr32(c, (RW(9) + 0), RW(10));
wr32(c, (RW(17) + 104), RW(8));
wr32(c, (RW(17) + 688), RW(7));
wr32(c, (RW(17) + 2152), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 2156)));
wr32(c, (RW(5) + 16), RW(6));
SET64(5, (s32)rd32(c, (RW(17) + 80)));
SET32(4, RW(4) - RW(5));
wr32(c, (RW(5) + 4), RW(4));
SET64(4, (s32)rd32(c, (RW(17) + 2156)));
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 20), RW(3));
wr32(c, (RW(17) + 2340), RW(18));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0022E5D0(Ctx *c) { /* func_0022E5D0 */
ENTER(0x22e5d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0022E71C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(9, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -27568);
SET64(8, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 624), RW(2));
SET64(6, (s64)(s32)0x4e0000);
SET64(7, (s32)rd32(c, (RW(17) + 108)));
SET32(9, RW(9) + -27032);
SET64(3, (s64)(s32)0x4e0000);
SET32(8, RW(8) + -27312);
SET32(6, RW(6) + -27560);
SET32(3, RW(3) + -27336);
wr32(c, (RW(7) + 28), RW(9));
SET32(2, RW(17) + 2144);
SET64(7, (s32)rd32(c, (RW(17) + 108)));
SET32(4, RW(17) + 2064);
SET32(5, RW(0) + -1);
SET64(7, (s32)rd32(c, (RW(7) + 0)));
wr32(c, (RW(7) + 0), RW(8));
wr32(c, (RW(17) + 104), RW(6));
wr32(c, (RW(17) + 688), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 80)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x22e650); wr32(c, (RW(3) + 4), RW(2)); F_001F1A30(c);
SET32(4, RW(17) + 1984);
SET64(31, 0x22e65c); SET32(5, RW(0) + -1); F_001F1A30(c);
SET32(4, RW(17) + 1904);
SET64(31, 0x22e668); SET32(5, RW(0) + -1); F_001F1A30(c);
SET32(4, RW(17) + 1824);
SET64(31, 0x22e674); SET32(5, RW(0) + -1); F_001F1A30(c);
SET32(4, RW(17) + 1744);
SET64(31, 0x22e680); SET32(5, RW(0) + -1); F_001F1A30(c);
SET32(4, RW(17) + 1664);
SET64(31, 0x22e68c); SET32(5, RW(0) + -1); F_001F1A30(c);
SET64(5, (s64)(s32)0x1f0000);
SET32(4, RW(17) + 704);
SET32(5, RW(5) + 6704);
SET32(6, RW(0) + 80);
SET64(31, 0x22e6a4); SET32(7, RW(0) + 12); F_00102360(c);
SET32(4, RW(17) + 628);
SET64(31, 0x22e6b0); SET64(5, RD(0) + RD(0)); F_0014F8D0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x22e6bc); SET64(5, RD(0) + RD(0)); F_0022EC80(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0022E708; }
SET32(2, RW(17) + 2152);
{ int t = RD(2) == RD(0);  if (t) goto L_0022E704; }
SET64(2, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -25664);
SET32(4, RW(4) + -25596);
wr32(c, (RW(17) + 2180), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 2152)));
SET32(2, RW(17) + 2184);
wr32(c, (RW(3) + 0), RW(4));
SET64(3, (s32)rd32(c, (RW(17) + 2152)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 4), RW(2));
wr32(c, (RW(17) + 2172), RW(0));
wr32(c, (RW(17) + 2176), RW(0));
L_0022E704:;
SET64(2, RD(16) << 48);
L_0022E708:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0022E720; }
SET64(31, 0x22e71c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0022E71C:;
SET64(2, RD(17) + RD(0));
L_0022E720:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022E740(Ctx *c) { /* func_0022E740 */
ENTER(0x22e740);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr8(c, (RW(4) + 692), (u8)RW(0));
SET64(16, RD(0) + RD(0));
SET64(19, RD(17) + RD(0));
L_0022E76C:;
SET64(20, RD(0) + RD(0));
SET64(18, RD(19) + RD(0));
L_0022E778:;
SET64(31, 0x22e780); SET32(4, RW(18) + 704); F_001F1E00(c);
SET32(20, RW(20) + 1);
SET32(18, RW(18) + 80);
SET64(2, RSD(20) < (s64)4);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0022E778; } }
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < (s64)3);
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 320); if (t) { POLL(); goto L_0022E76C; } }
SET64(31, 0x22e7ac); SET32(4, RW(17) + 1984); F_001F1E00(c);
SET64(31, 0x22e7b4); SET32(4, RW(17) + 2064); F_001F1E00(c);
SET64(31, 0x22e7bc); SET32(4, RW(17) + 1664); F_001F1E00(c);
SET64(31, 0x22e7c4); SET32(4, RW(17) + 1744); F_001F1E00(c);
SET64(31, 0x22e7cc); SET32(4, RW(17) + 1824); F_001F1E00(c);
SET64(31, 0x22e7d4); SET32(4, RW(17) + 1904); F_001F1E00(c);
SET64(31, 0x22e7dc); SET64(4, RD(17) + RD(0)); F_0022E9D0(c);
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_0022E800(Ctx *c) { /* func_0022E800 */
ENTER(0x22e800);
wr8(c, (RW(4) + 0), (u8)RW(0));
SET64(2, RD(4) + RD(0)); return;
}

void F_0022E810(Ctx *c) { /* func_0022E810 */
ENTER(0x22e810);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0)); return;
}

void F_0022E830(Ctx *c) { /* func_0022E830 */
ENTER(0x22e830);
 return;
}

void F_0022E840(Ctx *c) { /* func_0022E840 */
ENTER(0x22e840);
 return;
}

void F_0022E850(Ctx *c) { /* func_0022E850 */
ENTER(0x22e850);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 8), c->f[22].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[22].u = c->f[12].u;
c->f[21].u = c->f[13].u;
wr32(c, (RW(4) + 16), c->f[22].u);
c->f[20].u = c->f[14].u;
wr32(c, (RW(4) + 20), c->f[21].u);
SET64(31, 0x22e888); wr32(c, (RW(4) + 24), c->f[20].u); F_0022E980(c);
c->f[12].f = fpu(F(22) - F(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x22e898); SET64(5, RD(0) + RD(0)); F_0022E960(c);
SET64(31, 0x22e8a0); SET64(4, RD(16) + RD(0)); F_0022E950(c);
c->f[12].f = fpu(F(21) - F(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x22e8b0); SET32(5, RW(0) + 1); F_0022E960(c);
SET64(31, 0x22e8b8); SET64(4, RD(16) + RD(0)); F_0022E940(c);
c->f[12].f = fpu(F(20) - F(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x22e8c8); SET32(5, RW(0) + 2); F_0022E960(c);
c->f[12].u = c->f[22].u;
SET64(31, 0x22e8d4); SET64(4, RD(16) + RD(0)); F_0022E930(c);
c->f[12].u = c->f[21].u;
SET64(31, 0x22e8e0); SET64(4, RD(16) + RD(0)); F_0022E920(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x22e8ec); c->f[12].u = c->f[20].u; F_0022E910(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void F_0022E910(Ctx *c) { /* func_0022E910 */
ENTER(0x22e910);
c->f[0].u = c->f[12].u;
wr32(c, (RW(4) + 40), c->f[12].u); return;
}

void F_0022E920(Ctx *c) { /* func_0022E920 */
ENTER(0x22e920);
c->f[0].u = c->f[12].u;
wr32(c, (RW(4) + 36), c->f[12].u); return;
}

void F_0022E930(Ctx *c) { /* func_0022E930 */
ENTER(0x22e930);
c->f[0].u = c->f[12].u;
wr32(c, (RW(4) + 32), c->f[12].u); return;
}

void F_0022E940(Ctx *c) { /* func_0022E940 */
ENTER(0x22e940);
c->f[0].u = rd32(c, (RW(4) + 24)); return;
}

void F_0022E950(Ctx *c) { /* func_0022E950 */
ENTER(0x22e950);
c->f[0].u = rd32(c, (RW(4) + 20)); return;
}

void F_0022E960(Ctx *c) { /* func_0022E960 */
ENTER(0x22e960);
SET32(2, RW(5) << 2);
SET32(2, RW(2) + RW(4));
c->f[0].u = c->f[12].u;
wr32(c, (RW(2) + 56), c->f[12].u); return;
}

void F_0022E980(Ctx *c) { /* func_0022E980 */
ENTER(0x22e980);
c->f[0].u = rd32(c, (RW(4) + 16)); return;
}

void F_0022E990(Ctx *c) { /* func_0022E990 */
ENTER(0x22e990);
wr32(c, (RW(4) + 16), c->f[12].u);
wr32(c, (RW(4) + 20), c->f[13].u);
c->f[0].u = rd32(c, (RW(4) + 16));
c->f[0].f = fpu(F(12) - F(0));
wr32(c, (RW(4) + 56), c->f[0].u);
c->f[0].u = rd32(c, (RW(4) + 20));
c->f[0].f = fpu(F(13) - F(0));
wr32(c, (RW(4) + 60), c->f[0].u);
wr32(c, (RW(4) + 32), c->f[12].u);
wr32(c, (RW(4) + 36), c->f[13].u); return;
}

void F_0022E9C0(Ctx *c) { /* func_0022E9C0 */
ENTER(0x22e9c0);
 return;
}

void F_0022E9D0(Ctx *c) { /* func_0022E9D0 */
ENTER(0x22e9d0);
SET32(29, RW(29) + -64);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 108)));
SET64(16, RD(18) + RD(0));
wr32(c, (RW(3) + 12), RW(0));
SET64(3, (s32)rd32(c, (RW(4) + 108)));
wr16(c, (RW(3) + 16), (u16)RW(0));
SET64(3, (s32)rd32(c, (RW(4) + 108)));
wr32(c, (RW(3) + 8), RW(0));
wr32(c, (RW(4) + 96), RW(2));
L_0022EA10:;
SET64(31, 0x22ea18); SET32(4, RW(16) + 144); F_001F1E00(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
c->f[13].u = RW(0);
SET64(31, 0x22ea2c); SET32(4, RW(16) + 144); F_00226830(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
c->f[13].u = RW(0);
SET64(31, 0x22ea40); SET32(4, RW(16) + 144); F_002267F0(c);
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)4);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 80); if (t) { POLL(); goto L_0022EA10; } }
SET64(31, 0x22ea58); SET32(4, RW(18) + 464); F_001F1E00(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
c->f[13].u = RW(0);
SET64(31, 0x22ea6c); SET32(4, RW(18) + 464); F_00226830(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
c->f[13].u = RW(0);
SET64(31, 0x22ea80); SET32(4, RW(18) + 464); F_002267F0(c);
SET64(31, 0x22ea88); SET32(4, RW(18) + 544); F_001F1E00(c);
c->f[12].u = RW(0);
SET32(4, RW(18) + 544);
SET64(31, 0x22ea98); c->f[13].u = c->f[12].u; F_00226830(c);
c->f[12].u = RW(0);
SET32(4, RW(18) + 544);
SET64(31, 0x22eaa8); c->f[13].u = c->f[12].u; F_002267F0(c);
SET64(4, (s64)(s32)0x3f000000);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(18) + 124), RW(4));
wr32(c, (RW(18) + 120), RW(4));
wr32(c, (RW(18) + 128), RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0022EAE0(Ctx *c) { /* func_0022EAE0 */
ENTER(0x22eae0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, (s32)rd32(c, (RW(4) + 108)));
SET64(25, (s32)rd32(c, (RW(16) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x22eb14); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(3, rd8(c, (RW(16) + 4))); goto L_0022EB24; }
SET64(3, RD(0) + RD(0)); goto L_0022EB60;
L_0022EB24:;
SET64(3, RD(3) & 0x1);
SET64(3, RD(0) < RD(3));
if (RD(3) == RD(0)) { SET64(3, RD(17) & 0xff); goto L_0022EB60; }
c->f[1].u = rd32(c, (RW(16) + 8));
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
if (c->fcc) { SET64(17, RD(0) + (s64)1); goto L_0022EB5C; }
SET64(3, (s64)(s32)0x520000);
c->f[0].u = rd32(c, (RW(3) + 14864));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(16) + 8), c->f[0].u);
L_0022EB5C:;
SET64(3, RD(17) & 0xff);
L_0022EB60:;
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_0022EC64; }
SET64(17, (s32)rd32(c, (RW(18) + 108)));
SET64(2, (s64)(s32)0x520000);
c->f[0].u = rd32(c, (RW(2) + 14864));
c->f[1].u = rd32(c, (RW(17) + 12));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(17) + 12), c->f[0].u); goto L_0022EB98;
L_0022EB84:;
SET64(31, 0x22eb8c); SET64(4, RD(17) + RD(0)); F_0022EF70(c);
c->f[0].u = rd32(c, (RW(17) + 12));
c->f[0].f = fpu(F(0) + F(20));
wr32(c, (RW(17) + 12), c->f[0].u);
L_0022EB98:;
SET64(16, RD(0) + RD(0));
c->f[1].u = rd32(c, (RW(17) + 12));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = c->fcc; SET32(2, RW(0) + 1); if (t) goto L_0022EBB8; }
SET64(2, RD(0) + RD(0));
L_0022EBB8:;
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_0022EBE8; }
SET64(25, (s32)rd32(c, (RW(17) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x22ebd4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_0022EBE8; }
SET64(16, RD(0) + (s64)1);
L_0022EBE8:;
{ int t = RD(16) == RD(0);  if (t) goto L_0022EC08; }
SET64(25, (s32)rd32(c, (RW(17) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x22ec00); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
if (RD(2) == RD(0)) { c->f[20].u = rd32(c, (RW(17) + 12)); { POLL(); goto L_0022EB84; } }
L_0022EC08:;
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x22ec18); SET64(4, RD(18) + RD(0)); F_001F1AB0(c);
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_0022EC20:;
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x22ec30); SET32(4, RW(16) + 144); F_001F1AB0(c);
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)4);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 80); if (t) { POLL(); goto L_0022EC20; } }
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x22ec50); SET32(4, RW(18) + 464); F_001F1AB0(c);
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x22ec60); SET32(4, RW(18) + 544); F_001F1AB0(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_0022EC64:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0022EC80(Ctx *c) { /* func_0022EC80 */
ENTER(0x22ec80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0022EDBC; }
SET64(2, (s64)(s32)0x4e0000);
SET64(8, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -26256);
SET64(7, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 624), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(6, (s32)rd32(c, (RW(17) + 108)));
SET32(8, RW(8) + -25744);
SET32(7, RW(7) + -26024);
SET32(3, RW(3) + -26248);
SET32(2, RW(17) + 628);
SET32(4, RW(17) + 544);
wr32(c, (RW(6) + 28), RW(8));
SET32(5, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(17) + 108)));
SET64(6, (s32)rd32(c, (RW(6) + 0)));
wr32(c, (RW(6) + 0), RW(7));
wr32(c, (RW(17) + 104), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 80)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x22ecf4); wr32(c, (RW(3) + 4), RW(2)); F_001F1A30(c);
SET32(4, RW(17) + 464);
SET64(31, 0x22ed00); SET32(5, RW(0) + -1); F_001F1A30(c);
SET64(5, (s64)(s32)0x1f0000);
SET32(4, RW(17) + 144);
SET32(5, RW(5) + 6704);
SET32(6, RW(0) + 80);
SET64(31, 0x22ed18); SET32(7, RW(0) + 4); F_00102360(c);
SET32(2, RW(17) + 80);
if (RD(2) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_0022ED54; }
SET64(2, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -28160);
SET32(4, RW(4) + -28148);
wr32(c, (RW(17) + 104), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 80)));
SET32(2, RW(17) + 108);
wr32(c, (RW(3) + 0), RW(4));
SET64(3, (s32)rd32(c, (RW(17) + 80)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 4), RW(2));
SET64(4, RD(17) + RD(0));
L_0022ED54:;
SET64(31, 0x22ed5c); SET64(5, RD(0) + RD(0)); F_001F1A30(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0022EDA8; }
SET32(2, RW(17) + 636);
{ int t = RD(2) == RD(0);  if (t) goto L_0022EDA4; }
SET64(2, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -25664);
SET32(4, RW(4) + -25596);
wr32(c, (RW(17) + 664), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 636)));
SET32(2, RW(17) + 668);
wr32(c, (RW(3) + 0), RW(4));
SET64(3, (s32)rd32(c, (RW(17) + 636)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 4), RW(2));
wr32(c, (RW(17) + 656), RW(0));
wr32(c, (RW(17) + 660), RW(0));
L_0022EDA4:;
SET64(2, RD(16) << 48);
L_0022EDA8:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0022EDC0; }
SET64(31, 0x22edbc); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0022EDBC:;
SET64(2, RD(17) + RD(0));
L_0022EDC0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022EDE0(Ctx *c) { /* func_0022EDE0 */
ENTER(0x22ede0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(5) + RD(0));
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_0022EE5C; }
SET32(3, RW(17) + 628);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 636), RW(3));
SET32(4, RW(17) + 636);
wr32(c, (RW(17) + 80), RW(3));
SET32(2, RW(2) + -27856);
wr32(c, (RW(17) + 108), RW(4));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 628), RW(2));
SET32(3, RW(3) + -25664);
wr32(c, (RW(17) + 664), RW(3));
SET64(4, (s64)(s32)0x4e0000);
SET64(3, (s32)rd32(c, (RW(17) + 636)));
SET32(4, RW(4) + -25596);
SET32(2, RW(17) + 668);
wr32(c, (RW(3) + 0), RW(4));
SET64(3, (s32)rd32(c, (RW(17) + 636)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 4), RW(2));
wr8(c, (RW(17) + 640), (u8)RW(0));
wr32(c, (RW(17) + 656), RW(0));
wr32(c, (RW(17) + 660), RW(0));
L_0022EE5C:;
SET64(31, 0x22ee64); SET64(4, RD(17) + RD(0)); F_001F1A80(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -28160);
SET64(9, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 104), RW(2));
SET64(11, (s64)(s32)0x4e0000);
SET64(2, (s32)rd32(c, (RW(17) + 80)));
SET32(4, RW(4) + -28148);
SET64(10, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x1f0000);
SET64(6, (s64)(s32)0x1f0000);
wr32(c, (RW(2) + 0), RW(4));
SET32(13, RW(17) + 108);
SET64(14, (s32)rd32(c, (RW(17) + 80)));
SET32(12, RW(0) + -1);
SET32(9, RW(9) + -26256);
SET32(11, RW(11) + -25744);
SET32(10, RW(10) + -26024);
SET32(3, RW(3) + -26248);
SET32(13, RW(13) - RW(14));
SET32(2, RW(17) + 628);
wr32(c, (RW(14) + 4), RW(13));
SET32(4, RW(17) + 144);
wr32(c, (RW(17) + 84), RW(0));
SET32(5, RW(5) + 6784);
wr32(c, (RW(17) + 88), RW(0));
SET32(6, RW(6) + 6704);
wr32(c, (RW(17) + 92), RW(0));
SET32(7, RW(0) + 80);
wr32(c, (RW(17) + 96), RW(12));
SET32(8, RW(0) + 4);
wr16(c, (RW(17) + 100), (u16)RW(0));
wr16(c, (RW(17) + 102), (u16)RW(0));
wr32(c, (RW(17) + 624), RW(9));
SET64(9, (s32)rd32(c, (RW(17) + 108)));
wr32(c, (RW(9) + 28), RW(11));
SET64(9, (s32)rd32(c, (RW(17) + 108)));
SET64(9, (s32)rd32(c, (RW(9) + 0)));
wr32(c, (RW(9) + 0), RW(10));
wr32(c, (RW(17) + 104), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 80)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x22ef18); wr32(c, (RW(3) + 4), RW(2)); F_001023D0(c);
SET64(31, 0x22ef20); SET32(4, RW(17) + 464); F_001F1A80(c);
SET64(31, 0x22ef28); SET32(4, RW(17) + 544); F_001F1A80(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022EF40(Ctx *c) { /* func_0022EF40 */
ENTER(0x22ef40);
if (RD(5) == RD(0)) { SET64(3, rd8(c, (RW(4) + 4))); goto L_0022EF58; }
SET64(3, rd8(c, (RW(4) + 4)));
SET64(3, RD(3) | 0x4);
wr8(c, (RW(4) + 4), (u8)RW(3)); goto L_0022EF60;
L_0022EF58:;
SET64(3, RD(3) & 0xfb);
wr8(c, (RW(4) + 4), (u8)RW(3));
L_0022EF60:;
 return;
}

static void B_0022EF70(Ctx *c, u32 entry) { /* func_0022EF70 */
ENTER(entry);
switch (entry) { case 0x22f050: goto L_0022F050; case 0x22f0c0: goto L_0022F0C0; case 0x22f128: goto L_0022F128; case 0x22f198: goto L_0022F198; case 0x22f218: goto L_0022F218; case 0x22f2b8: goto L_0022F2B8; case 0x22f370: goto L_0022F370; case 0x22f408: goto L_0022F408; case 0x22f428: goto L_0022F428; case 0x22f448: goto L_0022F448; case 0x22f490: goto L_0022F490; case 0x22f4b0: goto L_0022F4B0; case 0x22f4d0: goto L_0022F4D0; case 0x22f518: goto L_0022F518; case 0x22f628: goto L_0022F628; case 0x22f738: goto L_0022F738; case 0x22f798: goto L_0022F798; case 0x22f7d8: goto L_0022F7D8; case 0x22f808: goto L_0022F808; case 0x22f8a0: goto L_0022F8A0; case 0x22f900: goto L_0022F900; case 0x22f928: goto L_0022F928; case 0x22f958: goto L_0022F958; case 0x22f980: goto L_0022F980; case 0x22f9b0: goto L_0022F9B0; case 0x22f9c8: goto L_0022F9C8; }
L_0022EF70:;
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
wr32(c, (RW(29) + 124), RW(0));
SET64(2, rd8(c, (RW(4) + 4)));
SET64(5, (s16)rd16(c, (RW(4) + 16)));
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET64(2, RD(2) & 0x2);
SET32(4, RW(5) << 1);
SET32(4, RW(4) + RW(5));
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(2) == RD(0); SET32(18, RW(3) + 4); if (t) goto L_0022EFD0; }
SET64(17, (s32)rd32(c, (RW(3) + 0))); goto L_0022EFDC;
L_0022EFD0:;
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(17, (s32)c->f[0].u);
L_0022EFDC:;
{ int t = RD(17) == RD(0);  if (t) goto L_0022F9D8; }
SET64(2, rd8(c, (RW(19) + 4)));
L_0022EFE8:;
SET64(4, RD(2) & 0x2);
if (RD(4) == RD(0)) { c->f[0].u = rd32(c, (RW(18) + 0)); goto L_0022EFFC; }
SET64(3, (s32)rd32(c, (RW(18) + 0))); goto L_0022F004;
L_0022EFFC:;
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
L_0022F004:;
SET32(2, RW(18) + 4);
{ int t = RD(4) == RD(0); SET32(18, RW(18) + 8); if (t) goto L_0022F018; }
SET64(16, (s32)rd32(c, (RW(2) + 0))); goto L_0022F024;
L_0022F018:;
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(16, (s32)c->f[0].u);
L_0022F024:;
SET64(1, RD(3) < (u64)(s64)26);
{ int t = RD(1) == RD(0);  if (t) goto L_0022F9C8; }
SET32(2, RW(3) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + -28208);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x22ef70: goto L_0022EF70; case 0x22f050: goto L_0022F050; case 0x22f0c0: goto L_0022F0C0; case 0x22f128: goto L_0022F128; case 0x22f198: goto L_0022F198; case 0x22f218: goto L_0022F218; case 0x22f2b8: goto L_0022F2B8; case 0x22f370: goto L_0022F370; case 0x22f408: goto L_0022F408; case 0x22f428: goto L_0022F428; case 0x22f448: goto L_0022F448; case 0x22f490: goto L_0022F490; case 0x22f4b0: goto L_0022F4B0; case 0x22f4d0: goto L_0022F4D0; case 0x22f518: goto L_0022F518; case 0x22f628: goto L_0022F628; case 0x22f738: goto L_0022F738; case 0x22f798: goto L_0022F798; case 0x22f7d8: goto L_0022F7D8; case 0x22f808: goto L_0022F808; case 0x22f8a0: goto L_0022F8A0; case 0x22f900: goto L_0022F900; case 0x22f928: goto L_0022F928; case 0x22f958: goto L_0022F958; case 0x22f980: goto L_0022F980; case 0x22f9b0: goto L_0022F9B0; case 0x22f9c8: goto L_0022F9C8; default: rt_jump(c, t); return; } }
L_0022F050:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
c->f[12].u = rd32(c, (RW(18) + 0));
c->f[13].u = rd32(c, (RW(18) + 4));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
c->f[14].u = rd32(c, (RW(18) + 8));
SET64(25, (s32)rd32(c, (RW(25) + 60)));
{ u32 t = RW(25); SET64(31, 0x22f070); SET32(18, RW(18) + 12); rt_call(c, t); }
SET32(2, RW(0) + 4);
{ int t = RD(16) != RD(2);  if (t) goto L_0022F9C8; }
SET64(2, rd8(c, (RW(19) + 4)));
SET64(3, RD(18) + RD(0));
SET64(2, RD(2) & 0x2);
{ int t = RD(2) == RD(0); SET32(18, RW(18) + 4); if (t) goto L_0022F098; }
SET64(5, (s32)rd32(c, (RW(3) + 0))); goto L_0022F0A4;
L_0022F098:;
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
L_0022F0A4:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x22f0b8);  rt_call(c, t); }
 goto L_0022F9C8;
L_0022F0C0:;
SET32(3, RW(18) + 8);
c->f[12].u = rd32(c, (RW(18) + 0));
SET32(2, RW(0) + 2);
c->f[13].u = rd32(c, (RW(18) + 4));
{ int t = RD(16) != RD(2); SET64(18, RD(3) + RD(0)); if (t) goto L_0022F0F8; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x22f0ec);  rt_call(c, t); }
 goto L_0022F9C8;
L_0022F0F8:;
SET32(2, RW(0) + 3);
{ int t = RD(16) != RD(2);  if (t) goto L_0022F9C8; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
c->f[14].u = rd32(c, (RW(3) + 0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x22f11c); SET32(18, RW(3) + 4); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F128:;
SET64(5, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(5) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 252)));
{ u32 t = RW(25); SET64(31, 0x22f13c); SET32(4, RW(29) + 96); rt_call(c, t); }
c->f[0].u = rd32(c, (RW(29) + 104));
SET32(5, RW(29) + 112);
c->f[2].u = rd32(c, (RW(29) + 96));
c->f[1].u = rd32(c, (RW(29) + 100));
wr32(c, (RW(29) + 120), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 108));
wr32(c, (RW(29) + 112), c->f[2].u);
wr32(c, (RW(29) + 116), c->f[1].u);
wr32(c, (RW(29) + 124), c->f[0].u);
c->f[0].u = rd32(c, (RW(18) + 0));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(29) + 120), c->f[0].u);
c->f[0].u = rd32(c, (RW(18) + 4));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 124), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 248)));
{ u32 t = RW(25); SET64(31, 0x22f18c); SET32(18, RW(18) + 8); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F198:;
SET64(5, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(5) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 252)));
{ u32 t = RW(25); SET64(31, 0x22f1ac); SET32(4, RW(29) + 80); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(29) + 80));
SET32(5, RW(29) + 112);
c->f[0].u = rd32(c, (RW(29) + 88));
c->f[3].u = rd32(c, (RW(29) + 84));
wr32(c, (RW(29) + 112), c->f[1].u);
c->f[1].f = fpu(F(0) - F(1));
c->f[2].u = rd32(c, (RW(29) + 92));
wr32(c, (RW(29) + 120), c->f[0].u);
wr32(c, (RW(29) + 116), c->f[3].u);
c->f[0].f = fpu(F(2) - F(3));
wr32(c, (RW(29) + 124), c->f[2].u);
c->f[3].u = rd32(c, (RW(18) + 0));
c->f[2].u = rd32(c, (RW(18) + 4));
c->f[1].f = fpu(F(3) + F(1));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(29) + 112), c->f[3].u);
wr32(c, (RW(29) + 116), c->f[2].u);
wr32(c, (RW(29) + 120), c->f[1].u);
wr32(c, (RW(29) + 124), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 248)));
{ u32 t = RW(25); SET64(31, 0x22f20c); SET32(18, RW(18) + 8); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F218:;
SET32(2, RW(0) + 1);
c->f[12].u = rd32(c, (RW(18) + 0));
{ int t = RD(16) != RD(2); SET32(18, RW(18) + 4); if (t) goto L_0022F248; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x22f23c); SET32(5, RW(0) + 4); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F248:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
c->f[13].u = rd32(c, (RW(18) + 0));
SET32(5, RW(0) + 4);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x22f264); SET32(18, RW(18) + 4); rt_call(c, t); }
SET32(2, RW(0) + 3);
{ int t = RD(16) != RD(2);  if (t) goto L_0022F9C8; }
SET64(2, rd8(c, (RW(19) + 4)));
SET64(3, RD(18) + RD(0));
SET64(2, RD(2) & 0x2);
{ int t = RD(2) == RD(0); SET32(18, RW(18) + 4); if (t) goto L_0022F28C; }
SET64(5, (s32)rd32(c, (RW(3) + 0))); goto L_0022F298;
L_0022F28C:;
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
L_0022F298:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x22f2ac); SET32(6, RW(0) + 4); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F2B8:;
SET64(2, RD(18) + RD(0));
{ int t = RD(4) == RD(0); SET32(18, RW(18) + 4); if (t) goto L_0022F2CC; }
SET64(2, (s32)rd32(c, (RW(2) + 0))); goto L_0022F2D8;
L_0022F2CC:;
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
L_0022F2D8:;
SET64(25, (s32)rd32(c, (RW(19) + 28)));
SET64(16, RD(2) << 48);
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x22f2f0); SET64(16, RSD(16) >> 48); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(2) + 0)));
if (RD(5) == RD(0)) { SET64(3, RD(16) << 48); goto L_0022F320; }
SET64(2, RD(16) << 48);
SET64(3, (s32)rd32(c, (RW(5) + 20)));
SET64(2, RSD(2) >> 48);
SET32(4, RW(2) << 2);
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(5) + 24)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(16, RW(2) + RW(3)); goto L_0022F334;
L_0022F320:;
SET64(2, (s32)rd32(c, (RW(2) + 8)));
SET64(3, RSD(3) >> 48);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(16, (s32)rd32(c, (RW(2) + 0)));
L_0022F334:;
SET64(25, (s32)rd32(c, (RW(19) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x22f344); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET32(7, RW(0) + 1);
SET64(5, RD(16) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x22f364); SET64(8, RD(7) + RD(0)); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F370:;
SET32(2, RW(0) + 1);
c->f[12].u = rd32(c, (RW(18) + 0));
{ int t = RD(16) != RD(2); SET32(18, RW(18) + 4); if (t) goto L_0022F3A0; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x22f394);  rt_call(c, t); }
 goto L_0022F9C8;
L_0022F3A0:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
c->f[13].u = rd32(c, (RW(18) + 0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x22f3b8); SET32(18, RW(18) + 4); rt_call(c, t); }
SET32(2, RW(0) + 3);
{ int t = RD(16) != RD(2);  if (t) goto L_0022F9C8; }
SET64(2, rd8(c, (RW(19) + 4)));
SET64(3, RD(18) + RD(0));
SET64(2, RD(2) & 0x2);
{ int t = RD(2) == RD(0); SET32(18, RW(18) + 4); if (t) goto L_0022F3E0; }
SET64(5, (s32)rd32(c, (RW(3) + 0))); goto L_0022F3EC;
L_0022F3E0:;
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
L_0022F3EC:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x22f400);  rt_call(c, t); }
 goto L_0022F9C8;
L_0022F408:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x22f41c); SET32(5, RW(0) + 1); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F428:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x22f43c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F448:;
SET32(5, RW(0) + 1);
{ int t = RD(16) != RD(5);  if (t) goto L_0022F478; }
SET64(25, (s32)rd32(c, (RW(19) + 28)));
c->f[12].u = rd32(c, (RW(18) + 0));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x22f46c); SET32(18, RW(18) + 4); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F478:;
SET64(25, (s32)rd32(c, (RW(19) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x22f488); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F490:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x22f4a4); SET32(5, RW(0) + 1); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F4B0:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x22f4c4); SET32(5, RW(0) + 1); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F4D0:;
SET64(2, RD(18) + RD(0));
{ int t = RD(4) == RD(0); SET32(18, RW(18) + 4); if (t) goto L_0022F4E4; }
SET64(2, (s32)rd32(c, (RW(2) + 0))); goto L_0022F4F0;
L_0022F4E4:;
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
L_0022F4F0:;
SET64(25, (s32)rd32(c, (RW(19) + 28)));
SET64(5, RD(2) << 48);
SET64(5, RSD(5) >> 48);
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x22f508); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(2, (s16)rd16(c, (RW(19) + 16)));
SET32(2, RW(2) + -1);
wr16(c, (RW(19) + 16), (u16)RW(2)); goto L_0022F9C8;
L_0022F518:;
{ int t = RD(16) != RD(0);  if (t) goto L_0022F550; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x22f534);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x22f548); c->f[12].u = c->f[0].u; rt_call(c, t); }
 goto L_0022F9C8;
L_0022F550:;
SET32(2, RW(0) + 1);
{ int t = RD(16) != RD(2);  if (t) goto L_0022F580; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
c->f[12].u = rd32(c, (RW(18) + 0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x22f574); SET32(18, RW(18) + 4); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F580:;
SET32(2, RW(0) + 2);
{ int t = RD(16) != RD(2);  if (t) goto L_0022F5B8; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET32(2, RW(18) + 4);
c->f[12].u = rd32(c, (RW(18) + 0));
c->f[13].u = rd32(c, (RW(2) + 0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x22f5ac); SET32(18, RW(2) + 4); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F5B8:;
SET32(2, RW(0) + 3);
{ int t = RD(16) != RD(2);  if (t) goto L_0022F9C8; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET32(2, RW(18) + 4);
c->f[12].u = rd32(c, (RW(18) + 0));
c->f[13].u = rd32(c, (RW(2) + 0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x22f5e4); SET32(18, RW(2) + 4); rt_call(c, t); }
SET64(2, rd8(c, (RW(19) + 4)));
SET64(3, RD(18) + RD(0));
SET64(2, RD(2) & 0x2);
{ int t = RD(2) == RD(0); SET32(18, RW(18) + 4); if (t) goto L_0022F600; }
SET64(5, (s32)rd32(c, (RW(3) + 0))); goto L_0022F60C;
L_0022F600:;
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
L_0022F60C:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x22f620);  rt_call(c, t); }
 goto L_0022F9C8;
L_0022F628:;
{ int t = RD(16) != RD(0);  if (t) goto L_0022F660; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x22f644);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 192)));
{ u32 t = RW(25); SET64(31, 0x22f658); c->f[12].u = c->f[0].u; rt_call(c, t); }
 goto L_0022F9C8;
L_0022F660:;
SET32(2, RW(0) + 1);
{ int t = RD(16) != RD(2);  if (t) goto L_0022F690; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
c->f[12].u = rd32(c, (RW(18) + 0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 192)));
{ u32 t = RW(25); SET64(31, 0x22f684); SET32(18, RW(18) + 4); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F690:;
SET32(2, RW(0) + 2);
{ int t = RD(16) != RD(2);  if (t) goto L_0022F6C8; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET32(2, RW(18) + 4);
c->f[12].u = rd32(c, (RW(18) + 0));
c->f[13].u = rd32(c, (RW(2) + 0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 196)));
{ u32 t = RW(25); SET64(31, 0x22f6bc); SET32(18, RW(2) + 4); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F6C8:;
SET32(2, RW(0) + 3);
{ int t = RD(16) != RD(2);  if (t) goto L_0022F9C8; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET32(2, RW(18) + 4);
c->f[12].u = rd32(c, (RW(18) + 0));
c->f[13].u = rd32(c, (RW(2) + 0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 196)));
{ u32 t = RW(25); SET64(31, 0x22f6f4); SET32(18, RW(2) + 4); rt_call(c, t); }
SET64(2, rd8(c, (RW(19) + 4)));
SET64(3, RD(18) + RD(0));
SET64(2, RD(2) & 0x2);
{ int t = RD(2) == RD(0); SET32(18, RW(18) + 4); if (t) goto L_0022F710; }
SET64(5, (s32)rd32(c, (RW(3) + 0))); goto L_0022F71C;
L_0022F710:;
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
L_0022F71C:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
{ u32 t = RW(25); SET64(31, 0x22f730);  rt_call(c, t); }
 goto L_0022F9C8;
L_0022F738:;
SET32(3, RW(18) + 4);
c->f[12].u = rd32(c, (RW(18) + 0));
SET32(2, RW(0) + 1);
{ int t = RD(16) != RD(2); SET64(18, RD(3) + RD(0)); if (t) goto L_0022F768; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x22f760);  rt_call(c, t); }
 goto L_0022F9C8;
L_0022F768:;
SET32(2, RW(0) + 2);
{ int t = RD(16) != RD(2);  if (t) goto L_0022F9C8; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
c->f[13].u = rd32(c, (RW(3) + 0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x22f78c); SET32(18, RW(3) + 4); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F798:;
SET64(2, RD(18) + RD(0));
{ int t = RD(4) == RD(0); SET32(18, RW(18) + 4); if (t) goto L_0022F7AC; }
SET64(2, (s32)rd32(c, (RW(2) + 0))); goto L_0022F7B8;
L_0022F7AC:;
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
L_0022F7B8:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(5, RD(2) << 48);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x22f7d0); SET64(5, RSD(5) >> 48); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F7D8:;
SET64(25, (s32)rd32(c, (RW(19) + 28)));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x22f7ec); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 28)));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x22f800); SET32(5, RW(0) + 1); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F808:;
SET32(2, RW(0) + 1);
c->f[12].u = rd32(c, (RW(18) + 0));
{ int t = RD(16) != RD(2); SET32(18, RW(18) + 4); if (t) goto L_0022F838; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 208)));
{ u32 t = RW(25); SET64(31, 0x22f82c);  rt_call(c, t); }
 goto L_0022F9C8;
L_0022F838:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
c->f[13].u = rd32(c, (RW(18) + 0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 204)));
{ u32 t = RW(25); SET64(31, 0x22f850); SET32(18, RW(18) + 4); rt_call(c, t); }
SET32(2, RW(0) + 3);
{ int t = RD(16) != RD(2);  if (t) goto L_0022F9C8; }
SET64(2, rd8(c, (RW(19) + 4)));
SET64(3, RD(18) + RD(0));
SET64(2, RD(2) & 0x2);
{ int t = RD(2) == RD(0); SET32(18, RW(18) + 4); if (t) goto L_0022F878; }
SET64(5, (s32)rd32(c, (RW(3) + 0))); goto L_0022F884;
L_0022F878:;
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
L_0022F884:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 200)));
{ u32 t = RW(25); SET64(31, 0x22f898);  rt_call(c, t); }
 goto L_0022F9C8;
L_0022F8A0:;
{ int t = RD(16) != RD(0);  if (t) goto L_0022F8D0; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x22f8c4); c->f[13].u = c->f[12].u; rt_call(c, t); }
 goto L_0022F9C8;
L_0022F8D0:;
SET32(2, RW(0) + 2);
{ int t = RD(16) != RD(2);  if (t) goto L_0022F9C8; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
c->f[12].u = rd32(c, (RW(18) + 0));
c->f[13].u = rd32(c, (RW(18) + 4));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x22f8f8); SET32(18, RW(18) + 8); rt_call(c, t); }
 goto L_0022F9C8;
L_0022F900:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
c->f[13].u = RW(0);
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x22f920);  rt_call(c, t); }
 goto L_0022F9C8;
L_0022F928:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x22f94c);  rt_call(c, t); }
 goto L_0022F9C8;
L_0022F958:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(2, (s64)(s32)0x3f000000);
c->f[13].u = RW(2);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
c->f[12].u = RW(0);
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x22f978);  rt_call(c, t); }
 goto L_0022F9C8;
L_0022F980:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s64)(s32)0x3f000000);
c->f[13].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x22f9a4);  rt_call(c, t); }
 goto L_0022F9C8;
L_0022F9B0:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
c->f[12].u = rd32(c, (RW(18) + 0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 268)));
{ u32 t = RW(25); SET64(31, 0x22f9c8); SET32(18, RW(18) + 4); rt_call(c, t); }
L_0022F9C8:;
SET32(17, RW(17) + -1);
if (RD(17) != RD(0)) { SET64(2, rd8(c, (RW(19) + 4))); { POLL(); goto L_0022EFE8; } }
L_0022F9D8:;
SET64(2, (s16)rd16(c, (RW(19) + 16)));
SET32(2, RW(2) + 1);
wr16(c, (RW(19) + 16), (u16)RW(2));
SET64(25, (s32)rd32(c, (RW(19) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x22f9f4); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}
void F_0022EF70(Ctx *c) { B_0022EF70(c, 0x22ef70); }
void F_0022F050(Ctx *c) { B_0022EF70(c, 0x22f050); }
void F_0022F0C0(Ctx *c) { B_0022EF70(c, 0x22f0c0); }
void F_0022F128(Ctx *c) { B_0022EF70(c, 0x22f128); }
void F_0022F198(Ctx *c) { B_0022EF70(c, 0x22f198); }
void F_0022F218(Ctx *c) { B_0022EF70(c, 0x22f218); }
void F_0022F2B8(Ctx *c) { B_0022EF70(c, 0x22f2b8); }
void F_0022F370(Ctx *c) { B_0022EF70(c, 0x22f370); }
void F_0022F408(Ctx *c) { B_0022EF70(c, 0x22f408); }
void F_0022F428(Ctx *c) { B_0022EF70(c, 0x22f428); }
void F_0022F448(Ctx *c) { B_0022EF70(c, 0x22f448); }
void F_0022F490(Ctx *c) { B_0022EF70(c, 0x22f490); }
void F_0022F4B0(Ctx *c) { B_0022EF70(c, 0x22f4b0); }
void F_0022F4D0(Ctx *c) { B_0022EF70(c, 0x22f4d0); }
void F_0022F518(Ctx *c) { B_0022EF70(c, 0x22f518); }
void F_0022F628(Ctx *c) { B_0022EF70(c, 0x22f628); }
void F_0022F738(Ctx *c) { B_0022EF70(c, 0x22f738); }
void F_0022F798(Ctx *c) { B_0022EF70(c, 0x22f798); }
void F_0022F7D8(Ctx *c) { B_0022EF70(c, 0x22f7d8); }
void F_0022F808(Ctx *c) { B_0022EF70(c, 0x22f808); }
void F_0022F8A0(Ctx *c) { B_0022EF70(c, 0x22f8a0); }
void F_0022F900(Ctx *c) { B_0022EF70(c, 0x22f900); }
void F_0022F928(Ctx *c) { B_0022EF70(c, 0x22f928); }
void F_0022F958(Ctx *c) { B_0022EF70(c, 0x22f958); }
void F_0022F980(Ctx *c) { B_0022EF70(c, 0x22f980); }
void F_0022F9B0(Ctx *c) { B_0022EF70(c, 0x22f9b0); }
void F_0022F9C8(Ctx *c) { B_0022EF70(c, 0x22f9c8); }

void F_0022FA10(Ctx *c) { /* func_0022FA10 */
ENTER(0x22fa10);
if (RD(5) == RD(0)) { SET64(3, rd8(c, (RW(4) + 4))); goto L_0022FA28; }
SET64(3, rd8(c, (RW(4) + 4)));
SET64(3, RD(3) | 0x8);
wr8(c, (RW(4) + 4), (u8)RW(3)); goto L_0022FA30;
L_0022FA28:;
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(4) + 4), (u8)RW(3));
L_0022FA30:;
 return;
}

void F_0022FA40(Ctx *c) { /* func_0022FA40 */
ENTER(0x22fa40);
wr32(c, (RW(4) + 8), c->f[12].u); return;
}

void F_0022FA50(Ctx *c) { /* func_0022FA50 */
ENTER(0x22fa50);
SET64(2, (s32)rd32(c, (RW(4) + 24))); return;
}

void F_0022FA60(Ctx *c) { /* func_0022FA60 */
ENTER(0x22fa60);
SET64(6, (s32)rd32(c, (RW(4) + 20)));
SET64(5, RD(5) << 48);
SET64(5, RSD(5) >> 48);
SET64(7, RD(0) + RD(0));
L_0022FA70:;
SET64(3, (s32)rd32(c, (RW(6) + 8)));
{ int t = RD(3) == RD(5);  if (t) goto L_0022FA88; }
SET32(6, RW(6) + 12);
SET32(7, RW(7) + 1); { POLL(); goto L_0022FA70; }
L_0022FA88:;
wr16(c, (RW(4) + 16), (u16)RW(7));
wr32(c, (RW(4) + 12), RW(0)); return;
}

void F_0022FAA0(Ctx *c) { /* func_0022FAA0 */
ENTER(0x22faa0);
SET64(6, (s16)rd16(c, (RW(4) + 16)));
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET32(5, RW(6) << 1);
SET32(5, RW(5) + RW(6));
SET32(5, RW(5) << 2);
SET32(3, RW(3) + RW(5));
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 12), c->f[0].u); return;
}

void F_0022FAD0(Ctx *c) { /* func_0022FAD0 */
ENTER(0x22fad0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
if (RD(16) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_0022FB34; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, RD(5) << 48);
SET32(3, RW(3) + -25664);
SET64(6, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 28), RW(3));
SET32(6, RW(6) + -25596);
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(16) + 32);
SET64(2, RSD(2) >> 48);
wr32(c, (RW(5) + 0), RW(6));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(5) + 4), RW(3));
wr32(c, (RW(16) + 20), RW(0));
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 24), RW(0)); if (t) goto L_0022FB30; }
SET64(31, 0x22fb30);  F_001004B0(c);
L_0022FB30:;
SET64(2, RD(16) + RD(0));
L_0022FB34:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0022FB50(Ctx *c) { /* func_0022FB50 */
ENTER(0x22fb50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
if (RD(16) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_0022FBAC; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, RD(5) << 48);
SET32(3, RW(3) + -28160);
SET64(6, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 24), RW(3));
SET32(6, RW(6) + -28148);
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(16) + 28);
SET64(2, RSD(2) >> 48);
wr32(c, (RW(5) + 0), RW(6));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(3) - RW(5));
{ int t = RSD(2) <= 0; wr32(c, (RW(5) + 4), RW(3)); if (t) goto L_0022FBA8; }
SET64(31, 0x22fba8);  F_001004B0(c);
L_0022FBA8:;
SET64(2, RD(16) + RD(0));
L_0022FBAC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0022FBC0(Ctx *c) { /* func_0022FBC0 */
ENTER(0x22fbc0);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 8))); goto L_0022FBE8; }
SET64(3, (s32)rd32(c, (RW(2) + 20)));
SET32(4, RW(5) << 2);
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(3)); goto L_0022FBF4;
L_0022FBE8:;
SET32(3, RW(5) << 2);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
L_0022FBF4:;
 return;
}

void F_0022FC00(Ctx *c) { /* func_0022FC00 */
ENTER(0x22fc00);
wr32(c, (RW(4) + 128), c->f[12].u); return;
}

void F_0022FC10(Ctx *c) { /* func_0022FC10 */
ENTER(0x22fc10);
wr32(c, (RW(4) + 120), c->f[12].u);
wr32(c, (RW(4) + 124), c->f[13].u); return;
}

void F_0022FC20(Ctx *c) { /* func_0022FC20 */
ENTER(0x22fc20);
SET64(2, rd8(c, (RW(4) + 4)));
SET64(2, RD(2) & 0x8);
SET64(2, RD(0) < RD(2)); return;
}

void F_0022FC30(Ctx *c) { /* func_0022FC30 */
ENTER(0x22fc30);
SET32(2, RW(0) + 1); return;
}

void F_0022FC40(Ctx *c) { /* func_0022FC40 */
ENTER(0x22fc40);
 return;
}

void F_0022FC50(Ctx *c) { /* func_0022FC50 */
ENTER(0x22fc50);
c->f[0].u = rd32(c, (RW(4) + 24)); return;
}

void F_0022FC60(Ctx *c) { /* func_0022FC60 */
ENTER(0x22fc60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[20].u = c->f[13].u;
c->f[13].u = RW(0);
SET64(31, 0x22fc84); SET32(4, RW(16) + 544); F_002267C0(c);
c->f[12].u = RW(0);
SET64(31, 0x22fc90); SET32(4, RW(16) + 544); F_002267B0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x22fc9c); SET32(4, RW(16) + 544); F_002267A0(c);
SET32(4, RW(16) + 544);
SET64(31, 0x22fca8); SET32(5, RW(0) + 1); F_00226750(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022FCC0(Ctx *c) { /* func_0022FCC0 */
ENTER(0x22fcc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
c->f[13].u = RW(0);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[20].u = c->f[12].u;
SET64(31, 0x22fce4); SET32(4, RW(16) + 544); F_00226830(c);
SET32(4, RW(16) + 544);
c->f[13].u = RW(0);
SET64(31, 0x22fcf4); c->f[12].u = c->f[20].u; F_002267F0(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022FD10(Ctx *c) { /* func_0022FD10 */
ENTER(0x22fd10);
c->f[0].u = rd32(c, (RW(4) + 560)); return;
}

void F_0022FD20(Ctx *c) { /* func_0022FD20 */
ENTER(0x22fd20);
wr16(c, (RW(4) + 546), (u16)RW(5)); return;
}

void F_0022FD30(Ctx *c) { /* func_0022FD30 */
ENTER(0x22fd30);
c->f[0].u = rd32(c, (RW(4) + 2080)); return;
}

void F_0022FD40(Ctx *c) { /* func_0022FD40 */
ENTER(0x22fd40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[20].u = c->f[12].u;
SET64(31, 0x22fd60); SET32(4, RW(16) + 2064); F_0022FDE0(c);
c->f[12].u = c->f[20].u;
c->f[13].u = RW(0);
SET64(31, 0x22fd70); SET32(4, RW(16) + 2064); F_0022FDA0(c);
SET64(31, 0x22fd78); SET32(4, RW(16) + 2064); F_0022FD90(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022FD90(Ctx *c) { /* func_0022FD90 */
ENTER(0x22fd90);
c->f[0].u = rd32(c, (RW(4) + 16)); return;
}

void F_0022FDA0(Ctx *c) { /* func_0022FDA0 */
ENTER(0x22fda0);
c->f[1].u = rd32(c, (RW(4) + 16));
c->f[0].u = RW(0);
c->f[1].f = fpu(F(12) - F(1));
wr32(c, (RW(4) + 56), c->f[1].u);
c->f[1].u = rd32(c, (RW(4) + 20));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(4) + 60), c->f[0].u);
wr32(c, (RW(4) + 32), c->f[12].u);
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), c->f[13].u);
SET64(3, rd8(c, (RW(4) + 0)));
SET64(3, RD(3) | 0x2);
wr8(c, (RW(4) + 0), (u8)RW(3)); return;
}

void F_0022FDE0(Ctx *c) { /* func_0022FDE0 */
ENTER(0x22fde0);
wr32(c, (RW(4) + 16), c->f[12].u);
wr32(c, (RW(4) + 20), RW(0)); return;
}

void F_0022FDF0(Ctx *c) { /* func_0022FDF0 */
ENTER(0x22fdf0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[20].u = c->f[13].u;
c->f[13].u = RW(0);
SET64(31, 0x22fe14); SET32(4, RW(16) + 2064); F_002267C0(c);
c->f[12].u = RW(0);
SET64(31, 0x22fe20); SET32(4, RW(16) + 2064); F_002267B0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x22fe2c); SET32(4, RW(16) + 2064); F_002267A0(c);
SET32(4, RW(16) + 2064);
SET64(31, 0x22fe38); SET32(5, RW(0) + 1); F_00226750(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022FE50(Ctx *c) { /* func_0022FE50 */
ENTER(0x22fe50);
wr16(c, (RW(4) + 2066), (u16)RW(5)); return;
}

void F_0022FE60(Ctx *c) { /* func_0022FE60 */
ENTER(0x22fe60);
c->f[0].u = rd32(c, (RW(4) + 2000)); return;
}

void F_0022FE70(Ctx *c) { /* func_0022FE70 */
ENTER(0x22fe70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[20].u = c->f[12].u;
SET64(31, 0x22fe90); SET32(4, RW(16) + 1984); F_0022FF10(c);
c->f[12].u = c->f[20].u;
c->f[13].u = RW(0);
SET64(31, 0x22fea0); SET32(4, RW(16) + 1984); F_0022FED0(c);
SET64(31, 0x22fea8); SET32(4, RW(16) + 1984); F_0022FEC0(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022FEC0(Ctx *c) { /* func_0022FEC0 */
ENTER(0x22fec0);
c->f[0].u = rd32(c, (RW(4) + 16)); return;
}

void F_0022FED0(Ctx *c) { /* func_0022FED0 */
ENTER(0x22fed0);
c->f[1].u = rd32(c, (RW(4) + 16));
c->f[0].u = RW(0);
c->f[1].f = fpu(F(12) - F(1));
wr32(c, (RW(4) + 56), c->f[1].u);
c->f[1].u = rd32(c, (RW(4) + 20));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(4) + 60), c->f[0].u);
wr32(c, (RW(4) + 32), c->f[12].u);
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), c->f[13].u);
SET64(3, rd8(c, (RW(4) + 0)));
SET64(3, RD(3) | 0x2);
wr8(c, (RW(4) + 0), (u8)RW(3)); return;
}

void F_0022FF10(Ctx *c) { /* func_0022FF10 */
ENTER(0x22ff10);
wr32(c, (RW(4) + 16), c->f[12].u);
wr32(c, (RW(4) + 20), RW(0)); return;
}

void F_0022FF20(Ctx *c) { /* func_0022FF20 */
ENTER(0x22ff20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[20].u = c->f[13].u;
c->f[13].u = RW(0);
SET64(31, 0x22ff44); SET32(4, RW(16) + 1984); F_002267C0(c);
c->f[12].u = RW(0);
SET64(31, 0x22ff50); SET32(4, RW(16) + 1984); F_002267B0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x22ff5c); SET32(4, RW(16) + 1984); F_002267A0(c);
SET32(4, RW(16) + 1984);
SET64(31, 0x22ff68); SET32(5, RW(0) + 1); F_00226750(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0022FF80(Ctx *c) { /* func_0022FF80 */
ENTER(0x22ff80);
wr16(c, (RW(4) + 1986), (u16)RW(5)); return;
}

void F_0022FF90(Ctx *c) { /* func_0022FF90 */
ENTER(0x22ff90);
wr16(c, (RW(4) + 18), (u16)RW(5)); return;
}

void F_0022FFA0(Ctx *c) { /* func_0022FFA0 */
ENTER(0x22ffa0);
c->f[0].u = RW(0);
 return;
}

void F_0022FFB0(Ctx *c) { /* func_0022FFB0 */
ENTER(0x22ffb0);
c->f[0].u = RW(0);
 return;
}

void F_0022FFC0(Ctx *c) { /* func_0022FFC0 */
ENTER(0x22ffc0);
c->f[0].u = RW(0);
 return;
}

void F_0022FFD0(Ctx *c) { /* func_0022FFD0 */
ENTER(0x22ffd0);
c->f[0].u = RW(0);
 return;
}

void F_0022FFE0(Ctx *c) { /* func_0022FFE0 */
ENTER(0x22ffe0);
 return;
}

void F_0022FFF0(Ctx *c) { /* func_0022FFF0 */
ENTER(0x22fff0);
 return;
}

static void B_00230000(Ctx *c, u32 entry) { /* func_00230000 */
ENTER(entry);
switch (entry) { case 0x230008: goto L_00230008; case 0x230018: goto L_00230018; case 0x23001c: goto L_0023001C; case 0x230020: goto L_00230020; case 0x230024: goto L_00230024; case 0x230028: goto L_00230028; case 0x23002c: goto L_0023002C; case 0x230040: goto L_00230040; case 0x23004c: goto L_0023004C; case 0x230054: goto L_00230054; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
L_00230008:;
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[20].u = c->f[13].u;
L_00230018:;
c->f[13].u = RW(0);
L_0023001C:;
SET64(31, 0x230024); SET32(4, RW(16) + 464); F_002267C0(c);
if (0) { L_00230020:; SET32(4, RW(16) + 464); }
L_00230024:;
c->f[12].u = RW(0);
L_00230028:;
SET64(31, 0x230030); SET32(4, RW(16) + 464); F_002267B0(c);
if (0) { L_0023002C:; SET32(4, RW(16) + 464); }
c->f[12].u = c->f[20].u;
SET64(31, 0x23003c); SET32(4, RW(16) + 464); F_002267A0(c);
SET32(4, RW(16) + 464);
L_00230040:;
SET64(31, 0x230048); SET32(5, RW(0) + 1); F_00226750(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_0023004C:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
L_00230054:;
SET32(29, RW(29) + 48); return;
}
void F_00230000(Ctx *c) { B_00230000(c, 0x230000); }
void F_00230008(Ctx *c) { B_00230000(c, 0x230008); }
void F_00230018(Ctx *c) { B_00230000(c, 0x230018); }
void F_0023001C(Ctx *c) { B_00230000(c, 0x23001c); }
void F_00230020(Ctx *c) { B_00230000(c, 0x230020); }
void F_00230024(Ctx *c) { B_00230000(c, 0x230024); }
void F_00230028(Ctx *c) { B_00230000(c, 0x230028); }
void F_0023002C(Ctx *c) { B_00230000(c, 0x23002c); }
void F_00230040(Ctx *c) { B_00230000(c, 0x230040); }
void F_0023004C(Ctx *c) { B_00230000(c, 0x23004c); }
void F_00230054(Ctx *c) { B_00230000(c, 0x230054); }

void F_00230060(Ctx *c) { /* func_00230060 */
ENTER(0x230060);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
c->f[13].u = RW(0);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[20].u = c->f[12].u;
SET64(31, 0x230084); SET32(4, RW(16) + 464); F_00226830(c);
SET32(4, RW(16) + 464);
c->f[13].u = RW(0);
SET64(31, 0x230094); c->f[12].u = c->f[20].u; F_002267F0(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002300B0(Ctx *c) { /* func_002300B0 */
ENTER(0x2300b0);
c->f[0].u = rd32(c, (RW(4) + 480)); return;
}

void F_002300C0(Ctx *c) { /* func_002300C0 */
ENTER(0x2300c0);
wr16(c, (RW(4) + 466), (u16)RW(5)); return;
}

void F_002300D0(Ctx *c) { /* func_002300D0 */
ENTER(0x2300d0);
SET32(29, RW(29) + -80);
SET32(3, RW(0) + 4);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(5) << 48);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RSD(16) >> 48);
c->f[20].u = c->f[13].u;
{ int t = RD(16) != RD(3); c->f[21].u = c->f[12].u; if (t) goto L_0023015C; }
{ int t = RSD(16) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_002301A0; }
SET64(17, RD(4) + RD(0));
L_00230110:;
c->f[13].u = RW(0);
SET32(4, RW(17) + 144);
SET64(31, 0x230120); c->f[12].u = c->f[21].u; F_002267C0(c);
c->f[12].u = RW(0);
SET64(31, 0x23012c); SET32(4, RW(17) + 144); F_002267B0(c);
SET32(4, RW(17) + 144);
SET64(31, 0x230138); c->f[12].u = c->f[20].u; F_002267A0(c);
SET32(4, RW(17) + 144);
SET64(31, 0x230144); SET32(5, RW(0) + 1); F_00226750(c);
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < RSD(16));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 80); if (t) { POLL(); goto L_00230110; } }
SET64(31, rd64(c, (RW(29) + 64))); goto L_002301A4;
L_0023015C:;
SET32(2, RW(16) << 2);
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 4);
SET32(2, RW(4) + RW(2));
SET32(16, RW(2) + 144);
c->f[13].u = RW(0);
SET64(31, 0x23017c); SET64(4, RD(16) + RD(0)); F_002267C0(c);
c->f[12].u = RW(0);
SET64(31, 0x230188); SET64(4, RD(16) + RD(0)); F_002267B0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x230194); SET64(4, RD(16) + RD(0)); F_002267A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2301a0); SET32(5, RW(0) + 1); F_00226750(c);
L_002301A0:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002301A4:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002301C0(Ctx *c) { /* func_002301C0 */
ENTER(0x2301c0);
SET32(29, RW(29) + -80);
SET32(3, RW(0) + 4);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(16, RD(5) << 48);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RSD(16) >> 48);
{ int t = RD(16) != RD(3); c->f[20].u = c->f[12].u; if (t) goto L_00230230; }
{ int t = RSD(16) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00230260; }
SET64(17, RD(4) + RD(0));
L_002301F8:;
c->f[13].u = RW(0);
SET32(4, RW(17) + 144);
SET64(31, 0x230208); c->f[12].u = c->f[20].u; F_00226830(c);
c->f[13].u = RW(0);
SET32(4, RW(17) + 144);
SET64(31, 0x230218); c->f[12].u = c->f[20].u; F_002267F0(c);
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < RSD(16));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 80); if (t) { POLL(); goto L_002301F8; } }
SET64(31, rd64(c, (RW(29) + 64))); goto L_00230264;
L_00230230:;
SET32(2, RW(16) << 2);
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 4);
SET32(2, RW(4) + RW(2));
SET32(16, RW(2) + 144);
c->f[13].u = RW(0);
SET64(31, 0x230250); SET64(4, RD(16) + RD(0)); F_00226830(c);
SET64(4, RD(16) + RD(0));
c->f[13].u = RW(0);
SET64(31, 0x230260); c->f[12].u = c->f[20].u; F_002267F0(c);
L_00230260:;
SET64(31, rd64(c, (RW(29) + 64)));
L_00230264:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00230280(Ctx *c) { /* func_00230280 */
ENTER(0x230280);
SET64(5, RD(5) << 48);
SET32(2, RW(0) + 4);
SET64(5, RSD(5) >> 48);
c->f[0].u = RW(0);
if (RD(5) != RD(2)) { SET32(2, RW(5) << 2); goto L_00230380; }
{ int t = RSD(5) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_00230360; }
SET64(1, RSD(5) < (s64)9);
{ int t = RD(1) != RD(0); SET32(3, RW(5) + -8); if (t) goto L_00230328; }
{ int t = RSD(5) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_002302CC; }
SET64(1, (s64)(s32)0x7fff0000);
SET64(1, RD(1) | 0xffff);
SET64(1, RSD(5) < RSD(1));
{ int t = RD(1) == RD(0);  if (t) goto L_002302CC; }
SET64(2, RD(0) + (s64)1);
L_002302CC:;
{ int t = RD(2) == RD(0);  if (t) goto L_00230328; }
SET64(6, RD(4) + RD(0));
L_002302D8:;
c->f[3].u = rd32(c, (RW(6) + 160));
SET32(7, RW(7) + 8);
c->f[2].u = rd32(c, (RW(6) + 240));
SET64(2, RSD(7) < RSD(3));
c->f[1].u = rd32(c, (RW(6) + 320));
c->f[0].f = fpu(F(0) + F(3));
c->f[0].f = fpu(F(0) + F(2));
c->f[3].f = fpu(F(0) + F(1));
c->f[2].u = rd32(c, (RW(6) + 400));
c->f[1].u = rd32(c, (RW(6) + 480));
c->f[0].u = rd32(c, (RW(6) + 560));
c->f[2].f = fpu(F(3) + F(2));
c->f[1].f = fpu(F(2) + F(1));
c->f[2].f = fpu(F(1) + F(0));
c->f[1].u = rd32(c, (RW(6) + 640));
c->f[0].u = rd32(c, (RW(6) + 720));
c->f[1].f = fpu(F(2) + F(1));
SET32(6, RW(6) + 640);
{ int t = RD(2) != RD(0); c->f[0].f = fpu(F(1) + F(0)); if (t) { POLL(); goto L_002302D8; } }
L_00230328:;
SET64(1, RSD(7) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_00230360; }
SET32(2, RW(7) << 2);
SET32(2, RW(2) + RW(7));
SET32(2, RW(2) << 4);
SET32(3, RW(4) + RW(2));
L_00230344:;
c->f[1].u = rd32(c, (RW(3) + 160));
SET32(7, RW(7) + 1);
SET64(2, RSD(7) < RSD(5));
c->f[0].f = fpu(F(0) + F(1));
SET32(3, RW(3) + 80);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00230344; } }
L_00230360:;
SET64(2, (s64)(s32)0x40800000);
c->f[1].u = RW(2);
c->f[0].f = fpu_div(F(0), F(1));
 goto L_00230390;
L_00230380:;
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 4);
SET32(2, RW(2) + RW(4));
c->f[0].u = rd32(c, (RW(2) + 160));
L_00230390:;
 return;
}

void F_002303A0(Ctx *c) { /* func_002303A0 */
ENTER(0x2303a0);
SET64(7, RD(6) << 48);
SET32(3, RW(0) + 4);
SET64(7, RSD(7) >> 48);
if (RD(7) != RD(3)) { SET32(3, RW(7) << 2); goto L_00230468; }
{ int t = RSD(7) <= 0; SET64(9, RD(0) + RD(0)); if (t) goto L_00230478; }
SET64(1, RSD(7) < (s64)9);
{ int t = RD(1) != RD(0); SET32(6, RW(7) + -8); if (t) goto L_00230428; }
{ int t = RSD(7) < 0; SET64(3, RD(0) + RD(0)); if (t) goto L_002303E8; }
SET64(1, (s64)(s32)0x7fff0000);
SET64(1, RD(1) | 0xffff);
SET64(1, RSD(7) < RSD(1));
{ int t = RD(1) == RD(0);  if (t) goto L_002303E8; }
SET64(3, RD(0) + (s64)1);
L_002303E8:;
{ int t = RD(3) == RD(0);  if (t) goto L_00230428; }
SET64(8, RD(4) + RD(0));
L_002303F4:;
wr16(c, (RW(8) + 146), (u16)RW(5));
SET32(9, RW(9) + 8);
wr16(c, (RW(8) + 226), (u16)RW(5));
SET64(3, RSD(9) < RSD(6));
wr16(c, (RW(8) + 306), (u16)RW(5));
wr16(c, (RW(8) + 386), (u16)RW(5));
wr16(c, (RW(8) + 466), (u16)RW(5));
wr16(c, (RW(8) + 546), (u16)RW(5));
wr16(c, (RW(8) + 626), (u16)RW(5));
wr16(c, (RW(8) + 706), (u16)RW(5));
{ int t = RD(3) != RD(0); SET32(8, RW(8) + 640); if (t) { POLL(); goto L_002303F4; } }
L_00230428:;
SET64(1, RSD(9) < RSD(7));
{ int t = RD(1) == RD(0);  if (t) goto L_00230478; }
SET32(3, RW(9) << 2);
SET32(3, RW(3) + RW(9));
SET32(3, RW(3) << 4);
SET32(4, RW(4) + RW(3));
L_00230444:;
SET32(9, RW(9) + 1);
wr16(c, (RW(4) + 146), (u16)RW(5));
SET64(3, RSD(9) < RSD(7));
SET32(4, RW(4) + 80);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00230444; } }
 goto L_00230478;
L_00230468:;
SET32(3, RW(3) + RW(7));
SET32(3, RW(3) << 4);
SET32(3, RW(3) + RW(4));
wr16(c, (RW(3) + 146), (u16)RW(5));
L_00230478:;
 return;
}

void F_00230480(Ctx *c) { /* func_00230480 */
ENTER(0x230480);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[21].u = c->f[12].u;
c->f[20].u = c->f[13].u;
SET64(3, RD(18) << 48);
L_002304B4:;
SET64(17, RD(0) + RD(0));
SET64(3, RSD(3) >> 48);
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 6);
SET32(16, RW(19) + RW(2));
L_002304D0:;
SET64(3, RD(17) << 48);
SET64(3, RSD(3) >> 48);
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 4);
SET32(2, RW(16) + RW(2));
c->f[12].u = c->f[21].u;
SET32(4, RW(2) + 704);
SET64(31, 0x2304f8); c->f[13].u = c->f[20].u; F_002267F0(c);
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)4);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002304D0; } }
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < (s64)3);
if (RD(3) != RD(0)) { SET64(3, RD(18) << 48); { POLL(); goto L_002304B4; } }
SET64(31, rd64(c, (RW(29) + 80)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_00230540(Ctx *c) { /* func_00230540 */
ENTER(0x230540);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = c->f[12].u;
SET64(3, RD(18) << 48);
L_0023056C:;
SET64(17, RD(0) + RD(0));
SET64(3, RSD(3) >> 48);
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 6);
SET32(16, RW(19) + RW(2));
L_00230588:;
SET64(3, RD(17) << 48);
SET64(3, RSD(3) >> 48);
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 4);
SET32(2, RW(16) + RW(2));
c->f[12].u = c->f[20].u;
SET64(31, 0x2305ac); SET32(4, RW(2) + 704); F_0022D040(c);
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)4);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00230588; } }
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < (s64)3);
if (RD(3) != RD(0)) { SET64(3, RD(18) << 48); { POLL(); goto L_0023056C; } }
SET64(31, rd64(c, (RW(29) + 80)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002305F0(Ctx *c) { /* func_002305F0 */
ENTER(0x2305f0);
SET64(7, RD(0) + RD(0));
L_002305F4:;
SET64(6, RD(7) << 48);
SET64(6, RSD(6) >> 48);
SET32(7, RW(7) + 1);
SET32(3, RW(6) << 2);
SET32(6, RW(3) + RW(6));
SET32(6, RW(6) << 6);
SET64(3, RSD(7) < (s64)3);
SET32(6, RW(4) + RW(6));
wr16(c, (RW(6) + 706), (u16)RW(5));
wr16(c, (RW(6) + 786), (u16)RW(5));
wr16(c, (RW(6) + 866), (u16)RW(5));
{ int t = RD(3) != RD(0); wr16(c, (RW(6) + 946), (u16)RW(5)); if (t) { POLL(); goto L_002305F4; } }
 return;
}

void F_00230630(Ctx *c) { /* func_00230630 */
ENTER(0x230630);
wr16(c, (RW(4) + 2), (u16)RW(5)); return;
}

void F_00230640(Ctx *c) { /* func_00230640 */
ENTER(0x230640);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x23065c); c->f[20].u = c->f[14].u; F_002267C0(c);
c->f[12].u = RW(0);
SET64(31, 0x230668); SET64(4, RD(16) + RD(0)); F_002267B0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x230674); SET64(4, RD(16) + RD(0)); F_002267A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x230680); SET32(5, RW(0) + 1); F_00226750(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002306A0(Ctx *c) { /* func_002306A0 */
ENTER(0x2306a0);
wr32(c, (RW(4) + 24), RW(5)); return;
}

void F_002306B0(Ctx *c) { /* func_002306B0 */
ENTER(0x2306b0);
wr32(c, (RW(4) + 20), RW(5)); return;
}

void F_002306C0(Ctx *c) { /* func_002306C0 */
ENTER(0x2306c0);
 return;
}

void F_002306D0(Ctx *c) { /* func_002306D0 */
ENTER(0x2306d0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(20) + RD(0));
L_002306F8:;
SET64(18, RD(0) + RD(0));
SET64(16, RD(17) + RD(0));
L_00230700:;
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x230710); SET32(4, RW(16) + 704); F_001F1AB0(c);
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)4);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 80); if (t) { POLL(); goto L_00230700; } }
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < (s64)3);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 320); if (t) { POLL(); goto L_002306F8; } }
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x230740); SET32(4, RW(20) + 1984); F_001F1AB0(c);
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x230750); SET32(4, RW(20) + 2064); F_001F1AB0(c);
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x230760); SET32(4, RW(20) + 1664); F_001F1AB0(c);
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x230770); SET32(4, RW(20) + 1744); F_001F1AB0(c);
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x230780); SET32(4, RW(20) + 1824); F_001F1AB0(c);
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x230790); SET32(4, RW(20) + 1904); F_001F1AB0(c);
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002307B0(Ctx *c) { /* func_002307B0 */
ENTER(0x2307b0);
SET64(3, rd8(c, (RW(4) + 4)));
SET64(3, RD(3) & 0xfd);
wr8(c, (RW(4) + 4), (u8)RW(3)); return;
}

void F_002307C0(Ctx *c) { /* func_002307C0 */
ENTER(0x2307c0);
SET64(3, rd8(c, (RW(4) + 4)));
SET64(3, RD(3) | 0x2);
wr8(c, (RW(4) + 4), (u8)RW(3)); return;
}

void F_002307D0(Ctx *c) { /* func_002307D0 */
ENTER(0x2307d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, rd8(c, (RW(4) + 4)));
SET64(2, RD(2) & 0xfe);
wr8(c, (RW(4) + 4), (u8)RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2307f4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00230800(Ctx *c) { /* func_00230800 */
ENTER(0x230800);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, rd8(c, (RW(4) + 4)));
SET64(2, RD(2) | 0x1);
wr8(c, (RW(4) + 4), (u8)RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x230824); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00230830(Ctx *c) { /* func_00230830 */
ENTER(0x230830);
c->f[0].u = rd32(c, (RW(4) + 2184)); return;
}

void F_00230840(Ctx *c) { /* func_00230840 */
ENTER(0x230840);
c->f[0].u = rd32(c, (RW(4) + 2180)); return;
}

void F_00230850(Ctx *c) { /* func_00230850 */
ENTER(0x230850);
c->f[0].u = rd32(c, (RW(4) + 2176)); return;
}

void F_00230860(Ctx *c) { /* func_00230860 */
ENTER(0x230860);
 return;
}

void F_00230870(Ctx *c) { /* func_00230870 */
ENTER(0x230870);
SET32(2, RW(0) + 1); return;
}

void F_00230880(Ctx *c) { /* func_00230880 */
ENTER(0x230880);
c->f[0].u = RW(0);
 return;
}

void F_00230890(Ctx *c) { /* func_00230890 */
ENTER(0x230890);
 return;
}

void F_002308A0(Ctx *c) { /* func_002308A0 */
ENTER(0x2308a0);
 return;
}

void F_002308B0(Ctx *c) { /* func_002308B0 */
ENTER(0x2308b0);
 return;
}

void F_002308C0(Ctx *c) { /* func_002308C0 */
ENTER(0x2308c0);
c->f[0].u = RW(0);
 return;
}

void F_002308D0(Ctx *c) { /* func_002308D0 */
ENTER(0x2308d0);
 return;
}

void F_002308E0(Ctx *c) { /* func_002308E0 */
ENTER(0x2308e0);
 return;
}

void F_002308F0(Ctx *c) { /* func_002308F0 */
ENTER(0x2308f0);
 return;
}

void F_00230900(Ctx *c) { /* func_00230900 */
ENTER(0x230900);
 return;
}

void F_00230910(Ctx *c) { /* func_00230910 */
ENTER(0x230910);
 return;
}

void F_00230920(Ctx *c) { /* func_00230920 */
ENTER(0x230920);
 return;
}

void F_00230930(Ctx *c) { /* func_00230930 */
ENTER(0x230930);
 return;
}

void F_00230940(Ctx *c) { /* func_00230940 */
ENTER(0x230940);
 return;
}

void F_00230950(Ctx *c) { /* func_00230950 */
ENTER(0x230950);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -32);
SET32(4, RW(4) + RW(25)); { F_0022FC20(c); return; }
}

void F_00230960(Ctx *c) { /* func_00230960 */
ENTER(0x230960);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -32);
SET32(4, RW(4) + RW(25)); { F_0022FA10(c); return; }
}

void F_00230970(Ctx *c) { /* func_00230970 */
ENTER(0x230970);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -32);
SET32(4, RW(4) + RW(25)); { F_0022FF90(c); return; }
}

void F_00230980(Ctx *c) { /* func_00230980 */
ENTER(0x230980);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -32);
SET32(4, RW(4) + RW(25)); { F_0022FA60(c); return; }
}

void F_00230990(Ctx *c) { /* func_00230990 */
ENTER(0x230990);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -32);
SET32(4, RW(4) + RW(25)); { F_0022E170(c); return; }
}

void F_002309A0(Ctx *c) { /* func_002309A0 */
ENTER(0x2309a0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -32);
SET32(4, RW(4) + RW(25)); { F_0022EF40(c); return; }
}

void F_002309B0(Ctx *c) { /* func_002309B0 */
ENTER(0x2309b0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -32);
SET32(4, RW(4) + RW(25)); { F_0022FA40(c); return; }
}

void F_002309C0(Ctx *c) { /* func_002309C0 */
ENTER(0x2309c0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -32);
SET32(4, RW(4) + RW(25)); { F_002306A0(c); return; }
}

void F_002309D0(Ctx *c) { /* func_002309D0 */
ENTER(0x2309d0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -32);
SET32(4, RW(4) + RW(25)); { F_0022FA50(c); return; }
}

void F_002309E0(Ctx *c) { /* func_002309E0 */
ENTER(0x2309e0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -32);
SET32(4, RW(4) + RW(25)); { F_0022FAA0(c); return; }
}

void F_002309F0(Ctx *c) { /* func_002309F0 */
ENTER(0x2309f0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -32);
SET32(4, RW(4) + RW(25)); { F_002306B0(c); return; }
}

void F_00230A00(Ctx *c) { /* func_00230A00 */
ENTER(0x230a00);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -32);
SET32(4, RW(4) + RW(25)); { F_002307B0(c); return; }
}

void F_00230A10(Ctx *c) { /* func_00230A10 */
ENTER(0x230a10);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -32);
SET32(4, RW(4) + RW(25)); { F_002307C0(c); return; }
}

void F_00230A20(Ctx *c) { /* func_00230A20 */
ENTER(0x230a20);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -32);
SET32(4, RW(4) + RW(25)); { F_002307D0(c); return; }
}

void F_00230A30(Ctx *c) { /* func_00230A30 */
ENTER(0x230a30);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -32);
SET32(4, RW(4) + RW(25)); { F_00230800(c); return; }
}

void F_00230A40(Ctx *c) { /* func_00230A40 */
ENTER(0x230a40);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -548);
SET32(4, RW(4) + RW(25)); { F_0022BA30(c); return; }
}

void F_00230A50(Ctx *c) { /* func_00230A50 */
ENTER(0x230a50);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022FC00(c); return; }
}

void F_00230A60(Ctx *c) { /* func_00230A60 */
ENTER(0x230a60);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022DF10(c); return; }
}

void F_00230A70(Ctx *c) { /* func_00230A70 */
ENTER(0x230a70);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022CE40(c); return; }
}

void F_00230A80(Ctx *c) { /* func_00230A80 */
ENTER(0x230a80);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022CE20(c); return; }
}

void F_00230A90(Ctx *c) { /* func_00230A90 */
ENTER(0x230a90);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022FC10(c); return; }
}

void F_00230AA0(Ctx *c) { /* func_00230AA0 */
ENTER(0x230aa0);
SET64(25, (s32)rd32(c, (RW(5) + 4)));
SET32(5, RW(5) + -628);
SET32(5, RW(5) + RW(25)); { F_0022E810(c); return; }
}

void F_00230AB0(Ctx *c) { /* func_00230AB0 */
ENTER(0x230ab0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022E830(c); return; }
}

void F_00230AC0(Ctx *c) { /* func_00230AC0 */
ENTER(0x230ac0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022FC30(c); return; }
}

void F_00230AD0(Ctx *c) { /* func_00230AD0 */
ENTER(0x230ad0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022FC40(c); return; }
}

void F_00230AE0(Ctx *c) { /* func_00230AE0 */
ENTER(0x230ae0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022FC50(c); return; }
}

void F_00230AF0(Ctx *c) { /* func_00230AF0 */
ENTER(0x230af0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022BCC0(c); return; }
}

void F_00230B00(Ctx *c) { /* func_00230B00 */
ENTER(0x230b00);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022BCB0(c); return; }
}

void F_00230B10(Ctx *c) { /* func_00230B10 */
ENTER(0x230b10);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022FC60(c); return; }
}

void F_00230B20(Ctx *c) { /* func_00230B20 */
ENTER(0x230b20);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022FCC0(c); return; }
}

void F_00230B30(Ctx *c) { /* func_00230B30 */
ENTER(0x230b30);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022FD10(c); return; }
}

void F_00230B40(Ctx *c) { /* func_00230B40 */
ENTER(0x230b40);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022FD20(c); return; }
}

void F_00230B50(Ctx *c) { /* func_00230B50 */
ENTER(0x230b50);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_00230880(c); return; }
}

void F_00230B60(Ctx *c) { /* func_00230B60 */
ENTER(0x230b60);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_00230890(c); return; }
}

void F_00230B70(Ctx *c) { /* func_00230B70 */
ENTER(0x230b70);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_002308A0(c); return; }
}

void F_00230B80(Ctx *c) { /* func_00230B80 */
ENTER(0x230b80);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_002308B0(c); return; }
}

void F_00230B90(Ctx *c) { /* func_00230B90 */
ENTER(0x230b90);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_002308C0(c); return; }
}

void F_00230BA0(Ctx *c) { /* func_00230BA0 */
ENTER(0x230ba0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_002308D0(c); return; }
}

void F_00230BB0(Ctx *c) { /* func_00230BB0 */
ENTER(0x230bb0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_002308E0(c); return; }
}

void F_00230BC0(Ctx *c) { /* func_00230BC0 */
ENTER(0x230bc0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_002308F0(c); return; }
}

void F_00230BD0(Ctx *c) { /* func_00230BD0 */
ENTER(0x230bd0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022FFA0(c); return; }
}

void F_00230BE0(Ctx *c) { /* func_00230BE0 */
ENTER(0x230be0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022FFB0(c); return; }
}

void F_00230BF0(Ctx *c) { /* func_00230BF0 */
ENTER(0x230bf0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022FFC0(c); return; }
}

void F_00230C00(Ctx *c) { /* func_00230C00 */
ENTER(0x230c00);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022FFD0(c); return; }
}

void F_00230C10(Ctx *c) { /* func_00230C10 */
ENTER(0x230c10);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022FFE0(c); return; }
}

void F_00230C20(Ctx *c) { /* func_00230C20 */
ENTER(0x230c20);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022FFF0(c); return; }
}

void F_00230C30(Ctx *c) { /* func_00230C30 */
ENTER(0x230c30);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_00230000(c); return; }
}

void F_00230C40(Ctx *c) { /* func_00230C40 */
ENTER(0x230c40);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_00230060(c); return; }
}

void F_00230C50(Ctx *c) { /* func_00230C50 */
ENTER(0x230c50);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_002300B0(c); return; }
}

void F_00230C60(Ctx *c) { /* func_00230C60 */
ENTER(0x230c60);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_002300C0(c); return; }
}

void F_00230C70(Ctx *c) { /* func_00230C70 */
ENTER(0x230c70);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_00230900(c); return; }
}

void F_00230C80(Ctx *c) { /* func_00230C80 */
ENTER(0x230c80);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_00230910(c); return; }
}

void F_00230C90(Ctx *c) { /* func_00230C90 */
ENTER(0x230c90);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_002300D0(c); return; }
}

void F_00230CA0(Ctx *c) { /* func_00230CA0 */
ENTER(0x230ca0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_002301C0(c); return; }
}

void F_00230CB0(Ctx *c) { /* func_00230CB0 */
ENTER(0x230cb0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_00230280(c); return; }
}

void F_00230CC0(Ctx *c) { /* func_00230CC0 */
ENTER(0x230cc0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_002303A0(c); return; }
}

void F_00230CD0(Ctx *c) { /* func_00230CD0 */
ENTER(0x230cd0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_00230920(c); return; }
}

void F_00230CE0(Ctx *c) { /* func_00230CE0 */
ENTER(0x230ce0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_00230930(c); return; }
}

void F_00230CF0(Ctx *c) { /* func_00230CF0 */
ENTER(0x230cf0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_00230940(c); return; }
}

void F_00230D00(Ctx *c) { /* func_00230D00 */
ENTER(0x230d00);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022E990(c); return; }
}

void F_00230D10(Ctx *c) { /* func_00230D10 */
ENTER(0x230d10);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022E850(c); return; }
}

void F_00230D20(Ctx *c) { /* func_00230D20 */
ENTER(0x230d20);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_00230630(c); return; }
}

void F_00230D30(Ctx *c) { /* func_00230D30 */
ENTER(0x230d30);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_00230640(c); return; }
}

void F_00230D40(Ctx *c) { /* func_00230D40 */
ENTER(0x230d40);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_002306C0(c); return; }
}

void F_00230D50(Ctx *c) { /* func_00230D50 */
ENTER(0x230d50);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022E840(c); return; }
}

void F_00230D60(Ctx *c) { /* func_00230D60 */
ENTER(0x230d60);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022EAE0(c); return; }
}

void F_00230D70(Ctx *c) { /* func_00230D70 */
ENTER(0x230d70);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022E9D0(c); return; }
}

void F_00230D80(Ctx *c) { /* func_00230D80 */
ENTER(0x230d80);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -628);
SET32(4, RW(4) + RW(25)); { F_0022C550(c); return; }
}

void F_00230D90(Ctx *c) { /* func_00230D90 */
ENTER(0x230d90);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_00230870(c); return; }
}

void F_00230DA0(Ctx *c) { /* func_00230DA0 */
ENTER(0x230da0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022FC00(c); return; }
}

void F_00230DB0(Ctx *c) { /* func_00230DB0 */
ENTER(0x230db0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022DF10(c); return; }
}

void F_00230DC0(Ctx *c) { /* func_00230DC0 */
ENTER(0x230dc0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022CE40(c); return; }
}

void F_00230DD0(Ctx *c) { /* func_00230DD0 */
ENTER(0x230dd0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022CE20(c); return; }
}

void F_00230DE0(Ctx *c) { /* func_00230DE0 */
ENTER(0x230de0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022FC10(c); return; }
}

void F_00230DF0(Ctx *c) { /* func_00230DF0 */
ENTER(0x230df0);
SET64(25, (s32)rd32(c, (RW(5) + 4)));
SET32(5, RW(5) + -2344);
SET32(5, RW(5) + RW(25)); { F_0022D120(c); return; }
}

void F_00230E00(Ctx *c) { /* func_00230E00 */
ENTER(0x230e00);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022D150(c); return; }
}

void F_00230E10(Ctx *c) { /* func_00230E10 */
ENTER(0x230e10);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022C6D0(c); return; }
}

void F_00230E20(Ctx *c) { /* func_00230E20 */
ENTER(0x230e20);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022C720(c); return; }
}

void F_00230E30(Ctx *c) { /* func_00230E30 */
ENTER(0x230e30);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_00230830(c); return; }
}

void F_00230E40(Ctx *c) { /* func_00230E40 */
ENTER(0x230e40);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_00230840(c); return; }
}

void F_00230E50(Ctx *c) { /* func_00230E50 */
ENTER(0x230e50);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_00230850(c); return; }
}

void F_00230E60(Ctx *c) { /* func_00230E60 */
ENTER(0x230e60);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022FC60(c); return; }
}

void F_00230E70(Ctx *c) { /* func_00230E70 */
ENTER(0x230e70);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022FCC0(c); return; }
}

void F_00230E80(Ctx *c) { /* func_00230E80 */
ENTER(0x230e80);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022FD10(c); return; }
}

void F_00230E90(Ctx *c) { /* func_00230E90 */
ENTER(0x230e90);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022FD20(c); return; }
}

void F_00230EA0(Ctx *c) { /* func_00230EA0 */
ENTER(0x230ea0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022FD30(c); return; }
}

void F_00230EB0(Ctx *c) { /* func_00230EB0 */
ENTER(0x230eb0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022FD40(c); return; }
}

void F_00230EC0(Ctx *c) { /* func_00230EC0 */
ENTER(0x230ec0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022FDF0(c); return; }
}

void F_00230ED0(Ctx *c) { /* func_00230ED0 */
ENTER(0x230ed0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022FE50(c); return; }
}

void F_00230EE0(Ctx *c) { /* func_00230EE0 */
ENTER(0x230ee0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022FE60(c); return; }
}

void F_00230EF0(Ctx *c) { /* func_00230EF0 */
ENTER(0x230ef0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022FE70(c); return; }
}

void F_00230F00(Ctx *c) { /* func_00230F00 */
ENTER(0x230f00);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022FF20(c); return; }
}

void F_00230F10(Ctx *c) { /* func_00230F10 */
ENTER(0x230f10);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022FF80(c); return; }
}

void F_00230F20(Ctx *c) { /* func_00230F20 */
ENTER(0x230f20);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022D410(c); return; }
}

void F_00230F30(Ctx *c) { /* func_00230F30 */
ENTER(0x230f30);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022CE50(c); return; }
}

void F_00230F40(Ctx *c) { /* func_00230F40 */
ENTER(0x230f40);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022D4B0(c); return; }
}

void F_00230F50(Ctx *c) { /* func_00230F50 */
ENTER(0x230f50);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022CE30(c); return; }
}

void F_00230F60(Ctx *c) { /* func_00230F60 */
ENTER(0x230f60);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022C740(c); return; }
}

void F_00230F70(Ctx *c) { /* func_00230F70 */
ENTER(0x230f70);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022C7B0(c); return; }
}

void F_00230F80(Ctx *c) { /* func_00230F80 */
ENTER(0x230f80);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_00230000(c); return; }
}

void F_00230F90(Ctx *c) { /* func_00230F90 */
ENTER(0x230f90);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_00230060(c); return; }
}

void F_00230FA0(Ctx *c) { /* func_00230FA0 */
ENTER(0x230fa0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_002300B0(c); return; }
}

void F_00230FB0(Ctx *c) { /* func_00230FB0 */
ENTER(0x230fb0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_002300C0(c); return; }
}

void F_00230FC0(Ctx *c) { /* func_00230FC0 */
ENTER(0x230fc0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022CE60(c); return; }
}

void F_00230FD0(Ctx *c) { /* func_00230FD0 */
ENTER(0x230fd0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022CEB0(c); return; }
}

void F_00230FE0(Ctx *c) { /* func_00230FE0 */
ENTER(0x230fe0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_002300D0(c); return; }
}

void F_00230FF0(Ctx *c) { /* func_00230FF0 */
ENTER(0x230ff0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_002301C0(c); return; }
}

void F_00231000(Ctx *c) { /* func_00231000 */
ENTER(0x231000);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_00230280(c); return; }
}

void F_00231010(Ctx *c) { /* func_00231010 */
ENTER(0x231010);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_002303A0(c); return; }
}

void F_00231020(Ctx *c) { /* func_00231020 */
ENTER(0x231020);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_00230480(c); return; }
}

void F_00231030(Ctx *c) { /* func_00231030 */
ENTER(0x231030);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_00230540(c); return; }
}

void F_00231040(Ctx *c) { /* func_00231040 */
ENTER(0x231040);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_002305F0(c); return; }
}

void F_00231050(Ctx *c) { /* func_00231050 */
ENTER(0x231050);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022E990(c); return; }
}

void F_00231060(Ctx *c) { /* func_00231060 */
ENTER(0x231060);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022E850(c); return; }
}

void F_00231070(Ctx *c) { /* func_00231070 */
ENTER(0x231070);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_00230630(c); return; }
}

void F_00231080(Ctx *c) { /* func_00231080 */
ENTER(0x231080);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_00230640(c); return; }
}

void F_00231090(Ctx *c) { /* func_00231090 */
ENTER(0x231090);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_00230860(c); return; }
}

void F_002310A0(Ctx *c) { /* func_002310A0 */
ENTER(0x2310a0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022C7D0(c); return; }
}

void F_002310B0(Ctx *c) { /* func_002310B0 */
ENTER(0x2310b0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022E000(c); return; }
}

void F_002310C0(Ctx *c) { /* func_002310C0 */
ENTER(0x2310c0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022DF20(c); return; }
}

void F_002310D0(Ctx *c) { /* func_002310D0 */
ENTER(0x2310d0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2344);
SET32(4, RW(4) + RW(25)); { F_0022C6C0(c); return; }
}

void F_002310E0(Ctx *c) { /* func_002310E0 */
ENTER(0x2310e0);
SET32(4, RW(4) + -80); { F_00230870(c); return; }
}

void F_002310F0(Ctx *c) { /* func_002310F0 */
ENTER(0x2310f0);
SET32(4, RW(4) + -628); { F_0022C6C0(c); return; }
}

void F_00231100(Ctx *c) { /* func_00231100 */
ENTER(0x231100);
SET32(4, RW(4) + -628); { F_0022E180(c); return; }
}

void F_00231110(Ctx *c) { /* func_00231110 */
ENTER(0x231110);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -2384);
SET32(4, RW(4) + RW(25)); { F_0022C6D0(c); return; }
}

void F_00231120(Ctx *c) { /* func_00231120 */
ENTER(0x231120);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -2384);
SET32(4, RW(4) + RW(25)); { F_0022C720(c); return; }
}

void F_00231130(Ctx *c) { /* func_00231130 */
ENTER(0x231130);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -240);
SET32(4, RW(4) + RW(25)); { F_0014BC10(c); return; }
}

void F_00231140(Ctx *c) { /* func_00231140 */
ENTER(0x231140);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -2384);
SET32(4, RW(4) + RW(25)); { F_0022C6C0(c); return; }
}

void F_00231150(Ctx *c) { /* func_00231150 */
ENTER(0x231150);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -2384);
SET32(4, RW(4) + RW(25)); { F_0022E180(c); return; }
}

void F_00231160(Ctx *c) { /* func_00231160 */
ENTER(0x231160);
SET32(4, RW(4) + -2144); { F_0022DF20(c); return; }
}

void F_00231170(Ctx *c) { /* func_00231170 */
ENTER(0x231170);
SET32(4, RW(4) + -2144); { F_0022C720(c); return; }
}

void F_00231180(Ctx *c) { /* func_00231180 */
ENTER(0x231180);
SET32(4, RW(4) + -2144); { F_0022D730(c); return; }
}

void F_00231190(Ctx *c) { /* func_00231190 */
ENTER(0x231190);
SET32(4, RW(4) + -2144); { F_0022C6C0(c); return; }
}

void F_002311A0(Ctx *c) { /* func_002311A0 */
ENTER(0x2311a0);
SET32(4, RW(4) + -2144); { F_0022E180(c); return; }
}

void F_002311B0(Ctx *c) { /* func_002311B0 */
ENTER(0x2311b0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2064);
SET32(4, RW(4) + RW(25)); { F_0022BA30(c); return; }
}

void F_002311C0(Ctx *c) { /* func_002311C0 */
ENTER(0x2311c0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FC00(c); return; }
}

void F_002311D0(Ctx *c) { /* func_002311D0 */
ENTER(0x2311d0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022DF10(c); return; }
}

void F_002311E0(Ctx *c) { /* func_002311E0 */
ENTER(0x2311e0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022CE40(c); return; }
}

void F_002311F0(Ctx *c) { /* func_002311F0 */
ENTER(0x2311f0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022CE20(c); return; }
}

void F_00231200(Ctx *c) { /* func_00231200 */
ENTER(0x231200);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FC10(c); return; }
}

void F_00231210(Ctx *c) { /* func_00231210 */
ENTER(0x231210);
SET64(25, (s32)rd32(c, (RW(5) + 4)));
SET32(5, RW(5) + -2144);
SET32(5, RW(5) + RW(25)); { F_0022E810(c); return; }
}

void F_00231220(Ctx *c) { /* func_00231220 */
ENTER(0x231220);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022E830(c); return; }
}

void F_00231230(Ctx *c) { /* func_00231230 */
ENTER(0x231230);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + 8);
SET32(4, RW(4) + RW(25)); { F_0022FC20(c); return; }
}

void F_00231240(Ctx *c) { /* func_00231240 */
ENTER(0x231240);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + 8);
SET32(4, RW(4) + RW(25)); { F_0022FA10(c); return; }
}

void F_00231250(Ctx *c) { /* func_00231250 */
ENTER(0x231250);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FC30(c); return; }
}

void F_00231260(Ctx *c) { /* func_00231260 */
ENTER(0x231260);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FC40(c); return; }
}

void F_00231270(Ctx *c) { /* func_00231270 */
ENTER(0x231270);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FC50(c); return; }
}

void F_00231280(Ctx *c) { /* func_00231280 */
ENTER(0x231280);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022BCC0(c); return; }
}

void F_00231290(Ctx *c) { /* func_00231290 */
ENTER(0x231290);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022BCB0(c); return; }
}

void F_002312A0(Ctx *c) { /* func_002312A0 */
ENTER(0x2312a0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FC60(c); return; }
}

void F_002312B0(Ctx *c) { /* func_002312B0 */
ENTER(0x2312b0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FCC0(c); return; }
}

void F_002312C0(Ctx *c) { /* func_002312C0 */
ENTER(0x2312c0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FD10(c); return; }
}

void F_002312D0(Ctx *c) { /* func_002312D0 */
ENTER(0x2312d0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FD20(c); return; }
}

void F_002312E0(Ctx *c) { /* func_002312E0 */
ENTER(0x2312e0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FD30(c); return; }
}

void F_002312F0(Ctx *c) { /* func_002312F0 */
ENTER(0x2312f0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FD40(c); return; }
}

void F_00231300(Ctx *c) { /* func_00231300 */
ENTER(0x231300);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FDF0(c); return; }
}

void F_00231310(Ctx *c) { /* func_00231310 */
ENTER(0x231310);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FE50(c); return; }
}

void F_00231320(Ctx *c) { /* func_00231320 */
ENTER(0x231320);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FE60(c); return; }
}

void F_00231330(Ctx *c) { /* func_00231330 */
ENTER(0x231330);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FE70(c); return; }
}

void F_00231340(Ctx *c) { /* func_00231340 */
ENTER(0x231340);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FF20(c); return; }
}

void F_00231350(Ctx *c) { /* func_00231350 */
ENTER(0x231350);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FF80(c); return; }
}

void F_00231360(Ctx *c) { /* func_00231360 */
ENTER(0x231360);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + 8);
SET32(4, RW(4) + RW(25)); { F_0022FF90(c); return; }
}

void F_00231370(Ctx *c) { /* func_00231370 */
ENTER(0x231370);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + 8);
SET32(4, RW(4) + RW(25)); { F_0022FA60(c); return; }
}

void F_00231380(Ctx *c) { /* func_00231380 */
ENTER(0x231380);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FFA0(c); return; }
}

void F_00231390(Ctx *c) { /* func_00231390 */
ENTER(0x231390);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FFB0(c); return; }
}

void F_002313A0(Ctx *c) { /* func_002313A0 */
ENTER(0x2313a0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FFC0(c); return; }
}

void F_002313B0(Ctx *c) { /* func_002313B0 */
ENTER(0x2313b0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FFD0(c); return; }
}

void F_002313C0(Ctx *c) { /* func_002313C0 */
ENTER(0x2313c0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + 8);
SET32(4, RW(4) + RW(25)); { F_0022E170(c); return; }
}

void F_002313D0(Ctx *c) { /* func_002313D0 */
ENTER(0x2313d0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + 8);
SET32(4, RW(4) + RW(25)); { F_0022EF40(c); return; }
}

void F_002313E0(Ctx *c) { /* func_002313E0 */
ENTER(0x2313e0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + 8);
SET32(4, RW(4) + RW(25)); { F_0022FA40(c); return; }
}

void F_002313F0(Ctx *c) { /* func_002313F0 */
ENTER(0x2313f0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FFE0(c); return; }
}

void F_00231400(Ctx *c) { /* func_00231400 */
ENTER(0x231400);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022FFF0(c); return; }
}

void F_00231410(Ctx *c) { /* func_00231410 */
ENTER(0x231410);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_00230000(c); return; }
}

void F_00231420(Ctx *c) { /* func_00231420 */
ENTER(0x231420);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_00230060(c); return; }
}

void F_00231430(Ctx *c) { /* func_00231430 */
ENTER(0x231430);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_002300B0(c); return; }
}

void F_00231440(Ctx *c) { /* func_00231440 */
ENTER(0x231440);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_002300C0(c); return; }
}

void F_00231450(Ctx *c) { /* func_00231450 */
ENTER(0x231450);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022CE60(c); return; }
}

void F_00231460(Ctx *c) { /* func_00231460 */
ENTER(0x231460);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022CEB0(c); return; }
}

void F_00231470(Ctx *c) { /* func_00231470 */
ENTER(0x231470);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_002300D0(c); return; }
}

void F_00231480(Ctx *c) { /* func_00231480 */
ENTER(0x231480);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_002301C0(c); return; }
}

void F_00231490(Ctx *c) { /* func_00231490 */
ENTER(0x231490);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_00230280(c); return; }
}

void F_002314A0(Ctx *c) { /* func_002314A0 */
ENTER(0x2314a0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_002303A0(c); return; }
}

void F_002314B0(Ctx *c) { /* func_002314B0 */
ENTER(0x2314b0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_00230480(c); return; }
}

void F_002314C0(Ctx *c) { /* func_002314C0 */
ENTER(0x2314c0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_00230540(c); return; }
}

void F_002314D0(Ctx *c) { /* func_002314D0 */
ENTER(0x2314d0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_002305F0(c); return; }
}

void F_002314E0(Ctx *c) { /* func_002314E0 */
ENTER(0x2314e0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022E990(c); return; }
}

void F_002314F0(Ctx *c) { /* func_002314F0 */
ENTER(0x2314f0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022E850(c); return; }
}

void F_00231500(Ctx *c) { /* func_00231500 */
ENTER(0x231500);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_00230630(c); return; }
}

void F_00231510(Ctx *c) { /* func_00231510 */
ENTER(0x231510);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_00230640(c); return; }
}

void F_00231520(Ctx *c) { /* func_00231520 */
ENTER(0x231520);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + 8);
SET32(4, RW(4) + RW(25)); { F_002306A0(c); return; }
}

void F_00231530(Ctx *c) { /* func_00231530 */
ENTER(0x231530);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + 8);
SET32(4, RW(4) + RW(25)); { F_0022FA50(c); return; }
}

void F_00231540(Ctx *c) { /* func_00231540 */
ENTER(0x231540);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + 8);
SET32(4, RW(4) + RW(25)); { F_0022FAA0(c); return; }
}

void F_00231550(Ctx *c) { /* func_00231550 */
ENTER(0x231550);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + 8);
SET32(4, RW(4) + RW(25)); { F_002306B0(c); return; }
}

void F_00231560(Ctx *c) { /* func_00231560 */
ENTER(0x231560);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_002306C0(c); return; }
}

void F_00231570(Ctx *c) { /* func_00231570 */
ENTER(0x231570);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_0022E840(c); return; }
}

void F_00231580(Ctx *c) { /* func_00231580 */
ENTER(0x231580);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + -2144);
SET32(4, RW(4) + RW(25)); { F_002306D0(c); return; }
}

void F_00231590(Ctx *c) { /* func_00231590 */
ENTER(0x231590);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(4) + 8);
SET32(4, RW(4) + RW(25)); { F_002307B0(c); return; }
}

