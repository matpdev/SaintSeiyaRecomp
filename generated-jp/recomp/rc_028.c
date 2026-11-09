#include "r5900.h"
#include "functab.h"

void JP_F_002D1AF0(Ctx *c) { /* func_002D1AF0 */
ENTER(0x2d1af0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(28) + -29912)));
SET64(16, RD(6) + RD(0));
SET64(2, (s32)rd32(c, (RW(28) + -29896)));
SET64(3, (s32)rd32(c, (RW(3) + 40)));
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) & 0xff);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 56)));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET32(6, RSW(2) >> 6);
{ int t = RSD(2) >= 0; SET32(5, RSW(3) >> 11); if (t) goto L_002D1B54; }
SET32(2, RW(2) + 63);
SET32(6, RSW(2) >> 6);
L_002D1B54:;
SET64(7, (s32)rd32(c, (RW(4) + 52)));
SET64(2, (s64)(s32)0xff0000);
SET64(8, RD(2) | 0xffff);
SET64(31, 0x2d1b68); SET32(4, RW(18) + 1152); JP_F_002B3D20(c);
SET64(25, (s32)rd32(c, (RW(18) + 1160)));
SET32(4, RW(18) + 1152);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d1b7c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 1064)));
SET32(4, RW(18) + 1056);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d1b90); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 1016)));
SET32(4, RW(18) + 1008);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d1ba4); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 936)));
SET32(4, RW(18) + 928);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d1bb8); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(28) + -29912)));
SET64(2, (s32)rd32(c, (RW(28) + -29896)));
SET64(3, (s32)rd32(c, (RW(3) + 40)));
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) & 0xff);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 56)));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET32(6, RSW(2) >> 6);
{ int t = RSD(2) >= 0; SET32(5, RSW(3) >> 11); if (t) goto L_002D1BFC; }
SET32(2, RW(2) + 63);
SET32(6, RSW(2) >> 6);
L_002D1BFC:;
SET64(7, (s32)rd32(c, (RW(4) + 52)));
SET64(8, RD(0) + RD(0));
SET64(31, 0x2d1c0c); SET32(4, RW(18) + 1200); JP_F_002B3D20(c);
SET64(25, (s32)rd32(c, (RW(18) + 1208)));
SET32(4, RW(18) + 1200);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d1c20); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2d1c30); SET64(6, RD(16) + RD(0)); JP_F_00152630(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002D1C50(Ctx *c) { /* func_002D1C50 */
ENTER(0x2d1c50);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
{ int t = RD(5) != RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_002D1C70; }
SET64(5, (s32)rd32(c, (RW(4) + 912)));
L_002D1C70:;
SET64(16, rd16(c, (RW(4) + 898)));
SET64(18, (s32)rd32(c, (RW(5) + 900)));
SET64(17, (s32)rd32(c, (RW(4) + 900)));
{ int t = RSD(16) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002D1CC0; }
L_002D1C84:;
SET64(31, 0x2d1c8c); SET64(4, RD(17) + RD(0)); JP_F_002A4D70(c);
rd128(c, (RW(18) + 0) & ~15u, &c->r[4]);
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(16));
wr128(c, (RW(17) + 0) & ~15u, &c->r[4]);
rd128(c, (RW(18) + 16) & ~15u, &c->r[4]);
wr128(c, (RW(17) + 16) & ~15u, &c->r[4]);
rd128(c, (RW(18) + 32) & ~15u, &c->r[4]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[4]);
rd128(c, (RW(18) + 48) & ~15u, &c->r[4]);
wr128(c, (RW(17) + 48) & ~15u, &c->r[4]);
SET32(18, RW(18) + 288);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 288); if (t) { POLL(); goto L_002D1C84; } }
L_002D1CC0:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002D1CE0(Ctx *c) { /* func_002D1CE0 */
ENTER(0x2d1ce0);
SET32(29, RW(29) + -256);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(5) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 900), RW(0));
SET64(16, RD(0) + RD(0));
wr32(c, (RW(4) + 912), RW(22));
SET64(2, rd16(c, (RW(5) + 898)));
wr16(c, (RW(4) + 898), (u16)RW(2));
SET64(17, rd16(c, (RW(4) + 898)));
SET32(2, RW(17) << 3);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) << 5);
SET64(31, 0x2d1d40); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002D1D70; }
SET64(5, (s64)(s32)0x140000);
SET64(6, (s64)(s32)0x140000);
SET64(8, RD(17) + RD(0));
SET32(16, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + 12112);
SET32(6, RW(6) + 12000);
SET64(31, 0x2d1d6c); SET32(7, RW(0) + 288); JP_F_00102580(c);
SET64(19, RD(2) + RD(0));
L_002D1D70:;
wr32(c, (RW(20) + 900), RW(19));
SET64(23, rd16(c, (RW(20) + 898)));
SET64(30, (s32)rd32(c, (RW(22) + 900)));
{ int t = RSD(23) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_002D1E50; }
{ int t = RSD(23) <= 0; SET32(16, RW(29) + 176); if (t) goto L_002D1E50; }
SET64(3, RD(18) & 0xffff);
L_002D1D90:;
SET32(4, RW(29) + 176);
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET32(21, RW(2) << 5);
SET64(31, 0x2d1da8); SET32(17, RW(19) + RW(21)); JP_F_002AF080(c);
SET32(21, RW(30) + RW(21));
SET64(4, RD(17) + RD(0));
rd128(c, (RW(21) + 208) & ~15u, &c->r[2]);
SET32(5, RW(21) + 166);
wr128(c, (RW(16) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(21) + 224) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(21) + 240) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(21) + 256) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 208) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 224) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 240) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
SET64(31, 0x2d1df8); wr128(c, (RW(17) + 256) & ~15u, &c->r[2]); JP_F_00142E60(c);
SET64(3, rd16(c, (RW(21) + 164)));
SET64(2, RD(0) | 0xffff);
{ int t = RD(3) != RD(2); wr16(c, (RW(17) + 164), (u16)RW(3)); if (t) goto L_002D1E20; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x2d1e14); SET32(4, RW(20) + 288); JP_F_002438D0(c);
 goto L_002D1E38;
L_002D1E20:;
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) << 5);
SET64(31, 0x2d1e38); SET32(5, RW(19) + RW(2)); JP_F_00142EB0(c);
L_002D1E38:;
SET32(2, RW(18) + 1);
SET64(18, RD(2) & 0xffff);
SET64(2, RSD(18) < RSD(23));
if (RD(2) != RD(0)) { SET64(3, RD(18) & 0xffff); { POLL(); goto L_002D1D90; } }
L_002D1E50:;
SET64(6, (s32)rd32(c, (RW(20) + 900)));
SET64(5, RD(22) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(31, 0x2d1e64); SET32(7, RW(0) + 1); JP_F_001F1A50(c);
SET64(25, (s32)rd32(c, (RW(20) + 276)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d1e78); SET32(5, RW(0) + 64); rt_call(c, t); }
SET64(2, rd16(c, (RW(20) + 264)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_002D1F28; }
SET64(2, (s32)rd32(c, (RW(20) + 272)));
L_002D1E88:;
SET64(3, RD(17) & 0xffff);
SET32(16, RW(3) << 2);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 2);
SET64(7, RD(0) + RD(0));
SET32(2, RW(2) + RW(16));
SET32(8, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2d1eb4); SET32(4, RW(2) + 144); JP_F_002B3EF0(c);
SET64(2, (s32)rd32(c, (RW(20) + 272)));
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(5) + RD(0));
SET32(2, RW(2) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(18, RW(2) + 240);
SET64(31, 0x2d1edc); SET64(4, RD(18) + RD(0)); JP_F_002B42A0(c);
SET32(5, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2d1eec); SET64(6, RD(5) + RD(0)); JP_F_002B4260(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x2d1efc); SET32(6, RW(0) + 2); JP_F_002B4230(c);
SET64(2, (s32)rd32(c, (RW(20) + 272)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2d1f10); SET64(5, RD(0) + RD(0)); JP_F_002A55C0(c);
SET64(2, rd16(c, (RW(20) + 264)));
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(2, RSD(17) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(20) + 272))); { POLL(); goto L_002D1E88; } }
L_002D1F28:;
SET64(31, 0x2d1f30);  JP_F_002C29D0(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(16, (s32)c->f[0].u);
SET64(31, 0x2d1f40);  JP_F_002C2A00(c);
SET64(2, (s64)(s32)0xff0000);
wr32(c, (RW(29) + 160), RW(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
wr32(c, (RW(29) + 164), RW(0));
SET64(5, RD(2) | 0xffff);
wr32(c, (RW(29) + 172), RW(16));
SET64(2, rd64(c, (RW(29) + 160)));
SET32(4, RW(20) + 928);
wr64(c, (RW(20) + 992), RD(2));
SET64(2, (s32)c->f[0].u);
wr32(c, (RW(29) + 168), RW(2));
SET64(2, rd64(c, (RW(29) + 168)));
SET64(31, 0x2d1f7c); wr64(c, (RW(20) + 1000), RD(2)); JP_F_002AA560(c);
SET32(2, RW(0) + 128);
SET32(4, RW(20) + 928);
wr8(c, (RW(29) + 255), (u8)RW(2));
SET32(5, RW(29) + 252);
wr8(c, (RW(29) + 252), (u8)RW(0));
wr8(c, (RW(29) + 253), (u8)RW(0));
SET64(31, 0x2d1f9c); wr8(c, (RW(29) + 254), (u8)RW(0)); JP_F_002AA5C0(c);
SET64(31, 0x2d1fa4); SET32(4, RW(20) + 1056); JP_F_001EC500(c);
SET32(5, RW(0) + 1);
SET32(4, RW(20) + 1008);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2d1fbc); SET64(8, RD(5) + RD(0)); JP_F_002B42A0(c);
SET32(4, RW(20) + 1008);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2d1fcc); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(5, RW(0) + 1);
SET32(4, RW(20) + 1008);
SET64(31, 0x2d1fdc); SET64(6, RD(5) + RD(0)); JP_F_002B4230(c);
SET64(25, (s32)rd32(c, (RW(20) + 1016)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2d1fec); SET32(4, RW(20) + 1008); rt_call(c, t); }
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
SET32(29, RW(29) + 256); return;
}

void JP_F_002D2020(Ctx *c) { /* func_002D2020 */
ENTER(0x2d2020);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 16) & ~15u, &c->r[3]); return;
}

void JP_F_002D2030(Ctx *c) { /* func_002D2030 */
ENTER(0x2d2030);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002D20E0; }
c->f[0].u = rd32(c, (RW(16) + 8));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = RW(2);
c->f[4].f = fpu(F(0) + F(12));
wr32(c, (RW(16) + 8), c->f[4].u);
c->f[3].u = rd32(c, (RW(16) + 12));
c->f[0].u = rd32(c, (RW(16) + 28));
c->f[2].u = rd32(c, (RW(16) + 24));
c->f[3].f = fpu_div(F(4), F(3));
c->f[1].f = fpu(F(1) - F(3));
c->f[3].f = fpu(F(1) * F(0));
c->f[1].u = rd32(c, (RW(16) + 20));
c->f[0].u = rd32(c, (RW(16) + 16));
wr32(c, (RW(29) + 32), c->f[0].u);
wr32(c, (RW(29) + 36), c->f[1].u);
wr32(c, (RW(29) + 40), c->f[2].u);
wr32(c, (RW(29) + 44), c->f[3].u);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x2d20a4); SET32(5, RW(29) + 32); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(16) + 8));
c->f[0].u = rd32(c, (RW(16) + 12));
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002D20E4; }
SET64(3, rd8(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_002D20E0; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d20dc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr8(c, (RW(16) + 0), (u8)RW(0));
L_002D20E0:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002D20E4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D20F0(Ctx *c) { /* func_002D20F0 */
ENTER(0x2d20f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(16, RD(5) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d2120); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 912)));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
SET32(4, RW(3) + 288);
wr128(c, (RW(3) + 288) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 320) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 48) & ~15u, &c->r[2]);
SET64(31, 0x2d2150); wr128(c, (RW(3) + 336) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x2d215c); SET64(5, RD(16) + RD(0)); JP_F_002D1C50(c);
wr32(c, (RW(17) + 8), RW(0));
SET32(3, RW(0) + 1);
wr8(c, (RW(17) + 0), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D2180(Ctx *c) { /* func_002D2180 */
ENTER(0x2d2180);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, rd8(c, (RW(4) + 0)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002D21B0; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d21ac);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_002D21B0:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002D21C0(Ctx *c) { /* func_002D21C0 */
ENTER(0x2d21c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d21dc);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002D21F0(Ctx *c) { /* func_002D21F0 */
ENTER(0x2d21f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d2214); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d222c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002D2240(Ctx *c) { /* func_002D2240 */
ENTER(0x2d2240);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_002D2270; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d226c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
L_002D2270:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002D2280(Ctx *c) { /* func_002D2280 */
ENTER(0x2d2280);
SET32(29, RW(29) + -144);
SET64(2, (s64)(s32)0x3f190000);
wr64(c, (RW(29) + 80), RD(31));
SET64(2, RD(2) | 0x999a);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr32(c, (RW(29) + 112), RW(2));
SET64(18, RD(5) + RD(0));
SET64(2, (s64)(s32)0x3f4c0000);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(3, RD(2) | 0xcccd);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(4) + 0), (u8)RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), c->f[12].u);
wr32(c, (RW(29) + 116), RW(3));
wr32(c, (RW(29) + 120), RW(2));
SET32(4, RW(0) + 1280);
wr32(c, (RW(29) + 124), RW(2));
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET64(31, 0x2d22e4); wr128(c, (RW(19) + 16) & ~15u, &c->r[2]); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002D23D4; }
SET32(4, RW(17) + 1248);
SET32(16, RW(0) + 1);
SET64(31, 0x2d22fc); wr32(c, (RW(17) + 256), RW(4)); JP_F_00141C80(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2d2308); SET64(5, RD(0) + RD(0)); JP_F_002D24D0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(9, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12320);
SET64(8, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(7, (s32)rd32(c, (RW(17) + 256)));
SET32(9, RW(9) + 12488);
SET32(8, RW(8) + 12392);
SET32(3, RW(3) + 12424);
SET32(2, RW(17) + 1248);
SET32(4, RW(29) + 96);
wr32(c, (RW(7) + 16), RW(9));
SET64(5, RD(0) + RD(0));
wr32(c, (RW(17) + 432), RW(8));
SET64(6, RD(0) + RD(0));
wr32(c, (RW(17) + 760), RW(3));
SET64(7, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET64(8, RD(0) + RD(0));
SET32(2, RW(2) - RW(3));
SET64(31, 0x2d2364); wr32(c, (RW(3) + 20), RW(2)); JP_F_002D24B0(c);
SET32(5, RW(0) + 128);
SET64(20, RD(2) + RD(0));
SET32(4, RW(29) + 140);
SET64(6, RD(5) + RD(0));
SET64(7, RD(5) + RD(0));
SET64(31, 0x2d2380); SET64(8, RD(5) + RD(0)); JP_F_002D2490(c);
SET64(5, RD(20) + RD(0));
SET64(6, RD(2) + RD(0));
SET32(4, RW(17) + 928);
SET64(31, 0x2d2394); SET64(7, RD(0) + RD(0)); JP_F_002AA6B0(c);
SET64(31, 0x2d239c); SET32(4, RW(17) + 1008); JP_F_002D2450(c);
SET64(31, 0x2d23a4); SET32(4, RW(17) + 1056); JP_F_002D2410(c);
SET32(4, RW(17) + 1152);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2d23bc); SET64(8, RD(0) + RD(0)); JP_F_002B3DC0(c);
SET32(4, RW(17) + 1200);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2d23d4); SET64(8, RD(0) + RD(0)); JP_F_002B3DC0(c);
L_002D23D4:;
wr32(c, (RW(19) + 4), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2d23ec); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_002D2410(Ctx *c) { /* func_002D2410 */
ENTER(0x2d2410);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2d2424); SET64(16, RD(4) + RD(0)); JP_F_002B3FD0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + 512);
wr32(c, (RW(16) + 8), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002D2450(Ctx *c) { /* func_002D2450 */
ENTER(0x2d2450);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2d2464); SET64(16, RD(4) + RD(0)); JP_F_002B4380(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + 480);
wr32(c, (RW(16) + 8), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002D2490(Ctx *c) { /* func_002D2490 */
ENTER(0x2d2490);
wr8(c, (RW(4) + 0), (u8)RW(5));
SET64(2, RD(4) + RD(0));
wr8(c, (RW(4) + 1), (u8)RW(6));
wr8(c, (RW(4) + 2), (u8)RW(7));
wr8(c, (RW(4) + 3), (u8)RW(8)); return;
}

void JP_F_002D24B0(Ctx *c) { /* func_002D24B0 */
ENTER(0x2d24b0);
wr32(c, (RW(4) + 0), RW(5));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 8), RW(7));
wr32(c, (RW(4) + 12), RW(8)); return;
}

void JP_F_002D24D0(Ctx *c) { /* func_002D24D0 */
ENTER(0x2d24d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RD(18) << 48);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002D2504; }
SET32(4, RW(16) + 916);
SET64(31, 0x2d2504); wr32(c, (RW(16) + 256), RW(4)); JP_F_00141C80(c);
L_002D2504:;
SET64(17, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d2514); SET64(5, RD(0) + RD(0)); JP_F_001530D0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(9, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31504);
SET64(7, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 276), RW(2));
SET64(5, (s64)(s32)0x4e0000);
SET64(3, (s32)rd32(c, (RW(16) + 256)));
SET32(9, RW(9) + -31344);
SET64(2, (s64)(s32)0x4e0000);
SET64(6, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31432);
wr32(c, (RW(3) + 16), RW(9));
SET32(7, RW(7) + -31400);
wr32(c, (RW(16) + 432), RW(2));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 760), RW(7));
SET32(8, RW(16) + 916);
SET64(9, (s32)rd32(c, (RW(16) + 256)));
SET32(5, RW(5) + -31712);
SET32(6, RW(6) + -31544);
SET32(4, RW(4) + -31640);
SET32(3, RW(3) + -31608);
SET64(2, RD(16) + RD(0));
SET32(7, RW(8) - RW(9));
wr32(c, (RW(9) + 20), RW(7));
wr32(c, (RW(16) + 912), RW(0));
wr32(c, (RW(16) + 276), RW(5));
SET64(5, (s32)rd32(c, (RW(16) + 256)));
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(16) + 432), RW(4));
wr32(c, (RW(16) + 760), RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 256)));
SET32(3, RW(8) - RW(4));
wr32(c, (RW(4) + 20), RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002D25C0(Ctx *c) { /* func_002D25C0 */
ENTER(0x2d25c0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -1248);
SET32(4, RW(4) + RW(25)); { JP_F_00151D30(c); return; }
}

void JP_F_002D25D0(Ctx *c) { /* func_002D25D0 */
ENTER(0x2d25d0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -1248);
SET32(4, RW(4) + RW(25)); { JP_F_001F1DB0(c); return; }
}

void JP_F_002D25E0(Ctx *c) { /* func_002D25E0 */
ENTER(0x2d25e0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -1248);
SET32(4, RW(4) + RW(25)); { JP_F_002D1960(c); return; }
}

void JP_F_002D25F0(Ctx *c) { /* func_002D25F0 */
ENTER(0x2d25f0);
SET32(4, RW(4) + -288); { JP_F_002D1AF0(c); return; }
}

void JP_F_002D2600(Ctx *c) { /* func_002D2600 */
ENTER(0x2d2600);
SET32(4, RW(4) + -288); { JP_F_002D1960(c); return; }
}

void JP_F_002D2610(Ctx *c) { /* func_002D2610 */
ENTER(0x2d2610);
SET32(4, RW(4) + -704); { JP_F_002D1960(c); return; }
}

void JP_F_002D2620(Ctx *c) { /* func_002D2620 */
ENTER(0x2d2620);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28360); return;
}

void JP_F_002D2630(Ctx *c) { /* func_002D2630 */
ENTER(0x2d2630);
 return;
}

void JP_F_002D2640(Ctx *c) { /* func_002D2640 */
ENTER(0x2d2640);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002D26BC; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12528);
SET32(3, RW(3) + 12536);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 12548);
SET64(31, 0x2d2684); wr32(c, (RW(17) + 36), RW(2)); JP_F_002D59B0(c);
SET32(4, RW(17) + 64);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002D269C; }
SET64(31, 0x2d2698);  JP_F_003243E0(c);
SET64(4, RD(17) + RD(0));
L_002D269C:;
SET64(31, 0x2d26a4); SET64(5, RD(0) + RD(0)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002D26C0; }
SET64(31, 0x2d26bc); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002D26BC:;
SET64(2, RD(17) + RD(0));
L_002D26C0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D26E0(Ctx *c) { /* func_002D26E0 */
ENTER(0x2d26e0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 136)));
{ int t = RD(4) == RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_002D28C0; }
SET64(31, 0x2d2714); SET64(17, rd16(c, (RW(4) + 150))); JP_F_00316950(c);
SET64(4, (s32)rd32(c, (RW(20) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2d2728); SET64(16, RD(2) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(3));
SET64(4, RD(18) & 0xff00);
wr32(c, (RW(29) + 100), RW(0));
SET64(3, (s64)(s32)0x41400000);
wr32(c, (RW(29) + 104), RW(0));
c->f[3].u = RW(3);
rd128(c, (RW(2) + 0) & ~15u, &c->r[5]);
SET64(3, (s64)(s32)0x47800000);
c->f[1].u = RW(3);
SET64(6, RD(17) & 0xffff);
SET32(3, RW(0) + 3072);
wr128(c, (RW(29) + 96) & ~15u, &c->r[5]);
c->f[4].u = rd32(c, (RW(29) + 96));
c->f[0].u = rd32(c, (RW(29) + 104));
c->f[2].u = rd32(c, (RW(29) + 100));
c->f[3].f = fpu(F(4) - F(3));
wr32(c, (RW(29) + 96), c->f[3].u);
SET64(5, (s32)rd32(c, (RW(20) + 136)));
c->f[0].f = fpu(F(1) + F(0));
SET64(5, (s32)rd32(c, (RW(5) + 140)));
c->f[1].u = rd32(c, (RW(5) + 436));
c->f[1].f = fpu(F(2) + F(1));
wr32(c, (RW(29) + 104), c->f[0].u);
{ int t = RD(4) == RD(3); wr32(c, (RW(29) + 100), c->f[1].u); if (t) goto L_002D27CC; }
SET32(3, RW(0) + 2816);
if (RD(4) == RD(3)) { SET32(6, RW(6) + 181); goto L_002D27D0; }
SET32(3, RW(0) + 2560);
if (RD(4) == RD(3)) { SET32(6, RW(6) + 137); goto L_002D27D0; }
SET32(3, RW(0) + 2304);
if (RD(4) == RD(3)) { SET32(6, RW(6) + 132); goto L_002D27D0; }
SET32(3, RW(0) + 2048);
if (RD(4) == RD(3)) { SET32(6, RW(6) + 62); goto L_002D27D0; }
SET64(19, RD(0) + RD(0)); goto L_002D27D4;
L_002D27CC:;
SET32(6, RW(6) + 189);
L_002D27D0:;
SET64(19, RD(0) + RD(0));
L_002D27D4:;
{ int t = RSD(16) <= 0;  if (t) goto L_002D28C0; }
SET64(3, (s64)(s32)0x540000);
{ int t = RSD(16) <= 0; SET32(3, RW(3) + 2736); if (t) goto L_002D28C0; }
SET32(18, RW(3) + RW(6));
SET64(17, RD(0) + RD(0));
L_002D27F0:;
SET64(2, rd8(c, (RW(18) + 0)));
SET64(2, RD(2) & 0x4);
{ int t = RD(2) == RD(0);  if (t) goto L_002D2838; }
SET64(2, (s32)rd32(c, (RW(20) + 140)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d281c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 140)));
SET32(5, RW(29) + 96);
SET64(31, 0x2d282c); SET32(4, RW(2) + RW(17)); JP_F_0014E980(c);
 goto L_002D2858;
L_002D2838:;
SET64(2, (s32)rd32(c, (RW(20) + 140)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d2854); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002D2858:;
SET64(4, (s32)rd32(c, (RW(20) + 136)));
c->f[0].u = rd32(c, (RW(29) + 100));
SET64(2, (s32)rd32(c, (RW(4) + 140)));
c->f[1].u = rd32(c, (RW(2) + 436));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 100), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2d2880);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 140)));
c->f[12].u = c->f[0].u;
SET32(2, RW(2) + RW(17));
SET64(31, 0x2d2894); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(20) + 140)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d28ac);  rt_call(c, t); }
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 1);
SET64(3, RSD(19) < RSD(16));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002D27F0; } }
L_002D28C0:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002D28E0(Ctx *c) { /* func_002D28E0 */
ENTER(0x2d28e0);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(9) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(7) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(8) + RD(0));
wr8(c, (RW(29) + 171), (u8)RW(10));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2d2930); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00100320(c);
SET64(16, RD(2) + RD(0));
{ int t = RSD(19) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_002D29C8; }
SET64(1, RSD(19) < (s64)9);
{ int t = RD(1) != RD(0); SET32(4, RW(19) + -8); if (t) goto L_002D29A0; }
{ int t = RSD(19) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_002D2968; }
SET64(1, (s64)(s32)0x7fff0000);
SET64(1, RD(1) | 0xffff);
SET64(1, RSD(19) < RSD(1));
{ int t = RD(1) == RD(0);  if (t) goto L_002D2968; }
SET64(2, RD(0) + (s64)1);
L_002D2968:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D29A0; }
L_002D2970:;
SET32(3, RW(16) + RW(5));
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(5, RW(5) + 8);
wr8(c, (RW(3) + 1), (u8)RW(0));
SET64(2, RSD(5) < RSD(4));
wr8(c, (RW(3) + 2), (u8)RW(0));
wr8(c, (RW(3) + 3), (u8)RW(0));
wr8(c, (RW(3) + 4), (u8)RW(0));
wr8(c, (RW(3) + 5), (u8)RW(0));
wr8(c, (RW(3) + 6), (u8)RW(0));
{ int t = RD(2) != RD(0); wr8(c, (RW(3) + 7), (u8)RW(0)); if (t) { POLL(); goto L_002D2970; } }
L_002D29A0:;
SET64(1, RSD(5) < RSD(19));
{ int t = RD(1) == RD(0);  if (t) goto L_002D29C8; }
L_002D29AC:;
SET32(2, RW(16) + RW(5));
wr8(c, (RW(2) + 0), (u8)RW(0));
SET32(5, RW(5) + 1);
SET64(2, RSD(5) < RSD(19));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002D29AC; } }
L_002D29C8:;
SET32(2, RW(19) + 1);
SET64(31, 0x2d29d4); SET32(4, RW(2) << 2); JP_F_00100530(c);
SET32(4, RW(19) + 1);
wr32(c, (RW(21) + 144), RW(2));
{ int t = RSD(4) <= 0; SET64(3, RD(0) + RD(0)); if (t) goto L_002D2AC0; }
SET64(1, RSD(4) < (s64)9);
{ int t = RD(1) != RD(0); SET32(2, RW(19) + -7); if (t) goto L_002D2A90; }
{ int t = RSD(4) < 0; SET64(5, RD(0) + RD(0)); if (t) goto L_002D2A10; }
SET64(1, (s64)(s32)0x7fff0000);
SET64(1, RD(1) | 0xffff);
SET64(1, RSD(4) < RSD(1));
{ int t = RD(1) == RD(0);  if (t) goto L_002D2A10; }
SET64(5, RD(0) + (s64)1);
L_002D2A10:;
{ int t = RD(5) == RD(0);  if (t) goto L_002D2A90; }
SET64(4, RD(0) + RD(0));
L_002D2A1C:;
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(3, RW(3) + 8);
SET64(5, RSD(3) < RSD(2));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 0), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 4), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 8), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 12), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 16), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 20), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 24), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 28), RW(0));
{ int t = RD(5) != RD(0); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_002D2A1C; } }
L_002D2A90:;
SET32(5, RW(19) + 1);
SET64(1, RSD(3) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002D2AC0; }
SET32(6, RW(3) << 2);
L_002D2AA4:;
SET64(4, (s32)rd32(c, (RW(21) + 144)));
SET32(3, RW(3) + 1);
SET64(2, RSD(3) < RSD(5));
SET32(4, RW(4) + RW(6));
wr32(c, (RW(4) + 0), RW(0));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_002D2AA4; } }
L_002D2AC0:;
SET64(2, (s32)rd32(c, (RW(21) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2d2ad0); SET64(4, (s32)rd32(c, (RW(2) + 4))); JP_F_00326830(c);
SET64(17, RD(0) + RD(0));
{ int t = RSD(19) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_002D2BC0; }
SET64(3, RD(2) << 32);
SET32(6, RW(5) << 2);
SET32(7, RW(22) + RW(6));
SET64(3, RSD(3) >> 32);
SET32(4, RW(0) + 2);
SET32(2, RW(0) + 1);
L_002D2AF4:;
{ int t = RD(22) == RD(0);  if (t) goto L_002D2B78; }
SET64(8, (s32)rd32(c, (RW(7) + 0)));
{ int t = RD(8) != RD(4);  if (t) goto L_002D2B40; }
SET32(8, RW(20) + RW(5));
SET32(9, RW(17) << 2);
SET64(10, RD(8) & 0xffff);
SET32(17, RW(17) + 1);
SET64(8, (s32)rd32(c, (RW(21) + 144)));
SET32(10, RW(10) << 1);
SET32(10, RW(3) + RW(10));
SET32(8, RW(8) + RW(9));
SET64(9, rd16(c, (RW(10) + 2)));
SET32(9, RW(9) << 1);
SET32(9, RW(3) + RW(9));
wr32(c, (RW(8) + 0), RW(9)); goto L_002D2BA8;
L_002D2B40:;
{ int t = RD(8) != RD(2);  if (t) goto L_002D2BA8; }
SET64(11, rd16(c, (RW(3) + 152)));
SET32(10, RW(17) << 2);
SET64(9, (s32)rd32(c, (RW(21) + 144)));
SET32(8, RW(16) + RW(17));
SET32(17, RW(17) + 1);
SET32(11, RW(11) << 1);
SET32(9, RW(9) + RW(10));
SET32(10, RW(3) + RW(11));
wr32(c, (RW(9) + 0), RW(10));
wr8(c, (RW(8) + 0), (u8)RW(2)); goto L_002D2BA8;
L_002D2B78:;
SET32(8, RW(20) + RW(5));
SET64(9, RD(8) & 0xffff);
SET32(17, RW(17) + 1);
SET32(9, RW(9) << 1);
SET64(8, (s32)rd32(c, (RW(21) + 144)));
SET32(9, RW(3) + RW(9));
SET64(9, rd16(c, (RW(9) + 2)));
SET32(8, RW(8) + RW(6));
SET32(9, RW(9) << 1);
SET32(9, RW(3) + RW(9));
wr32(c, (RW(8) + 0), RW(9));
L_002D2BA8:;
SET32(5, RW(5) + 1);
SET64(8, RSD(5) < RSD(19));
SET32(7, RW(7) + 4);
{ int t = RD(8) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_002D2AF4; } }
L_002D2BC0:;
SET64(31, 0x2d2bc8); SET32(4, RW(0) + 200); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002D2C3C; }
SET64(31, 0x2d2bd8); SET64(4, RD(19) + RD(0)); JP_F_00228490(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -3136);
SET32(2, RW(2) + -3128);
wr32(c, (RW(19) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(19) + 20), RW(2));
SET32(3, RW(3) + -3116);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(19) + 36), RW(3));
SET32(2, RW(2) + -3056);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 72), RW(2));
SET32(3, RW(3) + 15744);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 56), RW(3));
SET32(2, RW(2) + 15752);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 20), RW(2));
SET32(3, RW(3) + 15764);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15824);
wr32(c, (RW(19) + 36), RW(3));
wr32(c, (RW(19) + 72), RW(2));
wr32(c, (RW(19) + 196), RW(0));
L_002D2C3C:;
wr32(c, (RW(21) + 136), RW(19));
SET64(4, RD(19) + RD(0));
SET64(3, (s32)rd32(c, (RW(21) + 60)));
SET64(9, RD(18) & 0xffff);
SET64(5, (s32)rd32(c, (RW(21) + 144)));
SET32(7, RW(0) + -1);
SET32(8, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 20)));
SET64(10, (s32)rd32(c, (RW(3) + 16)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(3, (s32)rd32(c, (RW(3) + 84)));
SET64(31, 0x2d2c74); SET32(6, RW(2) + RW(3)); JP_F_00225E90(c);
SET64(2, rd8(c, (RW(29) + 171)));
{ int t = RD(2) == RD(0);  if (t) goto L_002D2CF8; }
{ int t = RSD(17) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002D2CF8; }
SET64(2, (s32)rd32(c, (RW(21) + 136)));
L_002D2C8C:;
SET64(4, RD(19) & 0xffff);
SET32(3, RW(4) << 5);
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 140)));
SET32(4, RW(3) << 4);
SET32(3, RW(2) + RW(4));
SET64(2, rd16(c, (RW(3) + 488)));
SET64(2, RD(2) & 0xfffe);
wr16(c, (RW(3) + 488), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(21) + 136)));
SET64(2, (s32)rd32(c, (RW(2) + 140)));
SET32(3, RW(2) + RW(4));
SET64(2, rd16(c, (RW(3) + 488)));
SET64(2, RD(2) | 0x2);
wr16(c, (RW(3) + 488), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(21) + 136)));
SET64(2, (s32)rd32(c, (RW(2) + 140)));
SET32(4, RW(2) + RW(4));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d2ce4);  rt_call(c, t); }
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(17));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(21) + 136))); { POLL(); goto L_002D2C8C; } }
L_002D2CF8:;
{ int t = RSD(17) <= 0; SET64(3, RD(0) + RD(0)); if (t) goto L_002D2D30; }
SET32(2, RW(16) + RW(3));
L_002D2D04:;
SET64(2, rd8(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_002D2D20; }
SET64(2, (s32)rd32(c, (RW(21) + 136)));
SET64(2, (s32)rd32(c, (RW(2) + 188)));
SET32(2, RW(2) + RW(3));
wr8(c, (RW(2) + 0), (u8)RW(0));
L_002D2D20:;
SET32(3, RW(3) + 1);
SET64(2, RSD(3) < RSD(17));
if (RD(2) != RD(0)) { SET32(2, RW(16) + RW(3)); { POLL(); goto L_002D2D04; } }
L_002D2D30:;
SET64(31, 0x2d2d38); SET64(4, RD(16) + RD(0)); JP_F_00100430(c);
SET32(2, RW(18) << 1);
SET64(16, RD(0) + RD(0));
SET32(2, RW(2) + RW(18));
SET32(2, RW(2) << 7);
SET64(31, 0x2d2d50); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(30, RD(2) + RD(0)); if (t) goto L_002D2D80; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET32(16, RW(0) + 1);
SET64(4, RD(30) + RD(0));
SET32(5, RW(5) + -6640);
SET32(6, RW(6) + -7024);
SET32(7, RW(0) + 384);
SET64(31, 0x2d2d7c); SET64(8, RD(18) + RD(0)); JP_F_00102580(c);
SET64(30, RD(2) + RD(0));
L_002D2D80:;
wr32(c, (RW(21) + 140), RW(30));
{ int t = RSD(18) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_002D2FC0; }
SET64(19, RD(0) + RD(0));
L_002D2D90:;
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(4, RW(2) + RW(19));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d2da8);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(21) + 60)));
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET64(3, (s32)rd32(c, (RW(3) + 24)));
SET32(2, RW(2) + RW(19));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(3, RW(3) + 64);
wr32(c, (RW(2) + 160), RW(3));
SET64(5, (s32)rd32(c, (RW(21) + 108)));
{ int t = RD(5) == RD(0);  if (t) goto L_002D2DD8; }
SET32(5, RW(5) + 672);
L_002D2DD8:;
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(4, RW(2) + RW(19));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2d2df0);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d2e0c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(21) + 140)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(19));
SET64(31, 0x2d2e24); SET32(4, RW(2) + 192); JP_F_00163900(c);
SET64(3, (s32)rd32(c, (RW(21) + 140)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(19));
SET64(31, 0x2d2e3c); SET32(4, RW(2) + 192); JP_F_001638F0(c);
SET64(3, (s32)rd32(c, (RW(21) + 140)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(19));
SET64(31, 0x2d2e54); SET32(4, RW(2) + 192); JP_F_001638E0(c);
SET64(3, (s32)rd32(c, (RW(21) + 140)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(19));
SET64(31, 0x2d2e6c); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(21) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(2) + 116)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002D2E90; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002D2EA8;
L_002D2E90:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002D2EA8:;
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(2, RW(2) + RW(19));
wr32(c, (RW(2) + 164), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(21) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(2) + 118)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002D2ED8; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002D2EF0;
L_002D2ED8:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002D2EF0:;
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(2, RW(2) + RW(19));
wr32(c, (RW(2) + 168), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(2, RW(2) + RW(19));
wr32(c, (RW(2) + 172), RW(0));
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(2, RW(2) + RW(19));
wr32(c, (RW(2) + 176), RW(0));
SET64(2, (s32)rd32(c, (RW(21) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(2) + 116)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002D2F38; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002D2F50;
L_002D2F38:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002D2F50:;
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(2, RW(2) + RW(19));
wr32(c, (RW(2) + 180), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(21) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(2) + 118)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002D2F80; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002D2F98;
L_002D2F80:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002D2F98:;
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(2, RW(2) + RW(19));
wr32(c, (RW(2) + 184), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET64(31, 0x2d2fb0); SET32(4, RW(2) + RW(19)); JP_F_0014EB10(c);
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(18));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 384); if (t) { POLL(); goto L_002D2D90; } }
L_002D2FC0:;
SET64(2, (s32)rd32(c, (RW(21) + 136)));
SET64(5, RD(23) & 0xffff);
SET64(31, 0x2d2fd0); SET32(4, RW(2) + 168); JP_F_0013BA20(c);
SET64(2, RD(17) + RD(0));
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
SET32(29, RW(29) + 176); return;
}

static void JP_B_002D3010(Ctx *c, u32 entry) { /* func_002D3010 */
ENTER(entry);
switch (entry) { case 0x2d306c: goto L_002D306C; }
SET32(29, RW(29) + -400);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 80), RD(31));
SET64(3, RD(0) | 0xff04);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[0].u = RW(0);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = rd32(c, (RW(2) + -22384));
wr32(c, (RW(29) + 384), RW(0));
wr32(c, (RW(29) + 388), RW(0));
wr32(c, (RW(29) + 392), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 396), RW(2));
c->f[13].u = RW(2);
SET64(2, rd16(c, (RW(4) + 0)));
{ int t = RD(2) == RD(3); SET64(17, RD(4) + RD(0)); if (t) goto L_002D5604; }
SET64(3, RD(0) | 0xff03);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D55D4; }
L_002D306C:;
SET64(3, RD(0) | 0xff02);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 124))); goto L_002D5560; }
SET64(3, RD(0) | 0xff01);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D54F8; }
SET64(3, RD(0) | 0xff00);
if (RD(2) == RD(3)) { SET64(3, (s32)rd32(c, (RW(17) + 60))); goto L_002D54B0; }
SET32(3, RW(0) + 770);
if (RD(2) == RD(3)) { SET32(4, RW(17) + 64); goto L_002D5418; }
SET32(3, RW(0) + 769);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D53F4; }
SET32(3, RW(0) + 768);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 120))); goto L_002D5380; }
SET32(3, RW(0) + 3074);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D5224; }
SET32(3, RW(0) + 3073);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D5058; }
SET32(3, RW(0) + 3072);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 156); goto L_002D4F14; }
SET32(3, RW(0) + 2820);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 96))); goto L_002D4EDC; }
SET32(3, RW(0) + 2819);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 72); goto L_002D4E6C; }
SET32(3, RW(0) + 2818);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D4DE0; }
SET32(3, RW(0) + 2817);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D4C28; }
SET32(3, RW(0) + 2816);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 32); goto L_002D4B18; }
SET32(3, RW(0) + 2564);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 96))); goto L_002D4AD4; }
SET32(3, RW(0) + 2563);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 100); goto L_002D4A30; }
SET32(3, RW(0) + 2562);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D49D0; }
SET32(3, RW(0) + 2561);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D47EC; }
SET32(3, RW(0) + 2560);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 176); goto L_002D46A8; }
SET32(3, RW(0) + 2308);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 96))); goto L_002D4664; }
SET32(3, RW(0) + 2307);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 92); goto L_002D45D0; }
SET32(3, RW(0) + 2306);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D4568; }
SET32(3, RW(0) + 2305);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D43AC; }
SET32(3, RW(0) + 2304);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 20); goto L_002D4284; }
SET32(3, RW(0) + 2052);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 96))); goto L_002D4240; }
SET32(3, RW(0) + 2051);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 96); goto L_002D41A8; }
SET32(3, RW(0) + 2050);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D4148; }
SET32(3, RW(0) + 2049);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D3F8C; }
SET32(3, RW(0) + 2048);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 280); goto L_002D3E64; }
SET32(3, RW(0) + 514);
if (RD(2) == RD(3)) { SET32(4, RW(17) + 64); goto L_002D3DF4; }
SET32(3, RW(0) + 513);
if (RD(2) == RD(3)) { SET64(2, (s64)(s32)0x40800000); goto L_002D3D5C; }
SET32(3, RW(0) + 512);
if (RD(2) == RD(3)) { wr32(c, (RW(17) + 180), c->f[0].u); goto L_002D3D48; }
SET32(3, RW(0) + 258);
{ int t = RD(2) == RD(3);  if (t) goto L_002D3B94; }
SET32(3, RW(0) + 257);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D3B74; }
SET32(3, RW(0) + 256);
if (RD(2) == RD(3)) { SET64(5, (s32)rd32(c, (RW(17) + 100))); goto L_002D3AD8; }
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET64(3, (s32)rd32(c, (RW(17) + 184))); goto L_002D37D0; }
{ int t = RD(2) == RD(0);  if (t) goto L_002D322C; }
SET64(4, (s32)rd32(c, (RW(17) + 128))); goto L_002D5658;
L_002D322C:;
SET64(31, 0x2d3234);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x2d3240); SET32(5, RW(0) + 1); JP_F_001630B0(c);
SET64(31, 0x2d3248); SET32(4, RW(0) + 32); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D3258; }
SET64(31, 0x2d3258); SET64(4, RD(16) + RD(0)); JP_F_001509B0(c);
L_002D3258:;
SET32(5, RW(0) + 512);
SET64(4, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x2d3274); wr32(c, (RW(17) + 104), RW(16)); JP_F_00150830(c);
SET64(31, 0x2d327c); SET32(4, RW(0) + 1424); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D329C; }
SET32(6, RW(0) + 100);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 16384);
SET64(7, RD(6) + RD(0));
SET64(31, 0x2d329c); SET64(8, RD(6) + RD(0)); JP_F_00162820(c);
L_002D329C:;
wr32(c, (RW(17) + 108), RW(16));
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 228), (u8)RW(2));
SET64(31, 0x2d32b0); SET32(4, RW(0) + 1424); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D32D0; }
SET32(6, RW(0) + 100);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 16384);
SET64(7, RD(6) + RD(0));
SET64(31, 0x2d32d0); SET64(8, RD(6) + RD(0)); JP_F_00162820(c);
L_002D32D0:;
wr32(c, (RW(17) + 112), RW(16));
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 228), (u8)RW(2));
SET64(31, 0x2d32e4); SET32(4, RW(0) + 1552); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D33A8; }
SET32(6, RW(0) + 100);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 16384);
SET64(7, RD(6) + RD(0));
SET64(31, 0x2d3304); SET64(8, RD(6) + RD(0)); JP_F_00162820(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 6144);
SET32(3, RW(3) + 6160);
wr32(c, (RW(16) + 176), RW(2));
SET32(4, RW(16) + 1440);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 196), RW(3));
SET32(2, RW(2) + 6200);
SET64(31, 0x2d3330); wr32(c, (RW(16) + 1072), RW(2)); JP_F_00149680(c);
SET64(31, 0x2d3338); SET32(4, RW(16) + 1456); JP_F_00149680(c);
SET64(31, 0x2d3340); SET32(4, RW(16) + 1472); JP_F_00149680(c);
SET64(31, 0x2d3348); SET32(4, RW(16) + 1488); JP_F_00149680(c);
SET64(31, 0x2d3350); SET32(4, RW(16) + 1512); JP_F_00179800(c);
wr32(c, (RW(16) + 1424), RW(0));
SET32(3, RW(0) + 16384);
wr8(c, (RW(16) + 1428), (u8)RW(0));
SET32(2, RW(0) + 100);
wr32(c, (RW(16) + 1524), RW(3));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 1528), RW(2));
SET32(5, RW(0) + 1);
wr32(c, (RW(16) + 1532), RW(2));
SET64(31, 0x2d337c); wr32(c, (RW(16) + 1536), RW(2)); JP_F_001630B0(c);
wr32(c, (RW(16) + 1504), RW(0));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 1540), RW(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2d3394); wr32(c, (RW(16) + 1432), RW(0)); JP_F_00163090(c);
SET64(31, 0x2d339c); SET64(4, RD(16) + RD(0)); JP_F_001797F0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d33a8); SET32(5, RW(28) + -31288); JP_F_001797E0(c);
L_002D33A8:;
SET32(4, RW(0) + 352);
SET64(31, 0x2d33b4); wr32(c, (RW(17) + 116), RW(16)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002D33C4; }
SET64(31, 0x2d33c4); SET64(4, RD(18) + RD(0)); JP_F_001A9430(c);
L_002D33C4:;
SET64(6, (s64)(s32)0x4a0000);
SET64(8, (s64)(s32)0x4c0000);
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(6, RW(6) + -15952);
SET32(7, RW(0) + 275);
SET32(8, RW(8) + -28512);
SET64(31, 0x2d33e8); wr32(c, (RW(16) + 1424), RW(18)); JP_F_001A9420(c);
SET64(31, 0x2d33f0); SET64(4, (s32)rd32(c, (RW(16) + 1424))); JP_F_001A9400(c);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(16) + 1428), (u8)RW(0));
c->f[12].u = RW(2);
SET32(4, RW(29) + 128);
SET64(2, (s32)rd32(c, (RW(17) + 116)));
c->f[13].u = c->f[12].u;
c->f[14].u = c->f[12].u;
SET64(18, (s32)rd32(c, (RW(2) + 1424)));
SET64(31, 0x2d3418); c->f[15].u = c->f[12].u; JP_F_0013E810(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x3f420000);
SET64(3, RD(2) | 0x8f5c);
SET64(2, (s64)(s32)0xbf420000);
SET64(2, RD(2) | 0x8f5c);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(3);
c->f[15].u = RW(2);
c->f[12].u = RW(0);
SET64(31, 0x2d3448); SET32(4, RW(29) + 112); JP_F_0013E810(c);
SET64(5, RD(16) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(31, 0x2d3458); SET32(4, RW(29) + 192); JP_F_001A93A0(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(29) + 192);
SET64(31, 0x2d3468); SET64(6, RD(0) + RD(0)); JP_F_001A9350(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x2d3478); SET64(6, RD(0) + RD(0)); JP_F_001A9310(c);
SET64(3, (s64)(s32)0x3ecc0000);
SET64(2, (s64)(s32)0x3f800000);
SET64(3, RD(3) | 0xcccd);
SET32(4, RW(29) + 96);
c->f[12].u = RW(3);
c->f[15].u = RW(2);
c->f[13].u = c->f[12].u;
SET64(31, 0x2d349c); c->f[14].u = c->f[12].u; JP_F_0013E810(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2d34a8); SET32(4, RW(29) + 144); JP_F_001A92B0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2d34b4); SET32(5, RW(29) + 144); JP_F_001A9280(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2d34c0); SET32(5, RW(0) + 1); JP_F_001A9250(c);
SET32(4, RW(29) + 144);
SET64(31, 0x2d34cc); SET32(5, RW(0) + -1); JP_F_0017F9F0(c);
SET32(4, RW(29) + 192);
SET64(31, 0x2d34d8); SET32(5, RW(0) + -1); JP_F_00178E60(c);
SET64(3, (s64)(s32)0x3f000000);
SET64(2, (s64)(s32)0x3f800000);
SET64(4, (s32)rd32(c, (RW(17) + 116)));
SET32(6, RW(0) + 1);
wr32(c, (RW(29) + 380), RW(2));
SET32(5, RW(29) + 384);
wr32(c, (RW(29) + 368), RW(3));
wr32(c, (RW(29) + 372), RW(3));
wr32(c, (RW(29) + 376), RW(3));
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
wr8(c, (RW(4) + 228), (u8)RW(6));
wr128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(17) + 116)));
SET64(2, (s32)rd32(c, (RW(2) + 1424)));
SET64(25, (s32)rd32(c, (RW(2) + 64)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d3520); SET32(4, RW(2) + 32); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f000000);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 364), RW(2));
SET32(5, RW(29) + 384);
wr32(c, (RW(29) + 352), RW(3));
wr32(c, (RW(29) + 356), RW(3));
wr32(c, (RW(29) + 360), RW(3));
rd128(c, (RW(29) + 352) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(17) + 116)));
SET64(2, (s32)rd32(c, (RW(2) + 1424)));
SET64(25, (s32)rd32(c, (RW(2) + 336)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d355c); SET32(4, RW(2) + 304); rt_call(c, t); }
SET64(31, 0x2d3564); SET32(4, RW(0) + 1552); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D3628; }
SET32(6, RW(0) + 10);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 8192);
SET64(7, RD(6) + RD(0));
SET64(31, 0x2d3584); SET64(8, RD(6) + RD(0)); JP_F_00162820(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 6144);
SET32(3, RW(3) + 6160);
wr32(c, (RW(16) + 176), RW(2));
SET32(4, RW(16) + 1440);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 196), RW(3));
SET32(2, RW(2) + 6200);
SET64(31, 0x2d35b0); wr32(c, (RW(16) + 1072), RW(2)); JP_F_00149680(c);
SET64(31, 0x2d35b8); SET32(4, RW(16) + 1456); JP_F_00149680(c);
SET64(31, 0x2d35c0); SET32(4, RW(16) + 1472); JP_F_00149680(c);
SET64(31, 0x2d35c8); SET32(4, RW(16) + 1488); JP_F_00149680(c);
SET64(31, 0x2d35d0); SET32(4, RW(16) + 1512); JP_F_00179800(c);
wr32(c, (RW(16) + 1424), RW(0));
SET32(3, RW(0) + 8192);
wr8(c, (RW(16) + 1428), (u8)RW(0));
SET32(2, RW(0) + 10);
wr32(c, (RW(16) + 1524), RW(3));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 1528), RW(2));
SET32(5, RW(0) + 1);
wr32(c, (RW(16) + 1532), RW(2));
SET64(31, 0x2d35fc); wr32(c, (RW(16) + 1536), RW(2)); JP_F_001630B0(c);
wr32(c, (RW(16) + 1504), RW(0));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 1540), RW(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2d3614); wr32(c, (RW(16) + 1432), RW(0)); JP_F_00163090(c);
SET64(31, 0x2d361c); SET64(4, RD(16) + RD(0)); JP_F_001797F0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d3628); SET32(5, RW(28) + -31288); JP_F_001797E0(c);
L_002D3628:;
wr32(c, (RW(17) + 120), RW(16));
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 1544), RW(2));
SET64(31, 0x2d363c); SET32(4, RW(0) + 4); JP_F_00100530(c);
wr32(c, (RW(16) + 1540), RW(2));
SET64(31, 0x2d3648); SET32(4, RW(0) + 496); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002D36A0; }
SET32(5, RW(0) + 100);
SET64(4, RD(19) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x2d3664); SET64(7, RD(5) + RD(0)); JP_F_002A6630(c);
SET32(18, RW(19) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(18) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2d367c); wr32(c, (RW(19) + 240), RW(4)); JP_F_002AE1F0(c);
SET64(31, 0x2d3684); SET32(4, RW(18) + 32); JP_F_002A88F0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 240), RW(18));
SET32(2, RW(2) + -3920);
SET64(4, RD(19) + RD(0));
wr32(c, (RW(19) + 144), RW(2));
SET64(31, 0x2d36a0); SET32(5, RW(19) + 272); JP_F_002A6520(c);
L_002D36A0:;
SET64(2, (s32)rd32(c, (RW(16) + 1540)));
wr32(c, (RW(2) + 0), RW(19));
SET64(4, (s32)rd32(c, (RW(16) + 560)));
SET64(2, (s32)rd32(c, (RW(16) + 1540)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2d36bc); SET64(6, (s32)rd32(c, (RW(4) + 16))); JP_F_002ADFE0(c);
SET64(2, (s32)rd32(c, (RW(17) + 120)));
SET32(3, RW(0) + 1);
SET32(4, RW(0) + 84);
SET64(31, 0x2d36d0); wr8(c, (RW(2) + 228), (u8)RW(3)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D36E0; }
SET64(31, 0x2d36e0); SET64(4, RD(16) + RD(0)); JP_F_0036E860(c);
L_002D36E0:;
wr32(c, (RW(17) + 184), RW(16));
SET64(5, (s32)rd32(c, (RW(17) + 104)));
SET64(6, (s32)rd32(c, (RW(17) + 120)));
SET64(31, 0x2d36f4); SET64(4, RD(16) + RD(0)); JP_F_0036E850(c);
SET64(4, (s32)rd32(c, (RW(17) + 184)));
SET64(31, 0x2d3700); SET32(5, RW(0) + 24); JP_F_0036E840(c);
SET64(5, (s32)rd32(c, (RW(17) + 184)));
SET64(31, 0x2d370c); SET64(4, RD(17) + RD(0)); JP_F_0013A470(c);
SET64(31, 0x2d3714); SET32(4, RW(0) + 12); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D3724; }
SET64(31, 0x2d3724); SET64(4, RD(16) + RD(0)); JP_F_00318900(c);
L_002D3724:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2d3734); wr32(c, (RW(17) + 188), RW(16)); JP_F_00318770(c);
SET64(31, 0x2d373c); SET32(4, RW(0) + 60); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D3778; }
SET64(31, 0x2d374c); SET64(4, RD(16) + RD(0)); JP_F_00325FE0(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12608);
wr32(c, (RW(16) + 8), RW(2));
wr32(c, (RW(16) + 28), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 36), RW(0));
wr32(c, (RW(16) + 40), RW(0));
wr32(c, (RW(16) + 44), RW(0));
wr32(c, (RW(16) + 48), RW(0));
wr32(c, (RW(16) + 52), RW(0));
wr8(c, (RW(16) + 56), (u8)RW(0));
L_002D3778:;
wr32(c, (RW(17) + 60), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(5, (s32)rd32(c, (RW(17) + 104)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d3790); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET32(3, RW(0) + 1);
SET64(31, 0x2d37a0); wr8(c, (RW(2) + 57), (u8)RW(3)); JP_F_00139590(c);
SET64(31, 0x2d37a8);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET32(5, RW(0) + 118);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2d37c0); SET64(6, RD(0) + RD(0)); JP_F_001B8120(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 184)));
L_002D37D0:;
SET32(2, RW(0) + 255);
SET64(3, rd16(c, (RW(3) + 0)));
{ int t = RD(3) != RD(2);  if (t) goto L_002D5654; }
SET64(4, (s32)rd32(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d37f4);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D5654; }
SET32(5, RW(0) + 5);
SET64(6, (s64)(s32)0x420000);
SET32(4, RW(17) + 64);
SET32(6, RW(6) + -30848);
SET64(7, RD(5) + RD(0));
SET64(8, RD(0) + RD(0));
SET32(9, RW(0) + 1);
SET64(31, 0x2d3820); wr32(c, (RW(17) + 100), RW(0)); JP_F_003245E0(c);
SET64(31, 0x2d3828); SET32(4, RW(0) + 160); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D3838; }
SET64(31, 0x2d3838); SET64(4, RD(16) + RD(0)); JP_F_00314D20(c);
L_002D3838:;
wr32(c, (RW(17) + 124), RW(16));
SET64(2, (s64)(s32)0x47af0000);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
SET64(2, RD(2) | 0xc800);
c->f[12].u = RW(2);
SET64(6, (s64)(s32)0x420000);
SET64(7, (s64)(s32)0x420000);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
SET32(6, RW(6) + -31680);
SET32(7, RW(7) + -31056);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2d3870); SET32(8, RW(0) + -1); JP_F_00314BA0(c);
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(31, 0x2d387c); SET64(4, (s32)rd32(c, (RW(2) + 52))); JP_F_002DDCA0(c);
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET64(7, RD(2) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x2d3890); SET32(6, RW(0) + 3); JP_F_00313470(c);
SET64(5, (s32)rd32(c, (RW(17) + 112)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 124))); goto L_002D38A4; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 124)));
L_002D38A4:;
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2d38b4);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d38cc); SET32(6, RW(0) + -1); rt_call(c, t); }
SET64(31, 0x2d38d4); SET32(4, RW(0) + 224); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D38E8; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d38e8); SET32(5, RW(0) + 1); JP_F_0014BCD0(c);
L_002D38E8:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 4);
SET64(31, 0x2d38f8); wr32(c, (RW(17) + 132), RW(16)); JP_F_0014BA40(c);
SET64(2, (s64)(s32)0x47af0000);
SET64(2, RD(2) | 0xc780);
c->f[12].u = RW(2);
SET64(31, 0x2d390c); SET64(4, (s32)rd32(c, (RW(17) + 132))); JP_F_0014E9B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 132)));
SET64(7, (s64)(s32)0x41800000);
SET64(6, (s64)(s32)0x42880000);
SET64(5, (s64)(s32)0x43080000);
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 0), RW(7));
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 4), RW(7));
SET64(4, (s32)rd32(c, (RW(17) + 132)));
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 8), RW(7));
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 12), RW(6));
SET64(4, (s32)rd32(c, (RW(17) + 132)));
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 20), RW(7));
SET64(4, (s32)rd32(c, (RW(17) + 132)));
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 24), RW(5));
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 28), RW(6));
SET64(4, (s32)rd32(c, (RW(17) + 132)));
SET64(3, rd16(c, (RW(4) + 168)));
{ int t = RSD(3) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_002D39B8; }
SET64(6, (s64)(s32)0x540000);
SET32(6, RW(6) + 2656);
L_002D3980:;
SET64(3, RD(2) & 0xffff);
rd128(c, (RW(6) + 0) & ~15u, &c->r[5]);
SET32(4, RW(3) << 4);
SET32(2, RW(2) + 1);
SET64(3, (s32)rd32(c, (RW(17) + 132)));
SET64(3, (s32)rd32(c, (RW(3) + 164)));
SET32(3, RW(3) + RW(4));
wr128(c, (RW(3) + 0) & ~15u, &c->r[5]);
SET64(4, (s32)rd32(c, (RW(17) + 132)));
SET64(3, rd16(c, (RW(4) + 168)));
SET64(3, RSD(2) < RSD(3));
{ int t = RD(3) != RD(0); SET32(6, RW(6) + 16); if (t) { POLL(); goto L_002D3980; } }
L_002D39B8:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d39c8);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(17) + 112)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 132))); goto L_002D39DC; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 132)));
L_002D39DC:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2d39ec);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d3a04); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, 0x2d3a0c); SET32(4, RW(0) + 128); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D3A1C; }
SET64(31, 0x2d3a1c); SET64(4, RD(16) + RD(0)); JP_F_00315F90(c);
L_002D3A1C:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d3a28); wr32(c, (RW(17) + 128), RW(16)); JP_F_00315E90(c);
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2d3a38); SET64(4, (s32)rd32(c, (RW(2) + 4))); JP_F_00326830(c);
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(5, RD(2) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2d3a4c); SET64(7, RD(0) + RD(0)); JP_F_00315BA0(c);
SET64(3, (s64)(s32)0x44000000);
SET64(2, (s64)(s32)0x42800000);
c->f[12].u = RW(3);
c->f[13].u = RW(2);
SET64(31, 0x2d3a64); SET64(4, (s32)rd32(c, (RW(17) + 128))); JP_F_00315960(c);
SET64(2, (s64)(s32)0x43b00000);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
SET64(31, 0x2d3a78); SET64(4, (s32)rd32(c, (RW(17) + 128))); JP_F_003159D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(5, (s64)(s32)0x540000);
SET64(31, 0x2d3a88); SET32(5, RW(5) + 2656); JP_F_00315860(c);
SET64(2, (s64)(s32)0x47c30000);
SET64(2, RD(2) | 0x5000);
c->f[12].u = RW(2);
SET64(31, 0x2d3a9c); SET64(4, (s32)rd32(c, (RW(17) + 128))); JP_F_003157F0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2d3aac); SET64(4, (s32)rd32(c, (RW(17) + 128))); JP_F_00315740(c);
SET64(31, 0x2d3ab4); SET64(4, (s32)rd32(c, (RW(17) + 128))); JP_F_003156F0(c);
SET64(5, (s32)rd32(c, (RW(17) + 108)));
SET64(31, 0x2d3ac0); SET64(4, (s32)rd32(c, (RW(17) + 128))); JP_F_00315D50(c);
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d3acc); SET32(5, RW(0) + 1); JP_F_00315690(c);
SET32(2, RW(0) + 256);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D3AD8:;
SET64(31, 0x2d3ae0); SET32(4, RW(17) + 64); JP_F_00324080(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2d3aec); SET32(4, RW(17) + 64); JP_F_00323FD0(c);
SET64(5, (s32)rd32(c, (RW(17) + 100)));
SET64(31, 0x2d3af8); SET64(4, (s32)rd32(c, (RW(17) + 128))); JP_F_00315B50(c);
SET64(31, 0x2d3b00); SET64(4, (s32)rd32(c, (RW(17) + 128))); JP_F_003156F0(c);
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET64(5, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d3b18); SET32(6, RW(0) + -1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d3b30); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d3b3c); SET64(5, RD(0) + RD(0)); JP_F_00315690(c);
SET64(3, (s32)rd32(c, (RW(17) + 184)));
SET32(4, RW(0) + 512);
SET64(2, (s64)(s32)0x3f800000);
SET32(5, RW(0) + 256);
c->f[12].u = RW(2);
wr16(c, (RW(3) + 0), (u16)RW(4));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(4, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d3b64); c->f[13].u = c->f[12].u; JP_F_00311B90(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D3B74:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d3b80); SET32(4, RW(2) + 16); JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
L_002D3B94:;
SET64(31, 0x2d3b9c);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d3ba8); SET32(5, RW(0) + -1); JP_F_0013E1A0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2d3bb4); SET32(4, RW(17) + 64); JP_F_00324280(c);
SET64(16, (s32)rd32(c, (RW(17) + 100)));
SET64(31, 0x2d3bc0); SET32(4, RW(17) + 64); JP_F_003241C0(c);
{ int t = RD(16) == RD(2);  if (t) goto L_002D3C34; }
SET64(4, (s32)rd32(c, (RW(17) + 188)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 1);
SET32(7, RW(0) + 127);
SET64(31, 0x2d3be0); SET32(8, RW(0) + 64); JP_F_003185B0(c);
SET64(31, 0x2d3be8); SET32(4, RW(17) + 64); JP_F_003241C0(c);
wr32(c, (RW(17) + 100), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d3bf8); SET64(5, RD(2) + RD(0)); JP_F_00315B50(c);
SET64(4, (s32)rd32(c, (RW(17) + 100)));
SET64(2, (s32)rd32(c, (RW(17) + 124)));
SET32(3, RW(4) << 2);
SET32(4, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET32(3, RW(4) << 2);
SET32(3, RW(4) + RW(3));
SET32(3, RW(3) << 1);
SET64(25, (s32)rd32(c, (RW(2) + 1928)));
SET32(3, RW(3) + 36);
SET32(4, RW(2) + 1920);
c->f[0].u = RW(3);
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2d3c34); c->f[12].f = (f32)(s32)c->f[0].u; rt_call(c, t); }
L_002D3C34:;
SET64(31, 0x2d3c3c);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d3c48); SET32(5, RW(0) + -1); JP_F_0013E200(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x2000);
{ int t = RD(2) == RD(0);  if (t) goto L_002D3C7C; }
SET64(4, (s32)rd32(c, (RW(17) + 188)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 2);
SET32(7, RW(0) + 127);
SET64(31, 0x2d3c70); SET32(8, RW(0) + 64); JP_F_003185B0(c);
SET32(2, RW(0) + 512);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D3CC0;
L_002D3C7C:;
SET64(31, 0x2d3c84);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d3c90); SET32(5, RW(0) + -1); JP_F_0013E200(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x4000);
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x42700000); goto L_002D3CC4; }
SET64(4, (s32)rd32(c, (RW(17) + 188)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 3);
SET32(7, RW(0) + 127);
SET64(31, 0x2d3cb8); SET32(8, RW(0) + 64); JP_F_003185B0(c);
SET64(2, RD(0) | 0xff00);
wr16(c, (RW(17) + 0), (u16)RW(2));
L_002D3CC0:;
SET64(2, (s64)(s32)0x42700000);
L_002D3CC4:;
SET32(4, RW(17) + 180);
c->f[0].u = RW(2);
SET32(5, RW(0) + 1);
c->f[12].f = fpu_div(F(20), F(0));
SET64(31, 0x2d3ce4);  JP_F_00311B30(c);
SET64(3, (s64)(s32)0x3fc00000);
SET64(2, (s64)(s32)0x3f000000);
c->f[1].u = RW(3);
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(17) + 176), c->f[0].u);
c->f[1].u = RW(2);
SET64(2, (s32)rd32(c, (RW(17) + 124)));
c->f[0].u = RW(0);
c->f[2].u = rd32(c, (RW(17) + 176));
c->facc = fpu(F(0) + F(1));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
c->f[12].f = fpu(c->facc + F(1) * F(2));
SET64(25, (s32)rd32(c, (RW(2) + 1928)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2d3d28); SET32(4, RW(2) + 1920); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 124)));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 1928)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d3d40); SET32(4, RW(2) + 1920); rt_call(c, t); }
 goto L_002D5654;
L_002D3D48:;
wr32(c, (RW(17) + 172), c->f[0].u);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s64)(s32)0x40800000);
L_002D3D5C:;
SET32(4, RW(17) + 180);
c->f[0].u = RW(2);
SET32(5, RW(0) + 1);
c->f[12].f = fpu_div(F(20), F(0));
SET64(31, 0x2d3d7c);  JP_F_00311B30(c);
SET64(2, (s64)(s32)0x3fc00000);
c->f[1].u = RW(2);
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(17) + 176), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 124)));
c->f[12].u = rd32(c, (RW(17) + 176));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 1928)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2d3dac); SET32(4, RW(2) + 1920); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 124)));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 1928)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d3dc4); SET32(4, RW(2) + 1920); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(17) + 172));
SET64(2, (s64)(s32)0x42340000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(1) + F(20));
c->fcc = F(1) < F(0);
{ int t = c->fcc; wr32(c, (RW(17) + 172), c->f[1].u); if (t) goto L_002D5654; }
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET32(4, RW(17) + 64);
L_002D3DF4:;
SET64(31, 0x2d3dfc);  JP_F_003241C0(c);
SET32(3, RW(0) + 4);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 3072); goto L_002D3E5C; }
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 2816); goto L_002D3E54; }
SET32(3, RW(0) + 2);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 2560); goto L_002D3E4C; }
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 2304); goto L_002D3E44; }
if (RD(2) == RD(0)) { SET32(2, RW(0) + 2048); goto L_002D3E3C; }
 goto L_002D5654;
L_002D3E3C:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D3E44:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D3E4C:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D3E54:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D3E5C:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D3E64:;
SET64(31, 0x2d3e6c);  JP_F_00100320(c);
SET64(6, RD(0) + RD(0));
SET64(18, RD(2) + RD(0));
SET32(3, RW(6) << 1);
SET32(2, RW(6) << 2);
SET32(3, RW(3) + RW(6));
SET64(9, RD(0) + RD(0));
SET32(8, RW(3) << 2);
SET64(16, RD(0) + RD(0));
SET32(7, RW(18) + RW(2));
SET32(4, RW(0) + 2);
SET32(3, RW(0) + 1);
SET32(5, RW(0) + 3);
L_002D3E9C:;
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
SET32(2, RW(2) + RW(8));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) != RD(5);  if (t) goto L_002D3ED0; }
wr32(c, (RW(7) + 0), RW(4));
SET64(2, (s32)rd32(c, (RW(17) + 152)));
{ int t = RD(2) != RD(6);  if (t) goto L_002D3EC8; }
SET64(9, RD(16) + RD(0));
L_002D3EC8:;
SET32(16, RW(16) + 1); goto L_002D3ED8;
L_002D3ED0:;
wr32(c, (RW(7) + 0), RW(3));
SET32(16, RW(16) + 1);
L_002D3ED8:;
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < (s64)70);
SET32(8, RW(8) + 12);
{ int t = RD(2) != RD(0); SET32(7, RW(7) + 4); if (t) { POLL(); goto L_002D3E9C; } }
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 5);
SET32(6, RW(0) + 70);
SET64(7, RD(18) + RD(0));
SET32(8, RW(0) + 8);
SET64(31, 0x2d3f08); SET32(10, RW(0) + 1); JP_F_002D28E0(c);
SET64(31, 0x2d3f10); SET64(4, RD(18) + RD(0)); JP_F_001004B0(c);
SET64(2, (s64)(s32)0x41a00000);
SET64(3, (s64)(s32)0x42600000);
wr32(c, (RW(29) + 320), RW(2));
SET64(2, (s64)(s32)0x48120000);
wr32(c, (RW(29) + 324), RW(3));
SET64(2, RD(2) | 0x7c40);
wr32(c, (RW(29) + 328), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 332), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2d3f48); SET32(5, RW(29) + 320); rt_call(c, t); }
SET64(31, 0x2d3f50); SET64(4, (s32)rd32(c, (RW(17) + 136))); JP_F_0022A450(c);
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 108))); goto L_002D3F64; }
SET64(31, 0x2d3f60); SET64(4, RD(2) + RD(0)); JP_F_0022C390(c);
SET64(5, (s32)rd32(c, (RW(17) + 108)));
L_002D3F64:;
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D3F74; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D3F74:;
SET64(31, 0x2d3f7c);  JP_F_0022A3D0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D3F8C:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d3f9c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
{ int t = RD(2) == RD(0);  if (t) goto L_002D4020; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d3fbc); SET64(18, RD(0) + RD(0)); JP_F_00316950(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D4020; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D3FCC:;
SET32(2, RW(2) + RW(16));
SET64(31, 0x2d3fd8); SET64(4, (s32)rd32(c, (RW(2) + 12))); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002D4000; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d3ffc);  rt_call(c, t); }
L_002D4000:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET32(16, RW(16) + 384);
SET64(31, 0x2d4010); SET32(18, RW(18) + 1); JP_F_00316950(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D3FCC; } }
L_002D4020:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); goto L_002D4050; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d403c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D404C; }
SET64(2, RD(0) + RD(0)); goto L_002D40BC;
L_002D404C:;
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D4050:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D40B8; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d4064); SET64(18, RD(0) + RD(0)); JP_F_00316950(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D40B8; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D4074:;
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d408c);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D409C; }
SET64(2, RD(0) + RD(0)); goto L_002D40BC;
L_002D409C:;
SET32(16, RW(16) + 384);
SET64(31, 0x2d40a8); SET32(18, RW(18) + 1); JP_F_00316950(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D4074; } }
L_002D40B8:;
SET64(2, RD(0) + (s64)1);
L_002D40BC:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
{ int t = RD(4) == RD(0); SET64(16, (s16)rd16(c, (RW(4) + 184))); if (t) goto L_002D40E0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d40e0); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002D40E0:;
wr32(c, (RW(17) + 136), RW(0));
SET64(31, 0x2d40ec); SET64(4, (s32)rd32(c, (RW(17) + 144))); JP_F_00100430(c);
wr32(c, (RW(17) + 144), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 140)));
SET64(31, 0x2d4100); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
{ int t = RSD(16) >= 0; wr32(c, (RW(17) + 140), RW(0)); if (t) goto L_002D4114; }
SET32(2, RW(0) + 258);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D4114:;
wr32(c, (RW(17) + 152), RW(16));
SET64(2, (s64)(s32)0x3f000000);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(2);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
SET64(31, 0x2d4138); SET32(5, RW(0) + 257); JP_F_00311B90(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D4148:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d4154); SET32(4, RW(2) + 16); JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d4174); SET32(6, RW(0) + -1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d418c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d4198); SET32(5, RW(0) + 1); JP_F_00315690(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET32(4, RW(0) + 96);
L_002D41A8:;
SET64(31, 0x2d41b0);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D41FC; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d41c4); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13024);
SET32(3, RW(3) + 13032);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 13044);
wr32(c, (RW(16) + 36), RW(2));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 76), RW(0));
wr32(c, (RW(16) + 80), RW(0));
L_002D41FC:;
wr32(c, (RW(17) + 96), RW(16));
SET64(3, (s32)rd32(c, (RW(17) + 188)));
SET64(2, (s32)rd32(c, (RW(17) + 112)));
wr32(c, (RW(16) + 84), RW(2));
wr32(c, (RW(16) + 92), RW(3));
SET64(5, (s32)rd32(c, (RW(17) + 152)));
SET64(3, (s32)rd32(c, (RW(17) + 96)));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
wr32(c, (RW(3) + 88), RW(2));
wr32(c, (RW(3) + 64), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 96)));
SET64(31, 0x2d4230); SET64(4, RD(17) + RD(0)); JP_F_0013A470(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
L_002D4240:;
SET32(2, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(3) != RD(2);  if (t) goto L_002D5654; }
SET64(2, (s32)rd32(c, (RW(4) + 60)));
wr32(c, (RW(17) + 152), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 96), RW(0)); goto L_002D4278; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d4274); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0));
L_002D4278:;
SET32(2, RW(0) + 768);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D4284:;
SET64(31, 0x2d428c);  JP_F_00100320(c);
SET64(7, RD(0) + RD(0));
SET64(16, RD(2) + RD(0));
SET32(3, RW(7) << 1);
SET32(2, RW(7) << 2);
SET32(3, RW(3) + RW(7));
SET64(9, RD(0) + RD(0));
SET32(10, RW(3) << 2);
SET64(6, RD(0) + RD(0));
SET32(8, RW(16) + RW(2));
SET32(4, RW(0) + 2);
SET32(3, RW(0) + 1);
SET32(5, RW(0) + 3);
L_002D42BC:;
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 36)));
SET32(2, RW(2) + RW(10));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) != RD(5);  if (t) goto L_002D42F0; }
wr32(c, (RW(8) + 0), RW(4));
SET64(2, (s32)rd32(c, (RW(17) + 156)));
{ int t = RD(2) != RD(7);  if (t) goto L_002D42E8; }
SET64(9, RD(6) + RD(0));
L_002D42E8:;
SET32(6, RW(6) + 1); goto L_002D42F8;
L_002D42F0:;
wr32(c, (RW(8) + 0), RW(3));
SET32(6, RW(6) + 1);
L_002D42F8:;
SET32(7, RW(7) + 1);
SET64(2, RSD(7) < (s64)5);
SET32(10, RW(10) + 12);
{ int t = RD(2) != RD(0); SET32(8, RW(8) + 4); if (t) { POLL(); goto L_002D42BC; } }
SET32(6, RW(0) + 5);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 76);
SET64(7, RD(16) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(31, 0x2d4328); SET32(10, RW(0) + 1); JP_F_002D28E0(c);
SET64(31, 0x2d4330); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
SET64(2, (s64)(s32)0x41a00000);
SET64(3, (s64)(s32)0x42600000);
wr32(c, (RW(29) + 304), RW(2));
SET64(2, (s64)(s32)0x48120000);
wr32(c, (RW(29) + 308), RW(3));
SET64(2, RD(2) | 0x7c40);
wr32(c, (RW(29) + 312), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 316), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2d4368); SET32(5, RW(29) + 304); rt_call(c, t); }
SET64(31, 0x2d4370); SET64(4, (s32)rd32(c, (RW(17) + 136))); JP_F_0022A450(c);
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 108))); goto L_002D4384; }
SET64(31, 0x2d4380); SET64(4, RD(2) + RD(0)); JP_F_0022C390(c);
SET64(5, (s32)rd32(c, (RW(17) + 108)));
L_002D4384:;
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D4394; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D4394:;
SET64(31, 0x2d439c);  JP_F_0022A3D0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D43AC:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d43bc);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
{ int t = RD(2) == RD(0);  if (t) goto L_002D4440; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d43dc); SET64(18, RD(0) + RD(0)); JP_F_00316950(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D4440; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D43EC:;
SET32(2, RW(2) + RW(16));
SET64(31, 0x2d43f8); SET64(4, (s32)rd32(c, (RW(2) + 12))); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002D4420; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d441c);  rt_call(c, t); }
L_002D4420:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET32(16, RW(16) + 384);
SET64(31, 0x2d4430); SET32(18, RW(18) + 1); JP_F_00316950(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D43EC; } }
L_002D4440:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); goto L_002D4470; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d445c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D446C; }
SET64(2, RD(0) + RD(0)); goto L_002D44DC;
L_002D446C:;
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D4470:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D44D8; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d4484); SET64(18, RD(0) + RD(0)); JP_F_00316950(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D44D8; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D4494:;
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d44ac);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D44BC; }
SET64(2, RD(0) + RD(0)); goto L_002D44DC;
L_002D44BC:;
SET32(16, RW(16) + 384);
SET64(31, 0x2d44c8); SET32(18, RW(18) + 1); JP_F_00316950(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D4494; } }
L_002D44D8:;
SET64(2, RD(0) + (s64)1);
L_002D44DC:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
{ int t = RD(4) == RD(0); SET64(16, (s16)rd16(c, (RW(4) + 184))); if (t) goto L_002D4500; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d4500); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002D4500:;
wr32(c, (RW(17) + 136), RW(0));
SET64(31, 0x2d450c); SET64(4, (s32)rd32(c, (RW(17) + 144))); JP_F_00100430(c);
wr32(c, (RW(17) + 144), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 140)));
SET64(31, 0x2d4520); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
{ int t = RSD(16) >= 0; wr32(c, (RW(17) + 140), RW(0)); if (t) goto L_002D4534; }
SET32(2, RW(0) + 258);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D4534:;
wr32(c, (RW(17) + 156), RW(16));
SET64(2, (s64)(s32)0x3f000000);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(2);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
SET64(31, 0x2d4558); SET32(5, RW(0) + 257); JP_F_00311B90(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D4568:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d4574); SET32(4, RW(2) + 16); JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(2, (s32)rd32(c, (RW(17) + 120)));
SET32(5, RW(0) + 1);
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d459c); SET32(6, RW(0) + -1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d45b4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d45c0); SET32(5, RW(0) + 1); JP_F_00315690(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET32(4, RW(0) + 92);
L_002D45D0:;
SET64(31, 0x2d45d8);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D4620; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d45ec); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12912);
SET32(3, RW(3) + 12920);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 12932);
wr32(c, (RW(16) + 36), RW(2));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 76), RW(0));
L_002D4620:;
wr32(c, (RW(17) + 96), RW(16));
SET64(3, (s32)rd32(c, (RW(17) + 188)));
SET64(2, (s32)rd32(c, (RW(17) + 112)));
wr32(c, (RW(16) + 84), RW(2));
wr32(c, (RW(16) + 88), RW(3));
SET64(5, (s32)rd32(c, (RW(17) + 156)));
SET64(3, (s32)rd32(c, (RW(17) + 96)));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
wr32(c, (RW(3) + 80), RW(2));
wr32(c, (RW(3) + 64), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 96)));
SET64(31, 0x2d4654); SET64(4, RD(17) + RD(0)); JP_F_0013A470(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
L_002D4664:;
SET32(2, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(3) != RD(2);  if (t) goto L_002D5654; }
SET64(2, (s32)rd32(c, (RW(4) + 60)));
wr32(c, (RW(17) + 156), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 96), RW(0)); goto L_002D469C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d4698); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0));
L_002D469C:;
SET32(2, RW(0) + 768);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D46A8:;
SET64(31, 0x2d46b0);  JP_F_00100320(c);
wr32(c, (RW(17) + 148), RW(2));
SET64(31, 0x2d46bc); SET32(4, RW(0) + 176); JP_F_00100320(c);
SET64(7, RD(0) + RD(0));
SET64(18, RD(2) + RD(0));
SET32(3, RW(7) << 1);
SET32(2, RW(7) << 2);
SET32(3, RW(3) + RW(7));
SET64(9, RD(0) + RD(0));
SET32(10, RW(3) << 2);
SET64(16, RD(0) + RD(0));
SET32(8, RW(18) + RW(2));
SET32(5, RW(0) + 2);
SET32(3, RW(0) + 1);
SET32(6, RW(0) + 3);
L_002D46EC:;
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 40)));
SET32(2, RW(2) + RW(10));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) != RD(6);  if (t) goto L_002D4730; }
wr32(c, (RW(8) + 0), RW(5));
SET32(4, RW(16) << 2);
SET64(2, (s32)rd32(c, (RW(17) + 148)));
SET32(2, RW(2) + RW(4));
wr32(c, (RW(2) + 0), RW(7));
SET64(2, (s32)rd32(c, (RW(17) + 160)));
{ int t = RD(2) != RD(7);  if (t) goto L_002D4728; }
SET64(9, RD(16) + RD(0));
L_002D4728:;
SET32(16, RW(16) + 1); goto L_002D4738;
L_002D4730:;
wr32(c, (RW(8) + 0), RW(3));
SET32(16, RW(16) + 1);
L_002D4738:;
SET32(7, RW(7) + 1);
SET64(2, RSD(7) < (s64)44);
SET32(10, RW(10) + 12);
{ int t = RD(2) != RD(0); SET32(8, RW(8) + 4); if (t) { POLL(); goto L_002D46EC; } }
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 81);
SET32(6, RW(0) + 44);
SET64(7, RD(18) + RD(0));
SET32(8, RW(0) + 8);
SET64(31, 0x2d4768); SET32(10, RW(0) + 1); JP_F_002D28E0(c);
SET64(31, 0x2d4770); SET64(4, RD(18) + RD(0)); JP_F_001004B0(c);
SET64(2, (s64)(s32)0x41a00000);
SET64(3, (s64)(s32)0x42600000);
wr32(c, (RW(29) + 288), RW(2));
SET64(2, (s64)(s32)0x48120000);
wr32(c, (RW(29) + 292), RW(3));
SET64(2, RD(2) | 0x7c40);
wr32(c, (RW(29) + 296), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 300), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2d47a8); SET32(5, RW(29) + 288); rt_call(c, t); }
SET64(31, 0x2d47b0); SET64(4, (s32)rd32(c, (RW(17) + 136))); JP_F_0022A450(c);
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 108))); goto L_002D47C4; }
SET64(31, 0x2d47c0); SET64(4, RD(2) + RD(0)); JP_F_0022C390(c);
SET64(5, (s32)rd32(c, (RW(17) + 108)));
L_002D47C4:;
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D47D4; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D47D4:;
SET64(31, 0x2d47dc);  JP_F_0022A3D0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D47EC:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d47fc);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
{ int t = RD(2) == RD(0);  if (t) goto L_002D4880; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d481c); SET64(19, RD(0) + RD(0)); JP_F_00316950(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D4880; }
SET64(18, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D482C:;
SET32(2, RW(2) + RW(18));
SET64(31, 0x2d4838); SET64(4, (s32)rd32(c, (RW(2) + 12))); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002D4860; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d485c);  rt_call(c, t); }
L_002D4860:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET32(18, RW(18) + 384);
SET64(31, 0x2d4870); SET32(19, RW(19) + 1); JP_F_00316950(c);
SET64(2, RSD(19) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D482C; } }
L_002D4880:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); goto L_002D48B0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d489c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D48AC; }
SET64(2, RD(0) + RD(0)); goto L_002D491C;
L_002D48AC:;
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D48B0:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D4918; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d48c4); SET64(19, RD(0) + RD(0)); JP_F_00316950(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D4918; }
SET64(18, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D48D4:;
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d48ec);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D48FC; }
SET64(2, RD(0) + RD(0)); goto L_002D491C;
L_002D48FC:;
SET32(18, RW(18) + 384);
SET64(31, 0x2d4908); SET32(19, RW(19) + 1); JP_F_00316950(c);
SET64(2, RSD(19) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D48D4; } }
L_002D4918:;
SET64(2, RD(0) + (s64)1);
L_002D491C:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(18, (s16)rd16(c, (RW(4) + 184)));
{ int t = RSD(18) < 0;  if (t) goto L_002D4944; }
SET64(2, (s32)rd32(c, (RW(17) + 148)));
SET32(3, RW(18) << 2);
SET32(2, RW(2) + RW(3));
SET64(16, (s32)rd32(c, (RW(2) + 0)));
L_002D4944:;
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 136), RW(0)); goto L_002D4960; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d495c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 136), RW(0));
L_002D4960:;
SET64(31, 0x2d4968); SET64(4, (s32)rd32(c, (RW(17) + 144))); JP_F_00100430(c);
wr32(c, (RW(17) + 144), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 140)));
SET64(31, 0x2d497c); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(17) + 140), RW(0));
SET64(31, 0x2d4988); SET64(4, (s32)rd32(c, (RW(17) + 148))); JP_F_00100430(c);
{ int t = RSD(18) >= 0; wr32(c, (RW(17) + 148), RW(0)); if (t) goto L_002D499C; }
SET32(2, RW(0) + 258);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D499C:;
wr32(c, (RW(17) + 160), RW(16));
SET64(2, (s64)(s32)0x3f000000);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(2);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
SET64(31, 0x2d49c0); SET32(5, RW(0) + 257); JP_F_00311B90(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D49D0:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d49dc); SET32(4, RW(2) + 16); JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d49fc); SET32(6, RW(0) + -1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d4a14); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d4a20); SET32(5, RW(0) + 1); JP_F_00315690(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET32(4, RW(0) + 100);
L_002D4A30:;
SET64(31, 0x2d4a38);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D4A88; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d4a4c); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12720);
SET32(3, RW(3) + 12728);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 12740);
wr32(c, (RW(16) + 36), RW(2));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 76), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 80), RW(0));
L_002D4A88:;
wr32(c, (RW(17) + 96), RW(16));
SET64(5, (s32)rd32(c, (RW(17) + 188)));
SET64(3, (s32)rd32(c, (RW(17) + 116)));
SET64(2, (s32)rd32(c, (RW(17) + 112)));
wr32(c, (RW(16) + 88), RW(2));
wr32(c, (RW(16) + 84), RW(3));
wr32(c, (RW(16) + 96), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 160)));
SET64(3, (s32)rd32(c, (RW(17) + 96)));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
wr32(c, (RW(3) + 92), RW(2));
wr32(c, (RW(3) + 64), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 96)));
SET64(31, 0x2d4ac4); SET64(4, RD(17) + RD(0)); JP_F_0013A470(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
L_002D4AD4:;
SET32(2, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(3) != RD(2);  if (t) goto L_002D5654; }
SET64(2, (s32)rd32(c, (RW(4) + 60)));
wr32(c, (RW(17) + 160), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 96), RW(0)); goto L_002D4B0C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d4b08); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0));
L_002D4B0C:;
SET32(2, RW(0) + 768);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D4B18:;
SET64(31, 0x2d4b20);  JP_F_00100320(c);
SET64(6, RD(0) + RD(0));
SET64(16, RD(2) + RD(0));
SET32(3, RW(6) << 1);
SET32(2, RW(6) << 2);
SET32(3, RW(3) + RW(6));
SET32(7, RW(16) + RW(2));
SET32(8, RW(3) << 2);
SET32(4, RW(0) + 2);
SET32(3, RW(0) + 1);
SET32(5, RW(0) + 3);
L_002D4B48:;
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 44)));
SET32(2, RW(2) + RW(8));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) != RD(5);  if (t) goto L_002D4B68; }
wr32(c, (RW(7) + 0), RW(4)); goto L_002D4B70;
L_002D4B68:;
wr32(c, (RW(7) + 0), RW(3));
L_002D4B70:;
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < (s64)8);
SET32(8, RW(8) + 12);
{ int t = RD(2) != RD(0); SET32(7, RW(7) + 4); if (t) { POLL(); goto L_002D4B48; } }
SET64(9, (s32)rd32(c, (RW(17) + 164)));
SET32(6, RW(0) + 8);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 125);
SET64(7, RD(16) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(31, 0x2d4ba4); SET32(10, RW(0) + 1); JP_F_002D28E0(c);
SET64(31, 0x2d4bac); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
SET64(2, (s64)(s32)0x41a00000);
SET64(3, (s64)(s32)0x42600000);
wr32(c, (RW(29) + 272), RW(2));
SET64(2, (s64)(s32)0x48120000);
wr32(c, (RW(29) + 276), RW(3));
SET64(2, RD(2) | 0x7c40);
wr32(c, (RW(29) + 280), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 284), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2d4be4); SET32(5, RW(29) + 272); rt_call(c, t); }
SET64(31, 0x2d4bec); SET64(4, (s32)rd32(c, (RW(17) + 136))); JP_F_0022A450(c);
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 108))); goto L_002D4C00; }
SET64(31, 0x2d4bfc); SET64(4, RD(2) + RD(0)); JP_F_0022C390(c);
SET64(5, (s32)rd32(c, (RW(17) + 108)));
L_002D4C00:;
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D4C10; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D4C10:;
SET64(31, 0x2d4c18);  JP_F_0022A3D0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D4C28:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d4c38);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
{ int t = RD(2) == RD(0);  if (t) goto L_002D4CB8; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d4c58); SET64(18, RD(0) + RD(0)); JP_F_00316950(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D4CB8; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D4C68:;
SET32(2, RW(2) + RW(16));
SET64(31, 0x2d4c74); SET64(4, (s32)rd32(c, (RW(2) + 12))); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002D4C98; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d4c98);  rt_call(c, t); }
L_002D4C98:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET32(16, RW(16) + 384);
SET64(31, 0x2d4ca8); SET32(18, RW(18) + 1); JP_F_00316950(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D4C68; } }
L_002D4CB8:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); goto L_002D4CE8; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d4cd4);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D4CE4; }
SET64(2, RD(0) + RD(0)); goto L_002D4D54;
L_002D4CE4:;
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D4CE8:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D4D50; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d4cfc); SET64(18, RD(0) + RD(0)); JP_F_00316950(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D4D50; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D4D0C:;
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d4d24);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D4D34; }
SET64(2, RD(0) + RD(0)); goto L_002D4D54;
L_002D4D34:;
SET32(16, RW(16) + 384);
SET64(31, 0x2d4d40); SET32(18, RW(18) + 1); JP_F_00316950(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D4D0C; } }
L_002D4D50:;
SET64(2, RD(0) + (s64)1);
L_002D4D54:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
{ int t = RD(4) == RD(0); SET64(16, (s16)rd16(c, (RW(4) + 184))); if (t) goto L_002D4D78; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d4d78); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002D4D78:;
wr32(c, (RW(17) + 136), RW(0));
SET64(31, 0x2d4d84); SET64(4, (s32)rd32(c, (RW(17) + 144))); JP_F_00100430(c);
wr32(c, (RW(17) + 144), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 140)));
SET64(31, 0x2d4d98); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
{ int t = RSD(16) >= 0; wr32(c, (RW(17) + 140), RW(0)); if (t) goto L_002D4DAC; }
SET32(2, RW(0) + 258);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D4DAC:;
wr32(c, (RW(17) + 164), RW(16));
SET64(2, (s64)(s32)0x3f000000);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(2);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
SET64(31, 0x2d4dd0); SET32(5, RW(0) + 257); JP_F_00311B90(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D4DE0:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d4dec); SET32(4, RW(2) + 16); JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(2, (s32)rd32(c, (RW(17) + 120)));
SET32(5, RW(0) + 1);
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d4e14); SET32(6, RW(0) + -1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d4e2c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d4e38); SET32(5, RW(0) + 1); JP_F_00315690(c);
SET64(31, 0x2d4e40);  JP_F_00139590(c);
SET64(31, 0x2d4e48);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2d4e5c);  JP_F_001B8110(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET32(4, RW(0) + 72);
L_002D4E6C:;
SET64(31, 0x2d4e74);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D4EAC; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d4e88); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12640);
SET32(3, RW(3) + 12648);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 12660);
wr32(c, (RW(16) + 36), RW(2));
L_002D4EAC:;
wr32(c, (RW(17) + 96), RW(16));
SET64(3, (s32)rd32(c, (RW(17) + 164)));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
wr32(c, (RW(16) + 68), RW(2));
wr32(c, (RW(16) + 60), RW(3));
SET64(5, (s32)rd32(c, (RW(17) + 96)));
SET64(31, 0x2d4ecc); SET64(4, RD(17) + RD(0)); JP_F_0013A470(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
L_002D4EDC:;
SET32(2, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(3) != RD(2);  if (t) goto L_002D5654; }
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 96), RW(0)); goto L_002D4F08; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d4f04); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0));
L_002D4F08:;
SET32(2, RW(0) + 768);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D4F14:;
SET64(31, 0x2d4f1c);  JP_F_00100320(c);
SET64(6, RD(0) + RD(0));
SET64(16, RD(2) + RD(0));
SET32(3, RW(6) << 1);
SET32(2, RW(6) << 2);
SET32(3, RW(3) + RW(6));
SET32(7, RW(16) + RW(2));
SET32(8, RW(3) << 2);
SET32(4, RW(0) + 2);
SET32(3, RW(0) + 1);
SET32(5, RW(0) + 3);
L_002D4F44:;
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 48)));
SET32(2, RW(2) + RW(8));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) != RD(5);  if (t) goto L_002D4F68; }
wr32(c, (RW(7) + 0), RW(4)); goto L_002D4F70;
L_002D4F68:;
wr32(c, (RW(7) + 0), RW(3));
L_002D4F70:;
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < (s64)39);
SET32(8, RW(8) + 12);
{ int t = RD(2) != RD(0); SET32(7, RW(7) + 4); if (t) { POLL(); goto L_002D4F44; } }
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 133);
SET32(6, RW(0) + 39);
SET64(7, RD(16) + RD(0));
SET32(8, RW(0) + 8);
SET64(9, RD(0) + RD(0));
SET64(31, 0x2d4fa4); SET32(10, RW(0) + 1); JP_F_002D28E0(c);
SET64(31, 0x2d4fac); SET64(4, RD(16) + RD(0)); JP_F_00100430(c);
SET64(6, (s32)rd32(c, (RW(17) + 136)));
SET32(7, RW(0) + 1);
SET64(3, (s64)(s32)0x48120000);
SET64(5, (s64)(s32)0x41a00000);
SET64(4, (s64)(s32)0x42600000);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(6) + 181), (u8)RW(7));
SET64(3, RD(3) | 0x7c40);
wr32(c, (RW(29) + 256), RW(5));
wr32(c, (RW(29) + 260), RW(4));
wr32(c, (RW(29) + 264), RW(3));
wr32(c, (RW(29) + 268), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2d4ff0); SET32(5, RW(29) + 256); rt_call(c, t); }
SET64(31, 0x2d4ff8); SET64(4, (s32)rd32(c, (RW(17) + 136))); JP_F_0022A450(c);
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 108))); goto L_002D500C; }
SET64(31, 0x2d5008); SET64(4, RD(2) + RD(0)); JP_F_0022C390(c);
SET64(5, (s32)rd32(c, (RW(17) + 108)));
L_002D500C:;
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D501C; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D501C:;
SET64(31, 0x2d5024);  JP_F_0022A3D0(c);
SET64(31, 0x2d502c);  JP_F_00139590(c);
SET64(31, 0x2d5034);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(31, 0x2d5048);  JP_F_001B8110(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D5058:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d5068);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D5120; }
SET64(31, 0x2d5078);  JP_F_00139590(c);
SET64(31, 0x2d5080);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(31, 0x2d5094);  JP_F_001B8110(c);
SET64(2, (s32)rd32(c, (RW(17) + 140)));
{ int t = RD(2) == RD(0);  if (t) goto L_002D5110; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d50ac); SET64(18, RD(0) + RD(0)); JP_F_00316950(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D5110; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D50BC:;
SET32(2, RW(2) + RW(16));
SET64(31, 0x2d50c8); SET64(4, (s32)rd32(c, (RW(2) + 12))); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002D50F0; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d50ec);  rt_call(c, t); }
L_002D50F0:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET32(16, RW(16) + 384);
SET64(31, 0x2d5100); SET32(18, RW(18) + 1); JP_F_00316950(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D50BC; } }
L_002D5110:;
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D5120:;
SET64(31, 0x2d5128);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d5134); SET32(5, RW(0) + -1); JP_F_0013E200(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x2000);
{ int t = RD(2) == RD(0);  if (t) goto L_002D51D4; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET32(2, RW(0) + 3);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
SET64(16, rd16(c, (RW(4) + 172)));
SET64(3, (s32)rd32(c, (RW(3) + 48)));
SET32(4, RW(16) << 1);
SET32(4, RW(4) + RW(16));
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(3) != RD(2);  if (t) goto L_002D5654; }
SET64(31, 0x2d517c);  JP_F_00139590(c);
SET64(31, 0x2d5184);  JP_F_00139590(c);
SET64(3, (s64)(s32)0x420000);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET32(5, RW(16) << 2);
SET32(3, RW(3) + -30784);
SET32(3, RW(3) + RW(5));
SET64(5, (s32)rd32(c, (RW(3) + 0)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(31, 0x2d51ac); SET64(6, RD(0) + RD(0)); JP_F_001B8120(c);
SET64(3, (s32)rd32(c, (RW(17) + 136)));
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + 2736);
SET64(3, rd16(c, (RW(3) + 172)));
SET32(3, RW(3) + 189);
SET32(3, RW(2) + RW(3));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfb);
wr8(c, (RW(3) + 0), (u8)RW(2)); goto L_002D5654;
L_002D51D4:;
SET64(31, 0x2d51dc);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d51e8); SET32(5, RW(0) + -1); JP_F_0013E200(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x1000);
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(31, 0x2d5200);  JP_F_00139590(c);
SET64(31, 0x2d5208);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(31, 0x2d521c);  JP_F_001B8110(c);
 goto L_002D5654;
L_002D5224:;
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); goto L_002D5250; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d523c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D524C; }
SET64(2, RD(0) + RD(0)); goto L_002D52BC;
L_002D524C:;
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D5250:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D52B8; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d5264); SET64(18, RD(0) + RD(0)); JP_F_00316950(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D52B8; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D5274:;
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d528c);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D529C; }
SET64(2, RD(0) + RD(0)); goto L_002D52BC;
L_002D529C:;
SET32(16, RW(16) + 384);
SET64(31, 0x2d52a8); SET32(18, RW(18) + 1); JP_F_00316950(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D5274; } }
L_002D52B8:;
SET64(2, RD(0) + (s64)1);
L_002D52BC:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(31, 0x2d52cc);  JP_F_00139590(c);
SET64(31, 0x2d52d4);  JP_F_00139590(c);
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(2, rd16(c, (RW(2) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_002D5354; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 136), RW(0)); goto L_002D5304; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d5300); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 136), RW(0));
L_002D5304:;
SET64(31, 0x2d530c); SET64(4, (s32)rd32(c, (RW(17) + 144))); JP_F_00100430(c);
wr32(c, (RW(17) + 144), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 140)));
SET64(31, 0x2d5320); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
SET64(31, 0x2d5328); wr32(c, (RW(17) + 140), RW(0)); JP_F_00139590(c);
SET64(31, 0x2d5330);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET32(5, RW(0) + 118);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2d5348); SET64(6, RD(0) + RD(0)); JP_F_001B8120(c);
SET32(2, RW(0) + 258);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D5354:;
SET64(31, 0x2d535c);  JP_F_00139590(c);
SET64(31, 0x2d5364);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(31, 0x2d5378);  JP_F_001B8110(c);
 goto L_002D5654;
L_002D5380:;
SET32(3, RW(0) + 1);
SET64(5, RD(0) + RD(0));
wr8(c, (RW(2) + 228), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d53a0); SET32(6, RW(0) + -1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d53b8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d53c4); SET64(5, RD(0) + RD(0)); JP_F_00315690(c);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
c->f[13].u = RW(2);
SET64(31, 0x2d53e4); SET32(5, RW(0) + 256); JP_F_00311B90(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D53F4:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d5400); SET32(4, RW(2) + 16); JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET32(4, RW(17) + 64);
L_002D5418:;
SET64(31, 0x2d5420);  JP_F_003241C0(c);
SET32(3, RW(0) + 4);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 3072); goto L_002D54A8; }
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 2816); goto L_002D5478; }
SET32(3, RW(0) + 2);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 2560); goto L_002D5470; }
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 2304); goto L_002D5468; }
if (RD(2) == RD(0)) { SET32(2, RW(0) + 2048); goto L_002D5460; }
 goto L_002D5654;
L_002D5460:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D5468:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D5470:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D5478:;
SET64(31, 0x2d5480); wr16(c, (RW(17) + 0), (u16)RW(2)); JP_F_00139590(c);
SET64(31, 0x2d5488);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET32(5, RW(0) + 118);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2d54a0); SET64(6, RD(0) + RD(0)); JP_F_001B8120(c);
 goto L_002D5654;
L_002D54A8:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D5654;
L_002D54B0:;
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
SET64(31, 0x2d54c4); SET32(5, RW(0) + 257); JP_F_00311B90(c);
SET64(31, 0x2d54cc);  JP_F_00139590(c);
SET64(31, 0x2d54d4);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(31, 0x2d54e8);  JP_F_001B8110(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D54F8:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d5504); SET32(4, RW(2) + 16); JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x2d5520);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 132)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d5534);  rt_call(c, t); }
SET64(31, 0x2d553c); SET64(4, (s32)rd32(c, (RW(17) + 128))); JP_F_00315CF0(c);
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 57), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 184)));
wr8(c, (RW(2) + 72), (u8)RW(3));
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 124)));
L_002D5560:;
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2d5570);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d5590);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(31, 0x2d55a0); SET64(4, (s32)rd32(c, (RW(17) + 128))); JP_F_00315E10(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(3, (s32)rd32(c, (RW(17) + 184)));
SET32(2, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 48)));
{ int t = RD(3) != RD(2);  if (t) goto L_002D5654; }
SET64(31, 0x2d55c4); SET32(4, RW(17) + 64); JP_F_003243E0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D55D4:;
SET64(31, 0x2d55dc); SET64(4, (s32)rd32(c, (RW(2) + 28))); JP_F_00312070(c);
SET64(2, (s32)rd32(c, (RW(17) + 112)));
c->f[12].u = RW(0);
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 108)));
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(31, 0x2d55f8); SET64(4, (s32)rd32(c, (RW(17) + 188))); JP_F_00318500(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
L_002D5604:;
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(31, 0x2d5610); SET64(4, (s32)rd32(c, (RW(2) + 28))); JP_F_00312020(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D5654; }
SET64(31, 0x2d5620);  JP_F_00139590(c);
SET64(31, 0x2d5628);  JP_F_00139590(c);
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(2, rd16(c, (RW(2) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_002D5654; }
SET64(31, 0x2d5640);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x2d564c); SET64(5, RD(0) + RD(0)); JP_F_001630B0(c);
SET64(31, 0x2d5654); SET64(4, RD(17) + RD(0)); JP_F_00139AB0(c);
L_002D5654:;
SET64(4, (s32)rd32(c, (RW(17) + 128)));
L_002D5658:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 124))); goto L_002D566C; }
SET64(31, 0x2d5668); c->f[12].u = c->f[20].u; JP_F_00315DD0(c);
SET64(4, (s32)rd32(c, (RW(17) + 124)));
L_002D566C:;
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D5688; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2d5684); c->f[12].u = c->f[20].u; rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D5688:;
if (RD(2) == RD(0)) { SET64(5, rd16(c, (RW(17) + 0))); goto L_002D56A8; }
SET64(4, (s32)rd32(c, (RW(2) + 28)));
{ int t = RD(4) == RD(0);  if (t) goto L_002D56A4; }
SET64(31, 0x2d56a4); c->f[12].u = c->f[20].u; JP_F_003120B0(c);
L_002D56A4:;
SET64(5, rd16(c, (RW(17) + 0)));
L_002D56A8:;
SET64(31, 0x2d56b0); SET64(4, RD(17) + RD(0)); JP_F_002D26E0(c);
SET64(31, rd64(c, (RW(29) + 80)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 400); return;
}
void JP_F_002D3010(Ctx *c) { JP_B_002D3010(c, 0x2d3010); }
void JP_F_002D306C(Ctx *c) { JP_B_002D3010(c, 0x2d306c); }

void JP_F_002D56D0(Ctx *c) { /* func_002D56D0 */
ENTER(0x2d56d0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2d5700);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_002D598C; }
c->f[1].u = rd32(c, (RW(16) + 196));
c->f[0].u = rd32(c, (RW(16) + 272));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 32), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 200));
c->f[0].u = rd32(c, (RW(16) + 276));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 36), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 236));
SET64(3, (s32)rd32(c, (RW(16) + 268)));
c->f[0].u = rd32(c, (RW(16) + 276));
c->f[3].u = rd32(c, (RW(16) + 232));
c->f[2].u = rd32(c, (RW(16) + 272));
SET64(2, RD(3) & 0x1);
c->f[5].f = fpu(F(1) - F(0));
c->f[0].u = rd32(c, (RW(16) + 208));
c->f[4].u = rd32(c, (RW(16) + 212));
{ int t = RD(2) == RD(0); c->f[2].f = fpu(F(3) - F(2)); if (t) goto L_002D575C; }
c->f[3].f = fpu(F(2) + F(0)); goto L_002D5764;
L_002D575C:;
c->f[3].u = c->f[2].u;
c->f[2].f = fpu(F(2) + F(0));
L_002D5764:;
c->f[0].u = rd32(c, (RW(16) + 244));
SET64(2, RD(3) & 0x2);
c->f[3].f = fpu(F(3) * F(0));
{ int t = RD(2) == RD(0); c->f[2].f = fpu(F(2) * F(0)); if (t) goto L_002D5780; }
c->f[1].f = fpu(F(5) + F(4)); goto L_002D5788;
L_002D5780:;
c->f[1].u = c->f[5].u;
c->f[5].f = fpu(F(5) + F(4));
L_002D5788:;
c->f[0].u = rd32(c, (RW(16) + 248));
SET64(2, (s32)rd32(c, (RW(16) + 160)));
SET64(4, RD(16) + RD(0));
c->f[1].f = fpu(F(1) * F(0));
wr32(c, (RW(2) + 0), c->f[3].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
c->f[0].f = fpu(F(5) * F(0));
wr32(c, (RW(2) + 4), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 8), c->f[3].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 12), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 16), c->f[2].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 20), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 24), c->f[2].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 28), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 204));
c->f[0].u = rd32(c, (RW(16) + 240));
SET64(31, 0x2d57e8); c->f[12].f = fpu(F(1) + F(0)); JP_F_0014E9B0(c);
SET64(2, (s32)rd32(c, (RW(16) + 268)));
SET64(2, RD(2) & 0x100);
if (RD(2) == RD(0)) { c->f[1].u = rd32(c, (RW(16) + 216)); goto L_002D587C; }
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 124), RW(2));
SET64(18, RD(0) + RD(0));
wr32(c, (RW(29) + 116), RW(0));
SET64(17, RD(0) + RD(0));
wr32(c, (RW(29) + 120), RW(0));
L_002D5814:;
c->f[0].u = rd32(c, (RW(16) + 228));
SET32(4, RW(29) + 112);
c->f[2].u = rd32(c, (RW(16) + 224));
c->f[1].u = rd32(c, (RW(16) + 220));
wr32(c, (RW(29) + 108), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 216));
wr32(c, (RW(29) + 104), c->f[2].u);
wr32(c, (RW(29) + 100), c->f[1].u);
wr32(c, (RW(29) + 96), c->f[0].u);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(16) + 280)));
SET64(31, 0x2d584c); SET32(5, RW(2) + RW(17)); JP_F_002B00A0(c);
SET64(3, (s32)rd32(c, (RW(16) + 164)));
SET64(2, RD(18) & 0xffff);
rd128(c, (RW(29) + 112) & ~15u, &c->r[5]);
SET32(4, RW(2) << 4);
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 16);
SET32(3, RW(3) + RW(4));
SET64(2, RSD(18) < (s64)4);
{ int t = RD(2) != RD(0); wr128(c, (RW(3) + 0) & ~15u, &c->r[5]); if (t) { POLL(); goto L_002D5814; } }
 goto L_002D5980;
L_002D587C:;
SET64(3, rd16(c, (RW(16) + 168)));
c->f[0].u = rd32(c, (RW(16) + 252));
SET64(17, RD(0) + RD(0));
{ int t = RSD(3) <= 0; c->f[20].f = fpu(F(1) * F(0)); if (t) goto L_002D58C0; }
SET64(2, (s32)rd32(c, (RW(16) + 164)));
L_002D5894:;
SET64(3, RD(17) & 0xffff);
SET32(3, RW(3) << 4);
c->f[12].u = c->f[20].u;
SET64(31, 0x2d58a8); SET32(4, RW(2) + RW(3)); JP_F_00163900(c);
SET64(3, rd16(c, (RW(16) + 168)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(3));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 164))); { POLL(); goto L_002D5894; } }
L_002D58C0:;
SET64(17, RD(0) + RD(0));
c->f[1].u = rd32(c, (RW(16) + 220));
c->f[0].u = rd32(c, (RW(16) + 256));
{ int t = RSD(3) <= 0; c->f[20].f = fpu(F(1) * F(0)); if (t) goto L_002D5900; }
SET64(2, (s32)rd32(c, (RW(16) + 164)));
L_002D58D8:;
SET64(3, RD(17) & 0xffff);
SET32(3, RW(3) << 4);
c->f[12].u = c->f[20].u;
SET64(31, 0x2d58ec); SET32(4, RW(2) + RW(3)); JP_F_001638F0(c);
SET64(3, rd16(c, (RW(16) + 168)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(3));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 164))); { POLL(); goto L_002D58D8; } }
L_002D5900:;
SET64(17, RD(0) + RD(0));
c->f[1].u = rd32(c, (RW(16) + 224));
c->f[0].u = rd32(c, (RW(16) + 260));
{ int t = RSD(3) <= 0; c->f[20].f = fpu(F(1) * F(0)); if (t) goto L_002D5940; }
SET64(2, (s32)rd32(c, (RW(16) + 164)));
L_002D5918:;
SET64(3, RD(17) & 0xffff);
SET32(3, RW(3) << 4);
c->f[12].u = c->f[20].u;
SET64(31, 0x2d592c); SET32(4, RW(2) + RW(3)); JP_F_001638E0(c);
SET64(3, rd16(c, (RW(16) + 168)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(3));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 164))); { POLL(); goto L_002D5918; } }
L_002D5940:;
SET64(17, RD(0) + RD(0));
c->f[1].u = rd32(c, (RW(16) + 228));
c->f[0].u = rd32(c, (RW(16) + 264));
{ int t = RSD(3) <= 0; c->f[20].f = fpu(F(1) * F(0)); if (t) goto L_002D5980; }
SET64(2, (s32)rd32(c, (RW(16) + 164)));
L_002D5958:;
SET64(3, RD(17) & 0xffff);
SET32(3, RW(3) << 4);
c->f[12].u = c->f[20].u;
SET64(31, 0x2d596c); SET32(4, RW(2) + RW(3)); JP_F_001638D0(c);
SET64(2, rd16(c, (RW(16) + 168)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 164))); { POLL(); goto L_002D5958; } }
L_002D5980:;
SET64(31, 0x2d5988); SET64(4, RD(16) + RD(0)); JP_F_0014C080(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_002D598C:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002D59B0(Ctx *c) { /* func_002D59B0 */
ENTER(0x2d59b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 104)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 104), RW(0)); goto L_002D59E4; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d59e0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 104), RW(0));
L_002D59E4:;
SET64(4, (s32)rd32(c, (RW(17) + 124)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 124), RW(0)); goto L_002D5A04; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x2d5a00); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 124), RW(0));
L_002D5A04:;
SET64(4, (s32)rd32(c, (RW(17) + 132)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 132), RW(0)); goto L_002D5A24; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d5a20); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 132), RW(0));
L_002D5A24:;
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d5a30); SET32(5, RW(0) + 1); JP_F_00315F00(c);
wr32(c, (RW(17) + 128), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 120)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 120), RW(0)); goto L_002D5A54; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d5a50); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 120), RW(0));
L_002D5A54:;
SET64(4, (s32)rd32(c, (RW(17) + 116)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 116), RW(0)); goto L_002D5A74; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d5a70); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 116), RW(0));
L_002D5A74:;
SET64(4, (s32)rd32(c, (RW(17) + 112)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 112), RW(0)); goto L_002D5A94; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d5a90); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 112), RW(0));
L_002D5A94:;
SET64(4, (s32)rd32(c, (RW(17) + 108)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 108), RW(0)); goto L_002D5AB4; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d5ab0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 108), RW(0));
L_002D5AB4:;
SET64(4, (s32)rd32(c, (RW(17) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 60), RW(0)); goto L_002D5AD4; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d5ad0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 60), RW(0));
L_002D5AD4:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 136), RW(0)); goto L_002D5AF4; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d5af0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 136), RW(0));
L_002D5AF4:;
SET64(4, (s32)rd32(c, (RW(17) + 184)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 184), RW(0)); goto L_002D5B14; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d5b10); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 184), RW(0));
L_002D5B14:;
SET64(16, (s32)rd32(c, (RW(17) + 188)));
if (RD(16) == RD(0)) { wr32(c, (RW(17) + 188), RW(0)); goto L_002D5B34; }
SET64(31, 0x2d5b28); SET64(4, RD(16) + RD(0)); JP_F_00318730(c);
SET64(31, 0x2d5b30); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
wr32(c, (RW(17) + 188), RW(0));
L_002D5B34:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D5B50(Ctx *c) { /* func_002D5B50 */
ENTER(0x2d5b50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002D5BB0; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 28624);
SET32(3, RW(3) + 28632);
wr32(c, (RW(17) + 56), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 28644);
SET64(31, 0x2d5b98); wr32(c, (RW(17) + 36), RW(2)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002D5BB4; }
SET64(31, 0x2d5bb0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002D5BB0:;
SET64(2, RD(17) + RD(0));
L_002D5BB4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D5BD0(Ctx *c) { /* func_002D5BD0 */
ENTER(0x2d5bd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002D5C60; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12608);
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2d5c08);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002D5C4C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 20496);
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x2d5c28); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_002D5C48; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 20528);
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x2d5c48); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_002D5C48:;
SET64(2, RD(16) << 48);
L_002D5C4C:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002D5C64; }
SET64(31, 0x2d5c60); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002D5C60:;
SET64(2, RD(17) + RD(0));
L_002D5C64:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D5C80(Ctx *c) { /* func_002D5C80 */
ENTER(0x2d5c80);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2d5c98); SET64(16, RD(4) + RD(0)); JP_F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 12528);
SET32(2, RW(2) + 12536);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + 12548);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 60), RW(0));
wr32(c, (RW(16) + 104), RW(0));
wr32(c, (RW(16) + 124), RW(0));
wr32(c, (RW(16) + 128), RW(0));
wr32(c, (RW(16) + 120), RW(0));
wr32(c, (RW(16) + 116), RW(0));
wr32(c, (RW(16) + 112), RW(0));
wr32(c, (RW(16) + 108), RW(0));
wr32(c, (RW(16) + 132), RW(0));
wr32(c, (RW(16) + 136), RW(0));
wr32(c, (RW(16) + 144), RW(0));
wr32(c, (RW(16) + 184), RW(0));
wr32(c, (RW(16) + 188), RW(0));
wr32(c, (RW(16) + 168), RW(0));
wr32(c, (RW(16) + 164), RW(0));
wr32(c, (RW(16) + 160), RW(0));
wr32(c, (RW(16) + 156), RW(0));
wr32(c, (RW(16) + 152), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002D5D20(Ctx *c) { /* func_002D5D20 */
ENTER(0x2d5d20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2d5d34); SET64(16, RD(4) + RD(0)); JP_F_00325AC0(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 32))); goto L_002D5D44; }
SET32(2, RW(0) + 1); goto L_002D5F40;
L_002D5D44:;
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 36))); goto L_002D5DA8; }
SET64(31, 0x2d5d54); SET32(4, RW(0) + 840); JP_F_00100530(c);
SET64(7, RD(0) + RD(0));
SET64(6, RD(2) + RD(0));
SET32(4, RW(0) + 1);
SET32(5, RW(0) + 3);
L_002D5D64:;
SET64(3, (s32)rd32(c, (RW(16) + 52)));
SET32(3, RW(3) + RW(7));
SET64(3, rd8(c, (RW(3) + 62)));
SET64(3, RD(3) & 0x1);
{ int t = RD(3) == RD(0);  if (t) goto L_002D5D88; }
wr32(c, (RW(6) + 0), RW(5)); goto L_002D5D90;
L_002D5D88:;
wr32(c, (RW(6) + 0), RW(4));
L_002D5D90:;
SET32(7, RW(7) + 1);
SET64(3, RSD(7) < (s64)70);
{ int t = RD(3) != RD(0); SET32(6, RW(6) + 12); if (t) { POLL(); goto L_002D5D64; } }
wr32(c, (RW(16) + 32), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 36)));
L_002D5DA8:;
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 40))); goto L_002D5E08; }
SET64(31, 0x2d5db8); SET32(4, RW(0) + 60); JP_F_00100530(c);
SET64(6, RD(0) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(0) + 1);
SET32(5, RW(0) + 3);
L_002D5DC8:;
SET64(3, (s32)rd32(c, (RW(16) + 52)));
SET32(3, RW(3) + RW(6));
SET64(3, rd8(c, (RW(3) + 132)));
SET64(3, RD(3) & 0x1);
{ int t = RD(3) == RD(0);  if (t) goto L_002D5DE8; }
wr32(c, (RW(7) + 0), RW(5)); goto L_002D5DF0;
L_002D5DE8:;
wr32(c, (RW(7) + 0), RW(4));
L_002D5DF0:;
SET32(6, RW(6) + 1);
SET64(3, RSD(6) < (s64)5);
{ int t = RD(3) != RD(0); SET32(7, RW(7) + 12); if (t) { POLL(); goto L_002D5DC8; } }
wr32(c, (RW(16) + 36), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 40)));
L_002D5E08:;
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 44))); goto L_002D5E7C; }
SET64(31, 0x2d5e18); SET32(4, RW(0) + 528); JP_F_00100530(c);
SET64(8, (s64)(s32)0x3f0000);
SET64(6, RD(0) + RD(0));
SET32(8, RW(8) + -8576);
SET64(7, RD(2) + RD(0));
SET32(4, RW(0) + 1);
SET32(5, RW(0) + 3);
L_002D5E30:;
SET64(3, (s32)rd32(c, (RW(8) + 8)));
wr32(c, (RW(7) + 8), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 52)));
SET32(3, RW(3) + RW(6));
SET64(3, rd8(c, (RW(3) + 137)));
SET64(3, RD(3) & 0x1);
{ int t = RD(3) == RD(0);  if (t) goto L_002D5E58; }
wr32(c, (RW(7) + 0), RW(5)); goto L_002D5E60;
L_002D5E58:;
wr32(c, (RW(7) + 0), RW(4));
L_002D5E60:;
SET32(6, RW(6) + 1);
SET64(3, RSD(6) < (s64)44);
SET32(8, RW(8) + 12);
{ int t = RD(3) != RD(0); SET32(7, RW(7) + 12); if (t) { POLL(); goto L_002D5E30; } }
wr32(c, (RW(16) + 40), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 44)));
L_002D5E7C:;
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 48))); goto L_002D5EE0; }
SET64(31, 0x2d5e8c); SET32(4, RW(0) + 96); JP_F_00100530(c);
SET64(6, RD(0) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(0) + 1);
SET32(5, RW(0) + 3);
L_002D5E9C:;
SET64(3, (s32)rd32(c, (RW(16) + 52)));
SET32(3, RW(3) + RW(6));
SET64(3, rd8(c, (RW(3) + 181)));
SET64(3, RD(3) & 0x1);
{ int t = RD(3) == RD(0);  if (t) goto L_002D5EC0; }
wr32(c, (RW(7) + 0), RW(5)); goto L_002D5EC8;
L_002D5EC0:;
wr32(c, (RW(7) + 0), RW(4));
L_002D5EC8:;
SET32(6, RW(6) + 1);
SET64(3, RSD(6) < (s64)8);
{ int t = RD(3) != RD(0); SET32(7, RW(7) + 12); if (t) { POLL(); goto L_002D5E9C; } }
wr32(c, (RW(16) + 44), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 48)));
L_002D5EE0:;
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002D5F40; }
SET64(31, 0x2d5ef0); SET32(4, RW(0) + 468); JP_F_00100530(c);
SET64(6, RD(0) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(0) + 1);
SET32(5, RW(0) + 3);
L_002D5F00:;
SET64(3, (s32)rd32(c, (RW(16) + 52)));
SET32(3, RW(3) + RW(6));
SET64(3, rd8(c, (RW(3) + 189)));
SET64(3, RD(3) & 0x1);
{ int t = RD(3) == RD(0);  if (t) goto L_002D5F20; }
wr32(c, (RW(7) + 0), RW(5)); goto L_002D5F28;
L_002D5F20:;
wr32(c, (RW(7) + 0), RW(4));
L_002D5F28:;
SET32(6, RW(6) + 1);
SET64(3, RSD(6) < (s64)39);
{ int t = RD(3) != RD(0); SET32(7, RW(7) + 12); if (t) { POLL(); goto L_002D5F00; } }
wr32(c, (RW(16) + 48), RW(2));
SET64(2, RD(0) + RD(0));
L_002D5F40:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002D5F50(Ctx *c) { /* func_002D5F50 */
ENTER(0x2d5f50);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2d5f6c); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00325E00(c);
SET64(16, (s32)rd32(c, (RW(17) + 28)));
if (RD(16) == RD(0)) { wr32(c, (RW(17) + 28), RW(0)); goto L_002D6050; }
SET32(4, RW(16) + 432);
if (RD(4) == RD(0)) { SET32(3, RW(16) + 16); goto L_002D5FFC; }
SET64(2, (s64)(s32)0x4d0000);
SET64(8, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 6256);
SET64(6, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 440), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(7, (s32)rd32(c, (RW(16) + 444)));
SET32(8, RW(8) + 6372);
SET32(6, RW(6) + 6304);
SET32(3, RW(3) + 6324);
SET32(2, RW(16) + 720);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(7) + 16), RW(8));
wr32(c, (RW(16) + 600), RW(6));
wr32(c, (RW(16) + 604), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 444)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x2d5fd0); wr32(c, (RW(3) + 20), RW(2)); JP_F_0014D0B0(c);
SET32(4, RW(16) + 720);
{ int t = RD(4) == RD(0);  if (t) goto L_002D5FF8; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(16) + 736), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2d5ff8);  rt_call(c, t); }
L_002D5FF8:;
SET32(3, RW(16) + 16);
L_002D5FFC:;
if (RD(3) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002D6044; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 6240);
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 404), RW(2)); if (t) goto L_002D6040; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4832);
wr32(c, (RW(16) + 404), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 88)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d6030); SET32(4, RW(16) + 80); rt_call(c, t); }
SET32(4, RW(16) + 80);
SET32(5, RW(0) + -1);
SET64(31, 0x2d6040); wr8(c, (RW(16) + 400), (u8)RW(0)); JP_F_0014D0B0(c);
L_002D6040:;
SET64(4, RD(16) + RD(0));
L_002D6044:;
SET64(31, 0x2d604c);  JP_F_001004B0(c);
wr32(c, (RW(17) + 28), RW(0));
L_002D6050:;
SET64(18, RD(0) + RD(0));
SET64(16, RD(17) + RD(0));
L_002D6058:;
SET64(31, 0x2d6060); SET64(4, (s32)rd32(c, (RW(16) + 32))); JP_F_00100430(c);
SET32(18, RW(18) + 1);
wr32(c, (RW(16) + 32), RW(0));
SET64(3, RSD(18) < (s64)5);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002D6058; } }
SET64(3, rd8(c, (RW(17) + 56)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002D6090; }
SET64(31, 0x2d6088); SET64(4, (s32)rd32(c, (RW(17) + 52))); JP_F_001004B0(c);
wr32(c, (RW(17) + 52), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
L_002D6090:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002D60B0(Ctx *c) { /* func_002D60B0 */
ENTER(0x2d60b0);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 32), RD(31));
SET32(2, RW(2) + 2736);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 52), RW(2));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 16), RW(5));
SET64(31, 0x2d60dc); SET32(4, RW(0) + 768); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002D60F8; }
SET64(31, 0x2d60ec); SET32(4, RW(17) + 16); JP_F_001796D0(c);
SET32(4, RW(17) + 432);
SET64(31, 0x2d60f8); SET32(5, RW(0) + 1); JP_F_00179630(c);
L_002D60F8:;
SET64(31, 0x2d6100); wr32(c, (RW(16) + 28), RW(17)); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(5) == RD(0);  if (t) goto L_002D6110; }
SET32(5, RW(5) + 672);
L_002D6110:;
SET64(2, (s64)(s32)0x4a0000);
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(2) + -18472));
SET64(4, (s32)rd32(c, (RW(16) + 28)));
c->f[0].u = RW(3);
SET64(31, 0x2d612c); c->f[12].f = fpu(F(1) - F(0)); JP_F_00312190(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d6138); SET32(5, RW(0) + 5); JP_F_003265B0(c);
SET64(31, 0x2d6140); SET32(4, RW(0) + 1813); JP_F_00361C30(c);
SET64(5, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2d6154); SET64(7, RD(0) + RD(0)); JP_F_00326400(c);
SET64(31, 0x2d615c); SET32(4, RW(0) + 3466); JP_F_00361C30(c);
SET64(5, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET32(6, RW(0) + 1);
SET64(31, 0x2d6170); SET64(7, RD(0) + RD(0)); JP_F_00326400(c);
SET64(31, 0x2d6178); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002D6188; }
SET64(31, 0x2d6188); SET64(4, RD(17) + RD(0)); JP_F_00315140(c);
L_002D6188:;
wr32(c, (RW(16) + 24), RW(17));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D61A0(Ctx *c) { /* func_002D61A0 */
ENTER(0x2d61a0);
SET32(29, RW(29) + -64);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, rd16(c, (RW(4) + 0)));
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 64))); goto L_002D6360; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 64))); goto L_002D62D4; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(5, (s32)rd32(c, (RW(16) + 64))); goto L_002D628C; }
if (RD(4) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 60))); goto L_002D61EC; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_002D6388;
L_002D61EC:;
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + 2736);
SET32(4, RW(0) + 1876);
SET32(3, RW(3) + 181);
SET32(3, RW(2) + RW(3));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfb);
SET64(31, 0x2d6210); wr8(c, (RW(3) + 0), (u8)RW(2)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002D6224; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2d6224); SET64(5, RD(16) + RD(0)); JP_F_001A9520(c);
L_002D6224:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2d6230); wr32(c, (RW(16) + 64), RW(17)); JP_F_001A83B0(c);
SET64(3, (s32)rd32(c, (RW(16) + 60)));
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + -31712);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x2d624c); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00361C30(c);
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x2d625c); SET64(6, RD(0) + RD(0)); JP_F_001A8300(c);
SET64(3, (s32)rd32(c, (RW(16) + 68)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
c->f[13].u = RW(2);
SET64(31, 0x2d627c); SET32(5, RW(0) + 256); JP_F_00311B90(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002D6384;
L_002D628C:;
SET64(3, rd8(c, (RW(5) + 108)));
{ int t = RD(3) != RD(0);  if (t) goto L_002D6384; }
SET64(4, (s32)rd32(c, (RW(5) + 1036)));
SET32(3, RW(0) + -1);
if (RD(4) != RD(3)) { SET32(3, RW(4) << 3); goto L_002D62B0; }
SET64(3, RD(0) + RD(0)); goto L_002D62B8;
L_002D62B0:;
SET32(3, RW(5) + RW(3));
SET32(3, RW(3) + 948);
L_002D62B8:;
if (RD(3) == RD(0)) { SET32(3, RW(0) + 3); goto L_002D62CC; }
SET32(3, RW(0) + 2);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002D6384;
L_002D62CC:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002D6384;
L_002D62D4:;
SET32(2, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(4) + 1036)));
if (RD(3) != RD(2)) { SET32(2, RW(3) << 3); goto L_002D62EC; }
SET64(2, RD(0) + RD(0)); goto L_002D62F4;
L_002D62EC:;
SET32(2, RW(4) + RW(2));
SET32(2, RW(2) + 948);
L_002D62F4:;
c->f[1].u = rd32(c, (RW(2) + 0));
c->f[0].u = rd32(c, (RW(2) + 4));
wr32(c, (RW(29) + 56), c->f[1].u);
{ int t = RD(4) == RD(0); wr32(c, (RW(29) + 60), c->f[0].u); if (t) goto L_002D6318; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d6318); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002D6318:;
SET32(4, RW(0) + 1876);
SET64(31, 0x2d6324); wr32(c, (RW(16) + 64), RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002D6338; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2d6338); SET64(5, RD(16) + RD(0)); JP_F_001A9520(c);
L_002D6338:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2d6344); wr32(c, (RW(16) + 64), RW(17)); JP_F_001A83B0(c);
SET64(5, (s32)rd32(c, (RW(29) + 60)));
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(31, 0x2d6354); SET64(6, RD(0) + RD(0)); JP_F_001A8300(c);
SET32(3, RW(0) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002D6384;
L_002D6360:;
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002D637C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d6378); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_002D637C:;
SET64(31, 0x2d6384); wr32(c, (RW(16) + 64), RW(0)); JP_F_00139AB0(c);
L_002D6384:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002D6388:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002D63A0(Ctx *c) { /* func_002D63A0 */
ENTER(0x2d63a0);
SET32(29, RW(29) + -176);
SET64(3, (s64)(s32)0x530000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = rd32(c, (RW(3) + -22384));
wr32(c, (RW(29) + 160), RW(0));
wr32(c, (RW(29) + 164), RW(0));
wr32(c, (RW(29) + 168), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 172), RW(3));
c->f[13].u = RW(3);
SET64(5, rd16(c, (RW(4) + 0)));
SET64(3, RD(0) | 0xff01);
{ int t = RD(5) == RD(3); SET64(17, RD(4) + RD(0)); if (t) goto L_002D6CC4; }
SET64(3, RD(0) | 0xff00);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 72))); goto L_002D6C38; }
SET64(3, RD(0) | 0xfe01);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 92))); goto L_002D6C18; }
SET64(3, RD(0) | 0xfe00);
if (RD(5) == RD(3)) { SET64(3, (s32)rd32(c, (RW(17) + 92))); goto L_002D6BF4; }
SET32(3, RW(0) + 513);
if (RD(5) == RD(3)) { SET64(2, (s64)(s32)0x3f400000); goto L_002D6748; }
SET32(3, RW(0) + 512);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 72))); goto L_002D6614; }
SET32(4, RW(0) + 1);
if (RD(5) == RD(4)) { SET64(4, (s32)rd32(c, (RW(17) + 68))); goto L_002D64B0; }
{ int t = RD(5) == RD(0);  if (t) goto L_002D6448; }
SET64(4, (s32)rd32(c, (RW(17) + 76))); goto L_002D6D94;
L_002D6448:;
SET64(31, 0x2d6450);  JP_F_00138B20(c);
SET64(31, 0x2d6458); SET32(4, RW(0) + 36); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D6484; }
SET64(31, 0x2d6468); SET64(4, RD(16) + RD(0)); JP_F_00325FE0(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12880);
wr32(c, (RW(16) + 8), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr32(c, (RW(16) + 32), RW(0));
L_002D6484:;
wr32(c, (RW(17) + 68), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
SET64(5, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d64a0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 68)));
L_002D64B0:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d64c0);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D6D90; }
SET64(31, 0x2d64d0); SET32(4, RW(0) + 32); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 72), RW(2)); goto L_002D64E4; }
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(17) + 72), RW(2));
L_002D64E4:;
SET64(4, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET32(5, RW(0) + 44);
SET32(7, RW(0) + 15);
SET64(8, RD(0) + RD(0));
SET64(6, (s32)rd32(c, (RW(2) + 40)));
SET64(31, 0x2d6504); SET32(9, RW(0) + 1); JP_F_003245E0(c);
SET64(5, (s32)rd32(c, (RW(17) + 64)));
SET64(31, 0x2d6510); SET64(4, (s32)rd32(c, (RW(17) + 72))); JP_F_00324080(c);
SET64(4, (s32)rd32(c, (RW(17) + 72)));
SET64(31, 0x2d651c); SET64(5, RD(2) + RD(0)); JP_F_00323FD0(c);
SET64(31, 0x2d6524); SET32(4, RW(0) + 176); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D6550; }
SET64(5, (s64)(s32)0x310000);
SET64(6, (s64)(s32)0x180000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 19744);
SET32(6, RW(6) + -30768);
SET32(7, RW(0) + 160);
SET64(31, 0x2d654c); SET32(8, RW(0) + 1); JP_F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002D6550:;
wr32(c, (RW(17) + 76), RW(16));
SET64(2, (s64)(s32)0x47af0000);
SET64(3, (s32)rd32(c, (RW(17) + 68)));
SET64(2, RD(2) | 0xc800);
c->f[12].u = RW(2);
SET64(7, (s64)(s32)0x420000);
SET64(4, RD(16) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
SET32(7, RW(7) + -31872);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2d6584); SET32(8, RW(0) + -1); JP_F_00314BA0(c);
SET64(31, 0x2d658c); SET32(4, RW(0) + 112); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D65E4; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d65a0); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12800);
SET32(3, RW(3) + 12808);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 12820);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 36), RW(2));
wr32(c, (RW(16) + 80), RW(0));
SET32(2, RW(0) + -1);
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 92), RW(3));
wr32(c, (RW(16) + 60), RW(0));
wr32(c, (RW(16) + 64), RW(2));
L_002D65E4:;
wr32(c, (RW(17) + 80), RW(16));
SET64(2, (s32)rd32(c, (RW(17) + 68)));
wr32(c, (RW(16) + 100), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 84)));
SET64(2, (s32)rd32(c, (RW(17) + 80)));
wr32(c, (RW(2) + 96), RW(3));
SET64(5, (s32)rd32(c, (RW(17) + 80)));
SET64(31, 0x2d6608); SET64(4, RD(17) + RD(0)); JP_F_0013A470(c);
SET32(3, RW(0) + 512);
wr16(c, (RW(17) + 0), (u16)RW(3)); goto L_002D6D90;
L_002D6614:;
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d6628);  rt_call(c, t); }
SET64(16, RD(2) << 48);
SET64(4, (s32)rd32(c, (RW(17) + 72)));
SET64(16, RSD(16) >> 48);
SET64(31, 0x2d663c); SET64(5, RD(16) + RD(0)); JP_F_00323F40(c);
if (RD(16) != RD(2)) { SET64(4, (s32)rd32(c, (RW(17) + 72))); goto L_002D6660; }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d665c); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 72)));
L_002D6660:;
SET64(31, 0x2d6668); SET64(5, RD(16) + RD(0)); JP_F_00323E80(c);
if (RD(16) != RD(2)) { SET64(5, (s32)rd32(c, (RW(17) + 88))); goto L_002D668C; }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d6688); SET64(6, RD(5) + RD(0)); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(17) + 88)));
L_002D668C:;
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 76))); goto L_002D669C; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
L_002D669C:;
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2d66ac);  rt_call(c, t); }
SET64(2, (s64)(s32)0x3f000000);
SET64(4, (s32)rd32(c, (RW(17) + 64)));
SET64(3, (s32)rd32(c, (RW(17) + 80)));
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(2);
wr32(c, (RW(3) + 64), RW(4));
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET64(4, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d66d8); SET32(5, RW(0) + 256); JP_F_00311B90(c);
SET64(31, 0x2d66e0); SET64(4, (s32)rd32(c, (RW(17) + 72))); JP_F_003241C0(c);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(5, RD(2) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2d66f4); SET32(7, RW(0) + 1); JP_F_00314440(c);
SET64(2, (s32)rd32(c, (RW(17) + 76)));
SET64(4, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d670c);  rt_call(c, t); }
SET64(31, 0x2d6714);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2d6724); SET32(6, RW(0) + -1); JP_F_0013DEB0(c);
SET64(3, (s32)rd32(c, (RW(17) + 68)));
SET32(2, RW(0) + -32);
SET64(3, (s32)rd32(c, (RW(3) + 32)));
wr32(c, (RW(3) + 48), RW(0));
wr32(c, (RW(3) + 52), RW(2));
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s64)(s32)0x3f400000);
L_002D6748:;
SET64(3, (s64)(s32)0xbf400000);
wr32(c, (RW(29) + 116), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 112), RW(3));
wr32(c, (RW(29) + 124), RW(2));
wr32(c, (RW(29) + 120), RW(3));
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(17) + 68)));
SET64(4, (s32)rd32(c, (RW(2) + 32)));
SET64(31, 0x2d6778); SET32(5, RW(29) + 160); JP_F_002D6F20(c);
SET64(2, (s32)rd32(c, (RW(17) + 84)));
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(2) + 1424)));
wr128(c, (RW(2) + 80) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(17) + 68)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
c->f[1].u = rd32(c, (RW(2) + 48));
c->f[0].u = rd32(c, (RW(2) + 52));
c->f[22].f = (f32)(s32)c->f[1].u;
SET64(31, 0x2d67a4); c->f[21].f = (f32)(s32)c->f[0].u; JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d67b0); SET32(5, RW(0) + -1); JP_F_0013E260(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x10);
{ int t = RD(2) == RD(0);  if (t) goto L_002D67F0; }
SET64(3, (s64)(s32)0x40800000);
SET64(2, (s64)(s32)0xc3a00000);
c->f[1].u = RW(0);
c->f[2].u = RW(3);
c->facc = fpu(F(1) + F(21));
c->f[0].u = RW(2);
c->f[21].f = fpu(c->facc - F(2) * F(20));
c->fcc = F(21) < F(0);
{ int t = !c->fcc;  if (t) goto L_002D6840; }
c->f[21].u = c->f[0].u; goto L_002D6840;
L_002D67F0:;
SET64(31, 0x2d67f8);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d6804); SET32(5, RW(0) + -1); JP_F_0013E260(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x40);
{ int t = RD(2) == RD(0);  if (t) goto L_002D6840; }
SET64(3, (s64)(s32)0x40800000);
SET64(2, (s64)(s32)0x43400000);
c->f[1].u = RW(0);
c->f[2].u = RW(3);
c->facc = fpu(F(1) + F(21));
c->f[0].u = RW(2);
c->f[21].f = fpu(c->facc + F(2) * F(20));
c->fcc = F(21) <= F(0);
{ int t = c->fcc;  if (t) goto L_002D6840; }
c->f[21].u = c->f[0].u;
L_002D6840:;
SET64(31, 0x2d6848);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d6854); SET32(5, RW(0) + -1); JP_F_0013E260(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x80);
{ int t = RD(2) == RD(0);  if (t) goto L_002D6894; }
SET64(3, (s64)(s32)0x40800000);
SET64(2, (s64)(s32)0xc3000000);
c->f[1].u = RW(0);
c->f[2].u = RW(3);
c->facc = fpu(F(1) + F(22));
c->f[0].u = RW(2);
c->f[22].f = fpu(c->facc - F(2) * F(20));
c->fcc = F(22) < F(0);
if (!c->fcc) { SET64(2, (s32)rd32(c, (RW(17) + 68))); goto L_002D68E8; }
c->f[22].u = c->f[0].u; goto L_002D68E4;
L_002D6894:;
SET64(31, 0x2d689c);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d68a8); SET32(5, RW(0) + -1); JP_F_0013E260(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x20);
{ int t = RD(2) == RD(0);  if (t) goto L_002D68E4; }
SET64(3, (s64)(s32)0x40800000);
SET64(2, (s64)(s32)0x43000000);
c->f[1].u = RW(0);
c->f[2].u = RW(3);
c->facc = fpu(F(1) + F(22));
c->f[0].u = RW(2);
c->f[22].f = fpu(c->facc + F(2) * F(20));
c->fcc = F(22) <= F(0);
{ int t = c->fcc;  if (t) goto L_002D68E4; }
c->f[22].u = c->f[0].u;
L_002D68E4:;
SET64(2, (s32)rd32(c, (RW(17) + 68)));
L_002D68E8:;
c->f[0].u = (u32)fpu_cvtw(F(22));
SET64(3, (s32)rd32(c, (RW(2) + 32)));
SET64(2, (s32)c->f[0].u);
c->f[0].u = (u32)fpu_cvtw(F(21));
wr32(c, (RW(3) + 48), RW(2));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x2d6908); wr32(c, (RW(3) + 52), RW(2)); JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d6914); SET32(5, RW(0) + -1); JP_F_0013E200(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x8000);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 68))); goto L_002D6A10; }
SET64(2, (s64)(s32)0x420c0000);
SET64(3, (s64)(s32)0xc1200000);
wr32(c, (RW(29) + 152), RW(2));
SET32(4, RW(29) + 96);
SET64(2, (s64)(s32)0x3f800000);
SET64(5, (s32)rd32(c, (RW(17) + 68)));
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 148), RW(3));
SET64(18, (s32)rd32(c, (RW(5) + 32)));
wr32(c, (RW(29) + 132), RW(3));
wr32(c, (RW(29) + 156), RW(2));
rd128(c, (RW(29) + 144) & ~15u, &c->r[3]);
SET32(5, RW(18) + 32);
wr32(c, (RW(29) + 140), RW(2));
SET32(6, RW(18) + 16);
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 136), RW(0));
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 16) & ~15u, &c->r[3]);
SET64(31, 0x2d6978); wr128(c, (RW(18) + 32) & ~15u, &c->r[2]); JP_F_002AFF90(c);
SET64(31, 0x2d6980); SET32(4, RW(29) + 96); JP_F_002B0290(c);
wr32(c, (RW(18) + 12), c->f[0].u);
wr32(c, (RW(18) + 8), RW(0));
SET64(31, 0x2d6990); c->f[12].u = rd32(c, (RW(29) + 100)); JP_F_00121728(c);
c->f[0].u = rd32(c, (RW(29) + 104));
SET64(16, RD(2) + RD(0));
SET64(31, 0x2d69a0); c->f[12].u = c->f[0].u ^ 0x80000000u; JP_F_00121728(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d69ac); SET64(5, RD(2) + RD(0)); JP_F_0011F850(c);
SET64(31, 0x2d69b4); SET64(4, RD(2) + RD(0)); JP_F_001222E0(c);
wr32(c, (RW(18) + 0), c->f[0].u);
c->f[22].u = rd32(c, (RW(29) + 100));
c->f[21].u = rd32(c, (RW(29) + 104));
SET64(31, 0x2d69c8); c->f[12].u = rd32(c, (RW(29) + 96)); JP_F_00121728(c);
c->facc = fpu(F(22) * F(22));
SET64(16, RD(2) + RD(0));
SET64(31, 0x2d69d8); c->f[12].f = fpu(c->facc + F(21) * F(21)); JP_F_00121728(c);
SET64(31, 0x2d69e0); SET64(4, RD(2) + RD(0)); JP_F_0011F868(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d69ec); SET64(5, RD(2) + RD(0)); JP_F_0011F850(c);
SET64(31, 0x2d69f4); SET64(4, RD(2) + RD(0)); JP_F_001222E0(c);
wr32(c, (RW(18) + 4), c->f[0].u);
SET32(2, RW(0) + -32);
SET64(3, (s32)rd32(c, (RW(17) + 68)));
SET64(3, (s32)rd32(c, (RW(3) + 32)));
wr32(c, (RW(3) + 48), RW(0));
wr32(c, (RW(3) + 52), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 68)));
L_002D6A10:;
SET32(5, RW(29) + 80);
SET64(16, (s32)rd32(c, (RW(17) + 84)));
SET32(6, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(2) + 32)));
SET64(4, RD(16) + RD(0));
SET64(7, (s32)rd32(c, (RW(3) + 52)));
SET64(2, (s32)rd32(c, (RW(16) + 240)));
SET64(3, (s32)rd32(c, (RW(3) + 48)));
wr32(c, (RW(29) + 80), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 244)));
wr32(c, (RW(29) + 84), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 248)));
wr32(c, (RW(29) + 88), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 252)));
wr32(c, (RW(29) + 92), RW(2));
wr32(c, (RW(29) + 80), RW(3));
SET64(31, 0x2d6a58); wr32(c, (RW(29) + 84), RW(7)); JP_F_00162D30(c);
SET32(4, RW(16) + 192);
SET32(5, RW(29) + 80);
wr32(c, (RW(29) + 80), RW(0));
SET64(31, 0x2d6a6c); wr32(c, (RW(29) + 84), RW(0)); JP_F_002A36D0(c);
SET64(3, (s32)rd32(c, (RW(17) + 68)));
c->f[12].u = c->f[20].u;
SET64(2, (s32)rd32(c, (RW(17) + 84)));
SET64(4, (s32)rd32(c, (RW(3) + 32)));
SET64(31, 0x2d6a84); SET32(5, RW(2) + 784); JP_F_002D6FE0(c);
SET64(31, 0x2d6a8c);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d6a98); SET32(5, RW(0) + -1); JP_F_0013E1A0(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0xffaf);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(3) & 0x400);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002D6AB4; }
SET32(2, RW(0) + 16);
L_002D6AB4:;
SET64(2, RD(2) & 0xffff);
SET64(2, RD(3) | RD(2));
SET64(3, RD(2) & 0xffff);
SET64(2, RD(3) & 0x800);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002D6AD0; }
SET32(2, RW(0) + 64);
L_002D6AD0:;
SET64(2, RD(2) & 0xffff);
SET64(4, (s32)rd32(c, (RW(17) + 72)));
SET64(2, RD(3) | RD(2));
SET64(16, RD(2) & 0xffff);
SET64(31, 0x2d6ae8); SET64(5, RD(16) + RD(0)); JP_F_00324280(c);
SET64(2, (s32)rd32(c, (RW(17) + 72)));
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d6b00);  rt_call(c, t); }
SET64(3, RD(2) << 48);
SET64(3, RSD(3) >> 48);
SET64(2, RD(16) & 0xffff);
SET32(4, RW(3) + 137);
SET64(2, RD(2) & 0x50);
SET64(3, (s64)(s32)0x540000);
SET32(3, RW(3) + 2736);
SET32(4, RW(3) + RW(4));
SET64(3, rd8(c, (RW(4) + 0)));
SET64(3, RD(3) & 0xfb);
{ int t = RD(2) == RD(0); wr8(c, (RW(4) + 0), (u8)RW(3)); if (t) goto L_002D6B94; }
SET64(31, 0x2d6b38); SET64(4, (s32)rd32(c, (RW(17) + 72))); JP_F_003241C0(c);
SET64(3, (s32)rd32(c, (RW(17) + 80)));
wr32(c, (RW(3) + 64), RW(2));
SET64(31, 0x2d6b48); SET64(4, (s32)rd32(c, (RW(17) + 72))); JP_F_003241C0(c);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(5, RD(2) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2d6b5c); SET32(7, RW(0) + 1); JP_F_00314440(c);
SET64(2, (s32)rd32(c, (RW(17) + 76)));
SET64(4, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d6b74);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 96)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 1);
SET32(7, RW(0) + 127);
SET64(31, 0x2d6b8c); SET32(8, RW(0) + 64); JP_F_003185B0(c);
 goto L_002D6D90;
L_002D6B94:;
SET64(31, 0x2d6b9c);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d6ba8); SET32(5, RW(0) + -1); JP_F_0013E200(c);
SET64(3, RD(2) & 0xffff);
SET64(3, RD(3) & 0x6000);
{ int t = RD(3) == RD(0);  if (t) goto L_002D6D90; }
SET64(31, 0x2d6bc0);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x2d6bd0); SET32(6, RW(0) + -1); JP_F_0013DEB0(c);
SET64(4, (s32)rd32(c, (RW(17) + 96)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 3);
SET32(7, RW(0) + 127);
SET64(31, 0x2d6be8); SET32(8, RW(0) + 64); JP_F_003185B0(c);
SET64(3, RD(0) | 0xfe00);
wr16(c, (RW(17) + 0), (u16)RW(3)); goto L_002D6D90;
L_002D6BF4:;
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
SET64(31, 0x2d6c08); SET32(5, RW(0) + 257); JP_F_00311B90(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 92)));
L_002D6C18:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d6c24); SET32(4, RW(2) + 16); JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D6D90; }
SET64(3, RD(0) | 0xff00);
wr16(c, (RW(17) + 0), (u16)RW(3)); goto L_002D6D90;
L_002D6C38:;
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d6c4c);  rt_call(c, t); }
SET64(2, RD(2) << 48);
SET64(2, RSD(2) >> 48);
wr32(c, (RW(17) + 60), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x2d6c6c);  rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(17) + 80)));
SET64(18, (s32)rd32(c, (RW(16) + 60)));
if (RD(18) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 4032))); goto L_002D6C88; }
SET64(3, RD(0) | 0xff01);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002D6CB8;
L_002D6C88:;
SET32(3, RW(0) + 1);
if (RD(4) != RD(3)) { SET64(25, (s32)rd32(c, (RW(18) + 276))); goto L_002D6C9C; }
wr8(c, (RW(18) + 4036), (u8)RW(3)); goto L_002D6CB0;
L_002D6C9C:;
SET64(25, (s32)rd32(c, (RW(25) + 260)));
{ u32 t = RW(25); SET64(31, 0x2d6ca8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 4);
wr32(c, (RW(18) + 4032), RW(3));
L_002D6CB0:;
SET64(3, RD(0) | 0xff00);
wr16(c, (RW(16) + 0), (u16)RW(3));
L_002D6CB8:;
SET64(3, rd16(c, (RW(17) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 0), (u16)RW(3));
L_002D6CC4:;
SET64(4, (s32)rd32(c, (RW(17) + 80)));
SET32(3, RW(0) + 4);
SET64(4, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(4) != RD(3);  if (t) goto L_002D6D90; }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2d6cec); SET64(16, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D6CF8; }
SET32(16, RW(16) + 1);
L_002D6CF8:;
{ int t = RSD(16) <= 0;  if (t) goto L_002D6D90; }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(5, (s64)(s32)0x180000);
SET64(31, 0x2d6d10); SET32(5, RW(5) + -30768); JP_F_001022C0(c);
wr32(c, (RW(17) + 76), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 68), RW(0)); goto L_002D6D34; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d6d30); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 68), RW(0));
L_002D6D34:;
SET64(16, (s32)rd32(c, (RW(17) + 72)));
if (RD(16) == RD(0)) { wr32(c, (RW(17) + 72), RW(0)); goto L_002D6D54; }
SET64(31, 0x2d6d48); SET64(4, RD(16) + RD(0)); JP_F_003243E0(c);
SET64(31, 0x2d6d50); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
wr32(c, (RW(17) + 72), RW(0));
L_002D6D54:;
SET64(4, (s32)rd32(c, (RW(17) + 80)));
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002D6D74; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d6d70); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
L_002D6D74:;
SET64(31, 0x2d6d7c); wr32(c, (RW(17) + 80), RW(0)); JP_F_00139AB0(c);
SET64(31, 0x2d6d84); SET64(4, RD(0) + RD(0)); JP_F_00138B20(c);
SET64(3, rd16(c, (RW(17) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 0), (u16)RW(3));
L_002D6D90:;
SET64(4, (s32)rd32(c, (RW(17) + 76)));
L_002D6D94:;
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_002D6DB0; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2d6dac); c->f[12].u = c->f[20].u; rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
L_002D6DB0:;
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_002D6DD0(Ctx *c) { /* func_002D6DD0 */
ENTER(0x2d6dd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002D6E54; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12800);
SET32(3, RW(3) + 12808);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 12820);
wr32(c, (RW(17) + 36), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 60)));
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002D6E30; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d6e2c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
L_002D6E30:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x2d6e3c); wr32(c, (RW(17) + 60), RW(0)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002D6E58; }
SET64(31, 0x2d6e54); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002D6E54:;
SET64(2, RD(17) + RD(0));
L_002D6E58:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D6E70(Ctx *c) { /* func_002D6E70 */
ENTER(0x2d6e70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002D6F00; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12880);
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2d6ea8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002D6EEC; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 20496);
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x2d6ec8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_002D6EE8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 20528);
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x2d6ee8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_002D6EE8:;
SET64(2, RD(16) << 48);
L_002D6EEC:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002D6F04; }
SET64(31, 0x2d6f00); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002D6F00:;
SET64(2, RD(17) + RD(0));
L_002D6F04:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D6F20(Ctx *c) { /* func_002D6F20 */
ENTER(0x2d6f20);
SET32(29, RW(29) + -288);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2d6f40); SET32(4, RW(29) + 208); JP_F_002AF080(c);
c->f[2].u = rd32(c, (RW(17) + 8));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(17) + 4));
wr32(c, (RW(29) + 204), RW(2));
c->f[0].u = rd32(c, (RW(17) + 0));
SET32(4, RW(29) + 48);
wr32(c, (RW(29) + 200), c->f[2].u);
wr32(c, (RW(29) + 196), c->f[1].u);
wr32(c, (RW(29) + 192), c->f[0].u);
wr32(c, (RW(29) + 124), RW(2));
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
SET64(31, 0x2d6f80); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); JP_F_0013AEA0(c);
SET32(4, RW(29) + 48);
SET64(31, 0x2d6f8c); SET32(5, RW(29) + 112); JP_F_001594D0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2d6f98); SET32(4, RW(29) + 128); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
SET64(4, RD(16) + RD(0));
rd128(c, (RW(29) + 128) & ~15u, &c->r[6]);
SET32(5, RW(29) + 208);
rd128(c, (RW(29) + 144) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 240) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 208) & ~15u, &c->r[6]);
wr128(c, (RW(29) + 224) & ~15u, &c->r[3]);
SET64(31, 0x2d6fc4); wr128(c, (RW(29) + 256) & ~15u, &c->r[2]); JP_F_002AFD70(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 288); return;
}

void JP_F_002D6FE0(Ctx *c) { /* func_002D6FE0 */
ENTER(0x2d6fe0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(31, 0x2d7004); c->f[20].u = c->f[12].u; JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d7010); SET32(5, RW(0) + -1); JP_F_0013DFE0(c);
c->f[1].u = RW(0);
c->fcc = F(0) <= F(1);
{ int t = c->fcc;  if (t) goto L_002D7094; }
SET64(31, 0x2d702c);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d7038); SET32(5, RW(0) + -1); JP_F_0013DFE0(c);
SET64(3, (s64)(s32)0x3daa0000);
SET64(2, (s64)(s32)0x40490000);
SET64(3, RD(3) | 0xaaab);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(3);
c->f[3].f = fpu(F(1) * F(0));
c->f[2].u = rd32(c, (RW(17) + 4));
c->f[1].u = RW(0);
c->f[0].u = RW(2);
c->facc = fpu(F(1) + F(2));
c->f[1].f = fpu(c->facc + F(20) * F(3));
c->fcc = F(1) <= F(0);
{ int t = c->fcc; wr32(c, (RW(17) + 4), c->f[1].u); if (t) goto L_002D7128; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(17) + 4), c->f[0].u); goto L_002D7128;
L_002D7094:;
SET64(31, 0x2d709c);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d70a8); SET32(5, RW(0) + -1); JP_F_0013DFE0(c);
c->f[1].u = RW(0);
c->fcc = F(0) < F(1);
{ int t = !c->fcc;  if (t) goto L_002D7128; }
SET64(31, 0x2d70c4);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d70d0); SET32(5, RW(0) + -1); JP_F_0013DFE0(c);
SET64(3, (s64)(s32)0x3daa0000);
SET64(2, (s64)(s32)0xc0490000);
SET64(3, RD(3) | 0xaaab);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(3);
c->f[3].f = fpu(F(1) * F(0));
c->f[2].u = rd32(c, (RW(17) + 4));
c->f[1].u = RW(0);
c->f[0].u = RW(2);
c->facc = fpu(F(1) + F(2));
c->f[1].f = fpu(c->facc + F(20) * F(3));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; wr32(c, (RW(17) + 4), c->f[1].u); if (t) goto L_002D7128; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(17) + 4), c->f[0].u);
L_002D7128:;
SET64(31, 0x2d7130);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d713c); SET32(5, RW(0) + -1); JP_F_0013DF90(c);
c->f[1].u = RW(0);
c->fcc = F(0) <= F(1);
{ int t = c->fcc;  if (t) goto L_002D71AC; }
SET64(31, 0x2d7158);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d7164); SET32(5, RW(0) + -1); JP_F_0013DF90(c);
SET64(3, (s64)(s32)0x3daa0000);
SET64(2, (s64)(s32)0x3f060000);
SET64(3, RD(3) | 0xaaab);
SET64(2, RD(2) | 0xa92);
c->f[1].u = RW(3);
c->f[3].f = fpu(F(1) * F(0));
c->f[2].u = rd32(c, (RW(17) + 0));
c->f[1].u = RW(0);
c->f[0].u = RW(2);
c->facc = fpu(F(1) + F(2));
c->f[1].f = fpu(c->facc + F(20) * F(3));
c->fcc = F(1) <= F(0);
{ int t = c->fcc; wr32(c, (RW(17) + 0), c->f[1].u); if (t) goto L_002D722C; }
wr32(c, (RW(17) + 0), c->f[0].u); goto L_002D722C;
L_002D71AC:;
SET64(31, 0x2d71b4);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d71c0); SET32(5, RW(0) + -1); JP_F_0013DF90(c);
c->f[1].u = RW(0);
c->fcc = F(0) < F(1);
{ int t = !c->fcc;  if (t) goto L_002D722C; }
SET64(31, 0x2d71dc);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d71e8); SET32(5, RW(0) + -1); JP_F_0013DF90(c);
SET64(3, (s64)(s32)0x3daa0000);
SET64(2, (s64)(s32)0xbf490000);
SET64(3, RD(3) | 0xaaab);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(3);
c->f[3].f = fpu(F(1) * F(0));
c->f[2].u = rd32(c, (RW(17) + 0));
c->f[1].u = RW(0);
c->f[0].u = RW(2);
c->facc = fpu(F(1) + F(2));
c->f[1].f = fpu(c->facc + F(20) * F(3));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; wr32(c, (RW(17) + 0), c->f[1].u); if (t) goto L_002D722C; }
wr32(c, (RW(17) + 0), c->f[0].u);
L_002D722C:;
SET64(31, 0x2d7234);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d7240); SET32(5, RW(0) + -1); JP_F_0013DEF0(c);
c->f[1].u = RW(0);
c->fcc = F(0) <= F(1);
{ int t = c->fcc;  if (t) goto L_002D72A8; }
SET64(31, 0x2d725c);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d7268); SET32(5, RW(0) + -1); JP_F_0013DEF0(c);
SET64(3, (s64)(s32)0x3f000000);
SET64(2, (s64)(s32)0x420c0000);
c->f[1].u = RW(3);
c->f[3].f = fpu(F(1) * F(0));
c->f[2].u = rd32(c, (RW(17) + 12));
c->f[1].u = RW(0);
c->f[0].u = RW(2);
c->facc = fpu(F(1) + F(2));
c->f[1].f = fpu(c->facc + F(20) * F(3));
c->fcc = F(1) < F(0);
{ int t = c->fcc; wr32(c, (RW(17) + 12), c->f[1].u); if (t) goto L_002D7320; }
wr32(c, (RW(17) + 12), c->f[0].u); goto L_002D7320;
L_002D72A8:;
SET64(31, 0x2d72b0);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d72bc); SET32(5, RW(0) + -1); JP_F_0013DEF0(c);
c->f[1].u = RW(0);
c->fcc = F(0) < F(1);
if (!c->fcc) { rd128(c, (RW(17) + 32) & ~15u, &c->r[2]); goto L_002D7324; }
SET64(31, 0x2d72d8);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d72e4); SET32(5, RW(0) + -1); JP_F_0013DEF0(c);
SET64(3, (s64)(s32)0x3f000000);
SET64(2, (s64)(s32)0x418c0000);
c->f[1].u = RW(3);
c->f[3].f = fpu(F(1) * F(0));
c->f[2].u = rd32(c, (RW(17) + 12));
c->f[1].u = RW(0);
c->f[0].u = RW(2);
c->facc = fpu(F(1) + F(2));
c->f[1].f = fpu(c->facc + F(20) * F(3));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; wr32(c, (RW(17) + 12), c->f[1].u); if (t) goto L_002D7320; }
wr32(c, (RW(17) + 12), c->f[0].u);
L_002D7320:;
rd128(c, (RW(17) + 32) & ~15u, &c->r[2]);
L_002D7324:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(17) + 16);
wr128(c, (RW(17) + 16) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(17) + 12));
c->f[0].u = rd32(c, (RW(17) + 24));
c->f[0].f = fpu(F(0) + F(1));
SET64(31, 0x2d7344); wr32(c, (RW(17) + 24), c->f[0].u); JP_F_002D6F20(c);
rd128(c, (RW(17) + 16) & ~15u, &c->r[2]);
SET64(4, RD(16) + RD(0));
wr128(c, (RW(16) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 32) & ~15u, &c->r[2]);
SET64(31, 0x2d735c); wr128(c, (RW(16) + 32) & ~15u, &c->r[2]); JP_F_0015DAB0(c);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002D7380(Ctx *c) { /* func_002D7380 */
ENTER(0x2d7380);
SET32(29, RW(29) + -128);
SET64(3, (s64)(s32)0x530000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = rd32(c, (RW(3) + -22384));
SET64(4, rd16(c, (RW(4) + 0)));
SET64(3, RD(0) | 0xff01);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(18) + 60))); goto L_002D7840; }
SET64(3, RD(0) | 0xff00);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(18) + 60))); goto L_002D782C; }
SET32(3, RW(0) + 768);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(18) + 60))); goto L_002D77F4; }
SET32(3, RW(0) + 512);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(18) + 60))); goto L_002D7768; }
SET32(3, RW(0) + 256);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(18) + 60))); goto L_002D75F8; }
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 64))); goto L_002D73F8; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_002D7868;
L_002D73F8:;
if (RSD(2) < 0) { SET32(4, RW(0) + 4288); goto L_002D7410; }
wr32(c, (RW(18) + 68), RW(2));
SET32(2, RW(0) + -1);
wr32(c, (RW(18) + 64), RW(2));
SET32(4, RW(0) + 4288);
L_002D7410:;
SET64(31, 0x2d7418);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002D74C0; }
SET32(4, RW(17) + 4144);
SET32(2, RW(17) + 4208);
wr32(c, (RW(17) + 912), RW(4));
SET32(16, RW(0) + 1);
SET64(31, 0x2d7438); wr32(c, (RW(17) + 256), RW(2)); JP_F_002AF080(c);
SET64(31, 0x2d7440); SET32(4, RW(17) + 4208); JP_F_00141C80(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2d744c); SET64(5, RD(0) + RD(0)); JP_F_001E99D0(c);
wr32(c, (RW(17) + 4032), RW(0));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 18672);
wr8(c, (RW(17) + 4036), (u8)RW(0));
wr32(c, (RW(17) + 276), RW(2));
SET64(7, (s64)(s32)0x4e0000);
SET64(6, (s32)rd32(c, (RW(17) + 256)));
SET32(7, RW(7) + 18936);
SET64(5, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(5, RW(5) + 18744);
SET32(3, RW(3) + 18776);
wr32(c, (RW(6) + 16), RW(7));
SET32(2, RW(17) + 4208);
wr32(c, (RW(17) + 432), RW(5));
SET32(4, RW(17) + 4044);
wr32(c, (RW(17) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x2d74a0); wr32(c, (RW(3) + 20), RW(2)); JP_F_00156540(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(17) + 4108);
SET32(2, RW(2) + 456);
wr32(c, (RW(17) + 4128), RW(2));
SET64(31, 0x2d74b8); wr32(c, (RW(17) + 4108), RW(0)); JP_F_002C08A0(c);
wr32(c, (RW(17) + 4040), RW(0));
wr32(c, (RW(17) + 4136), RW(0));
L_002D74C0:;
wr32(c, (RW(18) + 60), RW(17));
SET32(6, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(18) + 100)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
wr32(c, (RW(17) + 1748), RW(2));
wr8(c, (RW(17) + 1746), (u8)RW(6));
SET64(4, (s32)rd32(c, (RW(18) + 60)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x2d74ec); SET64(5, rd16(c, (RW(18) + 68))); rt_call(c, t); }
SET64(2, (s64)(s32)0x420c0000);
SET64(3, (s64)(s32)0xc1200000);
wr32(c, (RW(29) + 120), RW(2));
SET32(4, RW(29) + 80);
SET64(2, (s64)(s32)0x3f800000);
SET64(5, (s32)rd32(c, (RW(18) + 100)));
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 116), RW(3));
SET64(17, (s32)rd32(c, (RW(5) + 32)));
wr32(c, (RW(29) + 100), RW(3));
wr32(c, (RW(29) + 124), RW(2));
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
SET32(5, RW(17) + 32);
wr32(c, (RW(29) + 108), RW(2));
SET32(6, RW(17) + 16);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 104), RW(0));
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 16) & ~15u, &c->r[3]);
SET64(31, 0x2d7540); wr128(c, (RW(17) + 32) & ~15u, &c->r[2]); JP_F_002AFF90(c);
SET64(31, 0x2d7548); SET32(4, RW(29) + 80); JP_F_002B0290(c);
wr32(c, (RW(17) + 12), c->f[0].u);
wr32(c, (RW(17) + 8), RW(0));
SET64(31, 0x2d7558); c->f[12].u = rd32(c, (RW(29) + 84)); JP_F_00121728(c);
c->f[0].u = rd32(c, (RW(29) + 88));
SET64(16, RD(2) + RD(0));
SET64(31, 0x2d7568); c->f[12].u = c->f[0].u ^ 0x80000000u; JP_F_00121728(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d7574); SET64(5, RD(2) + RD(0)); JP_F_0011F850(c);
SET64(31, 0x2d757c); SET64(4, RD(2) + RD(0)); JP_F_001222E0(c);
wr32(c, (RW(17) + 0), c->f[0].u);
c->f[21].u = rd32(c, (RW(29) + 84));
c->f[20].u = rd32(c, (RW(29) + 88));
SET64(31, 0x2d7590); c->f[12].u = rd32(c, (RW(29) + 80)); JP_F_00121728(c);
c->facc = fpu(F(21) * F(21));
SET64(16, RD(2) + RD(0));
SET64(31, 0x2d75a0); c->f[12].f = fpu(c->facc + F(20) * F(20)); JP_F_00121728(c);
SET64(31, 0x2d75a8); SET64(4, RD(2) + RD(0)); JP_F_0011F868(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d75b4); SET64(5, RD(2) + RD(0)); JP_F_0011F850(c);
SET64(31, 0x2d75bc); SET64(4, RD(2) + RD(0)); JP_F_001222E0(c);
wr32(c, (RW(17) + 4), c->f[0].u);
SET32(2, RW(0) + -32);
SET64(3, (s32)rd32(c, (RW(18) + 100)));
c->f[12].u = RW(0);
SET64(3, (s32)rd32(c, (RW(3) + 32)));
wr32(c, (RW(3) + 48), RW(0));
wr32(c, (RW(3) + 52), RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 100)));
SET64(2, (s32)rd32(c, (RW(18) + 96)));
SET64(4, (s32)rd32(c, (RW(3) + 32)));
SET64(31, 0x2d75ec); SET32(5, RW(2) + 784); JP_F_002D6FE0(c);
SET32(3, RW(0) + 256);
wr16(c, (RW(18) + 0), (u16)RW(3)); goto L_002D7864;
L_002D75F8:;
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
{ u32 t = RW(25); SET64(31, 0x2d7608);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D7864; }
SET64(4, (s32)rd32(c, (RW(18) + 64)));
if (RSD(4) < 0) { SET64(2, (s32)rd32(c, (RW(18) + 60))); goto L_002D7664; }
SET64(3, (s32)rd32(c, (RW(18) + 68)));
{ int t = RD(3) == RD(4);  if (t) goto L_002D7660; }
SET64(4, (s32)rd32(c, (RW(18) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 60), RW(0)); goto L_002D7648; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d7644); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 60), RW(0));
L_002D7648:;
SET32(3, RW(0) + -1);
SET64(4, (s32)rd32(c, (RW(18) + 64)));
wr32(c, (RW(18) + 68), RW(4));
wr32(c, (RW(18) + 64), RW(3));
wr16(c, (RW(18) + 0), (u16)RW(0)); goto L_002D7864;
L_002D7660:;
SET64(2, (s32)rd32(c, (RW(18) + 60)));
L_002D7664:;
SET64(3, (s32)rd32(c, (RW(18) + 100)));
SET64(4, (s32)rd32(c, (RW(2) + 1024)));
{ int t = RD(4) == RD(0); SET64(5, (s32)rd32(c, (RW(3) + 28))); if (t) goto L_002D767C; }
SET64(31, 0x2d767c);  JP_F_002BAB70(c);
L_002D767C:;
SET64(2, (s32)rd32(c, (RW(18) + 96)));
SET64(5, (s32)rd32(c, (RW(2) + 1424)));
SET64(31, 0x2d768c); SET64(4, (s32)rd32(c, (RW(18) + 60))); JP_F_00319340(c);
SET64(4, (s32)rd32(c, (RW(18) + 60)));
c->f[12].u = RW(0);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2d76a0); SET32(6, RW(0) + 1); JP_F_00159D50(c);
SET64(5, (s32)rd32(c, (RW(18) + 96)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 60))); goto L_002D76B4; }
SET32(5, RW(5) + 928);
SET64(4, (s32)rd32(c, (RW(18) + 60)));
L_002D76B4:;
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x2d76c4);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 60)));
SET64(4, (s32)rd32(c, (RW(2) + 1020)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 60))); goto L_002D76E0; }
SET64(31, 0x2d76dc); SET64(5, (s32)rd32(c, (RW(18) + 96))); JP_F_0022CDA0(c);
SET64(4, (s32)rd32(c, (RW(18) + 60)));
L_002D76E0:;
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 196)));
{ u32 t = RW(25); SET64(31, 0x2d76f0); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 60)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x2d7704); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(16, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 60)));
L_002D770C:;
SET64(2, (s64)(s32)0x40800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 240)));
{ u32 t = RW(25); SET64(31, 0x2d7724);  rt_call(c, t); }
SET32(16, RW(16) + 1);
SET64(2, RD(16) < (u64)(s64)30);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 60))); { POLL(); goto L_002D770C; } }
SET64(4, (s32)rd32(c, (RW(18) + 60)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x2d7748); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 60)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 196)));
{ u32 t = RW(25); SET64(31, 0x2d775c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(3, RW(0) + 512);
wr16(c, (RW(18) + 0), (u16)RW(3)); goto L_002D7864;
L_002D7768:;
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 196)));
{ u32 t = RW(25); SET64(31, 0x2d7778); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 60)));
SET64(31, 0x2d7784); SET64(5, RD(0) + RD(0)); JP_F_003192C0(c);
SET64(4, (s32)rd32(c, (RW(18) + 64)));
if (RSD(4) < 0) { SET64(4, (s32)rd32(c, (RW(18) + 60))); goto L_002D77DC; }
SET64(3, (s32)rd32(c, (RW(18) + 68)));
{ int t = RD(3) == RD(4);  if (t) goto L_002D77D8; }
SET64(16, (s32)rd32(c, (RW(18) + 60)));
SET32(3, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(16) + 4032)));
if (RD(4) != RD(3)) { SET64(25, (s32)rd32(c, (RW(16) + 276))); goto L_002D77B8; }
wr8(c, (RW(16) + 4036), (u8)RW(3)); goto L_002D77CC;
L_002D77B8:;
SET64(25, (s32)rd32(c, (RW(25) + 260)));
{ u32 t = RW(25); SET64(31, 0x2d77c4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 4);
wr32(c, (RW(16) + 4032), RW(3));
L_002D77CC:;
SET32(3, RW(0) + 768);
wr16(c, (RW(18) + 0), (u16)RW(3)); goto L_002D7864;
L_002D77D8:;
SET64(4, (s32)rd32(c, (RW(18) + 60)));
L_002D77DC:;
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 240)));
{ u32 t = RW(25); SET64(31, 0x2d77ec); c->f[12].u = c->f[20].u; rt_call(c, t); }
 goto L_002D7864;
L_002D77F4:;
SET64(31, 0x2d77fc);  JP_F_003193C0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D7864; }
SET64(4, (s32)rd32(c, (RW(18) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 60), RW(0)); goto L_002D7824; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d7820); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 60), RW(0));
L_002D7824:;
wr16(c, (RW(18) + 0), (u16)RW(0)); goto L_002D7864;
L_002D782C:;
SET64(31, 0x2d7834);  JP_F_003193C0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D7864; }
SET64(4, (s32)rd32(c, (RW(18) + 60)));
L_002D7840:;
if (RD(4) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_002D785C; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d7858); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
L_002D785C:;
SET64(31, 0x2d7864); wr32(c, (RW(18) + 60), RW(0)); JP_F_00139AB0(c);
L_002D7864:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002D7868:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002D7890(Ctx *c) { /* func_002D7890 */
ENTER(0x2d7890);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(31, 0x2d78b4); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_00326210(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 20))); goto L_002D78C4; }
SET32(2, RW(0) + 1); goto L_002D7AAC;
L_002D78C4:;
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 28))); goto L_002D7928; }
SET64(31, 0x2d78d4); SET32(4, RW(0) + 36); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002D790C; }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2d78e8); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00326830(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x2d78f4); SET64(4, RD(18) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(16) + RD(0));
SET32(2, RW(2) + -32);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2d790c); wr32(c, (RW(18) + 16), RW(2)); JP_F_00157540(c);
L_002D790C:;
wr32(c, (RW(17) + 20), RW(18));
SET64(5, RD(18) + RD(0));
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(6, (s32)rd32(c, (RW(17) + 16)));
SET64(31, 0x2d7924); SET64(7, RD(0) + RD(0)); JP_F_00314DA0(c);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
L_002D7928:;
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 32))); goto L_002D7974; }
SET64(31, 0x2d7938); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D7948; }
SET64(31, 0x2d7948); SET64(4, RD(16) + RD(0)); JP_F_00150480(c);
L_002D7948:;
wr32(c, (RW(17) + 28), RW(16));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2d7958); SET64(4, (s32)rd32(c, (RW(2) + 4))); JP_F_00326830(c);
SET64(4, (s32)rd32(c, (RW(17) + 28)));
SET64(5, RD(2) + RD(0));
SET64(6, (s32)rd32(c, (RW(17) + 16)));
SET32(7, RW(0) + -1);
SET64(31, 0x2d7970); SET64(8, RD(0) + RD(0)); JP_F_0014FC00(c);
SET64(2, (s32)rd32(c, (RW(17) + 32)));
L_002D7974:;
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002D7AAC; }
SET64(31, 0x2d7984); SET32(4, RW(0) + 64); JP_F_00100670(c);
SET64(16, RD(2) + RD(0));
if (RD(16) == RD(0)) { SET64(2, (s64)(s32)0x420c0000); goto L_002D79C8; }
wr32(c, (RW(16) + 16), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(2));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 36), RW(0));
wr32(c, (RW(16) + 40), RW(0));
wr32(c, (RW(16) + 44), RW(2));
wr32(c, (RW(16) + 12), RW(0));
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 0), RW(0));
SET64(2, (s64)(s32)0x420c0000);
L_002D79C8:;
SET64(3, (s64)(s32)0xc1200000);
wr32(c, (RW(29) + 120), RW(2));
SET32(4, RW(29) + 80);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 116), RW(3));
SET32(5, RW(16) + 32);
wr32(c, (RW(29) + 100), RW(3));
SET32(6, RW(16) + 16);
wr32(c, (RW(29) + 124), RW(2));
wr32(c, (RW(29) + 108), RW(2));
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 104), RW(0));
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr32(c, (RW(17) + 32), RW(16));
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[3]);
SET64(31, 0x2d7a14); wr128(c, (RW(16) + 32) & ~15u, &c->r[2]); JP_F_002AFF90(c);
SET64(31, 0x2d7a1c); SET32(4, RW(29) + 80); JP_F_002B0290(c);
wr32(c, (RW(16) + 12), c->f[0].u);
wr32(c, (RW(16) + 8), RW(0));
SET64(31, 0x2d7a2c); c->f[12].u = rd32(c, (RW(29) + 84)); JP_F_00121728(c);
c->f[0].u = rd32(c, (RW(29) + 88));
SET64(18, RD(2) + RD(0));
SET64(31, 0x2d7a3c); c->f[12].u = c->f[0].u ^ 0x80000000u; JP_F_00121728(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2d7a48); SET64(5, RD(2) + RD(0)); JP_F_0011F850(c);
SET64(31, 0x2d7a50); SET64(4, RD(2) + RD(0)); JP_F_001222E0(c);
wr32(c, (RW(16) + 0), c->f[0].u);
c->f[21].u = rd32(c, (RW(29) + 84));
c->f[20].u = rd32(c, (RW(29) + 88));
SET64(31, 0x2d7a64); c->f[12].u = rd32(c, (RW(29) + 80)); JP_F_00121728(c);
c->facc = fpu(F(21) * F(21));
SET64(18, RD(2) + RD(0));
SET64(31, 0x2d7a74); c->f[12].f = fpu(c->facc + F(20) * F(20)); JP_F_00121728(c);
SET64(31, 0x2d7a7c); SET64(4, RD(2) + RD(0)); JP_F_0011F868(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2d7a88); SET64(5, RD(2) + RD(0)); JP_F_0011F850(c);
SET64(31, 0x2d7a90); SET64(4, RD(2) + RD(0)); JP_F_001222E0(c);
wr32(c, (RW(16) + 4), c->f[0].u);
SET32(3, RW(0) + 100);
SET64(4, (s32)rd32(c, (RW(17) + 32)));
SET32(2, RW(0) + -16);
wr32(c, (RW(4) + 48), RW(3));
wr32(c, (RW(4) + 52), RW(2));
SET64(2, RD(0) + RD(0));
L_002D7AAC:;
SET64(31, rd64(c, (RW(29) + 64)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002D7AD0(Ctx *c) { /* func_002D7AD0 */
ENTER(0x2d7ad0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2d7ae8); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00326450(c);
SET64(4, (s32)rd32(c, (RW(17) + 20)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 20), RW(0)); goto L_002D7B08; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d7b04); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 20), RW(0));
L_002D7B08:;
SET64(16, (s32)rd32(c, (RW(17) + 24)));
if (RD(16) == RD(0)) { wr32(c, (RW(17) + 24), RW(0)); goto L_002D7B28; }
SET64(31, 0x2d7b1c); SET64(4, RD(16) + RD(0)); JP_F_00315100(c);
SET64(31, 0x2d7b24); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
wr32(c, (RW(17) + 24), RW(0));
L_002D7B28:;
SET64(4, (s32)rd32(c, (RW(17) + 28)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 28), RW(0)); goto L_002D7B48; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d7b44); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 28), RW(0));
L_002D7B48:;
SET64(31, 0x2d7b50); SET64(4, (s32)rd32(c, (RW(17) + 32))); JP_F_001004B0(c);
wr32(c, (RW(17) + 32), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D7B70(Ctx *c) { /* func_002D7B70 */
ENTER(0x2d7b70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(4) + 16), RW(5));
SET64(31, 0x2d7b90); SET32(5, RW(0) + 2); JP_F_003265B0(c);
SET64(31, 0x2d7b98); SET32(4, RW(0) + 1797); JP_F_00361C30(c);
SET64(5, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2d7bac); SET64(7, RD(0) + RD(0)); JP_F_00326400(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1466);
SET32(6, RW(0) + 1);
SET64(31, 0x2d7bc0); SET64(7, RD(0) + RD(0)); JP_F_00326400(c);
SET64(31, 0x2d7bc8); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D7BD8; }
SET64(31, 0x2d7bd8); SET64(4, RD(16) + RD(0)); JP_F_00315140(c);
L_002D7BD8:;
wr32(c, (RW(17) + 24), RW(16));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D7BF0(Ctx *c) { /* func_002D7BF0 */
ENTER(0x2d7bf0);
SET32(29, RW(29) + -64);
SET64(3, (s64)(s32)0x530000);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = rd32(c, (RW(3) + -22384));
SET64(5, rd16(c, (RW(4) + 0)));
SET64(3, RD(0) | 0xff01);
{ int t = RD(5) == RD(3); SET64(17, RD(4) + RD(0)); if (t) goto L_002D81A0; }
SET64(3, RD(0) | 0xff00);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 72))); goto L_002D8160; }
SET64(3, RD(0) | 0xfe01);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 80))); goto L_002D8140; }
SET64(3, RD(0) | 0xfe00);
if (RD(5) == RD(3)) { SET64(3, (s32)rd32(c, (RW(17) + 80))); goto L_002D8114; }
SET32(3, RW(0) + 514);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 76))); goto L_002D8054; }
SET32(3, RW(0) + 513);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 72))); goto L_002D7E90; }
SET32(3, RW(0) + 512);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 72))); goto L_002D7D94; }
SET32(4, RW(0) + 1);
if (RD(5) == RD(4)) { SET64(4, (s32)rd32(c, (RW(17) + 68))); goto L_002D7D20; }
{ int t = RD(5) == RD(0);  if (t) goto L_002D7C80; }
SET64(31, rd64(c, (RW(29) + 48))); goto L_002D8234;
L_002D7C80:;
SET64(31, 0x2d7c88);  JP_F_00138B20(c);
SET64(31, 0x2d7c90); SET32(4, RW(0) + 28); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D7CAC; }
SET64(31, 0x2d7ca0); SET64(4, RD(16) + RD(0)); JP_F_00325FE0(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12992);
wr32(c, (RW(16) + 8), RW(2));
L_002D7CAC:;
wr32(c, (RW(17) + 68), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(2, (s32)rd32(c, (RW(17) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
SET64(5, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d7cc8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, 0x2d7cd0); SET32(4, RW(0) + 32); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 72), RW(2)); goto L_002D7CE4; }
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(17) + 72), RW(2));
L_002D7CE4:;
SET64(4, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 80)));
SET32(5, RW(0) + 5);
SET32(7, RW(0) + 15);
SET64(8, RD(0) + RD(0));
SET64(6, (s32)rd32(c, (RW(2) + 36)));
SET64(31, 0x2d7d04); SET32(9, RW(0) + 1); JP_F_00324430(c);
SET64(5, (s32)rd32(c, (RW(17) + 64)));
SET64(31, 0x2d7d10); SET64(4, (s32)rd32(c, (RW(17) + 72))); JP_F_00323FD0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 68)));
L_002D7D20:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d7d30);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D8230; }
SET64(31, 0x2d7d40); SET32(4, RW(0) + 160); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D7D50; }
SET64(31, 0x2d7d50); SET64(4, RD(16) + RD(0)); JP_F_00314D20(c);
L_002D7D50:;
wr32(c, (RW(17) + 76), RW(16));
SET64(2, (s64)(s32)0x47af0000);
SET64(3, (s32)rd32(c, (RW(17) + 68)));
SET64(2, RD(2) | 0xc800);
c->f[12].u = RW(2);
SET64(6, (s64)(s32)0x420000);
SET64(7, (s64)(s32)0x420000);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
SET32(6, RW(6) + -32160);
SET32(7, RW(7) + -31952);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2d7d88); SET32(8, RW(0) + -1); JP_F_00314BA0(c);
SET32(3, RW(0) + 512);
wr16(c, (RW(17) + 0), (u16)RW(3)); goto L_002D8230;
L_002D7D94:;
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d7da8);  rt_call(c, t); }
SET64(16, RD(2) << 48);
SET64(4, (s32)rd32(c, (RW(17) + 72)));
SET64(16, RSD(16) >> 48);
SET64(31, 0x2d7dbc); SET64(5, RD(16) + RD(0)); JP_F_00323F40(c);
if (RD(16) != RD(2)) { SET64(4, (s32)rd32(c, (RW(17) + 72))); goto L_002D7DE0; }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d7ddc); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 72)));
L_002D7DE0:;
SET64(31, 0x2d7de8); SET64(5, RD(16) + RD(0)); JP_F_00323E80(c);
if (RD(16) != RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 72))); goto L_002D7E0C; }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d7e08); SET64(6, RD(5) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 72)));
L_002D7E0C:;
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d7e20);  rt_call(c, t); }
SET64(2, RD(2) << 48);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(2, RSD(2) >> 48);
SET32(6, RW(0) + 2);
SET32(5, RW(2) + 2);
SET64(31, 0x2d7e3c); SET64(7, RD(0) + RD(0)); JP_F_00314440(c);
SET64(5, (s32)rd32(c, (RW(17) + 84)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 76))); goto L_002D7E50; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
L_002D7E50:;
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2d7e60);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 80)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
c->f[13].u = RW(2);
SET64(31, 0x2d7e80); SET32(5, RW(0) + 256); JP_F_00311B90(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 72)));
L_002D7E90:;
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d7ea4);  rt_call(c, t); }
SET64(16, RD(2) << 48);
SET64(2, (s64)(s32)0x540000);
SET64(16, RSD(16) >> 48);
SET32(2, RW(2) + 2868);
SET32(3, RW(2) + RW(16));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfb);
SET64(31, 0x2d7ec8); wr8(c, (RW(3) + 0), (u8)RW(2)); JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d7ed4); SET32(5, RW(0) + -1); JP_F_0013E1A0(c);
SET64(3, RD(2) & 0xffff);
SET32(2, RW(0) + -161);
SET64(3, RD(3) & RD(2));
SET64(2, RD(3) & 0x400);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002D7EF0; }
SET32(2, RW(0) + 128);
L_002D7EF0:;
SET64(3, RD(3) | RD(2));
SET64(2, RD(3) & 0x800);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002D7F04; }
SET32(2, RW(0) + 32);
L_002D7F04:;
SET64(4, (s32)rd32(c, (RW(17) + 72)));
SET64(2, RD(3) | RD(2));
SET64(31, 0x2d7f14); SET64(5, RD(2) & 0xffff); JP_F_00324280(c);
SET64(2, (s32)rd32(c, (RW(17) + 72)));
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d7f2c);  rt_call(c, t); }
SET64(2, RD(2) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(16) == RD(2);  if (t) goto L_002D800C; }
SET64(3, (s32)rd32(c, (RW(17) + 76)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(3, (s32)rd32(c, (RW(3) + 144)));
SET64(2, (s32)rd32(c, (RW(3) + 828)));
wr32(c, (RW(3) + 1148), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 76)));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 968)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2d7f6c); SET32(4, RW(2) + 960); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(5, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d7f84); SET32(6, RW(0) + 3); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 72)));
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d7f9c);  rt_call(c, t); }
SET64(2, RD(2) << 48);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(2, RSD(2) >> 48);
SET32(6, RW(0) + 2);
SET32(5, RW(2) + 2);
SET64(31, 0x2d7fb8); SET64(7, RD(0) + RD(0)); JP_F_00314440(c);
SET64(2, (s32)rd32(c, (RW(17) + 76)));
c->f[12].u = RW(0);
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 648)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2d7fd4); SET32(4, RW(2) + 640); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x2d7fe8);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 88)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 1);
SET32(7, RW(0) + 127);
SET64(31, 0x2d8000); SET32(8, RW(0) + 64); JP_F_003185B0(c);
SET32(3, RW(0) + 514);
wr16(c, (RW(17) + 0), (u16)RW(3)); goto L_002D8230;
L_002D800C:;
SET64(31, 0x2d8014);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d8020); SET32(5, RW(0) + -1); JP_F_0013E200(c);
SET64(3, RD(2) & 0xffff);
SET64(3, RD(3) & 0x4000);
{ int t = RD(3) == RD(0);  if (t) goto L_002D8230; }
SET64(4, (s32)rd32(c, (RW(17) + 88)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 3);
SET32(7, RW(0) + 127);
SET64(31, 0x2d8048); SET32(8, RW(0) + 64); JP_F_003185B0(c);
SET64(3, RD(0) | 0xfe00);
wr16(c, (RW(17) + 0), (u16)RW(3)); goto L_002D8230;
L_002D8054:;
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 968)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2d8068); SET32(4, RW(2) + 960); rt_call(c, t); }
SET64(2, (s64)(s32)0x41f00000);
c->f[1].u = RW(2);
c->f[1].f = fpu_div(F(20), F(1));
c->f[20].f = fpu(F(0) - F(1));
c->f[0].u = RW(0);
c->fcc = F(20) <= F(0);
if (!c->fcc) { SET64(2, (s32)rd32(c, (RW(17) + 76))); goto L_002D80B8; }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
c->f[20].u = c->f[0].u;
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d80ac); SET32(6, RW(0) + 3); rt_call(c, t); }
SET32(2, RW(0) + 513);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 76)));
L_002D80B8:;
c->f[12].u = c->f[20].u;
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 968)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2d80d0); SET32(4, RW(2) + 960); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 76)));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->f[12].f = fpu(F(0) - F(20));
SET64(2, (s32)rd32(c, (RW(3) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 648)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2d80f8); SET32(4, RW(2) + 640); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x2d810c);  rt_call(c, t); }
 goto L_002D8230;
L_002D8114:;
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
c->f[13].u = RW(2);
SET64(31, 0x2d8130); SET32(5, RW(0) + 257); JP_F_00311B90(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 80)));
L_002D8140:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d814c); SET32(4, RW(2) + 16); JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D8230; }
SET64(3, RD(0) | 0xff00);
wr16(c, (RW(17) + 0), (u16)RW(3)); goto L_002D8230;
L_002D8160:;
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d8174);  rt_call(c, t); }
SET64(2, RD(2) << 48);
SET64(2, RSD(2) >> 48);
wr32(c, (RW(17) + 60), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x2d8194);  rt_call(c, t); }
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
L_002D81A0:;
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2d81b4);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D8230; }
SET64(4, (s32)rd32(c, (RW(17) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 68), RW(0)); goto L_002D81DC; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d81d8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 68), RW(0));
L_002D81DC:;
SET64(16, (s32)rd32(c, (RW(17) + 72)));
if (RD(16) == RD(0)) { wr32(c, (RW(17) + 72), RW(0)); goto L_002D81FC; }
SET64(31, 0x2d81f0); SET64(4, RD(16) + RD(0)); JP_F_003243E0(c);
SET64(31, 0x2d81f8); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
wr32(c, (RW(17) + 72), RW(0));
L_002D81FC:;
SET64(4, (s32)rd32(c, (RW(17) + 76)));
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002D821C; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x2d8218); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
L_002D821C:;
SET64(31, 0x2d8224); wr32(c, (RW(17) + 76), RW(0)); JP_F_00139AB0(c);
SET64(3, rd16(c, (RW(17) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 0), (u16)RW(3));
L_002D8230:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002D8234:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002D8250(Ctx *c) { /* func_002D8250 */
ENTER(0x2d8250);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002D82D0; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12992);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 8), RW(2)); if (t) goto L_002D82B8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 20496);
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2d8298);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002D82BC; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 20528);
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x2d82b8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_002D82B8:;
SET64(2, RD(16) << 48);
L_002D82BC:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002D82D4; }
SET64(31, 0x2d82d0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002D82D0:;
SET64(2, RD(17) + RD(0));
L_002D82D4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D82F0(Ctx *c) { /* func_002D82F0 */
ENTER(0x2d82f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(4) + 16), RW(5));
SET64(31, 0x2d8310); SET32(5, RW(0) + 1); JP_F_003265B0(c);
SET64(31, 0x2d8318); SET32(4, RW(0) + 1807); JP_F_00361C30(c);
SET64(5, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2d832c); SET64(7, RD(0) + RD(0)); JP_F_00326400(c);
SET64(31, 0x2d8334); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D8344; }
SET64(31, 0x2d8344); SET64(4, RD(16) + RD(0)); JP_F_00315140(c);
L_002D8344:;
wr32(c, (RW(17) + 24), RW(16));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D8360(Ctx *c) { /* func_002D8360 */
ENTER(0x2d8360);
SET32(29, RW(29) + -64);
SET64(3, (s64)(s32)0x530000);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = rd32(c, (RW(3) + -22384));
SET64(5, rd16(c, (RW(4) + 0)));
SET64(3, RD(0) | 0xff01);
{ int t = RD(5) == RD(3); SET64(17, RD(4) + RD(0)); if (t) goto L_002D8C44; }
SET64(3, RD(0) | 0xff00);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 72))); goto L_002D8BFC; }
SET64(3, RD(0) | 0xfe01);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 88))); goto L_002D8BDC; }
SET64(3, RD(0) | 0xfe00);
if (RD(5) == RD(3)) { SET64(3, (s32)rd32(c, (RW(17) + 88))); goto L_002D8BB0; }
SET32(3, RW(0) + 514);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 76))); goto L_002D8ABC; }
SET32(3, RW(0) + 513);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 72))); goto L_002D87C4; }
SET32(3, RW(0) + 512);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 72))); goto L_002D85D0; }
SET32(4, RW(0) + 1);
if (RD(5) == RD(4)) { SET64(4, (s32)rd32(c, (RW(17) + 68))); goto L_002D844C; }
{ int t = RD(5) == RD(0);  if (t) goto L_002D83F4; }
SET64(4, (s32)rd32(c, (RW(17) + 80))); goto L_002D8CF8;
L_002D83F4:;
SET64(31, 0x2d83fc);  JP_F_00138B20(c);
SET64(31, 0x2d8404); SET32(4, RW(0) + 28); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D8420; }
SET64(31, 0x2d8414); SET64(4, RD(16) + RD(0)); JP_F_00325FE0(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13104);
wr32(c, (RW(16) + 8), RW(2));
L_002D8420:;
wr32(c, (RW(17) + 68), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(2, (s32)rd32(c, (RW(17) + 88)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
SET64(5, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d843c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 68)));
L_002D844C:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d845c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D8CF4; }
SET64(31, 0x2d846c); SET32(4, RW(0) + 32); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 72), RW(2)); goto L_002D8480; }
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(17) + 72), RW(2));
L_002D8480:;
SET64(4, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 88)));
SET32(5, RW(0) + 70);
SET32(7, RW(0) + 15);
SET64(8, RD(0) + RD(0));
SET64(6, (s32)rd32(c, (RW(2) + 32)));
SET64(31, 0x2d84a0); SET32(9, RW(0) + 1); JP_F_00324430(c);
SET64(5, (s32)rd32(c, (RW(17) + 64)));
SET64(31, 0x2d84ac); SET64(4, (s32)rd32(c, (RW(17) + 72))); JP_F_00323FD0(c);
SET64(31, 0x2d84b4); SET32(4, RW(0) + 128); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D84C4; }
SET64(31, 0x2d84c4); SET64(4, RD(16) + RD(0)); JP_F_00315F90(c);
L_002D84C4:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d84d0); wr32(c, (RW(17) + 80), RW(16)); JP_F_00315E90(c);
SET64(2, (s32)rd32(c, (RW(17) + 88)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2d84e0); SET64(4, (s32)rd32(c, (RW(2) + 4))); JP_F_00326830(c);
SET64(4, (s32)rd32(c, (RW(17) + 80)));
SET64(5, RD(2) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2d84f4); SET32(7, RW(0) + 1); JP_F_00315BA0(c);
SET64(3, (s64)(s32)0x44000000);
SET64(2, (s64)(s32)0x42100000);
c->f[12].u = RW(3);
c->f[13].u = RW(2);
SET64(31, 0x2d850c); SET64(4, (s32)rd32(c, (RW(17) + 80))); JP_F_00315960(c);
SET64(2, (s64)(s32)0x43b80000);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
SET64(31, 0x2d8520); SET64(4, (s32)rd32(c, (RW(17) + 80))); JP_F_003159D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 80)));
SET64(5, (s64)(s32)0x540000);
SET64(31, 0x2d8530); SET32(5, RW(5) + 2656); JP_F_00315860(c);
SET64(2, (s64)(s32)0x47c30000);
SET64(2, RD(2) | 0x5000);
c->f[12].u = RW(2);
SET64(31, 0x2d8544); SET64(4, (s32)rd32(c, (RW(17) + 80))); JP_F_003157F0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2d8554); SET64(4, (s32)rd32(c, (RW(17) + 80))); JP_F_00315740(c);
SET64(31, 0x2d855c); SET64(4, (s32)rd32(c, (RW(17) + 80))); JP_F_003156F0(c);
SET64(5, (s32)rd32(c, (RW(17) + 84)));
SET64(31, 0x2d8568); SET64(4, (s32)rd32(c, (RW(17) + 80))); JP_F_00315D50(c);
SET64(4, (s32)rd32(c, (RW(17) + 80)));
SET64(31, 0x2d8574); SET32(5, RW(0) + 1); JP_F_00315690(c);
SET64(31, 0x2d857c); SET32(4, RW(0) + 160); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D858C; }
SET64(31, 0x2d858c); SET64(4, RD(16) + RD(0)); JP_F_00314D20(c);
L_002D858C:;
wr32(c, (RW(17) + 76), RW(16));
SET64(2, (s64)(s32)0x47af0000);
SET64(3, (s32)rd32(c, (RW(17) + 68)));
SET64(2, RD(2) | 0xc800);
c->f[12].u = RW(2);
SET64(6, (s64)(s32)0x410000);
SET64(7, (s64)(s32)0x420000);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
SET32(6, RW(6) + 31248);
SET32(7, RW(7) + -32240);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2d85c4); SET32(8, RW(0) + -1); JP_F_00314BA0(c);
SET32(3, RW(0) + 512);
wr16(c, (RW(17) + 0), (u16)RW(3)); goto L_002D8CF4;
L_002D85D0:;
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d85e4);  rt_call(c, t); }
SET64(16, RD(2) << 48);
SET64(4, (s32)rd32(c, (RW(17) + 72)));
SET64(16, RSD(16) >> 48);
SET64(31, 0x2d85f8); SET64(5, RD(16) + RD(0)); JP_F_00323F40(c);
if (RD(16) != RD(2)) { SET64(4, (s32)rd32(c, (RW(17) + 72))); goto L_002D861C; }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d8618); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 72)));
L_002D861C:;
SET64(31, 0x2d8624); SET64(5, RD(16) + RD(0)); JP_F_00323E80(c);
if (RD(16) != RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 72))); goto L_002D8648; }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d8644); SET64(6, RD(5) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 72)));
L_002D8648:;
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d865c);  rt_call(c, t); }
SET64(2, RD(2) << 48);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(2, RSD(2) >> 48);
SET32(6, RW(0) + 2);
SET32(5, RW(2) + 2);
SET64(31, 0x2d8678); SET64(7, RD(0) + RD(0)); JP_F_00314440(c);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(31, 0x2d8684); SET32(5, RW(0) + 2); JP_F_00314200(c);
SET64(2, (s32)rd32(c, (RW(17) + 76)));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET32(4, RW(2) + 640);
SET64(2, (s32)rd32(c, (RW(2) + 828)));
SET64(2, rd16(c, (RW(2) + 52)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002D86AC; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002D86C4;
L_002D86AC:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002D86C4:;
SET64(2, (s64)(s32)0x3f400000);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
c->f[0].u = RW(2);
c->f[21].f = fpu(F(0) * F(1));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x2d86e4); c->f[12].u = c->f[21].u; rt_call(c, t); }
SET64(2, (s64)(s32)0x3f000000);
SET64(3, (s32)rd32(c, (RW(17) + 76)));
c->f[2].u = RW(2);
SET64(2, (s64)(s32)0x43800000);
c->f[1].u = RW(2);
SET64(2, (s32)rd32(c, (RW(3) + 144)));
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[12].f = fpu(c->facc - F(2) * F(21));
SET64(25, (s32)rd32(c, (RW(2) + 648)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x2d871c); SET32(4, RW(2) + 640); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(17) + 84)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 76))); goto L_002D8730; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
L_002D8730:;
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2d8740);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x2d8754);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 80)));
SET64(31, 0x2d8760); SET64(5, RD(0) + RD(0)); JP_F_00315690(c);
SET64(3, (s32)rd32(c, (RW(17) + 88)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
c->f[13].u = RW(2);
SET64(31, 0x2d8780); SET32(5, RW(0) + 256); JP_F_00311B90(c);
SET64(2, (s32)rd32(c, (RW(17) + 72)));
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d8798);  rt_call(c, t); }
SET64(2, RD(2) << 48);
SET64(4, (s32)rd32(c, (RW(17) + 80)));
SET64(2, RSD(2) >> 48);
SET64(31, 0x2d87ac); SET32(5, RW(2) + 5); JP_F_00315B50(c);
SET64(31, 0x2d87b4); SET64(4, (s32)rd32(c, (RW(17) + 80))); JP_F_003156F0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 72)));
L_002D87C4:;
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d87d8);  rt_call(c, t); }
SET64(16, RD(2) << 48);
SET64(2, (s64)(s32)0x540000);
SET64(16, RSD(16) >> 48);
SET32(2, RW(2) + 2798);
SET32(3, RW(2) + RW(16));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfb);
SET64(31, 0x2d87fc); wr8(c, (RW(3) + 0), (u8)RW(2)); JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d8808); SET32(5, RW(0) + -1); JP_F_0013E1A0(c);
SET64(3, RD(2) & 0xffff);
SET32(2, RW(0) + -161);
SET64(3, RD(3) & RD(2));
SET64(2, RD(3) & 0x400);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002D8824; }
SET32(2, RW(0) + 128);
L_002D8824:;
SET64(3, RD(3) | RD(2));
SET64(2, RD(3) & 0x800);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002D8838; }
SET32(2, RW(0) + 32);
L_002D8838:;
SET64(4, (s32)rd32(c, (RW(17) + 72)));
SET64(2, RD(3) | RD(2));
SET64(31, 0x2d8848); SET64(5, RD(2) & 0xffff); JP_F_00324280(c);
SET64(2, (s32)rd32(c, (RW(17) + 72)));
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d8860);  rt_call(c, t); }
SET64(2, RD(2) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(16) == RD(2);  if (t) goto L_002D8A74; }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET32(5, RW(16) + 2);
SET32(6, RW(0) + 3);
SET64(31, 0x2d8884); SET64(7, RD(0) + RD(0)); JP_F_00314440(c);
SET64(2, (s32)rd32(c, (RW(17) + 76)));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET32(4, RW(2) + 960);
SET64(2, (s32)rd32(c, (RW(2) + 1148)));
SET64(2, rd16(c, (RW(2) + 52)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002D88AC; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002D88C4;
L_002D88AC:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002D88C4:;
SET64(2, (s64)(s32)0x3f400000);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
c->f[0].u = RW(2);
c->f[21].f = fpu(F(0) * F(1));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x2d88e4); c->f[12].u = c->f[21].u; rt_call(c, t); }
SET64(2, (s64)(s32)0x3f000000);
SET64(3, (s32)rd32(c, (RW(17) + 76)));
c->f[2].u = RW(2);
SET64(2, (s64)(s32)0x43800000);
c->f[1].u = RW(2);
SET64(2, (s32)rd32(c, (RW(3) + 144)));
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[12].f = fpu(c->facc - F(2) * F(21));
SET64(25, (s32)rd32(c, (RW(2) + 968)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x2d891c); SET32(4, RW(2) + 960); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 76)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(2, (s32)rd32(c, (RW(3) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 968)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2d893c); SET32(4, RW(2) + 960); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(5, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d8954); SET32(6, RW(0) + 3); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 72)));
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d896c);  rt_call(c, t); }
SET64(2, RD(2) << 48);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(2, RSD(2) >> 48);
SET32(6, RW(0) + 2);
SET32(5, RW(2) + 2);
SET64(31, 0x2d8988); SET64(7, RD(0) + RD(0)); JP_F_00314440(c);
SET64(2, (s32)rd32(c, (RW(17) + 76)));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET32(4, RW(2) + 640);
SET64(2, (s32)rd32(c, (RW(2) + 828)));
SET64(2, rd16(c, (RW(2) + 52)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002D89B0; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002D89C8;
L_002D89B0:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002D89C8:;
SET64(2, (s64)(s32)0x3f400000);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
c->f[0].u = RW(2);
c->f[21].f = fpu(F(0) * F(1));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x2d89e8); c->f[12].u = c->f[21].u; rt_call(c, t); }
SET64(2, (s64)(s32)0x3f000000);
SET64(3, (s32)rd32(c, (RW(17) + 76)));
c->f[2].u = RW(2);
SET64(2, (s64)(s32)0x43800000);
c->f[1].u = RW(2);
SET64(2, (s32)rd32(c, (RW(3) + 144)));
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[12].f = fpu(c->facc - F(2) * F(21));
SET64(25, (s32)rd32(c, (RW(2) + 648)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x2d8a20); SET32(4, RW(2) + 640); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 76)));
c->f[12].u = RW(0);
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 648)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2d8a3c); SET32(4, RW(2) + 640); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x2d8a50);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 92)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 1);
SET32(7, RW(0) + 127);
SET64(31, 0x2d8a68); SET32(8, RW(0) + 64); JP_F_003185B0(c);
SET32(3, RW(0) + 514);
wr16(c, (RW(17) + 0), (u16)RW(3)); goto L_002D8CF4;
L_002D8A74:;
SET64(31, 0x2d8a7c);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d8a88); SET32(5, RW(0) + -1); JP_F_0013E200(c);
SET64(3, RD(2) & 0xffff);
SET64(3, RD(3) & 0x4000);
{ int t = RD(3) == RD(0);  if (t) goto L_002D8CF4; }
SET64(4, (s32)rd32(c, (RW(17) + 92)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 3);
SET32(7, RW(0) + 127);
SET64(31, 0x2d8ab0); SET32(8, RW(0) + 64); JP_F_003185B0(c);
SET64(3, RD(0) | 0xfe00);
wr16(c, (RW(17) + 0), (u16)RW(3)); goto L_002D8CF4;
L_002D8ABC:;
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 968)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2d8ad0); SET32(4, RW(2) + 960); rt_call(c, t); }
SET64(2, (s64)(s32)0x41f00000);
c->f[1].u = RW(2);
c->f[1].f = fpu_div(F(20), F(1));
c->f[21].f = fpu(F(0) - F(1));
c->f[0].u = RW(0);
c->fcc = F(21) <= F(0);
if (!c->fcc) { SET64(2, (s32)rd32(c, (RW(17) + 76))); goto L_002D8B54; }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
c->f[21].u = c->f[0].u;
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d8b14); SET32(6, RW(0) + 3); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 72)));
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d8b2c);  rt_call(c, t); }
SET64(2, RD(2) << 48);
SET64(4, (s32)rd32(c, (RW(17) + 80)));
SET64(2, RSD(2) >> 48);
SET64(31, 0x2d8b40); SET32(5, RW(2) + 5); JP_F_00315B50(c);
SET64(31, 0x2d8b48); SET64(4, (s32)rd32(c, (RW(17) + 80))); JP_F_003156F0(c);
SET32(2, RW(0) + 513);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 76)));
L_002D8B54:;
c->f[12].u = c->f[21].u;
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 968)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2d8b6c); SET32(4, RW(2) + 960); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 76)));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->f[12].f = fpu(F(0) - F(21));
SET64(2, (s32)rd32(c, (RW(3) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 648)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2d8b94); SET32(4, RW(2) + 640); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x2d8ba8);  rt_call(c, t); }
 goto L_002D8CF4;
L_002D8BB0:;
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
c->f[13].u = RW(2);
SET64(31, 0x2d8bcc); SET32(5, RW(0) + 257); JP_F_00311B90(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 88)));
L_002D8BDC:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d8be8); SET32(4, RW(2) + 16); JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D8CF4; }
SET64(3, RD(0) | 0xff00);
wr16(c, (RW(17) + 0), (u16)RW(3)); goto L_002D8CF4;
L_002D8BFC:;
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d8c10);  rt_call(c, t); }
SET64(2, RD(2) << 48);
SET64(2, RSD(2) >> 48);
wr32(c, (RW(17) + 60), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x2d8c30);  rt_call(c, t); }
SET64(31, 0x2d8c38); SET64(4, (s32)rd32(c, (RW(17) + 80))); JP_F_00315CF0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
L_002D8C44:;
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2d8c58);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D8CF4; }
SET64(31, 0x2d8c68); SET64(4, (s32)rd32(c, (RW(17) + 80))); JP_F_00315E10(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D8CF4; }
SET64(4, (s32)rd32(c, (RW(17) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 68), RW(0)); goto L_002D8C90; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d8c8c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 68), RW(0));
L_002D8C90:;
SET64(16, (s32)rd32(c, (RW(17) + 72)));
if (RD(16) == RD(0)) { wr32(c, (RW(17) + 72), RW(0)); goto L_002D8CB0; }
SET64(31, 0x2d8ca4); SET64(4, RD(16) + RD(0)); JP_F_003243E0(c);
SET64(31, 0x2d8cac); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
wr32(c, (RW(17) + 72), RW(0));
L_002D8CB0:;
SET64(4, (s32)rd32(c, (RW(17) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 76), RW(0)); goto L_002D8CD0; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x2d8ccc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 76), RW(0));
L_002D8CD0:;
SET64(4, (s32)rd32(c, (RW(17) + 80)));
SET64(31, 0x2d8cdc); SET32(5, RW(0) + 1); JP_F_00315F00(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2d8ce8); wr32(c, (RW(17) + 80), RW(0)); JP_F_00139AB0(c);
SET64(3, rd16(c, (RW(17) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 0), (u16)RW(3));
L_002D8CF4:;
SET64(4, (s32)rd32(c, (RW(17) + 80)));
L_002D8CF8:;
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002D8D0C; }
SET64(31, 0x2d8d08); c->f[12].u = c->f[20].u; JP_F_00315DD0(c);
SET64(31, rd64(c, (RW(29) + 48)));
L_002D8D0C:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002D8D30(Ctx *c) { /* func_002D8D30 */
ENTER(0x2d8d30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002D8DB0; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13104);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 8), RW(2)); if (t) goto L_002D8D98; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 20496);
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2d8d78);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002D8D9C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 20528);
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x2d8d98); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_002D8D98:;
SET64(2, RD(16) << 48);
L_002D8D9C:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002D8DB4; }
SET64(31, 0x2d8db0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002D8DB0:;
SET64(2, RD(17) + RD(0));
L_002D8DB4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D8DD0(Ctx *c) { /* func_002D8DD0 */
ENTER(0x2d8dd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(4) + 16), RW(5));
SET64(31, 0x2d8df0); SET32(5, RW(0) + 1); JP_F_003265B0(c);
SET64(31, 0x2d8df8); SET32(4, RW(0) + 1802); JP_F_00361C30(c);
SET64(5, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2d8e0c); SET64(7, RD(0) + RD(0)); JP_F_00326400(c);
SET64(31, 0x2d8e14); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D8E24; }
SET64(31, 0x2d8e24); SET64(4, RD(16) + RD(0)); JP_F_00315140(c);
L_002D8E24:;
wr32(c, (RW(17) + 24), RW(16));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D8E40(Ctx *c) { /* func_002D8E40 */
ENTER(0x2d8e40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002D8EA0; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12640);
SET32(3, RW(3) + 12648);
wr32(c, (RW(17) + 56), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 12660);
SET64(31, 0x2d8e88); wr32(c, (RW(17) + 36), RW(2)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002D8EA4; }
SET64(31, 0x2d8ea0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002D8EA0:;
SET64(2, RD(17) + RD(0));
L_002D8EA4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D8EC0(Ctx *c) { /* func_002D8EC0 */
ENTER(0x2d8ec0);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28368); return;
}

void JP_F_002D8ED0(Ctx *c) { /* func_002D8ED0 */
ENTER(0x2d8ed0);
 return;
}

void JP_F_002D8EE0(Ctx *c) { /* func_002D8EE0 */
ENTER(0x2d8ee0);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28376); return;
}

void JP_F_002D8EF0(Ctx *c) { /* func_002D8EF0 */
ENTER(0x2d8ef0);
 return;
}

void JP_F_002D8F00(Ctx *c) { /* func_002D8F00 */
ENTER(0x2d8f00);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_002D8FDC; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12720);
SET64(5, (s64)(s32)0x180000);
wr32(c, (RW(16) + 56), RW(2));
SET32(3, RW(3) + 12728);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 12740);
wr32(c, (RW(16) + 36), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 76)));
SET64(31, 0x2d8f54); SET32(5, RW(5) + -30768); JP_F_001022C0(c);
wr32(c, (RW(16) + 76), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 68), RW(0)); goto L_002D8F78; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d8f74); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 68), RW(0));
L_002D8F78:;
SET64(17, (s32)rd32(c, (RW(16) + 72)));
if (RD(17) == RD(0)) { wr32(c, (RW(16) + 72), RW(0)); goto L_002D8F98; }
SET64(31, 0x2d8f8c); SET64(4, RD(17) + RD(0)); JP_F_003243E0(c);
SET64(31, 0x2d8f94); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
wr32(c, (RW(16) + 72), RW(0));
L_002D8F98:;
SET64(4, (s32)rd32(c, (RW(16) + 80)));
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002D8FB8; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d8fb4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_002D8FB8:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x2d8fc4); wr32(c, (RW(16) + 80), RW(0)); JP_F_00139F30(c);
SET64(2, RD(18) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(16) + RD(0)); goto L_002D8FE0; }
SET64(31, 0x2d8fdc); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_002D8FDC:;
SET64(2, RD(16) + RD(0));
L_002D8FE0:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002D9000(Ctx *c) { /* func_002D9000 */
ENTER(0x2d9000);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28384); return;
}

void JP_F_002D9010(Ctx *c) { /* func_002D9010 */
ENTER(0x2d9010);
 return;
}

void JP_F_002D9020(Ctx *c) { /* func_002D9020 */
ENTER(0x2d9020);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28392); return;
}

void JP_F_002D9030(Ctx *c) { /* func_002D9030 */
ENTER(0x2d9030);
 return;
}

void JP_F_002D9040(Ctx *c) { /* func_002D9040 */
ENTER(0x2d9040);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_002D9108; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12912);
SET32(3, RW(3) + 12920);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 12932);
wr32(c, (RW(16) + 36), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 68), RW(0)); goto L_002D90A4; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d90a0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 68), RW(0));
L_002D90A4:;
SET64(17, (s32)rd32(c, (RW(16) + 72)));
if (RD(17) == RD(0)) { wr32(c, (RW(16) + 72), RW(0)); goto L_002D90C4; }
SET64(31, 0x2d90b8); SET64(4, RD(17) + RD(0)); JP_F_003243E0(c);
SET64(31, 0x2d90c0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
wr32(c, (RW(16) + 72), RW(0));
L_002D90C4:;
SET64(4, (s32)rd32(c, (RW(16) + 76)));
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002D90E4; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x2d90e0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_002D90E4:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x2d90f0); wr32(c, (RW(16) + 76), RW(0)); JP_F_00139F30(c);
SET64(2, RD(18) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(16) + RD(0)); goto L_002D910C; }
SET64(31, 0x2d9108); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_002D9108:;
SET64(2, RD(16) + RD(0));
L_002D910C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002D9130(Ctx *c) { /* func_002D9130 */
ENTER(0x2d9130);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28400); return;
}

void JP_F_002D9140(Ctx *c) { /* func_002D9140 */
ENTER(0x2d9140);
 return;
}

void JP_F_002D9150(Ctx *c) { /* func_002D9150 */
ENTER(0x2d9150);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_002D9228; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13024);
SET32(3, RW(3) + 13032);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 13044);
wr32(c, (RW(16) + 36), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 68), RW(0)); goto L_002D91B4; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d91b0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 68), RW(0));
L_002D91B4:;
SET64(17, (s32)rd32(c, (RW(16) + 72)));
if (RD(17) == RD(0)) { wr32(c, (RW(16) + 72), RW(0)); goto L_002D91D4; }
SET64(31, 0x2d91c8); SET64(4, RD(17) + RD(0)); JP_F_003243E0(c);
SET64(31, 0x2d91d0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
wr32(c, (RW(16) + 72), RW(0));
L_002D91D4:;
SET64(4, (s32)rd32(c, (RW(16) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 76), RW(0)); goto L_002D91F4; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x2d91f0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 76), RW(0));
L_002D91F4:;
SET64(4, (s32)rd32(c, (RW(16) + 80)));
SET64(31, 0x2d9200); SET32(5, RW(0) + 1); JP_F_00315F00(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2d9210); wr32(c, (RW(16) + 80), RW(0)); JP_F_00139F30(c);
SET64(2, RD(18) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(16) + RD(0)); goto L_002D922C; }
SET64(31, 0x2d9228); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_002D9228:;
SET64(2, RD(16) + RD(0));
L_002D922C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002D9250(Ctx *c) { /* func_002D9250 */
ENTER(0x2d9250);
SET32(4, RW(4) + -4); { JP_F_002D9150(c); return; }
}

void JP_F_002D9260(Ctx *c) { /* func_002D9260 */
ENTER(0x2d9260);
SET32(4, RW(4) + -24); { JP_F_002D9150(c); return; }
}

void JP_F_002D9270(Ctx *c) { /* func_002D9270 */
ENTER(0x2d9270);
SET32(4, RW(4) + -4); { JP_F_002D9040(c); return; }
}

void JP_F_002D9280(Ctx *c) { /* func_002D9280 */
ENTER(0x2d9280);
SET32(4, RW(4) + -24); { JP_F_002D9040(c); return; }
}

void JP_F_002D9290(Ctx *c) { /* func_002D9290 */
ENTER(0x2d9290);
SET32(4, RW(4) + -4); { JP_F_002D6DD0(c); return; }
}

void JP_F_002D92A0(Ctx *c) { /* func_002D92A0 */
ENTER(0x2d92a0);
SET32(4, RW(4) + -24); { JP_F_002D6DD0(c); return; }
}

void JP_F_002D92B0(Ctx *c) { /* func_002D92B0 */
ENTER(0x2d92b0);
SET32(4, RW(4) + -4); { JP_F_002D8F00(c); return; }
}

void JP_F_002D92C0(Ctx *c) { /* func_002D92C0 */
ENTER(0x2d92c0);
SET32(4, RW(4) + -24); { JP_F_002D8F00(c); return; }
}

void JP_F_002D92D0(Ctx *c) { /* func_002D92D0 */
ENTER(0x2d92d0);
SET32(4, RW(4) + -4); { JP_F_002D8E40(c); return; }
}

void JP_F_002D92E0(Ctx *c) { /* func_002D92E0 */
ENTER(0x2d92e0);
SET32(4, RW(4) + -24); { JP_F_002D8E40(c); return; }
}

void JP_F_002D92F0(Ctx *c) { /* func_002D92F0 */
ENTER(0x2d92f0);
SET32(4, RW(4) + -4); { JP_F_002D2640(c); return; }
}

void JP_F_002D9300(Ctx *c) { /* func_002D9300 */
ENTER(0x2d9300);
SET32(4, RW(4) + -24); { JP_F_002D2640(c); return; }
}

void JP_F_002D9310(Ctx *c) { /* func_002D9310 */
ENTER(0x2d9310);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, rd16(c, (RW(4) + 1278)));
SET32(4, RW(0) + 113);
if (RD(3) == RD(4)) { SET64(4, (s32)rd32(c, (RW(17) + 1252))); goto L_002DA2E8; }
SET32(5, RW(0) + 112);
if (RD(3) == RD(5)) { SET64(3, rd8(c, (RW(17) + 1292))); goto L_002DA29C; }
SET32(4, RW(0) + 104);
if (RD(3) == RD(4)) { SET64(4, (s32)rd32(c, (RW(17) + 1296))); goto L_002DA264; }
SET32(4, RW(0) + 103);
if (RD(3) == RD(4)) { SET64(4, (s32)rd32(c, (RW(17) + 1252))); goto L_002DA198; }
SET32(4, RW(0) + 102);
if (RD(3) == RD(4)) { SET64(4, (s32)rd32(c, (RW(17) + 1252))); goto L_002DA12C; }
SET32(4, RW(0) + 101);
{ int t = RD(3) == RD(4);  if (t) goto L_002DA0C8; }
SET32(4, RW(0) + 100);
if (RD(3) == RD(4)) { SET32(4, RW(17) + 60); goto L_002DA004; }
SET32(4, RW(0) + 99);
if (RD(3) == RD(4)) { SET64(4, RD(0) + RD(0)); goto L_002D9FD8; }
SET32(4, RW(0) + 98);
if (RD(3) == RD(4)) { SET32(4, RW(17) + 60); goto L_002D9FA0; }
SET32(4, RW(0) + 97);
if (RD(3) == RD(4)) { SET32(4, RW(17) + 60); goto L_002D9F80; }
SET32(6, RW(0) + 96);
if (RD(3) == RD(6)) { wr16(c, (RW(17) + 1278), (u16)RW(5)); goto L_002D9F6C; }
SET32(4, RW(0) + 129);
if (RD(3) == RD(4)) { SET64(4, (s32)rd32(c, (RW(17) + 1248))); goto L_002D9EE0; }
SET32(4, RW(0) + 128);
if (RD(3) == RD(4)) { SET64(3, rd16(c, (RW(17) + 1284))); goto L_002D9E94; }
SET32(4, RW(0) + 81);
if (RD(3) == RD(4)) { SET64(4, (s32)rd32(c, (RW(17) + 1248))); goto L_002D9E08; }
SET32(4, RW(0) + 80);
if (RD(3) == RD(4)) { SET64(2, rd16(c, (RW(17) + 1284))); goto L_002D9DC0; }
SET32(4, RW(0) + 66);
if (RD(3) == RD(4)) { SET32(4, RW(17) + 60); goto L_002D9ABC; }
SET32(4, RW(0) + 65);
if (RD(3) == RD(4)) { SET32(4, RW(0) + 1); goto L_002D9A24; }
SET32(4, RW(0) + 64);
if (RD(3) == RD(4)) { wr16(c, (RW(17) + 1288), (u16)RW(0)); goto L_002D9A14; }
SET32(4, RW(0) + 49);
if (RD(3) == RD(4)) { SET32(4, RW(17) + 60); goto L_002D985C; }
SET32(4, RW(0) + 48);
if (RD(3) == RD(4)) { SET32(4, RW(0) + 1); goto L_002D9830; }
SET32(4, RW(0) + 33);
if (RD(3) == RD(4)) { SET32(4, RW(17) + 60); goto L_002D970C; }
SET32(4, RW(0) + 32);
if (RD(3) == RD(4)) { c->f[1].u = rd32(c, (RW(17) + 1268)); goto L_002D96D8; }
SET32(5, RW(0) + 18);
if (RD(3) == RD(5)) { SET64(4, (s32)rd32(c, (RW(17) + 1248))); goto L_002D9668; }
SET32(4, RW(0) + 17);
if (RD(3) == RD(4)) { SET64(4, (s32)rd32(c, (RW(17) + 1248))); goto L_002D95D8; }
SET32(4, RW(0) + 16);
if (RD(3) == RD(4)) { SET64(4, rd16(c, (RW(17) + 1276))); goto L_002D952C; }
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 1252))); goto L_002D9464; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_002DA318;
L_002D9464:;
SET64(3, rd8(c, (RW(3) + 504)));
SET64(3, RD(3) & 0x1);
SET64(3, RD(0) < RD(3));
{ int t = RD(3) == RD(0);  if (t) goto L_002DA314; }
SET64(31, 0x2d9480);  JP_F_00139590(c);
SET64(31, 0x2d9488);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 127);
SET64(31, 0x2d949c); SET32(7, RW(0) + 64); JP_F_001B7420(c);
SET64(4, rd16(c, (RW(17) + 1284)));
SET32(3, RW(0) + 13);
if (RD(4) != RD(3)) { wr8(c, (RW(17) + 1294), (u8)RW(0)); goto L_002D950C; }
SET64(3, rd16(c, (RW(17) + 1276)));
SET32(6, RW(0) + 1);
{ int t = RD(3) != RD(6);  if (t) goto L_002D9508; }
SET32(3, RW(0) + 23);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1272))); goto L_002D94EC; }
SET64(2, (s64)(s32)0x4c0000);
SET64(5, rd16(c, (RW(2) + -28258)));
SET64(31, 0x2d94d8); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_00144C60(c);
SET64(31, 0x2d94e0); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 23);
wr16(c, (RW(17) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(17) + 1272)));
L_002D94EC:;
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31124)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DA314;
L_002D9508:;
wr8(c, (RW(17) + 1294), (u8)RW(0));
L_002D950C:;
SET64(3, rd8(c, (RW(17) + 1293)));
if (RD(3) == RD(0)) { SET32(3, RW(0) + 16); goto L_002D9524; }
SET32(3, RW(0) + 96);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9524:;
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D952C:;
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { wr16(c, (RW(17) + 1278), (u16)RW(6)); goto L_002DA314; }
SET32(6, RW(0) + 1);
if (RD(4) == RD(6)) { SET64(3, rd16(c, (RW(17) + 1284))); goto L_002D9594; }
if (RD(4) == RD(0)) { SET64(2, rd16(c, (RW(17) + 1284))); goto L_002D9554; }
 goto L_002DA314;
L_002D9554:;
if (RD(2) == RD(5)) { SET64(4, RD(17) + RD(0)); goto L_002D9580; }
SET64(2, (s64)(s32)0x4c0000);
SET64(5, rd16(c, (RW(2) + -28268)));
SET64(31, 0x2d956c); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_00144C60(c);
SET64(31, 0x2d9574); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 18);
wr16(c, (RW(17) + 1284), (u16)RW(2));
SET64(4, RD(17) + RD(0));
L_002D9580:;
SET64(31, 0x2d9588); SET32(5, RW(0) + 1); JP_F_002DCDC0(c);
SET32(3, RW(0) + 17);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9594:;
SET32(2, RW(0) + 21);
if (RD(3) == RD(2)) { SET64(4, RD(17) + RD(0)); goto L_002D95C4; }
SET64(2, (s64)(s32)0x4c0000);
SET64(5, rd16(c, (RW(2) + -28262)));
SET64(31, 0x2d95b0); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_00144C60(c);
SET64(31, 0x2d95b8); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 21);
wr16(c, (RW(17) + 1284), (u16)RW(2));
SET64(4, RD(17) + RD(0));
L_002D95C4:;
SET64(31, 0x2d95cc); SET32(5, RW(0) + 1); JP_F_002DCDC0(c);
SET32(3, RW(0) + 18);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D95D8:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d95e8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002DA314; }
SET64(4, (s32)rd32(c, (RW(17) + 1248)));
{ int t = RD(4) == RD(0); SET64(16, (s16)rd16(c, (RW(4) + 184))); if (t) goto L_002D960C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d960c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002D960C:;
SET64(3, RD(16) << 48);
SET64(3, RSD(3) >> 48);
{ int t = RD(3) == RD(0); wr32(c, (RW(17) + 1248), RW(0)); if (t) goto L_002D965C; }
SET64(3, rd16(c, (RW(17) + 1284)));
if (RD(3) == RD(0)) { SET32(3, RW(0) + 32); goto L_002D9654; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28304)));
SET64(31, 0x2d963c); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2d9644); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
wr16(c, (RW(17) + 1284), (u16)RW(0));
SET64(3, (s64)(s32)0x42f00000);
wr32(c, (RW(17) + 1268), RW(3));
SET32(3, RW(0) + 32);
L_002D9654:;
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D965C:;
SET32(3, RW(0) + 96);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9668:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d9678);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002DA314; }
SET64(4, (s32)rd32(c, (RW(17) + 1248)));
{ int t = RD(4) == RD(0); SET64(16, (s16)rd16(c, (RW(4) + 184))); if (t) goto L_002D969C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d969c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002D969C:;
SET64(3, RD(16) << 48);
SET64(3, RSD(3) >> 48);
{ int t = RD(3) != RD(0); wr32(c, (RW(17) + 1248), RW(0)); if (t) goto L_002D96B8; }
SET32(3, RW(0) + 96);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D96B8:;
SET64(3, rd16(c, (RW(17) + 1272)));
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(17) + 1276)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DA314;
L_002D96D8:;
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc;  if (t) goto L_002DA314; }
SET64(31, 0x2d96f4); SET32(4, RW(17) + 60); JP_F_002E1580(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DA314; }
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D970C:;
SET64(31, 0x2d9714);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DA314; }
SET64(4, (s32)rd32(c, (RW(17) + 1196)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 1200))); goto L_002D9738; }
SET32(3, RW(0) + 48);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9738:;
SET32(3, RW(0) + 11);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(17) + 1284))); goto L_002D97F4; }
SET32(3, RW(0) + 10);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1284))); goto L_002D9794; }
SET32(3, RW(0) + 6);
if (RD(4) == RD(3)) { SET32(3, RW(0) + 80); goto L_002D978C; }
SET32(3, RW(0) + 24);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1272))); goto L_002D9770; }
 goto L_002D97F0;
L_002D9770:;
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31120)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DA314;
L_002D978C:;
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9794:;
SET64(16, RD(4) & 0xffff);
if (RD(3) == RD(16)) { wr16(c, (RW(17) + 1278), (u16)RW(0)); goto L_002DA314; }
SET64(2, (s64)(s32)0x4c0000);
SET32(3, RW(16) << 1);
SET32(2, RW(2) + -28304);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x2d97c0); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2d97c8); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
{ int t = RD(16) == RD(0); wr16(c, (RW(17) + 1284), (u16)RW(16)); if (t) goto L_002D97DC; }
SET32(3, RW(0) + 4);
{ int t = RD(16) != RD(3);  if (t) goto L_002D97E4; }
L_002D97DC:;
SET64(3, (s64)(s32)0x42f00000);
wr32(c, (RW(17) + 1268), RW(3));
L_002D97E4:;
wr16(c, (RW(17) + 1278), (u16)RW(0));
 goto L_002DA314;
L_002D97F0:;
SET64(4, rd16(c, (RW(17) + 1284)));
L_002D97F4:;
SET32(3, RW(0) + 12);
if (RD(4) == RD(3)) { wr16(c, (RW(17) + 1278), (u16)RW(0)); goto L_002DA314; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28280)));
SET64(31, 0x2d9814); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2d981c); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 12);
wr16(c, (RW(17) + 1284), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
 goto L_002DA314;
L_002D9830:;
SET64(31, 0x2d9838);  JP_F_00242BA0(c);
SET32(4, RW(17) + 60);
SET64(31, 0x2d9844); SET64(5, RD(2) + RD(0)); JP_F_002E1490(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DA314; }
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D985C:;
SET64(31, 0x2d9864);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DA314; }
SET64(4, (s32)rd32(c, (RW(17) + 1196)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { SET64(4, rd16(c, (RW(17) + 1282))); goto L_002D991C; }
SET64(3, (s32)rd32(c, (RW(17) + 1072)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 1168))); goto L_002D9894; }
SET32(3, RW(0) + 64);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9894:;
SET64(3, RD(3) ^ 0x2);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) == RD(0);  if (t) goto L_002D98B0; }
SET64(3, (s32)rd32(c, (RW(17) + 1172)));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1);
L_002D98B0:;
{ int t = RD(3) == RD(0);  if (t) goto L_002D98CC; }
SET64(3, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1176)));
SET64(3, (s32)rd32(c, (RW(3) + -28312)));
SET64(3, RSD(4) < RSD(3));
SET64(3, RD(3) ^ 0x1);
L_002D98CC:;
if (RD(3) == RD(0)) { SET64(4, rd16(c, (RW(17) + 1284))); goto L_002D98E0; }
SET32(3, RW(0) + 80);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D98E0:;
SET32(3, RW(0) + 13);
if (RD(4) == RD(3)) { wr16(c, (RW(17) + 1278), (u16)RW(0)); goto L_002DA314; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28278)));
SET64(31, 0x2d9900); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2d9908); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 13);
wr16(c, (RW(17) + 1284), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
 goto L_002DA314;
L_002D991C:;
SET32(3, RW(0) + 6);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(17) + 1280))); goto L_002D9934; }
wr16(c, (RW(17) + 1282), (u16)RW(3));
wr16(c, (RW(17) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(17) + 1280)));
L_002D9934:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(17) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 1200))); goto L_002D9960; }
SET32(3, RW(0) + 48);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9960:;
SET32(3, RW(0) + 11);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(17) + 1284))); goto L_002D99D8; }
SET32(3, RW(0) + 10);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1272))); goto L_002D99B8; }
SET32(3, RW(0) + 6);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1272))); goto L_002D999C; }
SET32(3, RW(0) + 8);
{ int t = RD(4) == RD(3);  if (t) goto L_002D9998; }
 goto L_002D99D4;
L_002D9998:;
SET64(3, rd16(c, (RW(17) + 1272)));
L_002D999C:;
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31116)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DA314;
L_002D99B8:;
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31112)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DA314;
L_002D99D4:;
SET64(4, rd16(c, (RW(17) + 1284)));
L_002D99D8:;
SET32(3, RW(0) + 12);
if (RD(4) == RD(3)) { wr16(c, (RW(17) + 1278), (u16)RW(0)); goto L_002DA314; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28280)));
SET64(31, 0x2d99f8); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2d9a00); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 12);
wr16(c, (RW(17) + 1284), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
 goto L_002DA314;
L_002D9A14:;
SET64(2, rd16(c, (RW(17) + 1278)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(2));
SET32(4, RW(0) + 1);
L_002D9A24:;
SET64(31, 0x2d9a2c);  JP_F_00242B70(c);
SET64(3, rd16(c, (RW(17) + 1288)));
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(28) + -31284))); goto L_002D9A64; }
SET32(4, RW(0) + 1);
if (RD(3) == RD(4)) { SET64(2, (s32)rd32(c, (RW(28) + -31280))); goto L_002D9A64; }
{ int t = RD(3) == RD(0);  if (t) goto L_002D9A5C; }
SET64(2, RD(0) + RD(0)); goto L_002D9A64;
L_002D9A5C:;
SET64(31, 0x2d9a64);  JP_F_00242B70(c);
L_002D9A64:;
SET64(5, (s64)(s32)0x4c0000);
SET64(6, RD(16) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(17) + 1301);
SET64(31, 0x2d9a7c); SET32(5, RW(5) + -28160); JP_F_00129C30(c);
SET64(4, (s32)rd32(c, (RW(17) + 1180)));
SET32(5, RW(17) + 1301);
SET64(31, 0x2d9a8c); SET32(6, RW(17) + 1112); JP_F_00130178(c);
if (RD(2) != RD(0)) { SET64(3, RD(0) + RD(0)); goto L_002D9AA4; }
wr32(c, (RW(17) + 1200), RW(0));
SET32(3, RW(0) + 2);
wr32(c, (RW(17) + 1196), RW(3));
SET64(3, RD(0) + (s64)1);
L_002D9AA4:;
{ int t = RD(3) == RD(0);  if (t) goto L_002DA314; }
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9ABC:;
SET64(31, 0x2d9ac4);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DA314; }
SET64(4, (s32)rd32(c, (RW(17) + 1196)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { SET64(4, rd16(c, (RW(17) + 1282))); goto L_002D9C28; }
SET64(4, rd16(c, (RW(17) + 1288)));
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET32(4, RW(0) + 964); goto L_002D9B14; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(4, RW(17) + 1208); goto L_002D9B08; }
if (RD(4) == RD(0)) { SET32(4, RW(0) + 3508); goto L_002D9B14; }
SET64(4, RD(0) + RD(0)); goto L_002D9B14;
L_002D9B08:;
SET64(31, 0x2d9b10); SET32(5, RW(28) + -31072); JP_F_001573C0(c);
SET64(4, RD(2) + RD(0));
L_002D9B14:;
SET64(3, (s32)rd32(c, (RW(17) + 1128)));
if (RD(3) != RD(4)) { SET64(3, rd16(c, (RW(17) + 1276))); goto L_002D9B68; }
SET64(3, rd16(c, (RW(17) + 1288)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1288), (u16)RW(3));
SET64(3, rd16(c, (RW(17) + 1288)));
SET64(1, RSD(3) < (s64)3);
if (RD(1) == RD(0)) { SET64(3, rd16(c, (RW(17) + 1272))); goto L_002D9B4C; }
wr16(c, (RW(17) + 1280), (u16)RW(0));
SET32(3, RW(0) + 65);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9B4C:;
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(17) + 1276)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DA314;
L_002D9B68:;
if (RD(3) != RD(0)) { SET64(3, rd16(c, (RW(17) + 1272))); goto L_002D9C0C; }
SET64(3, (s32)rd32(c, (RW(17) + 1168)));
SET64(3, RD(3) ^ 0x2);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) == RD(0);  if (t) goto L_002D9B90; }
SET64(3, (s32)rd32(c, (RW(17) + 1172)));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1);
L_002D9B90:;
{ int t = RD(3) == RD(0);  if (t) goto L_002D9BAC; }
SET64(3, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1176)));
SET64(3, (s32)rd32(c, (RW(3) + -28312)));
SET64(3, RSD(4) < RSD(3));
SET64(3, RD(3) ^ 0x1);
L_002D9BAC:;
{ int t = RD(3) != RD(0);  if (t) goto L_002D9C08; }
SET64(4, rd16(c, (RW(17) + 1284)));
SET32(3, RW(0) + 13);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1272))); goto L_002D9BEC; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28278)));
SET64(31, 0x2d9bd8); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2d9be0); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 13);
wr16(c, (RW(17) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(17) + 1272)));
L_002D9BEC:;
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31108)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DA314;
L_002D9C08:;
SET64(3, rd16(c, (RW(17) + 1272)));
L_002D9C0C:;
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31104)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DA314;
L_002D9C28:;
SET32(3, RW(0) + 4);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(17) + 1280))); goto L_002D9C40; }
wr16(c, (RW(17) + 1282), (u16)RW(3));
wr16(c, (RW(17) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(17) + 1280)));
L_002D9C40:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(17) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 1200))); goto L_002D9C6C; }
SET32(3, RW(0) + 65);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9C6C:;
SET32(3, RW(0) + 8);
if (RD(5) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1276))); goto L_002D9D00; }
SET32(4, RW(0) + 12);
if (RD(5) == RD(4)) { SET64(3, rd16(c, (RW(17) + 1284))); goto L_002D9CB0; }
SET32(3, RW(0) + 24);
if (RD(5) == RD(3)) { SET32(3, RW(0) + 32); goto L_002D9CA8; }
SET32(3, RW(0) + 11);
{ int t = RD(5) == RD(3);  if (t) goto L_002D9CA4; }
 goto L_002D9CFC;
L_002D9CA4:;
SET32(3, RW(0) + 32);
L_002D9CA8:;
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9CB0:;
if (RD(3) == RD(4)) { SET64(3, rd16(c, (RW(17) + 1272))); goto L_002D9CE0; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28280)));
SET64(31, 0x2d9ccc); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2d9cd4); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 12);
wr16(c, (RW(17) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(17) + 1272)));
L_002D9CE0:;
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31100)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DA314;
L_002D9CFC:;
SET64(3, rd16(c, (RW(17) + 1276)));
L_002D9D00:;
if (RD(3) != RD(0)) { SET64(3, rd16(c, (RW(17) + 1272))); goto L_002D9DA4; }
SET64(3, (s32)rd32(c, (RW(17) + 1168)));
SET64(3, RD(3) ^ 0x2);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) == RD(0);  if (t) goto L_002D9D28; }
SET64(3, (s32)rd32(c, (RW(17) + 1172)));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1);
L_002D9D28:;
{ int t = RD(3) == RD(0);  if (t) goto L_002D9D44; }
SET64(3, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1176)));
SET64(3, (s32)rd32(c, (RW(3) + -28312)));
SET64(3, RSD(4) < RSD(3));
SET64(3, RD(3) ^ 0x1);
L_002D9D44:;
{ int t = RD(3) != RD(0);  if (t) goto L_002D9DA0; }
SET64(4, rd16(c, (RW(17) + 1284)));
SET32(3, RW(0) + 13);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1272))); goto L_002D9D84; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28278)));
SET64(31, 0x2d9d70); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2d9d78); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 13);
wr16(c, (RW(17) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(17) + 1272)));
L_002D9D84:;
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31096)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DA314;
L_002D9DA0:;
SET64(3, rd16(c, (RW(17) + 1272)));
L_002D9DA4:;
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31092)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DA314;
L_002D9DC0:;
SET32(6, RW(0) + 1);
if (RD(2) == RD(6)) { SET64(4, RD(17) + RD(0)); goto L_002D9DF0; }
SET64(2, (s64)(s32)0x4c0000);
SET64(5, rd16(c, (RW(2) + -28302)));
SET64(31, 0x2d9ddc); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_00144C60(c);
SET64(31, 0x2d9de4); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 1);
wr16(c, (RW(17) + 1284), (u16)RW(2));
SET64(4, RD(17) + RD(0));
L_002D9DF0:;
SET64(31, 0x2d9df8); SET32(5, RW(0) + 1); JP_F_002DCDC0(c);
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9E08:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d9e18);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002DA314; }
SET64(4, (s32)rd32(c, (RW(17) + 1248)));
{ int t = RD(4) == RD(0); SET64(16, (s16)rd16(c, (RW(4) + 184))); if (t) goto L_002D9E3C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d9e3c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002D9E3C:;
SET64(3, RD(16) << 48);
SET64(3, RSD(3) >> 48);
{ int t = RD(3) != RD(0); wr32(c, (RW(17) + 1248), RW(0)); if (t) goto L_002D9E74; }
SET32(3, RW(0) + 1);
wr8(c, (RW(17) + 1294), (u8)RW(3));
SET64(3, rd16(c, (RW(17) + 1272)));
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31088)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DA314;
L_002D9E74:;
SET64(3, rd16(c, (RW(17) + 1272)));
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31084)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DA314;
L_002D9E94:;
SET32(2, RW(0) + 28);
if (RD(3) == RD(2)) { SET64(4, RD(17) + RD(0)); goto L_002D9EC8; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28248)));
SET64(31, 0x2d9eb4); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2d9ebc); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 28);
wr16(c, (RW(17) + 1284), (u16)RW(2));
SET64(4, RD(17) + RD(0));
L_002D9EC8:;
SET64(31, 0x2d9ed0); SET32(5, RW(0) + 1); JP_F_002DCDC0(c);
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9EE0:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d9ef0);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002DA314; }
SET64(4, (s32)rd32(c, (RW(17) + 1248)));
{ int t = RD(4) == RD(0); SET64(16, (s16)rd16(c, (RW(4) + 184))); if (t) goto L_002D9F14; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d9f14); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002D9F14:;
SET64(3, RD(16) << 48);
SET64(3, RSD(3) >> 48);
{ int t = RD(3) != RD(0); wr32(c, (RW(17) + 1248), RW(0)); if (t) goto L_002D9F4C; }
SET32(3, RW(0) + 1);
wr8(c, (RW(17) + 1294), (u8)RW(3));
SET64(3, rd16(c, (RW(17) + 1272)));
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31080)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DA314;
L_002D9F4C:;
SET64(3, rd16(c, (RW(17) + 1272)));
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31076)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DA314;
L_002D9F6C:;
SET64(3, rd16(c, (RW(17) + 1276)));
{ int t = RD(3) != RD(0);  if (t) goto L_002DA314; }
wr16(c, (RW(17) + 1278), (u16)RW(4)); goto L_002DA314;
L_002D9F80:;
SET64(31, 0x2d9f88);  JP_F_002E1580(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DA314; }
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9FA0:;
SET64(31, 0x2d9fa8);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DA314; }
SET64(4, (s32)rd32(c, (RW(17) + 1196)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { SET32(3, RW(0) + 112); goto L_002D9FD0; }
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9FD0:;
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002D9FD8:;
SET64(31, 0x2d9fe0);  JP_F_00242BA0(c);
SET32(4, RW(17) + 60);
SET64(31, 0x2d9fec); SET64(5, RD(2) + RD(0)); JP_F_002E1520(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DA314; }
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002DA004:;
SET64(31, 0x2da00c);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DA314; }
SET64(4, (s32)rd32(c, (RW(17) + 1196)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { SET64(4, rd16(c, (RW(17) + 1282))); goto L_002DA07C; }
SET64(3, (s32)rd32(c, (RW(17) + 1072)));
if (RD(3) == RD(0)) { SET32(3, RW(0) + 112); goto L_002DA074; }
SET64(4, rd16(c, (RW(17) + 1284)));
SET32(3, RW(0) + 27);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1278))); goto L_002DA068; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28250)));
SET64(31, 0x2da054); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2da05c); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 27);
wr16(c, (RW(17) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(17) + 1278)));
L_002DA068:;
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002DA074:;
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002DA07C:;
SET32(3, RW(0) + 6);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(17) + 1280))); goto L_002DA094; }
wr16(c, (RW(17) + 1282), (u16)RW(3));
wr16(c, (RW(17) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(17) + 1280)));
L_002DA094:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(17) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET32(3, RW(0) + 112); goto L_002DA0C0; }
SET32(3, RW(0) + 99);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002DA0C0:;
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002DA0C8:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2da0d4); SET32(4, RW(4) + 2736); JP_F_002DD760(c);
SET64(3, RD(2) & 0xff);
SET32(6, RW(0) + 1);
if (RD(3) != RD(6)) { SET32(3, RW(0) + 112); goto L_002DA124; }
SET64(4, rd16(c, (RW(17) + 1284)));
SET32(3, RW(0) + 27);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1278))); goto L_002DA118; }
SET64(2, (s64)(s32)0x4c0000);
SET64(5, rd16(c, (RW(2) + -28250)));
SET64(31, 0x2da104); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_00144C60(c);
SET64(31, 0x2da10c); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 27);
wr16(c, (RW(17) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(17) + 1278)));
L_002DA118:;
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002DA124:;
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002DA12C:;
SET64(3, rd8(c, (RW(4) + 504)));
SET64(3, RD(3) & 0x1);
SET64(3, RD(0) < RD(3));
{ int t = RD(3) == RD(0);  if (t) goto L_002DA314; }
SET64(2, rd8(c, (RW(17) + 1292)));
{ int t = RD(2) != RD(0);  if (t) goto L_002DA164; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 376)));
{ u32 t = RW(25); SET64(31, 0x2da15c);  rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(17) + 1300), (u8)RW(2));
L_002DA164:;
SET64(31, 0x2da16c);  JP_F_00139590(c);
SET64(31, 0x2da174);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 127);
SET64(31, 0x2da188); SET32(7, RW(0) + 64); JP_F_001B7420(c);
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002DA198:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 364)));
{ u32 t = RW(25); SET64(31, 0x2da1a8);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET32(4, RW(0) + 100); goto L_002DA1C0; }
SET64(3, rd8(c, (RW(17) + 1292)));
{ int t = RD(3) == RD(0);  if (t) goto L_002DA314; }
SET32(4, RW(0) + 100);
L_002DA1C0:;
SET64(31, 0x2da1c8);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002DA244; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2da1dc); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 10768);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(2));
SET32(3, RW(3) + 10776);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 10788);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 36), RW(2));
SET32(4, RW(4) + 28272);
wr32(c, (RW(16) + 80), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 76), RW(0));
SET32(3, RW(3) + 28280);
wr32(c, (RW(16) + 72), RW(0));
SET32(2, RW(2) + 28292);
wr32(c, (RW(16) + 60), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 56), RW(4));
wr32(c, (RW(16) + 20), RW(3));
wr32(c, (RW(16) + 36), RW(2));
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 92), RW(0));
L_002DA244:;
SET64(5, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2da254); wr32(c, (RW(17) + 1296), RW(16)); JP_F_0013A470(c);
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002DA264:;
SET32(3, RW(0) + 4);
SET64(5, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(5) != RD(3);  if (t) goto L_002DA314; }
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 1296), RW(0)); goto L_002DA290; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2da28c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 1296), RW(0));
L_002DA290:;
SET32(3, RW(0) + 112);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002DA29C:;
if (RD(3) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 1252))); goto L_002DA2D0; }
SET64(3, rd8(c, (RW(17) + 1300)));
if (RD(3) != RD(0)) { wr8(c, (RW(17) + 1300), (u8)RW(0)); goto L_002DA2D8; }
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 376)));
{ u32 t = RW(25); SET64(31, 0x2da2c4);  rt_call(c, t); }
wr8(c, (RW(17) + 1300), (u8)RW(0));
 goto L_002DA2D8;
L_002DA2D0:;
SET64(31, 0x2da2d8); SET64(5, (s32)rd32(c, (RW(17) + 1264))); JP_F_00143300(c);
L_002DA2D8:;
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DA314;
L_002DA2E8:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 364)));
{ u32 t = RW(25); SET64(31, 0x2da2f8);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET32(3, RW(0) + 2); goto L_002DA310; }
SET64(3, rd8(c, (RW(17) + 1292)));
{ int t = RD(3) == RD(0);  if (t) goto L_002DA314; }
SET32(3, RW(0) + 2);
L_002DA310:;
wr16(c, (RW(17) + 0), (u16)RW(3));
L_002DA314:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002DA318:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002DA330(Ctx *c) { /* func_002DA330 */
ENTER(0x2da330);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002DA48C; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 13248);
SET32(2, RW(2) + 13256);
wr32(c, (RW(17) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(2));
SET32(3, RW(3) + 13268);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13328);
wr32(c, (RW(17) + 36), RW(3));
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 72), RW(2)); if (t) goto L_002DA474; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -3136);
SET32(2, RW(2) + -3128);
wr32(c, (RW(17) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(2));
SET32(3, RW(3) + -3116);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -3056);
wr32(c, (RW(17) + 36), RW(3));
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 72), RW(2)); if (t) goto L_002DA474; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -2672);
SET32(2, RW(2) + -2664);
wr32(c, (RW(17) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(2));
SET32(3, RW(3) + -2652);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -2592);
wr32(c, (RW(17) + 36), RW(3));
SET64(31, 0x2da3e8); wr32(c, (RW(17) + 72), RW(2)); JP_F_00228260(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002DA478; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -2368);
SET32(2, RW(2) + -2360);
wr32(c, (RW(17) + 56), RW(3));
SET64(4, RD(17) + RD(0));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(2));
SET32(3, RW(3) + -2348);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -2288);
wr32(c, (RW(17) + 36), RW(3));
SET64(31, 0x2da428); wr32(c, (RW(17) + 72), RW(2)); JP_F_00229F40(c);
{ int t = RD(17) == RD(0);  if (t) goto L_002DA474; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -2176);
SET32(2, RW(2) + -2168);
wr32(c, (RW(17) + 56), RW(3));
SET64(4, RD(17) + RD(0));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(2));
SET32(3, RW(3) + -2156);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -2096);
wr32(c, (RW(17) + 36), RW(3));
SET64(31, 0x2da468); wr32(c, (RW(17) + 72), RW(2)); JP_F_0022AC80(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2da474); SET64(5, RD(0) + RD(0)); JP_F_0022AEA0(c);
L_002DA474:;
SET64(2, RD(16) << 48);
L_002DA478:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002DA490; }
SET64(31, 0x2da48c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002DA48C:;
SET64(2, RD(17) + RD(0));
L_002DA490:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002DA4B0(Ctx *c) { /* func_002DA4B0 */
ENTER(0x2da4b0);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + 64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, rd16(c, (RW(4) + 1278)));
if (RD(4) == RD(3)) { SET32(3, RW(0) + 1); goto L_002DA954; }
SET32(3, RW(0) + 49);
if (RD(4) == RD(3)) { SET32(4, RW(16) + 60); goto L_002DA8D8; }
SET32(3, RW(0) + 48);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1284))); goto L_002DA884; }
SET32(3, RW(0) + 33);
if (RD(4) == RD(3)) { SET32(4, RW(16) + 60); goto L_002DA76C; }
SET32(3, RW(0) + 32);
if (RD(4) == RD(3)) { SET32(4, RW(16) + 60); goto L_002DA74C; }
SET32(3, RW(0) + 17);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 1248))); goto L_002DA6A8; }
SET32(3, RW(0) + 16);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1284))); goto L_002DA65C; }
SET32(6, RW(0) + 1);
if (RD(4) == RD(6)) { SET32(4, RW(16) + 60); goto L_002DA588; }
if (RD(4) == RD(0)) { SET64(2, rd16(c, (RW(16) + 1284))); goto L_002DA538; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_002DA978;
L_002DA538:;
if (RD(2) == RD(0)) { SET32(4, RW(16) + 60); goto L_002DA568; }
SET64(2, (s64)(s32)0x4c0000);
SET64(5, rd16(c, (RW(2) + -28304)));
SET64(31, 0x2da550); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_00144C60(c);
SET64(31, 0x2da558); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
wr16(c, (RW(16) + 1284), (u16)RW(0));
SET64(2, (s64)(s32)0x42f00000);
wr32(c, (RW(16) + 1268), RW(2));
SET32(4, RW(16) + 60);
L_002DA568:;
SET64(31, 0x2da570);  JP_F_002E1580(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DA974; }
SET64(3, rd16(c, (RW(16) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DA974;
L_002DA588:;
SET64(31, 0x2da590);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DA974; }
SET64(3, (s32)rd32(c, (RW(16) + 1196)));
SET32(4, RW(0) + 3);
if (RD(3) != RD(4)) { SET64(3, rd16(c, (RW(16) + 1282))); goto L_002DA5CC; }
wr8(c, (RW(16) + 1294), (u8)RW(0));
SET64(3, rd16(c, (RW(16) + 1272)));
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31156)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DA974;
L_002DA5CC:;
if (RD(3) == RD(4)) { SET64(4, rd16(c, (RW(16) + 1280))); goto L_002DA5E0; }
wr16(c, (RW(16) + 1282), (u16)RW(4));
wr16(c, (RW(16) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(16) + 1280)));
L_002DA5E0:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(16) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 1172))); goto L_002DA608; }
wr16(c, (RW(16) + 1278), (u16)RW(0)); goto L_002DA974;
L_002DA608:;
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1);
if (RD(3) == RD(0)) { SET64(3, RD(3) & 0xff); goto L_002DA628; }
SET64(3, (s32)rd32(c, (RW(16) + 1168)));
SET64(3, RD(3) ^ 0x2);
SET64(3, RD(3) < (u64)(s64)1);
SET64(3, RD(3) & 0xff);
L_002DA628:;
if (RD(3) != RD(0)) { wr8(c, (RW(16) + 1294), (u8)RW(0)); goto L_002DA63C; }
SET32(3, RW(0) + 16);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DA974;
L_002DA63C:;
SET64(3, rd16(c, (RW(16) + 1272)));
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31152)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DA974;
L_002DA65C:;
SET32(2, RW(0) + 6);
if (RD(3) == RD(2)) { SET64(4, RD(16) + RD(0)); goto L_002DA690; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28292)));
SET64(31, 0x2da67c); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2da684); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 6);
wr16(c, (RW(16) + 1284), (u16)RW(2));
SET64(4, RD(16) + RD(0));
L_002DA690:;
SET64(31, 0x2da698); SET32(5, RW(0) + 1); JP_F_002DCDC0(c);
SET64(3, rd16(c, (RW(16) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DA974;
L_002DA6A8:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2da6b8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002DA974; }
SET64(4, (s32)rd32(c, (RW(16) + 1248)));
{ int t = RD(4) == RD(0); SET64(17, (s16)rd16(c, (RW(4) + 184))); if (t) goto L_002DA6DC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2da6dc); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002DA6DC:;
SET64(3, RD(17) << 48);
SET64(3, RSD(3) >> 48);
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 1248), RW(0)); if (t) goto L_002DA6F8; }
SET32(3, RW(0) + 32);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DA974;
L_002DA6F8:;
SET64(4, rd16(c, (RW(16) + 1284)));
SET32(3, RW(0) + 19);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DA730; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28266)));
SET64(31, 0x2da71c); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2da724); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 19);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DA730:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31148)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DA974;
L_002DA74C:;
SET64(31, 0x2da754);  JP_F_002E1580(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DA974; }
SET64(3, rd16(c, (RW(16) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DA974;
L_002DA76C:;
SET64(31, 0x2da774);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DA974; }
SET64(3, (s32)rd32(c, (RW(16) + 1196)));
SET32(4, RW(0) + 3);
if (RD(3) != RD(4)) { SET64(3, rd16(c, (RW(16) + 1282))); goto L_002DA798; }
SET32(3, RW(0) + 48);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DA974;
L_002DA798:;
if (RD(3) == RD(4)) { SET64(4, rd16(c, (RW(16) + 1280))); goto L_002DA7AC; }
wr16(c, (RW(16) + 1282), (u16)RW(4));
wr16(c, (RW(16) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(16) + 1280)));
L_002DA7AC:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(16) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET64(5, (s32)rd32(c, (RW(16) + 1200))); goto L_002DA7F0; }
wr8(c, (RW(16) + 1294), (u8)RW(0));
SET64(3, rd16(c, (RW(16) + 1272)));
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31144)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DA974;
L_002DA7F0:;
SET32(4, RW(0) + 12);
if (RD(5) == RD(4)) { SET64(3, rd16(c, (RW(16) + 1284))); goto L_002DA818; }
SET32(3, RW(0) + 6);
if (RD(5) == RD(3)) { SET32(3, RW(0) + 48); goto L_002DA810; }
wr8(c, (RW(16) + 1294), (u8)RW(0)); goto L_002DA864;
L_002DA810:;
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DA974;
L_002DA818:;
if (RD(3) == RD(4)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DA848; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28280)));
SET64(31, 0x2da834); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2da83c); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 12);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DA848:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31140)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DA974;
L_002DA864:;
SET64(3, rd16(c, (RW(16) + 1272)));
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31136)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DA974;
L_002DA884:;
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET32(4, RW(16) + 60); goto L_002DA8B8; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28294)));
SET64(31, 0x2da8a4); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2da8ac); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 5);
wr16(c, (RW(16) + 1284), (u16)RW(2));
SET32(4, RW(16) + 60);
L_002DA8B8:;
SET64(31, 0x2da8c0);  JP_F_002E1440(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DA974; }
SET64(3, rd16(c, (RW(16) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DA974;
L_002DA8D8:;
SET64(31, 0x2da8e0);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DA974; }
SET64(4, (s32)rd32(c, (RW(16) + 1196)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { SET64(4, rd16(c, (RW(16) + 1284))); goto L_002DA904; }
SET32(3, RW(0) + 64);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DA974;
L_002DA904:;
SET32(3, RW(0) + 20);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DA938; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28264)));
SET64(31, 0x2da924); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2da92c); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 20);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DA938:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31132)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DA974;
L_002DA954:;
wr8(c, (RW(16) + 1294), (u8)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31128)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0));
L_002DA974:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002DA978:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002DA990(Ctx *c) { /* func_002DA990 */
ENTER(0x2da990);
SET32(29, RW(29) + -64);
SET32(3, RW(0) + 97);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, rd16(c, (RW(4) + 1278)));
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 1248))); goto L_002DB77C; }
SET32(3, RW(0) + 96);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1284))); goto L_002DB730; }
SET32(3, RW(0) + 80);
if (RD(4) == RD(3)) { SET64(16, (s32)rd32(c, (RW(17) + 1260))); goto L_002DB5AC; }
SET32(3, RW(0) + 66);
if (RD(4) == RD(3)) { SET32(4, RW(17) + 60); goto L_002DB4E0; }
SET32(3, RW(0) + 65);
if (RD(4) == RD(3)) { SET32(4, RW(0) + 1); goto L_002DB48C; }
SET32(3, RW(0) + 64);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1284))); goto L_002DB434; }
SET32(3, RW(0) + 50);
if (RD(4) == RD(3)) { SET32(4, RW(17) + 60); goto L_002DB230; }
SET32(3, RW(0) + 49);
if (RD(4) == RD(3)) { SET32(4, RW(0) + 1); goto L_002DB198; }
SET32(3, RW(0) + 48);
if (RD(4) == RD(3)) { wr16(c, (RW(17) + 1288), (u16)RW(0)); goto L_002DB188; }
SET32(3, RW(0) + 33);
if (RD(4) == RD(3)) { SET32(4, RW(17) + 60); goto L_002DB000; }
SET32(3, RW(0) + 32);
if (RD(4) == RD(3)) { SET32(4, RW(0) + 1); goto L_002DAFD4; }
SET32(3, RW(0) + 17);
if (RD(4) == RD(3)) { SET32(4, RW(17) + 60); goto L_002DACE4; }
SET32(3, RW(0) + 16);
if (RD(4) == RD(3)) { SET32(4, RW(0) + 1); goto L_002DACB8; }
SET32(6, RW(0) + 1);
if (RD(4) == RD(6)) { SET32(4, RW(17) + 60); goto L_002DAAB4; }
if (RD(4) == RD(0)) { SET64(2, rd16(c, (RW(17) + 1284))); goto L_002DAA64; }
SET64(31, rd64(c, (RW(29) + 48))); goto L_002DB81C;
L_002DAA64:;
if (RD(2) == RD(0)) { SET32(4, RW(17) + 60); goto L_002DAA94; }
SET64(2, (s64)(s32)0x4c0000);
SET64(5, rd16(c, (RW(2) + -28304)));
SET64(31, 0x2daa7c); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_00144C60(c);
SET64(31, 0x2daa84); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
wr16(c, (RW(17) + 1284), (u16)RW(0));
SET64(2, (s64)(s32)0x42f00000);
wr32(c, (RW(17) + 1268), RW(2));
SET32(4, RW(17) + 60);
L_002DAA94:;
SET64(31, 0x2daa9c);  JP_F_002E1580(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DB818; }
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DAAB4:;
SET64(31, 0x2daabc);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DB818; }
SET64(3, (s32)rd32(c, (RW(17) + 1196)));
SET32(4, RW(0) + 3);
if (RD(3) != RD(4)) { SET64(3, rd16(c, (RW(17) + 1282))); goto L_002DAAE0; }
SET32(3, RW(0) + 16);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DAAE0:;
if (RD(3) == RD(4)) { SET64(4, rd16(c, (RW(17) + 1280))); goto L_002DAAF4; }
wr16(c, (RW(17) + 1282), (u16)RW(4));
wr16(c, (RW(17) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(17) + 1280)));
L_002DAAF4:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(17) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 1200))); goto L_002DAB1C; }
wr16(c, (RW(17) + 1278), (u16)RW(0)); goto L_002DB818;
L_002DAB1C:;
SET32(4, RW(0) + 12);
if (RD(5) == RD(4)) { SET64(3, rd16(c, (RW(17) + 1284))); goto L_002DAC28; }
SET32(3, RW(0) + 6);
if (RD(5) == RD(3)) { SET64(4, rd16(c, (RW(17) + 1284))); goto L_002DABF4; }
SET32(3, RW(0) + 8);
if (RD(5) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1276))); goto L_002DAB6C; }
SET32(3, RW(0) + 24);
if (RD(5) == RD(3)) { wr16(c, (RW(17) + 1278), (u16)RW(0)); goto L_002DAC88; }
SET32(3, RW(0) + 11);
{ int t = RD(5) == RD(3);  if (t) goto L_002DAB60; }
SET64(4, rd16(c, (RW(17) + 1284))); goto L_002DAC58;
L_002DAB60:;
wr16(c, (RW(17) + 1278), (u16)RW(0));
 goto L_002DAC88;
L_002DAB6C:;
{ int t = RD(3) != RD(0);  if (t) goto L_002DABF0; }
SET64(3, (s32)rd32(c, (RW(17) + 1168)));
SET64(3, RD(3) ^ 0x2);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) == RD(0);  if (t) goto L_002DAB94; }
SET64(3, (s32)rd32(c, (RW(17) + 1172)));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1);
L_002DAB94:;
{ int t = RD(3) == RD(0);  if (t) goto L_002DABB0; }
SET64(3, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1176)));
SET64(3, (s32)rd32(c, (RW(3) + -28312)));
SET64(3, RSD(4) < RSD(3));
SET64(3, RD(3) ^ 0x1);
L_002DABB0:;
{ int t = RD(3) != RD(0);  if (t) goto L_002DABF0; }
SET64(4, rd16(c, (RW(17) + 1284)));
SET32(3, RW(0) + 13);
{ int t = RD(4) == RD(3);  if (t) goto L_002DAC88; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28278)));
SET64(31, 0x2dabdc); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dabe4); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 13);
wr16(c, (RW(17) + 1284), (u16)RW(3)); goto L_002DAC88;
L_002DABF0:;
SET64(4, rd16(c, (RW(17) + 1284)));
L_002DABF4:;
SET32(3, RW(0) + 8);
{ int t = RD(4) == RD(3);  if (t) goto L_002DAC88; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28288)));
SET64(31, 0x2dac14); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dac1c); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 8);
wr16(c, (RW(17) + 1284), (u16)RW(3)); goto L_002DAC88;
L_002DAC28:;
{ int t = RD(3) == RD(4);  if (t) goto L_002DAC88; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28280)));
SET64(31, 0x2dac44); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dac4c); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 12);
wr16(c, (RW(17) + 1284), (u16)RW(3)); goto L_002DAC88;
L_002DAC58:;
SET32(3, RW(0) + 16);
{ int t = RD(4) == RD(3);  if (t) goto L_002DAC88; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28272)));
SET64(31, 0x2dac78); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dac80); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 16);
wr16(c, (RW(17) + 1284), (u16)RW(3));
L_002DAC88:;
SET64(4, rd16(c, (RW(17) + 1278)));
SET32(3, RW(0) + 1);
{ int t = RD(4) != RD(3);  if (t) goto L_002DB818; }
SET64(3, rd16(c, (RW(17) + 1272)));
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31192)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DB818;
L_002DACB8:;
SET64(31, 0x2dacc0);  JP_F_00242BA0(c);
SET32(4, RW(17) + 60);
SET64(31, 0x2daccc); SET64(5, RD(2) + RD(0)); JP_F_002E1520(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DB818; }
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DACE4:;
SET64(31, 0x2dacec);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DB818; }
SET64(4, (s32)rd32(c, (RW(17) + 1196)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { SET64(4, rd16(c, (RW(17) + 1282))); goto L_002DADF4; }
SET64(3, (s32)rd32(c, (RW(17) + 1072)));
if (RD(3) == RD(0)) { SET64(3, rd16(c, (RW(17) + 1276))); goto L_002DAD1C; }
SET32(3, RW(0) + 32);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DAD1C:;
if (RD(3) != RD(0)) { SET64(4, rd16(c, (RW(17) + 1284))); goto L_002DADA4; }
SET64(3, (s32)rd32(c, (RW(17) + 1168)));
SET64(3, RD(3) ^ 0x2);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) == RD(0);  if (t) goto L_002DAD44; }
SET64(3, (s32)rd32(c, (RW(17) + 1172)));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1);
L_002DAD44:;
{ int t = RD(3) == RD(0);  if (t) goto L_002DAD60; }
SET64(3, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1176)));
SET64(3, (s32)rd32(c, (RW(3) + -28312)));
SET64(3, RSD(4) < RSD(3));
SET64(3, RD(3) ^ 0x1);
L_002DAD60:;
{ int t = RD(3) != RD(0);  if (t) goto L_002DADA0; }
SET64(4, rd16(c, (RW(17) + 1284)));
SET32(3, RW(0) + 13);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1272))); goto L_002DADD8; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28278)));
SET64(31, 0x2dad8c); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dad94); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 13);
wr16(c, (RW(17) + 1284), (u16)RW(3)); goto L_002DADD4;
L_002DADA0:;
SET64(4, rd16(c, (RW(17) + 1284)));
L_002DADA4:;
SET32(3, RW(0) + 8);
{ int t = RD(4) == RD(3);  if (t) goto L_002DADD4; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28288)));
SET64(31, 0x2dadc4); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dadcc); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 8);
wr16(c, (RW(17) + 1284), (u16)RW(3));
L_002DADD4:;
SET64(3, rd16(c, (RW(17) + 1272)));
L_002DADD8:;
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31188)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DB818;
L_002DADF4:;
SET32(3, RW(0) + 6);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(17) + 1280))); goto L_002DAE0C; }
wr16(c, (RW(17) + 1282), (u16)RW(3));
wr16(c, (RW(17) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(17) + 1280)));
L_002DAE0C:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(17) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 1200))); goto L_002DAE38; }
SET32(3, RW(0) + 16);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DAE38:;
SET32(4, RW(0) + 12);
if (RD(5) == RD(4)) { SET64(3, rd16(c, (RW(17) + 1284))); goto L_002DAF44; }
SET32(3, RW(0) + 6);
if (RD(5) == RD(3)) { SET64(4, rd16(c, (RW(17) + 1284))); goto L_002DAF10; }
SET32(3, RW(0) + 8);
if (RD(5) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1276))); goto L_002DAE88; }
SET32(3, RW(0) + 24);
if (RD(5) == RD(3)) { wr16(c, (RW(17) + 1278), (u16)RW(0)); goto L_002DAFA4; }
SET32(3, RW(0) + 11);
{ int t = RD(5) == RD(3);  if (t) goto L_002DAE7C; }
SET64(4, rd16(c, (RW(17) + 1284))); goto L_002DAF74;
L_002DAE7C:;
wr16(c, (RW(17) + 1278), (u16)RW(0));
 goto L_002DAFA4;
L_002DAE88:;
{ int t = RD(3) != RD(0);  if (t) goto L_002DAF0C; }
SET64(3, (s32)rd32(c, (RW(17) + 1168)));
SET64(3, RD(3) ^ 0x2);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) == RD(0);  if (t) goto L_002DAEB0; }
SET64(3, (s32)rd32(c, (RW(17) + 1172)));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1);
L_002DAEB0:;
{ int t = RD(3) == RD(0);  if (t) goto L_002DAECC; }
SET64(3, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1176)));
SET64(3, (s32)rd32(c, (RW(3) + -28312)));
SET64(3, RSD(4) < RSD(3));
SET64(3, RD(3) ^ 0x1);
L_002DAECC:;
{ int t = RD(3) != RD(0);  if (t) goto L_002DAF0C; }
SET64(4, rd16(c, (RW(17) + 1284)));
SET32(3, RW(0) + 13);
{ int t = RD(4) == RD(3);  if (t) goto L_002DAFA4; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28278)));
SET64(31, 0x2daef8); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2daf00); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 13);
wr16(c, (RW(17) + 1284), (u16)RW(3)); goto L_002DAFA4;
L_002DAF0C:;
SET64(4, rd16(c, (RW(17) + 1284)));
L_002DAF10:;
SET32(3, RW(0) + 8);
{ int t = RD(4) == RD(3);  if (t) goto L_002DAFA4; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28288)));
SET64(31, 0x2daf30); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2daf38); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 8);
wr16(c, (RW(17) + 1284), (u16)RW(3)); goto L_002DAFA4;
L_002DAF44:;
{ int t = RD(3) == RD(4);  if (t) goto L_002DAFA4; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28280)));
SET64(31, 0x2daf60); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2daf68); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 12);
wr16(c, (RW(17) + 1284), (u16)RW(3)); goto L_002DAFA4;
L_002DAF74:;
SET32(3, RW(0) + 16);
{ int t = RD(4) == RD(3);  if (t) goto L_002DAFA4; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28272)));
SET64(31, 0x2daf94); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2daf9c); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 16);
wr16(c, (RW(17) + 1284), (u16)RW(3));
L_002DAFA4:;
SET64(4, rd16(c, (RW(17) + 1278)));
SET32(3, RW(0) + 17);
{ int t = RD(4) != RD(3);  if (t) goto L_002DB818; }
SET64(3, rd16(c, (RW(17) + 1272)));
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31184)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DB818;
L_002DAFD4:;
SET64(31, 0x2dafdc);  JP_F_00242BA0(c);
SET32(4, RW(17) + 60);
SET64(31, 0x2dafe8); SET64(5, RD(2) + RD(0)); JP_F_002E1490(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DB818; }
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DB000:;
SET64(31, 0x2db008);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DB818; }
SET64(4, (s32)rd32(c, (RW(17) + 1196)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { SET64(4, rd16(c, (RW(17) + 1282))); goto L_002DB02C; }
SET32(3, RW(0) + 48);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DB02C:;
SET32(3, RW(0) + 6);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(17) + 1280))); goto L_002DB044; }
wr16(c, (RW(17) + 1282), (u16)RW(3));
wr16(c, (RW(17) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(17) + 1280)));
L_002DB044:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(17) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 1200))); goto L_002DB070; }
SET32(3, RW(0) + 32);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DB070:;
SET32(3, RW(0) + 6);
if (RD(5) == RD(3)) { SET64(4, rd16(c, (RW(17) + 1284))); goto L_002DB0F4; }
SET32(3, RW(0) + 8);
{ int t = RD(5) == RD(3);  if (t) goto L_002DB0F0; }
SET32(4, RW(0) + 12);
if (RD(5) == RD(4)) { SET64(3, rd16(c, (RW(17) + 1284))); goto L_002DB0C0; }
SET32(3, RW(0) + 24);
if (RD(5) == RD(3)) { wr16(c, (RW(17) + 1278), (u16)RW(0)); goto L_002DB158; }
SET32(3, RW(0) + 11);
{ int t = RD(5) == RD(3);  if (t) goto L_002DB0B4; }
SET64(4, rd16(c, (RW(17) + 1284))); goto L_002DB128;
L_002DB0B4:;
wr16(c, (RW(17) + 1278), (u16)RW(0));
 goto L_002DB158;
L_002DB0C0:;
{ int t = RD(3) == RD(4);  if (t) goto L_002DB158; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28280)));
SET64(31, 0x2db0dc); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2db0e4); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 12);
wr16(c, (RW(17) + 1284), (u16)RW(3)); goto L_002DB158;
L_002DB0F0:;
SET64(4, rd16(c, (RW(17) + 1284)));
L_002DB0F4:;
SET32(3, RW(0) + 8);
{ int t = RD(4) == RD(3);  if (t) goto L_002DB158; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28288)));
SET64(31, 0x2db114); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2db11c); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 8);
wr16(c, (RW(17) + 1284), (u16)RW(3)); goto L_002DB158;
L_002DB128:;
SET32(3, RW(0) + 16);
{ int t = RD(4) == RD(3);  if (t) goto L_002DB158; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28272)));
SET64(31, 0x2db148); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2db150); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 16);
wr16(c, (RW(17) + 1284), (u16)RW(3));
L_002DB158:;
SET64(4, rd16(c, (RW(17) + 1278)));
SET32(3, RW(0) + 33);
{ int t = RD(4) != RD(3);  if (t) goto L_002DB818; }
SET64(3, rd16(c, (RW(17) + 1272)));
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31180)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DB818;
L_002DB188:;
SET64(2, rd16(c, (RW(17) + 1278)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(2));
SET32(4, RW(0) + 1);
L_002DB198:;
SET64(31, 0x2db1a0);  JP_F_00242B70(c);
SET64(3, rd16(c, (RW(17) + 1288)));
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(28) + -31284))); goto L_002DB1D8; }
SET32(4, RW(0) + 1);
if (RD(3) == RD(4)) { SET64(2, (s32)rd32(c, (RW(28) + -31280))); goto L_002DB1D8; }
{ int t = RD(3) == RD(0);  if (t) goto L_002DB1D0; }
SET64(2, RD(0) + RD(0)); goto L_002DB1D8;
L_002DB1D0:;
SET64(31, 0x2db1d8);  JP_F_00242B70(c);
L_002DB1D8:;
SET64(5, (s64)(s32)0x4c0000);
SET64(6, RD(16) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(17) + 1301);
SET64(31, 0x2db1f0); SET32(5, RW(5) + -28160); JP_F_00129C30(c);
SET64(4, (s32)rd32(c, (RW(17) + 1180)));
SET32(5, RW(17) + 1301);
SET64(31, 0x2db200); SET32(6, RW(17) + 1112); JP_F_00130178(c);
if (RD(2) != RD(0)) { SET64(3, RD(0) + RD(0)); goto L_002DB218; }
wr32(c, (RW(17) + 1200), RW(0));
SET32(3, RW(0) + 2);
wr32(c, (RW(17) + 1196), RW(3));
SET64(3, RD(0) + (s64)1);
L_002DB218:;
{ int t = RD(3) == RD(0);  if (t) goto L_002DB818; }
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DB230:;
SET64(31, 0x2db238);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DB818; }
SET64(4, (s32)rd32(c, (RW(17) + 1196)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { SET64(4, rd16(c, (RW(17) + 1282))); goto L_002DB318; }
SET64(4, rd16(c, (RW(17) + 1288)));
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET32(4, RW(0) + 964); goto L_002DB288; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(4, RW(17) + 1208); goto L_002DB27C; }
if (RD(4) == RD(0)) { SET32(4, RW(0) + 3508); goto L_002DB288; }
SET64(4, RD(0) + RD(0)); goto L_002DB288;
L_002DB27C:;
SET64(31, 0x2db284); SET32(5, RW(28) + -31072); JP_F_001573C0(c);
SET64(4, RD(2) + RD(0));
L_002DB288:;
SET64(3, (s32)rd32(c, (RW(17) + 1128)));
if (RD(3) != RD(4)) { SET64(4, rd16(c, (RW(17) + 1284))); goto L_002DB2C8; }
SET64(3, rd16(c, (RW(17) + 1288)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1288), (u16)RW(3));
SET64(3, rd16(c, (RW(17) + 1288)));
SET64(1, RSD(3) < (s64)3);
if (RD(1) == RD(0)) { SET32(3, RW(0) + 64); goto L_002DB2C0; }
wr16(c, (RW(17) + 1280), (u16)RW(0));
SET32(3, RW(0) + 49);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DB2C0:;
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DB2C8:;
SET32(3, RW(0) + 10);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1272))); goto L_002DB2FC; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28284)));
SET64(31, 0x2db2e8); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2db2f0); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 10);
wr16(c, (RW(17) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(17) + 1272)));
L_002DB2FC:;
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31176)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DB818;
L_002DB318:;
SET32(3, RW(0) + 4);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(17) + 1280))); goto L_002DB330; }
wr16(c, (RW(17) + 1282), (u16)RW(3));
wr16(c, (RW(17) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(17) + 1280)));
L_002DB330:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(17) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 1200))); goto L_002DB35C; }
SET32(3, RW(0) + 49);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DB35C:;
SET32(3, RW(0) + 8);
if (RD(5) == RD(3)) { SET64(4, rd16(c, (RW(17) + 1284))); goto L_002DB3D4; }
SET32(4, RW(0) + 12);
if (RD(5) == RD(4)) { SET64(3, rd16(c, (RW(17) + 1284))); goto L_002DB3A0; }
SET32(3, RW(0) + 24);
if (RD(5) == RD(3)) { wr16(c, (RW(17) + 1278), (u16)RW(0)); goto L_002DB404; }
SET32(3, RW(0) + 11);
{ int t = RD(5) == RD(3);  if (t) goto L_002DB394; }
 goto L_002DB3D0;
L_002DB394:;
wr16(c, (RW(17) + 1278), (u16)RW(0));
 goto L_002DB404;
L_002DB3A0:;
{ int t = RD(3) == RD(4);  if (t) goto L_002DB404; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28280)));
SET64(31, 0x2db3bc); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2db3c4); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 12);
wr16(c, (RW(17) + 1284), (u16)RW(3)); goto L_002DB404;
L_002DB3D0:;
SET64(4, rd16(c, (RW(17) + 1284)));
L_002DB3D4:;
SET32(3, RW(0) + 10);
{ int t = RD(4) == RD(3);  if (t) goto L_002DB404; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28284)));
SET64(31, 0x2db3f4); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2db3fc); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 10);
wr16(c, (RW(17) + 1284), (u16)RW(3));
L_002DB404:;
SET64(4, rd16(c, (RW(17) + 1278)));
SET32(3, RW(0) + 50);
{ int t = RD(4) != RD(3);  if (t) goto L_002DB818; }
SET64(3, rd16(c, (RW(17) + 1272)));
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31172)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0)); goto L_002DB818;
L_002DB434:;
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { SET32(4, RW(0) + 4096); goto L_002DB470; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28296)));
SET64(31, 0x2db454); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2db45c); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 4);
SET64(2, (s64)(s32)0x42f00000);
wr16(c, (RW(17) + 1284), (u16)RW(3));
wr32(c, (RW(17) + 1268), RW(2));
SET32(4, RW(0) + 4096);
L_002DB470:;
SET64(31, 0x2db478);  JP_F_00100530(c);
wr32(c, (RW(17) + 1260), RW(2));
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DB48C:;
SET64(31, 0x2db494);  JP_F_00242B70(c);
SET64(4, (s32)rd32(c, (RW(17) + 1180)));
SET64(5, RD(2) + RD(0));
SET64(6, (s32)rd32(c, (RW(17) + 1260)));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2db4ac); SET32(8, RW(0) + 3508); JP_F_001302D0(c);
if (RD(2) != RD(0)) { SET64(4, RD(0) + RD(0)); goto L_002DB4C8; }
SET32(4, RW(0) + 4);
SET32(3, RW(0) + 2);
wr32(c, (RW(17) + 1200), RW(4));
SET64(4, RD(0) + (s64)1);
wr32(c, (RW(17) + 1196), RW(3));
L_002DB4C8:;
{ int t = RD(4) == RD(0);  if (t) goto L_002DB818; }
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DB4E0:;
SET64(31, 0x2db4e8);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DB818; }
SET64(4, (s32)rd32(c, (RW(17) + 1196)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { SET64(4, rd16(c, (RW(17) + 1282))); goto L_002DB50C; }
SET32(3, RW(0) + 80);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DB50C:;
SET32(3, RW(0) + 7);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(17) + 1280))); goto L_002DB524; }
wr16(c, (RW(17) + 1282), (u16)RW(3));
wr16(c, (RW(17) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(17) + 1280)));
L_002DB524:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(17) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET64(3, rd16(c, (RW(17) + 1284))); goto L_002DB550; }
SET32(3, RW(0) + 65);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DB550:;
SET32(2, RW(0) + 10);
if (RD(3) == RD(2)) { SET64(2, rd16(c, (RW(17) + 1272))); goto L_002DB584; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28284)));
SET64(31, 0x2db570); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2db578); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 10);
wr16(c, (RW(17) + 1284), (u16)RW(2));
SET64(2, rd16(c, (RW(17) + 1272)));
L_002DB584:;
wr16(c, (RW(17) + 1274), (u16)RW(2));
SET64(2, rd16(c, (RW(28) + -31168)));
wr16(c, (RW(17) + 1272), (u16)RW(2));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0));
SET64(31, 0x2db5a4); SET64(4, (s32)rd32(c, (RW(17) + 1260))); JP_F_001004B0(c);
wr32(c, (RW(17) + 1260), RW(0)); goto L_002DB818;
L_002DB5AC:;
SET32(2, RW(0) + 3492);
SET32(6, RW(2) + -1);
SET64(5, RD(0) + RD(0));
{ int t = RD(6) == RD(0); SET32(4, RW(16) + 16); if (t) goto L_002DB5E8; }
SET32(2, RW(0) + 1);
L_002DB5C4:;
SET64(3, rd8(c, (RW(4) + 0)));
if (RD(3) == RD(0)) { SET64(3, RD(2) + RD(0)); goto L_002DB5D4; }
SET64(3, RD(3) & 0xff);
L_002DB5D4:;
SET32(6, RW(6) + -1);
SET32(5, RW(5) + RW(3));
{ int t = RD(6) != RD(0); SET32(4, RW(4) + 1); if (t) { POLL(); goto L_002DB5C4; } }
L_002DB5E8:;
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RD(2) != RD(5)) { SET64(3, rd16(c, (RW(17) + 1284))); goto L_002DB6D4; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x47580000);
SET64(2, RD(2) | 0x4d43);
SET64(2, RD(3) ^ RD(2));
SET64(2, RD(2) < (u64)(s64)1);
if (RD(2) != RD(0)) { SET32(4, RW(16) + 244); goto L_002DB618; }
SET64(2, RD(0) + RD(0)); goto L_002DB674;
L_002DB618:;
SET64(31, 0x2db620);  JP_F_002C83B0(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(18, rd16(c, (RW(16) + 346))); goto L_002DB634; }
SET64(2, RD(0) + RD(0)); goto L_002DB664;
L_002DB634:;
SET64(31, 0x2db63c);  JP_F_002C0F20(c);
SET64(1, RSD(18) < RSD(2));
if (RD(1) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002DB654; }
if (RSD(18) >= 0) { SET64(2, RD(0) + (s64)1); goto L_002DB654; }
SET64(2, RD(0) + RD(0));
L_002DB654:;
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + (s64)1); goto L_002DB664; }
SET64(2, RD(0) + RD(0));
L_002DB664:;
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + (s64)1); goto L_002DB674; }
SET64(2, RD(0) + RD(0));
L_002DB674:;
{ int t = RD(2) == RD(0);  if (t) goto L_002DB6D0; }
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(16) + RD(0));
SET32(4, RW(4) + 2720);
SET64(31, 0x2db690); SET32(6, RW(0) + 3508); JP_F_00127218(c);
SET64(3, rd16(c, (RW(17) + 1284)));
SET32(2, RW(0) + 17);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 1); goto L_002DB6C8; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28270)));
SET64(31, 0x2db6b4); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2db6bc); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 17);
wr16(c, (RW(17) + 1284), (u16)RW(2));
SET32(2, RW(0) + 1);
L_002DB6C8:;
wr8(c, (RW(17) + 1293), (u8)RW(2)); goto L_002DB704;
L_002DB6D0:;
SET64(3, rd16(c, (RW(17) + 1284)));
L_002DB6D4:;
SET32(2, RW(0) + 10);
if (RD(3) == RD(2)) { SET64(2, rd16(c, (RW(17) + 1272))); goto L_002DB708; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28284)));
SET64(31, 0x2db6f4); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2db6fc); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 10);
wr16(c, (RW(17) + 1284), (u16)RW(2));
L_002DB704:;
SET64(2, rd16(c, (RW(17) + 1272)));
L_002DB708:;
wr16(c, (RW(17) + 1274), (u16)RW(2));
SET64(2, rd16(c, (RW(28) + -31164)));
wr16(c, (RW(17) + 1272), (u16)RW(2));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0));
SET64(31, 0x2db728); SET64(4, (s32)rd32(c, (RW(17) + 1260))); JP_F_001004B0(c);
wr32(c, (RW(17) + 1260), RW(0)); goto L_002DB818;
L_002DB730:;
SET32(2, RW(0) + 25);
if (RD(3) == RD(2)) { SET64(4, RD(17) + RD(0)); goto L_002DB764; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28254)));
SET64(31, 0x2db750); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2db758); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 25);
wr16(c, (RW(17) + 1284), (u16)RW(2));
SET64(4, RD(17) + RD(0));
L_002DB764:;
SET64(31, 0x2db76c); SET64(5, RD(0) + RD(0)); JP_F_002DCDC0(c);
SET64(3, rd16(c, (RW(17) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 1278), (u16)RW(3)); goto L_002DB818;
L_002DB77C:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2db78c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002DB818; }
SET64(4, (s32)rd32(c, (RW(17) + 1248)));
{ int t = RD(4) == RD(0); SET64(16, (s16)rd16(c, (RW(4) + 184))); if (t) goto L_002DB7B0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2db7b0); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002DB7B0:;
SET64(3, RD(16) << 48);
SET64(3, RSD(3) >> 48);
{ int t = RD(3) != RD(0); wr32(c, (RW(17) + 1248), RW(0)); if (t) goto L_002DB7C8; }
wr16(c, (RW(17) + 1278), (u16)RW(0)); goto L_002DB818;
L_002DB7C8:;
SET64(4, rd16(c, (RW(17) + 1284)));
SET32(3, RW(0) + 26);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(17) + 1272))); goto L_002DB800; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(5, rd16(c, (RW(2) + -28252)));
SET64(31, 0x2db7ec); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2db7f4); SET64(4, (s32)rd32(c, (RW(17) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 26);
wr16(c, (RW(17) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(17) + 1272)));
L_002DB800:;
wr16(c, (RW(17) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31160)));
wr16(c, (RW(17) + 1272), (u16)RW(3));
wr16(c, (RW(17) + 1278), (u16)RW(0));
wr16(c, (RW(17) + 1280), (u16)RW(0));
wr16(c, (RW(17) + 1286), (u16)RW(0));
L_002DB818:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002DB81C:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002DB830(Ctx *c) { /* func_002DB830 */
ENTER(0x2db830);
SET32(29, RW(29) + -64);
SET64(5, RD(0) | 0xff00);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 1278)));
{ int t = RD(3) == RD(5); SET64(16, RD(4) + RD(0)); if (t) goto L_002DCBD0; }
SET32(4, RW(0) + 192);
if (RD(3) == RD(4)) { SET64(3, rd16(c, (RW(16) + 1286))); goto L_002DCBAC; }
SET32(4, RW(0) + 177);
if (RD(3) == RD(4)) { SET32(4, RW(16) + 60); goto L_002DCA84; }
SET32(4, RW(0) + 176);
if (RD(3) == RD(4)) { SET64(3, rd16(c, (RW(16) + 1284))); goto L_002DC9C0; }
SET32(4, RW(0) + 209);
if (RD(3) == RD(4)) { SET64(4, (s32)rd32(c, (RW(16) + 1248))); goto L_002DC91C; }
SET32(4, RW(0) + 208);
if (RD(3) == RD(4)) { SET64(3, rd16(c, (RW(16) + 1284))); goto L_002DC8D0; }
SET32(4, RW(0) + 161);
if (RD(3) == RD(4)) { SET64(4, (s32)rd32(c, (RW(16) + 1248))); goto L_002DC82C; }
SET32(4, RW(0) + 160);
if (RD(3) == RD(4)) { SET64(3, rd16(c, (RW(16) + 1284))); goto L_002DC7E0; }
SET32(4, RW(0) + 145);
if (RD(3) == RD(4)) { SET32(4, RW(16) + 60); goto L_002DC6E0; }
SET32(4, RW(0) + 144);
if (RD(3) == RD(4)) { SET64(3, rd16(c, (RW(16) + 1284))); goto L_002DC640; }
SET32(4, RW(0) + 129);
if (RD(3) == RD(4)) { SET32(4, RW(16) + 60); goto L_002DC60C; }
SET32(4, RW(0) + 128);
if (RD(3) == RD(4)) { SET64(3, rd16(c, (RW(16) + 1286))); goto L_002DC59C; }
SET32(4, RW(0) + 113);
if (RD(3) == RD(4)) { SET32(4, RW(16) + 60); goto L_002DC344; }
SET32(4, RW(0) + 112);
if (RD(3) == RD(4)) { SET32(4, RW(0) + 1); goto L_002DC318; }
SET32(4, RW(0) + 97);
if (RD(3) == RD(4)) { SET32(4, RW(16) + 60); goto L_002DC228; }
SET32(4, RW(0) + 96);
if (RD(3) == RD(4)) { SET64(3, rd16(c, (RW(16) + 1284))); goto L_002DC1C8; }
SET32(4, RW(0) + 81);
if (RD(3) == RD(4)) { SET64(4, (s32)rd32(c, (RW(16) + 1248))); goto L_002DC120; }
SET32(4, RW(0) + 80);
if (RD(3) == RD(4)) { SET64(2, rd16(c, (RW(16) + 1284))); goto L_002DC0D8; }
SET32(4, RW(0) + 50);
if (RD(3) == RD(4)) { SET32(4, RW(16) + 60); goto L_002DBE1C; }
SET32(4, RW(0) + 49);
if (RD(3) == RD(4)) { SET32(4, RW(0) + 1); goto L_002DBD84; }
SET32(4, RW(0) + 48);
if (RD(3) == RD(4)) { wr16(c, (RW(16) + 1288), (u16)RW(0)); goto L_002DBD74; }
SET32(4, RW(0) + 17);
if (RD(3) == RD(4)) { SET32(4, RW(16) + 60); goto L_002DBB1C; }
SET32(4, RW(0) + 16);
if (RD(3) == RD(4)) { SET32(4, RW(0) + 1); goto L_002DBAF0; }
SET32(6, RW(0) + 1);
if (RD(3) == RD(6)) { SET32(4, RW(16) + 60); goto L_002DB9C4; }
if (RD(3) == RD(0)) { SET64(2, rd16(c, (RW(16) + 1284))); goto L_002DB974; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_002DCC2C;
L_002DB974:;
if (RD(2) == RD(0)) { SET32(4, RW(16) + 60); goto L_002DB9A4; }
SET64(2, (s64)(s32)0x4c0000);
SET64(5, rd16(c, (RW(2) + -28304)));
SET64(31, 0x2db98c); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_00144C60(c);
SET64(31, 0x2db994); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
wr16(c, (RW(16) + 1284), (u16)RW(0));
SET64(2, (s64)(s32)0x42f00000);
wr32(c, (RW(16) + 1268), RW(2));
SET32(4, RW(16) + 60);
L_002DB9A4:;
SET64(31, 0x2db9ac);  JP_F_002E1580(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DCC28; }
SET64(3, rd16(c, (RW(16) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DB9C4:;
SET64(31, 0x2db9cc);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DCC28; }
SET64(3, (s32)rd32(c, (RW(16) + 1196)));
SET32(4, RW(0) + 3);
if (RD(3) != RD(4)) { SET64(3, rd16(c, (RW(16) + 1282))); goto L_002DB9F0; }
SET32(3, RW(0) + 16);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DB9F0:;
if (RD(3) == RD(4)) { SET64(4, rd16(c, (RW(16) + 1280))); goto L_002DBA04; }
wr16(c, (RW(16) + 1282), (u16)RW(4));
wr16(c, (RW(16) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(16) + 1280)));
L_002DBA04:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(16) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 1200))); goto L_002DBA2C; }
wr16(c, (RW(16) + 1278), (u16)RW(0)); goto L_002DCC28;
L_002DBA2C:;
SET32(3, RW(0) + 6);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DBA64; }
SET32(3, RW(0) + 24);
if (RD(4) == RD(3)) { wr16(c, (RW(16) + 1278), (u16)RW(0)); goto L_002DCC28; }
SET32(3, RW(0) + 11);
{ int t = RD(4) == RD(3);  if (t) goto L_002DBA58; }
SET64(3, rd16(c, (RW(16) + 1284))); goto L_002DBA80;
L_002DBA58:;
wr16(c, (RW(16) + 1278), (u16)RW(0));
 goto L_002DCC28;
L_002DBA64:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31276)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DBA80:;
SET64(17, RD(4) & 0xffff);
if (RD(3) == RD(17)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DBAD4; }
SET64(2, (s64)(s32)0x4c0000);
SET32(3, RW(17) << 1);
SET32(2, RW(2) + -28304);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x2dbaac); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dbab4); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
{ int t = RD(17) == RD(0); wr16(c, (RW(16) + 1284), (u16)RW(17)); if (t) goto L_002DBAC8; }
SET32(3, RW(0) + 4);
{ int t = RD(17) != RD(3);  if (t) goto L_002DBAD0; }
L_002DBAC8:;
SET64(3, (s64)(s32)0x42f00000);
wr32(c, (RW(16) + 1268), RW(3));
L_002DBAD0:;
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DBAD4:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31272)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DBAF0:;
SET64(31, 0x2dbaf8);  JP_F_00242BA0(c);
SET32(4, RW(16) + 60);
SET64(31, 0x2dbb04); SET64(5, RD(2) + RD(0)); JP_F_002E1490(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DCC28; }
SET64(3, rd16(c, (RW(16) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DBB1C:;
SET64(31, 0x2dbb24);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DCC28; }
SET64(3, (s32)rd32(c, (RW(16) + 1196)));
SET32(4, RW(0) + 3);
if (RD(3) != RD(4)) { SET64(3, rd16(c, (RW(16) + 1282))); goto L_002DBB48; }
SET32(3, RW(0) + 48);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DBB48:;
if (RD(3) == RD(4)) { SET64(4, rd16(c, (RW(16) + 1280))); goto L_002DBB5C; }
wr16(c, (RW(16) + 1282), (u16)RW(4));
wr16(c, (RW(16) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(16) + 1280)));
L_002DBB5C:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(16) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 1200))); goto L_002DBB88; }
SET32(3, RW(0) + 16);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DBB88:;
SET32(3, RW(0) + 10);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(16) + 1284))); goto L_002DBCB4; }
SET32(3, RW(0) + 6);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DBC98; }
SET32(3, RW(0) + 8);
if (RD(4) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 1168))); goto L_002DBBE8; }
SET32(3, RW(0) + 13);
{ int t = RD(4) == RD(3);  if (t) goto L_002DBBE4; }
SET32(3, RW(0) + 24);
if (RD(4) == RD(3)) { wr16(c, (RW(16) + 1278), (u16)RW(0)); goto L_002DCC28; }
SET32(3, RW(0) + 11);
{ int t = RD(4) == RD(3);  if (t) goto L_002DBBD8; }
SET64(3, rd16(c, (RW(16) + 1284))); goto L_002DBD04;
L_002DBBD8:;
wr16(c, (RW(16) + 1278), (u16)RW(0));
 goto L_002DCC28;
L_002DBBE4:;
SET64(3, (s32)rd32(c, (RW(16) + 1168)));
L_002DBBE8:;
SET64(3, RD(3) ^ 0x2);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) == RD(0);  if (t) goto L_002DBC04; }
SET64(3, (s32)rd32(c, (RW(16) + 1172)));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1);
L_002DBC04:;
{ int t = RD(3) == RD(0);  if (t) goto L_002DBC20; }
SET64(3, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1176)));
SET64(3, (s32)rd32(c, (RW(3) + -28312)));
SET64(3, RSD(4) < RSD(3));
SET64(3, RD(3) ^ 0x1);
L_002DBC20:;
if (RD(3) == RD(0)) { SET64(4, rd16(c, (RW(16) + 1284))); goto L_002DBC48; }
SET64(3, rd8(c, (RW(16) + 1294)));
if (RD(3) == RD(0)) { SET32(3, RW(0) + 80); goto L_002DBC40; }
SET32(3, RW(0) + 96);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DBC40:;
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DBC48:;
SET32(3, RW(0) + 13);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DBC7C; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28278)));
SET64(31, 0x2dbc68); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dbc70); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 13);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DBC7C:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31268)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DBC98:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31264)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DBCB4:;
SET32(3, RW(0) + 14);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DBCE8; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28276)));
SET64(31, 0x2dbcd4); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dbcdc); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 14);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DBCE8:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31260)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DBD04:;
SET64(17, RD(4) & 0xffff);
if (RD(3) == RD(17)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DBD58; }
SET64(2, (s64)(s32)0x4c0000);
SET32(3, RW(17) << 1);
SET32(2, RW(2) + -28304);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x2dbd30); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dbd38); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
{ int t = RD(17) == RD(0); wr16(c, (RW(16) + 1284), (u16)RW(17)); if (t) goto L_002DBD4C; }
SET32(3, RW(0) + 4);
{ int t = RD(17) != RD(3);  if (t) goto L_002DBD54; }
L_002DBD4C:;
SET64(3, (s64)(s32)0x42f00000);
wr32(c, (RW(16) + 1268), RW(3));
L_002DBD54:;
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DBD58:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31256)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DBD74:;
SET64(2, rd16(c, (RW(16) + 1278)));
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(2));
SET32(4, RW(0) + 1);
L_002DBD84:;
SET64(31, 0x2dbd8c);  JP_F_00242B70(c);
SET64(3, rd16(c, (RW(16) + 1288)));
SET64(17, RD(2) + RD(0));
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(28) + -31284))); goto L_002DBDC4; }
SET32(4, RW(0) + 1);
if (RD(3) == RD(4)) { SET64(2, (s32)rd32(c, (RW(28) + -31280))); goto L_002DBDC4; }
{ int t = RD(3) == RD(0);  if (t) goto L_002DBDBC; }
SET64(2, RD(0) + RD(0)); goto L_002DBDC4;
L_002DBDBC:;
SET64(31, 0x2dbdc4);  JP_F_00242B70(c);
L_002DBDC4:;
SET64(5, (s64)(s32)0x4c0000);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 1301);
SET64(31, 0x2dbddc); SET32(5, RW(5) + -28160); JP_F_00129C30(c);
SET64(4, (s32)rd32(c, (RW(16) + 1180)));
SET32(5, RW(16) + 1301);
SET64(31, 0x2dbdec); SET32(6, RW(16) + 1112); JP_F_00130178(c);
if (RD(2) != RD(0)) { SET64(3, RD(0) + RD(0)); goto L_002DBE04; }
wr32(c, (RW(16) + 1200), RW(0));
SET32(3, RW(0) + 2);
wr32(c, (RW(16) + 1196), RW(3));
SET64(3, RD(0) + (s64)1);
L_002DBE04:;
{ int t = RD(3) == RD(0);  if (t) goto L_002DCC28; }
SET64(3, rd16(c, (RW(16) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DBE1C:;
SET64(31, 0x2dbe24);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DCC28; }
SET64(4, (s32)rd32(c, (RW(16) + 1196)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { SET64(4, rd16(c, (RW(16) + 1282))); goto L_002DBF64; }
SET64(4, rd16(c, (RW(16) + 1288)));
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET32(4, RW(0) + 964); goto L_002DBE74; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(4, RW(16) + 1208); goto L_002DBE68; }
if (RD(4) == RD(0)) { SET32(4, RW(0) + 3508); goto L_002DBE74; }
SET64(4, RD(0) + RD(0)); goto L_002DBE74;
L_002DBE68:;
SET64(31, 0x2dbe70); SET32(5, RW(28) + -31072); JP_F_001573C0(c);
SET64(4, RD(2) + RD(0));
L_002DBE74:;
SET64(3, (s32)rd32(c, (RW(16) + 1128)));
if (RD(3) != RD(4)) { SET64(3, (s32)rd32(c, (RW(16) + 1168))); goto L_002DBEC8; }
SET64(3, rd16(c, (RW(16) + 1288)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1288), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1288)));
SET64(1, RSD(3) < (s64)3);
if (RD(1) == RD(0)) { SET64(3, rd16(c, (RW(16) + 1276))); goto L_002DBEAC; }
wr16(c, (RW(16) + 1280), (u16)RW(0));
SET32(3, RW(0) + 49);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DBEAC:;
if (RD(3) != RD(0)) { SET32(3, RW(0) + 160); goto L_002DBEC0; }
SET32(3, RW(0) + 160);
wr16(c, (RW(16) + 1278), (u16)RW(3));
SET32(3, RW(0) + 160);
L_002DBEC0:;
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DBEC8:;
SET64(3, RD(3) ^ 0x2);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) == RD(0);  if (t) goto L_002DBEE4; }
SET64(3, (s32)rd32(c, (RW(16) + 1172)));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1);
L_002DBEE4:;
{ int t = RD(3) == RD(0);  if (t) goto L_002DBF00; }
SET64(3, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1176)));
SET64(3, (s32)rd32(c, (RW(3) + -28312)));
SET64(3, RSD(4) < RSD(3));
SET64(3, RD(3) ^ 0x1);
L_002DBF00:;
if (RD(3) == RD(0)) { SET64(4, rd16(c, (RW(16) + 1284))); goto L_002DBF14; }
SET32(3, RW(0) + 208);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DBF14:;
SET32(3, RW(0) + 13);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DBF48; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28278)));
SET64(31, 0x2dbf34); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dbf3c); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 13);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DBF48:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31252)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DBF64:;
SET32(3, RW(0) + 4);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(16) + 1280))); goto L_002DBF7C; }
wr16(c, (RW(16) + 1282), (u16)RW(3));
wr16(c, (RW(16) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(16) + 1280)));
L_002DBF7C:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(16) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET64(5, (s32)rd32(c, (RW(16) + 1200))); goto L_002DBFA8; }
SET32(3, RW(0) + 49);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DBFA8:;
SET32(3, RW(0) + 8);
if (RD(5) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 1168))); goto L_002DC03C; }
SET32(4, RW(0) + 12);
if (RD(5) == RD(4)) { SET64(3, rd16(c, (RW(16) + 1284))); goto L_002DBFEC; }
SET32(3, RW(0) + 24);
if (RD(5) == RD(3)) { wr16(c, (RW(16) + 1278), (u16)RW(0)); goto L_002DCC28; }
SET32(3, RW(0) + 11);
{ int t = RD(5) == RD(3);  if (t) goto L_002DBFE0; }
 goto L_002DC038;
L_002DBFE0:;
wr16(c, (RW(16) + 1278), (u16)RW(0));
 goto L_002DCC28;
L_002DBFEC:;
if (RD(3) == RD(4)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DC01C; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28280)));
SET64(31, 0x2dc008); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc010); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 12);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DC01C:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31248)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DC038:;
SET64(3, (s32)rd32(c, (RW(16) + 1168)));
L_002DC03C:;
SET64(3, RD(3) ^ 0x2);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) == RD(0);  if (t) goto L_002DC058; }
SET64(3, (s32)rd32(c, (RW(16) + 1172)));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1);
L_002DC058:;
{ int t = RD(3) == RD(0);  if (t) goto L_002DC074; }
SET64(3, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1176)));
SET64(3, (s32)rd32(c, (RW(3) + -28312)));
SET64(3, RSD(4) < RSD(3));
SET64(3, RD(3) ^ 0x1);
L_002DC074:;
if (RD(3) == RD(0)) { SET64(4, rd16(c, (RW(16) + 1284))); goto L_002DC088; }
SET32(3, RW(0) + 208);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC088:;
SET32(3, RW(0) + 13);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DC0BC; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28278)));
SET64(31, 0x2dc0a8); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc0b0); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 13);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DC0BC:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31244)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DC0D8:;
SET32(6, RW(0) + 1);
if (RD(2) == RD(6)) { SET64(4, RD(16) + RD(0)); goto L_002DC108; }
SET64(2, (s64)(s32)0x4c0000);
SET64(5, rd16(c, (RW(2) + -28302)));
SET64(31, 0x2dc0f4); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_00144C60(c);
SET64(31, 0x2dc0fc); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 1);
wr16(c, (RW(16) + 1284), (u16)RW(2));
SET64(4, RD(16) + RD(0));
L_002DC108:;
SET64(31, 0x2dc110); SET32(5, RW(0) + 1); JP_F_002DCDC0(c);
SET64(3, rd16(c, (RW(16) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC120:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2dc130);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002DCC28; }
SET64(4, (s32)rd32(c, (RW(16) + 1248)));
{ int t = RD(4) == RD(0); SET64(17, (s16)rd16(c, (RW(4) + 184))); if (t) goto L_002DC154; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2dc154); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002DC154:;
SET64(3, RD(17) << 48);
SET64(3, RSD(3) >> 48);
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 1248), RW(0)); if (t) goto L_002DC174; }
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 1294), (u8)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0)); goto L_002DCC28;
L_002DC174:;
SET64(4, rd16(c, (RW(16) + 1284)));
SET32(3, RW(0) + 23);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DC1AC; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28258)));
SET64(31, 0x2dc198); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc1a0); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 23);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DC1AC:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31240)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DC1C8:;
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET32(4, RW(0) + 1); goto L_002DC1FC; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28300)));
SET64(31, 0x2dc1e8); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc1f0); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 2);
wr16(c, (RW(16) + 1284), (u16)RW(2));
SET32(4, RW(0) + 1);
L_002DC1FC:;
SET64(31, 0x2dc204);  JP_F_00242BA0(c);
SET32(4, RW(16) + 60);
SET64(31, 0x2dc210); SET64(5, RD(2) + RD(0)); JP_F_002E14E0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DCC28; }
SET64(3, rd16(c, (RW(16) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC228:;
SET64(31, 0x2dc230);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DCC28; }
SET64(4, (s32)rd32(c, (RW(16) + 1196)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { SET64(4, rd16(c, (RW(16) + 1282))); goto L_002DC254; }
SET32(3, RW(0) + 112);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC254:;
SET32(3, RW(0) + 8);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(16) + 1280))); goto L_002DC26C; }
wr16(c, (RW(16) + 1282), (u16)RW(3));
wr16(c, (RW(16) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(16) + 1280)));
L_002DC26C:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(16) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 1200))); goto L_002DC298; }
SET32(3, RW(0) + 96);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC298:;
SET32(3, RW(0) + 13);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(16) + 1192))); goto L_002DC2AC; }
SET64(4, rd16(c, (RW(16) + 1284))); goto L_002DC2C8;
L_002DC2AC:;
SET32(3, RW(0) + 17);
{ int t = RD(4) != RD(3);  if (t) goto L_002DC2C4; }
SET32(3, RW(0) + 112);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC2C4:;
SET64(4, rd16(c, (RW(16) + 1284)));
L_002DC2C8:;
SET32(3, RW(0) + 14);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DC2FC; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28276)));
SET64(31, 0x2dc2e8); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc2f0); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 14);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DC2FC:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31236)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DC318:;
SET64(31, 0x2dc320);  JP_F_00242BA0(c);
SET32(4, RW(16) + 60);
SET64(31, 0x2dc32c); SET64(5, RD(2) + RD(0)); JP_F_002E1490(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DCC28; }
SET64(3, rd16(c, (RW(16) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC344:;
SET64(31, 0x2dc34c);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DCC28; }
SET64(3, (s32)rd32(c, (RW(16) + 1196)));
SET32(4, RW(0) + 3);
if (RD(3) != RD(4)) { SET64(3, rd16(c, (RW(16) + 1282))); goto L_002DC370; }
SET32(3, RW(0) + 128);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC370:;
if (RD(3) == RD(4)) { SET64(4, rd16(c, (RW(16) + 1280))); goto L_002DC384; }
wr16(c, (RW(16) + 1282), (u16)RW(4));
wr16(c, (RW(16) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(16) + 1280)));
L_002DC384:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(16) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 1200))); goto L_002DC3B0; }
SET32(3, RW(0) + 112);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC3B0:;
SET32(3, RW(0) + 24);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(16) + 1284))); goto L_002DC54C; }
SET32(3, RW(0) + 11);
if (RD(4) == RD(3)) { wr8(c, (RW(16) + 1294), (u8)RW(0)); goto L_002DC540; }
SET32(3, RW(0) + 10);
{ int t = RD(4) == RD(3);  if (t) goto L_002DC53C; }
SET32(3, RW(0) + 13);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1284))); goto L_002DC4CC; }
SET32(3, RW(0) + 6);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DC4B0; }
SET32(3, RW(0) + 8);
if (RD(4) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 1168))); goto L_002DC400; }
 goto L_002DC548;
L_002DC400:;
SET64(3, RD(3) ^ 0x2);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) == RD(0);  if (t) goto L_002DC41C; }
SET64(3, (s32)rd32(c, (RW(16) + 1172)));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1);
L_002DC41C:;
{ int t = RD(3) == RD(0);  if (t) goto L_002DC438; }
SET64(3, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1176)));
SET64(3, (s32)rd32(c, (RW(3) + -28312)));
SET64(3, RSD(4) < RSD(3));
SET64(3, RD(3) ^ 0x1);
L_002DC438:;
if (RD(3) == RD(0)) { SET64(4, rd16(c, (RW(16) + 1284))); goto L_002DC460; }
SET64(3, rd8(c, (RW(16) + 1294)));
if (RD(3) == RD(0)) { SET32(3, RW(0) + 80); goto L_002DC458; }
SET32(3, RW(0) + 96);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC458:;
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC460:;
SET32(3, RW(0) + 13);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DC494; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28278)));
SET64(31, 0x2dc480); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc488); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 13);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DC494:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31232)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DC4B0:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31228)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DC4CC:;
SET64(17, RD(4) & 0xffff);
if (RD(3) == RD(17)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DC520; }
SET64(2, (s64)(s32)0x4c0000);
SET32(3, RW(17) << 1);
SET32(2, RW(2) + -28304);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x2dc4f8); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc500); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
{ int t = RD(17) == RD(0); wr16(c, (RW(16) + 1284), (u16)RW(17)); if (t) goto L_002DC514; }
SET32(3, RW(0) + 4);
{ int t = RD(17) != RD(3);  if (t) goto L_002DC51C; }
L_002DC514:;
SET64(3, (s64)(s32)0x42f00000);
wr32(c, (RW(16) + 1268), RW(3));
L_002DC51C:;
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DC520:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31224)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DC53C:;
wr8(c, (RW(16) + 1294), (u8)RW(0));
L_002DC540:;
wr16(c, (RW(16) + 1278), (u16)RW(0)); goto L_002DCC28;
L_002DC548:;
SET64(4, rd16(c, (RW(16) + 1284)));
L_002DC54C:;
SET32(3, RW(0) + 14);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DC580; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28276)));
SET64(31, 0x2dc56c); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc574); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 14);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DC580:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31220)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DC59C:;
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(28) + -31284))); goto L_002DC5CC; }
SET32(4, RW(0) + 1);
if (RD(3) == RD(4)) { SET64(2, (s32)rd32(c, (RW(28) + -31280))); goto L_002DC5CC; }
{ int t = RD(3) == RD(0);  if (t) goto L_002DC5C4; }
SET64(2, RD(0) + RD(0)); goto L_002DC5CC;
L_002DC5C4:;
SET64(31, 0x2dc5cc);  JP_F_00242B70(c);
L_002DC5CC:;
SET64(4, (s32)rd32(c, (RW(16) + 1180)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x2dc5dc); SET32(6, RW(16) + 1112); JP_F_00130178(c);
if (RD(2) != RD(0)) { SET64(3, RD(0) + RD(0)); goto L_002DC5F4; }
wr32(c, (RW(16) + 1200), RW(0));
SET32(3, RW(0) + 2);
wr32(c, (RW(16) + 1196), RW(3));
SET64(3, RD(0) + (s64)1);
L_002DC5F4:;
{ int t = RD(3) == RD(0);  if (t) goto L_002DCC28; }
SET64(3, rd16(c, (RW(16) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC60C:;
SET64(31, 0x2dc614);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DCC28; }
SET64(4, (s32)rd32(c, (RW(16) + 1196)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { SET32(3, RW(0) + 144); goto L_002DC638; }
SET32(3, RW(0) + 176);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC638:;
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC640:;
SET32(2, RW(0) + 3);
if (RD(3) == RD(2)) { SET64(3, rd16(c, (RW(16) + 1286))); goto L_002DC674; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28298)));
SET64(31, 0x2dc660); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc668); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 3);
wr16(c, (RW(16) + 1284), (u16)RW(2));
SET64(3, rd16(c, (RW(16) + 1286)));
L_002DC674:;
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(28) + -31284))); goto L_002DC6A4; }
SET32(4, RW(0) + 1);
if (RD(3) == RD(4)) { SET64(2, (s32)rd32(c, (RW(28) + -31280))); goto L_002DC6A4; }
{ int t = RD(3) == RD(0);  if (t) goto L_002DC69C; }
SET64(2, RD(0) + RD(0)); goto L_002DC6A4;
L_002DC69C:;
SET64(31, 0x2dc6a4);  JP_F_00242B70(c);
L_002DC6A4:;
SET64(4, (s32)rd32(c, (RW(16) + 1180)));
SET64(31, 0x2dc6b0); SET64(5, RD(2) + RD(0)); JP_F_001304C0(c);
if (RD(2) != RD(0)) { SET64(4, RD(0) + RD(0)); goto L_002DC6C8; }
SET32(3, RW(0) + 2);
SET64(4, RD(0) + (s64)1);
wr32(c, (RW(16) + 1200), RW(3));
wr32(c, (RW(16) + 1196), RW(3));
L_002DC6C8:;
{ int t = RD(4) == RD(0);  if (t) goto L_002DCC28; }
SET64(3, rd16(c, (RW(16) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC6E0:;
SET64(31, 0x2dc6e8);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DCC28; }
SET64(4, (s32)rd32(c, (RW(16) + 1196)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 1200))); goto L_002DC70C; }
SET32(3, RW(0) + 176);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC70C:;
SET32(3, RW(0) + 13);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1284))); goto L_002DC720; }
SET64(4, rd16(c, (RW(16) + 1284))); goto L_002DC790;
L_002DC720:;
SET64(17, RD(4) & 0xffff);
if (RD(3) == RD(17)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DC774; }
SET64(2, (s64)(s32)0x4c0000);
SET32(3, RW(17) << 1);
SET32(2, RW(2) + -28304);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x2dc74c); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc754); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
{ int t = RD(17) == RD(0); wr16(c, (RW(16) + 1284), (u16)RW(17)); if (t) goto L_002DC768; }
SET32(3, RW(0) + 4);
{ int t = RD(17) != RD(3);  if (t) goto L_002DC770; }
L_002DC768:;
SET64(3, (s64)(s32)0x42f00000);
wr32(c, (RW(16) + 1268), RW(3));
L_002DC770:;
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DC774:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31216)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DC790:;
SET32(3, RW(0) + 14);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DC7C4; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28276)));
SET64(31, 0x2dc7b0); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc7b8); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 14);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DC7C4:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31212)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DC7E0:;
SET32(2, RW(0) + 22);
if (RD(3) == RD(2)) { SET64(4, RD(16) + RD(0)); goto L_002DC814; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28260)));
SET64(31, 0x2dc800); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc808); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 22);
wr16(c, (RW(16) + 1284), (u16)RW(2));
SET64(4, RD(16) + RD(0));
L_002DC814:;
SET64(31, 0x2dc81c); SET32(5, RW(0) + 1); JP_F_002DCDC0(c);
SET64(3, rd16(c, (RW(16) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC82C:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2dc83c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002DCC28; }
SET64(4, (s32)rd32(c, (RW(16) + 1248)));
{ int t = RD(4) == RD(0); SET64(17, (s16)rd16(c, (RW(4) + 184))); if (t) goto L_002DC860; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2dc860); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002DC860:;
SET64(3, RD(17) << 48);
SET64(3, RSD(3) >> 48);
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 1248), RW(0)); if (t) goto L_002DC87C; }
SET32(3, RW(0) + 112);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC87C:;
SET64(4, rd16(c, (RW(16) + 1284)));
SET32(3, RW(0) + 23);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DC8B4; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28258)));
SET64(31, 0x2dc8a0); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc8a8); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 23);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DC8B4:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31208)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DC8D0:;
SET32(2, RW(0) + 28);
if (RD(3) == RD(2)) { SET64(4, RD(16) + RD(0)); goto L_002DC904; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28248)));
SET64(31, 0x2dc8f0); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc8f8); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 28);
wr16(c, (RW(16) + 1284), (u16)RW(2));
SET64(4, RD(16) + RD(0));
L_002DC904:;
SET64(31, 0x2dc90c); SET32(5, RW(0) + 1); JP_F_002DCDC0(c);
SET64(3, rd16(c, (RW(16) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC91C:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2dc92c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002DCC28; }
SET64(4, (s32)rd32(c, (RW(16) + 1248)));
{ int t = RD(4) == RD(0); SET64(17, (s16)rd16(c, (RW(4) + 184))); if (t) goto L_002DC950; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2dc950); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002DC950:;
SET64(3, RD(17) << 48);
SET64(3, RSD(3) >> 48);
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 1248), RW(0)); if (t) goto L_002DC96C; }
SET32(3, RW(0) + 112);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DC96C:;
SET64(4, rd16(c, (RW(16) + 1284)));
SET32(3, RW(0) + 23);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DC9A4; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28258)));
SET64(31, 0x2dc990); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc998); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 23);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DC9A4:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31204)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DC9C0:;
SET32(2, RW(0) + 3);
if (RD(3) == RD(2)) { SET64(4, RD(16) + RD(0)); goto L_002DC9F4; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28298)));
SET64(31, 0x2dc9e0); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dc9e8); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(2, RW(0) + 3);
wr16(c, (RW(16) + 1284), (u16)RW(2));
SET64(4, RD(16) + RD(0));
L_002DC9F4:;
SET32(5, RW(29) + 60);
SET64(31, 0x2dca00); wr32(c, (RW(29) + 60), RW(0)); JP_F_002DCC40(c);
SET64(3, rd16(c, (RW(16) + 1286)));
SET64(17, RD(2) + RD(0));
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(28) + -31284))); goto L_002DCA38; }
SET32(4, RW(0) + 1);
if (RD(3) == RD(4)) { SET64(2, (s32)rd32(c, (RW(28) + -31280))); goto L_002DCA38; }
{ int t = RD(3) == RD(0);  if (t) goto L_002DCA30; }
SET64(2, RD(0) + RD(0)); goto L_002DCA38;
L_002DCA30:;
SET64(31, 0x2dca38);  JP_F_00242B70(c);
L_002DCA38:;
SET64(8, (s32)rd32(c, (RW(29) + 60)));
SET64(6, RD(17) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 1180)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x2dca50); SET64(7, RD(0) + RD(0)); JP_F_001303C8(c);
if (RD(2) != RD(0)) { SET64(4, RD(0) + RD(0)); goto L_002DCA6C; }
SET32(4, RW(0) + 3);
SET32(3, RW(0) + 2);
wr32(c, (RW(16) + 1200), RW(4));
SET64(4, RD(0) + (s64)1);
wr32(c, (RW(16) + 1196), RW(3));
L_002DCA6C:;
{ int t = RD(4) == RD(0);  if (t) goto L_002DCC28; }
SET64(3, rd16(c, (RW(16) + 1278)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DCA84:;
SET64(31, 0x2dca8c);  JP_F_002E1280(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002DCC28; }
SET64(4, (s32)rd32(c, (RW(16) + 1196)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { SET64(4, rd16(c, (RW(16) + 1282))); goto L_002DCAB0; }
SET32(3, RW(0) + 192);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DCAB0:;
SET32(3, RW(0) + 8);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(16) + 1280))); goto L_002DCAC8; }
wr16(c, (RW(16) + 1282), (u16)RW(3));
wr16(c, (RW(16) + 1280), (u16)RW(0));
SET64(4, rd16(c, (RW(16) + 1280)));
L_002DCAC8:;
SET64(3, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(3) + -28352)));
SET32(4, RW(4) + 1);
wr16(c, (RW(16) + 1280), (u16)RW(4));
SET64(4, RD(4) & 0xffff);
SET64(3, RSD(4) < RSD(3));
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 1200))); goto L_002DCAF4; }
SET32(3, RW(0) + 176);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DCAF4:;
SET32(3, RW(0) + 13);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 1284))); goto L_002DCB08; }
SET64(4, rd16(c, (RW(16) + 1284))); goto L_002DCB5C;
L_002DCB08:;
SET64(17, RD(4) & 0xffff);
if (RD(3) == RD(17)) { SET64(3, rd16(c, (RW(16) + 1272))); goto L_002DCB90; }
SET64(2, (s64)(s32)0x4c0000);
SET32(3, RW(17) << 1);
SET32(2, RW(2) + -28304);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x2dcb34); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dcb3c); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
{ int t = RD(17) == RD(0); wr16(c, (RW(16) + 1284), (u16)RW(17)); if (t) goto L_002DCB50; }
SET32(3, RW(0) + 4);
{ int t = RD(17) != RD(3);  if (t) goto L_002DCB8C; }
L_002DCB50:;
SET64(3, (s64)(s32)0x42f00000);
wr32(c, (RW(16) + 1268), RW(3)); goto L_002DCB8C;
L_002DCB5C:;
SET32(3, RW(0) + 14);
{ int t = RD(4) == RD(3);  if (t) goto L_002DCB8C; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28276)));
SET64(31, 0x2dcb7c); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dcb84); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 14);
wr16(c, (RW(16) + 1284), (u16)RW(3));
L_002DCB8C:;
SET64(3, rd16(c, (RW(16) + 1272)));
L_002DCB90:;
wr16(c, (RW(16) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31200)));
wr16(c, (RW(16) + 1272), (u16)RW(3));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0)); goto L_002DCC28;
L_002DCBAC:;
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 1286), (u16)RW(3));
SET64(3, RD(3) & 0xffff);
SET64(1, RSD(3) < (s64)3);
if (RD(1) == RD(0)) { wr16(c, (RW(16) + 1278), (u16)RW(5)); goto L_002DCC28; }
SET32(3, RW(0) + 128);
wr16(c, (RW(16) + 1278), (u16)RW(3)); goto L_002DCC28;
L_002DCBD0:;
SET64(4, rd16(c, (RW(16) + 1284)));
SET32(3, RW(0) + 15);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(16) + 1272))); goto L_002DCC08; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
SET64(5, rd16(c, (RW(2) + -28274)));
SET64(31, 0x2dcbf4); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2dcbfc); SET64(4, (s32)rd32(c, (RW(16) + 1252))); JP_F_001432E0(c);
SET32(3, RW(0) + 15);
wr16(c, (RW(16) + 1284), (u16)RW(3));
SET64(4, rd16(c, (RW(16) + 1272)));
L_002DCC08:;
SET32(3, RW(0) + 1);
wr16(c, (RW(16) + 1274), (u16)RW(4));
SET64(4, rd16(c, (RW(28) + -31196)));
wr16(c, (RW(16) + 1272), (u16)RW(4));
wr16(c, (RW(16) + 1278), (u16)RW(0));
wr16(c, (RW(16) + 1280), (u16)RW(0));
wr16(c, (RW(16) + 1286), (u16)RW(0));
wr8(c, (RW(16) + 1293), (u8)RW(3));
L_002DCC28:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002DCC2C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002DCC40(Ctx *c) { /* func_002DCC40 */
ENTER(0x2dcc40);
SET32(29, RW(29) + -96);
SET32(3, RW(0) + 2);
wr64(c, (RW(29) + 32), RD(31));
SET64(2, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(5) + RD(0));
SET64(5, rd16(c, (RW(4) + 1286)));
{ int t = RD(5) == RD(3); SET64(17, RD(4) + RD(0)); if (t) goto L_002DCD18; }
SET32(4, RW(0) + 1);
{ int t = RD(5) == RD(4);  if (t) goto L_002DCCD8; }
if (RD(5) == RD(0)) { SET32(2, RW(0) + 3508); goto L_002DCC84; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_002DCDA4;
L_002DCC84:;
SET64(3, (s64)(s32)0x540000);
wr32(c, (RW(16) + 0), RW(2));
SET64(5, (s64)(s32)0x540000);
SET32(2, RW(0) + 3492);
SET32(3, RW(3) + 2720);
SET32(7, RW(2) + -1);
SET64(6, RD(0) + RD(0));
{ int t = RD(7) == RD(0); SET32(5, RW(5) + 2736); if (t) goto L_002DCCC8; }
L_002DCCA8:;
SET64(2, rd8(c, (RW(5) + 0)));
if (RD(2) == RD(0)) { SET64(2, RD(4) + RD(0)); goto L_002DCCB8; }
SET64(2, RD(2) & 0xff);
L_002DCCB8:;
SET32(7, RW(7) + -1);
SET32(6, RW(6) + RW(2));
{ int t = RD(7) != RD(0); SET32(5, RW(5) + 1); if (t) { POLL(); goto L_002DCCA8; } }
L_002DCCC8:;
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(3) + 4), RW(6));
SET32(2, RW(2) + 2720); goto L_002DCDA0;
L_002DCCD8:;
if (RD(5) == RD(3)) { SET32(2, RW(0) + 964); goto L_002DCD00; }
if (RD(5) == RD(4)) { SET32(4, RW(17) + 1208); goto L_002DCCF8; }
if (RD(5) == RD(0)) { SET32(2, RW(0) + 3508); goto L_002DCD00; }
 goto L_002DCD00;
L_002DCCF8:;
SET64(31, 0x2dcd00); SET32(5, RW(28) + -31072); JP_F_001573C0(c);
L_002DCD00:;
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 1228)));
SET64(3, (s32)rd32(c, (RW(17) + 1232)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(2, RW(3) + RW(2)); goto L_002DCDA0;
L_002DCD18:;
SET32(3, RW(0) + 964);
SET64(2, (s64)(s32)0x3ecc0000);
wr32(c, (RW(16) + 0), RW(3));
SET64(6, RD(2) | 0xcccd);
SET64(3, (s64)(s32)0xbf800000);
SET64(5, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 88), RW(3));
SET64(2, (s64)(s32)0x3f000000);
SET64(3, rd16(c, (RW(28) + -30220)));
SET32(4, RW(17) + 60);
wr32(c, (RW(29) + 56), RW(2));
SET32(9, RW(29) + 80);
wr32(c, (RW(29) + 80), RW(2));
SET32(10, RW(29) + 64);
SET64(2, (s64)(s32)0x420000);
wr32(c, (RW(29) + 48), RW(6));
wr32(c, (RW(29) + 52), RW(6));
SET32(2, RW(2) + -30528);
SET32(3, RW(3) << 2);
wr32(c, (RW(29) + 64), RW(6));
wr32(c, (RW(29) + 68), RW(6));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(29) + 72), RW(6));
SET32(11, RW(29) + 48);
SET64(6, (s32)rd32(c, (RW(28) + -31280)));
wr32(c, (RW(29) + 60), RW(5));
wr32(c, (RW(29) + 76), RW(5));
wr32(c, (RW(29) + 92), RW(5));
SET64(7, RD(6) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(8, RD(6) + RD(0));
SET64(31, 0x2dcd9c); wr32(c, (RW(29) + 84), RW(0)); JP_F_002E1620(c);
SET32(2, RW(17) + 60);
L_002DCDA0:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002DCDA4:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002DCDC0(Ctx *c) { /* func_002DCDC0 */
ENTER(0x2dcdc0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(17, RD(5) + RD(0));
SET32(4, RW(0) + 196);
SET64(31, 0x2dcde4); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002DCE54; }
SET64(31, 0x2dcdf4); SET64(4, RD(16) + RD(0)); JP_F_00228490(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -3136);
SET32(2, RW(2) + -3128);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -3116);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 36), RW(3));
SET32(2, RW(2) + -3056);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 72), RW(2));
SET32(3, RW(3) + 13248);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(3));
SET32(2, RW(2) + 13256);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + 13268);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13328);
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 72), RW(2));
L_002DCE54:;
wr32(c, (RW(18) + 1248), RW(16));
SET64(4, RD(16) + RD(0));
SET64(6, (s16)rd16(c, (RW(18) + 1290)));
SET64(31, 0x2dce68); SET32(5, RW(0) + 2); JP_F_00225C80(c);
SET64(2, (s32)rd32(c, (RW(18) + 1248)));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2dce78); SET32(4, RW(2) + 168); JP_F_0013BA20(c);
SET64(5, (s32)rd32(c, (RW(18) + 1248)));
SET64(2, (s64)(s32)0x461c0000);
SET32(6, RW(0) + 1);
SET64(3, RD(2) | 0x4000);
SET64(4, (s64)(s32)0x42a00000);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(5) + 182), (u8)RW(6));
wr32(c, (RW(29) + 68), RW(4));
wr32(c, (RW(29) + 72), RW(3));
wr32(c, (RW(29) + 76), RW(2));
wr32(c, (RW(29) + 64), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 1248)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2dceb8); SET32(5, RW(29) + 64); rt_call(c, t); }
SET64(31, 0x2dcec0); SET64(4, (s32)rd32(c, (RW(18) + 1248))); JP_F_0022A450(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DCED0; }
SET64(31, 0x2dced0); SET64(4, RD(2) + RD(0)); JP_F_0022C390(c);
L_002DCED0:;
SET64(31, 0x2dced8);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 1248))); goto L_002DCEEC; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(18) + 1248)));
L_002DCEEC:;
SET64(31, 0x2dcef4);  JP_F_0022A3D0(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002DCF10(Ctx *c) { /* func_002DCF10 */
ENTER(0x2dcf10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[0].u = RW(0);
c->f[1].u = rd32(c, (RW(4) + 1268));
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(5, rd16(c, (RW(4) + 1272))); goto L_002DCF40; }
SET64(3, (s64)(s32)0x530000);
c->f[0].u = rd32(c, (RW(3) + -22384));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(4) + 1268), c->f[0].u); goto L_002DCFC8;
L_002DCF40:;
SET32(3, RW(0) + 4);
{ int t = RD(5) == RD(3);  if (t) goto L_002DCFC0; }
SET32(3, RW(0) + 3);
{ int t = RD(5) == RD(3);  if (t) goto L_002DCFB0; }
SET32(3, RW(0) + 2);
{ int t = RD(5) == RD(3);  if (t) goto L_002DCFA0; }
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3);  if (t) goto L_002DCF90; }
{ int t = RD(5) == RD(0);  if (t) goto L_002DCF80; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002DCFCC;
L_002DCF80:;
SET64(31, 0x2dcf88);  JP_F_002DA990(c);
 goto L_002DCFC8;
L_002DCF90:;
SET64(31, 0x2dcf98);  JP_F_002DB830(c);
 goto L_002DCFC8;
L_002DCFA0:;
SET64(31, 0x2dcfa8);  JP_F_002DA990(c);
 goto L_002DCFC8;
L_002DCFB0:;
SET64(31, 0x2dcfb8);  JP_F_002DA4B0(c);
 goto L_002DCFC8;
L_002DCFC0:;
SET64(31, 0x2dcfc8);  JP_F_002D9310(c);
L_002DCFC8:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002DCFCC:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002DCFE0(Ctx *c) { /* func_002DCFE0 */
ENTER(0x2dcfe0);
SET32(29, RW(29) + -208);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(17) + 1224)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2dd00c); SET32(4, RW(17) + 1208); rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_002DD264; }
SET64(25, (s32)rd32(c, (RW(17) + 1224)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2dd024); SET32(4, RW(17) + 1208); rt_call(c, t); }
SET64(31, 0x2dd02c); SET32(4, RW(0) + 4); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 1256), RW(2)); goto L_002DD04C; }
SET64(4, (s32)rd32(c, (RW(17) + 1228)));
SET64(3, (s32)rd32(c, (RW(17) + 1232)));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(3) + RW(4));
wr32(c, (RW(2) + 0), RW(3));
wr32(c, (RW(17) + 1256), RW(2));
L_002DD04C:;
SET64(2, rd8(c, (RW(17) + 1292)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 1252))); goto L_002DD1A8; }
SET64(31, 0x2dd060); SET32(4, RW(0) + 976); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002DD074; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2dd074); SET32(5, RW(0) + 1); JP_F_002BE800(c);
L_002DD074:;
wr32(c, (RW(17) + 1252), RW(16));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 188), RW(2));
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 176), RW(0));
rd128(c, (RW(2) + -28720) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 180), RW(0));
wr32(c, (RW(29) + 184), RW(0));
SET64(2, (s64)(s32)0x4c0000);
wr128(c, (RW(29) + 176) & ~15u, &c->r[3]);
c->f[1].u = rd32(c, (RW(2) + -28752));
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -28748));
wr32(c, (RW(29) + 200), c->f[1].u);
SET64(31, 0x2dd0b4); wr32(c, (RW(29) + 204), c->f[0].u); JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 0)));
SET64(19, rd16(c, (RW(28) + -30220)));
SET64(18, (s32)rd32(c, (RW(17) + 1256)));
SET64(31, 0x2dd0c8); SET32(4, RW(29) + 128); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 148), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 144), RW(2));
wr32(c, (RW(29) + 156), RW(0));
wr16(c, (RW(29) + 160), (u16)RW(0));
wr16(c, (RW(29) + 162), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(18) + 0)));
SET64(31, 0x2dd0f4); SET32(4, RW(29) + 128); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 148)));
SET64(2, RD(19) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 152)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 128);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -32);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(18, RW(3) + RW(5));
SET64(31, 0x2dd124); wr32(c, (RW(29) + 144), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 128);
SET64(31, 0x2dd130); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2dd13c); SET64(5, RD(0) + RD(0)); JP_F_0022CB90(c);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(8, RD(2) + RD(0));
SET64(9, RD(18) + RD(0));
SET32(5, RW(29) + 176);
SET32(6, RW(29) + 200);
SET32(7, RW(0) + 1);
SET64(10, RD(0) + RD(0));
SET64(31, 0x2dd160); SET64(11, RD(0) + RD(0)); JP_F_002BE370(c);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 188)));
{ u32 t = RW(25); SET64(31, 0x2dd174); SET32(5, RW(17) + 1290); rt_call(c, t); }
SET64(31, 0x2dd17c);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 1252))); goto L_002DD190; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
L_002DD190:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x2dd1a0);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 1252))); goto L_002DD250;
L_002DD1A8:;
SET64(31, 0x2dd1b0);  JP_F_001432F0(c);
wr32(c, (RW(17) + 1264), RW(2));
SET64(18, rd16(c, (RW(28) + -30220)));
SET64(16, (s32)rd32(c, (RW(17) + 1256)));
SET64(31, 0x2dd1c4); SET32(4, RW(29) + 80); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 100), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 104), RW(0));
wr32(c, (RW(29) + 96), RW(2));
wr32(c, (RW(29) + 108), RW(0));
wr16(c, (RW(29) + 112), (u16)RW(0));
wr16(c, (RW(29) + 114), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2dd1f0); SET32(4, RW(29) + 80); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 100)));
SET64(2, RD(18) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 104)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 80);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -32);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2dd220); wr32(c, (RW(29) + 96), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 80);
SET64(31, 0x2dd22c); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(31, 0x2dd238); SET64(5, RD(16) + RD(0)); JP_F_00143300(c);
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 188)));
{ u32 t = RW(25); SET64(31, 0x2dd24c); SET32(5, RW(17) + 1290); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 1252)));
L_002DD250:;
SET32(5, RW(0) + 78);
SET32(3, RW(0) + 1);
wr32(c, (RW(4) + 776), RW(5));
wr16(c, (RW(17) + 0), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 64)));
L_002DD264:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 208); return;
}

void JP_F_002DD280(Ctx *c) { /* func_002DD280 */
ENTER(0x2dd280);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 2);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 0)));
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_002DD2D8; }
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3);  if (t) goto L_002DD2C8; }
{ int t = RD(5) == RD(0);  if (t) goto L_002DD2B8; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_002DD2F4;
L_002DD2B8:;
SET64(31, 0x2dd2c0);  JP_F_002DCFE0(c);
 goto L_002DD2F0;
L_002DD2C8:;
SET64(31, 0x2dd2d0);  JP_F_002DCF10(c);
 goto L_002DD2F0;
L_002DD2D8:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x2dd2e8);  rt_call(c, t); }
SET64(31, 0x2dd2f0); SET64(4, RD(16) + RD(0)); JP_F_00139AB0(c);
L_002DD2F0:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002DD2F4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002DD300(Ctx *c) { /* func_002DD300 */
ENTER(0x2dd300);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2dd318); SET64(4, (s32)rd32(c, (RW(4) + 1260))); JP_F_001004B0(c);
wr32(c, (RW(16) + 1260), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 1248)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 1248), RW(0)); goto L_002DD33C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2dd338); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 1248), RW(0));
L_002DD33C:;
SET64(31, 0x2dd344); SET64(4, (s32)rd32(c, (RW(16) + 1256))); JP_F_001004B0(c);
wr32(c, (RW(16) + 1256), RW(0));
SET64(2, rd8(c, (RW(16) + 1292)));
if (RD(2) != RD(0)) { wr8(c, (RW(16) + 1292), (u8)RW(0)); goto L_002DD378; }
SET64(4, (s32)rd32(c, (RW(16) + 1252)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 1252), RW(0)); goto L_002DD374; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2dd370); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 1252), RW(0));
L_002DD374:;
wr8(c, (RW(16) + 1292), (u8)RW(0));
L_002DD378:;
wr32(c, (RW(16) + 1252), RW(0));
SET64(31, 0x2dd384); SET64(4, (s32)rd32(c, (RW(16) + 1244))); JP_F_00100430(c);
wr32(c, (RW(16) + 1244), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 1296)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 1296), RW(0)); goto L_002DD3A8; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2dd3a4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 1296), RW(0));
L_002DD3A8:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002DD3C0(Ctx *c) { /* func_002DD3C0 */
ENTER(0x2dd3c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2dd3d8); SET32(4, RW(16) + 60); JP_F_002E1790(c);
SET64(25, (s32)rd32(c, (RW(16) + 1224)));
SET32(4, RW(16) + 1208);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2dd3ec); SET32(5, RW(0) + 12568); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1224)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2dd3fc); SET32(4, RW(16) + 1208); rt_call(c, t); }
SET64(31, 0x2dd404); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
wr32(c, (RW(16) + 1244), RW(2));
SET32(4, RW(16) + 1208);
SET64(25, (s32)rd32(c, (RW(16) + 1224)));
SET64(5, RD(2) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2dd424); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
wr32(c, (RW(16) + 1268), RW(0));
SET64(4, RD(0) | 0xffff);
wr16(c, (RW(16) + 1284), (u16)RW(4));
SET32(3, RW(0) + -1);
wr16(c, (RW(16) + 1276), (u16)RW(4));
wr16(c, (RW(16) + 1274), (u16)RW(4));
wr16(c, (RW(16) + 1272), (u16)RW(4));
wr16(c, (RW(16) + 1286), (u16)RW(0));
wr16(c, (RW(16) + 1290), (u16)RW(3));
wr16(c, (RW(16) + 0), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002DD460(Ctx *c) { /* func_002DD460 */
ENTER(0x2dd460);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x47580000);
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s64)(s32)0xeeee0000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, RD(3) | 0x4d43);
SET64(3, RD(2) | 0xeeee);
wr32(c, (RW(4) + 0), RW(5));
SET32(2, RW(0) + -1);
wr32(c, (RW(4) + 8), RW(3));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 12), RW(2));
SET64(31, 0x2dd498); SET32(4, RW(16) + 244); JP_F_002C8480(c);
SET64(31, 0x2dd4a0); SET32(4, RW(16) + 244); JP_F_002C8440(c);
SET64(31, 0x2dd4a8); SET32(4, RW(16) + 16); JP_F_002DE070(c);
wr16(c, (RW(16) + 344), (u16)RW(0));
SET64(14, (s64)(s32)0x420000);
wr16(c, (RW(16) + 346), (u16)RW(0));
SET64(13, (s64)(s32)0x420000);
wr8(c, (RW(16) + 348), (u8)RW(0));
SET64(12, (s64)(s32)0x420000);
wr8(c, (RW(16) + 349), (u8)RW(0));
SET64(11, (s64)(s32)0x420000);
wr8(c, (RW(16) + 350), (u8)RW(0));
SET64(10, (s64)(s32)0x420000);
SET64(3, (s64)(s32)0x420000);
wr8(c, (RW(16) + 351), (u8)RW(0));
c->f[0].u = rd32(c, (RW(3) + -30576));
SET64(9, (s64)(s32)0x420000);
SET64(8, (s64)(s32)0x420000);
SET64(7, (s64)(s32)0x420000);
SET64(2, (s64)(s32)0x420000);
SET32(14, RW(14) + -30568);
wr32(c, (RW(16) + 392), c->f[0].u);
SET32(13, RW(13) + -30560);
SET64(15, (s32)rd32(c, (RW(2) + -30572)));
SET32(12, RW(12) + -30552);
SET32(11, RW(11) + -30544);
SET64(6, (s64)(s32)0x420000);
SET64(5, (s64)(s32)0x420000);
SET32(10, RW(10) + -30616);
wr32(c, (RW(16) + 396), RW(15));
SET32(2, RW(0) + 3492);
c->f[0].u = rd32(c, (RW(14) + 0));
SET32(4, RW(2) + -1);
SET32(9, RW(9) + -30608);
SET32(8, RW(8) + -30600);
SET32(7, RW(7) + -30592);
SET64(3, RD(0) + RD(0));
wr32(c, (RW(16) + 400), c->f[0].u);
SET32(2, RW(16) + 16);
SET64(14, (s32)rd32(c, (RW(14) + 4)));
wr32(c, (RW(16) + 404), RW(14));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(16) + 408), c->f[0].u);
SET64(13, (s32)rd32(c, (RW(13) + 4)));
wr32(c, (RW(16) + 412), RW(13));
c->f[0].u = rd32(c, (RW(12) + 0));
wr32(c, (RW(16) + 416), c->f[0].u);
SET64(12, (s32)rd32(c, (RW(12) + 4)));
wr32(c, (RW(16) + 420), RW(12));
c->f[0].u = rd32(c, (RW(11) + 0));
wr32(c, (RW(16) + 424), c->f[0].u);
SET64(11, (s32)rd32(c, (RW(11) + 4)));
wr32(c, (RW(16) + 428), RW(11));
SET64(6, (s32)rd32(c, (RW(6) + -30624)));
wr32(c, (RW(16) + 352), RW(6));
SET64(5, (s32)rd32(c, (RW(5) + -30620)));
wr32(c, (RW(16) + 356), RW(5));
SET64(5, (s32)rd32(c, (RW(10) + 0)));
wr32(c, (RW(16) + 360), RW(5));
SET64(5, (s32)rd32(c, (RW(10) + 4)));
wr32(c, (RW(16) + 364), RW(5));
SET64(5, (s32)rd32(c, (RW(9) + 0)));
wr32(c, (RW(16) + 368), RW(5));
SET64(5, (s32)rd32(c, (RW(9) + 4)));
wr32(c, (RW(16) + 372), RW(5));
SET64(5, (s32)rd32(c, (RW(8) + 0)));
wr32(c, (RW(16) + 376), RW(5));
SET64(5, (s32)rd32(c, (RW(8) + 4)));
wr32(c, (RW(16) + 380), RW(5));
SET64(5, (s32)rd32(c, (RW(7) + 0)));
wr32(c, (RW(16) + 384), RW(5));
SET64(5, (s32)rd32(c, (RW(7) + 4)));
{ int t = RD(4) == RD(0); wr32(c, (RW(16) + 388), RW(5)); if (t) goto L_002DD5E8; }
SET32(5, RW(0) + 1);
L_002DD5C8:;
SET64(6, rd8(c, (RW(2) + 0)));
if (RD(6) == RD(0)) { SET64(6, RD(5) + RD(0)); goto L_002DD5D8; }
SET64(6, RD(6) & 0xff);
L_002DD5D8:;
SET32(4, RW(4) + -1);
SET32(3, RW(3) + RW(6));
{ int t = RD(4) != RD(0); SET32(2, RW(2) + 1); if (t) { POLL(); goto L_002DD5C8; } }
L_002DD5E8:;
wr32(c, (RW(16) + 4), RW(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002DD600(Ctx *c) { /* func_002DD600 */
ENTER(0x2dd600);
SET64(3, rd8(c, (RW(4) + 332)));
if (RD(3) != RD(0)) { SET64(5, rd8(c, (RW(4) + 133))); goto L_002DD68C; }
SET64(3, rd16(c, (RW(4) + 330)));
SET64(1, RSD(3) < (s64)66);
if (RD(1) != RD(0)) { SET64(3, rd8(c, (RW(4) + 333))); goto L_002DD644; }
SET64(5, rd8(c, (RW(4) + 133)));
SET64(3, RD(5) & 0x1);
{ int t = RD(3) != RD(0);  if (t) goto L_002DD640; }
SET64(3, RD(5) | 0x5);
wr8(c, (RW(4) + 133), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 133)));
SET64(3, RD(3) & 0xfd);
wr8(c, (RW(4) + 133), (u8)RW(3));
L_002DD640:;
SET64(3, rd8(c, (RW(4) + 333)));
L_002DD644:;
if (RD(3) == RD(0)) { SET64(5, RD(0) + RD(0)); goto L_002DD6D4; }
SET64(3, rd8(c, (RW(4) + 334)));
{ int t = RD(3) == RD(0);  if (t) goto L_002DD6D0; }
SET64(3, rd8(c, (RW(4) + 335)));
{ int t = RD(3) == RD(0);  if (t) goto L_002DD6D0; }
SET64(5, rd8(c, (RW(4) + 135)));
SET64(3, RD(5) & 0x1);
{ int t = RD(3) != RD(0);  if (t) goto L_002DD6D0; }
SET64(3, RD(5) | 0x5);
wr8(c, (RW(4) + 135), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 135)));
SET64(3, RD(3) & 0xfd);
wr8(c, (RW(4) + 135), (u8)RW(3)); goto L_002DD6D0;
L_002DD68C:;
SET64(3, RD(5) & 0x1);
if (RD(3) != RD(0)) { SET64(5, rd8(c, (RW(4) + 134))); goto L_002DD6B0; }
SET64(3, RD(5) | 0x5);
wr8(c, (RW(4) + 133), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 133)));
SET64(3, RD(3) & 0xfd);
wr8(c, (RW(4) + 133), (u8)RW(3));
SET64(5, rd8(c, (RW(4) + 134)));
L_002DD6B0:;
SET64(3, RD(5) & 0x1);
{ int t = RD(3) != RD(0);  if (t) goto L_002DD6D0; }
SET64(3, RD(5) | 0x5);
wr8(c, (RW(4) + 134), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 134)));
SET64(3, RD(3) & 0xfd);
wr8(c, (RW(4) + 134), (u8)RW(3));
L_002DD6D0:;
SET64(5, RD(0) + RD(0));
L_002DD6D4:;
SET32(3, RW(4) + RW(5));
L_002DD6D8:;
SET64(3, rd8(c, (RW(3) + 0)));
SET64(3, RD(3) & 0x1);
{ int t = RD(3) == RD(0);  if (t) goto L_002DD6F8; }
SET32(5, RW(5) + 1);
SET64(3, RSD(5) < (s64)49);
if (RD(3) != RD(0)) { SET32(3, RW(4) + RW(5)); { POLL(); goto L_002DD6D8; } }
L_002DD6F8:;
SET32(3, RW(0) + 49);
{ int t = RD(5) != RD(3);  if (t) goto L_002DD728; }
SET64(5, rd8(c, (RW(4) + 136)));
SET64(3, RD(5) & 0x1);
{ int t = RD(3) != RD(0);  if (t) goto L_002DD728; }
SET64(3, RD(5) | 0x5);
wr8(c, (RW(4) + 136), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 136)));
SET64(3, RD(3) & 0xfd);
wr8(c, (RW(4) + 136), (u8)RW(3));
L_002DD728:;
 return;
}

void JP_F_002DD730(Ctx *c) { /* func_002DD730 */
ENTER(0x2dd730);
SET32(2, RW(0) + 4);
SET32(3, RW(4) + RW(2));
L_002DD738:;
SET64(3, rd8(c, (RW(3) + 132)));
SET64(3, RD(3) & 0x1);
{ int t = RD(3) != RD(0);  if (t) goto L_002DD758; }
SET32(2, RW(2) + -1);
if (RSD(2) > 0) { SET32(3, RW(4) + RW(2)); { POLL(); goto L_002DD738; } }
L_002DD758:;
 return;
}

void JP_F_002DD760(Ctx *c) { /* func_002DD760 */
ENTER(0x2dd760);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 10)));
SET64(2, RD(3) & 0x1);
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002DD79C; }
SET64(2, RD(3) | 0xd);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 2736);
SET64(31, 0x2dd790); wr8(c, (RW(16) + 10), (u8)RW(2)); JP_F_002DD600(c);
SET64(2, rd8(c, (RW(16) + 10)));
SET64(2, RD(2) & 0xfd);
wr8(c, (RW(16) + 10), (u8)RW(2));
L_002DD79C:;
SET64(3, rd8(c, (RW(16) + 11)));
SET64(2, RD(3) & 0x1);
if (RD(2) != RD(0)) { SET64(3, rd8(c, (RW(16) + 12))); goto L_002DD7D0; }
SET64(2, RD(3) | 0xd);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 2736);
SET64(31, 0x2dd7c0); wr8(c, (RW(16) + 11), (u8)RW(2)); JP_F_002DD600(c);
SET64(2, rd8(c, (RW(16) + 11)));
SET64(2, RD(2) & 0xfd);
wr8(c, (RW(16) + 11), (u8)RW(2));
SET64(3, rd8(c, (RW(16) + 12)));
L_002DD7D0:;
SET64(2, RD(3) & 0x1);
if (RD(2) != RD(0)) { SET64(3, rd8(c, (RW(16) + 13))); goto L_002DD800; }
SET64(2, RD(3) | 0xd);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 2736);
SET64(31, 0x2dd7f0); wr8(c, (RW(16) + 12), (u8)RW(2)); JP_F_002DD600(c);
SET64(2, rd8(c, (RW(16) + 12)));
SET64(2, RD(2) & 0xfd);
wr8(c, (RW(16) + 12), (u8)RW(2));
SET64(3, rd8(c, (RW(16) + 13)));
L_002DD800:;
SET64(2, RD(3) & 0x1);
if (RD(2) != RD(0)) { SET64(3, rd8(c, (RW(16) + 14))); goto L_002DD830; }
SET64(2, RD(3) | 0xd);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 2736);
SET64(31, 0x2dd820); wr8(c, (RW(16) + 13), (u8)RW(2)); JP_F_002DD600(c);
SET64(2, rd8(c, (RW(16) + 13)));
SET64(2, RD(2) & 0xfd);
wr8(c, (RW(16) + 13), (u8)RW(2));
SET64(3, rd8(c, (RW(16) + 14)));
L_002DD830:;
SET64(2, RD(3) & 0x1);
if (RD(2) != RD(0)) { SET64(2, rd8(c, (RW(16) + 10))); goto L_002DD860; }
SET64(2, RD(3) | 0xd);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 2736);
SET64(31, 0x2dd850); wr8(c, (RW(16) + 14), (u8)RW(2)); JP_F_002DD600(c);
SET64(2, rd8(c, (RW(16) + 14)));
SET64(2, RD(2) & 0xfd);
wr8(c, (RW(16) + 14), (u8)RW(2));
SET64(2, rd8(c, (RW(16) + 10)));
L_002DD860:;
SET64(2, RD(2) & 0x8);
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 11))); goto L_002DD874; }
SET32(2, RW(0) + 1); goto L_002DD8B8;
L_002DD874:;
SET64(2, RD(2) & 0x8);
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_002DD888; }
SET32(2, RW(0) + 1); goto L_002DD8B8;
L_002DD888:;
SET64(2, RD(2) & 0x8);
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 13))); goto L_002DD89C; }
SET32(2, RW(0) + 1); goto L_002DD8B8;
L_002DD89C:;
SET64(2, RD(2) & 0x8);
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 14))); goto L_002DD8B0; }
SET32(2, RW(0) + 1); goto L_002DD8B8;
L_002DD8B0:;
SET64(2, RD(2) & 0x8);
SET64(2, RD(0) < RD(2));
L_002DD8B8:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002DD8D0(Ctx *c) { /* func_002DD8D0 */
ENTER(0x2dd8d0);
SET64(1, RSD(5) < (s64)5);
{ int t = RD(1) == RD(0);  if (t) goto L_002DDA60; }
SET64(1, RSD(5) < (s64)4);
{ int t = RD(1) == RD(0); SET32(3, RW(0) + 4); if (t) goto L_002DDA48; }
SET32(10, RW(3) - RW(5));
SET64(1, RSD(10) < (s64)9);
{ int t = RD(1) != RD(0); SET32(9, RW(5) + 8); if (t) goto L_002DDA10; }
SET64(1, RSD(5) < (s64)5);
SET64(12, RD(0) + RD(0));
SET64(11, RD(0) + RD(0));
{ int t = RD(1) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_002DD924; }
SET64(7, (s64)(s32)0x80000000);
SET64(7, RD(7) | 0x1);
SET64(7, RSD(5) < RSD(7));
{ int t = RD(7) != RD(0);  if (t) goto L_002DD924; }
SET64(8, RD(0) + (s64)1);
L_002DD924:;
{ int t = RD(8) == RD(0);  if (t) goto L_002DD93C; }
SET64(7, (s64)(s32)0x80000000);
{ int t = RD(5) == RD(7);  if (t) goto L_002DD93C; }
SET64(11, RD(0) + (s64)1);
L_002DD93C:;
{ int t = RD(11) == RD(0);  if (t) goto L_002DD974; }
SET32(7, RW(0) - RW(5));
SET64(8, (s64)(s32)0x80000000);
SET64(7, RD(7) & RD(8));
{ int t = RD(7) != RD(0); SET64(11, RD(0) + (s64)1); if (t) goto L_002DD968; }
SET64(7, RD(10) & RD(8));
{ int t = RD(7) == RD(0);  if (t) goto L_002DD968; }
SET64(11, RD(0) + RD(0));
L_002DD968:;
{ int t = RD(11) == RD(0);  if (t) goto L_002DD974; }
SET64(12, RD(0) + (s64)1);
L_002DD974:;
{ int t = RD(12) == RD(0);  if (t) goto L_002DDA10; }
SET32(8, RW(4) + 32);
L_002DD980:;
c->f[0].u = rd32(c, (RW(8) + -8));
SET32(3, RW(3) + -8);
SET64(1, RSD(9) < RSD(3));
wr32(c, (RW(8) + 0), c->f[0].u);
SET64(7, (s32)rd32(c, (RW(8) + -4)));
wr32(c, (RW(8) + 4), RW(7));
c->f[0].u = rd32(c, (RW(8) + -16));
wr32(c, (RW(8) + -8), c->f[0].u);
SET64(7, (s32)rd32(c, (RW(8) + -12)));
wr32(c, (RW(8) + -4), RW(7));
c->f[0].u = rd32(c, (RW(8) + -24));
wr32(c, (RW(8) + -16), c->f[0].u);
SET64(7, (s32)rd32(c, (RW(8) + -20)));
wr32(c, (RW(8) + -12), RW(7));
c->f[0].u = rd32(c, (RW(8) + -32));
wr32(c, (RW(8) + -24), c->f[0].u);
SET64(7, (s32)rd32(c, (RW(8) + -28)));
wr32(c, (RW(8) + -20), RW(7));
c->f[0].u = rd32(c, (RW(8) + -40));
wr32(c, (RW(8) + -32), c->f[0].u);
SET64(7, (s32)rd32(c, (RW(8) + -36)));
wr32(c, (RW(8) + -28), RW(7));
c->f[0].u = rd32(c, (RW(8) + -48));
wr32(c, (RW(8) + -40), c->f[0].u);
SET64(7, (s32)rd32(c, (RW(8) + -44)));
wr32(c, (RW(8) + -36), RW(7));
c->f[0].u = rd32(c, (RW(8) + -56));
wr32(c, (RW(8) + -48), c->f[0].u);
SET64(7, (s32)rd32(c, (RW(8) + -52)));
wr32(c, (RW(8) + -44), RW(7));
c->f[0].u = rd32(c, (RW(8) + -64));
wr32(c, (RW(8) + -56), c->f[0].u);
SET64(7, (s32)rd32(c, (RW(8) + -60)));
wr32(c, (RW(8) + -52), RW(7));
{ int t = RD(1) != RD(0); SET32(8, RW(8) + -64); if (t) { POLL(); goto L_002DD980; } }
L_002DDA10:;
SET64(1, RSD(5) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002DDA48; }
SET32(7, RW(3) << 3);
SET32(8, RW(4) + RW(7));
L_002DDA24:;
c->f[0].u = rd32(c, (RW(8) + -8));
SET32(3, RW(3) + -1);
SET64(1, RSD(5) < RSD(3));
wr32(c, (RW(8) + 0), c->f[0].u);
SET64(7, (s32)rd32(c, (RW(8) + -4)));
wr32(c, (RW(8) + 4), RW(7));
{ int t = RD(1) != RD(0); SET32(8, RW(8) + -8); if (t) { POLL(); goto L_002DDA24; } }
L_002DDA48:;
SET32(3, RW(5) << 3);
c->f[0].u = rd32(c, (RW(6) + 0));
SET32(4, RW(4) + RW(3));
wr32(c, (RW(4) + 0), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(6) + 4)));
wr32(c, (RW(4) + 4), RW(3));
L_002DDA60:;
 return;
}

void JP_F_002DDA70(Ctx *c) { /* func_002DDA70 */
ENTER(0x2dda70);
c->f[1].u = rd32(c, (RW(5) + 0));
SET32(2, RW(4) + 32);
SET32(3, RW(0) + 4);
L_002DDA7C:;
c->f[0].u = rd32(c, (RW(2) + 0));
c->fcc = F(0) <= F(1);
{ int t = c->fcc;  if (t) goto L_002DDA98; }
SET32(3, RW(3) + -1);
{ int t = RSD(3) >= 0; SET32(2, RW(2) + -8); if (t) { POLL(); goto L_002DDA7C; } }
L_002DDA98:;
SET32(2, RW(3) + 1); return;
}

void JP_F_002DDAA0(Ctx *c) { /* func_002DDAA0 */
ENTER(0x2ddaa0);
SET64(1, RSD(5) < (s64)5);
{ int t = RD(1) == RD(0);  if (t) goto L_002DDC30; }
SET64(1, RSD(5) < (s64)4);
{ int t = RD(1) == RD(0); SET32(7, RW(0) + 4); if (t) goto L_002DDC18; }
SET32(10, RW(7) - RW(5));
SET64(1, RSD(10) < (s64)9);
{ int t = RD(1) != RD(0); SET32(3, RW(5) + 8); if (t) goto L_002DDBE0; }
SET64(1, RSD(5) < (s64)5);
SET64(12, RD(0) + RD(0));
SET64(11, RD(0) + RD(0));
{ int t = RD(1) == RD(0); SET64(9, RD(0) + RD(0)); if (t) goto L_002DDAF4; }
SET64(8, (s64)(s32)0x80000000);
SET64(8, RD(8) | 0x1);
SET64(8, RSD(5) < RSD(8));
{ int t = RD(8) != RD(0);  if (t) goto L_002DDAF4; }
SET64(9, RD(0) + (s64)1);
L_002DDAF4:;
{ int t = RD(9) == RD(0);  if (t) goto L_002DDB0C; }
SET64(8, (s64)(s32)0x80000000);
{ int t = RD(5) == RD(8);  if (t) goto L_002DDB0C; }
SET64(11, RD(0) + (s64)1);
L_002DDB0C:;
{ int t = RD(11) == RD(0);  if (t) goto L_002DDB44; }
SET32(8, RW(0) - RW(5));
SET64(9, (s64)(s32)0x80000000);
SET64(8, RD(8) & RD(9));
{ int t = RD(8) != RD(0); SET64(11, RD(0) + (s64)1); if (t) goto L_002DDB38; }
SET64(8, RD(10) & RD(9));
{ int t = RD(8) == RD(0);  if (t) goto L_002DDB38; }
SET64(11, RD(0) + RD(0));
L_002DDB38:;
{ int t = RD(11) == RD(0);  if (t) goto L_002DDB44; }
SET64(12, RD(0) + (s64)1);
L_002DDB44:;
{ int t = RD(12) == RD(0);  if (t) goto L_002DDBE0; }
SET32(9, RW(4) + 32);
L_002DDB50:;
SET64(8, (s32)rd32(c, (RW(9) + -8)));
SET32(7, RW(7) + -8);
SET64(1, RSD(3) < RSD(7));
wr32(c, (RW(9) + 0), RW(8));
SET64(8, (s32)rd32(c, (RW(9) + -4)));
wr32(c, (RW(9) + 4), RW(8));
SET64(8, (s32)rd32(c, (RW(9) + -16)));
wr32(c, (RW(9) + -8), RW(8));
SET64(8, (s32)rd32(c, (RW(9) + -12)));
wr32(c, (RW(9) + -4), RW(8));
SET64(8, (s32)rd32(c, (RW(9) + -24)));
wr32(c, (RW(9) + -16), RW(8));
SET64(8, (s32)rd32(c, (RW(9) + -20)));
wr32(c, (RW(9) + -12), RW(8));
SET64(8, (s32)rd32(c, (RW(9) + -32)));
wr32(c, (RW(9) + -24), RW(8));
SET64(8, (s32)rd32(c, (RW(9) + -28)));
wr32(c, (RW(9) + -20), RW(8));
SET64(8, (s32)rd32(c, (RW(9) + -40)));
wr32(c, (RW(9) + -32), RW(8));
SET64(8, (s32)rd32(c, (RW(9) + -36)));
wr32(c, (RW(9) + -28), RW(8));
SET64(8, (s32)rd32(c, (RW(9) + -48)));
wr32(c, (RW(9) + -40), RW(8));
SET64(8, (s32)rd32(c, (RW(9) + -44)));
wr32(c, (RW(9) + -36), RW(8));
SET64(8, (s32)rd32(c, (RW(9) + -56)));
wr32(c, (RW(9) + -48), RW(8));
SET64(8, (s32)rd32(c, (RW(9) + -52)));
wr32(c, (RW(9) + -44), RW(8));
SET64(8, (s32)rd32(c, (RW(9) + -64)));
wr32(c, (RW(9) + -56), RW(8));
SET64(8, (s32)rd32(c, (RW(9) + -60)));
wr32(c, (RW(9) + -52), RW(8));
{ int t = RD(1) != RD(0); SET32(9, RW(9) + -64); if (t) { POLL(); goto L_002DDB50; } }
L_002DDBE0:;
SET64(1, RSD(5) < RSD(7));
{ int t = RD(1) == RD(0);  if (t) goto L_002DDC18; }
SET32(3, RW(7) << 3);
SET32(8, RW(4) + RW(3));
L_002DDBF4:;
SET64(3, (s32)rd32(c, (RW(8) + -8)));
SET32(7, RW(7) + -1);
SET64(1, RSD(5) < RSD(7));
wr32(c, (RW(8) + 0), RW(3));
SET64(3, (s32)rd32(c, (RW(8) + -4)));
wr32(c, (RW(8) + 4), RW(3));
{ int t = RD(1) != RD(0); SET32(8, RW(8) + -8); if (t) { POLL(); goto L_002DDBF4; } }
L_002DDC18:;
SET32(3, RW(5) << 3);
SET32(4, RW(4) + RW(3));
SET64(3, (s32)rd32(c, (RW(6) + 0)));
wr32(c, (RW(4) + 0), RW(3));
SET64(3, (s32)rd32(c, (RW(6) + 4)));
wr32(c, (RW(4) + 4), RW(3));
L_002DDC30:;
 return;
}

void JP_F_002DDC40(Ctx *c) { /* func_002DDC40 */
ENTER(0x2ddc40);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(4, RW(4) + 32);
SET32(5, RW(0) + 4);
L_002DDC4C:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(1, RSD(2) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002DDC68; }
SET32(5, RW(5) + -1);
{ int t = RSD(5) >= 0; SET32(4, RW(4) + -8); if (t) { POLL(); goto L_002DDC4C; } }
L_002DDC68:;
SET32(2, RW(5) + 1); return;
}

void JP_F_002DDC70(Ctx *c) { /* func_002DDC70 */
ENTER(0x2ddc70);
SET64(3, rd16(c, (RW(4) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 0), (u16)RW(3));
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(0);  if (t) goto L_002DDC90; }
SET64(3, RD(0) | 0xffff);
wr16(c, (RW(4) + 0), (u16)RW(3));
L_002DDC90:;
 return;
}

void JP_F_002DDCA0(Ctx *c) { /* func_002DDCA0 */
ENTER(0x2ddca0);
SET64(5, RD(0) + RD(0));
SET64(3, RD(0) + RD(0));
SET32(2, RW(4) + RW(3));
L_002DDCAC:;
SET64(2, rd8(c, (RW(2) + 0)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_002DDCC0; }
SET32(5, RW(5) + 1);
L_002DDCC0:;
SET32(3, RW(3) + 1);
SET64(2, RSD(3) < (s64)166);
if (RD(2) != RD(0)) { SET32(2, RW(4) + RW(3)); { POLL(); goto L_002DDCAC; } }
SET32(4, RW(5) + -9);
SET64(2, (s64)(s32)0x342d0000);
SET32(3, RW(4) << 2);
SET64(2, RD(2) | 0xa7f3);
SET32(4, RW(3) + RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(4) + RW(3));
SET32(3, RW(3) << 2);
mul_s(c, 0, 0, RSW(2), RSW(3));
SET64(2, c->hi.d[0]);
SET32(3, RW(3) >> 31);
SET32(2, RSW(2) >> 5);
SET32(2, RW(2) + RW(3));
{ int t = RD(2) != RD(0);  if (t) goto L_002DDD18; }
{ int t = RD(5) == RD(0);  if (t) goto L_002DDD18; }
SET32(2, RW(0) + 1);
L_002DDD18:;
 return;
}

void JP_F_002DDD20(Ctx *c) { /* func_002DDD20 */
ENTER(0x2ddd20);
SET64(2, RD(0) + RD(0));
SET32(3, RW(4) + RW(2));
L_002DDD28:;
SET64(3, rd8(c, (RW(3) + 0)));
SET64(3, RD(3) & 0x8);
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
if (RD(3) != RD(0)) { SET32(2, RW(2) + 1); goto L_002DDD48; }
 goto L_002DDD58;
L_002DDD48:;
SET64(3, RSD(2) < (s64)228);
if (RD(3) != RD(0)) { SET32(3, RW(4) + RW(2)); { POLL(); goto L_002DDD28; } }
SET32(2, RW(0) + -1);
L_002DDD58:;
 return;
}

void JP_F_002DDD60(Ctx *c) { /* func_002DDD60 */
ENTER(0x2ddd60);
SET64(3, RD(0) + RD(0));
SET32(2, RW(4) + RW(3));
L_002DDD68:;
SET64(2, rd8(c, (RW(2) + 0)));
SET64(2, RD(2) & 0x8);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
if (RD(2) != RD(0)) { SET32(3, RW(3) + 1); goto L_002DDD88; }
SET32(2, RW(0) + 1); goto L_002DDD98;
L_002DDD88:;
SET64(2, RSD(3) < (s64)228);
if (RD(2) != RD(0)) { SET32(2, RW(4) + RW(3)); { POLL(); goto L_002DDD68; } }
SET64(2, RD(0) + RD(0));
L_002DDD98:;
 return;
}

void JP_F_002DDDA0(Ctx *c) { /* func_002DDDA0 */
ENTER(0x2ddda0);
SET32(7, RW(4) + RW(5));
SET64(3, RSD(5) < (s64)62);
SET64(6, rd8(c, (RW(7) + 0)));
SET64(6, RD(6) & 0xf7);
{ int t = RD(3) != RD(0); wr8(c, (RW(7) + 0), (u8)RW(6)); if (t) goto L_002DDFE0; }
SET64(1, RSD(5) < (s64)181);
if (RD(1) == RD(0)) { SET64(1, RSD(5) < (s64)189); goto L_002DDEC4; }
SET64(3, RD(0) + RD(0));
L_002DDDC8:;
SET32(7, RW(4) + RW(3));
SET64(6, rd8(c, (RW(7) + 62)));
SET32(3, RW(3) + 8);
SET64(5, RSD(3) < (s64)111);
SET64(6, RD(6) & 0xf7);
wr8(c, (RW(7) + 62), (u8)RW(6));
SET64(6, rd8(c, (RW(7) + 63)));
SET64(6, RD(6) & 0xf7);
wr8(c, (RW(7) + 63), (u8)RW(6));
SET64(6, rd8(c, (RW(7) + 64)));
SET64(6, RD(6) & 0xf7);
wr8(c, (RW(7) + 64), (u8)RW(6));
SET64(6, rd8(c, (RW(7) + 65)));
SET64(6, RD(6) & 0xf7);
wr8(c, (RW(7) + 65), (u8)RW(6));
SET64(6, rd8(c, (RW(7) + 66)));
SET64(6, RD(6) & 0xf7);
wr8(c, (RW(7) + 66), (u8)RW(6));
SET64(6, rd8(c, (RW(7) + 67)));
SET64(6, RD(6) & 0xf7);
wr8(c, (RW(7) + 67), (u8)RW(6));
SET64(6, rd8(c, (RW(7) + 68)));
SET64(6, RD(6) & 0xf7);
wr8(c, (RW(7) + 68), (u8)RW(6));
SET64(6, rd8(c, (RW(7) + 69)));
SET64(6, RD(6) & 0xf7);
{ int t = RD(5) != RD(0); wr8(c, (RW(7) + 69), (u8)RW(6)); if (t) { POLL(); goto L_002DDDC8; } }
SET32(11, RW(3) + RW(4));
SET32(5, RW(3) + 1);
SET64(9, rd8(c, (RW(11) + 62)));
SET32(10, RW(5) + RW(4));
SET32(6, RW(3) + 2);
SET32(5, RW(3) + 3);
SET32(8, RW(6) + RW(4));
SET32(7, RW(5) + RW(4));
SET64(6, RD(9) & 0xf7);
SET32(5, RW(3) + 4);
wr8(c, (RW(11) + 62), (u8)RW(6));
SET32(6, RW(5) + RW(4));
SET64(9, rd8(c, (RW(10) + 62)));
SET32(5, RW(3) + 5);
SET32(5, RW(5) + RW(4));
SET32(3, RW(3) + 6);
SET32(4, RW(3) + RW(4));
SET64(3, RD(9) & 0xf7);
wr8(c, (RW(10) + 62), (u8)RW(3));
SET64(3, rd8(c, (RW(8) + 62)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(8) + 62), (u8)RW(3));
SET64(3, rd8(c, (RW(7) + 62)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(7) + 62), (u8)RW(3));
SET64(3, rd8(c, (RW(6) + 62)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(6) + 62), (u8)RW(3));
SET64(3, rd8(c, (RW(5) + 62)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(5) + 62), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 62)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(4) + 62), (u8)RW(3)); goto L_002DDFE0;
L_002DDEC4:;
if (RD(1) == RD(0)) { SET64(9, RD(0) + RD(0)); goto L_002DDF30; }
SET64(3, rd8(c, (RW(4) + 181)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(4) + 181), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 182)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(4) + 182), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 183)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(4) + 183), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 184)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(4) + 184), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 185)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(4) + 185), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 186)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(4) + 186), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 187)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(4) + 187), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 188)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(4) + 188), (u8)RW(3)); goto L_002DDFE0;
L_002DDF30:;
SET32(6, RW(4) + RW(9));
SET64(5, rd8(c, (RW(6) + 189)));
SET32(9, RW(9) + 7);
SET64(3, RSD(9) < (s64)32);
SET64(5, RD(5) & 0xf7);
wr8(c, (RW(6) + 189), (u8)RW(5));
SET64(5, rd8(c, (RW(6) + 190)));
SET64(5, RD(5) & 0xf7);
wr8(c, (RW(6) + 190), (u8)RW(5));
SET64(5, rd8(c, (RW(6) + 191)));
SET64(5, RD(5) & 0xf7);
wr8(c, (RW(6) + 191), (u8)RW(5));
SET64(5, rd8(c, (RW(6) + 192)));
SET64(5, RD(5) & 0xf7);
wr8(c, (RW(6) + 192), (u8)RW(5));
SET64(5, rd8(c, (RW(6) + 193)));
SET64(5, RD(5) & 0xf7);
wr8(c, (RW(6) + 193), (u8)RW(5));
SET64(5, rd8(c, (RW(6) + 194)));
SET64(5, RD(5) & 0xf7);
wr8(c, (RW(6) + 194), (u8)RW(5));
SET64(5, rd8(c, (RW(6) + 195)));
SET64(5, RD(5) & 0xf7);
{ int t = RD(3) != RD(0); wr8(c, (RW(6) + 195), (u8)RW(5)); if (t) { POLL(); goto L_002DDF30; } }
SET32(8, RW(9) + RW(4));
SET32(3, RW(9) + 1);
SET32(6, RW(3) + RW(4));
SET32(5, RW(9) + 2);
SET64(7, rd8(c, (RW(8) + 189)));
SET32(3, RW(9) + 3);
SET32(5, RW(5) + RW(4));
SET32(4, RW(3) + RW(4));
SET64(3, RD(7) & 0xf7);
wr8(c, (RW(8) + 189), (u8)RW(3));
SET64(3, rd8(c, (RW(6) + 189)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(6) + 189), (u8)RW(3));
SET64(3, rd8(c, (RW(5) + 189)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(5) + 189), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 189)));
SET64(3, RD(3) & 0xf7);
wr8(c, (RW(4) + 189), (u8)RW(3));
L_002DDFE0:;
 return;
}

void JP_F_002DDFF0(Ctx *c) { /* func_002DDFF0 */
ENTER(0x2ddff0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(16, RW(4) + RW(5));
SET64(4, rd8(c, (RW(16) + 0)));
SET64(3, RD(4) & 0x1);
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002DE05C; }
SET64(3, RSD(5) < (s64)132);
if (RD(3) != RD(0)) { SET64(2, rd8(c, (RW(16) + 0))); goto L_002DE038; }
SET64(1, RSD(5) < (s64)137);
{ int t = RD(1) == RD(0);  if (t) goto L_002DE034; }
SET64(3, RD(4) | 0x5);
wr8(c, (RW(16) + 0), (u8)RW(3)); goto L_002DE04C;
L_002DE034:;
SET64(2, rd8(c, (RW(16) + 0)));
L_002DE038:;
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 2736);
SET64(2, RD(2) | 0xd);
SET64(31, 0x2de04c); wr8(c, (RW(16) + 0), (u8)RW(2)); JP_F_002DD600(c);
L_002DE04C:;
SET64(3, rd8(c, (RW(16) + 0)));
SET64(3, RD(3) & 0xfd);
wr8(c, (RW(16) + 0), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
L_002DE05C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002DE070(Ctx *c) { /* func_002DE070 */
ENTER(0x2de070);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, RD(0) + RD(0));
L_002DE08C:;
SET32(3, RW(18) + RW(4));
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(4, RW(4) + 8);
wr8(c, (RW(3) + 1), (u8)RW(0));
SET64(2, RSD(4) < (s64)220);
wr8(c, (RW(3) + 2), (u8)RW(0));
wr8(c, (RW(3) + 3), (u8)RW(0));
wr8(c, (RW(3) + 4), (u8)RW(0));
wr8(c, (RW(3) + 5), (u8)RW(0));
wr8(c, (RW(3) + 6), (u8)RW(0));
{ int t = RD(2) != RD(0); wr8(c, (RW(3) + 7), (u8)RW(0)); if (t) { POLL(); goto L_002DE08C; } }
SET32(3, RW(18) + RW(4));
SET32(2, RW(4) + 1);
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(18) + RW(2));
wr8(c, (RW(2) + 0), (u8)RW(0));
SET64(17, RD(0) + RD(0));
SET32(2, RW(4) + 2);
SET32(3, RW(18) + RW(2));
SET32(2, RW(4) + 3);
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(18) + RW(2));
wr8(c, (RW(2) + 0), (u8)RW(0));
L_002DE0EC:;
SET32(16, RW(18) + RW(17));
SET64(3, rd8(c, (RW(16) + 0)));
SET64(2, RD(3) & 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_002DE150; }
SET64(2, RSD(17) < (s64)132);
{ int t = RD(2) != RD(0);  if (t) goto L_002DE128; }
SET64(1, RSD(17) < (s64)137);
{ int t = RD(1) == RD(0);  if (t) goto L_002DE128; }
SET64(2, RD(3) | 0x5);
wr8(c, (RW(16) + 0), (u8)RW(2)); goto L_002DE140;
L_002DE128:;
SET64(2, rd8(c, (RW(16) + 0)));
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 2736);
SET64(2, RD(2) | 0xd);
SET64(31, 0x2de140); wr8(c, (RW(16) + 0), (u8)RW(2)); JP_F_002DD600(c);
L_002DE140:;
SET64(2, rd8(c, (RW(16) + 0)));
SET64(2, RD(2) & 0xfd);
wr8(c, (RW(16) + 0), (u8)RW(2));
L_002DE150:;
SET64(2, rd8(c, (RW(16) + 0)));
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(2, RD(2) & 0xfb);
SET64(31, 0x2de168); wr8(c, (RW(16) + 0), (u8)RW(2)); JP_F_002DDDA0(c);
SET64(3, rd8(c, (RW(16) + 0)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)5);
SET64(3, RD(3) & 0xfd);
{ int t = RD(2) != RD(0); wr8(c, (RW(16) + 0), (u8)RW(3)); if (t) { POLL(); goto L_002DE0EC; } }
SET64(17, RD(0) + RD(0));
L_002DE184:;
SET32(2, RW(18) + RW(17));
SET64(4, rd8(c, (RW(2) + 49)));
SET32(16, RW(2) + 49);
SET64(2, RD(4) & 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_002DE1F0; }
SET32(3, RW(17) + 49);
SET64(2, RSD(3) < (s64)132);
{ int t = RD(2) != RD(0);  if (t) goto L_002DE1C8; }
SET64(1, RSD(3) < (s64)137);
{ int t = RD(1) == RD(0);  if (t) goto L_002DE1C8; }
SET64(2, RD(4) | 0x5);
wr8(c, (RW(16) + 0), (u8)RW(2)); goto L_002DE1E0;
L_002DE1C8:;
SET64(2, rd8(c, (RW(16) + 0)));
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 2736);
SET64(2, RD(2) | 0xd);
SET64(31, 0x2de1e0); wr8(c, (RW(16) + 0), (u8)RW(2)); JP_F_002DD600(c);
L_002DE1E0:;
SET64(2, rd8(c, (RW(16) + 0)));
SET64(2, RD(2) & 0xfd);
wr8(c, (RW(16) + 0), (u8)RW(2));
L_002DE1F0:;
SET64(2, rd8(c, (RW(16) + 0)));
SET32(5, RW(17) + 49);
SET64(4, RD(18) + RD(0));
SET64(2, RD(2) & 0xfb);
SET64(31, 0x2de208); wr8(c, (RW(16) + 0), (u8)RW(2)); JP_F_002DDDA0(c);
SET64(3, rd8(c, (RW(16) + 0)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)4);
SET64(3, RD(3) & 0xfd);
{ int t = RD(2) != RD(0); wr8(c, (RW(16) + 0), (u8)RW(3)); if (t) { POLL(); goto L_002DE184; } }
SET64(3, rd8(c, (RW(18) + 132)));
SET64(2, RD(3) & 0x1);
{ int t = RD(2) != RD(0); SET32(4, RW(18) + 132); if (t) goto L_002DE244; }
SET64(2, RD(3) | 0x5);
wr8(c, (RW(4) + 0), (u8)RW(2));
SET64(2, rd8(c, (RW(4) + 0)));
SET64(2, RD(2) & 0xfd);
wr8(c, (RW(4) + 0), (u8)RW(2));
L_002DE244:;
SET64(2, rd8(c, (RW(18) + 132)));
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 132);
SET32(16, RW(18) + 132);
SET64(2, RD(2) & 0xfb);
SET64(31, 0x2de260); wr8(c, (RW(18) + 132), (u8)RW(2)); JP_F_002DDDA0(c);
SET64(3, rd8(c, (RW(16) + 0)));
SET64(3, RD(3) & 0xfd);
wr8(c, (RW(16) + 0), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002DE290(Ctx *c) { /* func_002DE290 */
ENTER(0x2de290);
SET32(4, RW(4) + -4); { JP_F_002DA330(c); return; }
}

void JP_F_002DE2A0(Ctx *c) { /* func_002DE2A0 */
ENTER(0x2de2a0);
SET32(4, RW(4) + -24); { JP_F_002DA330(c); return; }
}

void JP_F_002DE2B0(Ctx *c) { /* func_002DE2B0 */
ENTER(0x2de2b0);
SET32(4, RW(4) + -60); { JP_F_002DA330(c); return; }
}

void JP_F_002DE2C0(Ctx *c) { /* func_002DE2C0 */
ENTER(0x2de2c0);
SET32(4, RW(4) + -4); { JP_F_0013CFE0(c); return; }
}

void JP_F_002DE2D0(Ctx *c) { /* func_002DE2D0 */
ENTER(0x2de2d0);
SET32(4, RW(4) + -24); { JP_F_0013CFE0(c); return; }
}

void JP_F_002DE2E0(Ctx *c) { /* func_002DE2E0 */
ENTER(0x2de2e0);
SET32(4, RW(4) + -60); { JP_F_0013CFE0(c); return; }
}

void JP_F_002DE2F0(Ctx *c) { /* func_002DE2F0 */
ENTER(0x2de2f0);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28136); return;
}

void JP_F_002DE300(Ctx *c) { /* func_002DE300 */
ENTER(0x2de300);
 return;
}

void JP_F_002DE310(Ctx *c) { /* func_002DE310 */
ENTER(0x2de310);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002DE3B4; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13440);
SET32(3, RW(3) + 13448);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 13460);
wr32(c, (RW(17) + 36), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 68), RW(0)); goto L_002DE370; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x2de36c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 68), RW(0));
L_002DE370:;
SET64(4, (s32)rd32(c, (RW(17) + 64)));
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002DE390; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2de38c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
L_002DE390:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x2de39c); wr32(c, (RW(17) + 64), RW(0)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002DE3B8; }
SET64(31, 0x2de3b4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002DE3B4:;
SET64(2, RD(17) + RD(0));
L_002DE3B8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002DE3D0(Ctx *c) { /* func_002DE3D0 */
ENTER(0x2de3d0);
SET32(29, RW(29) + -128);
SET64(3, (s64)(s32)0x3fd90000);
wr64(c, (RW(29) + 112), RD(31));
SET64(2, RD(0) | 0x9999);
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
SET64(3, RD(3) | 0x9999);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(2, RD(2) << 16);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(3, RD(3) << 32);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(2, RD(2) | 0x999a);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
SET64(16, RD(2) | RD(3));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = c->f[13].u;
c->f[21].u = c->f[12].u;
SET64(31, 0x2de42c); c->f[12].u = c->f[20].u; JP_F_00121728(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2de438); SET64(5, RD(2) + RD(0)); JP_F_00121C20(c);
SET64(31, 0x2de440); SET64(4, RD(2) + RD(0)); JP_F_001222E0(c);
SET64(2, (s32)rd32(c, (RW(17) + 68)));
SET64(4, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2de458); c->f[12].u = c->f[0].u; rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 68)));
SET64(5, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2de470); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x3fc90000);
SET64(2, RD(0) | 0x9999);
SET64(3, RD(3) | 0x9999);
SET64(2, RD(2) << 16);
SET64(3, RD(3) << 32);
SET64(2, RD(2) | 0x999a);
SET64(16, RD(2) | RD(3));
SET64(20, RD(0) + RD(0));
c->f[12].u = c->f[20].u;
SET64(31, 0x2de49c); SET64(18, RD(0) + RD(0)); JP_F_00121728(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2de4a8); SET64(5, RD(2) + RD(0)); JP_F_00121C20(c);
SET64(16, RD(2) + RD(0));
L_002DE4AC:;
c->f[1].u = RW(20);
SET64(3, (s64)(s32)0x40c90000);
c->f[1].f = (f32)(s32)c->f[1].u;
SET64(3, RD(3) | 0xfdb);
SET64(2, (s64)(s32)0x41000000);
SET64(4, (s32)rd32(c, (RW(17) + 68)));
SET32(5, RW(18) + 320);
SET64(4, (s32)rd32(c, (RW(4) + 144)));
c->f[2].u = RW(3);
c->f[1].f = fpu(F(2) * F(1));
SET32(19, RW(4) + RW(5));
c->f[0].u = RW(2);
c->f[22].f = fpu_div(F(1), F(0));
SET64(31, 0x2de4f8); c->f[12].u = c->f[22].u; JP_F_0011F450(c);
SET64(3, (s64)(s32)0x40c00000);
SET64(25, (s32)rd32(c, (RW(19) + 8)));
c->f[1].u = RW(3);
SET64(2, (s64)(s32)0xc3800000);
c->f[2].f = fpu(F(1) * F(0));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
{ u32 t = RW(25); SET64(31, 0x2de52c); c->f[12].f = fpu(c->facc + F(21) * F(2)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 68)));
SET32(3, RW(18) + 320);
c->f[12].u = c->f[22].u;
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(31, 0x2de544); SET32(19, RW(2) + RW(3)); JP_F_0011F6F0(c);
SET64(3, (s64)(s32)0x40c00000);
SET64(25, (s32)rd32(c, (RW(19) + 8)));
c->f[1].u = RW(3);
SET64(2, (s64)(s32)0xc2000000);
c->f[2].f = fpu(F(1) * F(0));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
{ u32 t = RW(25); SET64(31, 0x2de578); c->f[12].f = fpu(c->facc + F(21) * F(2)); rt_call(c, t); }
SET64(31, 0x2de580); SET64(4, RD(16) + RD(0)); JP_F_001222E0(c);
SET64(2, (s32)rd32(c, (RW(17) + 68)));
SET32(3, RW(18) + 320);
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2de5a0); c->f[12].u = c->f[0].u; rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 68)));
SET32(6, RW(20) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2de5b8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < (s64)8);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 320); if (t) { POLL(); goto L_002DE4AC; } }
SET64(2, (s64)(s32)0x3fb90000);
SET64(20, RD(0) + RD(0));
SET64(3, RD(2) | 0x9999);
SET64(2, RD(0) | 0x9999);
SET64(3, RD(3) << 32);
SET64(2, RD(2) << 16);
SET64(2, RD(2) | 0x999a);
c->f[12].u = c->f[20].u;
SET64(31, 0x2de5f0); SET64(16, RD(2) | RD(3)); JP_F_00121728(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2de5fc); SET64(5, RD(2) + RD(0)); JP_F_00121C20(c);
SET64(18, RD(2) + RD(0));
L_002DE600:;
c->f[1].u = RW(20);
SET64(2, (s64)(s32)0x40c90000);
c->f[1].f = (f32)(s32)c->f[1].u;
SET64(2, RD(2) | 0xfdb);
SET64(3, (s32)rd32(c, (RW(17) + 68)));
SET32(5, RW(20) + 9);
SET32(4, RW(5) << 2);
SET32(4, RW(4) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 144)));
SET32(16, RW(4) << 6);
c->f[2].u = RW(2);
c->f[1].f = fpu(F(2) * F(1));
SET64(2, (s64)(s32)0x41400000);
SET32(19, RW(3) + RW(16));
c->f[0].u = RW(2);
c->f[22].f = fpu_div(F(1), F(0));
SET64(31, 0x2de658); c->f[12].u = c->f[22].u; JP_F_0011F450(c);
SET64(3, (s64)(s32)0x41400000);
SET64(25, (s32)rd32(c, (RW(19) + 8)));
c->f[1].u = RW(3);
SET64(2, (s64)(s32)0xc3800000);
c->f[2].f = fpu(F(1) * F(0));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
{ u32 t = RW(25); SET64(31, 0x2de68c); c->f[12].f = fpu(c->facc + F(21) * F(2)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 68)));
c->f[12].u = c->f[22].u;
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(31, 0x2de6a0); SET32(19, RW(2) + RW(16)); JP_F_0011F6F0(c);
SET64(3, (s64)(s32)0x41400000);
SET64(25, (s32)rd32(c, (RW(19) + 8)));
c->f[1].u = RW(3);
SET64(2, (s64)(s32)0xc2000000);
c->f[2].f = fpu(F(1) * F(0));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
{ u32 t = RW(25); SET64(31, 0x2de6d4); c->f[12].f = fpu(c->facc + F(21) * F(2)); rt_call(c, t); }
SET64(31, 0x2de6dc); SET64(4, RD(18) + RD(0)); JP_F_001222E0(c);
SET64(2, (s32)rd32(c, (RW(17) + 68)));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2de6f8); c->f[12].u = c->f[0].u; rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 68)));
SET32(6, RW(20) + 9);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2de710); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < (s64)12);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002DE600; } }
SET64(2, (s64)(s32)0x3fb30000);
SET64(20, RD(0) + RD(0));
SET64(3, RD(2) | 0x3333);
SET64(2, (s64)(s32)0x33330000);
SET64(3, RD(3) << 32);
SET64(2, RD(2) | 0x3333);
SET64(16, RD(2) | RD(3));
SET64(31, 0x2de744); c->f[12].u = c->f[20].u; JP_F_00121728(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2de750); SET64(5, RD(2) + RD(0)); JP_F_00121C20(c);
SET64(18, RD(2) + RD(0));
L_002DE754:;
c->f[1].u = RW(20);
SET64(2, (s64)(s32)0x40c90000);
c->f[1].f = (f32)(s32)c->f[1].u;
SET64(2, RD(2) | 0xfdb);
SET64(3, (s32)rd32(c, (RW(17) + 68)));
SET32(5, RW(20) + 21);
SET32(4, RW(5) << 2);
SET32(4, RW(4) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 144)));
SET32(16, RW(4) << 6);
c->f[2].u = RW(2);
c->f[1].f = fpu(F(2) * F(1));
SET64(2, (s64)(s32)0x41800000);
SET32(19, RW(3) + RW(16));
c->f[0].u = RW(2);
c->f[22].f = fpu_div(F(1), F(0));
SET64(31, 0x2de7ac); c->f[12].u = c->f[22].u; JP_F_0011F450(c);
SET64(3, (s64)(s32)0x41900000);
SET64(25, (s32)rd32(c, (RW(19) + 8)));
c->f[1].u = RW(3);
SET64(2, (s64)(s32)0xc3800000);
c->f[2].f = fpu(F(1) * F(0));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
{ u32 t = RW(25); SET64(31, 0x2de7e0); c->f[12].f = fpu(c->facc + F(21) * F(2)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 68)));
c->f[12].u = c->f[22].u;
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(31, 0x2de7f4); SET32(19, RW(2) + RW(16)); JP_F_0011F6F0(c);
SET64(3, (s64)(s32)0x41900000);
SET64(25, (s32)rd32(c, (RW(19) + 8)));
c->f[1].u = RW(3);
SET64(2, (s64)(s32)0xc2000000);
c->f[2].f = fpu(F(1) * F(0));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
{ u32 t = RW(25); SET64(31, 0x2de828); c->f[12].f = fpu(c->facc + F(21) * F(2)); rt_call(c, t); }
SET64(31, 0x2de830); SET64(4, RD(18) + RD(0)); JP_F_001222E0(c);
SET64(2, (s32)rd32(c, (RW(17) + 68)));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2de84c); c->f[12].u = c->f[0].u; rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 68)));
SET32(6, RW(20) + 21);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2de864); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < (s64)16);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002DE754; } }
SET64(3, (s64)(s32)0x3fa90000);
SET64(2, RD(0) | 0x9999);
SET64(3, RD(3) | 0x9999);
SET64(2, RD(2) << 16);
SET64(3, RD(3) << 32);
SET64(2, RD(2) | 0x999a);
c->f[12].u = c->f[20].u;
SET64(18, RD(2) | RD(3));
SET64(31, 0x2de89c); SET64(16, RD(0) + RD(0)); JP_F_00121728(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2de8a8); SET64(5, RD(2) + RD(0)); JP_F_00121C20(c);
SET64(20, RD(2) + RD(0));
L_002DE8AC:;
c->f[1].u = RW(16);
SET64(2, (s64)(s32)0x40c90000);
c->f[1].f = (f32)(s32)c->f[1].u;
SET64(2, RD(2) | 0xfdb);
SET64(3, (s32)rd32(c, (RW(17) + 68)));
SET32(19, RW(16) + 37);
SET32(4, RW(19) << 2);
SET32(4, RW(4) + RW(19));
SET64(3, (s32)rd32(c, (RW(3) + 144)));
SET32(18, RW(4) << 6);
c->f[2].u = RW(2);
c->f[1].f = fpu(F(2) * F(1));
SET64(2, (s64)(s32)0x41a00000);
SET32(21, RW(3) + RW(18));
c->f[0].u = RW(2);
c->f[20].f = fpu_div(F(1), F(0));
SET64(31, 0x2de904); c->f[12].u = c->f[20].u; JP_F_0011F450(c);
SET64(3, (s64)(s32)0x41c00000);
SET64(25, (s32)rd32(c, (RW(21) + 8)));
c->f[1].u = RW(3);
SET64(2, (s64)(s32)0xc3800000);
c->f[2].f = fpu(F(1) * F(0));
SET64(4, RD(21) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
{ u32 t = RW(25); SET64(31, 0x2de938); c->f[12].f = fpu(c->facc + F(21) * F(2)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 68)));
c->f[12].u = c->f[20].u;
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(31, 0x2de94c); SET32(21, RW(2) + RW(18)); JP_F_0011F6F0(c);
SET64(3, (s64)(s32)0x41c00000);
SET64(25, (s32)rd32(c, (RW(21) + 8)));
c->f[1].u = RW(3);
SET64(2, (s64)(s32)0xc2000000);
c->f[2].f = fpu(F(1) * F(0));
SET64(4, RD(21) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
{ u32 t = RW(25); SET64(31, 0x2de980); c->f[12].f = fpu(c->facc + F(21) * F(2)); rt_call(c, t); }
SET64(31, 0x2de988); SET64(4, RD(20) + RD(0)); JP_F_001222E0(c);
SET64(2, (s32)rd32(c, (RW(17) + 68)));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2de9a4); c->f[12].u = c->f[0].u; rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 68)));
SET64(6, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2de9bc); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < (s64)20);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002DE8AC; } }
SET64(31, rd64(c, (RW(29) + 112)));
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002DEA00(Ctx *c) { /* func_002DEA00 */
ENTER(0x2dea00);
wr32(c, (RW(4) + 228), c->f[12].u); return;
}

void JP_F_002DEA10(Ctx *c) { /* func_002DEA10 */
ENTER(0x2dea10);
SET32(29, RW(29) + -96);
SET64(3, (s64)(s32)0x530000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = rd32(c, (RW(3) + -22384));
SET64(5, rd16(c, (RW(4) + 0)));
SET64(3, RD(0) | 0xff01);
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_002DEFE8; }
SET64(4, RD(0) | 0xff00);
if (RD(5) == RD(4)) { SET64(4, (s32)rd32(c, (RW(16) + 68))); goto L_002DEF94; }
SET32(3, RW(0) + 259);
if (RD(5) == RD(3)) { c->f[0].u = rd32(c, (RW(16) + 72)); goto L_002DEF2C; }
SET32(3, RW(0) + 258);
if (RD(5) == RD(3)) { c->f[1].u = rd32(c, (RW(16) + 72)); goto L_002DEEBC; }
SET32(3, RW(0) + 257);
{ int t = RD(5) == RD(3);  if (t) goto L_002DEE60; }
SET32(3, RW(0) + 256);
if (RD(5) == RD(3)) { c->f[4].u = rd32(c, (RW(16) + 72)); goto L_002DEC64; }
if (RD(5) == RD(0)) { SET64(3, (s64)(s32)0x40800000); goto L_002DEA94; }
SET64(4, (s32)rd32(c, (RW(16) + 68))); goto L_002DF05C;
L_002DEA94:;
SET64(2, (s64)(s32)0x3dcc0000);
wr32(c, (RW(16) + 72), RW(3));
SET64(2, RD(2) | 0xcccd);
wr32(c, (RW(16) + 76), RW(2));
SET64(17, RD(0) + RD(0));
SET64(2, (s64)(s32)0x40000000);
wr32(c, (RW(16) + 80), RW(2));
SET64(5, (s32)rd32(c, (RW(16) + 96)));
L_002DEAB4:;
{ int t = RD(5) == RD(0);  if (t) goto L_002DEAC0; }
SET32(5, RW(5) + 672);
L_002DEAC0:;
SET64(4, (s32)rd32(c, (RW(16) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2dead4);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 68)));
SET64(5, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2deaec); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)64);
if (RD(2) != RD(0)) { SET64(5, (s32)rd32(c, (RW(16) + 96))); { POLL(); goto L_002DEAB4; } }
SET64(4, (s32)rd32(c, (RW(16) + 68)));
SET64(5, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2deb14); SET32(6, RW(0) + -1); rt_call(c, t); }
c->f[21].u = rd32(c, (RW(16) + 76));
SET64(18, RD(0) + RD(0));
c->f[22].u = rd32(c, (RW(16) + 72));
SET64(17, RD(0) + RD(0));
L_002DEB24:;
c->f[0].u = RW(18);
SET64(3, (s32)rd32(c, (RW(16) + 68)));
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s64)(s32)0x40800000);
SET64(3, (s32)rd32(c, (RW(3) + 144)));
SET32(4, RW(3) + RW(17));
c->f[2].f = fpu(F(0) * F(21));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
c->f[12].f = fpu(F(22) + F(2));
c->f[0].u = RW(0);
c->f[1].u = RW(2);
c->facc = fpu(F(0) + F(22));
{ u32 t = RW(25); SET64(31, 0x2deb64); c->f[13].f = fpu(c->facc + F(1) * F(2)); rt_call(c, t); }
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)64);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 320); if (t) { POLL(); goto L_002DEB24; } }
SET64(3, (s32)rd32(c, (RW(16) + 68)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(4, (s32)rd32(c, (RW(3) + 144)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2deb94);  rt_call(c, t); }
SET32(18, RW(0) + 1);
SET32(17, RW(0) + 320);
L_002DEB9C:;
SET32(3, RW(0) + 64);
SET64(2, (s64)(s32)0x42800000);
SET32(3, RW(3) - RW(18));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x2debd0);  JP_F_00121728(c);
SET64(4, (s64)(s32)0x3fb90000);
SET64(3, RD(0) | 0x9999);
SET64(4, RD(4) | 0x9999);
SET64(3, RD(3) << 16);
SET64(4, RD(4) << 32);
SET64(3, RD(3) | 0x999a);
SET64(4, RD(3) | RD(4));
SET64(31, 0x2debf4); SET64(5, RD(2) + RD(0)); JP_F_00121C20(c);
SET64(31, 0x2debfc); SET64(4, RD(2) + RD(0)); JP_F_001222E0(c);
SET64(2, (s32)rd32(c, (RW(16) + 68)));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2dec18); c->f[12].u = c->f[0].u; rt_call(c, t); }
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)64);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 320); if (t) { POLL(); goto L_002DEB9C; } }
SET64(31, 0x2dec30);  JP_F_00139590(c);
SET64(31, 0x2dec38);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 20)));
SET64(3, (s32)rd32(c, (RW(16) + 60)));
SET32(2, RW(28) + -31064);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x2dec54); SET64(5, (s32)rd32(c, (RW(2) + 0))); JP_F_001B89E0(c);
wr32(c, (RW(16) + 84), RW(2));
SET32(3, RW(0) + 256);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002DF058;
L_002DEC64:;
SET64(2, (s64)(s32)0x3f800000);
c->f[3].u = RW(2);
SET64(2, (s64)(s32)0x3d800000);
c->f[2].f = fpu(F(3) - F(4));
c->f[0].u = RW(2);
c->f[0].f = fpu(F(0) * F(2));
SET64(2, (s64)(s32)0x3b130000);
SET64(2, RD(2) | 0x74bc);
c->f[2].u = RW(0);
c->facc = fpu(F(2) + F(4));
c->f[0].f = fpu(c->facc + F(0) * F(20));
wr32(c, (RW(16) + 72), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 76));
c->f[1].u = RW(2);
c->facc = fpu(F(2) + F(0));
c->f[0].f = fpu(c->facc - F(1) * F(20));
c->fcc = F(0) < F(2);
{ int t = !c->fcc; wr32(c, (RW(16) + 76), c->f[0].u); if (t) goto L_002DED44; }
wr32(c, (RW(16) + 72), c->f[3].u);
SET32(17, RW(0) + 1);
wr32(c, (RW(16) + 76), c->f[2].u);
SET64(4, (s32)rd32(c, (RW(16) + 68)));
L_002DECCC:;
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2dece0); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)64);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 68))); { POLL(); goto L_002DECCC; } }
SET64(31, 0x2decf8); SET64(18, (s32)rd32(c, (RW(16) + 84))); JP_F_00139590(c);
SET64(31, 0x2ded00);  JP_F_00139590(c);
{ int t = RSD(18) < 0; SET64(17, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_002DED38; }
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(17) + RD(0));
c->f[12].u = RW(2);
SET64(31, 0x2ded1c); SET64(5, RD(18) + RD(0)); JP_F_001B8830(c);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(18) << 2);
c->f[12].u = RW(0);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2ded38); SET64(5, RD(0) + RD(0)); JP_F_001B97F0(c);
L_002DED38:;
SET64(2, rd16(c, (RW(16) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 0), (u16)RW(2));
L_002DED44:;
c->f[21].u = rd32(c, (RW(16) + 76));
SET64(18, RD(0) + RD(0));
c->f[22].u = rd32(c, (RW(16) + 72));
SET64(17, RD(0) + RD(0));
L_002DED54:;
c->f[0].u = RW(18);
SET64(3, (s32)rd32(c, (RW(16) + 68)));
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s64)(s32)0x40800000);
SET64(3, (s32)rd32(c, (RW(3) + 144)));
SET32(4, RW(3) + RW(17));
c->f[2].f = fpu(F(0) * F(21));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
c->f[12].f = fpu(F(22) + F(2));
c->f[0].u = RW(0);
c->f[1].u = RW(2);
c->facc = fpu(F(0) + F(22));
{ u32 t = RW(25); SET64(31, 0x2ded94); c->f[13].f = fpu(c->facc + F(1) * F(2)); rt_call(c, t); }
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)64);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 320); if (t) { POLL(); goto L_002DED54; } }
SET64(3, (s32)rd32(c, (RW(16) + 68)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(4, (s32)rd32(c, (RW(3) + 144)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2dedc4);  rt_call(c, t); }
SET32(18, RW(0) + 1);
SET32(17, RW(0) + 320);
L_002DEDCC:;
SET32(3, RW(0) + 64);
SET64(2, (s64)(s32)0x42800000);
SET32(3, RW(3) - RW(18));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x2dee00);  JP_F_00121728(c);
SET64(4, (s64)(s32)0x3fb90000);
SET64(3, RD(0) | 0x9999);
SET64(4, RD(4) | 0x9999);
SET64(3, RD(3) << 16);
SET64(4, RD(4) << 32);
SET64(3, RD(3) | 0x999a);
SET64(4, RD(3) | RD(4));
SET64(31, 0x2dee24); SET64(5, RD(2) + RD(0)); JP_F_00121C20(c);
SET64(31, 0x2dee2c); SET64(4, RD(2) + RD(0)); JP_F_001222E0(c);
SET64(2, (s32)rd32(c, (RW(16) + 68)));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2dee48); c->f[12].u = c->f[0].u; rt_call(c, t); }
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < (s64)64);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 320); if (t) { POLL(); goto L_002DEDCC; } }
 goto L_002DF058;
L_002DEE60:;
SET64(31, 0x2dee68);  JP_F_00139590(c);
SET64(31, 0x2dee70);  JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(16) + 84)));
{ int t = RSD(3) < 0; SET64(4, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_002DEE98; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x2dee90); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_001B9490(c);
SET64(3, RD(2) & 0xff); goto L_002DEE9C;
L_002DEE98:;
SET64(3, RD(0) + (s64)1);
L_002DEE9C:;
{ int t = RD(3) == RD(0);  if (t) goto L_002DF058; }
SET64(3, (s64)(s32)0x42f00000);
wr32(c, (RW(16) + 72), RW(3));
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002DF058;
L_002DEEBC:;
c->f[0].u = RW(0);
c->f[1].f = fpu(F(1) - F(20));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; wr32(c, (RW(16) + 72), c->f[1].u); if (t) goto L_002DF058; }
SET64(17, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 68)));
L_002DEEDC:;
SET64(5, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2deef0); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)64);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 68))); { POLL(); goto L_002DEEDC; } }
wr32(c, (RW(16) + 72), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 76), RW(2));
c->f[12].u = rd32(c, (RW(16) + 72));
c->f[13].u = rd32(c, (RW(16) + 76));
SET64(31, 0x2def1c); SET64(4, RD(16) + RD(0)); JP_F_002DE3D0(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002DF058;
L_002DEF2C:;
SET64(3, (s64)(s32)0x3c230000);
SET64(3, RD(3) | 0xd70a);
SET64(2, (s64)(s32)0x3ba30000);
c->f[2].u = RW(0);
SET64(2, RD(2) | 0xd70a);
c->f[3].u = RW(3);
c->facc = fpu(F(2) + F(0));
c->f[0].f = fpu(c->facc + F(3) * F(20));
wr32(c, (RW(16) + 72), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 76));
c->f[1].u = RW(2);
c->facc = fpu(F(2) + F(0));
c->f[0].f = fpu(c->facc - F(1) * F(20));
c->fcc = F(0) < F(2);
{ int t = !c->fcc; wr32(c, (RW(16) + 76), c->f[0].u); if (t) goto L_002DEF7C; }
wr32(c, (RW(16) + 76), c->f[2].u);
wr16(c, (RW(16) + 0), (u16)RW(4));
L_002DEF7C:;
c->f[12].u = rd32(c, (RW(16) + 72));
c->f[13].u = rd32(c, (RW(16) + 76));
SET64(31, 0x2def8c); SET64(4, RD(16) + RD(0)); JP_F_002DE3D0(c);
 goto L_002DF058;
L_002DEF94:;
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x2defa4);  rt_call(c, t); }
wr32(c, (RW(29) + 92), RW(0));
SET64(31, 0x2defb0); SET64(17, (s32)rd32(c, (RW(16) + 84))); JP_F_00139590(c);
SET64(31, 0x2defb8);  JP_F_00139590(c);
{ int t = RSD(17) < 0; SET64(4, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_002DEFD8; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(17) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2defd8); SET32(5, RW(29) + 92); JP_F_001B9600(c);
L_002DEFD8:;
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002DF058;
L_002DEFE8:;
SET64(4, (s32)rd32(c, (RW(16) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2deffc);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002DF058; }
SET64(4, (s32)rd32(c, (RW(16) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 68), RW(0)); goto L_002DF024; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x2df020); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 68), RW(0));
L_002DF024:;
SET64(4, (s32)rd32(c, (RW(16) + 64)));
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002DF044; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2df040); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_002DF044:;
SET64(31, 0x2df04c); wr32(c, (RW(16) + 64), RW(0)); JP_F_00139AB0(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3));
L_002DF058:;
SET64(4, (s32)rd32(c, (RW(16) + 68)));
L_002DF05C:;
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_002DF078; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2df074); c->f[12].u = c->f[20].u; rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
L_002DF078:;
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002DF0A0(Ctx *c) { /* func_002DF0A0 */
ENTER(0x2df0a0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 60), RW(5));
SET64(31, 0x2df0c4); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002DF0D4; }
SET64(31, 0x2df0d4); SET64(4, RD(16) + RD(0)); JP_F_00150480(c);
L_002DF0D4:;
wr32(c, (RW(18) + 64), RW(16));
SET64(6, (s16)rd16(c, (RW(18) + 60)));
SET64(4, (s32)rd32(c, (RW(18) + 88)));
SET64(31, 0x2df0e8); SET32(5, RW(0) + 4); JP_F_001573F0(c);
SET64(4, (s32)rd32(c, (RW(18) + 64)));
SET64(5, RD(2) + RD(0));
SET64(6, (s32)rd32(c, (RW(18) + 92)));
SET64(7, RD(2) + RD(0));
SET64(31, 0x2df100); SET64(8, RD(0) + RD(0)); JP_F_0014F9B0(c);
SET64(31, 0x2df108); SET32(4, RW(0) + 160); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002DF118; }
SET64(31, 0x2df118); SET64(4, RD(16) + RD(0)); JP_F_00314D20(c);
L_002DF118:;
wr32(c, (RW(18) + 68), RW(16));
SET64(2, (s64)(s32)0x461c0000);
SET64(5, (s32)rd32(c, (RW(18) + 64)));
SET64(2, RD(2) | 0x4000);
SET64(4, RD(16) + RD(0));
SET64(6, RD(0) + RD(0));
c->f[12].u = RW(2);
SET64(7, RD(0) + RD(0));
SET64(31, 0x2df140); SET32(8, RW(0) + 64); JP_F_00314BA0(c);
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_002DF148:;
SET64(3, (s32)rd32(c, (RW(18) + 68)));
SET64(2, (s64)(s32)0xc3800000);
c->f[12].u = RW(2);
SET64(2, (s32)rd32(c, (RW(3) + 144)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x2df16c);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 68)));
SET64(2, (s64)(s32)0xc2000000);
c->f[12].u = RW(2);
SET64(2, (s32)rd32(c, (RW(3) + 144)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2df190);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 68)));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(31, 0x2df1a0); SET32(4, RW(2) + RW(16)); JP_F_0014EB40(c);
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2df1b8); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)64);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 320); if (t) { POLL(); goto L_002DF148; } }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(2, (s64)(s32)0x43800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x2df1e4);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(2, (s64)(s32)0x43600000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2df200);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002DF220(Ctx *c) { /* func_002DF220 */
ENTER(0x2df220);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) << 48);
SET64(16, RD(4) + RD(0));
SET64(17, RSD(17) >> 48);
SET64(4, (s32)rd32(c, (RW(4) + 60)));
SET32(5, RW(0) + 1);
SET64(31, 0x2df250); SET64(6, RD(17) + RD(0)); JP_F_001573F0(c);
SET64(5, RD(2) + RD(0));
if (RD(5) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002DF334; }
SET64(31, 0x2df264); SET32(4, RW(16) + 100); JP_F_00157540(c);
SET64(31, 0x2df26c); SET32(4, RW(0) + 12); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 96), RW(2)); goto L_002DF284; }
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(16) + 96), RW(2));
L_002DF284:;
SET32(3, RW(16) + 100);
wr32(c, (RW(2) + 0), RW(3));
SET64(6, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 76)));
SET64(2, (s32)rd32(c, (RW(16) + 96)));
wr32(c, (RW(2) + 4), RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET64(31, 0x2df2a8); SET32(5, RW(0) + 2); JP_F_001573F0(c);
SET64(18, RD(2) + RD(0));
SET64(31, 0x2df2b4); SET64(4, RD(18) + RD(0)); JP_F_0022D870(c);
SET64(31, 0x2df2bc); SET32(4, RW(0) + 108); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002DF2D0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2df2d0); SET32(5, RW(0) + 1); JP_F_0022E5E0(c);
L_002DF2D0:;
SET64(31, 0x2df2d8); wr32(c, (RW(16) + 92), RW(17)); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 92))); goto L_002DF2EC; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(16) + 92)));
L_002DF2EC:;
SET64(31, 0x2df2f4);  JP_F_0022E3C0(c);
SET64(5, (s32)rd32(c, (RW(16) + 96)));
SET64(31, 0x2df300); SET64(4, (s32)rd32(c, (RW(16) + 92))); JP_F_0022DE10(c);
SET64(4, (s32)rd32(c, (RW(16) + 92)));
SET64(31, 0x2df30c); SET64(5, RD(18) + RD(0)); JP_F_0022E160(c);
SET64(31, 0x2df314); SET64(4, (s32)rd32(c, (RW(16) + 92))); JP_F_0022DF00(c);
SET64(5, (s32)rd32(c, (RW(16) + 92)));
if (RD(5) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002DF328; }
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET64(4, RD(16) + RD(0));
L_002DF328:;
SET64(31, 0x2df330);  JP_F_0013A470(c);
SET64(31, rd64(c, (RW(29) + 48)));
L_002DF334:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002DF350(Ctx *c) { /* func_002DF350 */
ENTER(0x2df350);
SET32(29, RW(29) + -48);
SET32(2, RW(0) + 848);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 564)));
SET64(16, RD(4) + RD(0));
SET64(6, (s32)rd32(c, (RW(4) + 60)));
mul_s(c, 0, 5, RSW(5), RSW(2));
SET64(4, (s32)rd32(c, (RW(4) + 72)));
SET64(3, (s32)rd32(c, (RW(6) + 24)));
SET64(2, (s32)rd32(c, (RW(6) + 20)));
SET32(4, RW(4) + RW(5));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2df38c); SET32(5, RW(3) + RW(2)); JP_F_00143300(c);
SET64(4, rd16(c, (RW(16) + 564)));
SET32(3, RW(0) + 848);
SET64(2, (s32)rd32(c, (RW(16) + 72)));
mul_s(c, 0, 3, RSW(4), RSW(3));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x2df3b0); SET64(5, rd16(c, (RW(16) + 562))); rt_call(c, t); }
SET64(4, rd16(c, (RW(16) + 564)));
SET32(3, RW(0) + 848);
SET64(2, (s32)rd32(c, (RW(16) + 72)));
mul_s(c, 0, 3, RSW(4), RSW(3));
SET64(31, 0x2df3c8); SET32(4, RW(2) + RW(3)); JP_F_001432E0(c);
SET64(2, (s64)(s32)0x43d80000);
SET64(4, rd16(c, (RW(16) + 564)));
c->f[0].u = RW(2);
SET32(3, RW(0) + 848);
SET64(2, (s64)(s32)0x4b7f0000);
SET64(7, (s32)rd32(c, (RW(16) + 72)));
SET64(6, RD(2) | 0xffef);
SET32(5, RW(29) + 32);
SET64(2, RD(4) ^ 0x1);
mul_s(c, 0, 8, RSW(2), RSW(3));
mul_s(c, 1, 2, RSW(4), RSW(3));
SET32(2, RW(7) + RW(2));
SET64(3, (s64)(s32)0x3f800000);
SET32(4, RW(2) + 16);
SET32(2, RW(7) + RW(8));
c->f[1].u = rd32(c, (RW(2) + 52));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 40), RW(6));
wr32(c, (RW(29) + 44), RW(3));
wr32(c, (RW(29) + 32), RW(0));
SET64(31, 0x2df420); wr32(c, (RW(29) + 36), c->f[0].u); JP_F_0014E980(c);
SET64(4, rd16(c, (RW(16) + 564)));
SET32(3, RW(0) + 848);
SET64(2, (s32)rd32(c, (RW(16) + 72)));
mul_s(c, 0, 3, RSW(4), RSW(3));
SET32(2, RW(2) + RW(3));
SET64(31, 0x2df43c); SET32(4, RW(2) + 16); JP_F_0014DFC0(c);
SET64(3, rd16(c, (RW(16) + 564)));
SET32(3, RW(3) + 1);
SET64(3, RD(3) & 0x1);
wr16(c, (RW(16) + 564), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002DF460(Ctx *c) { /* func_002DF460 */
ENTER(0x2df460);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 76)));
{ int t = RD(2) != RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002DF4B8; }
SET64(31, 0x2df484); SET32(4, RW(0) + 32); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002DF494; }
SET64(31, 0x2df494); SET64(4, RD(16) + RD(0)); JP_F_001509B0(c);
L_002DF494:;
SET32(5, RW(0) + 512);
SET64(4, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x2df4b0); wr32(c, (RW(17) + 76), RW(16)); JP_F_00150830(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(17) + 568), (u8)RW(2));
L_002DF4B8:;
SET64(16, (s32)rd32(c, (RW(17) + 64)));
SET64(31, 0x2df4c4); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_00100530(c);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(17) + 68), RW(2));
SET64(31, 0x2df4d4); SET64(5, RD(2) + RD(0)); JP_F_00174300(c);
SET64(31, 0x2df4dc); SET64(4, (s32)rd32(c, (RW(17) + 60))); JP_F_00157620(c);
SET64(5, (s32)rd32(c, (RW(17) + 68)));
SET64(31, 0x2df4e8); SET64(4, (s32)rd32(c, (RW(17) + 60))); JP_F_00157540(c);
SET64(31, 0x2df4f0); SET64(4, (s32)rd32(c, (RW(17) + 64))); JP_F_001004B0(c);
SET32(4, RW(0) + 80);
SET64(31, 0x2df4fc); wr32(c, (RW(17) + 64), RW(0)); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002DF528; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 1152);
SET32(6, RW(6) + 1040);
SET32(7, RW(0) + 64);
SET64(31, 0x2df524); SET32(8, RW(0) + 1); JP_F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002DF528:;
wr32(c, (RW(17) + 80), RW(16));
SET32(5, RW(0) + 3);
SET64(4, (s32)rd32(c, (RW(17) + 60)));
SET64(31, 0x2df53c); SET64(6, RD(0) + RD(0)); JP_F_001573F0(c);
SET64(4, (s32)rd32(c, (RW(17) + 80)));
SET64(5, RD(2) + RD(0));
SET64(6, (s32)rd32(c, (RW(17) + 76)));
SET64(7, RD(2) + RD(0));
SET64(31, 0x2df554); SET64(8, RD(0) + RD(0)); JP_F_0014F9B0(c);
SET64(31, 0x2df55c); SET32(4, RW(0) + 45); JP_F_00173040(c);
SET64(16, RD(2) & 0xffff);
SET64(31, 0x2df568); SET32(4, RW(0) + 72); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 84), RW(2)); goto L_002DF5C8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -3136);
SET32(5, RW(5) + -3104);
wr32(c, (RW(2) + 12), RW(3));
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 0), RW(0));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(2) + 4), RW(0));
SET32(3, RW(3) + 4192);
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(5));
wr32(c, (RW(2) + 16), RW(0));
wr32(c, (RW(2) + 20), RW(4));
wr32(c, (RW(2) + 24), RW(0));
wr32(c, (RW(2) + 28), RW(0));
wr32(c, (RW(2) + 40), RW(0));
wr32(c, (RW(2) + 36), RW(0));
wr8(c, (RW(2) + 32), (u8)RW(0));
wr32(c, (RW(2) + 12), RW(3));
wr16(c, (RW(2) + 68), (u16)RW(0));
wr32(c, (RW(17) + 84), RW(2));
L_002DF5C8:;
SET64(25, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2df5d8); SET64(4, RD(2) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 84)));
SET32(5, RW(0) + 100);
SET32(6, RW(0) + 8);
SET64(7, RD(0) + RD(0));
SET64(31, 0x2df5f0); SET32(8, RW(0) + 1); JP_F_00170C20(c);
SET64(4, (s32)rd32(c, (RW(17) + 84)));
SET64(5, (s32)rd32(c, (RW(17) + 76)));
SET64(31, 0x2df600); SET64(6, RD(0) + RD(0)); JP_F_00170A40(c);
SET64(4, (s32)rd32(c, (RW(17) + 84)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2df610); SET32(6, RW(0) + 8); JP_F_001702C0(c);
SET64(2, rd16(c, (RW(28) + -30220)));
{ int t = RD(2) != RD(0);  if (t) goto L_002DF640; }
SET64(31, 0x2df624);  JP_F_00139590(c);
SET64(31, 0x2df62c);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 20)));
SET64(31, 0x2df638); SET32(5, RW(0) + 119); JP_F_001B89E0(c);
wr32(c, (RW(17) + 544), RW(2)); goto L_002DF660;
L_002DF640:;
SET64(31, 0x2df648);  JP_F_00139590(c);
SET64(31, 0x2df650);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 20)));
SET64(31, 0x2df65c); SET32(5, RW(0) + 120); JP_F_001B89E0(c);
wr32(c, (RW(17) + 544), RW(2));
L_002DF660:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

static void JP_B_002DF680(Ctx *c, u32 entry) { /* func_002DF680 */
ENTER(entry);
switch (entry) { case 0x2e0018: goto L_002E0018; case 0x2e001c: goto L_002E001C; case 0x2e0020: goto L_002E0020; case 0x2e0024: goto L_002E0024; case 0x2e002c: goto L_002E002C; case 0x2e0040: goto L_002E0040; case 0x2e0080: goto L_002E0080; }
SET32(29, RW(29) + -256);
SET32(3, RW(0) + 23);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(6, rd16(c, (RW(4) + 0)));
{ int t = RD(6) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_002E0114; }
SET32(3, RW(0) + 22);
if (RD(6) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 92))); goto L_002E00C4; }
SET32(3, RW(0) + 21);
if (RD(6) == RD(3)) { SET32(4, RW(16) + 144); goto L_002DFECC; }
SET32(5, RW(0) + 20);
if (RD(6) == RD(5)) { SET64(2, (s64)(s32)0x40800000); goto L_002DFE40; }
SET32(4, RW(0) + 14);
{ int t = RD(6) == RD(4);  if (t) goto L_002DFE14; }
SET32(3, RW(0) + 13);
if (RD(6) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 572))); goto L_002DFDCC; }
SET32(3, RW(0) + 12);
if (RD(6) == RD(3)) { SET64(3, rd16(c, (RW(28) + -30220))); goto L_002DFD08; }
SET32(3, RW(0) + 11);
if (RD(6) == RD(3)) { SET64(2, (s64)(s32)0x3f800000); goto L_002DFA4C; }
SET32(3, RW(0) + 10);
if (RD(6) == RD(3)) { SET64(2, (s64)(s32)0x4b7f0000); goto L_002DF8E4; }
SET32(3, RW(0) + 2);
{ int t = RD(6) == RD(3);  if (t) goto L_002DF8A8; }
SET32(3, RW(0) + 1);
if (RD(6) == RD(3)) { SET32(4, RW(16) + 144); goto L_002DF75C; }
if (RD(6) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 60))); goto L_002DF72C; }
SET64(3, (s32)rd32(c, (RW(16) + 72))); goto L_002E0250;
L_002DF72C:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2df73c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002E024C; }
SET64(31, 0x2df74c); SET64(4, RD(16) + RD(0)); JP_F_002DF460(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002E024C;
L_002DF75C:;
SET64(31, 0x2df764);  JP_F_001740B0(c);
SET64(31, 0x2df76c);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(5) == RD(0);  if (t) goto L_002DF77C; }
SET32(5, RW(5) + 672);
L_002DF77C:;
SET64(2, (s64)(s32)0x4a0000);
c->f[12].u = rd32(c, (RW(2) + -18464));
SET64(31, 0x2df78c); SET32(4, RW(16) + 144); JP_F_00174040(c);
SET64(2, (s64)(s32)0x3d4c0000);
wr32(c, (RW(29) + 228), RW(0));
SET64(2, RD(2) | 0xcccd);
wr32(c, (RW(29) + 232), RW(0));
wr32(c, (RW(29) + 224), RW(2));
SET64(17, RD(0) + RD(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 236), RW(2));
SET64(7, (s32)rd32(c, (RW(16) + 88)));
L_002DF7B0:;
{ int t = RD(7) == RD(0);  if (t) goto L_002DF7C0; }
SET32(7, RW(7) + 928);
L_002DF7C0:;
SET64(4, (s32)rd32(c, (RW(16) + 84)));
SET32(5, RW(0) + 706);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2df7d4); SET64(8, RD(0) + RD(0)); JP_F_00170020(c);
SET64(18, RD(2) + RD(0));
{ int t = RD(18) == RD(0);  if (t) goto L_002DF840; }
SET64(2, (s64)(s32)0xc1400000);
wr32(c, (RW(29) + 164), RW(0));
wr32(c, (RW(29) + 160), RW(2));
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0xc0a00000);
wr32(c, (RW(29) + 168), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(18) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2df810); SET32(5, RW(29) + 160); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 144)));
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 9);
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x2df828); SET32(6, RW(29) + 224); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 144)));
SET64(5, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x2df83c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
L_002DF840:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)8);
if (RD(2) != RD(0)) { SET64(7, (s32)rd32(c, (RW(16) + 88))); { POLL(); goto L_002DF7B0; } }
SET64(2, (s64)(s32)0xbf800000);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 136), RW(2));
SET64(2, (s64)(s32)0x41800000);
SET64(5, (s32)rd32(c, (RW(16) + 88)));
wr32(c, (RW(29) + 152), RW(2));
wr32(c, (RW(29) + 140), RW(3));
wr32(c, (RW(29) + 156), RW(3));
SET32(4, RW(5) + 784);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 148), RW(0));
rd128(c, (RW(29) + 144) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 132), RW(0));
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr128(c, (RW(5) + 800) & ~15u, &c->r[3]);
wr128(c, (RW(5) + 816) & ~15u, &c->r[2]);
SET64(31, 0x2df89c); wr32(c, (RW(5) + 832), RW(0)); JP_F_0015DAB0(c);
SET64(2, rd16(c, (RW(16) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 0), (u16)RW(2));
L_002DF8A8:;
SET64(2, (s64)(s32)0x530000);
c->f[12].u = rd32(c, (RW(2) + -22384));
SET64(31, 0x2df8b8); SET32(4, RW(16) + 144); JP_F_00173B10(c);
SET64(31, 0x2df8c0); SET32(4, RW(16) + 144); JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002E024C; }
SET64(25, (s32)rd32(c, (RW(16) + 532)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2df8d8); SET32(4, RW(16) + 144); rt_call(c, t); }
SET32(3, RW(0) + 10);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002E024C;
L_002DF8E4:;
SET32(4, RW(0) + 1712);
SET64(2, RD(2) | 0xffef);
wr32(c, (RW(29) + 208), RW(0));
wr32(c, (RW(29) + 216), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 212), RW(0));
SET64(31, 0x2df904); wr32(c, (RW(29) + 220), RW(2)); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002DF930; }
SET64(5, (s64)(s32)0x140000);
SET64(6, (s64)(s32)0x140000);
SET64(4, RD(17) + RD(0));
SET32(5, RW(5) + 13408);
SET32(6, RW(6) + 13072);
SET32(7, RW(0) + 848);
SET64(31, 0x2df92c); SET32(8, RW(0) + 2); JP_F_00102580(c);
SET64(17, RD(2) + RD(0));
L_002DF930:;
wr32(c, (RW(16) + 72), RW(17));
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002DF93C:;
SET64(7, (s32)rd32(c, (RW(16) + 60)));
SET64(3, (s64)(s32)0x3f800000);
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
SET64(8, (s64)(s32)0x44000000);
SET64(4, (s64)(s32)0x43e10000);
SET32(5, RW(29) + 112);
SET64(9, (s32)rd32(c, (RW(7) + 24)));
SET32(6, RW(29) + 96);
SET64(7, (s32)rd32(c, (RW(7) + 20)));
SET64(7, (s32)rd32(c, (RW(7) + 0)));
wr32(c, (RW(29) + 124), RW(3));
SET32(7, RW(9) + RW(7));
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
wr32(c, (RW(29) + 104), RW(8));
wr32(c, (RW(29) + 108), RW(4));
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 100), RW(0));
wr128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET64(8, (s32)rd32(c, (RW(16) + 76)));
SET64(31, 0x2df99c); SET32(4, RW(2) + RW(17)); JP_F_00144F20(c);
SET64(31, 0x2df9a4);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(5) == RD(0);  if (t) goto L_002DF9B8; }
SET32(5, RW(5) + 672);
L_002DF9B8:;
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET32(2, RW(2) + RW(17));
SET64(31, 0x2df9c8); SET32(4, RW(2) + 16); JP_F_00146610(c);
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)2);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 848); if (t) { POLL(); goto L_002DF93C; } }
SET64(31, 0x2df9e0); SET64(4, RD(16) + RD(0)); JP_F_002DF350(c);
SET64(2, rd16(c, (RW(16) + 562)));
SET64(4, RD(16) + RD(0));
SET32(2, RW(2) + 1);
SET64(31, 0x2df9f4); wr16(c, (RW(16) + 562), (u16)RW(2)); JP_F_002DF350(c);
SET64(31, 0x2df9fc); SET64(18, (s32)rd32(c, (RW(16) + 544))); JP_F_00139590(c);
SET64(31, 0x2dfa04);  JP_F_00139590(c);
{ int t = RSD(18) < 0; SET64(17, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_002DFA3C; }
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(17) + RD(0));
c->f[12].u = RW(2);
SET64(31, 0x2dfa20); SET64(5, RD(18) + RD(0)); JP_F_001B88B0(c);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(18) << 2);
c->f[12].u = RW(0);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2dfa3c); SET64(5, RD(0) + RD(0)); JP_F_001B97F0(c);
L_002DFA3C:;
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002E024C;
L_002DFA4C:;
wr32(c, (RW(29) + 192), RW(0));
wr32(c, (RW(29) + 204), RW(2));
SET64(18, RD(0) + RD(0));
wr32(c, (RW(29) + 196), RW(0));
SET64(17, RD(0) + RD(0));
wr32(c, (RW(29) + 200), RW(0));
L_002DFA64:;
SET64(2, (s64)(s32)0x530000);
SET64(3, (s32)rd32(c, (RW(16) + 72)));
c->f[1].u = rd32(c, (RW(2) + -22384));
SET32(5, RW(29) + 192);
c->f[3].u = RW(0);
SET32(2, RW(3) + RW(17));
rd128(c, (RW(2) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 192) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 196));
c->f[2].u = rd32(c, (RW(16) + 556));
c->facc = fpu(F(3) + F(0));
c->f[0].f = fpu(c->facc - F(2) * F(1));
wr32(c, (RW(29) + 196), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET32(2, RW(2) + RW(17));
SET64(31, 0x2dfaa8); SET32(4, RW(2) + 16); JP_F_0014E980(c);
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET32(2, RW(2) + RW(17));
SET64(31, 0x2dfab8); SET32(4, RW(2) + 16); JP_F_0014DFC0(c);
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)2);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 848); if (t) { POLL(); goto L_002DFA64; } }
SET64(2, rd16(c, (RW(16) + 560)));
SET64(6, rd16(c, (RW(16) + 562)));
SET32(2, RW(2) + -1);
if (RD(6) != RD(2)) { SET64(5, rd16(c, (RW(16) + 564))); goto L_002DFB1C; }
SET64(5, rd16(c, (RW(16) + 564)));
SET64(2, (s64)(s32)0xc2f00000);
c->f[0].u = RW(2);
SET32(4, RW(0) + 848);
SET64(3, (s32)rd32(c, (RW(16) + 72)));
SET64(2, RD(5) ^ 0x1);
mul_s(c, 0, 2, RSW(2), RSW(4));
SET32(2, RW(3) + RW(2));
c->f[1].u = rd32(c, (RW(2) + 52));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 92))); goto L_002DFB58; }
SET64(2, rd16(c, (RW(16) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 0), (u16)RW(2)); goto L_002DFB54;
L_002DFB1C:;
SET64(2, (s64)(s32)0xc3d80000);
SET32(4, RW(0) + 848);
SET64(3, (s32)rd32(c, (RW(16) + 72)));
c->f[0].u = RW(2);
mul_s(c, 0, 2, RSW(5), RSW(4));
SET32(2, RW(3) + RW(2));
c->f[1].u = rd32(c, (RW(2) + 52));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc;  if (t) goto L_002DFB54; }
SET32(2, RW(6) + 1);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2dfb54); wr16(c, (RW(16) + 562), (u16)RW(2)); JP_F_002DF350(c);
L_002DFB54:;
SET64(4, (s32)rd32(c, (RW(16) + 92)));
L_002DFB58:;
if (RD(4) == RD(0)) { SET64(2, RD(0) + (s64)1); goto L_002DFBE4; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 48)));
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_002DFBE4; }
SET64(31, 0x2dfb7c);  JP_F_0022DE20(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DFBD4; }
SET64(31, 0x2dfb8c); SET32(4, RW(16) + 100); JP_F_00157620(c);
SET64(4, (s32)rd32(c, (RW(16) + 92)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 92), RW(0)); goto L_002DFBAC; }
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2dfba8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 92), RW(0));
L_002DFBAC:;
SET64(4, (s32)rd32(c, (RW(16) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 96), RW(0)); goto L_002DFBE0; }
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
SET64(31, 0x2dfbc8); wr32(c, (RW(4) + 8), RW(0)); JP_F_001004B0(c);
wr32(c, (RW(16) + 96), RW(0));
 goto L_002DFBE0;
L_002DFBD4:;
SET64(2, RD(0) + RD(0));
 goto L_002DFBE4;
L_002DFBE0:;
SET64(2, RD(0) + (s64)1);
L_002DFBE4:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 569))); goto L_002DFC20; }
SET64(2, (s64)(s32)0x4c0000);
SET64(5, rd16(c, (RW(16) + 566)));
SET64(2, rd16(c, (RW(2) + -28152)));
SET64(1, RSD(5) < RSD(2));
{ int t = RD(1) == RD(0);  if (t) goto L_002DFC1C; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2dfc10); SET64(6, RD(0) + RD(0)); JP_F_002DF220(c);
SET64(2, rd16(c, (RW(16) + 566)));
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 566), (u16)RW(2));
L_002DFC1C:;
SET64(2, rd8(c, (RW(16) + 569)));
L_002DFC20:;
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 72))); goto L_002DFCDC; }
SET64(31, 0x2dfc30);  JP_F_00139590(c);
SET64(31, 0x2dfc38);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 20)));
SET64(2, (s32)rd32(c, (RW(16) + 544)));
if (RSD(2) < 0) { SET64(2, RD(0) + (s64)1); goto L_002DFC60; }
SET32(3, RW(2) << 2);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(2, RW(2) + RW(3));
SET64(31, 0x2dfc5c); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_001B9490(c);
SET64(2, RD(2) & 0xff);
L_002DFC60:;
{ int t = RD(2) == RD(0);  if (t) goto L_002DFCD8; }
SET64(31, 0x2dfc70);  JP_F_00139590(c);
SET64(31, 0x2dfc78);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 20)));
SET64(31, 0x2dfc84); SET32(5, RW(0) + 120); JP_F_001B89E0(c);
wr32(c, (RW(16) + 544), RW(2));
SET64(31, 0x2dfc90); SET64(18, RD(2) + RD(0)); JP_F_00139590(c);
SET64(31, 0x2dfc98);  JP_F_00139590(c);
{ int t = RSD(18) < 0; SET64(17, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_002DFCD0; }
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(17) + RD(0));
c->f[12].u = RW(2);
SET64(31, 0x2dfcb4); SET64(5, RD(18) + RD(0)); JP_F_001B88B0(c);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(18) << 2);
c->f[12].u = RW(0);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2dfcd0); SET32(5, RW(0) + 1); JP_F_001B97F0(c);
L_002DFCD0:;
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 569), (u8)RW(2));
L_002DFCD8:;
SET64(4, (s32)rd32(c, (RW(16) + 72)));
L_002DFCDC:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
{ u32 t = RW(25); SET64(31, 0x2dfcec);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET64(25, (s32)rd32(c, (RW(2) + 1616)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
{ u32 t = RW(25); SET64(31, 0x2dfd00); SET32(4, RW(2) + 848); rt_call(c, t); }
 goto L_002E024C;
L_002DFD08:;
if (RD(3) != RD(0)) { SET64(3, (s64)(s32)0x44960000); goto L_002DFDC0; }
SET64(31, 0x2dfd18); SET32(4, RW(0) + 100); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002DFD58; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2dfd2c); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13440);
SET32(3, RW(3) + 13448);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 13460);
wr32(c, (RW(17) + 36), RW(2));
wr32(c, (RW(17) + 68), RW(0));
wr32(c, (RW(17) + 64), RW(0));
L_002DFD58:;
wr32(c, (RW(16) + 572), RW(17));
SET64(2, (s64)(s32)0x540000);
SET64(5, (s32)rd32(c, (RW(16) + 60)));
SET64(4, (s32)rd32(c, (RW(16) + 88)));
SET64(3, (s32)rd32(c, (RW(16) + 76)));
wr32(c, (RW(17) + 92), RW(3));
wr32(c, (RW(17) + 88), RW(5));
wr32(c, (RW(17) + 96), RW(4));
SET64(2, rd16(c, (RW(2) + 3064)));
SET64(1, RSD(2) < (s64)4);
if (RD(1) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 572))); goto L_002DFD9C; }
SET64(4, (s32)rd32(c, (RW(16) + 572)));
SET64(31, 0x2dfd94); SET64(5, RD(0) + RD(0)); JP_F_002DF0A0(c);
SET64(5, (s32)rd32(c, (RW(16) + 572))); goto L_002DFDA8;
L_002DFD9C:;
SET64(31, 0x2dfda4); SET32(5, RW(0) + 1); JP_F_002DF0A0(c);
SET64(5, (s32)rd32(c, (RW(16) + 572)));
L_002DFDA8:;
SET64(31, 0x2dfdb0); SET64(4, RD(16) + RD(0)); JP_F_0013A470(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002E024C;
L_002DFDC0:;
wr32(c, (RW(16) + 552), RW(3));
wr16(c, (RW(16) + 0), (u16)RW(4)); goto L_002E024C;
L_002DFDCC:;
SET32(3, RW(0) + 4);
SET64(5, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(5) != RD(3);  if (t) goto L_002E024C; }
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 572), RW(0)); goto L_002DFDF8; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2dfdf4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 572), RW(0));
L_002DFDF8:;
SET32(3, RW(0) + -1);
wr32(c, (RW(16) + 552), RW(0));
SET64(4, rd16(c, (RW(16) + 0)));
SET32(4, RW(4) + 1);
wr16(c, (RW(16) + 0), (u16)RW(4));
wr32(c, (RW(16) + 548), RW(3)); goto L_002E024C;
L_002DFE14:;
SET64(3, (s64)(s32)0x530000);
c->f[2].u = rd32(c, (RW(16) + 552));
c->f[1].u = rd32(c, (RW(3) + -22384));
c->f[0].u = RW(0);
c->f[1].f = fpu(F(2) - F(1));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; wr32(c, (RW(16) + 552), c->f[1].u); if (t) goto L_002E024C; }
wr16(c, (RW(16) + 0), (u16)RW(5)); goto L_002E024C;
L_002DFE40:;
SET64(31, 0x2dfe48); wr32(c, (RW(29) + 252), RW(2)); JP_F_00139590(c);
SET64(31, 0x2dfe50);  JP_F_00139590(c);
SET64(17, (s32)rd32(c, (RW(2) + 20)));
SET64(2, (s32)rd32(c, (RW(28) + -32216)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_002DFE90; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
L_002DFE64:;
SET32(3, RW(18) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2dfe78); SET32(5, RW(29) + 252); JP_F_001B9600(c);
SET64(2, (s32)rd32(c, (RW(28) + -32216)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 4))); { POLL(); goto L_002DFE64; } }
L_002DFE90:;
SET32(2, RW(0) + -1);
SET64(31, 0x2dfe9c); wr32(c, (RW(16) + 544), RW(2)); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(5) == RD(0);  if (t) goto L_002DFEAC; }
SET32(5, RW(5) + 672);
L_002DFEAC:;
SET64(2, (s64)(s32)0x4a0000);
c->f[12].u = rd32(c, (RW(2) + -18464));
SET64(31, 0x2dfebc); SET32(4, RW(16) + 144); JP_F_00173F60(c);
SET64(2, rd16(c, (RW(16) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 0), (u16)RW(2));
SET32(4, RW(16) + 144);
L_002DFECC:;
SET64(31, 0x2dfed4);  JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DFFE0; }
SET64(4, (s32)rd32(c, (RW(16) + 92)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 72))); goto L_002DFF88; }
if (RD(4) == RD(0)) { SET64(2, RD(0) + (s64)1); goto L_002DFF74; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 48)));
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_002DFF74; }
SET64(31, 0x2dff0c);  JP_F_0022DE20(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002DFF64; }
SET64(31, 0x2dff1c); SET32(4, RW(16) + 100); JP_F_00157620(c);
SET64(4, (s32)rd32(c, (RW(16) + 92)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 92), RW(0)); goto L_002DFF3C; }
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2dff38); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 92), RW(0));
L_002DFF3C:;
SET64(4, (s32)rd32(c, (RW(16) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 96), RW(0)); goto L_002DFF70; }
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
SET64(31, 0x2dff58); wr32(c, (RW(4) + 8), RW(0)); JP_F_001004B0(c);
wr32(c, (RW(16) + 96), RW(0));
 goto L_002DFF70;
L_002DFF64:;
SET64(2, RD(0) + RD(0));
 goto L_002DFF74;
L_002DFF70:;
SET64(2, RD(0) + (s64)1);
L_002DFF74:;
{ int t = RD(2) != RD(0);  if (t) goto L_002DFF84; }
SET64(31, 0x2dff84); SET64(4, (s32)rd32(c, (RW(16) + 92))); JP_F_0022DEA0(c);
L_002DFF84:;
SET64(4, (s32)rd32(c, (RW(16) + 72)));
L_002DFF88:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2dff98);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET64(25, (s32)rd32(c, (RW(2) + 1616)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2dffac); SET32(4, RW(2) + 848); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 88)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 84))); goto L_002DFFC0; }
SET32(5, RW(5) + 928);
SET64(4, (s32)rd32(c, (RW(16) + 84)));
L_002DFFC0:;
SET64(31, 0x2dffc8);  JP_F_0016FF90(c);
SET64(3, (s32)rd32(c, (RW(16) + 88)));
wr8(c, (RW(3) + 228), (u8)RW(0));
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002E024C;
L_002DFFE0:;
SET64(2, (s64)(s32)0x530000);
SET64(3, (s64)(s32)0x3e4c0000);
c->f[0].u = rd32(c, (RW(2) + -22384));
SET64(3, RD(3) | 0xcccd);
c->f[1].u = RW(3);
SET32(4, RW(16) + 144);
SET64(31, 0x2e0000); c->f[12].f = fpu(F(1) * F(0)); JP_F_00173B10(c);
SET64(3, rd16(c, (RW(16) + 560)));
SET64(4, rd16(c, (RW(16) + 562)));
SET32(3, RW(3) + -1);
{ int t = RD(4) == RD(3);  if (t) goto L_002E024C; }
SET64(2, (s64)(s32)0x3f800000);
L_002E0018:;
wr32(c, (RW(29) + 176), RW(0));
L_002E001C:;
wr32(c, (RW(29) + 188), RW(2));
L_002E0020:;
SET64(18, RD(0) + RD(0));
L_002E0024:;
wr32(c, (RW(29) + 180), RW(0));
SET64(17, RD(0) + RD(0));
L_002E002C:;
wr32(c, (RW(29) + 184), RW(0));
L_002E0030:;
SET64(2, (s64)(s32)0x530000);
SET64(3, (s32)rd32(c, (RW(16) + 72)));
c->f[1].u = rd32(c, (RW(2) + -22384));
SET32(5, RW(29) + 176);
L_002E0040:;
c->f[3].u = RW(0);
SET32(2, RW(3) + RW(17));
rd128(c, (RW(2) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 176) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 180));
c->f[2].u = rd32(c, (RW(16) + 556));
c->facc = fpu(F(3) + F(0));
c->f[0].f = fpu(c->facc - F(2) * F(1));
wr32(c, (RW(29) + 180), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET32(2, RW(2) + RW(17));
SET64(31, 0x2e0074); SET32(4, RW(2) + 16); JP_F_0014E980(c);
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET32(2, RW(2) + RW(17));
SET64(31, 0x2e0084); SET32(4, RW(2) + 16); JP_F_0014DFC0(c);
if (0) { L_002E0080:; SET32(4, RW(2) + 16); }
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)2);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 848); if (t) { POLL(); goto L_002E0030; } }
SET64(4, (s32)rd32(c, (RW(16) + 72)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
{ u32 t = RW(25); SET64(31, 0x2e00a8);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET64(25, (s32)rd32(c, (RW(2) + 1616)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
{ u32 t = RW(25); SET64(31, 0x2e00bc); SET32(4, RW(2) + 848); rt_call(c, t); }
 goto L_002E024C;
L_002E00C4:;
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 92))); goto L_002E00E0; }
SET64(31, 0x2e00d4);  JP_F_0022DE20(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002E024C; }
SET64(2, (s32)rd32(c, (RW(16) + 92)));
L_002E00E0:;
if (RD(2) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 532))); goto L_002E00F8; }
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(0) + 2);
wr16(c, (RW(2) + 0), (u16)RW(3));
SET64(25, (s32)rd32(c, (RW(16) + 532)));
L_002E00F8:;
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e0104); SET32(4, RW(16) + 144); rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002E024C;
L_002E0114:;
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2e0128); SET32(4, RW(2) + 16); rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_002E0218; }
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET64(25, (s32)rd32(c, (RW(2) + 872)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2e0144); SET32(4, RW(2) + 864); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002E0158; }
SET64(3, RD(0) + RD(0));
 goto L_002E0218;
L_002E0158:;
SET64(31, 0x2e0160);  JP_F_00139590(c);
SET64(31, 0x2e0168);  JP_F_00139590(c);
SET64(31, 0x2e0170); SET64(4, (s32)rd32(c, (RW(2) + 20))); JP_F_001B85D0(c);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 92))); goto L_002E0180; }
SET64(3, RD(0) + RD(0)); goto L_002E0218;
L_002E0180:;
if (RD(4) == RD(0)) { SET64(3, RD(0) + (s64)1); goto L_002E020C; }
SET64(5, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(0) + 4);
SET64(5, (s32)rd32(c, (RW(5) + 48)));
if (RD(5) != RD(3)) { SET64(3, RD(0) + RD(0)); goto L_002E020C; }
SET64(31, 0x2e01a4);  JP_F_0022DE20(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002E01FC; }
SET64(31, 0x2e01b4); SET32(4, RW(16) + 100); JP_F_00157620(c);
SET64(4, (s32)rd32(c, (RW(16) + 92)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 92), RW(0)); goto L_002E01D4; }
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e01d0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 92), RW(0));
L_002E01D4:;
SET64(4, (s32)rd32(c, (RW(16) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 96), RW(0)); goto L_002E0208; }
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
SET64(31, 0x2e01f0); wr32(c, (RW(4) + 8), RW(0)); JP_F_001004B0(c);
wr32(c, (RW(16) + 96), RW(0));
 goto L_002E0208;
L_002E01FC:;
SET64(3, RD(0) + RD(0));
 goto L_002E020C;
L_002E0208:;
SET64(3, RD(0) + (s64)1);
L_002E020C:;
if (RD(3) != RD(0)) { SET64(3, RD(0) + (s64)1); goto L_002E0218; }
SET64(3, RD(0) + RD(0));
L_002E0218:;
{ int t = RD(3) == RD(0);  if (t) goto L_002E024C; }
SET64(4, (s32)rd32(c, (RW(16) + 220)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e0234);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002E024C; }
SET64(31, 0x2e0244); SET64(4, RD(16) + RD(0)); JP_F_002E03F0(c);
SET64(31, 0x2e024c); SET64(4, RD(16) + RD(0)); JP_F_00139AB0(c);
L_002E024C:;
SET64(3, (s32)rd32(c, (RW(16) + 72)));
L_002E0250:;
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002E0298; }
SET64(3, rd16(c, (RW(16) + 0)));
SET64(1, RSD(3) < (s64)12);
{ int t = RD(1) == RD(0);  if (t) goto L_002E0294; }
SET64(31, 0x2e0270);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2e027c); SET32(5, RW(0) + -1); JP_F_0013E200(c);
SET64(3, RD(2) & 0xffff);
SET64(3, RD(3) & 0x8);
{ int t = RD(3) == RD(0);  if (t) goto L_002E0294; }
SET32(3, RW(0) + 20);
wr16(c, (RW(16) + 0), (u16)RW(3));
L_002E0294:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002E0298:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 256); return;
}
void JP_F_002DF680(Ctx *c) { JP_B_002DF680(c, 0x2df680); }
void JP_F_002E0018(Ctx *c) { JP_B_002DF680(c, 0x2e0018); }
void JP_F_002E001C(Ctx *c) { JP_B_002DF680(c, 0x2e001c); }
void JP_F_002E0020(Ctx *c) { JP_B_002DF680(c, 0x2e0020); }
void JP_F_002E0024(Ctx *c) { JP_B_002DF680(c, 0x2e0024); }
void JP_F_002E002C(Ctx *c) { JP_B_002DF680(c, 0x2e002c); }
void JP_F_002E0040(Ctx *c) { JP_B_002DF680(c, 0x2e0040); }
void JP_F_002E0080(Ctx *c) { JP_B_002DF680(c, 0x2e0080); }

void JP_F_002E02B0(Ctx *c) { /* func_002E02B0 */
ENTER(0x2e02b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr16(c, (RW(4) + 562), (u16)RW(0));
SET64(16, RD(4) + RD(0));
wr16(c, (RW(4) + 564), (u16)RW(0));
wr16(c, (RW(4) + 566), (u16)RW(0));
SET64(31, 0x2e02d8); SET32(4, RW(0) + 1424); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002E02F8; }
SET32(6, RW(0) + 16);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 8192);
SET32(7, RW(0) + 128);
SET64(31, 0x2e02f8); SET64(8, RD(6) + RD(0)); JP_F_00162820(c);
L_002E02F8:;
wr32(c, (RW(16) + 88), RW(17));
SET32(2, RW(0) + 1);
wr8(c, (RW(17) + 228), (u8)RW(2));
SET64(31, 0x2e030c); SET32(4, RW(0) + 36); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002E033C; }
SET64(31, 0x2e031c); SET64(4, RD(17) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_002E033C:;
wr32(c, (RW(16) + 60), RW(17));
SET64(2, rd16(c, (RW(28) + -30220)));
if (RD(2) != RD(0)) { SET32(3, RW(0) + 20); goto L_002E0378; }
SET32(3, RW(0) + 38);
SET64(2, (s64)(s32)0x3fc00000);
wr16(c, (RW(16) + 560), (u16)RW(3));
wr32(c, (RW(16) + 556), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e0370); SET32(5, RW(0) + 2045); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 60))); goto L_002E039C;
L_002E0378:;
SET64(2, (s64)(s32)0x3f400000);
wr16(c, (RW(16) + 560), (u16)RW(3));
wr32(c, (RW(16) + 556), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e0398); SET32(5, RW(0) + 2044); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 60)));
L_002E039C:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2e03ac);  rt_call(c, t); }
SET64(31, 0x2e03b4); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(16) + 64), RW(2));
SET64(6, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET64(7, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e03d4); SET64(5, RD(2) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E03F0(Ctx *c) { /* func_002E03F0 */
ENTER(0x2e03f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd8(c, (RW(4) + 568)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002E042C; }
wr8(c, (RW(16) + 568), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 76), RW(0)); goto L_002E042C; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e0428); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 76), RW(0));
L_002E042C:;
SET64(4, (s32)rd32(c, (RW(16) + 88)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 88), RW(0)); goto L_002E044C; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e0448); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 88), RW(0));
L_002E044C:;
SET64(4, (s32)rd32(c, (RW(16) + 84)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 84), RW(0)); goto L_002E046C; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e0468); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 84), RW(0));
L_002E046C:;
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 80)));
SET64(31, 0x2e047c); SET32(5, RW(5) + 1040); JP_F_001022C0(c);
wr32(c, (RW(16) + 80), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 92)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 92), RW(0)); goto L_002E04A0; }
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e049c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 92), RW(0));
L_002E04A0:;
SET64(4, (s32)rd32(c, (RW(16) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 96), RW(0)); goto L_002E04C0; }
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
SET64(31, 0x2e04bc); wr32(c, (RW(4) + 8), RW(0)); JP_F_001004B0(c);
wr32(c, (RW(16) + 96), RW(0));
L_002E04C0:;
SET64(4, (s32)rd32(c, (RW(16) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 60), RW(0)); goto L_002E04E0; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e04dc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 60), RW(0));
L_002E04E0:;
SET64(31, 0x2e04e8); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_00100430(c);
wr32(c, (RW(16) + 64), RW(0));
SET64(31, 0x2e04f4); SET64(4, (s32)rd32(c, (RW(16) + 68))); JP_F_00100430(c);
wr32(c, (RW(16) + 68), RW(0));
SET64(5, (s64)(s32)0x140000);
SET64(4, (s32)rd32(c, (RW(16) + 72)));
SET64(31, 0x2e0508); SET32(5, RW(5) + 13072); JP_F_001022C0(c);
wr32(c, (RW(16) + 72), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 572)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 572), RW(0)); goto L_002E052C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2e0528); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 572), RW(0));
L_002E052C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E0540(Ctx *c) { /* func_002E0540 */
ENTER(0x2e0540);
SET32(29, RW(29) + -64);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2e0560); SET64(16, RD(4) + RD(0)); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13520);
SET32(18, RW(16) + 100);
wr32(c, (RW(16) + 56), RW(2));
SET32(3, RW(3) + 13528);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 13540);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(16) + 36), RW(2));
wr32(c, (RW(16) + 60), RW(0));
wr32(c, (RW(16) + 64), RW(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 76), RW(0));
wr32(c, (RW(16) + 80), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 92), RW(0));
SET64(31, 0x2e05b4); wr32(c, (RW(16) + 96), RW(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
SET32(17, RW(16) + 144);
wr32(c, (RW(18) + 16), RW(2));
SET32(3, RW(3) + 4832);
wr32(c, (RW(18) + 20), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(18) + 24), RW(0));
SET32(4, RW(17) + 64);
wr32(c, (RW(18) + 28), RW(0));
SET32(5, RW(0) + 1);
wr16(c, (RW(18) + 32), (u16)RW(0));
wr16(c, (RW(18) + 34), (u16)RW(0));
wr32(c, (RW(16) + 532), RW(3));
wr32(c, (RW(16) + 160), RW(0));
wr32(c, (RW(16) + 164), RW(0));
wr32(c, (RW(16) + 168), RW(0));
wr32(c, (RW(16) + 172), RW(2));
wr32(c, (RW(16) + 176), RW(0));
wr32(c, (RW(16) + 180), RW(0));
wr32(c, (RW(16) + 184), RW(0));
wr32(c, (RW(16) + 188), RW(2));
wr32(c, (RW(16) + 192), RW(0));
wr32(c, (RW(16) + 196), RW(0));
wr32(c, (RW(16) + 200), RW(0));
SET64(31, 0x2e0624); wr32(c, (RW(16) + 204), RW(2)); JP_F_0014D1F0(c);
wr32(c, (RW(17) + 368), RW(0));
SET32(3, RW(0) + -1);
wr32(c, (RW(17) + 372), RW(0));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(17) + 376), RW(0));
wr32(c, (RW(17) + 380), RW(0));
wr8(c, (RW(17) + 384), (u8)RW(0));
wr32(c, (RW(16) + 544), RW(3));
wr32(c, (RW(16) + 548), RW(3));
wr8(c, (RW(16) + 568), (u8)RW(0));
wr8(c, (RW(16) + 569), (u8)RW(0));
wr32(c, (RW(16) + 572), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E0670(Ctx *c) { /* func_002E0670 */
ENTER(0x2e0670);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28144); return;
}

void JP_F_002E0680(Ctx *c) { /* func_002E0680 */
ENTER(0x2e0680);
 return;
}

void JP_F_002E0690(Ctx *c) { /* func_002E0690 */
ENTER(0x2e0690);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002E0758; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13520);
SET32(3, RW(3) + 13528);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 13540);
SET64(31, 0x2e06d4); wr32(c, (RW(17) + 36), RW(2)); JP_F_002E03F0(c);
SET32(2, RW(17) + 144);
if (RD(2) == RD(0)) { SET32(4, RW(17) + 100); goto L_002E0710; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4832);
wr32(c, (RW(17) + 532), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 216)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e06fc); SET32(4, RW(17) + 208); rt_call(c, t); }
SET32(4, RW(17) + 208);
SET32(5, RW(0) + -1);
SET64(31, 0x2e070c); wr8(c, (RW(17) + 528), (u8)RW(0)); JP_F_0014D0B0(c);
SET32(4, RW(17) + 100);
L_002E0710:;
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002E0738; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
SET64(31, 0x2e0728); wr32(c, (RW(17) + 116), RW(2)); JP_F_00157620(c);
SET32(4, RW(17) + 100);
SET64(31, 0x2e0734); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(4, RD(17) + RD(0));
L_002E0738:;
SET64(31, 0x2e0740); SET64(5, RD(0) + RD(0)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002E075C; }
SET64(31, 0x2e0758); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002E0758:;
SET64(2, RD(17) + RD(0));
L_002E075C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E0770(Ctx *c) { /* func_002E0770 */
ENTER(0x2e0770);
SET32(4, RW(4) + -4); { JP_F_002E0690(c); return; }
}

void JP_F_002E0780(Ctx *c) { /* func_002E0780 */
ENTER(0x2e0780);
SET32(4, RW(4) + -24); { JP_F_002E0690(c); return; }
}

void JP_F_002E0790(Ctx *c) { /* func_002E0790 */
ENTER(0x2e0790);
SET32(4, RW(4) + -4); { JP_F_002DE310(c); return; }
}

void JP_F_002E07A0(Ctx *c) { /* func_002E07A0 */
ENTER(0x2e07a0);
SET32(4, RW(4) + -24); { JP_F_002DE310(c); return; }
}

void JP_F_002E07B0(Ctx *c) { /* func_002E07B0 */
ENTER(0x2e07b0);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(7) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(8) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(8) + 0)));
{ int t = RSD(2) < 0; SET64(17, RD(0) + RD(0)); if (t) goto L_002E0818; }
SET64(3, RD(18) + RD(0));
L_002E07F8:;
SET32(3, RW(3) + 4);
SET32(17, RW(17) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RSD(2) >= 0;  if (t) { POLL(); goto L_002E07F8; } }
L_002E0818:;
SET64(31, 0x2e0820); SET32(4, RW(17) << 2); JP_F_00100530(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x2e082c); SET32(4, RW(29) + 128); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(19) + RD(0));
SET32(2, RW(2) + -32);
SET32(4, RW(29) + 128);
wr32(c, (RW(29) + 144), RW(2));
wr32(c, (RW(29) + 148), RW(0));
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 156), RW(0));
wr16(c, (RW(29) + 160), (u16)RW(0));
SET64(31, 0x2e0858); wr16(c, (RW(29) + 162), (u16)RW(0)); JP_F_00157540(c);
{ int t = RD(17) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_002E0898; }
SET64(6, RD(16) + RD(0));
L_002E0864:;
SET64(5, (s32)rd32(c, (RW(18) + 0)));
SET32(7, RW(7) + 1);
SET64(4, (s32)rd32(c, (RW(29) + 148)));
SET64(2, RD(7) < RD(17));
SET64(3, (s32)rd32(c, (RW(29) + 152)));
SET32(5, RW(5) << 2);
SET32(18, RW(18) + 4);
SET32(4, RW(4) + RW(5));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + RW(4));
wr32(c, (RW(6) + 0), RW(3));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_002E0864; } }
L_002E0898:;
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
SET32(4, RW(29) + 128);
SET64(31, 0x2e08ac); wr32(c, (RW(29) + 144), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 128);
SET64(31, 0x2e08b8); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(31, 0x2e08c0); SET32(4, RW(0) + 16); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002E0904; }
wr32(c, (RW(17) + 8), RW(0));
SET32(4, RW(0) + 12);
wr32(c, (RW(17) + 0), RW(20));
SET64(31, 0x2e08dc); wr32(c, (RW(17) + 4), RW(16)); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 12), RW(2)); goto L_002E08F4; }
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(17) + 12), RW(2));
L_002E08F4:;
SET64(3, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(2) + 8), RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 12)));
wr32(c, (RW(2) + 4), RW(22));
L_002E0904:;
SET64(5, (s32)rd32(c, (RW(21) + 0)));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET64(2, (s32)rd32(c, (RW(5) + 4)));
{ int t = RD(3) == RD(2); SET64(4, (s32)rd32(c, (RW(5) + 16))); if (t) goto L_002E097C; }
SET64(7, (s32)rd32(c, (RW(5) + 8)));
{ int t = RD(3) == RD(0); SET32(6, RW(3) + -1); if (t) goto L_002E0948; }
L_002E0924:;
SET64(2, rd8(c, (RW(7) + 0)));
if (RD(2) != RD(0)) { SET64(2, RD(6) + RD(0)); goto L_002E093C; }
SET32(2, RW(0) + 1);
wr8(c, (RW(7) + 0), (u8)RW(2)); goto L_002E094C;
L_002E093C:;
SET32(7, RW(7) + 16);
{ int t = RD(2) != RD(0); SET32(6, RW(6) + -1); if (t) { POLL(); goto L_002E0924; } }
L_002E0948:;
SET64(7, RD(0) + RD(0));
L_002E094C:;
if (RD(7) == RD(0)) { SET64(2, (s32)rd32(c, (RW(21) + 0))); goto L_002E0980; }
wr32(c, (RW(7) + 4), RW(4));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(7) + 8), RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(2) + 4), RW(7));
wr32(c, (RW(4) + 8), RW(7));
SET64(2, (s32)rd32(c, (RW(5) + 4)));
SET32(2, RW(2) + 1);
wr32(c, (RW(5) + 4), RW(2));
wr32(c, (RW(7) + 12), RW(17));
L_002E097C:;
SET64(2, (s32)rd32(c, (RW(21) + 0)));
L_002E0980:;
SET64(31, rd64(c, (RW(29) + 112)));
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(2, (s32)rd32(c, (RW(2) + 4)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET32(2, RW(2) + -1);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_002E09B0(Ctx *c) { /* func_002E09B0 */
ENTER(0x2e09b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
SET32(2, RW(2) + 12);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_002E09F8; }
L_002E09E0:;
{ int t = RD(4) == RD(17);  if (t) goto L_002E09F8; }
SET64(3, (s32)rd32(c, (RW(3) + 8)));
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 1); if (t) { POLL(); goto L_002E09E0; } }
L_002E09F8:;
SET64(31, 0x2e0a00); SET32(4, RW(0) + 108); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002E0A14; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2e0a14); SET32(5, RW(0) + 1); JP_F_0022E5E0(c);
L_002E0A14:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(4, (s32)rd32(c, (RW(3) + 20)));
SET32(2, RW(3) + 12);
{ int t = RD(4) == RD(2); SET64(5, RD(0) + RD(0)); if (t) goto L_002E0A40; }
L_002E0A28:;
if (RD(5) != RD(17)) { SET64(4, (s32)rd32(c, (RW(4) + 8))); goto L_002E0A38; }
SET32(17, RW(4) + 12); goto L_002E0A44;
L_002E0A38:;
{ int t = RD(4) != RD(2); SET32(5, RW(5) + 1); if (t) { POLL(); goto L_002E0A28; } }
L_002E0A40:;
SET32(17, RW(3) + 24);
L_002E0A44:;
SET64(31, 0x2e0a4c);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002E0A60; }
SET32(5, RW(5) + 672);
SET64(4, RD(16) + RD(0));
L_002E0A60:;
SET64(31, 0x2e0a68);  JP_F_0022E3C0(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s32)rd32(c, (RW(2) + 12)));
SET64(31, 0x2e0a78); SET64(4, RD(16) + RD(0)); JP_F_0022DE10(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2e0a88); SET64(4, RD(16) + RD(0)); JP_F_0022E160(c);
SET64(31, 0x2e0a90); SET64(4, RD(16) + RD(0)); JP_F_0022DF00(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E0AB0(Ctx *c) { /* func_002E0AB0 */
ENTER(0x2e0ab0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2e0ad4); SET32(4, RW(0) + 28); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002E0B34; }
SET64(31, 0x2e0ae4); SET32(4, RW(18) << 4); JP_F_00100530(c);
wr32(c, (RW(16) + 8), RW(2));
wr32(c, (RW(16) + 0), RW(18));
wr32(c, (RW(16) + 4), RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(5, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(3) == RD(0); SET32(4, RW(3) + -1); if (t) goto L_002E0B20; }
L_002E0B00:;
wr8(c, (RW(5) + 0), (u8)RW(0));
SET64(3, RD(4) + RD(0));
wr32(c, (RW(5) + 4), RW(0));
SET32(4, RW(4) + -1);
wr32(c, (RW(5) + 8), RW(0));
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 16); if (t) { POLL(); goto L_002E0B00; } }
L_002E0B20:;
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 12), (u8)RW(3));
SET32(3, RW(16) + 12);
wr32(c, (RW(16) + 20), RW(3));
wr32(c, (RW(16) + 16), RW(3));
L_002E0B34:;
wr32(c, (RW(17) + 0), RW(16));
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(3, (s32)rd32(c, (RW(3) + 8)));
{ int t = RD(4) == RD(3);  if (t) goto L_002E0B70; }
SET64(3, RD(3) << 32);
SET64(3, RSD(3) >> 32);
L_002E0B54:;
SET64(4, RD(4) << 32);
SET64(4, RSD(4) >> 32);
wr32(c, (RW(4) + 12), RW(0));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(4) != RD(3);  if (t) { POLL(); goto L_002E0B54; } }
L_002E0B70:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002E0B90(Ctx *c) { /* func_002E0B90 */
ENTER(0x2e0b90);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 16)));
SET64(17, (s32)rd32(c, (RW(4) + 20)));
SET64(18, (s32)rd32(c, (RW(3) + 8)));
{ int t = RD(17) == RD(18);  if (t) goto L_002E0C58; }
SET64(3, RD(17) << 32);
L_002E0BC8:;
SET64(3, RSD(3) >> 32);
SET64(19, (s32)rd32(c, (RW(3) + 12)));
{ int t = RD(19) == RD(0);  if (t) goto L_002E0C38; }
SET64(4, (s32)rd32(c, (RW(19) + 8)));
{ int t = RD(4) == RD(0);  if (t) goto L_002E0BF8; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e0bf4); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002E0BF8:;
wr32(c, (RW(19) + 8), RW(0));
SET64(4, (s32)rd32(c, (RW(19) + 12)));
{ int t = RD(4) == RD(0);  if (t) goto L_002E0C18; }
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
SET64(31, 0x2e0c18); wr32(c, (RW(4) + 8), RW(0)); JP_F_001004B0(c);
L_002E0C18:;
wr32(c, (RW(19) + 12), RW(0));
SET64(31, 0x2e0c24); SET64(4, (s32)rd32(c, (RW(19) + 4))); JP_F_00100430(c);
wr32(c, (RW(19) + 4), RW(0));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2e0c34); wr32(c, (RW(19) + 0), RW(0)); JP_F_001004B0(c);
L_002E0C38:;
SET64(4, RD(17) << 32);
SET64(4, RSD(4) >> 32);
SET64(3, RD(18) << 32);
wr32(c, (RW(4) + 12), RW(0));
SET64(3, RSD(3) >> 32);
SET64(17, (s32)rd32(c, (RW(4) + 8)));
if (RD(17) != RD(3)) { SET64(3, RD(17) << 32); { POLL(); goto L_002E0BC8; } }
L_002E0C58:;
SET64(17, (s32)rd32(c, (RW(16) + 0)));
if (RD(17) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_002E0C78; }
SET64(31, 0x2e0c6c); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_00100430(c);
SET64(31, 0x2e0c74); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
wr32(c, (RW(16) + 0), RW(0));
L_002E0C78:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002E0CA0(Ctx *c) { /* func_002E0CA0 */
ENTER(0x2e0ca0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 0), RW(0));
SET64(31, 0x2e0cb8); SET64(16, RD(4) + RD(0)); JP_F_002E0AB0(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E0CD0(Ctx *c) { /* func_002E0CD0 */
ENTER(0x2e0cd0);
SET32(29, RW(29) + -64);
SET64(2, RD(5) & 0xffff);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET32(16, RW(2) << 2);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(2) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e0d10);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET32(2, RW(0) + 67);
SET32(3, RW(3) + RW(16));
SET64(16, (s32)rd32(c, (RW(3) + 0)));
SET64(17, (s32)rd32(c, (RW(16) + 4)));
SET64(3, (s8)rd8(c, (RW(17) + 0)));
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_002E0D64; }
SET64(3, (s8)rd8(c, (RW(17) + 1)));
SET32(2, RW(0) + 77);
{ int t = RD(3) != RD(2);  if (t) goto L_002E0D60; }
SET64(3, (s8)rd8(c, (RW(17) + 2)));
SET32(2, RW(0) + 80);
{ int t = RD(3) != RD(2);  if (t) goto L_002E0D60; }
SET64(3, (s8)rd8(c, (RW(17) + 3)));
SET32(2, RW(0) + 83);
if (RD(3) == RD(2)) { SET64(2, RD(0) + (s64)1); goto L_002E0D64; }
L_002E0D60:;
SET64(2, RD(0) + RD(0));
L_002E0D64:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 8))); goto L_002E0D98; }
SET64(31, 0x2e0d74); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_00100530(c);
SET64(18, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2e0d84); SET64(5, RD(18) + RD(0)); JP_F_00174300(c);
SET64(31, 0x2e0d8c); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00100430(c);
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 4), RW(18));
SET64(2, rd8(c, (RW(16) + 8)));
L_002E0D98:;
SET64(2, RD(2) & 0x2);
SET64(2, RD(0) < RD(2));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 4))); goto L_002E0DC0; }
SET64(31, 0x2e0db0); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_0022D870(c);
SET64(2, rd8(c, (RW(16) + 8)));
SET64(2, RD(2) & 0xfd);
wr8(c, (RW(16) + 8), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
L_002E0DC0:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E0DE0(Ctx *c) { /* func_002E0DE0 */
ENTER(0x2e0de0);
SET64(2, RD(5) & 0xffff);
SET32(3, RW(2) << 2);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, RD(0) < RD(2)); return;
}

void JP_F_002E0E00(Ctx *c) { /* func_002E0E00 */
ENTER(0x2e0e00);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(3) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_002E0EB0; }
SET64(2, ~(RD(20) | RD(0)));
{ int t = RD(3) == RD(0); SET64(16, RD(2) < (u64)(s64)1); if (t) goto L_002E0EB0; }
SET64(17, RD(0) + RD(0));
L_002E0E48:;
SET64(2, (s32)rd32(c, (RW(21) + 0)));
SET64(3, RD(20) ^ RD(18));
SET32(2, RW(2) + RW(17));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0); SET64(3, RD(3) < (u64)(s64)1); if (t) goto L_002E0E98; }
{ int t = RD(16) != RD(0);  if (t) goto L_002E0E70; }
{ int t = RD(3) == RD(0);  if (t) goto L_002E0E98; }
L_002E0E70:;
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e0e84);  rt_call(c, t); }
SET64(3, RD(2) & 0xff);
SET64(2, RD(19) & 0xff);
SET64(2, RD(2) | RD(3));
SET64(19, RD(0) < RD(2));
L_002E0E98:;
SET64(2, (s32)rd32(c, (RW(21) + 4)));
SET32(18, RW(18) + 1);
SET64(2, RD(18) < RD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002E0E48; } }
L_002E0EB0:;
SET64(2, RD(19) + RD(0));
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002E0EE0(Ctx *c) { /* func_002E0EE0 */
ENTER(0x2e0ee0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(6, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(6) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002E0F68; }
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET64(4, RD(5) & 0xffff);
SET64(1, RD(4) < RD(3));
if (RD(1) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002E0F6C; }
SET32(17, RW(4) << 2);
SET32(3, RW(6) + RW(17));
SET64(18, (s32)rd32(c, (RW(3) + 0)));
if (RD(18) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_002E0F60; }
SET64(4, (s32)rd32(c, (RW(18) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 0), RW(0)); goto L_002E0F48; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e0f44); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 0), RW(0));
L_002E0F48:;
SET64(31, 0x2e0f50); SET64(4, (s32)rd32(c, (RW(18) + 4))); JP_F_00100430(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2e0f5c); wr32(c, (RW(18) + 4), RW(0)); JP_F_001004B0(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
L_002E0F60:;
SET32(3, RW(3) + RW(17));
wr32(c, (RW(3) + 0), RW(0));
L_002E0F68:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002E0F6C:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E0F80(Ctx *c) { /* func_002E0F80 */
ENTER(0x2e0f80);
SET32(29, RW(29) + -96);
SET64(3, RD(7) & 0xffff);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(16, RW(3) << 2);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + RW(16));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(3) != RD(0); SET64(17, RD(6) + RD(0)); if (t) goto L_002E10C4; }
SET64(31, 0x2e0fc4); SET32(4, RW(0) + 12); JP_F_00100670(c);
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(19) + 0))); goto L_002E0FE0; }
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr8(c, (RW(2) + 8), (u8)RW(0));
wr8(c, (RW(2) + 8), (u8)RW(0));
SET64(3, (s32)rd32(c, (RW(19) + 0)));
L_002E0FE0:;
SET32(3, RW(3) + RW(16));
wr32(c, (RW(3) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET32(2, RW(2) + RW(16));
SET64(16, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2e0ffc); SET32(4, RW(0) + 20); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002E100C; }
SET64(31, 0x2e100c); SET64(4, RD(19) + RD(0)); JP_F_00158180(c);
L_002E100C:;
wr32(c, (RW(16) + 0), RW(19));
SET64(2, rd8(c, (RW(17) + 0)));
SET64(2, RD(2) & 0x1);
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002E106C; }
SET64(5, (s64)(s32)0x420000);
SET32(4, RW(29) + 80);
SET32(5, RW(5) + -30496);
SET32(3, RW(0) + 7);
L_002E1034:;
SET64(2, (s16)rd16(c, (RW(5) + 0)));
SET32(3, RW(3) + -1);
wr16(c, (RW(4) + 0), (u16)RW(2));
SET32(5, RW(5) + 2);
SET32(4, RW(4) + 2);
{ int t = RSD(3) > 0;  if (t) { POLL(); goto L_002E1034; } }
SET64(3, rd16(c, (RW(28) + -30220)));
SET64(2, RD(18) << 48);
SET64(2, RSD(2) >> 48);
SET32(3, RW(3) << 1);
SET32(3, RW(3) + RW(29));
SET64(3, (s16)rd16(c, (RW(3) + 80)));
SET32(18, RW(2) + RW(3));
L_002E106C:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e1080); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2e1094);  rt_call(c, t); }
SET64(31, 0x2e109c); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
wr32(c, (RW(16) + 4), RW(2));
SET64(6, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e10bc); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, rd8(c, (RW(17) + 0)));
wr8(c, (RW(16) + 8), (u8)RW(3));
L_002E10C4:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002E10E0(Ctx *c) { /* func_002E10E0 */
ENTER(0x2e10e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 4), RW(5));
SET64(16, RD(4) + RD(0));
SET64(31, 0x2e10fc); SET32(4, RW(5) << 2); JP_F_00100530(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002E1130; }
SET64(4, RD(0) + RD(0));
L_002E1110:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET32(5, RW(5) + 1);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(3) + 0), RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET64(3, RD(5) < RD(3));
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_002E1110; } }
L_002E1130:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E1140(Ctx *c) { /* func_002E1140 */
ENTER(0x2e1140);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(18) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002E1234; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13600);
wr32(c, (RW(18) + 8), RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 4)));
{ int t = RD(4) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002E1210; }
SET64(3, (s32)rd32(c, (RW(18) + 0)));
L_002E1184:;
{ int t = RD(3) == RD(0); SET64(2, RD(16) & 0xffff); if (t) goto L_002E11F8; }
SET64(2, RD(2) & 0xffff);
SET64(1, RD(2) < RD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_002E11F8; }
SET32(19, RW(2) << 2);
SET32(2, RW(3) + RW(19));
SET64(20, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(20) == RD(0);  if (t) goto L_002E11E8; }
SET64(4, (s32)rd32(c, (RW(20) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_002E11D0; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e11cc); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002E11D0:;
wr32(c, (RW(20) + 0), RW(0));
SET64(31, 0x2e11dc); SET64(4, (s32)rd32(c, (RW(20) + 4))); JP_F_00100430(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2e11e8); wr32(c, (RW(20) + 4), RW(0)); JP_F_001004B0(c);
L_002E11E8:;
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET32(2, RW(2) + RW(19));
wr32(c, (RW(2) + 0), RW(0));
L_002E11F8:;
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET32(16, RW(16) + 1);
SET64(2, RD(16) < RD(4));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 0))); { POLL(); goto L_002E1184; } }
L_002E1210:;
SET64(31, 0x2e1218); SET64(4, (s32)rd32(c, (RW(18) + 0))); JP_F_00100430(c);
SET64(2, RD(17) << 48);
wr32(c, (RW(18) + 0), RW(0));
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(18) + 4), RW(0)); if (t) goto L_002E1234; }
SET64(31, 0x2e1234); SET64(4, RD(18) + RD(0)); JP_F_001004B0(c);
L_002E1234:;
SET64(2, RD(18) + RD(0));
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002E1260(Ctx *c) { /* func_002E1260 */
ENTER(0x2e1260);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13600);
wr32(c, (RW(4) + 8), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(0)); return;
}

void JP_F_002E1280(Ctx *c) { /* func_002E1280 */
ENTER(0x2e1280);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET32(4, RW(16) + 1128);
SET64(31, 0x2e129c); SET32(5, RW(16) + 1132); JP_F_00130F18(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002E142C; }
SET32(3, RW(0) + 4);
wr32(c, (RW(16) + 1136), RW(3));
SET64(3, rd16(c, (RW(16) + 1132)));
if (RD(3) == RD(0)) { SET32(3, RW(0) + 3); goto L_002E1424; }
SET64(4, RD(0) | 0x9003);
if (RD(3) == RD(4)) { SET32(3, RW(0) + 24); goto L_002E1418; }
SET32(4, RW(0) + 13);
{ int t = RD(3) == RD(4);  if (t) goto L_002E1428; }
SET64(4, RD(0) | 0x9004);
{ int t = RD(3) == RD(4);  if (t) goto L_002E1428; }
SET64(4, RD(0) | 0x8004);
{ int t = RD(3) == RD(4);  if (t) goto L_002E1428; }
SET64(4, RD(0) | 0x8003);
{ int t = RD(3) == RD(4);  if (t) goto L_002E1428; }
SET32(4, RW(0) + 134);
if (RD(3) == RD(4)) { SET32(3, RW(0) + 7); goto L_002E1410; }
SET32(4, RW(0) + 47);
if (RD(3) == RD(4)) { SET32(3, RW(0) + 6); goto L_002E1408; }
SET64(4, RD(0) | 0x9001);
if (RD(3) == RD(4)) { SET32(3, RW(0) + 9); goto L_002E1400; }
SET64(4, RD(0) | 0x9002);
if (RD(3) == RD(4)) { SET32(3, RW(0) + 10); goto L_002E13F8; }
SET32(4, RW(0) + 90);
{ int t = RD(3) == RD(4);  if (t) goto L_002E13F4; }
SET32(4, RW(0) + 23);
if (RD(3) == RD(4)) { SET32(3, RW(0) + 13); goto L_002E13EC; }
SET32(4, RW(0) + 28);
{ int t = RD(3) == RD(4);  if (t) goto L_002E13E8; }
SET32(4, RW(0) + 17);
{ int t = RD(3) == RD(4);  if (t) goto L_002E13E8; }
SET32(4, RW(0) + 19);
if (RD(3) == RD(4)) { SET32(3, RW(0) + 12); goto L_002E13E0; }
SET32(4, RW(0) + 111);
if (RD(3) == RD(4)) { SET32(3, RW(0) + 11); goto L_002E13D8; }
SET32(4, RW(0) + 22);
{ int t = RD(3) == RD(4);  if (t) goto L_002E13D4; }
SET32(4, RW(0) + 20);
{ int t = RD(3) == RD(4);  if (t) goto L_002E13D4; }
SET64(4, RD(0) | 0x8001);
{ int t = RD(3) == RD(4);  if (t) goto L_002E13D4; }
SET32(4, RW(0) + 91);
{ int t = RD(3) == RD(4);  if (t) goto L_002E13D4; }
SET64(4, RD(0) | 0x8002);
{ int t = RD(3) == RD(4);  if (t) goto L_002E13D4; }
SET32(4, RW(0) + 16);
{ int t = RD(3) == RD(4);  if (t) goto L_002E13D4; }
SET32(4, RW(0) + 2);
if (RD(3) == RD(4)) { SET32(3, RW(0) + 8); goto L_002E13CC; }
 goto L_002E1420;
L_002E13CC:;
wr32(c, (RW(16) + 1140), RW(3)); goto L_002E1428;
L_002E13D4:;
SET32(3, RW(0) + 11);
L_002E13D8:;
wr32(c, (RW(16) + 1140), RW(3)); goto L_002E1428;
L_002E13E0:;
wr32(c, (RW(16) + 1140), RW(3)); goto L_002E1428;
L_002E13E8:;
SET32(3, RW(0) + 13);
L_002E13EC:;
wr32(c, (RW(16) + 1140), RW(3)); goto L_002E1428;
L_002E13F4:;
SET32(3, RW(0) + 10);
L_002E13F8:;
wr32(c, (RW(16) + 1140), RW(3)); goto L_002E1428;
L_002E1400:;
wr32(c, (RW(16) + 1140), RW(3)); goto L_002E1428;
L_002E1408:;
wr32(c, (RW(16) + 1140), RW(3)); goto L_002E1428;
L_002E1410:;
wr32(c, (RW(16) + 1140), RW(3)); goto L_002E1428;
L_002E1418:;
wr32(c, (RW(16) + 1140), RW(3)); goto L_002E1428;
L_002E1420:;
SET32(3, RW(0) + 3);
L_002E1424:;
wr32(c, (RW(16) + 1136), RW(3));
L_002E1428:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002E142C:;
SET64(2, RD(2) ^ RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E1440(Ctx *c) { /* func_002E1440 */
ENTER(0x2e1440);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2e1458); SET64(4, (s32)rd32(c, (RW(4) + 1120))); JP_F_0012FFE8(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002E1474; }
SET32(2, RW(0) + 5);
SET32(3, RW(0) + 2);
wr32(c, (RW(16) + 1140), RW(2));
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 1136), RW(3));
L_002E1474:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E1490(Ctx *c) { /* func_002E1490 */
ENTER(0x2e1490);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 1120)));
SET64(31, 0x2e14ac); SET64(6, RD(0) + RD(0)); JP_F_00130838(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002E14C4; }
wr32(c, (RW(16) + 1140), RW(0));
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 1136), RW(2));
SET32(2, RW(0) + 1);
L_002E14C4:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E14E0(Ctx *c) { /* func_002E14E0 */
ENTER(0x2e14e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2e14f8); SET64(4, (s32)rd32(c, (RW(4) + 1120))); JP_F_00130768(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002E1510; }
SET32(3, RW(0) + 2);
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 1140), RW(3));
wr32(c, (RW(16) + 1136), RW(3));
L_002E1510:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E1520(Ctx *c) { /* func_002E1520 */
ENTER(0x2e1520);
SET32(29, RW(29) + -32);
SET64(6, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(7, RW(0) + 1);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr8(c, (RW(4) + 1020), (u8)RW(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 1012), RW(0));
SET32(8, RW(16) + 996);
SET64(4, (s32)rd32(c, (RW(4) + 1120)));
SET64(31, 0x2e1550); SET32(9, RW(16) + 1124); JP_F_00130660(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002E1568; }
wr32(c, (RW(16) + 1140), RW(0));
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 1136), RW(2));
SET32(2, RW(0) + 1);
L_002E1568:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E1580(Ctx *c) { /* func_002E1580 */
ENTER(0x2e1580);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 1108), RW(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 1116), RW(0));
wr32(c, (RW(4) + 1112), RW(0));
SET64(4, (s32)rd32(c, (RW(4) + 1120)));
SET64(31, 0x2e15a8); SET32(5, RW(16) + 1108); JP_F_001300E8(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002E15C0; }
wr32(c, (RW(16) + 1140), RW(0));
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 1136), RW(2));
SET32(2, RW(0) + 1);
L_002E15C0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E15D0(Ctx *c) { /* func_002E15D0 */
ENTER(0x2e15d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2e15e4); SET64(16, RD(4) + RD(0)); JP_F_002E1280(c);
SET64(4, (s32)rd32(c, (RW(16) + 1120)));
SET32(3, RW(0) + -1);
if (RD(4) == RD(3)) { wr32(c, (RW(16) + 1136), RW(0)); goto L_002E1608; }
SET64(31, 0x2e15fc);  JP_F_0012FEA8(c);
SET32(3, RW(0) + -1);
wr32(c, (RW(16) + 1120), RW(3));
wr32(c, (RW(16) + 1136), RW(0));
L_002E1608:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E1620(Ctx *c) { /* func_002E1620 */
ENTER(0x2e1620);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(8) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(7) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(6) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(9) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(10) + RD(0));
SET64(16, RD(11) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2e1674); SET32(6, RW(0) + 964); JP_F_001273D0(c);
SET64(5, (s64)(s32)0x4c0000);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2e1684); SET32(5, RW(5) + -28128); JP_F_0012A3C0(c);
SET64(7, rd16(c, (RW(28) + -30220)));
SET64(3, (s64)(s32)0x420000);
SET64(5, (s64)(s32)0x420000);
SET32(3, RW(3) + -30416);
SET32(2, RW(0) + 96);
SET32(4, RW(20) + 16);
SET32(7, RW(7) << 2);
SET32(5, RW(5) + -30480);
SET32(3, RW(3) + RW(7));
SET32(6, RW(0) + 64);
SET64(3, (s32)rd32(c, (RW(3) + 0)));
wr16(c, (RW(20) + 6), (u16)RW(3));
SET64(31, 0x2e16bc); wr32(c, (RW(20) + 12), RW(2)); JP_F_00127218(c);
SET64(5, RD(19) + RD(0));
SET64(31, 0x2e16c8); SET32(4, RW(20) + 192); JP_F_0012A3C0(c);
SET64(5, RD(21) + RD(0));
SET64(31, 0x2e16d4); SET32(4, RW(20) + 260); JP_F_0012A3C0(c);
SET64(5, RD(22) + RD(0));
SET64(31, 0x2e16e0); SET32(4, RW(20) + 324); JP_F_0012A3C0(c);
SET64(5, RD(23) + RD(0));
SET64(31, 0x2e16ec); SET32(4, RW(20) + 388); JP_F_0012A3C0(c);
c->f[7].u = rd32(c, (RW(18) + 0));
SET64(5, RD(0) + RD(0));
c->f[6].u = rd32(c, (RW(18) + 4));
SET64(4, RD(20) + RD(0));
c->f[5].u = rd32(c, (RW(18) + 8));
c->f[4].u = rd32(c, (RW(18) + 12));
c->f[3].u = rd32(c, (RW(17) + 0));
c->f[2].u = rd32(c, (RW(17) + 4));
c->f[1].u = rd32(c, (RW(17) + 8));
c->f[0].u = rd32(c, (RW(17) + 12));
L_002E1714:;
wr32(c, (RW(4) + 80), c->f[7].u);
SET32(5, RW(5) + 1);
wr32(c, (RW(4) + 84), c->f[6].u);
SET64(3, RSD(5) < (s64)3);
wr32(c, (RW(4) + 88), c->f[5].u);
wr32(c, (RW(4) + 92), c->f[4].u);
wr32(c, (RW(4) + 128), c->f[3].u);
wr32(c, (RW(4) + 132), c->f[2].u);
wr32(c, (RW(4) + 136), c->f[1].u);
wr32(c, (RW(4) + 140), c->f[0].u);
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 16); if (t) { POLL(); goto L_002E1714; } }
c->f[2].u = rd32(c, (RW(16) + 0));
c->f[1].u = rd32(c, (RW(16) + 4));
c->f[0].u = rd32(c, (RW(16) + 8));
wr32(c, (RW(20) + 176), c->f[2].u);
wr32(c, (RW(20) + 180), c->f[1].u);
wr32(c, (RW(20) + 184), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 12));
wr32(c, (RW(20) + 188), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 128)));
rd128(c, (RW(29) + 112) & ~15u, &c->r[23]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_002E1790(Ctx *c) { /* func_002E1790 */
ENTER(0x2e1790);
SET32(29, RW(29) + -32);
SET64(5, (s64)(s32)0x540000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(0) + 2);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(5, RW(5) + 6272);
wr32(c, (RW(4) + 964), RW(2));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 968), RW(2));
wr32(c, (RW(4) + 972), RW(0));
SET64(31, 0x2e17c0); SET32(4, RW(16) + 964); JP_F_0012FE10(c);
wr32(c, (RW(16) + 1120), RW(2));
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 1136), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E17E0(Ctx *c) { /* func_002E17E0 */
ENTER(0x2e17e0);
SET32(29, RW(29) + -16);
SET64(4, (s64)(s32)0x4c0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(4) + -28112);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2e17fc); SET64(6, RD(0) + RD(0)); JP_F_001177B8(c);
{ int t = RSD(2) >= 0;  if (t) goto L_002E1810; }
SET64(4, (s64)(s32)0x4c0000);
SET64(31, 0x2e1810); SET32(4, RW(4) + -28080); JP_F_001285D8(c);
L_002E1810:;
SET64(4, (s64)(s32)0x4c0000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -28048);
SET64(31, 0x2e1824); SET64(6, RD(0) + RD(0)); JP_F_001177B8(c);
{ int t = RSD(2) >= 0;  if (t) goto L_002E1838; }
SET64(4, (s64)(s32)0x4c0000);
SET64(31, 0x2e1838); SET32(4, RW(4) + -28016); JP_F_001285D8(c);
L_002E1838:;
SET64(4, (s64)(s32)0x4c0000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -27984);
SET64(31, 0x2e184c); SET64(6, RD(0) + RD(0)); JP_F_001177B8(c);
{ int t = RSD(2) >= 0;  if (t) goto L_002E1860; }
SET64(4, (s64)(s32)0x4c0000);
SET64(31, 0x2e1860); SET32(4, RW(4) + -27952); JP_F_001285D8(c);
L_002E1860:;
SET64(31, 0x2e1868);  JP_F_0012ED40(c);
SET64(31, 0x2e1870); SET64(4, RD(0) + RD(0)); JP_F_0012FC08(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002E1880(Ctx *c) { /* func_002E1880 */
ENTER(0x2e1880);
 return;
}

void JP_F_002E1890(Ctx *c) { /* func_002E1890 */
ENTER(0x2e1890);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -27920); return;
}

void JP_F_002E18A0(Ctx *c) { /* func_002E18A0 */
ENTER(0x2e18a0);
SET32(2, RW(0) + 1); return;
}

void JP_F_002E18B0(Ctx *c) { /* func_002E18B0 */
ENTER(0x2e18b0);
 return;
}

void JP_F_002E18C0(Ctx *c) { /* func_002E18C0 */
ENTER(0x2e18c0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(7) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET32(4, RW(0) + 56);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[21].u = c->f[12].u;
SET64(31, 0x2e1904); c->f[20].u = c->f[13].u; JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002E1958; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13904);
SET32(3, RW(3) + 13952);
wr32(c, (RW(16) + 12), RW(2));
wr32(c, (RW(16) + 0), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(16) + 4), (u8)RW(0));
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 12), RW(3));
wr32(c, (RW(16) + 16), RW(0));
wr32(c, (RW(16) + 20), RW(19));
wr32(c, (RW(16) + 24), RW(18));
wr32(c, (RW(16) + 28), RW(17));
wr32(c, (RW(16) + 32), c->f[20].u);
wr32(c, (RW(16) + 36), RW(0));
wr32(c, (RW(16) + 40), RW(0));
wr32(c, (RW(16) + 44), c->f[21].u);
wr32(c, (RW(16) + 48), RW(2));
L_002E1958:;
SET64(2, rd8(c, (RW(20) + 428)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 0), RW(20)); goto L_002E19E8; }
SET64(2, (s32)rd32(c, (RW(20) + 416)));
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002E1998; }
SET64(3, (s32)rd32(c, (RW(20) + 420)));
L_002E1974:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(20) + 416))); goto L_002E1988; }
SET64(2, RD(0) + RD(0)); goto L_002E199C;
L_002E1988:;
SET32(4, RW(4) + 1);
SET64(2, RD(4) < RD(2));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 4); if (t) { POLL(); goto L_002E1974; } }
L_002E1998:;
SET64(2, RD(0) + (s64)1);
L_002E199C:;
{ int t = RD(2) == RD(0);  if (t) goto L_002E19E4; }
SET64(3, (s32)rd32(c, (RW(20) + 404)));
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + (s64)1); if (t) goto L_002E19C4; }
SET32(2, RW(0) + 3);
if (RD(3) == RD(2)) { SET64(2, RD(4) & 0xff); goto L_002E19C8; }
SET64(4, RD(0) + RD(0));
L_002E19C4:;
SET64(2, RD(4) & 0xff);
L_002E19C8:;
{ int t = RD(2) != RD(0);  if (t) goto L_002E19E4; }
SET64(31, 0x2e19d8);  JP_F_0013AA20(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2e19e4); SET32(5, RW(20) + 356); JP_F_0013A4F0(c);
L_002E19E4:;
wr32(c, (RW(16) + 0), RW(20));
L_002E19E8:;
SET64(25, (s32)rd32(c, (RW(16) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e19f8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 416)));
{ int t = RD(3) == RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_002E1A38; }
SET64(4, (s32)rd32(c, (RW(20) + 420)));
SET64(5, RD(4) + RD(0));
L_002E1A0C:;
SET64(3, (s32)rd32(c, (RW(5) + 0)));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(20) + 416))); goto L_002E1A28; }
SET32(3, RW(6) << 2);
SET32(3, RW(4) + RW(3));
wr32(c, (RW(3) + 0), RW(16)); goto L_002E1A38;
L_002E1A28:;
SET32(6, RW(6) + 1);
SET64(3, RD(6) < RD(3));
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 4); if (t) { POLL(); goto L_002E1A0C; } }
L_002E1A38:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002E1A60(Ctx *c) { /* func_002E1A60 */
ENTER(0x2e1a60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002E1AB0; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13904);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2e1a98);  rt_call(c, t); }
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(17) + 0), RW(0)); if (t) goto L_002E1AB0; }
SET64(31, 0x2e1ab0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002E1AB0:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E1AD0(Ctx *c) { /* func_002E1AD0 */
ENTER(0x2e1ad0);
 return;
}

void JP_F_002E1AE0(Ctx *c) { /* func_002E1AE0 */
ENTER(0x2e1ae0);
 return;
}

void JP_F_002E1AF0(Ctx *c) { /* func_002E1AF0 */
ENTER(0x2e1af0);
SET32(29, RW(29) + -48);
SET64(8, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 32), c->f[12].u);
wr32(c, (RW(29) + 44), RW(2));
wr32(c, (RW(29) + 36), c->f[12].u);
wr32(c, (RW(29) + 28), RW(2));
wr32(c, (RW(29) + 40), c->f[12].u);
SET32(6, RW(29) + 32);
c->f[12].u = c->f[14].u;
SET32(7, RW(29) + 16);
wr32(c, (RW(29) + 16), c->f[13].u);
wr32(c, (RW(29) + 20), c->f[13].u);
SET64(31, 0x2e1b30); wr32(c, (RW(29) + 24), c->f[13].u); JP_F_002E1B40(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002E1B40(Ctx *c) { /* func_002E1B40 */
ENTER(0x2e1b40);
SET32(29, RW(29) + -224);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(6) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(7) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
SET64(16, RD(8) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET32(4, RW(29) + 144);
c->f[22].u = c->f[12].u;
SET64(31, 0x2e1b88); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_001F38C0(c);
SET64(31, 0x2e1b90); SET32(4, RW(29) + 144); JP_F_001F3C40(c);
rd128(c, (RW(20) + 0) & ~15u, &c->r[2]);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 128), RW(0));
SET32(4, RW(29) + 112);
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
wr32(c, (RW(29) + 140), RW(3));
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 128));
wr32(c, (RW(29) + 124), RW(3));
c->f[1].u = rd32(c, (RW(29) + 132));
wr32(c, (RW(29) + 112), RW(0));
c->f[0].u = rd32(c, (RW(29) + 136));
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
wr32(c, (RW(29) + 160), c->f[2].u);
wr32(c, (RW(29) + 164), c->f[1].u);
wr32(c, (RW(29) + 168), c->f[0].u);
rd128(c, (RW(19) + 0) & ~15u, &c->r[2]);
SET64(31, 0x2e1be4); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); JP_F_002D09F0(c);
c->f[21].u = c->f[0].u;
SET64(31, 0x2e1bf0); SET32(4, RW(29) + 112); JP_F_002D09E0(c);
c->f[20].u = c->f[0].u;
SET64(31, 0x2e1bfc); SET32(4, RW(29) + 112); JP_F_002D09D0(c);
c->f[12].u = c->f[21].u;
SET32(4, RW(29) + 144);
c->f[13].u = c->f[20].u;
c->f[14].u = c->f[0].u;
SET64(31, 0x2e1c14); c->f[15].u = c->f[22].u; JP_F_002D0900(c);
SET32(4, RW(0) + 112);
SET64(31, 0x2e1c20); wr16(c, (RW(29) + 146), (u16)RW(16)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002E1C38; }
SET64(6, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2e1c38); SET32(5, RW(29) + 144); JP_F_002E3090(c);
L_002E1C38:;
SET64(2, rd8(c, (RW(18) + 428)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 0), RW(18)); goto L_002E1CC8; }
SET64(2, (s32)rd32(c, (RW(18) + 416)));
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002E1C78; }
SET64(3, (s32)rd32(c, (RW(18) + 420)));
L_002E1C54:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 416))); goto L_002E1C68; }
SET64(2, RD(0) + RD(0)); goto L_002E1C7C;
L_002E1C68:;
SET32(4, RW(4) + 1);
SET64(2, RD(4) < RD(2));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 4); if (t) { POLL(); goto L_002E1C54; } }
L_002E1C78:;
SET64(2, RD(0) + (s64)1);
L_002E1C7C:;
{ int t = RD(2) == RD(0);  if (t) goto L_002E1CC4; }
SET64(3, (s32)rd32(c, (RW(18) + 404)));
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + (s64)1); if (t) goto L_002E1CA4; }
SET32(2, RW(0) + 3);
if (RD(3) == RD(2)) { SET64(2, RD(4) & 0xff); goto L_002E1CA8; }
SET64(4, RD(0) + RD(0));
L_002E1CA4:;
SET64(2, RD(4) & 0xff);
L_002E1CA8:;
{ int t = RD(2) != RD(0);  if (t) goto L_002E1CC4; }
SET64(31, 0x2e1cb8);  JP_F_0013AA20(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2e1cc4); SET32(5, RW(18) + 356); JP_F_0013A4F0(c);
L_002E1CC4:;
wr32(c, (RW(16) + 0), RW(18));
L_002E1CC8:;
SET64(25, (s32)rd32(c, (RW(16) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e1cd8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 416)));
{ int t = RD(2) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002E1D18; }
SET64(3, (s32)rd32(c, (RW(18) + 420)));
SET64(4, RD(3) + RD(0));
L_002E1CEC:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 416))); goto L_002E1D08; }
SET32(2, RW(5) << 2);
SET32(2, RW(3) + RW(2));
wr32(c, (RW(2) + 0), RW(16)); goto L_002E1D18;
L_002E1D08:;
SET32(5, RW(5) + 1);
SET64(2, RD(5) < RD(2));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_002E1CEC; } }
L_002E1D18:;
SET32(4, RW(29) + 144);
SET64(31, 0x2e1d24); SET32(5, RW(0) + -1); JP_F_001F3870(c);
SET64(31, rd64(c, (RW(29) + 96)));
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 224); return;
}

void JP_F_002E1D50(Ctx *c) { /* func_002E1D50 */
ENTER(0x2e1d50);
c->f[1].u = rd32(c, (RW(4) + 176));
c->f[0].u = rd32(c, (RW(4) + 184));
wr32(c, (RW(4) + 176), c->f[0].u);
wr32(c, (RW(4) + 184), c->f[1].u); return;
}

void JP_F_002E1D70(Ctx *c) { /* func_002E1D70 */
ENTER(0x2e1d70);
c->f[1].u = rd32(c, (RW(4) + 172));
c->f[0].u = rd32(c, (RW(4) + 180));
wr32(c, (RW(4) + 172), c->f[0].u);
wr32(c, (RW(4) + 180), c->f[1].u); return;
}

void JP_F_002E1D90(Ctx *c) { /* func_002E1D90 */
ENTER(0x2e1d90);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, 0x2e1db4); SET64(16, RD(0) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET64(16, RD(0) + (s64)1); goto L_002E1DD4; }
{ int t = RD(2) == RD(0);  if (t) goto L_002E1DD0; }
SET64(2, RD(16) & 0xff); goto L_002E1DD8;
L_002E1DD0:;
SET64(16, RD(0) + (s64)1);
L_002E1DD4:;
SET64(2, RD(16) & 0xff);
L_002E1DD8:;
if (RD(16) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002E1E4C; }
SET64(2, (s32)rd32(c, (RW(18) + 416)));
{ int t = RD(2) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002E1E38; }
SET64(16, RD(0) + RD(0));
L_002E1DF0:;
SET64(2, (s32)rd32(c, (RW(18) + 420)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 416))); goto L_002E1E28; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e1e14);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002E1E24; }
SET64(2, RD(0) + (s64)1); goto L_002E1E3C;
L_002E1E24:;
SET64(2, (s32)rd32(c, (RW(18) + 416)));
L_002E1E28:;
SET32(17, RW(17) + 1);
SET64(2, RD(17) < RD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002E1DF0; } }
L_002E1E38:;
SET64(2, RD(0) + RD(0));
L_002E1E3C:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) & 0xff);
SET64(31, rd64(c, (RW(29) + 48)));
L_002E1E4C:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E1E60(Ctx *c) { /* func_002E1E60 */
ENTER(0x2e1e60);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2e1e7c); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_0014DCE0(c);
SET64(3, (s32)rd32(c, (RW(17) + 416)));
{ int t = RD(3) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002E1EC8; }
SET64(18, RD(0) + RD(0));
L_002E1E8C:;
SET64(3, (s32)rd32(c, (RW(17) + 420)));
SET32(3, RW(3) + RW(18));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_002E1EB0; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e1eb0);  rt_call(c, t); }
L_002E1EB0:;
SET64(3, (s32)rd32(c, (RW(17) + 416)));
SET32(16, RW(16) + 1);
SET64(3, RD(16) < RD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_002E1E8C; } }
L_002E1EC8:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E1EE0(Ctx *c) { /* func_002E1EE0 */
ENTER(0x2e1ee0);
 return;
}

void JP_F_002E1EF0(Ctx *c) { /* func_002E1EF0 */
ENTER(0x2e1ef0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 424)));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002E1F18; }
SET64(31, 0x2e1f10);  JP_F_00139590(c);
SET64(2, (s32)rd32(c, (RW(2) + 8)));
wr32(c, (RW(16) + 424), RW(2));
L_002E1F18:;
SET64(5, (s32)rd32(c, (RW(16) + 424)));
if (RD(5) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002E1F2C; }
SET32(5, RW(5) + 672);
SET64(4, RD(16) + RD(0));
L_002E1F2C:;
SET64(31, 0x2e1f34);  JP_F_0014DDA0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E1F50(Ctx *c) { /* func_002E1F50 */
ENTER(0x2e1f50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(5) == RD(0); wr32(c, (RW(4) + 424), RW(5)); if (t) goto L_002E1F64; }
SET32(5, RW(5) + 672);
L_002E1F64:;
SET64(31, 0x2e1f6c);  JP_F_0014DDA0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002E1F80(Ctx *c) { /* func_002E1F80 */
ENTER(0x2e1f80);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 416)));
{ int t = RD(3) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002E2008; }
SET64(16, RD(0) + RD(0));
L_002E1FA8:;
SET64(3, (s32)rd32(c, (RW(18) + 420)));
SET32(3, RW(3) + RW(16));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_002E1FF0; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e1fcc);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002E1FF0; }
SET64(2, (s32)rd32(c, (RW(18) + 420)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e1ff0);  rt_call(c, t); }
L_002E1FF0:;
SET64(3, (s32)rd32(c, (RW(18) + 416)));
SET32(17, RW(17) + 1);
SET64(3, RD(17) < RD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002E1FA8; } }
L_002E2008:;
SET64(3, rd8(c, (RW(18) + 429)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002E201C; }
wr32(c, (RW(18) + 432), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
L_002E201C:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E2030(Ctx *c) { /* func_002E2030 */
ENTER(0x2e2030);
 return;
}

void JP_F_002E2040(Ctx *c) { /* func_002E2040 */
ENTER(0x2e2040);
SET64(2, rd8(c, (RW(4) + 429))); return;
}

void JP_F_002E2050(Ctx *c) { /* func_002E2050 */
ENTER(0x2e2050);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 432), c->f[12].u);
SET64(16, RD(4) + RD(0));
{ int t = RD(5) == RD(0); wr8(c, (RW(4) + 429), (u8)RW(3)); if (t) goto L_002E2098; }
c->f[0].u = RW(0);
c->fcc = F(0) == F(12);
if (c->fcc) { SET64(3, rd8(c, (RW(16) + 428))); goto L_002E209C; }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e2098); SET64(5, RD(3) + RD(0)); rt_call(c, t); }
L_002E2098:;
SET64(3, rd8(c, (RW(16) + 428)));
L_002E209C:;
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002E2128; }
SET64(3, (s32)rd32(c, (RW(16) + 416)));
{ int t = RD(3) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002E20D8; }
SET64(4, (s32)rd32(c, (RW(16) + 420)));
L_002E20B4:;
SET64(3, (s32)rd32(c, (RW(4) + 0)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 416))); goto L_002E20C8; }
SET64(3, RD(0) + RD(0)); goto L_002E20DC;
L_002E20C8:;
SET32(5, RW(5) + 1);
SET64(3, RD(5) < RD(3));
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_002E20B4; } }
L_002E20D8:;
SET64(3, RD(0) + (s64)1);
L_002E20DC:;
{ int t = RD(3) == RD(0);  if (t) goto L_002E2124; }
SET64(4, (s32)rd32(c, (RW(16) + 404)));
SET32(3, RW(0) + 2);
{ int t = RD(4) == RD(3); SET64(5, RD(0) + (s64)1); if (t) goto L_002E2104; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET64(3, RD(5) & 0xff); goto L_002E2108; }
SET64(5, RD(0) + RD(0));
L_002E2104:;
SET64(3, RD(5) & 0xff);
L_002E2108:;
{ int t = RD(3) != RD(0);  if (t) goto L_002E2124; }
SET64(31, 0x2e2118);  JP_F_0013AA20(c);
SET32(5, RW(16) + 356);
SET64(31, 0x2e2124); SET64(4, RD(2) + RD(0)); JP_F_0013A4F0(c);
L_002E2124:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002E2128:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E2140(Ctx *c) { /* func_002E2140 */
ENTER(0x2e2140);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 416)));
{ int t = RD(2) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002E21B0; }
SET64(16, RD(0) + RD(0));
L_002E2168:;
SET64(2, (s32)rd32(c, (RW(18) + 420)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 416))); goto L_002E21A0; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e218c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002E219C; }
SET32(2, RW(0) + 1); goto L_002E21B4;
L_002E219C:;
SET64(2, (s32)rd32(c, (RW(18) + 416)));
L_002E21A0:;
SET32(17, RW(17) + 1);
SET64(2, RD(17) < RD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002E2168; } }
L_002E21B0:;
SET64(2, RD(0) + RD(0));
L_002E21B4:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E21D0(Ctx *c) { /* func_002E21D0 */
ENTER(0x2e21d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 416)));
{ int t = RD(3) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002E2238; }
SET64(18, RD(0) + RD(0));
L_002E21F8:;
SET64(3, (s32)rd32(c, (RW(17) + 420)));
SET32(3, RW(3) + RW(18));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_002E2220; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e221c);  rt_call(c, t); }
L_002E2220:;
SET64(3, (s32)rd32(c, (RW(17) + 416)));
SET32(16, RW(16) + 1);
SET64(3, RD(16) < RD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_002E21F8; } }
L_002E2238:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E2250(Ctx *c) { /* func_002E2250 */
ENTER(0x2e2250);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 416)));
{ int t = RD(2) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002E22C0; }
SET64(16, RD(0) + RD(0));
L_002E2278:;
SET64(2, (s32)rd32(c, (RW(18) + 420)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_002E22A0; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e229c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002E22A0:;
SET64(2, (s32)rd32(c, (RW(18) + 420)));
SET32(17, RW(17) + 1);
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 416)));
SET64(2, RD(17) < RD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002E2278; } }
L_002E22C0:;
SET64(31, 0x2e22c8); SET64(4, (s32)rd32(c, (RW(18) + 420))); JP_F_00100430(c);
wr32(c, (RW(18) + 420), RW(0));
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 424), RW(0));
SET64(31, 0x2e22dc); wr32(c, (RW(18) + 416), RW(0)); JP_F_0014E9E0(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E2300(Ctx *c) { /* func_002E2300 */
ENTER(0x2e2300);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 429)));
{ int t = RD(3) == RD(0); SET64(19, RD(4) + RD(0)); if (t) goto L_002E2364; }
SET64(3, (s64)(s32)0x530000);
c->f[2].u = rd32(c, (RW(19) + 432));
c->f[1].u = rd32(c, (RW(3) + -22384));
c->f[0].u = RW(0);
c->f[1].f = fpu(F(2) - F(1));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; wr32(c, (RW(19) + 432), c->f[1].u); if (t) goto L_002E2364; }
wr32(c, (RW(19) + 432), c->f[0].u);
wr8(c, (RW(19) + 429), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(19) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e2364); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
L_002E2364:;
SET64(3, rd8(c, (RW(19) + 429)));
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_002E2428; }
SET64(2, (s32)rd32(c, (RW(19) + 416)));
SET64(18, RD(0) + (s64)1);
{ int t = RD(2) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002E2400; }
SET64(16, RD(0) + RD(0));
L_002E2384:;
SET64(2, (s32)rd32(c, (RW(19) + 420)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_002E23E8; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2e23a8); SET64(18, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 420)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd8(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0);  if (t) goto L_002E23E8; }
{ int t = RD(4) == RD(0);  if (t) goto L_002E23D8; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e23d8); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002E23D8:;
SET64(2, (s32)rd32(c, (RW(19) + 420)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 0), RW(0));
L_002E23E8:;
SET64(2, (s32)rd32(c, (RW(19) + 416)));
SET32(17, RW(17) + 1);
SET64(2, RD(17) < RD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002E2384; } }
L_002E2400:;
SET64(31, 0x2e2408); SET64(4, RD(19) + RD(0)); JP_F_0014DFC0(c);
{ int t = RD(18) == RD(0);  if (t) goto L_002E2424; }
SET64(3, rd8(c, (RW(19) + 428)));
{ int t = RD(3) == RD(0);  if (t) goto L_002E2424; }
SET64(31, 0x2e2424); SET32(4, RW(19) + 356); JP_F_00139AB0(c);
L_002E2424:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002E2428:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002E2440(Ctx *c) { /* func_002E2440 */
ENTER(0x2e2440);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(4) + 416), RW(5));
SET64(16, RD(6) + RD(0));
SET64(31, 0x2e2464); SET32(4, RW(5) << 2); JP_F_00100530(c);
wr32(c, (RW(17) + 420), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 416)));
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002E2498; }
SET64(3, RD(0) + RD(0));
L_002E2478:;
SET64(2, (s32)rd32(c, (RW(17) + 420)));
SET32(4, RW(4) + 1);
SET32(2, RW(2) + RW(3));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 416)));
SET64(2, RD(4) < RD(2));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 4); if (t) { POLL(); goto L_002E2478; } }
L_002E2498:;
SET64(31, 0x2e24a0); SET64(4, RD(17) + RD(0)); JP_F_0014E3D0(c);
wr32(c, (RW(17) + 432), RW(0));
wr8(c, (RW(17) + 429), (u8)RW(0));
wr8(c, (RW(17) + 428), (u8)RW(16));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E24C0(Ctx *c) { /* func_002E24C0 */
ENTER(0x2e24c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002E25B4; }
SET64(2, (s64)(s32)0x4e0000);
SET64(10, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13648);
SET64(8, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(7, (s64)(s32)0x4e0000);
SET64(9, (s32)rd32(c, (RW(17) + 12)));
SET32(10, RW(10) + 13868);
SET64(6, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(8, RW(8) + 13696);
wr32(c, (RW(9) + 16), RW(10));
SET32(7, RW(7) + 13716);
wr32(c, (RW(17) + 216), RW(8));
SET32(6, RW(6) + 13764);
wr32(c, (RW(17) + 220), RW(7));
SET32(5, RW(5) + 13772);
wr32(c, (RW(17) + 412), RW(6));
SET32(3, RW(3) + 13784);
wr32(c, (RW(17) + 376), RW(5));
SET32(2, RW(17) + 436);
wr32(c, (RW(17) + 392), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e2554);  rt_call(c, t); }
SET32(4, RW(17) + 356);
SET64(31, 0x2e2560); SET64(5, RD(0) + RD(0)); JP_F_00139F30(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2e256c); SET64(5, RD(0) + RD(0)); JP_F_0014E490(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_002E25A0; }
SET32(4, RW(17) + 436);
{ int t = RD(4) == RD(0);  if (t) goto L_002E259C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 452), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e259c);  rt_call(c, t); }
L_002E259C:;
SET64(2, RD(16) << 48);
L_002E25A0:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002E25B8; }
SET64(31, 0x2e25b4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002E25B4:;
SET64(2, RD(17) + RD(0));
L_002E25B8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E25D0(Ctx *c) { /* func_002E25D0 */
ENTER(0x2e25d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002E2600; }
SET32(4, RW(16) + 436);
SET64(31, 0x2e2600); wr32(c, (RW(16) + 12), RW(4)); JP_F_00141C80(c);
L_002E2600:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2e260c); SET64(5, RD(0) + RD(0)); JP_F_0014E610(c);
SET32(4, RW(16) + 356);
SET64(31, 0x2e2618); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(9, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13648);
SET64(8, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 8), RW(2));
SET64(7, (s64)(s32)0x4e0000);
SET64(2, (s32)rd32(c, (RW(16) + 12)));
SET32(9, RW(9) + 13868);
SET64(6, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(8, RW(8) + 13696);
wr32(c, (RW(2) + 16), RW(9));
SET32(7, RW(7) + 13716);
wr32(c, (RW(16) + 216), RW(8));
SET32(6, RW(6) + 13764);
wr32(c, (RW(16) + 220), RW(7));
SET32(5, RW(5) + 13772);
wr32(c, (RW(16) + 412), RW(6));
SET32(4, RW(4) + 13784);
wr32(c, (RW(16) + 376), RW(5));
SET32(3, RW(16) + 436);
wr32(c, (RW(16) + 392), RW(4));
SET64(2, RD(16) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 20), RW(3));
wr32(c, (RW(16) + 416), RW(0));
wr32(c, (RW(16) + 420), RW(0));
wr32(c, (RW(16) + 424), RW(0));
wr8(c, (RW(16) + 428), (u8)RW(0));
wr8(c, (RW(16) + 429), (u8)RW(0));
wr32(c, (RW(16) + 432), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E26B0(Ctx *c) { /* func_002E26B0 */
ENTER(0x2e26b0);
c->f[0].u = rd32(c, (RW(4) + 40));
wr32(c, (RW(4) + 36), c->f[0].u); return;
}

void JP_F_002E26C0(Ctx *c) { /* func_002E26C0 */
ENTER(0x2e26c0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + (s64)1);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 24)));
{ int t = RD(2) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002E2730; }
SET64(16, RD(0) + RD(0));
L_002E26F0:;
SET64(2, (s32)rd32(c, (RW(19) + 16)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e270c);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(19) + 24))); goto L_002E271C; }
SET64(18, RD(0) + RD(0)); goto L_002E2730;
L_002E271C:;
SET32(17, RW(17) + 1);
SET64(2, RD(17) < RD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 384); if (t) { POLL(); goto L_002E26F0; } }
L_002E2730:;
SET64(2, RD(18) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002E2750(Ctx *c) { /* func_002E2750 */
ENTER(0x2e2750);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 24)));
{ int t = RD(3) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002E27A8; }
SET64(18, RD(0) + RD(0));
L_002E2778:;
SET64(2, (s32)rd32(c, (RW(17) + 16)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2e2790);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 24)));
SET32(16, RW(16) + 1);
SET64(3, RD(16) < RD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 384); if (t) { POLL(); goto L_002E2778; } }
L_002E27A8:;
SET32(3, RW(0) + 1);
wr32(c, (RW(17) + 8), RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E27D0(Ctx *c) { /* func_002E27D0 */
ENTER(0x2e27d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002E284C; }
c->f[1].u = rd32(c, (RW(16) + 36));
c->f[0].u = rd32(c, (RW(16) + 40));
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(25, (s32)rd32(c, (RW(4) + 12))); goto L_002E2838; }
SET64(2, (s64)(s32)0x530000);
c->f[0].u = rd32(c, (RW(2) + -22384));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 36), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 40));
c->f[0].u = rd32(c, (RW(16) + 36));
c->fcc = F(0) <= F(1);
if (c->fcc) { SET64(4, RD(16) + RD(0)); goto L_002E2828; }
wr32(c, (RW(16) + 36), c->f[1].u);
SET64(4, RD(16) + RD(0));
L_002E2828:;
SET64(31, 0x2e2830);  JP_F_002E2880(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_002E2870;
L_002E2838:;
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e2844);  rt_call(c, t); }
 goto L_002E286C;
L_002E284C:;
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e285c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002E286C; }
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 4), (u8)RW(3));
L_002E286C:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002E2870:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E2880(Ctx *c) { /* func_002E2880 */
ENTER(0x2e2880);
SET32(29, RW(29) + -128);
SET64(3, (s64)(s32)0x3e4c0000);
wr64(c, (RW(29) + 96), RD(31));
SET64(3, RD(3) | 0xcccd);
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
c->f[1].u = RW(3);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 24), c->f[26].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 20), c->f[25].u);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(5, (s32)rd32(c, (RW(4) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 24)));
rd128(c, (RW(5) + 32) & ~15u, &c->r[3]);
c->f[26].u = rd32(c, (RW(5) + 164));
c->f[25].u = rd32(c, (RW(5) + 168));
{ int t = RSD(6) < 0; wr128(c, (RW(29) + 112) & ~15u, &c->r[3]); if (t) goto L_002E28EC; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002E2908;
L_002E28EC:;
SET32(4, RW(6) >> 1);
SET64(3, RD(6) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002E2908:;
c->f[1].f = fpu_div(F(1), F(0));
SET64(3, (s64)(s32)0x3f4c0000);
SET64(3, RD(3) | 0xcccd);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
c->f[0].u = RW(3);
{ int t = RD(4) != RD(0); c->f[1].f = fpu(F(0) + F(1)); if (t) goto L_002E2A8C; }
{ int t = RD(6) == RD(0); SET64(19, RD(0) + RD(0)); if (t) goto L_002E2CA0; }
SET64(2, (s64)(s32)0x3e4c0000);
SET64(17, RD(0) + RD(0));
SET64(2, RD(2) | 0xcccd);
c->f[0].u = RW(2);
c->f[20].f = fpu(F(0) * F(1));
L_002E294C:;
c->f[0].u = RW(19);
SET64(2, (s32)rd32(c, (RW(16) + 16)));
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[1].u = rd32(c, (RW(16) + 36));
c->f[0].u = RW(0);
c->f[3].u = rd32(c, (RW(16) + 52));
c->facc = fpu(F(0) + F(1));
c->f[4].u = rd32(c, (RW(16) + 40));
c->f[1].f = fpu(c->facc + F(3) * F(2));
c->f[23].f = fpu(F(4) - F(1));
c->fcc = F(23) <= F(0);
{ int t = c->fcc; SET32(18, RW(2) + RW(17)); if (t) goto L_002E2A58; }
c->fcc = F(23) < F(0);
{ int t = !c->fcc;  if (t) goto L_002E2990; }
c->f[23].u = c->f[0].u;
L_002E2990:;
SET64(5, (s64)(s32)0x3f800000);
c->f[7].f = fpu_div(F(23), F(4));
SET64(3, (s64)(s32)0x40000000);
SET64(2, (s64)(s32)0x3dcc0000);
SET64(4, RD(18) + RD(0));
SET64(2, RD(2) | 0xcccd);
c->f[8].u = rd32(c, (RW(16) + 44));
c->f[0].u = rd32(c, (RW(29) + 120));
c->f[4].u = RW(3);
c->f[6].u = RW(5);
c->f[5].u = RW(0);
c->facc = fpu(F(5) + F(6));
c->f[6].f = fpu(c->facc + F(8) * F(7));
c->f[0].f = fpu(F(4) + F(0));
c->f[22].f = fpu(F(26) * F(6));
c->facc = fpu(F(5) + F(0));
c->f[0].f = fpu(F(22) - F(26));
c->f[0].f = fpu_div(F(0), F(4));
c->f[3].u = rd32(c, (RW(29) + 112));
c->f[21].f = fpu(F(25) * F(6));
c->f[0].f = fpu(F(3) - F(0));
wr32(c, (RW(18) + 32), c->f[0].u);
c->f[0].f = fpu(F(21) - F(25));
c->f[0].f = fpu_div(F(0), F(4));
c->f[2].u = rd32(c, (RW(29) + 116));
c->f[1].u = RW(2);
c->f[0].f = fpu(F(2) - F(0));
wr32(c, (RW(18) + 36), c->f[0].u);
c->f[0].u = RW(19);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(31, 0x2e2a1c); c->f[12].f = fpu(c->facc - F(1) * F(0)); JP_F_0014E9B0(c);
c->f[12].u = RW(0);
c->fcc = F(12) == F(23);
wr32(c, (RW(18) + 164), c->f[22].u);
{ int t = c->fcc; wr32(c, (RW(18) + 168), c->f[21].u); if (t) goto L_002E2A38; }
c->f[12].u = c->f[20].u;
L_002E2A38:;
SET64(31, 0x2e2a40); SET32(4, RW(18) + 192); JP_F_001638D0(c);
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e2a50); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
 goto L_002E2A70;
L_002E2A58:;
SET64(4, (s32)rd32(c, (RW(18) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e2a6c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002E2A70:;
SET64(3, (s32)rd32(c, (RW(16) + 24)));
SET32(19, RW(19) + 1);
SET64(3, RD(19) < RD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002E294C; } }
 goto L_002E2CA0;
L_002E2A8C:;
SET32(3, RW(0) + 1);
{ int t = RD(4) != RD(3);  if (t) goto L_002E2CA0; }
{ int t = RD(6) == RD(0); SET64(19, RD(0) + RD(0)); if (t) goto L_002E2CA0; }
SET64(2, (s64)(s32)0x3e4c0000);
SET64(17, RD(0) + RD(0));
SET64(2, RD(2) | 0xcccd);
c->f[0].u = RW(2);
c->f[20].f = fpu(F(0) * F(1));
L_002E2AB8:;
c->f[0].u = RW(19);
SET64(2, (s32)rd32(c, (RW(16) + 16)));
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[5].u = rd32(c, (RW(16) + 36));
c->f[1].u = RW(0);
c->f[2].u = rd32(c, (RW(16) + 52));
c->facc = fpu(F(1) + F(5));
c->f[2].f = fpu(c->facc + F(2) * F(0));
c->f[0].u = rd32(c, (RW(16) + 40));
c->f[0].f = fpu(F(0) - F(2));
c->fcc = F(0) <= F(1);
{ int t = c->fcc; SET32(18, RW(2) + RW(17)); if (t) goto L_002E2C70; }
SET32(2, RW(19) + 1);
c->f[0].u = RW(2);
{ int t = RSD(6) < 0; c->f[1].f = (f32)(s32)c->f[0].u; if (t) goto L_002E2B08; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002E2B24;
L_002E2B08:;
SET32(3, RW(6) >> 1);
SET64(2, RD(6) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002E2B24:;
c->f[4].f = fpu_div(F(1), F(0));
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x3d4c0000);
SET64(2, RD(2) | 0xcccd);
c->f[3].u = rd32(c, (RW(16) + 44));
c->f[2].u = RW(3);
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(2));
c->f[1].f = fpu(c->facc + F(3) * F(4));
c->f[24].f = fpu(F(26) * F(1));
c->f[23].f = fpu(F(25) * F(1));
c->f[1].u = RW(19);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[1].f = fpu(F(5) * F(1));
c->f[0].u = RW(2);
c->f[22].u = rd32(c, (RW(29) + 112));
SET64(31, 0x2e2b7c); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F6F0(c);
c->f[3].f = fpu(F(24) - F(26));
SET64(3, (s64)(s32)0x40000000);
SET64(2, (s64)(s32)0x3f4c0000);
SET64(2, RD(2) | 0xcccd);
c->f[2].u = RW(3);
c->f[2].f = fpu_div(F(3), F(2));
c->f[3].f = fpu(F(22) - F(2));
c->f[2].u = RW(0);
c->f[4].u = RW(2);
c->facc = fpu(F(2) + F(3));
SET64(2, (s64)(s32)0x3d4c0000);
c->f[0].f = fpu(c->facc + F(4) * F(0));
SET64(2, RD(2) | 0xcccd);
wr32(c, (RW(18) + 32), c->f[0].u);
c->f[0].u = RW(19);
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[0].u = rd32(c, (RW(16) + 36));
c->f[1].u = RW(2);
c->f[21].u = rd32(c, (RW(29) + 116));
c->f[0].f = fpu(F(0) * F(2));
SET64(31, 0x2e2bdc); c->f[12].f = fpu(F(1) * F(0)); JP_F_0011F450(c);
c->f[3].f = fpu(F(23) - F(25));
SET64(3, (s64)(s32)0x40000000);
SET64(2, (s64)(s32)0x3f4c0000);
SET64(4, RD(2) | 0xcccd);
SET64(2, (s64)(s32)0x3dcc0000);
c->f[5].u = RW(3);
SET64(2, RD(2) | 0xcccd);
c->f[3].f = fpu_div(F(3), F(5));
c->f[4].f = fpu(F(21) - F(3));
c->f[3].u = RW(0);
c->f[6].u = RW(4);
c->facc = fpu(F(3) + F(4));
SET64(4, RD(18) + RD(0));
c->f[0].f = fpu(c->facc + F(6) * F(0));
c->f[1].u = rd32(c, (RW(29) + 120));
wr32(c, (RW(18) + 36), c->f[0].u);
c->f[0].u = RW(19);
c->f[1].f = fpu(F(5) + F(1));
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[2].u = RW(2);
c->facc = fpu(F(3) + F(1));
SET64(31, 0x2e2c40); c->f[12].f = fpu(c->facc - F(2) * F(0)); JP_F_0014E9B0(c);
wr32(c, (RW(18) + 164), c->f[24].u);
SET32(4, RW(18) + 192);
c->f[12].u = c->f[20].u;
SET64(31, 0x2e2c54); wr32(c, (RW(18) + 168), c->f[23].u); JP_F_001638D0(c);
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e2c64); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
 goto L_002E2C88;
L_002E2C70:;
SET64(4, (s32)rd32(c, (RW(18) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e2c84); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002E2C88:;
SET64(6, (s32)rd32(c, (RW(16) + 24)));
SET32(19, RW(19) + 1);
SET64(3, RD(19) < RD(6));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002E2AB8; } }
L_002E2CA0:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
c->f[26].u = rd32(c, (RW(29) + 24));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[25].u = rd32(c, (RW(29) + 20));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[23].u = rd32(c, (RW(29) + 12));
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 128); return;
}

void JP_F_002E2CE0(Ctx *c) { /* func_002E2CE0 */
ENTER(0x2e2ce0);
SET32(29, RW(29) + -32);
SET64(5, (s64)(s32)0x150000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2e2d00); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(16) + 16), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E2D20(Ctx *c) { /* func_002E2D20 */
ENTER(0x2e2d20);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, (s32)rd32(c, (RW(4) + 24)));
SET64(16, RD(0) + RD(0));
SET32(2, RW(17) << 1);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) << 7);
SET64(31, 0x2e2d5c); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002E2D8C; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(8, RD(17) + RD(0));
SET32(16, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET32(5, RW(5) + -6640);
SET32(6, RW(6) + -7024);
SET64(31, 0x2e2d88); SET32(7, RW(0) + 384); JP_F_00102580(c);
SET64(18, RD(2) + RD(0));
L_002E2D8C:;
wr32(c, (RW(20) + 16), RW(18));
SET64(19, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(20) + 20)));
SET64(3, (s32)rd32(c, (RW(20) + 24)));
SET64(4, RD(4) ^ 0x4);
{ int t = RD(3) == RD(0); SET64(16, RD(4) < (u64)(s64)1); if (t) goto L_002E2F38; }
SET64(17, RD(0) + RD(0));
L_002E2DAC:;
SET64(2, (s32)rd32(c, (RW(20) + 16)));
SET64(4, RD(20) + RD(0));
SET32(18, RW(2) + RW(17));
SET64(31, 0x2e2dc0); SET64(5, RD(18) + RD(0)); JP_F_002E3130(c);
c->f[12].u = RW(0);
SET64(31, 0x2e2dcc); SET32(4, RW(18) + 192); JP_F_001638D0(c);
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e2ddc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RD(16) == RD(0);  if (t) goto L_002E2E48; }
SET64(31, 0x2e2dec);  JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(4, RW(2) >> 1); goto L_002E2E00; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002E2E18;
L_002E2E00:;
SET64(3, RD(2) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002E2E18:;
SET64(4, (s64)(s32)0x4f800000);
SET64(3, (s64)(s32)0x40460000);
c->f[0].u = RW(4);
SET64(3, RD(3) | 0x6666);
c->f[2].f = fpu_div(F(1), F(0));
c->f[0].u = RW(0);
c->f[1].u = RW(3);
c->facc = fpu(F(0) + F(0));
c->f[1].f = fpu(c->facc + F(1) * F(2)); goto L_002E2E78;
L_002E2E48:;
SET64(3, (s32)rd32(c, (RW(20) + 20)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_002E2E60; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002E2E78;
L_002E2E60:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002E2E78:;
SET64(3, (s64)(s32)0x4f000000);
c->f[0].u = RW(3);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002E2EA0; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(4, (s32)c->f[0].u);
SET32(3, RW(0) + 3); goto L_002E2EB8;
L_002E2EA0:;
SET64(3, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(4, (s32)c->f[0].u);
SET64(4, RD(4) | RD(3));
SET32(3, RW(0) + 3);
L_002E2EB8:;
{ int t = RD(4) == RD(3);  if (t) goto L_002E2F18; }
SET32(3, RW(0) + 2);
{ int t = RD(4) == RD(3);  if (t) goto L_002E2F08; }
SET32(3, RW(0) + 1);
{ int t = RD(4) == RD(3);  if (t) goto L_002E2EF8; }
{ int t = RD(4) == RD(0);  if (t) goto L_002E2EE8; }
 goto L_002E2F20;
L_002E2EE8:;
SET64(31, 0x2e2ef0); SET64(4, RD(18) + RD(0)); JP_F_0014EB10(c);
 goto L_002E2F20;
L_002E2EF8:;
SET64(31, 0x2e2f00); SET64(4, RD(18) + RD(0)); JP_F_0014EB40(c);
 goto L_002E2F20;
L_002E2F08:;
SET64(31, 0x2e2f10); SET64(4, RD(18) + RD(0)); JP_F_0014EAE0(c);
 goto L_002E2F20;
L_002E2F18:;
SET64(31, 0x2e2f20); SET64(4, RD(18) + RD(0)); JP_F_0014EAB0(c);
L_002E2F20:;
SET64(3, (s32)rd32(c, (RW(20) + 24)));
SET32(19, RW(19) + 1);
SET64(3, RD(19) < RD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002E2DAC; } }
L_002E2F38:;
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(20) + 48), RW(3));
SET64(3, (s64)(s32)0x40000000);
wr32(c, (RW(20) + 36), RW(0));
wr32(c, (RW(20) + 52), RW(3));
c->f[0].u = rd32(c, (RW(20) + 32));
wr32(c, (RW(20) + 40), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002E2F80(Ctx *c) { /* func_002E2F80 */
ENTER(0x2e2f80);
c->f[0].u = rd32(c, (RW(4) + 68));
wr32(c, (RW(4) + 64), c->f[0].u); return;
}

void JP_F_002E2F90(Ctx *c) { /* func_002E2F90 */
ENTER(0x2e2f90);
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 100), (u8)RW(3));
wr8(c, (RW(4) + 4), (u8)RW(3)); return;
}

void JP_F_002E2FA0(Ctx *c) { /* func_002E2FA0 */
ENTER(0x2e2fa0);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[12].u = rd32(c, (RW(2) + -22384));
SET64(16, RD(4) + RD(0));
SET64(31, 0x2e2fc4); SET32(4, RW(16) + 16); JP_F_001F38F0(c);
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET32(3, RW(0) + 3);
{ int t = RD(4) == RD(3); SET64(17, (s32)rd32(c, (RW(16) + 0))); if (t) goto L_002E3044; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { c->f[12].u = rd32(c, (RW(16) + 32)); goto L_002E301C; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { c->f[0].u = rd32(c, (RW(16) + 32)); goto L_002E300C; }
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002E2FFC; }
c->f[1].u = rd32(c, (RW(16) + 64)); goto L_002E3054;
L_002E2FFC:;
SET64(31, 0x2e3004); SET32(5, RW(16) + 32); JP_F_0014E980(c);
 goto L_002E3050;
L_002E300C:;
wr32(c, (RW(17) + 164), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 36));
wr32(c, (RW(17) + 168), c->f[0].u); goto L_002E3050;
L_002E301C:;
SET64(31, 0x2e3024); SET32(4, RW(17) + 192); JP_F_00163900(c);
c->f[12].u = rd32(c, (RW(16) + 36));
SET64(31, 0x2e3030); SET32(4, RW(17) + 192); JP_F_001638F0(c);
c->f[12].u = rd32(c, (RW(16) + 40));
SET64(31, 0x2e303c); SET32(4, RW(17) + 192); JP_F_001638E0(c);
 goto L_002E3050;
L_002E3044:;
c->f[12].u = rd32(c, (RW(16) + 32));
SET64(31, 0x2e3050); SET32(4, RW(17) + 192); JP_F_001638D0(c);
L_002E3050:;
c->f[1].u = rd32(c, (RW(16) + 64));
L_002E3054:;
c->f[0].u = rd32(c, (RW(16) + 68));
c->fcc = F(1) < F(0);
if (c->fcc) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002E3078; }
SET64(25, (s32)rd32(c, (RW(16) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e3074); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
L_002E3078:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E3090(Ctx *c) { /* func_002E3090 */
ENTER(0x2e3090);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13904);
SET32(3, RW(3) + 14000);
wr32(c, (RW(4) + 12), RW(2));
SET64(7, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr8(c, (RW(4) + 4), (u8)RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3));
SET64(3, rd8(c, (RW(5) + 0)));
wr8(c, (RW(4) + 16), (u8)RW(3));
SET64(3, (s16)rd16(c, (RW(5) + 2)));
wr16(c, (RW(4) + 18), (u16)RW(3));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 44), RW(7));
rd128(c, (RW(5) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 32) & ~15u, &c->r[3]);
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(0));
wr32(c, (RW(4) + 56), RW(0));
wr32(c, (RW(4) + 60), RW(7));
rd128(c, (RW(5) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 48) & ~15u, &c->r[3]);
c->f[0].u = rd32(c, (RW(5) + 48));
wr32(c, (RW(4) + 64), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 52));
wr32(c, (RW(4) + 68), c->f[0].u);
c->f[2].u = rd32(c, (RW(5) + 56));
c->f[1].u = rd32(c, (RW(5) + 60));
c->f[0].u = rd32(c, (RW(5) + 64));
wr32(c, (RW(4) + 72), c->f[2].u);
wr32(c, (RW(4) + 76), c->f[1].u);
wr32(c, (RW(4) + 80), c->f[0].u);
wr32(c, (RW(4) + 96), RW(6));
wr8(c, (RW(4) + 100), (u8)RW(0)); return;
}

void JP_F_002E3130(Ctx *c) { /* func_002E3130 */
ENTER(0x2e3130);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e3158); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 48);
SET64(3, (s32)rd32(c, (RW(3) + 160)));
wr32(c, (RW(16) + 160), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(29) + 60), RW(2));
wr32(c, (RW(29) + 48), RW(0));
wr32(c, (RW(29) + 52), RW(0));
wr32(c, (RW(29) + 56), RW(0));
rd128(c, (RW(3) + 32) & ~15u, &c->r[2]);
SET64(31, 0x2e3190); wr128(c, (RW(29) + 48) & ~15u, &c->r[2]); JP_F_0014E980(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
c->f[12].u = rd32(c, (RW(2) + 204));
SET64(31, 0x2e31a0); SET32(4, RW(16) + 192); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(16) + RD(0));
c->f[0].u = rd32(c, (RW(2) + 164));
wr32(c, (RW(16) + 164), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
c->f[0].u = rd32(c, (RW(2) + 168));
wr32(c, (RW(16) + 168), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
c->f[0].u = rd32(c, (RW(2) + 172));
wr32(c, (RW(16) + 172), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
c->f[0].u = rd32(c, (RW(2) + 176));
wr32(c, (RW(16) + 176), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
c->f[0].u = rd32(c, (RW(2) + 180));
wr32(c, (RW(16) + 180), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
c->f[0].u = rd32(c, (RW(2) + 184));
SET64(31, 0x2e31f0); wr32(c, (RW(16) + 184), c->f[0].u); JP_F_0014EB10(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s32)rd32(c, (RW(2) + 424)));
if (RD(5) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 8))); goto L_002E3208; }
SET32(5, RW(5) + 672);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
L_002E3208:;
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2e3214); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E3230(Ctx *c) { /* func_002E3230 */
ENTER(0x2e3230);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002E32A4; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13952);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2e3268);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002E3290; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13904);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(25); SET64(31, 0x2e3288); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 0), RW(0));
SET64(2, RD(16) << 48);
L_002E3290:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002E32A8; }
SET64(31, 0x2e32a4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002E32A4:;
SET64(2, RD(17) + RD(0));
L_002E32A8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E32C0(Ctx *c) { /* func_002E32C0 */
ENTER(0x2e32c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002E3330; }
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(17) + 16);
SET32(2, RW(2) + 14000);
SET32(5, RW(0) + -1);
SET64(31, 0x2e32f4); wr32(c, (RW(17) + 12), RW(2)); JP_F_001F3870(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002E331C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 13904);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(25); SET64(31, 0x2e3314); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 0), RW(0));
SET64(2, RD(16) << 48);
L_002E331C:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002E3334; }
SET64(31, 0x2e3330); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002E3330:;
SET64(2, RD(17) + RD(0));
L_002E3334:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E3350(Ctx *c) { /* func_002E3350 */
ENTER(0x2e3350);
SET64(2, rd8(c, (RW(4) + 100))); return;
}

void JP_F_002E3360(Ctx *c) { /* func_002E3360 */
ENTER(0x2e3360);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -436);
SET32(4, RW(4) + RW(25)); { JP_F_002E1D90(c); return; }
}

void JP_F_002E3370(Ctx *c) { /* func_002E3370 */
ENTER(0x2e3370);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -436);
SET32(4, RW(4) + RW(25)); { JP_F_002E1E60(c); return; }
}

void JP_F_002E3380(Ctx *c) { /* func_002E3380 */
ENTER(0x2e3380);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -436);
SET32(4, RW(4) + RW(25)); { JP_F_002E1EF0(c); return; }
}

void JP_F_002E3390(Ctx *c) { /* func_002E3390 */
ENTER(0x2e3390);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -436);
SET32(4, RW(4) + RW(25)); { JP_F_002E2250(c); return; }
}

void JP_F_002E33A0(Ctx *c) { /* func_002E33A0 */
ENTER(0x2e33a0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -436);
SET32(4, RW(4) + RW(25)); { JP_F_002E24C0(c); return; }
}

void JP_F_002E33B0(Ctx *c) { /* func_002E33B0 */
ENTER(0x2e33b0);
SET32(4, RW(4) + -208); { JP_F_002E24C0(c); return; }
}

void JP_F_002E33C0(Ctx *c) { /* func_002E33C0 */
ENTER(0x2e33c0);
SET32(4, RW(4) + -360); { JP_F_002E24C0(c); return; }
}

void JP_F_002E33D0(Ctx *c) { /* func_002E33D0 */
ENTER(0x2e33d0);
SET32(4, RW(4) + -380); { JP_F_002E24C0(c); return; }
}

void JP_F_002E33E0(Ctx *c) { /* func_002E33E0 */
ENTER(0x2e33e0);
SET32(4, RW(4) + -356); { JP_F_002E2300(c); return; }
}

void JP_F_002E33F0(Ctx *c) { /* func_002E33F0 */
ENTER(0x2e33f0);
SET32(4, RW(4) + -356); { JP_F_002E1880(c); return; }
}

void JP_F_002E3400(Ctx *c) { /* func_002E3400 */
ENTER(0x2e3400);
SET32(4, RW(4) + -356); { JP_F_002E1890(c); return; }
}

void JP_F_002E3410(Ctx *c) { /* func_002E3410 */
ENTER(0x2e3410);
SET32(4, RW(4) + -356); { JP_F_002E24C0(c); return; }
}

void JP_F_002E3420(Ctx *c) { /* func_002E3420 */
ENTER(0x2e3420);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -27704); return;
}

void JP_F_002E3430(Ctx *c) { /* func_002E3430 */
ENTER(0x2e3430);
 return;
}

void JP_F_002E3440(Ctx *c) { /* func_002E3440 */
ENTER(0x2e3440);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002E355C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 14048);
SET32(3, RW(3) + 14056);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 14068);
wr32(c, (RW(17) + 36), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 64)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 64), RW(0)); goto L_002E34B4; }
SET64(2, rd8(c, (RW(17) + 68)));
{ int t = RD(2) != RD(0);  if (t) goto L_002E34B0; }
{ int t = RD(4) == RD(0);  if (t) goto L_002E34B0; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e34b0); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002E34B0:;
wr32(c, (RW(17) + 64), RW(0));
L_002E34B4:;
SET64(4, (s32)rd32(c, (RW(17) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 76), RW(0)); goto L_002E34D4; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e34d0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 76), RW(0));
L_002E34D4:;
SET64(31, 0x2e34dc); SET64(4, (s32)rd32(c, (RW(17) + 80))); JP_F_00100430(c);
wr32(c, (RW(17) + 80), RW(0));
SET64(31, 0x2e34e8); SET64(4, (s32)rd32(c, (RW(17) + 84))); JP_F_001004B0(c);
wr32(c, (RW(17) + 84), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 88)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 88), RW(0)); goto L_002E350C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2e3508); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 88), RW(0));
L_002E350C:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002E3548; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31216);
SET32(3, RW(3) + -31208);
wr32(c, (RW(17) + 56), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -31196);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2e3544); wr32(c, (RW(17) + 36), RW(2)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
L_002E3548:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002E3560; }
SET64(31, 0x2e355c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002E355C:;
SET64(2, RD(17) + RD(0));
L_002E3560:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E3580(Ctx *c) { /* func_002E3580 */
ENTER(0x2e3580);
SET32(29, RW(29) + -208);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, rd16(c, (RW(4) + 60)));
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(20) + 76))); goto L_002E366C; }
if (RD(4) == RD(0)) { SET32(4, RW(0) + 20); goto L_002E35C8; }
SET64(31, rd64(c, (RW(29) + 112))); goto L_002E39A0;
L_002E35C8:;
SET64(31, 0x2e35d0);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002E35E0; }
SET64(31, 0x2e35e0); SET64(4, RD(16) + RD(0)); JP_F_00158180(c);
L_002E35E0:;
wr32(c, (RW(20) + 76), RW(16));
SET64(2, (s64)(s32)0x4c0000);
SET64(3, rd16(c, (RW(20) + 70)));
SET32(2, RW(2) + -27904);
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(25); SET64(31, 0x2e360c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(20) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2e3620);  rt_call(c, t); }
SET64(31, 0x2e3628); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
wr32(c, (RW(20) + 80), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(20) + 76)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e3648); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(20) + 56)));
SET64(4, RD(20) + RD(0));
SET64(2, rd16(c, (RW(20) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2e3664); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002E399C;
L_002E366C:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e367c);  rt_call(c, t); }
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002E399C; }
SET64(31, 0x2e3690); SET32(4, RW(0) + 4); JP_F_00100670(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { wr32(c, (RW(20) + 84), RW(17)); goto L_002E36A8; }
SET64(2, (s32)rd32(c, (RW(20) + 80)));
wr32(c, (RW(17) + 0), RW(2));
wr32(c, (RW(20) + 84), RW(17));
L_002E36A8:;
SET64(16, rd16(c, (RW(28) + -30220)));
SET64(31, 0x2e36b4); SET32(4, RW(29) + 128); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 148), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 144), RW(2));
wr32(c, (RW(29) + 156), RW(0));
wr16(c, (RW(29) + 160), (u16)RW(0));
wr16(c, (RW(29) + 162), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2e36e0); SET32(4, RW(29) + 128); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 148)));
SET64(2, RD(16) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 152)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 128);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -32);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2e3710); wr32(c, (RW(29) + 144), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 128);
SET64(31, 0x2e371c); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(2, rd16(c, (RW(16) + 0)));
SET32(3, RW(2) + -1);
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_002E3734; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002E3734:;
SET64(3, RD(2) & 0xffff);
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(22, RD(2) & 0xffff);
SET32(2, RW(22) + 1);
SET64(31, 0x2e3750); SET32(4, RW(2) << 2); JP_F_00100530(c);
SET64(21, RD(2) + RD(0));
{ int t = RSD(22) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002E3848; }
L_002E375C:;
SET64(4, RD(19) & 0xffff);
SET32(3, RW(0) + 3);
div_s(c, 0, RSW(4), RSW(3));
SET32(2, RW(0) + 1);
SET64(3, c->hi.d[0]);
{ int t = RD(3) == RD(2); SET64(18, RD(0) + RD(0)); if (t) goto L_002E37B8; }
{ int t = RD(3) == RD(0);  if (t) goto L_002E3790; }
 goto L_002E37E0;
L_002E3790:;
SET64(2, (s64)(s32)0x55550000);
SET64(2, RD(2) | 0x5556);
SET32(3, RW(4) >> 31);
mul_s(c, 0, 0, RSW(2), RSW(4));
SET64(2, c->hi.d[0]);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + 1);
SET64(18, RD(2) & 0xffff); goto L_002E37E0;
L_002E37B8:;
SET64(2, (s64)(s32)0x55550000);
SET64(2, RD(2) | 0x5556);
SET32(3, RW(4) >> 31);
mul_s(c, 0, 0, RSW(2), RSW(4));
SET64(2, c->hi.d[0]);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + 2);
SET64(18, RD(2) & 0xffff);
L_002E37E0:;
SET64(16, rd16(c, (RW(28) + -30220)));
SET64(17, (s32)rd32(c, (RW(20) + 84)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2e37f4); SET64(4, RD(17) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2e3800); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2e380c); SET64(5, RD(16) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2e3818); SET32(4, RW(29) + 204); JP_F_002C9510(c);
SET64(5, RD(18) + RD(0));
SET64(31, 0x2e3824); SET32(4, RW(29) + 204); JP_F_002C94F0(c);
SET64(4, RD(19) & 0xffff);
SET32(3, RW(19) + 1);
SET32(4, RW(4) << 2);
SET64(19, RD(3) & 0xffff);
SET32(4, RW(21) + RW(4));
SET64(3, RSD(19) < RSD(22));
{ int t = RD(3) != RD(0); wr32(c, (RW(4) + 0), RW(2)); if (t) { POLL(); goto L_002E375C; } }
L_002E3848:;
SET32(2, RW(22) << 2);
SET32(2, RW(2) + RW(21));
SET32(4, RW(0) + 196);
SET64(31, 0x2e385c); wr32(c, (RW(2) + -4), RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002E389C; }
SET64(31, 0x2e386c); SET64(4, RD(16) + RD(0)); JP_F_00228490(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -3136);
SET32(2, RW(2) + -3128);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -3116);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -3056);
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 72), RW(2));
L_002E389C:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 10);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2e38b4); wr32(c, (RW(20) + 88), RW(16)); JP_F_00229120(c);
SET64(4, (s32)rd32(c, (RW(20) + 88)));
SET64(5, RD(21) + RD(0));
SET64(7, (s16)rd16(c, (RW(20) + 72)));
SET32(6, RW(0) + 2);
SET64(10, (s32)rd32(c, (RW(20) + 64)));
SET64(8, RD(0) + RD(0));
SET64(31, 0x2e38d4); SET32(9, RW(0) + 8); JP_F_00225FC0(c);
SET64(2, (s64)(s32)0x41200000);
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = RW(2);
wr32(c, (RW(29) + 176), RW(0));
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 180), RW(0));
c->f[0].u = rd32(c, (RW(2) + -9456));
wr32(c, (RW(29) + 188), RW(3));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 184), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(20) + 88)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2e3910); SET32(5, RW(29) + 176); rt_call(c, t); }
SET64(31, 0x2e3918); SET64(4, (s32)rd32(c, (RW(20) + 88))); JP_F_0022A450(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(20) + 88))); goto L_002E392C; }
SET64(31, 0x2e3928); SET64(4, RD(2) + RD(0)); JP_F_0022C390(c);
SET64(4, (s32)rd32(c, (RW(20) + 88)));
L_002E392C:;
SET64(31, 0x2e3934);  JP_F_0022A450(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(20) + 88))); goto L_002E3948; }
SET64(31, 0x2e3944); SET64(4, RD(2) + RD(0)); JP_F_0022C2D0(c);
SET64(2, (s32)rd32(c, (RW(20) + 88)));
L_002E3948:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x2e3954); SET32(4, RW(2) + 168); JP_F_0013BA20(c);
SET64(2, (s32)rd32(c, (RW(20) + 88)));
SET32(3, RW(0) + 3);
SET64(31, 0x2e3964); wr16(c, (RW(2) + 178), (u16)RW(3)); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(20) + 88))); goto L_002E3978; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(20) + 88)));
L_002E3978:;
SET64(31, 0x2e3980);  JP_F_0022A3D0(c);
SET64(31, 0x2e3988); SET64(4, RD(21) + RD(0)); JP_F_00100430(c);
SET64(25, (s32)rd32(c, (RW(20) + 56)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2e399c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002E399C:;
SET64(31, rd64(c, (RW(29) + 112)));
L_002E39A0:;
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 208); return;
}

void JP_F_002E39D0(Ctx *c) { /* func_002E39D0 */
ENTER(0x2e39d0);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 0)));
{ int t = RD(3) == RD(2); SET64(16, RD(4) + RD(0)); if (t) goto L_002E39FC; }
SET64(31, 0x2e39f4); SET64(4, RD(16) + RD(0)); JP_F_002E3580(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_002E3AB0;
L_002E39FC:;
SET64(4, (s32)rd32(c, (RW(16) + 88)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2e3a10);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002E3AAC; }
SET64(4, (s32)rd32(c, (RW(16) + 64)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 64), RW(0)); goto L_002E3A4C; }
SET64(2, rd8(c, (RW(16) + 68)));
{ int t = RD(2) != RD(0);  if (t) goto L_002E3A48; }
{ int t = RD(4) == RD(0);  if (t) goto L_002E3A48; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e3a48); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002E3A48:;
wr32(c, (RW(16) + 64), RW(0));
L_002E3A4C:;
SET64(4, (s32)rd32(c, (RW(16) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 76), RW(0)); goto L_002E3A6C; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e3a68); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 76), RW(0));
L_002E3A6C:;
SET64(31, 0x2e3a74); SET64(4, (s32)rd32(c, (RW(16) + 80))); JP_F_00100430(c);
wr32(c, (RW(16) + 80), RW(0));
SET64(31, 0x2e3a80); SET64(4, (s32)rd32(c, (RW(16) + 84))); JP_F_001004B0(c);
wr32(c, (RW(16) + 84), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 88)));
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002E3AA4; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2e3aa0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_002E3AA4:;
SET64(31, 0x2e3aac); wr32(c, (RW(16) + 88), RW(0)); JP_F_00139AB0(c);
L_002E3AAC:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002E3AB0:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E3AC0(Ctx *c) { /* func_002E3AC0 */
ENTER(0x2e3ac0);
wr16(c, (RW(4) + 70), (u16)RW(5));
{ int t = RD(7) == RD(0); wr16(c, (RW(4) + 72), (u16)RW(6)); if (t) goto L_002E3ADC; }
wr32(c, (RW(4) + 64), RW(7));
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 68), (u8)RW(3)); goto L_002E3AE0;
L_002E3ADC:;
wr8(c, (RW(4) + 68), (u8)RW(0));
L_002E3AE0:;
wr16(c, (RW(4) + 0), (u16)RW(0)); return;
}

void JP_F_002E3AF0(Ctx *c) { /* func_002E3AF0 */
ENTER(0x2e3af0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2e3b08); SET64(16, RD(4) + RD(0)); JP_F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -31216);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(3));
SET32(2, RW(2) + -31208);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -31196);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 36), RW(3));
SET32(2, RW(2) + 14048);
wr16(c, (RW(16) + 60), (u16)RW(0));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(2));
SET32(4, RW(4) + 14056);
SET32(3, RW(3) + 14068);
wr32(c, (RW(16) + 20), RW(4));
wr32(c, (RW(16) + 36), RW(3));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 64), RW(0));
wr32(c, (RW(16) + 76), RW(0));
wr32(c, (RW(16) + 80), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 88), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E3B80(Ctx *c) { /* func_002E3B80 */
ENTER(0x2e3b80);
SET32(4, RW(4) + -4); { JP_F_002E3440(c); return; }
}

void JP_F_002E3B90(Ctx *c) { /* func_002E3B90 */
ENTER(0x2e3b90);
SET32(4, RW(4) + -24); { JP_F_002E3440(c); return; }
}

void JP_F_002E3BA0(Ctx *c) { /* func_002E3BA0 */
ENTER(0x2e3ba0);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -26656); return;
}

void JP_F_002E3BB0(Ctx *c) { /* func_002E3BB0 */
ENTER(0x2e3bb0);
 return;
}

void JP_F_002E3BC0(Ctx *c) { /* func_002E3BC0 */
ENTER(0x2e3bc0);
SET32(29, RW(29) + -304);
SET64(2, (s64)(s32)0x3b030000);
wr64(c, (RW(29) + 64), RD(31));
SET64(3, RD(2) | 0x126f);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[1].u = RW(3);
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET32(2, RW(0) + 9);
wr32(c, (RW(29) + 16), c->f[24].u);
SET64(16, RD(5) + RD(0));
wr32(c, (RW(29) + 12), c->f[23].u);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[0].u = rd32(c, (RW(4) + 20));
c->f[0].f = fpu(F(0) + F(12));
wr32(c, (RW(4) + 20), c->f[0].u);
SET64(5, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 16)));
c->f[0].u = rd32(c, (RW(5) + 24));
c->f[0].f = fpu(F(1) * F(0));
{ int t = RD(3) != RD(2); c->f[20].f = fpu(F(0) * F(12)); if (t) goto L_002E3DEC; }
SET64(2, rd8(c, (RW(17) + 12)));
{ int t = RD(2) == RD(0);  if (t) goto L_002E3C30; }
c->f[20].u = c->f[20].u ^ 0x80000000u;
L_002E3C30:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e3c40); SET32(4, RW(17) + 4); rt_call(c, t); }
c->f[12].f = fpu(F(20) + F(0));
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[20].u = RW(2);
c->fcc = F(12) <= F(20);
if (c->fcc) { SET64(2, (s64)(s32)0xc0490000); goto L_002E3C88; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2e3c74); c->f[12].f = fpu(F(20) + F(12)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(0) - F(1)); goto L_002E3CC8;
L_002E3C88:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002E3CC8; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2e3cb4); c->f[12].f = fpu(F(12) - F(20)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(1) + F(0));
L_002E3CC8:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e3cd8); SET32(4, RW(17) + 4); rt_call(c, t); }
SET64(3, (s64)(s32)0x40490000);
SET64(2, (s64)(s32)0x43340000);
SET64(3, RD(3) | 0xfdb);
c->f[3].u = rd32(c, (RW(28) + -31004));
c->f[4].u = RW(3);
c->f[1].u = rd32(c, (RW(17) + 4));
c->f[3].f = fpu(F(4) * F(3));
c->f[2].u = RW(2);
c->f[2].f = fpu_div(F(3), F(2));
c->f[1].u = c->f[1].u & 0x7FFFFFFFu;
c->f[21].f = fpu(F(1) - F(2));
c->f[0].u = RW(0);
c->fcc = F(21) <= F(0);
if (c->fcc) { c->f[1].u = rd32(c, (RW(17) + 20)); goto L_002E3E98; }
SET32(4, RW(29) + 296);
SET64(31, 0x2e3d28); SET32(5, RW(17) + 4); JP_F_002E64B0(c);
c->f[0].u = rd32(c, (RW(29) + 296));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET32(4, RW(17) + 4);
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e3d40); c->f[21].f = fpu(F(21) * F(0)); rt_call(c, t); }
c->f[12].f = fpu(F(0) - F(21));
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->fcc = F(12) <= F(1);
if (c->fcc) { SET64(2, (s64)(s32)0xc0490000); goto L_002E3D88; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2e3d74); c->f[12].f = fpu(F(1) + F(12)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(0) - F(1)); goto L_002E3DC8;
L_002E3D88:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002E3DC8; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2e3db4); c->f[12].f = fpu(F(12) - F(1)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(1) + F(0));
L_002E3DC8:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e3dd8); SET32(4, RW(17) + 4); rt_call(c, t); }
SET64(2, rd8(c, (RW(17) + 12)));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
wr8(c, (RW(17) + 12), (u8)RW(2)); goto L_002E3E94;
L_002E3DEC:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e3dfc); SET32(4, RW(17) + 4); rt_call(c, t); }
c->f[12].f = fpu(F(20) + F(0));
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[20].u = RW(2);
c->fcc = F(12) <= F(20);
if (c->fcc) { SET64(2, (s64)(s32)0xc0490000); goto L_002E3E44; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2e3e30); c->f[12].f = fpu(F(20) + F(12)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(0) - F(1)); goto L_002E3E84;
L_002E3E44:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002E3E84; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2e3e70); c->f[12].f = fpu(F(12) - F(20)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(1) + F(0));
L_002E3E84:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e3e94); SET32(4, RW(17) + 4); rt_call(c, t); }
L_002E3E94:;
c->f[1].u = rd32(c, (RW(17) + 20));
L_002E3E98:;
SET64(2, (s64)(s32)0x43340000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(20) * F(1));
c->f[20].f = fpu_div(F(1), F(0));
SET64(31, 0x2e3ebc); c->f[12].u = c->f[20].u; JP_F_0011F6F0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x2e3ec8); c->f[20].u = c->f[0].u; JP_F_0011F450(c);
SET64(7, rd16(c, (RW(17) + 16)));
SET64(5, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(2, (s64)(s32)0x4c0000);
SET32(5, RW(5) + -16380);
SET32(3, RW(3) + -16382);
SET32(6, RW(7) << 1);
SET32(2, RW(2) + -16384);
SET32(6, RW(6) + RW(7));
SET32(4, RW(29) + 80);
SET32(6, RW(6) << 3);
SET32(5, RW(5) + RW(6));
SET32(3, RW(3) + RW(6));
SET64(5, (s16)rd16(c, (RW(5) + 0)));
c->f[24].u = c->f[0].u;
SET32(2, RW(2) + RW(6));
SET64(3, (s16)rd16(c, (RW(3) + 0)));
SET64(2, (s16)rd16(c, (RW(2) + 0)));
c->f[0].u = RW(5);
c->f[21].f = (f32)(s32)c->f[0].u;
c->f[0].u = RW(3);
c->f[22].f = (f32)(s32)c->f[0].u;
c->f[0].u = RW(2);
SET64(31, 0x2e3f34); c->f[23].f = (f32)(s32)c->f[0].u; JP_F_0013AEA0(c);
SET32(4, RW(29) + 80);
SET64(31, 0x2e3f40); SET32(5, RW(17) + 4); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2e3f4c); SET32(4, RW(29) + 176); JP_F_0013ADA0(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
c->f[1].f = fpu(F(20) * F(20));
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 256);
SET32(5, RW(29) + 240);
SET32(6, RW(29) + 176);
c->f[5].u = rd32(c, (RW(3) + 8));
c->f[4].u = RW(0);
c->f[6].u = rd32(c, (RW(3) + 20));
c->facc = fpu(F(4) + F(5));
c->f[0].u = rd32(c, (RW(3) + 4));
c->f[5].f = fpu(c->facc + F(6) * F(20));
c->f[3].u = rd32(c, (RW(3) + 16));
c->facc = fpu(F(4) + F(0));
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[3].f = fpu(c->facc + F(3) * F(1));
c->f[1].u = rd32(c, (RW(3) + 12));
c->f[2].u = c->f[24].u & 0x7FFFFFFFu;
c->facc = fpu(F(4) + F(0));
c->f[0].f = fpu(c->facc + F(1) * F(2));
wr32(c, (RW(29) + 252), RW(2));
wr32(c, (RW(29) + 244), c->f[3].u);
wr32(c, (RW(29) + 248), c->f[5].u);
SET64(31, 0x2e3fb0); wr32(c, (RW(29) + 240), c->f[0].u); JP_F_002AFDD0(c);
c->f[2].u = RW(0);
SET64(3, (s64)(s32)0x3f800000);
c->f[0].f = fpu(F(23) + F(2));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(29) + 272), RW(0));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(29) + 276), RW(0));
wr32(c, (RW(29) + 280), RW(0));
wr32(c, (RW(29) + 144), c->f[0].u);
wr32(c, (RW(29) + 284), RW(3));
c->f[1].u = rd32(c, (RW(2) + 28));
wr32(c, (RW(29) + 156), RW(3));
c->f[0].f = fpu(F(21) + F(2));
wr32(c, (RW(29) + 172), RW(3));
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
c->f[2].f = fpu(F(22) + F(1));
wr128(c, (RW(29) + 272) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 152), c->f[0].u);
wr32(c, (RW(29) + 148), c->f[2].u);
c->f[0].u = rd32(c, (RW(29) + 272));
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(29) + 276));
c->f[2].f = fpu(F(23) + F(0));
c->f[0].u = rd32(c, (RW(29) + 280));
c->f[1].f = fpu(F(22) + F(1));
c->f[0].f = fpu(F(21) + F(0));
wr32(c, (RW(29) + 160), c->f[2].u);
wr32(c, (RW(29) + 164), c->f[1].u);
wr32(c, (RW(29) + 168), c->f[0].u);
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 32) & ~15u, &c->r[2]);
SET64(31, 0x2e4038); wr32(c, (RW(16) + 48), RW(0)); JP_F_0015DAB0(c);
SET64(31, rd64(c, (RW(29) + 64)));
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 304); return;
}

void JP_F_002E4060(Ctx *c) { /* func_002E4060 */
ENTER(0x2e4060);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x40490000);
wr64(c, (RW(29) + 32), RD(31));
SET64(3, RD(2) | 0xfdb);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, (s64)(s32)0x43340000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[2].u = RW(3);
SET64(16, RD(5) + RD(0));
SET64(17, RD(4) + RD(0));
wr32(c, (RW(4) + 16), RW(16));
c->f[0].u = RW(2);
wr32(c, (RW(4) + 20), RW(0));
c->f[1].u = rd32(c, (RW(28) + -31008));
c->f[1].f = fpu(F(2) * F(1));
c->f[12].f = fpu_div(F(1), F(0));
c->fcc = F(12) <= F(2);
if (c->fcc) { SET64(2, (s64)(s32)0xc0490000); goto L_002E40DC; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2e40c8); c->f[12].f = fpu(F(2) + F(12)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(0) - F(1)); goto L_002E411C;
L_002E40DC:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002E411C; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2e4108); c->f[12].f = fpu(F(12) - F(2)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(1) + F(0));
L_002E411C:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e412c); SET32(4, RW(17) + 4); rt_call(c, t); }
SET64(3, (s64)(s32)0x4c0000);
SET32(4, RW(16) << 5);
SET32(3, RW(3) + -27008);
wr8(c, (RW(17) + 12), (u8)RW(0));
SET32(3, RW(3) + RW(4));
wr32(c, (RW(17) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E4160(Ctx *c) { /* func_002E4160 */
ENTER(0x2e4160);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
if (RD(16) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_002E4194; }
SET64(2, RD(5) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 0), RW(0)); if (t) goto L_002E4190; }
SET64(31, 0x2e4190);  JP_F_001004B0(c);
L_002E4190:;
SET64(2, RD(16) + RD(0));
L_002E4194:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E41B0(Ctx *c) { /* func_002E41B0 */
ENTER(0x2e41b0);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(4) + 0), RW(0));
SET32(3, RW(3) + -3584);
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 8), RW(3));
wr32(c, (RW(4) + 4), RW(0)); return;
}

void JP_F_002E41D0(Ctx *c) { /* func_002E41D0 */
ENTER(0x2e41d0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 2);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(6, rd16(c, (RW(4) + 60)));
{ int t = RD(6) == RD(5); SET64(16, RD(4) + RD(0)); if (t) goto L_002E4344; }
SET32(3, RW(0) + 1);
if (RD(6) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 76))); goto L_002E4250; }
if (RD(6) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 76))); goto L_002E4208; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_002E43A4;
L_002E4208:;
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e4218);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e422c);  rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2e4248); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002E43A0;
L_002E4250:;
c->f[12].u = RW(0);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2e4260); SET64(6, RD(0) + RD(0)); JP_F_002E4FE0(c);
SET64(4, (s32)rd32(c, (RW(16) + 80)));
c->f[12].u = RW(0);
SET64(31, 0x2e4270); SET64(5, RD(0) + RD(0)); JP_F_002E49B0(c);
SET64(4, (s32)rd32(c, (RW(16) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e4284);  rt_call(c, t); }
SET64(3, RD(0) < RD(2));
{ int t = RD(3) == RD(0);  if (t) goto L_002E42A8; }
SET64(4, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e42a4);  rt_call(c, t); }
SET64(3, RD(0) < RD(2));
L_002E42A8:;
{ int t = RD(3) == RD(0);  if (t) goto L_002E43A0; }
SET64(4, (s32)rd32(c, (RW(16) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 76), RW(0)); goto L_002E42D0; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e42cc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 76), RW(0));
L_002E42D0:;
SET64(4, (s32)rd32(c, (RW(16) + 80)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 80), RW(0)); goto L_002E42F0; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e42ec); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 80), RW(0));
L_002E42F0:;
SET64(2, rd8(c, (RW(16) + 65)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 84), RW(0)); goto L_002E4320; }
SET64(4, (s32)rd32(c, (RW(16) + 84)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 84), RW(0)); goto L_002E431C; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e4318); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 84), RW(0));
L_002E431C:;
wr32(c, (RW(16) + 84), RW(0));
L_002E4320:;
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2e433c); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002E43A0;
L_002E4344:;
SET64(3, (s32)rd32(c, (RW(16) + 68)));
if (RD(3) != RD(5)) { SET32(5, RW(0) + 1); goto L_002E4378; }
wr32(c, (RW(16) + 68), RW(0));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2e4364); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(28) + -29876)));
SET64(31, 0x2e4370); SET64(4, rd8(c, (RW(2) + 64))); JP_F_00138B20(c);
 goto L_002E43A0;
L_002E4378:;
{ int t = RD(3) != RD(5);  if (t) goto L_002E43A0; }
wr32(c, (RW(16) + 68), RW(0));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2e4394);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(28) + -29876)));
SET64(31, 0x2e43a0); SET64(4, rd8(c, (RW(2) + 64))); JP_F_00138B20(c);
L_002E43A0:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002E43A4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E43B0(Ctx *c) { /* func_002E43B0 */
ENTER(0x2e43b0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 3);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 0)));
{ int t = RD(3) == RD(5); SET64(16, RD(4) + RD(0)); if (t) goto L_002E44CC; }
SET32(6, RW(0) + 2);
if (RD(3) == RD(6)) { SET64(2, (s32)rd32(c, (RW(16) + 68))); goto L_002E449C; }
SET32(5, RW(0) + 1);
if (RD(3) == RD(5)) { SET64(3, rd16(c, (RW(16) + 60))); goto L_002E4438; }
if (RD(3) == RD(0)) { SET64(3, rd16(c, (RW(16) + 60))); goto L_002E43F4; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_002E44D8;
L_002E43F4:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 68))); goto L_002E4404; }
 goto L_002E44D4;
L_002E4404:;
{ int t = RD(3) != RD(6);  if (t) goto L_002E4414; }
wr32(c, (RW(16) + 68), RW(0)); goto L_002E44D4;
L_002E4414:;
{ int t = RD(3) != RD(5);  if (t) goto L_002E44D4; }
wr32(c, (RW(16) + 68), RW(0));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2e4430);  rt_call(c, t); }
 goto L_002E44D4;
L_002E4438:;
if (RD(3) == RD(5)) { wr32(c, (RW(16) + 92), RW(0)); goto L_002E447C; }
{ int t = RD(3) == RD(0);  if (t) goto L_002E4450; }
 goto L_002E44D4;
L_002E4450:;
SET64(31, 0x2e4458);  JP_F_002E4830(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2e4474); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002E44D4;
L_002E447C:;
wr32(c, (RW(16) + 96), RW(0));
wr32(c, (RW(16) + 100), RW(0));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2e4494); SET64(5, RD(6) + RD(0)); rt_call(c, t); }
 goto L_002E44D4;
L_002E449C:;
{ int t = RD(2) == RD(0);  if (t) goto L_002E44BC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2e44b4);  rt_call(c, t); }
 goto L_002E44D4;
L_002E44BC:;
SET64(31, 0x2e44c4);  JP_F_002E44F0(c);
 goto L_002E44D4;
L_002E44CC:;
SET64(31, 0x2e44d4);  JP_F_002E41D0(c);
L_002E44D4:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002E44D8:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E44F0(Ctx *c) { /* func_002E44F0 */
ENTER(0x2e44f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2e4508); SET32(4, RW(16) + 92); JP_F_002E45F0(c);
SET64(2, (s64)(s32)0x530000);
c->f[1].u = rd32(c, (RW(2) + -22428));
c->f[2].u = rd32(c, (RW(16) + 92));
SET64(2, (s64)(s32)0x3fc00000);
c->f[2].f = fpu(F(2) * F(1));
c->f[0].u = RW(2);
c->fcc = F(2) < F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x40400000); goto L_002E4538; }
c->f[2].u = c->f[0].u;
SET64(2, (s64)(s32)0x40400000);
L_002E4538:;
c->f[0].u = RW(2);
c->fcc = F(2) < F(0);
if (c->fcc) { c->f[1].u = rd32(c, (RW(16) + 100)); goto L_002E4554; }
c->f[2].u = c->f[0].u;
c->f[1].u = rd32(c, (RW(16) + 100));
L_002E4554:;
c->f[0].u = RW(0);
c->f[1].f = fpu(F(1) + F(2));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; wr32(c, (RW(16) + 100), c->f[1].u); if (t) goto L_002E4570; }
wr32(c, (RW(16) + 100), c->f[0].u);
L_002E4570:;
c->f[1].u = rd32(c, (RW(16) + 100));
SET64(2, (s64)(s32)0x41400000);
c->f[0].u = RW(2);
c->fcc = F(1) < F(0);
if (c->fcc) { c->f[1].u = rd32(c, (RW(16) + 100)); goto L_002E4598; }
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(16) + 100), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 100));
L_002E4598:;
SET64(2, (s64)(s32)0x40c00000);
c->f[0].u = RW(2);
c->fcc = F(1) < F(0);
{ int t = c->fcc; SET32(2, RW(0) + 1); if (t) goto L_002E45B4; }
SET64(2, RD(0) + RD(0));
L_002E45B4:;
SET64(4, (s32)rd32(c, (RW(16) + 76)));
c->f[12].u = rd32(c, (RW(16) + 96));
SET64(2, RD(2) ^ 0x1);
SET64(5, rd16(c, (RW(16) + 88)));
SET64(31, 0x2e45cc); SET64(6, RD(2) & 0xff); JP_F_002E4FE0(c);
c->f[12].u = rd32(c, (RW(16) + 96));
SET64(5, rd16(c, (RW(16) + 88)));
SET64(31, 0x2e45dc); SET64(4, (s32)rd32(c, (RW(16) + 80))); JP_F_002E49B0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E45F0(Ctx *c) { /* func_002E45F0 */
ENTER(0x2e45f0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2e460c); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_002C2AA0(c);
SET64(2, (s64)(s32)0x42700000);
SET64(16, RD(0) + RD(0));
c->f[1].u = RW(2);
c->f[20].f = fpu_div(F(1), F(0));
SET64(31, 0x2e4630);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2e463c); SET32(5, RW(0) + -1); JP_F_0013E200(c);
SET64(3, RD(2) & 0xffff);
SET64(4, RD(3) & 0x10);
if (RD(4) == RD(0)) { SET64(4, RD(3) & 0x40); goto L_002E4658; }
SET32(4, RW(16) + 1);
SET64(16, RD(4) & 0xffff);
SET64(4, RD(3) & 0x40);
L_002E4658:;
if (RD(4) == RD(0)) { SET64(4, RD(3) & 0x80); goto L_002E466C; }
SET32(4, RW(16) + 1);
SET64(16, RD(4) & 0xffff);
SET64(4, RD(3) & 0x80);
L_002E466C:;
if (RD(4) == RD(0)) { SET64(4, RD(3) & 0x20); goto L_002E4680; }
SET32(4, RW(16) + 1);
SET64(16, RD(4) & 0xffff);
SET64(4, RD(3) & 0x20);
L_002E4680:;
if (RD(4) == RD(0)) { SET64(4, RD(3) & 0x1000); goto L_002E4694; }
SET32(4, RW(16) + 1);
SET64(16, RD(4) & 0xffff);
SET64(4, RD(3) & 0x1000);
L_002E4694:;
if (RD(4) == RD(0)) { SET64(4, RD(3) & 0x4000); goto L_002E46A8; }
SET32(4, RW(16) + 1);
SET64(16, RD(4) & 0xffff);
SET64(4, RD(3) & 0x4000);
L_002E46A8:;
if (RD(4) == RD(0)) { SET64(4, RD(3) & 0x8000); goto L_002E46BC; }
SET32(4, RW(16) + 1);
SET64(16, RD(4) & 0xffff);
SET64(4, RD(3) & 0x8000);
L_002E46BC:;
if (RD(4) == RD(0)) { SET64(4, RD(3) & 0x2000); goto L_002E46D0; }
SET32(4, RW(16) + 1);
SET64(16, RD(4) & 0xffff);
SET64(4, RD(3) & 0x2000);
L_002E46D0:;
if (RD(4) == RD(0)) { SET64(4, RD(3) & 0x400); goto L_002E46E4; }
SET32(4, RW(16) + 1);
SET64(16, RD(4) & 0xffff);
SET64(4, RD(3) & 0x400);
L_002E46E4:;
if (RD(4) == RD(0)) { SET64(4, RD(3) & 0x100); goto L_002E46F8; }
SET32(4, RW(16) + 1);
SET64(16, RD(4) & 0xffff);
SET64(4, RD(3) & 0x100);
L_002E46F8:;
if (RD(4) == RD(0)) { SET64(4, RD(3) & 0x800); goto L_002E470C; }
SET32(4, RW(16) + 1);
SET64(16, RD(4) & 0xffff);
SET64(4, RD(3) & 0x800);
L_002E470C:;
if (RD(4) == RD(0)) { SET64(3, RD(3) & 0x200); goto L_002E4720; }
SET32(4, RW(16) + 1);
SET64(16, RD(4) & 0xffff);
SET64(3, RD(3) & 0x200);
L_002E4720:;
if (RD(3) == RD(0)) { SET64(4, RD(16) & 0xffff); goto L_002E4734; }
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(4, RD(16) & 0xffff);
L_002E4734:;
SET64(3, (s64)(s32)0x4c0000);
SET32(5, RW(4) << 2);
SET32(3, RW(3) + -27680);
SET32(5, RW(3) + RW(5));
SET64(4, (s64)(s32)0x40400000);
c->f[0].u = rd32(c, (RW(5) + 0));
SET64(3, (s64)(s32)0x530000);
c->f[2].u = RW(4);
c->f[1].u = rd32(c, (RW(3) + -22428));
SET64(4, (s64)(s32)0x3c340000);
c->f[0].f = fpu(F(2) * F(0));
SET64(4, RD(4) | 0x3958);
SET64(3, (s64)(s32)0x530000);
c->f[2].f = fpu(F(20) * F(0));
c->f[0].u = rd32(c, (RW(17) + 0));
c->f[4].u = RW(0);
c->f[3].u = RW(4);
c->facc = fpu(F(4) + F(0));
c->f[0].f = fpu(c->facc + F(2) * F(1));
wr32(c, (RW(17) + 0), c->f[0].u);
c->f[2].u = rd32(c, (RW(17) + 0));
c->f[0].u = rd32(c, (RW(17) + 4));
c->f[1].u = rd32(c, (RW(3) + -22428));
c->f[2].f = fpu(F(3) * F(2));
c->f[2].f = fpu(F(20) * F(2));
c->facc = fpu(F(4) + F(0));
c->f[0].f = fpu(c->facc + F(2) * F(1));
wr32(c, (RW(17) + 4), c->f[0].u);
c->f[0].u = rd32(c, (RW(17) + 0));
c->fcc = F(0) < F(4);
if (!c->fcc) { c->f[1].u = rd32(c, (RW(17) + 0)); goto L_002E47BC; }
wr32(c, (RW(17) + 0), c->f[4].u);
c->f[1].u = rd32(c, (RW(17) + 0));
L_002E47BC:;
SET64(3, (s64)(s32)0x40800000);
c->f[0].u = RW(3);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[1].u = rd32(c, (RW(17) + 4)); goto L_002E47DC; }
wr32(c, (RW(17) + 0), c->f[0].u);
c->f[1].u = rd32(c, (RW(17) + 4));
L_002E47DC:;
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
if (!c->fcc) { c->f[1].u = rd32(c, (RW(17) + 4)); goto L_002E47F8; }
wr32(c, (RW(17) + 4), c->f[0].u);
c->f[1].u = rd32(c, (RW(17) + 4));
L_002E47F8:;
SET64(3, (s64)(s32)0x40800000);
c->f[0].u = RW(3);
c->fcc = F(1) < F(0);
if (c->fcc) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002E4818; }
wr32(c, (RW(17) + 4), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 48)));
L_002E4818:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E4830(Ctx *c) { /* func_002E4830 */
ENTER(0x2e4830);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2e484c); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_001002F0(c);
SET64(16, RD(2) & 0xff);
SET64(31, 0x2e4858); SET32(4, RW(0) + 1); JP_F_00100300(c);
SET64(2, rd8(c, (RW(17) + 65)));
if (RD(2) != RD(0)) { SET32(4, RW(0) + 24); goto L_002E489C; }
SET64(31, 0x2e486c); SET32(4, RW(0) + 32); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002E487C; }
SET64(31, 0x2e487c); SET64(4, RD(18) + RD(0)); JP_F_001509B0(c);
L_002E487C:;
SET32(5, RW(0) + 256);
SET64(4, RD(18) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x2e4898); wr32(c, (RW(17) + 84), RW(18)); JP_F_00150830(c);
SET32(4, RW(0) + 24);
L_002E489C:;
SET64(31, 0x2e48a4);  JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 80), RW(2)); goto L_002E48DC; }
SET64(4, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(4, RW(4) + 14336);
SET32(3, RW(3) + 14240);
wr32(c, (RW(2) + 20), RW(4));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 16), RW(0));
wr32(c, (RW(2) + 20), RW(3));
wr32(c, (RW(17) + 80), RW(2));
L_002E48DC:;
SET64(5, (s32)rd32(c, (RW(17) + 84)));
c->f[12].u = rd32(c, (RW(17) + 72));
SET64(6, rd16(c, (RW(17) + 88)));
SET64(31, 0x2e48f0); SET64(4, RD(2) + RD(0)); JP_F_002E4CF0(c);
SET64(31, 0x2e48f8); SET32(4, RW(0) + 80); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 76), RW(2)); goto L_002E4958; }
SET64(3, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 14336);
SET32(4, RW(4) + 14288);
wr32(c, (RW(2) + 20), RW(3));
wr32(c, (RW(2) + 0), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 16), RW(0));
wr32(c, (RW(2) + 20), RW(4));
wr32(c, (RW(2) + 24), RW(0));
wr32(c, (RW(2) + 32), RW(0));
wr32(c, (RW(2) + 36), RW(0));
wr32(c, (RW(2) + 40), RW(0));
wr32(c, (RW(2) + 44), RW(3));
wr32(c, (RW(2) + 48), RW(0));
wr32(c, (RW(2) + 52), RW(0));
wr32(c, (RW(2) + 56), RW(0));
wr32(c, (RW(2) + 60), RW(3));
wr32(c, (RW(17) + 76), RW(2));
L_002E4958:;
SET64(4, (s32)rd32(c, (RW(17) + 80)));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e496c);  rt_call(c, t); }
c->f[0].u = RW(2);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
c->f[1].f = (f32)(s32)c->f[0].u;
SET64(5, (s32)rd32(c, (RW(17) + 84)));
SET64(6, rd16(c, (RW(17) + 88)));
c->f[0].u = rd32(c, (RW(17) + 72));
SET64(31, 0x2e498c); c->f[12].f = fpu(F(0) + F(1)); JP_F_002E5960(c);
SET64(31, 0x2e4994); SET64(4, RD(16) + RD(0)); JP_F_00100300(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E49B0(Ctx *c) { /* func_002E49B0 */
ENTER(0x2e49b0);
SET32(29, RW(29) + -96);
SET64(6, (s64)(s32)0x3dcc0000);
wr64(c, (RW(29) + 80), RD(31));
SET64(7, RD(6) | 0xcccd);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(3, (s64)(s32)0x530000);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[1].u = RW(7);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[0].u = rd32(c, (RW(3) + -22428));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
{ int t = RD(6) != RD(0); c->f[20].f = fpu(F(1) * F(0)); if (t) goto L_002E4AB0; }
SET64(4, (s32)rd32(c, (RW(18) + 12)));
SET64(31, 0x2e49fc); SET32(5, RW(0) + -1); JP_F_002E0E00(c);
SET64(3, RD(2) & 0xff);
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_002E4CB4; }
SET64(16, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 12)));
L_002E4A10:;
SET64(31, 0x2e4a18); SET64(5, RD(16) + RD(0)); JP_F_002E0CD0(c);
SET64(5, RD(2) + RD(0));
SET64(6, (s32)rd32(c, (RW(18) + 0)));
SET64(2, RD(16) & 0xffff);
SET32(7, RW(0) + -1);
SET32(3, RW(2) << 6);
SET64(8, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x2e4a3c); SET32(4, RW(2) + RW(3)); JP_F_0014FC00(c);
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
SET64(2, RSD(16) < (s64)3);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 12))); { POLL(); goto L_002E4A10; } }
SET64(3, (s32)rd32(c, (RW(18) + 4)));
SET64(2, (s32)rd32(c, (RW(18) + 8)));
wr32(c, (RW(2) + 160), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 4)));
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET32(3, RW(3) + 64);
wr32(c, (RW(2) + 544), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 4)));
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET32(3, RW(3) + 128);
SET64(31, 0x2e4a80); wr32(c, (RW(2) + 928), RW(3)); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(25, (s32)rd32(c, (RW(18) + 20))); goto L_002E4A94; }
SET32(5, RW(5) + 672);
SET64(25, (s32)rd32(c, (RW(18) + 20)));
L_002E4A94:;
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e4aa0); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 16)));
SET32(3, RW(3) + 1);
wr32(c, (RW(18) + 16), RW(3)); goto L_002E4CB0;
L_002E4AB0:;
SET32(3, RW(0) + 1);
if (RD(6) != RD(3)) { SET32(3, RW(0) + 10); goto L_002E4B94; }
SET64(2, RD(5) & 0xffff);
SET64(2, RD(2) & 0x1);
SET64(5, (s64)(s32)0x4c0000);
SET64(6, RD(2) ^ RD(0));
SET32(5, RW(5) + -27088);
SET64(31, 0x2e4ad8); SET64(6, RD(6) < (u64)(s64)1); JP_F_002E5CF0(c);
SET64(25, (s32)rd32(c, (RW(18) + 20)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e4aec); SET64(16, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002E4CB0; }
SET64(4, RD(16) & 0xffff);
L_002E4AF8:;
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(17, RW(2) + RW(3));
c->f[1].u = rd32(c, (RW(17) + 204));
c->f[0].u = rd32(c, (RW(28) + -31024));
c->f[1].f = fpu(F(20) + F(1));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; c->f[12].u = rd32(c, (RW(28) + -31024)); if (t) goto L_002E4B30; }
 goto L_002E4B50;
L_002E4B30:;
c->f[0].u = rd32(c, (RW(28) + -31020));
c->fcc = F(1) <= F(0);
{ int t = c->fcc; c->f[12].u = rd32(c, (RW(28) + -31020)); if (t) goto L_002E4B48; }
 goto L_002E4B50;
L_002E4B48:;
c->f[12].u = c->f[1].u;
L_002E4B50:;
SET64(31, 0x2e4b58); SET32(4, RW(17) + 192); JP_F_001638D0(c);
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e4b68); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 20)));
SET32(2, RW(16) + 1);
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e4b80); SET64(16, RD(2) & 0xffff); rt_call(c, t); }
SET64(3, RSD(16) < RSD(2));
if (RD(3) != RD(0)) { SET64(4, RD(16) & 0xffff); { POLL(); goto L_002E4AF8; } }
 goto L_002E4CB0;
L_002E4B94:;
{ int t = RD(6) != RD(3);  if (t) goto L_002E4CB0; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e4bac);  rt_call(c, t); }
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002E4CB0; }
SET64(25, (s32)rd32(c, (RW(18) + 20)));
SET64(4, RD(18) + RD(0));
SET64(17, RD(0) + (s64)1);
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e4bd0); SET64(16, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002E4C90; }
SET64(4, RD(16) & 0xffff);
L_002E4BDC:;
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(19, RW(2) + RW(3));
c->f[1].u = rd32(c, (RW(19) + 204));
c->f[0].u = rd32(c, (RW(28) + -31016));
c->f[1].f = fpu(F(1) - F(20));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; c->f[12].u = rd32(c, (RW(28) + -31016)); if (t) goto L_002E4C10; }
 goto L_002E4C30;
L_002E4C10:;
c->f[0].u = rd32(c, (RW(28) + -31012));
c->fcc = F(1) <= F(0);
{ int t = c->fcc; c->f[12].u = rd32(c, (RW(28) + -31012)); if (t) goto L_002E4C28; }
 goto L_002E4C30;
L_002E4C28:;
c->f[12].u = c->f[1].u;
L_002E4C30:;
SET64(31, 0x2e4c38); SET32(4, RW(19) + 192); JP_F_001638D0(c);
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e4c48); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(19) + 204));
c->f[0].u = RW(0);
c->fcc = F(0) == F(1);
{ int t = c->fcc;  if (t) goto L_002E4C68; }
SET64(17, RD(0) + RD(0));
L_002E4C68:;
SET64(25, (s32)rd32(c, (RW(18) + 20)));
SET32(2, RW(16) + 1);
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e4c80); SET64(16, RD(2) & 0xffff); rt_call(c, t); }
SET64(3, RSD(16) < RSD(2));
if (RD(3) != RD(0)) { SET64(4, RD(16) & 0xffff); { POLL(); goto L_002E4BDC; } }
L_002E4C90:;
{ int t = RD(17) == RD(0);  if (t) goto L_002E4CB0; }
SET64(25, (s32)rd32(c, (RW(18) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2e4ca8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 100);
wr32(c, (RW(18) + 16), RW(3));
L_002E4CB0:;
SET64(31, rd64(c, (RW(29) + 80)));
L_002E4CB4:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002E4CD0(Ctx *c) { /* func_002E4CD0 */
ENTER(0x2e4cd0);
SET32(3, RW(0) + 10);
wr32(c, (RW(4) + 16), RW(3)); return;
}

void JP_F_002E4CE0(Ctx *c) { /* func_002E4CE0 */
ENTER(0x2e4ce0);
SET32(2, RW(0) + 3); return;
}

void JP_F_002E4CF0(Ctx *c) { /* func_002E4CF0 */
ENTER(0x2e4cf0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(6) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET32(4, RW(0) + 12);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(31, 0x2e4d28); c->f[20].u = c->f[12].u; JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002E4D38; }
SET64(31, 0x2e4d38); SET64(4, RD(17) + RD(0)); JP_F_002E1260(c);
L_002E4D38:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 3);
SET64(31, 0x2e4d48); wr32(c, (RW(19) + 12), RW(17)); JP_F_002E10E0(c);
SET64(2, RD(20) & 0xffff);
wr8(c, (RW(29) + 124), (u8)RW(0));
SET32(2, RW(2) << 1);
SET64(4, (s32)rd32(c, (RW(19) + 12)));
SET64(17, RD(2) & 0xffff);
SET32(6, RW(29) + 124);
SET32(5, RW(17) + 2180);
SET64(31, 0x2e4d6c); SET64(7, RD(0) + RD(0)); JP_F_002E0F80(c);
SET64(4, (s32)rd32(c, (RW(19) + 12)));
SET32(5, RW(17) + 2181);
SET32(6, RW(29) + 124);
SET64(31, 0x2e4d80); SET32(7, RW(0) + 1); JP_F_002E0F80(c);
SET64(4, (s32)rd32(c, (RW(19) + 12)));
SET32(5, RW(0) + 2197);
SET32(6, RW(29) + 124);
SET64(31, 0x2e4d94); SET32(7, RW(0) + 2); JP_F_002E0F80(c);
SET32(4, RW(0) + 208);
SET64(31, 0x2e4da0); wr32(c, (RW(19) + 0), RW(16)); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002E4DCC; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 1152);
SET32(6, RW(6) + 1040);
SET32(7, RW(0) + 64);
SET64(31, 0x2e4dc8); SET32(8, RW(0) + 3); JP_F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002E4DCC:;
wr32(c, (RW(19) + 4), RW(16));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e4de4); SET64(16, RD(0) + RD(0)); rt_call(c, t); }
SET64(17, RD(2) + RD(0));
SET32(2, RW(17) << 1);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) << 7);
SET64(31, 0x2e4dfc); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002E4E2C; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(8, RD(17) + RD(0));
SET32(16, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET32(5, RW(5) + -6640);
SET32(6, RW(6) + -7024);
SET64(31, 0x2e4e28); SET32(7, RW(0) + 384); JP_F_00102580(c);
SET64(18, RD(2) + RD(0));
L_002E4E2C:;
wr32(c, (RW(19) + 8), RW(18));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e4e44); SET64(16, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002E4EF8; }
SET64(4, RD(16) & 0xffff);
L_002E4E50:;
SET64(2, (s32)rd32(c, (RW(19) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(17, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e4e74); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
if (RSD(16) < 0) { SET32(3, RW(16) >> 1); goto L_002E4E88; }
c->f[0].u = RW(16);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002E4EA0;
L_002E4E88:;
SET64(2, RD(16) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002E4EA0:;
c->f[12].f = fpu(F(20) + F(0));
SET64(31, 0x2e4eac); SET64(4, RD(17) + RD(0)); JP_F_0014E9B0(c);
c->f[12].u = RW(0);
SET64(31, 0x2e4eb8); SET32(4, RW(17) + 192); JP_F_001638D0(c);
SET64(31, 0x2e4ec0); SET64(4, RD(17) + RD(0)); JP_F_0014EB10(c);
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e4ed0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 20)));
SET32(2, RW(16) + 1);
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e4ee8); SET64(16, RD(2) & 0xffff); rt_call(c, t); }
SET64(3, RSD(16) < RSD(2));
if (RD(3) != RD(0)) { SET64(4, RD(16) & 0xffff); { POLL(); goto L_002E4E50; } }
L_002E4EF8:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002E4F20(Ctx *c) { /* func_002E4F20 */
ENTER(0x2e4f20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002E4FBC; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x150000);
SET32(2, RW(2) + 14240);
wr32(c, (RW(17) + 20), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x2e4f58); SET32(5, RW(5) + 1040); JP_F_001022C0(c);
wr32(c, (RW(17) + 4), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x2e4f6c); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(17) + 8), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 12)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 12), RW(0)); goto L_002E4F90; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e4f8c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 12), RW(0));
L_002E4F90:;
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 0), RW(0)); if (t) goto L_002E4FA4; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 14336);
wr32(c, (RW(17) + 20), RW(2));
L_002E4FA4:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002E4FC0; }
SET64(31, 0x2e4fbc); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002E4FBC:;
SET64(2, RD(17) + RD(0));
L_002E4FC0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E4FE0(Ctx *c) { /* func_002E4FE0 */
ENTER(0x2e4fe0);
SET32(29, RW(29) + -160);
SET64(3, (s64)(s32)0x530000);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(6, (s64)(s32)0x3dcc0000);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(7, RD(6) | 0xcccd);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[0].u = rd32(c, (RW(3) + -22428));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
c->f[1].u = RW(7);
c->f[21].u = c->f[12].u;
{ int t = RD(6) != RD(0); c->f[20].f = fpu(F(1) * F(0)); if (t) goto L_002E5500; }
c->f[0].u = (u32)fpu_cvtw(F(21));
SET64(2, (s32)rd32(c, (RW(28) + -31052)));
SET64(3, (s32)c->f[0].u);
SET64(1, RSD(3) < RSD(2));
{ int t = RD(1) == RD(0); SET64(17, (s32)rd32(c, (RW(28) + -31052))); if (t) goto L_002E5050; }
SET32(2, RW(17) << 5); goto L_002E5070;
L_002E5050:;
SET64(2, (s32)rd32(c, (RW(28) + -31048)));
SET64(1, RSD(2) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, (s32)rd32(c, (RW(28) + -31048))); if (t) goto L_002E5068; }
 goto L_002E506C;
L_002E5068:;
SET64(17, RD(3) + RD(0));
L_002E506C:;
SET32(2, RW(17) << 5);
L_002E5070:;
SET64(3, (s64)(s32)0x4c0000);
SET32(4, RW(2) + RW(17));
SET32(3, RW(3) + -27616);
SET64(2, RD(5) & 0xffff);
SET32(4, RW(4) << 2);
SET64(2, RD(2) & 0x1);
SET32(5, RW(3) + RW(4));
SET64(6, RD(2) ^ RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2e509c); SET64(6, RD(6) < (u64)(s64)1); JP_F_002E5CF0(c);
SET32(2, RW(0) + 3);
if (RD(17) == RD(2)) { SET64(2, rd8(c, (RW(16) + 64))); goto L_002E51F0; }
SET32(2, RW(0) + 2);
if (RD(17) == RD(2)) { SET64(2, rd8(c, (RW(16) + 64))); goto L_002E5164; }
SET32(2, RW(0) + 1);
if (RD(17) == RD(2)) { SET64(2, rd8(c, (RW(16) + 64))); goto L_002E50D4; }
{ int t = RD(17) == RD(0);  if (t) goto L_002E50D0; }
c->f[3].u = rd32(c, (RW(16) + 48)); goto L_002E52A8;
L_002E50D0:;
SET64(2, rd8(c, (RW(16) + 64)));
L_002E50D4:;
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x3e4c0000); goto L_002E50F0; }
SET64(2, (s64)(s32)0x3f330000);
SET64(2, RD(2) | 0x3333);
c->f[3].u = RW(2);
SET64(2, (s64)(s32)0x3f800000); goto L_002E50FC;
L_002E50F0:;
SET64(2, RD(2) | 0xcccd);
c->f[3].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
L_002E50FC:;
SET64(3, (s64)(s32)0x3f000000);
wr32(c, (RW(29) + 152), RW(2));
c->f[0].u = RW(0);
SET64(2, (s64)(s32)0x3f330000);
wr32(c, (RW(29) + 144), RW(3));
SET64(2, RD(2) | 0x3333);
wr32(c, (RW(29) + 148), RW(3));
c->f[2].u = RW(2);
SET64(2, (s64)(s32)0x3e990000);
SET64(2, RD(2) | 0x999a);
c->f[1].u = RW(2);
c->facc = fpu(F(0) + F(1));
c->f[1].f = fpu(c->facc + F(2) * F(3));
wr32(c, (RW(29) + 156), c->f[1].u);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
c->f[1].u = rd32(c, (RW(2) + 1956));
{ int t = RD(18) == RD(0); SET32(3, RW(2) + 1920); if (t) goto L_002E5158; }
SET64(2, (s64)(s32)0x40000000);
c->f[0].u = RW(2);
L_002E5158:;
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(3) + 36), c->f[0].u); goto L_002E52A4;
L_002E5164:;
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x3e990000); goto L_002E5180; }
SET64(2, (s64)(s32)0x3f4c0000);
SET64(2, RD(2) | 0xcccd);
c->f[3].u = RW(2);
SET64(2, (s64)(s32)0x3f330000); goto L_002E518C;
L_002E5180:;
SET64(2, RD(2) | 0x999a);
c->f[3].u = RW(2);
SET64(2, (s64)(s32)0x3f330000);
L_002E518C:;
SET64(3, (s64)(s32)0x3f800000);
SET64(2, RD(2) | 0x3333);
wr32(c, (RW(29) + 128), RW(3));
c->f[2].u = RW(2);
wr32(c, (RW(29) + 132), RW(3));
SET64(2, (s64)(s32)0x3e990000);
wr32(c, (RW(29) + 136), RW(3));
SET64(2, RD(2) | 0x999a);
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[1].f = fpu(c->facc + F(2) * F(3));
wr32(c, (RW(29) + 140), c->f[1].u);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
c->f[1].u = rd32(c, (RW(2) + 1956));
{ int t = RD(18) == RD(0); SET32(3, RW(2) + 1920); if (t) goto L_002E51E4; }
SET64(2, (s64)(s32)0x40000000);
c->f[0].u = RW(2);
L_002E51E4:;
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(3) + 36), c->f[0].u); goto L_002E52A4;
L_002E51F0:;
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x3ecc0000); goto L_002E5208; }
SET64(2, (s64)(s32)0x3f800000);
c->f[3].u = RW(2);
SET64(2, (s64)(s32)0x3f800000); goto L_002E5214;
L_002E5208:;
SET64(2, RD(2) | 0xcccd);
c->f[3].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
L_002E5214:;
SET64(3, (s64)(s32)0x3f000000);
wr32(c, (RW(29) + 112), RW(2));
c->f[0].u = RW(0);
SET64(2, (s64)(s32)0x3f330000);
wr32(c, (RW(29) + 116), RW(3));
SET64(2, RD(2) | 0x3333);
wr32(c, (RW(29) + 120), RW(3));
c->f[2].u = RW(2);
SET64(2, (s64)(s32)0x3e990000);
SET64(2, RD(2) | 0x999a);
c->f[1].u = RW(2);
c->facc = fpu(F(0) + F(1));
c->f[1].f = fpu(c->facc + F(2) * F(3));
wr32(c, (RW(29) + 124), c->f[1].u);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
c->f[1].u = rd32(c, (RW(2) + 1956));
{ int t = RD(18) == RD(0); SET32(3, RW(2) + 1920); if (t) goto L_002E5270; }
SET64(2, (s64)(s32)0x40000000);
c->f[0].u = RW(2);
L_002E5270:;
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(3) + 36), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
c->f[1].u = rd32(c, (RW(2) + 804));
{ int t = RD(18) == RD(0); SET32(3, RW(2) + 768); if (t) goto L_002E5298; }
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu(F(0) + F(1)); goto L_002E52A0;
L_002E5298:;
c->f[0].u = RW(0);
c->f[0].f = fpu(F(0) + F(1));
L_002E52A0:;
wr32(c, (RW(3) + 36), c->f[0].u);
L_002E52A4:;
c->f[3].u = rd32(c, (RW(16) + 48));
L_002E52A8:;
SET64(2, (s64)(s32)0x530000);
c->f[2].u = rd32(c, (RW(16) + 32));
SET64(5, (s64)(s32)0x3dcc0000);
c->f[0].u = rd32(c, (RW(2) + -22428));
SET64(6, RD(5) | 0xcccd);
SET64(5, (s64)(s32)0x3a830000);
SET64(4, (s64)(s32)0x530000);
c->f[2].f = fpu(F(3) - F(2));
SET64(3, (s64)(s32)0x530000);
SET64(2, (s64)(s32)0x3d230000);
SET64(5, RD(5) | 0x126f);
SET64(2, RD(2) | 0xd70a);
c->f[3].f = fpu(F(0) * F(2));
c->f[7].u = RW(2);
c->f[1].u = rd32(c, (RW(16) + 32));
SET64(2, (s64)(s32)0x530000);
c->f[6].u = RW(0);
c->f[2].u = RW(6);
c->facc = fpu(F(6) + F(1));
c->f[1].f = fpu(c->facc + F(7) * F(3));
wr32(c, (RW(16) + 32), c->f[1].u);
c->f[5].u = rd32(c, (RW(16) + 52));
c->f[4].u = rd32(c, (RW(16) + 36));
c->f[1].u = rd32(c, (RW(16) + 36));
c->f[3].u = rd32(c, (RW(4) + -22428));
c->f[4].f = fpu(F(5) - F(4));
c->f[3].f = fpu(F(3) * F(4));
c->facc = fpu(F(6) + F(1));
c->f[1].f = fpu(c->facc + F(7) * F(3));
wr32(c, (RW(16) + 36), c->f[1].u);
c->f[1].u = rd32(c, (RW(16) + 40));
c->f[5].u = rd32(c, (RW(16) + 56));
c->f[4].u = rd32(c, (RW(16) + 40));
c->f[3].u = rd32(c, (RW(3) + -22428));
c->facc = fpu(F(6) + F(1));
c->f[4].f = fpu(F(5) - F(4));
c->f[3].f = fpu(F(3) * F(4));
c->f[1].f = fpu(c->facc + F(7) * F(3));
wr32(c, (RW(16) + 40), c->f[1].u);
c->f[1].u = rd32(c, (RW(16) + 44));
c->f[5].u = rd32(c, (RW(16) + 60));
c->f[4].u = rd32(c, (RW(16) + 44));
c->f[3].u = rd32(c, (RW(2) + -22428));
c->facc = fpu(F(6) + F(1));
c->f[4].f = fpu(F(5) - F(4));
c->f[1].f = fpu(F(3) * F(4));
c->f[1].f = fpu(c->facc + F(2) * F(1));
wr32(c, (RW(16) + 44), c->f[1].u);
rd128(c, (RW(16) + 32) & ~15u, &c->r[3]);
c->f[0].u = RW(5);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
wr128(c, (RW(2) + 192) & ~15u, &c->r[3]);
c->f[2].u = rd32(c, (RW(16) + 60));
c->f[1].u = rd32(c, (RW(16) + 44));
c->f[1].f = fpu(F(2) - F(1));
c->f[1].u = c->f[1].u & 0x7FFFFFFFu;
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(25, (s32)rd32(c, (RW(16) + 20))); goto L_002E53A8; }
SET64(2, rd8(c, (RW(16) + 64)));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
wr8(c, (RW(16) + 64), (u8)RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 20)));
L_002E53A8:;
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e53b8); SET64(17, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002E5410; }
SET64(4, RD(17) & 0xffff);
L_002E53C4:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e53e8);  rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 20)));
SET32(2, RW(17) + 1);
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e5400); SET64(17, RD(2) & 0xffff); rt_call(c, t); }
SET64(2, RSD(17) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, RD(17) & 0xffff); { POLL(); goto L_002E53C4; } }
L_002E5410:;
SET64(2, (s64)(s32)0x40000000);
c->f[5].u = RW(2);
SET64(6, (s32)rd32(c, (RW(16) + 8)));
SET64(2, (s64)(s32)0x3f4c0000);
SET64(5, (s64)(s32)0x3fc00000);
SET64(2, RD(2) | 0xcccd);
SET64(4, (s32)rd32(c, (RW(16) + 24)));
c->f[0].u = RW(2);
c->f[2].f = fpu(F(0) * F(21));
SET64(2, (s64)(s32)0x40490000);
SET64(3, RD(2) | 0xfdb);
SET64(2, (s64)(s32)0x43340000);
c->f[1].f = fpu(F(2) * F(2));
c->f[1].f = fpu(F(2) * F(1));
c->f[0].u = RW(5);
c->f[0].f = fpu(F(0) * F(1));
c->f[6].u = rd32(c, (RW(6) + 164));
c->f[4].u = RW(3);
c->f[0].f = fpu(F(4) * F(0));
c->f[3].u = RW(2);
c->f[1].f = fpu_div(F(6), F(5));
c->f[7].u = rd32(c, (RW(6) + 32));
c->f[2].f = fpu_div(F(0), F(3));
c->f[1].f = fpu(F(7) + F(1));
wr32(c, (RW(4) + 32), c->f[1].u);
c->f[0].u = rd32(c, (RW(6) + 164));
c->f[1].u = rd32(c, (RW(6) + 36));
c->f[0].f = fpu_div(F(0), F(5));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(4) + 36), c->f[0].u);
c->f[0].u = rd32(c, (RW(6) + 164));
wr32(c, (RW(4) + 164), c->f[0].u);
c->f[0].u = rd32(c, (RW(6) + 168));
wr32(c, (RW(4) + 168), c->f[0].u);
c->f[0].u = rd32(c, (RW(6) + 172));
wr32(c, (RW(4) + 172), c->f[0].u);
c->f[0].u = rd32(c, (RW(6) + 176));
wr32(c, (RW(4) + 176), c->f[0].u);
c->f[0].u = rd32(c, (RW(6) + 180));
wr32(c, (RW(4) + 180), c->f[0].u);
c->f[0].u = rd32(c, (RW(6) + 184));
wr32(c, (RW(4) + 184), c->f[0].u);
rd128(c, (RW(6) + 192) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 192) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(28) + -31044));
c->f[0].u = rd32(c, (RW(4) + 416));
c->f[1].f = fpu(F(4) * F(1));
c->f[1].f = fpu_div(F(1), F(3));
c->f[1].f = fpu(F(2) + F(1));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(4) + 416), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e54f8);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 80))); goto L_002E56A4;
L_002E5500:;
SET32(3, RW(0) + 10);
{ int t = RD(6) != RD(3);  if (t) goto L_002E56A0; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e551c);  rt_call(c, t); }
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002E56A0; }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
c->f[0].u = rd32(c, (RW(28) + -31040));
c->f[12].u = rd32(c, (RW(28) + -31040));
c->f[1].u = rd32(c, (RW(2) + 204));
c->f[1].f = fpu(F(1) - F(20));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; SET64(18, RD(0) + (s64)1); if (t) goto L_002E5550; }
SET32(4, RW(2) + 192); goto L_002E5570;
L_002E5550:;
c->f[0].u = rd32(c, (RW(28) + -31036));
c->fcc = F(1) <= F(0);
{ int t = c->fcc; c->f[12].u = rd32(c, (RW(28) + -31036)); if (t) goto L_002E5568; }
 goto L_002E556C;
L_002E5568:;
c->f[12].u = c->f[1].u;
L_002E556C:;
SET32(4, RW(2) + 192);
L_002E5570:;
SET64(31, 0x2e5578);  JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e558c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
c->f[0].u = RW(0);
c->f[1].u = rd32(c, (RW(2) + 204));
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(25, (s32)rd32(c, (RW(16) + 20))); goto L_002E55AC; }
SET64(18, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 20)));
L_002E55AC:;
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e55bc); SET64(17, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002E5680; }
SET64(4, RD(17) & 0xffff);
L_002E55C8:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(19, RW(2) + RW(3));
c->f[1].u = rd32(c, (RW(19) + 204));
c->f[0].u = rd32(c, (RW(28) + -31032));
c->f[1].f = fpu(F(1) - F(20));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; c->f[12].u = rd32(c, (RW(28) + -31032)); if (t) goto L_002E5600; }
 goto L_002E5620;
L_002E5600:;
c->f[0].u = rd32(c, (RW(28) + -31028));
c->fcc = F(1) <= F(0);
{ int t = c->fcc; c->f[12].u = rd32(c, (RW(28) + -31028)); if (t) goto L_002E5618; }
 goto L_002E5620;
L_002E5618:;
c->f[12].u = c->f[1].u;
L_002E5620:;
SET64(31, 0x2e5628); SET32(4, RW(19) + 192); JP_F_001638D0(c);
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e5638); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(19) + 204));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_002E5658; }
SET64(18, RD(0) + RD(0));
L_002E5658:;
SET64(25, (s32)rd32(c, (RW(16) + 20)));
SET32(2, RW(17) + 1);
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e5670); SET64(17, RD(2) & 0xffff); rt_call(c, t); }
SET64(3, RSD(17) < RSD(2));
if (RD(3) != RD(0)) { SET64(4, RD(17) & 0xffff); { POLL(); goto L_002E55C8; } }
L_002E5680:;
{ int t = RD(18) == RD(0);  if (t) goto L_002E56A0; }
SET64(25, (s32)rd32(c, (RW(16) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2e5698); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 100);
wr32(c, (RW(16) + 16), RW(3));
L_002E56A0:;
SET64(31, rd64(c, (RW(29) + 80)));
L_002E56A4:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_002E56D0(Ctx *c) { /* func_002E56D0 */
ENTER(0x2e56d0);
SET32(3, RW(0) + 10);
wr32(c, (RW(4) + 16), RW(3)); return;
}

void JP_F_002E56E0(Ctx *c) { /* func_002E56E0 */
ENTER(0x2e56e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e570c);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(25, (s32)rd32(c, (RW(17) + 20))); goto L_002E5720; }
SET64(2, RD(0) + RD(0)); goto L_002E57BC;
L_002E5720:;
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e5730); SET64(16, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002E5798; }
SET64(4, RD(16) & 0xffff);
L_002E573C:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e5764);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(25, (s32)rd32(c, (RW(17) + 20))); goto L_002E5778; }
SET64(2, RD(0) + RD(0)); goto L_002E57BC;
L_002E5778:;
SET32(2, RW(16) + 1);
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e578c); SET64(16, RD(2) & 0xffff); rt_call(c, t); }
SET64(2, RSD(16) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, RD(16) & 0xffff); { POLL(); goto L_002E573C; } }
L_002E5798:;
SET64(4, (s32)rd32(c, (RW(17) + 12)));
if (RD(4) == RD(0)) { SET64(2, RD(0) + (s64)1); goto L_002E57BC; }
SET64(31, 0x2e57ac); SET32(5, RW(0) + -1); JP_F_002E0E00(c);
SET64(2, RD(2) & 0xff);
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1); goto L_002E57BC;
L_002E57BC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E57D0(Ctx *c) { /* func_002E57D0 */
ENTER(0x2e57d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 24)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2e57f8);  rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 20)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e580c); SET64(16, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002E5860; }
SET64(4, RD(16) & 0xffff);
L_002E5818:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2e583c);  rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 20)));
SET32(2, RW(16) + 1);
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e5854); SET64(16, RD(2) & 0xffff); rt_call(c, t); }
SET64(3, RSD(16) < RSD(2));
if (RD(3) != RD(0)) { SET64(4, RD(16) & 0xffff); { POLL(); goto L_002E5818; } }
L_002E5860:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E5880(Ctx *c) { /* func_002E5880 */
ENTER(0x2e5880);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 24)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2e58ac); SET64(17, RD(5) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 20)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e58c0); SET64(16, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002E5918; }
SET64(4, RD(16) & 0xffff);
L_002E58CC:;
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2e58f0); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 20)));
SET32(2, RW(16) + 1);
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e5908); SET64(16, RD(2) & 0xffff); rt_call(c, t); }
SET64(2, RSD(16) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, RD(16) & 0xffff); { POLL(); goto L_002E58CC; } }
L_002E5918:;
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e5930); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E5950(Ctx *c) { /* func_002E5950 */
ENTER(0x2e5950);
SET32(2, RW(0) + 6); return;
}

void JP_F_002E5960(Ctx *c) { /* func_002E5960 */
ENTER(0x2e5960);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(5) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(6) + RD(0));
SET64(31, 0x2e5998); c->f[20].u = c->f[12].u; JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2e59a4); SET32(5, RW(0) + 7); JP_F_0022CB50(c);
SET64(19, RD(2) + RD(0));
SET64(31, 0x2e59b0); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002E59C0; }
SET64(31, 0x2e59c0); SET64(4, RD(18) + RD(0)); JP_F_00150480(c);
L_002E59C0:;
SET64(5, RD(19) + RD(0));
SET64(6, RD(21) + RD(0));
SET64(4, RD(18) + RD(0));
SET32(7, RW(0) + -1);
SET64(8, RD(0) + RD(0));
SET64(31, 0x2e59dc); wr32(c, (RW(17) + 4), RW(18)); JP_F_0014F9B0(c);
SET64(25, (s32)rd32(c, (RW(17) + 20)));
SET64(18, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e59f0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(19, RD(2) + RD(0));
SET32(2, RW(19) << 1);
SET32(2, RW(2) + RW(19));
SET32(2, RW(2) << 7);
SET64(31, 0x2e5a08); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002E5A38; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(8, RD(19) + RD(0));
SET32(18, RW(0) + 1);
SET64(4, RD(20) + RD(0));
SET32(5, RW(5) + -6640);
SET32(6, RW(6) + -7024);
SET64(31, 0x2e5a34); SET32(7, RW(0) + 384); JP_F_00102580(c);
SET64(20, RD(2) + RD(0));
L_002E5A38:;
wr32(c, (RW(17) + 8), RW(20));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e5a50); SET64(19, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002E5B10; }
SET64(4, RD(19) & 0xffff);
L_002E5A5C:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(18, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e5a80); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET32(4, RW(18) + 192);
SET64(31, 0x2e5a98); wr32(c, (RW(18) + 160), RW(3)); JP_F_001638D0(c);
if (RSD(19) < 0) { SET32(3, RW(19) >> 1); goto L_002E5AAC; }
c->f[0].u = RW(19);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002E5AC4;
L_002E5AAC:;
SET64(2, RD(19) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002E5AC4:;
c->f[12].f = fpu(F(20) + F(0));
SET64(31, 0x2e5ad0); SET64(4, RD(18) + RD(0)); JP_F_0014E9B0(c);
SET64(31, 0x2e5ad8); SET64(4, RD(18) + RD(0)); JP_F_0014EB10(c);
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e5ae8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 20)));
SET32(2, RW(19) + 1);
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e5b00); SET64(19, RD(2) & 0xffff); rt_call(c, t); }
SET64(2, RSD(19) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, RD(19) & 0xffff); { POLL(); goto L_002E5A5C; } }
L_002E5B10:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e5b28); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, 0x2e5b30); SET32(4, RW(0) + 448); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002E5B44; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x2e5b44); SET32(5, RW(0) + 1); JP_F_0014DBE0(c);
L_002E5B44:;
wr32(c, (RW(17) + 24), RW(18));
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e5b58); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET64(3, (s32)rd32(c, (RW(17) + 4)));
c->f[12].u = RW(2);
SET64(2, (s32)rd32(c, (RW(17) + 24)));
wr32(c, (RW(2) + 160), RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(31, 0x2e5b78); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(2, (s64)(s32)0x3f800000);
SET64(4, (s32)rd32(c, (RW(17) + 24)));
c->f[0].u = RW(2);
SET64(31, 0x2e5b8c); c->f[12].f = fpu(F(20) - F(0)); JP_F_0014E9B0(c);
SET64(31, 0x2e5b94); SET64(4, (s32)rd32(c, (RW(17) + 24))); JP_F_0014EB40(c);
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e5ba8);  rt_call(c, t); }
wr32(c, (RW(29) + 128), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
wr32(c, (RW(29) + 140), RW(0));
rd128(c, (RW(29) + 128) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 48) & ~15u, &c->r[3]);
SET64(31, 0x2e5bd0); wr8(c, (RW(17) + 64), (u8)RW(2)); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(25, (s32)rd32(c, (RW(17) + 20))); goto L_002E5BE4; }
SET32(5, RW(5) + 672);
SET64(25, (s32)rd32(c, (RW(17) + 20)));
L_002E5BE4:;
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e5bf0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
c->f[12].u = RW(0);
SET64(31, 0x2e5c04); SET64(6, RD(0) + RD(0)); JP_F_002E4FE0(c);
SET64(31, rd64(c, (RW(29) + 112)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_002E5C30(Ctx *c) { /* func_002E5C30 */
ENTER(0x2e5c30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002E5CD8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 14288);
wr32(c, (RW(17) + 20), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_002E5C78; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e5c74); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 4), RW(0));
L_002E5C78:;
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x2e5c88); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(17) + 8), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 24)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 24), RW(0)); goto L_002E5CAC; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e5ca8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 24), RW(0));
L_002E5CAC:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002E5CC4; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 14336);
wr32(c, (RW(17) + 20), RW(2));
SET64(2, RD(16) << 48);
L_002E5CC4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002E5CDC; }
SET64(31, 0x2e5cd8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002E5CD8:;
SET64(2, RD(17) + RD(0));
L_002E5CDC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E5CF0(Ctx *c) { /* func_002E5CF0 */
ENTER(0x2e5cf0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e5d24); SET64(16, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002E5EA8; }
SET64(5, RD(16) & 0xffff);
L_002E5D30:;
SET64(2, (s32)rd32(c, (RW(19) + 8)));
SET32(4, RW(5) << 2);
SET32(3, RW(5) << 1);
SET32(4, RW(4) + RW(5));
SET32(3, RW(3) + RW(5));
SET32(4, RW(4) << 1);
SET32(3, RW(3) << 7);
SET32(5, RW(4) + RW(5));
SET32(4, RW(2) + RW(3));
SET32(2, RW(5) << 1);
{ int t = RD(17) == RD(0); SET32(5, RW(18) + RW(2)); if (t) goto L_002E5D68; }
SET64(2, (s16)rd16(c, (RW(5) + 4))); goto L_002E5D6C;
L_002E5D68:;
SET64(2, (s16)rd16(c, (RW(5) + 0)));
L_002E5D6C:;
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
{ int t = RD(17) == RD(0); wr32(c, (RW(4) + 32), c->f[0].u); if (t) goto L_002E5D88; }
SET64(2, (s16)rd16(c, (RW(5) + 6))); goto L_002E5D8C;
L_002E5D88:;
SET64(2, (s16)rd16(c, (RW(5) + 2)));
L_002E5D8C:;
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 36), c->f[0].u);
SET64(2, (s16)rd16(c, (RW(5) + 12)));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 172), c->f[0].u);
SET64(2, (s16)rd16(c, (RW(5) + 14)));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 176), c->f[0].u);
SET64(3, (s16)rd16(c, (RW(5) + 12)));
SET64(2, (s16)rd16(c, (RW(5) + 16)));
SET32(2, RW(3) + RW(2));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 180), c->f[0].u);
SET64(3, (s16)rd16(c, (RW(5) + 14)));
SET64(2, (s16)rd16(c, (RW(5) + 18)));
SET32(2, RW(3) + RW(2));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 184), c->f[0].u);
SET64(2, (s16)rd16(c, (RW(5) + 8)));
{ int t = RD(2) != RD(0);  if (t) goto L_002E5E0C; }
SET64(2, (s16)rd16(c, (RW(5) + 16)));
L_002E5E0C:;
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 164), c->f[0].u);
SET64(2, (s16)rd16(c, (RW(5) + 10)));
{ int t = RD(2) != RD(0);  if (t) goto L_002E5E2C; }
SET64(2, (s16)rd16(c, (RW(5) + 18)));
L_002E5E2C:;
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 168), c->f[0].u);
SET64(3, (s16)rd16(c, (RW(5) + 20)));
{ int t = RD(3) != RD(2);  if (t) goto L_002E5E80; }
c->f[0].u = rd32(c, (RW(4) + 164));
SET64(2, (s64)(s32)0x40000000);
c->f[2].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 32));
c->f[0].f = fpu_div(F(0), F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(4) + 32), c->f[0].u);
c->f[0].u = rd32(c, (RW(4) + 168));
c->f[1].u = rd32(c, (RW(4) + 36));
c->f[0].f = fpu_div(F(0), F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(4) + 36), c->f[0].u);
L_002E5E80:;
SET64(25, (s32)rd32(c, (RW(19) + 20)));
SET32(2, RW(16) + 1);
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e5e98); SET64(16, RD(2) & 0xffff); rt_call(c, t); }
SET64(3, RSD(16) < RSD(2));
if (RD(3) != RD(0)) { SET64(5, RD(16) & 0xffff); { POLL(); goto L_002E5D30; } }
L_002E5EA8:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002E5ED0(Ctx *c) { /* func_002E5ED0 */
ENTER(0x2e5ed0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
if (RD(4) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002E5EEC; }
SET64(31, 0x2e5eec); SET32(5, RW(0) + -1); JP_F_002E0E00(c);
L_002E5EEC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002E5F00(Ctx *c) { /* func_002E5F00 */
ENTER(0x2e5f00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e5f24); SET64(16, RD(5) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e5f34); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(4, RD(16) & 0xffff);
SET32(3, RW(4) << 1);
SET64(31, rd64(c, (RW(29) + 32)));
SET32(3, RW(3) + RW(4));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3));
SET32(29, RW(29) + 48); return;
}

void JP_F_002E5F60(Ctx *c) { /* func_002E5F60 */
ENTER(0x2e5f60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e5f84); SET64(16, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002E5FF0; }
SET64(4, RD(16) & 0xffff);
L_002E5F90:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e5fb8);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(25, (s32)rd32(c, (RW(17) + 20))); goto L_002E5FCC; }
SET64(2, RD(0) + RD(0)); goto L_002E6014;
L_002E5FCC:;
SET32(2, RW(16) + 1);
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e5fe0); SET64(16, RD(2) & 0xffff); rt_call(c, t); }
SET64(2, RSD(16) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, RD(16) & 0xffff); { POLL(); goto L_002E5F90; } }
L_002E5FF0:;
SET64(4, (s32)rd32(c, (RW(17) + 12)));
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_002E6014; }
SET64(31, 0x2e6004); SET32(5, RW(0) + -1); JP_F_002E0E00(c);
SET64(2, RD(2) & 0xff);
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1); goto L_002E6014;
L_002E6014:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E6030(Ctx *c) { /* func_002E6030 */
ENTER(0x2e6030);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e6054); SET64(16, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002E60A8; }
SET64(4, RD(16) & 0xffff);
L_002E6060:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2e6084);  rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 20)));
SET32(2, RW(16) + 1);
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e609c); SET64(16, RD(2) & 0xffff); rt_call(c, t); }
SET64(3, RSD(16) < RSD(2));
if (RD(3) != RD(0)) { SET64(4, RD(16) & 0xffff); { POLL(); goto L_002E6060; } }
L_002E60A8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E60C0(Ctx *c) { /* func_002E60C0 */
ENTER(0x2e60c0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e60ec); SET64(16, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002E6140; }
SET64(4, RD(16) & 0xffff);
L_002E60F8:;
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2e611c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 20)));
SET32(2, RW(16) + 1);
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e6134); SET64(16, RD(2) & 0xffff); rt_call(c, t); }
SET64(3, RSD(16) < RSD(2));
if (RD(3) != RD(0)) { SET64(4, RD(16) & 0xffff); { POLL(); goto L_002E60F8; } }
L_002E6140:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E6160(Ctx *c) { /* func_002E6160 */
ENTER(0x2e6160);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
if (RD(16) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_002E619C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 14336);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 20), RW(3)); if (t) goto L_002E6198; }
SET64(31, 0x2e6198);  JP_F_001004B0(c);
L_002E6198:;
SET64(2, RD(16) + RD(0));
L_002E619C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E61B0(Ctx *c) { /* func_002E61B0 */
ENTER(0x2e61b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002E62B4; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 14144);
SET32(3, RW(3) + 14152);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 14164);
wr32(c, (RW(17) + 36), RW(2));
wr32(c, (RW(28) + -29876), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 76), RW(0)); goto L_002E6214; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e6210); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 76), RW(0));
L_002E6214:;
SET64(4, (s32)rd32(c, (RW(17) + 80)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 80), RW(0)); goto L_002E6234; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e6230); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 80), RW(0));
L_002E6234:;
SET64(2, rd8(c, (RW(17) + 65)));
if (RD(2) != RD(0)) { wr32(c, (RW(17) + 84), RW(0)); goto L_002E6264; }
SET64(4, (s32)rd32(c, (RW(17) + 84)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 84), RW(0)); goto L_002E6260; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e625c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 84), RW(0));
L_002E6260:;
wr32(c, (RW(17) + 84), RW(0));
L_002E6264:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002E62A0; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31216);
SET32(3, RW(3) + -31208);
wr32(c, (RW(17) + 56), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -31196);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2e629c); wr32(c, (RW(17) + 36), RW(2)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
L_002E62A0:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002E62B8; }
SET64(31, 0x2e62b4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002E62B4:;
SET64(2, RD(17) + RD(0));
L_002E62B8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E62D0(Ctx *c) { /* func_002E62D0 */
ENTER(0x2e62d0);
SET64(3, (s32)rd32(c, (RW(28) + -29876)));
SET32(5, RW(0) + 1);
wr32(c, (RW(3) + 84), RW(4));
SET64(3, (s32)rd32(c, (RW(28) + -29876)));
wr8(c, (RW(3) + 65), (u8)RW(5)); return;
}

void JP_F_002E62F0(Ctx *c) { /* func_002E62F0 */
ENTER(0x2e62f0);
SET64(2, (s32)rd32(c, (RW(28) + -29876)));
SET64(2, rd16(c, (RW(2) + 0)));
SET64(2, RD(0) < RD(2)); return;
}

void JP_F_002E6300(Ctx *c) { /* func_002E6300 */
ENTER(0x2e6300);
SET64(3, (s32)rd32(c, (RW(28) + -29876)));
SET32(4, RW(0) + 2);
wr32(c, (RW(3) + 68), RW(4)); return;
}

void JP_F_002E6310(Ctx *c) { /* func_002E6310 */
ENTER(0x2e6310);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(28) + -29876)));
SET64(16, RD(17) & 0xffff);
wr32(c, (RW(2) + 68), RW(3));
c->f[0].u = rd32(c, (RW(28) + -31056));
SET64(2, (s32)rd32(c, (RW(28) + -29876)));
wr32(c, (RW(2) + 72), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(28) + -29876)));
SET64(31, 0x2e634c); wr8(c, (RW(2) + 65), (u8)RW(0)); JP_F_00139590(c);
SET64(3, rd8(c, (RW(2) + 32)));
SET64(4, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(28) + -29876)));
SET64(31, 0x2e6360); wr8(c, (RW(2) + 64), (u8)RW(3)); JP_F_00138B20(c);
SET32(3, RW(0) + 255);
{ int t = RD(16) != RD(3);  if (t) goto L_002E63D0; }
L_002E636C:;
SET64(31, 0x2e6374);  JP_F_001953A0(c);
SET64(3, RD(2) & 0x7);
SET64(4, (s64)(s32)0x4c0000);
SET32(5, RW(3) + RW(0));
SET32(4, RW(4) + -27696);
SET64(17, RD(5) & 0xffff);
SET32(3, RW(0) + -2);
SET32(5, RW(17) << 1);
SET32(4, RW(4) + RW(5));
SET64(5, (s16)rd16(c, (RW(4) + 0)));
{ int t = RD(5) == RD(3);  if (t) { POLL(); goto L_002E636C; } }
SET32(3, RW(0) + -1);
{ int t = RD(5) == RD(3);  if (t) goto L_002E63D0; }
SET64(4, (s64)(s32)0x540000);
SET32(3, RW(0) + 1);
SET32(4, RW(4) + 2736);
SET32(4, RW(4) + RW(5));
SET64(4, rd8(c, (RW(4) + 181)));
SET64(4, RD(4) & 0x1);
SET64(4, RD(0) < RD(4));
{ int t = RD(4) != RD(3);  if (t) { POLL(); goto L_002E636C; } }
L_002E63D0:;
SET64(3, (s32)rd32(c, (RW(28) + -29876)));
wr16(c, (RW(3) + 88), (u16)RW(17));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E63F0(Ctx *c) { /* func_002E63F0 */
ENTER(0x2e63f0);
SET32(29, RW(29) + -32);
SET32(4, RW(0) + 104);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2e6404); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002E6480; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2e6418); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31216);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(2));
SET32(3, RW(3) + -31208);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + -31196);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 36), RW(2));
SET32(4, RW(4) + 14144);
wr16(c, (RW(16) + 60), (u16)RW(0));
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 14152);
wr32(c, (RW(16) + 56), RW(4));
SET32(2, RW(2) + 14164);
wr32(c, (RW(16) + 20), RW(3));
wr32(c, (RW(16) + 36), RW(2));
wr32(c, (RW(28) + -29876), RW(16));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 76), RW(0));
wr32(c, (RW(16) + 80), RW(0));
c->f[0].u = rd32(c, (RW(28) + -31056));
wr32(c, (RW(16) + 72), c->f[0].u);
L_002E6480:;
SET64(31, 0x2e6488);  JP_F_0013AA20(c);
SET64(5, RD(16) + RD(0));
SET64(31, 0x2e6494); SET64(4, RD(2) + RD(0)); JP_F_0013A4F0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

static void JP_B_002E64B0(Ctx *c, u32 entry) { /* func_002E64B0 */
ENTER(entry);
switch (entry) { case 0x2e6564: goto L_002E6564; case 0x2e656c: goto L_002E656C; }
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x4d0000);
wr64(c, (RW(29) + 48), RD(31));
SET32(2, RW(2) + -3584);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[12].u = RW(0);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 76), RW(2));
SET32(4, RW(29) + 72);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e64ec); SET64(17, RD(5) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e64fc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(29) + 72);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e6510); c->f[20].u = c->f[0].u; rt_call(c, t); }
c->fcc = F(20) < F(0);
{ int t = !c->fcc;  if (t) goto L_002E6548; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0xbf800000);
SET32(3, RW(3) + -3584);
wr32(c, (RW(16) + 4), RW(3));
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e6540); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48))); goto L_002E65E8;
L_002E6548:;
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 64);
SET32(2, RW(2) + -3584);
wr32(c, (RW(29) + 68), RW(2));
c->f[12].u = RW(0);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
L_002E6564:;
{ u32 t = RW(25); SET64(31, 0x2e656c);  rt_call(c, t); }
L_002E656C:;
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e657c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(29) + 64);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e6590); c->f[20].u = c->f[0].u; rt_call(c, t); }
c->fcc = F(20) <= F(0);
{ int t = c->fcc;  if (t) goto L_002E65C8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x3f800000);
SET32(3, RW(3) + -3584);
wr32(c, (RW(16) + 4), RW(3));
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e65c0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
 goto L_002E65E4;
L_002E65C8:;
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -3584);
wr32(c, (RW(16) + 4), RW(25));
c->f[12].u = RW(0);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e65e4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
L_002E65E4:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002E65E8:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}
void JP_F_002E64B0(Ctx *c) { JP_B_002E64B0(c, 0x2e64b0); }
void JP_F_002E6564(Ctx *c) { JP_B_002E64B0(c, 0x2e6564); }
void JP_F_002E656C(Ctx *c) { JP_B_002E64B0(c, 0x2e656c); }

void JP_F_002E6600(Ctx *c) { /* func_002E6600 */
ENTER(0x2e6600);
SET32(4, RW(4) + -4); { JP_F_002E61B0(c); return; }
}

void JP_F_002E6610(Ctx *c) { /* func_002E6610 */
ENTER(0x2e6610);
SET32(4, RW(4) + -24); { JP_F_002E61B0(c); return; }
}

void JP_F_002E6620(Ctx *c) { /* func_002E6620 */
ENTER(0x2e6620);
wr16(c, (RW(4) + 80), (u16)RW(5));
wr32(c, (RW(4) + 84), RW(6));
wr32(c, (RW(4) + 88), RW(7));
wr16(c, (RW(4) + 104), (u16)RW(0));
wr16(c, (RW(4) + 106), (u16)RW(0));
wr32(c, (RW(4) + 100), RW(0));
wr16(c, (RW(4) + 76), (u16)RW(0)); return;
}

void JP_F_002E6640(Ctx *c) { /* func_002E6640 */
ENTER(0x2e6640);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 68), RW(0)); goto L_002E6670; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e666c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 68), RW(0));
L_002E6670:;
SET64(4, (s32)rd32(c, (RW(16) + 72)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 72), RW(0)); goto L_002E6690; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2e668c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 72), RW(0));
L_002E6690:;
SET64(4, (s32)rd32(c, (RW(16) + 112)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 112), RW(0)); goto L_002E66B0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2e66ac); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 112), RW(0));
L_002E66B0:;
SET64(4, (s32)rd32(c, (RW(16) + 116)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 116), RW(0)); goto L_002E66D0; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2e66cc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 116), RW(0));
L_002E66D0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E66E0(Ctx *c) { /* func_002E66E0 */
ENTER(0x2e66e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002E6730; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 14544);
wr32(c, (RW(17) + 0), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2e6718);  rt_call(c, t); }
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002E6734; }
SET64(31, 0x2e6730); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002E6730:;
SET64(2, RD(17) + RD(0));
L_002E6734:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E6750(Ctx *c) { /* func_002E6750 */
ENTER(0x2e6750);
 return;
}

void JP_F_002E6760(Ctx *c) { /* func_002E6760 */
ENTER(0x2e6760);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 92), RW(5));
SET64(16, RD(4) + RD(0));
SET64(31, 0x2e677c); wr32(c, (RW(4) + 96), c->f[12].u); JP_F_0013AA20(c);
SET32(5, RW(16) + 4);
SET64(31, 0x2e6788); SET64(4, RD(2) + RD(0)); JP_F_0013A4F0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E67A0(Ctx *c) { /* func_002E67A0 */
ENTER(0x2e67a0);
 return;
}

void JP_F_002E67B0(Ctx *c) { /* func_002E67B0 */
ENTER(0x2e67b0);
SET64(2, (s32)rd32(c, (RW(4) + 52)));
SET64(2, RD(2) ^ 0x4);
SET64(2, RD(2) < (u64)(s64)1); return;
}

void JP_F_002E67C0(Ctx *c) { /* func_002E67C0 */
ENTER(0x2e67c0);
SET64(2, (s16)rd16(c, (RW(4) + 78))); return;
}

void JP_F_002E67D0(Ctx *c) { /* func_002E67D0 */
ENTER(0x2e67d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e67ec);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002E6800(Ctx *c) { /* func_002E6800 */
ENTER(0x2e6800);
 return;
}

void JP_F_002E6810(Ctx *c) { /* func_002E6810 */
ENTER(0x2e6810);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2e682c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002E6840(Ctx *c) { /* func_002E6840 */
ENTER(0x2e6840);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
wr32(c, (RW(4) + 100), RW(3));
SET64(3, rd16(c, (RW(5) + 4)));
wr16(c, (RW(4) + 104), (u16)RW(3));
SET64(3, (s16)rd16(c, (RW(5) + 6)));
wr16(c, (RW(4) + 106), (u16)RW(3)); return;
}

void JP_F_002E6860(Ctx *c) { /* func_002E6860 */
ENTER(0x2e6860);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_002E6870(Ctx *c) { /* func_002E6870 */
ENTER(0x2e6870);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_002E6880(Ctx *c) { /* func_002E6880 */
ENTER(0x2e6880);
 return;
}

void JP_F_002E6890(Ctx *c) { /* func_002E6890 */
ENTER(0x2e6890);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -20928); return;
}

void JP_F_002E68A0(Ctx *c) { /* func_002E68A0 */
ENTER(0x2e68a0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(4, RW(0) + 120);
SET64(31, 0x2e68c0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002E694C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(16, RW(17) + 4);
SET32(2, RW(2) + 14544);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(17) + 0), RW(2));
SET64(31, 0x2e68e4); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -31216);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(3));
SET32(2, RW(2) + -31208);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -31196);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 36), RW(3));
SET32(2, RW(2) + 14384);
wr16(c, (RW(16) + 60), (u16)RW(0));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 0), RW(2));
SET32(4, RW(4) + 14444);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 14452);
wr32(c, (RW(17) + 60), RW(4));
SET32(2, RW(2) + 14464);
wr32(c, (RW(17) + 24), RW(3));
wr32(c, (RW(17) + 40), RW(2));
wr32(c, (RW(17) + 68), RW(0));
wr32(c, (RW(17) + 72), RW(0));
wr32(c, (RW(17) + 112), RW(0));
wr32(c, (RW(17) + 116), RW(0));
L_002E694C:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2e6958); SET32(5, RW(0) + 1); JP_F_002E6980(c);
wr32(c, (RW(17) + 68), RW(2));
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E6980(Ctx *c) { /* func_002E6980 */
ENTER(0x2e6980);
SET32(29, RW(29) + -112);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(4) == RD(2); SET64(16, RD(0) + RD(0)); if (t) goto L_002E6A5C; }
{ int t = RD(4) == RD(0);  if (t) goto L_002E69B4; }
 goto L_002E6B04;
L_002E69B4:;
SET64(6, (s64)(s32)0x420000);
SET32(5, RW(29) + 96);
SET32(6, RW(6) + -30384);
SET32(4, RW(0) + 4);
L_002E69C4:;
SET64(3, (s16)rd16(c, (RW(6) + 0)));
SET32(4, RW(4) + -1);
SET64(2, (s16)rd16(c, (RW(6) + 2)));
wr16(c, (RW(5) + 0), (u16)RW(3));
wr16(c, (RW(5) + 2), (u16)RW(2));
SET32(6, RW(6) + 4);
{ int t = RSD(4) > 0; SET32(5, RW(5) + 4); if (t) { POLL(); goto L_002E69C4; } }
SET64(31, 0x2e69ec); SET32(4, RW(0) + 240); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002E6A00; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2e6a00); SET32(5, RW(0) + 1); JP_F_002E7E00(c);
L_002E6A00:;
SET64(16, RD(0) + RD(0));
SET64(2, RD(0) | 0xffff);
L_002E6A08:;
SET32(3, RW(16) << 2);
SET32(3, RW(3) + RW(29));
SET32(16, RW(16) + 1);
SET64(3, rd16(c, (RW(3) + 98)));
{ int t = RD(3) != RD(2);  if (t) { POLL(); goto L_002E6A08; } }
SET64(31, 0x2e6a2c); SET32(4, RW(16) << 2); JP_F_00100530(c);
SET32(6, RW(16) << 2);
wr32(c, (RW(17) + 36), RW(2));
SET64(4, RD(2) + RD(0));
SET64(31, 0x2e6a40); SET32(5, RW(29) + 96); JP_F_00127218(c);
SET32(3, RW(0) + 3);
SET32(2, RW(0) + 28);
wr16(c, (RW(17) + 24), (u16)RW(3));
SET64(16, RD(17) + RD(0));
wr32(c, (RW(17) + 20), RW(2));
wr16(c, (RW(17) + 26), (u16)RW(3)); goto L_002E6B04;
L_002E6A5C:;
SET64(6, (s64)(s32)0x420000);
SET32(5, RW(29) + 64);
SET32(6, RW(6) + -30368);
SET32(4, RW(0) + 5);
L_002E6A6C:;
SET64(3, (s16)rd16(c, (RW(6) + 0)));
SET32(4, RW(4) + -1);
SET64(2, (s16)rd16(c, (RW(6) + 2)));
wr16(c, (RW(5) + 0), (u16)RW(3));
wr16(c, (RW(5) + 2), (u16)RW(2));
SET32(6, RW(6) + 4);
{ int t = RSD(4) > 0; SET32(5, RW(5) + 4); if (t) { POLL(); goto L_002E6A6C; } }
SET64(31, 0x2e6a94); SET32(4, RW(0) + 240); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002E6AA8; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2e6aa8); SET32(5, RW(0) + 1); JP_F_002E7E00(c);
L_002E6AA8:;
SET64(16, RD(0) + RD(0));
SET64(2, RD(0) | 0xffff);
L_002E6AB0:;
SET32(3, RW(16) << 2);
SET32(3, RW(3) + RW(29));
SET32(16, RW(16) + 1);
SET64(3, rd16(c, (RW(3) + 66)));
{ int t = RD(3) != RD(2);  if (t) { POLL(); goto L_002E6AB0; } }
SET64(31, 0x2e6ad4); SET32(4, RW(16) << 2); JP_F_00100530(c);
SET32(6, RW(16) << 2);
wr32(c, (RW(17) + 36), RW(2));
SET64(4, RD(2) + RD(0));
SET64(31, 0x2e6ae8); SET32(5, RW(29) + 64); JP_F_00127218(c);
SET32(2, RW(0) + 4);
SET32(3, RW(0) + 29);
wr16(c, (RW(17) + 24), (u16)RW(2));
SET64(16, RD(17) + RD(0));
SET32(2, RW(0) + 5);
wr32(c, (RW(17) + 20), RW(3));
wr16(c, (RW(17) + 26), (u16)RW(2));
L_002E6B04:;
if (RD(18) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_002E6B20; }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2e6b1c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) + RD(0));
L_002E6B20:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

static void JP_B_002E6B40(Ctx *c, u32 entry) { /* func_002E6B40 */
ENTER(entry);
switch (entry) { case 0x2e6c6c: goto L_002E6C6C; case 0x2e6e68: goto L_002E6E68; }
SET32(29, RW(29) + -240);
SET32(6, RW(0) + 4);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(7, rd16(c, (RW(4) + 4)));
{ int t = RD(7) == RD(6); SET64(18, RD(4) + RD(0)); if (t) goto L_002E7230; }
SET32(5, RW(0) + 3);
if (RD(7) == RD(5)) { SET64(4, (s32)rd32(c, (RW(18) + 72))); goto L_002E71EC; }
SET32(4, RW(0) + 2);
if (RD(7) == RD(4)) { SET64(4, (s32)rd32(c, (RW(18) + 68))); goto L_002E6D70; }
SET32(3, RW(0) + 1);
if (RD(7) == RD(3)) { SET64(4, (s32)rd32(c, (RW(18) + 68))); goto L_002E6C10; }
if (RD(7) == RD(0)) { SET64(6, RD(3) & 0xff); goto L_002E6B9C; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_002E7350;
L_002E6B9C:;
SET64(3, (s32)rd32(c, (RW(18) + 52)));
{ int t = RD(3) == RD(4);  if (t) goto L_002E6BB4; }
{ int t = RD(3) == RD(5);  if (t) goto L_002E6BB4; }
SET64(6, RD(0) + RD(0));
L_002E6BB4:;
{ int t = RD(6) == RD(0);  if (t) goto L_002E734C; }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2e6bd0);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002E734C; }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(6, (s32)rd32(c, (RW(18) + 84)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(7, (s32)rd32(c, (RW(18) + 88)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e6bf4); SET64(5, (s16)rd16(c, (RW(18) + 80))); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 60)));
SET32(4, RW(18) + 4);
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2e6c08); SET32(5, RW(0) + 1); rt_call(c, t); }
 goto L_002E734C;
L_002E6C10:;
SET64(5, (s32)rd32(c, (RW(18) + 92)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e6c24); c->f[12].u = rd32(c, (RW(18) + 96)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e6c38); SET64(17, RD(0) + RD(0)); rt_call(c, t); }
SET32(16, RW(2) + 168);
SET64(2, (s16)rd16(c, (RW(2) + 168)));
SET32(2, RW(2) + -1);
if (RSD(2) >= 0) { SET64(2, (s16)rd16(c, (RW(16) + 4))); goto L_002E6C54; }
SET64(17, RD(2) & 0xffff);
SET64(2, (s16)rd16(c, (RW(16) + 4)));
L_002E6C54:;
SET64(17, RD(17) & 0xffff);
{ int t = RD(2) == RD(17);  if (t) goto L_002E6CA8; }
SET64(2, (s16)rd16(c, (RW(16) + 4)));
L_002E6C64:;
SET64(1, RSD(2) < RSD(17));
{ int t = RD(1) == RD(0);  if (t) goto L_002E6C88; }
if (0) { L_002E6C6C:;  }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2e6c7c); SET32(5, RW(0) + 1); JP_F_00226DE0(c);
 goto L_002E6C98;
L_002E6C88:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2e6c94); SET32(5, RW(0) + 1); JP_F_00226D40(c);
L_002E6C98:;
SET64(2, (s16)rd16(c, (RW(16) + 4)));
if (RD(2) != RD(17)) { SET64(2, (s16)rd16(c, (RW(16) + 4))); { POLL(); goto L_002E6C64; } }
L_002E6CA8:;
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e6cbc); SET64(16, rd16(c, (RW(18) + 76))); rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(2) + 172)));
SET64(4, RD(16) << 48);
SET64(4, RSD(4) >> 48);
SET32(5, RW(2) + 168);
SET32(3, RW(3) + RW(4));
wr16(c, (RW(2) + 172), (u16)RW(3));
SET64(4, (s16)rd16(c, (RW(2) + 168)));
SET64(3, RD(3) << 48);
SET64(3, RSD(3) >> 48);
SET64(2, RSD(3) < RSD(4));
if (RD(2) != RD(0)) { SET64(2, (s16)rd16(c, (RW(5) + 4))); goto L_002E6D24; }
SET64(2, rd8(c, (RW(5) + 8)));
if (RD(2) == RD(0)) { SET32(2, RW(4) + -1); goto L_002E6CFC; }
SET32(2, RW(3) - RW(4));
L_002E6CFC:;
wr16(c, (RW(5) + 4), (u16)RW(2));
SET64(2, rd8(c, (RW(5) + 8)));
if (RD(2) == RD(0)) { SET64(3, (s16)rd16(c, (RW(5) + 0))); goto L_002E6D14; }
SET64(2, RD(0) + RD(0)); goto L_002E6D1C;
L_002E6D14:;
SET64(2, (s16)rd16(c, (RW(5) + 2)));
SET32(2, RW(3) - RW(2));
L_002E6D1C:;
wr16(c, (RW(5) + 6), (u16)RW(2));
SET64(2, (s16)rd16(c, (RW(5) + 4)));
L_002E6D24:;
SET64(4, (s16)rd16(c, (RW(5) + 6)));
SET64(1, RSD(2) < RSD(4));
if (RD(1) == RD(0)) { SET32(3, RW(2) - RW(4)); goto L_002E6D3C; }
wr16(c, (RW(5) + 6), (u16)RW(2)); goto L_002E6D54;
L_002E6D3C:;
SET64(2, (s16)rd16(c, (RW(5) + 2)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(25, (s32)rd32(c, (RW(18) + 60))); goto L_002E6D58; }
SET32(2, RW(4) + 1);
wr16(c, (RW(5) + 6), (u16)RW(2));
L_002E6D54:;
SET64(25, (s32)rd32(c, (RW(18) + 60)));
L_002E6D58:;
SET32(4, RW(18) + 4);
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2e6d68); SET32(5, RW(0) + 2); rt_call(c, t); }
 goto L_002E734C;
L_002E6D70:;
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2e6d80);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002E734C; }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e6d9c);  rt_call(c, t); }
SET64(2, (s16)rd16(c, (RW(2) + 172)));
wr16(c, (RW(18) + 76), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2e6db8);  rt_call(c, t); }
SET64(3, RD(2) << 48);
wr16(c, (RW(18) + 78), (u16)RW(2));
SET64(3, RSD(3) >> 48);
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET32(2, RW(0) + 4); goto L_002E6E28; }
SET64(31, 0x2e6dd8); SET32(4, RW(0) + 92); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002E6DE8; }
SET64(31, 0x2e6de8); SET64(4, RD(16) + RD(0)); JP_F_002E3AF0(c);
L_002E6DE8:;
wr32(c, (RW(18) + 72), RW(16));
SET64(5, rd16(c, (RW(18) + 104)));
SET64(6, (s16)rd16(c, (RW(18) + 106)));
SET64(7, (s32)rd32(c, (RW(18) + 100)));
SET64(31, 0x2e6e00); SET64(4, RD(16) + RD(0)); JP_F_002E3AC0(c);
SET64(5, (s32)rd32(c, (RW(18) + 72)));
SET64(31, 0x2e6e0c); SET32(4, RW(18) + 4); JP_F_0013A470(c);
SET64(25, (s32)rd32(c, (RW(18) + 60)));
SET32(4, RW(18) + 4);
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2e6e20); SET32(5, RW(0) + 3); rt_call(c, t); }
 goto L_002E734C;
L_002E6E28:;
if (RD(3) != RD(2)) { SET64(25, (s32)rd32(c, (RW(18) + 0))); goto L_002E71D0; }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2e6e44);  rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(31, 0x2e6e50); SET32(4, RW(0) + 976); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002E6E64; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2e6e64); SET32(5, RW(0) + 1); JP_F_002BE800(c);
L_002E6E64:;
wr32(c, (RW(18) + 116), RW(17));
L_002E6E68:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 204), RW(2));
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 192), RW(0));
rd128(c, (RW(2) + -28736) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 196), RW(0));
wr32(c, (RW(29) + 200), RW(0));
SET64(2, (s64)(s32)0x4c0000);
wr128(c, (RW(29) + 192) & ~15u, &c->r[3]);
c->f[1].u = rd32(c, (RW(2) + -28760));
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -28756));
wr32(c, (RW(29) + 208), c->f[1].u);
SET64(31, 0x2e6ea4); wr32(c, (RW(29) + 212), c->f[0].u); JP_F_00139590(c);
SET64(17, (s32)rd32(c, (RW(2) + 0)));
SET64(19, rd16(c, (RW(28) + -30220)));
SET64(31, 0x2e6eb4); SET32(4, RW(29) + 128); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(16) << 32);
SET32(2, RW(2) + -32);
SET32(4, RW(29) + 128);
wr32(c, (RW(29) + 144), RW(2));
SET64(5, RSD(5) >> 32);
wr32(c, (RW(29) + 148), RW(0));
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 156), RW(0));
wr16(c, (RW(29) + 160), (u16)RW(0));
SET64(31, 0x2e6ee4); wr16(c, (RW(29) + 162), (u16)RW(0)); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 148)));
SET64(2, RD(19) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 152)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 128);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -32);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(19, RW(3) + RW(5));
SET64(31, 0x2e6f14); wr32(c, (RW(29) + 144), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 128);
SET64(31, 0x2e6f20); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2e6f2c); SET64(5, RD(0) + RD(0)); JP_F_0022CB90(c);
SET64(4, (s32)rd32(c, (RW(18) + 116)));
SET64(8, RD(2) + RD(0));
SET64(10, (s32)rd32(c, (RW(18) + 84)));
SET64(9, RD(19) + RD(0));
SET32(5, RW(29) + 192);
SET32(6, RW(29) + 208);
SET32(7, RW(0) + 1);
SET64(31, 0x2e6f50); SET64(11, RD(0) + RD(0)); JP_F_002BE370(c);
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2e6f64);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 116)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x2e6f78); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET64(31, 0x2e6f80);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 116))); goto L_002E6F94; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(18) + 116)));
L_002E6F94:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 372)));
{ u32 t = RW(25); SET64(31, 0x2e6fa4);  rt_call(c, t); }
SET64(17, rd16(c, (RW(28) + -30220)));
SET64(31, 0x2e6fb0); SET32(4, RW(29) + 80); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(16) << 32);
SET32(2, RW(2) + -32);
SET64(5, RSD(5) >> 32);
wr32(c, (RW(29) + 96), RW(2));
SET32(4, RW(29) + 80);
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
wr32(c, (RW(29) + 108), RW(0));
wr16(c, (RW(29) + 112), (u16)RW(0));
SET64(31, 0x2e6fe0); wr16(c, (RW(29) + 114), (u16)RW(0)); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 100)));
SET64(2, RD(17) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 104)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 80);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -32);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2e7010); wr32(c, (RW(29) + 96), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 80);
SET64(31, 0x2e701c); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET32(3, RW(29) + 216);
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 12); if (t) goto L_002E7044; }
L_002E7028:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002E7028; } }
L_002E7044:;
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2e7058);  rt_call(c, t); }
SET64(2, RD(2) << 48);
SET64(3, RD(16) << 32);
SET64(2, RSD(2) >> 48);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) + 1);
SET64(2, RD(2) & 0xffff);
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 2)));
SET32(2, RW(2) << 1);
SET32(2, RW(3) + RW(2));
wr32(c, (RW(29) + 216), RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2e709c);  rt_call(c, t); }
SET64(2, RD(2) << 48);
SET64(3, RD(16) << 32);
SET64(2, RSD(2) >> 48);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) + 2);
SET32(4, RW(0) + 196);
SET64(2, RD(2) & 0xffff);
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 2)));
SET32(2, RW(2) << 1);
SET32(2, RW(3) + RW(2));
SET64(31, 0x2e70d4); wr32(c, (RW(29) + 220), RW(2)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002E7114; }
SET64(31, 0x2e70e4); SET64(4, RD(16) + RD(0)); JP_F_00228490(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -3136);
SET32(2, RW(2) + -3128);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -3116);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -3056);
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 72), RW(2));
L_002E7114:;
wr32(c, (RW(18) + 112), RW(16));
SET64(4, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(18) + 88)));
SET32(5, RW(29) + 216);
SET64(7, (s16)rd16(c, (RW(18) + 80)));
SET32(8, RW(0) + 1);
SET64(10, (s32)rd32(c, (RW(18) + 84)));
SET64(31, 0x2e7138); SET32(9, RW(0) + 2); JP_F_00225E90(c);
SET64(2, (s32)rd32(c, (RW(18) + 112)));
SET32(5, RW(0) + 1);
SET64(31, 0x2e7148); SET32(4, RW(2) + 168); JP_F_0013BA20(c);
c->f[0].u = rd32(c, (RW(18) + 96));
SET64(3, (s64)(s32)0x42a00000);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 180), RW(3));
wr32(c, (RW(29) + 184), c->f[0].u);
wr32(c, (RW(29) + 188), RW(2));
wr32(c, (RW(29) + 176), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 112)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2e7178); SET32(5, RW(29) + 176); rt_call(c, t); }
SET64(31, 0x2e7180); SET64(4, (s32)rd32(c, (RW(18) + 112))); JP_F_0022A450(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002E7190; }
SET64(31, 0x2e7190); SET64(4, RD(2) + RD(0)); JP_F_0022C390(c);
L_002E7190:;
SET64(31, 0x2e7198);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 112))); goto L_002E71AC; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(18) + 112)));
L_002E71AC:;
SET64(31, 0x2e71b4);  JP_F_0022A3D0(c);
SET64(25, (s32)rd32(c, (RW(18) + 60)));
SET32(4, RW(18) + 4);
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2e71c8); SET32(5, RW(0) + 4); rt_call(c, t); }
 goto L_002E734C;
L_002E71D0:;
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2e71dc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, 0x2e71e4); SET32(4, RW(18) + 4); JP_F_00139AB0(c);
 goto L_002E734C;
L_002E71EC:;
SET64(3, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(3) != RD(6);  if (t) goto L_002E734C; }
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 72), RW(0)); goto L_002E7214; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2e7210); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 72), RW(0));
L_002E7214:;
SET32(4, RW(18) + 4);
SET64(25, (s32)rd32(c, (RW(18) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2e7228); SET32(5, RW(0) + 1); rt_call(c, t); }
 goto L_002E734C;
L_002E7230:;
SET64(4, rd16(c, (RW(18) + 64)));
if (RD(4) != RD(0)) { SET32(3, RW(0) + 1); goto L_002E7290; }
SET64(3, (s32)rd32(c, (RW(18) + 112)));
SET64(3, rd8(c, (RW(3) + 180)));
{ int t = RD(3) == RD(0);  if (t) goto L_002E734C; }
SET64(4, (s32)rd32(c, (RW(18) + 116)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 376)));
{ u32 t = RW(25); SET64(31, 0x2e7260);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 112)));
SET32(4, RW(18) + 4);
SET64(2, (s16)rd16(c, (RW(2) + 184)));
wr16(c, (RW(18) + 108), (u16)RW(2));
SET64(25, (s32)rd32(c, (RW(18) + 60)));
SET64(2, rd16(c, (RW(18) + 64)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2e7288); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002E734C;
L_002E7290:;
{ int t = RD(4) != RD(3);  if (t) goto L_002E734C; }
SET64(4, (s32)rd32(c, (RW(18) + 112)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2e72ac);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002E734C; }
SET64(4, (s32)rd32(c, (RW(18) + 116)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 364)));
{ u32 t = RW(25); SET64(31, 0x2e72c8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002E734C; }
SET64(2, (s16)rd16(c, (RW(18) + 108)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 112))); goto L_002E72FC; }
SET64(25, (s32)rd32(c, (RW(18) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2e72ec); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, 0x2e72f4); SET32(4, RW(18) + 4); JP_F_00139AB0(c);
 goto L_002E734C;
L_002E72FC:;
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 112), RW(0)); goto L_002E7318; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2e7314); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 112), RW(0));
L_002E7318:;
SET64(4, (s32)rd32(c, (RW(18) + 116)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 116), RW(0)); goto L_002E7338; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2e7334); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 116), RW(0));
L_002E7338:;
SET32(4, RW(18) + 4);
SET64(25, (s32)rd32(c, (RW(18) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2e734c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002E734C:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002E7350:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 240); return;
}
void JP_F_002E6B40(Ctx *c) { JP_B_002E6B40(c, 0x2e6b40); }
void JP_F_002E6C6C(Ctx *c) { JP_B_002E6B40(c, 0x2e6c6c); }
void JP_F_002E6E68(Ctx *c) { JP_B_002E6B40(c, 0x2e6e68); }

void JP_F_002E7370(Ctx *c) { /* func_002E7370 */
ENTER(0x2e7370);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002E743C; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 14384);
SET32(2, RW(2) + 14444);
wr32(c, (RW(17) + 0), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 60), RW(2));
SET32(3, RW(3) + 14452);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 14464);
wr32(c, (RW(17) + 24), RW(3));
wr32(c, (RW(17) + 40), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2e73cc);  rt_call(c, t); }
SET32(4, RW(17) + 4);
{ int t = RD(4) == RD(0);  if (t) goto L_002E7404; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31216);
SET32(3, RW(3) + -31208);
wr32(c, (RW(17) + 60), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 24), RW(3));
SET32(2, RW(2) + -31196);
SET64(31, 0x2e7404); wr32(c, (RW(17) + 40), RW(2)); JP_F_00139F30(c);
L_002E7404:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002E7428; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 14544);
wr32(c, (RW(17) + 0), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(25); SET64(31, 0x2e7424); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_002E7428:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002E7440; }
SET64(31, 0x2e743c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002E743C:;
SET64(2, RD(17) + RD(0));
L_002E7440:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E7460(Ctx *c) { /* func_002E7460 */
ENTER(0x2e7460);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2e7478); SET64(4, (s32)rd32(c, (RW(4) + 4))); JP_F_00227430(c);
SET64(2, RD(0) < RD(2));
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002E74A4; }
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e749c);  rt_call(c, t); }
SET64(2, RD(0) < RD(2));
SET64(31, rd64(c, (RW(29) + 16)));
L_002E74A4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E74B0(Ctx *c) { /* func_002E74B0 */
ENTER(0x2e74b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2e74c8); SET64(4, (s32)rd32(c, (RW(4) + 4))); JP_F_00227620(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2e74dc);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E74F0(Ctx *c) { /* func_002E74F0 */
ENTER(0x2e74f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x2e7510); SET64(16, RD(5) + RD(0)); JP_F_00227760(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2e7524); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E7540(Ctx *c) { /* func_002E7540 */
ENTER(0x2e7540);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2e755c); SET64(4, (s32)rd32(c, (RW(4) + 4))); JP_F_00226140(c);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
c->f[20].u = rd32(c, (RW(2) + 164));
SET64(31, 0x2e756c); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_0022A5F0(c);
c->f[2].u = rd32(c, (RW(2) + 0));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(2, (s64)(s32)0x40000000);
c->f[1].u = RW(2);
c->f[0].f = fpu_div(F(20), F(1));
c->f[1].f = fpu_div(F(2), F(1));
SET64(31, 0x2e759c); c->f[20].f = fpu(F(1) - F(0)); JP_F_0022A690(c);
c->f[2].u = rd32(c, (RW(2) + 8));
SET64(3, (s64)(s32)0x40000000);
c->f[0].u = RW(3);
SET64(3, (s64)(s32)0x42000000);
c->f[3].f = fpu(F(2) + F(0));
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[2].u = rd32(c, (RW(2) + 4));
c->f[1].u = RW(3);
c->f[0].f = fpu(F(0) + F(20));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 60), RW(3));
c->f[1].f = fpu(F(2) + F(1));
wr32(c, (RW(29) + 56), c->f[3].u);
wr32(c, (RW(29) + 52), c->f[1].u);
wr32(c, (RW(29) + 48), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x2e75e8); SET32(5, RW(29) + 48); JP_F_0014E980(c);
SET64(31, 0x2e75f0); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_0022A480(c);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
c->f[12].u = c->f[0].u;
SET64(31, 0x2e7600); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e7614);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET32(3, RW(0) + 1);
SET64(4, rd16(c, (RW(5) + 104)));
if (RD(4) == RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002E7680; }
SET32(3, RW(0) + 4);
{ int t = RD(4) == RD(3);  if (t) goto L_002E767C; }
SET64(3, rd8(c, (RW(5) + 180)));
{ int t = RD(3) == RD(0);  if (t) goto L_002E767C; }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2e7650); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET32(3, RW(0) + -1);
SET64(4, (s16)rd16(c, (RW(4) + 184)));
if (RD(4) != RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 36))); goto L_002E766C; }
wr32(c, (RW(16) + 32), RW(0)); goto L_002E767C;
L_002E766C:;
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
SET64(3, rd16(c, (RW(3) + 0)));
wr32(c, (RW(16) + 32), RW(3));
L_002E767C:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002E7680:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E7690(Ctx *c) { /* func_002E7690 */
ENTER(0x2e7690);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2e76a0); SET64(4, (s32)rd32(c, (RW(4) + 4))); JP_F_0022A390(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002E76B0(Ctx *c) { /* func_002E76B0 */
ENTER(0x2e76b0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
wr8(c, (RW(2) + 180), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x2e76e0); c->f[20].u = c->f[12].u; JP_F_0022A690(c);
rd128(c, (RW(2) + 0) & ~15u, &c->r[2]);
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(28) + -31000));
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 68), RW(0));
c->f[3].u = RW(0);
wr32(c, (RW(29) + 76), RW(3));
wr128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 72), c->f[0].u);
wr32(c, (RW(29) + 80), RW(0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 84), RW(0));
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 92), RW(3));
wr128(c, (RW(29) + 80) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 80));
wr32(c, (RW(29) + 108), RW(3));
c->f[1].u = rd32(c, (RW(29) + 84));
c->f[0].u = rd32(c, (RW(29) + 88));
c->f[2].f = fpu(F(2) + F(3));
c->f[1].f = fpu(F(1) + F(3));
c->f[0].f = fpu(F(0) + F(20));
wr32(c, (RW(29) + 96), c->f[2].u);
wr32(c, (RW(29) + 100), c->f[1].u);
wr32(c, (RW(29) + 104), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x2e7750); SET32(5, RW(29) + 96); JP_F_00227290(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x2e775c); SET64(5, RD(16) + RD(0)); JP_F_0022A3D0(c);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002E7780(Ctx *c) { /* func_002E7780 */
ENTER(0x2e7780);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
if (RD(4) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002E779C; }
SET64(31, 0x2e779c); SET32(5, RW(0) + -1); JP_F_002E0E00(c);
L_002E779C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002E77B0(Ctx *c) { /* func_002E77B0 */
ENTER(0x2e77b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
{ int t = RD(3) != RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002E780C; }
SET64(31, 0x2e77d4); SET32(4, RW(0) + 12); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002E77E4; }
SET64(31, 0x2e77e4); SET64(4, RD(16) + RD(0)); JP_F_002E1260(c);
L_002E77E4:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 8);
SET64(31, 0x2e77f4); wr32(c, (RW(17) + 16), RW(16)); JP_F_002E10E0(c);
wr8(c, (RW(29) + 60), (u8)RW(0));
SET32(6, RW(29) + 60);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
SET64(5, (s32)rd32(c, (RW(17) + 20)));
SET64(31, 0x2e780c); SET64(7, RD(0) + RD(0)); JP_F_002E0F80(c);
L_002E780C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E7820(Ctx *c) { /* func_002E7820 */
ENTER(0x2e7820);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_002E7850; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e784c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
L_002E7850:;
SET64(4, (s32)rd32(c, (RW(16) + 12)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 12), RW(0)); goto L_002E7870; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e786c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 12), RW(0));
L_002E7870:;
SET64(4, (s32)rd32(c, (RW(16) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 16), RW(0)); goto L_002E7890; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2e788c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 16), RW(0));
L_002E7890:;
SET64(31, 0x2e7898); SET64(4, (s32)rd32(c, (RW(16) + 36))); JP_F_00100430(c);
wr32(c, (RW(16) + 36), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E78B0(Ctx *c) { /* func_002E78B0 */
ENTER(0x2e78b0);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
SET64(30, RD(7) + RD(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(6) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(5) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2e78f8); SET32(5, RW(0) + -1); JP_F_002E0E00(c);
SET64(4, (s32)rd32(c, (RW(20) + 36)));
SET64(3, RD(0) | 0xffff);
SET64(2, rd16(c, (RW(4) + 2)));
{ int t = RD(2) == RD(3); SET64(19, RD(0) + RD(0)); if (t) goto L_002E7930; }
SET64(5, RD(0) + RD(0));
L_002E7910:;
SET32(5, RW(5) + 4);
SET32(19, RW(19) + 1);
SET32(2, RW(4) + RW(5));
SET64(2, rd16(c, (RW(2) + 2)));
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_002E7910; } }
L_002E7930:;
SET32(2, RW(19) + 1);
SET64(31, 0x2e793c); SET32(4, RW(2) << 2); JP_F_00100530(c);
SET64(4, (s32)rd32(c, (RW(20) + 16)));
SET64(21, RD(2) + RD(0));
SET64(31, 0x2e794c); SET64(5, RD(0) + RD(0)); JP_F_002E0CD0(c);
wr32(c, (RW(29) + 188), RW(2));
{ int t = RD(19) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_002E79B0; }
SET64(17, RD(21) + RD(0));
L_002E795C:;
SET64(16, rd16(c, (RW(28) + -30220)));
SET32(4, RW(29) + 188);
SET64(31, 0x2e796c); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET32(4, RW(29) + 188);
SET64(31, 0x2e7978); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(5, RD(16) + RD(0));
SET64(31, 0x2e7984); SET32(4, RW(29) + 188); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2e7990); SET32(4, RW(29) + 184); JP_F_002C9510(c);
SET64(5, RD(18) & 0xffff);
SET64(31, 0x2e799c); SET32(4, RW(29) + 184); JP_F_002C94F0(c);
wr32(c, (RW(17) + 0), RW(2));
SET32(18, RW(18) + 1);
SET64(2, RD(18) < RD(19));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002E795C; } }
L_002E79B0:;
SET32(2, RW(19) << 2);
SET32(2, RW(21) + RW(2));
SET32(6, RW(0) + 1);
wr32(c, (RW(2) + 0), RW(0));
SET64(9, RD(30) + RD(0));
SET64(4, (s32)rd32(c, (RW(20) + 4)));
SET64(10, RD(23) + RD(0));
SET64(5, RD(22) + RD(0));
SET64(7, RD(21) + RD(0));
SET64(31, 0x2e79dc); SET64(8, RD(6) + RD(0)); JP_F_00227E50(c);
wr32(c, (RW(29) + 176), RW(0));
wr32(c, (RW(29) + 180), RW(0));
SET64(4, (s32)rd32(c, (RW(20) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x2e79f8); SET32(5, RW(29) + 176); rt_call(c, t); }
SET64(2, (s16)rd16(c, (RW(20) + 24)));
SET64(4, (s32)rd32(c, (RW(20) + 4)));
SET32(2, RW(2) + 1);
SET64(31, 0x2e7a0c); SET64(5, RD(2) & 0xffff); JP_F_00226F40(c);
SET64(2, (s64)(s32)0x42000000);
wr32(c, (RW(29) + 168), RW(0));
wr32(c, (RW(29) + 172), RW(2));
SET64(4, (s32)rd32(c, (RW(20) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2e7a2c); SET32(5, RW(29) + 168); rt_call(c, t); }
SET64(31, 0x2e7a34); SET64(4, (s32)rd32(c, (RW(20) + 4))); JP_F_0022A450(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(20) + 4))); goto L_002E7A48; }
SET64(31, 0x2e7a44); SET64(4, RD(2) + RD(0)); JP_F_0022C390(c);
SET64(4, (s32)rd32(c, (RW(20) + 4)));
L_002E7A48:;
SET64(31, 0x2e7a50);  JP_F_0022A450(c);
if (RD(2) == RD(0)) { SET64(4, RD(21) + RD(0)); goto L_002E7A64; }
SET64(31, 0x2e7a60); SET64(4, RD(2) + RD(0)); JP_F_0022C2D0(c);
SET64(4, RD(21) + RD(0));
L_002E7A64:;
SET64(31, 0x2e7a6c);  JP_F_00100430(c);
SET64(31, 0x2e7a74); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002E7A84; }
SET64(31, 0x2e7a84); SET64(4, RD(16) + RD(0)); JP_F_00150480(c);
L_002E7A84:;
wr32(c, (RW(20) + 12), RW(16));
SET64(31, 0x2e7a90); SET64(4, (s32)rd32(c, (RW(20) + 4))); JP_F_0022A420(c);
SET64(31, 0x2e7a98); SET64(16, (s32)rd32(c, (RW(2) + 72))); JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2e7aa4); SET32(5, RW(0) + 8); JP_F_0022CB50(c);
SET64(4, (s32)rd32(c, (RW(20) + 12)));
SET64(5, RD(2) + RD(0));
SET64(6, RD(16) + RD(0));
SET32(7, RW(0) + -1);
SET64(31, 0x2e7abc); SET64(8, RD(0) + RD(0)); JP_F_0014F9B0(c);
SET64(31, 0x2e7ac4); SET32(4, RW(0) + 384); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002E7AD8; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2e7ad8); SET32(5, RW(0) + 1); JP_F_0014E610(c);
L_002E7AD8:;
wr32(c, (RW(20) + 8), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2e7aec); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(20) + 12)));
SET64(2, RD(22) << 48);
SET64(3, (s32)rd32(c, (RW(20) + 8)));
SET64(2, RSD(2) >> 48);
c->f[0].u = RW(0);
wr32(c, (RW(3) + 160), RW(4));
SET64(3, (s32)rd32(c, (RW(20) + 8)));
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 172), RW(0)); if (t) goto L_002E7B18; }
SET64(2, (s32)rd32(c, (RW(20) + 8))); goto L_002E7B24;
L_002E7B18:;
SET64(2, (s64)(s32)0x41c00000);
c->f[0].u = RW(2);
SET64(2, (s32)rd32(c, (RW(20) + 8)));
L_002E7B24:;
wr32(c, (RW(2) + 176), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(20) + 12)));
SET64(2, rd16(c, (RW(2) + 52)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002E7B44; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002E7B5C;
L_002E7B44:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002E7B5C:;
SET64(2, (s32)rd32(c, (RW(20) + 8)));
wr32(c, (RW(2) + 180), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(20) + 12)));
SET64(3, (s32)rd32(c, (RW(20) + 8)));
SET64(2, rd16(c, (RW(2) + 54)));
c->f[0].u = rd32(c, (RW(3) + 176));
SET32(2, RW(2) >> 1);
c->f[1].u = RW(2);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(3) + 184), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(20) + 12)));
SET64(2, rd16(c, (RW(2) + 52)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002E7BA8; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002E7BC0;
L_002E7BA8:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002E7BC0:;
SET64(2, (s32)rd32(c, (RW(20) + 8)));
c->f[12].u = RW(0);
wr32(c, (RW(2) + 164), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(20) + 12)));
SET64(2, (s32)rd32(c, (RW(20) + 8)));
SET64(3, rd16(c, (RW(3) + 54)));
SET32(3, RW(3) >> 1);
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(2) + 168), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(20) + 8)));
SET64(31, 0x2e7bf8); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(20) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2e7c0c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(20) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2e7c20);  rt_call(c, t); }
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
SET32(29, RW(29) + 192); return;
}

void JP_F_002E7C50(Ctx *c) { /* func_002E7C50 */
ENTER(0x2e7c50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002E7DE4; }
SET64(2, (s64)(s32)0x4e0000);
SET64(8, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 14608);
SET64(7, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 0), RW(2));
SET64(6, (s64)(s32)0x4e0000);
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(8, RW(8) + 14692);
SET64(5, (s64)(s32)0x4e0000);
SET32(7, RW(7) + 14700);
SET32(6, RW(6) + 14712);
SET32(5, RW(5) + 14772);
wr32(c, (RW(3) + 56), RW(8));
SET32(2, RW(17) + 40);
SET64(3, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(3) + 20), RW(7));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(3) + 36), RW(6));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(3) + 72), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 196), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2e7cd8);  rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_002E7CF8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 14544);
wr32(c, (RW(17) + 0), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(25); SET64(31, 0x2e7cf8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_002E7CF8:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_002E7DD0; }
SET32(4, RW(17) + 40);
{ int t = RD(4) == RD(0);  if (t) goto L_002E7DCC; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -2672);
SET32(2, RW(2) + -2664);
wr32(c, (RW(17) + 96), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 60), RW(2));
SET32(3, RW(3) + -2652);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -2592);
wr32(c, (RW(17) + 76), RW(3));
SET64(31, 0x2e7d40); wr32(c, (RW(17) + 112), RW(2)); JP_F_00228260(c);
SET32(4, RW(17) + 40);
{ int t = RD(4) == RD(0);  if (t) goto L_002E7DCC; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -2368);
SET32(2, RW(2) + -2360);
wr32(c, (RW(17) + 96), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 60), RW(2));
SET32(3, RW(3) + -2348);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -2288);
wr32(c, (RW(17) + 76), RW(3));
SET64(31, 0x2e7d80); wr32(c, (RW(17) + 112), RW(2)); JP_F_00229F40(c);
SET32(4, RW(17) + 40);
{ int t = RD(4) == RD(0);  if (t) goto L_002E7DCC; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -2176);
SET32(2, RW(2) + -2168);
wr32(c, (RW(17) + 96), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 60), RW(2));
SET32(3, RW(3) + -2156);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -2096);
wr32(c, (RW(17) + 76), RW(3));
SET64(31, 0x2e7dc0); wr32(c, (RW(17) + 112), RW(2)); JP_F_0022AC80(c);
SET32(4, RW(17) + 40);
SET64(31, 0x2e7dcc); SET64(5, RD(0) + RD(0)); JP_F_0022AEA0(c);
L_002E7DCC:;
SET64(2, RD(16) << 48);
L_002E7DD0:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002E7DE8; }
SET64(31, 0x2e7de4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002E7DE4:;
SET64(2, RD(17) + RD(0));
L_002E7DE8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E7E00(Ctx *c) { /* func_002E7E00 */
ENTER(0x2e7e00);
SET32(29, RW(29) + -32);
SET64(2, RD(5) << 48);
wr64(c, (RW(29) + 16), RD(31));
SET64(2, RSD(2) >> 48);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002E7E28; }
SET32(4, RW(16) + 40);
SET64(31, 0x2e7e28); wr32(c, (RW(16) + 4), RW(4)); JP_F_00228490(c);
L_002E7E28:;
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 14544);
SET64(8, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 0), RW(3));
SET32(2, RW(2) + 14608);
wr32(c, (RW(16) + 0), RW(2));
SET64(7, (s64)(s32)0x4e0000);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET32(8, RW(8) + 14692);
SET64(6, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x4e0000);
SET32(7, RW(7) + 14700);
SET32(6, RW(6) + 14712);
wr32(c, (RW(4) + 56), RW(8));
SET32(5, RW(5) + 14772);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET32(3, RW(16) + 40);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(4) + 20), RW(7));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
wr32(c, (RW(4) + 36), RW(6));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
wr32(c, (RW(4) + 72), RW(5));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 196), RW(3));
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 12), RW(0));
wr32(c, (RW(16) + 16), RW(0));
wr32(c, (RW(16) + 36), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E7EC0(Ctx *c) { /* func_002E7EC0 */
ENTER(0x2e7ec0);
 return;
}

void JP_F_002E7ED0(Ctx *c) { /* func_002E7ED0 */
ENTER(0x2e7ed0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2e7ee8);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002E7F00(Ctx *c) { /* func_002E7F00 */
ENTER(0x2e7f00);
SET64(2, (s32)rd32(c, (RW(4) + 32))); return;
}

void JP_F_002E7F10(Ctx *c) { /* func_002E7F10 */
ENTER(0x2e7f10);
SET64(2, (s32)rd32(c, (RW(4) + 4))); return;
}

void JP_F_002E7F20(Ctx *c) { /* func_002E7F20 */
ENTER(0x2e7f20);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2e7f34); SET64(5, RD(0) + RD(0)); JP_F_002E0CD0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002E7F40(Ctx *c) { /* func_002E7F40 */
ENTER(0x2e7f40);
SET64(2, (s16)rd16(c, (RW(4) + 26))); return;
}

void JP_F_002E7F50(Ctx *c) { /* func_002E7F50 */
ENTER(0x2e7f50);
 return;
}

void JP_F_002E7F60(Ctx *c) { /* func_002E7F60 */
ENTER(0x2e7f60);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -20920); return;
}

void JP_F_002E7F70(Ctx *c) { /* func_002E7F70 */
ENTER(0x2e7f70);
SET64(25, (s32)rd32(c, (RW(4) + 192)));
SET32(4, RW(4) + -44);
SET32(4, RW(4) + RW(25)); { JP_F_002E7C50(c); return; }
}

void JP_F_002E7F80(Ctx *c) { /* func_002E7F80 */
ENTER(0x2e7f80);
SET64(25, (s32)rd32(c, (RW(4) + 172)));
SET32(4, RW(4) + -64);
SET32(4, RW(4) + RW(25)); { JP_F_002E7C50(c); return; }
}

void JP_F_002E7F90(Ctx *c) { /* func_002E7F90 */
ENTER(0x2e7f90);
SET64(25, (s32)rd32(c, (RW(4) + 136)));
SET32(4, RW(4) + -100);
SET32(4, RW(4) + RW(25)); { JP_F_002E7C50(c); return; }
}

void JP_F_002E7FA0(Ctx *c) { /* func_002E7FA0 */
ENTER(0x2e7fa0);
SET64(25, (s32)rd32(c, (RW(4) + 196)));
SET32(4, RW(4) + -40);
SET32(4, RW(4) + RW(25)); { JP_F_002E7540(c); return; }
}

void JP_F_002E7FB0(Ctx *c) { /* func_002E7FB0 */
ENTER(0x2e7fb0);
SET64(25, (s32)rd32(c, (RW(4) + 196)));
SET32(4, RW(4) + -40);
SET32(4, RW(4) + RW(25)); { JP_F_002E7F50(c); return; }
}

void JP_F_002E7FC0(Ctx *c) { /* func_002E7FC0 */
ENTER(0x2e7fc0);
SET64(25, (s32)rd32(c, (RW(4) + 196)));
SET32(4, RW(4) + -40);
SET32(4, RW(4) + RW(25)); { JP_F_002E7F60(c); return; }
}

void JP_F_002E7FD0(Ctx *c) { /* func_002E7FD0 */
ENTER(0x2e7fd0);
SET64(25, (s32)rd32(c, (RW(4) + 196)));
SET32(4, RW(4) + -40);
SET32(4, RW(4) + RW(25)); { JP_F_002E7460(c); return; }
}

void JP_F_002E7FE0(Ctx *c) { /* func_002E7FE0 */
ENTER(0x2e7fe0);
SET64(25, (s32)rd32(c, (RW(4) + 196)));
SET32(4, RW(4) + -40);
SET32(4, RW(4) + RW(25)); { JP_F_002E74B0(c); return; }
}

void JP_F_002E7FF0(Ctx *c) { /* func_002E7FF0 */
ENTER(0x2e7ff0);
SET64(25, (s32)rd32(c, (RW(4) + 196)));
SET32(4, RW(4) + -40);
SET32(4, RW(4) + RW(25)); { JP_F_002E74F0(c); return; }
}

void JP_F_002E8000(Ctx *c) { /* func_002E8000 */
ENTER(0x2e8000);
SET64(25, (s32)rd32(c, (RW(4) + 196)));
SET32(4, RW(4) + -40);
SET32(4, RW(4) + RW(25)); { JP_F_002E7C50(c); return; }
}

void JP_F_002E8010(Ctx *c) { /* func_002E8010 */
ENTER(0x2e8010);
SET32(4, RW(4) + -8); { JP_F_002E7370(c); return; }
}

void JP_F_002E8020(Ctx *c) { /* func_002E8020 */
ENTER(0x2e8020);
SET32(4, RW(4) + -28); { JP_F_002E7370(c); return; }
}

void JP_F_002E8030(Ctx *c) { /* func_002E8030 */
ENTER(0x2e8030);
SET32(4, RW(4) + -4); { JP_F_002E6880(c); return; }
}

void JP_F_002E8040(Ctx *c) { /* func_002E8040 */
ENTER(0x2e8040);
SET32(4, RW(4) + -4); { JP_F_002E6890(c); return; }
}

void JP_F_002E8050(Ctx *c) { /* func_002E8050 */
ENTER(0x2e8050);
SET32(4, RW(4) + -4); { JP_F_002E6B40(c); return; }
}

void JP_F_002E8060(Ctx *c) { /* func_002E8060 */
ENTER(0x2e8060);
SET32(4, RW(4) + -4); { JP_F_002E7370(c); return; }
}

void JP_F_002E8070(Ctx *c) { /* func_002E8070 */
ENTER(0x2e8070);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
SET64(2, RD(4) + RD(0));
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]);
SET64(3, (s32)rd32(c, (RW(5) + 16)));
wr32(c, (RW(4) + 16), RW(3));
c->f[2].u = rd32(c, (RW(5) + 20));
c->f[1].u = rd32(c, (RW(5) + 24));
c->f[0].u = rd32(c, (RW(5) + 28));
wr32(c, (RW(4) + 20), c->f[2].u);
wr32(c, (RW(4) + 24), c->f[1].u);
wr32(c, (RW(4) + 28), c->f[0].u);
rd128(c, (RW(5) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 48) & ~15u, &c->r[3]); return;
}

void JP_F_002E80B0(Ctx *c) { /* func_002E80B0 */
ENTER(0x2e80b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002E811C; }
SET64(5, (s64)(s32)0x180000);
SET32(4, RW(17) + 48);
SET32(5, RW(5) + -29088);
SET32(6, RW(0) + 64);
SET64(31, 0x2e80e4); SET32(7, RW(0) + 2); JP_F_00102360(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002E8108; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + 6112);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2e8104); wr32(c, (RW(17) + 32), RW(2)); JP_F_002B5FF0(c);
SET64(2, RD(16) << 48);
L_002E8108:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002E8120; }
SET64(31, 0x2e811c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002E811C:;
SET64(2, RD(17) + RD(0));
L_002E8120:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E8140(Ctx *c) { /* func_002E8140 */
ENTER(0x2e8140);
wr32(c, (RW(4) + 0), RW(0));
SET64(5, (s64)(s32)0xbf800000);
wr32(c, (RW(4) + 4), RW(5));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3)); return;
}

void JP_F_002E8160(Ctx *c) { /* func_002E8160 */
ENTER(0x2e8160);
SET32(29, RW(29) + -16);
SET64(5, (s32)rd32(c, (RW(5) + 44)));
c->f[0].u = rd32(c, (RW(28) + -30996));
SET64(3, (s32)rd32(c, (RW(28) + -29872)));
rd128(c, (RW(5) + 48) & ~15u, &c->r[5]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[5]);
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 4), c->f[0].u); if (t) goto L_002E81CC; }
SET64(6, (s32)rd32(c, (RW(3) + 680)));
if (RD(6) == RD(0)) { wr32(c, (RW(4) + 0), RW(0)); goto L_002E81D0; }
SET64(5, rd16(c, (RW(3) + 0)));
SET32(3, RW(0) + 4);
{ int t = RD(5) != RD(3);  if (t) goto L_002E81CC; }
SET64(6, rd16(c, (RW(6) + 464)));
SET64(3, (s64)(s32)0x4c0000);
SET32(3, RW(3) + -20912);
SET32(5, RW(6) << 1);
SET32(5, RW(5) + RW(6));
SET32(5, RW(5) << 2);
SET32(3, RW(3) + RW(5));
SET64(3, (s16)rd16(c, (RW(3) + 6)));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 4), c->f[0].u);
L_002E81CC:;
wr32(c, (RW(4) + 0), RW(0));
L_002E81D0:;
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3));
rd128(c, (RW(29) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]);
SET32(29, RW(29) + 16); return;
}

void JP_F_002E81F0(Ctx *c) { /* func_002E81F0 */
ENTER(0x2e81f0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(0) + 62);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(2, RW(4) + RW(2));
wr16(c, (RW(2) + -30828), (u16)RW(5));
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x10000);
SET64(16, RD(4) + RD(0));
SET32(2, RW(4) + RW(2));
SET64(31, 0x2e8224); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(16) + 128);
SET32(2, RW(16) + RW(2));
SET32(5, RW(0) + 1130);
wr16(c, (RW(2) + -30196), (u16)RW(0));
c->f[12].u = RW(0);
SET64(31, 0x2e8244); SET64(6, RD(0) + RD(0)); JP_F_00159D50(c);
SET32(3, RW(0) + 1);
SET64(4, (s64)(s32)0x10000);
wr8(c, (RW(16) + 2240), (u8)RW(3));
SET32(4, RW(16) + RW(4));
wr8(c, (RW(16) + 2241), (u8)RW(0));
SET64(3, (s64)(s32)0x10000);
wr8(c, (RW(4) + -30448), (u8)RW(0));
SET32(3, RW(16) + RW(3));
wr32(c, (RW(3) + -30444), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E8280(Ctx *c) { /* func_002E8280 */
ENTER(0x2e8280);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 32), RD(31));
SET32(2, RW(4) + RW(2));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(1, RD(0) | 0x87b0);
c->f[21].u = rd32(c, (RW(2) + -30740));
SET32(4, RW(16) + RW(1));
c->f[20].u = RW(3);
SET64(31, 0x2e82bc); SET32(5, RW(0) + 1); JP_F_003231C0(c);
if (RD(2) == RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002E82D4; }
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7544));
c->f[20].f = fpu(F(20) * F(0));
SET64(3, (s64)(s32)0x10000);
L_002E82D4:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(2, RD(3) + RD(0));
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
c->f[1].u = rd32(c, (RW(3) + -30264));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[0].u = rd32(c, (RW(2) + -30260));
c->f[1].f = fpu(F(1) * F(21));
c->f[1].f = fpu(F(1) * F(20));
c->f[0].f = fpu(F(0) * F(1));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void JP_F_002E8310(Ctx *c) { /* func_002E8310 */
ENTER(0x2e8310);
SET32(29, RW(29) + -48);
SET64(1, RD(0) | 0x87b0);
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(0) + 1);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2e8330); SET32(4, RW(16) + RW(1)); JP_F_003231A0(c);
SET64(1, RD(0) | 0x87b0);
SET32(5, RW(0) + 2);
SET64(31, 0x2e8340); SET32(4, RW(16) + RW(1)); JP_F_003231A0(c);
SET64(1, RD(0) | 0x87b0);
SET32(5, RW(0) + 3);
SET64(31, 0x2e8350); SET32(4, RW(16) + RW(1)); JP_F_003231A0(c);
SET64(2, (s64)(s32)0x3f800000);
SET64(1, RD(0) | 0x87b0);
wr32(c, (RW(29) + 44), RW(2));
SET32(4, RW(16) + RW(1));
wr32(c, (RW(29) + 32), RW(0));
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(29) + 36), RW(0));
SET32(2, RW(16) + RW(2));
wr32(c, (RW(29) + 40), RW(0));
SET32(5, RW(0) + 2);
rd128(c, (RW(29) + 32) & ~15u, &c->r[3]);
SET64(31, 0x2e8384); wr128(c, (RW(2) + -30880) & ~15u, &c->r[3]); JP_F_003231A0(c);
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 4128))); goto L_002E83AC; }
SET64(2, (s32)rd32(c, (RW(2) + 680)));
{ int t = RD(2) == RD(0);  if (t) goto L_002E83A8; }
SET64(5, rd16(c, (RW(2) + 464)));
SET64(31, 0x2e83a8); SET64(4, RD(16) + RD(0)); JP_F_002EEC20(c);
L_002E83A8:;
SET64(4, (s32)rd32(c, (RW(16) + 4128)));
L_002E83AC:;
if (RD(4) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 404))); goto L_002E83C0; }
SET64(31, 0x2e83bc); SET64(5, RD(0) + RD(0)); JP_F_0016FF90(c);
SET64(25, (s32)rd32(c, (RW(16) + 404)));
L_002E83C0:;
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x2e83d4); SET32(4, RW(16) + 128); rt_call(c, t); }
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2e83e0); SET32(4, RW(16) + RW(1)); JP_F_00323220(c);
SET64(31, 0x2e83e8); SET32(4, RW(16) + 128); JP_F_001E8FF0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E8400(Ctx *c) { /* func_002E8400 */
ENTER(0x2e8400);
SET32(29, RW(29) + -16);
SET64(1, RD(0) | 0x87b0);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2e8414); SET32(4, RW(4) + RW(1)); JP_F_00323A40(c);
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x41100000);
c->f[3].u = rd32(c, (RW(2) + -4792));
c->f[2].u = RW(3);
c->f[0].f = fpu_div(F(0), F(3));
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->f[0].f = fpu(F(2) * F(0));
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_002E8458; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
SET64(31, rd64(c, (RW(29) + 0))); goto L_002E8470;
L_002E8458:;
SET64(3, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
SET64(2, RD(2) | RD(3));
SET64(31, rd64(c, (RW(29) + 0)));
L_002E8470:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002E8480(Ctx *c) { /* func_002E8480 */
ENTER(0x2e8480);
SET32(29, RW(29) + -16);
SET64(1, RD(0) | 0x87b0);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2e8494); SET32(4, RW(4) + RW(1)); JP_F_00323A40(c);
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x41100000);
c->f[3].u = rd32(c, (RW(2) + -4792));
c->f[2].u = RW(3);
c->f[0].f = fpu_div(F(0), F(3));
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->f[0].f = fpu(F(2) * F(0));
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_002E84D8; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
SET64(31, rd64(c, (RW(29) + 0))); goto L_002E84F0;
L_002E84D8:;
SET64(3, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
SET64(2, RD(2) | RD(3));
SET64(31, rd64(c, (RW(29) + 0)));
L_002E84F0:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002E8500(Ctx *c) { /* func_002E8500 */
ENTER(0x2e8500);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 32), RD(31));
SET32(2, RW(4) + RW(2));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + -30860)));
{ int t = RD(2) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002E8558; }
SET64(4, RD(5) + RD(0));
SET64(5, RD(6) + RD(0));
SET64(6, RD(7) + RD(0));
SET64(31, 0x2e853c); SET64(7, RD(8) + RD(0)); JP_F_002E8660(c);
SET64(5, RD(2) << 48);
SET64(5, RSD(5) >> 48);
if (RSD(5) <= 0) { SET64(2, RD(16) + RD(0)); goto L_002E855C; }
SET64(31, 0x2e8554); SET64(4, RD(17) + RD(0)); JP_F_002E8800(c);
SET64(16, RD(2) + RD(0));
L_002E8558:;
SET64(2, RD(16) + RD(0));
L_002E855C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E8570(Ctx *c) { /* func_002E8570 */
ENTER(0x2e8570);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 48), RD(31));
SET32(2, RW(4) + RW(2));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(9) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + -30864)));
{ int t = RD(2) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002E85D4; }
SET64(4, RD(5) + RD(0));
SET64(5, RD(6) + RD(0));
SET64(6, RD(7) + RD(0));
SET64(31, 0x2e85b4); SET64(7, RD(8) + RD(0)); JP_F_002E8660(c);
SET64(5, RD(2) << 48);
SET64(5, RSD(5) >> 48);
if (RSD(5) <= 0) { SET64(2, RD(16) + RD(0)); goto L_002E85D8; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x2e85d0); SET64(6, RD(17) + RD(0)); JP_F_002E8920(c);
SET64(16, RD(2) + RD(0));
L_002E85D4:;
SET64(2, RD(16) + RD(0));
L_002E85D8:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E85F0(Ctx *c) { /* func_002E85F0 */
ENTER(0x2e85f0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(4, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, RD(6) + RD(0));
SET64(17, RD(9) + RD(0));
SET64(6, RD(7) + RD(0));
SET64(16, RD(0) + RD(0));
SET64(31, 0x2e8624); SET64(7, RD(8) + RD(0)); JP_F_002E8660(c);
SET64(5, RD(2) << 48);
SET64(5, RSD(5) >> 48);
if (RSD(5) <= 0) { SET64(2, RD(16) + RD(0)); goto L_002E8648; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x2e8640); SET64(6, RD(17) + RD(0)); JP_F_002E8CB0(c);
SET64(16, RD(2) + RD(0));
SET64(2, RD(16) + RD(0));
L_002E8648:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E8660(Ctx *c) { /* func_002E8660 */
ENTER(0x2e8660);
SET32(29, RW(29) + -48);
SET64(3, RD(4) << 48);
wr64(c, (RW(29) + 16), RD(31));
SET64(3, RSD(3) >> 48);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RSD(3) > 0; SET64(16, RD(0) + RD(0)); if (t) goto L_002E8688; }
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET64(3, RD(5) << 48); goto L_002E8698; }
L_002E8688:;
SET32(2, RW(16) + 1);
wr16(c, (RW(29) + 40), (u16)RW(4));
SET64(16, RD(2) & 0xffff);
SET64(3, RD(5) << 48);
L_002E8698:;
SET64(3, RSD(3) >> 48);
if (RSD(3) > 0) { SET64(3, RD(16) & 0xffff); goto L_002E86B4; }
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET64(3, RD(6) << 48); goto L_002E86CC; }
SET64(3, RD(16) & 0xffff);
L_002E86B4:;
SET32(2, RW(16) + 1);
SET32(3, RW(3) << 1);
SET64(16, RD(2) & 0xffff);
SET32(2, RW(3) + RW(29));
wr16(c, (RW(2) + 40), (u16)RW(5));
SET64(3, RD(6) << 48);
L_002E86CC:;
SET64(3, RSD(3) >> 48);
if (RSD(3) > 0) { SET64(3, RD(16) & 0xffff); goto L_002E86E8; }
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET64(3, RD(7) << 48); goto L_002E8700; }
SET64(3, RD(16) & 0xffff);
L_002E86E8:;
SET32(2, RW(16) + 1);
SET32(3, RW(3) << 1);
SET64(16, RD(2) & 0xffff);
SET32(2, RW(3) + RW(29));
wr16(c, (RW(2) + 40), (u16)RW(6));
SET64(3, RD(7) << 48);
L_002E8700:;
SET64(3, RSD(3) >> 48);
if (RSD(3) > 0) { SET64(3, RD(16) & 0xffff); goto L_002E871C; }
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_002E8734; }
SET64(3, RD(16) & 0xffff);
L_002E871C:;
SET32(2, RW(16) + 1);
SET32(3, RW(3) << 1);
SET64(16, RD(2) & 0xffff);
SET32(2, RW(3) + RW(29));
wr16(c, (RW(2) + 40), (u16)RW(7));
SET64(2, RD(0) + RD(0));
L_002E8734:;
if (RD(16) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002E8764; }
SET64(31, 0x2e8744);  JP_F_001953A0(c);
SET64(3, RD(16) & 0xffff);
div_u(c, 0, RW(2), RW(3));
SET64(2, c->hi.d[0]);
SET64(2, RD(2) & 0xffff);
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(29));
SET64(2, (s16)rd16(c, (RW(2) + 40)));
SET64(31, rd64(c, (RW(29) + 16)));
L_002E8764:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E8770(Ctx *c) { /* func_002E8770 */
ENTER(0x2e8770);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x10000);
wr64(c, (RW(29) + 16), RD(31));
SET32(3, RW(4) + RW(3));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(3) + -30860)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002E87AC; }
SET64(5, RD(0) + RD(0));
SET64(31, 0x2e87a0); SET32(6, RW(0) + 250); JP_F_001B72C0(c);
SET64(31, 0x2e87a8); SET32(4, RW(16) + 128); JP_F_001589E0(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_002E87AC:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E87C0(Ctx *c) { /* func_002E87C0 */
ENTER(0x2e87c0);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x10000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(4) + RW(3));
SET64(4, (s32)rd32(c, (RW(3) + -30864)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002E87EC; }
SET64(5, RD(0) + RD(0));
SET64(31, 0x2e87e8); SET32(6, RW(0) + 250); JP_F_001B72C0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_002E87EC:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002E8800(Ctx *c) { /* func_002E8800 */
ENTER(0x2e8800);
SET32(29, RW(29) + -192);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 64), RD(31));
SET32(2, RW(4) + RW(2));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(2) + -30860)));
{ int t = RD(2) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002E88F4; }
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
{ int t = RD(2) == RD(0);  if (t) goto L_002E8848; }
SET64(16, (s32)rd32(c, (RW(2) + 668))); goto L_002E8854;
L_002E8848:;
SET64(31, 0x2e8850);  JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 8)));
L_002E8854:;
SET64(5, (s32)rd32(c, (RW(19) + 44)));
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(19) + RW(2));
wr32(c, (RW(29) + 188), RW(3));
wr32(c, (RW(29) + 176), RW(0));
wr32(c, (RW(29) + 180), RW(0));
wr32(c, (RW(29) + 184), RW(0));
rd128(c, (RW(5) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 176) & ~15u, &c->r[3]);
SET64(17, (s32)rd32(c, (RW(2) + -30860)));
SET64(31, 0x2e8888); SET32(4, RW(29) + 80); JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[2]);
SET32(6, RW(29) + 80);
SET32(4, RW(29) + 144);
SET32(5, RW(29) + 176);
wr128(c, (RW(29) + 80) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[2]);
SET64(31, 0x2e88b8); wr128(c, (RW(29) + 128) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 160), RW(0));
wr32(c, (RW(29) + 172), RW(2));
SET64(4, RD(17) + RD(0));
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET64(5, RD(18) + RD(0));
wr32(c, (RW(29) + 164), RW(0));
SET32(6, RW(29) + 160);
wr32(c, (RW(29) + 168), RW(0));
SET64(31, 0x2e88e4); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); JP_F_001F0790(c);
SET64(16, RD(2) + RD(0));
SET64(5, RD(18) & 0xffff);
SET64(31, 0x2e88f4); SET32(4, RW(19) + 128); JP_F_00158A80(c);
L_002E88F4:;
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 192); return;
}

void JP_F_002E8920(Ctx *c) { /* func_002E8920 */
ENTER(0x2e8920);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
{ int t = RD(4) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002E895C; }
if (RD(6) == RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002E8960; }
SET64(5, RD(16) + RD(0));
SET64(31, 0x2e895c); SET64(6, RD(18) + RD(0)); JP_F_002FAAB0(c);
L_002E895C:;
SET64(2, (s64)(s32)0x10000);
L_002E8960:;
SET32(2, RW(16) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30864)));
if (RD(2) == RD(0)) { SET64(2, RD(17) + RD(0)); goto L_002E8A10; }
SET64(6, (s32)rd32(c, (RW(28) + -29872)));
SET64(2, (s64)(s32)0x10000);
SET64(5, (s32)rd32(c, (RW(16) + 44)));
SET32(2, RW(16) + RW(2));
SET64(3, (s64)(s32)0x3f800000);
SET64(16, (s32)rd32(c, (RW(6) + 668)));
wr32(c, (RW(29) + 172), RW(3));
wr32(c, (RW(29) + 160), RW(0));
wr32(c, (RW(29) + 164), RW(0));
wr32(c, (RW(29) + 168), RW(0));
rd128(c, (RW(5) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[3]);
SET64(17, (s32)rd32(c, (RW(2) + -30864)));
SET64(31, 0x2e89ac); SET32(4, RW(29) + 64); JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[2]);
SET32(6, RW(29) + 64);
SET32(4, RW(29) + 128);
SET32(5, RW(29) + 160);
wr128(c, (RW(29) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[2]);
SET64(31, 0x2e89dc); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 156), RW(2));
SET64(4, RD(17) + RD(0));
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
SET64(5, RD(18) + RD(0));
wr32(c, (RW(29) + 148), RW(0));
SET32(6, RW(29) + 144);
wr32(c, (RW(29) + 152), RW(0));
SET64(31, 0x2e8a08); wr128(c, (RW(29) + 144) & ~15u, &c->r[2]); JP_F_001F0790(c);
SET64(17, RD(2) + RD(0));
SET64(2, RD(17) + RD(0));
L_002E8A10:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_002E8A30(Ctx *c) { /* func_002E8A30 */
ENTER(0x2e8a30);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(3) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(3, RW(4) + RW(3));
SET32(2, RW(4) + RW(2));
SET64(3, (s16)rd16(c, (RW(3) + -30856)));
SET64(2, (s16)rd16(c, (RW(2) + -30832)));
{ int t = RD(3) != RD(2); SET64(16, RD(4) + RD(0)); if (t) goto L_002E8A84; }
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(0) + 41);
SET32(2, RW(16) + RW(2));
SET64(5, rd16(c, (RW(2) + -30854)));
if (RD(5) == RD(3)) { SET64(2, (s64)(s32)0x10000); goto L_002E8A88; }
SET64(31, 0x2e8a7c);  JP_F_002E8AE0(c);
SET64(1, RD(0) | 0x87b0); goto L_002E8A98;
L_002E8A84:;
SET64(2, (s64)(s32)0x10000);
L_002E8A88:;
SET32(3, RW(0) + -1);
SET32(2, RW(16) + RW(2));
wr16(c, (RW(2) + -30856), (u16)RW(3));
SET64(1, RD(0) | 0x87b0);
L_002E8A98:;
SET64(31, 0x2e8aa0); SET32(4, RW(16) + RW(1)); JP_F_003238B0(c);
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002E8AD4; }
SET64(3, (s32)rd32(c, (RW(28) + -29872)));
{ int t = RD(3) == RD(0);  if (t) goto L_002E8AD0; }
SET64(4, rd16(c, (RW(3) + 0)));
SET32(3, RW(0) + 4);
{ int t = RD(4) != RD(3);  if (t) goto L_002E8AD0; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2e8ad0); SET32(5, RW(0) + 41); JP_F_002E8AE0(c);
L_002E8AD0:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002E8AD4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002E8AE0(Ctx *c) { /* func_002E8AE0 */
ENTER(0x2e8ae0);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 48), RD(31));
SET32(2, RW(4) + RW(2));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(3, (s64)(s32)0x3f800000);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(5) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(1, RD(0) | 0x87b0);
c->f[21].u = rd32(c, (RW(2) + -30740));
SET32(4, RW(17) + RW(1));
c->f[20].u = RW(3);
SET64(31, 0x2e8b24); SET32(5, RW(0) + 1); JP_F_003231C0(c);
if (RD(2) == RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002E8B3C; }
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7544));
c->f[20].f = fpu(F(20) * F(0));
SET64(3, (s64)(s32)0x10000);
L_002E8B3C:;
SET64(2, RD(3) + RD(0));
SET32(3, RW(17) + RW(3));
SET32(2, RW(17) + RW(2));
c->f[2].u = rd32(c, (RW(3) + -30264));
c->f[1].u = rd32(c, (RW(2) + -30260));
c->f[0].u = RW(0);
c->f[2].f = fpu(F(2) * F(21));
c->f[2].f = fpu(F(2) * F(20));
c->f[1].f = fpu(F(1) * F(2));
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002E8B98; }
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
SET64(4, (s32)rd32(c, (RW(2) + 684)));
SET64(31, 0x2e8b7c); SET64(5, RD(16) + RD(0)); JP_F_001F0A40(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002E8B94; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2e8b94); SET64(5, RD(16) + RD(0)); JP_F_002E8BC0(c);
L_002E8B94:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002E8B98:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E8BC0(Ctx *c) { /* func_002E8BC0 */
ENTER(0x2e8bc0);
SET32(29, RW(29) + -176);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 48), RD(31));
SET64(3, RD(2) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(2, RW(4) + RW(2));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(3, RW(4) + RW(3));
SET64(6, (s32)rd32(c, (RW(2) + -30832)));
SET64(5, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x10000);
wr16(c, (RW(3) + -30856), (u16)RW(6));
SET32(2, RW(4) + RW(2));
wr16(c, (RW(2) + -30854), (u16)RW(18));
SET64(3, (s32)rd32(c, (RW(28) + -29872)));
SET64(2, (s32)rd32(c, (RW(4) + 44)));
SET64(17, (s32)rd32(c, (RW(3) + 668)));
wr32(c, (RW(29) + 172), RW(5));
wr32(c, (RW(29) + 160), RW(0));
wr32(c, (RW(29) + 164), RW(0));
wr32(c, (RW(29) + 168), RW(0));
rd128(c, (RW(2) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[2]);
SET64(16, (s32)rd32(c, (RW(3) + 684)));
SET64(31, 0x2e8c30); SET32(4, RW(29) + 64); JP_F_002AF080(c);
rd128(c, (RW(17) + 0) & ~15u, &c->r[2]);
SET32(6, RW(29) + 64);
SET32(4, RW(29) + 128);
SET32(5, RW(29) + 160);
wr128(c, (RW(29) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 48) & ~15u, &c->r[2]);
SET64(31, 0x2e8c60); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 156), RW(2));
SET64(4, RD(16) + RD(0));
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
SET64(5, RD(18) + RD(0));
wr32(c, (RW(29) + 148), RW(0));
SET32(6, RW(29) + 144);
wr32(c, (RW(29) + 152), RW(0));
SET64(31, 0x2e8c8c); wr128(c, (RW(29) + 144) & ~15u, &c->r[2]); JP_F_001F0710(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_002E8CB0(Ctx *c) { /* func_002E8CB0 */
ENTER(0x2e8cb0);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
{ int t = RD(4) == RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_002E8CE4; }
if (RD(6) == RD(0)) { SET64(5, (s32)rd32(c, (RW(28) + -29872))); goto L_002E8CE8; }
SET64(31, 0x2e8ce4);  JP_F_002FAA90(c);
L_002E8CE4:;
SET64(5, (s32)rd32(c, (RW(28) + -29872)));
L_002E8CE8:;
SET64(2, (s64)(s32)0x3f800000);
SET64(3, (s32)rd32(c, (RW(16) + 44)));
SET64(17, (s32)rd32(c, (RW(5) + 668)));
wr32(c, (RW(29) + 172), RW(2));
wr32(c, (RW(29) + 160), RW(0));
wr32(c, (RW(29) + 164), RW(0));
wr32(c, (RW(29) + 168), RW(0));
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[2]);
SET64(16, (s32)rd32(c, (RW(5) + 684)));
SET64(31, 0x2e8d18); SET32(4, RW(29) + 64); JP_F_002AF080(c);
rd128(c, (RW(17) + 0) & ~15u, &c->r[2]);
SET32(6, RW(29) + 64);
SET32(4, RW(29) + 128);
SET32(5, RW(29) + 160);
wr128(c, (RW(29) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 48) & ~15u, &c->r[2]);
SET64(31, 0x2e8d48); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 156), RW(2));
SET64(4, RD(16) + RD(0));
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
SET64(5, RD(18) + RD(0));
wr32(c, (RW(29) + 148), RW(0));
SET32(6, RW(29) + 144);
wr32(c, (RW(29) + 152), RW(0));
SET64(31, 0x2e8d74); wr128(c, (RW(29) + 144) & ~15u, &c->r[2]); JP_F_001F0790(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_002E8D90(Ctx *c) { /* func_002E8D90 */
ENTER(0x2e8d90);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x490000);
wr64(c, (RW(29) + 48), RD(31));
SET32(2, RW(2) + 25424);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 1046)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(17, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(17) == RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_002E8E94; }
SET64(31, 0x2e8dcc); SET32(4, RW(0) + 148); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002E8E44; }
SET64(31, 0x2e8ddc); SET64(4, RD(16) + RD(0)); JP_F_001F0D10(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15184);
SET32(3, RW(3) + 15204);
wr32(c, (RW(16) + 72), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 132), RW(3));
SET32(2, RW(2) + 15212);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 96), RW(2));
SET32(3, RW(3) + 15224);
wr32(c, (RW(16) + 112), RW(3));
SET64(2, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 144), RW(2));
SET32(3, RW(3) + 15056);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 72), RW(3));
SET32(2, RW(2) + 15076);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 132), RW(2));
SET32(3, RW(3) + 15084);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15096);
wr32(c, (RW(16) + 96), RW(3));
wr32(c, (RW(16) + 112), RW(2));
L_002E8E44:;
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(16) + RD(0));
SET32(2, RW(18) + RW(2));
wr32(c, (RW(2) + -30864), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 72)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e8e64); SET32(5, RW(0) + 2); rt_call(c, t); }
SET64(2, (s64)(s32)0x10000);
SET64(5, RD(17) + RD(0));
SET32(2, RW(18) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30864)));
SET64(31, 0x2e8e7c); SET32(6, RW(0) + -1); JP_F_001B7700(c);
SET64(2, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x4c0000);
SET32(2, RW(18) + RW(2));
c->f[0].u = rd32(c, (RW(3) + -8080));
SET64(2, (s32)rd32(c, (RW(2) + -30864)));
wr32(c, (RW(2) + 144), c->f[0].u);
L_002E8E94:;
SET64(31, 0x2e8e9c); SET64(4, rd16(c, (RW(18) + 1046))); JP_F_0015C7D0(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002E8F7C; }
SET64(31, 0x2e8eb0); SET32(4, RW(0) + 148); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002E8F28; }
SET64(31, 0x2e8ec0); SET64(4, RD(16) + RD(0)); JP_F_001F0D10(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15184);
SET32(3, RW(3) + 15204);
wr32(c, (RW(16) + 72), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 132), RW(3));
SET32(2, RW(2) + 15212);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 96), RW(2));
SET32(3, RW(3) + 15224);
wr32(c, (RW(16) + 112), RW(3));
SET64(2, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 144), RW(2));
SET32(3, RW(3) + 15056);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 72), RW(3));
SET32(2, RW(2) + 15076);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 132), RW(2));
SET32(3, RW(3) + 15084);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15096);
wr32(c, (RW(16) + 96), RW(3));
wr32(c, (RW(16) + 112), RW(2));
L_002E8F28:;
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(16) + RD(0));
SET32(2, RW(18) + RW(2));
wr32(c, (RW(2) + -30860), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 72)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2e8f48); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s64)(s32)0x10000);
SET64(5, RD(17) + RD(0));
SET32(2, RW(18) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30860)));
SET64(31, 0x2e8f60); SET32(6, RW(0) + -1); JP_F_001B7700(c);
SET64(3, (s64)(s32)0x10000);
SET64(4, (s64)(s32)0x4c0000);
SET32(3, RW(18) + RW(3));
c->f[0].u = rd32(c, (RW(4) + -8080));
SET64(3, (s32)rd32(c, (RW(3) + -30860)));
wr32(c, (RW(3) + 144), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 48)));
L_002E8F7C:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002E8F90(Ctx *c) { /* func_002E8F90 */
ENTER(0x2e8f90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002E9044; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 15184);
SET32(2, RW(2) + 15204);
wr32(c, (RW(17) + 72), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 132), RW(2));
SET32(3, RW(3) + 15212);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15224);
wr32(c, (RW(17) + 96), RW(3));
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 112), RW(2)); if (t) goto L_002E902C; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -31968);
SET32(2, RW(2) + -31948);
wr32(c, (RW(17) + 72), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 132), RW(2));
SET32(3, RW(3) + -31940);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31928);
wr32(c, (RW(17) + 96), RW(3));
SET64(31, 0x2e9014); wr32(c, (RW(17) + 112), RW(2)); JP_F_001F0C20(c);
SET32(4, RW(17) + 76);
SET64(31, 0x2e9020); SET64(5, RD(0) + RD(0)); JP_F_00139F30(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2e902c); SET64(5, RD(0) + RD(0)); JP_F_001B7980(c);
L_002E902C:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002E9048; }
SET64(31, 0x2e9044); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002E9044:;
SET64(2, RD(17) + RD(0));
L_002E9048:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002E9060(Ctx *c) { /* func_002E9060 */
ENTER(0x2e9060);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 384)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2e9084);  rt_call(c, t); }
SET64(3, RD(2) & 0xff);
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_002E9194; }
SET64(3, (s32)rd32(c, (RW(16) + 44)));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
SET64(4, RD(16) + RD(0));
rd128(c, (RW(3) + 48) & ~15u, &c->r[3]);
SET64(31, 0x2e90ac); wr128(c, (RW(2) + -31024) & ~15u, &c->r[3]); JP_F_002ED090(c);
SET64(2, (s64)(s32)0x10000);
SET64(3, (s32)rd32(c, (RW(16) + 44)));
SET32(2, RW(16) + RW(2));
SET32(4, RW(16) + 128);
rd128(c, (RW(2) + -31024) & ~15u, &c->r[2]);
SET64(31, 0x2e90c8); wr128(c, (RW(3) + 48) & ~15u, &c->r[2]); JP_F_00159FB0(c);
SET64(2, (s8)rd8(c, (RW(28) + -30312)));
if (RD(2) != RD(0)) { SET32(4, RW(29) + 96); goto L_002E9130; }
wr32(c, (RW(29) + 0), RW(0));
c->f[13].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 8), RW(0));
wr32(c, (RW(29) + 16), RW(2));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 24), RW(0));
SET64(4, (s64)(s32)0x420000);
wr32(c, (RW(29) + 32), RW(0));
SET32(4, RW(4) + -17024);
wr32(c, (RW(29) + 40), RW(0));
c->f[14].u = c->f[13].u;
wr32(c, (RW(29) + 48), RW(0));
c->f[15].u = c->f[13].u;
c->f[16].u = c->f[13].u;
wr32(c, (RW(29) + 56), RW(2));
c->f[17].u = c->f[12].u;
c->f[18].u = c->f[13].u;
SET64(31, 0x2e9124); c->f[19].u = c->f[13].u; JP_F_002AF0D0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30312), (u8)RW(2));
SET32(4, RW(29) + 96);
L_002E9130:;
SET64(31, 0x2e9138);  JP_F_002AF080(c);
SET64(8, (s64)(s32)0x420000);
SET32(5, RW(29) + 96);
SET32(8, RW(8) + -17024);
SET32(4, RW(16) + 128);
rd128(c, (RW(8) + 0) & ~15u, &c->r[7]);
rd128(c, (RW(8) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(8) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
rd128(c, (RW(8) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2e9178); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, 0x2e9180); SET32(4, RW(16) + 128); JP_F_0031D040(c);
SET64(3, (s64)(s32)0x10000);
SET64(4, (s64)(s32)0x40800000);
SET32(3, RW(16) + RW(3));
wr32(c, (RW(3) + -30412), RW(4));
SET64(31, rd64(c, (RW(29) + 80)));
L_002E9194:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

static void JP_B_002E91A0(Ctx *c, u32 entry) { /* func_002E91A0 */
ENTER(entry);
switch (entry) { case 0x2e9908: goto L_002E9908; case 0x2e9910: goto L_002E9910; }
L_002E91A0:;
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(4, (s32)rd32(c, (RW(4) + 384)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2e91d0);  rt_call(c, t); }
SET64(3, RD(2) & 0xff);
if (RD(3) != RD(0)) { SET64(3, (s64)(s32)0x3f800000); goto L_002E9EB4; }
SET64(31, 0x2e91e4);  JP_F_002C2AD0(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002E9258; }
SET64(2, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x3f800000);
SET32(2, RW(16) + RW(2));
SET64(1, RD(0) | 0x87b0);
c->f[21].u = rd32(c, (RW(2) + -30740));
SET32(4, RW(16) + RW(1));
c->f[20].u = RW(3);
SET64(31, 0x2e9214); SET32(5, RW(0) + 1); JP_F_003231C0(c);
if (RD(2) == RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002E922C; }
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7544));
c->f[20].f = fpu(F(20) * F(0));
SET64(3, (s64)(s32)0x10000);
L_002E922C:;
SET32(4, RW(16) + 128);
SET64(2, RD(3) + RD(0));
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
c->f[1].u = rd32(c, (RW(3) + -30264));
c->f[0].u = rd32(c, (RW(2) + -30260));
c->f[1].f = fpu(F(1) * F(21));
c->f[1].f = fpu(F(1) * F(20));
SET64(31, 0x2e9254); c->f[12].f = fpu(F(0) * F(1)); JP_F_001E9610(c);
SET64(2, (s64)(s32)0x10000);
L_002E9258:;
SET64(3, (s64)(s32)0x3f800000);
SET32(2, RW(16) + RW(2));
SET64(1, RD(0) | 0x87b0);
c->f[21].u = rd32(c, (RW(2) + -30740));
SET32(4, RW(16) + RW(1));
c->f[20].u = RW(3);
SET64(31, 0x2e9278); SET32(5, RW(0) + 1); JP_F_003231C0(c);
if (RD(2) == RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002E9290; }
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7544));
c->f[20].f = fpu(F(20) * F(0));
SET64(3, (s64)(s32)0x10000);
L_002E9290:;
SET64(1, RD(0) | 0x86a0);
SET64(2, RD(3) + RD(0));
SET64(6, rd8(c, (RW(16) + 980)));
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
c->f[1].u = rd32(c, (RW(3) + -30264));
SET32(4, RW(29) + 136);
c->f[0].u = rd32(c, (RW(2) + -30260));
SET32(5, RW(16) + RW(1));
c->f[1].f = fpu(F(1) * F(21));
c->f[1].f = fpu(F(1) * F(20));
c->f[20].f = fpu(F(0) * F(1));
SET64(31, 0x2e92c8); c->f[12].u = c->f[20].u; JP_F_002FFDF0(c);
SET64(2, rd8(c, (RW(29) + 136)));
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(29) + 140))); goto L_002E9408; }
SET64(2, rd8(c, (RW(29) + 137)));
{ int t = RD(2) == RD(0); SET64(6, rd16(c, (RW(29) + 138))); if (t) goto L_002E9304; }
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x86a0);
SET32(2, RW(16) + RW(2));
SET64(5, RD(6) & 0xffff);
SET32(4, RW(16) + RW(1));
SET64(31, 0x2e92fc); wr32(c, (RW(2) + -30832), RW(6)); JP_F_00300130(c);
SET64(3, (s64)(s32)0x10000); goto L_002E9328;
L_002E9304:;
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x86a0);
SET32(3, RW(6) + 1000);
SET32(2, RW(16) + RW(2));
SET64(5, RD(6) & 0xffff);
SET32(4, RW(16) + RW(1));
SET64(31, 0x2e9324); wr32(c, (RW(2) + -30832), RW(3)); JP_F_003000F0(c);
SET64(3, (s64)(s32)0x10000);
L_002E9328:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + -1);
SET32(3, RW(16) + RW(3));
wr16(c, (RW(3) + -30828), (u16)RW(4));
SET32(2, RW(16) + RW(2));
SET64(3, (s32)rd32(c, (RW(2) + -30268)));
if (RD(3) == RD(0)) { SET32(4, RW(16) + 128); goto L_002E9354; }
SET32(2, RW(0) + 1);
wr8(c, (RW(3) + 20), (u8)RW(2));
SET32(4, RW(16) + 128);
L_002E9354:;
SET64(31, 0x2e935c);  JP_F_0031CA60(c);
SET64(31, 0x2e9364); SET32(4, RW(16) + 128); JP_F_001E9110(c);
SET32(4, RW(16) + 128);
SET64(31, 0x2e9370); SET64(5, RD(0) + RD(0)); JP_F_00158E90(c);
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x2e9388); SET32(4, RW(16) + 128); rt_call(c, t); }
SET64(1, RD(0) | 0x86a0);
SET32(4, RW(29) + 128);
c->f[12].u = c->f[20].u;
SET32(5, RW(16) + RW(1));
SET64(31, 0x2e93a0); SET64(6, RD(0) + RD(0)); JP_F_002FFDF0(c);
SET64(2, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x3f800000);
SET32(2, RW(16) + RW(2));
SET64(1, RD(0) | 0x87b0);
c->f[21].u = rd32(c, (RW(2) + -30740));
SET32(4, RW(16) + RW(1));
c->f[20].u = RW(3);
SET64(31, 0x2e93c4); SET32(5, RW(0) + 1); JP_F_003231C0(c);
if (RD(2) == RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002E93DC; }
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7544));
c->f[20].f = fpu(F(20) * F(0));
SET64(3, (s64)(s32)0x10000);
L_002E93DC:;
SET32(4, RW(16) + 128);
SET64(2, RD(3) + RD(0));
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
c->f[1].u = rd32(c, (RW(3) + -30264));
c->f[0].u = rd32(c, (RW(2) + -30260));
c->f[1].f = fpu(F(1) * F(21));
c->f[1].f = fpu(F(1) * F(20));
SET64(31, 0x2e9404); c->f[12].f = fpu(F(0) * F(1)); JP_F_001E9610(c);
SET64(2, rd8(c, (RW(29) + 140)));
L_002E9408:;
{ int t = RD(2) == RD(0);  if (t) goto L_002E9474; }
SET64(2, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x3f800000);
SET32(2, RW(16) + RW(2));
SET64(1, RD(0) | 0x87b0);
c->f[21].u = rd32(c, (RW(2) + -30740));
SET32(4, RW(16) + RW(1));
c->f[20].u = RW(3);
SET64(31, 0x2e9434); SET32(5, RW(0) + 1); JP_F_003231C0(c);
if (RD(2) == RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002E944C; }
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7544));
c->f[20].f = fpu(F(20) * F(0));
SET64(3, (s64)(s32)0x10000);
L_002E944C:;
SET32(4, RW(16) + 128);
SET64(2, RD(3) + RD(0));
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
c->f[1].u = rd32(c, (RW(3) + -30264));
c->f[0].u = rd32(c, (RW(2) + -30260));
c->f[1].f = fpu(F(1) * F(21));
c->f[1].f = fpu(F(1) * F(20));
SET64(31, 0x2e9474); c->f[12].f = fpu(F(0) * F(1)); JP_F_001E9610(c);
L_002E9474:;
SET64(31, 0x2e947c);  JP_F_002C2AD0(c);
SET64(2, RD(2) & 0xff);
SET32(5, RW(0) + 1);
if (RD(2) != RD(5)) { SET64(2, (s64)(s32)0x10000); goto L_002E94F0; }
SET64(2, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x3f800000);
SET32(2, RW(16) + RW(2));
SET64(1, RD(0) | 0x87b0);
c->f[21].u = rd32(c, (RW(2) + -30740));
c->f[20].u = RW(3);
SET64(31, 0x2e94ac); SET32(4, RW(16) + RW(1)); JP_F_003231C0(c);
if (RD(2) == RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002E94C4; }
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7544));
c->f[20].f = fpu(F(20) * F(0));
SET64(3, (s64)(s32)0x10000);
L_002E94C4:;
SET32(4, RW(16) + 128);
SET64(2, RD(3) + RD(0));
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
c->f[1].u = rd32(c, (RW(3) + -30264));
c->f[0].u = rd32(c, (RW(2) + -30260));
c->f[1].f = fpu(F(1) * F(21));
c->f[1].f = fpu(F(1) * F(20));
SET64(31, 0x2e94ec); c->f[12].f = fpu(F(0) * F(1)); JP_F_001E9610(c);
SET64(2, (s64)(s32)0x10000);
L_002E94F0:;
SET32(3, RW(0) + 62);
SET32(2, RW(16) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30832)));
if (RD(4) == RD(3)) { SET64(2, (s64)(s32)0x10000); goto L_002E967C; }
SET32(2, RW(0) + 24);
if (RD(4) == RD(2)) { SET64(2, (s64)(s32)0x10000); goto L_002E9648; }
SET32(2, RW(0) + 27);
if (RD(4) == RD(2)) { SET64(2, (s64)(s32)0x42000000); goto L_002E9630; }
SET32(2, RW(0) + 25);
{ int t = RD(4) == RD(2);  if (t) goto L_002E962C; }
SET32(2, RW(0) + 22);
{ int t = RD(4) == RD(2);  if (t) goto L_002E962C; }
SET32(2, RW(0) + 21);
{ int t = RD(4) == RD(2);  if (t) goto L_002E962C; }
SET32(2, RW(0) + 20);
{ int t = RD(4) == RD(2);  if (t) goto L_002E962C; }
SET32(2, RW(0) + 61);
if (RD(4) == RD(2)) { SET64(2, (s64)(s32)0x41000000); goto L_002E9614; }
SET32(2, RW(0) + 60);
{ int t = RD(4) == RD(2);  if (t) goto L_002E9610; }
SET32(2, RW(0) + 7);
if (RD(4) == RD(2)) { SET64(2, (s64)(s32)0x10000); goto L_002E95B4; }
SET32(2, RW(0) + 6);
{ int t = RD(4) == RD(2);  if (t) goto L_002E95B0; }
SET32(2, RW(0) + 5);
{ int t = RD(4) == RD(2);  if (t) goto L_002E95B0; }
SET32(2, RW(0) + 4);
{ int t = RD(4) == RD(2);  if (t) goto L_002E95B0; }
SET32(2, RW(0) + 1);
{ int t = RD(4) == RD(2);  if (t) goto L_002E95B0; }
{ int t = RD(4) == RD(0);  if (t) goto L_002E95B0; }
SET64(2, (s32)rd32(c, (RW(28) + -29872))); goto L_002E9738;
L_002E95B0:;
SET64(2, (s64)(s32)0x10000);
L_002E95B4:;
SET32(2, RW(16) + RW(2));
c->f[1].u = rd32(c, (RW(2) + -30800));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_002E95D4; }
SET64(3, RD(0) + RD(0));
L_002E95D4:;
SET64(2, RD(3) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002E9734; }
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 50);
SET32(2, RW(16) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(16) + RD(0));
SET32(2, RW(16) + RW(2));
SET64(31, 0x2e9608); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002E9734;
L_002E9610:;
SET64(2, (s64)(s32)0x41000000);
L_002E9614:;
SET64(1, RD(0) | 0x87b0);
c->f[12].u = RW(2);
SET64(31, 0x2e9624); SET32(4, RW(16) + RW(1)); JP_F_00323880(c);
 goto L_002E9734;
L_002E962C:;
SET64(2, (s64)(s32)0x42000000);
L_002E9630:;
SET64(1, RD(0) | 0x87b0);
c->f[12].u = RW(2);
SET64(31, 0x2e9640); SET32(4, RW(16) + RW(1)); JP_F_00323880(c);
 goto L_002E9734;
L_002E9648:;
SET32(2, RW(16) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30268)));
{ int t = RD(4) == RD(0);  if (t) goto L_002E9734; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(3, (s64)(s32)0x4c0000);
SET64(2, (s64)(s32)0x4c0000);
c->f[13].u = rd32(c, (RW(2) + -8040));
SET64(25, (s32)rd32(c, (RW(25) + 208)));
{ u32 t = RW(25); SET64(31, 0x2e9674); c->f[12].u = rd32(c, (RW(3) + -8048)); rt_call(c, t); }
 goto L_002E9734;
L_002E967C:;
SET32(2, RW(16) + RW(2));
SET64(2, rd16(c, (RW(2) + -30196)));
if (RD(2) == RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002E9694; }
 goto L_002E9734;
L_002E9694:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 7);
SET32(3, RW(16) + RW(3));
wr32(c, (RW(3) + -30836), RW(4));
SET32(2, RW(16) + RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 44)));
c->f[3].u = rd32(c, (RW(2) + -30264));
SET64(1, RD(0) | 0x87b0);
c->f[0].u = RW(0);
SET32(4, RW(16) + RW(1));
c->f[1].u = rd32(c, (RW(3) + 52));
SET64(2, (s64)(s32)0x402c0000);
SET64(2, RD(2) | 0xcccd);
c->f[2].u = RW(2);
c->facc = fpu(F(0) + F(1));
SET64(2, (s64)(s32)0x41d00000);
c->f[0].f = fpu(c->facc + F(2) * F(3));
c->f[12].u = RW(2);
SET64(31, 0x2e96e4); wr32(c, (RW(3) + 52), c->f[0].u); JP_F_00323880(c);
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
SET64(2, rd8(c, (RW(2) + -30544)));
{ int t = RD(2) == RD(0);  if (t) goto L_002E9734; }
SET64(2, (s64)(s32)0x4c0000);
SET64(4, RD(16) + RD(0));
c->f[12].u = rd32(c, (RW(2) + -22224));
SET64(31, 0x2e970c); SET32(5, RW(0) + 1); JP_F_002EAD30(c);
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 56);
SET32(2, RW(16) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(16) + RD(0));
SET32(2, RW(16) + RW(2));
SET64(31, 0x2e9734); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
L_002E9734:;
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
L_002E9738:;
c->f[12].u = rd32(c, (RW(2) + 632));
SET64(31, 0x2e9744); SET32(4, RW(16) + 128); JP_F_0031D8F0(c);
SET64(31, 0x2e974c); SET64(4, RD(16) + RD(0)); JP_F_002ECE30(c);
SET64(2, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x3f800000);
SET32(2, RW(16) + RW(2));
SET64(1, RD(0) | 0x87b0);
c->f[21].u = rd32(c, (RW(2) + -30740));
SET32(4, RW(16) + RW(1));
c->f[20].u = RW(3);
SET64(31, 0x2e9770); SET32(5, RW(0) + 1); JP_F_003231C0(c);
if (RD(2) == RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002E9788; }
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7544));
c->f[20].f = fpu(F(20) * F(0));
SET64(3, (s64)(s32)0x10000);
L_002E9788:;
SET64(4, RD(16) + RD(0));
SET64(2, RD(3) + RD(0));
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
c->f[1].u = rd32(c, (RW(3) + -30264));
c->f[0].u = rd32(c, (RW(2) + -30260));
c->f[1].f = fpu(F(1) * F(21));
c->f[1].f = fpu(F(1) * F(20));
SET64(31, 0x2e97b0); c->f[12].f = fpu(F(0) * F(1)); JP_F_002EC5A0(c);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(0) + 18);
SET32(2, RW(16) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30832)));
if (RD(4) == RD(3)) { SET64(2, (s64)(s32)0x10000); goto L_002E97F8; }
SET32(2, RW(0) + 15);
{ int t = RD(4) == RD(2);  if (t) goto L_002E97F4; }
SET32(2, RW(0) + 12);
{ int t = RD(4) == RD(2);  if (t) goto L_002E97F4; }
SET32(2, RW(0) + 9);
{ int t = RD(4) == RD(2);  if (t) goto L_002E97F4; }
SET64(2, (s64)(s32)0x10000); goto L_002E986C;
L_002E97F4:;
SET64(2, (s64)(s32)0x10000);
L_002E97F8:;
SET64(3, RD(2) + RD(0));
SET32(2, RW(16) + RW(2));
SET32(3, RW(16) + RW(3));
c->f[2].u = rd32(c, (RW(2) + -30264));
c->f[1].u = rd32(c, (RW(3) + -30280));
SET64(2, (s64)(s32)0x10000);
c->f[1].f = fpu(F(1) + F(2));
SET64(3, (s64)(s32)0x40800000);
SET32(2, RW(16) + RW(2));
c->f[0].u = RW(3);
c->fcc = F(1) <= F(0);
{ int t = c->fcc; wr32(c, (RW(2) + -30280), c->f[1].u); if (t) goto L_002E9868; }
c->f[0].f = fpu(F(1) - F(0));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 61);
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
c->f[12].u = RW(0);
SET64(9, RD(0) + RD(0));
wr32(c, (RW(2) + -30280), c->f[0].u);
c->f[13].u = c->f[12].u;
SET64(31, 0x2e9868); c->f[14].u = c->f[12].u; JP_F_002EA1D0(c);
L_002E9868:;
SET64(2, (s64)(s32)0x10000);
L_002E986C:;
SET32(2, RW(16) + RW(2));
c->f[1].u = rd32(c, (RW(2) + -30276));
c->f[0].u = RW(0);
c->fcc = F(1) == F(0);
if (c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_002E98A8; }
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(3) + RD(0));
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
c->f[0].u = rd32(c, (RW(3) + -30264));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(2) + -30276), c->f[0].u);
SET64(2, (s64)(s32)0x10000);
L_002E98A8:;
SET32(2, RW(16) + RW(2));
c->f[1].u = rd32(c, (RW(2) + -30276));
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_002E98D4; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
wr32(c, (RW(2) + -30276), c->f[0].u);
SET64(2, (s64)(s32)0x10000);
L_002E98D4:;
SET32(2, RW(16) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30832)));
SET32(2, RW(2) + -9);
SET64(1, RD(2) < (u64)(s64)11);
if (RD(1) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002E9914; }
SET64(3, (s64)(s32)0x4c0000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + -9760);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x2e91a0: goto L_002E91A0; case 0x2e9908: goto L_002E9908; case 0x2e9910: goto L_002E9910; default: rt_jump(c, t); return; } }
L_002E9908:;
SET64(2, RD(0) + (s64)1); goto L_002E9914;
L_002E9910:;
SET64(2, RD(0) + RD(0));
L_002E9914:;
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002E9948; }
SET64(2, (s64)(s32)0x10000);
SET64(3, RD(2) + RD(0));
SET32(2, RW(16) + RW(2));
SET32(3, RW(16) + RW(3));
c->f[1].u = rd32(c, (RW(2) + -30264));
c->f[0].u = rd32(c, (RW(3) + -30272));
SET64(2, (s64)(s32)0x10000);
c->f[0].f = fpu(F(0) + F(1));
SET32(2, RW(16) + RW(2));
wr32(c, (RW(2) + -30272), c->f[0].u); goto L_002E9950;
L_002E9948:;
SET32(2, RW(16) + RW(2));
wr32(c, (RW(2) + -30272), RW(0));
L_002E9950:;
SET64(31, 0x2e9958); SET64(4, RD(16) + RD(0)); JP_F_002E8A30(c);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(0) + 8);
SET32(2, RW(16) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30836)));
{ int t = RD(4) == RD(3); SET64(5, RD(0) + RD(0)); if (t) goto L_002E9990; }
SET32(2, RW(0) + 7);
if (RD(4) == RD(2)) { SET64(5, RD(0) + (s64)1); goto L_002E9994; }
SET32(2, RW(0) + 6);
{ int t = RD(4) == RD(2);  if (t) goto L_002E9990; }
SET64(2, RD(5) & 0xff); goto L_002E9998;
L_002E9990:;
SET64(5, RD(0) + (s64)1);
L_002E9994:;
SET64(2, RD(5) & 0xff);
L_002E9998:;
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002E99F0; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
SET64(6, rd16(c, (RW(2) + -30288)));
if (RD(6) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002E9AAC; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30284)));
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002E99E4; }
SET32(4, RW(2) + 128);
SET64(31, 0x2e99d4); SET64(5, RD(16) + RD(0)); JP_F_001E9020(c);
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
wr32(c, (RW(2) + -30284), RW(0));
SET64(2, (s64)(s32)0x10000);
L_002E99E4:;
SET32(2, RW(16) + RW(2));
wr16(c, (RW(2) + -30288), (u16)RW(0)); goto L_002E9AA8;
L_002E99F0:;
SET32(2, RW(16) + RW(2));
SET64(6, rd16(c, (RW(2) + -30288)));
if (RD(6) == RD(0)) { SET32(4, RW(16) + 128); goto L_002E9A24; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30284)));
{ int t = RD(2) == RD(0);  if (t) goto L_002E9A20; }
SET32(4, RW(2) + 128);
SET64(31, 0x2e9a20); SET64(5, RD(16) + RD(0)); JP_F_001E9060(c);
L_002E9A20:;
SET32(4, RW(16) + 128);
L_002E9A24:;
SET64(31, 0x2e9a2c);  JP_F_001E8FC0(c);
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
c->f[1].u = rd32(c, (RW(2) + -30800));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_002E9A50; }
SET64(3, RD(0) + RD(0));
L_002E9A50:;
SET64(2, RD(3) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002E9AA8; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
SET64(6, rd16(c, (RW(2) + -30288)));
{ int t = RD(6) == RD(0);  if (t) goto L_002E9AA8; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30284)));
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002E9AA0; }
SET32(4, RW(2) + 128);
SET64(31, 0x2e9a90); SET64(5, RD(16) + RD(0)); JP_F_001E9020(c);
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
wr32(c, (RW(2) + -30284), RW(0));
SET64(2, (s64)(s32)0x10000);
L_002E9AA0:;
SET32(2, RW(16) + RW(2));
wr16(c, (RW(2) + -30288), (u16)RW(0));
L_002E9AA8:;
SET64(4, RD(16) + RD(0));
L_002E9AAC:;
SET64(31, 0x2e9ab4);  JP_F_002EA010(c);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(0) + 8);
SET32(2, RW(16) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30836)));
if (RD(4) == RD(3)) { SET32(4, RW(16) + 128); goto L_002E9AF0; }
SET32(2, RW(0) + 7);
{ int t = RD(4) == RD(2);  if (t) goto L_002E9AEC; }
SET32(2, RW(0) + 6);
{ int t = RD(4) == RD(2);  if (t) goto L_002E9AEC; }
SET32(4, RW(16) + 128); goto L_002E9B00;
L_002E9AEC:;
SET32(4, RW(16) + 128);
L_002E9AF0:;
SET64(31, 0x2e9af8); SET64(5, RD(0) + RD(0)); JP_F_00158FF0(c);
SET64(2, (s64)(s32)0x10000); goto L_002E9B3C;
L_002E9B00:;
SET64(31, 0x2e9b08); SET32(5, RW(0) + 1); JP_F_00158FF0(c);
SET64(31, 0x2e9b10); SET64(4, RD(16) + RD(0)); JP_F_002F11A0(c);
SET64(31, 0x2e9b18); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2e9b24); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET32(4, RW(2) + 128);
SET64(31, 0x2e9b30); SET32(5, RW(0) + 4); JP_F_00159580(c);
rd128(c, (RW(2) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 2336) & ~15u, &c->r[2]);
SET64(2, (s64)(s32)0x10000);
L_002E9B3C:;
SET32(4, RW(0) + 38);
SET32(2, RW(16) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30832)));
{ int t = RD(2) == RD(4); SET64(3, RD(0) + RD(0)); if (t) goto L_002E9C54; }
SET32(4, RW(0) + 37);
if (RD(2) == RD(4)) { SET64(2, (s64)(s32)0x10000); goto L_002E9C58; }
SET32(4, RW(0) + 36);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C54; }
SET32(4, RW(0) + 35);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C54; }
SET32(4, RW(0) + 34);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C54; }
SET32(4, RW(0) + 33);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C54; }
SET32(4, RW(0) + 32);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C54; }
SET32(4, RW(0) + 31);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C54; }
SET32(4, RW(0) + 50);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C78; }
SET32(4, RW(0) + 49);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C78; }
SET32(4, RW(0) + 61);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C78; }
SET32(4, RW(0) + 60);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C78; }
SET32(4, RW(0) + 59);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C78; }
SET32(4, RW(0) + 58);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C78; }
SET32(4, RW(0) + 48);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C78; }
SET32(4, RW(0) + 47);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C78; }
SET32(4, RW(0) + 46);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C78; }
SET32(4, RW(0) + 45);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C78; }
SET32(4, RW(0) + 44);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C78; }
SET32(4, RW(0) + 43);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C78; }
SET32(4, RW(0) + 42);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C78; }
SET32(4, RW(0) + 3);
{ int t = RD(2) == RD(4);  if (t) goto L_002E9C78; }
SET64(3, RD(0) + (s64)1); goto L_002E9C78;
L_002E9C54:;
SET64(2, (s64)(s32)0x10000);
L_002E9C58:;
SET32(2, RW(16) + RW(2));
c->f[1].u = rd32(c, (RW(2) + -30732));
c->f[0].u = RW(0);
c->fcc = F(0) == F(1);
{ int t = !c->fcc;  if (t) goto L_002E9C78; }
SET64(3, RD(0) + (s64)1);
L_002E9C78:;
if (RD(3) == RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002E9CDC; }
SET64(31, 0x2e9c88); SET64(4, RD(16) + RD(0)); JP_F_002F11A0(c);
SET64(31, 0x2e9c90); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2e9c9c); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(1, RD(0) | 0x87b0);
SET32(3, RW(2) + RW(1));
wr16(c, (RW(3) + 72), (u16)RW(0));
wr16(c, (RW(3) + 74), (u16)RW(0));
SET64(3, (s32)rd32(c, (RW(28) + -29872)));
{ int t = RD(3) == RD(0);  if (t) goto L_002E9CD8; }
SET64(31, 0x2e9cc0); SET64(4, RD(2) + RD(0)); JP_F_002F11A0(c);
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
SET64(31, 0x2e9ccc); SET64(17, RD(2) + RD(0)); JP_F_002FE3A0(c);
SET64(5, rd16(c, (RW(17) + 44)));
SET64(31, 0x2e9cd8); SET64(4, RD(2) + RD(0)); JP_F_0031F600(c);
L_002E9CD8:;
SET64(2, (s64)(s32)0x10000);
L_002E9CDC:;
SET64(3, (s64)(s32)0x3f800000);
SET32(2, RW(16) + RW(2));
SET64(1, RD(0) | 0x87b0);
c->f[21].u = rd32(c, (RW(2) + -30740));
SET32(4, RW(16) + RW(1));
c->f[20].u = RW(3);
SET64(31, 0x2e9cfc); SET32(5, RW(0) + 1); JP_F_003231C0(c);
if (RD(2) == RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002E9D14; }
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7544));
c->f[20].f = fpu(F(20) * F(0));
SET64(3, (s64)(s32)0x10000);
L_002E9D14:;
SET64(1, RD(0) | 0x87b0);
SET64(2, RD(3) + RD(0));
SET32(4, RW(16) + RW(1));
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
c->f[1].u = rd32(c, (RW(3) + -30264));
c->f[0].u = rd32(c, (RW(2) + -30260));
c->f[1].f = fpu(F(1) * F(21));
c->f[1].f = fpu(F(1) * F(20));
SET64(31, 0x2e9d40); c->f[12].f = fpu(F(0) * F(1)); JP_F_00323550(c);
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
SET64(2, rd8(c, (RW(2) + -30784)));
if (RD(2) == RD(0)) { SET64(1, RD(0) | 0x87b0); goto L_002E9D90; }
SET64(3, (s32)rd32(c, (RW(28) + -29872)));
SET32(2, RW(0) + 4);
SET64(3, rd16(c, (RW(3) + 0)));
{ int t = RD(3) != RD(2);  if (t) goto L_002E9D8C; }
SET64(31, 0x2e9d70); SET64(4, RD(16) + RD(0)); JP_F_002F11A0(c);
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
SET64(31, 0x2e9d7c); SET64(17, RD(2) + RD(0)); JP_F_002FE3A0(c);
SET64(5, rd16(c, (RW(17) + 44)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x2e9d8c); SET64(6, RD(0) + RD(0)); JP_F_0031FCC0(c);
L_002E9D8C:;
SET64(1, RD(0) | 0x87b0);
L_002E9D90:;
SET32(5, RW(0) + 2);
SET64(31, 0x2e9d9c); SET32(4, RW(16) + RW(1)); JP_F_003231C0(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(28) + -29872))); goto L_002E9E4C; }
SET64(3, (s64)(s32)0x10000);
SET64(6, (s64)(s32)0x10000);
SET64(2, RD(3) + RD(0));
SET64(5, (s64)(s32)0x10000);
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
c->f[1].u = rd32(c, (RW(3) + -30888));
SET32(6, RW(16) + RW(6));
c->f[0].u = rd32(c, (RW(2) + -30872));
SET32(5, RW(16) + RW(5));
c->f[4].u = RW(0);
SET64(4, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x3e4c0000);
SET32(4, RW(16) + RW(4));
c->f[0].f = fpu(F(0) - F(1));
SET64(2, RD(3) | 0xcccd);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(16) + RW(3));
c->f[5].u = RW(2);
c->facc = fpu(F(4) + F(1));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].f = fpu(c->facc + F(5) * F(0));
wr32(c, (RW(29) + 124), RW(2));
c->f[3].u = rd32(c, (RW(6) + -30892));
SET64(2, (s64)(s32)0x10000);
c->f[2].u = rd32(c, (RW(5) + -30876));
SET32(2, RW(16) + RW(2));
wr32(c, (RW(29) + 120), c->f[0].u);
c->f[1].u = rd32(c, (RW(4) + -30896));
c->f[0].u = rd32(c, (RW(3) + -30880));
c->f[2].f = fpu(F(2) - F(3));
c->facc = fpu(F(4) + F(3));
c->f[2].f = fpu(c->facc + F(5) * F(2));
c->f[0].f = fpu(F(0) - F(1));
c->facc = fpu(F(4) + F(1));
c->f[0].f = fpu(c->facc + F(5) * F(0));
wr32(c, (RW(29) + 116), c->f[2].u);
wr32(c, (RW(29) + 112), c->f[0].u);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(2) + -30896) & ~15u, &c->r[3]); goto L_002E9E6C;
L_002E9E4C:;
if (RD(2) == RD(0)) { SET64(1, RD(0) | 0x86e0); goto L_002E9E70; }
SET64(2, (s32)rd32(c, (RW(2) + 680)));
{ int t = RD(2) == RD(0);  if (t) goto L_002E9E6C; }
SET64(5, rd16(c, (RW(2) + 464)));
SET64(31, 0x2e9e6c); SET64(4, RD(16) + RD(0)); JP_F_002EEC20(c);
L_002E9E6C:;
SET64(1, RD(0) | 0x86e0);
L_002E9E70:;
SET32(4, RW(16) + RW(1));
SET64(25, (s32)rd32(c, (RW(4) + 32)));
SET64(1, RD(0) | 0x8750);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2e9e88); SET32(5, RW(16) + RW(1)); rt_call(c, t); }
SET64(3, (s64)(s32)0x10000);
SET64(4, RD(3) + RD(0));
SET32(3, RW(16) + RW(3));
SET32(4, RW(16) + RW(4));
c->f[1].u = rd32(c, (RW(3) + -30264));
c->f[0].u = rd32(c, (RW(4) + -30824));
SET64(3, (s64)(s32)0x10000);
c->f[0].f = fpu(F(0) + F(1));
SET32(3, RW(16) + RW(3));
wr32(c, (RW(3) + -30824), c->f[0].u);
SET64(3, (s64)(s32)0x3f800000);
L_002E9EB4:;
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 76), RW(3));
c->f[5].u = rd32(c, (RW(16) + 72));
wr32(c, (RW(29) + 92), RW(3));
c->f[3].u = rd32(c, (RW(16) + 68));
SET64(3, (s32)rd32(c, (RW(16) + 44)));
c->f[1].u = rd32(c, (RW(16) + 64));
wr32(c, (RW(29) + 68), RW(0));
wr32(c, (RW(29) + 72), RW(0));
rd128(c, (RW(3) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[3]);
c->f[4].u = rd32(c, (RW(29) + 72));
c->f[2].u = rd32(c, (RW(29) + 68));
c->f[0].u = rd32(c, (RW(29) + 64));
c->f[4].f = fpu(F(4) - F(5));
c->f[2].f = fpu(F(2) - F(3));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(29) + 88), c->f[4].u);
wr32(c, (RW(29) + 84), c->f[2].u);
wr32(c, (RW(29) + 80), c->f[0].u);
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 80) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}
void JP_F_002E91A0(Ctx *c) { JP_B_002E91A0(c, 0x2e91a0); }
void JP_F_002E9908(Ctx *c) { JP_B_002E91A0(c, 0x2e9908); }
void JP_F_002E9910(Ctx *c) { JP_B_002E91A0(c, 0x2e9910); }

void JP_F_002E9F30(Ctx *c) { /* func_002E9F30 */
ENTER(0x2e9f30);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 384)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2e9f5c);  rt_call(c, t); }
SET64(3, RD(2) & 0xff);
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 44))); goto L_002E9FF0; }
SET64(16, RD(0) + RD(0));
SET64(3, RD(16) & 0xffff);
L_002E9F70:;
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 7);
SET32(2, RW(2) + RW(17));
SET32(18, RW(2) + 4176);
SET64(31, 0x2e9f8c); SET32(4, RW(18) + 128); JP_F_0031E710(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
if (RD(2) != RD(0)) { SET32(16, RW(16) + 1); goto L_002E9FB4; }
SET64(5, RD(18) + RD(0));
SET64(31, 0x2e9fac); SET64(4, RD(17) + RD(0)); JP_F_002EBD30(c);
 goto L_002E9FC0;
L_002E9FB4:;
SET64(2, RD(16) < (u64)(s64)11);
if (RD(2) != RD(0)) { SET64(3, RD(16) & 0xffff); { POLL(); goto L_002E9F70; } }
L_002E9FC0:;
SET64(31, 0x2e9fc8); SET64(4, RD(17) + RD(0)); JP_F_002EE110(c);
c->f[0].u = rd32(c, (RW(17) + 24));
SET64(4, (s64)(s32)0x10000);
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
wr32(c, (RW(4) + -30264), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(17) + 44)));
rd128(c, (RW(4) + 48) & ~15u, &c->r[4]);
wr128(c, (RW(3) + -31040) & ~15u, &c->r[4]);
SET64(3, (s32)rd32(c, (RW(17) + 44)));
L_002E9FF0:;
rd128(c, (RW(3) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 64) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002EA010(Ctx *c) { /* func_002EA010 */
ENTER(0x2ea010);
SET32(29, RW(29) + -64);
SET64(1, RD(0) | 0x87b0);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(4, RW(18) + RW(1));
SET64(31, 0x2ea034); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_003238B0(c);
SET64(1, RD(0) | 0x87b0);
SET64(16, RD(2) & 0xff);
SET32(4, RW(18) + RW(1));
SET64(31, 0x2ea048); SET64(17, RD(0) + RD(0)); JP_F_003236A0(c);
SET64(3, RD(2) & 0xffff);
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { SET32(17, RW(0) + 7); goto L_002EA090; }
SET32(2, RW(0) + 3);
if (RD(3) == RD(2)) { SET64(17, RD(2) + RD(0)); goto L_002EA090; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(17, RD(0) + RD(0)); goto L_002EA090; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_002EA08C; }
{ int t = RD(3) == RD(0);  if (t) goto L_002EA08C; }
 goto L_002EA090;
L_002EA08C:;
SET64(17, RD(0) + RD(0));
L_002EA090:;
SET64(6, RD(17) + RD(0));
SET32(4, RW(18) + 128);
SET64(31, 0x2ea0a0); SET32(5, RW(0) + 1); JP_F_001E6AD0(c);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(0) + 3);
SET32(2, RW(18) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30836)));
{ int t = RD(2) != RD(3); SET64(6, RD(0) + (s64)1); if (t) goto L_002EA0E0; }
SET64(2, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x40800000);
SET32(2, RW(18) + RW(2));
c->f[1].u = rd32(c, (RW(2) + -30824));
c->f[0].u = RW(3);
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(3, (s64)(s32)0x10000); goto L_002EA0E4; }
SET64(6, RD(0) + RD(0));
L_002EA0E0:;
SET64(3, (s64)(s32)0x10000);
L_002EA0E4:;
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(18) + RW(3));
SET32(2, RW(18) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + -30832)));
c->f[12].u = rd32(c, (RW(2) + -30264));
SET64(1, RD(0) | 0x87b0);
SET64(7, RD(0) + RD(0));
SET32(4, RW(18) + RW(1));
SET64(2, RD(3) ^ 0x1a);
SET64(31, 0x2ea110); SET64(5, RD(2) < (u64)(s64)1); JP_F_003236B0(c);
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2ea11c); SET32(4, RW(18) + RW(1)); JP_F_003238B0(c);
SET64(4, RD(16) & 0xff);
SET32(3, RW(0) + 1);
{ int t = RD(4) != RD(3); SET64(5, RD(2) & 0xff); if (t) goto L_002EA1B4; }
SET64(3, RD(5) & 0xff);
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002EA1B8; }
SET64(2, (s64)(s32)0x4c0000);
SET64(1, RD(0) | 0x87b0);
c->f[12].u = rd32(c, (RW(2) + -8016));
SET64(31, 0x2ea14c); SET32(4, RW(18) + RW(1)); JP_F_003238A0(c);
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
SET32(3, RW(0) + 1);
SET64(4, rd16(c, (RW(4) + 0)));
SET64(4, RD(4) ^ 0x4);
SET64(4, RD(4) < (u64)(s64)1);
if (RD(4) != RD(3)) { SET64(3, (s64)(s32)0x10000); goto L_002EA190; }
SET64(31, 0x2ea170); SET64(4, RD(18) + RD(0)); JP_F_002F11A0(c);
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
SET64(31, 0x2ea17c); SET64(16, RD(2) + RD(0)); JP_F_002FE3A0(c);
SET64(5, rd16(c, (RW(16) + 44)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ea18c); SET32(6, RW(0) + 1); JP_F_0031FCC0(c);
SET64(3, (s64)(s32)0x10000);
L_002EA190:;
SET32(4, RW(0) + 41);
SET32(3, RW(18) + RW(3));
SET64(3, rd16(c, (RW(3) + -30854)));
{ int t = RD(3) != RD(4);  if (t) goto L_002EA1B4; }
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(0) + -1);
SET32(3, RW(18) + RW(3));
wr16(c, (RW(3) + -30856), (u16)RW(4));
L_002EA1B4:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002EA1B8:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002EA1D0(Ctx *c) { /* func_002EA1D0 */
ENTER(0x2ea1d0);
SET32(29, RW(29) + -960);
SET32(2, RW(0) + 47);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(8) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(7) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(19) & 0xffff);
SET64(16, RD(5) + RD(0));
{ int t = RD(17) == RD(2); wr32(c, (RW(29) + 172), RW(9)); if (t) goto L_002EA244; }
SET32(2, RW(0) + 46);
if (RD(17) == RD(2)) { SET32(4, RW(20) + 128); goto L_002EA234; }
SET64(2, (s64)(s32)0x3f800000); goto L_002EA254;
L_002EA234:;
SET64(31, 0x2ea23c);  JP_F_001E8BE0(c);
SET64(2, RD(0) + RD(0)); goto L_002EA610;
L_002EA244:;
SET64(31, 0x2ea24c); SET32(4, RW(20) + 128); JP_F_001E8BC0(c);
SET64(2, RD(0) + RD(0)); goto L_002EA610;
L_002EA254:;
SET32(4, RW(29) + 240);
wr32(c, (RW(29) + 720), c->f[12].u);
wr32(c, (RW(29) + 732), RW(2));
wr32(c, (RW(29) + 724), c->f[13].u);
SET64(30, RD(0) + RD(0));
SET64(31, 0x2ea270); wr32(c, (RW(29) + 728), c->f[14].u); JP_F_0013AEA0(c);
SET32(4, RW(29) + 240);
SET64(31, 0x2ea27c); SET32(5, RW(29) + 720); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ea288); SET32(4, RW(29) + 896); JP_F_0013ADA0(c);
SET64(22, RD(16) & 0xffff);
SET32(2, RW(0) + 1);
if (RD(22) != RD(2)) { SET64(16, (s32)rd32(c, (RW(20) + 44))); goto L_002EA310; }
SET64(3, RD(21) & 0xffff);
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2);  if (t) goto L_002EA30C; }
SET32(4, RW(20) + 128);
SET64(31, 0x2ea2b4); SET64(5, RD(18) + RD(0)); JP_F_001E6D30(c);
SET64(6, RD(2) + RD(0));
SET32(4, RW(29) + 432);
SET64(31, 0x2ea2c4); SET32(5, RW(29) + 896); JP_F_002AEAE0(c);
SET64(31, 0x2ea2cc); SET32(4, RW(29) + 656); JP_F_002AF080(c);
rd128(c, (RW(29) + 432) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 448) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 464) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 656) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 672) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 688) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 480) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 704) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 688) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 656) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 672) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 928) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 704) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 896) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 912) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 944) & ~15u, &c->r[2]);
L_002EA30C:;
SET64(16, (s32)rd32(c, (RW(20) + 44)));
L_002EA310:;
SET64(31, 0x2ea318); SET32(4, RW(29) + 832); JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
SET64(23, RD(18) & 0xffff);
SET32(2, RW(0) + 25);
wr128(c, (RW(29) + 832) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 848) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 864) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[3]);
{ int t = RD(23) == RD(2); wr128(c, (RW(29) + 880) & ~15u, &c->r[3]); if (t) goto L_002EA374; }
SET32(4, RW(20) + 128);
SET64(31, 0x2ea350); SET64(5, RD(18) + RD(0)); JP_F_00159580(c);
rd128(c, (RW(2) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 832) & ~15u, &c->r[3]);
rd128(c, (RW(2) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 848) & ~15u, &c->r[3]);
rd128(c, (RW(2) + 96) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 864) & ~15u, &c->r[3]);
rd128(c, (RW(2) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 880) & ~15u, &c->r[2]); goto L_002EA3BC;
L_002EA374:;
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
SET64(2, (s64)(s32)0xbdcc0000);
SET64(2, RD(2) | 0xcccd);
SET64(3, (s64)(s32)0x4c0000);
c->f[0].u = RW(2);
SET32(3, RW(3) + -20912);
SET64(4, (s32)rd32(c, (RW(4) + 680)));
SET64(4, rd16(c, (RW(4) + 464)));
SET32(2, RW(4) << 1);
SET32(2, RW(2) + RW(4));
SET32(2, RW(2) << 2);
SET32(2, RW(3) + RW(2));
SET64(2, (s16)rd16(c, (RW(2) + 6)));
c->f[1].u = RW(2);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 884), c->f[0].u);
L_002EA3BC:;
SET64(16, RD(21) & 0xffff);
SET32(2, RW(0) + 2);
if (RD(16) == RD(2)) { SET64(2, (s64)(s32)0x3f800000); goto L_002EA4E0; }
SET32(2, RW(0) + 1);
if (RD(16) == RD(2)) { SET64(5, RD(18) + RD(0)); goto L_002EA4D0; }
if (RD(16) == RD(0)) { SET32(4, RW(29) + 368); goto L_002EA3E8; }
SET64(8, (s32)rd32(c, (RW(29) + 172))); goto L_002EA5A0;
L_002EA3E8:;
SET32(5, RW(29) + 896);
SET64(31, 0x2ea3f4); SET32(6, RW(29) + 832); JP_F_002AEAE0(c);
SET64(31, 0x2ea3fc); SET32(4, RW(29) + 592); JP_F_002AF080(c);
rd128(c, (RW(29) + 368) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 384) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 400) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 592) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 608) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 624) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 416) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 640) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 608) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 592) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 624) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 912) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 640) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 896) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 928) & ~15u, &c->r[2]);
{ int t = RD(22) != RD(0); wr128(c, (RW(29) + 944) & ~15u, &c->r[3]); if (t) goto L_002EA59C; }
{ int t = RD(23) == RD(0);  if (t) goto L_002EA59C; }
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 816), RW(0));
wr32(c, (RW(29) + 828), RW(2));
wr32(c, (RW(29) + 820), RW(0));
SET64(2, (s64)(s32)0x3dcc0000);
wr32(c, (RW(29) + 824), RW(0));
SET64(2, RD(2) | 0xcccd);
wr128(c, (RW(29) + 816) & ~15u, &c->r[3]);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(29) + 820));
SET64(3, (s32)rd32(c, (RW(20) + 44)));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 820), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 0));
rd128(c, (RW(29) + 816) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 896), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 16));
wr32(c, (RW(29) + 912), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 32));
wr32(c, (RW(29) + 928), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 4));
wr32(c, (RW(29) + 900), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 20));
wr32(c, (RW(29) + 916), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 36));
wr32(c, (RW(29) + 932), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 8));
wr32(c, (RW(29) + 904), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 24));
wr32(c, (RW(29) + 920), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 40));
wr32(c, (RW(29) + 936), c->f[0].u);
wr128(c, (RW(29) + 944) & ~15u, &c->r[2]); goto L_002EA59C;
L_002EA4D0:;
SET64(31, 0x2ea4d8); SET32(4, RW(20) + 128); JP_F_00159580(c);
SET64(30, RD(2) + RD(0)); goto L_002EA59C;
L_002EA4E0:;
SET32(4, RW(29) + 576);
wr32(c, (RW(29) + 572), RW(2));
SET32(5, RW(29) + 560);
SET32(6, RW(29) + 832);
wr32(c, (RW(29) + 560), RW(0));
wr32(c, (RW(29) + 564), RW(0));
SET64(31, 0x2ea500); wr32(c, (RW(29) + 568), RW(0)); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 576) & ~15u, &c->r[2]);
SET32(4, RW(20) + 128);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2ea514); wr128(c, (RW(29) + 800) & ~15u, &c->r[2]); JP_F_00159580(c);
SET32(5, RW(2) + 64);
SET64(31, 0x2ea520); SET32(4, RW(29) + 176); JP_F_0013ADA0(c);
SET64(31, 0x2ea528); SET32(4, RW(29) + 176); JP_F_00147DD0(c);
SET64(31, 0x2ea530); SET64(4, RD(2) + RD(0)); JP_F_00147DA0(c);
SET32(4, RW(29) + 736);
SET64(31, 0x2ea53c); SET32(5, RW(29) + 176); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 800) & ~15u, &c->r[2]);
SET32(4, RW(29) + 304);
SET32(5, RW(29) + 896);
SET32(6, RW(29) + 736);
SET64(31, 0x2ea554); wr128(c, (RW(29) + 784) & ~15u, &c->r[2]); JP_F_002AEAE0(c);
SET64(31, 0x2ea55c); SET32(4, RW(29) + 496); JP_F_002AF080(c);
rd128(c, (RW(29) + 304) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 320) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 496) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 512) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 528) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 352) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 544) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 528) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 496) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 512) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 928) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 544) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 896) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 912) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 944) & ~15u, &c->r[2]);
L_002EA59C:;
SET64(8, (s32)rd32(c, (RW(29) + 172)));
L_002EA5A0:;
SET64(5, RD(19) + RD(0));
SET64(6, RD(30) + RD(0));
SET32(4, RW(20) + 128);
SET64(31, 0x2ea5b4); SET64(7, RD(0) + RD(0)); JP_F_001EA7B0(c);
SET64(18, RD(2) + RD(0));
if (RD(18) == RD(0)) { SET64(2, RD(18) + RD(0)); goto L_002EA610; }
SET64(25, (s32)rd32(c, (RW(18) + 144)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x2ea5d4); SET32(5, RW(29) + 896); rt_call(c, t); }
{ int t = RD(20) == RD(0); SET64(5, RD(20) + RD(0)); if (t) goto L_002EA5E0; }
SET32(5, RW(20) + 128);
L_002EA5E0:;
SET64(25, (s32)rd32(c, (RW(18) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2ea5f0); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) ^ 0x1);
SET32(4, RW(20) + 128);
SET64(2, RD(2) < (u64)(s64)1);
SET64(6, RD(17) + RD(0));
wr16(c, (RW(18) + 350), (u16)RW(2));
SET64(31, 0x2ea60c); SET64(5, RD(18) + RD(0)); JP_F_001E9140(c);
SET64(2, RD(18) + RD(0));
L_002EA610:;
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
SET32(29, RW(29) + 960); return;
}

void JP_F_002EA640(Ctx *c) { /* func_002EA640 */
ENTER(0x2ea640);
SET64(3, (s64)(s32)0x10000);
SET64(5, (s64)(s32)0x41a00000);
SET32(3, RW(4) + RW(3));
wr32(c, (RW(3) + -30276), RW(5)); return;
}

static void JP_B_002EA660(Ctx *c, u32 entry) { /* func_002EA660 */
ENTER(entry);
switch (entry) { case 0x2ea6a0: goto L_002EA6A0; case 0x2ea6cc: goto L_002EA6CC; case 0x2ea6f8: goto L_002EA6F8; case 0x2ea724: goto L_002EA724; case 0x2ea74c: goto L_002EA74C; }
L_002EA660:;
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x10000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(4) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + -30832)));
SET32(3, RW(3) + -8);
SET64(1, RD(3) < (u64)(s64)11);
{ int t = RD(1) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002EA74C; }
SET64(5, (s64)(s32)0x4c0000);
SET32(3, RW(3) << 2);
SET32(5, RW(5) + -9712);
SET32(3, RW(3) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x2ea660: goto L_002EA660; case 0x2ea6a0: goto L_002EA6A0; case 0x2ea6cc: goto L_002EA6CC; case 0x2ea6f8: goto L_002EA6F8; case 0x2ea724: goto L_002EA724; case 0x2ea74c: goto L_002EA74C; default: rt_jump(c, t); return; } }
L_002EA6A0:;
SET64(2, (s64)(s32)0x10000);
SET32(5, RW(0) + 10);
SET32(2, RW(4) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(5));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(31, 0x2ea6c4); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(2, RD(0) + (s64)1); goto L_002EA74C;
L_002EA6CC:;
SET64(2, (s64)(s32)0x10000);
SET32(5, RW(0) + 13);
SET32(2, RW(4) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(5));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(31, 0x2ea6f0); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(2, RD(0) + (s64)1); goto L_002EA74C;
L_002EA6F8:;
SET64(2, (s64)(s32)0x10000);
SET32(5, RW(0) + 16);
SET32(2, RW(4) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(5));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(31, 0x2ea71c); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(2, RD(0) + (s64)1); goto L_002EA74C;
L_002EA724:;
SET64(2, (s64)(s32)0x10000);
SET32(5, RW(0) + 19);
SET32(2, RW(4) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(5));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(31, 0x2ea748); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(2, RD(0) + (s64)1);
L_002EA74C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}
void JP_F_002EA660(Ctx *c) { JP_B_002EA660(c, 0x2ea660); }
void JP_F_002EA6A0(Ctx *c) { JP_B_002EA660(c, 0x2ea6a0); }
void JP_F_002EA6CC(Ctx *c) { JP_B_002EA660(c, 0x2ea6cc); }
void JP_F_002EA6F8(Ctx *c) { JP_B_002EA660(c, 0x2ea6f8); }
void JP_F_002EA724(Ctx *c) { JP_B_002EA660(c, 0x2ea724); }
void JP_F_002EA74C(Ctx *c) { JP_B_002EA660(c, 0x2ea74c); }

void JP_F_002EA760(Ctx *c) { /* func_002EA760 */
ENTER(0x2ea760);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(4) + RW(2));
SET64(5, (s32)rd32(c, (RW(2) + -30832)));
SET32(3, RW(0) + 17);
if (RD(5) == RD(3)) { SET64(2, (s64)(s32)0x10000); goto L_002EA818; }
SET32(2, RW(0) + 14);
if (RD(5) == RD(2)) { SET64(2, (s64)(s32)0x10000); goto L_002EA7F0; }
SET32(2, RW(0) + 11);
if (RD(5) == RD(2)) { SET64(2, (s64)(s32)0x10000); goto L_002EA7C8; }
SET32(2, RW(0) + 8);
SET64(2, (s64)(s32)0x10000);
SET32(5, RW(0) + 9);
SET32(2, RW(4) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(5));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(31, 0x2ea7c0); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_002EA83C;
L_002EA7C8:;
SET32(5, RW(0) + 12);
SET32(2, RW(4) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(5));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(31, 0x2ea7e8); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EA838;
L_002EA7F0:;
SET32(5, RW(0) + 15);
SET32(2, RW(4) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(5));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(31, 0x2ea810); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EA838;
L_002EA818:;
SET32(5, RW(0) + 18);
SET32(2, RW(4) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(5));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(31, 0x2ea838); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
L_002EA838:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002EA83C:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002EA850(Ctx *c) { /* func_002EA850 */
ENTER(0x2ea850);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET32(4, RW(29) + 80);
SET64(5, RD(6) + RD(0));
SET64(31, 0x2ea880); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_0030C8F0(c);
{ int t = RD(18) == RD(0); SET32(16, RW(29) + 80); if (t) goto L_002EA890; }
SET64(3, RD(18) & 0xff); goto L_002EA898;
L_002EA890:;
SET32(16, RW(16) + 16);
SET64(3, RD(18) & 0xff);
L_002EA898:;
if (RD(3) != RD(0)) { SET64(5, rd16(c, (RW(16) + 0))); goto L_002EA934; }
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
c->f[1].u = rd32(c, (RW(3) + -30800));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; SET32(4, RW(0) + 1); if (t) goto L_002EA8C4; }
SET64(4, RD(0) + RD(0));
L_002EA8C4:;
SET64(3, RD(4) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002EA930; }
SET64(4, rd16(c, (RW(16) + 0)));
SET32(3, RW(0) + 10);
if (RD(4) == RD(3)) { SET64(2, (s64)(s32)0x10000); goto L_002EA904; }
SET32(3, RW(0) + 9);
{ int t = RD(4) == RD(3);  if (t) goto L_002EA900; }
SET32(3, RW(0) + 11);
{ int t = RD(4) == RD(3);  if (t) goto L_002EA900; }
 goto L_002EA930;
L_002EA900:;
SET64(2, (s64)(s32)0x10000);
L_002EA904:;
SET32(4, RW(0) + 50);
SET32(2, RW(17) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(17) + RW(2));
SET64(31, 0x2ea928); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(31, rd64(c, (RW(29) + 64))); goto L_002EAA1C;
L_002EA930:;
SET64(5, rd16(c, (RW(16) + 0)));
L_002EA934:;
{ int t = RD(5) == RD(0);  if (t) goto L_002EAA18; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ea948); SET32(6, RW(0) + 1); JP_F_002EB840(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { c->f[12].u = rd32(c, (RW(16) + 12)); goto L_002EAA08; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ea960); SET64(5, RD(0) + RD(0)); JP_F_002EEDF0(c);
c->f[1].u = rd32(c, (RW(16) + 8));
SET64(2, (s64)(s32)0x10000);
c->f[0].u = RW(0);
SET32(3, RW(0) + 1);
c->f[21].u = rd32(c, (RW(16) + 4));
SET32(2, RW(17) + RW(2));
c->fcc = F(1) < F(0);
{ int t = c->fcc; wr8(c, (RW(2) + -30408), (u8)RW(3)); if (t) goto L_002EA988; }
SET64(3, RD(0) + RD(0));
L_002EA988:;
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x893c);
SET32(2, RW(17) + RW(2));
SET32(4, RW(17) + RW(1));
wr8(c, (RW(2) + -30407), (u8)RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2ea9ac); c->f[20].u = c->f[1].u & 0x7FFFFFFFu; rt_call(c, t); }
c->f[0].f = fpu(F(20) * F(0));
SET64(7, (s64)(s32)0x10000);
SET32(7, RW(17) + RW(7));
SET64(4, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x10000);
SET64(6, (s64)(s32)0x10000);
SET64(5, (s64)(s32)0x10000);
SET32(4, RW(17) + RW(4));
SET32(3, RW(17) + RW(3));
SET32(6, RW(17) + RW(6));
wr32(c, (RW(7) + -30400), c->f[0].u);
SET32(5, RW(17) + RW(5));
wr32(c, (RW(4) + -30396), RW(0));
c->f[0].u = rd32(c, (RW(3) + -30400));
SET64(4, (s64)(s32)0x10000);
SET32(4, RW(17) + RW(4));
wr32(c, (RW(6) + -30392), c->f[0].u);
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(5) + -30388), RW(0));
SET32(3, RW(17) + RW(3));
wr32(c, (RW(4) + -30384), RW(0));
wr32(c, (RW(3) + -30376), c->f[21].u); goto L_002EAA18;
L_002EAA08:;
c->f[13].u = rd32(c, (RW(16) + 8));
c->f[14].u = rd32(c, (RW(16) + 4));
SET64(31, 0x2eaa18); SET64(4, RD(17) + RD(0)); JP_F_002ECC10(c);
L_002EAA18:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002EAA1C:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002EAA40(Ctx *c) { /* func_002EAA40 */
ENTER(0x2eaa40);
SET64(2, (s64)(s32)0x41a00000);
c->f[0].u = RW(2);
 return;
}

void JP_F_002EAA50(Ctx *c) { /* func_002EAA50 */
ENTER(0x2eaa50);
SET32(29, RW(29) + -48);
SET64(6, RD(0) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(5) + RD(0));
SET64(5, rd16(c, (RW(5) + 44)));
SET64(31, 0x2eaa74); SET64(17, RD(4) + RD(0)); JP_F_002EB840(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { c->f[12].u = rd32(c, (RW(16) + 20)); goto L_002EAA94; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2eaa8c); SET64(5, RD(0) + RD(0)); JP_F_002EEDF0(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_002EAAA8;
L_002EAA94:;
c->f[13].u = rd32(c, (RW(16) + 24));
c->f[14].u = rd32(c, (RW(16) + 28));
SET64(31, 0x2eaaa4); SET64(4, RD(17) + RD(0)); JP_F_002ECC10(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_002EAAA8:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002EAAC0(Ctx *c) { /* func_002EAAC0 */
ENTER(0x2eaac0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(0) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, RD(16) & 0xffff);
L_002EAAEC:;
SET32(2, RW(2) << 3);
SET32(2, RW(17) + RW(2));
c->f[20].u = rd32(c, (RW(2) + 48));
c->f[21].u = rd32(c, (RW(2) + 52));
SET64(31, 0x2eab04); SET64(4, RD(18) + RD(0)); JP_F_002F11A0(c);
SET64(31, 0x2eab0c); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(6, (s16)rd16(c, (RW(2) + 44)));
c->f[12].u = c->f[20].u;
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
c->f[13].u = c->f[21].u;
SET64(31, 0x2eab24); SET64(5, RD(16) & 0xffff); JP_F_002FE510(c);
SET32(16, RW(16) + 1);
SET64(3, RD(16) < (u64)(s64)4);
if (RD(3) != RD(0)) { SET64(2, RD(16) & 0xffff); { POLL(); goto L_002EAAEC; } }
SET64(16, rd16(c, (RW(17) + 84)));
if (RD(16) == RD(0)) { SET64(3, rd16(c, (RW(17) + 90))); goto L_002EAB94; }
SET64(2, rd8(c, (RW(17) + 82)));
if (RD(2) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_002EAB64; }
SET64(5, RD(16) & 0xffff);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2eab5c); SET32(6, RW(0) + 1); JP_F_002E8CB0(c);
 goto L_002EAB90;
L_002EAB64:;
SET64(31, 0x2eab6c);  JP_F_002F11A0(c);
SET64(31, 0x2eab74); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2eab80); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(5, RD(16) & 0xffff);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2eab90); SET32(6, RW(0) + 1); JP_F_002E8920(c);
L_002EAB90:;
SET64(3, rd16(c, (RW(17) + 90)));
L_002EAB94:;
{ int t = RD(3) == RD(0); SET32(16, RW(17) + 88); if (t) goto L_002EAD10; }
SET64(31, 0x2eaba4);  JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002EABB8; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002EABD0;
L_002EABB8:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002EABD0:;
SET64(3, (s64)(s32)0x4f800000);
SET64(2, (s64)(s32)0x40330000);
c->f[0].u = RW(3);
c->f[4].f = fpu_div(F(1), F(0));
SET64(3, RD(2) | 0x3333);
SET64(2, (s64)(s32)0xbfb30000);
SET64(2, RD(2) | 0x3333);
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->f[3].u = rd32(c, (RW(16) + 16));
c->f[2].u = RW(3);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(2) * F(4));
SET64(31, 0x2eac10); c->f[20].f = fpu(F(3) + F(0)); JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002EAC24; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002EAC3C;
L_002EAC24:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002EAC3C:;
SET64(3, (s64)(s32)0x4f800000);
SET64(2, (s64)(s32)0x40330000);
c->f[0].u = RW(3);
c->f[4].f = fpu_div(F(1), F(0));
SET64(3, RD(2) | 0x3333);
SET64(2, (s64)(s32)0xbfb30000);
SET64(2, RD(2) | 0x3333);
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->f[3].u = rd32(c, (RW(16) + 12));
c->f[2].u = RW(3);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(2) * F(4));
SET64(31, 0x2eac7c); c->f[21].f = fpu(F(3) + F(0)); JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002EAC90; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002EACA8;
L_002EAC90:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002EACA8:;
SET64(3, (s64)(s32)0x4f800000);
SET64(2, (s64)(s32)0x40330000);
c->f[0].u = RW(3);
SET64(4, RD(2) | 0x3333);
c->f[4].f = fpu_div(F(1), F(0));
SET64(2, (s64)(s32)0xbfb30000);
SET64(3, RD(2) | 0x3333);
SET64(9, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
c->f[1].u = RW(3);
c->f[0].u = RW(0);
c->f[3].u = rd32(c, (RW(16) + 8));
c->f[2].u = RW(4);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(2) * F(4));
{ int t = RD(2) == RD(0); c->f[12].f = fpu(F(3) + F(0)); if (t) goto L_002EACF0; }
SET32(9, RW(2) + 608);
L_002EACF0:;
SET64(5, rd16(c, (RW(16) + 0)));
SET64(4, RD(18) + RD(0));
SET64(6, rd16(c, (RW(16) + 2)));
c->f[13].u = c->f[21].u;
SET64(7, rd16(c, (RW(16) + 4)));
SET64(8, rd16(c, (RW(16) + 6)));
SET64(31, 0x2ead10); c->f[14].u = c->f[20].u; JP_F_002EA1D0(c);
L_002EAD10:;
SET64(31, rd64(c, (RW(29) + 64)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002EAD30(Ctx *c) { /* func_002EAD30 */
ENTER(0x2ead30);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x4c0000);
wr64(c, (RW(29) + 48), RD(31));
c->f[0].u = rd32(c, (RW(2) + -7936));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(5) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[21].u = c->f[12].u;
SET64(31, 0x2ead64); c->f[20].f = fpu(F(21) * F(0)); JP_F_002F11A0(c);
SET64(31, 0x2ead6c); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ead78); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(4, rd16(c, (RW(3) + -30728)));
SET64(2, RD(4) < (u64)(s64)2);
{ int t = RD(2) != RD(0);  if (t) goto L_002EAE18; }
SET32(2, RW(4) + -2);
{ int t = RD(2) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002EAE18; }
SET64(1, RD(2) < (u64)(s64)9);
{ int t = RD(1) != RD(0); SET32(3, RW(4) + -10); if (t) goto L_002EADE0; }
SET64(2, (s64)(s32)0x4c0000);
c->f[1].u = rd32(c, (RW(2) + -7944));
L_002EADB0:;
c->f[0].f = fpu(F(21) * F(1));
SET32(5, RW(5) + 8);
SET64(2, RD(5) < RD(3));
c->f[0].f = fpu(F(0) * F(1));
c->f[0].f = fpu(F(0) * F(1));
c->f[0].f = fpu(F(0) * F(1));
c->f[0].f = fpu(F(0) * F(1));
c->f[0].f = fpu(F(0) * F(1));
c->f[0].f = fpu(F(0) * F(1));
{ int t = RD(2) != RD(0); c->f[21].f = fpu(F(0) * F(1)); if (t) { POLL(); goto L_002EADB0; } }
L_002EADE0:;
SET32(3, RW(4) + -2);
SET64(1, RD(5) < RD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002EAE18; }
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7944));
L_002EADF8:;
c->f[21].f = fpu(F(21) * F(0));
SET32(5, RW(5) + 1);
SET64(2, RD(5) < RD(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002EADF8; } }
L_002EAE18:;
c->fcc = F(21) < F(20);
{ int t = !c->fcc;  if (t) goto L_002EAE28; }
c->f[21].u = c->f[20].u;
L_002EAE28:;
if (RD(16) == RD(0)) { SET64(1, RD(0) | 0x87b0); goto L_002EAE58; }
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x10000);
c->f[0].u = rd32(c, (RW(2) + -7920));
SET32(3, RW(17) + RW(3));
SET64(1, RD(0) | 0x87b0);
c->f[12].f = fpu(F(21) * F(0));
SET64(2, (s32)rd32(c, (RW(3) + -30852)));
SET64(31, 0x2eae54); SET32(4, RW(2) + RW(1)); JP_F_00323900(c);
SET64(1, RD(0) | 0x87b0);
L_002EAE58:;
c->f[12].u = c->f[21].u;
SET64(31, 0x2eae64); SET32(4, RW(17) + RW(1)); JP_F_00323370(c);
{ int t = RD(16) == RD(0); c->f[20].u = c->f[0].u; if (t) goto L_002EAE84; }
SET64(2, (s64)(s32)0x4c0000);
SET64(1, RD(0) | 0x87b0);
c->f[1].u = rd32(c, (RW(2) + -7904));
SET32(4, RW(17) + RW(1));
SET64(31, 0x2eae84); c->f[12].f = fpu(F(0) * F(1)); JP_F_00323900(c);
L_002EAE84:;
SET64(1, RD(0) | 0x89d0);
SET32(4, RW(17) + RW(1));
SET64(31, 0x2eae94); c->f[12].u = c->f[20].u; JP_F_00362820(c);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002EAEB0(Ctx *c) { /* func_002EAEB0 */
ENTER(0x2eaeb0);
SET32(29, RW(29) + -112);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 96), RD(31));
SET32(2, RW(4) + RW(2));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(0) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, rd8(c, (RW(2) + -30715)));
{ int t = RD(2) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002EAFCC; }
SET64(2, (s64)(s32)0x10000);
SET64(3, RD(2) + RD(0));
SET32(2, RW(17) + RW(2));
SET32(3, RW(17) + RW(3));
wr8(c, (RW(2) + -30715), (u8)RW(0));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(17) + RW(2));
SET64(2, rd8(c, (RW(2) + -30712)));
{ int t = RD(2) != RD(0); SET64(3, rd16(c, (RW(3) + -30714))); if (t) goto L_002EAF40; }
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x86a0);
SET64(5, RD(3) & 0xffff);
SET32(2, RW(17) + RW(2));
SET32(4, RW(17) + RW(1));
SET64(31, 0x2eaf38); wr32(c, (RW(2) + -30832), RW(5)); JP_F_00300130(c);
SET64(3, (s64)(s32)0x10000); goto L_002EAF64;
L_002EAF40:;
SET64(5, RD(3) & 0xffff);
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x86a0);
SET32(3, RW(5) + 1000);
SET32(2, RW(17) + RW(2));
SET32(4, RW(17) + RW(1));
SET64(31, 0x2eaf60); wr32(c, (RW(2) + -30832), RW(3)); JP_F_003000F0(c);
SET64(3, (s64)(s32)0x10000);
L_002EAF64:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + -1);
SET32(3, RW(17) + RW(3));
wr16(c, (RW(3) + -30828), (u16)RW(4));
SET32(2, RW(17) + RW(2));
SET64(3, (s32)rd32(c, (RW(2) + -30268)));
if (RD(3) == RD(0)) { SET32(4, RW(17) + 128); goto L_002EAF90; }
SET32(2, RW(0) + 1);
wr8(c, (RW(3) + 20), (u8)RW(2));
SET32(4, RW(17) + 128);
L_002EAF90:;
SET64(31, 0x2eaf98);  JP_F_0031CA60(c);
SET64(31, 0x2eafa0); SET32(4, RW(17) + 128); JP_F_001E9110(c);
SET32(4, RW(17) + 128);
SET64(31, 0x2eafac); SET64(5, RD(0) + RD(0)); JP_F_00158E90(c);
SET64(25, (s32)rd32(c, (RW(17) + 404)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x2eafc4); SET32(4, RW(17) + 128); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 96))); goto L_002EB480;
L_002EAFCC:;
SET64(3, rd16(c, (RW(16) + 108)));
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(19, RD(18) & 0xff); goto L_002EB000; }
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2eafe8); SET32(4, RW(17) + RW(1)); JP_F_00323850(c);
c->f[1].u = RW(0);
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002EB47C; }
SET64(19, RD(18) & 0xff);
L_002EB000:;
if (RD(19) != RD(0)) { SET64(5, rd16(c, (RW(16) + 80))); goto L_002EB1B4; }
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(0) + 57);
SET32(2, RW(17) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30832)));
if (RD(4) == RD(3)) { SET64(2, RD(0) + (s64)1); goto L_002EB080; }
SET32(2, RW(0) + 48);
{ int t = RD(4) == RD(2);  if (t) goto L_002EB07C; }
SET32(2, RW(0) + 47);
{ int t = RD(4) == RD(2);  if (t) goto L_002EB07C; }
SET32(2, RW(0) + 46);
{ int t = RD(4) == RD(2);  if (t) goto L_002EB07C; }
SET32(2, RW(0) + 45);
{ int t = RD(4) == RD(2);  if (t) goto L_002EB07C; }
SET32(2, RW(0) + 44);
{ int t = RD(4) == RD(2);  if (t) goto L_002EB07C; }
SET32(2, RW(0) + 43);
{ int t = RD(4) == RD(2);  if (t) goto L_002EB07C; }
SET32(2, RW(0) + 42);
{ int t = RD(4) == RD(2);  if (t) goto L_002EB07C; }
SET64(2, RD(0) + RD(0)); goto L_002EB080;
L_002EB07C:;
SET64(2, RD(0) + (s64)1);
L_002EB080:;
if (RD(2) != RD(0)) { SET64(5, rd16(c, (RW(16) + 44))); goto L_002EB0A0; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(17) + RW(2));
SET64(2, rd8(c, (RW(2) + -30543)));
{ int t = RD(2) != RD(0);  if (t) goto L_002EB1B0; }
SET64(5, rd16(c, (RW(16) + 44)));
L_002EB0A0:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2eb0ac); SET32(6, RW(0) + 1); JP_F_002EB840(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { c->f[12].u = rd32(c, (RW(16) + 32)); goto L_002EB194; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2eb0c4); SET64(5, RD(0) + RD(0)); JP_F_002EEDF0(c);
c->f[1].u = rd32(c, (RW(16) + 12));
SET64(2, (s64)(s32)0x10000);
c->f[0].u = RW(0);
SET32(3, RW(0) + 1);
c->f[20].u = rd32(c, (RW(16) + 16));
SET32(2, RW(17) + RW(2));
c->fcc = F(1) < F(0);
{ int t = c->fcc; wr8(c, (RW(2) + -30408), (u8)RW(3)); if (t) goto L_002EB0EC; }
SET64(3, RD(0) + RD(0));
L_002EB0EC:;
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x893c);
SET32(2, RW(17) + RW(2));
SET32(4, RW(17) + RW(1));
wr8(c, (RW(2) + -30407), (u8)RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2eb110); c->f[21].u = c->f[1].u & 0x7FFFFFFFu; rt_call(c, t); }
c->f[0].f = fpu(F(21) * F(0));
SET64(6, (s64)(s32)0x10000);
SET32(6, RW(17) + RW(6));
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET64(5, (s64)(s32)0x10000);
SET64(4, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET32(2, RW(17) + RW(2));
SET32(5, RW(17) + RW(5));
wr32(c, (RW(6) + -30400), c->f[0].u);
SET32(4, RW(17) + RW(4));
wr32(c, (RW(3) + -30396), RW(0));
c->f[1].u = RW(0);
c->f[0].u = rd32(c, (RW(2) + -30400));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
wr32(c, (RW(5) + -30392), c->f[0].u);
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30388), RW(0));
SET32(2, RW(17) + RW(2));
wr32(c, (RW(3) + -30384), RW(0));
wr32(c, (RW(2) + -30376), c->f[20].u);
c->f[0].u = rd32(c, (RW(16) + 8));
c->fcc = F(0) < F(1);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_002EB188; }
SET64(2, (s64)(s32)0x41c00000);
c->f[0].u = RW(2);
SET64(2, (s64)(s32)0x10000);
L_002EB188:;
SET32(2, RW(17) + RW(2));
wr32(c, (RW(2) + -30732), c->f[0].u); goto L_002EB2BC;
L_002EB194:;
SET64(4, RD(17) + RD(0));
c->f[13].u = rd32(c, (RW(16) + 36));
c->f[14].u = rd32(c, (RW(16) + 40));
SET64(31, 0x2eb1a8); SET64(20, RD(0) + (s64)1); JP_F_002ECC10(c);
SET64(1, RD(0) | 0x89d0); goto L_002EB2C0;
L_002EB1B0:;
SET64(5, rd16(c, (RW(16) + 80)));
L_002EB1B4:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2eb1c0); SET32(6, RW(0) + 1); JP_F_002EB840(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { c->f[12].u = rd32(c, (RW(16) + 20)); goto L_002EB2A8; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2eb1d8); SET64(5, RD(0) + RD(0)); JP_F_002EEDF0(c);
c->f[1].u = rd32(c, (RW(16) + 12));
SET64(2, (s64)(s32)0x10000);
c->f[0].u = RW(0);
SET32(3, RW(0) + 1);
c->f[20].u = rd32(c, (RW(16) + 16));
SET32(2, RW(17) + RW(2));
c->fcc = F(1) < F(0);
{ int t = c->fcc; wr8(c, (RW(2) + -30408), (u8)RW(3)); if (t) goto L_002EB200; }
SET64(3, RD(0) + RD(0));
L_002EB200:;
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x893c);
SET32(2, RW(17) + RW(2));
SET32(4, RW(17) + RW(1));
wr8(c, (RW(2) + -30407), (u8)RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2eb224); c->f[21].u = c->f[1].u & 0x7FFFFFFFu; rt_call(c, t); }
c->f[0].f = fpu(F(21) * F(0));
SET64(6, (s64)(s32)0x10000);
SET32(6, RW(17) + RW(6));
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET64(5, (s64)(s32)0x10000);
SET64(4, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET32(2, RW(17) + RW(2));
SET32(5, RW(17) + RW(5));
wr32(c, (RW(6) + -30400), c->f[0].u);
SET32(4, RW(17) + RW(4));
wr32(c, (RW(3) + -30396), RW(0));
c->f[1].u = RW(0);
c->f[0].u = rd32(c, (RW(2) + -30400));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
wr32(c, (RW(5) + -30392), c->f[0].u);
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30388), RW(0));
SET32(2, RW(17) + RW(2));
wr32(c, (RW(3) + -30384), RW(0));
wr32(c, (RW(2) + -30376), c->f[20].u);
c->f[0].u = rd32(c, (RW(16) + 8));
c->fcc = F(0) < F(1);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_002EB29C; }
SET64(2, (s64)(s32)0x41c00000);
c->f[0].u = RW(2);
SET64(2, (s64)(s32)0x10000);
L_002EB29C:;
SET32(2, RW(17) + RW(2));
wr32(c, (RW(2) + -30732), c->f[0].u); goto L_002EB2BC;
L_002EB2A8:;
SET64(4, RD(17) + RD(0));
c->f[13].u = rd32(c, (RW(16) + 24));
c->f[14].u = rd32(c, (RW(16) + 28));
SET64(31, 0x2eb2bc); SET64(20, RD(0) + (s64)1); JP_F_002ECC10(c);
L_002EB2BC:;
SET64(1, RD(0) | 0x89d0);
L_002EB2C0:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x2eb2cc); SET32(4, RW(17) + RW(1)); JP_F_003627A0(c);
SET64(31, 0x2eb2d4); SET64(4, RD(17) + RD(0)); JP_F_002F11A0(c);
SET64(31, 0x2eb2dc); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2eb2e8); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(1, RD(0) | 0x89d0);
SET32(5, RW(0) + 1);
SET64(31, 0x2eb2f8); SET32(4, RW(2) + RW(1)); JP_F_00362870(c);
c->f[12].u = rd32(c, (RW(16) + 0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2eb308); SET32(5, RW(0) + 1); JP_F_002EAD30(c);
SET64(2, rd8(c, (RW(16) + 4)));
if (RD(2) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002EB328; }
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(0) + 1);
SET32(2, RW(17) + RW(2));
wr8(c, (RW(2) + -30708), (u8)RW(3));
SET64(4, RD(17) + RD(0));
L_002EB328:;
SET64(31, 0x2eb330); SET64(5, RD(16) + RD(0)); JP_F_002EAAC0(c);
if (RD(19) != RD(0)) { SET64(3, rd16(c, (RW(16) + 110))); goto L_002EB37C; }
SET64(18, (s16)rd16(c, (RW(16) + 108)));
SET32(3, RW(0) + -1);
{ int t = RD(18) == RD(3);  if (t) goto L_002EB378; }
SET64(31, 0x2eb350); SET64(4, RD(17) + RD(0)); JP_F_002F11A0(c);
SET64(31, 0x2eb358); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2eb364); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
SET64(5, RD(18) & 0xffff);
SET64(6, RD(2) + RD(0));
SET64(31, 0x2eb378); SET64(7, RD(17) + RD(0)); JP_F_002F6870(c);
L_002EB378:;
SET64(3, rd16(c, (RW(16) + 110)));
L_002EB37C:;
if (RD(3) == RD(0)) { SET64(3, RD(20) & 0xff); goto L_002EB430; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(17) + RW(2));
SET64(6, rd16(c, (RW(2) + -30288)));
if (RD(6) == RD(0)) { SET64(3, rd16(c, (RW(16) + 110))); goto L_002EB3D4; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(17) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30284)));
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002EB3C8; }
SET32(4, RW(2) + 128);
SET64(31, 0x2eb3b8); SET64(5, RD(17) + RD(0)); JP_F_001E9020(c);
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(17) + RW(2));
wr32(c, (RW(2) + -30284), RW(0));
SET64(2, (s64)(s32)0x10000);
L_002EB3C8:;
SET32(2, RW(17) + RW(2));
wr16(c, (RW(2) + -30288), (u16)RW(0));
SET64(3, rd16(c, (RW(16) + 110)));
L_002EB3D4:;
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(17) + RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2eb3e8); wr16(c, (RW(2) + -30288), (u16)RW(3)); JP_F_002F11A0(c);
SET64(31, 0x2eb3f0); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2eb3fc); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(2) + 128);
SET32(3, RW(17) + RW(3));
wr32(c, (RW(3) + -30284), RW(2));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(17) + RW(2));
SET64(6, rd16(c, (RW(2) + -30288)));
SET64(31, 0x2eb420); SET64(5, RD(17) + RD(0)); JP_F_001E90A0(c);
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2eb42c); SET32(4, RW(17) + RW(1)); JP_F_00323220(c);
SET64(3, RD(20) & 0xff);
L_002EB430:;
{ int t = RD(3) != RD(0);  if (t) goto L_002EB47C; }
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
c->f[1].u = rd32(c, (RW(3) + -30800));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; SET32(4, RW(0) + 1); if (t) goto L_002EB45C; }
SET64(4, RD(0) + RD(0));
L_002EB45C:;
SET64(3, RD(4) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002EB47C; }
{ int t = RD(19) != RD(0);  if (t) goto L_002EB47C; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2eb47c); SET64(5, RD(16) + RD(0)); JP_F_002EAA50(c);
L_002EB47C:;
SET64(31, rd64(c, (RW(29) + 96)));
L_002EB480:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002EB4B0(Ctx *c) { /* func_002EB4B0 */
ENTER(0x2eb4b0);
SET32(29, RW(29) + -80);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, rd16(c, (RW(5) + 108)));
{ int t = RD(3) != RD(2); SET64(16, RD(5) + RD(0)); if (t) goto L_002EB4F0; }
SET64(31, 0x2eb4e8); SET64(6, RD(0) + RD(0)); JP_F_002EAEB0(c);
SET64(31, rd64(c, (RW(29) + 64))); goto L_002EB73C;
L_002EB4F0:;
SET64(2, rd8(c, (RW(16) + 7)));
if (RD(2) == RD(0)) { SET64(5, RD(0) + RD(0)); goto L_002EB50C; }
SET64(31, 0x2eb504); SET64(6, RD(0) + RD(0)); JP_F_002EAEB0(c);
 goto L_002EB738;
L_002EB50C:;
SET64(31, 0x2eb514);  JP_F_002EEDF0(c);
SET64(2, rd8(c, (RW(16) + 6)));
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002EB550; }
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 2);
SET32(2, RW(17) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(17) + RW(2));
SET64(31, 0x2eb548); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EB574;
L_002EB550:;
SET32(4, RW(0) + 3);
SET32(2, RW(17) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(17) + RW(2));
SET64(31, 0x2eb574); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
L_002EB574:;
SET64(2, (s64)(s32)0x4c0000);
SET32(3, RW(0) + 1);
c->f[0].u = rd32(c, (RW(2) + -7992));
c->f[1].u = rd32(c, (RW(16) + 12));
c->f[20].u = rd32(c, (RW(16) + 16));
SET64(2, (s64)(s32)0x10000);
c->f[1].f = fpu(F(0) * F(1));
SET32(2, RW(17) + RW(2));
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
{ int t = c->fcc; wr8(c, (RW(2) + -30408), (u8)RW(3)); if (t) goto L_002EB5AC; }
SET64(3, RD(0) + RD(0));
L_002EB5AC:;
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x893c);
SET32(2, RW(17) + RW(2));
SET32(4, RW(17) + RW(1));
wr8(c, (RW(2) + -30407), (u8)RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2eb5d0); c->f[21].u = c->f[1].u & 0x7FFFFFFFu; rt_call(c, t); }
c->f[0].f = fpu(F(21) * F(0));
SET64(5, (s64)(s32)0x10000);
SET32(5, RW(17) + RW(5));
SET64(4, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET64(6, (s64)(s32)0x10000);
SET32(4, RW(17) + RW(4));
SET32(3, RW(17) + RW(3));
SET32(2, RW(17) + RW(2));
wr32(c, (RW(5) + -30400), c->f[0].u);
SET32(6, RW(17) + RW(6));
wr32(c, (RW(4) + -30396), RW(0));
SET64(5, (s64)(s32)0x10000);
c->f[0].u = rd32(c, (RW(3) + -30400));
SET64(4, (s64)(s32)0x10000);
SET32(5, RW(17) + RW(5));
SET64(1, RD(0) | 0x87b0);
wr32(c, (RW(2) + -30392), c->f[0].u);
SET64(3, RD(4) + RD(0));
wr32(c, (RW(6) + -30388), RW(0));
SET64(2, (s64)(s32)0x4c0000);
SET32(4, RW(17) + RW(4));
wr32(c, (RW(5) + -30384), RW(0));
wr32(c, (RW(4) + -30376), c->f[20].u);
SET32(3, RW(17) + RW(3));
c->f[0].u = rd32(c, (RW(2) + -7912));
SET64(18, rd8(c, (RW(16) + 5)));
c->f[20].u = rd32(c, (RW(16) + 0));
SET64(2, (s32)rd32(c, (RW(3) + -30852)));
c->f[12].f = fpu(F(20) * F(0));
SET64(31, 0x2eb654); SET32(4, RW(2) + RW(1)); JP_F_00323900(c);
{ int t = RD(18) == RD(0);  if (t) goto L_002EB67C; }
SET64(1, RD(0) | 0x87b0);
SET32(4, RW(17) + RW(1));
SET64(31, 0x2eb66c); c->f[12].u = c->f[20].u; JP_F_00323230(c);
SET64(1, RD(0) | 0x89d0);
c->f[12].u = c->f[0].u;
SET64(31, 0x2eb67c); SET32(4, RW(17) + RW(1)); JP_F_00362820(c);
L_002EB67C:;
SET64(2, (s64)(s32)0x4c0000);
SET64(1, RD(0) | 0x87b0);
c->f[0].u = rd32(c, (RW(2) + -7896));
SET32(4, RW(17) + RW(1));
SET64(31, 0x2eb694); c->f[12].f = fpu(F(20) * F(0)); JP_F_00323900(c);
SET64(1, RD(0) | 0x89d0);
SET32(5, RW(0) + 1);
SET64(31, 0x2eb6a4); SET32(4, RW(17) + RW(1)); JP_F_003627A0(c);
SET64(31, 0x2eb6ac); SET64(4, RD(17) + RD(0)); JP_F_002F11A0(c);
SET64(31, 0x2eb6b4); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2eb6c0); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(1, RD(0) | 0x89d0);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2eb6d0); SET32(4, RW(2) + RW(1)); JP_F_00362870(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
c->f[1].u = rd32(c, (RW(3) + -30800));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; SET32(4, RW(0) + 1); if (t) goto L_002EB6F4; }
SET64(4, RD(0) + RD(0));
L_002EB6F4:;
SET64(3, RD(4) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002EB738; }
SET64(5, RD(16) + RD(0));
SET64(31, 0x2eb70c); SET64(4, RD(17) + RD(0)); JP_F_002EAA50(c);
SET64(31, 0x2eb714); SET64(4, RD(17) + RD(0)); JP_F_002F11A0(c);
SET64(31, 0x2eb71c); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2eb728); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(1, RD(0) | 0x89d0);
SET32(5, RW(0) + 5);
SET64(31, 0x2eb738); SET32(4, RW(2) + RW(1)); JP_F_00362760(c);
L_002EB738:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002EB73C:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002EB760(Ctx *c) { /* func_002EB760 */
ENTER(0x2eb760);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x4c0000);
wr64(c, (RW(29) + 64), RD(31));
SET64(3, (s64)(s32)0x10000);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[0].u = rd32(c, (RW(2) + -7912));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET32(3, RW(4) + RW(3));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(18, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(1, RD(0) | 0x87b0);
c->f[20].u = c->f[12].u;
SET64(3, (s32)rd32(c, (RW(3) + -30852)));
c->f[12].f = fpu(F(20) * F(0));
SET64(17, RD(5) + RD(0));
SET64(16, RD(6) + RD(0));
SET64(31, 0x2eb7ac); SET32(4, RW(3) + RW(1)); JP_F_00323900(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) & 0xff); goto L_002EB7D8; }
SET64(1, RD(0) | 0x87b0);
SET32(4, RW(18) + RW(1));
SET64(31, 0x2eb7c4); c->f[12].u = c->f[20].u; JP_F_00323230(c);
SET64(1, RD(0) | 0x89d0);
c->f[12].u = c->f[0].u;
SET64(31, 0x2eb7d4); SET32(4, RW(18) + RW(1)); JP_F_00362820(c);
SET64(2, RD(16) & 0xff);
L_002EB7D8:;
{ int t = RD(2) != RD(0);  if (t) goto L_002EB800; }
SET64(2, (s64)(s32)0x4c0000);
SET64(1, RD(0) | 0x87b0);
c->f[0].u = rd32(c, (RW(2) + -7896));
SET32(4, RW(18) + RW(1));
SET64(31, 0x2eb7f8); c->f[12].f = fpu(F(20) * F(0)); JP_F_00323900(c);
SET64(31, rd64(c, (RW(29) + 64))); goto L_002EB81C;
L_002EB800:;
SET64(2, (s64)(s32)0x4c0000);
SET64(1, RD(0) | 0x87b0);
c->f[0].u = rd32(c, (RW(2) + -7888));
SET32(4, RW(18) + RW(1));
SET64(31, 0x2eb818); c->f[12].f = fpu(F(20) * F(0)); JP_F_00323900(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_002EB81C:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

static void JP_B_002EB840(Ctx *c, u32 entry) { /* func_002EB840 */
ENTER(entry);
switch (entry) { case 0x2eb92c: goto L_002EB92C; case 0x2eb95c: goto L_002EB95C; case 0x2eb98c: goto L_002EB98C; case 0x2eb9bc: goto L_002EB9BC; case 0x2eb9ec: goto L_002EB9EC; case 0x2eba1c: goto L_002EBA1C; case 0x2eba4c: goto L_002EBA4C; case 0x2eba7c: goto L_002EBA7C; case 0x2ebaac: goto L_002EBAAC; case 0x2ebadc: goto L_002EBADC; case 0x2ebb0c: goto L_002EBB0C; case 0x2ebb3c: goto L_002EBB3C; case 0x2ebb44: goto L_002EBB44; case 0x2ebb6c: goto L_002EBB6C; case 0x2ebb9c: goto L_002EBB9C; case 0x2ebbcc: goto L_002EBBCC; case 0x2ebbfc: goto L_002EBBFC; case 0x2ebc2c: goto L_002EBC2C; case 0x2ebc5c: goto L_002EBC5C; case 0x2ebc8c: goto L_002EBC8C; }
L_002EB840:;
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
{ int t = RD(6) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_002EB900; }
SET64(31, 0x2eb878);  JP_F_002F11A0(c);
SET64(31, 0x2eb880); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2eb88c); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(4, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(2) + RW(4));
SET64(17, RD(2) + RD(0));
SET64(4, rd16(c, (RW(4) + -30728)));
SET32(3, RW(2) + RW(3));
SET32(2, RW(4) + 1);
wr16(c, (RW(3) + -30728), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002EB8EC; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(17) + RW(2));
SET64(16, rd16(c, (RW(2) + -30728)));
SET64(31, 0x2eb8cc); SET64(4, RD(17) + RD(0)); JP_F_002F11A0(c);
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
SET64(31, 0x2eb8d8); SET64(21, RD(2) + RD(0)); JP_F_002FE3A0(c);
SET64(5, rd16(c, (RW(21) + 44)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x2eb8e8); SET64(6, RD(16) + RD(0)); JP_F_0031F660(c);
SET64(2, (s64)(s32)0x10000);
L_002EB8EC:;
SET64(1, RD(0) | 0x89d0);
SET32(2, RW(17) + RW(2));
SET64(5, rd16(c, (RW(2) + -30728)));
SET64(31, 0x2eb900); SET32(4, RW(17) + RW(1)); JP_F_00362840(c);
L_002EB900:;
SET64(2, RD(19) & 0xffff);
SET64(1, RD(2) < (u64)(s64)20);
if (RD(1) == RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002EB930; }
SET64(3, (s64)(s32)0x4c0000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + -9664);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x2eb840: goto L_002EB840; case 0x2eb92c: goto L_002EB92C; case 0x2eb95c: goto L_002EB95C; case 0x2eb98c: goto L_002EB98C; case 0x2eb9bc: goto L_002EB9BC; case 0x2eb9ec: goto L_002EB9EC; case 0x2eba1c: goto L_002EBA1C; case 0x2eba4c: goto L_002EBA4C; case 0x2eba7c: goto L_002EBA7C; case 0x2ebaac: goto L_002EBAAC; case 0x2ebadc: goto L_002EBADC; case 0x2ebb0c: goto L_002EBB0C; case 0x2ebb3c: goto L_002EBB3C; case 0x2ebb44: goto L_002EBB44; case 0x2ebb6c: goto L_002EBB6C; case 0x2ebb9c: goto L_002EBB9C; case 0x2ebbcc: goto L_002EBBCC; case 0x2ebbfc: goto L_002EBBFC; case 0x2ebc2c: goto L_002EBC2C; case 0x2ebc5c: goto L_002EBC5C; case 0x2ebc8c: goto L_002EBC8C; default: rt_jump(c, t); return; } }
L_002EB92C:;
SET64(2, (s64)(s32)0x10000);
L_002EB930:;
SET32(4, RW(0) + 31);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2eb954); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EBCB8;
L_002EB95C:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 32);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2eb984); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EBCB8;
L_002EB98C:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 33);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2eb9b4); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EBCB8;
L_002EB9BC:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 34);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2eb9e4); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EBCB8;
L_002EB9EC:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 35);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2eba14); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EBCB8;
L_002EBA1C:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 36);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2eba44); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EBCB8;
L_002EBA4C:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 37);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2eba74); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EBCB8;
L_002EBA7C:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 38);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2ebaa4); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EBCB8;
L_002EBAAC:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 39);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2ebad4); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EBCB8;
L_002EBADC:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 16);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2ebb04); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EBCB8;
L_002EBB0C:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 19);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2ebb34); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EBCB8;
L_002EBB3C:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 49);
L_002EBB44:;
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2ebb64); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EBCB8;
L_002EBB6C:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 50);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2ebb94); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EBCB8;
L_002EBB9C:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 42);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2ebbc4); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(18, RD(0) + (s64)1); goto L_002EBCB8;
L_002EBBCC:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 43);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2ebbf4); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(18, RD(0) + (s64)1); goto L_002EBCB8;
L_002EBBFC:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 44);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2ebc24); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(18, RD(0) + (s64)1); goto L_002EBCB8;
L_002EBC2C:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 45);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2ebc54); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(18, RD(0) + (s64)1); goto L_002EBCB8;
L_002EBC5C:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 46);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2ebc84); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(18, RD(0) + (s64)1); goto L_002EBCB8;
L_002EBC8C:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 47);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2ebcb4); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(18, RD(0) + (s64)1);
L_002EBCB8:;
if (RD(18) == RD(0)) { SET64(2, RD(18) + RD(0)); goto L_002EBCFC; }
SET64(31, 0x2ebcc8); SET64(4, RD(20) + RD(0)); JP_F_002F11A0(c);
SET64(31, 0x2ebcd0); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ebcdc); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(4, (s64)(s32)0x10000);
SET64(3, RD(4) + RD(0));
SET32(4, RW(2) + RW(4));
SET32(3, RW(2) + RW(3));
SET64(2, rd16(c, (RW(4) + -30726)));
SET32(2, RW(2) + 1);
wr16(c, (RW(3) + -30726), (u16)RW(2));
SET64(2, RD(18) + RD(0));
L_002EBCFC:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}
void JP_F_002EB840(Ctx *c) { JP_B_002EB840(c, 0x2eb840); }
void JP_F_002EB92C(Ctx *c) { JP_B_002EB840(c, 0x2eb92c); }
void JP_F_002EB95C(Ctx *c) { JP_B_002EB840(c, 0x2eb95c); }
void JP_F_002EB98C(Ctx *c) { JP_B_002EB840(c, 0x2eb98c); }
void JP_F_002EB9BC(Ctx *c) { JP_B_002EB840(c, 0x2eb9bc); }
void JP_F_002EB9EC(Ctx *c) { JP_B_002EB840(c, 0x2eb9ec); }
void JP_F_002EBA1C(Ctx *c) { JP_B_002EB840(c, 0x2eba1c); }
void JP_F_002EBA4C(Ctx *c) { JP_B_002EB840(c, 0x2eba4c); }
void JP_F_002EBA7C(Ctx *c) { JP_B_002EB840(c, 0x2eba7c); }
void JP_F_002EBAAC(Ctx *c) { JP_B_002EB840(c, 0x2ebaac); }
void JP_F_002EBADC(Ctx *c) { JP_B_002EB840(c, 0x2ebadc); }
void JP_F_002EBB0C(Ctx *c) { JP_B_002EB840(c, 0x2ebb0c); }
void JP_F_002EBB3C(Ctx *c) { JP_B_002EB840(c, 0x2ebb3c); }
void JP_F_002EBB44(Ctx *c) { JP_B_002EB840(c, 0x2ebb44); }
void JP_F_002EBB6C(Ctx *c) { JP_B_002EB840(c, 0x2ebb6c); }
void JP_F_002EBB9C(Ctx *c) { JP_B_002EB840(c, 0x2ebb9c); }
void JP_F_002EBBCC(Ctx *c) { JP_B_002EB840(c, 0x2ebbcc); }
void JP_F_002EBBFC(Ctx *c) { JP_B_002EB840(c, 0x2ebbfc); }
void JP_F_002EBC2C(Ctx *c) { JP_B_002EB840(c, 0x2ebc2c); }
void JP_F_002EBC5C(Ctx *c) { JP_B_002EB840(c, 0x2ebc5c); }
void JP_F_002EBC8C(Ctx *c) { JP_B_002EB840(c, 0x2ebc8c); }

void JP_F_002EBD20(Ctx *c) { /* func_002EBD20 */
ENTER(0x2ebd20);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_002EBD30(Ctx *c) { /* func_002EBD30 */
ENTER(0x2ebd30);
SET32(29, RW(29) + -48);
SET64(1, RD(0) | 0x87b0);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2ebd54); SET32(4, RW(17) + RW(1)); JP_F_00323870(c);
c->f[1].u = RW(0);
c->fcc = F(1) == F(0);
if (c->fcc) { SET64(4, RD(17) + RD(0)); goto L_002EBD78; }
SET64(31, 0x2ebd70); SET32(4, RW(17) + 128); JP_F_0031CD40(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_002EC0F8;
L_002EBD78:;
SET64(31, 0x2ebd80);  JP_F_002F11A0(c);
SET64(31, 0x2ebd88); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ebd94); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(0) + 25);
SET32(3, RW(2) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + -30832)));
if (RD(3) == RD(4)) { SET64(4, RD(17) + RD(0)); goto L_002EBEB8; }
SET32(2, RW(0) + 28);
if (RD(3) == RD(2)) { SET64(4, RD(17) + RD(0)); goto L_002EBE84; }
SET32(2, RW(0) + 1019);
if (RD(3) == RD(2)) { SET64(4, RD(17) + RD(0)); goto L_002EBE50; }
SET32(2, RW(0) + 1018);
{ int t = RD(3) == RD(2);  if (t) goto L_002EBE4C; }
SET32(2, RW(0) + 1017);
{ int t = RD(3) == RD(2);  if (t) goto L_002EBE4C; }
SET32(2, RW(0) + 1016);
{ int t = RD(3) == RD(2);  if (t) goto L_002EBE4C; }
SET32(2, RW(0) + 1002);
if (RD(3) == RD(2)) { SET64(4, RD(17) + RD(0)); goto L_002EBE18; }
SET32(2, RW(0) + 1001);
{ int t = RD(3) == RD(2);  if (t) goto L_002EBE14; }
SET32(2, RW(0) + 1000);
{ int t = RD(3) == RD(2);  if (t) goto L_002EBE14; }
SET64(4, RD(17) + RD(0)); goto L_002EBEEC;
L_002EBE14:;
SET64(4, RD(17) + RD(0));
L_002EBE18:;
SET64(31, 0x2ebe20);  JP_F_002F11A0(c);
SET64(31, 0x2ebe28); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ebe34); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(1, RD(0) | 0x89d0);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2ebe44); SET32(4, RW(2) + RW(1)); JP_F_00362760(c);
SET64(3, (s64)(s32)0x10000); goto L_002EBF1C;
L_002EBE4C:;
SET64(4, RD(17) + RD(0));
L_002EBE50:;
SET64(31, 0x2ebe58);  JP_F_002F11A0(c);
SET64(31, 0x2ebe60); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ebe6c); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(1, RD(0) | 0x89d0);
SET32(5, RW(0) + 1);
SET64(31, 0x2ebe7c); SET32(4, RW(2) + RW(1)); JP_F_00362760(c);
 goto L_002EBF18;
L_002EBE84:;
SET64(31, 0x2ebe8c);  JP_F_002F11A0(c);
SET64(31, 0x2ebe94); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ebea0); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(1, RD(0) | 0x89d0);
SET32(5, RW(0) + 2);
SET64(31, 0x2ebeb0); SET32(4, RW(2) + RW(1)); JP_F_00362760(c);
 goto L_002EBF18;
L_002EBEB8:;
SET64(31, 0x2ebec0);  JP_F_002F11A0(c);
SET64(31, 0x2ebec8); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ebed4); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(1, RD(0) | 0x89d0);
SET32(5, RW(0) + 4);
SET64(31, 0x2ebee4); SET32(4, RW(2) + RW(1)); JP_F_00362760(c);
 goto L_002EBF18;
L_002EBEEC:;
SET64(31, 0x2ebef4);  JP_F_002F11A0(c);
SET64(31, 0x2ebefc); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ebf08); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(1, RD(0) | 0x89d0);
SET32(5, RW(0) + 3);
SET64(31, 0x2ebf18); SET32(4, RW(2) + RW(1)); JP_F_00362760(c);
L_002EBF18:;
SET64(3, (s64)(s32)0x10000);
L_002EBF1C:;
SET32(4, RW(0) + 22);
SET32(3, RW(17) + RW(3));
SET64(5, (s32)rd32(c, (RW(3) + -30832)));
{ int t = RD(5) == RD(4); SET32(16, RW(16) + 136); if (t) goto L_002EC0F4; }
SET32(3, RW(0) + 21);
{ int t = RD(5) == RD(3);  if (t) goto L_002EC0F4; }
SET32(3, RW(0) + 20);
{ int t = RD(5) == RD(3);  if (t) goto L_002EC0F4; }
SET32(3, RW(0) + 2);
if (RD(5) == RD(3)) { SET64(4, RD(17) + RD(0)); goto L_002EC0D8; }
SET32(2, RW(0) + 1);
if (RD(5) == RD(2)) { SET64(2, rd16(c, (RW(16) + 108))); goto L_002EBF68; }
SET64(4, RD(17) + RD(0)); goto L_002EC0E8;
L_002EBF68:;
if (RD(2) == RD(3)) { SET64(4, RD(17) + RD(0)); goto L_002EC0C8; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(17) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30268)));
{ int t = RD(4) == RD(0);  if (t) goto L_002EC0C4; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2ebf94);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002EC0C4; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(17) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30268)));
{ int t = RD(4) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_002EBFC4; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x2ebfc0);  rt_call(c, t); }
SET64(3, RD(2) & 0xffff);
L_002EBFC4:;
SET64(3, RD(3) & 0xffff);
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(2, (s64)(s32)0x10000); goto L_002EC040; }
SET32(5, RW(0) + 1);
if (RD(3) == RD(5)) { SET64(3, (s64)(s32)0x10000); goto L_002EC018; }
if (RD(3) == RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002EBFF0; }
 goto L_002EC064;
L_002EBFF0:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 22);
SET32(3, RW(17) + RW(3));
wr16(c, (RW(3) + -30828), (u16)RW(4));
SET32(2, RW(17) + RW(2));
wr8(c, (RW(2) + -30826), (u8)RW(5));
SET64(31, 0x2ec010); SET64(4, RD(17) + RD(0)); JP_F_002EE170(c);
 goto L_002EC064;
L_002EC018:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 20);
SET32(3, RW(17) + RW(3));
wr16(c, (RW(3) + -30828), (u16)RW(4));
SET32(2, RW(17) + RW(2));
wr8(c, (RW(2) + -30826), (u8)RW(5));
SET64(31, 0x2ec038); SET64(4, RD(17) + RD(0)); JP_F_002EE170(c);
 goto L_002EC064;
L_002EC040:;
SET32(4, RW(0) + 21);
SET32(2, RW(17) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(17) + RW(2));
SET64(31, 0x2ec064); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
L_002EC064:;
SET64(2, (s64)(s32)0x4c0000);
SET64(1, RD(0) | 0x87b0);
c->f[1].u = rd32(c, (RW(16) + 0));
SET32(4, RW(17) + RW(1));
c->f[0].u = rd32(c, (RW(2) + -7888));
SET64(31, 0x2ec080); c->f[12].f = fpu(F(0) * F(1)); JP_F_00323900(c);
SET64(1, RD(0) | 0x89d0);
SET32(5, RW(0) + 2);
SET64(31, 0x2ec090); SET32(4, RW(17) + RW(1)); JP_F_003627A0(c);
SET64(31, 0x2ec098); SET64(4, RD(17) + RD(0)); JP_F_002F11A0(c);
SET64(31, 0x2ec0a0); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ec0ac); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(1, RD(0) | 0x89d0);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2ec0bc); SET32(4, RW(2) + RW(1)); JP_F_00362870(c);
 goto L_002EC0F4;
L_002EC0C4:;
SET64(4, RD(17) + RD(0));
L_002EC0C8:;
SET64(31, 0x2ec0d0); SET64(5, RD(16) + RD(0)); JP_F_002EB4B0(c);
 goto L_002EC0F4;
L_002EC0D8:;
SET64(31, 0x2ec0e0); SET64(5, RD(16) + RD(0)); JP_F_002EB4B0(c);
 goto L_002EC0F4;
L_002EC0E8:;
SET64(5, RD(16) + RD(0));
SET64(31, 0x2ec0f4); SET64(6, RD(0) + RD(0)); JP_F_002EAEB0(c);
L_002EC0F4:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002EC0F8:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002EC110(Ctx *c) { /* func_002EC110 */
ENTER(0x2ec110);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_002EC120(Ctx *c) { /* func_002EC120 */
ENTER(0x2ec120);
SET32(29, RW(29) + -128);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 80), RD(31));
SET32(2, RW(4) + RW(2));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd8(c, (RW(2) + -30528)));
{ int t = RD(2) == RD(0); SET64(20, RD(4) + RD(0)); if (t) goto L_002EC2DC; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(20) + RW(2));
SET64(2, rd8(c, (RW(2) + -30524)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(28) + -29872))); goto L_002EC16C; }
SET64(2, RD(0) + RD(0)); goto L_002EC2E0;
L_002EC16C:;
SET64(18, (s32)rd32(c, (RW(2) + 680)));
{ int t = RD(18) == RD(0); SET64(19, RD(0) + RD(0)); if (t) goto L_002EC26C; }
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(0) + 255);
SET32(2, RW(20) + RW(2));
SET64(2, rd8(c, (RW(2) + -30507)));
if (RD(2) == RD(3)) { SET64(2, (s64)(s32)0x10000); goto L_002EC198; }
SET64(2, RD(0) + (s64)1); goto L_002EC1AC;
L_002EC198:;
SET32(2, RW(20) + RW(2));
SET64(2, rd8(c, (RW(2) + -30506)));
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_002EC1AC; }
SET64(2, RD(0) + (s64)1);
L_002EC1AC:;
if (RD(2) == RD(0)) { SET64(2, RD(19) & 0xff); goto L_002EC270; }
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(3) + RD(0));
SET32(3, RW(20) + RW(3));
SET32(2, RW(20) + RW(2));
SET64(17, rd8(c, (RW(3) + -30507)));
SET32(3, RW(0) + 255);
{ int t = RD(17) == RD(3); SET64(16, rd8(c, (RW(2) + -30506))); if (t) goto L_002EC210; }
SET64(3, (s32)rd32(c, (RW(20) + 44)));
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET32(6, RW(29) + 112);
wr32(c, (RW(29) + 124), RW(2));
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
SET64(31, 0x2ec204); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); JP_F_002418A0(c);
if (RD(2) == RD(0)) { SET64(5, RD(16) & 0xff); goto L_002EC214; }
SET64(19, RD(0) + (s64)1);
L_002EC210:;
SET64(5, RD(16) & 0xff);
L_002EC214:;
SET32(2, RW(0) + 255);
if (RD(5) == RD(2)) { SET32(2, RW(0) + 255); goto L_002EC25C; }
SET64(3, (s32)rd32(c, (RW(20) + 44)));
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(18) + RD(0));
SET32(6, RW(29) + 96);
wr32(c, (RW(29) + 108), RW(2));
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
SET64(31, 0x2ec24c); wr128(c, (RW(29) + 96) & ~15u, &c->r[2]); JP_F_002418A0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002EC258; }
SET64(19, RD(0) + (s64)1);
L_002EC258:;
SET32(2, RW(0) + 255);
L_002EC25C:;
{ int t = RD(17) != RD(2);  if (t) goto L_002EC26C; }
SET64(2, RD(0) + RD(0)); goto L_002EC2E0;
L_002EC26C:;
SET64(2, RD(19) & 0xff);
L_002EC270:;
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002EC280; }
SET64(2, RD(0) + RD(0)); goto L_002EC2E0;
L_002EC280:;
SET32(4, RW(0) + 48);
SET32(2, RW(20) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(20) + RD(0));
SET32(2, RW(20) + RW(2));
SET64(31, 0x2ec2a4); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(2, (s64)(s32)0x10000);
SET64(3, RD(2) + RD(0));
SET32(2, RW(20) + RW(2));
SET32(3, RW(20) + RW(3));
wr8(c, (RW(2) + -30448), (u8)RW(0));
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30444), RW(0));
SET32(2, RW(20) + RW(2));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(2) + -30304), RW(0));
SET32(3, RW(20) + RW(3));
SET32(2, RW(0) + 1);
wr8(c, (RW(3) + -30368), (u8)RW(0)); goto L_002EC2E0;
L_002EC2DC:;
SET64(2, RD(0) + RD(0));
L_002EC2E0:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

static void JP_B_002EC300(Ctx *c, u32 entry) { /* func_002EC300 */
ENTER(entry);
switch (entry) { case 0x2ec3c8: goto L_002EC3C8; case 0x2ec3f4: goto L_002EC3F4; case 0x2ec420: goto L_002EC420; case 0x2ec44c: goto L_002EC44C; }
L_002EC300:;
SET32(29, RW(29) + -64);
SET64(3, (s64)(s32)0x10000);
wr64(c, (RW(29) + 48), RD(31));
SET32(3, RW(4) + RW(3));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[0].u = RW(0);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[1].u = rd32(c, (RW(3) + -30800));
c->fcc = F(1) <= F(0);
{ int t = c->fcc; SET64(17, RD(4) + RD(0)); if (t) goto L_002EC38C; }
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(4, (s32)rd32(c, (RW(3) + -30268)));
if (RD(4) == RD(0)) { SET64(4, (s64)(s32)0x10000); goto L_002EC390; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x2ec354);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002EC38C; }
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 23);
SET32(2, RW(17) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(17) + RW(2));
SET64(31, 0x2ec384); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(31, rd64(c, (RW(29) + 48))); goto L_002EC570;
L_002EC38C:;
SET64(4, (s64)(s32)0x10000);
L_002EC390:;
SET32(3, RW(0) + 1);
SET32(4, RW(17) + RW(4));
SET64(4, (s32)rd32(c, (RW(4) + -30832)));
SET32(4, RW(4) + -42);
SET64(1, RD(4) < (u64)(s64)6);
{ int t = RD(1) == RD(0); SET64(16, RD(0) + (s64)1); if (t) goto L_002EC474; }
SET64(5, (s64)(s32)0x4c0000);
SET32(4, RW(4) << 2);
SET32(5, RW(5) + -9584);
SET32(4, RW(4) + RW(5));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
{ u32 t = RW(4);  switch (t) { case 0x2ec300: goto L_002EC300; case 0x2ec3c8: goto L_002EC3C8; case 0x2ec3f4: goto L_002EC3F4; case 0x2ec420: goto L_002EC420; case 0x2ec44c: goto L_002EC44C; default: rt_jump(c, t); return; } }
L_002EC3C8:;
SET64(4, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(5, RW(0) + 53);
SET32(4, RW(17) + RW(4));
wr16(c, (RW(4) + -30828), (u16)RW(5));
SET32(2, RW(17) + RW(2));
wr8(c, (RW(2) + -30826), (u8)RW(3));
SET64(31, 0x2ec3ec); SET64(4, RD(17) + RD(0)); JP_F_002EE170(c);
SET64(4, (s64)(s32)0x10000); goto L_002EC478;
L_002EC3F4:;
SET64(4, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(5, RW(0) + 53);
SET32(4, RW(17) + RW(4));
wr16(c, (RW(4) + -30828), (u16)RW(5));
SET32(2, RW(17) + RW(2));
wr8(c, (RW(2) + -30826), (u8)RW(3));
SET64(31, 0x2ec418); SET64(4, RD(17) + RD(0)); JP_F_002EE170(c);
 goto L_002EC474;
L_002EC420:;
SET64(4, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(5, RW(0) + 57);
SET32(4, RW(17) + RW(4));
wr16(c, (RW(4) + -30828), (u16)RW(5));
SET32(2, RW(17) + RW(2));
wr8(c, (RW(2) + -30826), (u8)RW(3));
SET64(31, 0x2ec444); SET64(4, RD(17) + RD(0)); JP_F_002EE170(c);
 goto L_002EC474;
L_002EC44C:;
SET64(4, (s64)(s32)0x10000);
SET32(5, RW(0) + 56);
SET64(2, RD(4) + RD(0));
SET64(16, RD(0) + RD(0));
SET32(4, RW(17) + RW(4));
SET32(2, RW(17) + RW(2));
wr16(c, (RW(4) + -30828), (u16)RW(5));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ec474); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
L_002EC474:;
SET64(4, (s64)(s32)0x10000);
L_002EC478:;
SET64(3, (s64)(s32)0x10000);
SET32(5, RW(0) + 1);
SET32(4, RW(17) + RW(4));
wr8(c, (RW(4) + -30448), (u8)RW(5));
SET32(3, RW(17) + RW(3));
{ int t = RD(16) == RD(0); wr8(c, (RW(3) + -30847), (u8)RW(0)); if (t) goto L_002EC56C; }
SET64(1, RD(0) | 0x8990);
SET64(31, 0x2ec4a0); SET32(4, RW(17) + RW(1)); JP_F_002B0290(c);
SET64(3, (s64)(s32)0x41200000);
SET64(2, (s64)(s32)0x41a00000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(0) * F(1));
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_002EC4CC; }
c->f[1].u = c->f[0].u;
L_002EC4CC:;
c->f[0].u = RW(0);
SET64(2, (s64)(s32)0x10000);
c->fcc = F(1) < F(0);
SET32(3, RW(0) + 1);
SET32(2, RW(17) + RW(2));
{ int t = c->fcc; wr8(c, (RW(2) + -30408), (u8)RW(3)); if (t) goto L_002EC4EC; }
SET64(3, RD(0) + RD(0));
L_002EC4EC:;
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x893c);
SET32(2, RW(17) + RW(2));
SET32(4, RW(17) + RW(1));
wr8(c, (RW(2) + -30407), (u8)RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2ec510); c->f[20].u = c->f[1].u & 0x7FFFFFFFu; rt_call(c, t); }
c->f[0].f = fpu(F(20) * F(0));
SET64(7, (s64)(s32)0x10000);
SET32(7, RW(17) + RW(7));
SET64(4, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x10000);
SET64(6, (s64)(s32)0x10000);
SET64(5, (s64)(s32)0x10000);
SET32(4, RW(17) + RW(4));
SET32(3, RW(17) + RW(3));
SET32(6, RW(17) + RW(6));
wr32(c, (RW(7) + -30400), c->f[0].u);
SET32(5, RW(17) + RW(5));
wr32(c, (RW(4) + -30396), RW(0));
SET64(7, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(3) + -30400));
SET64(4, (s64)(s32)0x10000);
SET32(4, RW(17) + RW(4));
wr32(c, (RW(6) + -30392), c->f[0].u);
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(5) + -30388), RW(0));
SET32(3, RW(17) + RW(3));
wr32(c, (RW(4) + -30384), RW(0));
wr32(c, (RW(3) + -30376), RW(7));
L_002EC56C:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002EC570:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}
void JP_F_002EC300(Ctx *c) { JP_B_002EC300(c, 0x2ec300); }
void JP_F_002EC3C8(Ctx *c) { JP_B_002EC300(c, 0x2ec3c8); }
void JP_F_002EC3F4(Ctx *c) { JP_B_002EC300(c, 0x2ec3f4); }
void JP_F_002EC420(Ctx *c) { JP_B_002EC300(c, 0x2ec420); }
void JP_F_002EC44C(Ctx *c) { JP_B_002EC300(c, 0x2ec44c); }

void JP_F_002EC590(Ctx *c) { /* func_002EC590 */
ENTER(0x2ec590);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_002EC5A0(Ctx *c) { /* func_002EC5A0 */
ENTER(0x2ec5a0);
SET32(29, RW(29) + -96);
SET64(3, (s64)(s32)0x10000);
wr64(c, (RW(29) + 32), RD(31));
SET32(3, RW(4) + RW(3));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(3) + -30832)));
SET32(4, RW(0) + 48);
{ int t = RD(3) != RD(4); c->f[20].u = c->f[12].u; if (t) goto L_002EC6A0; }
SET64(3, (s64)(s32)0x10000);
SET64(4, (s64)(s32)0x41f00000);
SET32(3, RW(16) + RW(3));
c->f[1].u = rd32(c, (RW(3) + -30824));
c->f[0].u = RW(4);
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002EC8D4; }
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(16) + RW(3));
c->f[4].u = rd32(c, (RW(3) + -30264));
c->f[3].u = RW(0);
c->fcc = F(4) <= F(3);
if (c->fcc) { SET64(3, (s64)(s32)0x10000); goto L_002EC660; }
SET64(6, (s32)rd32(c, (RW(16) + 44)));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(16) + RW(3));
SET64(4, (s64)(s32)0x10000);
c->f[2].u = rd32(c, (RW(3) + -30304));
SET32(4, RW(16) + RW(4));
c->f[1].u = rd32(c, (RW(6) + 52));
SET64(3, (s64)(s32)0x3d4c0000);
c->facc = fpu(F(3) + F(1));
SET64(5, RD(3) | 0xcccd);
c->f[1].f = fpu(c->facc + F(2) * F(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(6) + 52), c->f[1].u);
SET32(3, RW(16) + RW(3));
c->f[1].u = rd32(c, (RW(4) + -30304));
c->f[0].u = RW(5);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(3) + -30304), c->f[0].u);
SET64(3, (s64)(s32)0x10000);
L_002EC660:;
SET32(3, RW(16) + RW(3));
SET64(3, rd8(c, (RW(3) + -30544)));
{ int t = RD(3) == RD(0);  if (t) goto L_002EC8D0; }
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 55);
SET32(2, RW(16) + RW(2));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + -30828), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(16) + RD(0));
SET32(2, RW(16) + RW(2));
SET64(31, 0x2ec698); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
 goto L_002EC8D0;
L_002EC6A0:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(16) + RW(3));
SET64(3, rd8(c, (RW(3) + -30368)));
{ int t = RD(3) == RD(0);  if (t) goto L_002EC8D0; }
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x8990);
SET32(2, RW(16) + RW(2));
SET32(4, RW(29) + 48);
c->f[12].u = rd32(c, (RW(2) + -30336));
SET64(31, 0x2ec6d0); SET32(5, RW(16) + RW(1)); JP_F_002AFF20(c);
SET32(4, RW(29) + 64);
SET32(5, RW(29) + 48);
SET64(31, 0x2ec6e0); c->f[12].u = c->f[20].u; JP_F_002AFF20(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[6]);
SET64(3, (s64)(s32)0x3f800000);
SET64(5, (s32)rd32(c, (RW(16) + 44)));
c->f[0].u = RW(0);
wr32(c, (RW(29) + 92), RW(3));
c->fcc = F(20) == F(0);
wr32(c, (RW(29) + 80), RW(0));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(29) + 84), RW(0));
c->f[3].u = rd32(c, (RW(5) + 48));
wr32(c, (RW(29) + 88), RW(0));
SET32(4, RW(0) + 1);
wr128(c, (RW(29) + 80) & ~15u, &c->r[6]);
SET32(3, RW(16) + RW(3));
c->f[2].u = rd32(c, (RW(29) + 80));
c->f[1].u = rd32(c, (RW(29) + 84));
c->f[0].u = rd32(c, (RW(29) + 88));
c->f[2].f = fpu(F(3) + F(2));
wr32(c, (RW(5) + 48), c->f[2].u);
c->f[2].u = rd32(c, (RW(5) + 52));
c->f[1].f = fpu(F(2) + F(1));
wr32(c, (RW(5) + 52), c->f[1].u);
c->f[1].u = rd32(c, (RW(5) + 56));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(5) + 56), c->f[0].u);
{ int t = c->fcc; wr8(c, (RW(3) + -30848), (u8)RW(4)); if (t) goto L_002EC8D0; }
SET64(3, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x8964);
SET64(2, RD(3) + RD(0));
SET32(4, RW(16) + RW(1));
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
c->f[1].u = rd32(c, (RW(3) + -30336));
SET64(1, RD(0) | 0x896c);
c->f[0].u = rd32(c, (RW(2) + -30344));
SET32(5, RW(16) + RW(1));
SET64(3, (s64)(s32)0x10000);
c->f[20].f = fpu(F(20) * F(1));
SET32(3, RW(16) + RW(3));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
wr32(c, (RW(3) + -30340), c->f[0].u);
c->f[12].u = rd32(c, (RW(2) + -30348));
SET64(31, 0x2ec798); c->f[13].u = c->f[20].u; JP_F_002EC8F0(c);
SET64(3, (s64)(s32)0x10000);
SET64(6, (s64)(s32)0x10000);
SET64(7, RD(3) + RD(0));
SET64(5, (s64)(s32)0x10000);
SET32(3, RW(16) + RW(3));
SET64(4, (s64)(s32)0x10000);
c->f[0].u = rd32(c, (RW(3) + -30348));
SET32(7, RW(16) + RW(7));
SET32(6, RW(16) + RW(6));
SET32(5, RW(16) + RW(5));
SET32(4, RW(16) + RW(4));
c->f[0].f = fpu(F(0) + F(20));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(16) + RW(3));
wr32(c, (RW(7) + -30348), c->f[0].u);
c->f[2].u = rd32(c, (RW(6) + -30356));
c->f[1].u = rd32(c, (RW(5) + -30360));
c->f[0].u = RW(0);
c->f[2].f = fpu_div(F(2), F(1));
wr32(c, (RW(4) + -30344), c->f[2].u);
c->f[1].u = rd32(c, (RW(3) + -30340));
c->f[1].f = fpu(F(2) - F(1));
SET64(3, (s32)rd32(c, (RW(16) + 44)));
c->f[1].u = c->f[1].u ^ 0x80000000u;
c->fcc = F(1) < F(0);
c->f[0].u = rd32(c, (RW(3) + 52));
c->f[0].f = fpu(F(0) + F(1));
{ int t = c->fcc; wr32(c, (RW(3) + 52), c->f[0].u); if (t) goto L_002EC8D0; }
SET64(4, rd16(c, (RW(16) + 2212)));
SET32(3, RW(0) + 1170);
if (RD(4) == RD(3)) { SET64(2, (s64)(s32)0x41000000); goto L_002EC888; }
SET32(3, RW(0) + 1120);
if (RD(4) == RD(3)) { SET64(2, (s64)(s32)0x41000000); goto L_002EC864; }
SET32(3, RW(0) + 1100);
if (RD(4) == RD(3)) { SET64(2, (s64)(s32)0x41000000); goto L_002EC840; }
SET64(3, (s64)(s32)0x10000); goto L_002EC8AC;
L_002EC840:;
SET32(4, RW(16) + 128);
c->f[12].u = RW(2);
SET32(5, RW(0) + 1110);
SET64(31, 0x2ec854); SET64(6, RD(0) + RD(0)); JP_F_00159D50(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 2240), (u8)RW(3));
wr8(c, (RW(16) + 2241), (u8)RW(0)); goto L_002EC8A8;
L_002EC864:;
SET32(4, RW(16) + 128);
c->f[12].u = RW(2);
SET32(5, RW(0) + 1130);
SET64(31, 0x2ec878); SET64(6, RD(0) + RD(0)); JP_F_00159D50(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 2240), (u8)RW(3));
wr8(c, (RW(16) + 2241), (u8)RW(0)); goto L_002EC8A8;
L_002EC888:;
SET32(4, RW(16) + 128);
c->f[12].u = RW(2);
SET32(5, RW(0) + 1180);
SET64(31, 0x2ec89c); SET64(6, RD(0) + RD(0)); JP_F_00159D50(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 2240), (u8)RW(3));
wr8(c, (RW(16) + 2241), (u8)RW(0));
L_002EC8A8:;
SET64(3, (s64)(s32)0x10000);
L_002EC8AC:;
SET32(3, RW(16) + RW(3));
SET64(3, rd8(c, (RW(3) + -30544)));
{ int t = RD(3) == RD(0);  if (t) goto L_002EC8D0; }
SET64(2, (s64)(s32)0x10000);
SET64(4, RD(16) + RD(0));
SET32(2, RW(16) + RW(2));
SET64(31, 0x2ec8d0); wr8(c, (RW(2) + -30368), (u8)RW(0)); JP_F_002EC300(c);
L_002EC8D0:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002EC8D4:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002EC8F0(Ctx *c) { /* func_002EC8F0 */
ENTER(0x2ec8f0);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(0) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET32(20, RW(29) + 160);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET32(18, RW(29) + 184);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(5) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(19, RD(16) + RD(0));
c->f[20].u = c->f[13].u;
L_002EC934:;
{ int t = RD(21) != RD(0);  if (t) goto L_002EC948; }
c->f[0].u = rd32(c, (RW(16) + 4)); goto L_002EC978;
L_002EC948:;
SET32(3, RW(0) + 1);
{ int t = RD(21) != RD(3);  if (t) goto L_002EC970; }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ec964); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[0].u = c->f[0].u ^ 0x80000000u; goto L_002EC978;
L_002EC970:;
c->f[0].u = RW(0);
L_002EC978:;
SET64(4, (s64)(s32)0x3f000000);
c->f[0].f = fpu(F(20) * F(0));
SET32(21, RW(21) + 1);
SET64(3, RD(21) < (u64)(s64)2);
wr32(c, (RW(20) + 0), c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 0));
c->f[2].u = rd32(c, (RW(20) + 0));
c->f[0].u = RW(0);
c->f[3].u = RW(4);
SET32(19, RW(19) + 4);
c->facc = fpu(F(0) + F(1));
SET32(20, RW(20) + 4);
c->f[0].f = fpu(c->facc + F(3) * F(2));
wr32(c, (RW(18) + 0), c->f[0].u);
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_002EC934; } }
c->f[21].u = rd32(c, (RW(29) + 188));
SET64(21, RD(0) + RD(0));
SET32(20, RW(29) + 152);
SET64(19, RD(16) + RD(0));
SET32(18, RW(29) + 176);
L_002EC9CC:;
{ int t = RD(21) != RD(0);  if (t) goto L_002EC9E0; }
c->f[0].u = c->f[21].u; goto L_002ECA10;
L_002EC9E0:;
SET32(3, RW(0) + 1);
{ int t = RD(21) != RD(3);  if (t) goto L_002ECA08; }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ec9fc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[0].u = c->f[0].u ^ 0x80000000u; goto L_002ECA10;
L_002ECA08:;
c->f[0].u = RW(0);
L_002ECA10:;
SET64(4, (s64)(s32)0x3f000000);
c->f[0].f = fpu(F(20) * F(0));
SET32(21, RW(21) + 1);
SET64(3, RD(21) < (u64)(s64)2);
wr32(c, (RW(20) + 0), c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 0));
c->f[2].u = rd32(c, (RW(20) + 0));
c->f[0].u = RW(0);
c->f[3].u = RW(4);
SET32(19, RW(19) + 4);
c->facc = fpu(F(0) + F(1));
SET32(20, RW(20) + 4);
c->f[0].f = fpu(c->facc + F(3) * F(2));
wr32(c, (RW(18) + 0), c->f[0].u);
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_002EC9CC; } }
c->f[21].u = rd32(c, (RW(29) + 180));
SET64(21, RD(0) + RD(0));
SET32(20, RW(29) + 144);
SET64(19, RD(16) + RD(0));
SET32(18, RW(29) + 168);
L_002ECA64:;
{ int t = RD(21) != RD(0);  if (t) goto L_002ECA78; }
c->f[0].u = c->f[21].u; goto L_002ECAA8;
L_002ECA78:;
SET32(3, RW(0) + 1);
{ int t = RD(21) != RD(3);  if (t) goto L_002ECAA0; }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2eca94); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[0].u = c->f[0].u ^ 0x80000000u; goto L_002ECAA8;
L_002ECAA0:;
c->f[0].u = RW(0);
L_002ECAA8:;
SET32(21, RW(21) + 1);
c->f[0].f = fpu(F(20) * F(0));
SET64(3, RD(21) < (u64)(s64)2);
wr32(c, (RW(20) + 0), c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 0));
c->f[0].u = rd32(c, (RW(20) + 0));
SET32(19, RW(19) + 4);
c->f[0].f = fpu(F(1) + F(0));
SET32(20, RW(20) + 4);
wr32(c, (RW(18) + 0), c->f[0].u);
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_002ECA64; } }
c->f[21].u = rd32(c, (RW(29) + 172));
SET64(19, RD(0) + RD(0));
SET32(18, RW(29) + 136);
L_002ECAE4:;
{ int t = RD(19) != RD(0);  if (t) goto L_002ECAF8; }
c->f[0].u = c->f[21].u; goto L_002ECB28;
L_002ECAF8:;
SET32(3, RW(0) + 1);
{ int t = RD(19) != RD(3);  if (t) goto L_002ECB20; }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ecb14); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[0].u = c->f[0].u ^ 0x80000000u; goto L_002ECB28;
L_002ECB20:;
c->f[0].u = RW(0);
L_002ECB28:;
SET32(19, RW(19) + 1);
c->f[0].f = fpu(F(20) * F(0));
SET64(3, RD(19) < (u64)(s64)2);
wr32(c, (RW(18) + 0), c->f[0].u);
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_002ECAE4; } }
c->f[0].u = rd32(c, (RW(29) + 160));
SET64(3, (s64)(s32)0x40000000);
c->f[1].u = rd32(c, (RW(29) + 152));
c->f[7].u = RW(0);
c->f[8].u = RW(3);
c->facc = fpu(F(7) + F(0));
SET64(3, (s64)(s32)0x40c00000);
c->facc = fpu(c->facc + F(8) * F(1));
c->f[6].u = rd32(c, (RW(29) + 144));
c->f[1].u = rd32(c, (RW(29) + 164));
c->f[2].u = rd32(c, (RW(29) + 156));
c->f[6].f = fpu(c->facc + F(8) * F(6));
c->facc = fpu(F(7) + F(1));
c->f[5].u = rd32(c, (RW(29) + 136));
c->f[3].u = rd32(c, (RW(29) + 148));
c->facc = fpu(c->facc + F(8) * F(2));
c->f[0].u = rd32(c, (RW(29) + 140));
c->f[1].f = fpu(c->facc + F(8) * F(3));
c->f[4].u = RW(3);
c->f[0].f = fpu(F(0) + F(1));
c->f[5].f = fpu(F(5) + F(6));
c->f[1].f = fpu_div(F(0), F(4));
c->f[2].f = fpu_div(F(5), F(4));
c->f[0].u = rd32(c, (RW(16) + 0));
c->f[0].f = fpu(F(0) + F(2));
wr32(c, (RW(16) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 4));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(16) + 4), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 112)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 192); return;
}

void JP_F_002ECBE0(Ctx *c) { /* func_002ECBE0 */
ENTER(0x2ecbe0);
SET64(2, (s64)(s32)0x411c0000);
SET64(2, RD(2) | 0xcccd);
c->f[0].u = RW(2);
 return;
}

void JP_F_002ECC00(Ctx *c) { /* func_002ECC00 */
ENTER(0x2ecc00);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(4) + RW(3));
wr8(c, (RW(3) + -30368), (u8)RW(0)); return;
}

void JP_F_002ECC10(Ctx *c) { /* func_002ECC10 */
ENTER(0x2ecc10);
SET32(29, RW(29) + -224);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 32), RD(31));
c->f[0].u = RW(2);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 8), c->f[22].u);
SET64(16, RD(4) + RD(0));
c->f[22].u = c->f[12].u;
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->fcc = F(22) < F(0);
c->f[21].u = c->f[13].u;
{ int t = !c->fcc; c->f[20].u = c->f[14].u; if (t) goto L_002ECC4C; }
c->f[22].u = c->f[0].u;
L_002ECC4C:;
SET64(31, 0x2ecc54); SET64(4, RD(16) + RD(0)); JP_F_002F11A0(c);
SET64(31, 0x2ecc5c); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ecc68); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(4, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x4c0000);
SET32(4, RW(2) + RW(4));
SET64(2, (s64)(s32)0x4c0000);
SET64(4, rd16(c, (RW(4) + -30726)));
SET64(2, rd16(c, (RW(2) + -7960)));
SET64(2, RD(4) < RD(2));
{ int t = RD(2) != RD(0); SET64(3, rd16(c, (RW(3) + -7960))); if (t) goto L_002ECD10; }
SET64(2, RD(3) & 0xffff);
SET32(4, RW(4) - RW(2));
{ int t = RD(4) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002ECD10; }
SET64(1, RD(4) < (u64)(s64)9);
{ int t = RD(1) != RD(0); SET32(3, RW(4) + -8); if (t) goto L_002ECCE0; }
SET64(2, (s64)(s32)0x4c0000);
c->f[1].u = rd32(c, (RW(2) + -7952));
L_002ECCB0:;
c->f[0].f = fpu(F(22) * F(1));
SET32(5, RW(5) + 8);
SET64(2, RD(5) < RD(3));
c->f[0].f = fpu(F(0) * F(1));
c->f[0].f = fpu(F(0) * F(1));
c->f[0].f = fpu(F(0) * F(1));
c->f[0].f = fpu(F(0) * F(1));
c->f[0].f = fpu(F(0) * F(1));
c->f[0].f = fpu(F(0) * F(1));
{ int t = RD(2) != RD(0); c->f[22].f = fpu(F(0) * F(1)); if (t) { POLL(); goto L_002ECCB0; } }
L_002ECCE0:;
SET64(1, RD(5) < RD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_002ECD10; }
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7952));
L_002ECCF4:;
c->f[22].f = fpu(F(22) * F(0));
SET32(5, RW(5) + 1);
SET64(2, RD(5) < RD(4));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002ECCF4; } }
L_002ECD10:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2ecd1c); SET64(5, RD(0) + RD(0)); JP_F_002EEDF0(c);
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x8964);
SET32(3, RW(0) + 1);
SET32(2, RW(16) + RW(2));
SET32(4, RW(16) + RW(1));
wr8(c, (RW(2) + -30368), (u8)RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2ecd44);  rt_call(c, t); }
c->f[0].f = fpu(F(22) * F(0));
SET64(4, (s64)(s32)0x10000);
SET32(4, RW(16) + RW(4));
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET64(6, (s64)(s32)0x10000);
SET64(5, (s64)(s32)0x10000);
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
SET32(6, RW(16) + RW(6));
wr32(c, (RW(4) + -30360), c->f[0].u);
SET32(5, RW(16) + RW(5));
wr32(c, (RW(3) + -30356), RW(0));
c->f[0].u = rd32(c, (RW(2) + -30360));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(16) + RW(3));
wr32(c, (RW(6) + -30352), c->f[0].u);
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(5) + -30348), RW(0));
SET32(2, RW(16) + RW(2));
wr32(c, (RW(3) + -30344), RW(0));
wr32(c, (RW(2) + -30336), c->f[20].u);
SET64(5, (s32)rd32(c, (RW(16) + 44)));
SET64(31, 0x2ecda8); SET32(4, RW(29) + 48); JP_F_0013ADA0(c);
SET64(31, 0x2ecdb0); SET32(4, RW(29) + 48); JP_F_00147DD0(c);
SET64(31, 0x2ecdb8); SET64(4, RD(2) + RD(0)); JP_F_00147DA0(c);
SET32(4, RW(29) + 112);
SET64(31, 0x2ecdc4); SET32(5, RW(29) + 48); JP_F_0013ADA0(c);
c->f[0].u = c->f[21].u ^ 0x80000000u;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 184), c->f[0].u);
wr32(c, (RW(29) + 188), RW(2));
SET32(4, RW(29) + 192);
SET32(5, RW(29) + 176);
SET32(6, RW(29) + 112);
wr32(c, (RW(29) + 176), RW(0));
SET64(31, 0x2ecdec); wr32(c, (RW(29) + 180), RW(0)); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 192) & ~15u, &c->r[6]);
SET64(5, (s64)(s32)0x10000);
SET32(5, RW(16) + RW(5));
SET64(4, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(16) + RW(4));
wr128(c, (RW(5) + -30320) & ~15u, &c->r[6]);
SET32(3, RW(16) + RW(3));
wr8(c, (RW(4) + -30448), (u8)RW(0));
wr32(c, (RW(3) + -30444), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 224); return;
}

void JP_F_002ECE30(Ctx *c) { /* func_002ECE30 */
ENTER(0x2ece30);
SET32(29, RW(29) + -224);
SET64(3, (s64)(s32)0x10000);
wr64(c, (RW(29) + 32), RD(31));
SET32(3, RW(4) + RW(3));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, rd8(c, (RW(3) + -30408)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002ECFF0; }
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x893c);
SET64(3, RD(2) + RD(0));
SET32(4, RW(16) + RW(1));
SET32(2, RW(16) + RW(2));
SET32(3, RW(16) + RW(3));
c->f[2].u = rd32(c, (RW(2) + -30264));
SET64(1, RD(0) | 0x8944);
c->f[1].u = rd32(c, (RW(3) + -30376));
SET32(5, RW(16) + RW(1));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
SET64(3, (s64)(s32)0x10000);
c->f[0].u = rd32(c, (RW(2) + -30384));
SET32(3, RW(16) + RW(3));
c->f[20].f = fpu(F(2) * F(1));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
wr32(c, (RW(3) + -30380), c->f[0].u);
c->f[12].u = rd32(c, (RW(2) + -30388));
SET64(31, 0x2eceb0); c->f[13].u = c->f[20].u; JP_F_002EC8F0(c);
SET64(3, (s64)(s32)0x10000);
SET64(6, (s64)(s32)0x10000);
SET64(7, RD(3) + RD(0));
SET64(5, (s64)(s32)0x10000);
SET32(3, RW(16) + RW(3));
SET64(4, (s64)(s32)0x10000);
c->f[0].u = rd32(c, (RW(3) + -30388));
SET32(7, RW(16) + RW(7));
SET32(6, RW(16) + RW(6));
SET32(5, RW(16) + RW(5));
SET32(4, RW(16) + RW(4));
c->f[0].f = fpu(F(0) + F(20));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(16) + RW(3));
wr32(c, (RW(7) + -30388), c->f[0].u);
c->f[2].u = rd32(c, (RW(6) + -30396));
c->f[1].u = rd32(c, (RW(5) + -30400));
c->f[0].u = RW(0);
c->f[2].f = fpu_div(F(2), F(1));
wr32(c, (RW(4) + -30384), c->f[2].u);
c->f[1].u = rd32(c, (RW(3) + -30380));
c->f[1].f = fpu(F(2) - F(1));
c->f[21].u = c->f[1].u ^ 0x80000000u;
c->fcc = F(21) < F(0);
if (!c->fcc) { SET64(3, (s64)(s32)0x10000); goto L_002ECFE8; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
SET64(2, rd8(c, (RW(2) + -30407)));
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x3f800000); goto L_002ECF40; }
SET64(2, (s64)(s32)0xbf800000);
c->f[20].u = RW(2);
SET64(5, (s32)rd32(c, (RW(16) + 44))); goto L_002ECF48;
L_002ECF40:;
c->f[20].u = RW(2);
SET64(5, (s32)rd32(c, (RW(16) + 44)));
L_002ECF48:;
SET64(31, 0x2ecf50); SET32(4, RW(29) + 48); JP_F_0013ADA0(c);
SET64(31, 0x2ecf58); SET32(4, RW(29) + 48); JP_F_00147DD0(c);
SET64(31, 0x2ecf60); SET64(4, RD(2) + RD(0)); JP_F_00147DA0(c);
SET32(4, RW(29) + 112);
SET64(31, 0x2ecf6c); SET32(5, RW(29) + 48); JP_F_0013ADA0(c);
c->f[0].f = fpu(F(21) * F(20));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 188), RW(2));
SET32(4, RW(29) + 192);
SET32(5, RW(29) + 176);
SET32(6, RW(29) + 112);
wr32(c, (RW(29) + 176), RW(0));
wr32(c, (RW(29) + 180), RW(0));
SET64(31, 0x2ecf94); wr32(c, (RW(29) + 184), c->f[0].u); JP_F_002AFDD0(c);
SET64(4, (s64)(s32)0x3f800000);
SET64(3, (s32)rd32(c, (RW(16) + 44)));
wr32(c, (RW(29) + 220), RW(4));
rd128(c, (RW(29) + 192) & ~15u, &c->r[4]);
wr32(c, (RW(29) + 208), RW(0));
c->f[3].u = rd32(c, (RW(3) + 48));
wr32(c, (RW(29) + 212), RW(0));
wr32(c, (RW(29) + 216), RW(0));
wr128(c, (RW(29) + 208) & ~15u, &c->r[4]);
c->f[2].u = rd32(c, (RW(29) + 208));
c->f[1].u = rd32(c, (RW(29) + 212));
c->f[0].u = rd32(c, (RW(29) + 216));
c->f[2].f = fpu(F(3) + F(2));
wr32(c, (RW(3) + 48), c->f[2].u);
c->f[2].u = rd32(c, (RW(3) + 52));
c->f[1].f = fpu(F(2) + F(1));
wr32(c, (RW(3) + 52), c->f[1].u);
c->f[1].u = rd32(c, (RW(3) + 56));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(3) + 56), c->f[0].u); goto L_002ECFF0;
L_002ECFE8:;
SET32(3, RW(16) + RW(3));
wr8(c, (RW(3) + -30408), (u8)RW(0));
L_002ECFF0:;
SET64(31, rd64(c, (RW(29) + 32)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 224); return;
}

void JP_F_002ED010(Ctx *c) { /* func_002ED010 */
ENTER(0x2ed010);
SET64(2, (s64)(s32)0x41a00000);
c->f[0].u = RW(2);
 return;
}

void JP_F_002ED020(Ctx *c) { /* func_002ED020 */
ENTER(0x2ed020);
SET64(2, (s64)(s32)0x41a00000);
c->f[0].u = RW(2);
 return;
}

void JP_F_002ED030(Ctx *c) { /* func_002ED030 */
ENTER(0x2ed030);
SET64(2, (s64)(s32)0x40000000);
c->f[1].u = RW(2);
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -8072));
c->f[0].f = fpu_div(F(0), F(1));
 return;
}

void JP_F_002ED060(Ctx *c) { /* func_002ED060 */
ENTER(0x2ed060);
SET64(2, (s64)(s32)0x40000000);
c->f[1].u = RW(2);
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -8064));
c->f[0].f = fpu_div(F(0), F(1));
 return;
}

void JP_F_002ED090(Ctx *c) { /* func_002ED090 */
ENTER(0x2ed090);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, (s32)rd32(c, (RW(28) + -29872)));
{ int t = RD(3) == RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_002ED51C; }
SET64(16, (s32)rd32(c, (RW(3) + 680)));
if (RD(16) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_002ED520; }
SET64(3, (s64)(s32)0x10000);
SET64(5, rd16(c, (RW(16) + 464)));
SET64(2, RD(3) + RD(0));
SET64(4, (s64)(s32)0x4c0000);
SET32(3, RW(18) + RW(3));
SET32(2, RW(18) + RW(2));
wr8(c, (RW(3) + -30528), (u8)RW(0));
SET32(4, RW(4) + -20912);
SET32(3, RW(5) << 1);
wr8(c, (RW(2) + -30527), (u8)RW(0));
SET32(3, RW(3) + RW(5));
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(3) << 2);
SET32(2, RW(18) + RW(2));
SET32(17, RW(4) + RW(3));
wr8(c, (RW(2) + -30526), (u8)RW(0));
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(18) + RW(3));
SET32(2, RW(18) + RW(2));
wr8(c, (RW(3) + -30525), (u8)RW(0));
SET64(4, RD(0) + RD(0));
wr8(c, (RW(2) + -30524), (u8)RW(0));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(18) + RW(3));
SET64(2, (s64)(s32)0x10000);
wr8(c, (RW(3) + -30523), (u8)RW(0));
SET32(2, RW(18) + RW(2));
wr8(c, (RW(2) + -30522), (u8)RW(0));
L_002ED134:;
SET64(3, RD(4) & 0xffff);
SET32(2, RW(4) + 7);
SET32(3, RW(18) + RW(3));
SET64(1, RD(0) | 0x88c7);
SET32(3, RW(3) + RW(1));
SET64(4, RD(2) & 0xffff);
wr8(c, (RW(3) + 0), (u8)RW(0));
SET64(2, RSD(4) < (s64)14);
wr8(c, (RW(3) + 1), (u8)RW(0));
wr8(c, (RW(3) + 2), (u8)RW(0));
wr8(c, (RW(3) + 3), (u8)RW(0));
wr8(c, (RW(3) + 4), (u8)RW(0));
wr8(c, (RW(3) + 5), (u8)RW(0));
{ int t = RD(2) != RD(0); wr8(c, (RW(3) + 6), (u8)RW(0)); if (t) { POLL(); goto L_002ED134; } }
SET64(2, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x3f800000);
SET32(4, RW(0) + 255);
SET32(2, RW(18) + RW(2));
wr8(c, (RW(2) + -30507), (u8)RW(4));
SET64(5, (s64)(s32)0x10000);
wr32(c, (RW(29) + 92), RW(3));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(18) + RW(2));
wr32(c, (RW(29) + 80), RW(0));
wr8(c, (RW(2) + -30506), (u8)RW(4));
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(29) + 84), RW(0));
wr32(c, (RW(29) + 88), RW(0));
SET32(5, RW(18) + RW(5));
rd128(c, (RW(29) + 80) & ~15u, &c->r[6]);
SET32(3, RW(18) + RW(3));
SET32(2, RW(18) + RW(2));
SET32(4, RW(18) + 128);
wr128(c, (RW(5) + -30496) & ~15u, &c->r[6]);
wr16(c, (RW(3) + -30480), (u16)RW(0));
SET32(5, RW(0) + 1);
SET64(31, 0x2ed1d4); wr8(c, (RW(2) + -30542), (u8)RW(0)); JP_F_001520B0(c);
SET64(3, (s32)rd32(c, (RW(18) + 44)));
c->f[2].u = rd32(c, (RW(2) + 116));
c->f[1].u = rd32(c, (RW(3) + 52));
SET64(2, (s64)(s32)0xc1100000);
c->f[0].u = RW(2);
c->f[20].f = fpu(F(2) - F(1));
c->fcc = F(20) <= F(0);
if (c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_002ED204; }
c->f[20].u = c->f[0].u;
SET64(2, (s64)(s32)0x10000);
L_002ED204:;
SET64(3, (s64)(s32)0x10000);
SET32(2, RW(18) + RW(2));
SET64(5, (s64)(s32)0x40000000);
c->f[12].u = rd32(c, (RW(2) + -30412));
SET64(9, (s64)(s32)0x3f800000);
SET32(3, RW(18) + RW(3));
SET64(1, RD(0) | 0x88c0);
c->f[13].u = RW(5);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(29) + 112), RW(0));
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(29) + 116), RW(0));
SET32(2, RW(18) + RW(2));
wr32(c, (RW(29) + 120), RW(0));
SET32(5, RW(18) + RW(1));
wr32(c, (RW(29) + 124), RW(9));
SET64(6, RD(0) + RD(0));
rd128(c, (RW(3) + -31040) & ~15u, &c->r[3]);
SET32(7, RW(29) + 112);
SET32(8, RW(29) + 96);
wr128(c, (RW(29) + 112) & ~15u, &c->r[3]);
c->f[0].u = rd32(c, (RW(29) + 116));
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
wr32(c, (RW(29) + 140), RW(9));
c->f[0].f = fpu(F(0) + F(20));
rd128(c, (RW(2) + -31024) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 116), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 132));
wr32(c, (RW(29) + 108), RW(9));
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 100), RW(0));
c->f[0].f = fpu(F(0) + F(20));
wr32(c, (RW(29) + 104), RW(0));
SET64(31, 0x2ed29c); wr32(c, (RW(29) + 132), c->f[0].u); JP_F_0023FB50(c);
if (RD(2) == RD(0)) { SET64(3, rd16(c, (RW(18) + 2212))); goto L_002ED2D4; }
c->f[0].u = rd32(c, (RW(29) + 100));
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(18) + RW(3));
SET32(4, RW(0) + 1);
SET32(2, RW(18) + RW(2));
c->f[0].f = fpu(F(0) - F(20));
wr32(c, (RW(29) + 100), c->f[0].u);
rd128(c, (RW(29) + 96) & ~15u, &c->r[5]);
wr128(c, (RW(3) + -31024) & ~15u, &c->r[5]);
wr8(c, (RW(2) + -30542), (u8)RW(4));
SET64(3, rd16(c, (RW(18) + 2212)));
L_002ED2D4:;
SET64(1, RD(0) | 0x86d4);
c->f[1].u = RW(0);
SET32(2, RW(0) + 1090);
SET32(16, RW(18) + RW(1));
{ int t = RD(3) == RD(2); c->f[20].u = c->f[1].u; if (t) goto L_002ED340; }
SET32(2, RW(0) + 1080);
if (RD(3) == RD(2)) { SET64(2, (s64)(s32)0x40800000); goto L_002ED344; }
SET32(2, RW(0) + 1180);
if (RD(3) == RD(2)) { SET64(2, (s64)(s32)0x40600000); goto L_002ED334; }
SET32(2, RW(0) + 1170);
{ int t = RD(3) == RD(2);  if (t) goto L_002ED330; }
SET32(2, RW(0) + 1110);
{ int t = RD(3) == RD(2);  if (t) goto L_002ED330; }
SET32(2, RW(0) + 1100);
{ int t = RD(3) == RD(2);  if (t) goto L_002ED330; }
 goto L_002ED348;
L_002ED330:;
SET64(2, (s64)(s32)0x40600000);
L_002ED334:;
c->f[20].u = RW(2);
 goto L_002ED348;
L_002ED340:;
SET64(2, (s64)(s32)0x40800000);
L_002ED344:;
c->f[20].u = RW(2);
L_002ED348:;
c->f[0].u = RW(0);
c->fcc = F(20) == F(0);
if (c->fcc) { SET64(3, (s16)rd16(c, (RW(17) + 6))); goto L_002ED390; }
SET32(4, RW(18) + 128);
SET64(31, 0x2ed368); SET32(5, RW(0) + 1); JP_F_00159580(c);
c->f[2].u = rd32(c, (RW(2) + 116));
c->f[1].u = rd32(c, (RW(16) + 0));
c->f[0].u = RW(0);
SET64(2, (s64)(s32)0x10000);
c->f[1].f = fpu(F(2) - F(1));
SET32(2, RW(18) + RW(2));
c->f[3].u = rd32(c, (RW(2) + -30264));
c->facc = fpu(F(0) + F(1));
c->f[1].f = fpu(c->facc + F(20) * F(3));
SET64(3, (s16)rd16(c, (RW(17) + 6)));
L_002ED390:;
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(18) + RW(2));
SET64(2, rd8(c, (RW(2) + -30448)));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
{ int t = RD(2) == RD(0); c->f[4].f = fpu(F(0) - F(1)); if (t) goto L_002ED440; }
c->f[3].u = rd32(c, (RW(16) + 0));
c->fcc = F(3) < F(4);
if (c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_002ED3E0; }
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(18) + RW(3));
SET32(4, RW(0) + 1);
wr32(c, (RW(3) + -30444), RW(0));
SET32(2, RW(18) + RW(2));
wr8(c, (RW(2) + -30544), (u8)RW(4)); goto L_002ED478;
L_002ED3E0:;
SET64(4, (s64)(s32)0x10000);
SET64(3, RD(2) + RD(0));
SET32(4, RW(18) + RW(4));
SET32(2, RW(18) + RW(2));
SET32(3, RW(18) + RW(3));
c->f[2].u = rd32(c, (RW(2) + -30444));
c->f[1].u = rd32(c, (RW(3) + -30264));
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(3));
SET64(2, (s64)(s32)0x10000);
c->f[0].f = fpu(c->facc + F(2) * F(1));
SET32(2, RW(18) + RW(2));
wr32(c, (RW(16) + 0), c->f[0].u);
SET64(3, (s64)(s32)0x10000);
c->f[1].u = rd32(c, (RW(2) + -30440));
SET32(3, RW(18) + RW(3));
c->f[0].u = rd32(c, (RW(4) + -30444));
SET64(2, (s64)(s32)0x10000);
c->f[0].f = fpu(F(0) + F(1));
SET32(2, RW(18) + RW(2));
wr32(c, (RW(3) + -30444), c->f[0].u);
wr8(c, (RW(2) + -30544), (u8)RW(0)); goto L_002ED478;
L_002ED440:;
c->f[0].u = rd32(c, (RW(16) + 0));
c->fcc = F(0) < F(4);
if (c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_002ED464; }
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(0) + 1);
SET32(2, RW(18) + RW(2));
wr8(c, (RW(2) + -30544), (u8)RW(3)); goto L_002ED46C;
L_002ED464:;
SET32(2, RW(18) + RW(2));
wr8(c, (RW(2) + -30544), (u8)RW(0));
L_002ED46C:;
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(18) + RW(2));
wr32(c, (RW(2) + -30444), RW(0));
L_002ED478:;
c->f[0].u = rd32(c, (RW(16) + 0));
c->fcc = F(0) < F(4);
if (c->fcc) { SET32(4, RW(18) + 128); goto L_002ED4D4; }
SET64(3, rd16(c, (RW(18) + 2212)));
SET32(2, RW(0) + 1200);
if (RD(3) == RD(2)) { c->f[3].f = fpu(F(4) - F(0)); goto L_002ED4B0; }
SET32(2, RW(0) + 1190);
{ int t = RD(3) == RD(2);  if (t) goto L_002ED4AC; }
wr32(c, (RW(16) + 0), c->f[4].u); goto L_002ED4D0;
L_002ED4AC:;
c->f[3].f = fpu(F(4) - F(0));
L_002ED4B0:;
SET64(2, (s64)(s32)0x3eb30000);
SET64(2, RD(2) | 0x3333);
c->f[1].u = rd32(c, (RW(16) + 0));
c->f[0].u = RW(0);
c->f[2].u = RW(2);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(2) * F(3));
wr32(c, (RW(16) + 0), c->f[0].u);
L_002ED4D0:;
SET32(4, RW(18) + 128);
L_002ED4D4:;
SET64(31, 0x2ed4dc); SET32(5, RW(0) + 1); JP_F_00159580(c);
SET64(5, (s16)rd16(c, (RW(17) + 6)));
SET64(3, (s64)(s32)0x41700000);
c->f[2].u = rd32(c, (RW(2) + 116));
c->f[0].u = RW(3);
c->f[1].u = RW(5);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[1].f = fpu(F(1) - F(2));
c->f[1].u = c->f[1].u & 0x7FFFFFFFu;
c->fcc = F(1) < F(0);
{ int t = c->fcc; SET32(4, RW(0) + 1); if (t) goto L_002ED510; }
SET64(4, RD(0) + RD(0));
L_002ED510:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(18) + RW(3));
wr8(c, (RW(3) + -30543), (u8)RW(4));
L_002ED51C:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002ED520:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_002ED540(Ctx *c) { /* func_002ED540 */
ENTER(0x2ed540);
SET64(5, (s64)(s32)0x10000);
SET32(6, RW(0) + -1);
SET64(3, RD(5) + RD(0));
SET64(7, RD(0) + RD(0));
SET32(5, RW(4) + RW(5));
SET32(3, RW(4) + RW(3));
wr16(c, (RW(5) + -30436), (u16)RW(6));
wr16(c, (RW(3) + -30428), (u16)RW(6));
SET64(5, RD(4) + RD(0));
L_002ED564:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(5) + RW(3));
SET64(3, (s16)rd16(c, (RW(3) + -30436)));
if (RD(3) != RD(6)) { SET32(7, RW(7) + 1); goto L_002ED5A0; }
SET32(3, RW(7) << 3);
SET64(5, (s64)(s32)0x10000);
SET32(6, RW(3) + RW(4));
SET32(7, RW(0) + 19);
SET32(5, RW(6) + RW(5));
SET64(3, (s64)(s32)0x10000);
wr16(c, (RW(5) + -30436), (u16)RW(7));
SET32(3, RW(6) + RW(3));
wr32(c, (RW(3) + -30432), RW(0)); goto L_002ED5B0;
L_002ED5A0:;
SET64(3, RD(7) < (u64)(s64)2);
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 8); if (t) { POLL(); goto L_002ED564; } }
L_002ED5B0:;
SET64(7, RD(0) + RD(0));
SET64(6, RD(4) + RD(0));
SET32(5, RW(0) + -1);
L_002ED5BC:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(6) + RW(3));
SET64(3, (s16)rd16(c, (RW(3) + -30436)));
if (RD(3) != RD(5)) { SET32(7, RW(7) + 1); goto L_002ED5F8; }
SET32(3, RW(7) << 3);
SET32(6, RW(0) + 21);
SET32(5, RW(3) + RW(4));
SET64(4, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(5) + RW(4));
SET32(3, RW(5) + RW(3));
wr16(c, (RW(4) + -30436), (u16)RW(6));
wr32(c, (RW(3) + -30432), RW(0)); goto L_002ED608;
L_002ED5F8:;
SET64(3, RD(7) < (u64)(s64)2);
{ int t = RD(3) != RD(0); SET32(6, RW(6) + 8); if (t) { POLL(); goto L_002ED5BC; } }
L_002ED608:;
 return;
}

void JP_F_002ED610(Ctx *c) { /* func_002ED610 */
ENTER(0x2ed610);
 return;
}

void JP_F_002ED620(Ctx *c) { /* func_002ED620 */
ENTER(0x2ed620);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x10000);
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 1);
wr8(c, (RW(5) + 529), (u8)RW(6));
SET32(3, RW(4) + RW(3));
SET64(5, (s64)(s32)0x10000);
SET32(5, RW(4) + RW(5));
wr8(c, (RW(5) + -30736), (u8)RW(6));
SET64(3, rd8(c, (RW(3) + -30735)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002ED65C; }
SET64(31, 0x2ed658); SET32(4, RW(4) + 128); JP_F_0031CA60(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_002ED65C:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002ED670(Ctx *c) { /* func_002ED670 */
ENTER(0x2ed670);
SET32(29, RW(29) + -16);
SET64(1, RD(0) | 0x87b0);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2ed684); SET32(4, RW(4) + RW(1)); JP_F_00323900(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002ED690(Ctx *c) { /* func_002ED690 */
ENTER(0x2ed690);
SET32(29, RW(29) + -480);
SET64(6, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 48), RD(31));
c->f[6].u = RW(0);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
c->f[5].u = RW(6);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 44)));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 304), RW(0));
c->f[4].u = rd32(c, (RW(5) + 8));
wr32(c, (RW(29) + 308), RW(0));
c->f[3].u = rd32(c, (RW(5) + 4));
rd128(c, (RW(3) + 48) & ~15u, &c->r[4]);
c->f[0].u = rd32(c, (RW(5) + 0));
wr32(c, (RW(29) + 312), RW(0));
wr32(c, (RW(29) + 316), RW(6));
wr128(c, (RW(29) + 304) & ~15u, &c->r[4]);
c->f[1].u = rd32(c, (RW(29) + 312));
SET64(3, (s32)rd32(c, (RW(28) + -29872)));
c->f[2].u = rd32(c, (RW(29) + 308));
wr32(c, (RW(29) + 460), RW(6));
c->f[4].f = fpu(F(1) + F(4));
c->f[1].u = rd32(c, (RW(29) + 304));
c->f[2].f = fpu(F(2) + F(3));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 456), c->f[4].u);
wr32(c, (RW(29) + 452), c->f[2].u);
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 448), c->f[0].u); if (t) goto L_002EDD88; }
c->f[0].f = fpu(F(0) + F(6));
SET64(3, (s64)(s32)0xc2480000);
SET32(2, RW(29) + 416);
SET32(5, RW(2) + 16);
c->f[3].u = RW(3);
wr32(c, (RW(29) + 256), c->f[0].u);
SET32(3, RW(29) + 448);
c->f[0].f = fpu(F(2) + F(3));
SET64(1, RD(5) < RD(3));
wr32(c, (RW(29) + 260), c->f[0].u);
c->f[0].f = fpu(F(4) + F(6));
wr32(c, (RW(29) + 272), c->f[6].u);
wr32(c, (RW(29) + 276), c->f[6].u);
wr32(c, (RW(29) + 280), c->f[6].u);
wr32(c, (RW(29) + 284), c->f[5].u);
wr128(c, (RW(29) + 272) & ~15u, &c->r[4]);
wr32(c, (RW(29) + 264), c->f[0].u);
c->f[2].u = rd32(c, (RW(29) + 272));
c->f[1].u = rd32(c, (RW(29) + 276));
c->f[0].u = rd32(c, (RW(29) + 280));
c->f[2].f = fpu(F(2) + F(6));
c->f[1].f = fpu(F(1) + F(3));
c->f[0].f = fpu(F(0) + F(6));
wr32(c, (RW(29) + 416), c->f[6].u);
wr32(c, (RW(29) + 420), c->f[6].u);
wr32(c, (RW(29) + 424), c->f[6].u);
wr32(c, (RW(29) + 268), c->f[5].u);
wr32(c, (RW(29) + 300), c->f[5].u);
wr32(c, (RW(29) + 428), c->f[5].u);
wr32(c, (RW(29) + 288), c->f[2].u);
wr32(c, (RW(29) + 292), c->f[1].u);
{ int t = RD(1) == RD(0); wr32(c, (RW(29) + 296), c->f[0].u); if (t) goto L_002ED7C0; }
SET64(1, RD(5) < RD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002ED7C0; }
wr32(c, (RW(5) + 0), RW(0));
L_002ED7A0:;
wr32(c, (RW(5) + 4), RW(0));
wr32(c, (RW(5) + 8), RW(0));
wr32(c, (RW(5) + 12), RW(6));
SET32(5, RW(5) + 16);
SET64(2, RD(5) < RD(3));
if (RD(2) != RD(0)) { wr32(c, (RW(5) + 0), RW(0)); { POLL(); goto L_002ED7A0; } }
L_002ED7C0:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 220), RW(2));
SET64(3, (s64)(s32)0x3f000000);
wr32(c, (RW(29) + 236), RW(2));
SET32(4, RW(29) + 144);
wr32(c, (RW(29) + 252), RW(2));
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 160), RW(3));
wr32(c, (RW(29) + 164), RW(3));
wr32(c, (RW(29) + 168), RW(3));
wr32(c, (RW(29) + 172), RW(3));
wr32(c, (RW(29) + 176), RW(3));
wr32(c, (RW(29) + 180), RW(3));
wr32(c, (RW(29) + 184), RW(3));
wr32(c, (RW(29) + 188), RW(3));
wr32(c, (RW(29) + 192), RW(3));
wr32(c, (RW(29) + 196), RW(3));
wr32(c, (RW(29) + 200), RW(3));
wr32(c, (RW(29) + 204), RW(3));
rd128(c, (RW(29) + 288) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 224), RW(0));
wr32(c, (RW(29) + 228), RW(0));
wr32(c, (RW(29) + 232), RW(0));
wr128(c, (RW(29) + 432) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 472), RW(0));
wr16(c, (RW(29) + 476), (u16)RW(0));
wr16(c, (RW(29) + 478), (u16)RW(0));
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 472));
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 240), RW(0));
wr32(c, (RW(29) + 464), c->f[0].u);
wr32(c, (RW(29) + 244), RW(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 476));
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 248), RW(0));
wr128(c, (RW(29) + 416) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 468), c->f[0].u);
rd128(c, (RW(29) + 240) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 208), RW(0));
wr32(c, (RW(29) + 212), RW(0));
wr32(c, (RW(29) + 216), RW(0));
wr128(c, (RW(29) + 144) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 208) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[5]);
SET64(31, 0x2ed88c); wr128(c, (RW(29) + 96) & ~15u, &c->r[3]); JP_F_00157270(c);
SET64(18, RD(2) + RD(0));
SET64(31, 0x2ed898); SET32(4, RW(29) + 128); JP_F_00157270(c);
SET64(17, RD(2) + RD(0));
SET64(31, 0x2ed8a4); SET32(4, RW(29) + 112); JP_F_00157270(c);
SET64(5, RD(18) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET64(31, 0x2ed8b8); SET32(4, RW(29) + 320); JP_F_001571C0(c);
SET32(4, RW(29) + 384);
SET64(31, 0x2ed8c4); SET32(5, RW(29) + 464); JP_F_001571A0(c);
SET64(31, 0x2ed8cc); SET32(4, RW(29) + 96); JP_F_00157170(c);
SET64(3, (s64)(s32)0x437f0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(1) * F(0));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002ED904; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(17, RD(3) & 0xff); goto L_002ED91C;
L_002ED904:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(17, RD(3) & 0xff);
L_002ED91C:;
SET64(31, 0x2ed924); SET32(4, RW(29) + 96); JP_F_00157160(c);
SET64(3, (s64)(s32)0x437f0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(1) * F(0));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002ED95C; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(2, RD(3) & 0xff); goto L_002ED974;
L_002ED95C:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(2, RD(3) & 0xff);
L_002ED974:;
SET32(4, RW(29) + 96);
SET32(2, RW(2) << 8);
SET64(31, 0x2ed984); SET64(17, RD(17) | RD(2)); JP_F_00157180(c);
SET64(3, (s64)(s32)0x437f0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(1) * F(0));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002ED9BC; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(2, RD(3) & 0xff); goto L_002ED9D4;
L_002ED9BC:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(2, RD(3) & 0xff);
L_002ED9D4:;
SET32(4, RW(29) + 96);
SET32(2, RW(2) << 16);
SET64(31, 0x2ed9e4); SET64(17, RD(2) | RD(17)); JP_F_00157190(c);
SET64(3, (s64)(s32)0x437f0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(1) * F(0));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002EDA1C; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(2, RD(3) & 0xff); goto L_002EDA34;
L_002EDA1C:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(2, RD(3) & 0xff);
L_002EDA34:;
SET32(4, RW(29) + 80);
SET32(2, RW(2) << 24);
SET64(2, RD(2) | RD(17));
SET64(31, 0x2eda48); wr32(c, (RW(29) + 392), RW(2)); JP_F_00157170(c);
SET64(3, (s64)(s32)0x437f0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(1) * F(0));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002EDA80; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(17, RD(3) & 0xff); goto L_002EDA98;
L_002EDA80:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(17, RD(3) & 0xff);
L_002EDA98:;
SET64(31, 0x2edaa0); SET32(4, RW(29) + 80); JP_F_00157160(c);
SET64(3, (s64)(s32)0x437f0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(1) * F(0));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002EDAD8; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(2, RD(3) & 0xff); goto L_002EDAF0;
L_002EDAD8:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(2, RD(3) & 0xff);
L_002EDAF0:;
SET32(4, RW(29) + 80);
SET32(2, RW(2) << 8);
SET64(31, 0x2edb00); SET64(17, RD(17) | RD(2)); JP_F_00157180(c);
SET64(3, (s64)(s32)0x437f0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(1) * F(0));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002EDB38; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(2, RD(3) & 0xff); goto L_002EDB50;
L_002EDB38:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(2, RD(3) & 0xff);
L_002EDB50:;
SET32(4, RW(29) + 80);
SET32(2, RW(2) << 16);
SET64(31, 0x2edb60); SET64(17, RD(2) | RD(17)); JP_F_00157190(c);
SET64(3, (s64)(s32)0x437f0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(1) * F(0));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002EDB98; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(2, RD(3) & 0xff); goto L_002EDBB0;
L_002EDB98:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(2, RD(3) & 0xff);
L_002EDBB0:;
SET32(4, RW(29) + 64);
SET32(2, RW(2) << 24);
SET64(2, RD(2) | RD(17));
SET64(31, 0x2edbc4); wr32(c, (RW(29) + 396), RW(2)); JP_F_00157170(c);
SET64(3, (s64)(s32)0x437f0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(1) * F(0));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002EDBFC; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(17, RD(3) & 0xff); goto L_002EDC14;
L_002EDBFC:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(17, RD(3) & 0xff);
L_002EDC14:;
SET64(31, 0x2edc1c); SET32(4, RW(29) + 64); JP_F_00157160(c);
SET64(3, (s64)(s32)0x437f0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(1) * F(0));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002EDC54; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(2, RD(3) & 0xff); goto L_002EDC6C;
L_002EDC54:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(2, RD(3) & 0xff);
L_002EDC6C:;
SET32(4, RW(29) + 64);
SET32(2, RW(2) << 8);
SET64(31, 0x2edc7c); SET64(17, RD(17) | RD(2)); JP_F_00157180(c);
SET64(3, (s64)(s32)0x437f0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(1) * F(0));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002EDCB4; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(2, RD(3) & 0xff); goto L_002EDCCC;
L_002EDCB4:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(2, RD(3) & 0xff);
L_002EDCCC:;
SET32(4, RW(29) + 64);
SET32(2, RW(2) << 16);
SET64(31, 0x2edcdc); SET64(17, RD(2) | RD(17)); JP_F_00157190(c);
SET64(3, (s64)(s32)0x437f0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(1) * F(0));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002EDD14; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_002EDD2C;
L_002EDD14:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_002EDD2C:;
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
SET32(3, RW(3) << 24);
SET32(5, RW(29) + 416);
SET64(3, RD(3) | RD(17));
SET32(6, RW(29) + 448);
wr32(c, (RW(29) + 400), RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 680)));
SET64(31, 0x2edd50); SET32(7, RW(29) + 320); JP_F_00240C00(c);
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 44))); goto L_002EDD8C; }
c->f[3].u = rd32(c, (RW(29) + 448));
SET64(3, (s64)(s32)0xc2480000);
c->f[2].u = rd32(c, (RW(29) + 452));
c->f[4].u = RW(0);
c->f[0].u = rd32(c, (RW(29) + 456));
c->f[1].u = RW(3);
c->f[3].f = fpu(F(3) - F(4));
c->f[1].f = fpu(F(2) - F(1));
c->f[0].f = fpu(F(0) - F(4));
wr32(c, (RW(29) + 448), c->f[3].u);
wr32(c, (RW(29) + 452), c->f[1].u);
wr32(c, (RW(29) + 456), c->f[0].u);
L_002EDD88:;
SET64(3, (s32)rd32(c, (RW(16) + 44)));
L_002EDD8C:;
rd128(c, (RW(29) + 448) & ~15u, &c->r[4]);
wr128(c, (RW(3) + 48) & ~15u, &c->r[4]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 480); return;
}

void JP_F_002EDDB0(Ctx *c) { /* func_002EDDB0 */
ENTER(0x2eddb0);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2eddc8); SET32(4, RW(16) + 128); JP_F_001E8BE0(c);
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
if (RD(2) == RD(0)) { SET32(4, RW(16) + 128); goto L_002EDE10; }
SET64(4, (s32)rd32(c, (RW(2) + 680)));
SET64(3, (s64)(s32)0x4c0000);
SET32(3, RW(3) + -20912);
SET64(5, rd16(c, (RW(4) + 464)));
SET64(2, (s32)rd32(c, (RW(16) + 44)));
SET32(4, RW(5) << 1);
SET32(4, RW(4) + RW(5));
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
SET64(3, (s16)rd16(c, (RW(3) + 6)));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(2) + 52), c->f[0].u);
SET32(4, RW(16) + 128);
L_002EDE10:;
SET64(31, 0x2ede18);  JP_F_00159FB0(c);
SET64(2, (s8)rd8(c, (RW(28) + -30312)));
if (RD(2) != RD(0)) { SET32(4, RW(29) + 96); goto L_002EDE80; }
wr32(c, (RW(29) + 0), RW(0));
c->f[13].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 8), RW(0));
wr32(c, (RW(29) + 16), RW(2));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 24), RW(0));
SET64(4, (s64)(s32)0x420000);
wr32(c, (RW(29) + 32), RW(0));
SET32(4, RW(4) + -17024);
wr32(c, (RW(29) + 40), RW(0));
c->f[14].u = c->f[13].u;
wr32(c, (RW(29) + 48), RW(0));
c->f[15].u = c->f[13].u;
c->f[16].u = c->f[13].u;
wr32(c, (RW(29) + 56), RW(2));
c->f[17].u = c->f[12].u;
c->f[18].u = c->f[13].u;
SET64(31, 0x2ede74); c->f[19].u = c->f[13].u; JP_F_002AF0D0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30312), (u8)RW(2));
SET32(4, RW(29) + 96);
L_002EDE80:;
SET64(31, 0x2ede88);  JP_F_002AF080(c);
SET64(8, (s64)(s32)0x420000);
SET32(5, RW(29) + 96);
SET32(8, RW(8) + -17024);
SET32(4, RW(16) + 128);
rd128(c, (RW(8) + 0) & ~15u, &c->r[7]);
rd128(c, (RW(8) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(8) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
rd128(c, (RW(8) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2edec8); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_002EDEE0(Ctx *c) { /* func_002EDEE0 */
ENTER(0x2edee0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(6) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002EDF18; }
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x86a0);
SET32(2, RW(16) + RW(2));
SET32(4, RW(16) + RW(1));
wr32(c, (RW(2) + -30832), RW(5));
SET64(31, 0x2edf10); SET64(5, RD(5) & 0xffff); JP_F_00300130(c);
SET64(3, (s64)(s32)0x10000); goto L_002EDF3C;
L_002EDF18:;
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(5) + 1000);
SET32(2, RW(16) + RW(2));
SET64(1, RD(0) | 0x86a0);
SET64(5, RD(5) & 0xffff);
wr32(c, (RW(2) + -30832), RW(3));
SET64(31, 0x2edf38); SET32(4, RW(16) + RW(1)); JP_F_003000F0(c);
SET64(3, (s64)(s32)0x10000);
L_002EDF3C:;
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + -1);
SET32(3, RW(16) + RW(3));
wr16(c, (RW(3) + -30828), (u16)RW(4));
SET32(2, RW(16) + RW(2));
SET64(3, (s32)rd32(c, (RW(2) + -30268)));
if (RD(3) == RD(0)) { SET32(4, RW(16) + 128); goto L_002EDF68; }
SET32(2, RW(0) + 1);
wr8(c, (RW(3) + 20), (u8)RW(2));
SET32(4, RW(16) + 128);
L_002EDF68:;
SET64(31, 0x2edf70);  JP_F_0031CA60(c);
SET64(31, 0x2edf78); SET32(4, RW(16) + 128); JP_F_001E9110(c);
SET32(4, RW(16) + 128);
SET64(31, 0x2edf84); SET64(5, RD(0) + RD(0)); JP_F_00158E90(c);
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x2edf9c); SET32(4, RW(16) + 128); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002EDFB0(Ctx *c) { /* func_002EDFB0 */
ENTER(0x2edfb0);
SET32(29, RW(29) + -32);
SET64(2, RD(6) & 0xff);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002EDFD8; }
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(0) + 1);
SET32(2, RW(16) + RW(2));
wr8(c, (RW(2) + -30826), (u8)RW(3));
L_002EDFD8:;
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
SET64(2, rd8(c, (RW(2) + -30826)));
if (RD(2) == RD(0)) { SET32(4, RW(5) + -1000); goto L_002EE074; }
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x86a0);
SET32(2, RW(16) + RW(2));
SET32(4, RW(16) + RW(1));
wr32(c, (RW(2) + -30832), RW(5));
SET64(31, 0x2ee008); SET64(5, RD(5) & 0xffff); JP_F_00300130(c);
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + -1);
SET32(3, RW(16) + RW(3));
wr16(c, (RW(3) + -30828), (u16)RW(4));
SET32(2, RW(16) + RW(2));
SET64(3, (s32)rd32(c, (RW(2) + -30268)));
if (RD(3) == RD(0)) { SET32(4, RW(16) + 128); goto L_002EE038; }
SET32(2, RW(0) + 1);
wr8(c, (RW(3) + 20), (u8)RW(2));
SET32(4, RW(16) + 128);
L_002EE038:;
SET64(31, 0x2ee040);  JP_F_0031CA60(c);
SET64(31, 0x2ee048); SET32(4, RW(16) + 128); JP_F_001E9110(c);
SET32(4, RW(16) + 128);
SET64(31, 0x2ee054); SET64(5, RD(0) + RD(0)); JP_F_00158E90(c);
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x2ee06c); SET32(4, RW(16) + 128); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16))); goto L_002EE0FC;
L_002EE074:;
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(4) + 1000);
SET32(2, RW(16) + RW(2));
SET64(5, RD(4) & 0xffff);
SET64(1, RD(0) | 0x86a0);
SET32(4, RW(16) + RW(1));
SET64(31, 0x2ee094); wr32(c, (RW(2) + -30832), RW(3)); JP_F_003000F0(c);
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + -1);
SET32(3, RW(16) + RW(3));
wr16(c, (RW(3) + -30828), (u16)RW(4));
SET32(2, RW(16) + RW(2));
SET64(3, (s32)rd32(c, (RW(2) + -30268)));
if (RD(3) == RD(0)) { SET32(4, RW(16) + 128); goto L_002EE0C4; }
SET32(2, RW(0) + 1);
wr8(c, (RW(3) + 20), (u8)RW(2));
SET32(4, RW(16) + 128);
L_002EE0C4:;
SET64(31, 0x2ee0cc);  JP_F_0031CA60(c);
SET64(31, 0x2ee0d4); SET32(4, RW(16) + 128); JP_F_001E9110(c);
SET32(4, RW(16) + 128);
SET64(31, 0x2ee0e0); SET64(5, RD(0) + RD(0)); JP_F_00158E90(c);
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x2ee0f8); SET32(4, RW(16) + 128); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
L_002EE0FC:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002EE110(Ctx *c) { /* func_002EE110 */
ENTER(0x2ee110);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x10000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(4) + RW(3));
SET64(5, (s16)rd16(c, (RW(3) + -30828)));
SET32(6, RW(0) + -1);
if (RD(5) == RD(6)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002EE13C; }
SET64(31, 0x2ee138); SET32(6, RW(0) + 1); JP_F_002EDFB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_002EE13C:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002EE150(Ctx *c) { /* func_002EE150 */
ENTER(0x2ee150);
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(2, (s16)rd16(c, (RW(2) + -30828)));
SET64(2, ~(RD(2) | RD(0)));
SET64(2, RD(0) < RD(2)); return;
}

void JP_F_002EE170(Ctx *c) { /* func_002EE170 */
ENTER(0x2ee170);
SET32(29, RW(29) + -48);
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(3) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(3, RW(4) + RW(3));
wr32(c, (RW(3) + -30824), RW(0));
SET32(2, RW(4) + RW(2));
wr8(c, (RW(2) + -30848), (u8)RW(0));
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(6, RW(0) + 1);
SET32(3, RW(4) + RW(3));
SET32(2, RW(4) + RW(2));
wr8(c, (RW(3) + -30847), (u8)RW(6));
SET64(5, (s64)(s32)0xbf800000);
wr8(c, (RW(2) + -30846), (u8)RW(0));
SET64(16, RD(4) + RD(0));
SET64(2, (s64)(s32)0x10000);
SET64(3, RD(2) + RD(0));
SET32(2, RW(4) + RW(2));
SET32(3, RW(4) + RW(3));
wr32(c, (RW(2) + -30844), RW(5));
SET64(2, (s64)(s32)0x10000);
wr8(c, (RW(3) + -30544), (u8)RW(6));
SET32(2, RW(4) + RW(2));
SET64(3, (s64)(s32)0x10000);
wr8(c, (RW(2) + -30543), (u8)RW(6));
SET32(3, RW(4) + RW(3));
SET64(2, (s64)(s32)0x10000);
wr8(c, (RW(3) + -30542), (u8)RW(0));
SET32(2, RW(4) + RW(2));
SET64(3, (s64)(s32)0x10000);
wr8(c, (RW(2) + -30528), (u8)RW(0));
SET32(3, RW(4) + RW(3));
SET64(2, (s64)(s32)0x10000);
wr8(c, (RW(3) + -30527), (u8)RW(0));
SET32(2, RW(4) + RW(2));
SET64(3, (s64)(s32)0x10000);
wr8(c, (RW(2) + -30526), (u8)RW(0));
SET32(3, RW(4) + RW(3));
SET64(2, (s64)(s32)0x10000);
wr8(c, (RW(3) + -30525), (u8)RW(0));
SET32(2, RW(4) + RW(2));
SET64(3, (s64)(s32)0x10000);
wr8(c, (RW(2) + -30524), (u8)RW(0));
SET32(3, RW(4) + RW(3));
SET64(2, (s64)(s32)0x10000);
wr8(c, (RW(3) + -30523), (u8)RW(0));
SET32(2, RW(4) + RW(2));
wr8(c, (RW(2) + -30522), (u8)RW(0));
SET64(4, RD(0) + RD(0));
L_002EE240:;
SET64(3, RD(4) & 0xffff);
SET32(2, RW(4) + 7);
SET32(3, RW(16) + RW(3));
SET64(1, RD(0) | 0x88c7);
SET32(3, RW(3) + RW(1));
SET64(4, RD(2) & 0xffff);
wr8(c, (RW(3) + 0), (u8)RW(0));
SET64(2, RSD(4) < (s64)14);
wr8(c, (RW(3) + 1), (u8)RW(0));
wr8(c, (RW(3) + 2), (u8)RW(0));
wr8(c, (RW(3) + 3), (u8)RW(0));
wr8(c, (RW(3) + 4), (u8)RW(0));
wr8(c, (RW(3) + 5), (u8)RW(0));
{ int t = RD(2) != RD(0); wr8(c, (RW(3) + 6), (u8)RW(0)); if (t) { POLL(); goto L_002EE240; } }
SET64(2, (s64)(s32)0x10000);
SET64(8, (s64)(s32)0x3f800000);
SET32(3, RW(0) + 255);
SET32(2, RW(16) + RW(2));
wr8(c, (RW(2) + -30507), (u8)RW(3));
SET64(5, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(29) + 32), RW(0));
SET32(2, RW(16) + RW(2));
wr32(c, (RW(29) + 36), RW(0));
wr8(c, (RW(2) + -30506), (u8)RW(3));
SET64(4, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(29) + 40), RW(0));
SET64(3, RD(2) + RD(0));
wr32(c, (RW(29) + 44), RW(8));
rd128(c, (RW(29) + 32) & ~15u, &c->r[7]);
SET32(5, RW(16) + RW(5));
SET32(4, RW(16) + RW(4));
SET32(6, RW(0) + 1);
SET32(2, RW(16) + RW(2));
SET32(3, RW(16) + RW(3));
wr128(c, (RW(5) + -30496) & ~15u, &c->r[7]);
wr16(c, (RW(4) + -30480), (u16)RW(0));
wr8(c, (RW(2) + -30448), (u8)RW(6));
SET32(4, RW(0) + -1);
SET64(2, (s64)(s32)0x10000);
wr8(c, (RW(3) + -30735), (u8)RW(0));
SET32(2, RW(16) + RW(2));
SET64(3, (s64)(s32)0x10000);
wr8(c, (RW(2) + -30722), (u8)RW(0));
SET32(3, RW(16) + RW(3));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
wr8(c, (RW(2) + -30721), (u8)RW(0));
wr16(c, (RW(3) + -30720), (u16)RW(4));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
SET64(3, (s64)(s32)0x10000);
wr8(c, (RW(2) + -30716), (u8)RW(0));
SET32(3, RW(16) + RW(3));
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30740), RW(8));
SET32(2, RW(16) + RW(2));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(2) + -30732), RW(0));
SET32(3, RW(16) + RW(3));
SET64(2, (s64)(s32)0x10000);
wr8(c, (RW(3) + -30715), (u8)RW(0));
SET32(2, RW(16) + RW(2));
SET64(3, (s64)(s32)0x10000);
SET64(5, (s32)rd32(c, (RW(2) + -30816)));
SET32(3, RW(16) + RW(3));
SET32(4, RW(0) + 12);
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30804), RW(5));
SET32(2, RW(16) + RW(2));
SET64(3, (s32)rd32(c, (RW(2) + -30832)));
if (RD(3) == RD(4)) { SET32(4, RW(16) + 128); goto L_002EE3AC; }
SET32(2, RW(0) + 9);
{ int t = RD(3) == RD(2);  if (t) goto L_002EE3A8; }
SET32(2, RW(0) + 18);
{ int t = RD(3) == RD(2);  if (t) goto L_002EE3A8; }
SET32(2, RW(0) + 15);
{ int t = RD(3) == RD(2);  if (t) goto L_002EE3A8; }
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(3) + RD(0));
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + -30808)));
wr32(c, (RW(2) + -30816), RW(3));
L_002EE3A8:;
SET32(4, RW(16) + 128);
L_002EE3AC:;
SET64(31, 0x2ee3b4); SET32(5, RW(0) + 1); JP_F_0031CFA0(c);
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + -1);
SET32(3, RW(16) + RW(3));
wr16(c, (RW(3) + -30436), (u16)RW(4));
SET32(2, RW(16) + RW(2));
wr16(c, (RW(2) + -30428), (u16)RW(4));
SET64(5, RD(0) + RD(0));
SET64(3, RD(16) + RD(0));
L_002EE3D8:;
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(3) + RW(2));
SET64(2, (s16)rd16(c, (RW(2) + -30436)));
if (RD(2) != RD(4)) { SET32(5, RW(5) + 1); goto L_002EE414; }
SET32(2, RW(5) << 3);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(2) + RW(16));
SET32(5, RW(0) + 19);
SET32(3, RW(4) + RW(3));
SET64(2, (s64)(s32)0x10000);
wr16(c, (RW(3) + -30436), (u16)RW(5));
SET32(2, RW(4) + RW(2));
wr32(c, (RW(2) + -30432), RW(0)); goto L_002EE420;
L_002EE414:;
SET64(2, RD(5) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 8); if (t) { POLL(); goto L_002EE3D8; } }
L_002EE420:;
SET64(5, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
SET32(3, RW(0) + -1);
L_002EE42C:;
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(2, (s16)rd16(c, (RW(2) + -30436)));
if (RD(2) != RD(3)) { SET32(5, RW(5) + 1); goto L_002EE468; }
SET32(2, RW(5) << 3);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(2) + RW(16));
SET32(5, RW(0) + 21);
SET32(3, RW(4) + RW(3));
SET64(2, (s64)(s32)0x10000);
wr16(c, (RW(3) + -30436), (u16)RW(5));
SET32(2, RW(4) + RW(2));
wr32(c, (RW(2) + -30432), RW(0)); goto L_002EE478;
L_002EE468:;
SET64(2, RD(5) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 8); if (t) { POLL(); goto L_002EE42C; } }
L_002EE478:;
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
if (RD(4) == RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002EE498; }
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2ee494);  JP_F_002FC2C0(c);
SET64(2, (s64)(s32)0x10000);
L_002EE498:;
SET64(1, RD(0) | 0x8650);
SET32(2, RW(16) + RW(2));
SET32(4, RW(16) + RW(1));
SET64(31, 0x2ee4ac); wr8(c, (RW(2) + -30820), (u8)RW(0)); JP_F_00147DA0(c);
SET64(1, RD(0) | 0x8660);
SET64(31, 0x2ee4b8); SET32(4, RW(16) + RW(1)); JP_F_00147DA0(c);
SET64(1, RD(0) | 0x8670);
SET64(31, 0x2ee4c4); SET32(4, RW(16) + RW(1)); JP_F_00147DA0(c);
SET64(1, RD(0) | 0x8680);
SET64(31, 0x2ee4d0); SET32(4, RW(16) + RW(1)); JP_F_00147DA0(c);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(16) + 128);
SET64(2, RD(3) + RD(0));
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
wr16(c, (RW(3) + -31088), (u16)RW(0));
SET64(31, 0x2ee4f0); wr32(c, (RW(2) + -31084), RW(0)); JP_F_0031D240(c);
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET64(4, (s64)(s32)0x3f800000);
SET32(3, RW(16) + RW(3));
wr32(c, (RW(3) + -30260), RW(4));
SET32(2, RW(16) + RW(2));
wr8(c, (RW(2) + -30819), (u8)RW(0));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(16) + RW(3));
SET64(2, (s64)(s32)0x10000);
wr8(c, (RW(3) + -30408), (u8)RW(0));
SET32(2, RW(16) + RW(2));
wr8(c, (RW(2) + -30368), (u8)RW(0));
SET64(1, RD(0) | 0x87b0);
SET64(2, (s64)(s32)0x3dcc0000);
SET32(4, RW(16) + RW(1));
SET64(3, RD(2) | 0xcccd);
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
c->f[12].u = RW(0);
SET64(31, 0x2ee548); wr32(c, (RW(2) + -30440), RW(3)); JP_F_00323860(c);
SET64(4, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(16) + RW(4));
SET32(5, RW(0) + 1);
wr8(c, (RW(4) + -30736), (u8)RW(0));
SET32(3, RW(16) + RW(3));
wr8(c, (RW(3) + -30416), (u8)RW(5));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002EE580(Ctx *c) { /* func_002EE580 */
ENTER(0x2ee580);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(3) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(5) + 1000);
SET32(3, RW(4) + RW(3));
SET32(2, RW(4) + RW(2));
wr16(c, (RW(3) + -30828), (u16)RW(5));
SET64(31, 0x2ee5a8); wr8(c, (RW(2) + -30826), (u8)RW(0)); JP_F_002EE170(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002EE5C0(Ctx *c) { /* func_002EE5C0 */
ENTER(0x2ee5c0);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(4) + RW(2));
wr16(c, (RW(2) + -30828), (u16)RW(5));
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(31, 0x2ee5e8); wr8(c, (RW(2) + -30826), (u8)RW(3)); JP_F_002EE170(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002EE600(Ctx *c) { /* func_002EE600 */
ENTER(0x2ee600);
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30832))); return;
}

void JP_F_002EE610(Ctx *c) { /* func_002EE610 */
ENTER(0x2ee610);
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30836))); return;
}

void JP_F_002EE620(Ctx *c) { /* func_002EE620 */
ENTER(0x2ee620);
SET32(29, RW(29) + -336);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, (s32)rd32(c, (RW(4) + 44)));
SET64(31, 0x2ee650); SET32(4, RW(29) + 144); JP_F_0013AEA0(c);
SET64(5, RD(19) + RD(0));
SET64(31, 0x2ee65c); SET32(4, RW(29) + 144); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ee668); SET32(4, RW(29) + 272); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
SET32(4, RW(18) + 128);
wr128(c, (RW(16) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 288) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 320) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 0) & ~15u, &c->r[2]);
SET64(31, 0x2ee698); wr128(c, (RW(16) + 48) & ~15u, &c->r[2]); JP_F_00159FB0(c);
SET64(2, (s8)rd8(c, (RW(28) + -30312)));
if (RD(2) != RD(0)) { SET32(4, RW(29) + 208); goto L_002EE700; }
wr32(c, (RW(29) + 0), RW(0));
c->f[13].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 8), RW(0));
wr32(c, (RW(29) + 16), RW(2));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 24), RW(0));
SET64(4, (s64)(s32)0x420000);
wr32(c, (RW(29) + 32), RW(0));
SET32(4, RW(4) + -17024);
wr32(c, (RW(29) + 40), RW(0));
c->f[14].u = c->f[13].u;
wr32(c, (RW(29) + 48), RW(0));
c->f[15].u = c->f[13].u;
c->f[16].u = c->f[13].u;
wr32(c, (RW(29) + 56), RW(2));
c->f[17].u = c->f[12].u;
c->f[18].u = c->f[13].u;
SET64(31, 0x2ee6f4); c->f[19].u = c->f[13].u; JP_F_002AF0D0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30312), (u8)RW(2));
SET32(4, RW(29) + 208);
L_002EE700:;
SET64(31, 0x2ee708);  JP_F_002AF080(c);
SET64(8, (s64)(s32)0x420000);
SET32(5, RW(29) + 208);
SET32(8, RW(8) + -17024);
SET32(4, RW(18) + 128);
rd128(c, (RW(8) + 0) & ~15u, &c->r[7]);
rd128(c, (RW(8) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(8) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 208) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 224) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 240) & ~15u, &c->r[2]);
rd128(c, (RW(8) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 256) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(18) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2ee748); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 128)));
rd128(c, (RW(29) + 112) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET32(29, RW(29) + 336); return;
}

void JP_F_002EE770(Ctx *c) { /* func_002EE770 */
ENTER(0x2ee770);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2ee788); SET32(4, RW(16) + 128); JP_F_00159FB0(c);
SET64(2, (s8)rd8(c, (RW(28) + -30312)));
if (RD(2) != RD(0)) { SET32(4, RW(29) + 96); goto L_002EE7F0; }
wr32(c, (RW(29) + 0), RW(0));
c->f[13].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 8), RW(0));
wr32(c, (RW(29) + 16), RW(2));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 24), RW(0));
SET64(4, (s64)(s32)0x420000);
wr32(c, (RW(29) + 32), RW(0));
SET32(4, RW(4) + -17024);
wr32(c, (RW(29) + 40), RW(0));
c->f[14].u = c->f[13].u;
wr32(c, (RW(29) + 48), RW(0));
c->f[15].u = c->f[13].u;
c->f[16].u = c->f[13].u;
wr32(c, (RW(29) + 56), RW(2));
c->f[17].u = c->f[12].u;
c->f[18].u = c->f[13].u;
SET64(31, 0x2ee7e4); c->f[19].u = c->f[13].u; JP_F_002AF0D0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30312), (u8)RW(2));
SET32(4, RW(29) + 96);
L_002EE7F0:;
SET64(31, 0x2ee7f8);  JP_F_002AF080(c);
SET64(8, (s64)(s32)0x420000);
SET32(5, RW(29) + 96);
SET32(8, RW(8) + -17024);
SET32(4, RW(16) + 128);
rd128(c, (RW(8) + 0) & ~15u, &c->r[7]);
rd128(c, (RW(8) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(8) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
rd128(c, (RW(8) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2ee838); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_002EE850(Ctx *c) { /* func_002EE850 */
ENTER(0x2ee850);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2ee868); SET32(4, RW(16) + 128); JP_F_00159A80(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 2240), (u8)RW(3));
wr8(c, (RW(16) + 2241), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002EE890(Ctx *c) { /* func_002EE890 */
ENTER(0x2ee890);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2ee8a8); SET32(4, RW(16) + 128); JP_F_00159D50(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 2240), (u8)RW(3));
wr8(c, (RW(16) + 2241), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002EE8D0(Ctx *c) { /* func_002EE8D0 */
ENTER(0x2ee8d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2ee8ec); SET64(16, RD(5) + RD(0)); JP_F_0030C170(c);
SET64(4, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x2ee8fc); SET64(5, RD(2) + RD(0)); JP_F_002EE950(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002EE910(Ctx *c) { /* func_002EE910 */
ENTER(0x2ee910);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2ee92c); SET64(16, RD(5) + RD(0)); JP_F_0030C3A0(c);
SET64(4, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x2ee93c); SET64(5, RD(2) + RD(0)); JP_F_002EE950(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002EE950(Ctx *c) { /* func_002EE950 */
ENTER(0x2ee950);
SET32(29, RW(29) + -128);
SET64(1, RD(0) | 0x8710);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(5, RW(19) + 48);
SET64(16, RD(4) + RD(0));
SET32(17, RW(16) + RW(1));
SET64(25, (s32)rd32(c, (RW(17) + 32)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ee990); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(16) + 128);
SET64(31, 0x2ee99c); SET32(5, RW(0) + 3); JP_F_00159580(c);
rd128(c, (RW(2) + 112) & ~15u, &c->r[2]);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
c->f[5].u = rd32(c, (RW(18) + 8));
wr32(c, (RW(29) + 100), RW(0));
c->f[3].u = rd32(c, (RW(18) + 4));
wr32(c, (RW(29) + 104), RW(0));
c->f[0].u = rd32(c, (RW(18) + 0));
wr32(c, (RW(29) + 108), RW(3));
SET32(4, RW(29) + 112);
wr128(c, (RW(29) + 96) & ~15u, &c->r[2]);
c->f[4].u = rd32(c, (RW(29) + 104));
wr32(c, (RW(29) + 124), RW(3));
c->f[2].u = rd32(c, (RW(29) + 100));
c->f[1].u = rd32(c, (RW(29) + 96));
c->f[4].f = fpu(F(4) - F(5));
c->f[2].f = fpu(F(2) - F(3));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 120), c->f[4].u);
wr32(c, (RW(29) + 116), c->f[2].u);
SET64(31, 0x2ee9f4); wr32(c, (RW(29) + 112), c->f[0].u); JP_F_002B0360(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET64(1, RD(0) | 0x86e0);
SET32(4, RW(16) + RW(1));
wr128(c, (RW(17) + 48) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(4) + 32)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2eea14); SET64(5, RD(19) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x2eea28); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(1, RD(0) | 0x86e0);
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x2eea40); SET32(5, RW(16) + RW(1)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(1, RD(0) | 0x86e0);
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2eea58); SET32(5, RW(16) + RW(1)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2eea6c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, 0x2eea74); SET32(4, RW(16) + 160); JP_F_002A8610(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 92), RW(3));
wr32(c, (RW(29) + 84), RW(0));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(29) + 88), RW(0));
SET32(3, RW(16) + RW(3));
rd128(c, (RW(29) + 80) & ~15u, &c->r[4]);
wr128(c, (RW(3) + -30880) & ~15u, &c->r[4]);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002EEAC0(Ctx *c) { /* func_002EEAC0 */
ENTER(0x2eeac0);
SET32(29, RW(29) + -128);
SET64(2, (s64)(s32)0x4c0000);
wr64(c, (RW(29) + 64), RD(31));
SET64(1, RD(0) | 0x86e0);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
rd128(c, (RW(2) + -9936) & ~15u, &c->r[3]);
SET64(16, RD(4) + RD(0));
SET32(4, RW(16) + RW(1));
SET64(1, RD(0) | 0x8750);
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
wr128(c, (RW(2) + -30896) & ~15u, &c->r[3]);
SET64(25, (s32)rd32(c, (RW(4) + 32)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2eeb10); SET32(5, RW(16) + RW(1)); rt_call(c, t); }
SET64(19, RD(17) & 0xff);
SET64(1, RD(0) | 0x8710);
SET32(17, RW(16) + RW(1));
SET64(18, (s64)(s32)0x4c0000);
SET64(25, (s32)rd32(c, (RW(17) + 32)));
SET32(18, RW(18) + -9888);
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2eeb38); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
if (RD(19) != RD(0)) { c->f[2].u = rd32(c, (RW(18) + 56)); goto L_002EEB4C; }
rd128(c, (RW(18) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 48) & ~15u, &c->r[2]); goto L_002EEB74;
L_002EEB4C:;
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(18) + 52));
wr32(c, (RW(29) + 108), RW(2));
c->f[0].u = rd32(c, (RW(18) + 48));
c->f[2].u = c->f[2].u ^ 0x80000000u;
wr32(c, (RW(29) + 100), c->f[1].u);
wr32(c, (RW(29) + 96), c->f[0].u);
wr32(c, (RW(29) + 104), c->f[2].u);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 48) & ~15u, &c->r[2]);
L_002EEB74:;
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(1, RD(0) | 0x8710);
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x2eeb8c); SET32(5, RW(16) + RW(1)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(1, RD(0) | 0x86e0);
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x2eeba4); SET32(5, RW(16) + RW(1)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(1, RD(0) | 0x86e0);
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2eebbc); SET32(5, RW(16) + RW(1)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(1, RD(0) | 0x8710);
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2eebd4); SET32(5, RW(16) + RW(1)); rt_call(c, t); }
SET64(31, 0x2eebdc); SET32(4, RW(16) + 160); JP_F_002A8610(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 92), RW(3));
wr32(c, (RW(29) + 84), RW(0));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(29) + 88), RW(0));
SET32(3, RW(16) + RW(3));
rd128(c, (RW(29) + 80) & ~15u, &c->r[4]);
wr128(c, (RW(3) + -30880) & ~15u, &c->r[4]);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002EEC20(Ctx *c) { /* func_002EEC20 */
ENTER(0x2eec20);
SET32(29, RW(29) + -112);
SET64(5, RD(5) & 0xffff);
wr64(c, (RW(29) + 64), RD(31));
SET32(3, RW(5) << 2);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET32(3, RW(3) + RW(5));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(3, RW(3) << 1);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, (s64)(s32)0x4c0000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(3, RW(3) + RW(5));
SET64(16, RD(4) + RD(0));
SET64(1, RD(0) | 0x8710);
SET32(17, RW(16) + RW(1));
SET32(2, RW(2) + -15216);
SET64(25, (s32)rd32(c, (RW(17) + 32)));
SET32(3, RW(3) << 4);
SET32(19, RW(2) + RW(3));
SET64(4, RD(17) + RD(0));
SET32(18, RW(19) + 48);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2eec80); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
rd128(c, (RW(18) + 48) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x86e0);
SET32(2, RW(16) + RW(2));
SET32(4, RW(16) + RW(1));
wr128(c, (RW(17) + 48) & ~15u, &c->r[3]);
SET64(1, RD(0) | 0x8750);
rd128(c, (RW(19) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(2) + -30896) & ~15u, &c->r[3]);
SET64(25, (s32)rd32(c, (RW(4) + 32)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2eecb4); SET32(5, RW(16) + RW(1)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x2eecc8); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(1, RD(0) | 0x86e0);
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x2eece0); SET32(5, RW(16) + RW(1)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(1, RD(0) | 0x86e0);
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2eecf8); SET32(5, RW(16) + RW(1)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2eed0c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, 0x2eed14); SET32(4, RW(16) + 160); JP_F_002A8610(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 92), RW(3));
wr32(c, (RW(29) + 84), RW(0));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(29) + 88), RW(0));
SET32(3, RW(16) + RW(3));
rd128(c, (RW(29) + 80) & ~15u, &c->r[4]);
wr128(c, (RW(3) + -30880) & ~15u, &c->r[4]);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002EED60(Ctx *c) { /* func_002EED60 */
ENTER(0x2eed60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(28) + -29872)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002EED8C; }
SET64(3, (s32)rd32(c, (RW(3) + 680)));
{ int t = RD(3) == RD(0);  if (t) goto L_002EED88; }
SET64(31, 0x2eed88); SET64(5, rd16(c, (RW(3) + 464))); JP_F_002EEC20(c);
L_002EED88:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002EED8C:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002EEDA0(Ctx *c) { /* func_002EEDA0 */
ENTER(0x2eeda0);
SET32(29, RW(29) + -32);
SET64(1, RD(0) | 0x86e0);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2eedc8); SET32(5, RW(16) + RW(1)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(1, RD(0) | 0x8710);
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2eede0); SET32(5, RW(16) + RW(1)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002EEDF0(Ctx *c) { /* func_002EEDF0 */
ENTER(0x2eedf0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 16), RD(31));
{ int t = RD(5) != RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_002EEE0C; }
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(4) + RW(3));
SET64(5, (s32)rd32(c, (RW(3) + -30852)));
L_002EEE0C:;
if (RD(5) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002EEE9C; }
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0xbf800000);
wr32(c, (RW(29) + 80), RW(0));
SET32(6, RW(29) + 32);
wr32(c, (RW(29) + 84), RW(2));
SET32(7, RW(29) + 80);
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 92), RW(3));
SET64(2, (s32)rd32(c, (RW(5) + 44)));
SET64(16, (s32)rd32(c, (RW(4) + 44)));
wr32(c, (RW(29) + 64), RW(0));
c->f[1].u = rd32(c, (RW(2) + 56));
wr32(c, (RW(29) + 68), RW(0));
c->f[0].u = rd32(c, (RW(2) + 48));
wr32(c, (RW(29) + 72), RW(0));
wr32(c, (RW(29) + 76), RW(3));
SET32(5, RW(29) + 48);
SET64(4, RD(16) + RD(0));
rd128(c, (RW(16) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 32), c->f[0].u);
wr32(c, (RW(29) + 40), c->f[1].u);
wr32(c, (RW(29) + 44), RW(3));
c->f[1].u = rd32(c, (RW(29) + 64));
wr32(c, (RW(29) + 60), RW(3));
c->f[0].u = rd32(c, (RW(29) + 72));
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 52), RW(0));
wr32(c, (RW(29) + 48), c->f[1].u);
SET64(31, 0x2eee90); wr32(c, (RW(29) + 56), c->f[0].u); JP_F_00147DE0(c);
c->f[0].u = rd32(c, (RW(29) + 68));
wr32(c, (RW(16) + 52), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 16)));
L_002EEE9C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002EEEB0(Ctx *c) { /* func_002EEEB0 */
ENTER(0x2eeeb0);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 48), RD(31));
SET32(2, RW(4) + RW(2));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd8(c, (RW(2) + -31051)));
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002EEEE0; }
SET64(2, RD(0) + RD(0)); goto L_002EEFD4;
L_002EEEE0:;
SET32(4, RW(17) + 128);
SET64(16, RD(0) + (s64)1);
SET64(31, 0x2eeef0); SET64(18, RD(0) + RD(0)); JP_F_001E9400(c);
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002EEF04; }
SET32(2, RW(18) + 1);
SET64(18, RD(2) & 0xffff);
SET64(2, (s64)(s32)0x10000);
L_002EEF04:;
SET32(2, RW(17) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30864)));
if (RD(4) == RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002EEF30; }
SET64(31, 0x2eef1c);  JP_F_001B74F0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002EEF2C; }
SET32(2, RW(18) + 1);
SET64(18, RD(2) & 0xffff);
L_002EEF2C:;
SET64(2, (s64)(s32)0x10000);
L_002EEF30:;
SET32(2, RW(17) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30860)));
if (RD(4) == RD(0)) { SET64(2, RD(18) & 0xffff); goto L_002EEF5C; }
SET64(31, 0x2eef48);  JP_F_001B74F0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002EEF58; }
SET32(2, RW(18) + 1);
SET64(18, RD(2) & 0xffff);
L_002EEF58:;
SET64(2, RD(18) & 0xffff);
L_002EEF5C:;
if (RD(2) != RD(0)) { SET64(2, RD(16) + RD(0)); goto L_002EEFD4; }
SET64(5, (s32)rd32(c, (RW(17) + 1876)));
SET32(4, RW(17) + 128);
SET64(6, RD(17) + RD(0));
SET64(31, 0x2eef78); SET64(16, RD(0) + RD(0)); JP_F_001E7E50(c);
SET64(4, (s32)rd32(c, (RW(17) + 4144)));
if (RD(4) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 1144))); goto L_002EEF90; }
SET64(31, 0x2eef8c); SET64(5, RD(17) + RD(0)); JP_F_001EA3C0(c);
SET64(5, (s32)rd32(c, (RW(17) + 1144)));
L_002EEF90:;
SET64(1, RD(0) | 0x86a0);
SET64(31, 0x2eef9c); SET32(4, RW(17) + RW(1)); JP_F_00300190(c);
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET32(4, RW(0) + 1);
wr16(c, (RW(3) + -30828), (u16)RW(0));
SET32(2, RW(17) + RW(2));
wr8(c, (RW(2) + -30826), (u8)RW(4));
SET64(31, 0x2eefc0); SET64(4, RD(17) + RD(0)); JP_F_002EE170(c);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(0) + 1);
SET32(2, RW(17) + RW(2));
wr8(c, (RW(2) + -31051), (u8)RW(3));
SET64(2, RD(16) + RD(0));
L_002EEFD4:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

