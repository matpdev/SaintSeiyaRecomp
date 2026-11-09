#include "r5900.h"
#include "functab.h"

void JP_F_0014EF10(Ctx *c) { /* func_0014EF10 */
ENTER(0x14ef10);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -188);
SET32(4, RW(4) + RW(25)); { JP_F_0014B3E0(c); return; }
}

void JP_F_0014EF20(Ctx *c) { /* func_0014EF20 */
ENTER(0x14ef20);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -188);
SET32(4, RW(4) + RW(25)); { JP_F_0014B9D0(c); return; }
}

void JP_F_0014EF30(Ctx *c) { /* func_0014EF30 */
ENTER(0x14ef30);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -188);
SET32(4, RW(4) + RW(25)); { JP_F_0014BB80(c); return; }
}

void JP_F_0014EF40(Ctx *c) { /* func_0014EF40 */
ENTER(0x14ef40);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -184);
SET32(4, RW(4) + RW(25)); { JP_F_0014E9E0(c); return; }
}

void JP_F_0014EF50(Ctx *c) { /* func_0014EF50 */
ENTER(0x14ef50);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -184);
SET32(4, RW(4) + RW(25)); { JP_F_0014B280(c); return; }
}

void JP_F_0014EF60(Ctx *c) { /* func_0014EF60 */
ENTER(0x14ef60);
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET32(4, RW(4) + -68);
SET32(4, RW(4) + RW(25)); { JP_F_0014AD50(c); return; }
}

void JP_F_0014EF70(Ctx *c) { /* func_0014EF70 */
ENTER(0x14ef70);
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET32(4, RW(4) + -68);
SET32(4, RW(4) + RW(25)); { JP_F_0014AF20(c); return; }
}

void JP_F_0014EF80(Ctx *c) { /* func_0014EF80 */
ENTER(0x14ef80);
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET32(4, RW(4) + -68);
SET32(4, RW(4) + RW(25)); { JP_F_0014B0C0(c); return; }
}

void JP_F_0014EF90(Ctx *c) { /* func_0014EF90 */
ENTER(0x14ef90);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -84);
SET32(4, RW(4) + RW(25)); { JP_F_0014AF30(c); return; }
}

void JP_F_0014EFA0(Ctx *c) { /* func_0014EFA0 */
ENTER(0x14efa0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -84);
SET32(4, RW(4) + RW(25)); { JP_F_0014AF40(c); return; }
}

void JP_F_0014EFB0(Ctx *c) { /* func_0014EFB0 */
ENTER(0x14efb0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -84);
SET32(4, RW(4) + RW(25)); { JP_F_0014B030(c); return; }
}

void JP_F_0014EFC0(Ctx *c) { /* func_0014EFC0 */
ENTER(0x14efc0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -84);
SET32(4, RW(4) + RW(25)); { JP_F_0014B0C0(c); return; }
}

void JP_F_0014EFD0(Ctx *c) { /* func_0014EFD0 */
ENTER(0x14efd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014F040; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1232);
wr32(c, (RW(17) + 60), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14f008);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0014F02C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1168);
wr32(c, (RW(17) + 60), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x14f028); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_0014F02C:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0014F044; }
SET64(31, 0x14f040); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0014F040:;
SET64(2, RD(17) + RD(0));
L_0014F044:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014F060(Ctx *c) { /* func_0014F060 */
ENTER(0x14f060);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, rd8(c, (RW(4) + 56)));
{ int t = RD(3) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014F200; }
SET64(3, rd8(c, (RW(17) + 57)));
if (RD(3) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 8))); goto L_0014F0B0; }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(5, (s32)rd32(c, (RW(17) + 64)));
SET64(3, (s32)rd32(c, (RW(17) + 28)));
SET32(4, RW(4) << 2);
SET32(4, RW(4) + RW(5));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 68))); goto L_0014F0F4; }
SET64(4, (s32)rd32(c, (RW(17) + 8)));
L_0014F0B0:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14f0c0); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s64)(s32)0x530000);
SET64(5, RD(16) + RD(0));
SET64(31, 0x14f0d0); SET32(4, RW(4) + -22344); JP_F_002B4920(c);
SET64(3, (s32)rd32(c, (RW(17) + 76)));
SET64(5, (s32)rd32(c, (RW(17) + 28)));
SET64(4, (s32)rd32(c, (RW(17) + 64)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(4) + 8), RW(5));
wr32(c, (RW(3) + 12), RW(5));
wr8(c, (RW(17) + 57), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 68)));
L_0014F0F4:;
SET64(3, (s32)rd32(c, (RW(17) + 28)));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
if (RD(4) == RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0014F204; }
SET32(6, RW(0) + 1);
wr8(c, (RW(17) + 57), (u8)RW(6));
SET64(3, rd8(c, (RW(17) + 56)));
if (RD(3) != RD(0)) { SET64(3, rd8(c, (RW(17) + 57))); goto L_0014F120; }
SET64(3, RD(0) + RD(0)); goto L_0014F184;
L_0014F120:;
if (RD(3) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 28))); goto L_0014F130; }
SET64(3, RD(6) & 0xff); goto L_0014F184;
L_0014F130:;
SET32(3, RW(0) + -1);
if (RD(5) != RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 32))); goto L_0014F144; }
SET64(3, RD(6) & 0xff); goto L_0014F184;
L_0014F144:;
SET64(3, (s32)rd32(c, (RW(4) + 8)));
if (RD(5) == RD(3)) { SET64(6, RD(0) + RD(0)); goto L_0014F158; }
SET64(3, RD(6) & 0xff); goto L_0014F184;
L_0014F158:;
SET32(3, RW(6) << 2);
L_0014F15C:;
SET32(3, RW(4) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
if (RD(5) == RD(3)) { SET32(6, RW(6) + 1); goto L_0014F174; }
SET64(3, RD(0) + (s64)1); goto L_0014F184;
L_0014F174:;
SET64(3, RSD(6) < (s64)4);
if (RD(3) != RD(0)) { SET32(3, RW(6) << 2); { POLL(); goto L_0014F15C; } }
SET64(3, RD(0) + RD(0));
L_0014F184:;
{ int t = RD(3) == RD(0);  if (t) goto L_0014F200; }
SET64(4, (s32)rd32(c, (RW(17) + 8)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 12))); goto L_0014F1AC; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14f1a8); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 12)));
L_0014F1AC:;
{ int t = RD(4) == RD(0);  if (t) goto L_0014F1C4; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14f1c4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_0014F1C4:;
SET64(4, (s64)(s32)0x530000);
SET64(5, RD(16) + RD(0));
SET64(31, 0x14f1d4); SET32(4, RW(4) + -22344); JP_F_002B4920(c);
SET64(4, (s32)rd32(c, (RW(17) + 32)));
SET64(3, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(4) + 8), RW(3));
wr32(c, (RW(4) + 12), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(4) + 16), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(4) + 20), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(4) + 24), RW(3));
wr8(c, (RW(17) + 57), (u8)RW(0));
L_0014F200:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0014F204:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014F220(Ctx *c) { /* func_0014F220 */
ENTER(0x14f220);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 76)));
{ int t = RD(5) == RD(3); SET64(17, RD(4) + RD(0)); if (t) goto L_0014F3A8; }
wr32(c, (RW(17) + 76), RW(5));
SET64(2, (s32)rd32(c, (RW(17) + 64)));
SET64(3, (s32)rd32(c, (RW(17) + 68)));
SET64(16, (s32)rd32(c, (RW(17) + 72)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(20, (s32)rd32(c, (RW(3) + 0)));
SET64(19, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(19) + 8)));
{ int t = RSD(2) >= 0; SET32(18, RSW(2) >> 2); if (t) goto L_0014F27C; }
SET32(2, RW(2) + 3);
SET32(18, RSW(2) >> 2);
L_0014F27C:;
SET64(31, 0x14f284); SET32(4, RW(0) + 20); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_0014F2C8; }
SET64(2, (s32)rd32(c, (RW(19) + 8)));
{ int t = RSD(2) >= 0; SET32(5, RSW(2) >> 2); if (t) goto L_0014F2A0; }
SET32(2, RW(2) + 3);
SET32(5, RSW(2) >> 2);
L_0014F2A0:;
SET64(3, (s32)rd32(c, (RW(17) + 76)));
SET64(4, RD(21) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 12)));
SET64(7, (s32)rd32(c, (RW(19) + 16)));
mul_s(c, 0, 3, RSW(18), RSW(3));
SET64(31, 0x14f2bc); SET32(6, RW(3) + RW(2)); JP_F_002B3400(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1192);
wr32(c, (RW(21) + 0), RW(2));
L_0014F2C8:;
SET32(4, RW(0) + 28);
SET64(31, 0x14f2d4); wr32(c, (RW(17) + 72), RW(21)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0014F2FC; }
SET64(2, (s32)rd32(c, (RW(17) + 64)));
SET64(5, rd16(c, (RW(17) + 52)));
SET64(6, rd16(c, (RW(17) + 54)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(8, (s32)rd32(c, (RW(17) + 72)));
SET64(7, (s32)rd32(c, (RW(2) + 4)));
SET64(31, 0x14f2fc); SET64(4, RD(18) + RD(0)); JP_F_002B2D80(c);
L_0014F2FC:;
SET64(2, (s32)rd32(c, (RW(17) + 68)));
wr32(c, (RW(2) + 0), RW(18));
SET64(2, (s32)rd32(c, (RW(17) + 68)));
wr32(c, (RW(17) + 32), RW(2));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x14f31c); SET64(4, RD(17) + RD(0)); JP_F_0014FE80(c);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x14f330);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 16)));
SET64(2, (s32)rd32(c, (RW(17) + 32)));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14f348); SET64(5, (s32)rd32(c, (RW(2) + 0))); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14f35c);  rt_call(c, t); }
{ int t = RD(20) == RD(0);  if (t) goto L_0014F378; }
SET64(25, (s32)rd32(c, (RW(20) + 24)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x14f378); SET32(5, RW(0) + 1); rt_call(c, t); }
L_0014F378:;
if (RD(16) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 68))); goto L_0014F398; }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x14f394); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 68)));
L_0014F398:;
SET64(6, (s32)rd32(c, (RW(17) + 8)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x14f3a8); SET64(4, RD(17) + RD(0)); JP_F_0014FE80(c);
L_0014F3A8:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_0014F3D0(Ctx *c) { /* func_0014F3D0 */
ENTER(0x14f3d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014F418; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -1208);
SET64(31, 0x14f400); wr32(c, (RW(17) + 0), RW(2)); JP_F_002AE8C0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0014F41C; }
SET64(31, 0x14f418); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0014F418:;
SET64(2, RD(17) + RD(0));
L_0014F41C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014F430(Ctx *c) { /* func_0014F430 */
ENTER(0x14f430);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014F488; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1192);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 0), RW(2)); if (t) goto L_0014F470; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -1208);
SET64(31, 0x14f470); wr32(c, (RW(17) + 0), RW(2)); JP_F_002AE8C0(c);
L_0014F470:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0014F48C; }
SET64(31, 0x14f488); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0014F488:;
SET64(2, RD(17) + RD(0));
L_0014F48C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014F4A0(Ctx *c) { /* func_0014F4A0 */
ENTER(0x14f4a0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(9) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(7) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 64), RW(6));
wr32(c, (RW(4) + 76), RW(8));
SET64(2, (s32)rd32(c, (RW(4) + 64)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(17, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(17) + 8)));
{ int t = RSD(2) >= 0; SET32(16, RSW(2) >> 2); if (t) goto L_0014F4FC; }
SET32(2, RW(2) + 3);
SET32(16, RSW(2) >> 2);
L_0014F4FC:;
SET64(31, 0x14f504); SET32(4, RW(0) + 20); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0014F548; }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
{ int t = RSD(2) >= 0; SET32(5, RSW(2) >> 2); if (t) goto L_0014F520; }
SET32(2, RW(2) + 3);
SET32(5, RSW(2) >> 2);
L_0014F520:;
SET64(3, (s32)rd32(c, (RW(21) + 76)));
SET64(4, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 12)));
SET64(7, (s32)rd32(c, (RW(17) + 16)));
mul_s(c, 0, 3, RSW(16), RSW(3));
SET64(31, 0x14f53c); SET32(6, RW(3) + RW(2)); JP_F_002B3400(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1192);
wr32(c, (RW(18) + 0), RW(2));
L_0014F548:;
SET32(4, RW(0) + 28);
SET64(31, 0x14f554); wr32(c, (RW(21) + 72), RW(18)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0014F57C; }
SET64(2, (s32)rd32(c, (RW(21) + 64)));
SET64(5, rd16(c, (RW(20) + 36)));
SET64(6, rd16(c, (RW(20) + 38)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(8, (s32)rd32(c, (RW(21) + 72)));
SET64(7, (s32)rd32(c, (RW(2) + 4)));
SET64(31, 0x14f57c); SET64(4, RD(17) + RD(0)); JP_F_002B2D80(c);
L_0014F57C:;
SET64(31, 0x14f584); SET32(4, RW(0) + 32); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0014F5D0; }
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(0) + -1);
SET32(3, RW(3) + -1144);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 28), RW(3));
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 4), RW(0));
SET64(31, 0x14f5b0); wr32(c, (RW(16) + 8), RW(2)); JP_F_0023E9B0(c);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
wr32(c, (RW(16) + 12), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
wr32(c, (RW(16) + 16), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
wr32(c, (RW(16) + 20), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
wr32(c, (RW(16) + 24), RW(2));
L_0014F5D0:;
wr32(c, (RW(21) + 68), RW(16));
wr32(c, (RW(16) + 0), RW(17));
SET64(31, 0x14f5e0); SET64(4, (s32)rd32(c, (RW(21) + 68))); JP_F_00150570(c);
SET64(6, (s32)rd32(c, (RW(21) + 68)));
SET64(5, RD(20) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(8, RD(22) + RD(0));
SET64(31, 0x14f5f8); SET64(4, RD(21) + RD(0)); JP_F_0014F9B0(c);
SET64(2, (s32)rd32(c, (RW(21) + 68)));
SET64(6, (s32)rd32(c, (RW(21) + 8)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x14f60c); SET64(4, RD(21) + RD(0)); JP_F_0014FE80(c);
SET64(31, rd64(c, (RW(29) + 112)));
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_0014F640(Ctx *c) { /* func_0014F640 */
ENTER(0x14f640);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 68), RW(0)); goto L_0014F670; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x14f66c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 68), RW(0));
L_0014F670:;
SET64(4, (s32)rd32(c, (RW(16) + 72)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 72), RW(0)); goto L_0014F690; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x14f68c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 72), RW(0));
L_0014F690:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x14f69c); wr32(c, (RW(16) + 64), RW(0)); JP_F_00150310(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014F6B0(Ctx *c) { /* func_0014F6B0 */
ENTER(0x14f6b0);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1168);
SET32(7, RW(0) + -1);
wr32(c, (RW(4) + 60), RW(2));
SET32(6, RW(0) + 1);
wr32(c, (RW(4) + 0), RW(0));
SET32(5, RW(5) + -1232);
wr32(c, (RW(4) + 4), RW(0));
SET32(3, RW(0) + 5);
wr32(c, (RW(4) + 8), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(7));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 36), RW(6));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 44), RW(0));
wr8(c, (RW(4) + 59), (u8)RW(0));
wr32(c, (RW(4) + 60), RW(5));
wr32(c, (RW(4) + 64), RW(0));
wr32(c, (RW(4) + 68), RW(0));
wr32(c, (RW(4) + 72), RW(0));
wr32(c, (RW(4) + 76), RW(3)); return;
}

void JP_F_0014F720(Ctx *c) { /* func_0014F720 */
ENTER(0x14f720);
 return;
}

void JP_F_0014F730(Ctx *c) { /* func_0014F730 */
ENTER(0x14f730);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 12))); goto L_0014F760; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14f75c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
L_0014F760:;
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_0014F77C; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14f778);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
L_0014F77C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014F790(Ctx *c) { /* func_0014F790 */
ENTER(0x14f790);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, rd8(c, (RW(4) + 56)));
{ int t = RD(3) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014F7B8; }
SET64(3, RD(0) + RD(0)); goto L_0014F820;
L_0014F7B8:;
SET64(3, rd8(c, (RW(17) + 57)));
if (RD(3) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 28))); goto L_0014F7CC; }
SET64(3, RD(0) + (s64)1); goto L_0014F820;
L_0014F7CC:;
SET32(3, RW(0) + -1);
if (RD(5) != RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 32))); goto L_0014F7E0; }
SET64(3, RD(0) + (s64)1); goto L_0014F820;
L_0014F7E0:;
SET64(3, (s32)rd32(c, (RW(4) + 8)));
if (RD(5) == RD(3)) { SET64(6, RD(0) + RD(0)); goto L_0014F7F4; }
SET64(3, RD(0) + (s64)1); goto L_0014F820;
L_0014F7F4:;
SET32(3, RW(6) << 2);
L_0014F7F8:;
SET32(3, RW(4) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
if (RD(5) == RD(3)) { SET32(6, RW(6) + 1); goto L_0014F810; }
SET64(3, RD(0) + (s64)1); goto L_0014F820;
L_0014F810:;
SET64(3, RSD(6) < (s64)4);
if (RD(3) != RD(0)) { SET32(3, RW(6) << 2); { POLL(); goto L_0014F7F8; } }
SET64(3, RD(0) + RD(0));
L_0014F820:;
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0014F8A0; }
SET64(4, (s32)rd32(c, (RW(17) + 8)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 12))); goto L_0014F848; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14f844); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 12)));
L_0014F848:;
{ int t = RD(4) == RD(0);  if (t) goto L_0014F860; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14f860); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_0014F860:;
SET64(4, (s64)(s32)0x530000);
SET64(5, RD(16) + RD(0));
SET64(31, 0x14f870); SET32(4, RW(4) + -22344); JP_F_002B4920(c);
SET64(4, (s32)rd32(c, (RW(17) + 32)));
SET64(3, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(4) + 8), RW(3));
wr32(c, (RW(4) + 12), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(4) + 16), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(4) + 20), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(4) + 24), RW(3));
wr8(c, (RW(17) + 57), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
L_0014F8A0:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014F8B0(Ctx *c) { /* func_0014F8B0 */
ENTER(0x14f8b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x14f8c0); wr32(c, (RW(4) + 4), RW(5)); JP_F_00150280(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0014F8D0(Ctx *c) { /* func_0014F8D0 */
ENTER(0x14f8d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, rd16(c, (RW(5) + 36)));
SET64(16, RD(6) + RD(0));
wr16(c, (RW(4) + 52), (u16)RW(3));
SET64(3, rd16(c, (RW(5) + 38)));
{ int t = RD(7) == RD(0); wr16(c, (RW(4) + 54), (u16)RW(3)); if (t) goto L_0014F95C; }
SET64(5, rd16(c, (RW(17) + 30)));
if (RD(5) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_0014F928; }
SET64(4, rd16(c, (RW(17) + 28)));
SET64(3, (s32)rd32(c, (RW(17) + 24)));
SET32(4, RW(4) + 8);
SET32(4, RW(17) + RW(4));
SET32(4, RW(4) + 8);
SET32(3, RW(3) + RW(4));
L_0014F928:;
{ int t = RD(3) == RD(0);  if (t) goto L_0014F95C; }
if (RD(5) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0014F950; }
SET64(3, rd16(c, (RW(17) + 28)));
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET32(3, RW(3) + 8);
SET32(3, RW(17) + RW(3));
SET32(3, RW(3) + 8);
SET32(2, RW(2) + RW(3));
L_0014F950:;
wr32(c, (RW(18) + 4), RW(2));
SET64(31, 0x14f95c); SET64(4, RD(18) + RD(0)); JP_F_00150280(c);
L_0014F95C:;
if (RD(16) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_0014F990; }
SET64(2, rd16(c, (RW(17) + 28)));
SET32(2, RW(2) + 8);
SET32(2, RW(17) + RW(2));
SET32(2, RW(2) + 8);
wr32(c, (RW(18) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 32)));
SET64(6, (s32)rd32(c, (RW(18) + 8)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x14f98c); SET64(4, RD(18) + RD(0)); JP_F_0014FE80(c);
SET64(31, rd64(c, (RW(29) + 48)));
L_0014F990:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_0014F9B0(Ctx *c) { /* func_0014F9B0 */
ENTER(0x14f9b0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(4) + 28), RW(7));
SET64(16, RD(8) + RD(0));
wr8(c, (RW(4) + 57), (u8)RW(0));
wr32(c, (RW(4) + 32), RW(6));
{ int t = RD(17) != RD(0); wr8(c, (RW(4) + 58), (u8)RW(16)); if (t) goto L_0014F9F8; }
wr32(c, (RW(18) + 0), RW(0));
wr32(c, (RW(18) + 4), RW(0));
wr8(c, (RW(18) + 56), (u8)RW(0)); goto L_0014FBDC;
L_0014F9F8:;
SET64(31, 0x14fa00); SET64(4, RD(17) + RD(0)); JP_F_003CD640(c);
wr8(c, (RW(18) + 59), (u8)RW(2));
SET64(3, rd16(c, (RW(17) + 36)));
wr16(c, (RW(18) + 52), (u16)RW(3));
SET64(3, rd16(c, (RW(17) + 38)));
wr16(c, (RW(18) + 54), (u16)RW(3));
SET64(3, rd16(c, (RW(17) + 28)));
SET32(3, RW(3) + 8);
SET32(3, RW(17) + RW(3));
SET32(3, RW(3) + 8);
wr32(c, (RW(18) + 0), RW(3));
SET64(3, rd16(c, (RW(17) + 30)));
if (RD(3) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_0014FA4C; }
SET64(4, rd16(c, (RW(17) + 28)));
SET64(3, (s32)rd32(c, (RW(17) + 24)));
SET32(4, RW(4) + 8);
SET32(4, RW(17) + RW(4));
SET32(4, RW(4) + 8);
SET32(3, RW(3) + RW(4));
L_0014FA4C:;
{ int t = RD(3) == RD(0); wr32(c, (RW(18) + 4), RW(3)); if (t) goto L_0014FAEC; }
SET64(31, 0x14fa5c); SET32(4, RW(0) + 128); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_0014FA6C; }
SET64(31, 0x14fa6c); SET64(4, RD(19) + RD(0)); JP_F_002B3B10(c);
L_0014FA6C:;
wr32(c, (RW(18) + 12), RW(19));
SET32(2, RW(0) + 4);
SET64(3, rd8(c, (RW(17) + 35)));
{ int t = RD(3) != RD(2); SET64(4, rd8(c, (RW(17) + 34))); if (t) goto L_0014FA88; }
SET64(2, RD(0) + RD(0)); goto L_0014FA8C;
L_0014FA88:;
SET32(2, RW(0) + 1);
L_0014FA8C:;
wr32(c, (RW(18) + 36), RW(2));
SET64(3, RD(4) & 0xff);
SET64(2, RD(3) & 0x80);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0014FAA4; }
SET32(2, RW(0) + 1);
L_0014FAA4:;
wr32(c, (RW(18) + 40), RW(2));
SET64(3, RD(3) & 0x3f);
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET32(2, RW(0) + 2); goto L_0014FAC4; }
SET32(2, RW(0) + 2);
wr32(c, (RW(18) + 44), RW(2)); goto L_0014FAD0;
L_0014FAC4:;
if (RD(3) != RD(2)) { wr32(c, (RW(18) + 44), RW(0)); goto L_0014FAD0; }
wr32(c, (RW(18) + 44), RW(2));
L_0014FAD0:;
SET64(31, 0x14fad8); SET64(4, RD(18) + RD(0)); JP_F_00150280(c);
SET64(5, (s32)rd32(c, (RW(18) + 36)));
SET64(6, (s32)rd32(c, (RW(18) + 40)));
SET64(7, (s32)rd32(c, (RW(18) + 44)));
SET64(31, 0x14faec); SET64(4, RD(18) + RD(0)); JP_F_0014FC20(c);
L_0014FAEC:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
if (RD(3) == RD(0)) { SET32(3, RW(0) + 1); goto L_0014FBD8; }
SET64(31, 0x14fb00); SET32(4, RW(0) + 128); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_0014FB10; }
SET64(31, 0x14fb10); SET64(4, RD(19) + RD(0)); JP_F_002B3B10(c);
L_0014FB10:;
wr32(c, (RW(18) + 8), RW(19));
SET32(3, RW(0) + 1);
SET64(4, rd8(c, (RW(17) + 35)));
if (RD(4) != RD(3)) { SET32(2, RW(0) + 2); goto L_0014FB30; }
SET32(2, RW(0) + 2);
wr32(c, (RW(18) + 48), RW(2)); goto L_0014FBA4;
L_0014FB30:;
if (RD(4) != RD(2)) { SET32(2, RW(0) + 3); goto L_0014FB40; }
wr32(c, (RW(18) + 48), RW(3)); goto L_0014FBA4;
L_0014FB40:;
if (RD(4) != RD(2)) { SET32(2, RW(0) + 5); goto L_0014FB50; }
wr32(c, (RW(18) + 48), RW(0)); goto L_0014FBA4;
L_0014FB50:;
if (RD(4) != RD(2)) { SET64(3, (s32)rd32(c, (RW(18) + 32))); goto L_0014FB80; }
SET64(3, (s32)rd32(c, (RW(18) + 32)));
SET32(2, RW(0) + 19);
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 4)));
if (RD(3) != RD(2)) { SET32(2, RW(0) + 27); goto L_0014FB78; }
wr32(c, (RW(18) + 48), RW(2)); goto L_0014FBA4;
L_0014FB78:;
wr32(c, (RW(18) + 48), RW(2)); goto L_0014FBA4;
L_0014FB80:;
SET32(2, RW(0) + 19);
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 4)));
if (RD(3) != RD(2)) { SET32(2, RW(0) + 44); goto L_0014FBA0; }
SET32(2, RW(0) + 20);
wr32(c, (RW(18) + 48), RW(2)); goto L_0014FBA4;
L_0014FBA0:;
wr32(c, (RW(18) + 48), RW(2));
L_0014FBA4:;
SET64(2, (s32)rd32(c, (RW(18) + 32)));
SET64(6, (s32)rd32(c, (RW(18) + 8)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x14fbb8); SET64(4, RD(18) + RD(0)); JP_F_0014FE80(c);
SET64(7, (s32)rd32(c, (RW(18) + 48)));
SET64(9, RD(16) + RD(0));
SET64(5, rd16(c, (RW(18) + 52)));
SET64(4, RD(18) + RD(0));
SET64(6, rd16(c, (RW(18) + 54)));
SET64(31, 0x14fbd4); SET64(8, RD(7) + RD(0)); JP_F_0014FCD0(c);
SET32(3, RW(0) + 1);
L_0014FBD8:;
wr8(c, (RW(18) + 56), (u8)RW(3));
L_0014FBDC:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_0014FC00(Ctx *c) { /* func_0014FC00 */
ENTER(0x14fc00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x14fc10);  JP_F_0014F9B0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0014FC20(Ctx *c) { /* func_0014FC20 */
ENTER(0x14fc20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 36), RW(5));
wr32(c, (RW(4) + 40), RW(6));
wr32(c, (RW(4) + 44), RW(7));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(2) != RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_0014FC64; }
SET64(31, 0x14fc50); SET32(4, RW(0) + 128); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0014FC60; }
SET64(31, 0x14fc60); SET64(4, RD(16) + RD(0)); JP_F_002B3B10(c);
L_0014FC60:;
wr32(c, (RW(17) + 12), RW(16));
L_0014FC64:;
SET64(31, 0x14fc6c); SET32(4, RW(0) + 160); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0014FC88; }
SET64(5, (s32)rd32(c, (RW(17) + 36)));
SET64(6, (s32)rd32(c, (RW(17) + 40)));
SET64(7, (s32)rd32(c, (RW(17) + 44)));
SET64(31, 0x14fc88); SET64(4, RD(16) + RD(0)); JP_F_002B0AC0(c);
L_0014FC88:;
wr32(c, (RW(17) + 20), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 152)));
SET64(2, (s32)rd32(c, (RW(17) + 32)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
SET64(5, (s32)rd32(c, (RW(2) + 4)));
{ u32 t = RW(25); SET64(31, 0x14fca4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0014FCBC; }
SET64(31, 0x14fcb8); SET64(5, (s32)rd32(c, (RW(17) + 20))); JP_F_002B2780(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_0014FCBC:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014FCD0(Ctx *c) { /* func_0014FCD0 */
ENTER(0x14fcd0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(8) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(9) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr16(c, (RW(4) + 52), (u16)RW(20));
wr16(c, (RW(4) + 54), (u16)RW(19));
SET64(2, (s32)rd32(c, (RW(4) + 32)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(22) == RD(0); SET64(18, RD(7) + RD(0)); if (t) goto L_0014FD58; }
SET64(1, RD(18) < (u64)(s64)2);
if (RD(1) == RD(0)) { SET64(17, RD(2) + RD(0)); goto L_0014FD5C; }
{ int t = RSD(2) >= 0; SET32(17, RSW(2) >> 2); if (t) goto L_0014FD5C; }
SET32(2, RW(2) + 3);
SET32(17, RSW(2) >> 2);
 goto L_0014FD5C;
SET64(17, RD(2) + RD(0));
 goto L_0014FD5C;
L_0014FD58:;
SET64(17, RD(20) + RD(0));
L_0014FD5C:;
SET32(4, RW(0) + 256);
SET64(31, 0x14fd68);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0014FD88; }
SET64(5, RD(17) + RD(0));
SET64(7, RD(18) + RD(0));
SET64(8, RD(23) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x14fd88); SET64(6, RD(19) + RD(0)); JP_F_002B2840(c);
L_0014FD88:;
wr32(c, (RW(21) + 16), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 20)));
SET64(2, (s32)rd32(c, (RW(21) + 32)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(25); SET64(31, 0x14fda4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
if (RD(22) == RD(0)) { SET64(2, (s32)rd32(c, (RW(21) + 4))); goto L_0014FDBC; }
SET64(2, (s32)rd32(c, (RW(21) + 16)));
wr16(c, (RW(2) + 0), (u16)RW(20));
wr16(c, (RW(2) + 2), (u16)RW(19));
SET64(2, (s32)rd32(c, (RW(21) + 4)));
L_0014FDBC:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(21) + 16))); goto L_0014FDDC; }
SET64(5, (s32)rd32(c, (RW(21) + 20)));
SET64(31, 0x14fdd0); SET64(4, (s32)rd32(c, (RW(21) + 16))); JP_F_002B2780(c);
SET64(16, (s32)rd32(c, (RW(21) + 16))); goto L_0014FDE8;
SET64(4, (s32)rd32(c, (RW(21) + 16)));
L_0014FDDC:;
SET64(31, 0x14fde4); SET64(5, RD(0) + RD(0)); JP_F_002B2780(c);
SET64(16, (s32)rd32(c, (RW(21) + 16)));
L_0014FDE8:;
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x14fdfc); SET32(4, RW(16) + 32); JP_F_002B46B0(c);
SET32(4, RW(16) + 32);
SET32(5, RW(0) + 1);
SET64(31, 0x14fe0c); SET64(6, RD(0) + RD(0)); JP_F_002B4670(c);
SET32(4, RW(16) + 32);
SET64(5, RD(0) + RD(0));
SET64(31, 0x14fe1c); SET32(6, RW(0) + 1); JP_F_002B4630(c);
SET64(16, (s32)rd32(c, (RW(21) + 16)));
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x14fe30); SET32(4, RW(16) + 32); JP_F_002B4600(c);
SET32(4, RW(16) + 32);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x14fe48); SET64(8, RD(0) + RD(0)); JP_F_002B45A0(c);
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

static void JP_B_0014FE80(Ctx *c, u32 entry) { /* func_0014FE80 */
ENTER(entry);
switch (entry) { case 0x150000: goto L_00150000; case 0x150008: goto L_00150008; case 0x15000c: goto L_0015000C; case 0x150014: goto L_00150014; case 0x150018: goto L_00150018; case 0x15001c: goto L_0015001C; case 0x150048: goto L_00150048; case 0x15007c: goto L_0015007C; }
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, rd8(c, (RW(4) + 59)));
SET64(16, RD(5) + RD(0));
SET64(4, (s32)rd32(c, (RW(5) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(2) == RD(0); SET32(20, RSW(4) >> 6); if (t) goto L_00150070; }
SET64(4, rd16(c, (RW(17) + 52)));
SET64(19, rd16(c, (RW(17) + 54)));
SET32(2, RW(4) + 63);
{ int t = RSD(2) >= 0; SET32(21, RSW(2) >> 6); if (t) goto L_0014FED8; }
SET32(2, RW(2) + 63);
SET32(21, RSW(2) >> 6);
L_0014FED8:;
SET64(31, 0x14fee0); SET64(18, (s32)rd32(c, (RW(17) + 48))); JP_F_003CD660(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x14feec); SET64(19, RD(2) + RD(0)); JP_F_003CD660(c);
SET32(3, RW(0) + 36);
{ int t = RD(18) == RD(3);  if (t) goto L_00150024; }
SET32(3, RW(0) + 44);
{ int t = RD(18) == RD(3);  if (t) goto L_00150024; }
SET32(3, RW(0) + 27);
{ int t = RD(18) == RD(3);  if (t) goto L_00150024; }
SET32(3, RW(0) + 58);
{ int t = RD(18) == RD(3);  if (t) goto L_00150024; }
SET32(3, RW(0) + 50);
{ int t = RD(18) == RD(3);  if (t) goto L_00150024; }
SET32(3, RW(0) + 10);
{ int t = RD(18) == RD(3);  if (t) goto L_00150024; }
SET32(3, RW(0) + 49);
{ int t = RD(18) == RD(3);  if (t) goto L_00150024; }
SET32(3, RW(0) + 48);
{ int t = RD(18) == RD(3);  if (t) goto L_00150024; }
SET32(3, RW(0) + 1);
{ int t = RD(18) == RD(3);  if (t) goto L_00150024; }
{ int t = RD(18) == RD(0);  if (t) goto L_00150024; }
SET32(3, RW(0) + 20);
if (RD(18) == RD(3)) { SET32(21, RSW(21) >> 1); goto L_0015000C; }
SET32(3, RW(0) + 19);
if (RD(18) == RD(3)) { SET64(3, rd8(c, (RW(17) + 58))); goto L_0014FFCC; }
SET32(3, RW(0) + 2);
if (RD(18) == RD(3)) { SET64(3, rd8(c, (RW(17) + 58))); goto L_0014FF8C; }
 goto L_00150024;
L_0014FF8C:;
{ int t = RD(3) == RD(0);  if (t) goto L_0014FFBC; }
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET32(3, RW(3) + -1);
SET32(3, RSW(3) >> 6);
SET32(3, RW(3) + 1);
SET32(3, RW(3) << 6);
SET32(3, RW(3) + 63);
{ int t = RSD(3) >= 0; SET32(21, RSW(3) >> 6); if (t) goto L_0014FFBC; }
SET32(3, RW(3) + 63);
SET32(21, RSW(3) >> 6);
L_0014FFBC:;
if (RD(19) != RD(2)) { SET32(19, RW(19) + -1); goto L_00150024; }
SET32(2, RW(2) + -1); goto L_00150024;
L_0014FFCC:;
if (RD(3) == RD(0)) { SET32(21, RSW(21) >> 1); goto L_00150000; }
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET32(3, RW(3) + -1);
SET32(3, RSW(3) >> 7);
SET32(3, RW(3) + 1);
SET32(3, RW(3) << 7);
SET32(3, RW(3) + 63);
{ int t = RSD(3) >= 0; SET32(21, RSW(3) >> 6); if (t) goto L_0014FFFC; }
SET32(3, RW(3) + 63);
SET32(21, RSW(3) >> 6);
L_0014FFFC:;
SET32(21, RSW(21) >> 1);
L_00150000:;
SET32(19, RW(19) + -1);
SET32(2, RW(2) + -1); goto L_00150024;
if (0) { L_00150008:; SET32(2, RW(2) + -1); }
L_0015000C:;
if (RD(19) != RD(2)) { SET32(19, RW(19) + -2); goto L_00150020; }
L_00150014:;
SET32(19, RW(19) + -1);
L_00150018:;
SET32(2, RW(2) + -2); goto L_00150024;
if (0) { L_0015001C:; SET32(2, RW(2) + -2); }
L_00150020:;
SET32(2, RW(2) + -1);
L_00150024:;
if (RD(21) != RD(0)) { SET32(4, RW(0) + 1); goto L_00150034; }
SET32(21, RW(0) + 1);
SET32(4, RW(0) + 1);
L_00150034:;
wr32(c, (RW(29) + 128), RW(0));
SET32(3, RW(4) << (RW(19) & 31));
SET32(2, RW(4) << (RW(2) & 31));
wr32(c, (RW(29) + 136), RW(3));
SET64(6, RD(20) + RD(0));
L_00150048:;
wr32(c, (RW(29) + 140), RW(2));
SET64(7, RD(21) + RD(0));
wr32(c, (RW(29) + 132), RW(0));
SET64(8, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x150068); SET32(9, RW(29) + 128); JP_F_002B3900(c);
SET64(31, rd64(c, (RW(29) + 96))); goto L_00150260;
L_00150070:;
SET64(2, (s32)rd32(c, (RW(17) + 48)));
SET32(4, RW(0) + 36);
if (RD(2) == RD(4)) { SET64(3, rd8(c, (RW(17) + 58))); goto L_00150158; }
if (0) { L_0015007C:; SET64(3, rd8(c, (RW(17) + 58))); }
SET32(4, RW(0) + 44);
{ int t = RD(2) == RD(4);  if (t) goto L_00150154; }
SET32(4, RW(0) + 20);
{ int t = RD(2) == RD(4);  if (t) goto L_00150154; }
SET32(4, RW(0) + 27);
{ int t = RD(2) == RD(4);  if (t) goto L_00150154; }
SET32(4, RW(0) + 19);
{ int t = RD(2) == RD(4);  if (t) goto L_00150154; }
SET32(4, RW(0) + 58);
if (RD(2) == RD(4)) { SET64(3, rd8(c, (RW(17) + 58))); goto L_00150118; }
SET32(4, RW(0) + 50);
{ int t = RD(2) == RD(4);  if (t) goto L_00150114; }
SET32(4, RW(0) + 10);
{ int t = RD(2) == RD(4);  if (t) goto L_00150114; }
SET32(4, RW(0) + 2);
{ int t = RD(2) == RD(4);  if (t) goto L_00150114; }
SET32(4, RW(0) + 49);
{ int t = RD(2) == RD(4);  if (t) goto L_00150114; }
SET32(4, RW(0) + 48);
{ int t = RD(2) == RD(4);  if (t) goto L_00150114; }
SET32(4, RW(0) + 1);
{ int t = RD(2) == RD(4);  if (t) goto L_00150114; }
{ int t = RD(2) == RD(0);  if (t) goto L_00150114; }
SET64(4, rd8(c, (RW(17) + 58))); goto L_00150194;
L_00150114:;
SET64(3, rd8(c, (RW(17) + 58)));
L_00150118:;
if (RD(3) == RD(0)) { SET64(3, rd16(c, (RW(17) + 52))); goto L_00150140; }
SET64(3, (s32)rd32(c, (RW(17) + 32)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 8)));
SET32(3, RW(3) + -1);
SET32(3, RSW(3) >> 6);
SET32(3, RW(3) + 1);
SET32(3, RW(3) << 6); goto L_00150190;
L_00150140:;
SET32(3, RW(3) + -1);
SET32(3, RSW(3) >> 6);
SET32(3, RW(3) + 1);
SET32(3, RW(3) << 6); goto L_00150190;
L_00150154:;
SET64(3, rd8(c, (RW(17) + 58)));
L_00150158:;
if (RD(3) == RD(0)) { SET64(3, rd16(c, (RW(17) + 52))); goto L_00150180; }
SET64(3, (s32)rd32(c, (RW(17) + 32)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 8)));
SET32(3, RW(3) + -1);
SET32(3, RSW(3) >> 7);
SET32(3, RW(3) + 1);
SET32(3, RW(3) << 7); goto L_00150190;
L_00150180:;
SET32(3, RW(3) + -1);
SET32(3, RSW(3) >> 7);
SET32(3, RW(3) + 1);
SET32(3, RW(3) << 7);
L_00150190:;
SET64(4, rd8(c, (RW(17) + 58)));
L_00150194:;
if (RD(4) == RD(0)) { SET32(2, RW(3) + -1); goto L_00150224; }
SET32(4, RW(0) + 58);
if (RD(2) == RD(4)) { SET32(2, RSW(3) >> 1); goto L_0015020C; }
SET32(4, RW(0) + 50);
{ int t = RD(2) == RD(4);  if (t) goto L_00150208; }
SET32(4, RW(0) + 10);
{ int t = RD(2) == RD(4);  if (t) goto L_00150208; }
SET32(4, RW(0) + 2);
{ int t = RD(2) == RD(4);  if (t) goto L_00150208; }
SET32(4, RW(0) + 1);
if (RD(2) == RD(4)) { SET32(2, RSW(3) >> 2); goto L_001501EC; }
{ int t = RD(2) == RD(0);  if (t) goto L_001501E8; }
 goto L_00150220;
L_001501E8:;
SET32(2, RSW(3) >> 2);
L_001501EC:;
if (RSD(3) >= 0) { SET64(3, RD(2) + RD(0)); goto L_00150220; }
SET32(2, RW(3) + 3);
SET32(2, RSW(2) >> 2);
SET64(3, RD(2) + RD(0));
 goto L_00150220;
L_00150208:;
SET32(2, RSW(3) >> 1);
L_0015020C:;
if (RSD(3) >= 0) { SET64(3, RD(2) + RD(0)); goto L_00150220; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
SET64(3, RD(2) + RD(0));
L_00150220:;
SET32(2, RW(3) + -1);
L_00150224:;
SET64(4, RD(6) + RD(0));
SET64(5, rd16(c, (RW(17) + 54)));
SET32(2, RSW(2) >> 6);
SET64(3, rd16(c, (RW(17) + 52)));
SET32(7, RW(2) + 1);
SET64(6, RD(20) + RD(0));
wr32(c, (RW(29) + 120), RW(3));
wr32(c, (RW(29) + 124), RW(5));
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 116), RW(0));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(8, (s32)rd32(c, (RW(17) + 48)));
SET64(31, 0x15025c); SET32(9, RW(29) + 112); JP_F_002B3900(c);
SET64(31, rd64(c, (RW(29) + 96)));
L_00150260:;
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}
void JP_F_0014FE80(Ctx *c) { JP_B_0014FE80(c, 0x14fe80); }
void JP_F_00150000(Ctx *c) { JP_B_0014FE80(c, 0x150000); }
void JP_F_00150008(Ctx *c) { JP_B_0014FE80(c, 0x150008); }
void JP_F_0015000C(Ctx *c) { JP_B_0014FE80(c, 0x15000c); }
void JP_F_00150014(Ctx *c) { JP_B_0014FE80(c, 0x150014); }
void JP_F_00150018(Ctx *c) { JP_B_0014FE80(c, 0x150018); }
void JP_F_0015001C(Ctx *c) { JP_B_0014FE80(c, 0x15001c); }
void JP_F_00150048(Ctx *c) { JP_B_0014FE80(c, 0x150048); }
void JP_F_0015007C(Ctx *c) { JP_B_0014FE80(c, 0x15007c); }

void JP_F_00150280(Ctx *c) { /* func_00150280 */
ENTER(0x150280);
SET32(29, RW(29) + -32);
SET64(8, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET64(2, (s32)rd32(c, (RW(4) + 36)));
SET64(3, (s32)rd32(c, (RW(3) + 4)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
{ int t = RD(2) != RD(0); SET32(6, RSW(3) >> 6); if (t) goto L_001502C8; }
SET64(2, (s32)rd32(c, (RW(8) + 40)));
if (RD(2) != RD(0)) { SET32(5, RW(0) + 16); goto L_001502C0; }
SET32(5, RW(0) + 8);
SET32(4, RW(0) + 2); goto L_001502DC;
L_001502C0:;
SET32(4, RW(0) + 1); goto L_001502DC;
L_001502C8:;
SET64(2, (s32)rd32(c, (RW(8) + 40)));
if (RD(2) != RD(0)) { wr32(c, (RW(29) + 28), RW(4)); goto L_001502E0; }
SET32(5, RW(0) + 16);
SET64(4, RD(5) + RD(0));
L_001502DC:;
wr32(c, (RW(29) + 28), RW(4));
L_001502E0:;
SET32(7, RW(5) + 1);
wr32(c, (RW(29) + 24), RW(5));
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 20), RW(0));
SET64(4, (s32)rd32(c, (RW(8) + 12)));
SET64(5, (s32)rd32(c, (RW(8) + 4)));
SET64(8, (s32)rd32(c, (RW(8) + 44)));
SET64(31, 0x150304); SET32(9, RW(29) + 16); JP_F_002B3900(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00150310(Ctx *c) { /* func_00150310 */
ENTER(0x150310);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_00150340; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15033c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
L_00150340:;
SET64(4, (s32)rd32(c, (RW(16) + 12)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 12), RW(0)); goto L_00150360; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15035c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 12), RW(0));
L_00150360:;
SET64(4, (s32)rd32(c, (RW(16) + 16)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 16))); goto L_00150380; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x15037c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 16)));
L_00150380:;
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 16), RW(0)); goto L_0015039C; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x150398); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 16), RW(0));
L_0015039C:;
SET64(4, (s32)rd32(c, (RW(16) + 20)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 20))); goto L_001503BC; }
SET64(25, (s32)rd32(c, (RW(4) + 152)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1503b8);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 20)));
L_001503BC:;
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 20), RW(0)); goto L_001503D8; }
SET64(25, (s32)rd32(c, (RW(4) + 152)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1503d4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 20), RW(0));
L_001503D8:;
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 44), RW(0));
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 40), RW(0));
wr8(c, (RW(16) + 59), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00150410(Ctx *c) { /* func_00150410 */
ENTER(0x150410);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00150460; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1168);
wr32(c, (RW(17) + 60), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x150448);  rt_call(c, t); }
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00150464; }
SET64(31, 0x150460); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00150460:;
SET64(2, RD(17) + RD(0));
L_00150464:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00150480(Ctx *c) { /* func_00150480 */
ENTER(0x150480);
SET64(2, (s64)(s32)0x4d0000);
SET32(5, RW(0) + -1);
SET32(2, RW(2) + -1168);
SET32(3, RW(0) + 1);
wr32(c, (RW(4) + 60), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(5));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 36), RW(3));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 44), RW(0));
wr8(c, (RW(4) + 59), (u8)RW(0)); return;
}

void JP_F_001504D0(Ctx *c) { /* func_001504D0 */
ENTER(0x1504d0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(18) == RD(0); SET64(17, RD(6) + RD(0)); if (t) goto L_0015052C; }
if (RD(17) == RD(0)) { SET64(3, (s32)rd32(c, (RW(19) + 4))); goto L_00150530; }
SET64(31, 0x150508); SET32(4, RW(0) + 28); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00150528; }
SET64(5, RD(18) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x150528); SET64(8, RD(0) + RD(0)); JP_F_002B2D80(c);
L_00150528:;
wr32(c, (RW(19) + 0), RW(16));
L_0015052C:;
SET64(3, (s32)rd32(c, (RW(19) + 4)));
L_00150530:;
if (RD(3) != RD(0)) { SET32(3, RW(0) + -1); goto L_00150544; }
SET64(31, 0x150540); SET64(4, RD(19) + RD(0)); JP_F_00150570(c);
SET32(3, RW(0) + -1);
L_00150544:;
wr32(c, (RW(19) + 8), RW(3));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00150570(Ctx *c) { /* func_00150570 */
ENTER(0x150570);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(3) != RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_00150634; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(0) + 19);
SET64(16, (s32)rd32(c, (RW(4) + 4)));
if (RD(16) == RD(3)) { SET32(4, RW(0) + 24); goto L_001505B4; }
SET32(3, RW(0) + 27);
if (RD(16) != RD(3)) { SET32(3, RW(0) + 20); goto L_001505E4; }
SET32(4, RW(0) + 24);
L_001505B4:;
SET64(31, 0x1505bc);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001505DC; }
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x1505dc); SET64(8, RD(0) + RD(0)); JP_F_002B2BD0(c);
L_001505DC:;
wr32(c, (RW(17) + 4), RW(18));
SET32(3, RW(0) + 20);
L_001505E4:;
if (RD(16) == RD(3)) { SET32(4, RW(0) + 24); goto L_00150608; }
SET32(3, RW(0) + 36);
{ int t = RD(16) == RD(3);  if (t) goto L_00150604; }
SET32(3, RW(0) + 44);
if (RD(16) != RD(3)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_00150638; }
L_00150604:;
SET32(4, RW(0) + 24);
L_00150608:;
SET64(31, 0x150610);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00150630; }
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x150630); SET64(8, RD(0) + RD(0)); JP_F_002B2BD0(c);
L_00150630:;
wr32(c, (RW(17) + 4), RW(16));
L_00150634:;
SET64(31, rd64(c, (RW(29) + 48)));
L_00150638:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00150650(Ctx *c) { /* func_00150650 */
ENTER(0x150650);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(6) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(7) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(8) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(21) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001506BC; }
{ int t = RD(20) == RD(0);  if (t) goto L_001506BC; }
SET64(31, 0x150698); SET32(4, RW(0) + 28); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001506B8; }
SET64(5, RD(21) + RD(0));
SET64(6, RD(20) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1506b8); SET64(8, RD(0) + RD(0)); JP_F_002B2D80(c);
L_001506B8:;
wr32(c, (RW(16) + 0), RW(17));
L_001506BC:;
if (RD(18) == RD(0)) { SET32(3, RW(0) + -1); goto L_001506DC; }
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) != RD(0);  if (t) goto L_001506D8; }
SET64(31, 0x1506d8); SET64(4, RD(16) + RD(0)); JP_F_00150570(c);
L_001506D8:;
SET32(3, RW(0) + -1);
L_001506DC:;
wr32(c, (RW(16) + 8), RW(3));
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_00150710(Ctx *c) { /* func_00150710 */
ENTER(0x150710);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(6) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(7) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(4) == RD(0); SET64(18, RD(8) + RD(0)); if (t) goto L_0015075C; }
SET64(25, (s32)rd32(c, (RW(4) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15075c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_0015075C:;
wr32(c, (RW(16) + 0), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_00150780; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15077c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
L_00150780:;
{ int t = RD(21) == RD(0);  if (t) goto L_001507C4; }
{ int t = RD(20) == RD(0);  if (t) goto L_001507C4; }
SET64(31, 0x150798); SET32(4, RW(0) + 28); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001507C0; }
if (RD(19) == RD(0)) { SET32(7, RW(0) + 19); goto L_001507AC; }
SET32(7, RW(0) + 27);
L_001507AC:;
SET64(5, RD(21) + RD(0));
SET64(6, RD(20) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1507c0); SET64(8, RD(0) + RD(0)); JP_F_002B2D80(c);
L_001507C0:;
wr32(c, (RW(16) + 0), RW(17));
L_001507C4:;
if (RD(18) == RD(0)) { SET32(3, RW(0) + -1); goto L_001507FC; }
SET64(31, 0x1507d4); SET32(4, RW(0) + 24); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001507F4; }
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x1507f4); SET64(8, RD(0) + RD(0)); JP_F_002B2BD0(c);
L_001507F4:;
wr32(c, (RW(16) + 4), RW(17));
SET32(3, RW(0) + -1);
L_001507FC:;
wr32(c, (RW(16) + 8), RW(3));
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_00150830(Ctx *c) { /* func_00150830 */
ENTER(0x150830);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(6) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(7) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(8) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(21) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001508A4; }
{ int t = RD(20) == RD(0);  if (t) goto L_001508A4; }
SET64(31, 0x150878); SET32(4, RW(0) + 28); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001508A0; }
if (RD(19) == RD(0)) { SET32(7, RW(0) + 19); goto L_0015088C; }
SET32(7, RW(0) + 27);
L_0015088C:;
SET64(5, RD(21) + RD(0));
SET64(6, RD(20) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1508a0); SET64(8, RD(0) + RD(0)); JP_F_002B2D80(c);
L_001508A0:;
wr32(c, (RW(16) + 0), RW(17));
L_001508A4:;
if (RD(18) == RD(0)) { SET32(3, RW(0) + -1); goto L_001508DC; }
SET64(31, 0x1508b4); SET32(4, RW(0) + 24); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001508D4; }
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x1508d4); SET64(8, RD(0) + RD(0)); JP_F_002B2BD0(c);
L_001508D4:;
wr32(c, (RW(16) + 4), RW(17));
SET32(3, RW(0) + -1);
L_001508DC:;
wr32(c, (RW(16) + 8), RW(3));
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_00150910(Ctx *c) { /* func_00150910 */
ENTER(0x150910);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00150998; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1144);
wr32(c, (RW(17) + 28), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 0), RW(0)); goto L_00150958; }
SET64(25, (s32)rd32(c, (RW(4) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x150954); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 0), RW(0));
L_00150958:;
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_00150978; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x150974); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
L_00150978:;
SET64(31, 0x150980); wr32(c, (RW(17) + 4), RW(0)); JP_F_0023E9A0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015099C; }
SET64(31, 0x150998); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00150998:;
SET64(2, RD(17) + RD(0));
L_0015099C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001509B0(Ctx *c) { /* func_001509B0 */
ENTER(0x1509b0);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x4d0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(3, RW(3) + -1144);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(2, RW(0) + -1);
wr32(c, (RW(4) + 28), RW(3));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
SET64(31, 0x1509e0); wr32(c, (RW(4) + 8), RW(2)); JP_F_0023E9B0(c);
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 12), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
wr32(c, (RW(16) + 16), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
wr32(c, (RW(16) + 20), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
wr32(c, (RW(16) + 24), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00150A20(Ctx *c) { /* func_00150A20 */
ENTER(0x150a20);
 return;
}

void JP_F_00150A30(Ctx *c) { /* func_00150A30 */
ENTER(0x150a30);
 return;
}

void JP_F_00150A40(Ctx *c) { /* func_00150A40 */
ENTER(0x150a40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 256)));
SET64(31, 0x150a58); SET64(16, RD(0) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET64(16, RD(0) + (s64)1); goto L_00150A78; }
{ int t = RD(2) == RD(0);  if (t) goto L_00150A74; }
SET64(2, RD(16) + RD(0)); goto L_00150A7C;
L_00150A74:;
SET64(16, RD(0) + (s64)1);
L_00150A78:;
SET64(2, RD(16) + RD(0));
L_00150A7C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00150A90(Ctx *c) { /* func_00150A90 */
ENTER(0x150a90);
SET64(5, (s32)rd32(c, (RW(5) + 4)));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3));
rd128(c, (RW(5) + 224) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]); return;
}

void JP_F_00150AC0(Ctx *c) { /* func_00150AC0 */
ENTER(0x150ac0);
rd128(c, (RW(5) + 0) & ~15u, &c->r[5]);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
wr128(c, (RW(3) + 224) & ~15u, &c->r[5]); return;
}

void JP_F_00150AD0(Ctx *c) { /* func_00150AD0 */
ENTER(0x150ad0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00150CC8; }
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1120);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 12), RW(2));
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET32(9, RW(9) + -1036);
SET32(8, RW(8) + -1072);
SET32(7, RW(7) + -964);
SET32(5, RW(17) + 80);
SET32(3, RW(17) + 112);
wr32(c, (RW(6) + 276), RW(9));
SET32(2, RW(17) + 400);
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
wr32(c, (RW(6) + 16), RW(8));
SET64(6, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(6) + 144), RW(7));
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(5) + 280), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 416), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x150b70);  rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_00150BFC; }
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -928);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 12), RW(2));
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET32(9, RW(9) + -848);
SET32(8, RW(8) + -884);
SET32(7, RW(7) + -776);
SET32(5, RW(17) + 16);
SET32(3, RW(17) + 48);
wr32(c, (RW(6) + 276), RW(9));
SET32(2, RW(17) + 336);
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
wr32(c, (RW(6) + 16), RW(8));
SET64(6, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(6) + 144), RW(7));
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(5) + 280), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 416), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x150bfc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_00150BFC:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_00150CB4; }
SET32(4, RW(17) + 400);
SET64(31, 0x150c10); SET64(5, RD(0) + RD(0)); JP_F_002A5490(c);
SET32(4, RW(17) + 112);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 80); goto L_00150C8C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -544);
SET32(5, RW(5) + -472);
wr32(c, (RW(17) + 388), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 368)));
SET32(2, RW(17) + 392);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 368)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x150c58);  rt_call(c, t); }
SET32(2, RW(17) + 112);
{ int t = RD(2) == RD(0);  if (t) goto L_00150C88; }
SET32(4, RW(17) + 144);
SET64(31, 0x150c70); SET32(5, RW(0) + -1); JP_F_002A88A0(c);
SET32(2, RW(17) + 112);
{ int t = RD(2) == RD(0);  if (t) goto L_00150C88; }
SET32(4, RW(17) + 116);
SET64(31, 0x150c88); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
L_00150C88:;
SET32(4, RW(17) + 80);
L_00150C8C:;
{ int t = RD(4) == RD(0);  if (t) goto L_00150CB0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 96), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x150cb0);  rt_call(c, t); }
L_00150CB0:;
SET64(2, RD(16) << 48);
L_00150CB4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00150CCC; }
SET64(31, 0x150cc8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00150CC8:;
SET64(2, RD(17) + RD(0));
L_00150CCC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00150CE0(Ctx *c) { /* func_00150CE0 */
ENTER(0x150ce0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00150DA8; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -544);
SET32(5, RW(5) + -472);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(17) + 280);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x150d38);  rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_00150D60; }
SET32(4, RW(17) + 32);
SET64(31, 0x150d4c); SET32(5, RW(0) + -1); JP_F_002A88A0(c);
{ int t = RD(17) == RD(0);  if (t) goto L_00150D60; }
SET32(4, RW(17) + 4);
SET64(31, 0x150d60); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
L_00150D60:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_00150D94; }
SET32(4, RW(17) + 280);
{ int t = RD(4) == RD(0);  if (t) goto L_00150D90; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 296), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x150d90);  rt_call(c, t); }
L_00150D90:;
SET64(2, RD(16) << 48);
L_00150D94:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00150DAC; }
SET64(31, 0x150da8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00150DA8:;
SET64(2, RD(17) + RD(0));
L_00150DAC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00150DC0(Ctx *c) { /* func_00150DC0 */
ENTER(0x150dc0);
SET32(29, RW(29) + -1248);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(6) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x150de8); SET32(4, RW(29) + 1024); JP_F_002AEAE0(c);
SET64(31, 0x150df0); SET32(4, RW(29) + 1184); JP_F_002AF080(c);
rd128(c, (RW(29) + 1024) & ~15u, &c->r[5]);
SET32(4, RW(29) + 1120);
rd128(c, (RW(29) + 1040) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 1056) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 1184) & ~15u, &c->r[5]);
wr128(c, (RW(29) + 1200) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 1216) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 1072) & ~15u, &c->r[2]);
SET64(31, 0x150e18); wr128(c, (RW(29) + 1232) & ~15u, &c->r[2]); JP_F_002AF080(c);
SET64(2, (s32)rd32(c, (RW(28) + -30240)));
{ int t = RD(2) == RD(0);  if (t) goto L_00150E2C; }
rd128(c, (RW(2) + 128) & ~15u, &c->r[2]); goto L_00150E40;
L_00150E2C:;
SET64(31, 0x150e34);  JP_F_00139590(c);
SET64(31, 0x150e3c);  JP_F_001511C0(c);
rd128(c, (RW(2) + 128) & ~15u, &c->r[2]);
L_00150E40:;
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 960), RW(0));
SET32(4, RW(29) + 400);
wr32(c, (RW(29) + 964), RW(0));
wr32(c, (RW(29) + 968), RW(0));
wr32(c, (RW(29) + 972), RW(3));
wr128(c, (RW(29) + 960) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 1232) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 960));
wr32(c, (RW(29) + 976), RW(0));
c->f[2].u = rd32(c, (RW(29) + 964));
wr32(c, (RW(29) + 980), RW(0));
wr32(c, (RW(29) + 984), RW(0));
wr32(c, (RW(29) + 988), RW(3));
wr128(c, (RW(29) + 976) & ~15u, &c->r[2]);
c->f[4].u = rd32(c, (RW(29) + 976));
wr32(c, (RW(29) + 1004), RW(3));
c->f[3].u = rd32(c, (RW(29) + 980));
wr32(c, (RW(29) + 412), RW(3));
c->f[1].u = rd32(c, (RW(29) + 984));
wr32(c, (RW(29) + 400), RW(0));
c->f[4].f = fpu(F(4) - F(0));
wr32(c, (RW(29) + 404), RW(0));
wr32(c, (RW(29) + 408), RW(0));
c->f[0].u = rd32(c, (RW(29) + 968));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 992), c->f[4].u);
wr32(c, (RW(29) + 996), c->f[2].u);
wr32(c, (RW(29) + 1000), c->f[0].u);
rd128(c, (RW(29) + 992) & ~15u, &c->r[2]);
SET64(31, 0x150ec4); wr128(c, (RW(29) + 400) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 1104), RW(0));
wr32(c, (RW(29) + 1116), RW(2));
SET32(4, RW(29) + 112);
rd128(c, (RW(29) + 400) & ~15u, &c->r[2]);
SET32(5, RW(29) + 1184);
wr32(c, (RW(29) + 1108), RW(0));
wr32(c, (RW(29) + 1112), RW(0));
SET64(31, 0x150eec); wr128(c, (RW(29) + 1104) & ~15u, &c->r[2]); JP_F_0013ADA0(c);
SET64(31, 0x150ef4); SET32(4, RW(29) + 112); JP_F_00147DD0(c);
SET64(31, 0x150efc); SET64(4, RD(2) + RD(0)); JP_F_00147DA0(c);
SET32(4, RW(29) + 848);
SET64(31, 0x150f08); SET32(5, RW(29) + 112); JP_F_0013ADA0(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 928);
wr32(c, (RW(29) + 920), RW(2));
SET32(5, RW(29) + 912);
wr32(c, (RW(29) + 924), RW(2));
SET32(6, RW(29) + 848);
wr32(c, (RW(29) + 912), RW(0));
SET64(31, 0x150f2c); wr32(c, (RW(29) + 916), RW(0)); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 384), RW(0));
wr32(c, (RW(29) + 396), RW(2));
SET32(4, RW(29) + 384);
rd128(c, (RW(29) + 928) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 388), RW(0));
wr32(c, (RW(29) + 392), RW(0));
SET64(31, 0x150f50); wr128(c, (RW(29) + 384) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 1088), RW(0));
wr32(c, (RW(29) + 1100), RW(2));
SET32(4, RW(29) + 1088);
rd128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET32(5, RW(29) + 1104);
wr32(c, (RW(29) + 1092), RW(0));
wr32(c, (RW(29) + 1096), RW(0));
SET64(31, 0x150f78); wr128(c, (RW(29) + 1088) & ~15u, &c->r[2]); JP_F_002B0230(c);
c->f[1].u = RW(0);
c->fcc = F(0) < F(1);
if (!c->fcc) { SET32(4, RW(29) + 544); goto L_00151084; }
SET64(2, (s64)(s32)0xbf800000);
SET64(3, (s64)(s32)0x3f800000);
c->f[3].u = RW(2);
wr32(c, (RW(29) + 188), RW(3));
rd128(c, (RW(29) + 1088) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 176), c->f[1].u);
wr32(c, (RW(29) + 180), c->f[1].u);
wr32(c, (RW(29) + 636), RW(3));
wr32(c, (RW(29) + 184), c->f[1].u);
SET32(4, RW(29) + 640);
wr128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 624), c->f[1].u);
c->f[2].u = rd32(c, (RW(29) + 176));
SET32(5, RW(29) + 624);
c->f[0].u = rd32(c, (RW(29) + 184));
SET32(6, RW(29) + 1104);
wr32(c, (RW(29) + 628), c->f[1].u);
wr32(c, (RW(29) + 632), c->f[1].u);
c->f[1].u = rd32(c, (RW(29) + 180));
c->f[2].f = fpu(F(2) * F(3));
c->f[1].f = fpu(F(1) * F(3));
c->f[0].f = fpu(F(0) * F(3));
wr32(c, (RW(29) + 176), c->f[2].u);
wr32(c, (RW(29) + 180), c->f[1].u);
wr32(c, (RW(29) + 184), c->f[0].u);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
SET64(31, 0x150ffc); wr128(c, (RW(29) + 624) & ~15u, &c->r[2]); JP_F_00147730(c);
SET32(4, RW(29) + 656);
SET64(31, 0x151008); SET32(5, RW(29) + 640); JP_F_00147A60(c);
SET64(31, 0x151010); SET32(4, RW(29) + 48); JP_F_0013AEA0(c);
SET32(4, RW(29) + 48);
SET64(31, 0x15101c); SET32(5, RW(28) + -32636); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x151028); SET32(4, RW(29) + 720); JP_F_0013ADA0(c);
SET32(4, RW(29) + 320);
SET32(5, RW(29) + 720);
SET64(31, 0x151038); SET32(6, RW(29) + 656); JP_F_002AEAE0(c);
SET64(31, 0x151040); SET32(4, RW(29) + 784); JP_F_002AF080(c);
rd128(c, (RW(29) + 320) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 336) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 352) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 784) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 800) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 816) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 832) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 816) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 784) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 800) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 1152) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 832) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 1120) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 1136) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 1168) & ~15u, &c->r[2]); goto L_001510BC;
L_00151084:;
SET32(5, RW(29) + 1088);
SET64(31, 0x151090); SET32(6, RW(29) + 1104); JP_F_00147730(c);
SET32(4, RW(29) + 560);
SET64(31, 0x15109c); SET32(5, RW(29) + 544); JP_F_00147A60(c);
rd128(c, (RW(29) + 592) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 560) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 576) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 1152) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 608) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 1120) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 1136) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 1168) & ~15u, &c->r[2]);
L_001510BC:;
SET32(4, RW(29) + 256);
SET32(5, RW(17) + 16);
SET64(31, 0x1510cc); SET32(6, RW(29) + 1120); JP_F_002AEAE0(c);
SET64(31, 0x1510d4); SET32(4, RW(29) + 416); JP_F_002AF080(c);
rd128(c, (RW(29) + 256) & ~15u, &c->r[7]);
SET32(5, RW(29) + 416);
rd128(c, (RW(29) + 272) & ~15u, &c->r[3]);
SET32(4, RW(29) + 192);
rd128(c, (RW(29) + 288) & ~15u, &c->r[2]);
SET32(6, RW(29) + 1184);
wr128(c, (RW(29) + 416) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 432) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 448) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
SET64(31, 0x151104); wr128(c, (RW(29) + 464) & ~15u, &c->r[2]); JP_F_002AEAE0(c);
SET64(31, 0x15110c); SET32(4, RW(29) + 480); JP_F_002AF080(c);
rd128(c, (RW(29) + 192) & ~15u, &c->r[7]);
SET32(3, RW(0) + -2);
rd128(c, (RW(29) + 208) & ~15u, &c->r[5]);
SET32(2, RW(0) + -3);
rd128(c, (RW(29) + 224) & ~15u, &c->r[4]);
SET64(6, RD(16) + RD(0));
wr128(c, (RW(29) + 480) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 496) & ~15u, &c->r[5]);
wr128(c, (RW(29) + 512) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 240) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 528) & ~15u, &c->r[4]);
SET64(5, (s32)rd32(c, (RW(17) + 4)));
rd128(c, (RW(29) + 480) & ~15u, &c->r[4]);
wr128(c, (RW(5) + 64) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 496) & ~15u, &c->r[4]);
wr128(c, (RW(5) + 80) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 512) & ~15u, &c->r[4]);
wr128(c, (RW(5) + 96) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 528) & ~15u, &c->r[4]);
wr128(c, (RW(5) + 112) & ~15u, &c->r[4]);
SET64(5, (s32)rd32(c, (RW(17) + 4)));
rd128(c, (RW(5) + 64) & ~15u, &c->r[4]);
wr128(c, (RW(5) + 240) & ~15u, &c->r[4]);
rd128(c, (RW(5) + 80) & ~15u, &c->r[4]);
wr128(c, (RW(5) + 256) & ~15u, &c->r[4]);
rd128(c, (RW(5) + 96) & ~15u, &c->r[4]);
wr128(c, (RW(5) + 272) & ~15u, &c->r[4]);
rd128(c, (RW(5) + 112) & ~15u, &c->r[4]);
wr128(c, (RW(5) + 288) & ~15u, &c->r[4]);
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s32)rd32(c, (RW(5) + 140)));
SET64(3, RD(4) & RD(3));
wr32(c, (RW(5) + 140), RW(3));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(3, (s32)rd32(c, (RW(4) + 140)));
SET64(2, RD(3) & RD(2));
wr32(c, (RW(4) + 140), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x1511ac); SET32(5, RW(4) + 64); JP_F_002BA7B0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 1248); return;
}

void JP_F_001511C0(Ctx *c) { /* func_001511C0 */
ENTER(0x1511c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1511d0);  JP_F_00139590(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001511E0(Ctx *c) { /* func_001511E0 */
ENTER(0x1511e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(16, RD(4) + RD(0));
SET64(31, 0x1511fc); SET64(4, (s32)rd32(c, (RW(2) + 256))); JP_F_00141B90(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_00151224; }
{ int t = RD(16) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00151214; }
SET64(5, (s32)rd32(c, (RW(16) + 4)));
L_00151214:;
SET64(31, 0x15121c);  JP_F_00243880(c);
wr32(c, (RW(16) + 8), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
L_00151224:;
SET64(31, 0x15122c); SET64(5, RD(0) + RD(0)); JP_F_002437E0(c);
SET64(31, 0x151234); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00154240(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00151250(Ctx *c) { /* func_00151250 */
ENTER(0x151250);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x151270); SET32(4, RW(17) + 16); JP_F_002AF080(c);
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
rd128(c, (RW(3) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
SET64(31, 0x15129c); wr128(c, (RW(4) + 48) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1512ac); SET64(6, RD(0) + RD(0)); JP_F_001540E0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001512C0(Ctx *c) { /* func_001512C0 */
ENTER(0x1512c0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(16, RD(7) + RD(0));
SET64(31, 0x1512f0); SET32(4, RW(18) + 16); JP_F_002AF080(c);
SET64(31, 0x1512f8); SET64(4, RD(19) + RD(0)); JP_F_001400A0(c);
SET64(31, 0x151300); SET64(4, RD(19) + RD(0)); JP_F_001400A0(c);
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(5, RD(19) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x151318); SET64(8, RD(0) + RD(0)); JP_F_00153870(c);
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd16(c, (RW(3) + 264)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00151378; }
L_00151328:;
{ int t = RD(17) == RD(0);  if (t) goto L_00151358; }
SET64(2, (s32)rd32(c, (RW(3) + 272)));
SET64(3, RD(16) & 0xffff);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_00151358; }
SET64(31, 0x151354); SET32(5, RW(0) + 32); JP_F_00154750(c);
L_00151358:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
SET64(2, rd16(c, (RW(3) + 264)));
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00151328; } }
L_00151378:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 80), RW(2));
SET64(4, RD(18) + RD(0));
wr32(c, (RW(29) + 84), RW(2));
wr32(c, (RW(29) + 88), RW(2));
wr32(c, (RW(29) + 92), RW(2));
SET64(25, (s32)rd32(c, (RW(18) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1513a0); SET32(5, RW(29) + 80); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_001513C0(Ctx *c) { /* func_001513C0 */
ENTER(0x1513c0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 256)));
SET64(3, rd8(c, (RW(3) + 8)));
{ int t = RD(3) != RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_001514A8; }
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x151404);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(3, rd16(c, (RW(4) + 264)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001514A8; }
SET64(3, (s32)rd32(c, (RW(4) + 272)));
L_00151418:;
SET64(4, RD(17) & 0xffff);
SET32(16, RW(4) << 2);
SET32(3, RW(3) + RW(16));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_00151488; }
SET64(31, 0x151438); SET64(5, RD(18) + RD(0)); JP_F_001537E0(c);
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 272)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x151450); SET64(5, RD(18) + RD(0)); JP_F_00153840(c);
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 272)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x151468); SET64(5, RD(18) + RD(0)); JP_F_00153810(c);
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 272)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x151488); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00151488:;
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(4) + 264)));
SET64(3, RSD(17) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 272))); { POLL(); goto L_00151418; } }
L_001514A8:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001514D0(Ctx *c) { /* func_001514D0 */
ENTER(0x1514d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET64(16, RD(5) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
rd128(c, (RW(3) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
SET64(31, 0x151514); wr128(c, (RW(4) + 48) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x151524); SET64(6, RD(0) + RD(0)); JP_F_001540E0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00151540(Ctx *c) { /* func_00151540 */
ENTER(0x151540);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(31, 0x151564); SET64(16, RD(5) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_001515DC; }
SET64(4, (s32)rd32(c, (RW(17) + 8)));
{ int t = RD(4) == RD(0);  if (t) goto L_00151594; }
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00151588; }
SET64(5, (s32)rd32(c, (RW(17) + 4)));
L_00151588:;
SET64(31, 0x151590);  JP_F_00243880(c);
wr32(c, (RW(17) + 8), RW(0));
L_00151594:;
{ int t = RD(16) == RD(0);  if (t) goto L_001515A4; }
SET64(5, RD(17) + RD(0)); goto L_001515B4;
L_001515A4:;
SET64(31, 0x1515ac);  JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 12)));
SET64(5, RD(17) + RD(0));
L_001515B4:;
if (RD(17) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001515C4; }
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET64(4, RD(16) + RD(0));
L_001515C4:;
SET64(31, 0x1515cc);  JP_F_002A6160(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x1515d8); SET64(5, RD(16) + RD(0)); JP_F_001535F0(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_001515DC:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001515F0(Ctx *c) { /* func_001515F0 */
ENTER(0x1515f0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(6) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00151618; }
wr32(c, (RW(17) + 8), RW(6)); goto L_00151624;
L_00151618:;
SET64(6, (s64)(s32)0x540000);
SET32(6, RW(6) + 1264);
wr32(c, (RW(17) + 8), RW(6));
L_00151624:;
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00151630; }
SET64(5, (s32)rd32(c, (RW(17) + 4)));
L_00151630:;
SET64(31, 0x151638); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_002438D0(c);
{ int t = RD(16) == RD(0);  if (t) goto L_00151648; }
SET64(3, (s32)rd32(c, (RW(17) + 0))); goto L_00151658;
L_00151648:;
SET64(31, 0x151650);  JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 12)));
SET64(3, (s32)rd32(c, (RW(17) + 0)));
L_00151658:;
SET32(2, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(3) + 256)));
SET64(3, (s32)rd32(c, (RW(3) + 4)));
if (RD(3) == RD(2)) { SET64(18, RD(17) + RD(0)); goto L_001516E8; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(18, RD(17) + RD(0)); goto L_001516B8; }
if (RD(3) == RD(0)) { SET64(18, RD(17) + RD(0)); goto L_00151688; }
SET64(4, (s32)rd32(c, (RW(17) + 0))); goto L_00151714;
L_00151688:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_00151698; }
SET64(18, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_00151698:;
SET64(31, 0x1516a0); SET32(5, RW(0) + 1); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1516b0); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
 goto L_00151710;
L_001516B8:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_001516C8; }
SET64(18, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_001516C8:;
SET64(31, 0x1516d0); SET32(5, RW(0) + 2); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1516e0); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
 goto L_00151710;
L_001516E8:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_001516F8; }
SET64(18, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_001516F8:;
SET64(31, 0x151700); SET64(5, RD(0) + RD(0)); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x151710); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
L_00151710:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
L_00151714:;
SET64(6, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x151720); SET64(5, RD(16) + RD(0)); JP_F_00153640(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00151740(Ctx *c) { /* func_00151740 */
ENTER(0x151740);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(16, RD(4) + RD(0));
SET64(31, 0x15175c); SET64(4, (s32)rd32(c, (RW(2) + 256))); JP_F_00141B90(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_00151784; }
{ int t = RD(16) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00151774; }
SET64(5, (s32)rd32(c, (RW(16) + 4)));
L_00151774:;
SET64(31, 0x15177c);  JP_F_00243880(c);
wr32(c, (RW(16) + 8), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
L_00151784:;
SET64(31, 0x15178c); SET64(5, RD(0) + RD(0)); JP_F_002437E0(c);
SET64(31, 0x151794); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00154240(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001517B0(Ctx *c) { /* func_001517B0 */
ENTER(0x1517b0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(16, RD(7) + RD(0));
SET64(31, 0x1517e0); SET64(4, RD(19) + RD(0)); JP_F_001400A0(c);
SET64(31, 0x1517e8); SET64(4, RD(19) + RD(0)); JP_F_001400A0(c);
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(5, RD(19) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x151800); SET64(8, RD(0) + RD(0)); JP_F_00153870(c);
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd16(c, (RW(3) + 264)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00151860; }
L_00151810:;
{ int t = RD(17) == RD(0);  if (t) goto L_00151840; }
SET64(2, (s32)rd32(c, (RW(3) + 272)));
SET64(3, RD(16) & 0xffff);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_00151840; }
SET64(31, 0x15183c); SET32(5, RW(0) + 32); JP_F_00154750(c);
L_00151840:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
SET64(2, rd16(c, (RW(3) + 264)));
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00151810; } }
L_00151860:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 80), RW(2));
SET64(4, RD(18) + RD(0));
wr32(c, (RW(29) + 84), RW(2));
wr32(c, (RW(29) + 88), RW(2));
wr32(c, (RW(29) + 92), RW(2));
SET64(25, (s32)rd32(c, (RW(18) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x151888); SET32(5, RW(29) + 80); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_001518B0(Ctx *c) { /* func_001518B0 */
ENTER(0x1518b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(5) + RD(0));
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_00151908; }
SET32(4, RW(17) + 16);
SET32(3, RW(17) + 48);
wr32(c, (RW(17) + 304), RW(4));
SET32(2, RW(17) + 336);
wr32(c, (RW(17) + 0), RW(3));
SET64(31, 0x1518f0); wr32(c, (RW(17) + 4), RW(2)); JP_F_00141C80(c);
SET32(4, RW(17) + 48);
SET64(31, 0x1518fc); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET32(4, RW(17) + 336);
SET64(31, 0x151908); SET32(5, RW(0) + 1); JP_F_002A5500(c);
L_00151908:;
SET64(2, (s64)(s32)0x4d0000);
SET64(8, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -928);
SET64(7, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 12), RW(2));
SET64(6, (s64)(s32)0x4d0000);
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET32(8, RW(8) + -848);
SET32(7, RW(7) + -884);
SET32(6, RW(6) + -776);
SET32(4, RW(17) + 16);
SET32(3, RW(17) + 48);
wr32(c, (RW(5) + 276), RW(8));
SET32(2, RW(17) + 336);
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s32)rd32(c, (RW(5) + 256)));
wr32(c, (RW(5) + 16), RW(7));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(5) + 144), RW(6));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s32)rd32(c, (RW(5) + 256)));
SET32(4, RW(4) - RW(5));
wr32(c, (RW(5) + 20), RW(4));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 280), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 416), RW(2));
wr32(c, (RW(17) + 8), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x151990); SET32(5, RW(2) + 32); JP_F_002BA8F0(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001519B0(Ctx *c) { /* func_001519B0 */
ENTER(0x1519b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00151B1C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -928);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 12), RW(2));
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET32(9, RW(9) + -848);
SET32(8, RW(8) + -884);
SET32(7, RW(7) + -776);
SET32(5, RW(17) + 16);
SET32(3, RW(17) + 48);
wr32(c, (RW(6) + 276), RW(9));
SET32(2, RW(17) + 336);
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
wr32(c, (RW(6) + 16), RW(8));
SET64(6, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(6) + 144), RW(7));
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(5) + 280), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 416), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x151a50);  rt_call(c, t); }
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_00151B08; }
SET32(4, RW(17) + 336);
SET64(31, 0x151a64); SET64(5, RD(0) + RD(0)); JP_F_002A5490(c);
SET32(4, RW(17) + 48);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 16); goto L_00151AE0; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -544);
SET32(5, RW(5) + -472);
wr32(c, (RW(17) + 324), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 304)));
SET32(2, RW(17) + 328);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 304)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x151aac);  rt_call(c, t); }
SET32(2, RW(17) + 48);
{ int t = RD(2) == RD(0);  if (t) goto L_00151ADC; }
SET32(4, RW(17) + 80);
SET64(31, 0x151ac4); SET32(5, RW(0) + -1); JP_F_002A88A0(c);
SET32(2, RW(17) + 48);
{ int t = RD(2) == RD(0);  if (t) goto L_00151ADC; }
SET32(4, RW(17) + 52);
SET64(31, 0x151adc); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
L_00151ADC:;
SET32(4, RW(17) + 16);
L_00151AE0:;
{ int t = RD(4) == RD(0);  if (t) goto L_00151B04; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 32), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x151b04);  rt_call(c, t); }
L_00151B04:;
SET64(2, RD(16) << 48);
L_00151B08:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00151B20; }
SET64(31, 0x151b1c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00151B1C:;
SET64(2, RD(17) + RD(0));
L_00151B20:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00151B40(Ctx *c) { /* func_00151B40 */
ENTER(0x151b40);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -16);
SET32(4, RW(4) + RW(25)); { JP_F_00151740(c); return; }
}

void JP_F_00151B50(Ctx *c) { /* func_00151B50 */
ENTER(0x151b50);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -16);
SET32(4, RW(4) + RW(25)); { JP_F_001519B0(c); return; }
}

void JP_F_00151B60(Ctx *c) { /* func_00151B60 */
ENTER(0x151b60);
SET64(25, (s32)rd32(c, (RW(5) + 280)));
SET32(5, RW(5) + -48);
SET32(5, RW(5) + RW(25)); { JP_F_00150A90(c); return; }
}

void JP_F_00151B70(Ctx *c) { /* func_00151B70 */
ENTER(0x151b70);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -48);
SET32(4, RW(4) + RW(25)); { JP_F_00150AC0(c); return; }
}

void JP_F_00151B80(Ctx *c) { /* func_00151B80 */
ENTER(0x151b80);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -48);
SET32(4, RW(4) + RW(25)); { JP_F_00151540(c); return; }
}

void JP_F_00151B90(Ctx *c) { /* func_00151B90 */
ENTER(0x151b90);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -48);
SET32(4, RW(4) + RW(25)); { JP_F_001515F0(c); return; }
}

void JP_F_00151BA0(Ctx *c) { /* func_00151BA0 */
ENTER(0x151ba0);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -48);
SET32(4, RW(4) + RW(25)); { JP_F_00151740(c); return; }
}

void JP_F_00151BB0(Ctx *c) { /* func_00151BB0 */
ENTER(0x151bb0);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -48);
SET32(4, RW(4) + RW(25)); { JP_F_001519B0(c); return; }
}

void JP_F_00151BC0(Ctx *c) { /* func_00151BC0 */
ENTER(0x151bc0);
SET64(25, (s32)rd32(c, (RW(4) + 416)));
SET32(4, RW(4) + -336);
SET32(4, RW(4) + RW(25)); { JP_F_001513C0(c); return; }
}

void JP_F_00151BD0(Ctx *c) { /* func_00151BD0 */
ENTER(0x151bd0);
SET64(25, (s32)rd32(c, (RW(4) + 416)));
SET32(4, RW(4) + -336);
SET32(4, RW(4) + RW(25)); { JP_F_001519B0(c); return; }
}

void JP_F_00151BE0(Ctx *c) { /* func_00151BE0 */
ENTER(0x151be0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + 32);
SET32(4, RW(4) + RW(25)); { JP_F_00150A40(c); return; }
}

void JP_F_00151BF0(Ctx *c) { /* func_00151BF0 */
ENTER(0x151bf0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -80);
SET32(4, RW(4) + RW(25)); { JP_F_001511E0(c); return; }
}

void JP_F_00151C00(Ctx *c) { /* func_00151C00 */
ENTER(0x151c00);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -80);
SET32(4, RW(4) + RW(25)); { JP_F_00150AD0(c); return; }
}

void JP_F_00151C10(Ctx *c) { /* func_00151C10 */
ENTER(0x151c10);
SET64(25, (s32)rd32(c, (RW(5) + 280)));
SET32(5, RW(5) + -112);
SET32(5, RW(5) + RW(25)); { JP_F_00150A90(c); return; }
}

void JP_F_00151C20(Ctx *c) { /* func_00151C20 */
ENTER(0x151c20);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -112);
SET32(4, RW(4) + RW(25)); { JP_F_00150AC0(c); return; }
}

void JP_F_00151C30(Ctx *c) { /* func_00151C30 */
ENTER(0x151c30);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -112);
SET32(4, RW(4) + RW(25)); { JP_F_00151540(c); return; }
}

void JP_F_00151C40(Ctx *c) { /* func_00151C40 */
ENTER(0x151c40);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -112);
SET32(4, RW(4) + RW(25)); { JP_F_001515F0(c); return; }
}

void JP_F_00151C50(Ctx *c) { /* func_00151C50 */
ENTER(0x151c50);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -112);
SET32(4, RW(4) + RW(25)); { JP_F_001511E0(c); return; }
}

void JP_F_00151C60(Ctx *c) { /* func_00151C60 */
ENTER(0x151c60);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -112);
SET32(4, RW(4) + RW(25)); { JP_F_00150AD0(c); return; }
}

void JP_F_00151C70(Ctx *c) { /* func_00151C70 */
ENTER(0x151c70);
SET64(25, (s32)rd32(c, (RW(4) + 416)));
SET32(4, RW(4) + -400);
SET32(4, RW(4) + RW(25)); { JP_F_001513C0(c); return; }
}

void JP_F_00151C80(Ctx *c) { /* func_00151C80 */
ENTER(0x151c80);
SET64(25, (s32)rd32(c, (RW(4) + 416)));
SET32(4, RW(4) + -400);
SET32(4, RW(4) + RW(25)); { JP_F_00150DC0(c); return; }
}

void JP_F_00151C90(Ctx *c) { /* func_00151C90 */
ENTER(0x151c90);
SET64(25, (s32)rd32(c, (RW(4) + 416)));
SET32(4, RW(4) + -400);
SET32(4, RW(4) + RW(25)); { JP_F_00150AD0(c); return; }
}

void JP_F_00151CA0(Ctx *c) { /* func_00151CA0 */
ENTER(0x151ca0);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 512) & ~15u, &c->r[3]); return;
}

void JP_F_00151CB0(Ctx *c) { /* func_00151CB0 */
ENTER(0x151cb0);
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3));
rd128(c, (RW(5) + 512) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]); return;
}

void JP_F_00151CD0(Ctx *c) { /* func_00151CD0 */
ENTER(0x151cd0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x151ce0);  JP_F_001CC2E0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00151CF0(Ctx *c) { /* func_00151CF0 */
ENTER(0x151cf0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x151d00);  JP_F_001CC2C0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00151D10(Ctx *c) { /* func_00151D10 */
ENTER(0x151d10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x151d20);  JP_F_001CC290(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00151D30(Ctx *c) { /* func_00151D30 */
ENTER(0x151d30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 256)));
SET64(31, 0x151d48); SET64(16, RD(0) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET64(16, RD(0) + (s64)1); goto L_00151D68; }
{ int t = RD(2) == RD(0);  if (t) goto L_00151D64; }
SET64(2, RD(16) + RD(0)); goto L_00151D6C;
L_00151D64:;
SET64(16, RD(0) + (s64)1);
L_00151D68:;
SET64(2, RD(16) + RD(0));
L_00151D6C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00151D80(Ctx *c) { /* func_00151D80 */
ENTER(0x151d80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00151EF4; }
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -736);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 256)));
SET32(7, RW(7) + -584);
SET32(5, RW(5) + -664);
SET32(3, RW(3) + -632);
SET32(2, RW(17) + 912);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 432), RW(5));
wr32(c, (RW(17) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x151df0);  rt_call(c, t); }
SET32(4, RW(17) + 704);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 288); goto L_00151E38; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -400);
SET64(31, 0x151e0c); wr32(c, (RW(17) + 760), RW(2)); JP_F_001554D0(c);
SET32(4, RW(17) + 704);
{ int t = RD(4) == RD(0);  if (t) goto L_00151E34; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -368);
SET64(31, 0x151e28); wr32(c, (RW(17) + 760), RW(2)); JP_F_00155EB0(c);
SET32(4, RW(17) + 704);
SET64(31, 0x151e34); SET64(5, RD(0) + RD(0)); JP_F_002A4430(c);
L_00151E34:;
SET32(4, RW(17) + 288);
L_00151E38:;
SET64(31, 0x151e40); SET64(5, RD(0) + RD(0)); JP_F_002A5490(c);
{ int t = RD(17) == RD(0);  if (t) goto L_00151EAC; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -544);
SET32(5, RW(5) + -472);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(17) + 280);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x151e84); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_00151EAC; }
SET32(4, RW(17) + 32);
SET64(31, 0x151e98); SET32(5, RW(0) + -1); JP_F_002A88A0(c);
{ int t = RD(17) == RD(0);  if (t) goto L_00151EAC; }
SET32(4, RW(17) + 4);
SET64(31, 0x151eac); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
L_00151EAC:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_00151EE0; }
SET32(4, RW(17) + 912);
{ int t = RD(4) == RD(0);  if (t) goto L_00151EDC; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 928), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x151edc);  rt_call(c, t); }
L_00151EDC:;
SET64(2, RD(16) << 48);
L_00151EE0:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00151EF8; }
SET64(31, 0x151ef4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00151EF4:;
SET64(2, RD(17) + RD(0));
L_00151EF8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00151F10(Ctx *c) { /* func_00151F10 */
ENTER(0x151f10);
SET32(29, RW(29) + -304);
SET64(3, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 288), RW(0));
SET64(16, RD(7) + RD(0));
wr32(c, (RW(29) + 292), RW(0));
SET32(4, RW(29) + 48);
wr32(c, (RW(29) + 296), RW(0));
wr32(c, (RW(29) + 300), RW(3));
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 284), RW(3));
wr32(c, (RW(29) + 252), RW(3));
wr128(c, (RW(29) + 288) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 268), RW(3));
c->f[2].u = rd32(c, (RW(29) + 296));
wr32(c, (RW(29) + 236), RW(3));
c->f[1].u = rd32(c, (RW(29) + 292));
rd128(c, (RW(5) + 336) & ~15u, &c->r[3]);
c->f[4].u = rd32(c, (RW(29) + 288));
wr32(c, (RW(29) + 272), RW(0));
wr32(c, (RW(29) + 276), RW(0));
wr32(c, (RW(29) + 280), RW(0));
wr128(c, (RW(29) + 272) & ~15u, &c->r[3]);
c->f[0].u = rd32(c, (RW(29) + 280));
SET64(2, (s32)rd32(c, (RW(5) + 900)));
c->f[3].u = rd32(c, (RW(29) + 272));
wr32(c, (RW(29) + 240), RW(0));
wr32(c, (RW(29) + 244), RW(0));
c->f[6].f = fpu(F(2) - F(0));
rd128(c, (RW(2) + 400) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 248), RW(0));
wr128(c, (RW(29) + 240) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 276));
c->f[3].f = fpu(F(4) - F(3));
c->f[5].f = fpu(F(1) - F(0));
c->f[2].u = rd32(c, (RW(29) + 240));
c->f[1].u = rd32(c, (RW(29) + 244));
c->f[0].u = rd32(c, (RW(29) + 248));
c->f[2].f = fpu(F(2) + F(3));
c->f[1].f = fpu(F(1) + F(5));
c->f[0].f = fpu(F(0) + F(6));
wr32(c, (RW(29) + 256), c->f[2].u);
wr32(c, (RW(29) + 260), c->f[1].u);
wr32(c, (RW(29) + 264), c->f[0].u);
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 288) & ~15u, &c->r[2]);
c->f[5].u = rd32(c, (RW(7) + 8));
c->f[4].u = rd32(c, (RW(29) + 296));
c->f[3].u = rd32(c, (RW(7) + 4));
c->f[2].u = rd32(c, (RW(29) + 292));
c->f[4].f = fpu(F(4) - F(5));
c->f[2].f = fpu(F(2) - F(3));
c->f[0].u = rd32(c, (RW(7) + 0));
c->f[1].u = rd32(c, (RW(29) + 288));
wr32(c, (RW(29) + 232), c->f[4].u);
wr32(c, (RW(29) + 228), c->f[2].u);
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 224), c->f[0].u);
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
SET64(31, 0x152010); wr128(c, (RW(29) + 288) & ~15u, &c->r[2]); JP_F_0013AEA0(c);
SET32(4, RW(29) + 48);
SET64(31, 0x15201c); SET32(5, RW(28) + -32632); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x152028); SET32(4, RW(29) + 128); JP_F_0013ADA0(c);
SET32(4, RW(29) + 192);
SET32(5, RW(29) + 288);
SET64(31, 0x152038); SET32(6, RW(29) + 128); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 192) & ~15u, &c->r[3]);
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 124), RW(4));
wr128(c, (RW(29) + 288) & ~15u, &c->r[3]);
c->f[5].u = rd32(c, (RW(16) + 8));
c->f[4].u = rd32(c, (RW(29) + 296));
c->f[3].u = rd32(c, (RW(16) + 4));
c->f[2].u = rd32(c, (RW(29) + 292));
c->f[4].f = fpu(F(4) + F(5));
c->f[2].f = fpu(F(2) + F(3));
c->f[0].u = rd32(c, (RW(16) + 0));
c->f[1].u = rd32(c, (RW(29) + 288));
wr32(c, (RW(29) + 120), c->f[4].u);
wr32(c, (RW(29) + 116), c->f[2].u);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 112), c->f[0].u);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 288) & ~15u, &c->r[3]);
wr32(c, (RW(17) + 0), RW(0));
wr32(c, (RW(17) + 4), RW(0));
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 12), RW(4));
rd128(c, (RW(29) + 288) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 304); return;
}

void JP_F_001520B0(Ctx *c) { /* func_001520B0 */
ENTER(0x1520b0);
SET64(5, RD(5) & 0xffff);
SET64(2, (s32)rd32(c, (RW(4) + 900)));
SET32(3, RW(5) << 3);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 5);
SET32(2, RW(2) + RW(3)); return;
}

void JP_F_001520D0(Ctx *c) { /* func_001520D0 */
ENTER(0x1520d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(2, rd16(c, (RW(4) + 898)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00152148; }
SET64(4, RD(16) & 0xffff);
L_001520FC:;
SET64(2, (s32)rd32(c, (RW(18) + 900)));
SET32(3, RW(4) << 3);
SET64(5, RD(17) + RD(0));
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 5);
SET64(31, 0x152118); SET32(4, RW(2) + RW(3)); JP_F_00142E30(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(18) + 898))); goto L_00152130; }
SET64(2, RD(16) + RD(0)); goto L_0015214C;
L_00152130:;
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(2, RSD(16) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, RD(16) & 0xffff); { POLL(); goto L_001520FC; } }
L_00152148:;
SET64(2, RD(0) | 0xffff);
L_0015214C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00152170(Ctx *c) { /* func_00152170 */
ENTER(0x152170);
SET32(29, RW(29) + -496);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[22]);
SET64(23, RD(0) + RD(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
SET64(22, RD(5) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(4) + 732)));
SET64(2, rd16(c, (RW(2) + 16)));
{ int t = RD(2) == RD(0); c->f[20].u = c->f[12].u; if (t) goto L_001521D0; }
SET32(4, RW(21) + 704);
SET64(31, 0x1521c4); SET64(5, RD(0) + RD(0)); JP_F_00155250(c);
if (RD(2) == RD(0)) { SET64(2, rd16(c, (RW(21) + 898))); goto L_001521D4; }
SET64(23, RD(0) + (s64)1);
L_001521D0:;
SET64(2, rd16(c, (RW(21) + 898)));
L_001521D4:;
{ int t = RD(2) == RD(0); SET64(20, RD(0) + RD(0)); if (t) goto L_00152458; }
SET64(18, RD(0) + RD(0));
L_001521E0:;
SET64(2, (s32)rd32(c, (RW(21) + 732)));
SET64(3, (s32)rd32(c, (RW(21) + 900)));
SET64(2, rd16(c, (RW(2) + 16)));
{ int t = RD(2) == RD(0); SET32(19, RW(3) + RW(18)); if (t) goto L_00152438; }
SET64(3, (s32)rd32(c, (RW(21) + 772)));
SET64(2, rd16(c, (RW(3) + 56)));
SET64(1, RD(20) < RD(2));
{ int t = RD(1) == RD(0);  if (t) goto L_00152440; }
SET64(2, (s32)rd32(c, (RW(3) + 52)));
SET64(3, RD(20) & 0xffff);
SET32(3, RW(3) << 4);
SET32(17, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00152228; }
SET64(2, (s32)rd32(c, (RW(2) + 8)));
L_00152228:;
SET64(2, RD(2) & 0xffff);
{ int t = RD(2) == RD(0);  if (t) goto L_001522C0; }
SET64(6, RD(20) & 0xffff);
SET32(4, RW(29) + 416);
SET64(31, 0x152244); SET32(5, RW(21) + 704); JP_F_002A41C0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 432), RW(0));
wr32(c, (RW(29) + 444), RW(2));
SET32(4, RW(29) + 224);
rd128(c, (RW(29) + 416) & ~15u, &c->r[2]);
SET32(5, RW(29) + 432);
wr32(c, (RW(29) + 436), RW(0));
wr32(c, (RW(29) + 440), RW(0));
SET64(31, 0x15226c); wr128(c, (RW(29) + 432) & ~15u, &c->r[2]); JP_F_00147A60(c);
SET64(31, 0x152274); SET64(4, RD(19) + RD(0)); JP_F_002A4D70(c);
c->f[0].u = rd32(c, (RW(29) + 224));
wr32(c, (RW(19) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 240));
wr32(c, (RW(19) + 16), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 256));
wr32(c, (RW(19) + 32), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 228));
wr32(c, (RW(19) + 4), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 244));
wr32(c, (RW(19) + 20), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 260));
wr32(c, (RW(19) + 36), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 232));
wr32(c, (RW(19) + 8), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 248));
wr32(c, (RW(19) + 24), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 264));
wr32(c, (RW(19) + 40), c->f[0].u); goto L_001522C8;
L_001522C0:;
SET64(31, 0x1522c8); SET64(4, RD(19) + RD(0)); JP_F_00142D80(c);
L_001522C8:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001522D8; }
SET64(2, (s32)rd32(c, (RW(2) + 8)));
L_001522D8:;
SET64(2, RD(2) & 0xffff);
{ int t = RD(2) == RD(0);  if (t) goto L_00152390; }
SET64(16, (s32)rd32(c, (RW(21) + 772)));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1522f4); SET64(5, RD(20) & 0xffff); JP_F_002ADD80(c);
c->f[12].u = rd32(c, (RW(16) + 28));
SET64(5, RD(2) + RD(0));
SET64(31, 0x152304); SET32(4, RW(29) + 400); JP_F_002A49B0(c);
SET64(2, (s64)(s32)0x3f800000);
rd128(c, (RW(29) + 400) & ~15u, &c->r[3]);
c->f[12].u = RW(2);
SET64(2, rd8(c, (RW(21) + 904)));
{ int t = RD(2) == RD(0); wr128(c, (RW(29) + 480) & ~15u, &c->r[3]); if (t) goto L_00152378; }
SET64(6, RD(20) & 0xffff);
SET32(4, RW(29) + 384);
SET64(31, 0x15232c); SET32(5, RW(21) + 704); JP_F_002A4310(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 464), RW(0));
wr32(c, (RW(29) + 476), RW(2));
c->f[0].u = rd32(c, (RW(29) + 488));
wr32(c, (RW(29) + 380), RW(2));
c->f[1].u = rd32(c, (RW(29) + 480));
rd128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET64(4, RD(19) + RD(0));
wr32(c, (RW(29) + 468), RW(0));
wr32(c, (RW(29) + 376), c->f[0].u);
wr32(c, (RW(29) + 472), RW(0));
wr32(c, (RW(29) + 368), c->f[1].u);
wr128(c, (RW(29) + 464) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 468));
SET64(31, 0x15236c); wr32(c, (RW(29) + 372), c->f[0].u); JP_F_002A4D70(c);
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
wr128(c, (RW(19) + 48) & ~15u, &c->r[2]); goto L_00152398;
L_00152378:;
SET64(31, 0x152380); SET64(4, RD(19) + RD(0)); JP_F_002A4D70(c);
rd128(c, (RW(29) + 480) & ~15u, &c->r[2]);
wr128(c, (RW(19) + 48) & ~15u, &c->r[2]); goto L_00152398;
L_00152390:;
SET64(31, 0x152398); SET64(4, RD(19) + RD(0)); JP_F_00142D40(c);
L_00152398:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001523A8; }
SET64(2, (s32)rd32(c, (RW(2) + 8)));
L_001523A8:;
SET64(2, RD(2) & 0xffff);
{ int t = RD(2) == RD(0);  if (t) goto L_00152428; }
SET64(16, (s32)rd32(c, (RW(21) + 772)));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1523c4); SET64(5, RD(20) & 0xffff); JP_F_002ADD80(c);
c->f[12].u = rd32(c, (RW(16) + 28));
SET64(5, RD(2) + RD(0));
SET64(31, 0x1523d4); SET32(4, RW(29) + 336); JP_F_002A4940(c);
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
SET64(4, RD(19) + RD(0));
SET64(31, 0x1523e4); wr128(c, (RW(29) + 352) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(31, 0x1523ec); SET32(4, RW(29) + 160); JP_F_002AF080(c);
SET64(31, 0x1523f4); SET32(4, RW(29) + 160); JP_F_002AF080(c);
c->f[2].u = rd32(c, (RW(29) + 352));
SET64(4, RD(19) + RD(0));
c->f[1].u = rd32(c, (RW(29) + 356));
SET64(5, RD(19) + RD(0));
c->f[0].u = rd32(c, (RW(29) + 360));
SET32(6, RW(29) + 160);
wr32(c, (RW(29) + 160), c->f[2].u);
wr32(c, (RW(29) + 180), c->f[1].u);
SET64(31, 0x15241c); wr32(c, (RW(29) + 200), c->f[0].u); JP_F_00106578(c);
 goto L_00152440;
L_00152428:;
SET64(31, 0x152430); SET64(4, RD(19) + RD(0)); JP_F_00142C30(c);
 goto L_00152440;
L_00152438:;
SET64(31, 0x152440); SET64(4, RD(19) + RD(0)); JP_F_00142DF0(c);
L_00152440:;
SET64(2, rd16(c, (RW(21) + 898)));
SET32(20, RW(20) + 1);
SET64(2, RD(20) < RD(2));
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 288); if (t) { POLL(); goto L_001521E0; } }
L_00152458:;
SET32(4, RW(21) + 704);
SET64(31, 0x152464); c->f[12].u = c->f[20].u; JP_F_00155070(c);
SET64(2, (s32)rd32(c, (RW(21) + 732)));
SET64(2, rd16(c, (RW(2) + 16)));
if (RD(2) == RD(0)) { SET64(2, RD(23) + RD(0)); goto L_00152560; }
{ int t = RD(22) == RD(0);  if (t) goto L_0015255C; }
SET64(3, rd16(c, (RW(21) + 896)));
SET64(2, RD(0) | 0xffff);
{ int t = RD(3) == RD(2);  if (t) goto L_0015255C; }
SET32(2, RW(3) << 3);
wr32(c, (RW(29) + 448), RW(0));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(29) + 452), RW(0));
SET32(4, RW(2) << 5);
SET64(3, (s32)rd32(c, (RW(21) + 900)));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 456), RW(0));
wr32(c, (RW(29) + 460), RW(2));
c->f[5].u = rd32(c, (RW(21) + 888));
wr32(c, (RW(29) + 316), RW(2));
c->f[3].u = rd32(c, (RW(21) + 884));
SET32(2, RW(3) + RW(4));
rd128(c, (RW(2) + 48) & ~15u, &c->r[3]);
c->f[1].u = rd32(c, (RW(21) + 880));
wr128(c, (RW(29) + 448) & ~15u, &c->r[3]);
c->f[4].u = rd32(c, (RW(29) + 456));
c->f[2].u = rd32(c, (RW(29) + 452));
c->f[0].u = rd32(c, (RW(29) + 448));
c->f[4].f = fpu(F(4) - F(5));
c->f[2].f = fpu(F(2) - F(3));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(29) + 312), c->f[4].u);
wr32(c, (RW(29) + 308), c->f[2].u);
wr32(c, (RW(29) + 304), c->f[0].u);
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
wr128(c, (RW(22) + 0) & ~15u, &c->r[2]);
{ int t = RD(23) == RD(0); wr128(c, (RW(21) + 880) & ~15u, &c->r[3]); if (t) goto L_0015255C; }
SET64(5, (s32)rd32(c, (RW(21) + 772)));
SET64(2, rd8(c, (RW(5) + 42)));
{ int t = RD(2) == RD(0);  if (t) goto L_0015255C; }
SET64(3, rd16(c, (RW(21) + 896)));
SET32(4, RW(29) + 288);
SET64(2, (s32)rd32(c, (RW(5) + 52)));
SET64(6, RD(0) + RD(0));
SET32(3, RW(3) << 4);
SET64(31, 0x15252c); SET32(5, RW(2) + RW(3)); JP_F_001565A0(c);
c->f[1].u = rd32(c, (RW(22) + 0));
c->f[0].u = rd32(c, (RW(29) + 288));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(22) + 0), c->f[0].u);
c->f[1].u = rd32(c, (RW(22) + 4));
c->f[0].u = rd32(c, (RW(29) + 292));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(22) + 4), c->f[0].u);
c->f[1].u = rd32(c, (RW(22) + 8));
c->f[0].u = rd32(c, (RW(29) + 296));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(22) + 8), c->f[0].u);
L_0015255C:;
SET64(2, RD(23) + RD(0));
L_00152560:;
SET64(31, rd64(c, (RW(29) + 144)));
rd128(c, (RW(29) + 128) & ~15u, &c->r[23]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 112) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 496); return;
}

void JP_F_00152590(Ctx *c) { /* func_00152590 */
ENTER(0x152590);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x1525a8); SET32(4, RW(16) + 704); JP_F_00155320(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 44), RW(3));
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 880) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001525E0(Ctx *c) { /* func_001525E0 */
ENTER(0x1525e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x1525f8); SET32(4, RW(16) + 704); JP_F_00155A90(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 44), RW(3));
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 880) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00152630(Ctx *c) { /* func_00152630 */
ENTER(0x152630);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 256)));
SET64(3, rd8(c, (RW(3) + 8)));
{ int t = RD(3) != RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_001526F8; }
SET64(25, (s32)rd32(c, (RW(19) + 432)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x15266c); SET32(4, RW(19) + 288); rt_call(c, t); }
SET64(3, rd16(c, (RW(19) + 264)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001526F8; }
SET64(3, (s32)rd32(c, (RW(19) + 272)));
L_0015267C:;
SET64(4, RD(17) & 0xffff);
SET32(16, RW(4) << 2);
SET32(3, RW(3) + RW(16));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_001526E0; }
SET64(31, 0x15269c); SET64(5, RD(18) + RD(0)); JP_F_001537E0(c);
SET64(2, (s32)rd32(c, (RW(19) + 272)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1526b0); SET64(5, RD(18) + RD(0)); JP_F_00153840(c);
SET64(2, (s32)rd32(c, (RW(19) + 272)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1526c4); SET64(5, RD(18) + RD(0)); JP_F_00153810(c);
SET64(2, (s32)rd32(c, (RW(19) + 272)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1526e0); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_001526E0:;
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(19) + 264)));
SET64(3, RSD(17) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(19) + 272))); { POLL(); goto L_0015267C; } }
L_001526F8:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00152720(Ctx *c) { /* func_00152720 */
ENTER(0x152720);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 256)));
SET64(31, 0x152740); SET64(16, RD(5) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_001527B8; }
SET64(4, (s32)rd32(c, (RW(17) + 908)));
{ int t = RD(4) == RD(0);  if (t) goto L_00152770; }
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00152764; }
SET32(5, RW(17) + 288);
L_00152764:;
SET64(31, 0x15276c);  JP_F_00243880(c);
wr32(c, (RW(17) + 908), RW(0));
L_00152770:;
{ int t = RD(16) == RD(0);  if (t) goto L_00152780; }
SET64(5, RD(17) + RD(0)); goto L_00152790;
L_00152780:;
SET64(31, 0x152788);  JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 12)));
SET64(5, RD(17) + RD(0));
L_00152790:;
if (RD(17) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001527A0; }
SET32(5, RW(17) + 288);
SET64(4, RD(16) + RD(0));
L_001527A0:;
SET64(31, 0x1527a8);  JP_F_002A6160(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1527b4); SET64(5, RD(16) + RD(0)); JP_F_001535F0(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_001527B8:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001527D0(Ctx *c) { /* func_001527D0 */
ENTER(0x1527d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(6) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001527F8; }
wr32(c, (RW(17) + 908), RW(6)); goto L_00152804;
L_001527F8:;
SET64(6, (s64)(s32)0x540000);
SET32(6, RW(6) + 1264);
wr32(c, (RW(17) + 908), RW(6));
L_00152804:;
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00152810; }
SET32(5, RW(17) + 288);
L_00152810:;
SET64(31, 0x152818); SET64(4, (s32)rd32(c, (RW(17) + 908))); JP_F_002438D0(c);
{ int t = RD(16) == RD(0);  if (t) goto L_00152828; }
SET64(3, (s32)rd32(c, (RW(17) + 256))); goto L_00152838;
L_00152828:;
SET64(31, 0x152830);  JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 12)));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
L_00152838:;
SET32(2, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
if (RD(3) == RD(2)) { SET64(18, RD(17) + RD(0)); goto L_001528C4; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(18, RD(17) + RD(0)); goto L_00152894; }
if (RD(3) == RD(0)) { SET64(18, RD(17) + RD(0)); goto L_00152864; }
SET64(6, (s32)rd32(c, (RW(17) + 908))); goto L_001528F0;
L_00152864:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_00152874; }
SET32(18, RW(17) + 288);
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_00152874:;
SET64(31, 0x15287c); SET32(5, RW(0) + 1); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x15288c); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
 goto L_001528EC;
L_00152894:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_001528A4; }
SET32(18, RW(17) + 288);
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_001528A4:;
SET64(31, 0x1528ac); SET32(5, RW(0) + 2); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1528bc); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
 goto L_001528EC;
L_001528C4:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_001528D4; }
SET32(18, RW(17) + 288);
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_001528D4:;
SET64(31, 0x1528dc); SET64(5, RD(0) + RD(0)); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1528ec); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
L_001528EC:;
SET64(6, (s32)rd32(c, (RW(17) + 908)));
L_001528F0:;
SET64(5, RD(16) + RD(0));
SET64(31, 0x1528fc); SET64(4, RD(17) + RD(0)); JP_F_00153640(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00152920(Ctx *c) { /* func_00152920 */
ENTER(0x152920);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x152938); SET64(4, (s32)rd32(c, (RW(4) + 256))); JP_F_00141B90(c);
SET64(4, (s32)rd32(c, (RW(16) + 908)));
if (RD(4) == RD(0)) { SET32(4, RW(16) + 288); goto L_00152960; }
{ int t = RD(16) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00152950; }
SET32(5, RW(16) + 288);
L_00152950:;
SET64(31, 0x152958);  JP_F_00243880(c);
wr32(c, (RW(16) + 908), RW(0));
SET32(4, RW(16) + 288);
L_00152960:;
SET64(31, 0x152968); SET64(5, RD(0) + RD(0)); JP_F_002437E0(c);
wr32(c, (RW(16) + 908), RW(0));
SET64(5, (s64)(s32)0x140000);
SET64(4, (s32)rd32(c, (RW(16) + 900)));
SET64(31, 0x15297c); SET32(5, RW(5) + 12000); JP_F_001022C0(c);
SET32(4, RW(16) + 704);
SET64(31, 0x152988); wr32(c, (RW(16) + 900), RW(0)); JP_F_001554D0(c);
SET64(31, 0x152990); SET64(4, RD(16) + RD(0)); JP_F_00154240(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

static void JP_B_001529A0(Ctx *c, u32 entry) { /* func_001529A0 */
ENTER(entry);
switch (entry) { case 0x1529fc: goto L_001529FC; }
SET32(29, RW(29) + -6944);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(6) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x1529d4); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00152E10(c);
SET64(5, rd16(c, (RW(21) + 898)));
SET64(6, (s32)rd32(c, (RW(21) + 900)));
SET64(31, 0x1529e4); SET32(4, RW(21) + 704); JP_F_00155510(c);
SET32(16, RW(29) + 224);
L_001529E8:;
SET64(31, 0x1529f0); SET64(4, RD(16) + RD(0)); JP_F_002AF080(c);
SET32(16, RW(16) + 64);
SET32(2, RW(29) + 6944);
SET64(2, RD(16) < RD(2));
L_001529FC:;
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001529E8; } }
SET64(2, rd16(c, (RW(21) + 898)));
{ int t = RD(2) == RD(0); SET64(19, RD(0) + RD(0)); if (t) goto L_00152A68; }
SET32(17, RW(29) + 224);
SET64(18, RD(0) + RD(0));
SET64(16, RD(17) + RD(0));
L_00152A1C:;
SET64(2, (s32)rd32(c, (RW(21) + 900)));
SET32(4, RW(29) + 160);
SET64(31, 0x152a2c); SET32(5, RW(2) + RW(18)); JP_F_00142A30(c);
rd128(c, (RW(29) + 160) & ~15u, &c->r[4]);
SET32(19, RW(19) + 1);
rd128(c, (RW(29) + 176) & ~15u, &c->r[3]);
SET32(18, RW(18) + 288);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[4]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[3]);
SET32(17, RW(17) + 64);
wr128(c, (RW(16) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[2]);
SET64(2, rd16(c, (RW(21) + 898)));
SET64(2, RD(19) < RD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 64); if (t) { POLL(); goto L_00152A1C; } }
L_00152A68:;
SET64(7, (s32)rd32(c, (RW(21) + 900)));
SET64(5, RD(20) + RD(0));
SET64(6, RD(22) + RD(0));
SET64(4, RD(21) + RD(0));
SET64(31, 0x152a80); SET32(8, RW(29) + 224); JP_F_00153870(c);
SET64(3, RD(0) | 0xffff);
wr32(c, (RW(29) + 128), RW(0));
wr16(c, (RW(21) + 896), (u16)RW(3));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
wr32(c, (RW(29) + 140), RW(3));
rd128(c, (RW(29) + 128) & ~15u, &c->r[4]);
wr32(c, (RW(29) + 144), RW(3));
wr32(c, (RW(29) + 148), RW(3));
wr32(c, (RW(29) + 152), RW(3));
wr32(c, (RW(29) + 156), RW(3));
rd128(c, (RW(29) + 144) & ~15u, &c->r[3]);
wr128(c, (RW(21) + 880) & ~15u, &c->r[4]);
wr128(c, (RW(21) + 512) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 112)));
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 6944); return;
}
void JP_F_001529A0(Ctx *c) { JP_B_001529A0(c, 0x1529a0); }
void JP_F_001529FC(Ctx *c) { JP_B_001529A0(c, 0x1529fc); }

void JP_F_00152AF0(Ctx *c) { /* func_00152AF0 */
ENTER(0x152af0);
SET32(29, RW(29) + -320);
wr64(c, (RW(29) + 160), RD(31));
wr128(c, (RW(29) + 144) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 900), RW(0));
SET64(16, RD(0) + RD(0));
SET64(2, rd16(c, (RW(5) + 898)));
wr16(c, (RW(4) + 898), (u16)RW(2));
SET64(17, rd16(c, (RW(4) + 898)));
SET32(2, RW(17) << 3);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) << 5);
SET64(31, 0x152b40); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_00152B70; }
SET64(5, (s64)(s32)0x140000);
SET64(6, (s64)(s32)0x140000);
SET64(8, RD(17) + RD(0));
SET32(16, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET32(5, RW(5) + 12112);
SET32(6, RW(6) + 12000);
SET64(31, 0x152b6c); SET32(7, RW(0) + 288); JP_F_00102580(c);
SET64(18, RD(2) + RD(0));
L_00152B70:;
wr32(c, (RW(20) + 900), RW(18));
SET64(3, rd16(c, (RW(20) + 898)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00152C38; }
SET64(5, RD(18) & 0xffff);
L_00152B84:;
SET64(3, (s32)rd32(c, (RW(20) + 900)));
SET32(4, RW(5) << 3);
SET64(2, (s32)rd32(c, (RW(19) + 900)));
SET32(4, RW(4) + RW(5));
SET32(16, RW(4) << 5);
SET32(17, RW(3) + RW(16));
SET32(3, RW(2) + RW(16));
SET64(4, RD(17) + RD(0));
rd128(c, (RW(3) + 208) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 208) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 224) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 224) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 240) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 240) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 256) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 256) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(19) + 900)));
SET32(2, RW(2) + RW(16));
SET64(31, 0x152bd4); SET32(5, RW(2) + 166); JP_F_00142E60(c);
SET64(3, (s32)rd32(c, (RW(19) + 900)));
SET64(2, RD(0) | 0xffff);
SET32(3, RW(3) + RW(16));
SET64(5, rd16(c, (RW(3) + 164)));
{ int t = RD(5) != RD(2); wr16(c, (RW(17) + 164), (u16)RW(5)); if (t) goto L_00152C00; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x152bf8); SET32(4, RW(20) + 288); JP_F_002438D0(c);
 goto L_00152C20;
L_00152C00:;
SET32(3, RW(5) << 3);
SET32(3, RW(3) + RW(5));
SET64(2, (s32)rd32(c, (RW(20) + 900)));
SET32(3, RW(3) << 5);
SET64(4, RD(17) + RD(0));
SET64(31, 0x152c1c); SET32(5, RW(2) + RW(3)); JP_F_00142EB0(c);
L_00152C20:;
SET64(3, rd16(c, (RW(20) + 898)));
SET32(2, RW(18) + 1);
SET64(18, RD(2) & 0xffff);
SET64(2, RSD(18) < RSD(3));
if (RD(2) != RD(0)) { SET64(5, RD(18) & 0xffff); { POLL(); goto L_00152B84; } }
L_00152C38:;
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00152D80; }
{ int t = RSD(3) <= 0; SET32(21, RW(29) + 256); if (t) goto L_00152D80; }
SET64(4, RD(18) & 0xffff);
L_00152C4C:;
SET64(2, (s32)rd32(c, (RW(20) + 900)));
SET32(3, RW(4) << 3);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 5);
SET32(17, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 160)));
{ int t = RD(2) == RD(0);  if (t) goto L_00152C78; }
SET32(16, RW(2) + 64); goto L_00152D18;
L_00152C78:;
SET64(2, (s8)rd8(c, (RW(28) + -30312)));
{ int t = RD(2) != RD(0);  if (t) goto L_00152CE0; }
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
SET64(31, 0x152cd4); c->f[19].u = c->f[13].u; JP_F_002AF0D0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30312), (u8)RW(2));
L_00152CE0:;
SET64(31, 0x152ce8); SET32(4, RW(29) + 192); JP_F_002AF080(c);
SET64(5, (s64)(s32)0x420000);
SET32(16, RW(29) + 192);
SET32(5, RW(5) + -17024);
rd128(c, (RW(5) + 0) & ~15u, &c->r[4]);
rd128(c, (RW(5) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(5) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 192) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 208) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 224) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 240) & ~15u, &c->r[2]);
L_00152D18:;
SET64(31, 0x152d20); SET32(4, RW(29) + 256); JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[2]);
SET64(4, RD(17) + RD(0));
wr128(c, (RW(21) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(21) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(21) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[2]);
SET64(31, 0x152d48); wr128(c, (RW(21) + 48) & ~15u, &c->r[2]); JP_F_00142DF0(c);
SET64(31, 0x152d50); SET64(4, RD(17) + RD(0)); JP_F_002A4D70(c);
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 256);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x152d68); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, rd16(c, (RW(20) + 898)));
SET32(3, RW(18) + 1);
SET64(18, RD(3) & 0xffff);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, RD(18) & 0xffff); { POLL(); goto L_00152C4C; } }
L_00152D80:;
SET64(2, rd8(c, (RW(19) + 904)));
wr8(c, (RW(20) + 904), (u8)RW(2));
SET64(5, rd16(c, (RW(20) + 898)));
SET64(6, (s32)rd32(c, (RW(20) + 900)));
SET64(31, 0x152d98); SET32(4, RW(20) + 704); JP_F_00155510(c);
SET64(2, (s64)(s32)0x3f800000);
SET64(3, rd16(c, (RW(19) + 896)));
wr32(c, (RW(29) + 176), RW(0));
SET32(4, RW(20) + 608);
wr32(c, (RW(29) + 188), RW(2));
SET32(5, RW(19) + 608);
wr32(c, (RW(29) + 180), RW(0));
wr32(c, (RW(29) + 184), RW(0));
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr16(c, (RW(20) + 896), (u16)RW(3));
SET64(31, 0x152dc8); wr128(c, (RW(20) + 880) & ~15u, &c->r[2]); JP_F_002B3F40(c);
rd128(c, (RW(19) + 512) & ~15u, &c->r[2]);
SET64(5, RD(19) + RD(0));
wr128(c, (RW(20) + 512) & ~15u, &c->r[2]);
SET64(6, (s32)rd32(c, (RW(20) + 900)));
SET64(31, 0x152de0); SET64(4, RD(20) + RD(0)); JP_F_001540E0(c);
SET64(31, rd64(c, (RW(29) + 160)));
rd128(c, (RW(29) + 144) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET32(29, RW(29) + 320); return;
}

static void JP_B_00152E10(Ctx *c, u32 entry) { /* func_00152E10 */
ENTER(entry);
switch (entry) { case 0x153054: goto L_00153054; }
SET32(29, RW(29) + -288);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x152e3c); SET64(4, RD(20) + RD(0)); JP_F_001400A0(c);
SET64(3, rd16(c, (RW(2) + 0)));
wr16(c, (RW(16) + 898), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 898)));
{ int t = RD(3) == RD(0);  if (t) goto L_001530A8; }
SET64(18, RD(3) & 0xffff);
SET64(17, RD(0) + RD(0));
SET32(2, RW(18) << 3);
SET32(2, RW(2) + RW(18));
SET32(2, RW(2) << 5);
SET64(31, 0x152e6c); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00152E9C; }
SET64(5, (s64)(s32)0x140000);
SET64(6, (s64)(s32)0x140000);
SET64(8, RD(18) + RD(0));
SET32(17, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + 12112);
SET32(6, RW(6) + 12000);
SET64(31, 0x152e98); SET32(7, RW(0) + 288); JP_F_00102580(c);
SET64(19, RD(2) + RD(0));
L_00152E9C:;
SET64(4, RD(20) + RD(0));
SET64(31, 0x152ea8); wr32(c, (RW(16) + 900), RW(19)); JP_F_001400A0(c);
SET64(4, rd16(c, (RW(16) + 898)));
SET64(20, (s32)rd32(c, (RW(2) + 4)));
{ int t = RSD(4) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00152F60; }
L_00152EB8:;
SET64(5, RD(19) & 0xffff);
SET64(3, (s32)rd32(c, (RW(16) + 900)));
SET32(4, RW(5) << 3);
rd128(c, (RW(20) + 0) & ~15u, &c->r[2]);
SET32(4, RW(4) + RW(5));
SET32(4, RW(4) << 5);
SET32(5, RW(20) + 70);
SET32(18, RW(3) + RW(4));
wr128(c, (RW(18) + 208) & ~15u, &c->r[2]);
SET64(4, RD(18) + RD(0));
rd128(c, (RW(20) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 224) & ~15u, &c->r[2]);
rd128(c, (RW(20) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 240) & ~15u, &c->r[2]);
rd128(c, (RW(20) + 48) & ~15u, &c->r[2]);
SET64(31, 0x152efc); wr128(c, (RW(18) + 256) & ~15u, &c->r[2]); JP_F_00142E60(c);
SET64(17, rd16(c, (RW(20) + 64)));
SET64(2, RD(0) | 0xffff);
{ int t = RD(17) != RD(2);  if (t) goto L_00152F20; }
SET32(4, RW(16) + 288);
SET64(31, 0x152f18); SET64(5, RD(18) + RD(0)); JP_F_002438D0(c);
 goto L_00152F40;
L_00152F20:;
SET32(2, RW(17) << 3);
SET32(3, RW(2) + RW(17));
SET64(4, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 900)));
SET32(3, RW(3) << 5);
SET64(31, 0x152f3c); SET32(5, RW(2) + RW(3)); JP_F_00142EB0(c);
L_00152F40:;
wr16(c, (RW(18) + 164), (u16)RW(17));
SET64(4, rd16(c, (RW(16) + 898)));
SET32(3, RW(19) + 1);
SET64(19, RD(3) & 0xffff);
SET64(3, RSD(19) < RSD(4));
{ int t = RD(3) != RD(0); SET32(20, RW(20) + 112); if (t) { POLL(); goto L_00152EB8; } }
L_00152F60:;
{ int t = RSD(4) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_001530A8; }
{ int t = RSD(4) <= 0; SET32(17, RW(29) + 224); if (t) goto L_001530A8; }
SET64(4, RD(20) & 0xffff);
L_00152F74:;
SET64(2, (s32)rd32(c, (RW(16) + 900)));
SET32(3, RW(4) << 3);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 5);
SET32(19, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(19) + 160)));
{ int t = RD(2) == RD(0);  if (t) goto L_00152FA0; }
SET32(18, RW(2) + 64); goto L_00153040;
L_00152FA0:;
SET64(2, (s8)rd8(c, (RW(28) + -30312)));
{ int t = RD(2) != RD(0);  if (t) goto L_00153008; }
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
SET64(31, 0x152ffc); c->f[19].u = c->f[13].u; JP_F_002AF0D0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30312), (u8)RW(2));
L_00153008:;
SET64(31, 0x153010); SET32(4, RW(29) + 160); JP_F_002AF080(c);
SET64(5, (s64)(s32)0x420000);
SET32(18, RW(29) + 160);
SET32(5, RW(5) + -17024);
rd128(c, (RW(5) + 0) & ~15u, &c->r[4]);
rd128(c, (RW(5) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(5) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 176) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 192) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 208) & ~15u, &c->r[2]);
L_00153040:;
SET64(31, 0x153048); SET32(4, RW(29) + 224); JP_F_002AF080(c);
rd128(c, (RW(18) + 0) & ~15u, &c->r[2]);
SET64(4, RD(19) + RD(0));
wr128(c, (RW(17) + 0) & ~15u, &c->r[2]);
L_00153054:;
rd128(c, (RW(18) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(18) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(18) + 48) & ~15u, &c->r[2]);
SET64(31, 0x153070); wr128(c, (RW(17) + 48) & ~15u, &c->r[2]); JP_F_00142DF0(c);
SET64(31, 0x153078); SET64(4, RD(19) + RD(0)); JP_F_002A4D70(c);
SET64(25, (s32)rd32(c, (RW(19) + 144)));
SET64(4, RD(19) + RD(0));
SET32(5, RW(29) + 224);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x153090); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 898)));
SET32(4, RW(20) + 1);
SET64(20, RD(4) & 0xffff);
SET64(3, RSD(20) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, RD(20) & 0xffff); { POLL(); goto L_00152F74; } }
L_001530A8:;
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 904), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 144)));
rd128(c, (RW(29) + 128) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET32(29, RW(29) + 288); return;
}
void JP_F_00152E10(Ctx *c) { JP_B_00152E10(c, 0x152e10); }
void JP_F_00153054(Ctx *c) { JP_B_00152E10(c, 0x153054); }

void JP_F_001530D0(Ctx *c) { /* func_001530D0 */
ENTER(0x1530d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(5) + RD(0));
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_00153100; }
SET32(4, RW(17) + 912);
SET64(31, 0x153100); wr32(c, (RW(17) + 256), RW(4)); JP_F_00141C80(c);
L_00153100:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x15310c); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET32(4, RW(17) + 288);
SET64(31, 0x153118); SET32(5, RW(0) + 1); JP_F_002A5500(c);
SET64(31, 0x153120); SET32(4, RW(17) + 704); JP_F_00155690(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -736);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(7, (s64)(s32)0x4d0000);
SET64(5, (s32)rd32(c, (RW(17) + 256)));
SET32(9, RW(9) + -584);
SET32(8, RW(8) + -664);
SET32(7, RW(7) + -632);
SET32(6, RW(17) + 912);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(5) + 16), RW(9));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 432), RW(8));
SET32(4, RW(17) + 288);
wr32(c, (RW(17) + 760), RW(7));
SET32(5, RW(17) + 32);
SET64(7, (s32)rd32(c, (RW(17) + 256)));
SET32(6, RW(6) - RW(7));
wr32(c, (RW(7) + 20), RW(6));
wr32(c, (RW(17) + 880), RW(0));
wr32(c, (RW(17) + 884), RW(0));
wr32(c, (RW(17) + 888), RW(0));
wr32(c, (RW(17) + 892), RW(3));
wr32(c, (RW(17) + 900), RW(0));
wr8(c, (RW(17) + 904), (u8)RW(2));
SET64(31, 0x153194); wr32(c, (RW(17) + 908), RW(0)); JP_F_002BA8F0(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001531B0(Ctx *c) { /* func_001531B0 */
ENTER(0x1531b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015321C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -400);
SET64(31, 0x1531dc); wr32(c, (RW(17) + 56), RW(2)); JP_F_001554D0(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_00153208; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + -368);
SET64(31, 0x1531f8); wr32(c, (RW(17) + 56), RW(2)); JP_F_00155EB0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x153204); SET64(5, RD(0) + RD(0)); JP_F_002A4430(c);
SET64(2, RD(16) << 48);
L_00153208:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00153220; }
SET64(31, 0x15321c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015321C:;
SET64(2, RD(17) + RD(0));
L_00153220:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00153240(Ctx *c) { /* func_00153240 */
ENTER(0x153240);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -912);
SET32(4, RW(4) + RW(25)); { JP_F_00151D30(c); return; }
}

void JP_F_00153250(Ctx *c) { /* func_00153250 */
ENTER(0x153250);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -912);
SET32(4, RW(4) + RW(25)); { JP_F_00152920(c); return; }
}

void JP_F_00153260(Ctx *c) { /* func_00153260 */
ENTER(0x153260);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -912);
SET32(4, RW(4) + RW(25)); { JP_F_00151D80(c); return; }
}

void JP_F_00153270(Ctx *c) { /* func_00153270 */
ENTER(0x153270);
SET32(4, RW(4) + -288); { JP_F_00152630(c); return; }
}

void JP_F_00153280(Ctx *c) { /* func_00153280 */
ENTER(0x153280);
SET32(4, RW(4) + -288); { JP_F_00151D80(c); return; }
}

void JP_F_00153290(Ctx *c) { /* func_00153290 */
ENTER(0x153290);
SET32(4, RW(4) + -704); { JP_F_00152170(c); return; }
}

void JP_F_001532A0(Ctx *c) { /* func_001532A0 */
ENTER(0x1532a0);
SET32(4, RW(4) + -704); { JP_F_00151D80(c); return; }
}

void JP_F_001532B0(Ctx *c) { /* func_001532B0 */
ENTER(0x1532b0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(5) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 272)));
{ int t = RD(3) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_00153538; }
c->f[1].u = rd32(c, (RW(22) + 0));
c->f[0].u = rd32(c, (RW(17) + 268));
c->fcc = F(0) == F(1);
{ int t = c->fcc;  if (t) goto L_00153538; }
wr32(c, (RW(17) + 268), c->f[1].u);
SET64(3, (s64)(s32)0x43000000);
c->f[1].u = rd32(c, (RW(22) + 0));
c->f[2].u = RW(3);
SET64(3, (s64)(s32)0x4f000000);
c->f[1].f = fpu(F(2) * F(1));
c->f[0].u = RW(3);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_00153334; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(4, (s32)c->f[0].u);
SET64(4, RD(4) & 0xff); goto L_0015334C;
L_00153334:;
SET64(3, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(4, (s32)c->f[0].u);
SET64(4, RD(4) | RD(3));
SET64(4, RD(4) & 0xff);
L_0015334C:;
SET64(3, rd16(c, (RW(17) + 264)));
SET64(4, RD(4) & 0xff);
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00153538; }
SET64(20, RD(4) & 0xff);
SET64(3, (s32)rd32(c, (RW(17) + 272)));
L_00153364:;
SET64(4, RD(16) & 0xffff);
SET32(19, RW(4) << 2);
SET32(3, RW(3) + RW(19));
SET64(18, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(18) == RD(0);  if (t) goto L_00153520; }
c->f[1].u = rd32(c, (RW(22) + 0));
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_001533A8; }
SET64(31, 0x1533a0); SET64(4, RD(18) + RD(0)); JP_F_001548C0(c);
 goto L_00153520;
L_001533A8:;
SET64(3, rd16(c, (RW(18) + 48)));
SET64(3, RD(3) & 0x7);
{ int t = RD(3) != RD(0);  if (t) goto L_00153520; }
SET64(2, (s32)rd32(c, (RW(18) + 56)));
{ int t = RD(2) == RD(0);  if (t) goto L_00153410; }
SET64(2, rd16(c, (RW(18) + 52)));
{ int t = RSD(2) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00153410; }
L_001533D0:;
SET64(4, RD(21) & 0xffff);
SET32(3, RW(4) << 3);
SET64(2, (s32)rd32(c, (RW(18) + 56)));
SET32(3, RW(3) - RW(4));
SET64(5, RD(0) + RD(0));
SET32(3, RW(3) << 2);
SET32(6, RW(0) + 128);
SET64(31, 0x1533f4); SET32(4, RW(2) + RW(3)); JP_F_001417E0(c);
SET64(2, rd16(c, (RW(18) + 52)));
SET32(3, RW(21) + 1);
SET64(21, RD(3) & 0xffff);
SET64(2, RSD(21) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001533D0; } }
L_00153410:;
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(18, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(18) + 56)));
{ int t = RD(2) == RD(0);  if (t) goto L_00153478; }
SET64(2, rd16(c, (RW(18) + 52)));
{ int t = RSD(2) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00153478; }
L_00153438:;
SET64(4, RD(21) & 0xffff);
SET32(3, RW(4) << 3);
SET64(2, (s32)rd32(c, (RW(18) + 56)));
SET32(3, RW(3) - RW(4));
SET32(5, RW(0) + 1);
SET32(3, RW(3) << 2);
SET32(6, RW(0) + 64);
SET64(31, 0x15345c); SET32(4, RW(2) + RW(3)); JP_F_001417E0(c);
SET64(2, rd16(c, (RW(18) + 52)));
SET32(3, RW(21) + 1);
SET64(21, RD(3) & 0xffff);
SET64(2, RSD(21) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00153438; } }
L_00153478:;
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(6, RW(0) + 1);
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(8, RD(6) + RD(0));
SET32(2, RW(2) + RW(19));
SET64(9, RD(20) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1534a0); SET32(4, RW(2) + 144); JP_F_002B3EF0(c);
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 5);
SET32(7, RW(0) + 120);
SET64(8, RD(5) + RD(0));
SET32(2, RW(2) + RW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(18, RW(2) + 240);
SET64(31, 0x1534c8); SET64(4, RD(18) + RD(0)); JP_F_002B42A0(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x1534d8); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x1534e8); SET32(6, RW(0) + 2); JP_F_002B4230(c);
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 152)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x153504); SET32(4, RW(2) + 144); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 248)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x153520); SET32(4, RW(2) + 240); rt_call(c, t); }
L_00153520:;
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(17) + 264)));
SET64(3, RSD(16) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 272))); { POLL(); goto L_00153364; } }
L_00153538:;
SET64(31, rd64(c, (RW(29) + 112)));
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_00153560(Ctx *c) { /* func_00153560 */
ENTER(0x153560);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 272)));
{ int t = RD(3) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_001535D0; }
SET64(3, rd16(c, (RW(18) + 264)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_001535D0; }
SET64(3, (s32)rd32(c, (RW(18) + 272)));
L_00153594:;
SET64(4, RD(16) & 0xffff);
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_001535B8; }
SET64(31, 0x1535b4); SET64(5, RD(17) + RD(0)); JP_F_002A55C0(c);
L_001535B8:;
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(18) + 264)));
SET64(3, RSD(16) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 272))); { POLL(); goto L_00153594; } }
L_001535D0:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001535F0(Ctx *c) { /* func_001535F0 */
ENTER(0x1535f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 256)));
SET64(31, 0x153608); SET64(4, RD(16) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_0015362C; }
SET32(2, RW(0) + 2);
SET64(31, 0x153620); wr32(c, (RW(16) + 0), RW(2)); JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
wr32(c, (RW(16) + 12), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
L_0015362C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00153640(Ctx *c) { /* func_00153640 */
ENTER(0x153640);
SET64(4, (s32)rd32(c, (RW(4) + 256)));
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 8), (u8)RW(0));
wr32(c, (RW(4) + 0), RW(3)); return;
}

void JP_F_00153660(Ctx *c) { /* func_00153660 */
ENTER(0x153660);
SET64(3, rd8(c, (RW(4) + 266)));
{ int t = RD(3) == RD(0);  if (t) goto L_0015369C; }
SET64(6, rd16(c, (RW(4) + 264)));
SET64(3, (s32)rd32(c, (RW(4) + 272)));
SET32(4, RW(6) + -1);
SET64(4, RD(4) & 0xffff);
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_0015369C; }
wr32(c, (RW(4) + 128), RW(5));
SET64(3, (s32)rd32(c, (RW(5) + 16)));
wr32(c, (RW(4) + 96), RW(3));
L_0015369C:;
 return;
}

void JP_F_001536B0(Ctx *c) { /* func_001536B0 */
ENTER(0x1536b0);
SET64(3, rd16(c, (RW(4) + 264)));
{ int t = RSD(3) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_001536F8; }
SET64(3, (s32)rd32(c, (RW(4) + 272)));
L_001536C0:;
SET64(6, RD(7) & 0xffff);
SET32(6, RW(6) << 2);
SET32(3, RW(3) + RW(6));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_001536E0; }
wr32(c, (RW(3) + 80), RW(5));
L_001536E0:;
SET32(3, RW(7) + 1);
SET64(7, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(4) + 264)));
SET64(3, RSD(7) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 272))); { POLL(); goto L_001536C0; } }
L_001536F8:;
 return;
}

void JP_F_00153700(Ctx *c) { /* func_00153700 */
ENTER(0x153700);
SET64(3, rd16(c, (RW(4) + 264)));
{ int t = RSD(3) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00153758; }
SET64(7, RD(6) & 0xffff);
SET64(3, (s32)rd32(c, (RW(4) + 272)));
L_00153714:;
SET64(6, RD(8) & 0xffff);
SET32(6, RW(6) << 2);
SET32(3, RW(3) + RW(6));
SET64(6, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(6) == RD(0);  if (t) goto L_00153740; }
SET64(3, rd16(c, (RW(6) + 50)));
{ int t = RD(7) != RD(3);  if (t) goto L_00153740; }
wr32(c, (RW(6) + 80), RW(5));
L_00153740:;
SET32(3, RW(8) + 1);
SET64(8, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(4) + 264)));
SET64(3, RSD(8) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 272))); { POLL(); goto L_00153714; } }
L_00153758:;
 return;
}

void JP_F_00153760(Ctx *c) { /* func_00153760 */
ENTER(0x153760);
SET64(3, rd16(c, (RW(4) + 264)));
{ int t = RSD(3) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_001537C0; }
SET64(7, RD(6) & 0xffff);
SET64(3, (s32)rd32(c, (RW(4) + 272)));
L_00153774:;
SET64(6, RD(8) & 0xffff);
SET32(6, RW(6) << 2);
SET32(3, RW(3) + RW(6));
SET64(6, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(6) == RD(0);  if (t) goto L_001537A8; }
SET64(3, rd16(c, (RW(6) + 50)));
{ int t = RD(7) != RD(3);  if (t) goto L_001537A8; }
wr32(c, (RW(6) + 128), RW(5));
SET64(3, (s32)rd32(c, (RW(5) + 16)));
wr32(c, (RW(6) + 96), RW(3));
L_001537A8:;
SET32(3, RW(8) + 1);
SET64(8, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(4) + 264)));
SET64(3, RSD(8) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 272))); { POLL(); goto L_00153774; } }
L_001537C0:;
 return;
}

void JP_F_001537D0(Ctx *c) { /* func_001537D0 */
ENTER(0x1537d0);
wr32(c, (RW(4) + 128), RW(5));
SET64(3, (s32)rd32(c, (RW(5) + 16)));
wr32(c, (RW(4) + 96), RW(3)); return;
}

void JP_F_001537E0(Ctx *c) { /* func_001537E0 */
ENTER(0x1537e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 128)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_00153808; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x153804);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_00153808:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00153810(Ctx *c) { /* func_00153810 */
ENTER(0x153810);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(25, (s32)rd32(c, (RW(2) + 248)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x15382c); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00153840(Ctx *c) { /* func_00153840 */
ENTER(0x153840);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(25, (s32)rd32(c, (RW(2) + 152)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x15385c); SET32(4, RW(2) + 144); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00153870(Ctx *c) { /* func_00153870 */
ENTER(0x153870);
SET32(29, RW(29) + -416);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 256)));
SET64(16, RD(6) + RD(0));
wr32(c, (RW(29) + 380), RW(7));
SET64(31, 0x1538b8); wr32(c, (RW(29) + 376), RW(8)); JP_F_00141B90(c);
SET64(31, 0x1538c0); SET64(4, RD(19) + RD(0)); JP_F_001400A0(c);
SET64(21, rd16(c, (RW(2) + 2)));
wr128(c, (RW(29) + 208) & ~15u, &c->r[2]);
wr8(c, (RW(29) + 352), (u8)RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(17) + 266), (u8)RW(0));
wr16(c, (RW(29) + 336), (u16)RW(0));
{ int t = RD(16) == RD(0); wr32(c, (RW(17) + 268), RW(2)); if (t) goto L_001538F0; }
SET64(2, RD(21) & 0xffff);
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 264), (u16)RW(2)); goto L_001538F4;
L_001538F0:;
wr16(c, (RW(17) + 264), (u16)RW(21));
L_001538F4:;
SET64(2, rd16(c, (RW(17) + 264)));
SET64(31, 0x153900); SET32(4, RW(2) << 2); JP_F_00100530(c);
wr32(c, (RW(17) + 272), RW(2));
SET64(4, rd16(c, (RW(17) + 264)));
{ int t = RSD(4) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_00153940; }
SET64(3, RD(6) & 0xffff);
L_00153914:;
SET64(4, (s32)rd32(c, (RW(17) + 272)));
SET32(5, RW(3) << 2);
SET32(3, RW(6) + 1);
SET64(6, RD(3) & 0xffff);
SET32(3, RW(4) + RW(5));
wr32(c, (RW(3) + 0), RW(0));
SET64(4, rd16(c, (RW(17) + 264)));
SET64(3, RSD(6) < RSD(4));
if (RD(3) != RD(0)) { SET64(3, RD(6) & 0xffff); { POLL(); goto L_00153914; } }
L_00153940:;
if (RD(16) == RD(0)) { SET64(3, RD(21) & 0xffff); goto L_00153ACC; }
rd128(c, (RW(29) + 208) & ~15u, &c->r[5]);
SET32(22, RW(4) + -1);
SET64(4, RD(0) + RD(0));
SET64(5, rd16(c, (RW(5) + 2)));
{ int t = RSD(5) <= 0; SET64(3, RD(0) + RD(0)); if (t) goto L_001539B8; }
rd128(c, (RW(29) + 208) & ~15u, &c->r[5]);
SET64(7, (s32)rd32(c, (RW(5) + 8)));
SET64(6, RD(3) & 0xffff);
L_0015396C:;
SET32(5, RW(6) << 1);
SET32(5, RW(5) + RW(6));
SET32(5, RW(5) << 4);
SET32(5, RW(7) + RW(5));
SET64(5, rd16(c, (RW(5) + 8)));
SET64(5, RD(5) & 0x8);
{ int t = RD(5) == RD(0);  if (t) goto L_00153998; }
SET32(4, RW(4) + 1);
SET64(4, RD(4) & 0xffff);
L_00153998:;
rd128(c, (RW(29) + 208) & ~15u, &c->r[5]);
SET32(3, RW(3) + 1);
SET64(3, RD(3) & 0xffff);
SET64(5, rd16(c, (RW(5) + 2)));
SET64(5, RSD(3) < RSD(5));
if (RD(5) != RD(0)) { SET64(6, RD(3) & 0xffff); { POLL(); goto L_0015396C; } }
L_001539B8:;
SET64(20, RD(4) & 0xffff);
{ int t = RD(20) == RD(0);  if (t) goto L_00153AC8; }
SET64(31, 0x1539cc); SET32(4, RW(0) + 288); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00153A1C; }
SET64(4, RD(19) + RD(0));
SET64(31, 0x1539e0); SET64(5, RD(0) + RD(0)); JP_F_002A58A0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(0) | 0xffff);
SET32(3, RW(3) + -432);
SET32(4, RW(19) + 64);
wr32(c, (RW(19) + 0), RW(3));
wr16(c, (RW(19) + 48), (u16)RW(0));
wr16(c, (RW(19) + 50), (u16)RW(2));
wr16(c, (RW(19) + 52), (u16)RW(0));
SET64(31, 0x153a08); wr32(c, (RW(19) + 56), RW(0)); JP_F_002B5760(c);
SET32(4, RW(19) + 144);
SET64(31, 0x153a14); wr32(c, (RW(19) + 128), RW(0)); JP_F_002B3FD0(c);
SET64(31, 0x153a1c); SET32(4, RW(19) + 240); JP_F_002B4380(c);
L_00153A1C:;
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(3, RW(22) << 2);
SET64(22, RD(0) + RD(0));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(2) + 0), RW(19));
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(3));
SET64(19, (s32)rd32(c, (RW(2) + 0)));
wr16(c, (RW(19) + 52), (u16)RW(20));
SET64(20, rd16(c, (RW(19) + 52)));
SET32(2, RW(20) << 3);
SET32(2, RW(2) - RW(20));
SET32(2, RW(2) << 2);
SET64(31, 0x153a58); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_00153A88; }
SET64(5, (s64)(s32)0x140000);
SET64(6, (s64)(s32)0x140000);
SET64(8, RD(20) + RD(0));
SET32(22, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET32(5, RW(5) + 6768);
SET32(6, RW(6) + 6864);
SET64(31, 0x153a84); SET32(7, RW(0) + 28); JP_F_00102580(c);
SET64(18, RD(2) + RD(0));
L_00153A88:;
SET64(5, (s64)(s32)0x3f800000);
wr32(c, (RW(19) + 56), RW(18));
wr32(c, (RW(29) + 400), RW(5));
SET64(3, RD(0) | 0xffff);
wr32(c, (RW(29) + 404), RW(5));
SET32(4, RW(19) + 64);
wr16(c, (RW(19) + 50), (u16)RW(3));
wr32(c, (RW(29) + 408), RW(5));
SET32(3, RW(0) + 1);
wr32(c, (RW(29) + 412), RW(5));
rd128(c, (RW(29) + 400) & ~15u, &c->r[5]);
wr16(c, (RW(19) + 48), (u16)RW(0));
wr128(c, (RW(19) + 64) & ~15u, &c->r[5]);
wr32(c, (RW(19) + 80), RW(0));
wr32(c, (RW(19) + 32), RW(4));
wr8(c, (RW(17) + 266), (u8)RW(3));
L_00153AC8:;
SET64(3, RD(21) & 0xffff);
L_00153ACC:;
wr16(c, (RW(29) + 320), (u16)RW(0));
{ int t = RSD(3) <= 0; wr128(c, (RW(29) + 192) & ~15u, &c->r[3]); if (t) goto L_00154018; }
wr32(c, (RW(29) + 240), RW(0));
SET64(2, rd16(c, (RW(29) + 320)));
L_00153AE0:;
SET32(4, RW(0) + 288);
SET64(19, RD(2) + RD(0));
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
SET32(3, RW(19) << 1);
SET32(3, RW(3) + RW(19));
SET32(3, RW(3) << 4);
SET64(2, (s32)rd32(c, (RW(2) + 8)));
SET32(21, RW(2) + RW(3));
SET64(5, rd16(c, (RW(21) + 8)));
SET64(20, rd16(c, (RW(21) + 4)));
SET64(2, RD(5) & 0x10);
SET64(3, RD(5) & 0x7);
SET64(2, RD(0) < RD(2));
SET64(30, RD(0) < RD(3));
wr128(c, (RW(29) + 176) & ~15u, &c->r[2]);
SET64(3, RD(5) & 0x8);
SET64(2, RD(5) & 0x20);
SET64(22, RD(0) < RD(3));
SET64(2, RD(0) < RD(2));
SET64(31, 0x153b34); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_00153B88; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x153b48); SET64(5, RD(0) + RD(0)); JP_F_002A58A0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(0) | 0xffff);
SET32(3, RW(3) + -432);
SET32(4, RW(18) + 64);
wr32(c, (RW(18) + 0), RW(3));
wr16(c, (RW(18) + 48), (u16)RW(0));
wr16(c, (RW(18) + 50), (u16)RW(2));
wr16(c, (RW(18) + 52), (u16)RW(0));
SET64(31, 0x153b70); wr32(c, (RW(18) + 56), RW(0)); JP_F_002B5760(c);
SET32(4, RW(18) + 144);
SET64(31, 0x153b7c); wr32(c, (RW(18) + 128), RW(0)); JP_F_002B3FD0(c);
SET64(31, 0x153b84); SET32(4, RW(18) + 240); JP_F_002B4380(c);
L_00153B88:;
SET64(3, (s32)rd32(c, (RW(17) + 272)));
SET32(19, RW(19) << 2);
SET32(2, RW(0) + 1);
wr8(c, (RW(29) + 288), (u8)RW(0));
SET32(3, RW(3) + RW(19));
wr32(c, (RW(3) + 0), RW(18));
SET64(3, (s32)rd32(c, (RW(17) + 272)));
SET32(3, RW(3) + RW(19));
SET64(18, (s32)rd32(c, (RW(3) + 0)));
wr16(c, (RW(18) + 52), (u16)RW(2));
SET64(2, rd16(c, (RW(18) + 52)));
wr32(c, (RW(29) + 304), RW(2));
SET32(3, RW(2) << 3);
SET32(2, RW(3) - RW(2));
SET32(2, RW(2) << 2);
SET64(31, 0x153bcc); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(23, RD(2) + RD(0)); if (t) goto L_00153C00; }
SET64(8, (s32)rd32(c, (RW(29) + 304)));
SET32(2, RW(0) + 1);
SET64(5, (s64)(s32)0x140000);
SET64(6, (s64)(s32)0x140000);
wr8(c, (RW(29) + 288), (u8)RW(2));
SET64(4, RD(23) + RD(0));
SET32(5, RW(5) + 6768);
SET32(6, RW(6) + 6864);
SET64(31, 0x153bfc); SET32(7, RW(0) + 28); JP_F_00102580(c);
SET64(23, RD(2) + RD(0));
L_00153C00:;
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 384), RW(3));
SET64(2, RD(0) | 0xffff);
wr32(c, (RW(18) + 56), RW(23));
wr16(c, (RW(18) + 50), (u16)RW(2));
wr32(c, (RW(29) + 388), RW(3));
SET32(2, RW(18) + 64);
wr32(c, (RW(29) + 392), RW(3));
wr32(c, (RW(29) + 396), RW(3));
rd128(c, (RW(29) + 384) & ~15u, &c->r[3]);
wr16(c, (RW(18) + 48), (u16)RW(0));
wr128(c, (RW(18) + 64) & ~15u, &c->r[3]);
wr32(c, (RW(18) + 80), RW(0));
{ int t = RD(22) == RD(0); wr32(c, (RW(18) + 32), RW(2)); if (t) goto L_00153CE0; }
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET64(6, RD(0) + RD(0));
SET32(2, RW(2) + RW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(5, rd16(c, (RW(2) + 52)));
{ int t = RSD(5) <= 0; wr32(c, (RW(29) + 272), RW(2)); if (t) goto L_00153D78; }
SET64(4, (s32)rd32(c, (RW(2) + 56)));
L_00153C60:;
SET64(3, RD(6) & 0xffff);
SET32(2, RW(3) << 3);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 2);
SET32(18, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 20)));
{ int t = RD(2) != RD(0);  if (t) goto L_00153CC0; }
SET64(4, RD(18) + RD(0));
SET64(5, RD(21) + RD(0));
SET64(31, 0x153c90); SET64(6, RD(0) + RD(0)); JP_F_00141990(c);
SET64(7, (s32)rd32(c, (RW(29) + 380)));
SET64(4, RD(18) + RD(0));
SET64(8, (s32)rd32(c, (RW(29) + 376)));
SET64(5, RD(21) + RD(0));
SET64(31, 0x153ca8); SET32(6, RW(0) + 1); JP_F_001418D0(c);
SET64(5, (s32)rd32(c, (RW(29) + 272)));
SET64(31, 0x153cb4); SET64(4, RD(18) + RD(0)); JP_F_00141890(c);
 goto L_00153D78;
L_00153CC0:;
SET32(2, RW(6) + 1);
SET64(6, RD(2) & 0xffff);
SET64(2, RSD(6) < RSD(5));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00153C60; } }
 goto L_00153D78;
L_00153CE0:;
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET64(6, RD(0) + RD(0));
SET32(2, RW(2) + RW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(5, rd16(c, (RW(2) + 52)));
{ int t = RSD(5) <= 0; wr32(c, (RW(29) + 256), RW(2)); if (t) goto L_00153D78; }
SET64(4, (s32)rd32(c, (RW(2) + 56)));
L_00153D00:;
SET64(3, RD(6) & 0xffff);
SET32(2, RW(3) << 3);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 2);
SET32(18, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 20)));
{ int t = RD(2) != RD(0);  if (t) goto L_00153D60; }
SET64(4, RD(18) + RD(0));
SET64(5, RD(21) + RD(0));
SET64(31, 0x153d30); SET64(6, RD(0) + RD(0)); JP_F_00141990(c);
SET64(7, (s32)rd32(c, (RW(29) + 380)));
SET64(4, RD(18) + RD(0));
SET64(8, (s32)rd32(c, (RW(29) + 376)));
SET64(5, RD(21) + RD(0));
SET64(31, 0x153d48); SET64(6, RD(30) + RD(0)); JP_F_001418D0(c);
SET64(5, (s32)rd32(c, (RW(29) + 256)));
SET64(31, 0x153d54); SET64(4, RD(18) + RD(0)); JP_F_00141890(c);
 goto L_00153D78;
L_00153D60:;
SET32(2, RW(6) + 1);
SET64(6, RD(2) & 0xffff);
SET64(2, RSD(6) < RSD(5));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00153D00; } }
L_00153D78:;
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(16) == RD(0); wr16(c, (RW(2) + 50), (u16)RW(20)); if (t) goto L_00153E28; }
{ int t = RD(22) == RD(0);  if (t) goto L_00153E28; }
SET64(7, (s32)rd32(c, (RW(17) + 272)));
SET64(2, (s64)(s32)0x1000000);
SET64(3, RD(2) | 0x101);
SET64(5, rd16(c, (RW(17) + 264)));
SET64(4, (s64)(s32)0x110000);
SET32(2, RW(7) + RW(19));
SET64(6, (s32)rd32(c, (RW(2) + 0)));
SET32(2, RW(5) << 2);
SET64(20, (s32)rd32(c, (RW(6) + 56)));
SET32(2, RW(7) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -4)));
SET64(5, (s32)rd32(c, (RW(20) + 0)));
SET64(6, (s32)rd32(c, (RW(2) + 56)));
SET64(2, (s32)rd32(c, (RW(29) + 240)));
SET32(18, RW(6) + RW(2));
SET64(2, RD(5) & RD(4));
SET64(2, RD(2) | RD(3));
SET64(4, RD(18) + RD(0));
wr32(c, (RW(29) + 224), RW(2));
SET64(31, 0x153de8); SET64(5, RD(2) + RD(0)); JP_F_00141980(c);
SET64(7, (s32)rd32(c, (RW(29) + 224)));
SET64(5, RD(20) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 380)));
SET64(31, 0x153dfc); SET64(4, RD(18) + RD(0)); JP_F_00140410(c);
SET64(3, rd16(c, (RW(17) + 264)));
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(5, (s32)rd32(c, (RW(2) + -4)));
SET64(31, 0x153e18); SET64(4, RD(18) + RD(0)); JP_F_00141890(c);
SET64(2, (s32)rd32(c, (RW(29) + 240)));
SET32(2, RW(2) + 28);
wr32(c, (RW(29) + 240), RW(2));
L_00153E28:;
{ int t = RD(22) == RD(0);  if (t) goto L_00153E50; }
{ int t = RD(30) != RD(0);  if (t) goto L_00153E50; }
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(3, RW(0) + 32);
SET32(2, RW(2) + RW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr16(c, (RW(2) + 48), (u16)RW(3)); goto L_00153F20;
L_00153E50:;
SET64(2, rd16(c, (RW(21) + 8)));
SET32(3, RW(0) + 4);
SET64(2, RD(2) & 0x7);
{ int t = RD(2) == RD(3);  if (t) goto L_00153EC8; }
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3);  if (t) goto L_00153EB0; }
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_00153E98; }
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr16(c, (RW(2) + 48), (u16)RW(0)); goto L_00153ED8;
L_00153E98:;
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr16(c, (RW(2) + 48), (u16)RW(3)); goto L_00153ED8;
L_00153EB0:;
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr16(c, (RW(2) + 48), (u16)RW(3)); goto L_00153ED8;
L_00153EC8:;
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr16(c, (RW(2) + 48), (u16)RW(3));
L_00153ED8:;
{ int t = RD(22) == RD(0);  if (t) goto L_00153F20; }
{ int t = RD(30) == RD(0);  if (t) goto L_00153F20; }
SET64(2, RD(0) + (s64)1);
wr8(c, (RW(29) + 352), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(2) + 48)));
SET64(2, RD(2) & 0x27);
wr16(c, (RW(29) + 336), (u16)RW(2));
SET64(2, rd16(c, (RW(29) + 336)));
{ int t = RD(2) != RD(0);  if (t) goto L_00153F20; }
SET64(2, RD(0) + (s64)4);
wr16(c, (RW(29) + 336), (u16)RW(2));
L_00153F20:;
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
{ int t = RD(2) == RD(0);  if (t) goto L_00153F48; }
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(3) + 48)));
SET64(2, RD(2) | 0x10);
wr16(c, (RW(3) + 48), (u16)RW(2)); goto L_00153F60;
L_00153F48:;
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(3) + 48)));
SET64(2, RD(2) & 0xffef);
wr16(c, (RW(3) + 48), (u16)RW(2));
L_00153F60:;
{ int t = RD(30) != RD(0);  if (t) goto L_00153F70; }
{ int t = RD(22) == RD(0);  if (t) goto L_00153F90; }
L_00153F70:;
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(3) + 48)));
SET64(2, RD(2) & 0xffbf);
wr16(c, (RW(3) + 48), (u16)RW(2)); goto L_00153FA8;
L_00153F90:;
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(3) + 48)));
SET64(2, RD(2) | 0x40);
wr16(c, (RW(3) + 48), (u16)RW(2));
L_00153FA8:;
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
{ int t = RD(2) == RD(0);  if (t) goto L_00153FD0; }
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x153fc8); SET64(5, RD(0) + RD(0)); JP_F_002A55C0(c);
 goto L_00153FE8;
L_00153FD0:;
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x153fe4); SET64(5, RD(0) | 0x8002); JP_F_002A55C0(c);
L_00153FE8:;
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(19));
SET64(31, 0x153ff8); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_001548C0(c);
SET64(3, rd16(c, (RW(29) + 320)));
SET32(3, RW(3) + 1);
wr16(c, (RW(29) + 320), (u16)RW(3));
SET64(4, rd16(c, (RW(29) + 320)));
rd128(c, (RW(29) + 192) & ~15u, &c->r[3]);
SET64(3, RSD(4) < RSD(3));
if (RD(3) != RD(0)) { SET64(2, rd16(c, (RW(29) + 320))); { POLL(); goto L_00153AE0; } }
L_00154018:;
SET64(3, rd8(c, (RW(17) + 266)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 144))); goto L_001540B4; }
SET64(4, rd16(c, (RW(17) + 264)));
SET64(3, (s32)rd32(c, (RW(17) + 272)));
SET32(4, RW(4) + -1);
SET64(4, RD(4) & 0xffff);
SET32(5, RW(4) << 2);
SET32(3, RW(3) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_001540B0; }
SET64(2, rd16(c, (RW(3) + 48)));
SET64(2, RD(2) & 0xffd8);
wr16(c, (RW(3) + 48), (u16)RW(2));
SET64(2, rd8(c, (RW(29) + 352)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 272))); goto L_0015408C; }
SET64(2, rd16(c, (RW(29) + 336)));
SET64(3, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET64(3, RD(3) | 0x80);
SET64(4, RD(3) & 0xffff);
SET32(2, RW(2) + RW(5));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(3) + 48)));
SET64(2, RD(2) | RD(4));
wr16(c, (RW(3) + 48), (u16)RW(2)); goto L_001540A0;
L_0015408C:;
SET32(2, RW(2) + RW(5));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(3) + 48)));
SET64(2, RD(2) | 0x184);
wr16(c, (RW(3) + 48), (u16)RW(2));
L_001540A0:;
SET64(2, (s32)rd32(c, (RW(17) + 272)));
SET32(2, RW(2) + RW(5));
SET64(31, 0x1540b0); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_001548C0(c);
L_001540B0:;
SET64(31, rd64(c, (RW(29) + 144)));
L_001540B4:;
rd128(c, (RW(29) + 128) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[23]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 416); return;
}

void JP_F_001540E0(Ctx *c) { /* func_001540E0 */
ENTER(0x1540e0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(6) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 260), RW(18));
SET64(2, rd16(c, (RW(5) + 264)));
wr16(c, (RW(4) + 264), (u16)RW(2));
SET64(2, rd16(c, (RW(4) + 264)));
SET64(31, 0x154128); SET32(4, RW(2) << 2); JP_F_00100530(c);
wr32(c, (RW(19) + 272), RW(2));
SET64(3, rd16(c, (RW(19) + 264)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00154208; }
SET64(3, (s32)rd32(c, (RW(18) + 272)));
L_0015413C:;
SET64(4, RD(17) & 0xffff);
SET32(20, RW(4) << 2);
SET32(3, RW(3) + RW(20));
SET64(16, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(16) == RD(0);  if (t) goto L_001541E0; }
SET64(31, 0x15415c); SET32(4, RW(0) + 288); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_001541B0; }
SET64(4, RD(21) + RD(0));
SET64(31, 0x154170); SET64(5, RD(0) + RD(0)); JP_F_002A58A0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(0) | 0xffff);
SET32(3, RW(3) + -432);
SET32(4, RW(21) + 64);
wr32(c, (RW(21) + 0), RW(3));
wr16(c, (RW(21) + 48), (u16)RW(0));
wr16(c, (RW(21) + 50), (u16)RW(2));
wr16(c, (RW(21) + 52), (u16)RW(0));
SET64(31, 0x154198); wr32(c, (RW(21) + 56), RW(0)); JP_F_002B5760(c);
SET32(4, RW(21) + 144);
SET64(31, 0x1541a4); wr32(c, (RW(21) + 128), RW(0)); JP_F_002B3FD0(c);
SET64(31, 0x1541ac); SET32(4, RW(21) + 240); JP_F_002B4380(c);
L_001541B0:;
SET64(2, (s32)rd32(c, (RW(19) + 272)));
SET64(5, RD(16) + RD(0));
SET32(2, RW(2) + RW(20));
wr32(c, (RW(2) + 0), RW(21));
SET64(2, (s32)rd32(c, (RW(19) + 272)));
SET32(2, RW(2) + RW(20));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1541d4); SET64(6, RD(22) + RD(0)); JP_F_00154D60(c);
 goto L_001541F0;
L_001541E0:;
SET64(3, (s32)rd32(c, (RW(19) + 272)));
SET32(3, RW(3) + RW(20));
wr32(c, (RW(3) + 0), RW(0));
L_001541F0:;
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(19) + 264)));
SET64(3, RSD(17) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 272))); { POLL(); goto L_0015413C; } }
L_00154208:;
SET64(3, rd8(c, (RW(18) + 266)));
wr8(c, (RW(19) + 266), (u8)RW(3));
c->f[0].u = rd32(c, (RW(18) + 268));
wr32(c, (RW(19) + 268), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 112)));
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_00154240(Ctx *c) { /* func_00154240 */
ENTER(0x154240);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x154268); SET64(4, (s32)rd32(c, (RW(4) + 256))); JP_F_00141B90(c);
SET64(2, (s32)rd32(c, (RW(20) + 272)));
if (RD(2) == RD(0)) { wr32(c, (RW(20) + 260), RW(0)); goto L_00154368; }
SET64(2, rd16(c, (RW(20) + 264)));
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00154358; }
SET64(2, (s32)rd32(c, (RW(20) + 272)));
L_00154284:;
SET64(3, RD(19) & 0xffff);
SET32(3, RW(3) << 2);
SET32(16, RW(2) + RW(3));
SET64(18, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(18) == RD(0);  if (t) goto L_00154318; }
SET64(2, (s32)rd32(c, (RW(18) + 56)));
{ int t = RD(2) == RD(0);  if (t) goto L_00154308; }
SET64(2, rd16(c, (RW(18) + 52)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001542F0; }
L_001542B8:;
SET64(4, RD(17) & 0xffff);
SET32(3, RW(4) << 3);
SET64(2, (s32)rd32(c, (RW(18) + 56)));
SET32(3, RW(3) - RW(4));
SET64(5, RD(18) + RD(0));
SET32(3, RW(3) << 2);
SET64(31, 0x1542d8); SET32(4, RW(2) + RW(3)); JP_F_00141850(c);
SET64(2, rd16(c, (RW(18) + 52)));
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001542B8; } }
L_001542F0:;
SET64(4, (s32)rd32(c, (RW(18) + 56)));
SET64(5, (s64)(s32)0x140000);
SET64(31, 0x154300); SET32(5, RW(5) + 6864); JP_F_001022C0(c);
wr32(c, (RW(18) + 56), RW(0));
L_00154308:;
wr16(c, (RW(18) + 52), (u16)RW(0));
SET64(2, RD(0) | 0xffff);
wr16(c, (RW(18) + 50), (u16)RW(2));
wr16(c, (RW(18) + 48), (u16)RW(0));
L_00154318:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_00154338; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x154334); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00154338:;
wr32(c, (RW(16) + 0), RW(0));
SET64(2, rd16(c, (RW(20) + 264)));
SET32(3, RW(19) + 1);
SET64(19, RD(3) & 0xffff);
SET64(2, RSD(19) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(20) + 272))); { POLL(); goto L_00154284; } }
L_00154358:;
SET64(31, 0x154360); SET64(4, (s32)rd32(c, (RW(20) + 272))); JP_F_00100430(c);
wr32(c, (RW(20) + 272), RW(0));
wr32(c, (RW(20) + 260), RW(0));
L_00154368:;
SET64(2, (s64)(s32)0x3f800000);
wr16(c, (RW(20) + 264), (u16)RW(0));
wr8(c, (RW(20) + 266), (u8)RW(0));
wr32(c, (RW(20) + 268), RW(2));
SET64(31, 0x154380); SET64(4, (s32)rd32(c, (RW(20) + 256))); JP_F_00141BF0(c);
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_001543A0(Ctx *c) { /* func_001543A0 */
ENTER(0x1543a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00154410; }
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(17) + 240);
SET32(2, RW(2) + -432);
SET32(5, RW(0) + -1);
SET64(31, 0x1543d4); wr32(c, (RW(17) + 0), RW(2)); JP_F_002B4320(c);
SET32(4, RW(17) + 144);
SET64(31, 0x1543e0); SET32(5, RW(0) + -1); JP_F_002B3F70(c);
SET32(4, RW(17) + 64);
SET64(31, 0x1543ec); SET32(5, RW(0) + -1); JP_F_002B5710(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1543f8); SET64(5, RD(0) + RD(0)); JP_F_002A5820(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00154414; }
SET64(31, 0x154410); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00154410:;
SET64(2, RD(17) + RD(0));
L_00154414:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00154430(Ctx *c) { /* func_00154430 */
ENTER(0x154430);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00154460; }
SET32(4, RW(16) + 280);
SET64(31, 0x154460); wr32(c, (RW(16) + 256), RW(4)); JP_F_00141C80(c);
L_00154460:;
SET32(4, RW(16) + 4);
SET32(5, RW(0) + 16);
wr32(c, (RW(16) + 0), RW(4));
SET64(31, 0x154474); SET64(6, RD(0) + RD(0)); JP_F_002AE1F0(c);
SET64(31, 0x15447c); SET32(4, RW(16) + 32); JP_F_002A88F0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 240), RW(16));
SET32(2, RW(2) + -544);
wr32(c, (RW(16) + 276), RW(2));
SET32(6, RW(6) + -472);
SET64(5, (s32)rd32(c, (RW(16) + 256)));
SET32(4, RW(16) + 280);
SET64(3, (s64)(s32)0x3f800000);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(5) + 16), RW(6));
SET64(5, (s32)rd32(c, (RW(16) + 256)));
SET32(4, RW(4) - RW(5));
wr32(c, (RW(5) + 20), RW(4));
wr32(c, (RW(16) + 260), RW(0));
wr16(c, (RW(16) + 264), (u16)RW(0));
wr8(c, (RW(16) + 266), (u8)RW(0));
wr32(c, (RW(16) + 268), RW(3));
wr32(c, (RW(16) + 272), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001544E0(Ctx *c) { /* func_001544E0 */
ENTER(0x1544e0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 272)));
{ int t = RD(3) == RD(0); SET64(19, RD(5) + RD(0)); if (t) goto L_001545A8; }
SET64(3, rd16(c, (RW(20) + 264)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001545A8; }
SET64(3, (s32)rd32(c, (RW(20) + 272)));
L_0015451C:;
SET64(4, RD(18) & 0xffff);
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
SET64(16, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(16) == RD(0);  if (t) goto L_00154590; }
SET64(3, (s32)rd32(c, (RW(16) + 56)));
{ int t = RD(3) == RD(0);  if (t) goto L_00154590; }
SET64(3, rd16(c, (RW(16) + 52)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00154590; }
L_00154550:;
SET64(4, RD(17) & 0xffff);
SET32(3, RW(4) << 3);
SET64(2, (s32)rd32(c, (RW(16) + 56)));
SET32(3, RW(3) - RW(4));
SET64(5, RD(0) + RD(0));
SET32(3, RW(3) << 2);
SET64(6, RD(19) + RD(0));
SET64(31, 0x154574); SET32(4, RW(2) + RW(3)); JP_F_001417E0(c);
SET64(3, rd16(c, (RW(16) + 52)));
SET32(4, RW(17) + 1);
SET64(17, RD(4) & 0xffff);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00154550; } }
L_00154590:;
SET32(3, RW(18) + 1);
SET64(18, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(20) + 264)));
SET64(3, RSD(18) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(20) + 272))); { POLL(); goto L_0015451C; } }
L_001545A8:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_001545D0(Ctx *c) { /* func_001545D0 */
ENTER(0x1545d0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 272)));
{ int t = RD(3) == RD(0); SET64(19, RD(5) + RD(0)); if (t) goto L_00154698; }
SET64(3, rd16(c, (RW(20) + 264)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00154698; }
SET64(3, (s32)rd32(c, (RW(20) + 272)));
L_0015460C:;
SET64(4, RD(18) & 0xffff);
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
SET64(16, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(16) == RD(0);  if (t) goto L_00154680; }
SET64(3, (s32)rd32(c, (RW(16) + 56)));
{ int t = RD(3) == RD(0);  if (t) goto L_00154680; }
SET64(3, rd16(c, (RW(16) + 52)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00154680; }
L_00154640:;
SET64(4, RD(17) & 0xffff);
SET32(3, RW(4) << 3);
SET64(2, (s32)rd32(c, (RW(16) + 56)));
SET32(3, RW(3) - RW(4));
SET32(5, RW(0) + 1);
SET32(3, RW(3) << 2);
SET64(6, RD(19) + RD(0));
SET64(31, 0x154664); SET32(4, RW(2) + RW(3)); JP_F_001417E0(c);
SET64(3, rd16(c, (RW(16) + 52)));
SET32(4, RW(17) + 1);
SET64(17, RD(4) & 0xffff);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00154640; } }
L_00154680:;
SET32(3, RW(18) + 1);
SET64(18, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(20) + 264)));
SET64(3, RSD(18) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(20) + 272))); { POLL(); goto L_0015460C; } }
L_00154698:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_001546C0(Ctx *c) { /* func_001546C0 */
ENTER(0x1546c0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 56)));
{ int t = RD(3) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_00154730; }
SET64(3, rd16(c, (RW(18) + 52)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00154730; }
SET64(4, RD(16) & 0xffff);
L_001546F4:;
SET64(2, (s32)rd32(c, (RW(18) + 56)));
SET32(3, RW(4) << 3);
SET64(5, RD(0) + RD(0));
SET32(3, RW(3) - RW(4));
SET64(6, RD(17) + RD(0));
SET32(3, RW(3) << 2);
SET64(31, 0x154714); SET32(4, RW(2) + RW(3)); JP_F_001417E0(c);
SET64(3, rd16(c, (RW(18) + 52)));
SET32(4, RW(16) + 1);
SET64(16, RD(4) & 0xffff);
SET64(3, RSD(16) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, RD(16) & 0xffff); { POLL(); goto L_001546F4; } }
L_00154730:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00154750(Ctx *c) { /* func_00154750 */
ENTER(0x154750);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 56)));
{ int t = RD(3) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_001547C0; }
SET64(3, rd16(c, (RW(18) + 52)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_001547C0; }
SET64(4, RD(16) & 0xffff);
L_00154784:;
SET64(2, (s32)rd32(c, (RW(18) + 56)));
SET32(3, RW(4) << 3);
SET32(5, RW(0) + 1);
SET32(3, RW(3) - RW(4));
SET64(6, RD(17) + RD(0));
SET32(3, RW(3) << 2);
SET64(31, 0x1547a4); SET32(4, RW(2) + RW(3)); JP_F_001417E0(c);
SET64(3, rd16(c, (RW(18) + 52)));
SET32(4, RW(16) + 1);
SET64(16, RD(4) & 0xffff);
SET64(3, RSD(16) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, RD(16) & 0xffff); { POLL(); goto L_00154784; } }
L_001547C0:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001547E0(Ctx *c) { /* func_001547E0 */
ENTER(0x1547e0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(8) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(9) + RD(0));
SET64(6, rd16(c, (RW(4) + 52)));
{ int t = RSD(6) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00154890; }
SET64(5, (s32)rd32(c, (RW(21) + 56)));
SET64(4, RD(8) & 0xffff);
L_00154828:;
SET32(3, RW(4) << 3);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 2);
SET32(16, RW(5) + RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 20)));
if (RD(3) != RD(0)) { SET32(3, RW(8) + 1); goto L_00154880; }
SET64(6, RD(7) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x154854); SET64(5, RD(20) + RD(0)); JP_F_00141990(c);
SET64(5, RD(20) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(18) + RD(0));
SET64(8, RD(17) + RD(0));
SET64(31, 0x15486c); SET64(4, RD(16) + RD(0)); JP_F_001418D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x154878); SET64(5, RD(21) + RD(0)); JP_F_00141890(c);
SET64(31, rd64(c, (RW(29) + 96))); goto L_00154894;
L_00154880:;
SET64(8, RD(3) & 0xffff);
SET64(3, RSD(8) < RSD(6));
if (RD(3) != RD(0)) { SET64(4, RD(8) & 0xffff); { POLL(); goto L_00154828; } }
L_00154890:;
SET64(31, rd64(c, (RW(29) + 96)));
L_00154894:;
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_001548C0(Ctx *c) { /* func_001548C0 */
ENTER(0x1548c0);
SET32(29, RW(29) + -48);
SET32(2, RW(0) + 4);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 48)));
SET64(3, RD(3) & 0x27);
{ int t = RD(3) == RD(2); SET64(16, RD(4) + RD(0)); if (t) goto L_00154BB0; }
SET32(6, RW(0) + 2);
if (RD(3) == RD(6)) { SET64(5, RD(6) + RD(0)); goto L_00154B04; }
SET32(8, RW(0) + 1);
if (RD(3) == RD(8)) { SET32(4, RW(16) + 144); goto L_00154A60; }
SET32(2, RW(0) + 32);
if (RD(3) == RD(2)) { SET32(4, RW(16) + 144); goto L_00154910; }
SET32(4, RW(16) + 144); goto L_001549B8;
L_00154910:;
SET64(5, RD(6) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, 0x154924); SET64(9, RD(0) + RD(0)); JP_F_002B3EF0(c);
SET32(4, RW(16) + 240);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x15493c); SET64(8, RD(0) + RD(0)); JP_F_002B42A0(c);
SET32(4, RW(16) + 240);
SET64(5, RD(0) + RD(0));
SET64(31, 0x15494c); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(4, RW(16) + 240);
SET32(5, RW(0) + 1);
SET64(31, 0x15495c); SET32(6, RW(0) + 2); JP_F_002B4230(c);
SET64(2, (s32)rd32(c, (RW(16) + 56)));
{ int t = RD(2) == RD(0);  if (t) goto L_00154C58; }
SET64(2, rd16(c, (RW(16) + 52)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00154C58; }
SET64(4, RD(17) & 0xffff);
L_00154978:;
SET64(2, (s32)rd32(c, (RW(16) + 56)));
SET32(3, RW(4) << 3);
SET32(5, RW(0) + 1);
SET32(3, RW(3) - RW(4));
SET32(6, RW(0) + 64);
SET32(3, RW(3) << 2);
SET64(31, 0x154998); SET32(4, RW(2) + RW(3)); JP_F_001417E0(c);
SET64(2, rd16(c, (RW(16) + 52)));
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(2, RSD(17) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, RD(17) & 0xffff); { POLL(); goto L_00154978; } }
 goto L_00154C58;
L_001549B8:;
SET64(5, RD(0) + RD(0));
SET64(6, RD(8) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x1549cc); SET64(9, RD(0) + RD(0)); JP_F_002B3EF0(c);
SET32(4, RW(16) + 240);
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 7);
SET64(7, RD(0) + RD(0));
SET64(31, 0x1549e4); SET64(8, RD(0) + RD(0)); JP_F_002B42A0(c);
SET32(4, RW(16) + 240);
SET64(5, RD(0) + RD(0));
SET64(31, 0x1549f4); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(4, RW(16) + 240);
SET32(5, RW(0) + 1);
SET64(31, 0x154a04); SET32(6, RW(0) + 2); JP_F_002B4230(c);
SET64(2, (s32)rd32(c, (RW(16) + 56)));
{ int t = RD(2) == RD(0);  if (t) goto L_00154C58; }
SET64(2, rd16(c, (RW(16) + 52)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00154C58; }
SET64(4, RD(17) & 0xffff);
L_00154A20:;
SET64(2, (s32)rd32(c, (RW(16) + 56)));
SET32(3, RW(4) << 3);
SET64(5, RD(0) + RD(0));
SET32(3, RW(3) - RW(4));
SET32(6, RW(0) + 64);
SET32(3, RW(3) << 2);
SET64(31, 0x154a40); SET32(4, RW(2) + RW(3)); JP_F_001417E0(c);
SET64(2, rd16(c, (RW(16) + 52)));
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(2, RSD(17) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, RD(17) & 0xffff); { POLL(); goto L_00154A20; } }
 goto L_00154C58;
L_00154A60:;
SET64(5, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x154a70); SET64(9, RD(0) + RD(0)); JP_F_002B3EF0(c);
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 240);
SET64(6, RD(0) + RD(0));
SET32(7, RW(0) + 127);
SET64(31, 0x154a88); SET64(8, RD(5) + RD(0)); JP_F_002B42A0(c);
SET32(4, RW(16) + 240);
SET64(5, RD(0) + RD(0));
SET64(31, 0x154a98); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(4, RW(16) + 240);
SET32(5, RW(0) + 1);
SET64(31, 0x154aa8); SET32(6, RW(0) + 2); JP_F_002B4230(c);
SET64(2, (s32)rd32(c, (RW(16) + 56)));
{ int t = RD(2) == RD(0);  if (t) goto L_00154C58; }
SET64(2, rd16(c, (RW(16) + 52)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00154C58; }
SET64(4, RD(17) & 0xffff);
L_00154AC4:;
SET64(2, (s32)rd32(c, (RW(16) + 56)));
SET32(3, RW(4) << 3);
SET32(5, RW(0) + 1);
SET32(3, RW(3) - RW(4));
SET32(6, RW(0) + 64);
SET32(3, RW(3) << 2);
SET64(31, 0x154ae4); SET32(4, RW(2) + RW(3)); JP_F_001417E0(c);
SET64(2, rd16(c, (RW(16) + 52)));
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(2, RSD(17) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, RD(17) & 0xffff); { POLL(); goto L_00154AC4; } }
 goto L_00154C58;
L_00154B04:;
SET32(4, RW(16) + 144);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x154b1c); SET64(9, RD(0) + RD(0)); JP_F_002B3EF0(c);
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 240);
SET64(6, RD(0) + RD(0));
SET32(7, RW(0) + 127);
SET64(31, 0x154b34); SET64(8, RD(5) + RD(0)); JP_F_002B42A0(c);
SET32(4, RW(16) + 240);
SET64(5, RD(0) + RD(0));
SET64(31, 0x154b44); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(4, RW(16) + 240);
SET32(5, RW(0) + 1);
SET64(31, 0x154b54); SET32(6, RW(0) + 2); JP_F_002B4230(c);
SET64(2, (s32)rd32(c, (RW(16) + 56)));
{ int t = RD(2) == RD(0);  if (t) goto L_00154C58; }
SET64(2, rd16(c, (RW(16) + 52)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00154C58; }
SET64(4, RD(17) & 0xffff);
L_00154B70:;
SET64(2, (s32)rd32(c, (RW(16) + 56)));
SET32(3, RW(4) << 3);
SET32(5, RW(0) + 1);
SET32(3, RW(3) - RW(4));
SET32(6, RW(0) + 64);
SET32(3, RW(3) << 2);
SET64(31, 0x154b90); SET32(4, RW(2) + RW(3)); JP_F_001417E0(c);
SET64(2, rd16(c, (RW(16) + 52)));
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(2, RSD(17) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, RD(17) & 0xffff); { POLL(); goto L_00154B70; } }
 goto L_00154C58;
L_00154BB0:;
SET32(6, RW(0) + 1);
SET32(4, RW(16) + 144);
SET64(5, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(31, 0x154bcc); SET64(9, RD(0) + RD(0)); JP_F_002B3EF0(c);
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 240);
SET32(6, RW(0) + 5);
SET32(7, RW(0) + 120);
SET64(31, 0x154be4); SET64(8, RD(5) + RD(0)); JP_F_002B42A0(c);
SET32(4, RW(16) + 240);
SET64(5, RD(0) + RD(0));
SET64(31, 0x154bf4); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(4, RW(16) + 240);
SET32(5, RW(0) + 1);
SET64(31, 0x154c04); SET32(6, RW(0) + 2); JP_F_002B4230(c);
SET64(2, (s32)rd32(c, (RW(16) + 56)));
{ int t = RD(2) == RD(0);  if (t) goto L_00154C58; }
SET64(2, rd16(c, (RW(16) + 52)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00154C58; }
SET64(4, RD(17) & 0xffff);
L_00154C20:;
SET64(2, (s32)rd32(c, (RW(16) + 56)));
SET32(3, RW(4) << 3);
SET32(5, RW(0) + 1);
SET32(3, RW(3) - RW(4));
SET32(6, RW(0) + 64);
SET32(3, RW(3) << 2);
SET64(31, 0x154c40); SET32(4, RW(2) + RW(3)); JP_F_001417E0(c);
SET64(2, rd16(c, (RW(16) + 52)));
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(2, RSD(17) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, RD(17) & 0xffff); { POLL(); goto L_00154C20; } }
L_00154C58:;
SET64(2, rd16(c, (RW(16) + 48)));
SET64(2, RD(2) & 0x100);
if (RD(2) == RD(0)) { SET64(2, rd16(c, (RW(16) + 48))); goto L_00154C88; }
SET32(6, RW(0) + 1);
SET32(4, RW(16) + 144);
SET64(5, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(7, RD(6) + RD(0));
SET64(31, 0x154c84); SET64(8, RD(6) + RD(0)); JP_F_002B3EF0(c);
SET64(2, rd16(c, (RW(16) + 48)));
L_00154C88:;
SET64(2, RD(2) & 0x80);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 56))); goto L_00154CD0; }
SET32(4, RW(16) + 240);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 5);
SET64(7, RD(0) + RD(0));
SET64(31, 0x154cac); SET32(8, RW(0) + 1); JP_F_002B42A0(c);
SET32(4, RW(16) + 240);
SET64(5, RD(0) + RD(0));
SET64(31, 0x154cbc); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(4, RW(16) + 240);
SET32(5, RW(0) + 1);
SET64(31, 0x154ccc); SET32(6, RW(0) + 2); JP_F_002B4230(c);
SET64(2, (s32)rd32(c, (RW(16) + 56)));
L_00154CD0:;
{ int t = RD(2) == RD(0);  if (t) goto L_00154D20; }
SET64(2, rd16(c, (RW(16) + 52)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00154D20; }
SET64(4, RD(17) & 0xffff);
L_00154CE8:;
SET64(2, (s32)rd32(c, (RW(16) + 56)));
SET32(3, RW(4) << 3);
SET64(5, RD(0) + RD(0));
SET32(3, RW(3) - RW(4));
SET32(6, RW(0) + 128);
SET32(3, RW(3) << 2);
SET64(31, 0x154d08); SET32(4, RW(2) + RW(3)); JP_F_001417E0(c);
SET64(2, rd16(c, (RW(16) + 52)));
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(2, RSD(17) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, RD(17) & 0xffff); { POLL(); goto L_00154CE8; } }
L_00154D20:;
SET64(25, (s32)rd32(c, (RW(16) + 152)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x154d30); SET32(4, RW(16) + 144); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 248)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x154d40); SET32(4, RW(16) + 240); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00154D60(Ctx *c) { /* func_00154D60 */
ENTER(0x154d60);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(2, rd16(c, (RW(5) + 52)));
SET64(16, RD(6) + RD(0));
wr16(c, (RW(4) + 52), (u16)RW(2));
SET64(20, rd16(c, (RW(4) + 52)));
SET32(2, RW(20) << 3);
SET32(2, RW(2) - RW(20));
SET32(2, RW(2) << 2);
SET64(31, 0x154db0); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_00154DE0; }
SET64(5, (s64)(s32)0x140000);
SET64(6, (s64)(s32)0x140000);
SET64(8, RD(20) + RD(0));
SET32(19, RW(0) + 1);
SET64(4, RD(21) + RD(0));
SET32(5, RW(5) + 6768);
SET32(6, RW(6) + 6864);
SET64(31, 0x154ddc); SET32(7, RW(0) + 28); JP_F_00102580(c);
SET64(21, RD(2) + RD(0));
L_00154DE0:;
wr32(c, (RW(18) + 56), RW(21));
SET64(2, rd16(c, (RW(17) + 50)));
wr16(c, (RW(18) + 50), (u16)RW(2));
wr16(c, (RW(18) + 48), (u16)RW(0));
SET64(2, rd16(c, (RW(17) + 48)));
wr16(c, (RW(18) + 48), (u16)RW(2));
rd128(c, (RW(17) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 64) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 64) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(17) + 80)));
wr32(c, (RW(18) + 80), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 96)));
wr32(c, (RW(18) + 96), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 100)));
wr32(c, (RW(18) + 100), RW(2));
c->f[1].u = rd32(c, (RW(17) + 104));
c->f[0].u = rd32(c, (RW(17) + 108));
wr32(c, (RW(18) + 104), c->f[1].u);
wr32(c, (RW(18) + 108), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 128)));
{ int t = RD(2) == RD(0); wr32(c, (RW(18) + 128), RW(2)); if (t) goto L_00154E44; }
SET64(2, (s32)rd32(c, (RW(2) + 16)));
wr32(c, (RW(18) + 96), RW(2));
L_00154E44:;
SET32(2, RW(18) + 64);
wr32(c, (RW(18) + 32), RW(2));
SET64(2, rd16(c, (RW(18) + 52)));
{ int t = RSD(2) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00154EA8; }
SET64(5, RD(20) & 0xffff);
L_00154E5C:;
SET64(3, (s32)rd32(c, (RW(18) + 56)));
SET32(4, RW(5) << 3);
SET64(2, (s32)rd32(c, (RW(17) + 56)));
SET32(4, RW(4) - RW(5));
SET64(6, RD(16) + RD(0));
SET32(19, RW(4) << 2);
SET32(4, RW(3) + RW(19));
SET64(31, 0x154e80); SET32(5, RW(2) + RW(19)); JP_F_00140740(c);
SET64(2, (s32)rd32(c, (RW(18) + 56)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x154e90); SET32(4, RW(2) + RW(19)); JP_F_00141890(c);
SET64(2, rd16(c, (RW(18) + 52)));
SET32(3, RW(20) + 1);
SET64(20, RD(3) & 0xffff);
SET64(2, RSD(20) < RSD(2));
if (RD(2) != RD(0)) { SET64(5, RD(20) & 0xffff); { POLL(); goto L_00154E5C; } }
L_00154EA8:;
SET32(4, RW(18) + 240);
SET64(31, 0x154eb4); SET32(5, RW(17) + 240); JP_F_002B42F0(c);
SET64(25, (s32)rd32(c, (RW(18) + 248)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x154ec4); SET32(4, RW(18) + 240); rt_call(c, t); }
SET32(5, RW(17) + 144);
SET64(31, 0x154ed0); SET32(4, RW(18) + 144); JP_F_002B3F40(c);
SET64(25, (s32)rd32(c, (RW(18) + 152)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x154ee0); SET32(4, RW(18) + 144); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_00154F10(Ctx *c) { /* func_00154F10 */
ENTER(0x154f10);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
wr16(c, (RW(4) + 52), (u16)RW(5));
SET64(16, RD(4) + RD(0));
SET64(18, rd16(c, (RW(4) + 52)));
SET32(2, RW(18) << 3);
SET32(2, RW(2) - RW(18));
SET32(2, RW(2) << 2);
SET64(31, 0x154f4c); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00154F7C; }
SET64(5, (s64)(s32)0x140000);
SET64(6, (s64)(s32)0x140000);
SET64(8, RD(18) + RD(0));
SET32(17, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + 6768);
SET32(6, RW(6) + 6864);
SET64(31, 0x154f78); SET32(7, RW(0) + 28); JP_F_00102580(c);
SET64(19, RD(2) + RD(0));
L_00154F7C:;
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 56), RW(19));
wr32(c, (RW(29) + 80), RW(4));
SET64(3, RD(0) | 0xffff);
wr32(c, (RW(29) + 84), RW(4));
wr16(c, (RW(16) + 50), (u16)RW(3));
wr32(c, (RW(29) + 88), RW(4));
SET32(3, RW(16) + 64);
wr32(c, (RW(29) + 92), RW(4));
rd128(c, (RW(29) + 80) & ~15u, &c->r[4]);
wr16(c, (RW(16) + 48), (u16)RW(0));
wr128(c, (RW(16) + 64) & ~15u, &c->r[4]);
wr32(c, (RW(16) + 80), RW(0));
wr32(c, (RW(16) + 32), RW(3));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00154FD0(Ctx *c) { /* func_00154FD0 */
ENTER(0x154fd0);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x154fe8); SET64(16, RD(4) + RD(0)); JP_F_002A58A0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(0) | 0xffff);
SET32(3, RW(3) + -432);
SET32(4, RW(16) + 64);
wr32(c, (RW(16) + 0), RW(3));
wr16(c, (RW(16) + 48), (u16)RW(0));
wr16(c, (RW(16) + 50), (u16)RW(2));
wr16(c, (RW(16) + 52), (u16)RW(0));
SET64(31, 0x155010); wr32(c, (RW(16) + 56), RW(0)); JP_F_002B5760(c);
SET32(4, RW(16) + 144);
SET64(31, 0x15501c); wr32(c, (RW(16) + 128), RW(0)); JP_F_002B3FD0(c);
SET64(31, 0x155024); SET32(4, RW(16) + 240); JP_F_002B4380(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00155040(Ctx *c) { /* func_00155040 */
ENTER(0x155040);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -280);
SET32(4, RW(4) + RW(25)); { JP_F_00150A40(c); return; }
}

void JP_F_00155050(Ctx *c) { /* func_00155050 */
ENTER(0x155050);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -280);
SET32(4, RW(4) + RW(25)); { JP_F_00154240(c); return; }
}

void JP_F_00155060(Ctx *c) { /* func_00155060 */
ENTER(0x155060);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -280);
SET32(4, RW(4) + RW(25)); { JP_F_00150CE0(c); return; }
}

void JP_F_00155070(Ctx *c) { /* func_00155070 */
ENTER(0x155070);
SET32(29, RW(29) + -304);
wr64(c, (RW(29) + 96), RD(31));
c->f[2].u = RW(0);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[0].u = rd32(c, (RW(4) + 156));
c->fcc = F(2) == F(0);
{ int t = c->fcc; SET64(20, RD(4) + RD(0)); if (t) goto L_001551F0; }
c->f[0].u = rd32(c, (RW(20) + 160));
c->f[0].f = fpu(F(0) + F(12));
wr32(c, (RW(20) + 160), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 156));
c->f[0].u = rd32(c, (RW(20) + 160));
c->fcc = F(0) < F(1);
{ int t = c->fcc;  if (t) goto L_001550D0; }
wr32(c, (RW(20) + 156), c->f[2].u);
wr32(c, (RW(20) + 160), c->f[2].u); goto L_001551F0;
L_001550D0:;
c->f[20].f = fpu_div(F(0), F(1));
SET64(3, rd16(c, (RW(20) + 60)));
{ int t = RD(3) == RD(0); SET64(19, RD(0) + RD(0)); if (t) goto L_001551F0; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_001550F4:;
SET64(3, (s32)rd32(c, (RW(20) + 64)));
SET32(16, RW(3) + RW(18));
SET64(3, rd8(c, (RW(16) + 272)));
{ int t = RD(3) != RD(0);  if (t) goto L_001551D8; }
SET64(31, 0x155110); SET32(4, RW(29) + 240); JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[2]);
SET32(5, RW(29) + 240);
SET32(4, RW(29) + 128);
wr128(c, (RW(29) + 240) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 256) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 272) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[2]);
SET64(31, 0x15513c); wr128(c, (RW(29) + 288) & ~15u, &c->r[2]); JP_F_00148050(c);
SET64(2, (s32)rd32(c, (RW(20) + 152)));
SET32(4, RW(29) + 224);
SET32(6, RW(29) + 128);
c->f[12].u = c->f[20].u;
SET64(31, 0x155154); SET32(5, RW(2) + RW(17)); JP_F_001477E0(c);
SET64(2, (s64)(s32)0x3f800000);
rd128(c, (RW(29) + 288) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 124), RW(2));
c->f[2].u = RW(0);
SET64(2, (s32)rd32(c, (RW(20) + 152)));
SET32(4, RW(29) + 144);
wr32(c, (RW(29) + 112), RW(0));
SET32(5, RW(29) + 224);
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
SET32(2, RW(2) + RW(17));
wr128(c, (RW(29) + 112) & ~15u, &c->r[3]);
c->f[1].u = rd32(c, (RW(2) + 20));
c->f[0].u = rd32(c, (RW(29) + 116));
wr128(c, (RW(29) + 208) & ~15u, &c->r[3]);
c->facc = fpu(F(2) + F(1));
c->f[0].f = fpu(F(0) - F(1));
c->f[0].f = fpu(c->facc + F(20) * F(0));
SET64(31, 0x1551a4); wr32(c, (RW(29) + 212), c->f[0].u); JP_F_00147A60(c);
rd128(c, (RW(29) + 208) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 192) & ~15u, &c->r[3]);
SET64(3, (s32)rd32(c, (RW(20) + 64)));
SET32(4, RW(3) + RW(18));
wr128(c, (RW(4) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
SET64(31, 0x1551d8); wr128(c, (RW(4) + 48) & ~15u, &c->r[2]); JP_F_002A4D70(c);
L_001551D8:;
SET64(3, rd16(c, (RW(20) + 60)));
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 288);
SET64(3, RD(19) < RD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 48); if (t) { POLL(); goto L_001550F4; } }
L_001551F0:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 304); return;
}

void JP_F_00155220(Ctx *c) { /* func_00155220 */
ENTER(0x155220);
c->f[1].u = rd32(c, (RW(4) + 156));
c->f[0].u = RW(0);
c->fcc = F(0) == F(1);
{ int t = !c->fcc; SET32(2, RW(0) + 1); if (t) goto L_0015523C; }
SET64(2, RD(0) + RD(0));
L_0015523C:;
 return;
}

void JP_F_00155250(Ctx *c) { /* func_00155250 */
ENTER(0x155250);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x3f000000);
c->f[0].u = RW(2);
wr64(c, (RW(29) + 48), RD(31));
c->f[12].f = fpu(F(0) * F(12));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x15527c); SET32(4, RW(17) + 68); JP_F_001558E0(c);
wr8(c, (RW(17) + 148), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 68)));
{ int t = RD(2) == RD(0); SET32(3, RW(17) + 68); if (t) goto L_00155300; }
c->f[1].u = rd32(c, (RW(3) + 4));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->fcc = F(0) == F(1);
{ int t = !c->fcc;  if (t) goto L_00155300; }
SET64(16, RD(0) + (s64)1);
L_001552AC:;
SET64(3, RD(16) & 0xffff);
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(17));
SET64(5, (s32)rd32(c, (RW(2) + 68)));
{ int t = RD(5) == RD(0); SET32(18, RW(2) + 68); if (t) goto L_001552D8; }
SET64(31, 0x1552d4); SET64(4, (s32)rd32(c, (RW(17) + 28))); JP_F_002ADE40(c);
L_001552D8:;
wr32(c, (RW(18) + 0), RW(0));
wr32(c, (RW(18) + 4), RW(0));
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
wr32(c, (RW(18) + 8), RW(0));
wr32(c, (RW(18) + 12), RW(0));
SET64(2, RSD(16) < (s64)4);
{ int t = RD(2) != RD(0); wr8(c, (RW(18) + 16), (u8)RW(0)); if (t) { POLL(); goto L_001552AC; } }
L_00155300:;
SET64(2, rd8(c, (RW(17) + 148)));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00155320(Ctx *c) { /* func_00155320 */
ENTER(0x155320);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(6) + RD(0));
SET64(31, 0x15534c); c->f[20].u = c->f[12].u; JP_F_00155400(c);
wr32(c, (RW(17) + 28), RW(0));
SET64(31, 0x155358); SET64(4, (s32)rd32(c, (RW(18) + 28))); JP_F_002ADDD0(c);
wr32(c, (RW(18) + 68), RW(0));
SET32(4, RW(18) + 68);
wr32(c, (RW(18) + 72), RW(0));
c->f[12].u = RW(0);
wr32(c, (RW(18) + 76), RW(0));
SET64(5, RD(17) + RD(0));
wr32(c, (RW(18) + 80), RW(0));
wr8(c, (RW(18) + 84), (u8)RW(0));
wr32(c, (RW(18) + 88), RW(0));
wr32(c, (RW(18) + 92), RW(0));
wr32(c, (RW(18) + 96), RW(0));
wr32(c, (RW(18) + 100), RW(0));
wr8(c, (RW(18) + 104), (u8)RW(0));
wr32(c, (RW(18) + 108), RW(0));
wr32(c, (RW(18) + 112), RW(0));
wr32(c, (RW(18) + 116), RW(0));
wr32(c, (RW(18) + 120), RW(0));
wr8(c, (RW(18) + 124), (u8)RW(0));
wr32(c, (RW(18) + 128), RW(0));
wr32(c, (RW(18) + 132), RW(0));
wr32(c, (RW(18) + 136), RW(0));
wr32(c, (RW(18) + 140), RW(0));
SET64(31, 0x1553b8); wr8(c, (RW(18) + 144), (u8)RW(0)); JP_F_00155C10(c);
SET64(4, (s32)rd32(c, (RW(18) + 28)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1553c8); SET64(5, RD(17) + RD(0)); JP_F_002ADFE0(c);
wr8(c, (RW(17) + 42), (u8)RW(16));
wr8(c, (RW(18) + 148), (u8)RW(0));
wr32(c, (RW(18) + 156), c->f[20].u);
wr32(c, (RW(18) + 160), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00155400(Ctx *c) { /* func_00155400 */
ENTER(0x155400);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 60)));
{ int t = RD(3) == RD(0); SET64(20, RD(0) + RD(0)); if (t) goto L_001554A8; }
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
L_00155438:;
SET64(3, (s32)rd32(c, (RW(21) + 64)));
SET32(4, RW(29) + 144);
SET64(2, (s32)rd32(c, (RW(21) + 152)));
SET32(17, RW(3) + RW(19));
SET32(16, RW(2) + RW(18));
SET64(31, 0x155454); SET64(5, RD(17) + RD(0)); JP_F_00148050(c);
rd128(c, (RW(29) + 144) & ~15u, &c->r[4]);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 124), RW(3));
SET32(20, RW(20) + 1);
SET32(19, RW(19) + 288);
wr128(c, (RW(16) + 0) & ~15u, &c->r[4]);
rd128(c, (RW(17) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[3]);
c->f[2].u = rd32(c, (RW(17) + 40));
c->f[1].u = rd32(c, (RW(17) + 20));
c->f[0].u = rd32(c, (RW(17) + 0));
wr32(c, (RW(29) + 120), c->f[2].u);
wr32(c, (RW(29) + 116), c->f[1].u);
wr32(c, (RW(29) + 112), c->f[0].u);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 32) & ~15u, &c->r[3]);
SET64(3, rd16(c, (RW(21) + 60)));
SET64(3, RD(20) < RD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 48); if (t) { POLL(); goto L_00155438; } }
L_001554A8:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001554D0(Ctx *c) { /* func_001554D0 */
ENTER(0x1554d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 152)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001554F0; }
SET64(31, 0x1554f0); SET32(4, RW(3) + -16); JP_F_00100430(c);
L_001554F0:;
wr32(c, (RW(16) + 152), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00155510(Ctx *c) { /* func_00155510 */
ENTER(0x155510);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr16(c, (RW(4) + 60), (u16)RW(5));
wr32(c, (RW(4) + 64), RW(18));
SET64(2, rd16(c, (RW(4) + 60)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00155580; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
L_00155548:;
SET64(3, RD(16) & 0xffff);
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET32(2, RW(2) << 5);
SET64(31, 0x155564); SET32(5, RW(18) + RW(2)); JP_F_002ADFE0(c);
SET64(2, rd16(c, (RW(19) + 60)));
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(2, RSD(16) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 0))); { POLL(); goto L_00155548; } }
L_00155580:;
wr32(c, (RW(19) + 68), RW(0));
wr32(c, (RW(19) + 72), RW(0));
SET64(18, RD(0) + RD(0));
wr32(c, (RW(19) + 76), RW(0));
wr32(c, (RW(19) + 80), RW(0));
wr8(c, (RW(19) + 84), (u8)RW(0));
wr32(c, (RW(19) + 88), RW(0));
wr32(c, (RW(19) + 92), RW(0));
wr32(c, (RW(19) + 96), RW(0));
wr32(c, (RW(19) + 100), RW(0));
wr8(c, (RW(19) + 104), (u8)RW(0));
wr32(c, (RW(19) + 108), RW(0));
wr32(c, (RW(19) + 112), RW(0));
wr32(c, (RW(19) + 116), RW(0));
wr32(c, (RW(19) + 120), RW(0));
wr8(c, (RW(19) + 124), (u8)RW(0));
wr32(c, (RW(19) + 128), RW(0));
wr32(c, (RW(19) + 132), RW(0));
wr32(c, (RW(19) + 136), RW(0));
wr32(c, (RW(19) + 140), RW(0));
wr8(c, (RW(19) + 144), (u8)RW(0));
wr8(c, (RW(19) + 148), (u8)RW(0));
SET64(16, rd16(c, (RW(19) + 60)));
SET32(2, RW(16) << 1);
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 4);
SET64(31, 0x1555f0); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0015561C; }
SET64(5, (s64)(s32)0x150000);
SET64(8, RD(16) + RD(0));
SET32(18, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET32(5, RW(5) + 22096);
SET64(6, RD(0) + RD(0));
SET64(31, 0x155618); SET32(7, RW(0) + 48); JP_F_00102580(c);
SET64(17, RD(2) + RD(0));
L_0015561C:;
wr32(c, (RW(19) + 152), RW(17));
wr32(c, (RW(19) + 156), RW(0));
wr32(c, (RW(19) + 160), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00155650(Ctx *c) { /* func_00155650 */
ENTER(0x155650);
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 4), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(3));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 44), RW(3)); return;
}

void JP_F_00155690(Ctx *c) { /* func_00155690 */
ENTER(0x155690);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 96);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1556a8); SET64(16, RD(4) + RD(0)); JP_F_002A4530(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -368);
SET32(3, RW(3) + -400);
wr32(c, (RW(16) + 56), RW(2));
wr32(c, (RW(16) + 64), RW(0));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 76), RW(0));
wr32(c, (RW(16) + 80), RW(0));
wr8(c, (RW(16) + 84), (u8)RW(0));
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 92), RW(0));
wr32(c, (RW(16) + 96), RW(0));
wr32(c, (RW(16) + 100), RW(0));
wr8(c, (RW(16) + 104), (u8)RW(0));
wr32(c, (RW(16) + 108), RW(0));
wr32(c, (RW(16) + 112), RW(0));
wr32(c, (RW(16) + 116), RW(0));
wr32(c, (RW(16) + 120), RW(0));
wr8(c, (RW(16) + 124), (u8)RW(0));
wr32(c, (RW(16) + 128), RW(0));
wr32(c, (RW(16) + 132), RW(0));
wr32(c, (RW(16) + 136), RW(0));
wr32(c, (RW(16) + 140), RW(0));
wr8(c, (RW(16) + 144), (u8)RW(0));
wr32(c, (RW(16) + 56), RW(3));
wr32(c, (RW(16) + 152), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00155730(Ctx *c) { /* func_00155730 */
ENTER(0x155730);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00155790; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -368);
wr32(c, (RW(17) + 56), RW(2));
SET64(31, 0x155760); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_002ADDD0(c);
SET64(31, 0x155768); SET64(4, (s32)rd32(c, (RW(17) + 28))); JP_F_002ADDD0(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x155778); wr32(c, (RW(17) + 64), RW(0)); JP_F_002A4430(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00155794; }
SET64(31, 0x155790); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00155790:;
SET64(2, RD(17) + RD(0));
L_00155794:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001557B0(Ctx *c) { /* func_001557B0 */
ENTER(0x1557b0);
SET64(2, (s32)rd32(c, (RW(4) + 28)));
c->f[0].u = RW(0);
SET64(2, rd16(c, (RW(2) + 16)));
{ int t = RD(2) == RD(0);  if (t) goto L_00155808; }
SET64(4, (s32)rd32(c, (RW(4) + 68)));
{ int t = RD(4) == RD(0);  if (t) goto L_00155808; }
SET64(2, (s32)rd32(c, (RW(4) + 60)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001557E8; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00155800;
L_001557E8:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00155800:;
c->f[0].u = rd32(c, (RW(4) + 28));
c->f[0].f = fpu(F(1) - F(0));
L_00155808:;
 return;
}

void JP_F_00155810(Ctx *c) { /* func_00155810 */
ENTER(0x155810);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x3f000000);
c->f[0].u = RW(2);
wr64(c, (RW(29) + 48), RD(31));
c->f[12].f = fpu(F(0) * F(12));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x15583c); SET32(4, RW(17) + 68); JP_F_001558E0(c);
wr8(c, (RW(17) + 148), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 68)));
{ int t = RD(2) == RD(0); SET32(3, RW(17) + 68); if (t) goto L_001558C0; }
c->f[1].u = rd32(c, (RW(3) + 4));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->fcc = F(0) == F(1);
{ int t = !c->fcc;  if (t) goto L_001558C0; }
SET64(16, RD(0) + (s64)1);
L_0015586C:;
SET64(3, RD(16) & 0xffff);
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(17));
SET64(5, (s32)rd32(c, (RW(2) + 68)));
{ int t = RD(5) == RD(0); SET32(18, RW(2) + 68); if (t) goto L_00155898; }
SET64(31, 0x155894); SET64(4, (s32)rd32(c, (RW(17) + 28))); JP_F_002ADE40(c);
L_00155898:;
wr32(c, (RW(18) + 0), RW(0));
wr32(c, (RW(18) + 4), RW(0));
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
wr32(c, (RW(18) + 8), RW(0));
wr32(c, (RW(18) + 12), RW(0));
SET64(2, RSD(16) < (s64)4);
{ int t = RD(2) != RD(0); wr8(c, (RW(18) + 16), (u8)RW(0)); if (t) { POLL(); goto L_0015586C; } }
L_001558C0:;
SET64(2, rd8(c, (RW(17) + 148)));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001558E0(Ctx *c) { /* func_001558E0 */
ENTER(0x1558e0);
SET32(29, RW(29) + -128);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(17, RW(0) + 3);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(0) + RD(0));
c->f[20].u = c->f[12].u;
wr32(c, (RW(29) + 124), RW(2));
SET64(3, RD(16) & 0xffff);
L_00155920:;
SET32(5, RW(29) + 124);
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(20, RW(19) + RW(2));
c->f[12].u = c->f[20].u;
SET64(31, 0x155940); SET64(4, RD(20) + RD(0)); JP_F_001559D0(c);
SET64(3, RD(16) & 0xffff);
{ int t = RD(3) != RD(0); SET64(2, RD(2) & 0xff); if (t) goto L_00155950; }
SET64(18, RD(2) & 0xff);
L_00155950:;
SET64(2, (s32)rd32(c, (RW(20) + 0)));
if (RD(2) != RD(0)) { SET32(2, RW(16) + 1); goto L_00155964; }
SET32(17, RW(3) + -1); goto L_00155978;
L_00155964:;
SET64(16, RD(2) & 0xffff);
SET64(2, RSD(16) < (s64)4);
if (RD(2) != RD(0)) { SET64(3, RD(16) & 0xffff); { POLL(); goto L_00155920; } }
L_00155978:;
if (RSD(17) < 0) { SET64(2, RD(18) + RD(0)); goto L_001559AC; }
SET32(2, RW(17) << 2);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) << 2);
SET32(2, RW(19) + RW(2));
c->f[0].u = rd32(c, (RW(29) + 124));
c->f[1].u = rd32(c, (RW(2) + 4));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(2) + 4), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(2) + 32), c->f[0].u);
SET64(2, RD(18) + RD(0));
L_001559AC:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_001559D0(Ctx *c) { /* func_001559D0 */
ENTER(0x1559d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00155A7C; }
SET64(3, rd8(c, (RW(4) + 16)));
if (RD(3) == RD(0)) { c->f[0].u = rd32(c, (RW(4) + 12)); goto L_001559FC; }
wr8(c, (RW(4) + 16), (u8)RW(0));
c->f[12].u = RW(0);
c->f[0].u = rd32(c, (RW(4) + 12));
L_001559FC:;
c->f[1].f = fpu(F(0) + F(12));
wr32(c, (RW(4) + 12), c->f[1].u);
c->f[0].u = rd32(c, (RW(4) + 8));
c->fcc = F(1) < F(0);
if (c->fcc) { c->f[2].u = rd32(c, (RW(4) + 12)); goto L_00155A2C; }
c->f[0].u = rd32(c, (RW(4) + 8));
wr32(c, (RW(4) + 12), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 0));
wr32(c, (RW(4) + 4), c->f[0].u);
wr32(c, (RW(5) + 0), RW(0)); goto L_00155A4C;
L_00155A2C:;
c->f[1].u = rd32(c, (RW(4) + 8));
c->f[0].u = rd32(c, (RW(5) + 0));
c->f[1].f = fpu_div(F(2), F(1));
c->f[1].f = fpu(F(0) * F(1));
wr32(c, (RW(4) + 4), c->f[1].u);
c->f[0].u = rd32(c, (RW(5) + 0));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(5) + 0), c->f[0].u);
L_00155A4C:;
c->f[1].u = rd32(c, (RW(4) + 4));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
c->f[0].u = RW(0);
wr32(c, (RW(3) + 32), c->f[1].u);
c->f[1].u = rd32(c, (RW(4) + 4));
c->fcc = F(0) == F(1);
if (c->fcc) { SET64(31, rd64(c, (RW(29) + 0))); goto L_00155A80; }
SET64(31, 0x155a78); SET64(4, (s32)rd32(c, (RW(4) + 0))); JP_F_002A4590(c);
SET64(2, RD(2) & 0xff);
L_00155A7C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_00155A80:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00155A90(Ctx *c) { /* func_00155A90 */
ENTER(0x155a90);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
c->f[0].u = RW(0);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(6) + RD(0));
c->f[20].u = c->f[12].u;
c->fcc = F(0) == F(20);
{ int t = c->fcc; wr32(c, (RW(5) + 28), RW(0)); if (t) goto L_00155AEC; }
SET64(31, 0x155ad0); SET32(4, RW(18) + 68); JP_F_00155C10(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 28))); goto L_00155B58; }
SET64(4, (s32)rd32(c, (RW(18) + 28)));
SET64(31, 0x155ae4); SET64(5, RD(2) + RD(0)); JP_F_002ADE40(c);
 goto L_00155B54;
L_00155AEC:;
SET64(31, 0x155af4); SET64(4, (s32)rd32(c, (RW(18) + 28))); JP_F_002ADDD0(c);
wr32(c, (RW(18) + 68), RW(0));
c->f[12].u = c->f[20].u;
wr32(c, (RW(18) + 72), RW(0));
SET32(4, RW(18) + 68);
wr32(c, (RW(18) + 76), RW(0));
SET64(5, RD(17) + RD(0));
wr32(c, (RW(18) + 80), RW(0));
wr8(c, (RW(18) + 84), (u8)RW(0));
wr32(c, (RW(18) + 88), RW(0));
wr32(c, (RW(18) + 92), RW(0));
wr32(c, (RW(18) + 96), RW(0));
wr32(c, (RW(18) + 100), RW(0));
wr8(c, (RW(18) + 104), (u8)RW(0));
wr32(c, (RW(18) + 108), RW(0));
wr32(c, (RW(18) + 112), RW(0));
wr32(c, (RW(18) + 116), RW(0));
wr32(c, (RW(18) + 120), RW(0));
wr8(c, (RW(18) + 124), (u8)RW(0));
wr32(c, (RW(18) + 128), RW(0));
wr32(c, (RW(18) + 132), RW(0));
wr32(c, (RW(18) + 136), RW(0));
wr32(c, (RW(18) + 140), RW(0));
SET64(31, 0x155b54); wr8(c, (RW(18) + 144), (u8)RW(0)); JP_F_00155C10(c);
L_00155B54:;
SET64(4, (s32)rd32(c, (RW(18) + 28)));
L_00155B58:;
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x155b64); SET64(5, RD(17) + RD(0)); JP_F_002ADFE0(c);
wr8(c, (RW(17) + 42), (u8)RW(16));
wr8(c, (RW(18) + 148), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00155B90(Ctx *c) { /* func_00155B90 */
ENTER(0x155b90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x155ba8); SET64(4, (s32)rd32(c, (RW(4) + 28))); JP_F_002ADDD0(c);
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 76), RW(0));
wr32(c, (RW(16) + 80), RW(0));
wr8(c, (RW(16) + 84), (u8)RW(0));
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 92), RW(0));
wr32(c, (RW(16) + 96), RW(0));
wr32(c, (RW(16) + 100), RW(0));
wr8(c, (RW(16) + 104), (u8)RW(0));
wr32(c, (RW(16) + 108), RW(0));
wr32(c, (RW(16) + 112), RW(0));
wr32(c, (RW(16) + 116), RW(0));
wr32(c, (RW(16) + 120), RW(0));
wr8(c, (RW(16) + 124), (u8)RW(0));
wr32(c, (RW(16) + 128), RW(0));
wr32(c, (RW(16) + 132), RW(0));
wr32(c, (RW(16) + 136), RW(0));
wr32(c, (RW(16) + 140), RW(0));
wr8(c, (RW(16) + 144), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00155C10(Ctx *c) { /* func_00155C10 */
ENTER(0x155c10);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(0) + RD(0));
c->f[20].u = c->f[12].u;
SET64(4, RD(0) + RD(0));
SET64(3, RD(4) & 0xffff);
L_00155C40:;
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(18) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
if (RD(2) != RD(17)) { SET32(2, RW(4) + 1); goto L_00155C68; }
SET64(4, RD(4) << 48);
SET64(4, RSD(4) >> 48); goto L_00155C7C;
L_00155C68:;
SET64(4, RD(2) & 0xffff);
SET64(2, RSD(4) < (s64)4);
if (RD(2) != RD(0)) { SET64(3, RD(4) & 0xffff); { POLL(); goto L_00155C40; } }
SET32(4, RW(0) + -1);
L_00155C7C:;
SET64(3, RD(4) << 48);
SET32(2, RW(0) + -1);
SET64(3, RSD(3) >> 48);
if (RD(3) == RD(2)) { c->f[1].u = rd32(c, (RW(18) + 60)); goto L_00155CB4; }
SET64(5, RD(4) & 0xffff);
SET32(2, RW(5) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(18) + RW(2));
SET64(16, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x155cb0); SET64(4, RD(18) + RD(0)); JP_F_00155F80(c);
c->f[1].u = rd32(c, (RW(18) + 60));
L_00155CB4:;
SET64(2, (s32)rd32(c, (RW(18) + 40)));
c->f[0].u = rd32(c, (RW(18) + 64));
c->f[2].u = rd32(c, (RW(18) + 68));
wr32(c, (RW(29) + 80), c->f[1].u);
wr32(c, (RW(29) + 84), c->f[0].u);
c->f[1].u = rd32(c, (RW(18) + 72));
c->f[0].u = rd32(c, (RW(18) + 76));
wr32(c, (RW(29) + 88), c->f[2].u);
wr32(c, (RW(29) + 92), c->f[1].u);
wr32(c, (RW(29) + 96), c->f[0].u);
wr32(c, (RW(18) + 60), RW(2));
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(18) + 44));
c->f[0].u = rd32(c, (RW(29) + 96));
wr128(c, (RW(29) + 112) & ~15u, &c->r[2]);
wr32(c, (RW(18) + 64), c->f[1].u);
wr32(c, (RW(29) + 128), c->f[0].u);
c->f[0].u = rd32(c, (RW(18) + 48));
SET64(2, (s32)rd32(c, (RW(29) + 112)));
wr32(c, (RW(18) + 68), c->f[0].u);
c->f[0].u = rd32(c, (RW(18) + 52));
wr32(c, (RW(18) + 72), c->f[0].u);
SET64(3, rd8(c, (RW(18) + 56)));
wr8(c, (RW(18) + 76), (u8)RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 20)));
wr32(c, (RW(18) + 40), RW(3));
c->f[0].u = rd32(c, (RW(18) + 24));
wr32(c, (RW(18) + 44), c->f[0].u);
c->f[0].u = rd32(c, (RW(18) + 28));
wr32(c, (RW(18) + 48), c->f[0].u);
c->f[0].u = rd32(c, (RW(18) + 32));
wr32(c, (RW(18) + 52), c->f[0].u);
SET64(3, rd8(c, (RW(18) + 36)));
wr8(c, (RW(18) + 56), (u8)RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(18) + 20), RW(3));
c->f[0].u = rd32(c, (RW(18) + 4));
wr32(c, (RW(18) + 24), c->f[0].u);
c->f[0].u = rd32(c, (RW(18) + 8));
wr32(c, (RW(18) + 28), c->f[0].u);
c->f[0].u = rd32(c, (RW(18) + 12));
wr32(c, (RW(18) + 32), c->f[0].u);
SET64(3, rd8(c, (RW(18) + 16)));
wr8(c, (RW(18) + 36), (u8)RW(3));
wr32(c, (RW(18) + 0), RW(0));
wr32(c, (RW(18) + 4), RW(0));
wr32(c, (RW(18) + 8), RW(0));
wr32(c, (RW(18) + 12), RW(0));
{ int t = RD(2) == RD(0); wr8(c, (RW(18) + 16), (u8)RW(0)); if (t) goto L_00155D80; }
SET64(16, RD(2) + RD(0));
L_00155D80:;
wr32(c, (RW(18) + 0), RW(0));
SET32(3, RW(0) + 1);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(18) + 8), RW(0));
wr32(c, (RW(18) + 12), RW(0));
wr8(c, (RW(18) + 16), (u8)RW(0));
wr32(c, (RW(18) + 0), RW(17));
wr32(c, (RW(18) + 4), RW(0));
wr32(c, (RW(18) + 8), c->f[20].u);
wr32(c, (RW(18) + 12), RW(0));
wr8(c, (RW(18) + 16), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_00155DD0(Ctx *c) { /* func_00155DD0 */
ENTER(0x155dd0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
wr16(c, (RW(4) + 60), (u16)RW(5));
wr32(c, (RW(4) + 64), RW(17));
SET64(3, rd16(c, (RW(4) + 60)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00155E38; }
SET64(4, (s32)rd32(c, (RW(18) + 0)));
L_00155E04:;
SET64(3, RD(16) & 0xffff);
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET32(2, RW(2) << 5);
SET64(31, 0x155e20); SET32(5, RW(17) + RW(2)); JP_F_002ADFE0(c);
SET64(3, rd16(c, (RW(18) + 60)));
SET32(4, RW(16) + 1);
SET64(16, RD(4) & 0xffff);
SET64(3, RSD(16) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 0))); { POLL(); goto L_00155E04; } }
L_00155E38:;
wr32(c, (RW(18) + 68), RW(0));
wr32(c, (RW(18) + 72), RW(0));
wr32(c, (RW(18) + 76), RW(0));
wr32(c, (RW(18) + 80), RW(0));
wr8(c, (RW(18) + 84), (u8)RW(0));
wr32(c, (RW(18) + 88), RW(0));
wr32(c, (RW(18) + 92), RW(0));
wr32(c, (RW(18) + 96), RW(0));
wr32(c, (RW(18) + 100), RW(0));
wr8(c, (RW(18) + 104), (u8)RW(0));
wr32(c, (RW(18) + 108), RW(0));
wr32(c, (RW(18) + 112), RW(0));
wr32(c, (RW(18) + 116), RW(0));
wr32(c, (RW(18) + 120), RW(0));
wr8(c, (RW(18) + 124), (u8)RW(0));
wr32(c, (RW(18) + 128), RW(0));
wr32(c, (RW(18) + 132), RW(0));
wr32(c, (RW(18) + 136), RW(0));
wr32(c, (RW(18) + 140), RW(0));
wr8(c, (RW(18) + 144), (u8)RW(0));
wr8(c, (RW(18) + 148), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00155EB0(Ctx *c) { /* func_00155EB0 */
ENTER(0x155eb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x155ec8); SET64(4, (s32)rd32(c, (RW(4) + 0))); JP_F_002ADDD0(c);
SET64(31, 0x155ed0); SET64(4, (s32)rd32(c, (RW(16) + 28))); JP_F_002ADDD0(c);
wr32(c, (RW(16) + 64), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00155EF0(Ctx *c) { /* func_00155EF0 */
ENTER(0x155ef0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 96);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x155f08); SET64(16, RD(4) + RD(0)); JP_F_002A4530(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -368);
wr32(c, (RW(16) + 56), RW(3));
wr32(c, (RW(16) + 64), RW(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 76), RW(0));
wr32(c, (RW(16) + 80), RW(0));
wr8(c, (RW(16) + 84), (u8)RW(0));
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 92), RW(0));
wr32(c, (RW(16) + 96), RW(0));
wr32(c, (RW(16) + 100), RW(0));
wr8(c, (RW(16) + 104), (u8)RW(0));
wr32(c, (RW(16) + 108), RW(0));
wr32(c, (RW(16) + 112), RW(0));
wr32(c, (RW(16) + 116), RW(0));
wr32(c, (RW(16) + 120), RW(0));
wr8(c, (RW(16) + 124), (u8)RW(0));
wr32(c, (RW(16) + 128), RW(0));
wr32(c, (RW(16) + 132), RW(0));
wr32(c, (RW(16) + 136), RW(0));
wr32(c, (RW(16) + 140), RW(0));
wr8(c, (RW(16) + 144), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00155F80(Ctx *c) { /* func_00155F80 */
ENTER(0x155f80);
SET32(29, RW(29) + -32);
SET64(5, RD(5) & 0xffff);
SET32(3, RW(5) << 2);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 2);
SET32(3, RW(4) + RW(3));
wr32(c, (RW(3) + 0), RW(0));
wr32(c, (RW(3) + 4), RW(0));
wr32(c, (RW(3) + 8), RW(0));
wr32(c, (RW(3) + 12), RW(0));
wr8(c, (RW(3) + 16), (u8)RW(0));
L_00155FAC:;
SET64(9, RD(0) + RD(0));
L_00155FB0:;
SET64(6, RD(9) & 0xffff);
SET32(3, RW(6) << 2);
SET32(5, RW(6) + 1);
SET32(6, RW(3) + RW(6));
SET32(3, RW(5) << 2);
SET32(3, RW(3) + RW(5));
SET32(5, RW(6) << 2);
SET32(3, RW(3) << 2);
SET32(8, RW(4) + RW(5));
SET64(5, (s32)rd32(c, (RW(8) + 0)));
{ int t = RD(5) != RD(0); SET32(7, RW(4) + RW(3)); if (t) goto L_00156068; }
SET64(3, (s32)rd32(c, (RW(7) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_00156068; }
c->f[1].u = rd32(c, (RW(7) + 0));
c->f[0].u = rd32(c, (RW(7) + 4));
c->f[2].u = rd32(c, (RW(7) + 8));
wr32(c, (RW(29) + 0), c->f[1].u);
wr32(c, (RW(29) + 4), c->f[0].u);
c->f[1].u = rd32(c, (RW(7) + 12));
c->f[0].u = rd32(c, (RW(7) + 16));
wr32(c, (RW(29) + 8), c->f[2].u);
wr32(c, (RW(29) + 12), c->f[1].u);
wr32(c, (RW(29) + 16), c->f[0].u);
wr32(c, (RW(7) + 0), RW(5));
c->f[0].u = rd32(c, (RW(8) + 4));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
c->f[2].u = rd32(c, (RW(29) + 4));
SET64(3, rd8(c, (RW(29) + 16)));
c->f[1].u = rd32(c, (RW(29) + 8));
wr32(c, (RW(7) + 4), c->f[0].u);
c->f[3].u = rd32(c, (RW(8) + 8));
c->f[0].u = rd32(c, (RW(29) + 12));
wr32(c, (RW(7) + 8), c->f[3].u);
c->f[3].u = rd32(c, (RW(8) + 12));
wr32(c, (RW(7) + 12), c->f[3].u);
SET64(6, rd8(c, (RW(8) + 16)));
wr8(c, (RW(7) + 16), (u8)RW(6));
wr32(c, (RW(8) + 0), RW(5));
wr32(c, (RW(8) + 4), c->f[2].u);
wr32(c, (RW(8) + 8), c->f[1].u);
wr32(c, (RW(8) + 12), c->f[0].u);
wr8(c, (RW(8) + 16), (u8)RW(3)); { POLL(); goto L_00155FAC; }
L_00156068:;
SET32(3, RW(9) + 1);
SET64(9, RD(3) & 0xffff);
SET64(3, RSD(9) < (s64)3);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00155FB0; } }
SET32(29, RW(29) + 32); return;
}

void JP_F_00156090(Ctx *c) { /* func_00156090 */
ENTER(0x156090);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(2, rd16(c, (RW(5) + 8)));
SET64(16, RD(4) + RD(0));
wr16(c, (RW(4) + 56), (u16)RW(2));
SET64(19, rd16(c, (RW(4) + 56)));
SET32(2, RW(19) << 4);
SET64(31, 0x1560d4); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_00156104; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(8, RD(19) + RD(0));
SET32(18, RW(0) + 1);
SET64(4, RD(20) + RD(0));
SET32(5, RW(5) + 26560);
SET32(6, RW(6) + 25152);
SET64(31, 0x156100); SET32(7, RW(0) + 16); JP_F_00102580(c);
SET64(20, RD(2) + RD(0));
L_00156104:;
wr32(c, (RW(16) + 52), RW(20));
wr32(c, (RW(16) + 60), RW(0));
SET64(3, rd16(c, (RW(16) + 56)));
SET64(21, (s32)rd32(c, (RW(17) + 12)));
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_001561F8; }
SET64(3, (s32)rd32(c, (RW(21) + 0)));
L_00156120:;
SET64(2, (s32)rd32(c, (RW(16) + 60)));
SET64(1, RD(2) < RD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_00156138; }
wr32(c, (RW(16) + 60), RW(3));
L_00156138:;
SET64(2, RD(20) & 0xffff);
SET64(18, RD(21) + RD(0));
SET32(17, RW(2) << 4);
SET64(3, (s32)rd32(c, (RW(16) + 52)));
SET32(21, RW(21) + 48);
SET64(2, (s32)rd32(c, (RW(18) + 36)));
{ int t = RD(2) == RD(0); SET32(19, RW(3) + RW(17)); if (t) goto L_00156178; }
SET64(25, (s32)rd32(c, (RW(19) + 12)));
SET64(5, rd16(c, (RW(2) + 4)));
SET64(6, (s32)rd32(c, (RW(2) + 8)));
SET64(7, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x156174); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
L_00156178:;
SET64(2, (s32)rd32(c, (RW(18) + 40)));
{ int t = RD(2) == RD(0);  if (t) goto L_001561A0; }
SET64(25, (s32)rd32(c, (RW(19) + 12)));
SET64(5, rd16(c, (RW(2) + 4)));
SET64(6, (s32)rd32(c, (RW(2) + 8)));
SET64(7, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1561a0); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
L_001561A0:;
SET64(2, (s32)rd32(c, (RW(18) + 44)));
{ int t = RD(2) == RD(0);  if (t) goto L_001561C8; }
SET64(25, (s32)rd32(c, (RW(19) + 12)));
SET64(5, rd16(c, (RW(2) + 4)));
SET64(6, (s32)rd32(c, (RW(2) + 8)));
SET64(7, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1561c8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
L_001561C8:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(16) + 52)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1561dc); SET32(5, RW(2) + RW(17)); JP_F_002ADFE0(c);
SET64(3, rd16(c, (RW(16) + 56)));
SET32(4, RW(20) + 1);
SET64(20, RD(4) & 0xffff);
SET64(3, RSD(20) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(21) + 0))); { POLL(); goto L_00156120; } }
L_001561F8:;
SET64(5, (s32)rd32(c, (RW(16) + 60)));
SET64(4, (s64)(s32)0x3f800000);
SET32(3, RW(0) + 1);
wr16(c, (RW(16) + 40), (u16)RW(5));
wr32(c, (RW(16) + 28), RW(0));
wr32(c, (RW(16) + 32), RW(4));
wr8(c, (RW(16) + 42), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_00156240(Ctx *c) { /* func_00156240 */
ENTER(0x156240);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00156290; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -320);
SET64(31, 0x15626c); wr32(c, (RW(17) + 12), RW(2)); JP_F_002A4AA0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x156278); SET64(5, RD(0) + RD(0)); JP_F_002A4B40(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00156294; }
SET64(31, 0x156290); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00156290:;
SET64(2, RD(17) + RD(0));
L_00156294:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001562B0(Ctx *c) { /* func_001562B0 */
ENTER(0x1562b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd8(c, (RW(4) + 48)));
{ int t = RD(2) != RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_00156340; }
SET64(2, (s32)rd32(c, (RW(17) + 52)));
{ int t = RD(2) == RD(0);  if (t) goto L_00156328; }
SET64(2, rd16(c, (RW(17) + 56)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00156328; }
SET64(2, (s32)rd32(c, (RW(17) + 52)));
L_001562EC:;
SET64(3, RD(16) & 0xffff);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET32(18, RW(3) << 4);
SET64(31, 0x156300); SET32(5, RW(2) + RW(18)); JP_F_002ADE40(c);
SET64(2, (s32)rd32(c, (RW(17) + 52)));
SET64(31, 0x15630c); SET32(4, RW(2) + RW(18)); JP_F_002A4AA0(c);
SET64(2, rd16(c, (RW(17) + 56)));
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(2, RSD(16) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 52))); { POLL(); goto L_001562EC; } }
L_00156328:;
SET64(4, (s32)rd32(c, (RW(17) + 52)));
SET64(5, (s64)(s32)0x150000);
SET64(31, 0x156338); SET32(5, RW(5) + 25152); JP_F_001022C0(c);
wr32(c, (RW(17) + 52), RW(0)); goto L_00156388;
L_00156340:;
SET64(2, rd16(c, (RW(17) + 56)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00156380; }
SET64(2, (s32)rd32(c, (RW(17) + 52)));
L_00156350:;
SET64(3, RD(16) & 0xffff);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(3) << 4);
SET64(31, 0x156364); SET32(5, RW(2) + RW(3)); JP_F_002ADE40(c);
SET64(2, rd16(c, (RW(17) + 56)));
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(2, RSD(16) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 52))); { POLL(); goto L_00156350; } }
L_00156380:;
wr32(c, (RW(17) + 52), RW(0));
wr8(c, (RW(17) + 48), (u8)RW(0));
L_00156388:;
wr16(c, (RW(17) + 56), (u16)RW(0));
SET64(31, 0x156394); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_002ADDD0(c);
wr32(c, (RW(17) + 28), RW(0));
wr32(c, (RW(17) + 32), RW(0));
wr8(c, (RW(17) + 42), (u8)RW(0));
wr16(c, (RW(17) + 40), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001563C0(Ctx *c) { /* func_001563C0 */
ENTER(0x1563c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00156410; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -344);
SET64(31, 0x1563ec); wr32(c, (RW(17) + 44), RW(2)); JP_F_001562B0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1563f8); SET64(5, RD(0) + RD(0)); JP_F_002A4670(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00156414; }
SET64(31, 0x156410); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00156410:;
SET64(2, RD(17) + RD(0));
L_00156414:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00156430(Ctx *c) { /* func_00156430 */
ENTER(0x156430);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(6, (s32)rd32(c, (RW(5) + 52)));
wr32(c, (RW(4) + 52), RW(6));
SET64(6, rd16(c, (RW(5) + 56)));
wr16(c, (RW(4) + 56), (u16)RW(6));
SET64(5, (s32)rd32(c, (RW(5) + 60)));
wr32(c, (RW(4) + 60), RW(5));
wr8(c, (RW(4) + 48), (u8)RW(3));
SET64(3, rd16(c, (RW(4) + 56)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_001564A8; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
L_00156474:;
SET64(2, RD(16) & 0xffff);
SET32(3, RW(2) << 4);
SET64(2, (s32)rd32(c, (RW(17) + 52)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x15648c); SET32(5, RW(2) + RW(3)); JP_F_002ADFE0(c);
SET64(3, rd16(c, (RW(17) + 56)));
SET32(4, RW(16) + 1);
SET64(16, RD(4) & 0xffff);
SET64(3, RSD(16) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_00156474; } }
L_001564A8:;
SET64(5, (s32)rd32(c, (RW(17) + 60)));
SET64(4, (s64)(s32)0x3f800000);
SET32(3, RW(0) + 1);
wr16(c, (RW(17) + 40), (u16)RW(5));
wr32(c, (RW(17) + 28), RW(0));
wr32(c, (RW(17) + 32), RW(4));
wr8(c, (RW(17) + 42), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001564E0(Ctx *c) { /* func_001564E0 */
ENTER(0x1564e0);
SET32(29, RW(29) + -32);
SET64(8, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(6, RW(0) + 1);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[12].u = RW(0);
SET64(16, RD(4) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x156508); SET64(7, RD(0) + RD(0)); JP_F_002A4760(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -344);
wr32(c, (RW(16) + 44), RW(3));
wr8(c, (RW(16) + 48), (u8)RW(0));
wr32(c, (RW(16) + 52), RW(0));
wr16(c, (RW(16) + 56), (u16)RW(0));
wr32(c, (RW(16) + 60), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00156540(Ctx *c) { /* func_00156540 */
ENTER(0x156540);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
c->f[12].u = RW(0);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(6, RW(0) + 1);
SET64(16, RD(4) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x156568); SET32(8, RW(0) + 48); JP_F_002A4760(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -344);
wr32(c, (RW(16) + 44), RW(3));
wr8(c, (RW(16) + 48), (u8)RW(0));
wr32(c, (RW(16) + 52), RW(0));
wr16(c, (RW(16) + 56), (u16)RW(0));
wr32(c, (RW(16) + 60), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001565A0(Ctx *c) { /* func_001565A0 */
ENTER(0x1565a0);
SET64(5, (s32)rd32(c, (RW(5) + 4)));
if (RD(5) != RD(0)) { SET64(3, (s32)rd32(c, (RW(5) + 8))); goto L_001565C4; }
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3)); goto L_00156600;
L_001565C4:;
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(3, RW(3) + -1);
{ int t = RD(5) == RD(0); SET32(3, RW(6) + RW(3)); if (t) goto L_001565E0; }
SET32(3, RW(3) << 4);
SET32(5, RW(5) + RW(3)); goto L_001565E4;
L_001565E0:;
SET64(5, RD(0) + RD(0));
L_001565E4:;
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3));
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]);
L_00156600:;
 return;
}

void JP_F_00156610(Ctx *c) { /* func_00156610 */
ENTER(0x156610);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(3) != RD(0); SET64(18, RD(7) + RD(0)); if (t) goto L_00156680; }
SET64(16, RD(5) & 0xffff);
if (RSD(16) <= 0) { SET64(31, rd64(c, (RW(29) + 80))); goto L_00156684; }
SET64(31, 0x156654); SET32(4, RW(0) + 20); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00156664; }
SET64(31, 0x156664); SET64(4, RD(17) + RD(0)); JP_F_002B5620(c);
L_00156664:;
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, 0x156680); wr32(c, (RW(20) + 8), RW(17)); JP_F_002B5550(c);
L_00156680:;
SET64(31, rd64(c, (RW(29) + 80)));
L_00156684:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_001566A0(Ctx *c) { /* func_001566A0 */
ENTER(0x1566a0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(3) != RD(0); SET64(18, RD(7) + RD(0)); if (t) goto L_00156710; }
SET64(16, RD(5) & 0xffff);
if (RSD(16) <= 0) { SET64(31, rd64(c, (RW(29) + 80))); goto L_00156714; }
SET64(31, 0x1566e4); SET32(4, RW(0) + 20); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001566F4; }
SET64(31, 0x1566f4); SET64(4, RD(17) + RD(0)); JP_F_002B5620(c);
L_001566F4:;
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, 0x156710); wr32(c, (RW(20) + 4), RW(17)); JP_F_002B5550(c);
L_00156710:;
SET64(31, rd64(c, (RW(29) + 80)));
L_00156714:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00156730(Ctx *c) { /* func_00156730 */
ENTER(0x156730);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) != RD(0); SET64(18, RD(7) + RD(0)); if (t) goto L_001567A0; }
SET64(16, RD(5) & 0xffff);
if (RSD(16) <= 0) { SET64(31, rd64(c, (RW(29) + 80))); goto L_001567A4; }
SET64(31, 0x156774); SET32(4, RW(0) + 20); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00156784; }
SET64(31, 0x156784); SET64(4, RD(17) + RD(0)); JP_F_002B5620(c);
L_00156784:;
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, 0x1567a0); wr32(c, (RW(20) + 0), RW(17)); JP_F_002B5550(c);
L_001567A0:;
SET64(31, rd64(c, (RW(29) + 80)));
L_001567A4:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_001567C0(Ctx *c) { /* func_001567C0 */
ENTER(0x1567c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1567d4); SET64(16, RD(4) + RD(0)); JP_F_002A4C10(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -320);
wr32(c, (RW(16) + 12), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00156800(Ctx *c) { /* func_00156800 */
ENTER(0x156800);
SET64(3, (s32)rd32(c, (RW(4) + 404)));
SET64(7, (s32)rd32(c, (RW(4) + 372)));
{ int t = RSD(3) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_00156858; }
SET64(3, (s32)rd32(c, (RW(4) + 400)));
L_00156814:;
{ int t = RSD(3) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_00156840; }
L_00156820:;
wr8(c, (RW(7) + 0), (u8)RW(0));
SET64(3, (s32)rd32(c, (RW(4) + 400)));
SET32(5, RW(5) + 1);
SET32(7, RW(7) + 1);
SET64(3, RSD(5) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00156820; } }
L_00156840:;
SET64(3, (s32)rd32(c, (RW(4) + 404)));
SET32(6, RW(6) + 1);
SET64(3, RSD(6) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 400))); { POLL(); goto L_00156814; } }
L_00156858:;
 return;
}

void JP_F_00156860(Ctx *c) { /* func_00156860 */
ENTER(0x156860);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
c->f[0].u = (u32)fpu_cvtw(F(12));
wr64(c, (RW(29) + 0), RD(31));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
SET64(7, (s32)c->f[0].u);
c->f[0].u = (u32)fpu_cvtw(F(13));
SET64(8, (s32)c->f[0].u);
{ u32 t = RW(25); SET64(31, 0x15688c); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001568A0(Ctx *c) { /* func_001568A0 */
ENTER(0x1568a0);
SET64(9, (s32)rd32(c, (RW(4) + 392)));
SET32(3, RW(5) << 1);
SET64(5, (s32)rd32(c, (RW(4) + 372)));
SET64(10, RD(0) + RD(0));
mul_s(c, 0, 6, RSW(6), RSW(9));
SET32(5, RW(5) + RW(6));
{ int t = RSD(8) <= 0; SET32(12, RW(5) + RW(3)); if (t) goto L_00156980; }
SET64(6, RD(0) + (s64)1);
SET32(9, RW(7) + -8);
L_001568C8:;
SET64(11, RD(12) + RD(0));
{ int t = RSD(7) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_00156968; }
SET64(1, RSD(7) < (s64)9);
{ int t = RD(1) != RD(0);  if (t) goto L_00156938; }
{ int t = RSD(7) < 0; SET64(3, RD(0) + RD(0)); if (t) goto L_00156900; }
SET64(1, (s64)(s32)0x7fff0000);
SET64(1, RD(1) | 0xffff);
SET64(1, RSD(7) < RSD(1));
{ int t = RD(1) == RD(0);  if (t) goto L_00156900; }
SET64(3, RD(6) + RD(0));
L_00156900:;
{ int t = RD(3) == RD(0);  if (t) goto L_00156938; }
L_00156908:;
wr8(c, (RW(11) + 0), (u8)RW(0));
wr8(c, (RW(11) + 1), (u8)RW(0));
SET32(5, RW(5) + 8);
wr8(c, (RW(11) + 2), (u8)RW(0));
SET64(3, RSD(5) < RSD(9));
wr8(c, (RW(11) + 3), (u8)RW(0));
wr8(c, (RW(11) + 4), (u8)RW(0));
wr8(c, (RW(11) + 5), (u8)RW(0));
wr8(c, (RW(11) + 6), (u8)RW(0));
wr8(c, (RW(11) + 7), (u8)RW(0));
{ int t = RD(3) != RD(0); SET32(11, RW(11) + 8); if (t) { POLL(); goto L_00156908; } }
L_00156938:;
SET64(1, RSD(5) < RSD(7));
{ int t = RD(1) == RD(0);  if (t) goto L_00156968; }
L_00156948:;
SET32(5, RW(5) + 1);
wr8(c, (RW(11) + 0), (u8)RW(0));
SET64(3, RSD(5) < RSD(7));
SET32(11, RW(11) + 1);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00156948; } }
L_00156968:;
SET64(5, (s32)rd32(c, (RW(4) + 392)));
SET32(10, RW(10) + 1);
SET64(3, RSD(10) < RSD(8));
{ int t = RD(3) != RD(0); SET32(12, RW(12) + RW(5)); if (t) { POLL(); goto L_001568C8; } }
L_00156980:;
 return;
}

void JP_F_00156990(Ctx *c) { /* func_00156990 */
ENTER(0x156990);
hle_text_blit(c);
SET64(12, (s32)rd32(c, (RW(4) + 392)));
SET32(6, RW(6) << 1);
SET64(11, (s32)rd32(c, (RW(4) + 372)));
SET32(10, RW(10) << 4);
SET64(3, RD(0) + RD(0));
mul_s(c, 0, 7, RSW(7), RSW(12));
SET32(7, RW(11) + RW(7));
{ int t = RSD(9) <= 0; SET32(12, RW(7) + RW(6)); if (t) goto L_00156A28; }
L_001569B4:;
SET64(11, RD(12) + RD(0));
{ int t = RSD(8) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_00156A10; }
L_001569C0:;
SET64(6, rd8(c, (RW(5) + 0)));
SET64(6, RD(6) & 0xf);
{ int t = RD(6) == RD(0);  if (t) goto L_001569D8; }
SET64(6, RD(10) | RD(6));
wr8(c, (RW(11) + 0), (u8)RW(6));
L_001569D8:;
SET64(6, rd8(c, (RW(5) + 0)));
SET64(6, RD(6) & 0xf0);
{ int t = RD(6) == RD(0);  if (t) goto L_001569F8; }
SET32(6, RSW(6) >> 4);
SET64(6, RD(10) | RD(6));
wr8(c, (RW(11) + 1), (u8)RW(6));
L_001569F8:;
SET32(7, RW(7) + 2);
SET64(6, RSD(7) < RSD(8));
SET32(11, RW(11) + 2);
{ int t = RD(6) != RD(0); SET32(5, RW(5) + 1); if (t) { POLL(); goto L_001569C0; } }
L_00156A10:;
SET64(7, (s32)rd32(c, (RW(4) + 392)));
SET32(3, RW(3) + 1);
SET64(6, RSD(3) < RSD(9));
{ int t = RD(6) != RD(0); SET32(12, RW(12) + RW(7)); if (t) { POLL(); goto L_001569B4; } }
L_00156A28:;
 return;
}

void JP_F_00156A30(Ctx *c) { /* func_00156A30 */
ENTER(0x156a30);
SET32(29, RW(29) + -16);
c->f[3].u = rd32(c, (RW(6) + 8));
wr64(c, (RW(29) + 0), RD(31));
c->f[2].u = rd32(c, (RW(6) + 0));
c->f[1].u = rd32(c, (RW(6) + 12));
c->f[0].u = rd32(c, (RW(6) + 4));
c->f[15].f = fpu(F(3) - F(2));
c->f[16].f = fpu(F(1) - F(0));
c->f[12].u = rd32(c, (RW(5) + 0));
c->f[13].u = rd32(c, (RW(5) + 4));
c->f[14].u = rd32(c, (RW(5) + 8));
SET64(31, 0x156a64); SET64(5, RD(7) + RD(0)); JP_F_00156B50(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00156A70(Ctx *c) { /* func_00156A70 */
ENTER(0x156a70);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 12), c->f[23].u);
SET64(16, RD(6) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 96)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x156ab0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 96)));
c->f[23].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x156ac4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 96)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x156ad8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 96)));
c->f[21].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x156aec); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 96)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x156b00); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(5, RD(16) + RD(0));
c->f[12].u = c->f[23].u;
c->f[13].u = c->f[22].u;
c->f[14].u = c->f[21].u;
c->f[15].u = c->f[20].u;
SET64(31, 0x156b20); c->f[16].u = c->f[0].u; JP_F_00156B50(c);
SET64(31, rd64(c, (RW(29) + 64)));
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 80); return;
}

void JP_F_00156B50(Ctx *c) { /* func_00156B50 */
ENTER(0x156b50);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[24].u = c->f[12].u;
c->f[23].u = c->f[13].u;
c->f[22].u = c->f[14].u;
c->f[21].u = c->f[15].u;
{ int t = RD(5) == RD(0); c->f[20].u = c->f[16].u; if (t) goto L_00156B9C; }
wr32(c, (RW(18) + 388), RW(5)); goto L_00156C70;
L_00156B9C:;
wr32(c, (RW(18) + 388), RW(0));
SET64(2, rd16(c, (RW(28) + -30260)));
SET64(4, (s32)rd32(c, (RW(28) + -30256)));
SET32(2, RW(2) + 1);
{ int t = RD(4) == RD(0); wr16(c, (RW(28) + -30260), (u16)RW(2)); if (t) goto L_00156C04; }
SET64(2, (s32)rd32(c, (RW(4) + 0)));
c->f[0].f = fpu(F(21) * F(20));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
mul_s(c, 0, 3, RSW(3), RSW(2));
SET64(2, (s32)c->f[0].u);
SET64(1, RSD(3) < RSD(2));
if (RD(1) == RD(0)) { c->f[0].u = (u32)fpu_cvtw(F(21)); goto L_00156C74; }
c->f[0].u = (u32)fpu_cvtw(F(21));
SET64(7, RD(0) + RD(0));
SET64(5, (s32)c->f[0].u);
c->f[0].u = (u32)fpu_cvtw(F(20));
SET64(6, (s32)c->f[0].u);
SET64(31, 0x156bfc); SET32(8, RW(0) + 1); JP_F_00150710(c);
 goto L_00156C70;
L_00156C04:;
c->f[0].f = fpu(F(21) * F(20));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
SET64(1, RSD(2) < (s64)16384);
if (RD(1) == RD(0)) { SET32(4, RW(0) + 32); goto L_00156C34; }
SET64(2, (s64)(s32)0x43000000);
c->f[21].u = RW(2);
c->f[20].u = c->f[21].u;
SET32(4, RW(0) + 32);
L_00156C34:;
SET64(31, 0x156c3c);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00156C4C; }
SET64(31, 0x156c4c); SET64(4, RD(16) + RD(0)); JP_F_001509B0(c);
L_00156C4C:;
c->f[0].u = (u32)fpu_cvtw(F(21));
SET64(4, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET32(8, RW(0) + 1);
SET64(5, (s32)c->f[0].u);
c->f[0].u = (u32)fpu_cvtw(F(20));
SET64(6, (s32)c->f[0].u);
SET64(31, 0x156c70); wr32(c, (RW(28) + -30256), RW(16)); JP_F_00150830(c);
L_00156C70:;
c->f[0].u = (u32)fpu_cvtw(F(21));
L_00156C74:;
SET32(6, RW(0) + 5);
SET64(4, (s32)c->f[0].u);
c->f[0].u = (u32)fpu_cvtw(F(20));
SET64(5, (s32)c->f[0].u);
SET64(31, 0x156c8c); SET32(7, RW(0) + 3); JP_F_0023A560(c);
wr32(c, (RW(18) + 380), RW(2));
SET64(31, 0x156c98); SET32(4, RW(0) + 4); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00156CA8; }
SET64(31, 0x156ca8); SET64(4, RD(16) + RD(0)); JP_F_0023ADE0(c);
L_00156CA8:;
wr32(c, (RW(18) + 360), RW(16));
SET64(5, (s32)rd32(c, (RW(18) + 380)));
SET64(31, 0x156cb8); SET64(4, RD(16) + RD(0)); JP_F_0023AD70(c);
SET64(31, 0x156cc0); SET32(4, RW(0) + 4); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00156CD0; }
SET64(31, 0x156cd0); SET64(4, RD(16) + RD(0)); JP_F_0023AB40(c);
L_00156CD0:;
wr32(c, (RW(18) + 368), RW(16));
SET64(4, (s32)rd32(c, (RW(18) + 360)));
SET64(31, 0x156ce0); SET64(5, RD(0) + RD(0)); JP_F_0023AB50(c);
SET64(4, (s32)rd32(c, (RW(18) + 368)));
SET64(31, 0x156cec); SET64(5, RD(2) + RD(0)); JP_F_0023AAE0(c);
SET64(4, (s32)rd32(c, (RW(18) + 368)));
SET64(31, 0x156cf8); SET64(5, RD(0) + RD(0)); JP_F_0023A9E0(c);
wr32(c, (RW(18) + 372), RW(2));
SET64(31, 0x156d04); SET64(4, (s32)rd32(c, (RW(18) + 368))); JP_F_0023A9B0(c);
wr32(c, (RW(18) + 376), RW(2));
SET64(31, 0x156d10); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00156D20; }
SET64(31, 0x156d20); SET64(4, RD(16) + RD(0)); JP_F_00150480(c);
L_00156D20:;
wr32(c, (RW(18) + 364), RW(16));
SET64(6, (s32)rd32(c, (RW(18) + 388)));
if (RD(6) == RD(0)) { SET64(6, (s32)rd32(c, (RW(28) + -30256))); goto L_00156D30; }
L_00156D30:;
SET64(4, (s32)rd32(c, (RW(18) + 364)));
SET32(7, RW(0) + -1);
SET64(5, (s32)rd32(c, (RW(18) + 380)));
SET64(31, 0x156d44); SET64(8, RD(0) + RD(0)); JP_F_0014FC00(c);
SET64(31, 0x156d4c); SET64(4, RD(18) + RD(0)); JP_F_0014E3D0(c);
SET64(2, (s32)rd32(c, (RW(18) + 364)));
c->f[12].u = c->f[22].u;
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 160), RW(2));
wr32(c, (RW(18) + 32), c->f[24].u);
SET64(31, 0x156d68); wr32(c, (RW(18) + 36), c->f[23].u); JP_F_0014E9B0(c);
wr32(c, (RW(18) + 164), c->f[21].u);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(18) + 168), c->f[20].u);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 172), RW(0));
c->f[1].u = RW(2);
wr32(c, (RW(18) + 176), RW(0));
c->f[0].u = rd32(c, (RW(18) + 164));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(18) + 180), c->f[0].u);
c->f[0].u = rd32(c, (RW(18) + 168));
c->f[0].f = fpu(F(0) - F(1));
SET64(31, 0x156da0); wr32(c, (RW(18) + 184), c->f[0].u); JP_F_0014DFC0(c);
c->f[0].u = rd32(c, (RW(18) + 164));
SET64(16, (s64)(s32)0x420000);
SET64(17, RD(0) + RD(0));
SET32(16, RW(16) + 4544);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
wr32(c, (RW(18) + 392), RW(2));
c->f[0].u = rd32(c, (RW(18) + 168));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
wr32(c, (RW(18) + 396), RW(2));
c->f[0].u = rd32(c, (RW(18) + 180));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
SET32(2, RW(2) + 1);
wr32(c, (RW(18) + 400), RW(2));
c->f[0].u = rd32(c, (RW(18) + 184));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
SET32(2, RW(2) + 1);
wr32(c, (RW(18) + 404), RW(2));
L_00156E04:;
SET64(4, (s32)rd32(c, (RW(18) + 368)));
SET64(5, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x156e18); SET64(6, RD(17) + RD(0)); JP_F_0023A740(c);
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)112);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00156E04; } }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x156e38); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 80)));
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 96); return;
}

void JP_F_00156E70(Ctx *c) { /* func_00156E70 */
ENTER(0x156e70);
SET64(2, (s32)rd32(c, (RW(4) + 388)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(28) + -30256))); goto L_00156E7C; }
L_00156E7C:;
 return;
}

void JP_F_00156E90(Ctx *c) { /* func_00156E90 */
ENTER(0x156e90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 360)));
SET64(31, 0x156eac); SET32(5, RW(0) + 1); JP_F_0023AD90(c);
wr32(c, (RW(16) + 360), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 364)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 364), RW(0)); goto L_00156ED0; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x156ecc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 364), RW(0));
L_00156ED0:;
SET64(4, (s32)rd32(c, (RW(16) + 368)));
SET64(31, 0x156edc); SET32(5, RW(0) + 1); JP_F_0023AAF0(c);
wr32(c, (RW(16) + 368), RW(0));
SET64(31, 0x156ee8); SET64(4, (s32)rd32(c, (RW(16) + 380))); JP_F_00100430(c);
wr32(c, (RW(16) + 380), RW(0));
wr32(c, (RW(16) + 388), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00156F00(Ctx *c) { /* func_00156F00 */
ENTER(0x156f00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00157024; }
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -288);
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(5, (s32)rd32(c, (RW(17) + 12)));
SET32(6, RW(6) + -160);
SET32(4, RW(4) + -240);
SET32(3, RW(3) + -220);
SET32(2, RW(17) + 408);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(17) + 216), RW(4));
wr32(c, (RW(17) + 220), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 388)));
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(17) + 356))); goto L_00156F74; }
wr32(c, (RW(17) + 388), RW(0)); goto L_00156FC0;
L_00156F74:;
if (RD(2) == RD(0)) { SET64(25, (s32)rd32(c, (RW(17) + 8))); goto L_00156FC4; }
wr8(c, (RW(17) + 356), (u8)RW(0));
SET64(2, rd16(c, (RW(28) + -30260)));
{ int t = RD(2) == RD(0);  if (t) goto L_00156FC0; }
SET32(2, RW(2) + -1);
wr16(c, (RW(28) + -30260), (u16)RW(2));
SET64(2, rd16(c, (RW(28) + -30260)));
{ int t = RD(2) != RD(0);  if (t) goto L_00156FC0; }
SET64(4, (s32)rd32(c, (RW(28) + -30256)));
if (RD(4) == RD(0)) { wr32(c, (RW(28) + -30256), RW(0)); goto L_00156FC0; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x156fbc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(28) + -30256), RW(0));
L_00156FC0:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
L_00156FC4:;
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x156fd0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x156fdc); SET64(5, RD(0) + RD(0)); JP_F_0014E490(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_00157010; }
SET32(4, RW(17) + 408);
{ int t = RD(4) == RD(0);  if (t) goto L_0015700C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 424), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15700c);  rt_call(c, t); }
L_0015700C:;
SET64(2, RD(16) << 48);
L_00157010:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00157028; }
SET64(31, 0x157024); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00157024:;
SET64(2, RD(17) + RD(0));
L_00157028:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00157040(Ctx *c) { /* func_00157040 */
ENTER(0x157040);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00157070; }
SET32(4, RW(16) + 408);
SET64(31, 0x157070); wr32(c, (RW(16) + 12), RW(4)); JP_F_00141C80(c);
L_00157070:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x15707c); SET64(5, RD(0) + RD(0)); JP_F_0014E610(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(8, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -288);
SET64(6, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 8), RW(2));
SET64(5, (s64)(s32)0x4d0000);
SET64(7, (s32)rd32(c, (RW(16) + 12)));
SET32(8, RW(8) + -160);
SET32(6, RW(6) + -240);
SET32(5, RW(5) + -220);
SET32(4, RW(16) + 408);
SET32(3, RW(0) + 1);
wr32(c, (RW(7) + 16), RW(8));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 216), RW(6));
wr32(c, (RW(16) + 220), RW(5));
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET32(4, RW(4) - RW(5));
wr32(c, (RW(5) + 20), RW(4));
wr8(c, (RW(16) + 356), (u8)RW(3));
wr32(c, (RW(16) + 360), RW(0));
wr32(c, (RW(16) + 364), RW(0));
wr32(c, (RW(16) + 368), RW(0));
wr32(c, (RW(16) + 372), RW(0));
wr32(c, (RW(16) + 376), RW(0));
wr32(c, (RW(16) + 380), RW(0));
wr32(c, (RW(16) + 384), RW(0));
wr32(c, (RW(16) + 388), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00157100(Ctx *c) { /* func_00157100 */
ENTER(0x157100);
wr16(c, (RW(28) + -30260), (u16)RW(0));
wr32(c, (RW(28) + -30256), RW(0)); return;
}

void JP_F_00157110(Ctx *c) { /* func_00157110 */
ENTER(0x157110);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -408);
SET32(4, RW(4) + RW(25)); { JP_F_0014DCE0(c); return; }
}

void JP_F_00157120(Ctx *c) { /* func_00157120 */
ENTER(0x157120);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -408);
SET32(4, RW(4) + RW(25)); { JP_F_0014DD40(c); return; }
}

void JP_F_00157130(Ctx *c) { /* func_00157130 */
ENTER(0x157130);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -408);
SET32(4, RW(4) + RW(25)); { JP_F_00156E90(c); return; }
}

void JP_F_00157140(Ctx *c) { /* func_00157140 */
ENTER(0x157140);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -408);
SET32(4, RW(4) + RW(25)); { JP_F_00156F00(c); return; }
}

void JP_F_00157150(Ctx *c) { /* func_00157150 */
ENTER(0x157150);
SET32(4, RW(4) + -208); { JP_F_00156F00(c); return; }
}

void JP_F_00157160(Ctx *c) { /* func_00157160 */
ENTER(0x157160);
c->f[0].u = rd32(c, (RW(4) + 4)); return;
}

void JP_F_00157170(Ctx *c) { /* func_00157170 */
ENTER(0x157170);
c->f[0].u = rd32(c, (RW(4) + 0)); return;
}

void JP_F_00157180(Ctx *c) { /* func_00157180 */
ENTER(0x157180);
c->f[0].u = rd32(c, (RW(4) + 8)); return;
}

void JP_F_00157190(Ctx *c) { /* func_00157190 */
ENTER(0x157190);
c->f[0].u = rd32(c, (RW(4) + 12)); return;
}

void JP_F_001571A0(Ctx *c) { /* func_001571A0 */
ENTER(0x1571a0);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 0), RW(3));
SET64(3, rd16(c, (RW(5) + 4)));
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(3, rd16(c, (RW(5) + 6)));
wr16(c, (RW(4) + 6), (u16)RW(3)); return;
}

void JP_F_001571C0(Ctx *c) { /* func_001571C0 */
ENTER(0x1571c0);
SET32(29, RW(29) + -32);
SET64(8, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 0), RW(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(0));
SET32(3, RW(16) + 48);
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(8));
SET32(4, RW(16) + 16);
SET64(1, RD(4) < RD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_00157228; }
SET64(1, RD(4) < RD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_00157228; }
wr32(c, (RW(4) + 0), RW(0));
L_00157208:;
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(8));
SET32(4, RW(4) + 16);
SET64(2, RD(4) < RD(3));
if (RD(2) != RD(0)) { wr32(c, (RW(4) + 0), RW(0)); { POLL(); goto L_00157208; } }
L_00157228:;
wr32(c, (RW(16) + 48), RW(0));
wr32(c, (RW(16) + 52), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 56), RW(0));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 60), RW(2));
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(7) + 0) & ~15u, &c->r[2]);
SET64(31, 0x15725c); wr128(c, (RW(16) + 32) & ~15u, &c->r[2]); JP_F_00149800(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00157270(Ctx *c) { /* func_00157270 */
ENTER(0x157270);
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_00157280(Ctx *c) { /* func_00157280 */
ENTER(0x157280);
SET64(5, rd16(c, (RW(4) + 0)));
SET32(3, RW(0) + 2);
{ int t = RD(5) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_001572C8; }
SET32(3, RW(0) + 1);
if (RD(5) == RD(3)) { SET64(3, rd16(c, (RW(4) + 2))); goto L_001572A4; }
 goto L_001572D8;
L_001572A4:;
SET64(2, (s64)(s32)0x55550000);
SET64(2, RD(2) | 0x5556);
mul_s(c, 0, 0, RSW(2), RSW(3));
SET32(3, RW(3) >> 31);
SET64(2, c->hi.d[0]);
SET32(2, RW(2) + RW(3));
SET64(2, RD(2) & 0xffff); goto L_001572D8;
L_001572C8:;
SET64(3, rd16(c, (RW(4) + 2)));
SET64(2, rd16(c, (RW(4) + 6)));
SET32(2, RW(3) - RW(2));
SET64(2, RD(2) & 0xffff);
L_001572D8:;
 return;
}

void JP_F_001572E0(Ctx *c) { /* func_001572E0 */
ENTER(0x1572e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00157340; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -112);
SET32(3, RW(3) + -104);
wr32(c, (RW(17) + 56), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -92);
SET64(31, 0x157328); wr32(c, (RW(17) + 36), RW(2)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00157344; }
SET64(31, 0x157340); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00157340:;
SET64(2, RD(17) + RD(0));
L_00157344:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00157360(Ctx *c) { /* func_00157360 */
ENTER(0x157360);
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + 4992); return;
}

void JP_F_00157370(Ctx *c) { /* func_00157370 */
ENTER(0x157370);
 return;
}

void JP_F_00157380(Ctx *c) { /* func_00157380 */
ENTER(0x157380);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x157390);  JP_F_00139AB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001573A0(Ctx *c) { /* func_001573A0 */
ENTER(0x1573a0);
SET32(4, RW(4) + -4); { JP_F_001572E0(c); return; }
}

void JP_F_001573B0(Ctx *c) { /* func_001573B0 */
ENTER(0x1573b0);
SET32(4, RW(4) + -24); { JP_F_001572E0(c); return; }
}

void JP_F_001573C0(Ctx *c) { /* func_001573C0 */
ENTER(0x1573c0);
SET64(2, (s32)rd32(c, (RW(5) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 20)));
SET32(3, RW(2) + 1);
SET32(2, RW(2) << 2);
SET32(3, RW(3) << 2);
SET32(2, RW(4) + RW(2));
SET32(3, RW(4) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(3) - RW(2)); return;
}

void JP_F_001573F0(Ctx *c) { /* func_001573F0 */
ENTER(0x1573f0);
SET64(7, (s32)rd32(c, (RW(4) + 28)));
{ int t = RD(7) == RD(0);  if (t) goto L_00157470; }
SET64(2, rd16(c, (RW(4) + 32)));
{ int t = RSD(2) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00157470; }
SET64(5, RD(5) & 0xffff);
SET64(3, RD(8) & 0xffff);
L_00157410:;
SET32(2, RW(3) << 1);
SET32(2, RW(7) + RW(2));
SET64(2, rd16(c, (RW(2) + 0)));
if (RD(5) != RD(2)) { SET64(2, rd16(c, (RW(4) + 32))); goto L_00157458; }
SET32(2, RW(6) + -1);
SET64(6, RD(2) << 48);
SET64(6, RSD(6) >> 48);
{ int t = RSD(6) >= 0;  if (t) goto L_00157454; }
SET32(5, RW(3) << 2);
SET64(2, (s32)rd32(c, (RW(4) + 24)));
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET32(3, RW(3) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(3)); goto L_00157474;
L_00157454:;
SET64(2, rd16(c, (RW(4) + 32)));
L_00157458:;
SET32(3, RW(8) + 1);
SET64(8, RD(3) & 0xffff);
SET64(2, RSD(8) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, RD(8) & 0xffff); { POLL(); goto L_00157410; } }
L_00157470:;
SET64(2, RD(0) + RD(0));
L_00157474:;
 return;
}

void JP_F_00157480(Ctx *c) { /* func_00157480 */
ENTER(0x157480);
SET64(3, rd16(c, (RW(4) + 32)));
{ int t = RSD(3) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_001574C8; }
SET64(6, (s32)rd32(c, (RW(4) + 28)));
SET64(5, RD(5) & 0xffff);
SET64(3, RD(2) & 0xffff);
L_00157498:;
SET32(3, RW(3) << 1);
SET32(3, RW(6) + RW(3));
SET64(3, rd16(c, (RW(3) + 0)));
if (RD(5) != RD(3)) { SET64(3, rd16(c, (RW(4) + 32))); goto L_001574B4; }
 goto L_001574CC;
L_001574B4:;
SET32(2, RW(2) + 1);
SET64(2, RD(2) & 0xffff);
SET64(3, RSD(2) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, RD(2) & 0xffff); { POLL(); goto L_00157498; } }
L_001574C8:;
SET64(2, RD(0) | 0xffff);
L_001574CC:;
 return;
}

void JP_F_001574E0(Ctx *c) { /* func_001574E0 */
ENTER(0x1574e0);
SET64(6, (s32)rd32(c, (RW(4) + 28)));
{ int t = RD(6) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00157530; }
SET64(3, rd16(c, (RW(4) + 32)));
{ int t = RSD(3) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_00157530; }
{ int t = RSD(3) <= 0;  if (t) goto L_00157530; }
SET64(5, RD(5) & 0xffff);
L_00157504:;
SET64(3, rd16(c, (RW(6) + 0)));
{ int t = RD(5) != RD(3);  if (t) goto L_00157518; }
SET32(2, RW(2) + 1);
L_00157518:;
SET64(3, rd16(c, (RW(4) + 32)));
SET32(7, RW(7) + 1);
SET64(3, RSD(7) < RSD(3));
{ int t = RD(3) != RD(0); SET32(6, RW(6) + 2); if (t) { POLL(); goto L_00157504; } }
L_00157530:;
 return;
}

void JP_F_00157540(Ctx *c) { /* func_00157540 */
ENTER(0x157540);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00157558; }
wr32(c, (RW(16) + 8), RW(5));
L_00157558:;
SET64(3, (s32)rd32(c, (RW(16) + 8)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001575E4; }
wr32(c, (RW(16) + 24), RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { SET64(5, (s32)rd32(c, (RW(16) + 8))); goto L_00157588; }
SET64(5, (s64)(s32)0x420000);
SET32(6, RW(0) + 3);
SET64(31, 0x157584); SET32(5, RW(5) + 5000); JP_F_0012A7C0(c);
SET64(5, (s32)rd32(c, (RW(16) + 8)));
L_00157588:;
SET64(4, rd16(c, (RW(5) + 6)));
SET32(3, RW(5) + 8);
wr16(c, (RW(16) + 34), (u16)RW(4));
SET64(4, rd16(c, (RW(5) + 4)));
wr16(c, (RW(16) + 32), (u16)RW(4));
wr32(c, (RW(16) + 20), RW(3));
SET64(3, rd16(c, (RW(16) + 34)));
SET64(3, RD(3) & 0x8000);
if (RD(3) != RD(0)) { wr32(c, (RW(16) + 28), RW(0)); goto L_001575E0; }
SET64(4, rd16(c, (RW(16) + 32)));
SET64(3, (s32)rd32(c, (RW(16) + 20)));
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(16) + 28), RW(3));
SET64(3, rd16(c, (RW(16) + 34)));
SET64(3, RD(3) & 0x4000);
{ int t = RD(3) == RD(0);  if (t) goto L_001575E0; }
SET64(3, (s32)rd32(c, (RW(16) + 28)));
SET32(3, RW(3) + 4);
wr32(c, (RW(16) + 28), RW(3));
L_001575E0:;
SET64(31, rd64(c, (RW(29) + 16)));
L_001575E4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001575F0(Ctx *c) { /* func_001575F0 */
ENTER(0x1575f0);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0x420000);
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(5) + 5000);
SET64(31, 0x157608); SET32(6, RW(0) + 3); JP_F_0012A7C0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_00157620(Ctx *c) { /* func_00157620 */
ENTER(0x157620);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 28), RW(0));
SET64(31, 0x157638); wr16(c, (RW(4) + 32), (u16)RW(0)); JP_F_001580E0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00157650(Ctx *c) { /* func_00157650 */
ENTER(0x157650);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x157668); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00157DA0(c);
SET64(16, RD(2) & 0xff);
if (RD(16) != RD(0)) { SET64(2, RD(16) + RD(0)); goto L_001576C8; }
SET64(2, (s32)rd32(c, (RW(17) + 20)));
{ int t = RD(2) != RD(0);  if (t) goto L_001576C4; }
SET64(4, (s32)rd32(c, (RW(17) + 8)));
{ int t = RD(4) != RD(0);  if (t) goto L_00157694; }
SET64(2, RD(0) + RD(0)); goto L_001576B0;
L_00157694:;
SET64(5, (s64)(s32)0x420000);
SET32(6, RW(0) + 3);
SET64(31, 0x1576a4); SET32(5, RW(5) + 5000); JP_F_0012A7C0(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + (s64)1); goto L_001576B0; }
SET64(2, RD(0) + RD(0));
L_001576B0:;
{ int t = RD(2) == RD(0);  if (t) goto L_001576C4; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x1576c4); SET64(5, RD(0) + RD(0)); JP_F_00157540(c);
L_001576C4:;
SET64(2, RD(16) + RD(0));
L_001576C8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001576E0(Ctx *c) { /* func_001576E0 */
ENTER(0x1576e0);
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 21832); return;
}

void JP_F_001576F0(Ctx *c) { /* func_001576F0 */
ENTER(0x1576f0);
 return;
}

void JP_F_00157700(Ctx *c) { /* func_00157700 */
ENTER(0x157700);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, rd16(c, (RW(4) + 0)));
{ int t = RD(5) == RD(3);  if (t) goto L_0015772C; }
if (RD(5) == RD(0)) { SET32(2, RW(5) + 1); goto L_00157728; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_00157738;
L_00157728:;
wr16(c, (RW(4) + 0), (u16)RW(2));
L_0015772C:;
SET64(31, 0x157734);  JP_F_00157740(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_00157738:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00157740(Ctx *c) { /* func_00157740 */
ENTER(0x157740);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, rd16(c, (RW(17) + 60)));
L_0015775C:;
SET32(5, RW(0) + 2);
{ int t = RD(4) == RD(5); SET64(16, RD(0) + RD(0)); if (t) goto L_00157800; }
SET32(3, RW(0) + 1);
{ int t = RD(4) == RD(3);  if (t) goto L_001577F0; }
{ int t = RD(4) == RD(0);  if (t) goto L_00157788; }
 goto L_001578A8;
L_00157788:;
SET64(6, (s64)(s32)0x530000);
SET32(9, RW(0) + -1);
SET64(8, RD(0) + (s64)13187);
SET64(7, RD(0) + RD(0));
SET32(6, RW(6) + -22320);
L_001577A0:;
SET64(3, rd16(c, (RW(6) + 0)));
{ int t = RD(3) != RD(5);  if (t) goto L_001577C8; }
SET64(4, (s32)rd32(c, (RW(6) + 4)));
SET64(3, RD(8) & 0xffff);
SET64(1, RSD(4) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_001577C8; }
SET64(8, RD(4) & 0xffff);
SET64(9, RD(7) + RD(0));
L_001577C8:;
SET32(7, RW(7) + 1);
SET64(3, RSD(7) < (s64)128);
{ int t = RD(3) != RD(0); SET32(6, RW(6) + 20); if (t) { POLL(); goto L_001577A0; } }
SET32(3, RW(0) + -1);
{ int t = RD(9) == RD(3); wr32(c, (RW(17) + 64), RW(9)); if (t) goto L_001578A8; }
SET32(2, RW(0) + 1);
wr16(c, (RW(17) + 60), (u16)RW(2));
L_001577F0:;
SET64(31, 0x1577f8); SET64(4, RD(17) + RD(0)); JP_F_001578D0(c);
SET32(2, RW(0) + 2);
wr16(c, (RW(17) + 60), (u16)RW(2));
L_00157800:;
SET64(31, 0x157808); SET64(4, (s32)rd32(c, (RW(17) + 68))); JP_F_002A0A00(c);
SET64(3, RD(2) ^ 0x3);
SET64(3, RD(0) < RD(3));
{ int t = RD(3) != RD(0);  if (t) goto L_001578A8; }
SET64(6, (s32)rd32(c, (RW(17) + 64)));
SET64(3, (s64)(s32)0x530000);
SET64(4, (s32)rd32(c, (RW(17) + 68)));
SET32(3, RW(3) + -22320);
SET32(5, RW(6) << 2);
SET32(5, RW(5) + RW(6));
SET32(5, RW(5) << 2);
{ int t = RD(4) == RD(0); SET32(18, RW(3) + RW(5)); if (t) goto L_00157850; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15784c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00157850:;
wr32(c, (RW(17) + 68), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 72)));
{ int t = RD(4) == RD(0);  if (t) goto L_00157870; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x157870); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00157870:;
wr32(c, (RW(17) + 72), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 76)));
{ int t = RD(4) == RD(0);  if (t) goto L_00157890; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x157890); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00157890:;
wr32(c, (RW(17) + 76), RW(0));
SET32(3, RW(0) + 4);
SET64(16, RD(0) + (s64)1);
wr16(c, (RW(18) + 0), (u16)RW(3));
wr16(c, (RW(17) + 60), (u16)RW(0));
L_001578A8:;
if (RD(16) != RD(0)) { SET64(4, rd16(c, (RW(17) + 60))); { POLL(); goto L_0015775C; } }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001578D0(Ctx *c) { /* func_001578D0 */
ENTER(0x1578d0);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 48), RD(31));
SET32(2, RW(2) + -22320);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s32)rd32(c, (RW(4) + 64)));
SET64(16, RD(4) + RD(0));
SET32(3, RW(5) << 2);
SET64(4, (s32)rd32(c, (RW(28) + -30252)));
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 2);
SET32(17, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x157914); SET32(5, RW(2) + -1); JP_F_002A04D0(c);
wr32(c, (RW(16) + 76), RW(2));
SET64(31, 0x157920); SET32(4, RW(0) + 12); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_00157934; }
SET64(5, (s32)rd32(c, (RW(16) + 76)));
SET64(31, 0x157934); SET64(4, RD(18) + RD(0)); JP_F_002A08D0(c);
L_00157934:;
SET32(4, RW(0) + 20);
SET64(31, 0x157940); wr32(c, (RW(16) + 68), RW(18)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_00157960; }
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET64(4, RD(18) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 8)));
SET32(7, RW(0) + 64);
SET64(31, 0x157960); SET64(8, RD(0) + RD(0)); JP_F_002AE320(c);
L_00157960:;
wr32(c, (RW(16) + 72), RW(18));
SET64(6, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 16)));
SET64(4, (s32)rd32(c, (RW(16) + 68)));
SET64(31, 0x157978); SET32(5, RW(2) >> 11); JP_F_002A0940(c);
SET64(5, (s32)rd32(c, (RW(16) + 72)));
SET64(31, 0x157984); SET64(4, (s32)rd32(c, (RW(16) + 68))); JP_F_002A0AA0(c);
SET32(3, RW(0) + 3);
wr16(c, (RW(17) + 0), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001579B0(Ctx *c) { /* func_001579B0 */
ENTER(0x1579b0);
SET64(5, (s64)(s32)0x530000);
SET64(6, RD(0) + RD(0));
SET32(5, RW(5) + -22320);
L_001579BC:;
wr16(c, (RW(5) + 0), (u16)RW(0));
SET32(6, RW(6) + 8);
wr32(c, (RW(5) + 4), RW(0));
SET64(3, RSD(6) < (s64)128);
wr16(c, (RW(5) + 20), (u16)RW(0));
wr32(c, (RW(5) + 24), RW(0));
wr16(c, (RW(5) + 40), (u16)RW(0));
wr32(c, (RW(5) + 44), RW(0));
wr16(c, (RW(5) + 60), (u16)RW(0));
wr32(c, (RW(5) + 64), RW(0));
wr16(c, (RW(5) + 80), (u16)RW(0));
wr32(c, (RW(5) + 84), RW(0));
wr16(c, (RW(5) + 100), (u16)RW(0));
wr32(c, (RW(5) + 104), RW(0));
wr16(c, (RW(5) + 120), (u16)RW(0));
wr32(c, (RW(5) + 124), RW(0));
wr16(c, (RW(5) + 140), (u16)RW(0));
wr32(c, (RW(5) + 144), RW(0));
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 160); if (t) { POLL(); goto L_001579BC; } }
wr16(c, (RW(4) + 60), (u16)RW(0)); return;
}

void JP_F_00157A20(Ctx *c) { /* func_00157A20 */
ENTER(0x157a20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00157AE4; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 16);
SET32(3, RW(3) + 24);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 36);
wr32(c, (RW(17) + 36), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 68), RW(0)); goto L_00157A80; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x157a7c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 68), RW(0));
L_00157A80:;
SET64(4, (s32)rd32(c, (RW(17) + 72)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 72), RW(0)); goto L_00157AA0; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x157a9c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 72), RW(0));
L_00157AA0:;
SET64(4, (s32)rd32(c, (RW(17) + 76)));
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_00157AC0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x157abc); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
L_00157AC0:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x157acc); wr32(c, (RW(17) + 76), RW(0)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00157AE8; }
SET64(31, 0x157ae4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00157AE4:;
SET64(2, RD(17) + RD(0));
L_00157AE8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00157B00(Ctx *c) { /* func_00157B00 */
ENTER(0x157b00);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1024);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x157b18); SET64(16, RD(4) + RD(0)); JP_F_0013A040(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 16);
SET32(2, RW(2) + 24);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + 36);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 76), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00157B60(Ctx *c) { /* func_00157B60 */
ENTER(0x157b60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(28) + -30252)));
SET64(31, 0x157b74); SET32(5, RW(0) + 1); JP_F_002A0600(c);
wr32(c, (RW(28) + -30252), RW(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00157B90(Ctx *c) { /* func_00157B90 */
ENTER(0x157b90);
SET32(29, RW(29) + -48);
SET32(4, RW(0) + 8);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x157ba4); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00157BB8; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x157bb8); SET32(5, RW(0) + 13186); JP_F_002A06A0(c);
L_00157BB8:;
SET64(5, (s64)(s32)0x490000);
SET32(4, RW(29) + 32);
SET32(5, RW(5) + 21808);
SET64(31, 0x157bcc); wr32(c, (RW(28) + -30252), RW(16)); JP_F_002B0570(c);
SET64(4, (s32)rd32(c, (RW(28) + -30252)));
SET64(31, 0x157bd8); SET32(5, RW(29) + 32); JP_F_002A0550(c);
SET32(4, RW(29) + 32);
SET64(31, 0x157be4); SET32(5, RW(0) + -1); JP_F_002B0510(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00157C00(Ctx *c) { /* func_00157C00 */
ENTER(0x157c00);
SET64(2, (s64)(s32)0x3e0000);
SET32(3, RW(4) << 2);
SET32(2, RW(2) + 3360);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0))); return;
}

void JP_F_00157C20(Ctx *c) { /* func_00157C20 */
ENTER(0x157c20);
c->f[0].u = RW(0);
 return;
}

void JP_F_00157C30(Ctx *c) { /* func_00157C30 */
ENTER(0x157c30);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
if (RD(2) != RD(0)) { SET32(3, RW(2) << 1); goto L_00157C44; }
SET64(2, RD(0) + RD(0)); goto L_00157C58;
L_00157C44:;
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + -4576);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 0)));
SET32(2, RW(2) << 11);
L_00157C58:;
 return;
}

void JP_F_00157C60(Ctx *c) { /* func_00157C60 */
ENTER(0x157c60);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_00157D88; }
wr8(c, (RW(17) + 0), (u8)RW(0));
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 4), RW(0));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
if (RD(3) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_00157CA4; }
SET64(3, rd16(c, (RW(3) + 0)));
SET64(3, RD(3) ^ 0x3);
SET64(3, RD(3) < (u64)(s64)1);
L_00157CA4:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 12))); goto L_00157D80; }
SET64(31, 0x157cb4);  JP_F_00138DD0(c);
SET64(4, (s32)rd32(c, (RW(2) + 68)));
{ int t = RD(4) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00157D70; }
SET64(5, rd16(c, (RW(16) + 60)));
SET32(3, RW(0) + 2);
if (RD(5) != RD(3)) { SET64(3, (s32)rd32(c, (RW(17) + 12))); goto L_00157D74; }
SET64(31, 0x157cd8);  JP_F_002A0A00(c);
SET32(3, RW(0) + 2);
if (RD(2) != RD(3)) { SET64(6, (s32)rd32(c, (RW(16) + 64))); goto L_00157CF0; }
SET64(31, 0x157cec); SET64(4, (s32)rd32(c, (RW(16) + 68))); JP_F_002A09B0(c);
SET64(6, (s32)rd32(c, (RW(16) + 64)));
L_00157CF0:;
SET64(3, (s64)(s32)0x530000);
SET64(4, (s32)rd32(c, (RW(16) + 68)));
SET32(3, RW(3) + -22320);
SET32(5, RW(6) << 2);
SET32(5, RW(5) + RW(6));
SET32(5, RW(5) << 2);
{ int t = RD(4) == RD(0); SET32(18, RW(3) + RW(5)); if (t) goto L_00157D20; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x157d20); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00157D20:;
wr32(c, (RW(16) + 68), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 72)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 72), RW(0)); goto L_00157D44; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x157d40); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 72), RW(0));
L_00157D44:;
SET64(4, (s32)rd32(c, (RW(16) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 76), RW(0)); goto L_00157D64; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x157d60); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 76), RW(0));
L_00157D64:;
SET32(3, RW(0) + 4);
wr16(c, (RW(18) + 0), (u16)RW(3));
wr16(c, (RW(16) + 60), (u16)RW(0));
L_00157D70:;
SET64(3, (s32)rd32(c, (RW(17) + 12)));
L_00157D74:;
SET32(4, RW(0) + 1);
wr16(c, (RW(3) + 0), (u16)RW(4));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
L_00157D80:;
wr16(c, (RW(3) + 0), (u16)RW(0));
wr32(c, (RW(17) + 12), RW(0));
L_00157D88:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00157DA0(Ctx *c) { /* func_00157DA0 */
ENTER(0x157da0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00157DC0; }
SET64(2, RD(0) + RD(0)); goto L_00157E04;
L_00157DC0:;
SET64(31, 0x157dc8);  JP_F_00138DD0(c);
SET64(31, 0x157dd0); SET64(4, RD(2) + RD(0)); JP_F_00157740(c);
SET64(2, rd8(c, (RW(16) + 1)));
if (RD(2) != RD(0)) { SET64(2, rd8(c, (RW(16) + 1))); goto L_00157DFC; }
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET32(2, RW(0) + 4);
SET64(3, rd16(c, (RW(3) + 0)));
{ int t = RD(3) != RD(2);  if (t) goto L_00157DF8; }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 1), (u8)RW(2));
L_00157DF8:;
SET64(2, rd8(c, (RW(16) + 1)));
L_00157DFC:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
L_00157E04:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00157E20(Ctx *c) { /* func_00157E20 */
ENTER(0x157e20);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
{ int t = RD(7) != RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_00157E58; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x157e54);  rt_call(c, t); }
SET32(7, RW(2) - RW(16));
L_00157E58:;
wr32(c, (RW(18) + 8), RW(17));
SET32(3, RW(0) + 2);
SET64(4, (s32)rd32(c, (RW(18) + 12)));
wr32(c, (RW(4) + 8), RW(17));
wr32(c, (RW(4) + 16), RW(16));
wr32(c, (RW(4) + 12), RW(7));
wr16(c, (RW(4) + 0), (u16)RW(3));
wr8(c, (RW(18) + 1), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00157E90(Ctx *c) { /* func_00157E90 */
ENTER(0x157e90);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00157EAC; }
SET32(5, RW(4) + -1);
SET64(31, 0x157eac); SET64(4, (s32)rd32(c, (RW(28) + -30252))); JP_F_002A04D0(c);
L_00157EAC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00157EC0(Ctx *c) { /* func_00157EC0 */
ENTER(0x157ec0);
SET32(29, RW(29) + -64);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET32(3, RW(2) << 2);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(2, (s64)(s32)0x3e0000);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(2, RW(2) + 3360);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(18, RD(4) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(17, RD(5) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x157efc); SET64(5, RD(18) + RD(0)); JP_F_00129EE0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00157F88; }
SET64(1, RSD(17) < (s64)13187);
{ int t = RD(1) == RD(0); SET64(16, RD(17) + RD(0)); if (t) goto L_00157F48; }
L_00157F10:;
SET64(2, (s64)(s32)0x3e0000);
SET32(3, RW(16) << 2);
SET32(2, RW(2) + 3360);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x157f2c); SET64(5, RD(18) + RD(0)); JP_F_00129EE0(c);
if (RD(2) != RD(0)) { SET32(16, RW(16) + 1); goto L_00157F3C; }
SET64(2, RD(16) + RD(0)); goto L_00157F8C;
L_00157F3C:;
SET64(2, RSD(16) < (s64)13187);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00157F10; } }
L_00157F48:;
{ int t = RD(17) == RD(0);  if (t) goto L_00157F88; }
L_00157F50:;
SET64(2, (s64)(s32)0x3e0000);
SET32(3, RW(17) << 2);
SET32(2, RW(2) + 3360);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x157f6c); SET64(5, RD(18) + RD(0)); JP_F_00129EE0(c);
if (RD(2) != RD(0)) { SET32(17, RW(17) + -1); goto L_00157F7C; }
SET64(2, RD(17) + RD(0)); goto L_00157F8C;
L_00157F7C:;
{ int t = RD(17) != RD(0);  if (t) { POLL(); goto L_00157F50; } }
L_00157F88:;
SET64(2, RD(0) + RD(0));
L_00157F8C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00157FB0(Ctx *c) { /* func_00157FB0 */
ENTER(0x157fb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, RD(5) + RD(0));
SET64(31, 0x157fcc); SET64(5, RD(0) + RD(0)); JP_F_00157EC0(c);
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_00158048; }
{ int t = RD(2) == RD(0);  if (t) goto L_00158044; }
SET64(4, (s64)(s32)0x530000);
wr32(c, (RW(16) + 4), RW(2));
SET32(3, RW(0) + 1);
SET64(5, RD(0) + RD(0));
wr8(c, (RW(16) + 0), (u8)RW(3));
SET32(4, RW(4) + -22320);
L_00157FF4:;
SET64(3, rd16(c, (RW(4) + 0)));
if (RD(3) != RD(0)) { SET32(5, RW(5) + 1); goto L_0015801C; }
SET32(4, RW(5) << 2);
SET64(3, (s64)(s32)0x530000);
SET32(4, RW(4) + RW(5));
SET32(3, RW(3) + -22320);
SET32(4, RW(4) << 2);
SET32(5, RW(3) + RW(4)); goto L_0015802C;
L_0015801C:;
SET64(3, RSD(5) < (s64)128);
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 20); if (t) { POLL(); goto L_00157FF4; } }
SET64(5, RD(0) + RD(0));
L_0015802C:;
wr32(c, (RW(16) + 12), RW(5));
SET32(3, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
wr32(c, (RW(5) + 4), RW(4));
wr16(c, (RW(5) + 0), (u16)RW(3));
wr8(c, (RW(16) + 1), (u8)RW(0));
L_00158044:;
SET64(31, rd64(c, (RW(29) + 16)));
L_00158048:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00158060(Ctx *c) { /* func_00158060 */
ENTER(0x158060);
{ int t = RD(5) == RD(0);  if (t) goto L_001580D0; }
wr32(c, (RW(4) + 4), RW(5));
SET32(3, RW(0) + 1);
SET64(5, (s64)(s32)0x530000);
wr8(c, (RW(4) + 0), (u8)RW(3));
SET64(6, RD(0) + RD(0));
SET32(5, RW(5) + -22320);
L_00158080:;
SET64(3, rd16(c, (RW(5) + 0)));
if (RD(3) != RD(0)) { SET32(6, RW(6) + 1); goto L_001580A8; }
SET32(5, RW(6) << 2);
SET64(3, (s64)(s32)0x530000);
SET32(5, RW(5) + RW(6));
SET32(3, RW(3) + -22320);
SET32(5, RW(5) << 2);
SET32(6, RW(3) + RW(5)); goto L_001580B8;
L_001580A8:;
SET64(3, RSD(6) < (s64)128);
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 20); if (t) { POLL(); goto L_00158080; } }
SET64(6, RD(0) + RD(0));
L_001580B8:;
wr32(c, (RW(4) + 12), RW(6));
SET32(3, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(6) + 4), RW(5));
wr16(c, (RW(6) + 0), (u16)RW(3));
wr8(c, (RW(4) + 1), (u8)RW(0));
L_001580D0:;
 return;
}

void JP_F_001580E0(Ctx *c) { /* func_001580E0 */
ENTER(0x1580e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1580fc); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00158110(Ctx *c) { /* func_00158110 */
ENTER(0x158110);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00158160; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 96);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x158148);  rt_call(c, t); }
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(17) + 8), RW(0)); if (t) goto L_00158160; }
SET64(31, 0x158160); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00158160:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00158180(Ctx *c) { /* func_00158180 */
ENTER(0x158180);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 96);
wr32(c, (RW(4) + 16), RW(2));
wr8(c, (RW(4) + 0), (u8)RW(0));
SET64(2, RD(4) + RD(0));
wr8(c, (RW(4) + 1), (u8)RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0)); return;
}

void JP_F_001581B0(Ctx *c) { /* func_001581B0 */
ENTER(0x1581b0);
SET32(4, RW(4) + -4); { JP_F_00157A20(c); return; }
}

void JP_F_001581C0(Ctx *c) { /* func_001581C0 */
ENTER(0x1581c0);
SET32(4, RW(4) + -24); { JP_F_00157A20(c); return; }
}

void JP_F_001581D0(Ctx *c) { /* func_001581D0 */
ENTER(0x1581d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(0) + RD(0));
SET64(3, RD(16) & 0xffff);
L_001581EC:;
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
SET32(2, RW(17) + RW(2));
SET32(4, RW(2) + 1100);
SET64(2, rd8(c, (RW(2) + 1100)));
if (RD(2) == RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 16))); goto L_0015821C; }
SET32(2, RW(0) + 1); goto L_00158228;
L_0015821C:;
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x158228);  rt_call(c, t); }
L_00158228:;
SET64(2, RD(2) & 0xff);
if (RD(2) == RD(0)) { SET32(2, RW(16) + 1); goto L_0015823C; }
SET64(2, RD(0) + RD(0)); goto L_0015827C;
L_0015823C:;
SET64(16, RD(2) & 0xffff);
SET64(2, RSD(16) < (s64)8);
if (RD(2) != RD(0)) { SET64(3, RD(16) & 0xffff); { POLL(); goto L_001581EC; } }
SET64(4, (s32)rd32(c, (RW(17) + 256)));
SET64(31, 0x158258); SET64(16, RD(0) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET64(16, RD(0) + (s64)1); goto L_00158278; }
{ int t = RD(2) == RD(0);  if (t) goto L_00158274; }
SET64(2, RD(16) + RD(0)); goto L_0015827C;
L_00158274:;
SET64(16, RD(0) + (s64)1);
L_00158278:;
SET64(2, RD(16) + RD(0));
L_0015827C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00158290(Ctx *c) { /* func_00158290 */
ENTER(0x158290);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001583F4; }
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 144);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 256)));
SET32(7, RW(7) + 340);
SET32(5, RW(5) + 216);
SET32(3, RW(3) + 248);
SET32(2, RW(17) + 2320);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 432), RW(5));
wr32(c, (RW(17) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x158300);  rt_call(c, t); }
SET64(5, (s64)(s32)0x160000);
SET32(4, RW(17) + 1036);
SET32(5, RW(5) + -31728);
SET32(6, RW(0) + 88);
SET64(31, 0x158318); SET32(7, RW(0) + 8); JP_F_00102360(c);
SET32(4, RW(17) + 952);
{ int t = RD(4) == RD(0);  if (t) goto L_0015832C; }
SET64(31, 0x15832c);  JP_F_002C0BF0(c);
L_0015832C:;
{ int t = RD(17) == RD(0);  if (t) goto L_001583AC; }
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -736);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 256)));
SET32(7, RW(7) + -584);
SET32(5, RW(5) + -664);
SET32(3, RW(3) + -632);
SET32(2, RW(17) + 912);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 432), RW(5));
wr32(c, (RW(17) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x158388); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 704);
SET64(31, 0x158394); SET64(5, RD(0) + RD(0)); JP_F_001531B0(c);
SET32(4, RW(17) + 288);
SET64(31, 0x1583a0); SET64(5, RD(0) + RD(0)); JP_F_002A5490(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1583ac); SET64(5, RD(0) + RD(0)); JP_F_00150CE0(c);
L_001583AC:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_001583E0; }
SET32(4, RW(17) + 2320);
{ int t = RD(4) == RD(0);  if (t) goto L_001583DC; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 2336), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1583dc);  rt_call(c, t); }
L_001583DC:;
SET64(2, RD(16) << 48);
L_001583E0:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001583F8; }
SET64(31, 0x1583f4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001583F4:;
SET64(2, RD(17) + RD(0));
L_001583F8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00158410(Ctx *c) { /* func_00158410 */
ENTER(0x158410);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00158480; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 544);
SET32(3, RW(3) + 552);
wr32(c, (RW(17) + 56), RW(2));
SET32(4, RW(17) + 64);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 564);
SET32(5, RW(0) + -1);
SET64(31, 0x15845c); wr32(c, (RW(17) + 36), RW(2)); JP_F_00158110(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x158468); SET64(5, RD(0) + RD(0)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00158484; }
SET64(31, 0x158480); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00158480:;
SET64(2, RD(17) + RD(0));
L_00158484:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001584A0(Ctx *c) { /* func_001584A0 */
ENTER(0x1584a0);
SET32(29, RW(29) + -272);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, rd8(c, (RW(4) + 1740)));
{ int t = RD(3) == RD(0); SET64(16, RD(7) + RD(0)); if (t) goto L_00158658; }
SET64(3, rd8(c, (RW(17) + 1741)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 112))); goto L_0015865C; }
SET64(3, (s32)rd32(c, (RW(17) + 1760)));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 772))); goto L_001584F8; }
 goto L_00158658;
SET64(3, (s32)rd32(c, (RW(17) + 772)));
L_001584F8:;
SET64(4, rd16(c, (RW(5) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 52)));
SET32(4, RW(4) << 4);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
if (RD(3) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_00158520; }
SET64(3, (s32)rd32(c, (RW(3) + 8))); goto L_00158520;
SET64(3, RD(0) + RD(0));
L_00158520:;
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(0);  if (t) goto L_00158658; }
SET64(3, (s32)rd32(c, (RW(17) + 1760)));
SET64(4, RD(8) & 0xffff);
SET32(4, RW(4) << 6);
SET32(20, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(20) + 60)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_00158558; }
c->f[0].u = RW(3);
c->f[3].f = (f32)(s32)c->f[0].u; goto L_00158570;
SET32(4, RW(3) >> 1);
L_00158558:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[3].f = (f32)(s32)c->f[0].u;
c->f[3].f = fpu(F(3) + F(3));
L_00158570:;
SET64(3, (s64)(s32)0x420000);
c->f[1].u = rd32(c, (RW(16) + 0));
c->f[0].u = RW(0);
c->f[2].u = rd32(c, (RW(3) + 4536));
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(12) * F(2));
c->fcc = F(0) < F(3);
{ int t = c->fcc; wr32(c, (RW(16) + 0), c->f[0].u); if (t) goto L_001585B0; }
L_00158594:;
c->f[0].u = rd32(c, (RW(16) + 0));
c->f[0].f = fpu(F(0) - F(3));
c->fcc = F(0) < F(3);
wr32(c, (RW(16) + 0), c->f[0].u);
{ int t = !c->fcc;  if (t) { POLL(); goto L_00158594; } }
L_001585B0:;
SET64(19, RD(6) & 0xffff);
{ int t = RD(19) == RD(0); SET64(22, RD(0) + RD(0)); if (t) goto L_00158658; }
{ int t = RD(19) == RD(0);  if (t) goto L_00158658; }
SET64(21, RD(5) + RD(0));
L_001585C8:;
SET64(18, rd16(c, (RW(21) + 0)));
c->f[12].u = rd32(c, (RW(16) + 0));
SET64(2, (s32)rd32(c, (RW(20) + 52)));
SET32(4, RW(29) + 144);
SET32(3, RW(18) << 4);
SET64(31, 0x1585e4); SET32(5, RW(2) + RW(3)); JP_F_002A47F0(c);
SET64(31, 0x1585ec); SET32(4, RW(29) + 208); JP_F_002AF080(c);
rd128(c, (RW(29) + 144) & ~15u, &c->r[6]);
SET64(5, RD(18) & 0xffff);
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]);
SET64(4, RD(17) + RD(0));
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 208) & ~15u, &c->r[6]);
wr128(c, (RW(29) + 224) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 240) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
SET64(31, 0x158618); wr128(c, (RW(29) + 256) & ~15u, &c->r[2]); JP_F_001520B0(c);
rd128(c, (RW(2) + 48) & ~15u, &c->r[5]);
SET64(4, RD(2) + RD(0));
rd128(c, (RW(29) + 208) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 256) & ~15u, &c->r[5]);
wr128(c, (RW(2) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 224) & ~15u, &c->r[3]);
wr128(c, (RW(2) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 240) & ~15u, &c->r[3]);
wr128(c, (RW(2) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 256) & ~15u, &c->r[3]);
SET64(31, 0x158648); wr128(c, (RW(2) + 48) & ~15u, &c->r[3]); JP_F_002A4D70(c);
SET32(22, RW(22) + 1);
SET64(3, RD(22) < RD(19));
{ int t = RD(3) != RD(0); SET32(21, RW(21) + 2); if (t) { POLL(); goto L_001585C8; } }
L_00158658:;
SET64(31, rd64(c, (RW(29) + 112)));
L_0015865C:;
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 272); return;
}

void JP_F_00158680(Ctx *c) { /* func_00158680 */
ENTER(0x158680);
SET32(29, RW(29) + -528);
wr64(c, (RW(29) + 160), RD(31));
wr128(c, (RW(29) + 144) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, rd8(c, (RW(4) + 1742)));
{ int t = RD(3) == RD(0); c->f[20].u = c->f[12].u; if (t) goto L_001589A8; }
SET64(5, (s32)rd32(c, (RW(21) + 1768)));
SET64(30, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(21) + 1764)));
SET64(18, RD(21) + RD(0));
wr32(c, (RW(29) + 176), RW(21));
SET64(4, RD(0) < RD(5));
c->f[0].u = RW(4);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(3) + 28), c->f[0].u);
L_001586F8:;
SET64(3, (s32)rd32(c, (RW(21) + 1768)));
SET64(3, RSD(3) < (s64)8);
{ int t = RD(3) != RD(0);  if (t) goto L_00158710; }
wr32(c, (RW(21) + 1768), RW(0));
L_00158710:;
SET64(3, (s32)rd32(c, (RW(29) + 176)));
SET64(16, rd16(c, (RW(3) + 2064)));
SET64(3, rd16(c, (RW(21) + 898)));
SET64(1, RSD(16) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_00158988; }
SET64(4, RD(21) + RD(0));
SET64(31, 0x158734); SET64(5, RD(16) + RD(0)); JP_F_001520B0(c);
SET64(23, (s32)rd32(c, (RW(21) + 1764)));
SET64(22, RD(16) & 0xffff);
SET64(20, RD(2) + RD(0));
SET64(5, RD(22) + RD(0));
SET32(19, RW(18) + 1776);
SET32(17, RW(18) + 1792);
SET64(4, (s32)rd32(c, (RW(23) + 0)));
SET64(31, 0x158758); SET32(16, RW(18) + 1808); JP_F_002ADD80(c);
c->f[12].u = rd32(c, (RW(23) + 28));
SET64(5, RD(2) + RD(0));
SET64(31, 0x158768); SET32(4, RW(29) + 400); JP_F_002A4A20(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 512), RW(0));
wr32(c, (RW(29) + 524), RW(2));
rd128(c, (RW(29) + 400) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 516), RW(0));
wr32(c, (RW(29) + 520), RW(0));
wr128(c, (RW(29) + 512) & ~15u, &c->r[2]);
SET64(23, (s32)rd32(c, (RW(21) + 1764)));
SET64(4, (s32)rd32(c, (RW(23) + 0)));
SET64(31, 0x158794); SET64(5, RD(22) + RD(0)); JP_F_002ADD80(c);
c->f[12].u = rd32(c, (RW(23) + 28));
SET64(5, RD(2) + RD(0));
SET64(31, 0x1587a4); SET32(4, RW(29) + 384); JP_F_002A49B0(c);
SET64(5, RD(22) + RD(0));
rd128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET64(22, (s32)rd32(c, (RW(21) + 1764)));
SET64(4, (s32)rd32(c, (RW(22) + 0)));
SET64(31, 0x1587bc); wr128(c, (RW(29) + 496) & ~15u, &c->r[2]); JP_F_002ADD80(c);
c->f[12].u = rd32(c, (RW(22) + 28));
SET64(5, RD(2) + RD(0));
SET64(31, 0x1587cc); SET32(4, RW(29) + 368); JP_F_002A4940(c);
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
SET32(4, RW(29) + 352);
SET64(5, RD(19) + RD(0));
SET32(6, RW(29) + 512);
c->f[12].u = c->f[20].u;
SET64(31, 0x1587e8); wr128(c, (RW(29) + 480) & ~15u, &c->r[2]); JP_F_001477E0(c);
rd128(c, (RW(29) + 352) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3f800000);
c->f[5].u = rd32(c, (RW(29) + 496));
wr32(c, (RW(29) + 348), RW(2));
c->f[0].u = rd32(c, (RW(29) + 500));
wr32(c, (RW(29) + 332), RW(2));
wr128(c, (RW(19) + 0) & ~15u, &c->r[3]);
c->f[3].u = rd32(c, (RW(29) + 504));
c->f[7].u = rd32(c, (RW(17) + 0));
SET32(4, RW(29) + 416);
c->f[8].u = rd32(c, (RW(17) + 4));
c->f[9].u = rd32(c, (RW(17) + 8));
c->f[5].f = fpu(F(5) - F(7));
c->f[6].u = RW(0);
c->f[4].f = fpu(F(0) - F(8));
c->facc = fpu(F(6) + F(7));
c->f[5].f = fpu(c->facc + F(20) * F(5));
c->facc = fpu(F(6) + F(8));
c->f[4].f = fpu(c->facc + F(20) * F(4));
c->f[3].f = fpu(F(3) - F(9));
c->facc = fpu(F(6) + F(9));
c->f[3].f = fpu(c->facc + F(20) * F(3));
wr32(c, (RW(29) + 336), c->f[5].u);
wr32(c, (RW(29) + 340), c->f[4].u);
wr32(c, (RW(29) + 344), c->f[3].u);
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 480));
c->f[1].u = rd32(c, (RW(29) + 484));
c->f[0].u = rd32(c, (RW(29) + 488));
wr128(c, (RW(17) + 0) & ~15u, &c->r[2]);
c->f[3].u = rd32(c, (RW(16) + 0));
c->f[4].u = rd32(c, (RW(16) + 4));
c->f[5].u = rd32(c, (RW(16) + 8));
c->f[2].f = fpu(F(2) - F(3));
c->facc = fpu(F(6) + F(3));
c->f[2].f = fpu(c->facc + F(20) * F(2));
c->f[1].f = fpu(F(1) - F(4));
c->facc = fpu(F(6) + F(4));
c->f[1].f = fpu(c->facc + F(20) * F(1));
c->f[0].f = fpu(F(0) - F(5));
c->facc = fpu(F(6) + F(5));
c->f[0].f = fpu(c->facc + F(20) * F(0));
wr32(c, (RW(29) + 320), c->f[2].u);
wr32(c, (RW(29) + 324), c->f[1].u);
wr32(c, (RW(29) + 328), c->f[0].u);
rd128(c, (RW(29) + 320) & ~15u, &c->r[2]);
SET64(31, 0x1588a8); wr128(c, (RW(16) + 0) & ~15u, &c->r[2]); JP_F_002AF080(c);
rd128(c, (RW(20) + 0) & ~15u, &c->r[2]);
SET64(5, RD(19) + RD(0));
SET32(4, RW(29) + 256);
wr128(c, (RW(29) + 416) & ~15u, &c->r[2]);
rd128(c, (RW(20) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 432) & ~15u, &c->r[2]);
rd128(c, (RW(20) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 448) & ~15u, &c->r[2]);
rd128(c, (RW(20) + 48) & ~15u, &c->r[2]);
SET64(31, 0x1588d4); wr128(c, (RW(29) + 464) & ~15u, &c->r[2]); JP_F_00147A60(c);
c->f[2].u = rd32(c, (RW(29) + 256));
SET32(4, RW(29) + 192);
c->f[1].u = rd32(c, (RW(29) + 272));
c->f[0].u = rd32(c, (RW(29) + 288));
wr32(c, (RW(29) + 416), c->f[2].u);
wr32(c, (RW(29) + 432), c->f[1].u);
wr32(c, (RW(29) + 448), c->f[0].u);
c->f[2].u = rd32(c, (RW(29) + 260));
c->f[1].u = rd32(c, (RW(29) + 276));
c->f[0].u = rd32(c, (RW(29) + 292));
wr32(c, (RW(29) + 420), c->f[2].u);
wr32(c, (RW(29) + 436), c->f[1].u);
wr32(c, (RW(29) + 452), c->f[0].u);
c->f[2].u = rd32(c, (RW(29) + 264));
c->f[1].u = rd32(c, (RW(29) + 280));
c->f[0].u = rd32(c, (RW(29) + 296));
wr32(c, (RW(29) + 424), c->f[2].u);
wr32(c, (RW(29) + 440), c->f[1].u);
wr32(c, (RW(29) + 456), c->f[0].u);
rd128(c, (RW(17) + 0) & ~15u, &c->r[2]);
SET64(31, 0x15892c); wr128(c, (RW(29) + 464) & ~15u, &c->r[2]); JP_F_002AF080(c);
SET64(31, 0x158934); SET32(4, RW(29) + 192); JP_F_002AF080(c);
c->f[0].u = rd32(c, (RW(16) + 0));
SET32(4, RW(29) + 416);
SET64(5, RD(4) + RD(0));
SET32(6, RW(29) + 192);
wr32(c, (RW(29) + 192), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 4));
wr32(c, (RW(29) + 212), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 8));
SET64(31, 0x15895c); wr32(c, (RW(29) + 232), c->f[0].u); JP_F_00106578(c);
rd128(c, (RW(29) + 416) & ~15u, &c->r[2]);
SET64(4, RD(20) + RD(0));
wr128(c, (RW(20) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 432) & ~15u, &c->r[2]);
wr128(c, (RW(20) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 448) & ~15u, &c->r[2]);
wr128(c, (RW(20) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 464) & ~15u, &c->r[2]);
SET64(31, 0x158984); wr128(c, (RW(20) + 48) & ~15u, &c->r[2]); JP_F_002A4D70(c);
L_00158988:;
SET64(3, (s32)rd32(c, (RW(29) + 176)));
SET32(30, RW(30) + 1);
SET32(3, RW(3) + 2);
wr32(c, (RW(29) + 176), RW(3));
SET64(3, RD(30) < (u64)(s64)6);
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 48); if (t) { POLL(); goto L_001586F8; } }
L_001589A8:;
SET64(31, rd64(c, (RW(29) + 160)));
rd128(c, (RW(29) + 144) & ~15u, &c->r[30]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 128) & ~15u, &c->r[23]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 528); return;
}

void JP_F_001589E0(Ctx *c) { /* func_001589E0 */
ENTER(0x1589e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 2248)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00158A6C; }
wr32(c, (RW(3) + 44), RW(0));
SET32(2, RW(0) + 5);
wr16(c, (RW(3) + 52), (u16)RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, rd16(c, (RW(3) + 50)));
wr16(c, (RW(3) + 48), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 2248)));
wr32(c, (RW(2) + 36), RW(0));
{ int t = RD(5) == RD(0); SET32(4, RW(2) + 36); if (t) goto L_00158A3C; }
SET64(2, rd16(c, (RW(5) + 14)));
{ int t = RD(2) != RD(0);  if (t) goto L_00158A3C; }
SET64(3, RD(2) | 0x1);
SET32(2, RW(5) + 32);
wr16(c, (RW(5) + 14), (u16)RW(3));
wr32(c, (RW(5) + 28), RW(2));
L_00158A3C:;
SET64(31, 0x158a44);  JP_F_002C08A0(c);
SET64(2, (s32)rd32(c, (RW(16) + 2248)));
SET64(5, rd16(c, (RW(2) + 52)));
SET64(2, RSD(5) < (s64)6);
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 1772), RW(5)); goto L_00158A60; }
SET32(5, RW(0) + 5);
wr32(c, (RW(16) + 1772), RW(5));
L_00158A60:;
SET64(31, 0x158a68); SET32(4, RW(16) + 952); JP_F_002C0A30(c);
wr32(c, (RW(16) + 1768), RW(2));
L_00158A6C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00158A80(Ctx *c) { /* func_00158A80 */
ENTER(0x158a80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 2248)));
if (RD(16) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_00158AD8; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x158aa4); SET64(6, RD(0) + RD(0)); JP_F_001573F0(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(16) + 36), RW(2)); if (t) goto L_00158AC8; }
SET64(3, rd16(c, (RW(2) + 14)));
if (RD(3) != RD(0)) { SET32(4, RW(16) + 36); goto L_00158ACC; }
SET64(4, RD(3) | 0x1);
SET32(3, RW(2) + 32);
wr16(c, (RW(2) + 14), (u16)RW(4));
wr32(c, (RW(2) + 28), RW(3));
L_00158AC8:;
SET32(4, RW(16) + 36);
L_00158ACC:;
SET64(31, 0x158ad4);  JP_F_002C08A0(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_00158AD8:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00158AF0(Ctx *c) { /* func_00158AF0 */
ENTER(0x158af0);
SET64(3, RSD(5) < (s64)8);
if (RD(3) != RD(0)) { wr32(c, (RW(4) + 1768), RW(5)); goto L_00158B04; }
SET64(5, RD(0) + RD(0));
wr32(c, (RW(4) + 1768), RW(5));
L_00158B04:;
 return;
}

void JP_F_00158B10(Ctx *c) { /* func_00158B10 */
ENTER(0x158b10);
SET32(29, RW(29) + -32);
SET64(2, RSD(5) < (s64)6);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00158B2C; }
SET32(5, RW(0) + 5);
L_00158B2C:;
wr32(c, (RW(16) + 1772), RW(5));
SET64(31, 0x158b38); SET32(4, RW(16) + 952); JP_F_002C0A30(c);
wr32(c, (RW(16) + 1768), RW(2));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00158B50(Ctx *c) { /* func_00158B50 */
ENTER(0x158b50);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd8(c, (RW(4) + 1742)));
{ int t = RD(2) != RD(0); SET64(22, RD(4) + RD(0)); if (t) goto L_00158D24; }
SET64(2, (s32)rd32(c, (RW(22) + 1012)));
if (RD(2) == RD(0)) { wr32(c, (RW(22) + 1768), RW(0)); goto L_00158D28; }
SET64(17, (s64)(s32)0x3f0000);
SET64(18, RD(0) + RD(0));
SET32(17, RW(17) + -9392);
SET64(16, RD(22) + RD(0));
L_00158B9C:;
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x158ba8); SET64(4, RD(22) + RD(0)); JP_F_001520D0(c);
wr16(c, (RW(16) + 2064), (u16)RW(2));
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)6);
SET32(17, RW(17) + 4);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_00158B9C; } }
SET32(17, RW(29) + 128);
SET64(16, (s32)rd32(c, (RW(22) + 1012)));
SET64(31, 0x158bd0); SET64(4, RD(17) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(16) + RD(0));
SET32(2, RW(2) + -32);
SET64(4, RD(17) + RD(0));
SET64(31, 0x158be8); wr32(c, (RW(29) + 144), RW(2)); JP_F_00157540(c);
SET64(31, 0x158bf0); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00158C00; }
SET64(31, 0x158c00); SET64(4, RD(16) + RD(0)); JP_F_00156540(c);
L_00158C00:;
wr32(c, (RW(22) + 1764), RW(16));
SET64(2, (s32)rd32(c, (RW(29) + 148)));
SET64(3, (s32)rd32(c, (RW(29) + 152)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(21, RW(3) + RW(2));
SET64(2, (s32)rd32(c, (RW(21) + 16)));
SET64(2, RD(0) < RD(2));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(22) + 1764))); goto L_00158C30; }
SET64(31, 0x158c2c); SET64(4, RD(21) + RD(0)); JP_F_00140290(c);
SET64(4, (s32)rd32(c, (RW(22) + 1764)));
L_00158C30:;
SET64(31, 0x158c38); SET64(5, RD(21) + RD(0)); JP_F_00156090(c);
SET64(18, (s64)(s32)0x3f0000);
SET64(20, RD(0) + RD(0));
SET32(18, RW(18) + -9392);
SET64(17, RD(22) + RD(0));
L_00158C48:;
SET64(2, rd16(c, (RW(21) + 8)));
{ int t = RD(2) == RD(0); SET64(19, RD(0) + RD(0)); if (t) goto L_00158CE8; }
SET64(16, RD(0) + RD(0));
L_00158C58:;
SET64(2, (s32)rd32(c, (RW(21) + 12)));
SET64(5, (s32)rd32(c, (RW(18) + 0)));
SET32(2, RW(2) + RW(16));
SET64(31, 0x158c6c); SET32(4, RW(2) + 4); JP_F_0012A278(c);
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(21) + 8))); goto L_00158CD8; }
SET64(2, rd16(c, (RW(17) + 2064)));
{ int t = RD(2) == RD(19);  if (t) goto L_00158CD4; }
SET64(4, (s32)rd32(c, (RW(22) + 1764)));
if (RD(4) == RD(0)) { wr32(c, (RW(22) + 1764), RW(0)); goto L_00158CA0; }
SET64(25, (s32)rd32(c, (RW(4) + 44)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x158c9c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(22) + 1764), RW(0));
L_00158CA0:;
SET64(31, 0x158ca8); SET64(4, (s32)rd32(c, (RW(22) + 1012))); JP_F_00100430(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(22) + 1012), RW(0));
SET32(2, RW(2) + -32);
SET32(4, RW(29) + 128);
SET64(31, 0x158cc0); wr32(c, (RW(29) + 144), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 128);
SET64(31, 0x158ccc); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(31, rd64(c, (RW(29) + 112))); goto L_00158D44;
L_00158CD4:;
SET64(2, rd16(c, (RW(21) + 8)));
L_00158CD8:;
SET32(19, RW(19) + 1);
SET64(2, RD(19) < RD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 48); if (t) { POLL(); goto L_00158C58; } }
L_00158CE8:;
SET32(20, RW(20) + 1);
SET64(2, RD(20) < (u64)(s64)6);
SET32(18, RW(18) + 4);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 2); if (t) { POLL(); goto L_00158C48; } }
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr8(c, (RW(22) + 1742), (u8)RW(3));
SET32(4, RW(29) + 128);
SET64(31, 0x158d18); wr32(c, (RW(29) + 144), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 128);
SET64(31, 0x158d24); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
L_00158D24:;
wr32(c, (RW(22) + 1768), RW(0));
L_00158D28:;
SET32(2, RW(0) + 5);
wr32(c, (RW(22) + 1772), RW(2));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x158d40); SET64(4, RD(22) + RD(0)); JP_F_00158680(c);
SET64(31, rd64(c, (RW(29) + 112)));
L_00158D44:;
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_00158D70(Ctx *c) { /* func_00158D70 */
ENTER(0x158d70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(6) + RD(0));
SET64(31, 0x158d90); SET32(4, RW(0) + 48); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 1000), RW(2)); goto L_00158DC8; }
wr32(c, (RW(2) + 4), RW(0));
wr8(c, (RW(2) + 8), (u8)RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 16), RW(0));
wr32(c, (RW(2) + 20), RW(0));
wr32(c, (RW(2) + 24), RW(0));
wr32(c, (RW(2) + 28), RW(0));
wr32(c, (RW(2) + 32), RW(0));
wr32(c, (RW(2) + 36), RW(0));
wr32(c, (RW(2) + 40), RW(0));
wr32(c, (RW(2) + 44), RW(0));
wr32(c, (RW(17) + 1000), RW(2));
L_00158DC8:;
SET64(31, 0x158dd0); SET64(4, RD(2) + RD(0)); JP_F_002C0C50(c);
SET64(3, (s32)rd32(c, (RW(17) + 1000)));
{ int t = RD(16) == RD(0); wr32(c, (RW(3) + 4), RW(16)); if (t) goto L_00158DEC; }
SET64(4, (s32)rd32(c, (RW(17) + 1000)));
SET64(5, (s32)rd32(c, (RW(17) + 1748)));
SET64(31, 0x158dec); SET64(6, (s32)rd32(c, (RW(17) + 944))); JP_F_002C0B70(c);
L_00158DEC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00158E00(Ctx *c) { /* func_00158E00 */
ENTER(0x158e00);
SET32(29, RW(29) + -48);
SET64(3, RD(5) & 0xffff);
wr64(c, (RW(29) + 16), RD(31));
SET32(3, RSW(3) >> 8);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, RD(3) & 0xff);
SET64(16, RD(4) + RD(0));
SET64(4, RSD(3) < (s64)9);
{ int t = RD(4) != RD(0); wr16(c, (RW(29) + 46), (u16)RW(3)); if (t) goto L_00158E64; }
SET64(5, (s32)rd32(c, (RW(16) + 1000)));
if (RD(5) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_00158E78; }
SET32(4, RW(3) + -9);
SET64(3, (s32)rd32(c, (RW(5) + 12)));
{ int t = RD(3) == RD(0); SET64(4, RD(4) & 0xffff); if (t) goto L_00158E58; }
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET64(4, RD(4) & 0xffff);
SET32(4, RW(4) << 6);
SET32(3, RW(3) + RW(4)); goto L_00158E5C;
L_00158E58:;
SET64(3, RD(0) + RD(0));
L_00158E5C:;
wr32(c, (RW(16) + 1004), RW(3)); goto L_00158E74;
L_00158E64:;
SET32(4, RW(16) + 952);
SET64(31, 0x158e70); SET32(5, RW(29) + 46); JP_F_002C0930(c);
wr32(c, (RW(16) + 1004), RW(2));
L_00158E74:;
SET64(31, rd64(c, (RW(29) + 16)));
L_00158E78:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00158E90(Ctx *c) { /* func_00158E90 */
ENTER(0x158e90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, RD(5) & 0xffff);
SET64(3, RSD(4) < (s64)9);
{ int t = RD(3) != RD(0); wr16(c, (RW(29) + 46), (u16)RW(5)); if (t) goto L_00158EEC; }
SET64(3, (s32)rd32(c, (RW(16) + 1000)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_00158F00; }
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET32(4, RW(4) + -9);
{ int t = RD(3) == RD(0); SET64(4, RD(4) & 0xffff); if (t) goto L_00158EE0; }
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET64(4, RD(4) & 0xffff);
SET32(4, RW(4) << 6);
SET32(3, RW(3) + RW(4)); goto L_00158EE4;
L_00158EE0:;
SET64(3, RD(0) + RD(0));
L_00158EE4:;
wr32(c, (RW(16) + 1004), RW(3)); goto L_00158EFC;
L_00158EEC:;
SET32(4, RW(16) + 952);
SET64(31, 0x158ef8); SET32(5, RW(29) + 46); JP_F_002C0930(c);
wr32(c, (RW(16) + 1004), RW(2));
L_00158EFC:;
SET64(31, rd64(c, (RW(29) + 16)));
L_00158F00:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00158F10(Ctx *c) { /* func_00158F10 */
ENTER(0x158f10);
SET64(3, (s32)rd32(c, (RW(4) + 964)));
if (RD(3) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_00158F2C; }
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET64(5, RD(5) & 0xffff);
SET32(5, RW(5) << 6);
SET32(3, RW(3) + RW(5));
L_00158F2C:;
wr32(c, (RW(4) + 1004), RW(3)); return;
}

void JP_F_00158F40(Ctx *c) { /* func_00158F40 */
ENTER(0x158f40);
c->f[0].u = rd32(c, (RW(4) + 268)); return;
}

void JP_F_00158F50(Ctx *c) { /* func_00158F50 */
ENTER(0x158f50);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 1024)));
{ int t = RD(4) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00158F78; }
SET64(31, 0x158f78); c->f[12].u = rd32(c, (RW(16) + 0)); JP_F_002BAB00(c);
L_00158F78:;
SET64(4, (s32)rd32(c, (RW(17) + 1020)));
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_00158F90; }
SET64(31, 0x158f8c); SET64(5, RD(16) + RD(0)); JP_F_0022CDB0(c);
SET64(4, RD(17) + RD(0));
L_00158F90:;
SET64(31, 0x158f98); SET64(5, RD(16) + RD(0)); JP_F_001532B0(c);
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET32(4, RW(29) + 48);
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x158fac); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
c->f[0].u = rd32(c, (RW(16) + 0));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(29) + 60), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x158fc8); SET32(5, RW(29) + 48); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 1024)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_00158FE0; }
SET64(31, 0x158fdc); c->f[12].u = rd32(c, (RW(16) + 0)); JP_F_002BAB00(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_00158FE0:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00158FF0(Ctx *c) { /* func_00158FF0 */
ENTER(0x158ff0);
SET32(29, RW(29) + -16);
SET64(3, RD(5) & 0xff);
if (RD(3) != RD(0)) { wr8(c, (RW(4) + 2240), (u8)RW(5)); goto L_00159020; }
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 0), RW(0));
wr32(c, (RW(29) + 12), RW(3));
wr32(c, (RW(29) + 4), RW(0));
wr32(c, (RW(29) + 8), RW(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 2224) & ~15u, &c->r[3]);
wr8(c, (RW(4) + 2240), (u8)RW(5));
L_00159020:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00159030(Ctx *c) { /* func_00159030 */
ENTER(0x159030);
SET32(29, RW(29) + -640);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(5, rd16(c, (RW(4) + 2124)));
SET64(31, 0x159060); SET64(19, RD(4) + RD(0)); JP_F_001520B0(c);
SET64(17, RD(2) + RD(0));
SET64(31, 0x15906c); SET32(4, RW(29) + 176); JP_F_002AF080(c);
rd128(c, (RW(17) + 64) & ~15u, &c->r[2]);
SET32(4, RW(29) + 176);
wr128(c, (RW(29) + 176) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 80) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 192) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 208) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 112) & ~15u, &c->r[2]);
SET64(31, 0x159094); wr128(c, (RW(29) + 224) & ~15u, &c->r[2]); JP_F_002AE990(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x1590a0); SET32(4, RW(29) + 560); JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[2]);
SET32(6, RW(29) + 560);
SET32(4, RW(29) + 464);
SET32(5, RW(19) + 2208);
wr128(c, (RW(29) + 560) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 576) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 592) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[2]);
SET64(31, 0x1590d0); wr128(c, (RW(29) + 608) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 544), RW(0));
wr32(c, (RW(29) + 556), RW(2));
SET32(4, RW(29) + 448);
wr32(c, (RW(29) + 444), RW(2));
SET32(5, RW(29) + 432);
rd128(c, (RW(29) + 464) & ~15u, &c->r[2]);
SET32(6, RW(29) + 560);
wr32(c, (RW(29) + 548), RW(0));
wr32(c, (RW(29) + 552), RW(0));
wr32(c, (RW(29) + 432), RW(0));
wr32(c, (RW(29) + 436), RW(0));
wr32(c, (RW(29) + 440), RW(0));
wr128(c, (RW(29) + 544) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 112) & ~15u, &c->r[2]);
SET64(31, 0x159114); wr128(c, (RW(29) + 432) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 528), RW(0));
c->f[20].u = RW(2);
wr32(c, (RW(29) + 540), RW(2));
wr32(c, (RW(29) + 524), RW(2));
c->f[0].u = rd32(c, (RW(29) + 544));
rd128(c, (RW(29) + 448) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 548));
wr32(c, (RW(29) + 532), RW(0));
SET32(4, RW(29) + 512);
wr32(c, (RW(29) + 536), RW(0));
wr128(c, (RW(29) + 528) & ~15u, &c->r[2]);
c->f[4].u = rd32(c, (RW(29) + 528));
c->f[3].u = rd32(c, (RW(29) + 532));
c->f[1].u = rd32(c, (RW(29) + 536));
c->f[4].f = fpu(F(4) - F(0));
c->f[0].u = rd32(c, (RW(29) + 552));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 512), c->f[4].u);
wr32(c, (RW(29) + 516), c->f[2].u);
SET64(31, 0x159170); wr32(c, (RW(29) + 520), c->f[0].u); JP_F_002B0360(c);
SET64(31, 0x159178); SET32(4, RW(29) + 512); JP_F_002B0290(c);
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[1].u = RW(2);
c->fcc = F(0) < F(1);
if (!c->fcc) { SET64(2, (s64)(s32)0x3fc90000); goto L_001591B4; }
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 160), RW(0));
wr32(c, (RW(29) + 172), RW(2));
wr32(c, (RW(29) + 164), RW(0));
wr32(c, (RW(29) + 168), RW(0));
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 544) & ~15u, &c->r[2]); goto L_0015930C;
L_001591B4:;
SET64(3, (s64)(s32)0x3f800000);
SET64(2, RD(2) | 0xfdb);
SET32(4, RW(19) + 2224);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(29) + 520));
SET64(2, (s64)(s32)0xbf860000);
c->f[2].u = rd32(c, (RW(29) + 512));
SET64(2, RD(2) | 0xa92);
c->f[0].f = fpu(F(0) * F(1));
wr32(c, (RW(29) + 544), c->f[0].u);
c->f[1].u = c->f[1].u & 0x7FFFFFFFu;
c->f[0].u = RW(3);
c->f[0].f = fpu(F(0) - F(1));
c->f[1].f = fpu(F(2) * F(0));
c->f[0].u = RW(2);
c->f[0].f = fpu(F(0) * F(1));
wr32(c, (RW(29) + 552), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32584));
SET64(31, 0x15920c); wr32(c, (RW(29) + 548), c->f[0].u); JP_F_002B0290(c);
c->f[21].u = c->f[0].u;
SET64(31, 0x159218); SET32(4, RW(29) + 544); JP_F_002B0290(c);
SET64(31, 0x159220); c->f[12].f = fpu(F(0) + F(21)); JP_F_00121728(c);
SET64(4, (s64)(s32)0x40120000);
SET64(3, RD(0) | 0x8800);
SET64(4, RD(4) | 0xd97c);
SET64(3, RD(3) << 16);
SET64(5, RD(4) << 32);
SET64(4, RD(2) + RD(0));
SET64(31, 0x159240); SET64(5, RD(3) | RD(5)); JP_F_00121EA8(c);
SET64(31, 0x159248); SET64(4, RD(2) + RD(0)); JP_F_001222E0(c);
c->f[20].f = fpu(F(20) - F(0));
c->f[0].u = RW(0);
c->fcc = F(20) < F(0);
if (!c->fcc) { c->f[5].u = rd32(c, (RW(19) + 2232)); goto L_00159268; }
c->f[20].u = c->f[0].u;
c->f[5].u = rd32(c, (RW(19) + 2232));
L_00159268:;
SET64(2, (s64)(s32)0x3f800000);
c->f[4].u = rd32(c, (RW(29) + 552));
wr32(c, (RW(29) + 428), RW(2));
c->f[3].u = rd32(c, (RW(19) + 2228));
SET64(2, (s64)(s32)0x3ea00000);
c->f[2].u = rd32(c, (RW(29) + 548));
SET64(2, RD(2) | 0xd97c);
c->f[4].f = fpu(F(4) - F(5));
c->f[2].f = fpu(F(2) - F(3));
c->f[1].u = rd32(c, (RW(19) + 2224));
c->f[0].u = rd32(c, (RW(29) + 544));
wr32(c, (RW(29) + 424), c->f[4].u);
wr32(c, (RW(29) + 420), c->f[2].u);
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(29) + 416), c->f[0].u);
c->f[3].u = RW(2);
rd128(c, (RW(29) + 416) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 544) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(18) + 0));
c->f[0].u = rd32(c, (RW(29) + 544));
c->f[2].f = fpu(F(3) * F(2));
c->fcc = F(0) <= F(2);
{ int t = c->fcc; c->f[1].u = rd32(c, (RW(29) + 544)); if (t) goto L_001592D0; }
wr32(c, (RW(29) + 544), c->f[2].u); goto L_001592E4;
L_001592D0:;
c->f[0].u = c->f[2].u ^ 0x80000000u;
c->fcc = F(1) < F(0);
if (!c->fcc) { c->f[1].u = rd32(c, (RW(29) + 552)); goto L_001592E8; }
wr32(c, (RW(29) + 544), c->f[0].u);
L_001592E4:;
c->f[1].u = rd32(c, (RW(29) + 552));
L_001592E8:;
c->fcc = F(1) <= F(2);
if (c->fcc) { c->f[0].u = c->f[2].u ^ 0x80000000u; goto L_001592FC; }
wr32(c, (RW(29) + 552), c->f[2].u); goto L_0015930C;
L_001592FC:;
c->fcc = F(1) < F(0);
if (!c->fcc) { c->f[1].u = rd32(c, (RW(19) + 2224)); goto L_00159310; }
wr32(c, (RW(29) + 552), c->f[0].u);
L_0015930C:;
c->f[1].u = rd32(c, (RW(19) + 2224));
L_00159310:;
c->f[0].u = rd32(c, (RW(29) + 544));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(19) + 2224), c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 2228));
c->f[0].u = rd32(c, (RW(29) + 548));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(19) + 2228), c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 2232));
c->f[0].u = rd32(c, (RW(29) + 552));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(19) + 2232), c->f[0].u);
SET64(2, rd16(c, (RW(19) + 952)));
SET64(1, RSD(2) < (s64)3);
if (RD(1) == RD(0)) { SET64(2, (s64)(s32)0x3f800000); goto L_001593D0; }
SET64(2, (s64)(s32)0x3f860000);
SET64(2, RD(2) | 0xa92);
c->f[1].u = rd32(c, (RW(19) + 2224));
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(2, (s64)(s32)0xbf860000); goto L_00159388; }
SET32(2, RW(0) + 1);
SET32(4, RW(19) + 952);
wr16(c, (RW(29) + 638), (u16)RW(2));
SET64(31, 0x159380); SET32(5, RW(29) + 638); JP_F_002C0930(c);
wr32(c, (RW(19) + 1004), RW(2)); goto L_001593CC;
L_00159388:;
SET64(2, RD(2) | 0xa92);
c->f[0].u = RW(2);
c->fcc = F(1) < F(0);
if (!c->fcc) { SET32(4, RW(19) + 952); goto L_001593BC; }
SET32(2, RW(0) + 2);
SET32(4, RW(19) + 952);
wr16(c, (RW(29) + 636), (u16)RW(2));
SET64(31, 0x1593b4); SET32(5, RW(29) + 636); JP_F_002C0930(c);
wr32(c, (RW(19) + 1004), RW(2)); goto L_001593CC;
L_001593BC:;
SET32(5, RW(29) + 634);
SET64(31, 0x1593c8); wr16(c, (RW(29) + 634), (u16)RW(0)); JP_F_002C0930(c);
wr32(c, (RW(19) + 1004), RW(2));
L_001593CC:;
SET64(2, (s64)(s32)0x3f800000);
L_001593D0:;
SET32(4, RW(29) + 96);
wr32(c, (RW(29) + 508), RW(2));
wr32(c, (RW(29) + 492), RW(2));
wr32(c, (RW(29) + 496), RW(0));
wr32(c, (RW(29) + 500), RW(0));
wr32(c, (RW(29) + 504), RW(0));
wr32(c, (RW(29) + 480), RW(0));
wr32(c, (RW(29) + 484), RW(0));
SET64(31, 0x1593f8); wr32(c, (RW(29) + 488), RW(0)); JP_F_0013AEA0(c);
SET32(5, RW(19) + 2224);
SET64(31, 0x159404); SET32(4, RW(29) + 96); JP_F_001594D0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x159410); SET32(4, RW(29) + 336); JP_F_0013ADA0(c);
SET32(4, RW(29) + 400);
SET64(31, 0x15941c); SET32(5, RW(29) + 336); JP_F_00148050(c);
rd128(c, (RW(29) + 400) & ~15u, &c->r[2]);
SET32(4, RW(29) + 320);
SET64(5, RD(17) + RD(0));
SET64(31, 0x159430); wr128(c, (RW(29) + 496) & ~15u, &c->r[2]); JP_F_00148050(c);
rd128(c, (RW(29) + 320) & ~15u, &c->r[2]);
c->f[12].u = c->f[20].u;
SET32(4, RW(29) + 240);
SET32(5, RW(29) + 496);
SET32(6, RW(29) + 480);
SET64(31, 0x15944c); wr128(c, (RW(29) + 480) & ~15u, &c->r[2]); JP_F_001477E0(c);
SET32(4, RW(29) + 256);
SET64(31, 0x159458); SET32(5, RW(29) + 240); JP_F_00147A60(c);
SET64(31, 0x159460); SET64(4, RD(17) + RD(0)); JP_F_002A4D70(c);
c->f[0].u = rd32(c, (RW(29) + 256));
wr32(c, (RW(17) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 272));
wr32(c, (RW(17) + 16), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 288));
wr32(c, (RW(17) + 32), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 260));
wr32(c, (RW(17) + 4), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 276));
wr32(c, (RW(17) + 20), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 292));
wr32(c, (RW(17) + 36), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 264));
wr32(c, (RW(17) + 8), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 280));
wr32(c, (RW(17) + 24), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 296));
wr32(c, (RW(17) + 40), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 80)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 640); return;
}

void JP_F_001594D0(Ctx *c) { /* func_001594D0 */
ENTER(0x1594d0);
SET32(29, RW(29) + -240);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(4) + RD(0));
SET64(31, 0x1594f0); SET32(4, RW(29) + 176); JP_F_002AF080(c);
SET64(31, 0x1594f8); SET32(4, RW(29) + 176); JP_F_002AF080(c);
SET64(5, RD(17) + RD(0));
SET64(31, 0x159504); SET32(4, RW(29) + 176); JP_F_002AED70(c);
SET32(4, RW(29) + 48);
SET32(5, RW(29) + 176);
SET64(31, 0x159514); SET64(6, RD(16) + RD(0)); JP_F_002AEAE0(c);
SET64(31, 0x15951c); SET32(4, RW(29) + 112); JP_F_002AF080(c);
rd128(c, (RW(29) + 48) & ~15u, &c->r[5]);
SET64(2, RD(16) + RD(0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[5]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 240); return;
}

void JP_F_00159580(Ctx *c) { /* func_00159580 */
ENTER(0x159580);
SET32(29, RW(29) + -16);
SET64(2, RD(5) & 0xffff);
SET32(2, RW(2) << 1);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + RW(4));
SET64(31, 0x15959c); SET64(5, rd16(c, (RW(2) + 2146))); JP_F_001520B0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001595B0(Ctx *c) { /* func_001595B0 */
ENTER(0x1595b0);
SET64(2, (s32)rd32(c, (RW(4) + 1020)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001595C0; }
SET64(2, (s32)rd32(c, (RW(2) + 920)));
L_001595C0:;
 return;
}

void JP_F_001595D0(Ctx *c) { /* func_001595D0 */
ENTER(0x1595d0);
SET32(29, RW(29) + -128);
SET64(2, (s64)(s32)0x3f000000);
wr64(c, (RW(29) + 48), RD(31));
c->f[12].u = RW(2);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x1595fc); SET64(16, RD(6) + RD(0)); JP_F_00158680(c);
SET32(4, RW(18) + 288);
SET64(5, RD(17) + RD(0));
SET64(31, 0x15960c); SET64(6, RD(16) + RD(0)); JP_F_002BA7B0(c);
SET64(31, 0x159614); SET32(4, RW(29) + 64); JP_F_002AF080(c);
SET64(5, rd16(c, (RW(18) + 2124)));
SET64(3, RD(0) | 0xffff);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(18) + 2120))); goto L_00159650; }
SET64(31, 0x15962c); SET64(4, RD(18) + RD(0)); JP_F_001520B0(c);
rd128(c, (RW(2) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[3]);
rd128(c, (RW(2) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[3]);
rd128(c, (RW(2) + 96) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[3]);
rd128(c, (RW(2) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[3]); goto L_00159684;
L_00159650:;
if (RD(4) == RD(0)) { SET32(4, RW(29) + 64); goto L_0015967C; }
rd128(c, (RW(4) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[3]);
rd128(c, (RW(4) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[3]);
rd128(c, (RW(4) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[3]);
rd128(c, (RW(4) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[3]); goto L_00159684;
L_0015967C:;
SET64(31, 0x159684);  JP_F_002AF080(c);
L_00159684:;
SET64(4, (s32)rd32(c, (RW(18) + 1020)));
if (RD(4) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 1024))); goto L_001596A8; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x1596a4); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 1024)));
L_001596A8:;
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_001596CC; }
SET64(25, (s32)rd32(c, (RW(3) + 176)));
SET64(5, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1596c8); SET32(4, RW(3) + 32); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
L_001596CC:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_001596E0(Ctx *c) { /* func_001596E0 */
ENTER(0x1596e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 1020)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_00159708; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x159704); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_00159708:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00159710(Ctx *c) { /* func_00159710 */
ENTER(0x159710);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 912)));
SET64(16, RD(4) + RD(0));
rd128(c, (RW(3) + 0) & ~15u, &c->r[2]);
SET32(4, RW(16) + 288);
wr128(c, (RW(16) + 288) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 320) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
SET64(31, 0x15974c); wr128(c, (RW(16) + 336) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(2, (s8)rd8(c, (RW(28) + -30312)));
if (RD(2) != RD(0)) { SET32(4, RW(29) + 96); goto L_001597B4; }
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
SET64(31, 0x1597a8); c->f[19].u = c->f[13].u; JP_F_002AF0D0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30312), (u8)RW(2));
SET32(4, RW(29) + 96);
L_001597B4:;
SET64(31, 0x1597bc);  JP_F_002AF080(c);
SET64(8, (s64)(s32)0x420000);
SET32(5, RW(29) + 96);
SET32(8, RW(8) + -17024);
SET64(4, RD(16) + RD(0));
rd128(c, (RW(8) + 0) & ~15u, &c->r[7]);
rd128(c, (RW(8) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(8) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
rd128(c, (RW(8) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(16) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x1597fc); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_00159810(Ctx *c) { /* func_00159810 */
ENTER(0x159810);
SET32(29, RW(29) + -256);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 48), RD(31));
SET32(5, RW(29) + 240);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 76), c->f[12].u);
wr32(c, (RW(29) + 252), RW(2));
wr32(c, (RW(29) + 240), RW(0));
wr32(c, (RW(29) + 244), RW(0));
SET64(31, 0x159848); wr32(c, (RW(29) + 248), RW(0)); JP_F_00152170(c);
SET64(17, RD(2) & 0xff);
SET64(2, rd8(c, (RW(18) + 2112)));
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(18) + 2113))); goto L_00159928; }
SET64(16, (s32)rd32(c, (RW(18) + 912)));
SET64(31, 0x159864); SET32(4, RW(29) + 176); JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 128), RW(0));
SET32(6, RW(29) + 176);
wr32(c, (RW(29) + 132), RW(0));
SET32(4, RW(29) + 96);
wr128(c, (RW(29) + 176) & ~15u, &c->r[3]);
SET32(5, RW(29) + 240);
rd128(c, (RW(16) + 16) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 140), RW(2));
wr32(c, (RW(29) + 136), RW(0));
wr128(c, (RW(29) + 192) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 208) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 224) & ~15u, &c->r[3]);
SET64(31, 0x1598b0); wr128(c, (RW(29) + 224) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 240) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(18) + 912)));
c->f[0].u = rd32(c, (RW(29) + 240));
c->f[1].u = rd32(c, (RW(2) + 48));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(2) + 48), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 912)));
c->f[0].u = rd32(c, (RW(29) + 248));
c->f[1].u = rd32(c, (RW(2) + 56));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(2) + 56), c->f[0].u);
SET64(5, rd16(c, (RW(18) + 896)));
SET64(31, 0x1598ec); SET64(4, RD(18) + RD(0)); JP_F_001520B0(c);
rd128(c, (RW(2) + 48) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(28) + -32600));
c->f[0].u = rd32(c, (RW(28) + -32596));
SET64(5, rd16(c, (RW(18) + 896)));
SET64(4, RD(18) + RD(0));
wr128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 160), c->f[1].u);
SET64(31, 0x159910); wr32(c, (RW(29) + 168), c->f[0].u); JP_F_001520B0(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x15991c); SET64(4, RD(16) + RD(0)); JP_F_002A4D70(c);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[2]); goto L_00159974;
L_00159928:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(18) + 920))); goto L_00159978; }
SET64(5, rd16(c, (RW(18) + 896)));
SET64(31, 0x15993c); SET64(4, RD(18) + RD(0)); JP_F_001520B0(c);
rd128(c, (RW(2) + 48) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(28) + -32592));
c->f[0].u = rd32(c, (RW(28) + -32588));
SET64(5, rd16(c, (RW(18) + 896)));
SET64(4, RD(18) + RD(0));
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 144), c->f[1].u);
SET64(31, 0x159960); wr32(c, (RW(29) + 152), c->f[0].u); JP_F_001520B0(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x15996c); SET64(4, RD(16) + RD(0)); JP_F_002A4D70(c);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[2]);
L_00159974:;
SET64(2, rd8(c, (RW(18) + 920)));
L_00159978:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 1024))); goto L_001599B0; }
SET64(3, (s32)rd32(c, (RW(18) + 912)));
SET32(4, RW(18) + 288);
rd128(c, (RW(3) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 288) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 320) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
SET64(31, 0x1599ac); wr128(c, (RW(18) + 336) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(4, (s32)rd32(c, (RW(18) + 1024)));
L_001599B0:;
if (RD(4) == RD(0)) { SET64(2, rd8(c, (RW(18) + 2192))); goto L_001599C4; }
SET64(31, 0x1599c0); c->f[12].u = rd32(c, (RW(29) + 76)); JP_F_00235250(c);
SET64(2, rd8(c, (RW(18) + 2192)));
L_001599C4:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(18) + 2240))); goto L_001599F0; }
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 92), RW(2));
wr32(c, (RW(29) + 84), RW(0));
wr32(c, (RW(29) + 88), RW(0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 2224) & ~15u, &c->r[2]);
wr8(c, (RW(18) + 2240), (u8)RW(0));
SET64(2, rd8(c, (RW(18) + 2240)));
L_001599F0:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 2248))); goto L_00159A08; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x159a04); SET32(5, RW(29) + 76); JP_F_00159030(c);
SET64(2, (s32)rd32(c, (RW(18) + 2248)));
L_00159A08:;
{ int t = RD(2) == RD(0); c->f[12].u = rd32(c, (RW(29) + 76)); if (t) goto L_00159A5C; }
SET64(3, rd16(c, (RW(2) + 48)));
SET32(4, RW(2) + 36);
SET64(2, rd16(c, (RW(2) + 50)));
SET64(2, RSD(3) < RSD(2));
SET64(2, RD(2) ^ 0x1);
if (RD(2) != RD(0)) { SET64(2, RD(17) + RD(0)); goto L_00159A60; }
SET64(31, 0x159a34);  JP_F_002C07D0(c);
SET64(2, (s32)rd32(c, (RW(18) + 2248)));
SET64(5, rd16(c, (RW(2) + 52)));
SET64(2, RSD(5) < (s64)6);
if (RD(2) != RD(0)) { wr32(c, (RW(18) + 1772), RW(5)); goto L_00159A50; }
SET32(5, RW(0) + 5);
wr32(c, (RW(18) + 1772), RW(5));
L_00159A50:;
SET64(31, 0x159a58); SET32(4, RW(18) + 952); JP_F_002C0A30(c);
wr32(c, (RW(18) + 1768), RW(2));
L_00159A5C:;
SET64(2, RD(17) + RD(0));
L_00159A60:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 256); return;
}

void JP_F_00159A80(Ctx *c) { /* func_00159A80 */
ENTER(0x159a80);
SET32(29, RW(29) + -128);
SET64(7, RD(0) + RD(0));
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(6, rd16(c, (RW(4) + 2080)));
c->f[22].u = c->f[12].u;
{ int t = RSD(6) <= 0; SET64(3, RD(6) + RD(0)); if (t) goto L_00159B20; }
SET64(5, (s32)rd32(c, (RW(19) + 2076)));
SET64(4, RD(18) & 0xffff);
SET64(2, RD(7) & 0xffff);
L_00159AD0:;
SET32(2, RW(3) + RW(2));
SET32(2, RSW(2) >> 1);
SET64(3, RD(2) & 0xffff);
SET32(2, RW(3) << 1);
SET32(2, RW(5) + RW(2));
SET64(2, rd16(c, (RW(2) + 0)));
SET64(1, RSD(2) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_00159B00; }
SET32(2, RW(3) + 1);
SET64(7, RD(2) & 0xffff); goto L_00159B08;
L_00159B00:;
SET64(6, RD(3) + RD(0));
L_00159B08:;
SET64(3, RD(6) & 0xffff);
SET64(2, RD(7) & 0xffff);
SET64(2, RSD(2) < RSD(3));
if (RD(2) != RD(0)) { SET64(2, RD(7) & 0xffff); { POLL(); goto L_00159AD0; } }
L_00159B20:;
SET64(2, (s32)rd32(c, (RW(19) + 2076)));
SET64(3, RD(7) & 0xffff);
SET64(4, RD(18) & 0xffff);
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 0)));
if (RD(4) != RD(2)) { SET64(7, RD(0) + RD(0)); goto L_00159B40; }
L_00159B40:;
SET64(2, rd8(c, (RW(19) + 2116)));
{ int t = RD(2) != RD(0); SET64(16, RD(7) & 0xffff); if (t) goto L_00159B58; }
SET32(2, RW(0) + 1);
wr8(c, (RW(19) + 2116), (u8)RW(2)); goto L_00159BB0;
L_00159B58:;
SET64(4, RD(19) + RD(0));
SET64(31, 0x159b64); SET32(5, RW(0) + 1); JP_F_001520B0(c);
c->f[21].u = rd32(c, (RW(2) + 116));
SET64(5, (s32)rd32(c, (RW(19) + 912)));
SET64(3, RD(16) & 0xffff);
SET32(4, RW(29) + 96);
SET32(3, RW(3) << 6);
SET64(2, (s32)rd32(c, (RW(19) + 1760)));
c->f[20].u = rd32(c, (RW(5) + 52));
c->f[12].u = RW(0);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 52)));
SET64(31, 0x159b94); SET32(5, RW(2) + 16); JP_F_002A49B0(c);
c->f[1].f = fpu(F(21) - F(20));
SET64(2, (s32)rd32(c, (RW(19) + 912)));
c->f[0].u = rd32(c, (RW(29) + 100));
c->f[1].f = fpu(F(1) - F(0));
c->f[0].u = rd32(c, (RW(2) + 52));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(2) + 52), c->f[0].u);
L_00159BB0:;
SET64(2, (s32)rd32(c, (RW(19) + 1760)));
SET64(3, RD(16) & 0xffff);
SET32(3, RW(3) << 6);
SET64(6, RD(17) + RD(0));
c->f[12].u = c->f[22].u;
SET64(4, RD(19) + RD(0));
SET64(31, 0x159bd0); SET32(5, RW(2) + RW(3)); JP_F_00152590(c);
wr16(c, (RW(19) + 2082), (u16)RW(16));
wr16(c, (RW(19) + 2084), (u16)RW(18));
SET64(31, 0x159be0); SET64(4, rd16(c, (RW(19) + 2084))); JP_F_002C0C70(c);
SET64(3, RD(2) & 0xffff);
SET32(3, RSW(3) >> 8);
SET64(3, RD(3) & 0xff);
wr16(c, (RW(29) + 126), (u16)RW(3));
SET64(4, rd16(c, (RW(29) + 126)));
SET64(3, RSD(4) < (s64)9);
if (RD(3) != RD(0)) { SET32(4, RW(19) + 952); goto L_00159C3C; }
SET64(3, (s32)rd32(c, (RW(19) + 1000)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_00159C4C; }
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET32(4, RW(4) + -9);
{ int t = RD(3) == RD(0); SET64(4, RD(4) & 0xffff); if (t) goto L_00159C30; }
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET64(4, RD(4) & 0xffff);
SET32(4, RW(4) << 6);
SET32(3, RW(3) + RW(4)); goto L_00159C34;
L_00159C30:;
SET64(3, RD(0) + RD(0));
L_00159C34:;
wr32(c, (RW(19) + 1004), RW(3)); goto L_00159C48;
L_00159C3C:;
SET64(31, 0x159c44); SET32(5, RW(29) + 126); JP_F_002C0930(c);
wr32(c, (RW(19) + 1004), RW(2));
L_00159C48:;
SET64(31, rd64(c, (RW(29) + 80)));
L_00159C4C:;
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_00159C70(Ctx *c) { /* func_00159C70 */
ENTER(0x159c70);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 1008)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00159D3C; }
SET64(2, (s32)rd32(c, (RW(16) + 1760)));
SET64(3, RD(17) & 0xffff);
SET32(3, RW(3) << 6);
SET64(31, 0x159ca4); SET32(5, RW(2) + RW(3)); JP_F_00152590(c);
wr16(c, (RW(16) + 2082), (u16)RW(17));
SET64(3, (s32)rd32(c, (RW(16) + 2076)));
{ int t = RD(3) == RD(0); SET64(2, rd16(c, (RW(16) + 2082))); if (t) goto L_00159CC4; }
SET32(2, RW(2) << 1);
SET32(2, RW(3) + RW(2));
SET64(2, rd16(c, (RW(2) + 0))); goto L_00159CC8;
L_00159CC4:;
SET64(2, RD(0) + RD(0));
L_00159CC8:;
wr16(c, (RW(16) + 2084), (u16)RW(2));
SET64(31, 0x159cd4); SET64(4, rd16(c, (RW(16) + 2084))); JP_F_002C0C70(c);
SET64(3, RD(2) & 0xffff);
SET32(3, RSW(3) >> 8);
SET64(3, RD(3) & 0xff);
wr16(c, (RW(29) + 62), (u16)RW(3));
SET64(4, rd16(c, (RW(29) + 62)));
SET64(3, RSD(4) < (s64)9);
if (RD(3) != RD(0)) { SET32(4, RW(16) + 952); goto L_00159D30; }
SET64(3, (s32)rd32(c, (RW(16) + 1000)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_00159D40; }
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET32(4, RW(4) + -9);
{ int t = RD(3) == RD(0); SET64(4, RD(4) & 0xffff); if (t) goto L_00159D24; }
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET64(4, RD(4) & 0xffff);
SET32(4, RW(4) << 6);
SET32(3, RW(3) + RW(4)); goto L_00159D28;
L_00159D24:;
SET64(3, RD(0) + RD(0));
L_00159D28:;
wr32(c, (RW(16) + 1004), RW(3)); goto L_00159D3C;
L_00159D30:;
SET64(31, 0x159d38); SET32(5, RW(29) + 62); JP_F_002C0930(c);
wr32(c, (RW(16) + 1004), RW(2));
L_00159D3C:;
SET64(31, rd64(c, (RW(29) + 32)));
L_00159D40:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00159D50(Ctx *c) { /* func_00159D50 */
ENTER(0x159d50);
SET32(29, RW(29) + -80);
SET64(8, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(7, rd16(c, (RW(4) + 2080)));
SET64(16, RD(5) + RD(0));
{ int t = RSD(7) <= 0; SET64(3, RD(7) + RD(0)); if (t) goto L_00159DD8; }
SET64(5, (s32)rd32(c, (RW(17) + 2076)));
SET64(4, RD(16) & 0xffff);
SET64(2, RD(8) & 0xffff);
L_00159D88:;
SET32(2, RW(3) + RW(2));
SET32(2, RSW(2) >> 1);
SET64(3, RD(2) & 0xffff);
SET32(2, RW(3) << 1);
SET32(2, RW(5) + RW(2));
SET64(2, rd16(c, (RW(2) + 0)));
SET64(1, RSD(2) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_00159DB8; }
SET32(2, RW(3) + 1);
SET64(8, RD(2) & 0xffff); goto L_00159DC0;
L_00159DB8:;
SET64(7, RD(3) + RD(0));
L_00159DC0:;
SET64(3, RD(7) & 0xffff);
SET64(2, RD(8) & 0xffff);
SET64(2, RSD(2) < RSD(3));
if (RD(2) != RD(0)) { SET64(2, RD(8) & 0xffff); { POLL(); goto L_00159D88; } }
L_00159DD8:;
SET64(2, (s32)rd32(c, (RW(17) + 2076)));
SET64(3, RD(8) & 0xffff);
SET64(4, RD(16) & 0xffff);
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 0)));
if (RD(4) != RD(2)) { SET64(8, RD(0) + RD(0)); goto L_00159DF8; }
L_00159DF8:;
SET64(2, (s32)rd32(c, (RW(17) + 1760)));
SET64(18, RD(8) & 0xffff);
SET32(3, RW(18) << 6);
SET64(4, RD(17) + RD(0));
SET64(31, 0x159e10); SET32(5, RW(2) + RW(3)); JP_F_00152590(c);
wr16(c, (RW(17) + 2082), (u16)RW(18));
wr16(c, (RW(17) + 2084), (u16)RW(16));
SET64(31, 0x159e20); SET64(4, rd16(c, (RW(17) + 2084))); JP_F_002C0C70(c);
SET64(3, RD(2) & 0xffff);
SET32(3, RSW(3) >> 8);
SET64(3, RD(3) & 0xff);
wr16(c, (RW(29) + 78), (u16)RW(3));
SET64(4, rd16(c, (RW(29) + 78)));
SET64(3, RSD(4) < (s64)9);
if (RD(3) != RD(0)) { SET32(4, RW(17) + 952); goto L_00159E7C; }
SET64(3, (s32)rd32(c, (RW(17) + 1000)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_00159E8C; }
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET32(4, RW(4) + -9);
{ int t = RD(3) == RD(0); SET64(4, RD(4) & 0xffff); if (t) goto L_00159E70; }
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET64(4, RD(4) & 0xffff);
SET32(4, RW(4) << 6);
SET32(3, RW(3) + RW(4)); goto L_00159E74;
L_00159E70:;
SET64(3, RD(0) + RD(0));
L_00159E74:;
wr32(c, (RW(17) + 1004), RW(3)); goto L_00159E88;
L_00159E7C:;
SET64(31, 0x159e84); SET32(5, RW(29) + 78); JP_F_002C0930(c);
wr32(c, (RW(17) + 1004), RW(2));
L_00159E88:;
SET64(31, rd64(c, (RW(29) + 48)));
L_00159E8C:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00159EA0(Ctx *c) { /* func_00159EA0 */
ENTER(0x159ea0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x159eb0);  JP_F_001CC290(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00159EC0(Ctx *c) { /* func_00159EC0 */
ENTER(0x159ec0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 2114)));
{ int t = RSD(3) <= 0; SET64(16, RD(4) + RD(0)); if (t) goto L_00159EEC; }
SET64(31, 0x159ee0);  JP_F_001CC2C0(c);
SET64(3, rd16(c, (RW(16) + 2114)));
SET32(3, RW(3) + -1);
wr16(c, (RW(16) + 2114), (u16)RW(3));
L_00159EEC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00159F00(Ctx *c) { /* func_00159F00 */
ENTER(0x159f00);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 2);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(5) + 16)));
if (RD(4) == RD(3)) { SET64(4, RD(16) + RD(0)); goto L_00159F34; }
SET64(3, rd16(c, (RW(16) + 2114)));
SET64(1, RSD(3) < (s64)4);
if (RD(1) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_00159F4C; }
SET64(4, RD(16) + RD(0));
L_00159F34:;
SET64(31, 0x159f3c);  JP_F_001CC2E0(c);
SET64(3, rd16(c, (RW(16) + 2114)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 2114), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
L_00159F4C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00159F60(Ctx *c) { /* func_00159F60 */
ENTER(0x159f60);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
c->f[0].u = rd32(c, (RW(5) + 12));
SET64(16, RD(5) + RD(0));
wr32(c, (RW(29) + 60), c->f[0].u);
SET64(31, 0x159f88); SET32(5, RW(29) + 60); JP_F_001532B0(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 512) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00159FB0(Ctx *c) { /* func_00159FB0 */
ENTER(0x159fb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 912)));
rd128(c, (RW(3) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 288) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 320) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 336) & ~15u, &c->r[2]);
SET64(31, 0x159fe4); SET32(4, RW(4) + 288); JP_F_002A4D70(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00159FF0(Ctx *c) { /* func_00159FF0 */
ENTER(0x159ff0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x15a020); SET64(16, RD(6) + RD(0)); rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_0015A0E4; }
SET64(2, (s32)rd32(c, (RW(18) + 1752)));
SET32(4, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(28) + -32608)));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET32(3, RW(3) << 6);
SET32(2, RW(2) + RW(3));
wr8(c, (RW(2) + 57), (u8)RW(4));
SET64(2, (s32)rd32(c, (RW(18) + 1752)));
SET64(3, (s32)rd32(c, (RW(28) + -32604)));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET32(3, RW(3) << 6);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x15a068); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 1004)));
if (RD(3) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_0015A094; }
SET32(2, RW(0) + 1);
wr8(c, (RW(3) + 57), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 1004)));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x15a090); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
L_0015A094:;
SET64(5, RD(17) + RD(0));
SET64(31, 0x15a0a0); SET64(6, RD(16) + RD(0)); JP_F_00152630(c);
SET64(4, (s32)rd32(c, (RW(18) + 1020)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 1024))); goto L_0015A0C4; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x15a0c0); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 1024)));
L_0015A0C4:;
{ int t = RD(4) == RD(0);  if (t) goto L_0015A0E0; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x15a0e0); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
L_0015A0E0:;
SET64(31, rd64(c, (RW(29) + 48)));
L_0015A0E4:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_0015A100(Ctx *c) { /* func_0015A100 */
ENTER(0x15a100);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x15a110);  JP_F_00152720(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0015A120(Ctx *c) { /* func_0015A120 */
ENTER(0x15a120);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x15a130); SET64(6, RD(0) + RD(0)); JP_F_001527D0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0015A140(Ctx *c) { /* func_0015A140 */
ENTER(0x15a140);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 1016)));
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET64(3, RD(0) < RD(3));
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_0015A1A8; }
SET64(31, 0x15a168); SET64(4, RD(16) + RD(0)); JP_F_0015A2B0(c);
SET64(31, 0x15a170); SET64(4, RD(16) + RD(0)); JP_F_0015A290(c);
SET64(3, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(3) != RD(0);  if (t) goto L_0015A1A4; }
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 8))); goto L_0015A194; }
SET32(2, RW(16) + RW(2));
wr32(c, (RW(16) + 8), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
L_0015A194:;
SET64(31, 0x15a19c); SET64(5, RD(16) + RD(0)); JP_F_0015A1C0(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 12), RW(3));
L_0015A1A4:;
SET64(31, rd64(c, (RW(29) + 16)));
L_0015A1A8:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015A1C0(Ctx *c) { /* func_0015A1C0 */
ENTER(0x15a1c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
if (RD(2) == RD(0)) { SET64(2, rd16(c, (RW(4) + 6))); goto L_0015A1E0; }
SET32(2, RW(5) + RW(2));
wr32(c, (RW(4) + 8), RW(2));
SET64(2, rd16(c, (RW(4) + 6)));
L_0015A1E0:;
{ int t = RD(2) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_0015A220; }
SET64(6, RD(0) + RD(0));
L_0015A1EC:;
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET32(3, RW(2) + RW(6));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_0015A208; }
SET32(2, RW(5) + RW(2));
wr32(c, (RW(3) + 0), RW(2));
L_0015A208:;
SET64(2, rd16(c, (RW(4) + 6)));
SET32(7, RW(7) + 1);
SET64(2, RD(7) < RD(2));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_0015A1EC; } }
L_0015A220:;
SET64(2, (s32)rd32(c, (RW(4) + 12)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 16))); goto L_0015A238; }
SET32(2, RW(5) + RW(2));
wr32(c, (RW(4) + 12), RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 16)));
L_0015A238:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_0015A24C; }
SET32(2, RW(5) + RW(2));
wr32(c, (RW(4) + 16), RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 20)));
L_0015A24C:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 24))); goto L_0015A260; }
SET32(2, RW(5) + RW(2));
wr32(c, (RW(4) + 20), RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 24)));
L_0015A260:;
{ int t = RD(2) == RD(0);  if (t) goto L_0015A270; }
SET32(2, RW(5) + RW(2));
wr32(c, (RW(4) + 24), RW(2));
L_0015A270:;
SET64(31, 0x15a278);  JP_F_002FFD20(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0015A290(Ctx *c) { /* func_0015A290 */
ENTER(0x15a290);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s64)(s32)0x20060000);
SET64(2, RD(2) | 0x426);
SET64(2, RD(3) ^ RD(2));
SET64(2, RD(2) < (u64)(s64)1); return;
}

void JP_F_0015A2B0(Ctx *c) { /* func_0015A2B0 */
ENTER(0x15a2b0);
 return;
}

void JP_F_0015A2C0(Ctx *c) { /* func_0015A2C0 */
ENTER(0x15a2c0);
 return;
}

void JP_F_0015A2D0(Ctx *c) { /* func_0015A2D0 */
ENTER(0x15a2d0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 1741)));
{ int t = RD(3) != RD(0); SET64(19, RD(4) + RD(0)); if (t) goto L_0015A438; }
SET64(17, (s32)rd32(c, (RW(19) + 1008)));
if (RD(17) == RD(0)) { SET32(3, RW(0) + 1); goto L_0015A434; }
SET32(18, RW(29) + 80);
SET64(31, 0x15a30c); SET64(4, RD(18) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(17) + RD(0));
SET32(2, RW(2) + -32);
SET64(4, RD(18) + RD(0));
SET64(31, 0x15a324); wr32(c, (RW(29) + 96), RW(2)); JP_F_00157540(c);
SET64(2, rd16(c, (RW(29) + 112)));
SET64(17, RD(0) + RD(0));
wr16(c, (RW(19) + 2080), (u16)RW(2));
SET64(18, rd16(c, (RW(19) + 2080)));
SET32(2, RW(18) << 6);
SET64(31, 0x15a340); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0015A370; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(8, RD(18) + RD(0));
SET32(17, RW(0) + 1);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 25920);
SET32(6, RW(6) + 25536);
SET64(31, 0x15a36c); SET32(7, RW(0) + 64); JP_F_00102580(c);
SET64(16, RD(2) + RD(0));
L_0015A370:;
wr32(c, (RW(19) + 1760), RW(16));
SET64(2, rd16(c, (RW(19) + 2080)));
SET64(31, 0x15a380); SET32(4, RW(2) << 1); JP_F_00100530(c);
wr32(c, (RW(19) + 2076), RW(2));
SET64(2, rd16(c, (RW(19) + 2080)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_0015A410; }
SET64(3, (s32)rd32(c, (RW(29) + 108)));
L_0015A394:;
SET64(16, RD(18) & 0xffff);
SET32(5, RW(16) << 1);
SET64(2, (s32)rd32(c, (RW(19) + 2076)));
SET32(4, RW(16) << 2);
SET32(3, RW(3) + RW(5));
SET64(3, rd16(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(5));
wr16(c, (RW(2) + 0), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(29) + 100)));
SET64(2, (s32)rd32(c, (RW(29) + 104)));
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(17, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 16)));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_0015A3E0; }
SET64(31, 0x15a3e0); SET64(4, RD(17) + RD(0)); JP_F_00140290(c);
L_0015A3E0:;
SET64(2, (s32)rd32(c, (RW(19) + 1760)));
SET32(3, RW(16) << 6);
SET64(5, RD(17) + RD(0));
SET64(31, 0x15a3f4); SET32(4, RW(2) + RW(3)); JP_F_00156090(c);
SET64(2, rd16(c, (RW(19) + 2080)));
SET32(3, RW(18) + 1);
SET64(18, RD(3) & 0xffff);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(29) + 108))); { POLL(); goto L_0015A394; } }
L_0015A410:;
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
SET32(4, RW(29) + 80);
SET64(31, 0x15a424); wr32(c, (RW(29) + 96), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 80);
SET64(31, 0x15a430); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET32(3, RW(0) + 1);
L_0015A434:;
wr8(c, (RW(19) + 1741), (u8)RW(3));
L_0015A438:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_0015A460(Ctx *c) { /* func_0015A460 */
ENTER(0x15a460);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 1740)));
{ int t = RD(3) != RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_0015AB5C; }
SET64(16, (s32)rd32(c, (RW(18) + 936)));
SET32(2, RW(0) + 67);
SET64(3, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(3) != RD(2); SET64(17, RD(0) + RD(0)); if (t) goto L_0015A4D0; }
SET64(3, (s8)rd8(c, (RW(16) + 1)));
SET32(2, RW(0) + 77);
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_0015A4D4; }
SET64(3, (s8)rd8(c, (RW(16) + 2)));
SET32(2, RW(0) + 80);
{ int t = RD(3) != RD(2);  if (t) goto L_0015A4D0; }
SET64(3, (s8)rd8(c, (RW(16) + 3)));
SET32(2, RW(0) + 83);
if (RD(3) == RD(2)) { SET64(2, RD(0) + (s64)1); goto L_0015A4D4; }
L_0015A4D0:;
SET64(2, RD(0) + RD(0));
L_0015A4D4:;
{ int t = RD(2) == RD(0);  if (t) goto L_0015A4F8; }
SET64(31, 0x15a4e4); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_00100320(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x15a4f4); SET64(5, RD(17) + RD(0)); JP_F_00174300(c);
SET64(16, RD(17) + RD(0));
L_0015A4F8:;
SET64(2, (s32)rd32(c, (RW(16) + 12)));
SET64(2, RD(0) < RD(2));
if (RD(2) != RD(0)) { SET64(5, rd16(c, (RW(18) + 1744))); goto L_0015A514; }
SET64(31, 0x15a510); SET64(4, RD(16) + RD(0)); JP_F_001400B0(c);
SET64(5, rd16(c, (RW(18) + 1744)));
L_0015A514:;
if (RD(5) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_0015A528; }
SET64(31, 0x15a524); SET64(4, RD(16) + RD(0)); JP_F_00140040(c);
SET64(4, RD(18) + RD(0));
L_0015A528:;
SET64(5, RD(16) + RD(0));
SET64(31, 0x15a534); SET64(6, RD(0) + RD(0)); JP_F_001529A0(c);
SET64(31, 0x15a53c); SET32(4, RW(0) + 960); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_0015A5B8; }
SET32(4, RW(20) + 932);
SET32(19, RW(0) + 1);
SET64(31, 0x15a554); wr32(c, (RW(20) + 256), RW(4)); JP_F_00141C80(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x15a560); SET64(5, RD(0) + RD(0)); JP_F_001530D0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(6, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -1552);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(20) + 276), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(5, (s32)rd32(c, (RW(20) + 256)));
SET32(6, RW(6) + -1388);
SET32(4, RW(4) + -1480);
SET32(3, RW(3) + -1448);
SET32(2, RW(20) + 932);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(20) + 432), RW(4));
wr32(c, (RW(20) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(20) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
wr32(c, (RW(20) + 912), RW(0));
wr32(c, (RW(20) + 916), RW(0));
wr32(c, (RW(20) + 920), RW(0));
wr32(c, (RW(20) + 924), RW(0));
wr16(c, (RW(20) + 928), (u16)RW(0));
L_0015A5B8:;
wr32(c, (RW(18) + 1020), RW(20));
SET32(2, RW(0) + 63);
SET64(3, rd16(c, (RW(18) + 918)));
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(18) + 1020))); goto L_0015A5E4; }
SET32(2, RW(0) + 62);
{ int t = RD(3) == RD(2);  if (t) goto L_0015A5E0; }
SET64(4, (s32)rd32(c, (RW(18) + 1020))); goto L_0015A5F0;
L_0015A5E0:;
SET64(2, (s32)rd32(c, (RW(18) + 1020)));
L_0015A5E4:;
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + 928), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 1020)));
L_0015A5F0:;
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x15a604); SET64(6, RD(18) + RD(0)); rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(2, rd8(c, (RW(18) + 932))); goto L_0015A630; }
SET64(4, (s32)rd32(c, (RW(18) + 1020)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 1020), RW(0)); goto L_0015A62C; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15a628); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 1020), RW(0));
L_0015A62C:;
SET64(2, rd8(c, (RW(18) + 932)));
L_0015A630:;
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 1024), RW(0)); goto L_0015A7C8; }
SET64(3, rd16(c, (RW(18) + 918)));
SET64(1, RSD(3) < (s64)64);
{ int t = RD(1) == RD(0);  if (t) goto L_0015A7C4; }
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 26096);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_0015A7C4; }
SET64(31, 0x15a668); SET32(4, RW(0) + 624); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_0015A740; }
SET64(31, 0x15a678); SET64(4, RD(20) + RD(0)); JP_F_00141C80(c);
SET32(4, RW(20) + 32);
SET64(31, 0x15a684); SET32(5, RW(0) + 1); JP_F_002BAA90(c);
SET32(19, RW(20) + 352);
SET64(31, 0x15a690); SET64(4, RD(19) + RD(0)); JP_F_002B3FD0(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(21, RW(20) + 448);
SET32(2, RW(2) + 512);
SET64(4, RD(21) + RD(0));
SET64(31, 0x15a6a8); wr32(c, (RW(19) + 8), RW(2)); JP_F_002B4380(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 480);
SET32(3, RW(3) + 8512);
wr32(c, (RW(21) + 8), RW(2));
SET32(4, RW(20) + 512);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(20) + 16), RW(3));
SET32(2, RW(2) + 8548);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(20) + 176), RW(2));
SET32(3, RW(3) + 8580);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(20) + 360), RW(3));
SET32(2, RW(2) + 8600);
wr32(c, (RW(20) + 456), RW(2));
SET64(31, 0x15a6f0); wr32(c, (RW(20) + 496), RW(0)); JP_F_002B5760(c);
wr32(c, (RW(20) + 576), RW(0));
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 1760);
wr32(c, (RW(20) + 580), RW(0));
SET32(2, RW(2) + 1796);
wr32(c, (RW(20) + 16), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(20) + 176), RW(2));
SET32(3, RW(3) + 1828);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 1848);
wr32(c, (RW(20) + 360), RW(3));
wr32(c, (RW(20) + 456), RW(2));
wr8(c, (RW(20) + 592), (u8)RW(0));
wr32(c, (RW(20) + 596), RW(0));
wr32(c, (RW(20) + 600), RW(0));
wr32(c, (RW(20) + 604), RW(0));
wr16(c, (RW(20) + 608), (u16)RW(0));
wr16(c, (RW(20) + 610), (u16)RW(0));
L_0015A740:;
wr32(c, (RW(18) + 1024), RW(20));
SET64(2, (s64)(s32)0x490000);
SET64(7, rd16(c, (RW(18) + 918)));
SET32(2, RW(2) + 26096);
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET64(5, RD(16) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(6, RD(18) + RD(0));
SET32(3, RW(2) + RW(7));
SET64(2, RD(7) ^ 0x17);
SET64(25, (s32)rd32(c, (RW(25) + 128)));
SET64(7, rd8(c, (RW(3) + 0)));
{ u32 t = RW(25); SET64(31, 0x15a778); SET64(8, RD(2) < (u64)(s64)1); rt_call(c, t); }
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 1024))); goto L_0015A7AC; }
SET64(4, (s32)rd32(c, (RW(18) + 1024)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 1024), RW(0)); goto L_0015A7C8; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15a7a0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 1024), RW(0));
 goto L_0015A7C8;
L_0015A7AC:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x15a7bc); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
 goto L_0015A7C8;
L_0015A7C4:;
wr32(c, (RW(18) + 1024), RW(0));
L_0015A7C8:;
SET64(16, (s32)rd32(c, (RW(18) + 940)));
{ int t = RD(16) == RD(0);  if (t) goto L_0015AA30; }
SET32(19, RW(29) + 144);
SET64(31, 0x15a7e0); SET64(4, RD(19) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(16) + RD(0));
SET32(2, RW(2) + -32);
SET64(4, RD(19) + RD(0));
SET64(31, 0x15a7f8); wr32(c, (RW(29) + 160), RW(2)); JP_F_00157540(c);
SET64(3, (s32)rd32(c, (RW(29) + 164)));
SET32(2, RW(0) + 2);
SET64(4, (s32)rd32(c, (RW(29) + 168)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(3, RW(4) + RW(3));
wr32(c, (RW(18) + 944), RW(3));
SET64(3, rd16(c, (RW(29) + 176)));
if (RD(3) != RD(2)) { wr32(c, (RW(18) + 948), RW(0)); goto L_0015A830; }
SET64(3, (s32)rd32(c, (RW(29) + 164)));
SET64(2, (s32)rd32(c, (RW(29) + 168)));
SET64(3, (s32)rd32(c, (RW(3) + 4)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(18) + 948), RW(2));
L_0015A830:;
SET64(2, rd8(c, (RW(18) + 1746)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 948))); goto L_0015A8D8; }
SET64(31, 0x15a844); SET32(4, RW(0) + 32); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0015A854; }
SET64(31, 0x15a854); SET64(4, RD(16) + RD(0)); JP_F_001509B0(c);
L_0015A854:;
wr32(c, (RW(18) + 1748), RW(16));
SET32(2, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(18) + 924)));
if (RD(3) == RD(2)) { SET64(4, (s32)rd32(c, (RW(18) + 1748))); goto L_0015A8C0; }
SET32(2, RW(0) + 3);
{ int t = RD(3) == RD(2);  if (t) goto L_0015A8BC; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2);  if (t) goto L_0015A8BC; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(4, (s32)rd32(c, (RW(18) + 1748))); goto L_0015A8A0; }
{ int t = RD(3) == RD(0);  if (t) goto L_0015A89C; }
 goto L_0015A8D4;
L_0015A89C:;
SET64(4, (s32)rd32(c, (RW(18) + 1748)));
L_0015A8A0:;
SET32(5, RW(0) + 512);
SET64(6, RD(5) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x15a8b4); SET32(8, RW(0) + 1); JP_F_00150830(c);
 goto L_0015A8D4;
L_0015A8BC:;
SET64(4, (s32)rd32(c, (RW(18) + 1748)));
L_0015A8C0:;
SET32(5, RW(0) + 256);
SET32(7, RW(0) + 1);
SET64(6, RD(5) + RD(0));
SET64(31, 0x15a8d4); SET64(8, RD(7) + RD(0)); JP_F_00150830(c);
L_0015A8D4:;
SET64(2, (s32)rd32(c, (RW(18) + 948)));
L_0015A8D8:;
if (RD(2) == RD(0)) { SET32(4, RW(0) + 24); goto L_0015A930; }
SET64(2, rd8(c, (RW(18) + 1746)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1748))); goto L_0015A928; }
SET64(31, 0x15a8f4); SET32(4, RW(0) + 32); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0015A904; }
SET64(31, 0x15a904); SET64(4, RD(16) + RD(0)); JP_F_001509B0(c);
L_0015A904:;
SET32(5, RW(0) + 128);
SET64(4, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x15a920); wr32(c, (RW(18) + 1756), RW(16)); JP_F_00150830(c);
 goto L_0015A92C;
L_0015A928:;
wr32(c, (RW(18) + 1756), RW(2));
L_0015A92C:;
SET32(4, RW(0) + 24);
L_0015A930:;
SET64(31, 0x15a938);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0015A948; }
SET64(31, 0x15a948); SET64(4, RD(16) + RD(0)); JP_F_001F4480(c);
L_0015A948:;
wr32(c, (RW(18) + 1752), RW(16));
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(18) + 940)));
SET64(31, 0x15a95c); SET32(6, RW(28) + -32628); JP_F_001F4360(c);
SET64(2, (s32)rd32(c, (RW(18) + 1752)));
SET64(8, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(28) + -32624)));
SET64(5, (s32)rd32(c, (RW(18) + 944)));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET64(6, (s32)rd32(c, (RW(18) + 1748)));
SET32(3, RW(3) << 6);
SET64(7, RD(5) + RD(0));
SET64(31, 0x15a984); SET32(4, RW(2) + RW(3)); JP_F_0014FC00(c);
SET64(5, (s32)rd32(c, (RW(18) + 948)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 1752))); goto L_0015A9B8; }
SET64(2, (s32)rd32(c, (RW(18) + 1752)));
SET64(7, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(28) + -32620)));
SET64(8, RD(0) + RD(0));
SET64(6, (s32)rd32(c, (RW(18) + 1756)));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET32(3, RW(3) << 6);
SET64(31, 0x15a9b4); SET32(4, RW(2) + RW(3)); JP_F_0014FC00(c);
SET64(4, (s32)rd32(c, (RW(18) + 1752)));
L_0015A9B8:;
SET64(31, 0x15a9c0);  JP_F_001F3C60(c);
SET64(2, (s32)rd32(c, (RW(18) + 1752)));
SET64(4, RD(18) + RD(0));
SET64(3, (s32)rd32(c, (RW(28) + -32616)));
SET64(6, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET32(3, RW(3) << 6);
SET64(31, 0x15a9e0); SET32(5, RW(2) + RW(3)); JP_F_00153760(c);
SET64(2, (s32)rd32(c, (RW(18) + 948)));
{ int t = RD(2) == RD(0);  if (t) goto L_0015AA10; }
SET64(2, (s32)rd32(c, (RW(18) + 1752)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(18) + 276)));
SET64(3, (s32)rd32(c, (RW(28) + -32612)));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
SET32(3, RW(3) << 6);
{ u32 t = RW(25); SET64(31, 0x15aa10); SET32(5, RW(2) + RW(3)); rt_call(c, t); }
L_0015AA10:;
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 144);
SET32(2, RW(2) + -32);
SET64(31, 0x15aa24); wr32(c, (RW(29) + 160), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 144);
SET64(31, 0x15aa30); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
L_0015AA30:;
SET64(2, (s64)(s32)0x3f0000);
SET64(5, (s32)rd32(c, (RW(2) + -4252)));
SET64(31, 0x15aa40); SET64(4, RD(18) + RD(0)); JP_F_001520D0(c);
wr16(c, (RW(18) + 896), (u16)RW(2));
SET64(2, (s64)(s32)0x3f0000);
SET64(5, (s32)rd32(c, (RW(2) + -4240)));
SET64(31, 0x15aa54); SET64(4, RD(18) + RD(0)); JP_F_001520D0(c);
wr16(c, (RW(18) + 2124), (u16)RW(2));
SET64(19, RD(0) + RD(0));
L_0015AA5C:;
SET64(6, (s64)(s32)0x3f0000);
SET32(5, RW(29) + 112);
SET32(6, RW(6) + -9424);
SET32(4, RW(0) + 5);
L_0015AA70:;
SET64(3, (s16)rd16(c, (RW(6) + 0)));
SET32(4, RW(4) + -1);
SET64(2, (s16)rd16(c, (RW(6) + 2)));
wr16(c, (RW(5) + 0), (u16)RW(3));
wr16(c, (RW(5) + 2), (u16)RW(2));
SET32(6, RW(6) + 4);
{ int t = RSD(4) > 0; SET32(5, RW(5) + 4); if (t) { POLL(); goto L_0015AA70; } }
SET64(3, RD(19) & 0xffff);
SET64(2, (s64)(s32)0x3f0000);
SET32(16, RW(3) << 1);
SET32(2, RW(2) + -4256);
SET32(3, RW(16) + RW(29));
SET64(3, rd16(c, (RW(3) + 112)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x15aabc); SET64(4, RD(18) + RD(0)); JP_F_001520D0(c);
SET32(4, RW(18) + RW(16));
SET32(3, RW(19) + 1);
wr16(c, (RW(4) + 2126), (u16)RW(2));
SET64(19, RD(3) & 0xffff);
SET64(2, RSD(19) < (s64)10);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0015AA5C; } }
SET64(19, RD(0) + RD(0));
SET64(16, RD(19) & 0xffff);
L_0015AAE0:;
SET64(2, (s64)(s32)0x3f0000);
SET32(2, RW(2) + -4256);
SET32(3, RW(16) << 2);
SET32(2, RW(2) + RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x15aafc); SET64(4, RD(18) + RD(0)); JP_F_001520D0(c);
SET32(4, RW(16) << 1);
SET32(3, RW(19) + 1);
SET32(4, RW(18) + RW(4));
SET64(19, RD(3) & 0xffff);
wr16(c, (RW(4) + 2146), (u16)RW(2));
SET64(2, RSD(19) < (s64)23);
if (RD(2) != RD(0)) { SET64(16, RD(19) & 0xffff); { POLL(); goto L_0015AAE0; } }
SET64(2, rd8(c, (RW(18) + 1030)));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_0015AB50; }
SET64(6, (s32)rd32(c, (RW(18) + 944)));
SET64(5, (s32)rd32(c, (RW(18) + 1748)));
SET64(31, 0x15ab38); SET32(4, RW(18) + 952); JP_F_002C0B70(c);
SET32(4, RW(18) + 952);
SET32(5, RW(29) + 190);
SET64(31, 0x15ab48); wr16(c, (RW(29) + 190), (u16)RW(0)); JP_F_002C0930(c);
wr32(c, (RW(18) + 1004), RW(2));
SET32(2, RW(0) + 1);
L_0015AB50:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x15ab5c); wr8(c, (RW(18) + 1740), (u8)RW(2)); JP_F_00100430(c);
L_0015AB5C:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 192); return;
}

void JP_F_0015AB80(Ctx *c) { /* func_0015AB80 */
ENTER(0x15ab80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015AC6C; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 8512);
SET32(2, RW(2) + 8548);
wr32(c, (RW(17) + 16), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 176), RW(2));
SET32(3, RW(3) + 8580);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 8600);
wr32(c, (RW(17) + 360), RW(3));
wr32(c, (RW(17) + 456), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15abdc);  rt_call(c, t); }
SET32(4, RW(17) + 512);
SET64(31, 0x15abe8); SET32(5, RW(0) + -1); JP_F_002B5710(c);
SET32(4, RW(17) + 448);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 352); goto L_0015AC0C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 480);
SET64(31, 0x15ac08); wr32(c, (RW(17) + 456), RW(2)); JP_F_002B4320(c);
SET32(4, RW(17) + 352);
L_0015AC0C:;
if (RD(4) == RD(0)) { SET32(4, RW(17) + 32); goto L_0015AC2C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 512);
SET64(31, 0x15ac28); wr32(c, (RW(17) + 360), RW(2)); JP_F_002B3F70(c);
SET32(4, RW(17) + 32);
L_0015AC2C:;
SET64(31, 0x15ac34); SET64(5, RD(0) + RD(0)); JP_F_002BAA10(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0015AC58; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x15ac54); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_0015AC58:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015AC70; }
SET64(31, 0x15ac6c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015AC6C:;
SET64(2, RD(17) + RD(0));
L_0015AC70:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015AC90(Ctx *c) { /* func_0015AC90 */
ENTER(0x15ac90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015ACD8; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 480);
SET64(31, 0x15acc0); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B4320(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015ACDC; }
SET64(31, 0x15acd8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015ACD8:;
SET64(2, RD(17) + RD(0));
L_0015ACDC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015ACF0(Ctx *c) { /* func_0015ACF0 */
ENTER(0x15acf0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015AD38; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 512);
SET64(31, 0x15ad20); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B3F70(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015AD3C; }
SET64(31, 0x15ad38); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015AD38:;
SET64(2, RD(17) + RD(0));
L_0015AD3C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015AD50(Ctx *c) { /* func_0015AD50 */
ENTER(0x15ad50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015AE84; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 1760);
SET32(2, RW(2) + 1796);
wr32(c, (RW(17) + 16), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 176), RW(2));
SET32(3, RW(3) + 1828);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 1848);
wr32(c, (RW(17) + 360), RW(3));
wr32(c, (RW(17) + 456), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15adac);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0015AE70; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 8512);
SET32(2, RW(2) + 8548);
wr32(c, (RW(17) + 16), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 176), RW(2));
SET32(3, RW(3) + 8580);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 8600);
wr32(c, (RW(17) + 360), RW(3));
wr32(c, (RW(17) + 456), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15adf4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 512);
SET64(31, 0x15ae00); SET32(5, RW(0) + -1); JP_F_002B5710(c);
SET32(4, RW(17) + 448);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 352); goto L_0015AE24; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 480);
SET64(31, 0x15ae20); wr32(c, (RW(17) + 456), RW(2)); JP_F_002B4320(c);
SET32(4, RW(17) + 352);
L_0015AE24:;
if (RD(4) == RD(0)) { SET32(4, RW(17) + 32); goto L_0015AE44; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 512);
SET64(31, 0x15ae40); wr32(c, (RW(17) + 360), RW(2)); JP_F_002B3F70(c);
SET32(4, RW(17) + 32);
L_0015AE44:;
SET64(31, 0x15ae4c); SET64(5, RD(0) + RD(0)); JP_F_002BAA10(c);
{ int t = RD(17) == RD(0);  if (t) goto L_0015AE6C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x15ae6c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0015AE6C:;
SET64(2, RD(16) << 48);
L_0015AE70:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015AE88; }
SET64(31, 0x15ae84); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015AE84:;
SET64(2, RD(17) + RD(0));
L_0015AE88:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015AEA0(Ctx *c) { /* func_0015AEA0 */
ENTER(0x15aea0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015AFD8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(7, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -1552);
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(6, (s32)rd32(c, (RW(17) + 256)));
SET32(7, RW(7) + -1388);
SET32(5, RW(5) + -1480);
SET32(3, RW(3) + -1448);
SET32(2, RW(17) + 932);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 432), RW(5));
wr32(c, (RW(17) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15af10);  rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_0015AF90; }
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -736);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 256)));
SET32(7, RW(7) + -584);
SET32(5, RW(5) + -664);
SET32(3, RW(3) + -632);
SET32(2, RW(17) + 912);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 432), RW(5));
wr32(c, (RW(17) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15af6c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 704);
SET64(31, 0x15af78); SET64(5, RD(0) + RD(0)); JP_F_001531B0(c);
SET32(4, RW(17) + 288);
SET64(31, 0x15af84); SET64(5, RD(0) + RD(0)); JP_F_002A5490(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x15af90); SET64(5, RD(0) + RD(0)); JP_F_00150CE0(c);
L_0015AF90:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0015AFC4; }
SET32(4, RW(17) + 932);
{ int t = RD(4) == RD(0);  if (t) goto L_0015AFC0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 948), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15afc0);  rt_call(c, t); }
L_0015AFC0:;
SET64(2, RD(16) << 48);
L_0015AFC4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015AFDC; }
SET64(31, 0x15afd8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015AFD8:;
SET64(2, RD(17) + RD(0));
L_0015AFDC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015AFF0(Ctx *c) { /* func_0015AFF0 */
ENTER(0x15aff0);
SET32(29, RW(29) + -64);
SET32(2, RW(0) + 255);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + (s64)1);
SET64(3, rd16(c, (RW(4) + 918)));
{ int t = RD(3) == RD(2); SET32(4, RW(0) + 1); if (t) goto L_0015B198; }
SET64(2, rd8(c, (RW(18) + 916)));
if (RD(2) != RD(0)) { SET64(17, RD(0) + RD(0)); goto L_0015B198; }
SET64(2, rd8(c, (RW(18) + 1028)));
{ int t = RD(2) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_0015B044; }
SET64(2, (s32)rd32(c, (RW(18) + 1096)));
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(18) + 1029))); goto L_0015B048; }
SET64(16, RD(4) & 0xffff);
L_0015B044:;
SET64(2, rd8(c, (RW(18) + 1029)));
L_0015B048:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(18) + 1030))); goto L_0015B068; }
SET64(2, (s32)rd32(c, (RW(18) + 1184)));
{ int t = RD(2) == RD(0);  if (t) goto L_0015B064; }
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
L_0015B064:;
SET64(2, rd8(c, (RW(18) + 1030)));
L_0015B068:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(18) + 1031))); goto L_0015B088; }
SET64(2, (s32)rd32(c, (RW(18) + 1360)));
{ int t = RD(2) == RD(0);  if (t) goto L_0015B084; }
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
L_0015B084:;
SET64(2, rd8(c, (RW(18) + 1031)));
L_0015B088:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(18) + 1032))); goto L_0015B0A8; }
SET64(2, (s32)rd32(c, (RW(18) + 1448)));
{ int t = RD(2) == RD(0);  if (t) goto L_0015B0A4; }
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
L_0015B0A4:;
SET64(2, rd8(c, (RW(18) + 1032)));
L_0015B0A8:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(18) + 1033))); goto L_0015B0C8; }
SET64(2, (s32)rd32(c, (RW(18) + 1712)));
{ int t = RD(2) == RD(0);  if (t) goto L_0015B0C4; }
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
L_0015B0C4:;
SET64(2, rd8(c, (RW(18) + 1033)));
L_0015B0C8:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 2248))); goto L_0015B0E8; }
SET64(2, (s32)rd32(c, (RW(18) + 1624)));
{ int t = RD(2) == RD(0);  if (t) goto L_0015B0E4; }
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
L_0015B0E4:;
SET64(4, (s32)rd32(c, (RW(18) + 2248)));
L_0015B0E8:;
if (RD(4) == RD(0)) { SET64(2, RD(16) & 0xffff); goto L_0015B114; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x15b100);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0015B110; }
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
L_0015B110:;
SET64(2, RD(16) & 0xffff);
L_0015B114:;
if (RD(2) != RD(0)) { SET64(2, RD(17) + RD(0)); goto L_0015B19C; }
SET64(2, (s32)rd32(c, (RW(18) + 936)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1008))); goto L_0015B13C; }
SET64(25, (s32)rd32(c, (RW(18) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x15b138); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 1008)));
L_0015B13C:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1012))); goto L_0015B158; }
SET64(25, (s32)rd32(c, (RW(18) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x15b154); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 1012)));
L_0015B158:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1016))); goto L_0015B174; }
SET64(25, (s32)rd32(c, (RW(18) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x15b170); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 1016)));
L_0015B174:;
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_0015B190; }
SET64(25, (s32)rd32(c, (RW(18) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x15b18c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
L_0015B190:;
SET64(17, RD(0) + RD(0));
wr8(c, (RW(18) + 916), (u8)RW(2));
L_0015B198:;
SET64(2, RD(17) + RD(0));
L_0015B19C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_0015B1C0(Ctx *c) { /* func_0015B1C0 */
ENTER(0x15b1c0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr16(c, (RW(4) + 918), (u16)RW(5));
SET64(16, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 924)));
{ int t = RD(3) == RD(0); SET64(4, RD(0) + (s64)1); if (t) goto L_0015B200; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(2, RD(0) < RD(4)); goto L_0015B204; }
SET64(4, RD(0) + RD(0));
L_0015B200:;
SET64(2, RD(0) < RD(4));
L_0015B204:;
SET64(7, rd16(c, (RW(16) + 918)));
SET64(2, RD(2) ^ 0x1);
SET64(5, (s64)(s32)0x4c0000);
SET64(4, RD(2) & 0xff);
SET32(5, RW(5) + -26602);
SET32(6, RW(7) << 2);
SET32(3, RW(4) << 2);
SET32(3, RW(3) + RW(4));
SET32(6, RW(6) + RW(7));
SET32(4, RW(6) << 4);
SET32(3, RW(3) << 3);
SET32(4, RW(5) + RW(4));
SET32(2, RW(0) + 3);
SET32(3, RW(3) + RW(4));
SET64(3, rd16(c, (RW(3) + 0)));
wr16(c, (RW(16) + 928), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 924)));
if (RD(3) == RD(2)) { SET64(4, rd16(c, (RW(16) + 918))); goto L_0015B2A8; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(4, rd16(c, (RW(16) + 918))); goto L_0015B294; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(4, rd16(c, (RW(16) + 918))); goto L_0015B280; }
SET64(4, rd16(c, (RW(16) + 918)));
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 22608);
SET32(3, RW(4) << 3);
SET32(18, RW(2) + RW(3)); goto L_0015B2B8;
L_0015B280:;
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 23120);
SET32(3, RW(4) << 3);
SET32(18, RW(2) + RW(3)); goto L_0015B2B8;
L_0015B294:;
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 23632);
SET32(3, RW(4) << 3);
SET32(18, RW(2) + RW(3)); goto L_0015B2B8;
L_0015B2A8:;
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 24144);
SET32(3, RW(4) << 3);
SET32(18, RW(2) + RW(3));
L_0015B2B8:;
SET64(5, RD(4) & 0xffff);
SET32(2, RW(16) + 936);
wr32(c, (RW(16) + 1096), RW(2));
SET32(3, RW(5) << 1);
SET32(2, RW(3) + RW(5));
SET64(4, (s64)(s32)0x490000);
SET32(4, RW(4) + 21840);
SET32(2, RW(2) << 2);
SET32(17, RW(4) + RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 1116)));
SET64(2, (s64)(s32)0x490000);
SET32(3, RW(5) << 2);
SET32(2, RW(2) + 24656);
SET32(2, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(25); SET64(31, 0x15b300); SET32(4, RW(16) + 1100); rt_call(c, t); }
SET64(31, 0x15b308);  JP_F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x15b314); SET32(5, RW(16) + 1036); JP_F_0013A470(c);
SET64(25, (s32)rd32(c, (RW(16) + 1116)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x15b324); SET32(4, RW(16) + 1100); rt_call(c, t); }
SET64(31, 0x15b32c); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
SET64(6, (s32)rd32(c, (RW(16) + 1096)));
SET32(5, RW(0) + 1);
SET32(3, RW(16) + 940);
wr32(c, (RW(6) + 0), RW(2));
wr8(c, (RW(16) + 1120), (u8)RW(0));
wr8(c, (RW(16) + 1028), (u8)RW(5));
SET64(5, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(16) + 1184), RW(3));
SET64(25, (s32)rd32(c, (RW(16) + 1204)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15b35c); SET32(4, RW(16) + 1188); rt_call(c, t); }
SET64(31, 0x15b364);  JP_F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x15b370); SET32(5, RW(16) + 1124); JP_F_0013A470(c);
SET64(25, (s32)rd32(c, (RW(16) + 1204)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x15b380); SET32(4, RW(16) + 1188); rt_call(c, t); }
SET64(31, 0x15b388); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
SET64(4, (s32)rd32(c, (RW(16) + 1184)));
SET32(3, RW(0) + 1);
wr32(c, (RW(4) + 0), RW(2));
wr8(c, (RW(16) + 1208), (u8)RW(0));
wr8(c, (RW(16) + 1029), (u8)RW(3));
SET64(5, (s32)rd32(c, (RW(18) + 4)));
{ int t = RD(5) == RD(0);  if (t) goto L_0015B400; }
SET32(2, RW(16) + 956);
wr32(c, (RW(16) + 1360), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 1380)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15b3c0); SET32(4, RW(16) + 1364); rt_call(c, t); }
SET64(31, 0x15b3c8);  JP_F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x15b3d4); SET32(5, RW(16) + 1300); JP_F_0013A470(c);
SET64(25, (s32)rd32(c, (RW(16) + 1380)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x15b3e4); SET32(4, RW(16) + 1364); rt_call(c, t); }
SET64(31, 0x15b3ec); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
SET64(4, (s32)rd32(c, (RW(16) + 1360)));
SET32(3, RW(0) + 1);
wr32(c, (RW(4) + 0), RW(2));
wr8(c, (RW(16) + 1384), (u8)RW(0));
wr8(c, (RW(16) + 1030), (u8)RW(3));
L_0015B400:;
if (RD(17) == RD(0)) { SET64(4, rd16(c, (RW(16) + 918))); goto L_0015B4E8; }
if (RD(19) == RD(0)) { SET64(2, rd8(c, (RW(16) + 931))); goto L_0015B478; }
SET64(5, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(5) == RD(0);  if (t) goto L_0015B474; }
SET32(2, RW(16) + 1008);
wr32(c, (RW(16) + 1448), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 1468)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15b434); SET32(4, RW(16) + 1452); rt_call(c, t); }
SET64(31, 0x15b43c);  JP_F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x15b448); SET32(5, RW(16) + 1388); JP_F_0013A470(c);
SET64(25, (s32)rd32(c, (RW(16) + 1468)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x15b458); SET32(4, RW(16) + 1452); rt_call(c, t); }
SET64(31, 0x15b460); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
SET64(4, (s32)rd32(c, (RW(16) + 1448)));
SET32(3, RW(0) + 1);
wr32(c, (RW(4) + 0), RW(2));
wr8(c, (RW(16) + 1472), (u8)RW(0));
wr8(c, (RW(16) + 1031), (u8)RW(3));
L_0015B474:;
SET64(2, rd8(c, (RW(16) + 931)));
L_0015B478:;
{ int t = RD(2) == RD(0);  if (t) goto L_0015B4E4; }
SET64(5, (s32)rd32(c, (RW(17) + 8)));
{ int t = RD(5) == RD(0);  if (t) goto L_0015B4E4; }
SET32(2, RW(16) + 1016);
wr32(c, (RW(16) + 1624), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 1644)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15b4a4); SET32(4, RW(16) + 1628); rt_call(c, t); }
SET64(31, 0x15b4ac);  JP_F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x15b4b8); SET32(5, RW(16) + 1564); JP_F_0013A470(c);
SET64(25, (s32)rd32(c, (RW(16) + 1644)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x15b4c8); SET32(4, RW(16) + 1628); rt_call(c, t); }
SET64(31, 0x15b4d0); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
SET64(4, (s32)rd32(c, (RW(16) + 1624)));
SET32(3, RW(0) + 1);
wr32(c, (RW(4) + 0), RW(2));
wr8(c, (RW(16) + 1648), (u8)RW(0));
wr8(c, (RW(16) + 1033), (u8)RW(3));
L_0015B4E4:;
SET64(4, rd16(c, (RW(16) + 918)));
L_0015B4E8:;
SET64(31, 0x15b4f0); SET64(18, RD(0) + (s64)1); JP_F_001CBCE0(c);
SET64(4, RD(2) & 0xffff);
SET32(3, RW(0) + 34);
if (RD(4) == RD(3)) { SET64(18, RD(0) + RD(0)); goto L_0015B518; }
SET32(3, RW(0) + 33);
{ int t = RD(4) == RD(3);  if (t) goto L_0015B514; }
SET64(3, rd16(c, (RW(16) + 918))); goto L_0015B51C;
L_0015B514:;
SET64(18, RD(0) + RD(0));
L_0015B518:;
SET64(3, rd16(c, (RW(16) + 918)));
L_0015B51C:;
SET64(3, RSD(3) < (s64)49);
{ int t = RD(3) != RD(0);  if (t) goto L_0015B52C; }
SET64(18, RD(0) + (s64)1);
L_0015B52C:;
if (RD(18) == RD(0)) { SET64(4, rd16(c, (RW(16) + 918))); goto L_0015B59C; }
SET64(5, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(5) == RD(0);  if (t) goto L_0015B598; }
SET32(2, RW(16) + 1012);
wr32(c, (RW(16) + 1712), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 1732)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15b558); SET32(4, RW(16) + 1716); rt_call(c, t); }
SET64(31, 0x15b560);  JP_F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x15b56c); SET32(5, RW(16) + 1652); JP_F_0013A470(c);
SET64(25, (s32)rd32(c, (RW(16) + 1732)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x15b57c); SET32(4, RW(16) + 1716); rt_call(c, t); }
SET64(31, 0x15b584); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
SET64(4, (s32)rd32(c, (RW(16) + 1712)));
SET32(3, RW(0) + 1);
wr32(c, (RW(4) + 0), RW(2));
wr8(c, (RW(16) + 1736), (u8)RW(0));
wr8(c, (RW(16) + 1032), (u8)RW(3));
L_0015B598:;
SET64(4, rd16(c, (RW(16) + 918)));
L_0015B59C:;
SET64(3, (s64)(s32)0x490000);
SET32(3, RW(3) + 25840);
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
SET64(18, (s32)rd32(c, (RW(3) + 0)));
if (RD(18) == RD(0)) { SET64(3, (s64)(s32)0x3f800000); goto L_0015B678; }
SET64(31, 0x15b5c0); SET32(4, RW(0) + 60); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0015B620; }
SET64(31, 0x15b5d0); SET64(4, RD(17) + RD(0)); JP_F_00158180(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -32);
SET32(2, RW(2) + 456);
wr32(c, (RW(17) + 16), RW(3));
SET32(4, RW(17) + 36);
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
wr32(c, (RW(17) + 56), RW(2));
SET64(31, 0x15b608); wr32(c, (RW(17) + 36), RW(0)); JP_F_002C08A0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 400);
SET32(2, RW(2) + 440);
wr32(c, (RW(17) + 16), RW(3));
wr32(c, (RW(17) + 56), RW(2));
L_0015B620:;
wr32(c, (RW(16) + 2248), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15b638); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 2248)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x15b64c);  rt_call(c, t); }
SET64(31, 0x15b654); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
wr32(c, (RW(16) + 2244), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 2248)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x15b674); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f800000);
L_0015B678:;
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 92), RW(3));
wr32(c, (RW(29) + 84), RW(0));
wr32(c, (RW(29) + 88), RW(0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 2096) & ~15u, &c->r[3]);
wr8(c, (RW(16) + 916), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_0015B6B0(Ctx *c) { /* func_0015B6B0 */
ENTER(0x15b6b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
if (RD(16) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_0015B6EC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 456);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 20), RW(3)); if (t) goto L_0015B6E8; }
SET64(31, 0x15b6e8);  JP_F_001004B0(c);
L_0015B6E8:;
SET64(2, RD(16) + RD(0));
L_0015B6EC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015B700(Ctx *c) { /* func_0015B700 */
ENTER(0x15b700);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x15b71c); SET64(4, (s32)rd32(c, (RW(4) + 256))); JP_F_00141B90(c);
SET64(4, rd16(c, (RW(16) + 918)));
SET32(3, RW(0) + 255);
if (RD(4) == RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0015B920; }
wr8(c, (RW(16) + 931), (u8)RW(0));
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 932), (u8)RW(2));
SET64(5, (s64)(s32)0x150000);
wr8(c, (RW(16) + 1740), (u8)RW(0));
wr8(c, (RW(16) + 1741), (u8)RW(0));
wr8(c, (RW(16) + 1742), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 1760)));
SET64(31, 0x15b754); SET32(5, RW(5) + 25536); JP_F_001022C0(c);
wr32(c, (RW(16) + 1760), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 1764)));
if (RD(4) == RD(0)) { SET32(4, RW(16) + 952); goto L_0015B778; }
SET64(25, (s32)rd32(c, (RW(4) + 44)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15b774); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(4, RW(16) + 952);
L_0015B778:;
SET64(31, 0x15b780); wr32(c, (RW(16) + 1764), RW(0)); JP_F_002C0BF0(c);
SET64(2, rd8(c, (RW(16) + 917)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 1020))); goto L_0015B8A4; }
SET64(31, 0x15b794); SET64(4, (s32)rd32(c, (RW(16) + 2076))); JP_F_00100430(c);
wr32(c, (RW(16) + 2076), RW(0));
SET64(2, rd8(c, (RW(16) + 1746)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 1748), RW(0)); goto L_0015B7E0; }
SET64(4, (s32)rd32(c, (RW(16) + 1748)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 1756))); goto L_0015B7C4; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15b7c0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 1756)));
L_0015B7C4:;
{ int t = RD(4) == RD(0);  if (t) goto L_0015B7DC; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15b7dc); SET32(5, RW(0) + 1); rt_call(c, t); }
L_0015B7DC:;
wr32(c, (RW(16) + 1748), RW(0));
L_0015B7E0:;
wr8(c, (RW(16) + 1746), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 1752)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 1752), RW(0)); goto L_0015B804; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15b800); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 1752), RW(0));
L_0015B804:;
SET64(31, 0x15b80c); SET64(4, (s32)rd32(c, (RW(16) + 1016))); JP_F_00100430(c);
wr32(c, (RW(16) + 1016), RW(0));
SET64(2, rd8(c, (RW(16) + 1031)));
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 1032))); goto L_0015B830; }
wr8(c, (RW(16) + 1031), (u8)RW(0));
SET64(31, 0x15b828); SET64(4, (s32)rd32(c, (RW(16) + 1008))); JP_F_00100430(c);
wr32(c, (RW(16) + 1008), RW(0));
SET64(2, rd8(c, (RW(16) + 1032)));
L_0015B830:;
if (RD(2) == RD(0)) { SET32(5, RW(0) + 1); goto L_0015B84C; }
wr8(c, (RW(16) + 1032), (u8)RW(0));
SET64(31, 0x15b844); SET64(4, (s32)rd32(c, (RW(16) + 1012))); JP_F_00100430(c);
wr32(c, (RW(16) + 1012), RW(0));
SET32(5, RW(0) + 1);
L_0015B84C:;
SET64(4, RD(16) + RD(0));
wr8(c, (RW(16) + 916), (u8)RW(5));
SET64(6, RD(5) + RD(0));
SET64(7, RD(5) + RD(0));
SET64(8, RD(5) + RD(0));
SET64(9, RD(5) + RD(0));
SET64(31, 0x15b86c); SET64(10, RD(5) + RD(0)); JP_F_0015BA30(c);
SET64(17, (s32)rd32(c, (RW(16) + 1000)));
if (RD(17) == RD(0)) { wr32(c, (RW(16) + 1000), RW(0)); goto L_0015B88C; }
SET64(31, 0x15b880); SET64(4, RD(17) + RD(0)); JP_F_002C0BF0(c);
SET64(31, 0x15b888); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
wr32(c, (RW(16) + 1000), RW(0));
L_0015B88C:;
SET32(4, RW(16) + 952);
SET32(5, RW(29) + 62);
SET64(31, 0x15b89c); wr16(c, (RW(29) + 62), (u16)RW(0)); JP_F_002C0930(c);
wr32(c, (RW(16) + 1004), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 1020)));
L_0015B8A4:;
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 1020), RW(0)); goto L_0015B8C0; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15b8bc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 1020), RW(0));
L_0015B8C0:;
SET64(4, (s32)rd32(c, (RW(16) + 1024)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 1024), RW(0)); goto L_0015B8E0; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15b8dc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 1024), RW(0));
L_0015B8E0:;
SET64(4, (s32)rd32(c, (RW(16) + 2248)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 2248), RW(0)); goto L_0015B900; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15b8fc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 2248), RW(0));
L_0015B900:;
SET64(31, 0x15b908); SET64(4, (s32)rd32(c, (RW(16) + 2244))); JP_F_00100430(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x15b914); wr32(c, (RW(16) + 2244), RW(0)); JP_F_0015BB20(c);
SET64(31, 0x15b91c); SET64(4, RD(16) + RD(0)); JP_F_00152920(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_0015B920:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_0015B930(Ctx *c) { /* func_0015B930 */
ENTER(0x15b930);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015B9B8; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 400);
SET32(3, RW(3) + 440);
wr32(c, (RW(17) + 16), RW(2));
SET32(2, RW(17) + 36);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 56), RW(3)); if (t) goto L_0015B978; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 456);
wr32(c, (RW(17) + 56), RW(2));
L_0015B978:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0015B9A4; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + -32);
SET64(31, 0x15b994); wr32(c, (RW(17) + 16), RW(2)); JP_F_00157620(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x15b9a0); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(2, RD(16) << 48);
L_0015B9A4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015B9BC; }
SET64(31, 0x15b9b8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015B9B8:;
SET64(2, RD(17) + RD(0));
L_0015B9BC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015B9D0(Ctx *c) { /* func_0015B9D0 */
ENTER(0x15b9d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015BA14; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 376);
SET64(31, 0x15b9fc); wr32(c, (RW(17) + 20), RW(2)); JP_F_001F4200(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015BA18; }
SET64(31, 0x15ba14); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015BA14:;
SET64(2, RD(17) + RD(0));
L_0015BA18:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015BA30(Ctx *c) { /* func_0015BA30 */
ENTER(0x15ba30);
SET32(29, RW(29) + -80);
SET32(3, RW(0) + 255);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(8) + RD(0));
SET64(4, rd16(c, (RW(4) + 918)));
{ int t = RD(4) == RD(3); SET64(16, RD(10) + RD(0)); if (t) goto L_0015BB04; }
SET64(3, rd8(c, (RW(19) + 916)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_0015BB08; }
{ int t = RD(5) == RD(0);  if (t) goto L_0015BA94; }
SET64(3, rd8(c, (RW(19) + 1028)));
{ int t = RD(3) == RD(0);  if (t) goto L_0015BA94; }
wr8(c, (RW(19) + 1028), (u8)RW(0));
SET64(31, 0x15ba90); SET64(4, (s32)rd32(c, (RW(19) + 936))); JP_F_00100430(c);
wr32(c, (RW(19) + 936), RW(0));
L_0015BA94:;
{ int t = RD(18) == RD(0);  if (t) goto L_0015BAB8; }
SET64(3, rd8(c, (RW(19) + 1029)));
{ int t = RD(3) == RD(0);  if (t) goto L_0015BAB8; }
wr8(c, (RW(19) + 1029), (u8)RW(0));
SET64(31, 0x15bab4); SET64(4, (s32)rd32(c, (RW(19) + 940))); JP_F_00100430(c);
wr32(c, (RW(19) + 940), RW(0));
L_0015BAB8:;
{ int t = RD(17) == RD(0);  if (t) goto L_0015BADC; }
SET64(3, rd8(c, (RW(19) + 1033)));
{ int t = RD(3) == RD(0);  if (t) goto L_0015BADC; }
wr8(c, (RW(19) + 1033), (u8)RW(0));
SET64(31, 0x15bad8); SET64(4, (s32)rd32(c, (RW(19) + 1016))); JP_F_00100430(c);
wr32(c, (RW(19) + 1016), RW(0));
L_0015BADC:;
{ int t = RD(16) == RD(0);  if (t) goto L_0015BB04; }
SET64(3, rd8(c, (RW(19) + 1030)));
{ int t = RD(3) == RD(0);  if (t) goto L_0015BB04; }
wr8(c, (RW(19) + 1030), (u8)RW(0));
SET64(31, 0x15bafc); SET64(4, (s32)rd32(c, (RW(19) + 956))); JP_F_00100430(c);
wr32(c, (RW(19) + 956), RW(0));
wr32(c, (RW(19) + 956), RW(0));
L_0015BB04:;
SET64(31, rd64(c, (RW(29) + 64)));
L_0015BB08:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_0015BB20(Ctx *c) { /* func_0015BB20 */
ENTER(0x15bb20);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + 255);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(0) + 1);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr8(c, (RW(4) + 916), (u8)RW(0));
SET64(16, RD(4) + RD(0));
wr8(c, (RW(4) + 917), (u8)RW(0));
wr16(c, (RW(4) + 918), (u16)RW(3));
wr32(c, (RW(4) + 924), RW(0));
wr16(c, (RW(4) + 928), (u16)RW(0));
wr8(c, (RW(4) + 931), (u8)RW(0));
wr8(c, (RW(4) + 932), (u8)RW(2));
wr32(c, (RW(4) + 936), RW(0));
wr32(c, (RW(4) + 940), RW(0));
wr32(c, (RW(4) + 944), RW(0));
wr32(c, (RW(4) + 948), RW(0));
SET64(31, 0x15bb6c); SET32(4, RW(16) + 952); JP_F_002C0C50(c);
wr32(c, (RW(16) + 1000), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 1004), RW(0));
SET64(4, RD(0) | 0xffff);
wr32(c, (RW(16) + 1008), RW(0));
wr32(c, (RW(16) + 1012), RW(0));
wr32(c, (RW(16) + 1016), RW(0));
wr8(c, (RW(16) + 1028), (u8)RW(0));
wr8(c, (RW(16) + 1029), (u8)RW(0));
wr8(c, (RW(16) + 1030), (u8)RW(0));
wr8(c, (RW(16) + 1031), (u8)RW(0));
wr8(c, (RW(16) + 1032), (u8)RW(0));
wr8(c, (RW(16) + 1033), (u8)RW(0));
wr8(c, (RW(16) + 1740), (u8)RW(0));
wr8(c, (RW(16) + 1741), (u8)RW(0));
wr8(c, (RW(16) + 1742), (u8)RW(0));
wr8(c, (RW(16) + 1746), (u8)RW(0));
wr32(c, (RW(16) + 1748), RW(0));
wr32(c, (RW(16) + 1752), RW(0));
wr32(c, (RW(16) + 1756), RW(0));
wr16(c, (RW(16) + 2080), (u16)RW(0));
wr32(c, (RW(16) + 1760), RW(0));
wr32(c, (RW(16) + 1764), RW(0));
wr32(c, (RW(16) + 2076), RW(0));
wr16(c, (RW(16) + 2082), (u16)RW(4));
wr16(c, (RW(16) + 2084), (u16)RW(4));
wr8(c, (RW(16) + 2112), (u8)RW(0));
wr8(c, (RW(16) + 2113), (u8)RW(0));
wr16(c, (RW(16) + 2114), (u16)RW(0));
wr16(c, (RW(16) + 1744), (u16)RW(0));
wr32(c, (RW(16) + 1020), RW(0));
wr32(c, (RW(16) + 1024), RW(0));
wr8(c, (RW(16) + 2192), (u8)RW(0));
wr32(c, (RW(29) + 44), RW(3));
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[3]);
wr8(c, (RW(16) + 2240), (u8)RW(0));
wr128(c, (RW(16) + 2224) & ~15u, &c->r[3]);
wr32(c, (RW(16) + 2120), RW(0));
wr32(c, (RW(16) + 2244), RW(0));
wr32(c, (RW(16) + 2248), RW(0));
wr8(c, (RW(16) + 2116), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015BC30(Ctx *c) { /* func_0015BC30 */
ENTER(0x15bc30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(5) + RD(0));
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_0015BC70; }
SET32(4, RW(17) + 2256);
SET32(2, RW(17) + 2320);
wr32(c, (RW(17) + 912), RW(4));
SET64(31, 0x15bc68); wr32(c, (RW(17) + 256), RW(2)); JP_F_002AF080(c);
SET64(31, 0x15bc70); SET32(4, RW(17) + 2320); JP_F_00141C80(c);
L_0015BC70:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x15bc7c); SET64(5, RD(0) + RD(0)); JP_F_001530D0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 144);
SET64(7, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(8, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 256)));
SET32(9, RW(9) + 340);
SET64(5, (s64)(s32)0x160000);
SET32(7, RW(7) + 216);
SET32(8, RW(8) + 248);
SET32(3, RW(17) + 2320);
wr32(c, (RW(6) + 16), RW(9));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 432), RW(7));
SET64(6, (s64)(s32)0x160000);
wr32(c, (RW(17) + 760), RW(8));
SET32(4, RW(17) + 1036);
SET64(9, (s32)rd32(c, (RW(17) + 256)));
SET32(5, RW(5) + -16192);
SET32(6, RW(6) + -31728);
SET32(7, RW(0) + 88);
SET32(8, RW(0) + 8);
SET32(3, RW(3) - RW(9));
wr32(c, (RW(9) + 20), RW(3));
wr8(c, (RW(17) + 920), (u8)RW(2));
wr32(c, (RW(17) + 956), RW(0));
wr8(c, (RW(17) + 960), (u8)RW(0));
wr32(c, (RW(17) + 964), RW(0));
wr32(c, (RW(17) + 968), RW(0));
wr32(c, (RW(17) + 972), RW(0));
wr32(c, (RW(17) + 976), RW(0));
wr32(c, (RW(17) + 980), RW(0));
wr32(c, (RW(17) + 984), RW(0));
wr32(c, (RW(17) + 988), RW(0));
wr32(c, (RW(17) + 992), RW(0));
SET64(31, 0x15bd14); wr32(c, (RW(17) + 996), RW(0)); JP_F_001023D0(c);
wr32(c, (RW(17) + 1776), RW(0));
SET32(2, RW(17) + 1776);
wr32(c, (RW(17) + 1780), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(17) + 1784), RW(0));
SET32(2, RW(2) + 48);
wr32(c, (RW(17) + 1788), RW(3));
SET32(11, RW(17) + 2064);
wr32(c, (RW(17) + 1792), RW(0));
SET64(1, RD(2) < RD(11));
wr32(c, (RW(17) + 1796), RW(0));
wr32(c, (RW(17) + 1800), RW(0));
wr32(c, (RW(17) + 1804), RW(3));
wr32(c, (RW(17) + 1808), RW(0));
wr32(c, (RW(17) + 1812), RW(0));
wr32(c, (RW(17) + 1816), RW(0));
{ int t = RD(1) == RD(0); wr32(c, (RW(17) + 1820), RW(3)); if (t) goto L_0015C000; }
SET32(10, RW(17) + 1824);
SET64(3, (s64)(s32)0x2aaa0000);
SET32(9, RW(11) - RW(10));
SET64(3, RD(3) | 0xaaab);
SET32(8, RW(9) + 47);
mul_s(c, 0, 0, RSW(3), RSW(8));
SET32(4, RW(8) >> 31);
SET64(3, c->hi.d[0]);
SET32(3, RSW(3) >> 3);
SET32(7, RW(3) + RW(4));
SET32(6, RW(7) + 1);
SET64(1, RSD(6) < (s64)9);
{ int t = RD(1) != RD(0); SET32(5, RW(17) + 1680); if (t) goto L_0015BFA8; }
SET64(1, RD(11) < RD(10));
SET64(13, RD(0) + RD(0));
{ int t = RD(1) != RD(0); SET64(12, RD(0) + RD(0)); if (t) goto L_0015BDD4; }
SET64(4, (s64)(s32)0x80000000);
SET64(3, RD(9) & RD(4));
{ int t = RD(3) != RD(0); SET64(10, RD(0) + (s64)1); if (t) goto L_0015BDC8; }
SET64(3, RD(8) & RD(4));
{ int t = RD(3) == RD(0);  if (t) goto L_0015BDC8; }
SET64(10, RD(0) + RD(0));
L_0015BDC8:;
{ int t = RD(10) == RD(0);  if (t) goto L_0015BDD4; }
SET64(12, RD(0) + (s64)1);
L_0015BDD4:;
{ int t = RD(12) == RD(0);  if (t) goto L_0015BE08; }
SET64(3, (s64)(s32)0x80000000);
SET64(4, RD(7) & RD(3));
{ int t = RD(4) != RD(0); SET64(8, RD(0) + (s64)1); if (t) goto L_0015BDFC; }
SET64(3, RD(6) & RD(3));
{ int t = RD(4) == RD(3);  if (t) goto L_0015BDFC; }
SET64(8, RD(0) + RD(0));
L_0015BDFC:;
{ int t = RD(8) == RD(0);  if (t) goto L_0015BE08; }
SET64(13, RD(0) + (s64)1);
L_0015BE08:;
{ int t = RD(13) == RD(0);  if (t) goto L_0015BFA8; }
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 0), RW(0));
L_0015BE18:;
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(4));
wr32(c, (RW(2) + 16), RW(0));
wr32(c, (RW(2) + 20), RW(0));
wr32(c, (RW(2) + 24), RW(0));
wr32(c, (RW(2) + 28), RW(4));
wr32(c, (RW(2) + 32), RW(0));
wr32(c, (RW(2) + 36), RW(0));
wr32(c, (RW(2) + 40), RW(0));
wr32(c, (RW(2) + 44), RW(4));
wr32(c, (RW(2) + 48), RW(0));
wr32(c, (RW(2) + 52), RW(0));
wr32(c, (RW(2) + 56), RW(0));
wr32(c, (RW(2) + 60), RW(4));
wr32(c, (RW(2) + 64), RW(0));
wr32(c, (RW(2) + 68), RW(0));
wr32(c, (RW(2) + 72), RW(0));
wr32(c, (RW(2) + 76), RW(4));
wr32(c, (RW(2) + 80), RW(0));
wr32(c, (RW(2) + 84), RW(0));
wr32(c, (RW(2) + 88), RW(0));
wr32(c, (RW(2) + 92), RW(4));
wr32(c, (RW(2) + 96), RW(0));
wr32(c, (RW(2) + 100), RW(0));
wr32(c, (RW(2) + 104), RW(0));
wr32(c, (RW(2) + 108), RW(4));
wr32(c, (RW(2) + 112), RW(0));
wr32(c, (RW(2) + 116), RW(0));
wr32(c, (RW(2) + 120), RW(0));
wr32(c, (RW(2) + 124), RW(4));
wr32(c, (RW(2) + 128), RW(0));
wr32(c, (RW(2) + 132), RW(0));
wr32(c, (RW(2) + 136), RW(0));
wr32(c, (RW(2) + 140), RW(4));
wr32(c, (RW(2) + 144), RW(0));
wr32(c, (RW(2) + 148), RW(0));
wr32(c, (RW(2) + 152), RW(0));
wr32(c, (RW(2) + 156), RW(4));
wr32(c, (RW(2) + 160), RW(0));
wr32(c, (RW(2) + 164), RW(0));
wr32(c, (RW(2) + 168), RW(0));
wr32(c, (RW(2) + 172), RW(4));
wr32(c, (RW(2) + 176), RW(0));
wr32(c, (RW(2) + 180), RW(0));
wr32(c, (RW(2) + 184), RW(0));
wr32(c, (RW(2) + 188), RW(4));
wr32(c, (RW(2) + 192), RW(0));
wr32(c, (RW(2) + 196), RW(0));
wr32(c, (RW(2) + 200), RW(0));
wr32(c, (RW(2) + 204), RW(4));
wr32(c, (RW(2) + 208), RW(0));
wr32(c, (RW(2) + 212), RW(0));
wr32(c, (RW(2) + 216), RW(0));
wr32(c, (RW(2) + 220), RW(4));
wr32(c, (RW(2) + 224), RW(0));
wr32(c, (RW(2) + 228), RW(0));
wr32(c, (RW(2) + 232), RW(0));
wr32(c, (RW(2) + 236), RW(4));
wr32(c, (RW(2) + 240), RW(0));
wr32(c, (RW(2) + 244), RW(0));
wr32(c, (RW(2) + 248), RW(0));
wr32(c, (RW(2) + 252), RW(4));
wr32(c, (RW(2) + 256), RW(0));
wr32(c, (RW(2) + 260), RW(0));
wr32(c, (RW(2) + 264), RW(0));
wr32(c, (RW(2) + 268), RW(4));
wr32(c, (RW(2) + 272), RW(0));
wr32(c, (RW(2) + 276), RW(0));
wr32(c, (RW(2) + 280), RW(0));
wr32(c, (RW(2) + 284), RW(4));
wr32(c, (RW(2) + 288), RW(0));
wr32(c, (RW(2) + 292), RW(0));
wr32(c, (RW(2) + 296), RW(0));
wr32(c, (RW(2) + 300), RW(4));
wr32(c, (RW(2) + 304), RW(0));
wr32(c, (RW(2) + 308), RW(0));
wr32(c, (RW(2) + 312), RW(0));
wr32(c, (RW(2) + 316), RW(4));
wr32(c, (RW(2) + 320), RW(0));
wr32(c, (RW(2) + 324), RW(0));
wr32(c, (RW(2) + 328), RW(0));
wr32(c, (RW(2) + 332), RW(4));
wr32(c, (RW(2) + 336), RW(0));
wr32(c, (RW(2) + 340), RW(0));
wr32(c, (RW(2) + 344), RW(0));
wr32(c, (RW(2) + 348), RW(4));
wr32(c, (RW(2) + 352), RW(0));
wr32(c, (RW(2) + 356), RW(0));
wr32(c, (RW(2) + 360), RW(0));
wr32(c, (RW(2) + 364), RW(4));
wr32(c, (RW(2) + 368), RW(0));
wr32(c, (RW(2) + 372), RW(0));
wr32(c, (RW(2) + 376), RW(0));
wr32(c, (RW(2) + 380), RW(4));
SET32(2, RW(2) + 384);
SET64(3, RD(2) < RD(5));
if (RD(3) != RD(0)) { wr32(c, (RW(2) + 0), RW(0)); { POLL(); goto L_0015BE18; } }
L_0015BFA8:;
SET32(5, RW(17) + 2064);
SET64(1, RD(2) < RD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_0015C000; }
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 0), RW(0));
L_0015BFC0:;
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(4));
wr32(c, (RW(2) + 16), RW(0));
wr32(c, (RW(2) + 20), RW(0));
wr32(c, (RW(2) + 24), RW(0));
wr32(c, (RW(2) + 28), RW(4));
wr32(c, (RW(2) + 32), RW(0));
wr32(c, (RW(2) + 36), RW(0));
wr32(c, (RW(2) + 40), RW(0));
wr32(c, (RW(2) + 44), RW(4));
SET32(2, RW(2) + 48);
SET64(3, RD(2) < RD(5));
if (RD(3) != RD(0)) { wr32(c, (RW(2) + 0), RW(0)); { POLL(); goto L_0015BFC0; } }
L_0015C000:;
wr32(c, (RW(17) + 2096), RW(0));
wr32(c, (RW(17) + 2100), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(17) + 2104), RW(0));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 2108), RW(2));
wr32(c, (RW(17) + 2208), RW(0));
wr32(c, (RW(17) + 2212), RW(0));
wr32(c, (RW(17) + 2216), RW(0));
wr32(c, (RW(17) + 2220), RW(2));
wr32(c, (RW(17) + 2224), RW(0));
wr32(c, (RW(17) + 2228), RW(0));
wr32(c, (RW(17) + 2232), RW(0));
SET64(31, 0x15c03c); wr32(c, (RW(17) + 2236), RW(2)); JP_F_0015BB20(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015C060(Ctx *c) { /* func_0015C060 */
ENTER(0x15c060);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015C09C; }
SET64(31, 0x15c084);  JP_F_002C0BF0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015C0A0; }
SET64(31, 0x15c09c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015C09C:;
SET64(2, RD(17) + RD(0));
L_0015C0A0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015C0C0(Ctx *c) { /* func_0015C0C0 */
ENTER(0x15c0c0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x15c0d8); SET64(16, RD(4) + RD(0)); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 544);
SET32(3, RW(3) + 552);
wr32(c, (RW(16) + 56), RW(2));
SET32(4, RW(16) + 64);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 564);
wr32(c, (RW(16) + 36), RW(2));
SET64(31, 0x15c108); wr32(c, (RW(16) + 60), RW(0)); JP_F_00158180(c);
wr8(c, (RW(16) + 84), (u8)RW(0));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015C120(Ctx *c) { /* func_0015C120 */
ENTER(0x15c120);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, rd16(c, (RW(5) + 918)));
SET64(16, RD(5) + RD(0));
wr16(c, (RW(4) + 918), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 924)));
wr32(c, (RW(4) + 924), RW(2));
SET64(2, rd16(c, (RW(5) + 928)));
wr16(c, (RW(4) + 928), (u16)RW(2));
SET64(2, rd8(c, (RW(5) + 931)));
wr8(c, (RW(4) + 931), (u8)RW(2));
SET64(2, rd8(c, (RW(5) + 932)));
wr8(c, (RW(4) + 932), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 936)));
wr32(c, (RW(4) + 936), RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 940)));
wr32(c, (RW(4) + 940), RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 944)));
wr32(c, (RW(4) + 944), RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 948)));
wr32(c, (RW(4) + 948), RW(2));
SET32(5, RW(16) + 952);
SET64(31, 0x15c198); SET32(4, RW(17) + 952); JP_F_002C08F0(c);
SET32(4, RW(17) + 952);
SET32(5, RW(29) + 158);
SET64(31, 0x15c1a8); wr16(c, (RW(29) + 158), (u16)RW(0)); JP_F_002C0930(c);
wr32(c, (RW(17) + 1004), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 1008)));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 140), RW(2));
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(17) + 1008), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 1016)));
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
wr32(c, (RW(17) + 1016), RW(3));
SET64(3, rd8(c, (RW(16) + 1028)));
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr8(c, (RW(17) + 1028), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 1029)));
wr8(c, (RW(17) + 1029), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 1030)));
wr8(c, (RW(17) + 1030), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 1031)));
wr8(c, (RW(17) + 1031), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 1032)));
wr8(c, (RW(17) + 1032), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 1033)));
wr8(c, (RW(17) + 1033), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 1740)));
wr8(c, (RW(17) + 1740), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 1741)));
wr8(c, (RW(17) + 1741), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 1742)));
wr8(c, (RW(17) + 1742), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 1746)));
wr8(c, (RW(17) + 1746), (u8)RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 1748)));
wr32(c, (RW(17) + 1748), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 1752)));
wr32(c, (RW(17) + 1752), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 1756)));
wr32(c, (RW(17) + 1756), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 2076)));
wr32(c, (RW(17) + 2076), RW(3));
SET64(3, rd16(c, (RW(16) + 2082)));
wr16(c, (RW(17) + 2082), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 2080)));
wr16(c, (RW(17) + 2080), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 2084)));
wr16(c, (RW(17) + 2084), (u16)RW(3));
SET64(3, rd8(c, (RW(16) + 2112)));
wr8(c, (RW(17) + 2112), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 2113)));
wr8(c, (RW(17) + 2113), (u8)RW(3));
wr128(c, (RW(17) + 2096) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(16) + 1760)));
{ int t = RD(2) == RD(0);  if (t) goto L_0015C308; }
SET64(20, rd16(c, (RW(17) + 2080)));
SET64(19, RD(0) + RD(0));
SET32(2, RW(20) << 6);
SET64(31, 0x15c290); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0015C2C0; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(8, RD(20) + RD(0));
SET32(19, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET32(5, RW(5) + 25920);
SET32(6, RW(6) + 25536);
SET64(31, 0x15c2bc); SET32(7, RW(0) + 64); JP_F_00102580(c);
SET64(18, RD(2) + RD(0));
L_0015C2C0:;
wr32(c, (RW(17) + 1760), RW(18));
SET64(2, rd16(c, (RW(17) + 2080)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_0015C308; }
SET64(2, RD(18) & 0xffff);
L_0015C2D4:;
SET64(3, (s32)rd32(c, (RW(17) + 1760)));
SET32(5, RW(2) << 6);
SET64(2, (s32)rd32(c, (RW(16) + 1760)));
SET32(4, RW(3) + RW(5));
SET64(31, 0x15c2ec); SET32(5, RW(2) + RW(5)); JP_F_00156430(c);
SET64(2, rd16(c, (RW(17) + 2080)));
SET32(3, RW(18) + 1);
SET64(18, RD(3) & 0xffff);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, RD(18) & 0xffff); { POLL(); goto L_0015C2D4; } }
L_0015C308:;
SET64(2, (s32)rd32(c, (RW(16) + 1764)));
if (RD(2) == RD(0)) { SET64(8, RD(0) + RD(0)); goto L_0015C340; }
SET64(31, 0x15c31c); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0015C32C; }
SET64(31, 0x15c32c); SET64(4, RD(18) + RD(0)); JP_F_00156540(c);
L_0015C32C:;
wr32(c, (RW(17) + 1764), RW(18));
SET64(5, (s32)rd32(c, (RW(16) + 1764)));
SET64(31, 0x15c33c); SET64(4, RD(18) + RD(0)); JP_F_00156430(c);
SET64(8, RD(0) + RD(0));
L_0015C340:;
SET64(7, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
L_0015C350:;
SET64(3, rd16(c, (RW(7) + 2064)));
SET32(8, RW(8) + 1);
SET64(2, RD(8) < (u64)(s64)6);
wr16(c, (RW(6) + 2064), (u16)RW(3));
SET32(7, RW(7) + 2);
rd128(c, (RW(5) + 1776) & ~15u, &c->r[3]);
SET32(6, RW(6) + 2);
wr128(c, (RW(4) + 1776) & ~15u, &c->r[3]);
rd128(c, (RW(5) + 1792) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 1792) & ~15u, &c->r[3]);
rd128(c, (RW(5) + 1808) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 1808) & ~15u, &c->r[3]);
SET32(5, RW(5) + 48);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 48); if (t) { POLL(); goto L_0015C350; } }
SET64(2, (s32)rd32(c, (RW(16) + 1768)));
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
wr32(c, (RW(17) + 1768), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 1772)));
SET64(31, 0x15c3a8); wr32(c, (RW(17) + 1772), RW(2)); JP_F_00152AF0(c);
SET64(2, (s64)(s32)0x3f0000);
SET64(5, (s32)rd32(c, (RW(2) + -4252)));
SET64(31, 0x15c3b8); SET64(4, RD(17) + RD(0)); JP_F_001520D0(c);
wr16(c, (RW(17) + 896), (u16)RW(2));
SET64(2, (s64)(s32)0x3f0000);
SET64(5, (s32)rd32(c, (RW(2) + -4240)));
SET64(31, 0x15c3cc); SET64(4, RD(17) + RD(0)); JP_F_001520D0(c);
wr16(c, (RW(17) + 2124), (u16)RW(2));
SET64(19, RD(0) + RD(0));
L_0015C3D4:;
SET64(6, (s64)(s32)0x3f0000);
SET32(5, RW(29) + 96);
SET32(6, RW(6) + -9424);
SET32(4, RW(0) + 5);
L_0015C3E8:;
SET64(3, (s16)rd16(c, (RW(6) + 0)));
SET32(4, RW(4) + -1);
SET64(2, (s16)rd16(c, (RW(6) + 2)));
wr16(c, (RW(5) + 0), (u16)RW(3));
wr16(c, (RW(5) + 2), (u16)RW(2));
SET32(6, RW(6) + 4);
{ int t = RSD(4) > 0; SET32(5, RW(5) + 4); if (t) { POLL(); goto L_0015C3E8; } }
SET64(3, RD(19) & 0xffff);
SET64(2, (s64)(s32)0x3f0000);
SET32(18, RW(3) << 1);
SET32(2, RW(2) + -4256);
SET32(3, RW(18) + RW(29));
SET64(3, rd16(c, (RW(3) + 96)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x15c434); SET64(4, RD(17) + RD(0)); JP_F_001520D0(c);
SET32(4, RW(17) + RW(18));
SET32(3, RW(19) + 1);
wr16(c, (RW(4) + 2126), (u16)RW(2));
SET64(19, RD(3) & 0xffff);
SET64(2, RSD(19) < (s64)10);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0015C3D4; } }
SET64(19, RD(0) + RD(0));
L_0015C454:;
SET64(18, RD(19) & 0xffff);
SET64(2, (s64)(s32)0x3f0000);
SET32(2, RW(2) + -4256);
SET32(3, RW(18) << 2);
SET32(2, RW(2) + RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x15c474); SET64(4, RD(17) + RD(0)); JP_F_001520D0(c);
SET32(3, RW(19) + 1);
SET32(4, RW(18) << 1);
SET64(19, RD(3) & 0xffff);
SET32(4, RW(17) + RW(4));
SET64(3, RSD(19) < (s64)23);
{ int t = RD(3) != RD(0); wr16(c, (RW(4) + 2146), (u16)RW(2)); if (t) { POLL(); goto L_0015C454; } }
SET64(3, (s32)rd32(c, (RW(16) + 1020)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 1024))); goto L_0015C540; }
SET64(31, 0x15c4a4); SET32(4, RW(0) + 960); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0015C520; }
SET32(4, RW(18) + 932);
SET32(19, RW(0) + 1);
SET64(31, 0x15c4bc); wr32(c, (RW(18) + 256), RW(4)); JP_F_00141C80(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x15c4c8); SET64(5, RD(0) + RD(0)); JP_F_001530D0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(6, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -1552);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 276), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(5, (s32)rd32(c, (RW(18) + 256)));
SET32(6, RW(6) + -1388);
SET32(4, RW(4) + -1480);
SET32(3, RW(3) + -1448);
SET32(2, RW(18) + 932);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(18) + 432), RW(4));
wr32(c, (RW(18) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
wr32(c, (RW(18) + 912), RW(0));
wr32(c, (RW(18) + 916), RW(0));
wr32(c, (RW(18) + 920), RW(0));
wr32(c, (RW(18) + 924), RW(0));
wr16(c, (RW(18) + 928), (u16)RW(0));
L_0015C520:;
wr32(c, (RW(17) + 1020), RW(18));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(18) + 276)));
SET64(5, (s32)rd32(c, (RW(16) + 1020)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x15c53c); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 1024)));
L_0015C540:;
if (RD(3) == RD(0)) { SET32(3, RW(0) + 1); goto L_0015C640; }
SET64(31, 0x15c550); SET32(4, RW(0) + 624); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_0015C628; }
SET64(31, 0x15c560); SET64(4, RD(20) + RD(0)); JP_F_00141C80(c);
SET32(4, RW(20) + 32);
SET64(31, 0x15c56c); SET32(5, RW(0) + 1); JP_F_002BAA90(c);
SET32(19, RW(20) + 352);
SET64(31, 0x15c578); SET64(4, RD(19) + RD(0)); JP_F_002B3FD0(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(18, RW(20) + 448);
SET32(2, RW(2) + 512);
SET64(4, RD(18) + RD(0));
SET64(31, 0x15c590); wr32(c, (RW(19) + 8), RW(2)); JP_F_002B4380(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 480);
SET32(3, RW(3) + 8512);
wr32(c, (RW(18) + 8), RW(2));
SET32(4, RW(20) + 512);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(20) + 16), RW(3));
SET32(2, RW(2) + 8548);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(20) + 176), RW(2));
SET32(3, RW(3) + 8580);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(20) + 360), RW(3));
SET32(2, RW(2) + 8600);
wr32(c, (RW(20) + 456), RW(2));
SET64(31, 0x15c5d8); wr32(c, (RW(20) + 496), RW(0)); JP_F_002B5760(c);
wr32(c, (RW(20) + 576), RW(0));
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 1760);
wr32(c, (RW(20) + 580), RW(0));
SET32(2, RW(2) + 1796);
wr32(c, (RW(20) + 16), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(20) + 176), RW(2));
SET32(3, RW(3) + 1828);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 1848);
wr32(c, (RW(20) + 360), RW(3));
wr32(c, (RW(20) + 456), RW(2));
wr8(c, (RW(20) + 592), (u8)RW(0));
wr32(c, (RW(20) + 596), RW(0));
wr32(c, (RW(20) + 600), RW(0));
wr32(c, (RW(20) + 604), RW(0));
wr16(c, (RW(20) + 608), (u16)RW(0));
wr16(c, (RW(20) + 610), (u16)RW(0));
L_0015C628:;
wr32(c, (RW(17) + 1024), RW(20));
SET64(4, RD(20) + RD(0));
SET64(5, (s32)rd32(c, (RW(16) + 1024)));
SET64(31, 0x15c63c); SET64(6, RD(17) + RD(0)); JP_F_00234630(c);
SET32(3, RW(0) + 1);
L_0015C640:;
wr8(c, (RW(17) + 917), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_0015C670(Ctx *c) { /* func_0015C670 */
ENTER(0x15c670);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 2);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, rd16(c, (RW(4) + 0)));
if (RD(4) == RD(3)) { SET64(25, (s32)rd32(c, (RW(16) + 80))); goto L_0015C6E0; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(2, (s32)rd32(c, (RW(16) + 60))); goto L_0015C6B4; }
if (RD(4) == RD(0)) { SET32(3, RW(4) + 1); goto L_0015C6AC; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_0015C720;
L_0015C6AC:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_0015C71C;
L_0015C6B4:;
SET32(4, RW(16) + 64);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(6, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x15c6d0); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_0015C71C;
L_0015C6E0:;
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x15c6ec); SET32(4, RW(16) + 64); rt_call(c, t); }
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_0015C71C; }
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x15c708); SET32(4, RW(16) + 64); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(31, 0x15c714); wr32(c, (RW(16) + 60), RW(0)); JP_F_00139AB0(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 84), (u8)RW(3));
L_0015C71C:;
SET64(31, rd64(c, (RW(29) + 16)));
L_0015C720:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015C730(Ctx *c) { /* func_0015C730 */
ENTER(0x15c730);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(4) + 60), RW(6));
SET64(16, RD(7) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15c75c); SET32(4, RW(17) + 64); rt_call(c, t); }
SET64(31, 0x15c764);  JP_F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x15c770); SET64(5, RD(17) + RD(0)); JP_F_0013A470(c);
SET64(25, (s32)rd32(c, (RW(17) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x15c780); SET32(4, RW(17) + 64); rt_call(c, t); }
if (RD(16) == RD(0)) { SET64(4, RD(2) + RD(0)); goto L_0015C79C; }
SET64(31, 0x15c790); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
wr32(c, (RW(3) + 0), RW(2)); goto L_0015C7AC;
L_0015C79C:;
SET64(31, 0x15c7a4);  JP_F_00100530(c);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
wr32(c, (RW(3) + 0), RW(2));
L_0015C7AC:;
wr8(c, (RW(17) + 84), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015C7D0(Ctx *c) { /* func_0015C7D0 */
ENTER(0x15c7d0);
SET64(2, RD(4) & 0xffff);
SET32(3, RW(2) << 2);
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 25632);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0))); return;
}

void JP_F_0015C7F0(Ctx *c) { /* func_0015C7F0 */
ENTER(0x15c7f0);
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 26256); return;
}

void JP_F_0015C800(Ctx *c) { /* func_0015C800 */
ENTER(0x15c800);
 return;
}

void JP_F_0015C810(Ctx *c) { /* func_0015C810 */
ENTER(0x15c810);
 return;
}

void JP_F_0015C820(Ctx *c) { /* func_0015C820 */
ENTER(0x15c820);
SET32(4, RW(4) + -4); { JP_F_00158410(c); return; }
}

void JP_F_0015C830(Ctx *c) { /* func_0015C830 */
ENTER(0x15c830);
SET32(4, RW(4) + -24); { JP_F_00158410(c); return; }
}

void JP_F_0015C840(Ctx *c) { /* func_0015C840 */
ENTER(0x15c840);
SET32(4, RW(4) + -36); { JP_F_0015B930(c); return; }
}

void JP_F_0015C850(Ctx *c) { /* func_0015C850 */
ENTER(0x15c850);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -2320);
SET32(4, RW(4) + RW(25)); { JP_F_001581D0(c); return; }
}

void JP_F_0015C860(Ctx *c) { /* func_0015C860 */
ENTER(0x15c860);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -2320);
SET32(4, RW(4) + RW(25)); { JP_F_0015B700(c); return; }
}

void JP_F_0015C870(Ctx *c) { /* func_0015C870 */
ENTER(0x15c870);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -2320);
SET32(4, RW(4) + RW(25)); { JP_F_00158290(c); return; }
}

void JP_F_0015C880(Ctx *c) { /* func_0015C880 */
ENTER(0x15c880);
SET32(4, RW(4) + -288); { JP_F_00159FF0(c); return; }
}

void JP_F_0015C890(Ctx *c) { /* func_0015C890 */
ENTER(0x15c890);
SET32(4, RW(4) + -288); { JP_F_001595D0(c); return; }
}

void JP_F_0015C8A0(Ctx *c) { /* func_0015C8A0 */
ENTER(0x15c8a0);
SET32(4, RW(4) + -288); { JP_F_00158290(c); return; }
}

void JP_F_0015C8B0(Ctx *c) { /* func_0015C8B0 */
ENTER(0x15c8b0);
SET32(4, RW(4) + -704); { JP_F_00159810(c); return; }
}

void JP_F_0015C8C0(Ctx *c) { /* func_0015C8C0 */
ENTER(0x15c8c0);
SET32(4, RW(4) + -704); { JP_F_00158290(c); return; }
}

void JP_F_0015C8D0(Ctx *c) { /* func_0015C8D0 */
ENTER(0x15c8d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015C94C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 624);
wr32(c, (RW(17) + 12), RW(2));
SET64(31, 0x15c900); SET64(4, (s32)rd32(c, (RW(17) + 48))); JP_F_00100430(c);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 48), RW(0)); if (t) goto L_0015C934; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(25); SET64(31, 0x15c920); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0015C938; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 12), RW(2));
L_0015C934:;
SET64(2, RD(16) << 48);
L_0015C938:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015C950; }
SET64(31, 0x15c94c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015C94C:;
SET64(2, RD(17) + RD(0));
L_0015C950:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015C970(Ctx *c) { /* func_0015C970 */
ENTER(0x15c970);
SET64(3, rd16(c, (RW(4) + 44)));
{ int t = RD(3) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_0015C9B0; }
SET64(6, (s32)rd32(c, (RW(4) + 48)));
L_0015C980:;
SET64(3, (s32)rd32(c, (RW(6) + 0)));
if (RD(3) != RD(0)) { SET64(3, rd16(c, (RW(4) + 44))); goto L_0015C99C; }
SET64(3, (s32)rd32(c, (RW(4) + 48)));
SET32(6, RW(7) << 2);
SET32(3, RW(3) + RW(6)); goto L_0015C9B4;
L_0015C99C:;
SET32(7, RW(7) + 1);
SET64(3, RD(7) < RD(3));
{ int t = RD(3) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_0015C980; } }
L_0015C9B0:;
SET64(3, RD(0) + RD(0));
L_0015C9B4:;
wr32(c, (RW(3) + 0), RW(5)); return;
}

void JP_F_0015C9C0(Ctx *c) { /* func_0015C9C0 */
ENTER(0x15c9c0);
SET32(29, RW(29) + -208);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET32(4, RW(29) + 160);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(31, 0x15c9f0); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_00149680(c);
SET64(31, 0x15c9f8); SET32(4, RW(29) + 176); JP_F_00149680(c);
SET64(31, 0x15ca00); SET32(4, RW(29) + 160); JP_F_00147DA0(c);
SET64(31, 0x15ca08); SET32(4, RW(29) + 176); JP_F_00147DA0(c);
wr32(c, (RW(29) + 192), RW(0));
SET64(18, RD(0) + RD(0));
c->f[1].u = rd32(c, (RW(19) + 24));
L_0015CA14:;
SET64(3, (s64)(s32)0x40800000);
c->f[0].u = RW(3);
SET64(17, RD(0) + RD(0));
SET64(3, rd16(c, (RW(19) + 44)));
c->f[20].f = fpu_div(F(1), F(0));
{ int t = RD(3) == RD(0);  if (t) goto L_0015CA98; }
SET64(16, RD(0) + RD(0));
L_0015CA40:;
SET64(3, (s32)rd32(c, (RW(19) + 48)));
SET32(3, RW(3) + RW(16));
SET64(5, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(5) == RD(0);  if (t) goto L_0015CA80; }
SET64(25, (s32)rd32(c, (RW(5) + 64)));
SET32(4, RW(29) + 112);
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x15ca68); c->f[12].u = c->f[20].u; rt_call(c, t); }
rd128(c, (RW(29) + 112) & ~15u, &c->r[4]);
c->f[0].u = rd32(c, (RW(29) + 144));
rd128(c, (RW(29) + 128) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[4]);
wr32(c, (RW(29) + 192), c->f[0].u);
wr128(c, (RW(29) + 176) & ~15u, &c->r[3]);
L_0015CA80:;
SET64(3, rd16(c, (RW(19) + 44)));
SET32(17, RW(17) + 1);
SET64(3, RD(17) < RD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_0015CA40; } }
L_0015CA98:;
SET32(18, RW(18) + 1);
SET64(3, RD(18) < (u64)(s64)4);
if (RD(3) != RD(0)) { c->f[1].u = rd32(c, (RW(19) + 24)); { POLL(); goto L_0015CA14; } }
wr32(c, (RW(20) + 0), RW(0));
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(20) + 4), RW(0));
wr32(c, (RW(20) + 8), RW(0));
wr32(c, (RW(20) + 12), RW(4));
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]);
wr128(c, (RW(20) + 0) & ~15u, &c->r[3]);
wr32(c, (RW(20) + 16), RW(0));
wr32(c, (RW(20) + 20), RW(0));
wr32(c, (RW(20) + 24), RW(0));
wr32(c, (RW(20) + 28), RW(4));
rd128(c, (RW(29) + 176) & ~15u, &c->r[3]);
wr128(c, (RW(20) + 16) & ~15u, &c->r[3]);
c->f[0].u = rd32(c, (RW(29) + 192));
wr32(c, (RW(20) + 32), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 96)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 208); return;
}

void JP_F_0015CB10(Ctx *c) { /* func_0015CB10 */
ENTER(0x15cb10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x15cb28); SET64(4, (s32)rd32(c, (RW(4) + 48))); JP_F_00100430(c);
wr32(c, (RW(16) + 48), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015CB40(Ctx *c) { /* func_0015CB40 */
ENTER(0x15cb40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr16(c, (RW(4) + 44), (u16)RW(5));
SET64(16, RD(4) + RD(0));
SET64(2, rd16(c, (RW(4) + 44)));
SET64(31, 0x15cb60); SET32(4, RW(2) << 2); JP_F_00100530(c);
wr32(c, (RW(16) + 48), RW(2));
SET64(3, rd16(c, (RW(16) + 44)));
{ int t = RD(3) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_0015CB98; }
SET64(4, RD(0) + RD(0));
L_0015CB74:;
SET64(3, (s32)rd32(c, (RW(16) + 48)));
SET32(5, RW(5) + 1);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(3) + 0), RW(0));
SET64(3, rd16(c, (RW(16) + 44)));
SET64(3, RD(5) < RD(3));
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_0015CB74; } }
L_0015CB98:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015CBB0(Ctx *c) { /* func_0015CBB0 */
ENTER(0x15cbb0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4d0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + 656);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 64), RW(2));
SET64(31, 0x15cbd4); SET32(4, RW(16) + 16); JP_F_00149680(c);
SET64(31, 0x15cbdc); SET32(4, RW(16) + 32); JP_F_00149680(c);
SET64(31, 0x15cbe4); SET32(4, RW(16) + 16); JP_F_00147DA0(c);
SET64(31, 0x15cbec); SET32(4, RW(16) + 32); JP_F_00147DA0(c);
wr32(c, (RW(16) + 48), RW(0));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015CC10(Ctx *c) { /* func_0015CC10 */
ENTER(0x15cc10);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(4) + 12), RW(2));
SET32(6, RW(6) + -3104);
wr32(c, (RW(4) + 0), RW(0));
SET64(5, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 4), RW(0));
SET32(3, RW(3) + 624);
wr32(c, (RW(4) + 8), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 12), RW(6));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(5));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr8(c, (RW(4) + 32), (u8)RW(0));
wr32(c, (RW(4) + 12), RW(3));
wr32(c, (RW(4) + 48), RW(0)); return;
}

void JP_F_0015CC70(Ctx *c) { /* func_0015CC70 */
ENTER(0x15cc70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(4) + 64)));
c->f[20].u = rd32(c, (RW(5) + 0));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0015CEEC; }
c->f[0].u = rd32(c, (RW(2) + 4));
c->f[1].u = rd32(c, (RW(16) + 112));
c->fcc = F(1) < F(0);
if (!c->fcc) { c->f[0].u = c->f[20].u; goto L_0015CEF0; }
SET64(2, (s64)(s32)0x40000000);
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(20), F(0));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 112), c->f[0].u);
SET64(8, (s32)rd32(c, (RW(16) + 72)));
c->f[2].u = rd32(c, (RW(16) + 112));
SET64(6, (s32)rd32(c, (RW(16) + 64)));
SET64(5, rd16(c, (RW(8) + 12)));
SET64(4, rd16(c, (RW(6) + 10)));
{ int t = RSD(5) < 0; SET64(7, RD(0) + RD(0)); if (t) goto L_0015CCE4; }
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015CD00;
L_0015CCE4:;
SET32(3, RW(5) >> 1);
SET64(2, RD(5) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015CD00:;
c->fcc = F(2) < F(0);
{ int t = c->fcc;  if (t) goto L_0015CD60; }
SET32(7, RW(7) + 1);
L_0015CD10:;
SET64(1, RSD(7) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_0015CD60; }
SET32(8, RW(8) + 16);
SET64(5, rd16(c, (RW(8) + 12)));
if (RSD(5) < 0) { SET32(3, RW(5) >> 1); goto L_0015CD38; }
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015CD50;
L_0015CD38:;
SET64(2, RD(5) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015CD50:;
c->fcc = F(2) < F(0);
if (!c->fcc) { SET32(7, RW(7) + 1); { POLL(); goto L_0015CD10; } }
L_0015CD60:;
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
{ int t = RSD(5) < 0; c->f[1].f = fpu(F(0) + F(2)); if (t) goto L_0015CD7C; }
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015CD98;
L_0015CD7C:;
SET32(3, RW(5) >> 1);
SET64(2, RD(5) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015CD98:;
c->fcc = F(1) < F(0);
if (c->fcc) { SET64(2, RD(0) + RD(0)); goto L_0015CDA8; }
SET64(2, rd16(c, (RW(8) + 14)));
L_0015CDA8:;
SET64(4, rd16(c, (RW(6) + 8)));
SET64(5, RD(2) & 0xffff);
SET64(8, (s32)rd32(c, (RW(16) + 68)));
SET64(6, rd16(c, (RW(8) + 12)));
{ int t = RSD(6) < 0; SET64(7, RD(0) + RD(0)); if (t) goto L_0015CDCC; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015CDE8;
L_0015CDCC:;
SET32(3, RW(6) >> 1);
SET64(2, RD(6) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015CDE8:;
c->fcc = F(2) < F(0);
{ int t = c->fcc;  if (t) goto L_0015CE48; }
SET32(7, RW(7) + 1);
L_0015CDF8:;
SET64(1, RSD(7) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_0015CE48; }
SET32(8, RW(8) + 16);
SET64(6, rd16(c, (RW(8) + 12)));
if (RSD(6) < 0) { SET32(3, RW(6) >> 1); goto L_0015CE20; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015CE38;
L_0015CE20:;
SET64(2, RD(6) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015CE38:;
c->fcc = F(2) < F(0);
if (!c->fcc) { SET32(7, RW(7) + 1); { POLL(); goto L_0015CDF8; } }
L_0015CE48:;
if (RSD(6) < 0) { SET32(3, RW(6) >> 1); goto L_0015CE5C; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015CE74;
L_0015CE5C:;
SET64(2, RD(6) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015CE74:;
c->fcc = F(1) < F(0);
if (c->fcc) { SET64(2, RD(0) + RD(0)); goto L_0015CE84; }
SET64(2, rd16(c, (RW(8) + 14)));
L_0015CE84:;
SET64(4, RD(2) & 0xffff);
SET64(3, RD(5) & 0xffff);
SET64(2, RD(3) | RD(4));
SET64(2, RD(2) & 0x2);
if (RD(2) != RD(0)) { c->f[0].u = rd32(c, (RW(16) + 116)); goto L_0015CEB8; }
SET64(2, RD(3) & 0x1);
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_0015CED4; }
SET64(2, RD(4) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_0015CED0; }
c->f[0].u = rd32(c, (RW(16) + 116));
L_0015CEB8:;
SET32(2, RW(0) + 1);
c->f[0].f = fpu(F(0) + F(20));
wr32(c, (RW(16) + 116), c->f[0].u);
c->f[20].u = RW(0);
wr8(c, (RW(16) + 120), (u8)RW(2)); goto L_0015CEEC;
L_0015CED0:;
SET64(4, RD(16) + RD(0));
L_0015CED4:;
SET64(31, 0x15cedc);  JP_F_0015D000(c);
c->f[0].u = rd32(c, (RW(16) + 116));
c->f[20].f = fpu(F(20) + F(0));
wr32(c, (RW(16) + 116), RW(0));
wr8(c, (RW(16) + 120), (u8)RW(0));
L_0015CEEC:;
c->f[0].u = c->f[20].u;
L_0015CEF0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void JP_F_0015CF10(Ctx *c) { /* func_0015CF10 */
ENTER(0x15cf10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 64), RW(5));
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0015CFE4; }
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(5, (s64)(s32)0x490000);
SET32(5, RW(5) + 26264);
SET64(31, 0x15cf3c); SET32(6, RW(0) + 3); JP_F_0012A7C0(c);
SET64(2, (s32)rd32(c, (RW(16) + 64)));
SET32(3, RW(2) + 32);
wr32(c, (RW(16) + 68), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 64)));
SET64(2, rd16(c, (RW(2) + 8)));
SET32(2, RW(2) << 4);
SET32(2, RW(3) + RW(2));
wr32(c, (RW(16) + 72), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 64)));
SET64(2, rd16(c, (RW(3) + 12)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 76), RW(0)); goto L_0015CF80; }
SET64(3, rd16(c, (RW(3) + 10)));
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET32(3, RW(3) << 4);
SET32(2, RW(2) + RW(3));
wr32(c, (RW(16) + 76), RW(2));
L_0015CF80:;
SET64(3, (s32)rd32(c, (RW(16) + 64)));
SET64(2, rd16(c, (RW(3) + 14)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 80), RW(0)); goto L_0015CFA4; }
SET64(3, rd16(c, (RW(3) + 12)));
SET64(2, (s32)rd32(c, (RW(16) + 76)));
SET32(3, RW(3) << 3);
SET32(2, RW(2) + RW(3));
wr32(c, (RW(16) + 80), RW(2));
L_0015CFA4:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 112), RW(0)); goto L_0015CFD8; }
SET64(3, (s32)rd32(c, (RW(16) + 64)));
SET64(2, (s64)(s32)0x40000000);
c->f[1].u = RW(2);
c->f[0].u = rd32(c, (RW(3) + 16));
c->f[12].f = fpu_div(F(0), F(1));
SET64(31, 0x15cfd4);  JP_F_00162D00(c);
wr32(c, (RW(16) + 112), RW(0));
L_0015CFD8:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x15cfe4); wr32(c, (RW(16) + 116), RW(0)); JP_F_0015D000(c);
L_0015CFE4:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015D000(Ctx *c) { /* func_0015D000 */
ENTER(0x15d000);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 64)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0015D4B8; }
SET64(2, rd16(c, (RW(3) + 8)));
SET32(4, RW(29) + 80);
SET32(6, RW(29) + 108);
wr32(c, (RW(29) + 108), RW(2));
SET64(5, (s32)rd32(c, (RW(16) + 68)));
SET64(31, 0x15d034); SET32(7, RW(16) + 112); JP_F_0015D8F0(c);
SET64(2, (s32)rd32(c, (RW(16) + 64)));
SET32(4, RW(29) + 64);
SET32(6, RW(29) + 104);
SET64(2, rd16(c, (RW(2) + 10)));
wr32(c, (RW(29) + 104), RW(2));
SET64(5, (s32)rd32(c, (RW(16) + 72)));
SET64(31, 0x15d054); SET32(7, RW(16) + 112); JP_F_0015D8F0(c);
SET64(2, (s32)rd32(c, (RW(16) + 76)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 80))); goto L_0015D230; }
SET64(4, (s32)rd32(c, (RW(16) + 64)));
c->f[1].u = rd32(c, (RW(16) + 112));
SET64(3, rd16(c, (RW(2) + 4)));
SET64(5, rd16(c, (RW(4) + 12)));
{ int t = RSD(3) < 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0015D084; }
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D0A0;
L_0015D084:;
SET32(4, RW(3) >> 1);
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D0A0:;
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_0015D100; }
SET32(6, RW(6) + 1);
L_0015D0B0:;
SET64(1, RSD(6) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_0015D100; }
SET32(2, RW(2) + 8);
SET64(3, rd16(c, (RW(2) + 4)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_0015D0D8; }
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D0F0;
L_0015D0D8:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D0F0:;
c->fcc = F(1) < F(0);
if (!c->fcc) { SET32(6, RW(6) + 1); { POLL(); goto L_0015D0B0; } }
L_0015D100:;
if (RD(6) == RD(0)) { c->f[0].u = rd32(c, (RW(2) + 0)); goto L_0015D228; }
SET64(3, rd16(c, (RW(2) + 6)));
SET64(3, RD(3) & 0x1);
if (RD(3) != RD(0)) { c->f[0].u = rd32(c, (RW(2) + 0)); goto L_0015D228; }
SET64(3, rd16(c, (RW(2) + -2)));
SET64(3, RD(3) & 0x1);
if (RD(3) == RD(0)) { SET64(6, rd16(c, (RW(2) + 4))); goto L_0015D134; }
c->f[0].u = rd32(c, (RW(2) + 0));
 goto L_0015D228;
L_0015D134:;
SET64(3, (s64)(s32)0x3f800000);
c->f[2].u = RW(3);
{ int t = RSD(6) < 0; c->f[3].u = rd32(c, (RW(2) + -8)); if (t) goto L_0015D150; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D16C;
L_0015D150:;
SET32(4, RW(6) >> 1);
SET64(3, RD(6) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D16C:;
c->fcc = F(1) < F(0);
if (!c->fcc) { c->f[1].u = rd32(c, (RW(2) + 0)); goto L_0015D214; }
SET64(5, rd16(c, (RW(2) + -4)));
if (RSD(5) < 0) { SET32(4, RW(5) >> 1); goto L_0015D190; }
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D1A8;
L_0015D190:;
SET64(3, RD(5) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D1A8:;
{ int t = RSD(6) < 0; c->f[2].f = fpu(F(1) - F(0)); if (t) goto L_0015D1BC; }
c->f[0].u = RW(6);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_0015D1D8;
L_0015D1BC:;
SET32(4, RW(6) >> 1);
SET64(3, RD(6) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_0015D1D8:;
if (RSD(5) < 0) { SET32(4, RW(5) >> 1); goto L_0015D1EC; }
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D204;
L_0015D1EC:;
SET64(3, RD(5) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D204:;
c->f[0].f = fpu(F(1) - F(0));
c->f[2].f = fpu_div(F(2), F(0));
c->f[1].u = rd32(c, (RW(2) + 0));
L_0015D214:;
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(3));
c->f[0].f = fpu(F(1) - F(3));
c->f[0].f = fpu(c->facc + F(0) * F(2));
L_0015D228:;
wr32(c, (RW(16) + 48), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 80)));
L_0015D230:;
if (RD(2) == RD(0)) { c->f[5].u = rd32(c, (RW(16) + 104)); goto L_0015D438; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_0015D434; }
SET64(5, (s32)rd32(c, (RW(16) + 64)));
c->f[1].u = rd32(c, (RW(16) + 112));
SET64(3, rd16(c, (RW(2) + 4)));
SET64(6, rd16(c, (RW(5) + 14)));
{ int t = RSD(3) < 0; SET64(7, RD(0) + RD(0)); if (t) goto L_0015D268; }
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D284;
L_0015D268:;
SET32(5, RW(3) >> 1);
SET64(3, RD(3) & 0x1);
SET64(5, RD(5) | RD(3));
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D284:;
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_0015D2E0; }
SET32(7, RW(7) + 1);
L_0015D294:;
SET64(1, RSD(7) < RSD(6));
{ int t = RD(1) == RD(0);  if (t) goto L_0015D2E0; }
SET32(2, RW(2) + 8);
SET64(3, rd16(c, (RW(2) + 4)));
if (RSD(3) < 0) { SET32(5, RW(3) >> 1); goto L_0015D2BC; }
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D2D4;
L_0015D2BC:;
SET64(3, RD(3) & 0x1);
SET64(5, RD(5) | RD(3));
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D2D4:;
c->fcc = F(1) < F(0);
if (!c->fcc) { SET32(7, RW(7) + 1); { POLL(); goto L_0015D294; } }
L_0015D2E0:;
if (RD(7) == RD(0)) { c->f[1].u = rd32(c, (RW(2) + 0)); goto L_0015D408; }
SET64(3, rd16(c, (RW(2) + 6)));
SET64(3, RD(3) & 0x1);
if (RD(3) != RD(0)) { c->f[1].u = rd32(c, (RW(2) + 0)); goto L_0015D408; }
SET64(3, rd16(c, (RW(2) + -2)));
SET64(3, RD(3) & 0x1);
if (RD(3) == RD(0)) { SET64(7, rd16(c, (RW(2) + 4))); goto L_0015D314; }
c->f[1].u = rd32(c, (RW(2) + 0));
 goto L_0015D408;
L_0015D314:;
SET64(3, (s64)(s32)0x3f800000);
c->f[2].u = RW(3);
{ int t = RSD(7) < 0; c->f[3].u = rd32(c, (RW(2) + -8)); if (t) goto L_0015D330; }
c->f[0].u = RW(7);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D34C;
L_0015D330:;
SET32(5, RW(7) >> 1);
SET64(3, RD(7) & 0x1);
SET64(5, RD(5) | RD(3));
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D34C:;
c->fcc = F(1) < F(0);
if (!c->fcc) { c->f[1].u = rd32(c, (RW(2) + 0)); goto L_0015D3F4; }
SET64(6, rd16(c, (RW(2) + -4)));
if (RSD(6) < 0) { SET32(5, RW(6) >> 1); goto L_0015D370; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D388;
L_0015D370:;
SET64(3, RD(6) & 0x1);
SET64(5, RD(5) | RD(3));
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D388:;
{ int t = RSD(7) < 0; c->f[2].f = fpu(F(1) - F(0)); if (t) goto L_0015D39C; }
c->f[0].u = RW(7);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_0015D3B8;
L_0015D39C:;
SET32(5, RW(7) >> 1);
SET64(3, RD(7) & 0x1);
SET64(5, RD(5) | RD(3));
c->f[0].u = RW(5);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_0015D3B8:;
if (RSD(6) < 0) { SET32(5, RW(6) >> 1); goto L_0015D3CC; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D3E4;
L_0015D3CC:;
SET64(3, RD(6) & 0x1);
SET64(5, RD(5) | RD(3));
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D3E4:;
c->f[0].f = fpu(F(1) - F(0));
c->f[2].f = fpu_div(F(2), F(0));
c->f[1].u = rd32(c, (RW(2) + 0));
L_0015D3F4:;
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(3));
c->f[0].f = fpu(F(1) - F(3));
c->f[1].f = fpu(c->facc + F(0) * F(2));
L_0015D408:;
SET64(2, (s64)(s32)0x40000000);
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
c->f[0].u = rd32(c, (RW(4) + 916));
c->fcc = F(12) == F(0);
{ int t = c->fcc;  if (t) goto L_0015D434; }
SET64(31, 0x15d434);  JP_F_00162D00(c);
L_0015D434:;
c->f[5].u = rd32(c, (RW(16) + 104));
L_0015D438:;
SET64(2, (s64)(s32)0x3f800000);
c->f[4].u = rd32(c, (RW(29) + 88));
wr32(c, (RW(29) + 60), RW(2));
c->f[3].u = rd32(c, (RW(16) + 100));
wr32(c, (RW(29) + 44), RW(2));
c->f[2].u = rd32(c, (RW(29) + 84));
SET64(4, RD(16) + RD(0));
c->f[4].f = fpu(F(4) + F(5));
c->f[2].f = fpu(F(2) + F(3));
c->f[1].u = rd32(c, (RW(16) + 96));
c->f[0].u = rd32(c, (RW(29) + 80));
wr32(c, (RW(29) + 56), c->f[4].u);
wr32(c, (RW(29) + 52), c->f[2].u);
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 48), c->f[0].u);
rd128(c, (RW(29) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[2]);
c->f[5].u = rd32(c, (RW(16) + 104));
c->f[4].u = rd32(c, (RW(29) + 72));
c->f[3].u = rd32(c, (RW(16) + 100));
c->f[2].u = rd32(c, (RW(29) + 68));
c->f[4].f = fpu(F(4) + F(5));
c->f[2].f = fpu(F(2) + F(3));
c->f[1].u = rd32(c, (RW(16) + 96));
c->f[0].u = rd32(c, (RW(29) + 64));
wr32(c, (RW(29) + 40), c->f[4].u);
wr32(c, (RW(29) + 36), c->f[2].u);
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 32), c->f[0].u);
rd128(c, (RW(29) + 32) & ~15u, &c->r[2]);
SET64(31, 0x15d4b8); wr128(c, (RW(16) + 32) & ~15u, &c->r[2]); JP_F_0015DAB0(c);
L_0015D4B8:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_0015D4D0(Ctx *c) { /* func_0015D4D0 */
ENTER(0x15d4d0);
SET64(2, rd16(c, (RW(4) + 4)));
c->f[1].u = rd32(c, (RW(6) + 0));
{ int t = RSD(2) < 0; SET64(7, RD(0) + RD(0)); if (t) goto L_0015D4EC; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D508;
L_0015D4EC:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D508:;
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_0015D568; }
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(7, RW(7) + 1);
L_0015D51C:;
SET64(1, RSD(7) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_0015D568; }
SET32(4, RW(4) + 8);
SET64(2, rd16(c, (RW(4) + 4)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0015D544; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D55C;
L_0015D544:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D55C:;
c->fcc = F(1) < F(0);
if (!c->fcc) { SET32(7, RW(7) + 1); { POLL(); goto L_0015D51C; } }
L_0015D568:;
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_0015D570(Ctx *c) { /* func_0015D570 */
ENTER(0x15d570);
SET64(2, rd16(c, (RW(4) + 4)));
c->f[1].u = rd32(c, (RW(6) + 0));
{ int t = RSD(2) < 0; SET64(8, RD(0) + RD(0)); if (t) goto L_0015D58C; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D5A8;
L_0015D58C:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D5A8:;
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_0015D608; }
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(8, RW(8) + 1);
L_0015D5BC:;
SET64(1, RSD(8) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_0015D608; }
SET32(4, RW(4) + 8);
SET64(2, rd16(c, (RW(4) + 4)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0015D5E4; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D5FC;
L_0015D5E4:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D5FC:;
c->fcc = F(1) < F(0);
if (!c->fcc) { SET32(8, RW(8) + 1); { POLL(); goto L_0015D5BC; } }
L_0015D608:;
if (RD(8) == RD(0)) { c->f[0].u = rd32(c, (RW(4) + 0)); goto L_0015D744; }
{ int t = RD(7) == RD(0);  if (t) goto L_0015D740; }
SET64(2, rd16(c, (RW(4) + 6)));
SET64(2, RD(2) & 0x1);
if (RD(2) != RD(0)) { c->f[0].u = rd32(c, (RW(4) + 0)); goto L_0015D738; }
SET64(2, rd16(c, (RW(4) + -2)));
SET64(2, RD(2) & 0x1);
if (RD(2) == RD(0)) { SET64(6, rd16(c, (RW(4) + 4))); goto L_0015D644; }
c->f[0].u = rd32(c, (RW(4) + 0));
 goto L_0015D738;
L_0015D644:;
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = RW(2);
{ int t = RSD(6) < 0; c->f[3].u = rd32(c, (RW(4) + -8)); if (t) goto L_0015D660; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D67C;
L_0015D660:;
SET32(3, RW(6) >> 1);
SET64(2, RD(6) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D67C:;
c->fcc = F(1) < F(0);
if (!c->fcc) { c->f[1].u = rd32(c, (RW(4) + 0)); goto L_0015D724; }
SET64(5, rd16(c, (RW(4) + -4)));
if (RSD(5) < 0) { SET32(3, RW(5) >> 1); goto L_0015D6A0; }
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D6B8;
L_0015D6A0:;
SET64(2, RD(5) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D6B8:;
{ int t = RSD(6) < 0; c->f[2].f = fpu(F(1) - F(0)); if (t) goto L_0015D6CC; }
c->f[0].u = RW(6);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_0015D6E8;
L_0015D6CC:;
SET32(3, RW(6) >> 1);
SET64(2, RD(6) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_0015D6E8:;
if (RSD(5) < 0) { SET32(3, RW(5) >> 1); goto L_0015D6FC; }
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D714;
L_0015D6FC:;
SET64(2, RD(5) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D714:;
c->f[0].f = fpu(F(1) - F(0));
c->f[2].f = fpu_div(F(2), F(0));
c->f[1].u = rd32(c, (RW(4) + 0));
L_0015D724:;
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(3));
c->f[0].f = fpu(F(1) - F(3));
c->f[0].f = fpu(c->facc + F(0) * F(2));
L_0015D738:;
 goto L_0015D744;
L_0015D740:;
c->f[0].u = rd32(c, (RW(4) + 0));
L_0015D744:;
 return;
}

void JP_F_0015D750(Ctx *c) { /* func_0015D750 */
ENTER(0x15d750);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 12), RW(3));
c->f[7].u = RW(3);
SET64(3, rd16(c, (RW(5) + 14)));
c->f[2].u = rd32(c, (RW(5) + 8));
c->f[1].u = rd32(c, (RW(5) + 4));
c->f[0].u = rd32(c, (RW(5) + 0));
SET64(3, RD(3) & 0x1);
wr32(c, (RW(29) + 8), c->f[2].u);
wr32(c, (RW(29) + 4), c->f[1].u);
{ int t = RD(3) != RD(0); wr32(c, (RW(29) + 0), c->f[0].u); if (t) goto L_0015D794; }
SET64(3, rd16(c, (RW(6) + 14)));
SET64(3, RD(3) & 0x1);
if (RD(3) == RD(0)) { SET64(8, rd16(c, (RW(5) + 12))); goto L_0015D7B4; }
L_0015D794:;
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3));
rd128(c, (RW(29) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]); goto L_0015D8E0;
L_0015D7B4:;
{ int t = RSD(8) < 0; c->f[1].u = rd32(c, (RW(7) + 0)); if (t) goto L_0015D7C8; }
c->f[0].u = RW(8);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D7E4;
L_0015D7C8:;
SET32(5, RW(8) >> 1);
SET64(3, RD(8) & 0x1);
SET64(5, RD(5) | RD(3));
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D7E4:;
c->fcc = F(1) < F(0);
if (!c->fcc) { c->f[6].u = rd32(c, (RW(6) + 8)); goto L_0015D88C; }
SET64(7, rd16(c, (RW(6) + 12)));
if (RSD(7) < 0) { SET32(5, RW(7) >> 1); goto L_0015D808; }
c->f[0].u = RW(7);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D820;
L_0015D808:;
SET64(3, RD(7) & 0x1);
SET64(5, RD(5) | RD(3));
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D820:;
{ int t = RSD(8) < 0; c->f[2].f = fpu(F(1) - F(0)); if (t) goto L_0015D834; }
c->f[0].u = RW(8);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_0015D850;
L_0015D834:;
SET32(5, RW(8) >> 1);
SET64(3, RD(8) & 0x1);
SET64(5, RD(5) | RD(3));
c->f[0].u = RW(5);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_0015D850:;
if (RSD(7) < 0) { SET32(5, RW(7) >> 1); goto L_0015D864; }
c->f[0].u = RW(7);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D87C;
L_0015D864:;
SET64(3, RD(7) & 0x1);
SET64(5, RD(5) | RD(3));
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D87C:;
c->f[0].f = fpu(F(1) - F(0));
c->f[7].f = fpu_div(F(2), F(0));
c->f[6].u = rd32(c, (RW(6) + 8));
L_0015D88C:;
SET64(3, (s64)(s32)0x3f800000);
c->f[2].u = rd32(c, (RW(29) + 8));
c->f[5].u = rd32(c, (RW(6) + 4));
c->f[1].u = rd32(c, (RW(29) + 4));
c->f[3].f = fpu(F(2) - F(6));
c->f[2].u = RW(0);
c->facc = fpu(F(2) + F(6));
c->f[3].f = fpu(c->facc + F(7) * F(3));
c->f[4].u = rd32(c, (RW(6) + 0));
c->f[0].u = rd32(c, (RW(29) + 0));
c->f[1].f = fpu(F(1) - F(5));
c->facc = fpu(F(2) + F(5));
c->f[1].f = fpu(c->facc + F(7) * F(1));
c->f[0].f = fpu(F(0) - F(4));
c->facc = fpu(F(2) + F(4));
c->f[0].f = fpu(c->facc + F(7) * F(0));
wr32(c, (RW(4) + 0), c->f[0].u);
wr32(c, (RW(4) + 4), c->f[1].u);
wr32(c, (RW(4) + 8), c->f[3].u);
wr32(c, (RW(4) + 12), RW(3));
L_0015D8E0:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0015D8F0(Ctx *c) { /* func_0015D8F0 */
ENTER(0x15d8f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, rd16(c, (RW(5) + 12)));
c->f[1].u = rd32(c, (RW(7) + 0));
{ int t = RSD(3) < 0; SET64(9, RD(0) + RD(0)); if (t) goto L_0015D914; }
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D930;
L_0015D914:;
SET32(8, RW(3) >> 1);
SET64(3, RD(3) & 0x1);
SET64(8, RD(8) | RD(3));
c->f[0].u = RW(8);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D930:;
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_0015D990; }
SET64(8, (s32)rd32(c, (RW(6) + 0)));
SET32(9, RW(9) + 1);
L_0015D944:;
SET64(1, RSD(9) < RSD(8));
{ int t = RD(1) == RD(0);  if (t) goto L_0015D990; }
SET32(5, RW(5) + 16);
SET64(3, rd16(c, (RW(5) + 12)));
if (RSD(3) < 0) { SET32(6, RW(3) >> 1); goto L_0015D96C; }
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015D984;
L_0015D96C:;
SET64(3, RD(3) & 0x1);
SET64(6, RD(6) | RD(3));
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015D984:;
c->fcc = F(1) < F(0);
if (!c->fcc) { SET32(9, RW(9) + 1); { POLL(); goto L_0015D944; } }
L_0015D990:;
if (RD(9) == RD(0)) { c->f[2].u = rd32(c, (RW(5) + 8)); goto L_0015D9A8; }
SET64(31, 0x15d9a0); SET32(6, RW(5) + -16); JP_F_0015D750(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_0015D9C8;
L_0015D9A8:;
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(5) + 4));
c->f[0].u = rd32(c, (RW(5) + 0));
wr32(c, (RW(4) + 0), c->f[0].u);
wr32(c, (RW(4) + 4), c->f[1].u);
wr32(c, (RW(4) + 8), c->f[2].u);
wr32(c, (RW(4) + 12), RW(3));
SET64(31, rd64(c, (RW(29) + 0)));
L_0015D9C8:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0015D9D0(Ctx *c) { /* func_0015D9D0 */
ENTER(0x15d9d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
if (RD(16) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_0015DA0C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 680);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 124), RW(3)); if (t) goto L_0015DA08; }
SET64(31, 0x15da08);  JP_F_001004B0(c);
L_0015DA08:;
SET64(2, RD(16) + RD(0));
L_0015DA0C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015DA20(Ctx *c) { /* func_0015DA20 */
ENTER(0x15da20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x15da34); SET64(16, RD(4) + RD(0)); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
SET64(3, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x3f800000);
SET32(3, RW(3) + 680);
wr32(c, (RW(16) + 16), RW(0));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(4));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 36), RW(0));
wr32(c, (RW(16) + 40), RW(0));
wr32(c, (RW(16) + 44), RW(4));
wr32(c, (RW(16) + 0), RW(5));
wr32(c, (RW(16) + 124), RW(3));
wr32(c, (RW(16) + 64), RW(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 76), RW(0));
wr32(c, (RW(16) + 80), RW(0));
wr32(c, (RW(16) + 96), RW(0));
wr32(c, (RW(16) + 100), RW(0));
wr32(c, (RW(16) + 104), RW(0));
wr32(c, (RW(16) + 108), RW(4));
wr8(c, (RW(16) + 120), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015DAB0(Ctx *c) { /* func_0015DAB0 */
ENTER(0x15dab0);
SET32(29, RW(29) + -496);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0015DBC0; }
SET64(31, 0x15dad0); SET32(4, RW(29) + 416); JP_F_002A30D0(c);
rd128(c, (RW(16) + 16) & ~15u, &c->r[3]);
SET32(2, RW(0) + 1);
SET32(4, RW(29) + 416);
wr128(c, (RW(29) + 416) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 448) & ~15u, &c->r[3]);
SET64(31, 0x15daf0); wr8(c, (RW(29) + 468), (u8)RW(2)); JP_F_002A2DF0(c);
SET64(31, 0x15daf8); SET32(4, RW(29) + 352); JP_F_002AF080(c);
SET64(31, 0x15db00); SET32(4, RW(29) + 352); JP_F_002AF080(c);
SET64(31, 0x15db08); SET32(4, RW(29) + 32); JP_F_0015DC60(c);
c->f[12].u = rd32(c, (RW(16) + 48));
SET64(31, 0x15db14); SET64(4, RD(2) + RD(0)); JP_F_002AEF30(c);
SET64(5, RD(2) + RD(0));
SET32(4, RW(29) + 96);
SET64(31, 0x15db24); SET32(6, RW(29) + 352); JP_F_002AEAE0(c);
SET32(4, RW(29) + 160);
SET64(31, 0x15db30); SET32(5, RW(29) + 96); JP_F_0015DC00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x15db3c); SET32(4, RW(29) + 352); JP_F_0015DBD0(c);
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET32(4, RW(29) + 224);
SET64(31, 0x15db4c); SET32(6, RW(29) + 352); JP_F_002AEAE0(c);
SET64(31, 0x15db54); SET32(4, RW(29) + 288); JP_F_002AF080(c);
rd128(c, (RW(29) + 224) & ~15u, &c->r[6]);
SET32(4, RW(29) + 416);
rd128(c, (RW(29) + 240) & ~15u, &c->r[3]);
SET32(5, RW(0) + -1);
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 288) & ~15u, &c->r[6]);
wr128(c, (RW(29) + 304) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 320) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 336) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 320) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 288) & ~15u, &c->r[6]);
rd128(c, (RW(29) + 304) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 384) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 352) & ~15u, &c->r[6]);
wr128(c, (RW(29) + 368) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 400) & ~15u, &c->r[2]);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
wr128(c, (RW(3) + 0) & ~15u, &c->r[6]);
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 384) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 400) & ~15u, &c->r[2]);
SET64(31, 0x15dbc0); wr128(c, (RW(3) + 48) & ~15u, &c->r[2]); JP_F_002A3080(c);
L_0015DBC0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 496); return;
}

void JP_F_0015DBD0(Ctx *c) { /* func_0015DBD0 */
ENTER(0x15dbd0);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
SET64(2, RD(4) + RD(0));
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(5) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(5) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(5) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 48) & ~15u, &c->r[3]); return;
}

void JP_F_0015DC00(Ctx *c) { /* func_0015DC00 */
ENTER(0x15dc00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x15dc1c); SET64(16, RD(5) + RD(0)); JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
SET64(2, RD(17) + RD(0));
wr128(c, (RW(17) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015DC60(Ctx *c) { /* func_0015DC60 */
ENTER(0x15dc60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x15dc74); SET64(16, RD(4) + RD(0)); JP_F_002AF080(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015DC90(Ctx *c) { /* func_0015DC90 */
ENTER(0x15dc90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
if (RD(16) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_0015DCCC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 656);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 64), RW(3)); if (t) goto L_0015DCC8; }
SET64(31, 0x15dcc8);  JP_F_001004B0(c);
L_0015DCC8:;
SET64(2, RD(16) + RD(0));
L_0015DCCC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015DCE0(Ctx *c) { /* func_0015DCE0 */
ENTER(0x15dce0);
 return;
}

void JP_F_0015DCF0(Ctx *c) { /* func_0015DCF0 */
ENTER(0x15dcf0);
 return;
}

void JP_F_0015DD00(Ctx *c) { /* func_0015DD00 */
ENTER(0x15dd00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015DD68; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 704);
wr32(c, (RW(17) + 52), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 52)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15dd38);  rt_call(c, t); }
SET64(5, (s64)(s32)0x160000);
SET64(4, RD(17) + RD(0));
SET32(5, RW(5) + -8832);
SET32(6, RW(0) + 24);
SET64(31, 0x15dd50); SET32(7, RW(0) + 2); JP_F_00102360(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015DD6C; }
SET64(31, 0x15dd68); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015DD68:;
SET64(2, RD(17) + RD(0));
L_0015DD6C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015DD80(Ctx *c) { /* func_0015DD80 */
ENTER(0x15dd80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015DDD0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 720);
wr32(c, (RW(17) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15ddb8);  rt_call(c, t); }
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015DDD4; }
SET64(31, 0x15ddd0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015DDD0:;
SET64(2, RD(17) + RD(0));
L_0015DDD4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015DDF0(Ctx *c) { /* func_0015DDF0 */
ENTER(0x15ddf0);
SET64(2, rd8(c, (RW(4) + 48)));
SET64(3, RD(2) ^ 0x1);
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
SET32(2, RW(4) + RW(2));
SET64(3, rd16(c, (RW(2) + 16)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, RD(2) << 40);
SET64(2, RD(2) >> 40); return;
}

void JP_F_0015DE30(Ctx *c) { /* func_0015DE30 */
ENTER(0x15de30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 48)));
SET64(16, RD(4) + RD(0));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
SET64(31, 0x15de58); SET32(4, RW(16) + RW(2)); JP_F_0015DEF0(c);
SET64(3, rd8(c, (RW(16) + 48)));
SET64(3, RD(3) ^ 0x1);
wr8(c, (RW(16) + 48), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015DE80(Ctx *c) { /* func_0015DE80 */
ENTER(0x15de80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15de9c); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 44)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15deac); SET32(4, RW(16) + 24); rt_call(c, t); }
wr8(c, (RW(16) + 48), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015DEC0(Ctx *c) { /* func_0015DEC0 */
ENTER(0x15dec0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x15ded4); SET64(16, RD(4) + RD(0)); JP_F_0015E160(c);
SET64(31, 0x15dedc); SET32(4, RW(16) + 24); JP_F_0015E160(c);
wr8(c, (RW(16) + 48), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015DEF0(Ctx *c) { /* func_0015DEF0 */
ENTER(0x15def0);
SET32(29, RW(29) + -96);
SET64(8, RD(7) & 0xffff);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(4, RD(6) & 0xffff);
SET64(16, RD(5) + RD(0));
{ int t = RSD(4) >= 0; SET64(3, RD(4) & 0x7); if (t) goto L_0015DF24; }
if (RD(3) == RD(0)) { SET64(2, RD(8) & 0x7); goto L_0015DF28; }
SET32(3, RW(3) + -8);
L_0015DF24:;
SET64(2, RD(8) & 0x7);
L_0015DF28:;
if (RSD(8) >= 0) { SET32(2, RW(2) << 3); goto L_0015DF40; }
{ int t = RD(2) == RD(0);  if (t) goto L_0015DF3C; }
SET32(2, RW(2) + -8);
L_0015DF3C:;
SET32(2, RW(2) << 3);
L_0015DF40:;
SET32(7, RW(0) + 8);
SET32(3, RW(3) + RW(2));
wr16(c, (RW(17) + 16), (u16)RW(3));
SET32(2, RW(0) + -8);
SET64(6, (s32)rd32(c, (RW(28) + -29896)));
SET64(5, RD(4) & RD(2));
SET64(4, RD(8) & RD(2));
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 84), RW(0));
SET32(2, RW(29) + 80);
wr32(c, (RW(29) + 88), RW(7));
wr32(c, (RW(29) + 92), RW(7));
SET64(6, (s32)rd32(c, (RW(6) + 8)));
SET64(3, (s32)rd32(c, (RW(28) + -30248)));
wr32(c, (RW(29) + 64), RW(5));
wr32(c, (RW(29) + 68), RW(4));
wr32(c, (RW(29) + 72), RW(7));
wr32(c, (RW(29) + 76), RW(7));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
wr64(c, (RW(29) + 0), RD(2));
SET64(2, (s32)rd32(c, (RW(6) + 48)));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET32(2, RSW(2) >> 11);
SET32(2, RW(2) << 11);
{ int t = RSD(2) >= 0; SET32(5, RSW(2) >> 6); if (t) goto L_0015DFB0; }
SET32(2, RW(2) + 63);
SET32(5, RSW(2) >> 6);
L_0015DFB0:;
SET64(2, (s32)rd32(c, (RW(6) + 56)));
{ int t = RSD(2) >= 0; SET32(6, RSW(2) >> 6); if (t) goto L_0015DFC4; }
SET32(2, RW(2) + 63);
SET32(6, RSW(2) >> 6);
L_0015DFC4:;
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET32(10, RSW(2) >> 6);
{ int t = RSD(2) >= 0; SET32(9, RSW(3) >> 6); if (t) goto L_0015DFE4; }
SET32(2, RW(2) + 63);
SET32(10, RSW(2) >> 6);
L_0015DFE4:;
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET32(7, RW(0) + 49);
SET32(8, RW(29) + 64);
SET64(31, 0x15dff8); SET32(11, RW(0) + 1); JP_F_002B4080(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x15e00c); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x15e020); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(28) + -30248)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET32(7, RSW(2) >> 6);
{ int t = RSD(2) >= 0; SET32(6, RSW(3) >> 6); if (t) goto L_0015E048; }
SET32(2, RW(2) + 63);
SET32(7, RSW(2) >> 6);
L_0015E048:;
SET64(8, (s32)rd32(c, (RW(4) + 4)));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x15e05c); SET32(9, RW(29) + 80); JP_F_0029FB20(c);
SET64(4, (s32)rd32(c, (RW(17) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x15e070); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_0015E090(Ctx *c) { /* func_0015E090 */
ENTER(0x15e090);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0015E0B4; }
SET64(2, (s32)rd32(c, (RW(28) + -30244)));
SET32(2, RW(2) + -1);
wr32(c, (RW(28) + -30244), RW(2));
L_0015E0B4:;
SET64(2, (s32)rd32(c, (RW(28) + -30244)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_0015E0E4; }
SET64(4, (s32)rd32(c, (RW(28) + -30248)));
if (RD(4) == RD(0)) { wr32(c, (RW(28) + -30248), RW(0)); goto L_0015E0E0; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15e0dc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(28) + -30248), RW(0));
L_0015E0E0:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_0015E0E4:;
SET64(31, 0x15e0ec);  JP_F_00100430(c);
wr32(c, (RW(16) + 0), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_0015E110; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15e10c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
L_0015E110:;
SET64(4, (s32)rd32(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_0015E130; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15e12c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
L_0015E130:;
SET64(4, (s32)rd32(c, (RW(16) + 12)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 12), RW(0)); goto L_0015E150; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15e14c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 12), RW(0));
L_0015E150:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015E160(Ctx *c) { /* func_0015E160 */
ENTER(0x15e160);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(28) + -30248)));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0015E1A8; }
SET64(31, 0x15e184); SET32(4, RW(0) + 32); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0015E194; }
SET64(31, 0x15e194); SET64(4, RD(17) + RD(0)); JP_F_001509B0(c);
L_0015E194:;
SET32(5, RW(0) + 8);
SET64(4, RD(17) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x15e1a8); wr32(c, (RW(28) + -30248), RW(17)); JP_F_001504D0(c);
L_0015E1A8:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) != RD(0)) { SET32(4, RW(0) + 256); goto L_0015E1C4; }
SET64(2, (s32)rd32(c, (RW(28) + -30244)));
SET32(2, RW(2) + 1);
wr32(c, (RW(28) + -30244), RW(2));
SET32(4, RW(0) + 256);
L_0015E1C4:;
SET64(31, 0x15e1cc);  JP_F_00100530(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(4, RD(2) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x15e1e0); SET32(6, RW(0) + 256); JP_F_001273D0(c);
SET64(31, 0x15e1e8); SET32(4, RW(0) + 96); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0015E1F8; }
SET64(31, 0x15e1f8); SET64(4, RD(17) + RD(0)); JP_F_002B4190(c);
L_0015E1F8:;
SET32(4, RW(0) + 12);
SET64(31, 0x15e204); wr32(c, (RW(16) + 4), RW(17)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0015E214; }
SET64(31, 0x15e214); SET64(4, RD(17) + RD(0)); JP_F_002B49A0(c);
L_0015E214:;
SET32(4, RW(0) + 144);
SET64(31, 0x15e220); wr32(c, (RW(16) + 8), RW(17)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0015E230; }
SET64(31, 0x15e230); SET64(4, RD(17) + RD(0)); JP_F_0029FD60(c);
L_0015E230:;
wr32(c, (RW(16) + 12), RW(17));
wr16(c, (RW(16) + 16), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015E250(Ctx *c) { /* func_0015E250 */
ENTER(0x15e250);
SET64(3, (s32)rd32(c, (RW(5) + 8)));
rd128(c, (RW(3) + 192) & ~15u, &c->r[3]);
SET64(5, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(5));
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]); return;
}

void JP_F_0015E280(Ctx *c) { /* func_0015E280 */
ENTER(0x15e280);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(31));
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(4) + 8)));
wr128(c, (RW(2) + 192) & ~15u, &c->r[3]);
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15e2a8);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0015E2C0(Ctx *c) { /* func_0015E2C0 */
ENTER(0x15e2c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015E438; }
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 736);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 80), RW(2));
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET32(9, RW(9) + 808);
SET32(8, RW(8) + 772);
SET32(7, RW(7) + 880);
SET32(5, RW(17) + 84);
SET32(3, RW(17) + 112);
wr32(c, (RW(6) + 276), RW(9));
SET32(2, RW(17) + 400);
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
wr32(c, (RW(6) + 16), RW(8));
SET64(6, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(6) + 144), RW(7));
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(5) + 280), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 416), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15e360);  rt_call(c, t); }
SET32(4, RW(17) + 16);
SET64(31, 0x15e36c); SET32(5, RW(0) + -1); JP_F_002B4320(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0015E424; }
SET32(4, RW(17) + 400);
SET64(31, 0x15e380); SET64(5, RD(0) + RD(0)); JP_F_002A5490(c);
SET32(4, RW(17) + 112);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 84); goto L_0015E3FC; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -544);
SET32(5, RW(5) + -472);
wr32(c, (RW(17) + 388), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 368)));
SET32(2, RW(17) + 392);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 368)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15e3c8);  rt_call(c, t); }
SET32(2, RW(17) + 112);
{ int t = RD(2) == RD(0);  if (t) goto L_0015E3F8; }
SET32(4, RW(17) + 144);
SET64(31, 0x15e3e0); SET32(5, RW(0) + -1); JP_F_002A88A0(c);
SET32(2, RW(17) + 112);
{ int t = RD(2) == RD(0);  if (t) goto L_0015E3F8; }
SET32(4, RW(17) + 116);
SET64(31, 0x15e3f8); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
L_0015E3F8:;
SET32(4, RW(17) + 84);
L_0015E3FC:;
{ int t = RD(4) == RD(0);  if (t) goto L_0015E420; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 100), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15e420);  rt_call(c, t); }
L_0015E420:;
SET64(2, RD(16) << 48);
L_0015E424:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015E43C; }
SET64(31, 0x15e438); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015E438:;
SET64(2, RD(17) + RD(0));
L_0015E43C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015E450(Ctx *c) { /* func_0015E450 */
ENTER(0x15e450);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET64(3, rd8(c, (RW(4) + 77)));
c->f[2].u = rd32(c, (RW(2) + 204));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0015E4B0; }
c->f[1].u = rd32(c, (RW(16) + 64));
c->f[0].u = rd32(c, (RW(16) + 68));
c->f[12].f = fpu(F(2) + F(1));
c->fcc = F(12) < F(0);
if (c->fcc) { SET64(2, (s16)rd16(c, (RW(16) + 74))); goto L_0015E4F4; }
SET64(2, (s16)rd16(c, (RW(16) + 74)));
{ int t = RSD(2) <= 0; c->f[12].u = c->f[0].u; if (t) goto L_0015E4F0; }
SET64(2, RD(0) < RD(3));
SET64(2, RD(2) ^ 0x1);
wr8(c, (RW(16) + 77), (u8)RW(2));
SET64(2, (s16)rd16(c, (RW(16) + 74)));
SET32(2, RW(2) + -1);
wr16(c, (RW(16) + 74), (u16)RW(2)); goto L_0015E4F0;
L_0015E4B0:;
c->f[1].u = rd32(c, (RW(16) + 64));
c->f[0].u = RW(0);
c->f[12].f = fpu(F(2) - F(1));
c->fcc = F(12) <= F(0);
{ int t = !c->fcc;  if (t) goto L_0015E4F0; }
SET64(2, (s16)rd16(c, (RW(16) + 74)));
{ int t = RSD(2) <= 0; c->f[12].u = c->f[0].u; if (t) goto L_0015E4F0; }
SET64(2, RD(0) < RD(3));
SET64(2, RD(2) ^ 0x1);
wr8(c, (RW(16) + 77), (u8)RW(2));
SET64(2, (s16)rd16(c, (RW(16) + 74)));
SET32(2, RW(2) + -1);
wr16(c, (RW(16) + 74), (u16)RW(2));
L_0015E4F0:;
SET64(2, (s16)rd16(c, (RW(16) + 74)));
L_0015E4F4:;
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 8))); goto L_0015E51C; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x15e514); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16))); goto L_0015E53C;
L_0015E51C:;
SET64(31, 0x15e524); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15e538);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
L_0015E53C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015E550(Ctx *c) { /* func_0015E550 */
ENTER(0x15e550);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(6) + 0)));
SET64(16, RD(4) + RD(0));
wr16(c, (RW(4) + 74), (u16)RW(3));
c->f[0].u = rd32(c, (RW(5) + 0));
wr32(c, (RW(4) + 64), c->f[0].u);
wr8(c, (RW(4) + 77), (u8)RW(7));
{ int t = RD(7) == RD(0); wr16(c, (RW(4) + 72), (u16)RW(2)); if (t) goto L_0015E58C; }
c->f[12].u = RW(0);
SET64(2, (s32)rd32(c, (RW(16) + 8))); goto L_0015E594;
L_0015E58C:;
c->f[12].u = rd32(c, (RW(16) + 68));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
L_0015E594:;
SET64(31, 0x15e59c); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15e5b0);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015E5C0(Ctx *c) { /* func_0015E5C0 */
ENTER(0x15e5c0);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr16(c, (RW(4) + 72), (u16)RW(2));
SET64(16, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(28) + -29932)));
c->f[3].u = rd32(c, (RW(5) + 0));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
c->f[1].u = rd32(c, (RW(2) + 56));
c->f[0].u = rd32(c, (RW(2) + 60));
c->f[2].f = (f32)(s32)c->f[1].u;
c->f[1].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 172), c->f[3].u);
c->f[0].u = rd32(c, (RW(5) + 0));
wr32(c, (RW(4) + 176), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 0));
c->f[0].f = fpu(F(2) - F(0));
wr32(c, (RW(4) + 180), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 0));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(4) + 184), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15e628);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15e63c);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 8)));
wr8(c, (RW(3) + 364), (u8)RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 256)));
wr32(c, (RW(3) + 4), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015E660(Ctx *c) { /* func_0015E660 */
ENTER(0x15e660);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(16, RD(4) + RD(0));
SET64(31, 0x15e67c); SET64(4, (s32)rd32(c, (RW(2) + 256))); JP_F_00141B90(c);
SET32(2, RW(0) + 4);
wr16(c, (RW(16) + 72), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(28) + -29932)));
c->f[3].u = rd32(c, (RW(28) + -32564));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
c->f[1].u = rd32(c, (RW(2) + 56));
c->f[0].u = rd32(c, (RW(2) + 60));
c->f[2].f = (f32)(s32)c->f[1].u;
c->f[1].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 172), c->f[3].u);
c->f[0].u = rd32(c, (RW(28) + -32564));
wr32(c, (RW(4) + 176), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32564));
c->f[0].f = fpu(F(2) - F(0));
wr32(c, (RW(4) + 180), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32564));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(4) + 184), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15e6d4);  rt_call(c, t); }
SET64(2, (s64)(s32)0x3f660000);
SET64(3, (s64)(s32)0x3f800000);
SET64(2, RD(2) | 0x6666);
wr32(c, (RW(29) + 32), RW(3));
wr32(c, (RW(29) + 44), RW(2));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(29) + 36), RW(3));
wr32(c, (RW(29) + 40), RW(3));
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x15e704); SET32(5, RW(29) + 32); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET32(4, RW(0) + 1);
wr8(c, (RW(3) + 364), (u8)RW(4));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 256)));
wr32(c, (RW(3) + 4), RW(4));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015E730(Ctx *c) { /* func_0015E730 */
ENTER(0x15e730);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, (s16)rd16(c, (RW(4) + 74)));
{ int t = RD(3) == RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_0015E760; }
SET64(31, 0x15e760);  JP_F_0015E450(c);
L_0015E760:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 256)));
SET64(3, rd8(c, (RW(3) + 8)));
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_0015E844; }
SET64(2, rd8(c, (RW(18) + 76)));
if (RD(2) == RD(0)) { SET64(25, (s32)rd32(c, (RW(18) + 24))); goto L_0015E7F8; }
SET64(3, (s32)rd32(c, (RW(18) + 4)));
SET64(2, (s64)(s32)0x3f800000);
SET64(6, RD(16) + RD(0));
SET32(4, RW(29) + 64);
SET32(5, RW(29) + 96);
wr32(c, (RW(29) + 108), RW(2));
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
rd128(c, (RW(3) + 112) & ~15u, &c->r[2]);
SET64(31, 0x15e7b0); wr128(c, (RW(29) + 96) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
c->f[1].u = RW(0);
wr128(c, (RW(29) + 96) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 104));
c->fcc = F(0) < F(1);
if (!c->fcc) { SET64(4, (s32)rd32(c, (RW(18) + 8))); goto L_0015E7D8; }
c->f[0].u = rd32(c, (RW(28) + -32568));
wr32(c, (RW(29) + 104), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(18) + 8)));
L_0015E7D8:;
SET64(31, 0x15e7e0); c->f[12].u = rd32(c, (RW(29) + 104)); JP_F_0014E9B0(c);
SET64(4, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15e7f4);  rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 24)));
L_0015E7F8:;
SET32(4, RW(18) + 16);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x15e808); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(18) + 72)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_0015E840; }
SET64(4, (s32)rd32(c, (RW(18) + 8)));
L_0015E818:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x15e828); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(18) + 72)));
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 8))); { POLL(); goto L_0015E818; } }
L_0015E840:;
SET64(31, rd64(c, (RW(29) + 48)));
L_0015E844:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_0015E860(Ctx *c) { /* func_0015E860 */
ENTER(0x15e860);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(31, 0x15e884); SET64(16, RD(5) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0015E920; }
{ int t = RD(16) == RD(0);  if (t) goto L_0015E8A0; }
SET64(5, RD(17) + RD(0)); goto L_0015E8B0;
L_0015E8A0:;
SET64(31, 0x15e8a8);  JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 12)));
SET64(5, RD(17) + RD(0));
L_0015E8B0:;
if (RD(17) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_0015E8C0; }
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET64(4, RD(16) + RD(0));
L_0015E8C0:;
SET64(31, 0x15e8c8);  JP_F_002A6160(c);
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0015E8D4; }
SET64(5, (s32)rd32(c, (RW(17) + 4)));
L_0015E8D4:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x15e8e0); SET32(4, RW(4) + 1264); JP_F_00243880(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x15e8ec); SET64(5, RD(16) + RD(0)); JP_F_001535F0(c);
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(16, (s32)rd32(c, (RW(2) + 12)));
SET64(31, 0x15e8fc); SET64(4, RD(16) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_0015E91C; }
SET32(2, RW(0) + 2);
SET64(31, 0x15e914); wr32(c, (RW(16) + 0), RW(2)); JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
wr32(c, (RW(16) + 12), RW(3));
L_0015E91C:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0015E920:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015E930(Ctx *c) { /* func_0015E930 */
ENTER(0x15e930);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(31, 0x15e958); SET64(16, RD(5) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_0015EA80; }
{ int t = RD(16) == RD(0);  if (t) goto L_0015E974; }
SET64(5, RD(17) + RD(0)); goto L_0015E984;
L_0015E974:;
SET64(31, 0x15e97c);  JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 12)));
SET64(5, RD(17) + RD(0));
L_0015E984:;
{ int t = RD(17) == RD(0);  if (t) goto L_0015E990; }
SET64(5, (s32)rd32(c, (RW(17) + 4)));
L_0015E990:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x15e99c); SET32(4, RW(4) + 1264); JP_F_002438D0(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET32(2, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(3) + 256)));
SET64(3, (s32)rd32(c, (RW(3) + 4)));
if (RD(3) == RD(2)) { SET64(18, RD(17) + RD(0)); goto L_0015EA30; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(18, RD(17) + RD(0)); goto L_0015EA00; }
if (RD(3) == RD(0)) { SET64(18, RD(17) + RD(0)); goto L_0015E9D0; }
SET64(4, (s32)rd32(c, (RW(17) + 0))); goto L_0015EA5C;
L_0015E9D0:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_0015E9E0; }
SET64(18, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_0015E9E0:;
SET64(31, 0x15e9e8); SET32(5, RW(0) + 1); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x15e9f8); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
 goto L_0015EA58;
L_0015EA00:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_0015EA10; }
SET64(18, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_0015EA10:;
SET64(31, 0x15ea18); SET32(5, RW(0) + 2); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x15ea28); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
 goto L_0015EA58;
L_0015EA30:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_0015EA40; }
SET64(18, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_0015EA40:;
SET64(31, 0x15ea48); SET64(5, RD(0) + RD(0)); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x15ea58); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
L_0015EA58:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
L_0015EA5C:;
SET64(5, RD(16) + RD(0));
SET64(31, 0x15ea68); SET64(6, RD(0) + RD(0)); JP_F_00153640(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET32(3, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(4) + 12)));
wr8(c, (RW(4) + 8), (u8)RW(0));
wr32(c, (RW(4) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
L_0015EA80:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_0015EAA0(Ctx *c) { /* func_0015EAA0 */
ENTER(0x15eaa0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_0015EAD0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15eacc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
L_0015EAD0:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x15eadc); SET64(5, RD(0) + RD(0)); JP_F_002437E0(c);
SET64(31, 0x15eae4); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00154240(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015EB00(Ctx *c) { /* func_0015EB00 */
ENTER(0x15eb00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015EBF8; }
SET64(2, (s64)(s32)0x4d0000);
SET64(8, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1040);
SET64(6, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(5, (s64)(s32)0x4d0000);
SET64(7, (s32)rd32(c, (RW(17) + 12)));
SET32(8, RW(8) + 1196);
SET64(3, (s64)(s32)0x4d0000);
SET32(6, RW(6) + 1088);
SET32(5, RW(5) + 1108);
SET32(3, RW(3) + 1156);
wr32(c, (RW(7) + 16), RW(8));
SET32(2, RW(17) + 372);
wr32(c, (RW(17) + 216), RW(6));
wr32(c, (RW(17) + 220), RW(5));
wr32(c, (RW(17) + 368), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x15eb7c);  rt_call(c, t); }
SET32(4, RW(17) + 356);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_0015EBA8; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1232);
wr32(c, (RW(17) + 368), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x15eba4);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
L_0015EBA8:;
SET64(31, 0x15ebb0); SET64(5, RD(0) + RD(0)); JP_F_0014E490(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0015EBE4; }
SET32(4, RW(17) + 372);
{ int t = RD(4) == RD(0);  if (t) goto L_0015EBE0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 388), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15ebe0);  rt_call(c, t); }
L_0015EBE0:;
SET64(2, RD(16) << 48);
L_0015EBE4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015EBFC; }
SET64(31, 0x15ebf8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015EBF8:;
SET64(2, RD(17) + RD(0));
L_0015EBFC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015EC10(Ctx *c) { /* func_0015EC10 */
ENTER(0x15ec10);
SET32(29, RW(29) + -32);
SET64(5, (s64)(s32)0x150000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET64(31, 0x15ec30); SET32(5, RW(5) + 1040); JP_F_001022C0(c);
wr32(c, (RW(16) + 0), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x15ec44); SET32(5, RW(5) + 2320); JP_F_001022C0(c);
wr32(c, (RW(16) + 4), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015EC60(Ctx *c) { /* func_0015EC60 */
ENTER(0x15ec60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x15ec74); SET64(16, RD(4) + RD(0)); JP_F_0014E9E0(c);
SET64(4, (s32)rd32(c, (RW(16) + 356)));
SET64(5, (s64)(s32)0x150000);
SET64(31, 0x15ec84); SET32(5, RW(5) + 1040); JP_F_001022C0(c);
wr32(c, (RW(16) + 356), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 360)));
SET64(31, 0x15ec98); SET32(5, RW(5) + 2320); JP_F_001022C0(c);
wr32(c, (RW(16) + 360), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015ECB0(Ctx *c) { /* func_0015ECB0 */
ENTER(0x15ecb0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x15ecd0); SET32(4, RW(0) + 400); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0015ED5C; }
SET32(4, RW(16) + 372);
SET32(18, RW(0) + 1);
SET64(31, 0x15ece8); wr32(c, (RW(16) + 12), RW(4)); JP_F_00141C80(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x15ecf4); SET64(5, RD(0) + RD(0)); JP_F_0014E610(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 1232);
SET64(7, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 368), RW(3));
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 356), RW(0));
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 360), RW(0));
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1040);
wr8(c, (RW(16) + 364), (u8)RW(0));
wr32(c, (RW(16) + 8), RW(2));
SET32(7, RW(7) + 1196);
SET64(6, (s32)rd32(c, (RW(16) + 12)));
SET32(5, RW(5) + 1088);
SET32(4, RW(4) + 1108);
SET32(3, RW(3) + 1156);
SET32(2, RW(16) + 372);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(16) + 216), RW(5));
wr32(c, (RW(16) + 220), RW(4));
wr32(c, (RW(16) + 368), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
L_0015ED5C:;
wr32(c, (RW(17) + 8), RW(16));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x15ed74); SET32(5, RW(0) + 1); rt_call(c, t); }
c->f[12].u = rd32(c, (RW(28) + -32572));
SET64(31, 0x15ed80); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_0014E9B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15ed94);  rt_call(c, t); }
SET64(2, (s64)(s32)0x3f660000);
SET64(3, (s64)(s32)0x3f800000);
SET64(2, RD(2) | 0x6666);
wr32(c, (RW(29) + 64), RW(3));
wr32(c, (RW(29) + 76), RW(2));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(29) + 68), RW(3));
wr32(c, (RW(29) + 72), RW(3));
SET64(25, (s32)rd32(c, (RW(17) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x15edc4); SET32(5, RW(29) + 64); rt_call(c, t); }
SET32(4, RW(17) + 16);
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET32(7, RW(0) + 128);
SET64(31, 0x15eddc); SET32(8, RW(0) + 3); JP_F_002B42A0(c);
SET32(4, RW(17) + 16);
SET64(5, RD(0) + RD(0));
SET64(31, 0x15edec); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(4, RW(17) + 16);
SET32(5, RW(0) + 1);
SET64(31, 0x15edfc); SET32(6, RW(0) + 2); JP_F_002B4230(c);
SET32(4, RW(0) + 1);
SET64(3, (s64)(s32)0x3f800000);
wr16(c, (RW(17) + 72), (u16)RW(4));
wr32(c, (RW(17) + 68), RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_0015EE30(Ctx *c) { /* func_0015EE30 */
ENTER(0x15ee30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015EE80; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1232);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x15ee68);  rt_call(c, t); }
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015EE84; }
SET64(31, 0x15ee80); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015EE80:;
SET64(2, RD(17) + RD(0));
L_0015EE84:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015EEA0(Ctx *c) { /* func_0015EEA0 */
ENTER(0x15eea0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(28) + -29932)));
SET64(2, (s32)rd32(c, (RW(3) + 48)));
wr32(c, (RW(29) + 112), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 52)));
wr32(c, (RW(29) + 116), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 56)));
wr32(c, (RW(29) + 120), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 60)));
{ int t = RD(5) == RD(0); wr32(c, (RW(29) + 124), RW(2)); if (t) goto L_0015EEF0; }
SET32(16, RW(0) + 1); goto L_0015EEF4;
L_0015EEF0:;
SET64(16, RD(0) + RD(0));
L_0015EEF4:;
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
SET64(17, RD(20) + RD(0));
L_0015EF00:;
SET64(2, (s32)rd32(c, (RW(29) + 120)));
{ int t = RSD(2) >= 0; SET32(6, RSW(2) >> 6); if (t) goto L_0015EF14; }
SET32(2, RW(2) + 63);
SET32(6, RSW(2) >> 6);
L_0015EF14:;
SET64(3, (s32)rd32(c, (RW(28) + -29896)));
SET64(2, RD(19) ^ 0x1);
SET32(2, RW(2) << 2);
SET32(8, RW(29) + 112);
SET32(4, RW(17) + 272);
SET64(7, RD(16) + RD(0));
SET32(2, RW(3) + RW(2));
wr64(c, (RW(29) + 0), RD(8));
SET32(3, RW(3) + RW(18));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(10, RD(6) + RD(0));
SET64(11, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 48)));
SET64(3, (s32)rd32(c, (RW(3) + 48)));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET32(2, RSW(2) >> 11);
SET32(3, RSW(3) >> 11);
SET32(9, RW(2) << 5);
SET64(31, 0x15ef6c); SET32(5, RW(3) << 5); JP_F_002B4080(c);
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 4);
SET64(2, RSD(19) < (s64)2);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 96); if (t) { POLL(); goto L_0015EF00; } }
SET64(3, (s32)rd32(c, (RW(20) + 12)));
SET32(5, RW(0) + 1);
SET64(2, (s64)(s32)0x4b800000);
SET64(4, RD(20) + RD(0));
c->f[12].u = RW(2);
SET64(31, 0x15ef9c); wr32(c, (RW(3) + 4), RW(5)); JP_F_0014E9B0(c);
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15efac); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_0015EFD0(Ctx *c) { /* func_0015EFD0 */
ENTER(0x15efd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, 0x15eff0); SET64(16, RD(5) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0015F038; }
SET64(3, (s32)rd32(c, (RW(28) + -29912)));
SET64(2, rd8(c, (RW(17) + 204)));
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(3) + 40))); if (t) goto L_0015F010; }
SET64(3, RD(3) ^ 0x1);
L_0015F010:;
SET64(2, (s32)rd32(c, (RW(17) + 196)));
SET32(3, RW(3) << 6);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(31, 0x15f028); wr32(c, (RW(17) + 188), RW(2)); JP_F_0014C080(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x15f034); SET64(5, RD(16) + RD(0)); JP_F_0014BF90(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_0015F038:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015F050(Ctx *c) { /* func_0015F050 */
ENTER(0x15f050);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(31));
c->f[0].u = rd32(c, (RW(5) + 12));
c->f[2].u = rd32(c, (RW(5) + 4));
c->f[1].u = rd32(c, (RW(5) + 0));
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 24), c->f[0].u);
wr32(c, (RW(29) + 28), c->f[0].u);
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[0].f = (f32)(s32)c->f[1].u;
wr32(c, (RW(29) + 20), c->f[2].u);
wr32(c, (RW(29) + 16), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x15f090); SET32(5, RW(29) + 16); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0015F0A0(Ctx *c) { /* func_0015F0A0 */
ENTER(0x15f0a0);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x40000000);
wr64(c, (RW(29) + 0), RD(31));
c->f[1].u = RW(2);
c->f[5].u = rd32(c, (RW(5) + 0));
c->f[2].u = rd32(c, (RW(5) + 8));
c->f[4].u = rd32(c, (RW(5) + 4));
c->f[0].u = rd32(c, (RW(5) + 12));
c->f[2].f = fpu(F(2) - F(5));
c->f[3].f = fpu_div(F(2), F(1));
c->f[0].f = fpu(F(0) - F(4));
c->f[2].f = fpu_div(F(0), F(1));
c->f[0].f = fpu(F(5) - F(3));
wr32(c, (RW(4) + 32), c->f[0].u);
c->f[0].f = fpu(F(4) - F(2));
wr32(c, (RW(4) + 36), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(4) + 160)));
c->f[1].u = c->f[3].u ^ 0x80000000u;
c->f[0].u = c->f[2].u ^ 0x80000000u;
wr32(c, (RW(2) + 0), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(2) + 4), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(2) + 8), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(2) + 12), c->f[2].u);
SET64(2, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(2) + 16), c->f[3].u);
SET64(2, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(2) + 20), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(2) + 24), c->f[3].u);
SET64(2, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(2) + 28), c->f[2].u);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15f138);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0015F150(Ctx *c) { /* func_0015F150 */
ENTER(0x15f150);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET32(4, RW(16) + 196);
SET64(31, 0x15f174); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_0015F580(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x15f180); SET32(5, RW(0) + 4); JP_F_0014C5E0(c);
SET64(2, (s32)rd32(c, (RW(28) + -29932)));
SET64(18, (s32)rd32(c, (RW(2) + 60)));
SET64(31, 0x15f190); SET64(17, (s32)rd32(c, (RW(2) + 56))); JP_F_002C2AD0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0015F1F8; }
SET64(2, (s64)(s32)0xbf000000);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(29) + 80), RW(2));
c->f[0].u = RW(17);
SET64(2, (s64)(s32)0xbf170000);
SET64(3, RD(2) | 0xa3d);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s64)(s32)0x3fb00000);
wr32(c, (RW(29) + 84), RW(3));
SET64(2, RD(2) | 0xa3d7);
SET64(3, RD(2) << 32);
SET64(2, (s64)(s32)0xa3d0000);
SET64(2, RD(2) | 0x70a4);
SET64(17, RD(2) | RD(3));
SET64(31, 0x15f1d8); wr32(c, (RW(29) + 88), c->f[0].u); JP_F_00122158(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x15f1e4); SET64(5, RD(2) + RD(0)); JP_F_00121B60(c);
SET64(31, 0x15f1ec); SET64(4, RD(2) + RD(0)); JP_F_001222E0(c);
wr32(c, (RW(29) + 92), c->f[0].u);
SET32(5, RW(29) + 80); goto L_0015F234;
L_0015F1F8:;
SET64(31, 0x15f200);  JP_F_002C29A0(c);
SET64(2, (s64)(s32)0x3d850000);
SET64(2, RD(2) | 0x1eb8);
c->f[1].u = RW(2);
SET64(31, 0x15f214); c->f[20].f = fpu(F(1) + F(0)); JP_F_002C29B0(c);
SET64(2, (s64)(s32)0xbf000000);
SET32(5, RW(29) + 80);
wr32(c, (RW(29) + 80), RW(2));
wr32(c, (RW(29) + 88), c->f[0].u);
SET64(2, (s64)(s32)0xbf170000);
SET64(2, RD(2) | 0xa3d);
wr32(c, (RW(29) + 92), c->f[20].u);
wr32(c, (RW(29) + 84), RW(2));
L_0015F234:;
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x15f244); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x42c80000);
c->f[12].u = RW(2);
SET64(31, 0x15f254); SET64(4, RD(16) + RD(0)); JP_F_0014E9B0(c);
SET64(2, (s32)rd32(c, (RW(16) + 196)));
wr32(c, (RW(16) + 188), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15f26c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_0015F290(Ctx *c) { /* func_0015F290 */
ENTER(0x15f290);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, 0x15f2b0); SET64(16, RD(5) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0015F2F4; }
SET64(3, (s32)rd32(c, (RW(28) + -29912)));
SET64(2, rd8(c, (RW(17) + 364)));
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(3) + 40))); if (t) goto L_0015F2D0; }
SET64(3, RD(3) ^ 0x1);
L_0015F2D0:;
SET64(2, (s32)rd32(c, (RW(17) + 356)));
SET32(3, RW(3) << 6);
SET64(5, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(31, 0x15f2f0); wr32(c, (RW(17) + 320), RW(2)); JP_F_0014DED0(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_0015F2F4:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015F310(Ctx *c) { /* func_0015F310 */
ENTER(0x15f310);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[0].u = rd32(c, (RW(5) + 0));
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 32), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 4));
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 36), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET64(2, (s32)rd32(c, (RW(5) + 8)));
SET32(2, RW(3) + RW(2));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 164), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET64(2, (s32)rd32(c, (RW(5) + 12)));
SET32(2, RW(3) + RW(2));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 168), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15f378);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0015F390(Ctx *c) { /* func_0015F390 */
ENTER(0x15f390);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[0].u = rd32(c, (RW(5) + 0));
wr32(c, (RW(4) + 32), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 4));
wr32(c, (RW(4) + 36), c->f[0].u);
c->f[1].u = rd32(c, (RW(5) + 0));
c->f[0].u = rd32(c, (RW(5) + 8));
c->f[0].f = fpu(F(0) - F(1));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(4) + 164), c->f[0].u);
c->f[1].u = rd32(c, (RW(5) + 4));
c->f[0].u = rd32(c, (RW(5) + 12));
c->f[0].f = fpu(F(0) - F(1));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(4) + 168), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15f3e0);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0015F3F0(Ctx *c) { /* func_0015F3F0 */
ENTER(0x15f3f0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET32(4, RW(16) + 356);
SET64(31, 0x15f414); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_0015F580(c);
SET64(31, 0x15f41c); SET64(4, RD(16) + RD(0)); JP_F_0014E3D0(c);
SET64(2, rd8(c, (RW(28) + -32580)));
wr8(c, (RW(16) + 352), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(28) + -29932)));
SET64(18, (s32)rd32(c, (RW(2) + 60)));
SET64(31, 0x15f434); SET64(17, (s32)rd32(c, (RW(2) + 56))); JP_F_002C2AD0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0015F49C; }
SET64(2, (s64)(s32)0xbf000000);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(29) + 80), RW(2));
c->f[0].u = RW(17);
SET64(2, (s64)(s32)0xbf170000);
SET64(3, RD(2) | 0xa3d);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s64)(s32)0x3fb00000);
wr32(c, (RW(29) + 84), RW(3));
SET64(2, RD(2) | 0xa3d7);
SET64(3, RD(2) << 32);
SET64(2, (s64)(s32)0xa3d0000);
SET64(2, RD(2) | 0x70a4);
SET64(17, RD(2) | RD(3));
SET64(31, 0x15f47c); wr32(c, (RW(29) + 88), c->f[0].u); JP_F_00122158(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x15f488); SET64(5, RD(2) + RD(0)); JP_F_00121B60(c);
SET64(31, 0x15f490); SET64(4, RD(2) + RD(0)); JP_F_001222E0(c);
wr32(c, (RW(29) + 92), c->f[0].u);
SET32(5, RW(29) + 80); goto L_0015F4D8;
L_0015F49C:;
SET64(31, 0x15f4a4);  JP_F_002C29A0(c);
SET64(2, (s64)(s32)0x3d850000);
SET64(2, RD(2) | 0x1eb8);
c->f[1].u = RW(2);
SET64(31, 0x15f4b8); c->f[20].f = fpu(F(1) + F(0)); JP_F_002C29B0(c);
SET64(2, (s64)(s32)0xbf000000);
SET32(5, RW(29) + 80);
wr32(c, (RW(29) + 80), RW(2));
wr32(c, (RW(29) + 88), c->f[0].u);
SET64(2, (s64)(s32)0xbf170000);
SET64(2, RD(2) | 0xa3d);
wr32(c, (RW(29) + 92), c->f[20].u);
wr32(c, (RW(29) + 84), RW(2));
L_0015F4D8:;
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x15f4e8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(28) + -29932)));
c->f[3].u = rd32(c, (RW(28) + -32576));
c->f[1].u = rd32(c, (RW(2) + 56));
c->f[0].u = rd32(c, (RW(2) + 60));
c->f[2].f = (f32)(s32)c->f[1].u;
c->f[1].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(16) + 172), c->f[3].u);
c->f[0].u = rd32(c, (RW(28) + -32576));
wr32(c, (RW(16) + 176), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32576));
c->f[0].f = fpu(F(2) - F(0));
wr32(c, (RW(16) + 180), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32576));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(16) + 184), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15f534); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x42c80000);
c->f[12].u = RW(2);
SET64(31, 0x15f544); SET64(4, RD(16) + RD(0)); JP_F_0014E9B0(c);
SET64(2, (s32)rd32(c, (RW(16) + 356)));
wr32(c, (RW(16) + 160), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15f55c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_0015F580(Ctx *c) { /* func_0015F580 */
ENTER(0x15f580);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(28) + -29932)));
SET64(30, (s32)rd32(c, (RW(2) + 56)));
SET64(23, (s32)rd32(c, (RW(2) + 60)));
SET64(31, 0x15f5c8); SET32(4, RW(0) + 144); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0015F5F4; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 1152);
SET32(6, RW(6) + 1040);
SET32(7, RW(0) + 64);
SET64(31, 0x15f5f0); SET32(8, RW(0) + 2); JP_F_00102580(c);
SET64(16, RD(2) + RD(0));
L_0015F5F4:;
SET32(4, RW(0) + 80);
SET64(31, 0x15f600); wr32(c, (RW(20) + 0), RW(16)); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0015F62C; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 2480);
SET32(6, RW(6) + 2320);
SET32(7, RW(0) + 32);
SET64(31, 0x15f628); SET32(8, RW(0) + 2); JP_F_00102580(c);
SET64(16, RD(2) + RD(0));
L_0015F62C:;
wr32(c, (RW(20) + 4), RW(16));
SET32(2, RW(30) << 2);
SET64(21, RD(0) + RD(0));
SET64(22, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
wr32(c, (RW(29) + 160), RW(2));
L_0015F648:;
SET64(31, 0x15f650); SET32(4, RW(0) + 28); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0015F680; }
SET64(2, (s32)rd32(c, (RW(28) + -29896)));
SET64(4, RD(18) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 160)));
SET64(6, RD(23) + RD(0));
SET32(2, RW(2) + RW(22));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(8, (s32)rd32(c, (RW(2) + 48)));
SET64(31, 0x15f67c); SET64(7, RD(19) + RD(0)); JP_F_002B2D80(c);
L_0015F680:;
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + -1);
SET64(8, RD(0) + RD(0));
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 0), RW(18));
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(4, RW(3) + RW(16));
SET64(31, 0x15f6ac); SET32(6, RW(2) + RW(17)); JP_F_0014F9B0(c);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET64(5, RD(30) + RD(0));
SET64(6, RD(23) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(8, RD(19) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x15f6cc); SET32(4, RW(2) + RW(16)); JP_F_0014FCD0(c);
SET32(21, RW(21) + 1);
SET32(22, RW(22) + 4);
SET64(3, RSD(21) < (s64)2);
SET32(17, RW(17) + 32);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 64); if (t) { POLL(); goto L_0015F648; } }
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

void JP_F_0015F720(Ctx *c) { /* func_0015F720 */
ENTER(0x15f720);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[0].u = rd32(c, (RW(5) + 0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(2) + 32), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 4));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(2) + 36), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 8));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(2) + 164), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 12));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(2) + 168), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15f77c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0015F790(Ctx *c) { /* func_0015F790 */
ENTER(0x15f790);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 12)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0015F7CC; }
wr8(c, (RW(16) + 12), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_0015F7CC; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15f7c8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
L_0015F7CC:;
wr32(c, (RW(16) + 8), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_0015F7F0; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15f7ec); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
L_0015F7F0:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_0015F810; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15f80c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
L_0015F810:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015F820(Ctx *c) { /* func_0015F820 */
ENTER(0x15f820);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x15f830);  JP_F_0015F840(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0015F840(Ctx *c) { /* func_0015F840 */
ENTER(0x15f840);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(4) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015F8BC; }
SET64(31, 0x15f86c); SET32(4, RW(0) + 384); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0015F880; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x15f880); SET32(5, RW(0) + 1); JP_F_0014E610(c);
L_0015F880:;
wr32(c, (RW(17) + 0), RW(18));
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x15f894); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s64)(s32)0x42c60000);
c->f[12].u = RW(2);
wr32(c, (RW(3) + 32), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(2) + 36), RW(0));
SET64(31, 0x15f8b4); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_0014E9B0(c);
SET64(2, rd16(c, (RW(16) + 52))); goto L_0015F8D0;
L_0015F8BC:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x15f8cc);  rt_call(c, t); }
SET64(2, rd16(c, (RW(16) + 52)));
L_0015F8D0:;
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0015F8E4; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015F8FC;
L_0015F8E4:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015F8FC:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(2) + 164), c->f[0].u);
SET64(2, rd16(c, (RW(16) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0015F91C; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015F934;
L_0015F91C:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015F934:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(2) + 168), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(2) + 172), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(2) + 176), RW(0));
SET64(2, rd16(c, (RW(16) + 52)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0015F964; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015F97C;
L_0015F964:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015F97C:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(2) + 180), c->f[0].u);
SET64(2, rd16(c, (RW(16) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0015F99C; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0015F9B4;
L_0015F99C:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0015F9B4:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(2) + 184), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(2) + 160), RW(16));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15f9d8);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_0015F9F0(Ctx *c) { /* func_0015F9F0 */
ENTER(0x15f9f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 12)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0015FA2C; }
wr8(c, (RW(16) + 12), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_0015FA2C; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15fa28); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
L_0015FA2C:;
wr32(c, (RW(16) + 8), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015FA40(Ctx *c) { /* func_0015FA40 */
ENTER(0x15fa40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x15fa54); SET64(16, RD(4) + RD(0)); JP_F_0014C560(c);
SET64(4, (s32)rd32(c, (RW(16) + 196)));
SET64(5, (s64)(s32)0x150000);
SET64(31, 0x15fa64); SET32(5, RW(5) + 1040); JP_F_001022C0(c);
wr32(c, (RW(16) + 196), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 200)));
SET64(31, 0x15fa78); SET32(5, RW(5) + 2320); JP_F_001022C0(c);
wr32(c, (RW(16) + 200), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0015FA90(Ctx *c) { /* func_0015FA90 */
ENTER(0x15fa90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015FB64; }
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 912);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(2));
SET32(6, RW(6) + 1004);
SET64(5, (s32)rd32(c, (RW(17) + 12)));
SET32(3, RW(3) + 964);
SET32(2, RW(17) + 212);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(17) + 208), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x15fae8); wr32(c, (RW(3) + 20), RW(2)); JP_F_0014C560(c);
SET32(4, RW(17) + 196);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_0015FB14; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1232);
wr32(c, (RW(17) + 208), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x15fb10);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
L_0015FB14:;
SET64(31, 0x15fb1c); SET64(5, RD(0) + RD(0)); JP_F_0014C740(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0015FB50; }
SET32(4, RW(17) + 212);
{ int t = RD(4) == RD(0);  if (t) goto L_0015FB4C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 228), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15fb4c);  rt_call(c, t); }
L_0015FB4C:;
SET64(2, RD(16) << 48);
L_0015FB50:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015FB68; }
SET64(31, 0x15fb64); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015FB64:;
SET64(2, RD(17) + RD(0));
L_0015FB68:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015FB80(Ctx *c) { /* func_0015FB80 */
ENTER(0x15fb80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015FBF0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1264);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15fbb8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0015FBDC; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1296);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x15fbd8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_0015FBDC:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015FBF4; }
SET64(31, 0x15fbf0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015FBF0:;
SET64(2, RD(17) + RD(0));
L_0015FBF4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015FC10(Ctx *c) { /* func_0015FC10 */
ENTER(0x15fc10);
SET64(2, (s32)rd32(c, (RW(4) + 4))); return;
}

void JP_F_0015FC20(Ctx *c) { /* func_0015FC20 */
ENTER(0x15fc20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015FC70; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1296);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x15fc58);  rt_call(c, t); }
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015FC74; }
SET64(31, 0x15fc70); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0015FC70:;
SET64(2, RD(17) + RD(0));
L_0015FC74:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0015FC90(Ctx *c) { /* func_0015FC90 */
ENTER(0x15fc90);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -372);
SET32(4, RW(4) + RW(25)); { JP_F_0014DCE0(c); return; }
}

void JP_F_0015FCA0(Ctx *c) { /* func_0015FCA0 */
ENTER(0x15fca0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -372);
SET32(4, RW(4) + RW(25)); { JP_F_0014DD40(c); return; }
}

void JP_F_0015FCB0(Ctx *c) { /* func_0015FCB0 */
ENTER(0x15fcb0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -372);
SET32(4, RW(4) + RW(25)); { JP_F_0015EC60(c); return; }
}

void JP_F_0015FCC0(Ctx *c) { /* func_0015FCC0 */
ENTER(0x15fcc0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -372);
SET32(4, RW(4) + RW(25)); { JP_F_0015EB00(c); return; }
}

void JP_F_0015FCD0(Ctx *c) { /* func_0015FCD0 */
ENTER(0x15fcd0);
SET32(4, RW(4) + -208); { JP_F_0015F290(c); return; }
}

void JP_F_0015FCE0(Ctx *c) { /* func_0015FCE0 */
ENTER(0x15fce0);
SET32(4, RW(4) + -208); { JP_F_0015EB00(c); return; }
}

void JP_F_0015FCF0(Ctx *c) { /* func_0015FCF0 */
ENTER(0x15fcf0);
SET32(4, RW(4) + -356); { JP_F_0015F390(c); return; }
}

void JP_F_0015FD00(Ctx *c) { /* func_0015FD00 */
ENTER(0x15fd00);
SET32(4, RW(4) + -356); { JP_F_0015F310(c); return; }
}

void JP_F_0015FD10(Ctx *c) { /* func_0015FD10 */
ENTER(0x15fd10);
SET32(4, RW(4) + -356); { JP_F_0015EC60(c); return; }
}

void JP_F_0015FD20(Ctx *c) { /* func_0015FD20 */
ENTER(0x15fd20);
SET32(4, RW(4) + -356); { JP_F_0015F3F0(c); return; }
}

void JP_F_0015FD30(Ctx *c) { /* func_0015FD30 */
ENTER(0x15fd30);
SET32(4, RW(4) + -356); { JP_F_0015EB00(c); return; }
}

void JP_F_0015FD40(Ctx *c) { /* func_0015FD40 */
ENTER(0x15fd40);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -212);
SET32(4, RW(4) + RW(25)); { JP_F_0014BDB0(c); return; }
}

void JP_F_0015FD50(Ctx *c) { /* func_0015FD50 */
ENTER(0x15fd50);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -212);
SET32(4, RW(4) + RW(25)); { JP_F_0014BE10(c); return; }
}

void JP_F_0015FD60(Ctx *c) { /* func_0015FD60 */
ENTER(0x15fd60);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -212);
SET32(4, RW(4) + RW(25)); { JP_F_0015FA40(c); return; }
}

void JP_F_0015FD70(Ctx *c) { /* func_0015FD70 */
ENTER(0x15fd70);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -212);
SET32(4, RW(4) + RW(25)); { JP_F_0015FA90(c); return; }
}

void JP_F_0015FD80(Ctx *c) { /* func_0015FD80 */
ENTER(0x15fd80);
SET32(4, RW(4) + -196); { JP_F_0015F0A0(c); return; }
}

void JP_F_0015FD90(Ctx *c) { /* func_0015FD90 */
ENTER(0x15fd90);
SET32(4, RW(4) + -196); { JP_F_0015F050(c); return; }
}

