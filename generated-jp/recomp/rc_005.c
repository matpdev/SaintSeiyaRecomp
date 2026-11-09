#include "r5900.h"
#include "functab.h"

void JP_F_0015FDA0(Ctx *c) { /* func_0015FDA0 */
ENTER(0x15fda0);
SET32(4, RW(4) + -196); { JP_F_0015FA40(c); return; }
}

void JP_F_0015FDB0(Ctx *c) { /* func_0015FDB0 */
ENTER(0x15fdb0);
SET32(4, RW(4) + -196); { JP_F_0015F150(c); return; }
}

void JP_F_0015FDC0(Ctx *c) { /* func_0015FDC0 */
ENTER(0x15fdc0);
SET32(4, RW(4) + -196); { JP_F_0015FA90(c); return; }
}

void JP_F_0015FDD0(Ctx *c) { /* func_0015FDD0 */
ENTER(0x15fdd0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + 28);
SET32(4, RW(4) + RW(25)); { JP_F_00150A40(c); return; }
}

void JP_F_0015FDE0(Ctx *c) { /* func_0015FDE0 */
ENTER(0x15fde0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -84);
SET32(4, RW(4) + RW(25)); { JP_F_0015EAA0(c); return; }
}

void JP_F_0015FDF0(Ctx *c) { /* func_0015FDF0 */
ENTER(0x15fdf0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -84);
SET32(4, RW(4) + RW(25)); { JP_F_0015E2C0(c); return; }
}

void JP_F_0015FE00(Ctx *c) { /* func_0015FE00 */
ENTER(0x15fe00);
SET64(25, (s32)rd32(c, (RW(5) + 280)));
SET32(5, RW(5) + -112);
SET32(5, RW(5) + RW(25)); { JP_F_0015E250(c); return; }
}

void JP_F_0015FE10(Ctx *c) { /* func_0015FE10 */
ENTER(0x15fe10);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -112);
SET32(4, RW(4) + RW(25)); { JP_F_0015E280(c); return; }
}

void JP_F_0015FE20(Ctx *c) { /* func_0015FE20 */
ENTER(0x15fe20);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -112);
SET32(4, RW(4) + RW(25)); { JP_F_0015E860(c); return; }
}

void JP_F_0015FE30(Ctx *c) { /* func_0015FE30 */
ENTER(0x15fe30);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -112);
SET32(4, RW(4) + RW(25)); { JP_F_0015EAA0(c); return; }
}

void JP_F_0015FE40(Ctx *c) { /* func_0015FE40 */
ENTER(0x15fe40);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -112);
SET32(4, RW(4) + RW(25)); { JP_F_0015E2C0(c); return; }
}

void JP_F_0015FE50(Ctx *c) { /* func_0015FE50 */
ENTER(0x15fe50);
SET64(25, (s32)rd32(c, (RW(4) + 416)));
SET32(4, RW(4) + -400);
SET32(4, RW(4) + RW(25)); { JP_F_0015E730(c); return; }
}

void JP_F_0015FE60(Ctx *c) { /* func_0015FE60 */
ENTER(0x15fe60);
SET64(25, (s32)rd32(c, (RW(4) + 416)));
SET32(4, RW(4) + -400);
SET32(4, RW(4) + RW(25)); { JP_F_0015E2C0(c); return; }
}

void JP_F_0015FE70(Ctx *c) { /* func_0015FE70 */
ENTER(0x15fe70);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 20)));
SET64(31, 0x15fe84); SET32(4, RW(2) + 160); JP_F_002AA5C0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0015FE90(Ctx *c) { /* func_0015FE90 */
ENTER(0x15fe90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
if (RD(4) == RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 16))); goto L_0015FEC8; }
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15fec0);  rt_call(c, t); }
wr32(c, (RW(17) + 0), RW(0));
SET64(3, (s32)rd32(c, (RW(17) + 16)));
L_0015FEC8:;
if (RD(3) == RD(0)) { SET64(16, (s32)rd32(c, (RW(17) + 0))); goto L_0015FF00; }
SET64(4, (s32)rd32(c, (RW(17) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x15fee4);  rt_call(c, t); }
SET64(31, 0x15feec); SET64(4, (s32)rd32(c, (RW(17) + 16))); JP_F_00163040(c);
SET64(31, 0x15fef4); SET64(4, (s32)rd32(c, (RW(17) + 24))); JP_F_00163380(c);
SET64(31, 0x15fefc); SET64(4, (s32)rd32(c, (RW(17) + 28))); JP_F_00163380(c);
SET64(16, (s32)rd32(c, (RW(17) + 0)));
L_0015FF00:;
if (RD(16) == RD(0)) { SET32(3, RW(0) + 1); goto L_0015FF0C; }
SET64(3, rd8(c, (RW(17) + 32)));
L_0015FF0C:;
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0015FF6C; }
if (RD(16) == RD(0)) { SET32(3, RW(0) + 1); goto L_0015FF64; }
c->f[12].u = RW(0);
SET64(31, 0x15ff28); SET32(4, RW(16) + 48); JP_F_00163900(c);
c->f[12].u = RW(0);
SET64(31, 0x15ff34); SET32(4, RW(16) + 48); JP_F_001638F0(c);
c->f[12].u = RW(0);
SET64(31, 0x15ff40); SET32(4, RW(16) + 48); JP_F_001638E0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x15ff50); SET32(4, RW(16) + 48); JP_F_001638D0(c);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x15ff60); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
L_0015FF64:;
wr8(c, (RW(17) + 32), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
L_0015FF6C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

static void JP_B_0015FF80(Ctx *c, u32 entry) { /* func_0015FF80 */
ENTER(entry);
switch (entry) { case 0x16001c: goto L_0016001C; case 0x160034: goto L_00160034; case 0x160038: goto L_00160038; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_0015FFB8; }
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x15ffac);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_0015FFC4; }
wr32(c, (RW(16) + 0), RW(0));
L_0015FFB8:;
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 32), (u8)RW(0)); goto L_00160034;
L_0015FFC4:;
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_0015FFD0; }
SET64(2, rd8(c, (RW(16) + 32)));
L_0015FFD0:;
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00160034; }
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x15ffe8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00160030; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x160004);  rt_call(c, t); }
if (RD(2) != RD(0)) { wr8(c, (RW(16) + 32), (u8)RW(0)); goto L_00160028; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x160020);  rt_call(c, t); }
if (0) { L_0016001C:;  }
 goto L_00160030;
L_00160028:;
SET32(2, RW(0) + 1); goto L_00160034;
L_00160030:;
SET64(2, RD(0) + RD(0));
L_00160034:;
SET64(31, rd64(c, (RW(29) + 16)));
L_00160038:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}
void JP_F_0015FF80(Ctx *c) { JP_B_0015FF80(c, 0x15ff80); }
void JP_F_0016001C(Ctx *c) { JP_B_0015FF80(c, 0x16001c); }
void JP_F_00160034(Ctx *c) { JP_B_0015FF80(c, 0x160034); }
void JP_F_00160038(Ctx *c) { JP_B_0015FF80(c, 0x160038); }

static void JP_B_00160050(Ctx *c, u32 entry) { /* func_00160050 */
ENTER(entry);
switch (entry) { case 0x160058: goto L_00160058; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
L_00160058:;
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(16) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_00160074; }
SET64(3, rd8(c, (RW(17) + 32))); goto L_00160078;
L_00160074:;
SET32(3, RW(0) + 1);
L_00160078:;
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_001600D8; }
if (RD(16) == RD(0)) { SET32(3, RW(0) + 1); goto L_001600D0; }
c->f[12].u = RW(0);
SET64(31, 0x160094); SET32(4, RW(16) + 48); JP_F_00163900(c);
c->f[12].u = RW(0);
SET64(31, 0x1600a0); SET32(4, RW(16) + 48); JP_F_001638F0(c);
c->f[12].u = RW(0);
SET64(31, 0x1600ac); SET32(4, RW(16) + 48); JP_F_001638E0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x1600bc); SET32(4, RW(16) + 48); JP_F_001638D0(c);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1600cc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
L_001600D0:;
wr8(c, (RW(17) + 32), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
L_001600D8:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_00160050(Ctx *c) { JP_B_00160050(c, 0x160050); }
void JP_F_00160058(Ctx *c) { JP_B_00160050(c, 0x160058); }

void JP_F_001600F0(Ctx *c) { /* func_001600F0 */
ENTER(0x1600f0);
wr8(c, (RW(4) + 32), (u8)RW(0)); return;
}

static void JP_B_00160100(Ctx *c, u32 entry) { /* func_00160100 */
ENTER(entry);
switch (entry) { case 0x160194: goto L_00160194; case 0x1601cc: goto L_001601CC; }
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x16011c); SET64(16, RD(4) + RD(0)); JP_F_002C29D0(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(17, (s32)c->f[0].u);
SET64(31, 0x16012c);  JP_F_002C2A00(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET32(4, RW(0) + 176);
wr32(c, (RW(29) + 108), RW(17));
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 100), RW(0));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x16014c); wr32(c, (RW(29) + 104), RW(2)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00160164; }
SET64(5, (s32)rd32(c, (RW(28) + -29932)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x160164); SET32(6, RW(0) + 4096); JP_F_00163440(c);
L_00160164:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 96);
SET64(31, 0x160174); wr32(c, (RW(16) + 24), RW(17)); JP_F_001633C0(c);
SET64(31, 0x16017c); SET32(4, RW(0) + 176); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00160194; }
SET64(5, (s32)rd32(c, (RW(28) + -29932)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x160194); SET32(6, RW(0) + 4096); JP_F_00163440(c);
L_00160194:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 96);
SET64(31, 0x1601a4); wr32(c, (RW(16) + 28), RW(17)); JP_F_001633C0(c);
SET64(31, 0x1601ac); SET32(4, RW(0) + 928); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001601C4; }
SET64(5, (s32)rd32(c, (RW(28) + -29932)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1601c4); SET64(6, RD(0) | 0xe000); JP_F_001632E0(c);
L_001601C4:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 96);
L_001601CC:;
SET64(31, 0x1601d4); wr32(c, (RW(16) + 16), RW(17)); JP_F_00162E90(c);
SET64(31, 0x1601dc); SET32(4, RW(0) + 304); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001601F0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x1601f0); SET32(5, RW(0) + 1); JP_F_0014D1F0(c);
L_001601F0:;
wr32(c, (RW(16) + 20), RW(17));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x160204); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 20)));
c->f[12].u = RW(0);
wr32(c, (RW(2) + 32), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
wr32(c, (RW(2) + 36), RW(0));
SET64(31, 0x160220); SET64(4, (s32)rd32(c, (RW(16) + 20))); JP_F_0014E9B0(c);
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 68), RW(0));
wr32(c, (RW(29) + 72), RW(0));
wr32(c, (RW(29) + 76), RW(0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
wr128(c, (RW(2) + 256) & ~15u, &c->r[3]);
c->f[0].u = rd32(c, (RW(29) + 104));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(2) + 240), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 108));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(2) + 244), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x160270);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 16)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 20))); goto L_00160284; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(16) + 20)));
L_00160284:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x160294);  rt_call(c, t); }
SET64(31, 0x16029c); SET32(4, RW(0) + 496); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001602F4; }
SET32(5, RW(0) + 64);
SET64(4, RD(18) + RD(0));
SET32(6, RW(0) + 128);
SET64(31, 0x1602b8); SET64(7, RD(5) + RD(0)); JP_F_002A6630(c);
SET32(17, RW(18) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(17) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x1602d0); wr32(c, (RW(18) + 240), RW(4)); JP_F_002AE1F0(c);
SET64(31, 0x1602d8); SET32(4, RW(17) + 32); JP_F_002A88F0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 240), RW(17));
SET32(2, RW(2) + -3920);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 144), RW(2));
SET64(31, 0x1602f4); SET32(5, RW(18) + 272); JP_F_002A6520(c);
L_001602F4:;
SET32(4, RW(0) + 496);
SET64(31, 0x160300); wr32(c, (RW(16) + 8), RW(18)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_00160358; }
SET32(5, RW(0) + 64);
SET64(4, RD(18) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x16031c); SET64(7, RD(5) + RD(0)); JP_F_002A6630(c);
SET32(17, RW(18) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(17) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x160334); wr32(c, (RW(18) + 240), RW(4)); JP_F_002AE1F0(c);
SET64(31, 0x16033c); SET32(4, RW(17) + 32); JP_F_002A88F0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 240), RW(17));
SET32(2, RW(2) + -3920);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 144), RW(2));
SET64(31, 0x160358); SET32(5, RW(18) + 272); JP_F_002A6520(c);
L_00160358:;
wr32(c, (RW(16) + 12), RW(18));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(4, (s32)rd32(c, (RW(2) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x160370); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(4, (s32)rd32(c, (RW(2) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x160384); SET64(5, (s32)rd32(c, (RW(16) + 8))); JP_F_002ADFE0(c);
SET64(31, 0x16038c); SET32(4, RW(0) + 32); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016039C; }
SET64(31, 0x16039c); SET64(4, RD(17) + RD(0)); JP_F_001509B0(c);
L_0016039C:;
SET32(5, RW(0) + 512);
SET64(4, RD(17) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x1603b8); wr32(c, (RW(16) + 36), RW(17)); JP_F_00150830(c);
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(31, 0x1603c4); wr32(c, (RW(28) + -30240), RW(2)); JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1603d0); SET64(5, (s32)rd32(c, (RW(16) + 36))); JP_F_0022CAC0(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}
void JP_F_00160100(Ctx *c) { JP_B_00160100(c, 0x160100); }
void JP_F_00160194(Ctx *c) { JP_B_00160100(c, 0x160194); }
void JP_F_001601CC(Ctx *c) { JP_B_00160100(c, 0x1601cc); }

void JP_F_001603F0(Ctx *c) { /* func_001603F0 */
ENTER(0x1603f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x160408); wr32(c, (RW(28) + -30240), RW(0)); JP_F_00139590(c);
SET64(31, 0x160410); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_0022CA80(c);
SET64(4, (s32)rd32(c, (RW(16) + 36)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 36), RW(0)); goto L_00160430; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16042c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 36), RW(0));
L_00160430:;
SET64(4, (s32)rd32(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_00160450; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16044c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
L_00160450:;
SET64(4, (s32)rd32(c, (RW(16) + 12)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 12), RW(0)); goto L_00160470; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16046c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 12), RW(0));
L_00160470:;
SET64(4, (s32)rd32(c, (RW(16) + 24)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 24), RW(0)); goto L_00160490; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16048c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 24), RW(0));
L_00160490:;
SET64(4, (s32)rd32(c, (RW(16) + 28)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 28), RW(0)); goto L_001604B0; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1604ac); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 28), RW(0));
L_001604B0:;
SET64(4, (s32)rd32(c, (RW(16) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 16), RW(0)); goto L_001604D0; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1604cc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 16), RW(0));
L_001604D0:;
SET64(4, (s32)rd32(c, (RW(16) + 20)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 20), RW(0)); goto L_001604F0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1604ec); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 20), RW(0));
L_001604F0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00160500(Ctx *c) { /* func_00160500 */
ENTER(0x160500);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016055C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(17) + 64);
SET32(2, RW(2) + 1344);
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 4), RW(2)); if (t) goto L_00160538; }
SET64(31, 0x160538); SET32(5, RW(0) + -1); JP_F_0014B0C0(c);
L_00160538:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x160544); SET64(5, RD(0) + RD(0)); JP_F_002A3830(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00160560; }
SET64(31, 0x16055c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016055C:;
SET64(2, RD(17) + RD(0));
L_00160560:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00160580(Ctx *c) { /* func_00160580 */
ENTER(0x160580);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001605C4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1320);
SET64(31, 0x1605ac); wr32(c, (RW(17) + 40), RW(2)); JP_F_001603F0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001605C8; }
SET64(31, 0x1605c4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001605C4:;
SET64(2, RD(17) + RD(0));
L_001605C8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001605E0(Ctx *c) { /* func_001605E0 */
ENTER(0x1605e0);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1320);
wr32(c, (RW(4) + 40), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(0));
wr8(c, (RW(4) + 32), (u8)RW(0));
wr32(c, (RW(4) + 36), RW(0)); return;
}

void JP_F_00160620(Ctx *c) { /* func_00160620 */
ENTER(0x160620);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[0].u = rd32(c, (RW(5) + 0));
SET64(2, (s32)rd32(c, (RW(4) + 96)));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(2) + 176), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(4) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x160658);  rt_call(c, t); }
SET64(18, RD(0) + RD(0));
SET32(17, RW(29) + 64);
L_00160660:;
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(31, 0x16066c); SET64(5, RD(18) & 0xffff); JP_F_0014CA10(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(31, 0x160688); SET64(5, RD(18) & 0xffff); JP_F_0014C970(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)4);
SET64(3, (s32)c->f[0].u);
wr16(c, (RW(17) + 2), (u16)RW(3));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00160660; } }
c->f[0].u = rd32(c, (RW(16) + 36));
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 64);
SET32(6, RW(29) + 92);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(29) + 88), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 32));
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(29) + 92), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1606dc); SET32(7, RW(29) + 88); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00160700(Ctx *c) { /* func_00160700 */
ENTER(0x160700);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[0].u = rd32(c, (RW(5) + 0));
SET64(2, (s32)rd32(c, (RW(4) + 96)));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(2) + 172), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(4) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x160738);  rt_call(c, t); }
SET64(18, RD(0) + RD(0));
SET32(17, RW(29) + 64);
L_00160740:;
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(31, 0x16074c); SET64(5, RD(18) & 0xffff); JP_F_0014CA10(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(31, 0x160768); SET64(5, RD(18) & 0xffff); JP_F_0014C970(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)4);
SET64(3, (s32)c->f[0].u);
wr16(c, (RW(17) + 2), (u16)RW(3));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00160740; } }
c->f[0].u = rd32(c, (RW(16) + 36));
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 64);
SET32(6, RW(29) + 92);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(29) + 88), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 32));
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(29) + 92), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1607bc); SET32(7, RW(29) + 88); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_001607E0(Ctx *c) { /* func_001607E0 */
ENTER(0x1607e0);
SET64(3, (s32)rd32(c, (RW(5) + 96)));
SET64(8, (s32)rd32(c, (RW(3) + 192)));
c->f[1].u = rd32(c, (RW(8) + 16));
c->f[0].u = rd32(c, (RW(8) + 0));
c->fcc = F(0) < F(1);
if (!c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_0016080C; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(7, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(8) + 12)); goto L_00160814;
L_0016080C:;
SET64(7, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(8) + 12));
L_00160814:;
c->f[0].u = rd32(c, (RW(8) + 4));
c->fcc = F(0) < F(1);
if (!c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_00160834; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(6, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(8) + 24)); goto L_0016083C;
L_00160834:;
SET64(6, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(8) + 24));
L_0016083C:;
c->f[0].u = rd32(c, (RW(8) + 8));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_0016085C; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(8) + 28)); goto L_00160864;
L_0016085C:;
SET64(3, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(8) + 28));
L_00160864:;
c->f[0].u = rd32(c, (RW(8) + 20));
c->fcc = F(0) <= F(1);
{ int t = c->fcc; SET32(5, RW(3) - RW(7)); if (t) goto L_00160884; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(4) + 0), RW(7)); goto L_00160890;
L_00160884:;
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(4) + 0), RW(7));
L_00160890:;
SET32(3, RW(3) - RW(6));
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 8), RW(5));
wr32(c, (RW(4) + 12), RW(3)); return;
}

void JP_F_001608B0(Ctx *c) { /* func_001608B0 */
ENTER(0x1608b0);
SET64(3, (s32)rd32(c, (RW(5) + 96)));
SET64(5, (s32)rd32(c, (RW(3) + 192)));
c->f[1].u = rd32(c, (RW(5) + 16));
c->f[0].u = rd32(c, (RW(5) + 0));
c->fcc = F(0) < F(1);
if (!c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_001608DC; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
 goto L_001608E0;
L_001608DC:;
SET64(3, (s32)c->f[0].u);
L_001608E0:;
c->f[0].u = RW(3);
c->f[4].f = (f32)(s32)c->f[0].u;
c->f[1].u = rd32(c, (RW(5) + 12));
c->f[0].u = rd32(c, (RW(5) + 4));
c->fcc = F(0) < F(1);
if (!c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_00160910; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
 goto L_00160914;
L_00160910:;
SET64(3, (s32)c->f[0].u);
L_00160914:;
c->f[0].u = RW(3);
c->f[3].f = (f32)(s32)c->f[0].u;
c->f[1].u = rd32(c, (RW(5) + 24));
c->f[0].u = rd32(c, (RW(5) + 8));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_00160944; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
 goto L_00160948;
L_00160944:;
SET64(3, (s32)c->f[0].u);
L_00160948:;
c->f[0].u = RW(3);
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[1].u = rd32(c, (RW(5) + 28));
c->f[0].u = rd32(c, (RW(5) + 20));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_00160978; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
 goto L_0016097C;
L_00160978:;
SET64(3, (s32)c->f[0].u);
L_0016097C:;
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 0), c->f[4].u);
wr32(c, (RW(4) + 4), c->f[3].u);
wr32(c, (RW(4) + 8), c->f[2].u);
wr32(c, (RW(4) + 12), c->f[0].u); return;
}

void JP_F_001609A0(Ctx *c) { /* func_001609A0 */
ENTER(0x1609a0);
SET64(6, (s32)rd32(c, (RW(5) + 96)));
SET64(5, (s32)rd32(c, (RW(6) + 160)));
c->f[1].u = rd32(c, (RW(5) + 28));
c->f[0].u = rd32(c, (RW(5) + 20));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].u = c->f[1].u; goto L_001609BC; }
L_001609BC:;
c->f[3].u = rd32(c, (RW(6) + 36));
SET64(3, (s32)rd32(c, (RW(6) + 160)));
c->f[4].f = fpu(F(3) + F(0));
c->f[1].u = rd32(c, (RW(3) + 24));
c->f[0].u = rd32(c, (RW(3) + 8));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].u = c->f[1].u; goto L_001609DC; }
L_001609DC:;
c->f[2].u = rd32(c, (RW(6) + 32));
SET64(3, (s32)rd32(c, (RW(6) + 160)));
c->f[5].f = fpu(F(2) + F(0));
c->f[1].u = rd32(c, (RW(3) + 12));
c->f[0].u = rd32(c, (RW(3) + 4));
c->fcc = F(0) < F(1);
if (!c->fcc) { c->f[0].u = c->f[1].u; goto L_001609FC; }
L_001609FC:;
c->f[3].f = fpu(F(3) + F(0));
c->f[1].u = rd32(c, (RW(5) + 16));
c->f[0].u = rd32(c, (RW(5) + 0));
c->fcc = F(0) < F(1);
if (!c->fcc) { c->f[0].u = c->f[1].u; goto L_00160A14; }
L_00160A14:;
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(4) + 0), c->f[0].u);
wr32(c, (RW(4) + 4), c->f[3].u);
wr32(c, (RW(4) + 8), c->f[5].u);
wr32(c, (RW(4) + 12), c->f[4].u); return;
}

void JP_F_00160A30(Ctx *c) { /* func_00160A30 */
ENTER(0x160a30);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x45000000);
wr64(c, (RW(29) + 64), RD(31));
c->f[12].u = RW(2);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[1].u = rd32(c, (RW(5) + 0));
SET64(3, (s32)rd32(c, (RW(4) + 96)));
c->f[0].u = rd32(c, (RW(4) + 32));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(3) + 32), c->f[0].u);
c->f[1].u = rd32(c, (RW(5) + 4));
SET64(2, (s32)rd32(c, (RW(4) + 96)));
c->f[0].u = rd32(c, (RW(4) + 36));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(2) + 36), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(4) + 96)));
SET64(31, 0x160a88); SET64(18, RD(5) + RD(0)); JP_F_0014E9B0(c);
SET64(4, (s32)rd32(c, (RW(19) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x160a9c);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(28) + -32560)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00160B10; }
SET64(16, RD(0) + RD(0));
L_00160AAC:;
SET64(3, (s32)rd32(c, (RW(19) + 100)));
SET64(2, (s64)(s32)0x44fe0000);
c->f[0].u = rd32(c, (RW(18) + 0));
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(16));
wr32(c, (RW(2) + 32), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 100)));
c->f[0].u = rd32(c, (RW(18) + 4));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 36), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 100)));
SET64(31, 0x160ae0); SET32(4, RW(2) + RW(16)); JP_F_0014E9B0(c);
SET64(2, (s32)rd32(c, (RW(19) + 100)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x160af8);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(28) + -32560)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 224); if (t) { POLL(); goto L_00160AAC; } }
L_00160B10:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00160B30(Ctx *c) { /* func_00160B30 */
ENTER(0x160b30);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
SET64(17, (s32)rd32(c, (RW(4) + 100)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00160BC8; }
L_00160B58:;
SET64(2, RD(16) & 0xffff);
rd128(c, (RW(18) + 64) & ~15u, &c->r[5]);
SET32(3, RW(2) << 4);
SET64(2, (s32)rd32(c, (RW(18) + 96)));
SET64(2, (s32)rd32(c, (RW(2) + 164)));
SET32(2, RW(2) + RW(3));
wr128(c, (RW(2) + 0) & ~15u, &c->r[5]);
rd128(c, (RW(18) + 48) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(17) + 164)));
wr128(c, (RW(2) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(18) + 48) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(17) + 164)));
wr128(c, (RW(2) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(18) + 48) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(17) + 164)));
wr128(c, (RW(2) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(18) + 48) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(17) + 164)));
wr128(c, (RW(2) + 48) & ~15u, &c->r[3]);
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x160bb4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 224); if (t) { POLL(); goto L_00160B58; } }
L_00160BC8:;
SET64(4, (s32)rd32(c, (RW(18) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x160bdc);  rt_call(c, t); }
c->f[12].u = rd32(c, (RW(18) + 76));
SET64(31, 0x160be8); SET32(4, RW(18) + 48); JP_F_001638D0(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00160C00(Ctx *c) { /* func_00160C00 */
ENTER(0x160c00);
SET32(2, RW(0) + 1); return;
}

void JP_F_00160C10(Ctx *c) { /* func_00160C10 */
ENTER(0x160c10);
 return;
}

void JP_F_00160C20(Ctx *c) { /* func_00160C20 */
ENTER(0x160c20);
 return;
}

void JP_F_00160C30(Ctx *c) { /* func_00160C30 */
ENTER(0x160c30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 96), RW(0)); goto L_00160C60; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x160c5c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 96), RW(0));
L_00160C60:;
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 100)));
SET64(31, 0x160c70); SET32(5, RW(5) + -17536); JP_F_001022C0(c);
wr32(c, (RW(16) + 100), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00160C90(Ctx *c) { /* func_00160C90 */
ENTER(0x160c90);
SET32(29, RW(29) + -128);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 84), RW(0));
SET32(4, RW(0) + 224);
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 92), RW(2));
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 108), RW(2));
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 64) & ~15u, &c->r[2]);
SET64(31, 0x160cec); wr128(c, (RW(16) + 48) & ~15u, &c->r[2]); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00160D00; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x160d00); SET32(5, RW(0) + 1); JP_F_0014C890(c);
L_00160D00:;
wr32(c, (RW(16) + 96), RW(17));
SET64(5, rd16(c, (RW(28) + -32560)));
SET64(31, 0x160d10); SET64(4, RD(17) + RD(0)); JP_F_0014C5E0(c);
SET64(18, (s32)rd32(c, (RW(28) + -32560)));
SET64(17, RD(0) + RD(0));
SET32(2, RW(18) << 3);
SET32(2, RW(2) - RW(18));
SET32(2, RW(2) << 5);
SET64(31, 0x160d2c); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00160D5C; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(8, RD(18) + RD(0));
SET32(17, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + -17200);
SET32(6, RW(6) + -17536);
SET64(31, 0x160d58); SET32(7, RW(0) + 224); JP_F_00102580(c);
SET64(19, RD(2) + RD(0));
L_00160D5C:;
wr32(c, (RW(16) + 100), RW(19));
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00160D98; }
SET64(17, RD(0) + RD(0));
L_00160D70:;
SET64(2, (s32)rd32(c, (RW(16) + 100)));
SET32(5, RW(0) + 4);
SET64(31, 0x160d80); SET32(4, RW(2) + RW(17)); JP_F_0014BA40(c);
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 224); if (t) { POLL(); goto L_00160D70; } }
L_00160D98:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 112), RW(0));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 124), RW(2));
wr32(c, (RW(29) + 120), RW(0));
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x160dc0); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_00160DE0(Ctx *c) { /* func_00160DE0 */
ENTER(0x160de0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
{ int t = RSD(2) <= 0; SET64(9, RD(0) + RD(0)); if (t) goto L_00160E88; }
c->f[3].u = RW(0);
SET64(2, RD(9) & 0xffff);
L_00160DFC:;
SET64(6, (s32)rd32(c, (RW(4) + 96)));
SET32(7, RW(2) << 3);
SET64(3, (s16)rd16(c, (RW(5) + 0)));
SET64(2, (s16)rd16(c, (RW(5) + 2)));
c->f[6].u = rd32(c, (RW(5) + 4));
SET64(8, (s32)rd32(c, (RW(6) + 160)));
SET32(9, RW(9) + 1);
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s32)rd32(c, (RW(6) + 192)));
SET32(6, RW(8) + RW(7));
SET32(2, RW(2) + RW(7));
c->facc = fpu(F(3) + F(0));
c->f[0].u = RW(3);
c->f[5].u = rd32(c, (RW(6) + 4));
c->f[4].u = rd32(c, (RW(8) + 4));
c->f[2].u = rd32(c, (RW(6) + 0));
c->f[1].u = rd32(c, (RW(8) + 0));
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[4].f = fpu(F(5) - F(4));
c->f[1].f = fpu(F(2) - F(1));
c->f[2].f = fpu(c->facc + F(6) * F(4));
c->facc = fpu(F(3) + F(0));
c->f[0].f = fpu(c->facc + F(6) * F(1));
wr32(c, (RW(2) + 0), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(4) + 96)));
SET64(2, (s32)rd32(c, (RW(2) + 192)));
SET32(2, RW(2) + RW(7));
wr32(c, (RW(2) + 4), c->f[2].u);
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
SET64(2, RSD(9) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, RD(9) & 0xffff); { POLL(); goto L_00160DFC; } }
L_00160E88:;
SET64(4, (s32)rd32(c, (RW(4) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x160e9c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00160EB0(Ctx *c) { /* func_00160EB0 */
ENTER(0x160eb0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(7) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(28) + -32560)));
SET64(17, (s32)rd32(c, (RW(4) + 100)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00161028; }
L_00160EE8:;
SET64(6, (s64)(s32)0x3f800000);
SET64(5, RD(0) + RD(0));
c->f[1].u = RW(6);
SET64(4, RD(16) & 0x1);
SET64(6, (s64)(s32)0x40000000);
SET32(3, RSW(16) >> 1);
SET32(2, RW(0) + -2);
c->f[0].u = RW(6);
L_00160F08:;
{ int t = RD(4) != RD(0);  if (t) goto L_00160F50; }
SET64(6, RD(5) & 0x1);
SET32(6, RW(6) + RW(16));
SET32(6, RW(6) << 2);
SET32(6, RW(20) + RW(6));
SET64(7, (s16)rd16(c, (RW(6) + 0)));
c->f[4].u = rd32(c, (RW(19) + 0));
c->f[2].u = rd32(c, (RW(18) + 0));
c->f[3].u = RW(7);
SET64(6, (s16)rd16(c, (RW(6) + 2)));
c->f[3].f = (f32)(s32)c->f[3].u;
c->f[4].f = fpu(F(4) + F(3));
c->f[3].u = RW(6);
c->f[3].f = (f32)(s32)c->f[3].u;
c->f[2].f = fpu(F(2) + F(3)); goto L_00160FA8;
L_00160F50:;
SET64(6, RD(5) & RD(2));
SET32(7, RW(6) + RW(3));
SET32(7, RW(7) << 2);
SET64(6, RD(5) & 0x1);
SET32(7, RW(20) + RW(7));
SET64(8, (s16)rd16(c, (RW(7) + 0)));
c->f[4].u = rd32(c, (RW(19) + 0));
c->f[2].u = rd32(c, (RW(18) + 0));
c->f[3].u = RW(8);
SET64(7, (s16)rd16(c, (RW(7) + 2)));
c->f[3].f = (f32)(s32)c->f[3].u;
c->f[4].f = fpu(F(4) + F(3));
c->f[3].u = RW(7);
c->f[3].f = (f32)(s32)c->f[3].u;
{ int t = RD(6) != RD(0); c->f[2].f = fpu(F(2) + F(3)); if (t) goto L_00160FA0; }
c->f[4].f = fpu(F(4) - F(1)); goto L_00160FA8;
L_00160FA0:;
c->f[4].f = fpu(F(4) + F(1));
L_00160FA8:;
SET64(6, RD(5) & 0x2);
{ int t = RD(6) != RD(0);  if (t) goto L_00160FC0; }
c->f[2].f = fpu(F(2) - F(0)); goto L_00160FC8;
L_00160FC0:;
c->f[2].f = fpu(F(2) + F(0));
L_00160FC8:;
SET64(7, (s32)rd32(c, (RW(17) + 160)));
SET64(6, RD(5) & 0xffff);
SET32(8, RW(6) << 3);
SET32(5, RW(5) + 1);
SET32(7, RW(7) + RW(8));
SET64(6, RSD(5) < (s64)4);
wr32(c, (RW(7) + 0), c->f[4].u);
SET64(7, (s32)rd32(c, (RW(17) + 160)));
SET32(7, RW(7) + RW(8));
{ int t = RD(6) != RD(0); wr32(c, (RW(7) + 4), c->f[2].u); if (t) { POLL(); goto L_00160F08; } }
SET64(2, (s64)(s32)0x44fe0000);
c->f[12].u = RW(2);
SET64(31, 0x161004); SET64(4, RD(17) + RD(0)); JP_F_0014E9B0(c);
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x161014); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(28) + -32560)));
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 224); if (t) { POLL(); goto L_00160EE8; } }
L_00161028:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00161050(Ctx *c) { /* func_00161050 */
ENTER(0x161050);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s16)rd16(c, (RW(5) + 2)));
SET64(2, (s16)rd16(c, (RW(5) + 0)));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 32), c->f[0].u);
wr32(c, (RW(4) + 36), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
{ int t = RSD(2) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_001610E8; }
L_0016108C:;
SET64(3, (s16)rd16(c, (RW(5) + 0)));
SET64(2, RD(7) & 0xffff);
SET32(6, RW(2) << 3);
SET32(7, RW(7) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 96)));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s32)rd32(c, (RW(2) + 160)));
SET32(2, RW(2) + RW(6));
wr32(c, (RW(2) + 0), c->f[0].u);
SET64(3, (s16)rd16(c, (RW(5) + 2)));
SET64(2, (s32)rd32(c, (RW(4) + 96)));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s32)rd32(c, (RW(2) + 160)));
SET32(2, RW(2) + RW(6));
wr32(c, (RW(2) + 4), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
SET64(2, RSD(7) < RSD(2));
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 4); if (t) { POLL(); goto L_0016108C; } }
L_001610E8:;
SET64(4, (s32)rd32(c, (RW(4) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1610fc);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00161110(Ctx *c) { /* func_00161110 */
ENTER(0x161110);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(6) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00161130; }
SET64(6, RD(16) + RD(0));
L_00161130:;
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
{ int t = RSD(2) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_00161198; }
L_0016113C:;
SET64(3, (s16)rd16(c, (RW(6) + 0)));
SET64(2, RD(5) & 0xffff);
SET32(4, RW(2) << 3);
SET32(5, RW(5) + 1);
SET64(2, (s32)rd32(c, (RW(17) + 96)));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s32)rd32(c, (RW(2) + 192)));
SET32(2, RW(2) + RW(4));
wr32(c, (RW(2) + 0), c->f[0].u);
SET64(3, (s16)rd16(c, (RW(6) + 2)));
SET64(2, (s32)rd32(c, (RW(17) + 96)));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s32)rd32(c, (RW(2) + 192)));
SET32(2, RW(2) + RW(4));
wr32(c, (RW(2) + 4), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
SET64(2, RSD(5) < RSD(2));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_0016113C; } }
L_00161198:;
SET64(25, (s32)rd32(c, (RW(17) + 80)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1611ac); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s16)rd16(c, (RW(16) + 2)));
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET32(6, RW(29) + 60);
SET32(2, RW(0) - RW(2));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 56), c->f[0].u);
SET64(2, (s16)rd16(c, (RW(16) + 0)));
SET32(2, RW(0) - RW(2));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 60), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(17) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1611f8); SET32(7, RW(29) + 56); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00161210(Ctx *c) { /* func_00161210 */
ENTER(0x161210);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16123c); SET64(16, RD(6) + RD(0)); rt_call(c, t); }
SET64(2, (s16)rd16(c, (RW(17) + 2)));
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET32(6, RW(29) + 76);
SET32(2, RW(0) - RW(2));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 72), c->f[0].u);
SET64(2, (s16)rd16(c, (RW(17) + 0)));
SET32(2, RW(0) - RW(2));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 76), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(18) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x161288); SET32(7, RW(29) + 72); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 80)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16129c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001612C0(Ctx *c) { /* func_001612C0 */
ENTER(0x1612c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00161310; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1376);
wr32(c, (RW(17) + 80), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1612f8);  rt_call(c, t); }
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00161314; }
SET64(31, 0x161310); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00161310:;
SET64(2, RD(17) + RD(0));
L_00161314:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00161330(Ctx *c) { /* func_00161330 */
ENTER(0x161330);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4d0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + 1488);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(3, RW(0) + 1);
wr32(c, (RW(4) + 80), RW(2));
wr8(c, (RW(4) + 0), (u8)RW(3));
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(4) + 1), (u8)RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(2));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 44), RW(2));
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(0));
wr32(c, (RW(4) + 56), RW(0));
wr32(c, (RW(4) + 60), RW(2));
wr32(c, (RW(4) + 64), RW(0));
wr32(c, (RW(4) + 68), RW(0));
wr32(c, (RW(4) + 72), RW(0));
wr32(c, (RW(4) + 76), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1613ac); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + 1376);
wr32(c, (RW(16) + 80), RW(3));
wr32(c, (RW(16) + 96), RW(0));
wr32(c, (RW(16) + 100), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001613E0(Ctx *c) { /* func_001613E0 */
ENTER(0x1613e0);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 0), RW(0));
wr32(c, (RW(29) + 4), RW(0));
wr32(c, (RW(29) + 8), RW(0));
wr32(c, (RW(29) + 12), RW(3));
rd128(c, (RW(29) + 0) & ~15u, &c->r[5]);
wr32(c, (RW(29) + 28), RW(3));
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 24), RW(0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 32) & ~15u, &c->r[5]);
wr128(c, (RW(4) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 48) & ~15u, &c->r[3]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00161430(Ctx *c) { /* func_00161430 */
ENTER(0x161430);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 96)));
SET64(31, 0x161444); SET64(4, (s32)rd32(c, (RW(2) + 12))); JP_F_00141B90(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_00161460(Ctx *c) { /* func_00161460 */
ENTER(0x161460);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(5) + 96)));
SET64(6, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 0), RW(0));
wr32(c, (RW(29) + 4), RW(0));
c->f[1].u = rd32(c, (RW(5) + 32));
rd128(c, (RW(3) + 32) & ~15u, &c->r[3]);
c->f[3].u = rd32(c, (RW(5) + 36));
wr32(c, (RW(29) + 8), RW(0));
c->f[5].u = rd32(c, (RW(5) + 40));
wr32(c, (RW(29) + 12), RW(6));
wr128(c, (RW(29) + 0) & ~15u, &c->r[3]);
c->f[0].u = rd32(c, (RW(29) + 0));
c->f[2].u = rd32(c, (RW(29) + 4));
c->f[4].u = rd32(c, (RW(29) + 8));
c->f[0].f = fpu(F(0) + F(1));
c->f[2].f = fpu(F(2) + F(3));
wr32(c, (RW(4) + 0), c->f[0].u);
c->f[4].f = fpu(F(4) + F(5));
wr32(c, (RW(4) + 4), c->f[2].u);
wr32(c, (RW(4) + 8), c->f[4].u);
wr32(c, (RW(4) + 12), RW(6));
SET32(29, RW(29) + 16); return;
}

void JP_F_001614C0(Ctx *c) { /* func_001614C0 */
ENTER(0x1614c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 96)));
wr32(c, (RW(2) + 188), RW(5));
SET64(4, (s32)rd32(c, (RW(4) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1614e4);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001614F0(Ctx *c) { /* func_001614F0 */
ENTER(0x1614f0);
SET64(2, (s32)rd32(c, (RW(4) + 96)));
c->f[0].u = rd32(c, (RW(2) + 172)); return;
}

void JP_F_00161500(Ctx *c) { /* func_00161500 */
ENTER(0x161500);
SET64(2, (s32)rd32(c, (RW(4) + 96)));
c->f[0].u = rd32(c, (RW(2) + 176)); return;
}

void JP_F_00161510(Ctx *c) { /* func_00161510 */
ENTER(0x161510);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
{ int t = RSD(2) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_00161578; }
SET64(2, (s32)rd32(c, (RW(4) + 96)));
L_00161528:;
SET64(3, RD(7) & 0xffff);
SET32(3, RW(3) << 3);
SET32(7, RW(7) + 1);
c->f[0].u = rd32(c, (RW(5) + 0));
SET64(2, (s32)rd32(c, (RW(2) + 192)));
SET32(2, RW(2) + RW(3));
c->f[1].u = rd32(c, (RW(2) + 0));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(2) + 0), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(4) + 96)));
c->f[0].u = rd32(c, (RW(6) + 0));
SET64(2, (s32)rd32(c, (RW(2) + 192)));
SET32(2, RW(2) + RW(3));
c->f[1].u = rd32(c, (RW(2) + 4));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(2) + 4), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
SET64(2, RSD(7) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 96))); { POLL(); goto L_00161528; } }
L_00161578:;
SET64(4, (s32)rd32(c, (RW(4) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x16158c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001615A0(Ctx *c) { /* func_001615A0 */
ENTER(0x1615a0);
SET64(4, (s32)rd32(c, (RW(4) + 96)));
SET64(3, (s64)(s32)0x44000000);
c->f[0].u = RW(3);
SET64(4, (s32)rd32(c, (RW(4) + 160)));
c->f[2].u = rd32(c, (RW(4) + 24));
c->f[1].u = rd32(c, (RW(4) + 0));
c->f[1].f = fpu(F(2) - F(1));
c->fcc = F(1) < F(0);
{ int t = c->fcc; SET64(2, RD(0) + RD(0)); if (t) goto L_001615F0; }
c->f[2].u = rd32(c, (RW(4) + 28));
SET64(3, (s64)(s32)0x43e00000);
c->f[1].u = rd32(c, (RW(4) + 4));
c->f[0].u = RW(3);
c->f[1].f = fpu(F(2) - F(1));
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_001615F0; }
SET64(2, RD(0) + (s64)1);
L_001615F0:;
 return;
}

void JP_F_00161600(Ctx *c) { /* func_00161600 */
ENTER(0x161600);
SET64(2, rd8(c, (RW(4) + 1)));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1); return;
}

void JP_F_00161610(Ctx *c) { /* func_00161610 */
ENTER(0x161610);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, rd8(c, (RW(4) + 1)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001616FC; }
c->f[3].u = rd32(c, (RW(16) + 4));
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->fcc = F(3) < F(0);
{ int t = c->fcc;  if (t) goto L_00161654; }
wr32(c, (RW(16) + 4), c->f[0].u);
wr8(c, (RW(16) + 1), (u8)RW(0)); goto L_001616FC;
L_00161654:;
SET64(2, (s64)(s32)0x530000);
SET64(3, (s64)(s32)0x3d230000);
c->f[1].u = rd32(c, (RW(2) + -22384));
SET64(3, RD(3) | 0xd70a);
c->f[0].u = RW(0);
SET32(4, RW(29) + 48);
c->f[2].u = RW(3);
c->facc = fpu(F(0) + F(3));
c->f[20].f = fpu(c->facc + F(2) * F(1));
wr32(c, (RW(16) + 4), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x161690); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
c->f[5].u = rd32(c, (RW(29) + 56));
SET64(2, (s64)(s32)0x3f800000);
c->f[4].u = rd32(c, (RW(16) + 24));
SET64(4, RD(16) + RD(0));
c->f[2].u = rd32(c, (RW(29) + 52));
c->f[0].u = rd32(c, (RW(16) + 20));
c->f[4].f = fpu(F(4) - F(5));
c->f[3].u = RW(0);
c->facc = fpu(F(3) + F(5));
c->f[4].f = fpu(c->facc + F(20) * F(4));
c->f[0].f = fpu(F(0) - F(2));
c->facc = fpu(F(3) + F(2));
c->f[2].f = fpu(c->facc + F(20) * F(0));
c->f[0].u = rd32(c, (RW(16) + 16));
c->f[1].u = rd32(c, (RW(29) + 48));
wr32(c, (RW(29) + 68), c->f[2].u);
wr32(c, (RW(29) + 76), RW(2));
c->f[0].f = fpu(F(0) - F(1));
c->facc = fpu(F(3) + F(1));
c->f[0].f = fpu(c->facc + F(20) * F(0));
wr32(c, (RW(29) + 72), c->f[4].u);
wr32(c, (RW(29) + 64), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x1616fc); SET32(5, RW(29) + 64); rt_call(c, t); }
L_001616FC:;
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00161710(Ctx *c) { /* func_00161710 */
ENTER(0x161710);
wr8(c, (RW(4) + 0), (u8)RW(5)); return;
}

void JP_F_00161720(Ctx *c) { /* func_00161720 */
ENTER(0x161720);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(19) + RD(0));
L_00161748:;
SET64(3, RD(17) & 0xffff);
SET64(1, RSD(3) < (s64)3);
{ int t = RD(1) == RD(0);  if (t) goto L_00161778; }
SET32(3, RW(3) << 2);
SET32(3, RW(19) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 192)));
{ int t = RD(3) == RD(0);  if (t) goto L_00161778; }
SET64(3, RD(0) + (s64)1); goto L_00161780;
L_00161778:;
SET64(3, RD(0) + RD(0));
L_00161780:;
{ int t = RD(3) == RD(0);  if (t) goto L_001617A0; }
SET64(4, (s32)rd32(c, (RW(16) + 192)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x16179c); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_001617A0:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00161748; } }
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001617D0(Ctx *c) { /* func_001617D0 */
ENTER(0x1617d0);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 672) & ~15u, &c->r[3]);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 1264) & ~15u, &c->r[3]);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 1856) & ~15u, &c->r[3]); return;
}

void JP_F_001617F0(Ctx *c) { /* func_001617F0 */
ENTER(0x1617f0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(19) + RD(0));
L_00161818:;
SET64(3, RD(17) & 0xffff);
SET64(1, RSD(3) < (s64)3);
{ int t = RD(1) == RD(0);  if (t) goto L_00161848; }
SET32(3, RW(3) << 2);
SET32(3, RW(19) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 192)));
{ int t = RD(3) == RD(0);  if (t) goto L_00161848; }
SET64(3, RD(0) + (s64)1); goto L_00161850;
L_00161848:;
SET64(3, RD(0) + RD(0));
L_00161850:;
{ int t = RD(3) == RD(0);  if (t) goto L_00161870; }
SET64(4, (s32)rd32(c, (RW(16) + 192)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x16186c); c->f[12].u = rd32(c, (RW(18) + 0)); rt_call(c, t); }
L_00161870:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00161818; } }
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001618A0(Ctx *c) { /* func_001618A0 */
ENTER(0x1618a0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(22) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(0) + RD(0));
SET64(18, RD(17) + RD(0));
L_001618D8:;
SET64(3, RD(16) & 0xffff);
SET64(1, RSD(3) < (s64)3);
{ int t = RD(1) == RD(0);  if (t) goto L_00161908; }
SET32(3, RW(3) << 2);
SET32(3, RW(17) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 192)));
{ int t = RD(3) == RD(0);  if (t) goto L_00161908; }
SET64(3, RD(0) + (s64)1); goto L_00161910;
L_00161908:;
SET64(3, RD(0) + RD(0));
L_00161910:;
{ int t = RD(3) == RD(0);  if (t) goto L_001619C8; }
SET64(31, 0x161920); SET32(4, RW(0) + 2272); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_001619A8; }
SET32(4, RW(21) + 2236);
SET32(20, RW(0) + 1);
SET64(31, 0x161938); wr32(c, (RW(21) + 256), RW(4)); JP_F_00141C80(c);
SET64(4, RD(21) + RD(0));
SET64(31, 0x161944); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET64(31, 0x16194c); SET32(4, RW(21) + 288); JP_F_00243A30(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15376);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(21) + 276), RW(2));
SET32(6, RW(6) + 15500);
SET64(5, (s32)rd32(c, (RW(21) + 256)));
SET32(3, RW(3) + 15448);
SET32(2, RW(21) + 2236);
SET32(4, RW(21) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(21) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(21) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x16198c); wr32(c, (RW(3) + 20), RW(2)); JP_F_00161AA0(c);
SET64(31, 0x161994); SET32(4, RW(21) + 1040); JP_F_00161AA0(c);
SET64(31, 0x16199c); SET32(4, RW(21) + 1632); JP_F_00161AA0(c);
wr32(c, (RW(21) + 2224), RW(0));
wr32(c, (RW(21) + 2228), RW(0));
L_001619A8:;
wr32(c, (RW(19) + 192), RW(21));
SET64(25, (s32)rd32(c, (RW(21) + 276)));
SET64(5, (s32)rd32(c, (RW(18) + 192)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x1619c0); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
 goto L_001619D0;
L_001619C8:;
wr32(c, (RW(19) + 192), RW(0));
L_001619D0:;
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < (s64)3);
SET32(19, RW(19) + 4);
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_001618D8; } }
wr32(c, (RW(22) + 204), RW(0));
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

void JP_F_00161A10(Ctx *c) { /* func_00161A10 */
ENTER(0x161a10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00161A84; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15536);
wr32(c, (RW(17) + 144), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x161a48);  rt_call(c, t); }
SET32(4, RW(17) + 480);
SET64(31, 0x161a54); SET32(5, RW(0) + -1); JP_F_002B3F70(c);
SET32(4, RW(17) + 432);
SET64(31, 0x161a60); SET32(5, RW(0) + -1); JP_F_002B4320(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x161a6c); SET64(5, RD(0) + RD(0)); JP_F_002A5490(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00161A88; }
SET64(31, 0x161a84); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00161A84:;
SET64(2, RD(17) + RD(0));
L_00161A88:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00161AA0(Ctx *c) { /* func_00161AA0 */
ENTER(0x161aa0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x161ab8); SET64(16, RD(4) + RD(0)); JP_F_002A5500(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(16) + 432);
SET32(2, RW(2) + 15536);
wr32(c, (RW(16) + 144), RW(2));
wr16(c, (RW(16) + 416), (u16)RW(0));
wr16(c, (RW(16) + 418), (u16)RW(0));
SET64(31, 0x161ad8); wr32(c, (RW(16) + 420), RW(0)); JP_F_002B4380(c);
SET64(31, 0x161ae0); SET32(4, RW(16) + 480); JP_F_002B3FD0(c);
wr16(c, (RW(16) + 576), (u16)RW(0));
SET64(2, RD(16) + RD(0));
wr8(c, (RW(16) + 578), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00161B00(Ctx *c) { /* func_00161B00 */
ENTER(0x161b00);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(4) + RD(0));
L_00161B20:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(4) == RD(0);  if (t) goto L_00161B40; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x161b3c); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00161B40:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00161B20; } }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00161B70(Ctx *c) { /* func_00161B70 */
ENTER(0x161b70);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(4) + RD(0));
L_00161B90:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(4) == RD(0);  if (t) goto L_00161BB0; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x161bac); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00161BB0:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00161B90; } }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00161BE0(Ctx *c) { /* func_00161BE0 */
ENTER(0x161be0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 28), RW(2));
wr32(c, (RW(29) + 24), RW(0));
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x161c14); SET32(5, RW(29) + 16); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00161C20(Ctx *c) { /* func_00161C20 */
ENTER(0x161c20);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(4) + RD(0));
L_00161C40:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(4) == RD(0);  if (t) goto L_00161C60; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x161c5c); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00161C60:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00161C40; } }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00161C90(Ctx *c) { /* func_00161C90 */
ENTER(0x161c90);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(4) + RD(0));
L_00161CB0:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(4) == RD(0);  if (t) goto L_00161CD0; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x161ccc); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00161CD0:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00161CB0; } }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00161D00(Ctx *c) { /* func_00161D00 */
ENTER(0x161d00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x161d1c); SET64(16, RD(0) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET64(16, RD(0) + (s64)1); goto L_00161D3C; }
{ int t = RD(2) == RD(0);  if (t) goto L_00161D38; }
 goto L_00161D3C;
L_00161D38:;
SET64(16, RD(0) + (s64)1);
L_00161D3C:;
if (RD(16) != RD(0)) { SET64(16, RD(0) + RD(0)); goto L_00161D4C; }
SET64(2, RD(0) + RD(0)); goto L_00161D8C;
L_00161D4C:;
SET64(4, (s32)rd32(c, (RW(17) + 192)));
if (RD(4) == RD(0)) { SET32(16, RW(16) + 1); goto L_00161D7C; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x161d68);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00161D78; }
SET64(2, RD(0) + RD(0)); goto L_00161D8C;
L_00161D78:;
SET32(16, RW(16) + 1);
L_00161D7C:;
SET64(2, RSD(16) < (s64)3);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00161D4C; } }
SET32(2, RW(0) + 1);
L_00161D8C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00161DA0(Ctx *c) { /* func_00161DA0 */
ENTER(0x161da0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(20) + RD(0));
L_00161DD0:;
SET64(2, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(2) == RD(0);  if (t) goto L_00161E68; }
{ int t = RD(19) != RD(17);  if (t) goto L_00161E40; }
SET64(31, 0x161dec); SET64(4, (s32)rd32(c, (RW(2) + 256))); JP_F_00141B90(c);
SET32(3, RW(0) + 3);
{ int t = RD(2) == RD(3);  if (t) goto L_00161E10; }
SET64(2, (s32)rd32(c, (RW(16) + 192)));
SET64(31, 0x161e04); SET64(4, (s32)rd32(c, (RW(2) + 256))); JP_F_00141B90(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00161E68; }
L_00161E10:;
{ int t = RD(20) == RD(0); SET64(6, RD(20) + RD(0)); if (t) goto L_00161E20; }
SET32(6, RW(20) + 32);
L_00161E20:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x161e34); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
 goto L_00161E68;
L_00161E40:;
SET64(31, 0x161e48); SET64(4, (s32)rd32(c, (RW(2) + 256))); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_00161E68; }
SET64(4, (s32)rd32(c, (RW(16) + 192)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x161e68); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00161E68:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00161DD0; } }
SET64(31, 0x161e80); SET64(4, RD(20) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { wr8(c, (RW(20) + 8), (u8)RW(0)); goto L_00161EA0; }
SET64(31, 0x161e94); SET64(4, RD(20) + RD(0)); JP_F_00141B90(c);
if (RD(2) != RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_00161EAC; }
wr8(c, (RW(20) + 8), (u8)RW(0));
L_00161EA0:;
SET32(3, RW(0) + 1);
wr32(c, (RW(20) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 80)));
L_00161EAC:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00161ED0(Ctx *c) { /* func_00161ED0 */
ENTER(0x161ed0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(19) + RD(0));
L_00161EF8:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(4) == RD(0);  if (t) goto L_00161F18; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x161f14); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00161F18:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00161EF8; } }
wr8(c, (RW(19) + 8), (u8)RW(18));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00161F50(Ctx *c) { /* func_00161F50 */
ENTER(0x161f50);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(19) + RD(0));
L_00161F78:;
SET64(2, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(2) == RD(0);  if (t) goto L_00161FB0; }
SET64(31, 0x161f8c); SET64(4, (s32)rd32(c, (RW(2) + 256))); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_00161FB0; }
SET64(4, (s32)rd32(c, (RW(16) + 192)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x161fac); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00161FB0:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00161F78; } }
SET64(31, 0x161fc8); SET64(4, RD(19) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(4, (s32)rd32(c, (RW(19) + 204))); goto L_00162000; }
SET64(31, 0x161fdc); SET64(4, RD(19) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_00161FFC; }
SET32(2, RW(0) + 2);
SET64(31, 0x161ff4); wr32(c, (RW(19) + 0), RW(2)); JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
wr32(c, (RW(19) + 12), RW(3));
L_00161FFC:;
SET64(4, (s32)rd32(c, (RW(19) + 204)));
L_00162000:;
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_00162024; }
{ int t = RD(19) == RD(0); SET64(5, RD(19) + RD(0)); if (t) goto L_00162014; }
SET32(5, RW(19) + 32);
L_00162014:;
SET64(31, 0x16201c);  JP_F_00243880(c);
wr32(c, (RW(19) + 204), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
L_00162024:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00162040(Ctx *c) { /* func_00162040 */
ENTER(0x162040);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 204)));
{ int t = RD(4) == RD(0); SET64(16, RD(7) + RD(0)); if (t) goto L_00162084; }
{ int t = RD(19) == RD(0); SET64(5, RD(19) + RD(0)); if (t) goto L_0016207C; }
SET32(5, RW(5) + 32);
L_0016207C:;
SET64(31, 0x162084);  JP_F_00243880(c);
L_00162084:;
{ int t = RD(16) == RD(0);  if (t) goto L_00162094; }
wr32(c, (RW(19) + 204), RW(16)); goto L_001620A0;
L_00162094:;
SET64(16, (s64)(s32)0x540000);
SET32(16, RW(16) + 1264);
wr32(c, (RW(19) + 204), RW(16));
L_001620A0:;
{ int t = RD(19) == RD(0); SET64(5, RD(19) + RD(0)); if (t) goto L_001620AC; }
SET32(5, RW(19) + 32);
L_001620AC:;
SET64(31, 0x1620b4); SET64(4, (s32)rd32(c, (RW(19) + 204))); JP_F_002438D0(c);
SET64(5, RD(18) & 0xffff);
SET64(6, RD(17) + RD(0));
SET64(31, 0x1620c4); SET64(4, RD(19) + RD(0)); JP_F_00161DA0(c);
SET64(31, 0x1620cc); SET64(4, RD(19) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { wr8(c, (RW(19) + 8), (u8)RW(0)); goto L_001620EC; }
SET64(31, 0x1620e0); SET64(4, RD(19) + RD(0)); JP_F_00141B90(c);
if (RD(2) != RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_001620F8; }
wr8(c, (RW(19) + 8), (u8)RW(0));
L_001620EC:;
SET32(3, RW(0) + 1);
wr32(c, (RW(19) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 64)));
L_001620F8:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00162110(Ctx *c) { /* func_00162110 */
ENTER(0x162110);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(4) + RD(0));
L_00162138:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(4) == RD(0);  if (t) goto L_00162158; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(5, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x162158); SET64(6, RD(18) + RD(0)); rt_call(c, t); }
L_00162158:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00162138; } }
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00162190(Ctx *c) { /* func_00162190 */
ENTER(0x162190);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_001621B0:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(4) == RD(0);  if (t) goto L_001621D0; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1621cc); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001621D0:;
SET32(17, RW(17) + 1);
wr32(c, (RW(16) + 192), RW(0));
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001621B0; } }
wr32(c, (RW(18) + 204), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00162200(Ctx *c) { /* func_00162200 */
ENTER(0x162200);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00162408; }
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15376);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 276), RW(2));
SET32(6, RW(6) + 15500);
SET64(5, (s32)rd32(c, (RW(17) + 256)));
SET32(3, RW(3) + 15448);
SET32(2, RW(17) + 2236);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(17) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x162264);  rt_call(c, t); }
SET32(4, RW(17) + 1632);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 1040); goto L_001622B4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15536);
wr32(c, (RW(17) + 1776), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x16228c);  rt_call(c, t); }
SET32(4, RW(17) + 2112);
SET64(31, 0x162298); SET32(5, RW(0) + -1); JP_F_002B3F70(c);
SET32(4, RW(17) + 2064);
SET64(31, 0x1622a4); SET32(5, RW(0) + -1); JP_F_002B4320(c);
SET32(4, RW(17) + 1632);
SET64(31, 0x1622b0); SET64(5, RD(0) + RD(0)); JP_F_002A5490(c);
SET32(4, RW(17) + 1040);
L_001622B4:;
if (RD(4) == RD(0)) { SET32(4, RW(17) + 448); goto L_00162300; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15536);
wr32(c, (RW(17) + 1184), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1622d8);  rt_call(c, t); }
SET32(4, RW(17) + 1520);
SET64(31, 0x1622e4); SET32(5, RW(0) + -1); JP_F_002B3F70(c);
SET32(4, RW(17) + 1472);
SET64(31, 0x1622f0); SET32(5, RW(0) + -1); JP_F_002B4320(c);
SET32(4, RW(17) + 1040);
SET64(31, 0x1622fc); SET64(5, RD(0) + RD(0)); JP_F_002A5490(c);
SET32(4, RW(17) + 448);
L_00162300:;
if (RD(4) == RD(0)) { SET32(4, RW(17) + 288); goto L_0016234C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15536);
wr32(c, (RW(17) + 592), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x162324);  rt_call(c, t); }
SET32(4, RW(17) + 928);
SET64(31, 0x162330); SET32(5, RW(0) + -1); JP_F_002B3F70(c);
SET32(4, RW(17) + 880);
SET64(31, 0x16233c); SET32(5, RW(0) + -1); JP_F_002B4320(c);
SET32(4, RW(17) + 448);
SET64(31, 0x162348); SET64(5, RD(0) + RD(0)); JP_F_002A5490(c);
SET32(4, RW(17) + 288);
L_0016234C:;
SET64(31, 0x162354); SET64(5, RD(0) + RD(0)); JP_F_00243920(c);
{ int t = RD(17) == RD(0);  if (t) goto L_001623C0; }
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
{ u32 t = RW(25); SET64(31, 0x162398); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_001623C0; }
SET32(4, RW(17) + 32);
SET64(31, 0x1623ac); SET32(5, RW(0) + -1); JP_F_002A88A0(c);
{ int t = RD(17) == RD(0);  if (t) goto L_001623C0; }
SET32(4, RW(17) + 4);
SET64(31, 0x1623c0); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
L_001623C0:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_001623F4; }
SET32(4, RW(17) + 2236);
{ int t = RD(4) == RD(0);  if (t) goto L_001623F0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 2252), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1623f0);  rt_call(c, t); }
L_001623F0:;
SET64(2, RD(16) << 48);
L_001623F4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016240C; }
SET64(31, 0x162408); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00162408:;
SET64(2, RD(17) + RD(0));
L_0016240C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00162420(Ctx *c) { /* func_00162420 */
ENTER(0x162420);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(8) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(7) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(16, RD(0) + RD(0));
L_00162460:;
SET64(3, (s32)rd32(c, (RW(19) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_00162528; }
SET64(31, 0x162474); SET32(4, RW(0) + 2272); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_001624F8; }
SET32(4, RW(21) + 2236);
SET32(20, RW(0) + 1);
SET64(31, 0x16248c); wr32(c, (RW(21) + 256), RW(4)); JP_F_00141C80(c);
SET64(4, RD(21) + RD(0));
SET64(31, 0x162498); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET64(31, 0x1624a0); SET32(4, RW(21) + 288); JP_F_00243A30(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15376);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(21) + 276), RW(2));
SET32(6, RW(6) + 15500);
SET64(5, (s32)rd32(c, (RW(21) + 256)));
SET32(3, RW(3) + 15448);
SET32(2, RW(21) + 2236);
SET32(4, RW(21) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(21) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(21) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x1624e0); wr32(c, (RW(3) + 20), RW(2)); JP_F_00161AA0(c);
SET64(31, 0x1624e8); SET32(4, RW(21) + 1040); JP_F_00161AA0(c);
SET64(31, 0x1624f0); SET32(4, RW(21) + 1632); JP_F_00161AA0(c);
wr32(c, (RW(21) + 2224), RW(0));
wr32(c, (RW(21) + 2228), RW(0));
L_001624F8:;
wr32(c, (RW(18) + 192), RW(21));
SET64(25, (s32)rd32(c, (RW(21) + 276)));
SET64(4, RD(21) + RD(0));
SET64(5, (s32)rd32(c, (RW(19) + 0)));
SET64(6, RD(17) + RD(0));
SET64(7, RD(22) + RD(0));
SET64(8, RD(23) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x162520); SET32(9, RW(0) + 1); rt_call(c, t); }
 goto L_00162530;
L_00162528:;
wr32(c, (RW(18) + 192), RW(0));
L_00162530:;
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < (s64)3);
SET32(19, RW(19) + 4);
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_00162460; } }
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

void JP_F_00162570(Ctx *c) { /* func_00162570 */
ENTER(0x162570);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001625F8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 1600);
SET32(2, RW(2) + 1636);
wr32(c, (RW(17) + 16), RW(3));
wr32(c, (RW(17) + 176), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1625b4);  rt_call(c, t); }
SET32(4, RW(17) + 32);
SET64(31, 0x1625c0); SET64(5, RD(0) + RD(0)); JP_F_00243920(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_001625E4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x1625e0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_001625E4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001625FC; }
SET64(31, 0x1625f8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001625F8:;
SET64(2, RD(17) + RD(0));
L_001625FC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00162610(Ctx *c) { /* func_00162610 */
ENTER(0x162610);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x162624); SET64(16, RD(4) + RD(0)); JP_F_00141C80(c);
SET64(31, 0x16262c); SET32(4, RW(16) + 32); JP_F_00243A30(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1600);
SET32(3, RW(3) + 1636);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 176), RW(3));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 204), RW(0));
wr32(c, (RW(16) + 192), RW(0));
wr32(c, (RW(16) + 196), RW(0));
wr32(c, (RW(16) + 200), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00162670(Ctx *c) { /* func_00162670 */
ENTER(0x162670);
SET32(4, RW(4) + -32); { JP_F_00162570(c); return; }
}

void JP_F_00162680(Ctx *c) { /* func_00162680 */
ENTER(0x162680);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00162800; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1712);
SET32(3, RW(3) + 1728);
wr32(c, (RW(17) + 176), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 196), RW(3));
SET32(2, RW(2) + 1768);
wr32(c, (RW(17) + 1072), RW(2));
SET64(31, 0x1626cc); SET64(4, (s32)rd32(c, (RW(17) + 200))); JP_F_002ADDD0(c);
wr8(c, (RW(17) + 228), (u8)RW(0));
SET64(31, 0x1626d8); SET64(4, (s32)rd32(c, (RW(17) + 560))); JP_F_002ADDD0(c);
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_001626E4; }
SET32(5, RW(17) + 192);
L_001626E4:;
SET64(31, 0x1626ec); SET64(4, (s32)rd32(c, (RW(28) + -29932))); JP_F_002A3280(c);
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_001626F8; }
SET32(5, RW(17) + 192);
L_001626F8:;
SET64(31, 0x162700); SET64(4, (s32)rd32(c, (RW(28) + -29932))); JP_F_002A3280(c);
SET32(2, RW(17) + 928);
{ int t = RD(2) == RD(0);  if (t) goto L_00162750; }
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(17) + 1168);
SET32(3, RW(3) + -3920);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 1072), RW(3)); if (t) goto L_00162744; }
SET32(4, RW(17) + 1200);
SET64(31, 0x16272c); SET32(5, RW(0) + -1); JP_F_002A88A0(c);
SET32(2, RW(17) + 1168);
if (RD(2) == RD(0)) { SET32(4, RW(17) + 928); goto L_00162748; }
SET32(4, RW(17) + 1172);
SET64(31, 0x162744); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
L_00162744:;
SET32(4, RW(17) + 928);
L_00162748:;
SET64(31, 0x162750); SET64(5, RD(0) + RD(0)); JP_F_002A6550(c);
L_00162750:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_001627EC; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 1792);
SET32(2, RW(2) + 1808);
wr32(c, (RW(17) + 176), RW(3));
wr32(c, (RW(17) + 196), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 736)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x162780); SET32(4, RW(17) + 672); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(17) + 912)));
if (RD(18) == RD(0)) { SET32(4, RW(17) + 784); goto L_001627BC; }
SET32(4, RW(18) + 128);
SET64(31, 0x162798); SET32(5, RW(0) + -1); JP_F_002B4320(c);
SET32(4, RW(18) + 80);
SET64(31, 0x1627a4); SET32(5, RW(0) + -1); JP_F_002B4320(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x1627b0); SET32(5, RW(0) + -1); JP_F_002AA640(c);
SET64(31, 0x1627b8); SET64(4, RD(18) + RD(0)); JP_F_001004B0(c);
SET32(4, RW(17) + 784);
L_001627BC:;
SET32(5, RW(0) + -1);
SET64(31, 0x1627c8); wr32(c, (RW(17) + 912), RW(0)); JP_F_0015D9D0(c);
SET32(4, RW(17) + 672);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_001627E0; }
SET64(31, 0x1627dc); SET32(5, RW(0) + -1); JP_F_0014B0C0(c);
SET64(4, RD(17) + RD(0));
L_001627E0:;
SET64(31, 0x1627e8); SET64(5, RD(0) + RD(0)); JP_F_002A4080(c);
SET64(2, RD(16) << 48);
L_001627EC:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00162804; }
SET64(31, 0x162800); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00162800:;
SET64(2, RD(17) + RD(0));
L_00162804:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00162820(Ctx *c) { /* func_00162820 */
ENTER(0x162820);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(6, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(18, RD(7) + RD(0));
SET64(5, (s32)rd32(c, (RW(28) + -29932)));
SET64(17, RD(8) + RD(0));
SET64(31, 0x162854); SET64(16, RD(4) + RD(0)); JP_F_002A4120(c);
SET32(4, RW(16) + 672);
SET64(31, 0x162860); SET32(5, RW(0) + 1); JP_F_0014B1B0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 1792);
SET32(2, RW(2) + 1808);
wr32(c, (RW(16) + 176), RW(3));
SET32(4, RW(16) + 784);
SET64(31, 0x162880); wr32(c, (RW(16) + 196), RW(2)); JP_F_0015DA20(c);
SET64(2, (s64)(s32)0x40490000);
SET64(6, RD(18) & 0xffff);
SET64(3, RD(2) | 0xfdb);
wr32(c, (RW(16) + 912), RW(0));
SET64(2, (s64)(s32)0x490000);
SET32(18, RW(16) + 928);
c->f[2].u = rd32(c, (RW(2) + 26272));
SET64(5, RD(19) & 0xffff);
c->f[3].u = RW(3);
SET64(7, RD(17) & 0xffff);
SET64(3, (s64)(s32)0x43340000);
wr32(c, (RW(16) + 784), RW(16));
c->f[2].f = fpu(F(3) * F(2));
SET64(2, (s64)(s32)0x40000000);
SET64(4, RD(18) + RD(0));
c->f[1].u = RW(3);
c->f[1].f = fpu_div(F(2), F(1));
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(1), F(0));
SET64(31, 0x1628e4); wr32(c, (RW(16) + 916), c->f[0].u); JP_F_002A6630(c);
SET32(17, RW(18) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(17) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x1628fc); wr32(c, (RW(18) + 240), RW(4)); JP_F_002AE1F0(c);
SET64(31, 0x162904); SET32(4, RW(17) + 32); JP_F_002A88F0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 240), RW(17));
SET32(2, RW(2) + -3920);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 144), RW(2));
SET64(31, 0x162920); SET32(5, RW(18) + 272); JP_F_002A6520(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1712);
SET32(3, RW(3) + 1728);
wr32(c, (RW(16) + 176), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 196), RW(3));
SET32(2, RW(2) + 1768);
SET64(31, 0x162948); wr32(c, (RW(16) + 1072), RW(2)); JP_F_002C29D0(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(17, (s32)c->f[0].u);
SET64(31, 0x162958);  JP_F_002C2A00(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 80);
wr32(c, (RW(29) + 92), RW(17));
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 84), RW(0));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x16297c); wr32(c, (RW(29) + 88), RW(2)); JP_F_00162E90(c);
SET64(2, (s32)rd32(c, (RW(16) + 236)));
SET64(17, RD(16) + RD(0));
{ int t = RD(16) == RD(0); wr8(c, (RW(2) + 324), (u8)RW(0)); if (t) goto L_00162990; }
SET32(17, RW(16) + 192);
L_00162990:;
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(18, (s32)rd32(c, (RW(16) + 912)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1629a4); SET32(5, RW(18) + 128); JP_F_002ADFE0(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1629b4); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1629c4); SET32(5, RW(18) + 80); JP_F_002ADFE0(c);
SET64(2, (s64)(s32)0x3eb20000);
wr8(c, (RW(16) + 228), (u8)RW(0));
SET64(2, RD(2) | 0xb8c3);
wr32(c, (RW(16) + 916), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1629e4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1629f4); SET32(5, RW(16) + 928); JP_F_002ADFE0(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00162A20(Ctx *c) { /* func_00162A20 */
ENTER(0x162a20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00162A5C; }
SET64(31, 0x162a44); SET32(5, RW(0) + -1); JP_F_0014B0C0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00162A60; }
SET64(31, 0x162a5c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00162A5C:;
SET64(2, RD(17) + RD(0));
L_00162A60:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00162A80(Ctx *c) { /* func_00162A80 */
ENTER(0x162a80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x162a90); SET64(4, (s32)rd32(c, (RW(4) + 912))); JP_F_002AA5C0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00162AA0(Ctx *c) { /* func_00162AA0 */
ENTER(0x162aa0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x162ab0); SET32(4, RW(4) + 592); JP_F_002A4FC0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00162AC0(Ctx *c) { /* func_00162AC0 */
ENTER(0x162ac0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(18, (s32)rd32(c, (RW(5) + 248)));
c->f[20].u = rd32(c, (RW(5) + 916));
SET64(17, (s32)rd32(c, (RW(5) + 252)));
SET64(31, 0x162aec); SET64(16, RD(4) + RD(0)); JP_F_002C2A10(c);
c->f[2].u = RW(18);
SET64(2, (s64)(s32)0x40000000);
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[0].f = fpu(F(2) * F(0));
c->f[12].u = c->f[20].u;
c->f[1].u = RW(2);
c->f[20].f = fpu_div(F(0), F(1));
SET64(31, 0x162b1c);  JP_F_0011F7D8(c);
c->f[12].f = fpu_div(F(20), F(0));
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x47800000);
SET32(4, RW(29) + 80);
c->f[0].u = RW(18);
c->f[13].f = (f32)(s32)c->f[0].u;
c->f[0].u = RW(17);
c->f[15].u = RW(3);
c->f[16].u = RW(2);
SET64(31, 0x162b54); c->f[14].f = (f32)(s32)c->f[0].u; JP_F_002A6820(c);
SET64(31, 0x162b5c); SET64(4, RD(16) + RD(0)); JP_F_002AF080(c);
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_00162BA0(Ctx *c) { /* func_00162BA0 */
ENTER(0x162ba0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 16), c->f[20].u);
SET64(5, (s32)rd32(c, (RW(4) + 240)));
SET64(19, (s32)rd32(c, (RW(4) + 248)));
SET64(18, (s32)rd32(c, (RW(4) + 252)));
SET64(3, (s32)rd32(c, (RW(4) + 244)));
SET32(6, RW(5) + 2048);
SET64(2, (s32)rd32(c, (RW(28) + -29932)));
SET32(5, RW(3) + 2048);
SET32(4, RW(2) + 48);
SET64(2, (s32)rd32(c, (RW(2) + 56)));
SET32(3, RW(2) - RW(19));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_00162BFC; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_00162BFC:;
SET32(17, RW(6) - RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(3, RW(2) - RW(18));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_00162C18; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_00162C18:;
c->f[20].u = rd32(c, (RW(20) + 916));
SET64(31, 0x162c24); SET32(16, RW(5) - RW(2)); JP_F_002C2A10(c);
c->f[2].u = RW(19);
SET64(2, (s64)(s32)0x40000000);
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[0].f = fpu(F(2) * F(0));
c->f[12].u = c->f[20].u;
c->f[1].u = RW(2);
c->f[20].f = fpu_div(F(0), F(1));
SET64(31, 0x162c54);  JP_F_0011F7D8(c);
c->f[12].f = fpu_div(F(20), F(0));
SET64(2, (s64)(s32)0x3fb60000);
SET64(5, RD(2) | 0xdb6e);
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x47800000);
SET64(4, RD(20) + RD(0));
wr32(c, (RW(29) + 0), RW(2));
SET64(25, (s32)rd32(c, (RW(20) + 176)));
SET64(2, (s64)(s32)0x4b7f0000);
SET64(2, RD(2) | 0xffff);
SET64(25, (s32)rd32(c, (RW(25) + 44)));
c->f[0].u = RW(19);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[0].u = RW(18);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu_div(F(1), F(0));
c->f[0].u = RW(5);
c->f[14].f = fpu_div(F(0), F(1));
c->f[0].u = RW(17);
c->f[15].f = (f32)(s32)c->f[0].u;
c->f[0].u = RW(16);
c->f[16].f = (f32)(s32)c->f[0].u;
c->f[13].u = RW(3);
c->f[18].u = RW(2);
c->f[17].u = c->f[13].u;
{ u32 t = RW(25); SET64(31, 0x162cdc); c->f[19].u = c->f[13].u; rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 112)));
c->f[20].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 96) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_00162D00(Ctx *c) { /* func_00162D00 */
ENTER(0x162d00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 916), c->f[12].u);
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x162d1c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00162D30(Ctx *c) { /* func_00162D30 */
ENTER(0x162d30);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
SET64(31, 0x162d5c); wr128(c, (RW(29) + 80) & ~15u, &c->r[2]); JP_F_002C2A00(c);
c->f[1].u = rd32(c, (RW(29) + 88));
c->f[1].f = (f32)(s32)c->f[1].u;
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s32)rd32(c, (RW(28) + -29932))); goto L_00162D7C; }
SET64(31, 0x162d78);  JP_F_002C29D0(c);
SET64(2, (s32)rd32(c, (RW(28) + -29932)));
L_00162D7C:;
SET64(16, (s32)rd32(c, (RW(2) + 60)));
{ int t = RD(18) == RD(0); SET64(17, (s32)rd32(c, (RW(2) + 56))); if (t) goto L_00162DA4; }
SET32(4, RW(19) + 192);
SET64(31, 0x162d94); SET32(5, RW(29) + 80); JP_F_002A36D0(c);
SET64(25, (s32)rd32(c, (RW(19) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x162da4); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
L_00162DA4:;
SET64(3, (s32)rd32(c, (RW(29) + 80)));
if (RSD(3) >= 0) { SET64(2, (s32)rd32(c, (RW(29) + 88))); goto L_00162DCC; }
SET64(2, (s32)rd32(c, (RW(29) + 88)));
wr32(c, (RW(29) + 80), RW(0));
SET32(2, RW(2) + RW(3));
SET64(3, RD(0) << 32);
wr32(c, (RW(29) + 88), RW(2));
SET64(3, RSD(3) >> 32);
SET64(2, (s32)rd32(c, (RW(29) + 88)));
L_00162DCC:;
SET64(3, RD(3) << 32);
SET64(3, RSD(3) >> 32);
SET32(2, RW(3) + RW(2));
SET64(1, RSD(17) < RSD(2));
if (RD(1) == RD(0)) { SET64(3, (s32)rd32(c, (RW(29) + 84))); goto L_00162DF0; }
SET32(2, RW(17) - RW(3));
wr32(c, (RW(29) + 88), RW(2));
SET64(3, (s32)rd32(c, (RW(29) + 84)));
L_00162DF0:;
if (RSD(3) >= 0) { SET64(2, (s32)rd32(c, (RW(29) + 92))); goto L_00162E14; }
SET64(2, (s32)rd32(c, (RW(29) + 92)));
wr32(c, (RW(29) + 84), RW(0));
SET32(2, RW(2) + RW(3));
SET64(3, RD(0) << 32);
wr32(c, (RW(29) + 92), RW(2));
SET64(3, RSD(3) >> 32);
SET64(2, (s32)rd32(c, (RW(29) + 92)));
L_00162E14:;
SET64(3, RD(3) << 32);
SET64(3, RSD(3) >> 32);
SET32(2, RW(3) + RW(2));
SET64(1, RSD(16) < RSD(2));
if (RD(1) == RD(0)) { SET64(2, (s32)rd32(c, (RW(29) + 88))); goto L_00162E38; }
SET32(2, RW(16) - RW(3));
wr32(c, (RW(29) + 92), RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 88)));
L_00162E38:;
if (RSD(2) > 0) { SET64(2, (s32)rd32(c, (RW(29) + 92))); goto L_00162E4C; }
SET32(2, RW(0) + -1);
wr32(c, (RW(29) + 80), RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 92)));
L_00162E4C:;
if (RSD(2) > 0) { SET32(4, RW(19) + 192); goto L_00162E60; }
SET32(2, RW(0) + -1);
wr32(c, (RW(29) + 84), RW(2));
SET32(4, RW(19) + 192);
L_00162E60:;
SET64(31, 0x162e68); SET32(5, RW(29) + 80); JP_F_002A36D0(c);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00162E90(Ctx *c) { /* func_00162E90 */
ENTER(0x162e90);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 196)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x162ebc); SET32(4, RW(16) + 192); rt_call(c, t); }
SET64(5, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x162ecc); SET32(6, RW(0) + 1); JP_F_00162D30(c);
SET64(2, (s32)rd32(c, (RW(16) + 236)));
SET32(4, RW(0) + 192);
SET64(31, 0x162edc); wr8(c, (RW(2) + 324), (u8)RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00162F2C; }
SET32(2, RW(0) + 128);
SET64(4, RD(17) + RD(0));
wr8(c, (RW(29) + 92), (u8)RW(2));
SET32(5, RW(29) + 64);
wr8(c, (RW(29) + 93), (u8)RW(2));
SET32(6, RW(29) + 92);
wr8(c, (RW(29) + 94), (u8)RW(2));
SET64(7, RD(0) + RD(0));
wr8(c, (RW(29) + 95), (u8)RW(2));
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 68), RW(0));
wr32(c, (RW(29) + 72), RW(0));
SET64(31, 0x162f1c); wr32(c, (RW(29) + 76), RW(0)); JP_F_002AA6B0(c);
SET64(31, 0x162f24); SET32(4, RW(17) + 80); JP_F_002B4380(c);
SET64(31, 0x162f2c); SET32(4, RW(17) + 128); JP_F_002B4380(c);
L_00162F2C:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(16) + 240);
SET64(31, 0x162f3c); wr32(c, (RW(16) + 912), RW(17)); JP_F_00163200(c);
SET64(31, 0x162f44); SET32(4, RW(16) + 672); JP_F_0014B040(c);
SET32(5, RW(16) + 672);
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 200))); goto L_00162F58; }
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET64(4, (s32)rd32(c, (RW(16) + 200)));
L_00162F58:;
SET64(31, 0x162f60); SET64(6, (s32)rd32(c, (RW(4) + 16))); JP_F_002ADFE0(c);
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_00162F6C; }
SET32(17, RW(16) + 192);
L_00162F6C:;
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(18, (s32)rd32(c, (RW(16) + 912)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x162f80); SET32(5, RW(18) + 128); JP_F_002ADFE0(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x162f90); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x162fa0); SET32(5, RW(18) + 80); JP_F_002ADFE0(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 228), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00162FC0(Ctx *c) { /* func_00162FC0 */
ENTER(0x162fc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(17) + 736)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x162fe4); SET32(4, RW(17) + 672); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(17) + 912)));
if (RD(16) == RD(0)) { wr32(c, (RW(17) + 912), RW(0)); goto L_00163020; }
SET32(4, RW(16) + 128);
SET64(31, 0x162ffc); SET32(5, RW(0) + -1); JP_F_002B4320(c);
SET32(4, RW(16) + 80);
SET64(31, 0x163008); SET32(5, RW(0) + -1); JP_F_002B4320(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x163014); SET32(5, RW(0) + -1); JP_F_002AA640(c);
SET64(31, 0x16301c); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
wr32(c, (RW(17) + 912), RW(0));
L_00163020:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00163040(Ctx *c) { /* func_00163040 */
ENTER(0x163040);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x163058); SET64(4, (s32)rd32(c, (RW(4) + 200))); JP_F_002ADDD0(c);
wr8(c, (RW(16) + 228), (u8)RW(0));
SET64(31, 0x163064); SET64(4, (s32)rd32(c, (RW(16) + 560))); JP_F_002ADDD0(c);
if (RD(16) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -29932))); goto L_00163074; }
SET32(16, RW(16) + 192);
SET64(4, (s32)rd32(c, (RW(28) + -29932)));
L_00163074:;
SET64(31, 0x16307c); SET64(5, RD(16) + RD(0)); JP_F_002A3280(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00163090(Ctx *c) { /* func_00163090 */
ENTER(0x163090);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 912)));
SET64(31, 0x1630a4); wr32(c, (RW(4) + 176), RW(5)); JP_F_002AA560(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001630B0(Ctx *c) { /* func_001630B0 */
ENTER(0x1630b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
{ int t = RD(5) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_0016310C; }
{ int t = RD(4) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001630D0; }
SET32(16, RW(16) + 192);
L_001630D0:;
SET64(17, (s32)rd32(c, (RW(4) + 912)));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1630e4); SET32(5, RW(17) + 128); JP_F_002ADFE0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1630f4); SET64(5, RD(17) + RD(0)); JP_F_002ADFE0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x163104); SET32(5, RW(17) + 80); JP_F_002ADFE0(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_00163144;
L_0016310C:;
{ int t = RD(4) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00163118; }
SET32(16, RW(16) + 192);
L_00163118:;
SET64(17, (s32)rd32(c, (RW(4) + 912)));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x163128); SET32(5, RW(17) + 128); JP_F_002ADE40(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x163134); SET64(5, RD(17) + RD(0)); JP_F_002ADE40(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x163140); SET32(5, RW(17) + 80); JP_F_002ADE40(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_00163144:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00163160(Ctx *c) { /* func_00163160 */
ENTER(0x163160);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(0); SET64(16, (s32)rd32(c, (RW(4) + 912))); if (t) goto L_001631B4; }
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 80);
SET64(6, RD(5) + RD(0));
SET32(7, RW(0) + 128);
SET64(31, 0x16318c); SET64(8, RD(0) + RD(0)); JP_F_002B42A0(c);
SET32(4, RW(16) + 80);
SET64(5, RD(0) + RD(0));
SET64(31, 0x16319c); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 80);
SET64(31, 0x1631ac); SET64(6, RD(5) + RD(0)); JP_F_002B4230(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_001631F0;
L_001631B4:;
SET32(4, RW(16) + 80);
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET32(7, RW(0) + 128);
SET64(31, 0x1631cc); SET32(8, RW(0) + 2); JP_F_002B42A0(c);
SET32(4, RW(16) + 80);
SET64(5, RD(0) + RD(0));
SET64(31, 0x1631dc); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 80);
SET64(31, 0x1631ec); SET64(6, RD(5) + RD(0)); JP_F_002B4230(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_001631F0:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00163200(Ctx *c) { /* func_00163200 */
ENTER(0x163200);
SET32(29, RW(29) + -64);
SET32(2, RW(0) + 128);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
wr8(c, (RW(29) + 63), (u8)RW(2));
SET32(5, RW(29) + 60);
wr8(c, (RW(29) + 60), (u8)RW(0));
wr8(c, (RW(29) + 61), (u8)RW(0));
SET64(31, 0x163234); wr8(c, (RW(29) + 62), (u8)RW(0)); JP_F_002AA5C0(c);
SET64(2, rd64(c, (RW(16) + 0)));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
wr64(c, (RW(17) + 64), RD(2));
SET64(2, rd64(c, (RW(16) + 8)));
wr64(c, (RW(17) + 72), RD(2));
SET64(31, 0x163254); wr32(c, (RW(17) + 176), RW(0)); JP_F_002AA560(c);
SET32(4, RW(17) + 80);
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET32(7, RW(0) + 128);
SET64(31, 0x16326c); SET32(8, RW(0) + 2); JP_F_002B42A0(c);
SET32(4, RW(17) + 80);
SET64(5, RD(0) + RD(0));
SET64(31, 0x16327c); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(5, RW(0) + 1);
SET32(4, RW(17) + 80);
SET64(31, 0x16328c); SET64(6, RD(5) + RD(0)); JP_F_002B4230(c);
SET32(4, RW(17) + 128);
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 7);
SET64(7, RD(0) + RD(0));
SET64(31, 0x1632a4); SET64(8, RD(0) + RD(0)); JP_F_002B42A0(c);
SET32(4, RW(17) + 128);
SET64(5, RD(0) + RD(0));
SET64(31, 0x1632b4); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(4, RW(17) + 128);
SET32(5, RW(0) + 1);
SET64(31, 0x1632c4); SET32(6, RW(0) + 2); JP_F_002B4230(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001632E0(Ctx *c) { /* func_001632E0 */
ENTER(0x1632e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1632f4); SET64(16, RD(4) + RD(0)); JP_F_002A4120(c);
SET32(4, RW(16) + 672);
SET64(31, 0x163300); SET32(5, RW(0) + 1); JP_F_0014B1B0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 1792);
SET32(2, RW(2) + 1808);
wr32(c, (RW(16) + 176), RW(3));
SET32(4, RW(16) + 784);
SET64(31, 0x163320); wr32(c, (RW(16) + 196), RW(2)); JP_F_0015DA20(c);
SET64(2, (s64)(s32)0x40490000);
wr32(c, (RW(16) + 912), RW(0));
SET64(2, RD(2) | 0xfdb);
wr32(c, (RW(16) + 784), RW(16));
c->f[3].u = RW(2);
SET64(2, (s64)(s32)0x490000);
c->f[2].u = rd32(c, (RW(2) + 26272));
c->f[2].f = fpu(F(3) * F(2));
SET64(2, (s64)(s32)0x43340000);
c->f[1].u = RW(2);
c->f[1].f = fpu_div(F(2), F(1));
SET64(2, (s64)(s32)0x40000000);
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(1), F(0));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 916), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00163380(Ctx *c) { /* func_00163380 */
ENTER(0x163380);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x163398); SET64(4, (s32)rd32(c, (RW(4) + 8))); JP_F_002ADDD0(c);
wr8(c, (RW(16) + 36), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(28) + -29932)));
SET64(31, 0x1633a8); SET64(5, RD(16) + RD(0)); JP_F_002A3280(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001633C0(Ctx *c) { /* func_001633C0 */
ENTER(0x1633c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1633e4); SET64(16, RD(5) + RD(0)); rt_call(c, t); }
SET64(5, RD(16) + RD(0));
SET64(31, 0x1633f0); SET64(4, RD(17) + RD(0)); JP_F_002A36D0(c);
SET64(3, (s32)rd32(c, (RW(17) + 44)));
SET32(2, RW(0) + 1);
SET32(4, RW(17) + 64);
wr8(c, (RW(3) + 324), (u8)RW(0));
SET64(31, 0x163408); wr8(c, (RW(17) + 36), (u8)RW(2)); JP_F_0014B040(c);
SET32(5, RW(17) + 64);
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 8))); goto L_0016341C; }
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET64(4, (s32)rd32(c, (RW(17) + 8)));
L_0016341C:;
SET64(31, 0x163424); SET64(6, (s32)rd32(c, (RW(4) + 16))); JP_F_002ADFE0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00163440(Ctx *c) { /* func_00163440 */
ENTER(0x163440);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x163454); SET64(16, RD(4) + RD(0)); JP_F_002A38C0(c);
SET32(4, RW(16) + 64);
SET64(31, 0x163460); SET32(5, RW(0) + 1); JP_F_0014B1B0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + 1344);
wr32(c, (RW(16) + 4), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00163480(Ctx *c) { /* func_00163480 */
ENTER(0x163480);
SET32(4, RW(4) + -192); { JP_F_001390A0(c); return; }
}

void JP_F_00163490(Ctx *c) { /* func_00163490 */
ENTER(0x163490);
SET32(4, RW(4) + -192); { JP_F_002A3C40(c); return; }
}

void JP_F_001634A0(Ctx *c) { /* func_001634A0 */
ENTER(0x1634a0);
SET32(4, RW(4) + -192); { JP_F_00162680(c); return; }
}

void JP_F_001634B0(Ctx *c) { /* func_001634B0 */
ENTER(0x1634b0);
SET32(4, RW(4) + -928); { JP_F_00162680(c); return; }
}

void JP_F_001634C0(Ctx *c) { /* func_001634C0 */
ENTER(0x1634c0);
c->f[2].u = rd32(c, (RW(4) + 0));
SET64(3, (s64)(s32)0x3c000000);
c->f[1].u = RW(3);
c->fcc = F(2) < F(1);
if (!c->fcc) { SET64(3, (s64)(s32)0x3f800000); goto L_00163500; }
c->f[0].u = rd32(c, (RW(4) + 4));
c->fcc = F(0) < F(1);
{ int t = !c->fcc;  if (t) goto L_001634FC; }
c->f[0].u = rd32(c, (RW(4) + 8));
c->fcc = F(0) < F(1);
{ int t = c->fcc;  if (t) goto L_00163528; }
L_001634FC:;
SET64(3, (s64)(s32)0x3f800000);
L_00163500:;
c->f[1].u = RW(3);
c->f[0].f = fpu(F(1) - F(2));
wr32(c, (RW(4) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(4) + 4), c->f[0].u);
c->f[0].u = rd32(c, (RW(4) + 8));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(4) + 8), c->f[0].u);
L_00163528:;
 return;
}

void JP_F_00163530(Ctx *c) { /* func_00163530 */
ENTER(0x163530);
SET64(3, (s64)(s32)0x3de90000);
SET64(5, RD(3) | 0x78d5);
SET64(3, (s64)(s32)0x3e990000);
SET64(3, RD(3) | 0x1687);
c->f[2].u = RW(3);
SET64(3, (s64)(s32)0x3f160000);
SET64(3, RD(3) | 0x45a2);
c->f[1].u = rd32(c, (RW(4) + 4));
c->f[0].u = RW(3);
c->f[3].u = rd32(c, (RW(4) + 0));
c->facc = fpu(F(0) * F(1));
c->f[5].u = rd32(c, (RW(4) + 8));
c->f[4].u = RW(5);
c->facc = fpu(c->facc + F(2) * F(3));
c->f[0].f = fpu(c->facc + F(4) * F(5));
wr32(c, (RW(4) + 0), c->f[0].u);
wr32(c, (RW(4) + 4), c->f[0].u);
wr32(c, (RW(4) + 8), c->f[0].u); return;
}

void JP_F_00163580(Ctx *c) { /* func_00163580 */
ENTER(0x163580);
c->f[1].u = rd32(c, (RW(5) + 12));
c->f[0].u = rd32(c, (RW(6) + 12));
c->f[5].u = RW(0);
c->facc = fpu(F(5) + F(1));
c->f[0].f = fpu(F(0) - F(1));
c->f[6].f = fpu(c->facc + F(12) * F(0));
c->f[2].u = rd32(c, (RW(5) + 8));
c->f[0].u = rd32(c, (RW(6) + 8));
c->f[3].u = rd32(c, (RW(5) + 4));
c->facc = fpu(F(5) + F(2));
c->f[0].f = fpu(F(0) - F(2));
c->f[4].f = fpu(c->facc + F(12) * F(0));
c->f[2].u = rd32(c, (RW(6) + 4));
c->f[1].u = rd32(c, (RW(5) + 0));
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[2].f = fpu(F(2) - F(3));
c->facc = fpu(F(5) + F(3));
c->f[2].f = fpu(c->facc + F(12) * F(2));
c->f[0].f = fpu(F(0) - F(1));
c->facc = fpu(F(5) + F(1));
c->f[0].f = fpu(c->facc + F(12) * F(0));
wr32(c, (RW(4) + 0), c->f[0].u);
wr32(c, (RW(4) + 4), c->f[2].u);
wr32(c, (RW(4) + 8), c->f[4].u);
wr32(c, (RW(4) + 12), c->f[6].u); return;
}

void JP_F_001635F0(Ctx *c) { /* func_001635F0 */
ENTER(0x1635f0);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(3, RW(3) >> 24);
SET64(3, RD(3) & 0xff);
if (RSD(3) < 0) { SET32(6, RW(3) >> 1); goto L_00163610; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00163628;
L_00163610:;
SET64(3, RD(3) & 0x1);
SET64(6, RD(6) | RD(3));
c->f[0].u = RW(6);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00163628:;
SET64(3, (s64)(s32)0x43000000);
c->f[0].u = RW(3);
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(4) + 12), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(3, RW(3) >> 16);
SET64(3, RD(3) & 0xff);
if (RSD(3) < 0) { SET32(6, RW(3) >> 1); goto L_0016365C; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00163674;
L_0016365C:;
SET64(3, RD(3) & 0x1);
SET64(6, RD(6) | RD(3));
c->f[0].u = RW(6);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00163674:;
SET64(3, (s64)(s32)0x437f0000);
c->f[0].u = RW(3);
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(4) + 8), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(3, RW(3) >> 8);
SET64(3, RD(3) & 0xff);
if (RSD(3) < 0) { SET32(6, RW(3) >> 1); goto L_001636A8; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001636C0;
L_001636A8:;
SET64(3, RD(3) & 0x1);
SET64(6, RD(6) | RD(3));
c->f[0].u = RW(6);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001636C0:;
SET64(3, (s64)(s32)0x437f0000);
c->f[0].u = RW(3);
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(4) + 4), c->f[0].u);
SET64(3, rd8(c, (RW(5) + 0)));
if (RSD(3) < 0) { SET32(5, RW(3) >> 1); goto L_001636F0; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00163708;
L_001636F0:;
SET64(3, RD(3) & 0x1);
SET64(5, RD(5) | RD(3));
c->f[0].u = RW(5);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00163708:;
SET64(3, (s64)(s32)0x437f0000);
c->f[0].u = RW(3);
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(4) + 0), c->f[0].u); return;
}

void JP_F_00163730(Ctx *c) { /* func_00163730 */
ENTER(0x163730);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x43000000);
wr64(c, (RW(29) + 64), RD(31));
c->f[0].u = RW(2);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[1].u = rd32(c, (RW(4) + 12));
SET64(31, 0x163760); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_00163788; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 8)); goto L_001637A0;
L_00163788:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
c->f[1].u = rd32(c, (RW(19) + 8));
L_001637A0:;
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
SET64(3, RD(3) & 0xff);
SET32(18, RW(3) << 24);
SET64(31, 0x1637b8); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_001637E0; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 4)); goto L_001637F8;
L_001637E0:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
c->f[1].u = rd32(c, (RW(19) + 4));
L_001637F8:;
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
SET64(3, RD(3) & 0xff);
SET32(17, RW(3) << 16);
SET64(31, 0x163810); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_00163838; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 0)); goto L_00163850;
L_00163838:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
c->f[1].u = rd32(c, (RW(19) + 0));
L_00163850:;
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
SET64(3, RD(3) & 0xff);
SET32(16, RW(3) << 8);
SET64(31, 0x163868); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_00163890; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(2, RD(3) & 0xff); goto L_001638A8;
L_00163890:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(2, RD(3) & 0xff);
L_001638A8:;
SET64(31, rd64(c, (RW(29) + 64)));
SET64(2, RD(2) | RD(16));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(2, RD(17) | RD(2));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(18) | RD(2));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001638D0(Ctx *c) { /* func_001638D0 */
ENTER(0x1638d0);
wr32(c, (RW(4) + 12), c->f[12].u); return;
}

void JP_F_001638E0(Ctx *c) { /* func_001638E0 */
ENTER(0x1638e0);
wr32(c, (RW(4) + 8), c->f[12].u); return;
}

void JP_F_001638F0(Ctx *c) { /* func_001638F0 */
ENTER(0x1638f0);
wr32(c, (RW(4) + 4), c->f[12].u); return;
}

void JP_F_00163900(Ctx *c) { /* func_00163900 */
ENTER(0x163900);
wr32(c, (RW(4) + 0), c->f[12].u); return;
}

void JP_F_00163910(Ctx *c) { /* func_00163910 */
ENTER(0x163910);
SET64(2, (s64)(s32)0x4a0000);
SET32(2, RW(2) + -21048); return;
}

void JP_F_00163920(Ctx *c) { /* func_00163920 */
ENTER(0x163920);
 return;
}

void JP_F_00163930(Ctx *c) { /* func_00163930 */
ENTER(0x163930);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 400)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_00163960; }
SET64(31, 0x163954);  JP_F_00142090(c);
SET64(31, 0x16395c); SET64(4, (s32)rd32(c, (RW(16) + 400))); JP_F_00170CF0(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_00163960:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00163970(Ctx *c) { /* func_00163970 */
ENTER(0x163970);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 328)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00163A58; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_001639AC:;
SET64(3, (s32)rd32(c, (RW(21) + 332)));
SET32(3, RW(3) + RW(18));
SET64(3, rd16(c, (RW(3) + 98)));
SET64(3, RD(3) & 0x2);
{ int t = RD(3) == RD(0);  if (t) goto L_00163A40; }
SET64(2, (s32)rd32(c, (RW(21) + 336)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x1639e0); SET64(5, RD(20) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(21) + 332)));
SET64(3, RD(0) | 0xffff);
SET32(4, RW(4) + RW(18));
SET64(16, rd16(c, (RW(4) + 96)));
{ int t = RD(16) == RD(3);  if (t) goto L_00163A40; }
L_001639F8:;
SET64(2, (s32)rd32(c, (RW(21) + 336)));
SET32(3, RW(16) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x163a18); SET64(5, RD(20) + RD(0)); rt_call(c, t); }
SET32(3, RW(16) << 3);
SET64(4, (s32)rd32(c, (RW(21) + 332)));
SET32(5, RW(3) - RW(16));
SET32(5, RW(5) << 4);
SET64(3, RD(0) | 0xffff);
SET32(4, RW(4) + RW(5));
SET64(16, rd16(c, (RW(4) + 96)));
{ int t = RD(16) != RD(3);  if (t) { POLL(); goto L_001639F8; } }
L_00163A40:;
SET64(3, rd16(c, (RW(21) + 328)));
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 112);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001639AC; } }
L_00163A58:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_00163A80(Ctx *c) { /* func_00163A80 */
ENTER(0x163a80);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET64(2, (s8)rd8(c, (RW(28) + -30312)));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00163AF0; }
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
SET64(31, 0x163ae8); c->f[19].u = c->f[13].u; JP_F_002AF0D0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30312), (u8)RW(2));
L_00163AF0:;
SET64(31, 0x163af8); SET32(4, RW(29) + 96); JP_F_002AF080(c);
SET64(6, (s64)(s32)0x420000);
SET32(4, RW(16) + 64);
SET32(6, RW(6) + -17024);
rd128(c, (RW(6) + 0) & ~15u, &c->r[5]);
rd128(c, (RW(6) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(6) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[5]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
rd128(c, (RW(6) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 80) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 96) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET64(31, 0x163b48); wr128(c, (RW(16) + 112) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_00163B60(Ctx *c) { /* func_00163B60 */
ENTER(0x163b60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00163C20; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1856);
SET32(3, RW(3) + 1864);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 1876);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 36), RW(2));
SET32(3, RW(3) + 1936);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 208), RW(3));
SET32(2, RW(2) + 1960);
wr32(c, (RW(17) + 240), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x163bc8);  rt_call(c, t); }
SET32(4, RW(17) + 224);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 64); goto L_00163BF4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 240), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x163bf0);  rt_call(c, t); }
SET32(4, RW(17) + 64);
L_00163BF4:;
SET64(31, 0x163bfc); SET64(5, RD(0) + RD(0)); JP_F_00243920(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x163c08); SET64(5, RD(0) + RD(0)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00163C24; }
SET64(31, 0x163c20); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00163C20:;
SET64(2, RD(17) + RD(0));
L_00163C24:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00163C40(Ctx *c) { /* func_00163C40 */
ENTER(0x163c40);
SET32(29, RW(29) + -160);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
SET64(30, RD(7) + RD(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(6) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr8(c, (RW(4) + 271), (u8)RW(2));
SET64(16, RD(0) + RD(0));
SET64(2, rd16(c, (RW(5) + 294)));
wr16(c, (RW(4) + 294), (u16)RW(2));
c->f[0].u = rd32(c, (RW(5) + 276));
wr32(c, (RW(4) + 276), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 280));
wr32(c, (RW(4) + 280), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 284));
wr32(c, (RW(4) + 284), c->f[0].u);
SET64(2, rd16(c, (RW(5) + 288)));
wr16(c, (RW(4) + 288), (u16)RW(2));
SET64(2, rd16(c, (RW(5) + 290)));
wr16(c, (RW(4) + 290), (u16)RW(2));
SET64(2, rd16(c, (RW(5) + 264)));
wr16(c, (RW(4) + 264), (u16)RW(2));
SET64(2, rd16(c, (RW(5) + 266)));
wr16(c, (RW(4) + 266), (u16)RW(2));
wr32(c, (RW(4) + 248), RW(0));
wr32(c, (RW(4) + 244), RW(0));
SET64(2, (s32)rd32(c, (RW(5) + 320)));
wr32(c, (RW(4) + 320), RW(2));
SET64(2, rd16(c, (RW(5) + 364)));
wr16(c, (RW(4) + 364), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 368)));
wr32(c, (RW(4) + 368), RW(2));
SET64(2, rd16(c, (RW(5) + 372)));
wr16(c, (RW(4) + 372), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 376)));
wr32(c, (RW(4) + 376), RW(2));
SET64(2, rd8(c, (RW(5) + 396)));
wr8(c, (RW(4) + 396), (u8)RW(2));
SET64(2, rd8(c, (RW(5) + 397)));
wr8(c, (RW(4) + 397), (u8)RW(2));
wr32(c, (RW(4) + 304), RW(0));
SET64(2, rd16(c, (RW(5) + 292)));
wr16(c, (RW(4) + 292), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 308)));
wr32(c, (RW(4) + 308), RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 312)));
wr32(c, (RW(4) + 312), RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 316)));
wr32(c, (RW(4) + 316), RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 408)));
wr32(c, (RW(4) + 408), RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 324)));
wr32(c, (RW(4) + 324), RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 296)));
wr32(c, (RW(4) + 296), RW(2));
SET64(3, rd16(c, (RW(4) + 288)));
SET64(2, rd16(c, (RW(4) + 290)));
mul_s(c, 0, 19, RSW(3), RSW(2));
SET32(2, RW(19) << 3);
SET32(3, RW(2) - RW(19));
SET32(2, RW(3) << 2);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 4);
SET64(31, 0x163d6c); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_00163D9C; }
SET64(5, (s64)(s32)0x160000);
SET64(6, (s64)(s32)0x160000);
SET64(8, RD(19) + RD(0));
SET32(16, RW(0) + 1);
SET64(4, RD(20) + RD(0));
SET32(5, RW(5) + 17808);
SET32(6, RW(6) + 17584);
SET64(31, 0x163d98); SET32(7, RW(0) + 336); JP_F_00102580(c);
SET64(20, RD(2) + RD(0));
L_00163D9C:;
wr32(c, (RW(18) + 300), RW(20));
SET64(2, rd16(c, (RW(18) + 290)));
{ int t = RSD(2) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00163EC0; }
SET64(3, rd16(c, (RW(18) + 288)));
L_00163DB0:;
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00163EA8; }
SET64(16, RD(20) & 0xffff);
L_00163DC0:;
SET64(2, RD(3) & 0xffff);
mul_s(c, 0, 4, RSW(16), RSW(2));
SET64(3, (s32)rd32(c, (RW(18) + 296)));
SET64(2, RD(19) & 0xffff);
SET32(5, RW(2) + RW(4));
SET32(4, RW(5) << 2);
SET32(3, RW(3) + RW(4));
SET64(3, rd16(c, (RW(3) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_00163E40; }
SET32(3, RW(5) << 3);
SET64(4, (s32)rd32(c, (RW(18) + 300)));
SET32(7, RW(3) - RW(5));
SET64(5, rd16(c, (RW(17) + 288)));
SET32(6, RW(7) << 2);
SET32(7, RW(6) - RW(7));
SET64(3, (s32)rd32(c, (RW(17) + 300)));
SET32(7, RW(7) << 4);
SET64(6, (s32)rd32(c, (RW(18) + 324)));
mul_s(c, 0, 5, RSW(16), RSW(5));
SET32(4, RW(4) + RW(7));
SET32(5, RW(2) + RW(5));
SET32(2, RW(5) << 3);
SET32(5, RW(2) - RW(5));
SET32(2, RW(5) << 2);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 4);
SET64(31, 0x163e34); SET32(5, RW(3) + RW(2)); JP_F_0016C630(c);
 goto L_00163E90;
L_00163E40:;
SET32(3, RW(5) << 3);
SET32(6, RW(3) - RW(5));
SET64(4, (s32)rd32(c, (RW(18) + 300)));
SET64(5, rd16(c, (RW(17) + 288)));
SET32(3, RW(6) << 2);
SET32(6, RW(3) - RW(6));
SET32(7, RW(6) << 4);
SET64(3, (s32)rd32(c, (RW(17) + 300)));
mul_s(c, 0, 5, RSW(16), RSW(5));
SET64(6, RD(0) + RD(0));
SET32(4, RW(4) + RW(7));
SET32(5, RW(2) + RW(5));
SET32(2, RW(5) << 3);
SET32(5, RW(2) - RW(5));
SET32(2, RW(5) << 2);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 4);
SET64(31, 0x163e8c); SET32(5, RW(3) + RW(2)); JP_F_0016C630(c);
L_00163E90:;
SET64(3, rd16(c, (RW(18) + 288)));
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00163DC0; } }
L_00163EA8:;
SET64(2, rd16(c, (RW(18) + 290)));
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(18) + 288))); { POLL(); goto L_00163DB0; } }
L_00163EC0:;
SET64(2, (s32)rd32(c, (RW(17) + 336)));
if (RD(2) == RD(0)) { SET64(2, rd16(c, (RW(17) + 328))); goto L_0016401C; }
SET64(2, rd16(c, (RW(17) + 328)));
wr16(c, (RW(18) + 328), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 332)));
wr32(c, (RW(18) + 332), RW(2));
SET64(2, rd16(c, (RW(18) + 328)));
SET64(31, 0x163ee8); SET32(4, RW(2) << 2); JP_F_00100530(c);
wr32(c, (RW(18) + 336), RW(2));
SET64(2, rd16(c, (RW(18) + 328)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_0016402C; }
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_00163F00:;
SET64(31, 0x163f08); SET32(4, RW(0) + 2272); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_00163F90; }
SET32(4, RW(21) + 2236);
SET32(22, RW(0) + 1);
SET64(31, 0x163f20); wr32(c, (RW(21) + 256), RW(4)); JP_F_00141C80(c);
SET64(4, RD(21) + RD(0));
SET64(31, 0x163f2c); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET64(31, 0x163f34); SET32(4, RW(21) + 288); JP_F_00243A30(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15376);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(21) + 276), RW(2));
SET32(6, RW(6) + 15500);
SET64(5, (s32)rd32(c, (RW(21) + 256)));
SET32(3, RW(3) + 15448);
SET32(2, RW(21) + 2236);
SET32(4, RW(21) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(21) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(21) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x163f74); wr32(c, (RW(3) + 20), RW(2)); JP_F_00161AA0(c);
SET64(31, 0x163f7c); SET32(4, RW(21) + 1040); JP_F_00161AA0(c);
SET64(31, 0x163f84); SET32(4, RW(21) + 1632); JP_F_00161AA0(c);
wr32(c, (RW(21) + 2224), RW(0));
wr32(c, (RW(21) + 2228), RW(0));
L_00163F90:;
SET64(2, (s32)rd32(c, (RW(18) + 336)));
SET32(2, RW(2) + RW(20));
wr32(c, (RW(2) + 0), RW(21));
SET64(3, (s32)rd32(c, (RW(18) + 336)));
SET64(2, (s32)rd32(c, (RW(17) + 336)));
SET32(3, RW(3) + RW(20));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(20));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x163fc0); SET64(5, (s32)rd32(c, (RW(2) + 0))); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 332)));
SET64(2, (s32)rd32(c, (RW(18) + 336)));
SET32(5, RW(3) + RW(19));
SET32(3, RW(2) + RW(20));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
SET32(4, RW(3) + 288);
wr128(c, (RW(3) + 288) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 320) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 48) & ~15u, &c->r[2]);
SET64(31, 0x163ffc); wr128(c, (RW(3) + 336) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(2, rd16(c, (RW(18) + 328)));
SET32(16, RW(16) + 1);
SET32(20, RW(20) + 4);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 112); if (t) { POLL(); goto L_00163F00; } }
SET64(2, (s32)rd32(c, (RW(17) + 348))); goto L_00164030;
L_0016401C:;
wr16(c, (RW(18) + 328), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 332)));
wr32(c, (RW(18) + 332), RW(2));
wr32(c, (RW(18) + 336), RW(0));
L_0016402C:;
SET64(2, (s32)rd32(c, (RW(17) + 348)));
L_00164030:;
if (RD(2) == RD(0)) { SET64(2, rd16(c, (RW(17) + 340))); goto L_00164184; }
SET64(2, rd16(c, (RW(17) + 340)));
wr16(c, (RW(18) + 340), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 344)));
wr32(c, (RW(18) + 344), RW(2));
SET64(2, rd16(c, (RW(18) + 340)));
SET64(31, 0x164054); SET32(4, RW(2) << 2); JP_F_00100530(c);
wr32(c, (RW(18) + 348), RW(2));
SET64(2, rd16(c, (RW(18) + 340)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00164194; }
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_0016406C:;
SET64(31, 0x164074); SET32(4, RW(0) + 2272); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_001640F8; }
SET32(4, RW(21) + 2236);
SET32(22, RW(0) + 1);
SET64(31, 0x16408c); wr32(c, (RW(21) + 256), RW(4)); JP_F_00141C80(c);
SET64(4, RD(21) + RD(0));
SET64(31, 0x164098); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET64(31, 0x1640a0); SET32(4, RW(21) + 288); JP_F_00243A30(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15376);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(21) + 276), RW(2));
SET32(6, RW(6) + 15500);
SET64(5, (s32)rd32(c, (RW(21) + 256)));
SET32(3, RW(3) + 15448);
SET32(2, RW(21) + 2236);
SET32(4, RW(21) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(21) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(21) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x1640e0); wr32(c, (RW(3) + 20), RW(2)); JP_F_00161AA0(c);
SET64(31, 0x1640e8); SET32(4, RW(21) + 1040); JP_F_00161AA0(c);
SET64(31, 0x1640f0); SET32(4, RW(21) + 1632); JP_F_00161AA0(c);
wr32(c, (RW(21) + 2224), RW(0));
wr32(c, (RW(21) + 2228), RW(0));
L_001640F8:;
SET64(2, (s32)rd32(c, (RW(18) + 348)));
SET32(2, RW(2) + RW(20));
wr32(c, (RW(2) + 0), RW(21));
SET64(3, (s32)rd32(c, (RW(18) + 348)));
SET64(2, (s32)rd32(c, (RW(17) + 348)));
SET32(3, RW(3) + RW(20));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(20));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x164128); SET64(5, (s32)rd32(c, (RW(2) + 0))); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 344)));
SET64(2, (s32)rd32(c, (RW(18) + 348)));
SET32(5, RW(3) + RW(19));
SET32(3, RW(2) + RW(20));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
SET32(4, RW(3) + 288);
wr128(c, (RW(3) + 288) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 320) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 48) & ~15u, &c->r[2]);
SET64(31, 0x164164); wr128(c, (RW(3) + 336) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(2, rd16(c, (RW(18) + 340)));
SET32(16, RW(16) + 1);
SET32(20, RW(20) + 4);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 112); if (t) { POLL(); goto L_0016406C; } }
SET64(2, rd16(c, (RW(17) + 352))); goto L_00164198;
L_00164184:;
wr16(c, (RW(18) + 340), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 344)));
wr32(c, (RW(18) + 344), RW(2));
wr32(c, (RW(18) + 348), RW(0));
L_00164194:;
SET64(2, rd16(c, (RW(17) + 352)));
L_00164198:;
SET64(4, RD(18) + RD(0));
wr16(c, (RW(18) + 352), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 356)));
SET64(31, 0x1641ac); wr32(c, (RW(18) + 356), RW(2)); JP_F_00165790(c);
SET64(2, (s32)rd32(c, (RW(17) + 380)));
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 380), RW(0)); goto L_00164200; }
{ int t = RD(23) == RD(0);  if (t) goto L_001641FC; }
SET64(31, 0x1641c8); SET32(4, RW(0) + 768); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001641DC; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x1641dc); SET32(5, RW(0) + 1); JP_F_001518B0(c);
L_001641DC:;
wr32(c, (RW(18) + 380), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 12)));
SET64(5, (s32)rd32(c, (RW(17) + 380)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1641f4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 384))); goto L_00164204;
L_001641FC:;
wr32(c, (RW(18) + 380), RW(0));
L_00164200:;
SET64(2, (s32)rd32(c, (RW(17) + 384)));
L_00164204:;
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 384), RW(0)); goto L_001642C4; }
{ int t = RD(30) == RD(0);  if (t) goto L_001642C0; }
SET64(31, 0x16421c); SET32(4, RW(0) + 2272); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001642A0; }
SET32(4, RW(19) + 2236);
SET32(16, RW(0) + 1);
SET64(31, 0x164234); wr32(c, (RW(19) + 256), RW(4)); JP_F_00141C80(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x164240); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET64(31, 0x164248); SET32(4, RW(19) + 288); JP_F_00243A30(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15376);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 276), RW(2));
SET32(6, RW(6) + 15500);
SET64(5, (s32)rd32(c, (RW(19) + 256)));
SET32(3, RW(3) + 15448);
SET32(2, RW(19) + 2236);
SET32(4, RW(19) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(19) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(19) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x164288); wr32(c, (RW(3) + 20), RW(2)); JP_F_00161AA0(c);
SET64(31, 0x164290); SET32(4, RW(19) + 1040); JP_F_00161AA0(c);
SET64(31, 0x164298); SET32(4, RW(19) + 1632); JP_F_00161AA0(c);
wr32(c, (RW(19) + 2224), RW(0));
wr32(c, (RW(19) + 2228), RW(0));
L_001642A0:;
wr32(c, (RW(18) + 384), RW(19));
SET64(25, (s32)rd32(c, (RW(19) + 276)));
SET64(5, (s32)rd32(c, (RW(17) + 384)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x1642b8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 388))); goto L_001642C8;
L_001642C0:;
wr32(c, (RW(18) + 384), RW(0));
L_001642C4:;
SET64(2, (s32)rd32(c, (RW(17) + 388)));
L_001642C8:;
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 388), RW(0)); goto L_001643C0; }
SET64(31, 0x1642d8); SET32(4, RW(0) + 768); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001643A4; }
SET32(4, RW(19) + 24);
SET32(3, RW(19) + 48);
wr32(c, (RW(19) + 304), RW(4));
SET32(2, RW(19) + 336);
wr32(c, (RW(19) + 0), RW(3));
SET32(16, RW(0) + 1);
SET64(31, 0x164300); wr32(c, (RW(19) + 4), RW(2)); JP_F_00141C80(c);
SET32(4, RW(19) + 48);
SET64(31, 0x16430c); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET32(4, RW(19) + 336);
SET64(31, 0x164318); SET64(5, RD(16) + RD(0)); JP_F_002A5500(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x164324); SET64(5, RD(0) + RD(0)); JP_F_001518B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 3072);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 12), RW(2));
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(19) + 0)));
SET32(9, RW(9) + 3168);
SET32(8, RW(8) + 3132);
SET32(7, RW(7) + 3240);
SET32(5, RW(19) + 24);
SET32(4, RW(19) + 48);
wr32(c, (RW(6) + 276), RW(9));
SET32(3, RW(19) + 336);
SET64(6, (s32)rd32(c, (RW(19) + 0)));
SET64(2, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
wr32(c, (RW(6) + 16), RW(8));
SET64(6, (s32)rd32(c, (RW(19) + 4)));
wr32(c, (RW(6) + 144), RW(7));
SET64(6, (s32)rd32(c, (RW(19) + 0)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
SET64(5, (s32)rd32(c, (RW(19) + 0)));
SET32(4, RW(4) - RW(5));
wr32(c, (RW(5) + 280), RW(4));
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 416), RW(3));
wr32(c, (RW(19) + 16), RW(0));
wr8(c, (RW(19) + 20), (u8)RW(2));
L_001643A4:;
wr32(c, (RW(18) + 388), RW(19));
wr8(c, (RW(19) + 20), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 388)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1643c0); SET64(5, (s32)rd32(c, (RW(17) + 388))); rt_call(c, t); }
L_001643C0:;
SET64(2, (s32)rd32(c, (RW(17) + 392)));
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 392), RW(0)); goto L_00164470; }
SET64(31, 0x1643d4); SET32(4, RW(0) + 2272); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00164458; }
SET32(4, RW(19) + 2236);
SET32(16, RW(0) + 1);
SET64(31, 0x1643ec); wr32(c, (RW(19) + 256), RW(4)); JP_F_00141C80(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x1643f8); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET64(31, 0x164400); SET32(4, RW(19) + 288); JP_F_00243A30(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15376);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 276), RW(2));
SET32(6, RW(6) + 15500);
SET64(5, (s32)rd32(c, (RW(19) + 256)));
SET32(3, RW(3) + 15448);
SET32(2, RW(19) + 2236);
SET32(4, RW(19) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(19) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(19) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x164440); wr32(c, (RW(3) + 20), RW(2)); JP_F_00161AA0(c);
SET64(31, 0x164448); SET32(4, RW(19) + 1040); JP_F_00161AA0(c);
SET64(31, 0x164450); SET32(4, RW(19) + 1632); JP_F_00161AA0(c);
wr32(c, (RW(19) + 2224), RW(0));
wr32(c, (RW(19) + 2228), RW(0));
L_00164458:;
wr32(c, (RW(18) + 392), RW(19));
SET64(25, (s32)rd32(c, (RW(19) + 276)));
SET64(5, (s32)rd32(c, (RW(17) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x164470); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
L_00164470:;
SET64(5, rd16(c, (RW(18) + 294)));
SET64(31, 0x16447c); SET64(4, RD(18) + RD(0)); JP_F_0016A3B0(c);
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

void JP_F_001644B0(Ctx *c) { /* func_001644B0 */
ENTER(0x1644b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00164578; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 3280);
SET32(3, RW(3) + 3316);
wr32(c, (RW(17) + 16), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 176), RW(3));
SET32(2, RW(2) + 3388);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 264), RW(2));
SET32(3, RW(3) + 3396);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 228), RW(3));
SET32(2, RW(2) + 3408);
wr32(c, (RW(17) + 244), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x164518);  rt_call(c, t); }
SET32(4, RW(17) + 208);
SET64(31, 0x164524); SET64(5, RD(0) + RD(0)); JP_F_00139F30(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_00164564; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 3504);
SET32(2, RW(2) + 3540);
wr32(c, (RW(17) + 16), RW(3));
wr32(c, (RW(17) + 176), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x164554); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x164560); SET64(5, RD(0) + RD(0)); JP_F_00162570(c);
SET64(2, RD(16) << 48);
L_00164564:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016457C; }
SET64(31, 0x164578); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00164578:;
SET64(2, RD(17) + RD(0));
L_0016457C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00164590(Ctx *c) { /* func_00164590 */
ENTER(0x164590);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1645a4); SET64(16, RD(4) + RD(0)); JP_F_00162610(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 3504);
SET32(2, RW(2) + 3540);
wr32(c, (RW(16) + 16), RW(3));
SET32(4, RW(16) + 208);
wr32(c, (RW(16) + 176), RW(2));
SET64(31, 0x1645c8); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 3280);
SET32(3, RW(3) + 3316);
wr32(c, (RW(16) + 16), RW(2));
SET64(4, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 176), RW(3));
SET32(2, RW(2) + 3388);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 264), RW(2));
SET32(3, RW(3) + 3396);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 228), RW(3));
SET32(2, RW(2) + 3408);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 244), RW(2));
wr32(c, (RW(16) + 268), RW(0));
SET64(2, RD(16) + RD(0));
wr16(c, (RW(16) + 272), (u16)RW(0));
wr16(c, (RW(16) + 274), (u16)RW(0));
wr16(c, (RW(16) + 276), (u16)RW(0));
wr32(c, (RW(16) + 280), RW(0));
wr16(c, (RW(16) + 284), (u16)RW(0));
wr32(c, (RW(16) + 288), RW(0));
wr16(c, (RW(16) + 292), (u16)RW(0));
wr32(c, (RW(16) + 304), RW(0));
wr32(c, (RW(16) + 308), RW(0));
wr32(c, (RW(16) + 312), RW(0));
wr32(c, (RW(16) + 316), RW(4));
wr32(c, (RW(16) + 320), RW(0));
wr8(c, (RW(16) + 324), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00164660(Ctx *c) { /* func_00164660 */
ENTER(0x164660);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001646C8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 3504);
SET32(2, RW(2) + 3540);
wr32(c, (RW(17) + 16), RW(3));
wr32(c, (RW(17) + 176), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1646a4);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x1646b0); SET64(5, RD(0) + RD(0)); JP_F_00162570(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001646CC; }
SET64(31, 0x1646c8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001646C8:;
SET64(2, RD(17) + RD(0));
L_001646CC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001646E0(Ctx *c) { /* func_001646E0 */
ENTER(0x1646e0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(6, rd16(c, (RW(4) + 266)));
SET64(5, rd16(c, (RW(4) + 288)));
SET64(2, rd8(c, (RW(4) + 397)));
SET64(3, rd16(c, (RW(4) + 264)));
mul_s(c, 0, 5, RSW(6), RSW(5));
SET64(2, RD(0) < RD(2));
SET64(7, RD(2) ^ 0x1);
SET64(2, (s32)rd32(c, (RW(4) + 300)));
SET32(5, RW(3) + RW(5));
SET32(3, RW(5) << 3);
SET32(5, RW(3) - RW(5));
SET32(3, RW(5) << 2);
SET32(3, RW(3) - RW(5));
SET32(3, RW(3) << 4);
SET32(2, RW(2) + RW(3));
wr8(c, (RW(2) + 324), (u8)RW(7));
SET64(6, rd16(c, (RW(4) + 266)));
SET64(5, rd16(c, (RW(4) + 288)));
SET64(3, rd16(c, (RW(4) + 264)));
SET64(2, (s32)rd32(c, (RW(4) + 296)));
mul_s(c, 1, 4, RSW(6), RSW(5));
SET32(4, RW(3) + RW(4));
SET32(3, RW(4) << 2);
SET32(2, RW(2) + RW(3));
SET64(7, rd16(c, (RW(2) + 0)));
{ int t = RD(7) == RD(0); SET64(6, rd16(c, (RW(2) + 2))); if (t) goto L_0016479C; }
SET32(3, RW(4) << 3);
SET64(2, (s32)rd32(c, (RW(19) + 300)));
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 196)));
{ u32 t = RW(25); SET64(31, 0x164794); SET64(5, (s32)rd32(c, (RW(19) + 324))); rt_call(c, t); }
SET64(6, rd16(c, (RW(19) + 266))); goto L_001647D4;
L_0016479C:;
SET32(3, RW(4) << 3);
SET64(2, (s32)rd32(c, (RW(19) + 300)));
SET32(4, RW(3) - RW(4));
SET64(5, RD(0) + RD(0));
SET32(3, RW(4) << 2);
SET64(6, RD(0) + RD(0));
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 196)));
{ u32 t = RW(25); SET64(31, 0x1647d0); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(6, rd16(c, (RW(19) + 266)));
L_001647D4:;
SET32(2, RW(0) + 3);
SET64(3, rd16(c, (RW(19) + 288)));
SET64(5, rd16(c, (RW(19) + 264)));
SET64(4, (s32)rd32(c, (RW(19) + 300)));
mul_s(c, 0, 6, RSW(6), RSW(3));
SET64(7, rd16(c, (RW(19) + 292)));
SET32(6, RW(5) + RW(6));
SET64(3, (s32)rd32(c, (RW(19) + 312)));
SET32(5, RW(6) << 3);
SET32(6, RW(5) - RW(6));
SET32(5, RW(6) << 2);
SET32(5, RW(5) - RW(6));
SET32(5, RW(5) << 4);
SET32(18, RW(4) + RW(5));
wr32(c, (RW(18) + 288), RW(3));
wr16(c, (RW(18) + 292), (u16)RW(7));
SET64(3, rd16(c, (RW(18) + 276)));
{ int t = RD(3) != RD(2);  if (t) goto L_00164860; }
SET64(2, rd16(c, (RW(18) + 292)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00164860; }
SET64(16, RD(0) + RD(0));
L_00164830:;
SET64(2, (s32)rd32(c, (RW(18) + 288)));
SET64(6, RD(17) & 0xffff);
SET32(2, RW(2) + RW(16));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x164848); SET64(4, RD(18) + RD(0)); JP_F_00162110(c);
SET64(2, rd16(c, (RW(18) + 292)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00164830; } }
L_00164860:;
SET64(2, (s64)(s32)0x3f000000);
c->f[4].u = rd32(c, (RW(19) + 276));
c->f[0].u = RW(2);
SET64(2, rd16(c, (RW(19) + 266)));
{ int t = RSD(2) < 0; c->f[3].f = fpu(F(0) * F(4)); if (t) goto L_00164884; }
c->f[0].u = RW(2);
c->f[2].f = (f32)(s32)c->f[0].u; goto L_001648A0;
L_00164884:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[2].f = fpu(F(2) + F(2));
L_001648A0:;
c->f[1].u = rd32(c, (RW(19) + 284));
SET64(2, rd16(c, (RW(19) + 264)));
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(2) * F(4));
{ int t = RSD(2) < 0; c->f[1].f = fpu(F(3) + F(0)); if (t) goto L_001648CC; }
c->f[0].u = RW(2);
c->f[2].f = (f32)(s32)c->f[0].u; goto L_001648E8;
L_001648CC:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[2].f = fpu(F(2) + F(2));
L_001648E8:;
wr32(c, (RW(29) + 88), c->f[1].u);
SET64(5, rd16(c, (RW(19) + 266)));
SET64(4, rd16(c, (RW(19) + 288)));
c->f[1].u = rd32(c, (RW(19) + 280));
c->f[0].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 92), RW(2));
c->facc = fpu(F(0) + F(1));
SET64(3, rd16(c, (RW(19) + 264)));
mul_s(c, 0, 4, RSW(5), RSW(4));
wr32(c, (RW(29) + 84), RW(0));
c->f[0].f = fpu(c->facc + F(2) * F(4));
SET64(2, (s32)rd32(c, (RW(19) + 300)));
c->f[0].f = fpu(F(3) + F(0));
SET32(4, RW(3) + RW(4));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
wr32(c, (RW(29) + 80), c->f[0].u);
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
rd128(c, (RW(29) + 80) & ~15u, &c->r[5]);
SET32(3, RW(3) << 4);
SET32(2, RW(2) + RW(3));
wr128(c, (RW(2) + 304) & ~15u, &c->r[5]);
SET64(2, rd16(c, (RW(19) + 264)));
SET32(2, RW(2) + 1);
wr16(c, (RW(19) + 264), (u16)RW(2));
SET64(3, rd16(c, (RW(19) + 264)));
SET64(2, rd16(c, (RW(19) + 288)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00164998; }
wr16(c, (RW(19) + 264), (u16)RW(0));
SET64(2, rd16(c, (RW(19) + 266)));
SET32(2, RW(2) + 1);
wr16(c, (RW(19) + 266), (u16)RW(2));
SET64(3, rd16(c, (RW(19) + 266)));
SET64(2, rd16(c, (RW(19) + 290)));
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00164994; }
SET32(2, RW(0) + 1); goto L_00164998;
L_00164994:;
SET64(2, RD(0) + RD(0));
L_00164998:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_001649C0(Ctx *c) { /* func_001649C0 */
ENTER(0x1649c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 412)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_001649E8; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1649e4);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_001649E8:;
SET32(29, RW(29) + 16); return;
}

void JP_F_001649F0(Ctx *c) { /* func_001649F0 */
ENTER(0x1649f0);
SET32(29, RW(29) + -720);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, (s32)rd32(c, (RW(4) + 300)));
{ int t = RD(3) == RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_00164F50; }
SET64(2, (s64)(s32)0x3fb50000);
SET32(4, RW(29) + 528);
SET64(3, RD(2) | 0x4f3);
c->f[1].u = rd32(c, (RW(19) + 276));
SET64(2, (s64)(s32)0x3fc00000);
c->f[0].u = RW(3);
c->f[1].f = fpu(F(0) * F(1));
c->f[0].u = RW(2);
c->f[20].f = fpu(F(0) * F(1));
c->f[1].u = rd32(c, (RW(28) + -32556));
c->f[0].u = rd32(c, (RW(28) + -32552));
wr32(c, (RW(18) + 4), c->f[1].u);
SET64(31, 0x164a78); wr32(c, (RW(16) + 4), c->f[0].u); JP_F_002AF080(c);
rd128(c, (RW(19) + 64) & ~15u, &c->r[2]);
SET32(4, RW(29) + 528);
wr128(c, (RW(29) + 528) & ~15u, &c->r[2]);
rd128(c, (RW(19) + 80) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 544) & ~15u, &c->r[2]);
rd128(c, (RW(19) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 560) & ~15u, &c->r[2]);
rd128(c, (RW(19) + 112) & ~15u, &c->r[2]);
SET64(31, 0x164aa0); wr128(c, (RW(29) + 576) & ~15u, &c->r[2]); JP_F_002AE990(c);
SET64(31, 0x164aa8); SET32(4, RW(29) + 656); JP_F_002AF080(c);
rd128(c, (RW(29) + 528) & ~15u, &c->r[7]);
SET32(6, RW(29) + 656);
rd128(c, (RW(29) + 544) & ~15u, &c->r[3]);
SET32(4, RW(29) + 304);
rd128(c, (RW(29) + 560) & ~15u, &c->r[2]);
SET64(5, RD(18) + RD(0));
wr128(c, (RW(29) + 656) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 672) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 688) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 576) & ~15u, &c->r[2]);
SET64(31, 0x164ad8); wr128(c, (RW(29) + 704) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
SET32(4, RW(29) + 288);
SET64(5, RD(16) + RD(0));
SET32(6, RW(29) + 656);
SET64(31, 0x164af0); wr128(c, (RW(18) + 0) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 288) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3f800000);
c->f[4].u = rd32(c, (RW(18) + 8));
wr32(c, (RW(29) + 652), RW(2));
c->f[2].u = rd32(c, (RW(18) + 4));
SET32(4, RW(29) + 640);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]);
c->f[0].u = rd32(c, (RW(18) + 0));
c->f[5].u = rd32(c, (RW(16) + 8));
c->f[3].u = rd32(c, (RW(16) + 4));
c->f[1].u = rd32(c, (RW(16) + 0));
c->f[4].f = fpu(F(5) - F(4));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 648), c->f[4].u);
wr32(c, (RW(29) + 644), c->f[2].u);
SET64(31, 0x164b38); wr32(c, (RW(29) + 640), c->f[0].u); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 208);
wr32(c, (RW(29) + 620), RW(2));
wr32(c, (RW(29) + 636), RW(2));
wr32(c, (RW(29) + 608), RW(0));
wr32(c, (RW(29) + 612), RW(0));
wr32(c, (RW(29) + 616), RW(0));
wr32(c, (RW(29) + 624), RW(0));
wr32(c, (RW(29) + 628), RW(0));
SET64(31, 0x164b64); wr32(c, (RW(29) + 632), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 208);
SET64(31, 0x164b70); SET32(5, RW(28) + -32548); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x164b7c); SET32(4, RW(29) + 432); JP_F_0013ADA0(c);
SET32(4, RW(29) + 496);
SET32(5, RW(29) + 640);
SET64(31, 0x164b8c); SET32(6, RW(29) + 432); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 496) & ~15u, &c->r[2]);
SET32(4, RW(29) + 608);
SET64(5, RD(18) + RD(0));
SET64(31, 0x164ba0); wr128(c, (RW(29) + 608) & ~15u, &c->r[2]); JP_F_002B0230(c);
c->f[0].u = c->f[0].u ^ 0x80000000u;
SET32(4, RW(29) + 144);
SET64(31, 0x164bb0); wr32(c, (RW(29) + 620), c->f[0].u); JP_F_0013AEA0(c);
SET32(4, RW(29) + 144);
SET64(31, 0x164bbc); SET32(5, RW(28) + -32544); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x164bc8); SET32(4, RW(29) + 336); JP_F_0013ADA0(c);
SET32(4, RW(29) + 400);
SET32(5, RW(29) + 640);
SET64(31, 0x164bd8); SET32(6, RW(29) + 336); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 400) & ~15u, &c->r[2]);
SET32(4, RW(29) + 624);
SET64(5, RD(18) + RD(0));
SET64(31, 0x164bec); wr128(c, (RW(29) + 624) & ~15u, &c->r[2]); JP_F_002B0230(c);
c->f[0].u = c->f[0].u ^ 0x80000000u;
SET64(22, RD(0) + RD(0));
wr32(c, (RW(29) + 636), c->f[0].u);
c->f[0].u = rd32(c, (RW(19) + 124));
SET64(3, rd16(c, (RW(19) + 290)));
c->f[2].u = rd32(c, (RW(19) + 108));
c->f[1].u = rd32(c, (RW(19) + 92));
wr32(c, (RW(29) + 332), c->f[0].u);
c->f[0].u = rd32(c, (RW(19) + 76));
wr32(c, (RW(29) + 328), c->f[2].u);
wr32(c, (RW(29) + 324), c->f[1].u);
wr32(c, (RW(29) + 320), c->f[0].u);
rd128(c, (RW(29) + 320) & ~15u, &c->r[4]);
{ int t = RSD(3) <= 0; wr128(c, (RW(29) + 592) & ~15u, &c->r[4]); if (t) goto L_00164F50; }
SET64(3, (s64)(s32)0x41200000);
c->f[21].u = c->f[20].u ^ 0x80000000u;
c->f[0].u = RW(3);
c->f[20].f = fpu(F(0) + F(20));
SET64(5, rd16(c, (RW(19) + 288)));
L_00164C40:;
{ int t = RSD(5) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00164F38; }
SET64(16, RD(22) & 0xffff);
L_00164C50:;
c->f[0].u = RW(22);
c->f[8].f = (f32)(s32)c->f[0].u;
c->f[7].u = rd32(c, (RW(19) + 284));
c->f[6].u = RW(0);
c->f[9].u = rd32(c, (RW(19) + 276));
c->facc = fpu(F(6) + F(7));
c->f[5].u = rd32(c, (RW(29) + 600));
c->f[7].f = fpu(c->facc + F(8) * F(9));
c->f[4].u = RW(17);
c->f[22].f = fpu(F(5) + F(7));
c->f[5].f = (f32)(s32)c->f[4].u;
c->f[4].u = rd32(c, (RW(19) + 280));
c->f[3].u = rd32(c, (RW(29) + 592));
c->f[1].u = rd32(c, (RW(29) + 616));
c->facc = fpu(F(6) + F(4));
c->f[4].f = fpu(c->facc + F(5) * F(9));
c->f[23].f = fpu(F(3) + F(4));
c->f[2].u = rd32(c, (RW(29) + 608));
c->facc = fpu(F(1) * F(22));
c->f[0].u = rd32(c, (RW(29) + 620));
c->f[1].f = fpu(c->facc + F(2) * F(23));
c->f[0].f = fpu(F(0) + F(1));
c->fcc = F(0) <= F(21);
{ int t = c->fcc;  if (t) goto L_00164EE8; }
c->f[1].u = rd32(c, (RW(29) + 632));
c->f[2].u = rd32(c, (RW(29) + 624));
c->f[0].u = rd32(c, (RW(29) + 636));
c->f[1].f = fpu(F(1) * F(22));
c->facc = fpu(F(6) + F(1));
c->f[1].f = fpu(c->facc + F(2) * F(23));
c->f[0].f = fpu(F(0) + F(1));
c->fcc = F(0) <= F(21);
{ int t = c->fcc;  if (t) goto L_00164EA8; }
mul_s(c, 0, 3, RSW(16), RSW(5));
SET64(20, RD(17) & 0xffff);
SET64(25, (s32)rd32(c, (RW(19) + 56)));
SET64(4, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 300)));
SET32(5, RW(20) + RW(3));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
SET32(3, RW(5) << 3);
SET32(5, RW(3) - RW(5));
SET32(3, RW(5) << 2);
SET32(3, RW(3) - RW(5));
SET32(3, RW(3) << 4);
{ u32 t = RW(25); SET64(31, 0x164d1c); SET32(21, RW(2) + RW(3)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(21) + 16)));
SET64(5, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x164d30); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(18) + 4));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(0);
wr32(c, (RW(29) + 284), RW(2));
c->f[2].u = rd32(c, (RW(18) + 8));
SET32(4, RW(29) + 272);
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 276), c->f[0].u);
c->f[0].u = rd32(c, (RW(18) + 0));
c->f[2].f = fpu(F(2) - F(22));
c->f[0].f = fpu(F(0) - F(23));
wr32(c, (RW(29) + 280), c->f[2].u);
SET64(31, 0x164d68); wr32(c, (RW(29) + 272), c->f[0].u); JP_F_002B0290(c);
c->fcc = F(0) <= F(20);
{ int t = c->fcc;  if (t) goto L_00164E10; }
SET64(3, rd16(c, (RW(19) + 288)));
SET64(2, (s32)rd32(c, (RW(19) + 300)));
mul_s(c, 0, 3, RSW(16), RSW(3));
SET32(4, RW(20) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x164dac); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(4, rd16(c, (RW(19) + 288)));
SET64(3, (s32)rd32(c, (RW(19) + 300)));
mul_s(c, 0, 4, RSW(16), RSW(4));
SET32(5, RW(20) + RW(4));
SET32(4, RW(5) << 3);
SET32(5, RW(4) - RW(5));
SET32(4, RW(5) << 2);
SET32(4, RW(4) - RW(5));
SET32(4, RW(4) << 4);
SET32(20, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(20) + 320)));
{ int t = RD(3) == RD(0);  if (t) goto L_00164F20; }
SET64(21, RD(0) + RD(0));
L_00164DE8:;
SET64(4, (s32)rd32(c, (RW(20) + 320)));
SET64(5, RD(0) | 0x8000);
SET64(31, 0x164df8); SET64(6, RD(21) + RD(0)); JP_F_001F0F40(c);
SET32(21, RW(21) + 1);
SET64(3, RSD(21) < (s64)2);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00164DE8; } }
 goto L_00164F20;
L_00164E10:;
SET64(3, rd16(c, (RW(19) + 288)));
SET64(2, (s32)rd32(c, (RW(19) + 300)));
mul_s(c, 0, 3, RSW(16), RSW(3));
SET32(4, RW(20) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x164e48); SET64(5, RD(0) | 0x8002); rt_call(c, t); }
SET64(4, rd16(c, (RW(19) + 288)));
SET64(3, (s32)rd32(c, (RW(19) + 300)));
mul_s(c, 0, 4, RSW(16), RSW(4));
SET32(5, RW(20) + RW(4));
SET32(4, RW(5) << 3);
SET32(5, RW(4) - RW(5));
SET32(4, RW(5) << 2);
SET32(4, RW(4) - RW(5));
SET32(4, RW(4) << 4);
SET32(20, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(20) + 320)));
{ int t = RD(3) == RD(0);  if (t) goto L_00164F20; }
SET64(21, RD(0) + RD(0));
L_00164E80:;
SET64(4, (s32)rd32(c, (RW(20) + 320)));
SET64(5, RD(0) | 0x8002);
SET64(31, 0x164e90); SET64(6, RD(21) + RD(0)); JP_F_001F0F40(c);
SET32(21, RW(21) + 1);
SET64(3, RSD(21) < (s64)2);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00164E80; } }
 goto L_00164F20;
L_00164EA8:;
SET64(4, RD(17) & 0xffff);
mul_s(c, 0, 3, RSW(16), RSW(5));
SET64(2, (s32)rd32(c, (RW(19) + 300)));
SET32(4, RW(4) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x164ee0); SET32(5, RW(0) + 1); rt_call(c, t); }
 goto L_00164F20;
L_00164EE8:;
SET64(4, RD(17) & 0xffff);
mul_s(c, 0, 3, RSW(16), RSW(5));
SET64(2, (s32)rd32(c, (RW(19) + 300)));
SET32(4, RW(4) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x164f20); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00164F20:;
SET64(5, rd16(c, (RW(19) + 288)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(5));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00164C50; } }
L_00164F38:;
SET64(3, rd16(c, (RW(19) + 290)));
SET32(22, RW(22) + 1);
SET64(3, RSD(22) < RSD(3));
if (RD(3) != RD(0)) { SET64(5, rd16(c, (RW(19) + 288))); { POLL(); goto L_00164C40; } }
L_00164F50:;
SET64(31, rd64(c, (RW(29) + 128)));
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 112) & ~15u, &c->r[22]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 720); return;
}

void JP_F_00164F90(Ctx *c) { /* func_00164F90 */
ENTER(0x164f90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 304)));
SET64(16, RD(6) + RD(0));
{ int t = RD(4) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00164FC0; }
SET64(31, 0x164fbc);  JP_F_0014A8D0(c);
SET64(5, RD(2) + RD(0));
L_00164FC0:;
if (RD(5) == RD(0)) { wr16(c, (RW(16) + 0), (u16)RW(0)); goto L_00164FDC; }
SET64(3, rd16(c, (RW(5) + 12)));
wr16(c, (RW(17) + 0), (u16)RW(3));
SET64(3, rd16(c, (RW(5) + 14)));
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00164FE0;
L_00164FDC:;
wr16(c, (RW(17) + 0), (u16)RW(0));
L_00164FE0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00165000(Ctx *c) { /* func_00165000 */
ENTER(0x165000);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
SET64(17, RD(5) << 48);
SET64(17, RSD(17) >> 48);
{ int t = RSD(17) < 0; wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_00165084; }
SET64(16, RD(6) << 48);
SET64(16, RSD(16) >> 48);
if (RSD(16) < 0) { SET64(2, RD(18) + RD(0)); goto L_00165088; }
SET64(4, (s32)rd32(c, (RW(4) + 304)));
if (RD(4) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00165048; }
SET64(31, 0x165048);  JP_F_0014A8D0(c);
L_00165048:;
{ int t = RD(2) == RD(0);  if (t) goto L_00165084; }
SET64(4, rd16(c, (RW(2) + 12)));
SET64(1, RSD(17) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_00165084; }
SET64(3, rd16(c, (RW(2) + 14)));
SET64(1, RSD(16) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_00165084; }
mul_s(c, 0, 3, RSW(4), RSW(16));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET32(3, RW(17) + RW(3));
SET32(3, RW(3) << 3);
SET32(18, RW(2) + RW(3));
L_00165084:;
SET64(2, RD(18) + RD(0));
L_00165088:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001650A0(Ctx *c) { /* func_001650A0 */
ENTER(0x1650a0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(4) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 304)));
{ int t = RD(4) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_001650E4; }
SET64(31, 0x1650e0);  JP_F_0014A8D0(c);
SET64(3, RD(2) + RD(0));
L_001650E4:;
if (RD(3) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_001650F8; }
SET64(4, rd16(c, (RW(3) + 12)));
SET64(3, rd16(c, (RW(3) + 14))); goto L_001650FC;
L_001650F8:;
SET64(4, RD(0) & 0xffff);
L_001650FC:;
SET64(22, RD(4) & 0xffff);
{ int t = RSD(22) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_001651F8; }
SET64(18, RD(3) & 0xffff);
L_0016510C:;
{ int t = RSD(18) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_001651E0; }
SET64(17, RD(21) << 48);
SET64(17, RSD(17) >> 48);
L_00165120:;
{ int t = RSD(17) < 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00165190; }
SET64(16, RD(20) << 48);
SET64(16, RSD(16) >> 48);
{ int t = RSD(16) < 0;  if (t) goto L_00165190; }
SET64(4, (s32)rd32(c, (RW(23) + 304)));
if (RD(4) == RD(0)) { SET64(5, RD(0) + RD(0)); goto L_00165150; }
SET64(31, 0x16514c);  JP_F_0014A8D0(c);
SET64(5, RD(2) + RD(0));
L_00165150:;
{ int t = RD(5) == RD(0);  if (t) goto L_00165190; }
SET64(4, rd16(c, (RW(5) + 12)));
SET64(1, RSD(17) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_00165190; }
SET64(3, rd16(c, (RW(5) + 14)));
SET64(1, RSD(16) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_00165190; }
mul_s(c, 0, 4, RSW(4), RSW(16));
SET64(3, (s32)rd32(c, (RW(5) + 16)));
SET32(4, RW(17) + RW(4));
SET32(4, RW(4) << 3);
SET32(19, RW(3) + RW(4));
L_00165190:;
{ int t = RD(19) == RD(0);  if (t) goto L_001651C8; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_001651B0; }
SET64(31, 0x1651ac);  JP_F_0014AAB0(c);
L_001651B0:;
SET64(4, (s32)rd32(c, (RW(19) + 4)));
{ int t = RD(4) == RD(0);  if (t) goto L_001651C8; }
SET64(31, 0x1651c4);  JP_F_0014AAB0(c);
L_001651C8:;
SET32(3, RW(20) + 1);
SET64(20, RD(3) & 0xffff);
SET64(3, RSD(20) < RSD(18));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00165120; } }
L_001651E0:;
SET32(3, RW(21) + 1);
SET64(21, RD(3) & 0xffff);
SET64(3, RSD(21) < RSD(22));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_0016510C; } }
L_001651F8:;
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

void JP_F_00165230(Ctx *c) { /* func_00165230 */
ENTER(0x165230);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0x4a0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x165244); SET32(5, RW(5) + -21184); JP_F_0012AB88(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_00165260(Ctx *c) { /* func_00165260 */
ENTER(0x165260);
SET32(29, RW(29) + -464);
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
wr32(c, (RW(29) + 188), RW(5));
SET64(3, (s32)rd32(c, (RW(4) + 400)));
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 184), RW(6)); if (t) goto L_00165708; }
SET64(3, rd16(c, (RW(21) + 352)));
{ int t = RSD(3) <= 0; SET64(22, RD(0) + RD(0)); if (t) goto L_00165708; }
SET64(17, RD(0) + RD(0));
SET64(23, RD(0) + RD(0));
L_001652B8:;
SET64(2, (s32)rd32(c, (RW(21) + 356)));
SET64(5, (s64)(s32)0x4a0000);
SET32(5, RW(5) + -21184);
SET64(20, RD(0) + RD(0));
SET32(2, RW(2) + RW(17));
SET64(16, rd16(c, (RW(2) + 98)));
SET64(31, 0x1652d8); SET32(4, RW(2) + 64); JP_F_0012AB88(c);
SET64(3, RD(0) < RD(2));
{ int t = RD(3) == RD(0);  if (t) goto L_00165308; }
SET64(3, RD(16) & 0xffff);
SET64(3, RD(3) & 0x1);
{ int t = RD(3) == RD(0);  if (t) goto L_00165300; }
SET32(16, RW(0) + 691); goto L_00165310;
L_00165300:;
SET32(16, RW(0) + 690); goto L_00165310;
L_00165308:;
SET32(16, RW(0) + 711);
L_00165310:;
SET32(3, RW(0) + 711);
{ int t = RD(16) == RD(3);  if (t) goto L_00165388; }
SET64(2, (s32)rd32(c, (RW(21) + 356)));
SET32(2, RW(2) + RW(17));
SET64(2, rd16(c, (RW(2) + 98)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_00165360; }
{ int t = RD(21) == RD(0); SET64(6, RD(21) + RD(0)); if (t) goto L_00165340; }
SET32(6, RW(21) + 64);
L_00165340:;
SET64(4, (s32)rd32(c, (RW(21) + 400)));
SET64(7, (s32)rd32(c, (RW(29) + 184)));
SET64(5, RD(16) & 0xffff);
SET64(31, 0x165354); SET64(8, RD(0) + RD(0)); JP_F_00170E80(c);
SET64(20, RD(2) + RD(0)); goto L_00165388;
L_00165360:;
{ int t = RD(21) == RD(0); SET64(6, RD(21) + RD(0)); if (t) goto L_00165370; }
SET32(6, RW(21) + 64);
L_00165370:;
SET64(4, (s32)rd32(c, (RW(21) + 400)));
SET64(7, (s32)rd32(c, (RW(29) + 188)));
SET64(5, RD(16) & 0xffff);
SET64(31, 0x165384); SET64(8, RD(0) + RD(0)); JP_F_00170E80(c);
SET64(20, RD(2) + RD(0));
L_00165388:;
{ int t = RD(20) == RD(0);  if (t) goto L_001656E0; }
SET64(3, (s32)rd32(c, (RW(21) + 356)));
SET64(25, (s32)rd32(c, (RW(20) + 144)));
SET64(2, (s32)rd32(c, (RW(21) + 312)));
SET32(3, RW(3) + RW(17));
SET64(3, rd16(c, (RW(3) + 96)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(25); SET64(31, 0x1653bc); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET32(2, RW(16) + -690);
SET64(1, RD(2) < (u64)(s64)3);
{ int t = RD(1) == RD(0);  if (t) goto L_001656C8; }
SET64(3, (s32)rd32(c, (RW(21) + 356)));
SET64(2, rd16(c, (RW(21) + 294)));
SET32(3, RW(3) + RW(17));
SET64(1, RSD(2) < (s64)30);
{ int t = RD(1) == RD(0); SET32(30, RW(3) + 64); if (t) goto L_00165458; }
SET32(3, RW(2) << 2);
SET64(18, RD(0) + RD(0));
SET64(2, (s64)(s32)0x3f0000);
SET32(2, RW(2) + -9360);
SET32(2, RW(2) + RW(3));
SET64(19, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x165404); SET64(4, RD(19) + RD(0)); JP_F_0012A4D8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00165458; }
SET64(16, RD(19) + RD(0));
L_00165410:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x16541c); SET64(5, RD(30) + RD(0)); JP_F_0012A278(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00165440; }
SET32(2, RW(18) << 2);
SET32(2, RW(2) + RW(18));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(18));
SET32(2, RW(2) << 2);
SET32(18, RW(19) + RW(2)); goto L_00165460;
L_00165440:;
SET32(16, RW(16) + 44);
SET64(4, RD(16) + RD(0));
SET64(31, 0x165450); SET32(18, RW(18) + 1); JP_F_0012A4D8(c);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00165410; } }
L_00165458:;
SET64(18, RD(0) + RD(0));
L_00165460:;
{ int t = RD(18) == RD(0);  if (t) goto L_001656A8; }
SET64(2, (s32)rd32(c, (RW(21) + 356)));
c->f[20].u = rd32(c, (RW(18) + 40));
SET32(4, RW(29) + 288);
SET64(31, 0x16547c); SET32(16, RW(2) + RW(17)); JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 364), RW(2));
c->f[3].u = RW(0);
wr32(c, (RW(29) + 352), RW(0));
SET32(4, RW(29) + 192);
wr128(c, (RW(29) + 288) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 356), RW(0));
wr32(c, (RW(29) + 360), RW(0));
wr128(c, (RW(29) + 304) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 320) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 336) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 380), RW(2));
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 352) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 352));
c->f[1].u = rd32(c, (RW(29) + 356));
c->f[0].u = rd32(c, (RW(29) + 360));
c->f[2].f = fpu(F(2) + F(3));
c->f[1].f = fpu(F(1) + F(20));
c->f[0].f = fpu(F(0) + F(3));
wr32(c, (RW(29) + 368), c->f[2].u);
wr32(c, (RW(29) + 372), c->f[1].u);
SET64(31, 0x1654ec); wr32(c, (RW(29) + 376), c->f[0].u); JP_F_0013AEA0(c);
SET32(4, RW(29) + 192);
SET64(31, 0x1654f8); SET32(5, RW(29) + 368); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x165504); SET32(4, RW(29) + 384); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(20) + 144)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x165518); SET32(5, RW(29) + 384); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(21) + 356)));
SET64(2, (s32)rd32(c, (RW(21) + 312)));
SET64(5, rd16(c, (RW(18) + 32)));
SET32(3, RW(3) + RW(17));
SET64(3, rd16(c, (RW(3) + 96)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(4) + 52)));
{ int t = RSD(2) < 0; c->f[1].u = rd32(c, (RW(18) + 36)); if (t) goto L_00165550; }
c->f[0].u = RW(2);
c->f[7].f = (f32)(s32)c->f[0].u; goto L_0016556C;
L_00165550:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[7].f = (f32)(s32)c->f[0].u;
c->f[7].f = fpu(F(7) + F(7));
L_0016556C:;
SET64(2, rd16(c, (RW(4) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_00165584; }
c->f[0].u = RW(2);
c->f[6].f = (f32)(s32)c->f[0].u; goto L_0016559C;
L_00165584:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[6].f = (f32)(s32)c->f[0].u;
c->f[6].f = fpu(F(6) + F(6));
L_0016559C:;
SET32(2, RW(5) << 5);
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
c->fcc = F(0) < F(6);
{ int t = c->fcc;  if (t) goto L_001655C0; }
SET64(5, RD(0) + RD(0));
L_001655C0:;
SET64(2, (s64)(s32)0x3f000000);
c->f[0].u = RW(5);
SET64(8, (s64)(s32)0x3f800000);
c->f[3].f = (f32)(s32)c->f[0].u;
SET64(7, (s64)(s32)0x41fc0000);
SET64(3, (s64)(s32)0xc1fc0000);
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 5);
wr32(c, (RW(29) + 460), c->f[1].u);
c->f[0].u = RW(7);
c->f[1].f = fpu_div(F(0), F(7));
c->f[0].u = RW(3);
wr32(c, (RW(29) + 280), c->f[1].u);
wr32(c, (RW(29) + 264), c->f[1].u);
c->f[1].f = fpu_div(F(0), F(6));
c->f[5].u = RW(2);
SET64(2, (s64)(s32)0x42000000);
c->f[4].u = RW(2);
SET64(2, (s64)(s32)0x42020000);
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(0), F(7));
wr32(c, (RW(29) + 256), c->f[0].u);
c->f[0].f = fpu_div(F(5), F(7));
wr32(c, (RW(29) + 272), c->f[0].u);
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(5));
c->f[0].f = fpu(c->facc + F(4) * F(3));
c->f[0].f = fpu_div(F(0), F(6));
c->f[2].u = RW(8);
c->f[0].f = fpu(F(2) - F(0));
wr32(c, (RW(29) + 284), c->f[1].u);
wr32(c, (RW(29) + 268), c->f[1].u);
wr32(c, (RW(29) + 276), c->f[0].u);
wr32(c, (RW(29) + 260), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(20) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x16566c); SET32(6, RW(29) + 460); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(20) + 144)));
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 1000);
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x165684); SET32(6, RW(29) + 272); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(20) + 144)));
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 1001);
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x16569c); SET32(6, RW(29) + 256); rt_call(c, t); }
 goto L_001656E0;
L_001656A8:;
SET64(25, (s32)rd32(c, (RW(20) + 144)));
SET64(2, (s32)rd32(c, (RW(21) + 356)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x1656c0); SET32(5, RW(2) + RW(17)); rt_call(c, t); }
 goto L_001656E0;
L_001656C8:;
SET64(25, (s32)rd32(c, (RW(20) + 144)));
SET64(2, (s32)rd32(c, (RW(21) + 356)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x1656e0); SET32(5, RW(2) + RW(17)); rt_call(c, t); }
L_001656E0:;
SET64(3, (s32)rd32(c, (RW(21) + 360)));
SET32(22, RW(22) + 1);
SET32(17, RW(17) + 112);
SET32(3, RW(3) + RW(23));
wr32(c, (RW(3) + 0), RW(20));
SET64(3, rd16(c, (RW(21) + 352)));
SET64(3, RSD(22) < RSD(3));
{ int t = RD(3) != RD(0); SET32(23, RW(23) + 4); if (t) { POLL(); goto L_001652B8; } }
L_00165708:;
SET64(31, rd64(c, (RW(29) + 160)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 144) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[23]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 464); return;
}

void JP_F_00165740(Ctx *c) { /* func_00165740 */
ENTER(0x165740);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 48) & ~15u, &c->r[2]);
SET64(31, 0x16576c); wr128(c, (RW(4) + 48) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00165780(Ctx *c) { /* func_00165780 */
ENTER(0x165780);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
SET64(2, RD(4) + RD(0));
wr128(c, (RW(4) + 48) & ~15u, &c->r[3]); return;
}

void JP_F_00165790(Ctx *c) { /* func_00165790 */
ENTER(0x165790);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 352)));
{ int t = RD(3) == RD(0); SET64(21, RD(4) + RD(0)); if (t) goto L_001659A0; }
SET64(31, 0x1657c4); SET32(4, RW(0) + 48); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(21) + 400), RW(2)); goto L_00165824; }
SET64(3, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -3136);
SET32(5, RW(5) + -3104);
wr32(c, (RW(2) + 12), RW(3));
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 0), RW(0));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(2) + 4), RW(0));
SET32(3, RW(3) + 4416);
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
wr16(c, (RW(2) + 44), (u16)RW(0));
wr32(c, (RW(21) + 400), RW(2));
L_00165824:;
SET64(2, rd16(c, (RW(21) + 352)));
SET64(31, 0x165830); SET32(4, RW(2) << 2); JP_F_00100530(c);
wr32(c, (RW(21) + 360), RW(2));
SET64(20, RD(0) + RD(0));
SET64(2, rd16(c, (RW(21) + 352)));
SET64(19, RD(0) + RD(0));
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 116), RW(0));
{ int t = RSD(2) <= 0; wr32(c, (RW(29) + 120), RW(0)); if (t) goto L_00165908; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_00165858:;
SET64(2, (s32)rd32(c, (RW(21) + 356)));
SET64(5, (s64)(s32)0x4a0000);
SET32(5, RW(5) + -21184);
SET32(2, RW(2) + RW(18));
SET64(16, rd16(c, (RW(2) + 98)));
SET64(31, 0x165874); SET32(4, RW(2) + 64); JP_F_0012AB88(c);
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_001658A0; }
SET64(2, RD(16) & 0xffff);
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_00165898; }
SET32(3, RW(0) + 691); goto L_001658A8;
L_00165898:;
SET32(3, RW(0) + 690); goto L_001658A8;
L_001658A0:;
SET32(3, RW(0) + 711);
L_001658A8:;
SET32(2, RW(0) + 711);
{ int t = RD(3) == RD(2);  if (t) goto L_001658E0; }
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(29));
SET32(3, RW(2) + -2648);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_001658D0; }
SET32(20, RW(20) + 1);
L_001658D0:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
L_001658E0:;
SET64(2, (s32)rd32(c, (RW(21) + 360)));
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 112);
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, rd16(c, (RW(21) + 352)));
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00165858; } }
L_00165908:;
if (RD(20) != RD(0)) { SET64(4, (s32)rd32(c, (RW(21) + 400))); goto L_00165940; }
SET64(4, (s32)rd32(c, (RW(21) + 400)));
if (RD(4) == RD(0)) { wr32(c, (RW(21) + 400), RW(0)); goto L_00165930; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16592c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(21) + 400), RW(0));
L_00165930:;
SET64(31, 0x165938); SET64(4, (s32)rd32(c, (RW(21) + 360))); JP_F_00100430(c);
wr32(c, (RW(21) + 360), RW(0)); goto L_001659A0;
L_00165940:;
SET64(6, RD(20) & 0xffff);
SET32(5, RW(0) + 102);
SET64(7, RD(0) + RD(0));
SET64(31, 0x165954); SET32(8, RW(0) + 1); JP_F_00171280(c);
SET64(4, (s32)rd32(c, (RW(21) + 400)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x165964); SET64(6, RD(0) + RD(0)); JP_F_001710A0(c);
SET64(17, RD(0) + RD(0));
SET32(16, RW(29) + 112);
L_0016596C:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_00165990; }
SET64(4, (s32)rd32(c, (RW(21) + 400)));
SET32(2, RW(17) + 690);
SET64(6, RD(3) & 0xffff);
SET64(31, 0x16598c); SET64(5, RD(2) & 0xffff); JP_F_00171060(c);
L_00165990:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_0016596C; } }
L_001659A0:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_001659D0(Ctx *c) { /* func_001659D0 */
ENTER(0x1659d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00165A54; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4416);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x165a08);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_00165A40; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(25); SET64(31, 0x165a28); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_00165A3C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 12), RW(2));
L_00165A3C:;
SET64(2, RD(16) << 48);
L_00165A40:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00165A58; }
SET64(31, 0x165a54); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00165A54:;
SET64(2, RD(17) + RD(0));
L_00165A58:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00165A70(Ctx *c) { /* func_00165A70 */
ENTER(0x165a70);
SET64(5, (s64)(s32)0x490000);
SET64(2, RD(0) + RD(0));
SET32(5, RW(5) + 26288);
L_00165A7C:;
SET64(3, (s32)rd32(c, (RW(5) + 40)));
if (RD(4) != RD(3)) { SET32(2, RW(2) + 1); goto L_00165A90; }
 goto L_00165AA0;
L_00165A90:;
SET64(3, RSD(2) < (s64)30);
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 76); if (t) { POLL(); goto L_00165A7C; } }
SET32(2, RW(0) + -1);
L_00165AA0:;
 return;
}

void JP_F_00165AB0(Ctx *c) { /* func_00165AB0 */
ENTER(0x165ab0);
SET64(3, (s32)rd32(c, (RW(4) + 48)));
if (RD(3) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00165ACC; }
SET32(2, RW(0) + 4);
if (RD(3) != RD(2)) { SET32(2, RW(0) + 1); goto L_00165ACC; }
SET64(2, RD(0) + RD(0));
L_00165ACC:;
 return;
}

void JP_F_00165AE0(Ctx *c) { /* func_00165AE0 */
ENTER(0x165ae0);
SET32(29, RW(29) + -80);
SET32(3, RW(0) + 2000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 0)));
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_00166ADC; }
SET32(6, RW(0) + 304);
{ int t = RD(5) == RD(6);  if (t) goto L_00166AC0; }
SET32(6, RW(0) + 303);
if (RD(5) == RD(6)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_001669DC; }
SET32(6, RW(0) + 302);
if (RD(5) == RD(6)) { SET64(3, (s32)rd32(c, (RW(16) + 320))); goto L_00166918; }
SET32(6, RW(0) + 301);
if (RD(5) == RD(6)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_001668A8; }
SET32(7, RW(0) + 300);
if (RD(5) == RD(7)) { SET64(3, (s32)rd32(c, (RW(16) + 320))); goto L_001667E4; }
SET32(6, RW(0) + 200);
if (RD(5) == RD(6)) { SET32(5, RW(0) + 1); goto L_001666BC; }
SET32(6, RW(0) + 100);
if (RD(5) == RD(6)) { SET64(4, rd8(c, (RW(16) + 272))); goto L_001666A4; }
SET32(3, RW(0) + 91);
if (RD(5) == RD(3)) { SET32(4, RW(16) + 64); goto L_00166690; }
SET32(3, RW(0) + 90);
if (RD(5) == RD(3)) { SET64(3, rd16(c, (RW(16) + 292))); goto L_0016662C; }
SET32(3, RW(0) + 80);
{ int t = RD(5) == RD(3);  if (t) goto L_00166618; }
SET32(3, RW(0) + 71);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_001665A4; }
SET32(3, RW(0) + 70);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(16) + 320))); goto L_0016657C; }
SET32(3, RW(0) + 61);
{ int t = RD(5) == RD(3);  if (t) goto L_00166560; }
SET32(3, RW(0) + 60);
if (RD(5) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 320))); goto L_00166494; }
SET32(3, RW(0) + 51);
{ int t = RD(5) == RD(3);  if (t) goto L_00166478; }
SET32(3, RW(0) + 50);
if (RD(5) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 320))); goto L_001663AC; }
SET32(3, RW(0) + 42);
{ int t = RD(5) == RD(3);  if (t) goto L_00166390; }
SET32(3, RW(0) + 41);
{ int t = RD(5) == RD(3);  if (t) goto L_00166370; }
SET32(3, RW(0) + 40);
if (RD(5) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 320))); goto L_001662A4; }
SET32(3, RW(0) + 31);
{ int t = RD(5) == RD(3);  if (t) goto L_00166288; }
SET32(3, RW(0) + 30);
if (RD(5) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 320))); goto L_001661BC; }
SET32(3, RW(0) + 22);
{ int t = RD(5) == RD(3);  if (t) goto L_001661A0; }
SET32(3, RW(0) + 21);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_00166100; }
SET32(3, RW(0) + 20);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(16) + 320))); goto L_001660D8; }
SET32(3, RW(0) + 12);
{ int t = RD(5) == RD(3);  if (t) goto L_001660BC; }
SET32(3, RW(0) + 11);
{ int t = RD(5) == RD(3);  if (t) goto L_0016609C; }
SET32(3, RW(0) + 10);
if (RD(5) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 320))); goto L_00165FCC; }
SET32(3, RW(0) + 8);
{ int t = RD(5) == RD(3);  if (t) goto L_00165FB0; }
SET32(3, RW(0) + 7);
if (RD(5) == RD(3)) { SET64(3, rd16(c, (RW(16) + 288))); goto L_00165F3C; }
SET32(3, RW(0) + 6);
if (RD(5) == RD(3)) { SET64(17, (s32)rd32(c, (RW(16) + 324))); goto L_00165EF0; }
SET32(3, RW(0) + 5);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 44); goto L_00165E48; }
SET32(3, RW(0) + 4);
if (RD(5) == RD(3)) { SET64(3, rd16(c, (RW(16) + 290))); goto L_00165DBC; }
SET32(2, RW(0) + 3);
{ int t = RD(5) == RD(2);  if (t) goto L_00165D9C; }
SET32(2, RW(0) + 2);
if (RD(5) == RD(2)) { SET64(5, rd16(c, (RW(16) + 294))); goto L_00165D84; }
SET32(2, RW(0) + 1);
{ int t = RD(5) == RD(2);  if (t) goto L_00165D64; }
if (RD(5) == RD(0)) { SET32(4, RW(0) + 36); goto L_00165CBC; }
 goto L_00166AEC;
L_00165CBC:;
SET64(31, 0x165cc4);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00165CF4; }
SET64(31, 0x165cd4); SET64(4, RD(17) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_00165CF4:;
wr32(c, (RW(16) + 244), RW(17));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(2, (s32)rd32(c, (RW(16) + 320)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
SET64(5, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(25); SET64(31, 0x165d10); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x165d24);  rt_call(c, t); }
SET64(31, 0x165d2c); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(16) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x165d4c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 270), (u8)RW(3));
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00165D64:;
SET64(31, 0x165d6c);  JP_F_0016AED0(c);
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_00166AF8; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00165D84:;
SET64(31, 0x165d8c);  JP_F_0016A2A0(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00165D9C:;
SET64(31, 0x165da4);  JP_F_00169E90(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00166AF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00165DBC:;
SET64(9, RD(0) + RD(0));
{ int t = RSD(3) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00165E38; }
SET64(4, rd16(c, (RW(16) + 288)));
L_00165DCC:;
{ int t = RSD(4) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_00165E20; }
SET64(6, RD(8) & 0xffff);
L_00165DD8:;
SET64(5, RD(7) & 0xffff);
mul_s(c, 0, 3, RSW(6), RSW(4));
SET32(3, RW(5) + RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 296)));
SET32(3, RW(3) << 2);
SET32(4, RW(4) + RW(3));
SET64(3, rd16(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_00165E08; }
wr16(c, (RW(4) + 2), (u16)RW(9));
SET32(9, RW(9) + 1);
L_00165E08:;
SET64(4, rd16(c, (RW(16) + 288)));
SET32(7, RW(7) + 1);
SET64(3, RSD(7) < RSD(4));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00165DD8; } }
L_00165E20:;
SET64(3, rd16(c, (RW(16) + 290)));
SET32(8, RW(8) + 1);
SET64(3, RSD(8) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, rd16(c, (RW(16) + 288))); { POLL(); goto L_00165DCC; } }
L_00165E38:;
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00165E48:;
SET64(31, 0x165e50);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_00165E94; }
SET64(31, 0x165e60); SET64(4, RD(18) + RD(0)); JP_F_00158180(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -32);
SET32(2, RW(2) + 3616);
wr32(c, (RW(18) + 16), RW(3));
wr32(c, (RW(18) + 20), RW(0));
wr32(c, (RW(18) + 24), RW(0));
wr32(c, (RW(18) + 28), RW(0));
wr16(c, (RW(18) + 32), (u16)RW(0));
wr16(c, (RW(18) + 34), (u16)RW(0));
wr32(c, (RW(18) + 16), RW(2));
wr32(c, (RW(18) + 36), RW(0));
wr32(c, (RW(18) + 40), RW(0));
L_00165E94:;
wr32(c, (RW(16) + 324), RW(18));
SET64(2, (s32)rd32(c, (RW(16) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)rd32(c, (RW(2) + 40)));
SET64(31, 0x165eac); SET64(4, RD(18) + RD(0)); JP_F_00158060(c);
SET64(31, 0x165eb4); SET64(4, RD(18) + RD(0)); JP_F_00157C30(c);
SET64(31, 0x165ebc); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
wr32(c, (RW(18) + 36), RW(2));
SET64(4, RD(18) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x165ed4); SET64(7, RD(0) + RD(0)); JP_F_00157E20(c);
wr32(c, (RW(18) + 40), RW(17));
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 270), (u8)RW(3));
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00165EF0:;
SET64(31, 0x165ef8); SET64(4, RD(17) + RD(0)); JP_F_00157DA0(c);
if (RD(2) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_00165F08; }
SET64(3, RD(0) + RD(0)); goto L_00165F20;
L_00165F08:;
SET64(31, 0x165f10);  JP_F_00157C60(c);
SET64(5, (s32)rd32(c, (RW(17) + 36)));
SET64(31, 0x165f1c); SET64(4, RD(17) + RD(0)); JP_F_00157540(c);
SET64(3, RD(0) + (s64)1);
L_00165F20:;
{ int t = RD(3) == RD(0);  if (t) goto L_00166AF4; }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00165F3C:;
SET64(17, RD(0) + RD(0));
SET64(2, rd16(c, (RW(16) + 290)));
mul_s(c, 0, 18, RSW(3), RSW(2));
SET32(2, RW(18) << 3);
SET32(3, RW(2) - RW(18));
SET32(2, RW(3) << 2);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 4);
SET64(31, 0x165f64); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00165F94; }
SET64(5, (s64)(s32)0x160000);
SET64(6, (s64)(s32)0x160000);
SET64(8, RD(18) + RD(0));
SET32(17, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + 17808);
SET32(6, RW(6) + 17584);
SET64(31, 0x165f90); SET32(7, RW(0) + 336); JP_F_00102580(c);
SET64(19, RD(2) + RD(0));
L_00165F94:;
wr32(c, (RW(16) + 300), RW(19));
wr16(c, (RW(16) + 264), (u16)RW(0));
wr16(c, (RW(16) + 266), (u16)RW(0));
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00165FB0:;
SET64(31, 0x165fb8);  JP_F_001646E0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00166AF4; }
SET32(3, RW(0) + 10);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00165FCC:;
SET64(18, (s32)rd32(c, (RW(3) + 48)));
if (RD(18) != RD(0)) { SET32(4, RW(0) + 36); goto L_00165FE4; }
wr16(c, (RW(16) + 328), (u16)RW(0));
SET64(4, RD(0) + RD(0)); goto L_0016607C;
L_00165FE4:;
SET64(31, 0x165fec);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016601C; }
SET64(31, 0x165ffc); SET64(4, RD(17) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_0016601C:;
wr32(c, (RW(16) + 244), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x166034); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x166048);  rt_call(c, t); }
SET64(31, 0x166050); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(16) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x166070); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(4, RD(0) + (s64)1);
wr8(c, (RW(16) + 270), (u8)RW(3));
L_0016607C:;
if (RD(4) == RD(0)) { SET32(3, RW(0) + 20); goto L_00166094; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166094:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_0016609C:;
SET64(31, 0x1660a4);  JP_F_001680E0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00166AF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_001660BC:;
SET64(31, 0x1660c4);  JP_F_00167DF0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00166AF4; }
SET32(3, RW(0) + 20);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_001660D8:;
SET64(31, 0x1660e0); SET64(5, (s32)rd32(c, (RW(2) + 56))); JP_F_00167270(c);
if (RD(2) == RD(0)) { SET32(3, RW(0) + 30); goto L_001660F8; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_001660F8:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166100:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x166110);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_00166120; }
SET64(3, RD(0) + RD(0)); goto L_00166188;
L_00166120:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x166130);  rt_call(c, t); }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 244)));
SET64(2, rd16(c, (RW(2) + 32)));
wr16(c, (RW(16) + 340), (u16)RW(2));
SET64(2, rd16(c, (RW(16) + 340)));
SET64(31, 0x16614c); SET32(4, RW(2) << 2); JP_F_00100530(c);
wr32(c, (RW(16) + 348), RW(2));
SET64(3, rd16(c, (RW(16) + 340)));
{ int t = RSD(3) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_00166180; }
SET64(4, RD(0) + RD(0));
L_00166160:;
SET64(3, (s32)rd32(c, (RW(16) + 348)));
SET32(5, RW(5) + 1);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(3) + 0), RW(0));
SET64(3, rd16(c, (RW(16) + 340)));
SET64(3, RSD(5) < RSD(3));
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_00166160; } }
L_00166180:;
wr16(c, (RW(16) + 268), (u16)RW(0));
SET64(3, RD(0) + (s64)1);
L_00166188:;
{ int t = RD(3) == RD(0);  if (t) goto L_00166AF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_001661A0:;
SET64(31, 0x1661a8);  JP_F_00167010(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00166AF4; }
SET32(3, RW(0) + 30);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_001661BC:;
SET64(18, (s32)rd32(c, (RW(3) + 52)));
if (RD(18) != RD(0)) { SET32(4, RW(0) + 36); goto L_001661D0; }
SET64(4, RD(0) + RD(0)); goto L_00166268;
L_001661D0:;
SET64(31, 0x1661d8);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00166208; }
SET64(31, 0x1661e8); SET64(4, RD(17) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_00166208:;
wr32(c, (RW(16) + 244), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x166220); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x166234);  rt_call(c, t); }
SET64(31, 0x16623c); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(16) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16625c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(4, RD(0) + (s64)1);
wr8(c, (RW(16) + 270), (u8)RW(3));
L_00166268:;
if (RD(4) == RD(0)) { SET32(3, RW(0) + 40); goto L_00166280; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166280:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166288:;
SET64(31, 0x166290);  JP_F_00167BF0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00166AF4; }
SET32(3, RW(0) + 40);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_001662A4:;
SET64(18, (s32)rd32(c, (RW(3) + 60)));
if (RD(18) != RD(0)) { SET32(4, RW(0) + 36); goto L_001662B8; }
SET64(4, RD(0) + RD(0)); goto L_00166350;
L_001662B8:;
SET64(31, 0x1662c0);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001662F0; }
SET64(31, 0x1662d0); SET64(4, RD(17) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_001662F0:;
wr32(c, (RW(16) + 244), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x166308); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16631c);  rt_call(c, t); }
SET64(31, 0x166324); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(16) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x166344); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(4, RD(0) + (s64)1);
wr8(c, (RW(16) + 270), (u8)RW(3));
L_00166350:;
if (RD(4) == RD(0)) { SET32(3, RW(0) + 50); goto L_00166368; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166368:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166370:;
SET64(31, 0x166378);  JP_F_00167A60(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00166AF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166390:;
SET64(31, 0x166398);  JP_F_00167940(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00166AF4; }
SET32(3, RW(0) + 50);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_001663AC:;
SET64(18, (s32)rd32(c, (RW(3) + 64)));
if (RD(18) != RD(0)) { SET32(4, RW(0) + 36); goto L_001663C0; }
SET64(4, RD(0) + RD(0)); goto L_00166458;
L_001663C0:;
SET64(31, 0x1663c8);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001663F8; }
SET64(31, 0x1663d8); SET64(4, RD(17) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_001663F8:;
wr32(c, (RW(16) + 244), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x166410); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x166424);  rt_call(c, t); }
SET64(31, 0x16642c); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(16) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16644c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(4, RD(0) + (s64)1);
wr8(c, (RW(16) + 270), (u8)RW(3));
L_00166458:;
if (RD(4) == RD(0)) { SET32(3, RW(0) + 60); goto L_00166470; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166470:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166478:;
SET64(31, 0x166480);  JP_F_001676C0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00166AF4; }
SET32(3, RW(0) + 60);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166494:;
SET64(18, (s32)rd32(c, (RW(3) + 68)));
if (RD(18) != RD(0)) { SET32(4, RW(0) + 36); goto L_001664A8; }
SET64(4, RD(0) + RD(0)); goto L_00166540;
L_001664A8:;
SET64(31, 0x1664b0);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001664E0; }
SET64(31, 0x1664c0); SET64(4, RD(17) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_001664E0:;
wr32(c, (RW(16) + 244), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1664f8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16650c);  rt_call(c, t); }
SET64(31, 0x166514); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(16) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x166534); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(4, RD(0) + (s64)1);
wr8(c, (RW(16) + 270), (u8)RW(3));
L_00166540:;
if (RD(4) == RD(0)) { SET32(3, RW(0) + 70); goto L_00166558; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166558:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166560:;
SET64(31, 0x166568);  JP_F_00167360(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00166AF4; }
SET32(3, RW(0) + 70);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_0016657C:;
SET64(31, 0x166584); SET64(5, (s32)rd32(c, (RW(2) + 72))); JP_F_00166F20(c);
if (RD(2) == RD(0)) { SET32(3, RW(0) + 80); goto L_0016659C; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_0016659C:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_001665A4:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1665b4);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_001665C4; }
SET64(3, RD(0) + RD(0)); goto L_00166604;
L_001665C4:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1665d4);  rt_call(c, t); }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 244), RW(0)); goto L_001665F8; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1665f4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 244), RW(0));
L_001665F8:;
SET64(31, 0x166600); SET64(4, (s32)rd32(c, (RW(16) + 304))); JP_F_0014A8E0(c);
SET64(3, RD(0) + (s64)1);
L_00166604:;
{ int t = RD(3) == RD(0);  if (t) goto L_00166AF4; }
SET32(3, RW(0) + 80);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166618:;
SET64(31, 0x166620);  JP_F_00165790(c);
SET32(3, RW(0) + 90);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_0016662C:;
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00166680; }
L_00166634:;
SET64(31, 0x16663c);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(2, RD(17) & 0xffff);
SET64(5, (s32)rd32(c, (RW(4) + 236)));
SET32(3, RW(2) << 2);
SET64(2, (s32)rd32(c, (RW(16) + 312)));
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x166668);  rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 292)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00166634; } }
L_00166680:;
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166690:;
SET64(31, 0x166698);  JP_F_002A4D70(c);
SET32(3, RW(0) + 100);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_001666A4:;
if (RD(4) == RD(0)) { wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4; }
wr16(c, (RW(16) + 264), (u16)RW(0));
wr16(c, (RW(16) + 266), (u16)RW(0));
wr16(c, (RW(16) + 0), (u16)RW(7)); goto L_00166AF4;
L_001666BC:;
SET32(4, RW(0) + 2);
wr8(c, (RW(16) + 270), (u8)RW(5));
SET64(7, rd16(c, (RW(16) + 266)));
SET64(6, rd16(c, (RW(16) + 288)));
SET64(8, rd16(c, (RW(16) + 264)));
SET64(5, (s32)rd32(c, (RW(16) + 300)));
mul_s(c, 0, 6, RSW(7), RSW(6));
SET32(7, RW(8) + RW(6));
SET32(6, RW(7) << 3);
SET32(7, RW(6) - RW(7));
SET32(6, RW(7) << 2);
SET32(6, RW(6) - RW(7));
SET32(6, RW(6) << 4);
SET32(5, RW(5) + RW(6));
SET64(5, rd16(c, (RW(5) + 276)));
{ int t = RD(5) == RD(4);  if (t) goto L_00166AF4; }
SET32(4, RW(8) + 1);
wr16(c, (RW(16) + 264), (u16)RW(4));
SET64(5, rd16(c, (RW(16) + 264)));
SET64(4, rd16(c, (RW(16) + 288)));
SET64(4, RSD(5) < RSD(4));
if (RD(4) != RD(0)) { SET64(5, rd16(c, (RW(16) + 266))); goto L_0016674C; }
wr16(c, (RW(16) + 264), (u16)RW(0));
SET64(4, rd16(c, (RW(16) + 266)));
SET32(4, RW(4) + 1);
wr16(c, (RW(16) + 266), (u16)RW(4));
SET64(5, rd16(c, (RW(16) + 266)));
SET64(4, rd16(c, (RW(16) + 290)));
SET64(4, RSD(5) < RSD(4));
{ int t = RD(4) != RD(0);  if (t) goto L_00166748; }
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166748:;
SET64(5, rd16(c, (RW(16) + 266)));
L_0016674C:;
SET64(4, rd16(c, (RW(16) + 288)));
SET64(6, rd16(c, (RW(16) + 264)));
SET64(3, (s32)rd32(c, (RW(16) + 300)));
mul_s(c, 0, 4, RSW(5), RSW(4));
SET32(5, RW(6) + RW(4));
SET32(4, RW(5) << 3);
SET32(5, RW(4) - RW(5));
SET32(4, RW(5) << 2);
SET32(4, RW(4) - RW(5));
SET32(4, RW(4) << 4);
SET32(4, RW(3) + RW(4));
SET64(3, rd16(c, (RW(4) + 276)));
if (RD(3) == RD(0)) { SET32(3, RW(6) + 1); goto L_0016679C; }
SET64(31, 0x16678c); SET64(5, RD(0) + RD(0)); JP_F_0016CD30(c);
{ int t = RD(2) == RD(0);  if (t) { POLL(); goto L_00166748; } }
 goto L_00166AF4;
L_0016679C:;
wr16(c, (RW(16) + 264), (u16)RW(3));
SET64(4, rd16(c, (RW(16) + 264)));
SET64(3, rd16(c, (RW(16) + 288)));
SET64(3, RSD(4) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00166748; } }
wr16(c, (RW(16) + 264), (u16)RW(0));
SET64(3, rd16(c, (RW(16) + 266)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 266), (u16)RW(3));
SET64(4, rd16(c, (RW(16) + 266)));
SET64(3, rd16(c, (RW(16) + 290)));
SET64(3, RSD(4) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00166748; } }
SET32(3, RW(0) + 2000);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_001667E4:;
SET64(18, (s32)rd32(c, (RW(3) + 40)));
if (RD(18) != RD(0)) { SET32(4, RW(0) + 36); goto L_001667F8; }
SET64(4, RD(0) + RD(0)); goto L_00166890;
L_001667F8:;
SET64(31, 0x166800);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00166830; }
SET64(31, 0x166810); SET64(4, RD(17) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_00166830:;
wr32(c, (RW(16) + 244), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x166848); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16685c);  rt_call(c, t); }
SET64(31, 0x166864); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(16) + 252), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x166884); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(4, RD(0) + (s64)1);
wr8(c, (RW(16) + 270), (u8)RW(3));
L_00166890:;
{ int t = RD(4) == RD(0);  if (t) goto L_00166AF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_001668A8:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1668b8);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_001668C8; }
SET64(3, RD(0) + RD(0)); goto L_00166900;
L_001668C8:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1668d8);  rt_call(c, t); }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 244), RW(0)); goto L_001668FC; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1668f8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 244), RW(0));
L_001668FC:;
SET64(3, RD(0) + (s64)1);
L_00166900:;
{ int t = RD(3) == RD(0);  if (t) goto L_00166AF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166918:;
SET64(18, (s32)rd32(c, (RW(3) + 44)));
if (RD(18) != RD(0)) { SET32(4, RW(0) + 36); goto L_0016692C; }
SET64(4, RD(0) + RD(0)); goto L_001669C4;
L_0016692C:;
SET64(31, 0x166934);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00166964; }
SET64(31, 0x166944); SET64(4, RD(17) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_00166964:;
wr32(c, (RW(16) + 244), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16697c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x166990);  rt_call(c, t); }
SET64(31, 0x166998); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(16) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1669b8); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(4, RD(0) + (s64)1);
wr8(c, (RW(16) + 270), (u8)RW(3));
L_001669C4:;
{ int t = RD(4) == RD(0);  if (t) goto L_00166AF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_001669DC:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1669ec);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_001669FC; }
SET64(3, RD(0) + RD(0)); goto L_00166AA8;
L_001669FC:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x166a0c);  rt_call(c, t); }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { SET32(4, RW(0) + 44); goto L_00166A30; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x166a2c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(4, RW(0) + 44);
L_00166A30:;
SET64(31, 0x166a38); wr32(c, (RW(16) + 244), RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00166A7C; }
SET64(31, 0x166a48); SET64(4, RD(19) + RD(0)); JP_F_00158180(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -32);
SET32(2, RW(2) + 3024);
wr32(c, (RW(19) + 16), RW(3));
wr32(c, (RW(19) + 20), RW(0));
wr32(c, (RW(19) + 24), RW(0));
wr32(c, (RW(19) + 28), RW(0));
wr16(c, (RW(19) + 32), (u16)RW(0));
wr16(c, (RW(19) + 34), (u16)RW(0));
wr32(c, (RW(19) + 16), RW(2));
wr32(c, (RW(19) + 36), RW(0));
wr32(c, (RW(19) + 40), RW(0));
L_00166A7C:;
wr32(c, (RW(16) + 256), RW(19));
SET64(4, RD(19) + RD(0));
SET64(17, (s32)rd32(c, (RW(16) + 252)));
SET64(18, (s32)rd32(c, (RW(16) + 248)));
SET64(31, 0x166a94); SET64(5, RD(17) + RD(0)); JP_F_00157540(c);
wr32(c, (RW(19) + 36), RW(17));
SET64(3, RD(0) + (s64)1);
wr32(c, (RW(19) + 40), RW(18));
wr16(c, (RW(16) + 264), (u16)RW(0));
wr16(c, (RW(16) + 266), (u16)RW(0));
L_00166AA8:;
{ int t = RD(3) == RD(0);  if (t) goto L_00166AF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166AC0:;
SET64(31, 0x166ac8);  JP_F_00166BD0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00166AF4; }
SET32(3, RW(0) + 2000);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00166AF4;
L_00166ADC:;
SET64(31, 0x166ae4);  JP_F_00139AB0(c);
 goto L_00166AF4;
L_00166AEC:;
SET64(31, 0x166af4);  JP_F_00139AB0(c);
L_00166AF4:;
SET64(31, rd64(c, (RW(29) + 64)));
L_00166AF8:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00166B10(Ctx *c) { /* func_00166B10 */
ENTER(0x166b10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x166b28); SET64(16, RD(4) + RD(0)); JP_F_00139590(c);
SET64(2, rd8(c, (RW(2) + 32)));
if (RD(2) == RD(0)) { SET32(17, RW(0) + 1); goto L_00166B38; }
SET32(17, RW(0) + 2);
L_00166B38:;
SET64(31, 0x166b40);  JP_F_002C2AD0(c);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 256); goto L_00166B4C; }
SET32(2, RW(0) + 240);
L_00166B4C:;
mul_s(c, 0, 4, RSW(2), RSW(17));
SET32(3, RW(4) << 2);
SET64(2, (s64)(s32)0x51eb0000);
SET32(3, RW(3) + RW(4));
SET64(2, RD(2) | 0x851f);
SET32(3, RW(3) << 4);
mul_s(c, 0, 0, RSW(2), RSW(3));
SET64(2, c->hi.d[0]);
SET32(3, RW(3) >> 31);
SET32(2, RSW(2) >> 5);
SET32(17, RW(2) + RW(3));
L_00166B78:;
SET64(31, 0x166b80); SET64(4, RD(16) + RD(0)); JP_F_00165AE0(c);
SET64(31, 0x166b88);  JP_F_002AA820(c);
SET64(1, RD(2) < RD(17));
{ int t = RD(1) == RD(0);  if (t) goto L_00166BB0; }
SET64(3, rd8(c, (RW(16) + 270)));
{ int t = RD(3) != RD(0);  if (t) goto L_00166BB0; }
SET64(4, (s32)rd32(c, (RW(16) + 48)));
SET32(3, RW(0) + 3);
{ int t = RD(4) == RD(3);  if (t) { POLL(); goto L_00166B78; } }
L_00166BB0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00166BD0(Ctx *c) { /* func_00166BD0 */
ENTER(0x166bd0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(6, rd16(c, (RW(4) + 266)));
SET64(5, rd16(c, (RW(4) + 288)));
SET64(3, rd16(c, (RW(4) + 264)));
SET64(2, (s32)rd32(c, (RW(4) + 296)));
mul_s(c, 0, 4, RSW(6), RSW(5));
SET32(4, RW(3) + RW(4));
SET32(3, RW(4) << 2);
SET32(2, RW(2) + RW(3));
SET64(3, rd16(c, (RW(2) + 2)));
SET64(2, rd16(c, (RW(2) + 0)));
if (RD(2) == RD(0)) { SET32(3, RW(4) << 3); goto L_00166C94; }
SET64(5, (s32)rd32(c, (RW(19) + 256)));
SET64(2, RD(3) & 0xffff);
SET32(4, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(5) + 20)));
SET64(2, rd32(c, (RW(5) + 40)));
SET32(3, RW(3) + RW(4));
SET64(3, rd32(c, (RW(3) + 0)));
SET64(2, RD(2) + RD(3));
SET64(16, RD(2) << 32);
SET64(16, RSD(16) >> 32);
SET64(31, 0x166c4c); SET64(4, RD(16) + RD(0)); JP_F_0014AC10(c);
SET64(6, rd16(c, (RW(19) + 266)));
SET64(4, rd16(c, (RW(19) + 288)));
SET64(3, rd16(c, (RW(19) + 264)));
SET64(2, (s32)rd32(c, (RW(19) + 300)));
mul_s(c, 0, 4, RSW(6), RSW(4));
SET32(4, RW(3) + RW(4));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x166c8c); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(6, rd16(c, (RW(19) + 266))); goto L_00166CC8;
L_00166C94:;
SET64(2, (s32)rd32(c, (RW(19) + 300)));
SET32(4, RW(3) - RW(4));
SET64(5, RD(0) + RD(0));
SET32(3, RW(4) << 2);
SET64(6, RD(0) + RD(0));
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 196)));
{ u32 t = RW(25); SET64(31, 0x166cc4); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(6, rd16(c, (RW(19) + 266)));
L_00166CC8:;
SET32(2, RW(0) + 3);
SET64(3, rd16(c, (RW(19) + 288)));
SET64(5, rd16(c, (RW(19) + 264)));
SET64(4, (s32)rd32(c, (RW(19) + 300)));
mul_s(c, 0, 6, RSW(6), RSW(3));
SET64(7, rd16(c, (RW(19) + 292)));
SET32(6, RW(5) + RW(6));
SET64(3, (s32)rd32(c, (RW(19) + 312)));
SET32(5, RW(6) << 3);
SET32(6, RW(5) - RW(6));
SET32(5, RW(6) << 2);
SET32(5, RW(5) - RW(6));
SET32(5, RW(5) << 4);
SET32(18, RW(4) + RW(5));
wr32(c, (RW(18) + 288), RW(3));
wr16(c, (RW(18) + 292), (u16)RW(7));
SET64(3, rd16(c, (RW(18) + 276)));
{ int t = RD(3) != RD(2);  if (t) goto L_00166D50; }
SET64(2, rd16(c, (RW(18) + 292)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00166D50; }
SET64(16, RD(0) + RD(0));
L_00166D24:;
SET64(2, (s32)rd32(c, (RW(18) + 288)));
SET64(6, RD(17) & 0xffff);
SET32(2, RW(2) + RW(16));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x166d3c); SET64(4, RD(18) + RD(0)); JP_F_00162110(c);
SET64(2, rd16(c, (RW(18) + 292)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00166D24; } }
L_00166D50:;
SET64(2, rd16(c, (RW(19) + 292)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00166DC8; }
SET64(16, RD(0) + RD(0));
L_00166D60:;
SET64(4, (s32)rd32(c, (RW(19) + 312)));
SET32(2, RW(0) + 3);
SET64(6, rd16(c, (RW(19) + 266)));
SET64(3, rd16(c, (RW(19) + 288)));
SET32(5, RW(4) + RW(16));
SET64(4, rd16(c, (RW(19) + 264)));
mul_s(c, 0, 6, RSW(6), RSW(3));
SET32(6, RW(4) + RW(6));
SET64(3, (s32)rd32(c, (RW(19) + 300)));
SET32(4, RW(6) << 3);
SET32(6, RW(4) - RW(6));
SET32(4, RW(6) << 2);
SET32(4, RW(4) - RW(6));
SET32(4, RW(4) << 4);
SET32(4, RW(3) + RW(4));
SET64(3, rd16(c, (RW(4) + 276)));
{ int t = RD(3) != RD(2); SET64(5, (s32)rd32(c, (RW(5) + 0))); if (t) goto L_00166DB0; }
SET64(31, 0x166db0); SET64(6, RD(17) & 0xffff); JP_F_00162110(c);
L_00166DB0:;
SET64(2, rd16(c, (RW(19) + 292)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00166D60; } }
L_00166DC8:;
SET64(2, rd16(c, (RW(19) + 264)));
SET32(2, RW(2) + 1);
wr16(c, (RW(19) + 264), (u16)RW(2));
SET64(3, rd16(c, (RW(19) + 264)));
SET64(2, rd16(c, (RW(19) + 288)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00166E50; }
wr16(c, (RW(19) + 264), (u16)RW(0));
SET64(2, rd16(c, (RW(19) + 266)));
SET32(2, RW(2) + 1);
wr16(c, (RW(19) + 266), (u16)RW(2));
SET64(3, rd16(c, (RW(19) + 266)));
SET64(2, rd16(c, (RW(19) + 290)));
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00166E4C; }
SET64(4, (s32)rd32(c, (RW(19) + 256)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 256), RW(0)); goto L_00166E2C; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x166e28); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 256), RW(0));
L_00166E2C:;
SET64(31, 0x166e34); SET64(4, (s32)rd32(c, (RW(19) + 252))); JP_F_001004B0(c);
wr32(c, (RW(19) + 252), RW(0));
SET64(31, 0x166e40); SET64(4, (s32)rd32(c, (RW(19) + 248))); JP_F_001004B0(c);
wr32(c, (RW(19) + 248), RW(0));
SET32(2, RW(0) + 1); goto L_00166E50;
L_00166E4C:;
SET64(2, RD(0) + RD(0));
L_00166E50:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00166E70(Ctx *c) { /* func_00166E70 */
ENTER(0x166e70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00166EE8; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 3024);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x166ea8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_00166ED4; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + -32);
SET64(31, 0x166ec4); wr32(c, (RW(17) + 16), RW(2)); JP_F_00157620(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x166ed0); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(2, RD(16) << 48);
L_00166ED4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00166EEC; }
SET64(31, 0x166ee8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00166EE8:;
SET64(2, RD(17) + RD(0));
L_00166EEC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00166F00(Ctx *c) { /* func_00166F00 */
ENTER(0x166f00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 36), RW(0));
SET64(31, 0x166f14); wr32(c, (RW(4) + 40), RW(0)); JP_F_00157620(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00166F20(Ctx *c) { /* func_00166F20 */
ENTER(0x166f20);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(17, RD(5) + RD(0));
{ int t = RD(17) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_00166F4C; }
SET64(2, rd8(c, (RW(18) + 396)));
if (RD(2) == RD(0)) { SET32(4, RW(0) + 36); goto L_00166F58; }
L_00166F4C:;
wr32(c, (RW(18) + 304), RW(0));
SET64(2, RD(0) + RD(0)); goto L_00166FEC;
L_00166F58:;
SET64(31, 0x166f60);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00166F90; }
SET64(31, 0x166f70); SET64(4, RD(16) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_00166F90:;
wr32(c, (RW(18) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x166fa8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x166fbc);  rt_call(c, t); }
SET64(31, 0x166fc4); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
wr32(c, (RW(18) + 304), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x166fe4); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(18) + 270), (u8)RW(2));
L_00166FEC:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00167010(Ctx *c) { /* func_00167010 */
ENTER(0x167010);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(6, (s32)rd32(c, (RW(4) + 244)));
SET64(16, RD(4) + RD(0));
SET64(2, rd16(c, (RW(4) + 268)));
SET64(3, (s32)rd32(c, (RW(6) + 20)));
SET32(5, RW(2) << 2);
SET32(4, RW(0) + 2272);
SET64(2, (s32)rd32(c, (RW(6) + 24)));
SET32(3, RW(3) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x167054); SET32(19, RW(2) + RW(3)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001670D8; }
SET32(4, RW(18) + 2236);
SET32(17, RW(0) + 1);
SET64(31, 0x16706c); wr32(c, (RW(18) + 256), RW(4)); JP_F_00141C80(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x167078); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET64(31, 0x167080); SET32(4, RW(18) + 288); JP_F_00243A30(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15376);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 276), RW(2));
SET32(6, RW(6) + 15500);
SET64(5, (s32)rd32(c, (RW(18) + 256)));
SET32(3, RW(3) + 15448);
SET32(2, RW(18) + 2236);
SET32(4, RW(18) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(18) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x1670c0); wr32(c, (RW(3) + 20), RW(2)); JP_F_00161AA0(c);
SET64(31, 0x1670c8); SET32(4, RW(18) + 1040); JP_F_00161AA0(c);
SET64(31, 0x1670d0); SET32(4, RW(18) + 1632); JP_F_00161AA0(c);
wr32(c, (RW(18) + 2224), RW(0));
wr32(c, (RW(18) + 2228), RW(0));
L_001670D8:;
SET64(3, rd16(c, (RW(16) + 268)));
SET64(4, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 348)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x1670f4); wr32(c, (RW(2) + 0), RW(18)); JP_F_001400B0(c);
SET64(3, rd16(c, (RW(16) + 268)));
SET32(6, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(16) + 348)));
SET64(5, RD(19) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x167128); SET64(9, RD(6) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 312)));
{ int t = RD(2) == RD(0);  if (t) goto L_00167188; }
SET64(2, rd16(c, (RW(16) + 292)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00167188; }
SET64(17, RD(0) + RD(0));
L_00167144:;
SET64(4, rd16(c, (RW(16) + 268)));
SET64(3, (s32)rd32(c, (RW(16) + 348)));
SET64(2, (s32)rd32(c, (RW(16) + 312)));
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(17));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x167174); SET64(6, RD(18) & 0xffff); rt_call(c, t); }
SET64(2, rd16(c, (RW(16) + 292)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00167144; } }
L_00167188:;
SET64(6, rd16(c, (RW(16) + 268)));
SET64(2, (s32)rd32(c, (RW(16) + 348)));
SET64(4, (s32)rd32(c, (RW(16) + 344)));
SET32(5, RW(6) << 3);
SET32(3, RW(6) << 2);
SET32(5, RW(5) - RW(6));
SET32(2, RW(2) + RW(3));
SET32(3, RW(5) << 4);
SET32(5, RW(4) + RW(3));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
SET32(4, RW(3) + 288);
wr128(c, (RW(3) + 288) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 320) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 48) & ~15u, &c->r[2]);
SET64(31, 0x1671d8); wr128(c, (RW(3) + 336) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(3, rd16(c, (RW(16) + 268)));
SET64(2, (s32)rd32(c, (RW(16) + 348)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1671fc); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(2, rd16(c, (RW(16) + 268)));
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 268), (u16)RW(2));
SET64(3, rd16(c, (RW(16) + 268)));
SET64(2, rd16(c, (RW(16) + 340)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00167250; }
wr16(c, (RW(16) + 268), (u16)RW(0));
SET64(31, 0x167228); SET64(4, (s32)rd32(c, (RW(16) + 248))); JP_F_001004B0(c);
wr32(c, (RW(16) + 248), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 244), RW(0)); goto L_0016724C; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x167248); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 244), RW(0));
L_0016724C:;
SET32(2, RW(0) + 1);
L_00167250:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00167270(Ctx *c) { /* func_00167270 */
ENTER(0x167270);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(17, RD(5) + RD(0));
{ int t = RD(17) != RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_00167298; }
SET64(2, RD(0) + RD(0)); goto L_00167340;
L_00167298:;
if (RD(17) != RD(0)) { SET32(4, RW(0) + 36); goto L_001672AC; }
wr16(c, (RW(18) + 340), (u16)RW(0));
SET64(2, RD(0) + RD(0)); goto L_00167340;
L_001672AC:;
SET64(31, 0x1672b4);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001672E4; }
SET64(31, 0x1672c4); SET64(4, RD(16) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_001672E4:;
wr32(c, (RW(18) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1672fc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x167310);  rt_call(c, t); }
SET64(31, 0x167318); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(18) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x167338); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(18) + 270), (u8)RW(2));
L_00167340:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00167360(Ctx *c) { /* func_00167360 */
ENTER(0x167360);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x167390);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_001673A0; }
SET64(2, RD(0) + RD(0)); goto L_001676A0;
L_001673A0:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1673b0);  rt_call(c, t); }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { SET32(4, RW(0) + 768); goto L_001673D4; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1673d0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(4, RW(0) + 768);
L_001673D4:;
SET64(31, 0x1673dc); wr32(c, (RW(16) + 244), RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001674A8; }
SET32(4, RW(17) + 24);
SET32(3, RW(17) + 48);
wr32(c, (RW(17) + 304), RW(4));
SET32(2, RW(17) + 336);
wr32(c, (RW(17) + 0), RW(3));
SET32(18, RW(0) + 1);
SET64(31, 0x167404); wr32(c, (RW(17) + 4), RW(2)); JP_F_00141C80(c);
SET32(4, RW(17) + 48);
SET64(31, 0x167410); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET32(4, RW(17) + 336);
SET64(31, 0x16741c); SET64(5, RD(18) + RD(0)); JP_F_002A5500(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x167428); SET64(5, RD(0) + RD(0)); JP_F_001518B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 3072);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 12), RW(2));
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET32(9, RW(9) + 3168);
SET32(8, RW(8) + 3132);
SET32(7, RW(7) + 3240);
SET32(5, RW(17) + 24);
SET32(4, RW(17) + 48);
wr32(c, (RW(6) + 276), RW(9));
SET32(3, RW(17) + 336);
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET64(2, RD(18) + RD(0));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
wr32(c, (RW(6) + 16), RW(8));
SET64(6, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(6) + 144), RW(7));
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET32(4, RW(4) - RW(5));
wr32(c, (RW(5) + 280), RW(4));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 416), RW(3));
wr32(c, (RW(17) + 16), RW(0));
wr8(c, (RW(17) + 20), (u8)RW(2));
L_001674A8:;
wr32(c, (RW(16) + 388), RW(17));
SET32(2, RW(0) + 67);
SET64(3, rd8(c, (RW(16) + 397)));
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
wr8(c, (RW(17) + 20), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 248)));
SET64(3, (s8)rd8(c, (RW(4) + 0)));
{ int t = RD(3) != RD(2); SET64(17, RD(4) + RD(0)); if (t) goto L_00167500; }
SET64(3, (s8)rd8(c, (RW(4) + 1)));
SET32(2, RW(0) + 77);
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_00167504; }
SET64(3, (s8)rd8(c, (RW(4) + 2)));
SET32(2, RW(0) + 80);
{ int t = RD(3) != RD(2);  if (t) goto L_00167500; }
SET64(3, (s8)rd8(c, (RW(4) + 3)));
SET32(2, RW(0) + 83);
if (RD(3) == RD(2)) { SET64(2, RD(0) + (s64)1); goto L_00167504; }
L_00167500:;
SET64(2, RD(0) + RD(0));
L_00167504:;
{ int t = RD(2) == RD(0);  if (t) goto L_00167558; }
SET64(31, 0x167514); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_00100320(c);
SET64(18, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x167524); SET64(5, RD(18) + RD(0)); JP_F_00174300(c);
SET64(31, 0x16752c); SET64(4, RD(18) + RD(0)); JP_F_001400B0(c);
SET64(4, (s32)rd32(c, (RW(16) + 388)));
SET32(6, RW(0) + 1);
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x167548); SET64(7, RD(6) + RD(0)); rt_call(c, t); }
SET64(31, 0x167550); SET64(4, RD(18) + RD(0)); JP_F_001004B0(c);
SET64(2, (s32)rd32(c, (RW(16) + 312))); goto L_00167580;
L_00167558:;
SET64(31, 0x167560);  JP_F_001400B0(c);
SET64(4, (s32)rd32(c, (RW(16) + 388)));
SET32(6, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(16) + 248)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16757c); SET64(7, RD(6) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 312)));
L_00167580:;
{ int t = RD(2) == RD(0);  if (t) goto L_001675D0; }
SET64(2, rd16(c, (RW(16) + 292)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001675D0; }
SET64(17, RD(0) + RD(0));
L_00167598:;
SET64(3, (s32)rd32(c, (RW(16) + 388)));
SET64(2, (s32)rd32(c, (RW(16) + 312)));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(17));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x1675bc); SET64(6, RD(18) & 0xffff); rt_call(c, t); }
SET64(2, rd16(c, (RW(16) + 292)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00167598; } }
L_001675D0:;
SET64(2, (s32)rd32(c, (RW(16) + 388)));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 256)));
wr32(c, (RW(2) + 4), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 388)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1675fc); SET64(5, RD(0) | 0x8002); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 388)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(3) + 264)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00167690; }
SET64(17, RD(0) + RD(0));
L_00167614:;
SET64(2, (s32)rd32(c, (RW(3) + 272)));
SET32(2, RW(2) + RW(17));
SET64(19, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(19) == RD(0);  if (t) goto L_00167670; }
SET32(4, RW(19) + 240);
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 7);
SET64(7, RD(0) + RD(0));
SET64(31, 0x167640); SET64(8, RD(0) + RD(0)); JP_F_002B42A0(c);
SET32(4, RW(19) + 240);
SET64(5, RD(0) + RD(0));
SET64(31, 0x167650); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(4, RW(19) + 240);
SET32(5, RW(0) + 1);
SET64(31, 0x167660); SET32(6, RW(0) + 2); JP_F_002B4230(c);
SET64(25, (s32)rd32(c, (RW(19) + 248)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x167670); SET32(4, RW(19) + 240); rt_call(c, t); }
L_00167670:;
SET64(2, (s32)rd32(c, (RW(16) + 388)));
SET32(18, RW(18) + 1);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(3) + 264)));
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00167614; } }
L_00167690:;
SET64(31, 0x167698); SET64(4, (s32)rd32(c, (RW(16) + 248))); JP_F_001004B0(c);
wr32(c, (RW(16) + 248), RW(0));
SET32(2, RW(0) + 1);
L_001676A0:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001676C0(Ctx *c) { /* func_001676C0 */
ENTER(0x1676c0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1676ec);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_001676FC; }
SET64(2, RD(0) + RD(0)); goto L_00167928;
L_001676FC:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x16770c);  rt_call(c, t); }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { SET32(4, RW(0) + 2272); goto L_00167730; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16772c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(4, RW(0) + 2272);
L_00167730:;
SET64(31, 0x167738); wr32(c, (RW(16) + 244), RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001677BC; }
SET32(4, RW(18) + 2236);
SET32(17, RW(0) + 1);
SET64(31, 0x167750); wr32(c, (RW(18) + 256), RW(4)); JP_F_00141C80(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x16775c); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET64(31, 0x167764); SET32(4, RW(18) + 288); JP_F_00243A30(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15376);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 276), RW(2));
SET32(6, RW(6) + 15500);
SET64(5, (s32)rd32(c, (RW(18) + 256)));
SET32(3, RW(3) + 15448);
SET32(2, RW(18) + 2236);
SET32(4, RW(18) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(18) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x1677a4); wr32(c, (RW(3) + 20), RW(2)); JP_F_00161AA0(c);
SET64(31, 0x1677ac); SET32(4, RW(18) + 1040); JP_F_00161AA0(c);
SET64(31, 0x1677b4); SET32(4, RW(18) + 1632); JP_F_00161AA0(c);
wr32(c, (RW(18) + 2224), RW(0));
wr32(c, (RW(18) + 2228), RW(0));
L_001677BC:;
wr32(c, (RW(16) + 392), RW(18));
SET32(2, RW(0) + 67);
SET64(4, (s32)rd32(c, (RW(16) + 248)));
SET64(3, (s8)rd8(c, (RW(4) + 0)));
{ int t = RD(3) != RD(2); SET64(17, RD(4) + RD(0)); if (t) goto L_00167804; }
SET64(3, (s8)rd8(c, (RW(4) + 1)));
SET32(2, RW(0) + 77);
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_00167808; }
SET64(3, (s8)rd8(c, (RW(4) + 2)));
SET32(2, RW(0) + 80);
{ int t = RD(3) != RD(2);  if (t) goto L_00167804; }
SET64(3, (s8)rd8(c, (RW(4) + 3)));
SET32(2, RW(0) + 83);
if (RD(3) == RD(2)) { SET64(2, RD(0) + (s64)1); goto L_00167808; }
L_00167804:;
SET64(2, RD(0) + RD(0));
L_00167808:;
{ int t = RD(2) == RD(0);  if (t) goto L_00167864; }
SET64(31, 0x167818); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_00100320(c);
SET64(18, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x167828); SET64(5, RD(18) + RD(0)); JP_F_00174300(c);
SET64(31, 0x167830); SET64(4, RD(18) + RD(0)); JP_F_001400B0(c);
SET64(4, (s32)rd32(c, (RW(16) + 392)));
SET32(6, RW(0) + 1);
SET64(5, RD(18) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x167854); SET64(9, RD(6) + RD(0)); rt_call(c, t); }
SET64(31, 0x16785c); SET64(4, RD(18) + RD(0)); JP_F_001004B0(c);
SET64(2, (s32)rd32(c, (RW(16) + 312))); goto L_00167894;
L_00167864:;
SET64(31, 0x16786c);  JP_F_001400B0(c);
SET64(4, (s32)rd32(c, (RW(16) + 392)));
SET32(6, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(16) + 248)));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x167890); SET64(9, RD(6) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 312)));
L_00167894:;
{ int t = RD(2) == RD(0);  if (t) goto L_001678E0; }
SET64(2, rd16(c, (RW(16) + 292)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001678E0; }
SET64(17, RD(0) + RD(0));
L_001678AC:;
SET64(4, (s32)rd32(c, (RW(16) + 392)));
SET64(2, (s32)rd32(c, (RW(16) + 312)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET32(2, RW(2) + RW(17));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x1678cc); SET64(6, RD(18) & 0xffff); rt_call(c, t); }
SET64(2, rd16(c, (RW(16) + 292)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001678AC; } }
L_001678E0:;
SET64(2, (s32)rd32(c, (RW(16) + 392)));
SET32(3, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(2) + 256)));
wr32(c, (RW(2) + 4), RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x167904); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x167918); SET32(5, RW(0) + 128); rt_call(c, t); }
SET64(31, 0x167920); SET64(4, (s32)rd32(c, (RW(16) + 248))); JP_F_001004B0(c);
wr32(c, (RW(16) + 248), RW(0));
SET32(2, RW(0) + 1);
L_00167928:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00167940(Ctx *c) { /* func_00167940 */
ENTER(0x167940);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 260)));
{ int t = RD(16) == RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_00167968; }
SET64(4, RD(16) + RD(0)); goto L_00167970;
L_00167968:;
SET64(16, (s32)rd32(c, (RW(18) + 248)));
SET64(4, RD(16) + RD(0));
L_00167970:;
SET64(31, 0x167978);  JP_F_001400B0(c);
SET64(4, (s32)rd32(c, (RW(18) + 384)));
SET32(6, RW(0) + 1);
SET64(5, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x16799c); SET64(9, RD(6) + RD(0)); rt_call(c, t); }
SET64(31, 0x1679a4); SET64(4, (s32)rd32(c, (RW(18) + 260))); JP_F_001004B0(c);
wr32(c, (RW(18) + 260), RW(0));
SET64(31, 0x1679b0); SET64(4, (s32)rd32(c, (RW(18) + 248))); JP_F_001004B0(c);
wr32(c, (RW(18) + 248), RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 312)));
{ int t = RD(2) == RD(0);  if (t) goto L_00167A08; }
SET64(2, rd16(c, (RW(18) + 292)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00167A08; }
SET64(16, RD(0) + RD(0));
L_001679D0:;
SET64(4, (s32)rd32(c, (RW(18) + 384)));
SET64(2, (s32)rd32(c, (RW(18) + 312)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET32(2, RW(2) + RW(16));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x1679f0); SET64(6, RD(17) & 0xffff); rt_call(c, t); }
SET64(2, rd16(c, (RW(18) + 292)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001679D0; } }
L_00167A08:;
SET64(2, (s32)rd32(c, (RW(18) + 384)));
SET32(3, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(2) + 256)));
wr32(c, (RW(2) + 4), RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 384)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x167a2c); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 384)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x167a40); SET32(5, RW(0) + 128); rt_call(c, t); }
wr8(c, (RW(18) + 270), (u8)RW(0));
SET32(2, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00167A60(Ctx *c) { /* func_00167A60 */
ENTER(0x167a60);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x167a8c);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 244))); goto L_00167A9C; }
SET64(2, RD(0) + RD(0)); goto L_00167BD0;
L_00167A9C:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x167aac);  rt_call(c, t); }
SET32(5, RW(0) + 1);
wr8(c, (RW(18) + 270), (u8)RW(5));
SET64(4, (s32)rd32(c, (RW(18) + 244)));
if (RD(4) == RD(0)) { SET32(4, RW(0) + 2272); goto L_00167AD4; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x167ad0);  rt_call(c, t); }
SET32(4, RW(0) + 2272);
L_00167AD4:;
SET64(31, 0x167adc); wr32(c, (RW(18) + 244), RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00167B60; }
SET32(4, RW(17) + 2236);
SET32(16, RW(0) + 1);
SET64(31, 0x167af4); wr32(c, (RW(17) + 256), RW(4)); JP_F_00141C80(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x167b00); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET64(31, 0x167b08); SET32(4, RW(17) + 288); JP_F_00243A30(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15376);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 276), RW(2));
SET32(6, RW(6) + 15500);
SET64(5, (s32)rd32(c, (RW(17) + 256)));
SET32(3, RW(3) + 15448);
SET32(2, RW(17) + 2236);
SET32(4, RW(17) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(17) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x167b48); wr32(c, (RW(3) + 20), RW(2)); JP_F_00161AA0(c);
SET64(31, 0x167b50); SET32(4, RW(17) + 1040); JP_F_00161AA0(c);
SET64(31, 0x167b58); SET32(4, RW(17) + 1632); JP_F_00161AA0(c);
wr32(c, (RW(17) + 2224), RW(0));
wr32(c, (RW(17) + 2228), RW(0));
L_00167B60:;
wr32(c, (RW(18) + 384), RW(17));
SET32(2, RW(0) + 67);
SET64(16, (s32)rd32(c, (RW(18) + 248)));
SET64(3, (s8)rd8(c, (RW(16) + 0)));
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_00167BAC; }
SET64(3, (s8)rd8(c, (RW(16) + 1)));
SET32(2, RW(0) + 77);
{ int t = RD(3) != RD(2);  if (t) goto L_00167BA8; }
SET64(3, (s8)rd8(c, (RW(16) + 2)));
SET32(2, RW(0) + 80);
{ int t = RD(3) != RD(2);  if (t) goto L_00167BA8; }
SET64(3, (s8)rd8(c, (RW(16) + 3)));
SET32(2, RW(0) + 83);
if (RD(3) == RD(2)) { SET64(2, RD(0) + (s64)1); goto L_00167BAC; }
L_00167BA8:;
SET64(2, RD(0) + RD(0));
L_00167BAC:;
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 260), RW(0)); goto L_00167BCC; }
SET64(31, 0x167bbc); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_00100320(c);
wr32(c, (RW(18) + 260), RW(2));
SET64(4, RD(16) + RD(0));
SET64(31, 0x167bcc); SET64(5, RD(2) + RD(0)); JP_F_00174300(c);
L_00167BCC:;
SET32(2, RW(0) + 1);
L_00167BD0:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00167BF0(Ctx *c) { /* func_00167BF0 */
ENTER(0x167bf0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x167c1c);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 244))); goto L_00167C2C; }
SET64(2, RD(0) + RD(0)); goto L_00167DD4;
L_00167C2C:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x167c3c);  rt_call(c, t); }
wr8(c, (RW(18) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 244)));
if (RD(4) == RD(0)) { SET32(4, RW(0) + 768); goto L_00167C60; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x167c5c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(4, RW(0) + 768);
L_00167C60:;
SET64(31, 0x167c68); wr32(c, (RW(18) + 244), RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00167C7C; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x167c7c); SET32(5, RW(0) + 1); JP_F_001518B0(c);
L_00167C7C:;
wr32(c, (RW(18) + 380), RW(16));
SET32(2, RW(0) + 67);
SET64(4, (s32)rd32(c, (RW(18) + 248)));
SET64(3, (s8)rd8(c, (RW(4) + 0)));
{ int t = RD(3) != RD(2); SET64(16, RD(4) + RD(0)); if (t) goto L_00167CC4; }
SET64(3, (s8)rd8(c, (RW(4) + 1)));
SET32(2, RW(0) + 77);
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_00167CC8; }
SET64(3, (s8)rd8(c, (RW(4) + 2)));
SET32(2, RW(0) + 80);
{ int t = RD(3) != RD(2);  if (t) goto L_00167CC4; }
SET64(3, (s8)rd8(c, (RW(4) + 3)));
SET32(2, RW(0) + 83);
if (RD(3) == RD(2)) { SET64(2, RD(0) + (s64)1); goto L_00167CC8; }
L_00167CC4:;
SET64(2, RD(0) + RD(0));
L_00167CC8:;
{ int t = RD(2) == RD(0);  if (t) goto L_00167D1C; }
SET64(31, 0x167cd8); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_00100320(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x167ce8); SET64(5, RD(17) + RD(0)); JP_F_00174300(c);
SET64(31, 0x167cf0); SET64(4, RD(17) + RD(0)); JP_F_001400B0(c);
SET64(4, (s32)rd32(c, (RW(18) + 380)));
SET64(5, RD(17) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x167d0c); SET32(7, RW(0) + 1); rt_call(c, t); }
SET64(31, 0x167d14); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
SET64(2, (s32)rd32(c, (RW(18) + 312))); goto L_00167D44;
L_00167D1C:;
SET64(31, 0x167d24);  JP_F_001400B0(c);
SET64(4, (s32)rd32(c, (RW(18) + 380)));
SET64(6, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(18) + 248)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x167d40); SET32(7, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 312)));
L_00167D44:;
{ int t = RD(2) == RD(0);  if (t) goto L_00167D98; }
SET64(2, rd16(c, (RW(18) + 292)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00167D98; }
SET64(16, RD(0) + RD(0));
L_00167D5C:;
SET64(3, (s32)rd32(c, (RW(18) + 380)));
SET64(2, (s32)rd32(c, (RW(18) + 312)));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(16));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x167d80); SET64(6, RD(17) & 0xffff); rt_call(c, t); }
SET64(2, rd16(c, (RW(18) + 292)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00167D5C; } }
L_00167D98:;
SET64(2, (s32)rd32(c, (RW(18) + 380)));
SET32(3, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 256)));
wr32(c, (RW(2) + 4), RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 380)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x167dc4); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(31, 0x167dcc); SET64(4, (s32)rd32(c, (RW(18) + 248))); JP_F_001004B0(c);
wr32(c, (RW(18) + 248), RW(0));
SET32(2, RW(0) + 1);
L_00167DD4:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00167DF0(Ctx *c) { /* func_00167DF0 */
ENTER(0x167df0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd16(c, (RW(4) + 328)));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00167E4C; }
wr16(c, (RW(16) + 268), (u16)RW(0));
SET64(31, 0x167e20); SET64(4, (s32)rd32(c, (RW(16) + 248))); JP_F_001004B0(c);
wr32(c, (RW(16) + 248), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 244), RW(0)); goto L_00167E44; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x167e40); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 244), RW(0));
L_00167E44:;
SET32(2, RW(0) + 1); goto L_001680B8;
L_00167E4C:;
SET64(6, (s32)rd32(c, (RW(16) + 244)));
SET32(4, RW(0) + 2272);
SET64(2, rd16(c, (RW(16) + 268)));
SET64(3, (s32)rd32(c, (RW(6) + 20)));
SET32(5, RW(2) << 2);
SET64(2, (s32)rd32(c, (RW(6) + 24)));
SET32(3, RW(3) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x167e74); SET32(19, RW(2) + RW(3)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_00167EF8; }
SET32(4, RW(18) + 2236);
SET32(17, RW(0) + 1);
SET64(31, 0x167e8c); wr32(c, (RW(18) + 256), RW(4)); JP_F_00141C80(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x167e98); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET64(31, 0x167ea0); SET32(4, RW(18) + 288); JP_F_00243A30(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15376);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 276), RW(2));
SET32(6, RW(6) + 15500);
SET64(5, (s32)rd32(c, (RW(18) + 256)));
SET32(3, RW(3) + 15448);
SET32(2, RW(18) + 2236);
SET32(4, RW(18) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(18) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x167ee0); wr32(c, (RW(3) + 20), RW(2)); JP_F_00161AA0(c);
SET64(31, 0x167ee8); SET32(4, RW(18) + 1040); JP_F_00161AA0(c);
SET64(31, 0x167ef0); SET32(4, RW(18) + 1632); JP_F_00161AA0(c);
wr32(c, (RW(18) + 2224), RW(0));
wr32(c, (RW(18) + 2228), RW(0));
L_00167EF8:;
SET64(3, rd16(c, (RW(16) + 268)));
SET64(4, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x167f14); wr32(c, (RW(2) + 0), RW(18)); JP_F_001400B0(c);
SET64(3, rd16(c, (RW(16) + 268)));
SET32(6, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET64(5, RD(19) + RD(0));
SET32(7, RW(0) + 4);
SET64(8, RD(0) + RD(0));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x167f48); SET64(9, RD(6) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 312)));
{ int t = RD(2) == RD(0);  if (t) goto L_00167FA8; }
SET64(2, rd16(c, (RW(16) + 292)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00167FA8; }
SET64(17, RD(0) + RD(0));
L_00167F64:;
SET64(4, rd16(c, (RW(16) + 268)));
SET64(3, (s32)rd32(c, (RW(16) + 336)));
SET64(2, (s32)rd32(c, (RW(16) + 312)));
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(17));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x167f94); SET64(6, RD(18) & 0xffff); rt_call(c, t); }
SET64(2, rd16(c, (RW(16) + 292)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00167F64; } }
L_00167FA8:;
SET64(6, rd16(c, (RW(16) + 268)));
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET64(4, (s32)rd32(c, (RW(16) + 332)));
SET32(5, RW(6) << 3);
SET32(3, RW(6) << 2);
SET32(5, RW(5) - RW(6));
SET32(2, RW(2) + RW(3));
SET32(3, RW(5) << 4);
SET32(5, RW(4) + RW(3));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
SET32(4, RW(3) + 288);
wr128(c, (RW(3) + 288) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 320) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 48) & ~15u, &c->r[2]);
SET64(31, 0x167ff8); wr128(c, (RW(3) + 336) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(3, rd16(c, (RW(16) + 268)));
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x16801c); SET32(5, RW(0) + 128); rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 268)));
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x168040); SET32(5, RW(0) + 64); rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 268)));
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x168064); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(2, rd16(c, (RW(16) + 268)));
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 268), (u16)RW(2));
SET64(3, rd16(c, (RW(16) + 268)));
SET64(2, rd16(c, (RW(16) + 328)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001680B8; }
wr16(c, (RW(16) + 268), (u16)RW(0));
SET64(31, 0x168090); SET64(4, (s32)rd32(c, (RW(16) + 248))); JP_F_001004B0(c);
wr32(c, (RW(16) + 248), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 244), RW(0)); goto L_001680B4; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1680b0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 244), RW(0));
L_001680B4:;
SET32(2, RW(0) + 1);
L_001680B8:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001680E0(Ctx *c) { /* func_001680E0 */
ENTER(0x1680e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x168104);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_00168114; }
SET64(2, RD(0) + RD(0)); goto L_00168180;
L_00168114:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x168124);  rt_call(c, t); }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(2, rd16(c, (RW(16) + 328)));
{ int t = RD(2) == RD(0);  if (t) goto L_00168178; }
SET64(2, RD(2) & 0xffff);
SET64(31, 0x168140); SET32(4, RW(2) << 2); JP_F_00100530(c);
wr32(c, (RW(16) + 336), RW(2));
SET64(2, rd16(c, (RW(16) + 328)));
{ int t = RSD(2) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_00168178; }
SET64(3, RD(0) + RD(0));
L_00168154:;
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(4, RW(4) + 1);
SET32(2, RW(2) + RW(3));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, rd16(c, (RW(16) + 328)));
SET64(2, RSD(4) < RSD(2));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 4); if (t) { POLL(); goto L_00168154; } }
L_00168178:;
wr16(c, (RW(16) + 268), (u16)RW(0));
SET32(2, RW(0) + 1);
L_00168180:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00168190(Ctx *c) { /* func_00168190 */
ENTER(0x168190);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(6) + RD(0));
{ int t = RD(5) == RD(0); wr8(c, (RW(4) + 270), (u8)RW(0)); if (t) goto L_0016850C; }
if (RD(16) == RD(0)) { SET64(3, rd16(c, (RW(19) + 290))); goto L_0016848C; }
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 40)));
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 244))); goto L_00168268; }
SET64(31, 0x1681d8); SET32(4, RW(0) + 36); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00168208; }
SET64(31, 0x1681e8); SET64(4, RD(16) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_00168208:;
wr32(c, (RW(19) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x168220); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x168234);  rt_call(c, t); }
SET64(31, 0x16823c); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(19) + 252), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16825c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_00168264:;
SET64(4, (s32)rd32(c, (RW(19) + 244)));
L_00168268:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x168278);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00168288; }
SET64(2, RD(0) + RD(0)); goto L_001682C8;
L_00168288:;
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x16829c);  rt_call(c, t); }
wr8(c, (RW(19) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
{ int t = RD(4) == RD(0);  if (t) goto L_001682C0; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1682bc); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001682C0:;
wr32(c, (RW(19) + 244), RW(0));
SET64(2, RD(0) + (s64)1);
L_001682C8:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00168264; } }
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 44)));
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 244))); goto L_00168380; }
SET64(31, 0x1682f0); SET32(4, RW(0) + 36); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00168320; }
SET64(31, 0x168300); SET64(4, RD(16) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_00168320:;
wr32(c, (RW(19) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x168338); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16834c);  rt_call(c, t); }
SET64(31, 0x168354); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x168374); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_0016837C:;
SET64(4, (s32)rd32(c, (RW(19) + 244)));
L_00168380:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x168390);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001683A0; }
SET64(2, RD(0) + RD(0)); goto L_00168458;
L_001683A0:;
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1683b4);  rt_call(c, t); }
wr8(c, (RW(19) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
{ int t = RD(4) == RD(0);  if (t) goto L_001683D8; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1683d4); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001683D8:;
SET32(4, RW(0) + 44);
SET64(31, 0x1683e4); wr32(c, (RW(19) + 244), RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_00168428; }
SET64(31, 0x1683f4); SET64(4, RD(18) + RD(0)); JP_F_00158180(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -32);
SET32(2, RW(2) + 3024);
wr32(c, (RW(18) + 16), RW(3));
wr32(c, (RW(18) + 20), RW(0));
wr32(c, (RW(18) + 24), RW(0));
wr32(c, (RW(18) + 28), RW(0));
wr16(c, (RW(18) + 32), (u16)RW(0));
wr16(c, (RW(18) + 34), (u16)RW(0));
wr32(c, (RW(18) + 16), RW(2));
wr32(c, (RW(18) + 36), RW(0));
wr32(c, (RW(18) + 40), RW(0));
L_00168428:;
wr32(c, (RW(19) + 256), RW(18));
SET64(16, (s32)rd32(c, (RW(19) + 252)));
SET64(4, RD(18) + RD(0));
SET64(17, (s32)rd32(c, (RW(19) + 248)));
SET64(31, 0x168440); SET64(5, RD(16) + RD(0)); JP_F_00157540(c);
wr32(c, (RW(18) + 36), RW(16));
SET64(2, RD(0) + (s64)1);
wr32(c, (RW(18) + 40), RW(17));
wr16(c, (RW(19) + 264), (u16)RW(0));
wr16(c, (RW(19) + 266), (u16)RW(0));
L_00168458:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016837C; } }
L_00168468:;
SET64(31, 0x168470); SET64(4, RD(19) + RD(0)); JP_F_00166BD0(c);
SET64(3, RD(0) < RD(2));
SET64(3, RD(3) ^ 0x1);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00168468; } }
SET64(31, rd64(c, (RW(29) + 64))); goto L_00168568;
L_0016848C:;
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00168564; }
SET64(5, rd16(c, (RW(19) + 288)));
L_00168498:;
{ int t = RSD(5) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001684F0; }
SET64(16, RD(18) & 0xffff);
L_001684A8:;
SET64(4, RD(17) & 0xffff);
mul_s(c, 0, 3, RSW(16), RSW(5));
SET64(2, (s32)rd32(c, (RW(19) + 300)));
SET32(4, RW(4) + RW(3));
SET32(5, RW(0) + 1);
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET64(31, 0x1684d8); SET32(4, RW(2) + RW(3)); JP_F_0016CD30(c);
SET64(5, rd16(c, (RW(19) + 288)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(5));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_001684A8; } }
L_001684F0:;
SET64(3, rd16(c, (RW(19) + 290)));
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < RSD(3));
if (RD(3) != RD(0)) { SET64(5, rd16(c, (RW(19) + 288))); { POLL(); goto L_00168498; } }
 goto L_00168564;
L_0016850C:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x16851c);  rt_call(c, t); }
if (RD(16) == RD(0)) { wr16(c, (RW(19) + 264), (u16)RW(0)); goto L_00168548; }
wr16(c, (RW(19) + 264), (u16)RW(0));
SET64(31, 0x168530); wr16(c, (RW(19) + 266), (u16)RW(0)); JP_F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x16853c); SET64(5, RD(19) + RD(0)); JP_F_0013A470(c);
SET32(3, RW(0) + 300);
wr16(c, (RW(19) + 0), (u16)RW(3)); goto L_00168564;
L_00168548:;
SET64(31, 0x168550); wr16(c, (RW(19) + 266), (u16)RW(0)); JP_F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x16855c); SET64(5, RD(19) + RD(0)); JP_F_0013A470(c);
SET32(3, RW(0) + 200);
wr16(c, (RW(19) + 0), (u16)RW(3));
L_00168564:;
SET64(31, rd64(c, (RW(29) + 64)));
L_00168568:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00168580(Ctx *c) { /* func_00168580 */
ENTER(0x168580);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 380)));
{ int t = RD(4) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001685D8; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1685c0);  rt_call(c, t); }
c->f[0].u = rd32(c, (RW(16) + 12));
wr32(c, (RW(29) + 124), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 380)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1685d8); SET32(5, RW(29) + 124); JP_F_001532B0(c);
L_001685D8:;
SET64(4, (s32)rd32(c, (RW(17) + 384)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 392))); goto L_0016860C; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x1685f4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 384)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x168608); c->f[12].u = rd32(c, (RW(16) + 12)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 392)));
L_0016860C:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 388))); goto L_0016863C; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x168624); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 392)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x168638); c->f[12].u = rd32(c, (RW(16) + 12)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 388)));
L_0016863C:;
if (RD(4) == RD(0)) { SET64(3, rd16(c, (RW(17) + 328))); goto L_00168670; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x168654); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
c->f[0].u = rd32(c, (RW(16) + 12));
wr32(c, (RW(29) + 120), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 388)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x16866c); SET32(5, RW(29) + 120); JP_F_001532B0(c);
SET64(3, rd16(c, (RW(17) + 328)));
L_00168670:;
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_001686C8; }
SET64(18, RD(0) + RD(0));
L_0016867C:;
SET64(2, (s32)rd32(c, (RW(17) + 336)));
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x168698); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 336)));
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x1686b4); c->f[12].u = rd32(c, (RW(16) + 12)); rt_call(c, t); }
SET64(3, rd16(c, (RW(17) + 328)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_0016867C; } }
L_001686C8:;
SET64(3, rd16(c, (RW(17) + 290)));
{ int t = RSD(3) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00168790; }
SET64(4, rd16(c, (RW(17) + 288)));
L_001686D8:;
{ int t = RSD(4) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00168778; }
SET64(19, RD(21) & 0xffff);
L_001686E8:;
SET64(18, RD(20) & 0xffff);
mul_s(c, 0, 3, RSW(19), RSW(4));
SET64(2, (s32)rd32(c, (RW(17) + 300)));
SET32(4, RW(18) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x168720); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
c->f[0].u = rd32(c, (RW(16) + 12));
wr32(c, (RW(29) + 116), c->f[0].u);
SET64(3, rd16(c, (RW(17) + 288)));
SET64(2, (s32)rd32(c, (RW(17) + 300)));
mul_s(c, 0, 3, RSW(19), RSW(3));
SET32(4, RW(18) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x168760); SET32(5, RW(29) + 116); rt_call(c, t); }
SET64(4, rd16(c, (RW(17) + 288)));
SET32(20, RW(20) + 1);
SET64(3, RSD(20) < RSD(4));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_001686E8; } }
L_00168778:;
SET64(3, rd16(c, (RW(17) + 290)));
SET32(21, RW(21) + 1);
SET64(3, RSD(21) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, rd16(c, (RW(17) + 288))); { POLL(); goto L_001686D8; } }
L_00168790:;
SET64(3, (s32)rd32(c, (RW(17) + 348)));
{ int t = RD(3) == RD(0);  if (t) goto L_001687E0; }
SET64(3, rd16(c, (RW(17) + 340)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_001687E0; }
SET64(18, RD(0) + RD(0));
L_001687AC:;
SET64(2, (s32)rd32(c, (RW(17) + 348)));
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x1687c8); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(17) + 340)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_001687AC; } }
L_001687E0:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_00168810(Ctx *c) { /* func_00168810 */
ENTER(0x168810);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(19) + RD(0));
L_00168838:;
SET64(3, RD(17) & 0xffff);
SET64(1, RSD(3) < (s64)3);
{ int t = RD(1) == RD(0);  if (t) goto L_00168868; }
SET32(3, RW(3) << 2);
SET32(3, RW(19) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 192)));
{ int t = RD(3) == RD(0);  if (t) goto L_00168868; }
SET64(3, RD(0) + (s64)1); goto L_00168870;
L_00168868:;
SET64(3, RD(0) + RD(0));
L_00168870:;
{ int t = RD(3) == RD(0);  if (t) goto L_00168890; }
SET64(4, (s32)rd32(c, (RW(16) + 192)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x16888c); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00168890:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00168838; } }
SET64(4, (s32)rd32(c, (RW(19) + 320)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_001688B8; }
SET64(31, 0x1688b4); SET64(5, RD(18) + RD(0)); JP_F_001F0DE0(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_001688B8:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001688D0(Ctx *c) { /* func_001688D0 */
ENTER(0x1688d0);
SET64(2, rd8(c, (RW(4) + 398))); return;
}

void JP_F_001688E0(Ctx *c) { /* func_001688E0 */
ENTER(0x1688e0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, rd8(c, (RW(4) + 398)));
SET64(16, RD(5) + RD(0));
SET64(3, RD(16) & 0xff);
if (RD(4) == RD(3)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_00168ACC; }
wr8(c, (RW(17) + 398), (u8)RW(16));
SET64(3, (s32)rd32(c, (RW(17) + 380)));
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 384))); goto L_00168940; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x16893c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 384)));
L_00168940:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 392))); goto L_0016895C; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x168958); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 392)));
L_0016895C:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 388))); goto L_00168978; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x168974); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 388)));
L_00168978:;
if (RD(4) == RD(0)) { SET64(3, rd16(c, (RW(17) + 328))); goto L_00168994; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x168990); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(17) + 328)));
L_00168994:;
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_001689D0; }
SET64(18, RD(0) + RD(0));
L_001689A0:;
SET64(2, (s32)rd32(c, (RW(17) + 336)));
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x1689bc); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(17) + 328)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_001689A0; } }
L_001689D0:;
SET64(3, rd16(c, (RW(17) + 290)));
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00168A58; }
SET64(5, rd16(c, (RW(17) + 288)));
L_001689E0:;
{ int t = RSD(5) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00168A40; }
SET64(18, RD(20) & 0xffff);
L_001689F0:;
SET64(4, RD(19) & 0xffff);
mul_s(c, 0, 3, RSW(18), RSW(5));
SET64(2, (s32)rd32(c, (RW(17) + 300)));
SET32(4, RW(4) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x168a28); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(5, rd16(c, (RW(17) + 288)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(5));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_001689F0; } }
L_00168A40:;
SET64(3, rd16(c, (RW(17) + 290)));
SET32(20, RW(20) + 1);
SET64(3, RSD(20) < RSD(3));
if (RD(3) != RD(0)) { SET64(5, rd16(c, (RW(17) + 288))); { POLL(); goto L_001689E0; } }
L_00168A58:;
SET64(3, rd16(c, (RW(17) + 340)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00168A98; }
SET64(18, RD(0) + RD(0));
L_00168A68:;
SET64(2, (s32)rd32(c, (RW(17) + 348)));
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x168a84); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(17) + 340)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_00168A68; } }
L_00168A98:;
SET64(4, (s32)rd32(c, (RW(17) + 412)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 400))); goto L_00168AB8; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x168ab4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 400)));
L_00168AB8:;
{ int t = RD(4) == RD(0);  if (t) goto L_00168AC8; }
SET64(31, 0x168ac8); SET64(5, RD(16) + RD(0)); JP_F_00170E40(c);
L_00168AC8:;
SET64(31, rd64(c, (RW(29) + 80)));
L_00168ACC:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00168AF0(Ctx *c) { /* func_00168AF0 */
ENTER(0x168af0);
 return;
}

void JP_F_00168B00(Ctx *c) { /* func_00168B00 */
ENTER(0x168b00);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(6) + RD(0));
{ int t = RD(18) == RD(0); SET64(5, RD(18) + RD(0)); if (t) goto L_00168B38; }
SET32(5, RW(5) + 64);
L_00168B38:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x168b44); SET32(4, RW(4) + 1264); JP_F_00243880(c);
SET64(4, (s32)rd32(c, (RW(18) + 380)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 384))); goto L_00168B64; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x168b60); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 384)));
L_00168B64:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 392))); goto L_00168B80; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x168b7c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 392)));
L_00168B80:;
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 336))); goto L_00168B9C; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x168b98); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 336)));
L_00168B9C:;
{ int t = RD(2) == RD(0);  if (t) goto L_00168C30; }
SET64(2, rd16(c, (RW(18) + 328)));
{ int t = RSD(2) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00168C30; }
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_00168BB8:;
SET64(2, (s32)rd32(c, (RW(18) + 332)));
SET32(2, RW(2) + RW(20));
SET64(2, rd16(c, (RW(2) + 98)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_00168BF8; }
SET64(2, (s32)rd32(c, (RW(18) + 336)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x168bec); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
 goto L_00168C18;
L_00168BF8:;
SET64(2, (s32)rd32(c, (RW(18) + 336)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x168c14); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_00168C18:;
SET64(2, rd16(c, (RW(18) + 328)));
SET32(21, RW(21) + 1);
SET32(20, RW(20) + 112);
SET64(2, RSD(21) < RSD(2));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_00168BB8; } }
L_00168C30:;
SET64(2, (s32)rd32(c, (RW(18) + 300)));
{ int t = RD(2) == RD(0);  if (t) goto L_00168CC0; }
SET64(2, rd16(c, (RW(18) + 290)));
{ int t = RSD(2) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00168CC0; }
SET64(3, rd16(c, (RW(18) + 288)));
L_00168C4C:;
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00168CA8; }
SET64(19, RD(21) & 0xffff);
L_00168C58:;
SET64(4, RD(20) & 0xffff);
mul_s(c, 0, 3, RSW(19), RSW(3));
SET64(2, (s32)rd32(c, (RW(18) + 300)));
SET64(5, RD(17) + RD(0));
SET32(4, RW(4) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 204)));
{ u32 t = RW(25); SET64(31, 0x168c94); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(18) + 288)));
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < RSD(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00168C58; } }
L_00168CA8:;
SET64(2, rd16(c, (RW(18) + 290)));
SET32(21, RW(21) + 1);
SET64(2, RSD(21) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(18) + 288))); { POLL(); goto L_00168C4C; } }
L_00168CC0:;
SET64(2, (s32)rd32(c, (RW(18) + 348)));
{ int t = RD(2) == RD(0);  if (t) goto L_00168D58; }
SET64(2, rd16(c, (RW(18) + 340)));
{ int t = RSD(2) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00168D58; }
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_00168CE0:;
SET64(2, (s32)rd32(c, (RW(18) + 344)));
SET32(2, RW(2) + RW(20));
SET64(2, rd16(c, (RW(2) + 98)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_00168D20; }
SET64(2, (s32)rd32(c, (RW(18) + 348)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x168d14); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
 goto L_00168D40;
L_00168D20:;
SET64(2, (s32)rd32(c, (RW(18) + 348)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x168d3c); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_00168D40:;
SET64(2, rd16(c, (RW(18) + 340)));
SET32(21, RW(21) + 1);
SET32(20, RW(20) + 112);
SET64(2, RSD(21) < RSD(2));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_00168CE0; } }
L_00168D58:;
SET64(4, (s32)rd32(c, (RW(18) + 412)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 400))); goto L_00168D7C; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x168d78); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 400)));
L_00168D7C:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 388))); goto L_00168D90; }
SET64(31, 0x168d8c); SET64(5, RD(0) + RD(0)); JP_F_00170E00(c);
SET64(4, (s32)rd32(c, (RW(18) + 388)));
L_00168D90:;
if (RD(4) == RD(0)) { SET32(4, RW(18) + 224); goto L_00168DB0; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x168dac); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET32(4, RW(18) + 224);
L_00168DB0:;
SET64(31, 0x168db8);  JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 96))); goto L_00168DDC; }
SET32(2, RW(0) + 2);
SET64(31, 0x168dd0); wr32(c, (RW(18) + 224), RW(2)); JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
wr32(c, (RW(18) + 236), RW(3));
SET64(31, rd64(c, (RW(29) + 96)));
L_00168DDC:;
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_00168E00(Ctx *c) { /* func_00168E00 */
ENTER(0x168e00);
 return;
}

void JP_F_00168E10(Ctx *c) { /* func_00168E10 */
ENTER(0x168e10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00168E34; }
SET32(5, RW(5) + 64);
L_00168E34:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x168e40); SET32(4, RW(4) + 1264); JP_F_002438D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 380)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_00168E70; }
if (RD(17) == RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 12))); goto L_00168E5C; }
SET32(17, RW(17) + 64);
SET64(25, (s32)rd32(c, (RW(4) + 12)));
L_00168E5C:;
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x168e6c); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
L_00168E70:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00168E80(Ctx *c) { /* func_00168E80 */
ENTER(0x168e80);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(6) + RD(0));
{ int t = RD(18) == RD(0); SET64(5, RD(18) + RD(0)); if (t) goto L_00168EB8; }
SET32(5, RW(5) + 64);
L_00168EB8:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x168ec4); SET32(4, RW(4) + 1264); JP_F_002438D0(c);
SET64(4, (s32)rd32(c, (RW(18) + 380)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 384))); goto L_00168EF0; }
{ int t = RD(18) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00168EDC; }
SET32(6, RW(18) + 64);
L_00168EDC:;
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x168eec); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 384)));
L_00168EF0:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 392))); goto L_00168F18; }
{ int t = RD(18) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00168F04; }
SET32(6, RW(18) + 64);
L_00168F04:;
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x168f14); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 392)));
L_00168F18:;
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 336))); goto L_00168F40; }
{ int t = RD(18) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00168F2C; }
SET32(6, RW(18) + 64);
L_00168F2C:;
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x168f3c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 336)));
L_00168F40:;
{ int t = RD(2) == RD(0);  if (t) goto L_00168FF0; }
SET64(2, rd16(c, (RW(18) + 328)));
{ int t = RSD(2) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00168FF0; }
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_00168F5C:;
SET64(2, (s32)rd32(c, (RW(18) + 332)));
SET32(2, RW(2) + RW(20));
SET64(2, rd16(c, (RW(2) + 98)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_00168FA8; }
{ int t = RD(18) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00168F80; }
SET32(6, RW(18) + 64);
L_00168F80:;
SET64(2, (s32)rd32(c, (RW(18) + 336)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x168f9c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
 goto L_00168FD8;
L_00168FA8:;
{ int t = RD(18) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00168FB8; }
SET32(6, RW(18) + 64);
L_00168FB8:;
SET64(2, (s32)rd32(c, (RW(18) + 336)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x168fd4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_00168FD8:;
SET64(2, rd16(c, (RW(18) + 328)));
SET32(21, RW(21) + 1);
SET32(20, RW(20) + 112);
SET64(2, RSD(21) < RSD(2));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_00168F5C; } }
L_00168FF0:;
SET64(2, (s32)rd32(c, (RW(18) + 300)));
{ int t = RD(2) == RD(0);  if (t) goto L_00169090; }
SET64(2, rd16(c, (RW(18) + 290)));
{ int t = RSD(2) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00169090; }
SET64(3, rd16(c, (RW(18) + 288)));
L_0016900C:;
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00169078; }
SET64(19, RD(21) & 0xffff);
L_00169018:;
{ int t = RD(18) == RD(0); SET64(7, RD(18) + RD(0)); if (t) goto L_00169028; }
SET32(7, RW(18) + 64);
L_00169028:;
SET64(4, RD(20) & 0xffff);
mul_s(c, 0, 3, RSW(19), RSW(3));
SET64(2, (s32)rd32(c, (RW(18) + 300)));
SET64(5, RD(17) + RD(0));
SET32(4, RW(4) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 200)));
{ u32 t = RW(25); SET64(31, 0x169064); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(18) + 288)));
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < RSD(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00169018; } }
L_00169078:;
SET64(2, rd16(c, (RW(18) + 290)));
SET32(21, RW(21) + 1);
SET64(2, RSD(21) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(18) + 288))); { POLL(); goto L_0016900C; } }
L_00169090:;
SET64(2, (s32)rd32(c, (RW(18) + 348)));
{ int t = RD(2) == RD(0);  if (t) goto L_00169148; }
SET64(2, rd16(c, (RW(18) + 340)));
{ int t = RSD(2) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00169148; }
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_001690B0:;
SET64(2, (s32)rd32(c, (RW(18) + 344)));
SET32(2, RW(2) + RW(20));
SET64(2, rd16(c, (RW(2) + 98)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_00169100; }
{ int t = RD(18) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_001690D8; }
SET32(6, RW(18) + 64);
L_001690D8:;
SET64(2, (s32)rd32(c, (RW(18) + 348)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1690f4); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
 goto L_00169130;
L_00169100:;
{ int t = RD(18) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00169110; }
SET32(6, RW(18) + 64);
L_00169110:;
SET64(2, (s32)rd32(c, (RW(18) + 348)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16912c); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_00169130:;
SET64(2, rd16(c, (RW(18) + 340)));
SET32(21, RW(21) + 1);
SET32(20, RW(20) + 112);
SET64(2, RSD(21) < RSD(2));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_001690B0; } }
L_00169148:;
SET64(4, RD(18) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x169158); SET64(6, RD(17) + RD(0)); JP_F_00165260(c);
SET64(4, (s32)rd32(c, (RW(18) + 388)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 412))); goto L_00169188; }
{ int t = RD(18) == RD(0); SET64(7, RD(18) + RD(0)); if (t) goto L_00169170; }
SET32(7, RW(18) + 64);
L_00169170:;
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x169184); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 412)));
L_00169188:;
if (RD(4) == RD(0)) { SET32(4, RW(18) + 64); goto L_001691A8; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1691a4); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET32(4, RW(18) + 64);
L_001691A8:;
SET64(31, 0x1691b0);  JP_F_002A4D70(c);
wr8(c, (RW(18) + 232), (u8)RW(0));
SET32(3, RW(0) + 1);
wr32(c, (RW(18) + 224), RW(3));
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_001691E0(Ctx *c) { /* func_001691E0 */
ENTER(0x1691e0);
 return;
}

void JP_F_001691F0(Ctx *c) { /* func_001691F0 */
ENTER(0x1691f0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 300)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001692A0; }
SET64(2, rd16(c, (RW(16) + 290)));
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_001692A0; }
SET64(3, rd16(c, (RW(16) + 288)));
L_00169224:;
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00169288; }
SET64(17, RD(19) & 0xffff);
L_00169230:;
SET64(4, RD(18) & 0xffff);
mul_s(c, 0, 3, RSW(17), RSW(3));
SET64(2, (s32)rd32(c, (RW(16) + 300)));
SET32(4, RW(4) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x169268);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(16) + 288))); goto L_00169278; }
SET64(2, RD(0) + RD(0)); goto L_00169474;
L_00169278:;
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00169230; } }
L_00169288:;
SET64(2, rd16(c, (RW(16) + 290)));
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(16) + 288))); { POLL(); goto L_00169224; } }
L_001692A0:;
SET64(2, (s32)rd32(c, (RW(16) + 336)));
{ int t = RD(2) == RD(0);  if (t) goto L_00169308; }
SET64(2, rd16(c, (RW(16) + 328)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00169308; }
SET64(17, RD(0) + RD(0));
L_001692BC:;
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
if (RD(4) == RD(0)) { SET64(2, rd16(c, (RW(16) + 328))); goto L_001692F4; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1692e0);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001692F0; }
SET64(2, RD(0) + RD(0)); goto L_00169474;
L_001692F0:;
SET64(2, rd16(c, (RW(16) + 328)));
L_001692F4:;
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001692BC; } }
L_00169308:;
SET64(2, (s32)rd32(c, (RW(16) + 380)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 384))); goto L_0016933C; }
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x169328);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00169338; }
SET64(2, RD(0) + RD(0)); goto L_00169474;
L_00169338:;
SET64(4, (s32)rd32(c, (RW(16) + 384)));
L_0016933C:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 388))); goto L_00169368; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x169354);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00169364; }
SET64(2, RD(0) + RD(0)); goto L_00169474;
L_00169364:;
SET64(4, (s32)rd32(c, (RW(16) + 388)));
L_00169368:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 392))); goto L_00169394; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x169380);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00169390; }
SET64(2, RD(0) + RD(0)); goto L_00169474;
L_00169390:;
SET64(4, (s32)rd32(c, (RW(16) + 392)));
L_00169394:;
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 348))); goto L_001693C0; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1693ac);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001693BC; }
SET64(2, RD(0) + RD(0)); goto L_00169474;
L_001693BC:;
SET64(2, (s32)rd32(c, (RW(16) + 348)));
L_001693C0:;
{ int t = RD(2) == RD(0);  if (t) goto L_00169420; }
SET64(2, rd16(c, (RW(16) + 340)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00169420; }
SET64(17, RD(0) + RD(0));
L_001693D8:;
SET64(2, (s32)rd32(c, (RW(16) + 348)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
if (RD(4) == RD(0)) { SET64(2, rd16(c, (RW(16) + 340))); goto L_00169410; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1693fc);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_0016940C; }
SET64(2, RD(0) + RD(0)); goto L_00169474;
L_0016940C:;
SET64(2, rd16(c, (RW(16) + 340)));
L_00169410:;
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001693D8; } }
L_00169420:;
SET64(4, (s32)rd32(c, (RW(16) + 400)));
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_00169434; }
SET64(31, 0x169434);  JP_F_00171020(c);
L_00169434:;
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 412))); goto L_00169448; }
SET64(2, RD(0) + RD(0)); goto L_00169474;
L_00169448:;
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_00169474; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x169460);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00169470; }
SET64(2, RD(0) + RD(0)); goto L_00169474;
L_00169470:;
SET32(2, RW(0) + 1);
L_00169474:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00169490(Ctx *c) { /* func_00169490 */
ENTER(0x169490);
SET32(2, RW(0) + 1); return;
}

void JP_F_001694A0(Ctx *c) { /* func_001694A0 */
ENTER(0x1694a0);
SET32(29, RW(29) + -64);
SET64(3, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 304)));
{ int t = RD(4) == RD(0); SET64(16, RD(7) + RD(0)); if (t) goto L_001694D8; }
SET64(31, 0x1694d4);  JP_F_0014A8D0(c);
SET64(3, RD(2) + RD(0));
L_001694D8:;
if (RD(3) == RD(0)) { wr32(c, (RW(17) + 0), RW(0)); goto L_001695AC; }
c->f[0].u = rd32(c, (RW(18) + 0));
c->f[1].u = rd32(c, (RW(3) + 4));
c->f[3].u = rd32(c, (RW(18) + 8));
c->f[2].u = rd32(c, (RW(3) + 8));
c->f[1].f = fpu(F(0) - F(1));
c->f[0].u = RW(0);
c->f[4].u = rd32(c, (RW(3) + 0));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; c->f[2].f = fpu(F(3) - F(2)); if (t) goto L_00169534; }
c->f[1].f = fpu_div(F(1), F(4));
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(17) + 0), RW(3)); goto L_00169550;
L_00169534:;
c->f[0].f = fpu_div(F(1), F(4));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(17) + 0), RW(3));
L_00169550:;
c->f[0].u = RW(0);
c->fcc = F(2) < F(0);
{ int t = !c->fcc;  if (t) goto L_00169590; }
c->f[1].f = fpu_div(F(2), F(4));
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(16) + 0), RW(3)); goto L_001695B0;
L_00169590:;
c->f[0].f = fpu_div(F(2), F(4));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(16) + 0), RW(3)); goto L_001695B0;
L_001695AC:;
wr32(c, (RW(16) + 0), RW(0));
L_001695B0:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001695D0(Ctx *c) { /* func_001695D0 */
ENTER(0x1695d0);
c->f[1].u = rd32(c, (RW(5) + 0));
c->f[2].u = rd32(c, (RW(4) + 280));
c->f[4].u = rd32(c, (RW(5) + 8));
c->f[3].u = rd32(c, (RW(4) + 284));
c->f[2].f = fpu(F(1) - F(2));
c->f[0].u = RW(0);
c->fcc = F(2) < F(0);
{ int t = !c->fcc; c->f[3].f = fpu(F(4) - F(3)); if (t) goto L_00169620; }
c->f[1].u = rd32(c, (RW(4) + 276));
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->f[1].f = fpu_div(F(2), F(1));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(6) + 0), RW(3)); goto L_0016963C;
L_00169620:;
c->f[0].u = rd32(c, (RW(4) + 276));
c->f[0].f = fpu_div(F(2), F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(6) + 0), RW(3));
L_0016963C:;
c->f[0].u = RW(0);
c->fcc = F(3) < F(0);
if (!c->fcc) { c->f[0].u = rd32(c, (RW(4) + 276)); goto L_00169678; }
c->f[1].u = rd32(c, (RW(4) + 276));
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->f[1].f = fpu_div(F(3), F(1));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(7) + 0), RW(3)); goto L_00169690;
L_00169678:;
c->f[0].f = fpu_div(F(3), F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(7) + 0), RW(3));
L_00169690:;
 return;
}

void JP_F_001696A0(Ctx *c) { /* func_001696A0 */
ENTER(0x1696a0);
SET32(29, RW(29) + -64);
SET64(2, RD(0) | 0xffff);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr16(c, (RW(4) + 294), (u16)RW(2));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 276), RW(0));
wr32(c, (RW(4) + 280), RW(0));
wr32(c, (RW(4) + 284), RW(0));
wr16(c, (RW(4) + 288), (u16)RW(0));
wr16(c, (RW(4) + 290), (u16)RW(0));
wr32(c, (RW(4) + 320), RW(0));
wr8(c, (RW(4) + 272), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(4) + 244)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 244), RW(0)); goto L_001696FC; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1696f8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 244), RW(0));
L_001696FC:;
SET64(31, 0x169704); SET64(4, (s32)rd32(c, (RW(16) + 248))); JP_F_001004B0(c);
wr32(c, (RW(16) + 248), RW(0));
SET64(31, 0x169710); SET64(4, (s32)rd32(c, (RW(16) + 252))); JP_F_001004B0(c);
wr32(c, (RW(16) + 252), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 256)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 256), RW(0)); goto L_00169734; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x169730); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 256), RW(0));
L_00169734:;
SET64(31, 0x16973c); SET64(4, (s32)rd32(c, (RW(16) + 260))); JP_F_001004B0(c);
wr32(c, (RW(16) + 260), RW(0));
wr16(c, (RW(16) + 264), (u16)RW(0));
wr16(c, (RW(16) + 266), (u16)RW(0));
wr16(c, (RW(16) + 268), (u16)RW(0));
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(2, rd8(c, (RW(16) + 271)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 368), RW(0)); goto L_00169774; }
SET64(2, (s32)rd32(c, (RW(16) + 368)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 368), RW(0)); goto L_00169774; }
SET64(31, 0x169770); SET32(4, RW(2) + -16); JP_F_00100430(c);
wr32(c, (RW(16) + 368), RW(0));
L_00169774:;
wr16(c, (RW(16) + 364), (u16)RW(0));
SET64(2, rd8(c, (RW(16) + 271)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 376), RW(0)); goto L_0016979C; }
SET64(2, (s32)rd32(c, (RW(16) + 376)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 376), RW(0)); goto L_0016979C; }
SET64(31, 0x169798); SET32(4, RW(2) + -16); JP_F_00100430(c);
wr32(c, (RW(16) + 376), RW(0));
L_0016979C:;
wr16(c, (RW(16) + 372), (u16)RW(0));
wr8(c, (RW(16) + 396), (u8)RW(0));
wr8(c, (RW(16) + 397), (u8)RW(0));
wr8(c, (RW(16) + 404), (u8)RW(0));
SET64(31, 0x1697b4); SET64(4, (s32)rd32(c, (RW(16) + 304))); JP_F_00100430(c);
wr32(c, (RW(16) + 304), RW(0));
wr32(c, (RW(16) + 408), RW(0));
SET64(2, rd8(c, (RW(16) + 271)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 308), RW(0)); goto L_001698B0; }
SET64(2, (s32)rd32(c, (RW(16) + 312)));
{ int t = RD(2) == RD(0);  if (t) goto L_00169828; }
SET64(2, rd16(c, (RW(16) + 292)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00169828; }
SET64(17, RD(0) + RD(0));
L_001697E4:;
SET64(2, (s32)rd32(c, (RW(16) + 312)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_00169808; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x169808); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00169808:;
SET64(2, (s32)rd32(c, (RW(16) + 312)));
SET32(18, RW(18) + 1);
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, rd16(c, (RW(16) + 292)));
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001697E4; } }
L_00169828:;
SET64(2, (s32)rd32(c, (RW(16) + 316)));
{ int t = RD(2) == RD(0);  if (t) goto L_00169888; }
SET64(2, rd16(c, (RW(16) + 292)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00169888; }
SET64(17, RD(0) + RD(0));
L_00169844:;
SET64(2, (s32)rd32(c, (RW(16) + 316)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_00169868; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x169868); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00169868:;
SET64(2, (s32)rd32(c, (RW(16) + 316)));
SET32(18, RW(18) + 1);
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, rd16(c, (RW(16) + 292)));
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00169844; } }
L_00169888:;
SET64(31, 0x169890); SET64(4, (s32)rd32(c, (RW(16) + 312))); JP_F_00100430(c);
wr32(c, (RW(16) + 312), RW(0));
SET64(31, 0x16989c); SET64(4, (s32)rd32(c, (RW(16) + 316))); JP_F_00100430(c);
wr32(c, (RW(16) + 316), RW(0));
SET64(31, 0x1698a8); SET64(4, (s32)rd32(c, (RW(16) + 308))); JP_F_001004B0(c);
wr32(c, (RW(16) + 308), RW(0)); goto L_001698B8;
L_001698B0:;
wr32(c, (RW(16) + 312), RW(0));
wr32(c, (RW(16) + 316), RW(0));
L_001698B8:;
wr16(c, (RW(16) + 292), (u16)RW(0));
SET64(2, rd8(c, (RW(16) + 271)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 324), RW(0)); goto L_00169908; }
SET64(4, (s32)rd32(c, (RW(16) + 324)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 324), RW(0)); goto L_001698E8; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1698e4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 324), RW(0));
L_001698E8:;
SET64(2, (s32)rd32(c, (RW(16) + 296)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 296), RW(0)); goto L_0016990C; }
SET64(31, 0x1698fc); SET32(4, RW(2) + -16); JP_F_00100430(c);
wr32(c, (RW(16) + 296), RW(0));
 goto L_0016990C;
L_00169908:;
wr32(c, (RW(16) + 296), RW(0));
L_0016990C:;
SET64(4, (s32)rd32(c, (RW(16) + 300)));
SET64(5, (s64)(s32)0x160000);
SET64(31, 0x16991c); SET32(5, RW(5) + 17584); JP_F_001022C0(c);
wr32(c, (RW(16) + 300), RW(0));
SET64(2, rd8(c, (RW(16) + 271)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 332), RW(0)); goto L_00169944; }
SET64(2, (s32)rd32(c, (RW(16) + 332)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 332), RW(0)); goto L_00169944; }
SET64(31, 0x169940); SET32(4, RW(2) + -16); JP_F_00100430(c);
wr32(c, (RW(16) + 332), RW(0));
L_00169944:;
SET64(2, (s32)rd32(c, (RW(16) + 336)));
if (RD(2) == RD(0)) { wr16(c, (RW(16) + 328), (u16)RW(0)); goto L_001699B8; }
SET64(2, rd16(c, (RW(16) + 328)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001699A8; }
SET64(17, RD(0) + RD(0));
L_00169960:;
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_00169988; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x169984); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00169988:;
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(18, RW(18) + 1);
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, rd16(c, (RW(16) + 328)));
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00169960; } }
L_001699A8:;
SET64(31, 0x1699b0); SET64(4, (s32)rd32(c, (RW(16) + 336))); JP_F_001004B0(c);
wr32(c, (RW(16) + 336), RW(0));
wr16(c, (RW(16) + 328), (u16)RW(0));
L_001699B8:;
SET64(2, rd8(c, (RW(16) + 271)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 344), RW(0)); goto L_001699DC; }
SET64(2, (s32)rd32(c, (RW(16) + 344)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 344), RW(0)); goto L_001699DC; }
SET64(31, 0x1699d8); SET32(4, RW(2) + -16); JP_F_00100430(c);
wr32(c, (RW(16) + 344), RW(0));
L_001699DC:;
SET64(2, (s32)rd32(c, (RW(16) + 348)));
if (RD(2) == RD(0)) { wr16(c, (RW(16) + 340), (u16)RW(0)); goto L_00169A50; }
SET64(2, rd16(c, (RW(16) + 340)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00169A40; }
SET64(17, RD(0) + RD(0));
L_001699F8:;
SET64(2, (s32)rd32(c, (RW(16) + 348)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_00169A20; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x169a1c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00169A20:;
SET64(2, (s32)rd32(c, (RW(16) + 348)));
SET32(18, RW(18) + 1);
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, rd16(c, (RW(16) + 340)));
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001699F8; } }
L_00169A40:;
SET64(31, 0x169a48); SET64(4, (s32)rd32(c, (RW(16) + 348))); JP_F_001004B0(c);
wr32(c, (RW(16) + 348), RW(0));
wr16(c, (RW(16) + 340), (u16)RW(0));
L_00169A50:;
SET64(2, rd8(c, (RW(16) + 271)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 356), RW(0)); goto L_00169A74; }
SET64(2, (s32)rd32(c, (RW(16) + 356)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 356), RW(0)); goto L_00169A74; }
SET64(31, 0x169a70); SET32(4, RW(2) + -16); JP_F_00100430(c);
wr32(c, (RW(16) + 356), RW(0));
L_00169A74:;
SET64(4, (s32)rd32(c, (RW(16) + 400)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 400), RW(0)); goto L_00169A94; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x169a90); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 400), RW(0));
L_00169A94:;
SET64(31, 0x169a9c); SET64(4, (s32)rd32(c, (RW(16) + 360))); JP_F_00100430(c);
wr32(c, (RW(16) + 360), RW(0));
wr16(c, (RW(16) + 352), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 380)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 380), RW(0)); goto L_00169AC4; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x169ac0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 380), RW(0));
L_00169AC4:;
SET64(4, (s32)rd32(c, (RW(16) + 384)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 384), RW(0)); goto L_00169AE4; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x169ae0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 384), RW(0));
L_00169AE4:;
SET64(4, (s32)rd32(c, (RW(16) + 388)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 388), RW(0)); goto L_00169B04; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x169b00); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 388), RW(0));
L_00169B04:;
SET64(4, (s32)rd32(c, (RW(16) + 392)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 392), RW(0)); goto L_00169B24; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x169b20); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 392), RW(0));
L_00169B24:;
SET64(4, (s32)rd32(c, (RW(16) + 412)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 412), RW(0)); goto L_00169B44; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x169b40); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 412), RW(0));
L_00169B44:;
wr8(c, (RW(16) + 271), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00169B60(Ctx *c) { /* func_00169B60 */
ENTER(0x169b60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00169BB0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2976);
wr32(c, (RW(17) + 4), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x169b98);  rt_call(c, t); }
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00169BB4; }
SET64(31, 0x169bb0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00169BB0:;
SET64(2, RD(17) + RD(0));
L_00169BB4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00169BD0(Ctx *c) { /* func_00169BD0 */
ENTER(0x169bd0);
wr32(c, (RW(4) + 0), RW(0)); return;
}

void JP_F_00169BE0(Ctx *c) { /* func_00169BE0 */
ENTER(0x169be0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00169DD8; }
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 3072);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 12), RW(2));
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET32(9, RW(9) + 3168);
SET32(8, RW(8) + 3132);
SET32(7, RW(7) + 3240);
SET32(5, RW(17) + 24);
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
{ u32 t = RW(25); SET64(31, 0x169c80);  rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_00169D0C; }
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
{ u32 t = RW(25); SET64(31, 0x169d0c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_00169D0C:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_00169DC4; }
SET32(4, RW(17) + 336);
SET64(31, 0x169d20); SET64(5, RD(0) + RD(0)); JP_F_002A5490(c);
SET32(4, RW(17) + 48);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 24); goto L_00169D9C; }
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
{ u32 t = RW(25); SET64(31, 0x169d68);  rt_call(c, t); }
SET32(2, RW(17) + 48);
{ int t = RD(2) == RD(0);  if (t) goto L_00169D98; }
SET32(4, RW(17) + 80);
SET64(31, 0x169d80); SET32(5, RW(0) + -1); JP_F_002A88A0(c);
SET32(2, RW(17) + 48);
{ int t = RD(2) == RD(0);  if (t) goto L_00169D98; }
SET32(4, RW(17) + 52);
SET64(31, 0x169d98); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
L_00169D98:;
SET32(4, RW(17) + 24);
L_00169D9C:;
{ int t = RD(4) == RD(0);  if (t) goto L_00169DC0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 40), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169dc0);  rt_call(c, t); }
L_00169DC0:;
SET64(2, RD(16) << 48);
L_00169DC4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00169DDC; }
SET64(31, 0x169dd8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00169DD8:;
SET64(2, RD(17) + RD(0));
L_00169DDC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00169DF0(Ctx *c) { /* func_00169DF0 */
ENTER(0x169df0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00169E70; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 3616);
wr32(c, (RW(17) + 16), RW(2));
SET64(31, 0x169e20); SET64(4, (s32)rd32(c, (RW(17) + 36))); JP_F_00100430(c);
wr32(c, (RW(17) + 36), RW(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x169e30); wr32(c, (RW(17) + 40), RW(0)); JP_F_00157620(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_00169E5C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + -32);
SET64(31, 0x169e4c); wr32(c, (RW(17) + 16), RW(2)); JP_F_00157620(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x169e58); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(2, RD(16) << 48);
L_00169E5C:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00169E74; }
SET64(31, 0x169e70); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00169E70:;
SET64(2, RD(17) + RD(0));
L_00169E74:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00169E90(Ctx *c) { /* func_00169E90 */
ENTER(0x169e90);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x169ecc);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(21) + 244))); goto L_00169EDC; }
SET64(2, RD(0) + RD(0)); goto L_0016A270;
L_00169EDC:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x169eec);  rt_call(c, t); }
wr8(c, (RW(21) + 270), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(21) + 244)));
SET64(20, rd16(c, (RW(21) + 292)));
SET64(2, rd16(c, (RW(2) + 32)));
SET64(1, RSD(2) < RSD(20));
if (RD(1) == RD(0)) { SET32(16, RW(20) << 2); goto L_00169F10; }
SET64(20, RD(2) + RD(0));
SET32(16, RW(20) << 2);
L_00169F10:;
SET64(31, 0x169f18); SET64(4, RD(16) + RD(0)); JP_F_00100530(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x169f24); wr32(c, (RW(21) + 312), RW(2)); JP_F_00100530(c);
wr32(c, (RW(21) + 316), RW(2));
{ int t = RSD(20) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_0016A070; }
SET64(1, RSD(20) < (s64)9);
{ int t = RD(1) != RD(0); SET32(2, RW(20) + -8); if (t) goto L_0016A038; }
{ int t = RSD(20) < 0; SET64(3, RD(0) + RD(0)); if (t) goto L_00169F5C; }
SET64(1, (s64)(s32)0x7fff0000);
SET64(1, RD(1) | 0xffff);
SET64(1, RSD(20) < RSD(1));
{ int t = RD(1) == RD(0);  if (t) goto L_00169F5C; }
SET64(3, RD(0) + (s64)1);
L_00169F5C:;
{ int t = RD(3) == RD(0);  if (t) goto L_0016A038; }
SET64(3, RD(0) + RD(0));
L_00169F68:;
SET64(6, (s32)rd32(c, (RW(21) + 312)));
SET32(4, RW(4) + 8);
SET64(5, RSD(4) < RSD(2));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 0), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 316)));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 0), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 312)));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 4), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 316)));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 4), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 312)));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 8), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 316)));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 8), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 312)));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 12), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 316)));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 12), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 312)));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 16), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 316)));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 16), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 312)));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 20), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 316)));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 20), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 312)));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 24), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 316)));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 24), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 312)));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 28), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 316)));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(6) + 28), RW(0));
{ int t = RD(5) != RD(0); SET32(3, RW(3) + 32); if (t) { POLL(); goto L_00169F68; } }
L_0016A038:;
SET64(1, RSD(4) < RSD(20));
{ int t = RD(1) == RD(0);  if (t) goto L_0016A070; }
SET32(5, RW(4) << 2);
L_0016A048:;
SET64(3, (s32)rd32(c, (RW(21) + 312)));
SET32(4, RW(4) + 1);
SET64(2, RSD(4) < RSD(20));
SET32(3, RW(3) + RW(5));
wr32(c, (RW(3) + 0), RW(0));
SET64(3, (s32)rd32(c, (RW(21) + 316)));
SET32(3, RW(3) + RW(5));
wr32(c, (RW(3) + 0), RW(0));
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 4); if (t) { POLL(); goto L_0016A048; } }
L_0016A070:;
{ int t = RSD(20) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_0016A248; }
SET64(16, RD(0) + RD(0));
L_0016A07C:;
SET64(2, (s32)rd32(c, (RW(21) + 244)));
SET32(4, RW(0) + 64);
SET64(3, (s32)rd32(c, (RW(2) + 20)));
SET32(3, RW(3) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x16a09c); SET32(18, RW(2) + RW(3)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A0B0; }
SET64(31, 0x16a0ac); SET64(4, RD(17) + RD(0)); JP_F_00150480(c);
L_0016A0B0:;
SET64(2, (s32)rd32(c, (RW(21) + 312)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 0), RW(17));
SET64(2, rd8(c, (RW(21) + 404)));
{ int t = RD(2) != RD(0);  if (t) goto L_0016A1F8; }
SET64(4, rd16(c, (RW(18) + 36)));
SET64(2, (s64)(s32)0x540000);
SET64(3, rd16(c, (RW(18) + 38)));
SET32(2, RW(2) + 2624);
SET64(5, (s32)rd32(c, (RW(2) + 4)));
SET64(22, RD(0) + RD(0));
{ int t = RD(5) == RD(0); mul_s(c, 0, 4, RSW(4), RSW(3)); if (t) goto L_0016A128; }
SET64(2, (s64)(s32)0xff0000);
SET64(3, RD(2) | 0xffff);
L_0016A0F0:;
SET64(2, (s32)rd32(c, (RW(5) + 16)));
{ int t = RD(2) != RD(3);  if (t) goto L_0016A118; }
SET64(2, (s32)rd32(c, (RW(5) + 8)));
SET64(2, RSD(2) < RSD(4));
{ int t = RD(2) != RD(0);  if (t) goto L_0016A118; }
SET64(2, RD(0) + (s64)1); goto L_0016A130;
L_0016A118:;
SET64(5, (s32)rd32(c, (RW(5) + 4)));
{ int t = RD(5) != RD(0);  if (t) { POLL(); goto L_0016A0F0; } }
L_0016A128:;
SET64(2, RD(0) + RD(0));
L_0016A130:;
{ int t = RD(2) == RD(0);  if (t) goto L_0016A140; }
SET64(22, RD(0) + (s64)1);
L_0016A140:;
SET64(2, RD(22) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_0016A180; }
SET64(6, (s32)rd32(c, (RW(21) + 408)));
{ int t = RD(6) == RD(0);  if (t) goto L_0016A180; }
SET64(2, (s32)rd32(c, (RW(21) + 312)));
SET64(5, RD(18) + RD(0));
SET64(7, RD(18) + RD(0));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x16a174); SET64(8, RD(0) + RD(0)); JP_F_0014F9B0(c);
 goto L_0016A218;
L_0016A180:;
SET64(31, 0x16a188); SET32(4, RW(0) + 32); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A198; }
SET64(31, 0x16a198); SET64(4, RD(17) + RD(0)); JP_F_001509B0(c);
L_0016A198:;
SET64(2, (s32)rd32(c, (RW(21) + 316)));
SET64(7, RD(22) + RD(0));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 0), RW(17));
SET64(2, (s32)rd32(c, (RW(21) + 316)));
SET64(5, rd16(c, (RW(18) + 36)));
SET64(6, rd16(c, (RW(18) + 38)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x16a1c4); SET32(8, RW(0) + 1); JP_F_00150830(c);
SET64(3, (s32)rd32(c, (RW(21) + 312)));
SET64(5, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(21) + 316)));
SET64(8, RD(0) + RD(0));
SET32(3, RW(3) + RW(16));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(16));
SET64(6, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x16a1ec); SET64(7, RD(4) + RD(0)); JP_F_0014F9B0(c);
 goto L_0016A218;
L_0016A1F8:;
SET64(2, (s32)rd32(c, (RW(21) + 312)));
SET64(6, (s32)rd32(c, (RW(21) + 408)));
SET64(5, RD(18) + RD(0));
SET64(7, RD(18) + RD(0));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x16a218); SET64(8, RD(0) + RD(0)); JP_F_0014F9B0(c);
L_0016A218:;
SET64(2, (s32)rd32(c, (RW(21) + 312)));
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(31, 0x16a234); SET32(4, RW(2) + 32); JP_F_002B4790(c);
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(20));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_0016A07C; } }
L_0016A248:;
wr16(c, (RW(21) + 292), (u16)RW(20));
SET64(4, (s32)rd32(c, (RW(21) + 244)));
if (RD(4) == RD(0)) { wr32(c, (RW(21) + 244), RW(0)); goto L_0016A26C; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16a268); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(21) + 244), RW(0));
L_0016A26C:;
SET32(2, RW(0) + 1);
L_0016A270:;
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

void JP_F_0016A2A0(Ctx *c) { /* func_0016A2A0 */
ENTER(0x16a2a0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x16a2bc); SET32(4, RW(29) + 48); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(0) + 36);
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 68), RW(0));
wr32(c, (RW(29) + 64), RW(2));
wr32(c, (RW(29) + 72), RW(0));
wr32(c, (RW(29) + 76), RW(0));
wr16(c, (RW(29) + 80), (u16)RW(0));
SET64(31, 0x16a2e4); wr16(c, (RW(29) + 82), (u16)RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A314; }
SET64(31, 0x16a2f4); SET64(4, RD(17) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_0016A314:;
wr32(c, (RW(16) + 244), RW(17));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(2, (s32)rd32(c, (RW(16) + 320)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
SET64(5, (s32)rd32(c, (RW(2) + 36)));
{ u32 t = RW(25); SET64(31, 0x16a330); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16a344);  rt_call(c, t); }
SET64(31, 0x16a34c); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(16) + 308), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16a36c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr8(c, (RW(16) + 270), (u8)RW(3));
SET32(4, RW(29) + 48);
SET64(31, 0x16a388); wr32(c, (RW(29) + 64), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 48);
SET64(31, 0x16a394); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

static void JP_B_0016A3B0(Ctx *c, u32 entry) { /* func_0016A3B0 */
ENTER(entry);
switch (entry) { case 0x16a3e8: goto L_0016A3E8; case 0x16a468: goto L_0016A468; case 0x16a4e8: goto L_0016A4E8; case 0x16a520: goto L_0016A520; case 0x16a558: goto L_0016A558; case 0x16a590: goto L_0016A590; case 0x16a604: goto L_0016A604; case 0x16a63c: goto L_0016A63C; case 0x16a674: goto L_0016A674; case 0x16a6ac: goto L_0016A6AC; case 0x16a6e4: goto L_0016A6E4; case 0x16a71c: goto L_0016A71C; case 0x16a754: goto L_0016A754; case 0x16a78c: goto L_0016A78C; case 0x16a7c4: goto L_0016A7C4; case 0x16a83c: goto L_0016A83C; case 0x16a8b4: goto L_0016A8B4; case 0x16a934: goto L_0016A934; case 0x16a9b4: goto L_0016A9B4; case 0x16a9ec: goto L_0016A9EC; case 0x16aa24: goto L_0016AA24; case 0x16aa9c: goto L_0016AA9C; case 0x16aad4: goto L_0016AAD4; case 0x16ab54: goto L_0016AB54; case 0x16abcc: goto L_0016ABCC; case 0x16ac44: goto L_0016AC44; case 0x16ac7c: goto L_0016AC7C; case 0x16acfc: goto L_0016ACFC; case 0x16ad7c: goto L_0016AD7C; }
L_0016A3B0:;
SET32(29, RW(29) + -272);
SET64(1, RD(5) < (u64)(s64)29);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(1) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0016ADF4; }
SET64(4, (s64)(s32)0x4a0000);
SET32(3, RW(5) << 2);
SET32(4, RW(4) + -21168);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x16a3b0: goto L_0016A3B0; case 0x16a3e8: goto L_0016A3E8; case 0x16a468: goto L_0016A468; case 0x16a4e8: goto L_0016A4E8; case 0x16a520: goto L_0016A520; case 0x16a558: goto L_0016A558; case 0x16a590: goto L_0016A590; case 0x16a604: goto L_0016A604; case 0x16a63c: goto L_0016A63C; case 0x16a674: goto L_0016A674; case 0x16a6ac: goto L_0016A6AC; case 0x16a6e4: goto L_0016A6E4; case 0x16a71c: goto L_0016A71C; case 0x16a754: goto L_0016A754; case 0x16a78c: goto L_0016A78C; case 0x16a7c4: goto L_0016A7C4; case 0x16a83c: goto L_0016A83C; case 0x16a8b4: goto L_0016A8B4; case 0x16a934: goto L_0016A934; case 0x16a9b4: goto L_0016A9B4; case 0x16a9ec: goto L_0016A9EC; case 0x16aa24: goto L_0016AA24; case 0x16aa9c: goto L_0016AA9C; case 0x16aad4: goto L_0016AAD4; case 0x16ab54: goto L_0016AB54; case 0x16abcc: goto L_0016ABCC; case 0x16ac44: goto L_0016AC44; case 0x16ac7c: goto L_0016AC7C; case 0x16acfc: goto L_0016ACFC; case 0x16ad7c: goto L_0016AD7C; default: rt_jump(c, t); return; } }
L_0016A3E8:;
SET64(31, 0x16a3f0); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A448; }
SET64(31, 0x16a400); SET64(4, RD(17) + RD(0)); JP_F_00309870(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2912);
SET32(3, RW(3) + 2952);
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 56), RW(3));
SET32(2, RW(0) + 11);
wr16(c, (RW(17) + 48), (u16)RW(2));
SET64(3, (s64)(s32)0x3f420000);
SET64(2, (s64)(s32)0x3f010000);
wr32(c, (RW(29) + 256), RW(3));
wr32(c, (RW(29) + 260), RW(2));
SET64(3, (s64)(s32)0x3f7e0000);
SET64(2, (s64)(s32)0x3f1f0000);
wr32(c, (RW(29) + 264), RW(3));
wr32(c, (RW(29) + 268), RW(2));
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
L_0016A448:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a460); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32))); goto L_0016ADF8;
L_0016A468:;
SET64(31, 0x16a470); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A4C8; }
SET64(31, 0x16a480); SET64(4, RD(17) + RD(0)); JP_F_00309870(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2848);
SET32(3, RW(3) + 2888);
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 56), RW(3));
SET32(2, RW(0) + 6);
wr16(c, (RW(17) + 48), (u16)RW(2));
SET64(3, (s64)(s32)0x3f420000);
SET64(2, (s64)(s32)0x3c000000);
wr32(c, (RW(29) + 240), RW(3));
wr32(c, (RW(29) + 244), RW(2));
SET64(3, (s64)(s32)0x3f7e0000);
SET64(2, (s64)(s32)0x3e780000);
wr32(c, (RW(29) + 248), RW(3));
wr32(c, (RW(29) + 252), RW(2));
rd128(c, (RW(29) + 240) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
L_0016A4C8:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a4e0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A4E8:;
SET64(31, 0x16a4f0); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A500; }
SET64(31, 0x16a500); SET64(4, RD(17) + RD(0)); JP_F_0030A390(c);
L_0016A500:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a518); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A520:;
SET64(31, 0x16a528); SET32(4, RW(0) + 192); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A538; }
SET64(31, 0x16a538); SET64(4, RD(17) + RD(0)); JP_F_00309540(c);
L_0016A538:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a550); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A558:;
SET64(31, 0x16a560); SET32(4, RW(0) + 176); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A570; }
SET64(31, 0x16a570); SET64(4, RD(17) + RD(0)); JP_F_00309070(c);
L_0016A570:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a588); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A590:;
SET64(31, 0x16a598); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A5E4; }
SET64(31, 0x16a5a8); SET64(4, RD(17) + RD(0)); JP_F_00309870(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2784);
SET32(2, RW(2) + 2824);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(3, (s64)(s32)0x3d000000);
SET64(2, (s64)(s32)0x3f780000);
wr32(c, (RW(29) + 224), RW(3));
wr32(c, (RW(29) + 228), RW(3));
wr32(c, (RW(29) + 232), RW(2));
wr32(c, (RW(29) + 236), RW(2));
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
wr16(c, (RW(17) + 48), (u16)RW(0));
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
L_0016A5E4:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a5fc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A604:;
SET64(31, 0x16a60c); SET32(4, RW(0) + 20); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A61C; }
SET64(31, 0x16a61c); SET64(4, RD(17) + RD(0)); JP_F_00308920(c);
L_0016A61C:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a634); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A63C:;
SET64(31, 0x16a644); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A654; }
SET64(31, 0x16a654); SET64(4, RD(17) + RD(0)); JP_F_0030A330(c);
L_0016A654:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a66c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A674:;
SET64(31, 0x16a67c); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A68C; }
SET64(31, 0x16a68c); SET64(4, RD(17) + RD(0)); JP_F_0030A2D0(c);
L_0016A68C:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a6a4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A6AC:;
SET64(31, 0x16a6b4); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A6C4; }
SET64(31, 0x16a6c4); SET64(4, RD(17) + RD(0)); JP_F_0030A270(c);
L_0016A6C4:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a6dc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A6E4:;
SET64(31, 0x16a6ec); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A6FC; }
SET64(31, 0x16a6fc); SET64(4, RD(17) + RD(0)); JP_F_0030A210(c);
L_0016A6FC:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a714); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A71C:;
SET64(31, 0x16a724); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A734; }
SET64(31, 0x16a734); SET64(4, RD(17) + RD(0)); JP_F_0030A1B0(c);
L_0016A734:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a74c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A754:;
SET64(31, 0x16a75c); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A76C; }
SET64(31, 0x16a76c); SET64(4, RD(17) + RD(0)); JP_F_0030A150(c);
L_0016A76C:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a784); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A78C:;
SET64(31, 0x16a794); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A7A4; }
SET64(31, 0x16a7a4); SET64(4, RD(17) + RD(0)); JP_F_0030A0F0(c);
L_0016A7A4:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a7bc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A7C4:;
SET64(31, 0x16a7cc); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A81C; }
SET64(31, 0x16a7dc); SET64(4, RD(17) + RD(0)); JP_F_00309870(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2720);
SET32(3, RW(3) + 2760);
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 56), RW(3));
SET32(2, RW(0) + 9);
wr16(c, (RW(17) + 48), (u16)RW(2));
SET64(3, (s64)(s32)0x3d000000);
SET64(2, (s64)(s32)0x3f780000);
wr32(c, (RW(29) + 208), RW(3));
wr32(c, (RW(29) + 212), RW(3));
wr32(c, (RW(29) + 216), RW(2));
wr32(c, (RW(29) + 220), RW(2));
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
L_0016A81C:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a834); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A83C:;
SET64(31, 0x16a844); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A894; }
SET64(31, 0x16a854); SET64(4, RD(17) + RD(0)); JP_F_00309870(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2656);
SET32(3, RW(3) + 2696);
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 56), RW(3));
SET32(2, RW(0) + 7);
wr16(c, (RW(17) + 48), (u16)RW(2));
SET64(3, (s64)(s32)0x3d000000);
SET64(2, (s64)(s32)0x3f780000);
wr32(c, (RW(29) + 192), RW(3));
wr32(c, (RW(29) + 196), RW(3));
wr32(c, (RW(29) + 200), RW(2));
wr32(c, (RW(29) + 204), RW(2));
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
L_0016A894:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a8ac); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A8B4:;
SET64(31, 0x16a8bc); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A914; }
SET64(31, 0x16a8cc); SET64(4, RD(17) + RD(0)); JP_F_00309870(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2592);
SET32(3, RW(3) + 2632);
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 56), RW(3));
SET32(2, RW(0) + 11);
wr16(c, (RW(17) + 48), (u16)RW(2));
SET64(3, (s64)(s32)0x3f420000);
SET64(2, (s64)(s32)0x3f010000);
wr32(c, (RW(29) + 176), RW(3));
wr32(c, (RW(29) + 180), RW(2));
SET64(3, (s64)(s32)0x3f7e0000);
SET64(2, (s64)(s32)0x3f1f0000);
wr32(c, (RW(29) + 184), RW(3));
wr32(c, (RW(29) + 188), RW(2));
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
L_0016A914:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a92c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A934:;
SET64(31, 0x16a93c); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A994; }
SET64(31, 0x16a94c); SET64(4, RD(17) + RD(0)); JP_F_00309870(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2528);
SET32(3, RW(3) + 2568);
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 56), RW(3));
SET32(2, RW(0) + 3);
wr16(c, (RW(17) + 48), (u16)RW(2));
SET64(3, (s64)(s32)0x3f610000);
SET64(2, (s64)(s32)0x3f410000);
wr32(c, (RW(29) + 160), RW(3));
wr32(c, (RW(29) + 164), RW(2));
SET64(3, (s64)(s32)0x3f7f0000);
SET64(2, (s64)(s32)0x3f5f0000);
wr32(c, (RW(29) + 168), RW(3));
wr32(c, (RW(29) + 172), RW(2));
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
L_0016A994:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a9ac); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A9B4:;
SET64(31, 0x16a9bc); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A9CC; }
SET64(31, 0x16a9cc); SET64(4, RD(17) + RD(0)); JP_F_0030A090(c);
L_0016A9CC:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a9e4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016A9EC:;
SET64(31, 0x16a9f4); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016AA04; }
SET64(31, 0x16aa04); SET64(4, RD(17) + RD(0)); JP_F_0030A030(c);
L_0016AA04:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16aa1c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016AA24:;
SET64(31, 0x16aa2c); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016AA7C; }
SET64(31, 0x16aa3c); SET64(4, RD(17) + RD(0)); JP_F_00309870(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2464);
SET32(3, RW(3) + 2504);
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 56), RW(3));
SET32(2, RW(0) + 8);
wr16(c, (RW(17) + 48), (u16)RW(2));
SET64(3, (s64)(s32)0x3d000000);
SET64(2, (s64)(s32)0x3f780000);
wr32(c, (RW(29) + 144), RW(3));
wr32(c, (RW(29) + 148), RW(3));
wr32(c, (RW(29) + 152), RW(2));
wr32(c, (RW(29) + 156), RW(2));
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
L_0016AA7C:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16aa94); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016AA9C:;
SET64(31, 0x16aaa4); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016AAB4; }
SET64(31, 0x16aab4); SET64(4, RD(17) + RD(0)); JP_F_00309FD0(c);
L_0016AAB4:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16aacc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016AAD4:;
SET64(31, 0x16aadc); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016AB34; }
SET64(31, 0x16aaec); SET64(4, RD(17) + RD(0)); JP_F_00309870(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2400);
SET32(3, RW(3) + 2440);
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 56), RW(3));
SET32(2, RW(0) + 11);
wr16(c, (RW(17) + 48), (u16)RW(2));
SET64(3, (s64)(s32)0x3f420000);
SET64(2, (s64)(s32)0x3f010000);
wr32(c, (RW(29) + 128), RW(3));
wr32(c, (RW(29) + 132), RW(2));
SET64(3, (s64)(s32)0x3f7e0000);
SET64(2, (s64)(s32)0x3f1f0000);
wr32(c, (RW(29) + 136), RW(3));
wr32(c, (RW(29) + 140), RW(2));
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
L_0016AB34:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16ab4c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016AB54:;
SET64(31, 0x16ab5c); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016ABAC; }
SET64(31, 0x16ab6c); SET64(4, RD(17) + RD(0)); JP_F_00309870(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2336);
SET32(3, RW(3) + 2376);
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 56), RW(3));
SET32(2, RW(0) + 7);
wr16(c, (RW(17) + 48), (u16)RW(2));
SET64(3, (s64)(s32)0x3d000000);
SET64(2, (s64)(s32)0x3f780000);
wr32(c, (RW(29) + 112), RW(3));
wr32(c, (RW(29) + 116), RW(3));
wr32(c, (RW(29) + 120), RW(2));
wr32(c, (RW(29) + 124), RW(2));
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
L_0016ABAC:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16abc4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016ABCC:;
SET64(31, 0x16abd4); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016AC24; }
SET64(31, 0x16abe4); SET64(4, RD(17) + RD(0)); JP_F_00309870(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2272);
SET32(3, RW(3) + 2312);
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 56), RW(3));
SET32(2, RW(0) + 5);
wr16(c, (RW(17) + 48), (u16)RW(2));
SET64(3, (s64)(s32)0x3d000000);
SET64(2, (s64)(s32)0x3f780000);
wr32(c, (RW(29) + 96), RW(3));
wr32(c, (RW(29) + 100), RW(3));
wr32(c, (RW(29) + 104), RW(2));
wr32(c, (RW(29) + 108), RW(2));
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
L_0016AC24:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16ac3c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016AC44:;
SET64(31, 0x16ac4c); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016AC5C; }
SET64(31, 0x16ac5c); SET64(4, RD(17) + RD(0)); JP_F_00309F70(c);
L_0016AC5C:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16ac74); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016AC7C:;
SET64(31, 0x16ac84); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016ACDC; }
SET64(31, 0x16ac94); SET64(4, RD(17) + RD(0)); JP_F_00309870(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2208);
SET32(3, RW(3) + 2248);
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 56), RW(3));
SET32(2, RW(0) + 11);
wr16(c, (RW(17) + 48), (u16)RW(2));
SET64(3, (s64)(s32)0x3f420000);
SET64(2, (s64)(s32)0x3f010000);
wr32(c, (RW(29) + 80), RW(3));
wr32(c, (RW(29) + 84), RW(2));
SET64(3, (s64)(s32)0x3f7e0000);
SET64(2, (s64)(s32)0x3f1f0000);
wr32(c, (RW(29) + 88), RW(3));
wr32(c, (RW(29) + 92), RW(2));
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
L_0016ACDC:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16acf4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016ACFC:;
SET64(31, 0x16ad04); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016AD5C; }
SET64(31, 0x16ad14); SET64(4, RD(17) + RD(0)); JP_F_00309870(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2144);
SET32(3, RW(3) + 2184);
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 56), RW(3));
SET32(2, RW(0) + 2);
wr16(c, (RW(17) + 48), (u16)RW(2));
SET64(3, (s64)(s32)0x3f420000);
SET64(2, (s64)(s32)0x3f010000);
wr32(c, (RW(29) + 64), RW(3));
wr32(c, (RW(29) + 68), RW(2));
SET64(3, (s64)(s32)0x3f7e0000);
SET64(2, (s64)(s32)0x3f1f0000);
wr32(c, (RW(29) + 72), RW(3));
wr32(c, (RW(29) + 76), RW(2));
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
L_0016AD5C:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16ad74); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016ADF4;
L_0016AD7C:;
SET64(31, 0x16ad84); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016ADDC; }
SET64(31, 0x16ad94); SET64(4, RD(17) + RD(0)); JP_F_00309870(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2080);
SET32(3, RW(3) + 2120);
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 56), RW(3));
SET32(2, RW(0) + 2);
wr16(c, (RW(17) + 48), (u16)RW(2));
SET64(3, (s64)(s32)0x3f420000);
SET64(2, (s64)(s32)0x3f010000);
wr32(c, (RW(29) + 48), RW(3));
wr32(c, (RW(29) + 52), RW(2));
SET64(3, (s64)(s32)0x3f7e0000);
SET64(2, (s64)(s32)0x3f1f0000);
wr32(c, (RW(29) + 56), RW(3));
wr32(c, (RW(29) + 60), RW(2));
rd128(c, (RW(29) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
L_0016ADDC:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16adf4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016ADF4:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0016ADF8:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 272); return;
}
void JP_F_0016A3B0(Ctx *c) { JP_B_0016A3B0(c, 0x16a3b0); }
void JP_F_0016A3E8(Ctx *c) { JP_B_0016A3B0(c, 0x16a3e8); }
void JP_F_0016A468(Ctx *c) { JP_B_0016A3B0(c, 0x16a468); }
void JP_F_0016A4E8(Ctx *c) { JP_B_0016A3B0(c, 0x16a4e8); }
void JP_F_0016A520(Ctx *c) { JP_B_0016A3B0(c, 0x16a520); }
void JP_F_0016A558(Ctx *c) { JP_B_0016A3B0(c, 0x16a558); }
void JP_F_0016A590(Ctx *c) { JP_B_0016A3B0(c, 0x16a590); }
void JP_F_0016A604(Ctx *c) { JP_B_0016A3B0(c, 0x16a604); }
void JP_F_0016A63C(Ctx *c) { JP_B_0016A3B0(c, 0x16a63c); }
void JP_F_0016A674(Ctx *c) { JP_B_0016A3B0(c, 0x16a674); }
void JP_F_0016A6AC(Ctx *c) { JP_B_0016A3B0(c, 0x16a6ac); }
void JP_F_0016A6E4(Ctx *c) { JP_B_0016A3B0(c, 0x16a6e4); }
void JP_F_0016A71C(Ctx *c) { JP_B_0016A3B0(c, 0x16a71c); }
void JP_F_0016A754(Ctx *c) { JP_B_0016A3B0(c, 0x16a754); }
void JP_F_0016A78C(Ctx *c) { JP_B_0016A3B0(c, 0x16a78c); }
void JP_F_0016A7C4(Ctx *c) { JP_B_0016A3B0(c, 0x16a7c4); }
void JP_F_0016A83C(Ctx *c) { JP_B_0016A3B0(c, 0x16a83c); }
void JP_F_0016A8B4(Ctx *c) { JP_B_0016A3B0(c, 0x16a8b4); }
void JP_F_0016A934(Ctx *c) { JP_B_0016A3B0(c, 0x16a934); }
void JP_F_0016A9B4(Ctx *c) { JP_B_0016A3B0(c, 0x16a9b4); }
void JP_F_0016A9EC(Ctx *c) { JP_B_0016A3B0(c, 0x16a9ec); }
void JP_F_0016AA24(Ctx *c) { JP_B_0016A3B0(c, 0x16aa24); }
void JP_F_0016AA9C(Ctx *c) { JP_B_0016A3B0(c, 0x16aa9c); }
void JP_F_0016AAD4(Ctx *c) { JP_B_0016A3B0(c, 0x16aad4); }
void JP_F_0016AB54(Ctx *c) { JP_B_0016A3B0(c, 0x16ab54); }
void JP_F_0016ABCC(Ctx *c) { JP_B_0016A3B0(c, 0x16abcc); }
void JP_F_0016AC44(Ctx *c) { JP_B_0016A3B0(c, 0x16ac44); }
void JP_F_0016AC7C(Ctx *c) { JP_B_0016A3B0(c, 0x16ac7c); }
void JP_F_0016ACFC(Ctx *c) { JP_B_0016A3B0(c, 0x16acfc); }
void JP_F_0016AD7C(Ctx *c) { JP_B_0016A3B0(c, 0x16ad7c); }

void JP_F_0016AE10(Ctx *c) { /* func_0016AE10 */
ENTER(0x16ae10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016AEA8; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16ae54);  rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016AE70; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16ae70); wr32(c, (RW(17) + 56), RW(2)); JP_F_00309A80(c);
L_0016AE70:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016AE94; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16ae90); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_0016AE94:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016AEAC; }
SET64(31, 0x16aea8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016AEA8:;
SET64(2, RD(17) + RD(0));
L_0016AEAC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016AEC0(Ctx *c) { /* func_0016AEC0 */
ENTER(0x16aec0);
wr32(c, (RW(4) + 0), RW(5)); return;
}

void JP_F_0016AED0(Ctx *c) { /* func_0016AED0 */
ENTER(0x16aed0);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16af14);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(21) + 244))); goto L_0016AF24; }
SET64(2, RD(0) + RD(0)); goto L_0016B4C4;
L_0016AF24:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x16af34);  rt_call(c, t); }
wr8(c, (RW(21) + 270), (u8)RW(0));
SET64(31, 0x16af40); SET64(4, (s32)rd32(c, (RW(21) + 248))); JP_F_0014AB00(c);
SET64(31, 0x16af48); SET64(4, (s32)rd32(c, (RW(21) + 248))); JP_F_0014AAF0(c);
c->f[0].u = rd32(c, (RW(2) + 0));
SET64(16, RD(2) + RD(0));
wr32(c, (RW(21) + 276), c->f[0].u);
c->f[0].u = rd32(c, (RW(2) + 4));
wr32(c, (RW(21) + 280), c->f[0].u);
c->f[0].u = rd32(c, (RW(2) + 8));
wr32(c, (RW(21) + 284), c->f[0].u);
SET64(3, rd16(c, (RW(2) + 12)));
wr16(c, (RW(21) + 288), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 14)));
wr16(c, (RW(21) + 290), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 16)));
wr16(c, (RW(21) + 292), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 18)));
wr16(c, (RW(21) + 328), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 20)));
wr16(c, (RW(21) + 340), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 22)));
wr16(c, (RW(21) + 352), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 24)));
wr16(c, (RW(21) + 364), (u16)RW(3));
SET64(2, rd16(c, (RW(2) + 26)));
wr16(c, (RW(21) + 372), (u16)RW(2));
SET64(2, rd16(c, (RW(21) + 328)));
{ int t = RD(2) == RD(0);  if (t) goto L_0016B098; }
SET64(30, RD(2) & 0xffff);
wr8(c, (RW(29) + 160), (u8)RW(0));
SET32(2, RW(30) << 3);
SET32(2, RW(2) - RW(30));
SET32(2, RW(2) << 4);
SET64(31, 0x16afcc); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_0016AFFC; }
SET32(2, RW(0) + 1);
SET64(5, (s64)(s32)0x170000);
SET64(8, RD(30) + RD(0));
wr8(c, (RW(29) + 160), (u8)RW(2));
SET64(4, RD(20) + RD(0));
SET32(5, RW(5) + -18864);
SET64(6, RD(0) + RD(0));
SET64(31, 0x16aff8); SET32(7, RW(0) + 112); JP_F_00102580(c);
SET64(20, RD(2) + RD(0));
L_0016AFFC:;
wr32(c, (RW(21) + 332), RW(20));
SET64(3, rd16(c, (RW(21) + 328)));
SET64(2, (s32)rd32(c, (RW(16) + 28)));
{ int t = RSD(3) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_0016B098; }
SET64(3, RD(0) + RD(0));
SET32(6, RW(0) + 16);
L_0016B018:;
SET64(5, (s32)rd32(c, (RW(21) + 332)));
SET32(10, RW(2) + 64);
rd128(c, (RW(2) + 0) & ~15u, &c->r[12]);
SET64(8, RD(6) + RD(0));
rd128(c, (RW(2) + 16) & ~15u, &c->r[11]);
SET32(13, RW(5) + RW(3));
rd128(c, (RW(2) + 32) & ~15u, &c->r[7]);
rd128(c, (RW(2) + 48) & ~15u, &c->r[5]);
SET32(9, RW(13) + 64);
wr128(c, (RW(13) + 0) & ~15u, &c->r[12]);
wr128(c, (RW(13) + 16) & ~15u, &c->r[11]);
wr128(c, (RW(13) + 32) & ~15u, &c->r[7]);
wr128(c, (RW(13) + 48) & ~15u, &c->r[5]);
L_0016B050:;
SET64(7, (s8)rd8(c, (RW(10) + 0)));
SET32(8, RW(8) + -1);
SET64(5, (s8)rd8(c, (RW(10) + 1)));
wr8(c, (RW(9) + 0), (u8)RW(7));
SET32(10, RW(10) + 2);
wr8(c, (RW(9) + 1), (u8)RW(5));
{ int t = RSD(8) > 0; SET32(9, RW(9) + 2); if (t) { POLL(); goto L_0016B050; } }
SET64(5, rd16(c, (RW(2) + 96)));
SET32(4, RW(4) + 1);
SET32(3, RW(3) + 112);
wr16(c, (RW(13) + 96), (u16)RW(5));
SET64(5, rd16(c, (RW(2) + 98)));
wr16(c, (RW(13) + 98), (u16)RW(5));
SET64(5, rd16(c, (RW(21) + 328)));
SET64(5, RSD(4) < RSD(5));
{ int t = RD(5) != RD(0); SET32(2, RW(2) + 112); if (t) { POLL(); goto L_0016B018; } }
L_0016B098:;
SET64(2, rd16(c, (RW(21) + 340)));
{ int t = RD(2) == RD(0);  if (t) goto L_0016B188; }
SET64(20, RD(2) & 0xffff);
SET64(30, RD(0) + RD(0));
SET32(2, RW(20) << 3);
SET32(2, RW(2) - RW(20));
SET32(2, RW(2) << 4);
SET64(31, 0x16b0c0); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_0016B0EC; }
SET64(5, (s64)(s32)0x170000);
SET64(8, RD(20) + RD(0));
SET32(30, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + -18864);
SET64(6, RD(0) + RD(0));
SET64(31, 0x16b0e8); SET32(7, RW(0) + 112); JP_F_00102580(c);
SET64(19, RD(2) + RD(0));
L_0016B0EC:;
wr32(c, (RW(21) + 344), RW(19));
SET64(3, rd16(c, (RW(21) + 340)));
SET64(2, (s32)rd32(c, (RW(16) + 32)));
{ int t = RSD(3) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_0016B188; }
SET64(3, RD(0) + RD(0));
SET32(6, RW(0) + 16);
L_0016B108:;
SET64(5, (s32)rd32(c, (RW(21) + 344)));
SET32(10, RW(2) + 64);
rd128(c, (RW(2) + 0) & ~15u, &c->r[12]);
SET64(8, RD(6) + RD(0));
rd128(c, (RW(2) + 16) & ~15u, &c->r[11]);
SET32(13, RW(5) + RW(3));
rd128(c, (RW(2) + 32) & ~15u, &c->r[7]);
rd128(c, (RW(2) + 48) & ~15u, &c->r[5]);
SET32(9, RW(13) + 64);
wr128(c, (RW(13) + 0) & ~15u, &c->r[12]);
wr128(c, (RW(13) + 16) & ~15u, &c->r[11]);
wr128(c, (RW(13) + 32) & ~15u, &c->r[7]);
wr128(c, (RW(13) + 48) & ~15u, &c->r[5]);
L_0016B140:;
SET64(7, (s8)rd8(c, (RW(10) + 0)));
SET32(8, RW(8) + -1);
SET64(5, (s8)rd8(c, (RW(10) + 1)));
wr8(c, (RW(9) + 0), (u8)RW(7));
SET32(10, RW(10) + 2);
wr8(c, (RW(9) + 1), (u8)RW(5));
{ int t = RSD(8) > 0; SET32(9, RW(9) + 2); if (t) { POLL(); goto L_0016B140; } }
SET64(5, rd16(c, (RW(2) + 96)));
SET32(4, RW(4) + 1);
SET32(3, RW(3) + 112);
wr16(c, (RW(13) + 96), (u16)RW(5));
SET64(5, rd16(c, (RW(2) + 98)));
wr16(c, (RW(13) + 98), (u16)RW(5));
SET64(5, rd16(c, (RW(21) + 340)));
SET64(5, RSD(4) < RSD(5));
{ int t = RD(5) != RD(0); SET32(2, RW(2) + 112); if (t) { POLL(); goto L_0016B108; } }
L_0016B188:;
SET64(2, rd16(c, (RW(21) + 352)));
{ int t = RD(2) == RD(0);  if (t) goto L_0016B278; }
SET64(19, RD(2) & 0xffff);
SET64(20, RD(0) + RD(0));
SET32(2, RW(19) << 3);
SET32(2, RW(2) - RW(19));
SET32(2, RW(2) << 4);
SET64(31, 0x16b1b0); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0016B1DC; }
SET64(5, (s64)(s32)0x170000);
SET64(8, RD(19) + RD(0));
SET32(20, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET32(5, RW(5) + -19008);
SET64(6, RD(0) + RD(0));
SET64(31, 0x16b1d8); SET32(7, RW(0) + 112); JP_F_00102580(c);
SET64(18, RD(2) + RD(0));
L_0016B1DC:;
wr32(c, (RW(21) + 356), RW(18));
SET64(3, rd16(c, (RW(21) + 352)));
SET64(2, (s32)rd32(c, (RW(16) + 36)));
{ int t = RSD(3) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_0016B278; }
SET64(3, RD(0) + RD(0));
SET32(6, RW(0) + 16);
L_0016B1F8:;
SET64(5, (s32)rd32(c, (RW(21) + 356)));
SET32(10, RW(2) + 64);
rd128(c, (RW(2) + 0) & ~15u, &c->r[12]);
SET64(8, RD(6) + RD(0));
rd128(c, (RW(2) + 16) & ~15u, &c->r[11]);
SET32(13, RW(5) + RW(3));
rd128(c, (RW(2) + 32) & ~15u, &c->r[7]);
rd128(c, (RW(2) + 48) & ~15u, &c->r[5]);
SET32(9, RW(13) + 64);
wr128(c, (RW(13) + 0) & ~15u, &c->r[12]);
wr128(c, (RW(13) + 16) & ~15u, &c->r[11]);
wr128(c, (RW(13) + 32) & ~15u, &c->r[7]);
wr128(c, (RW(13) + 48) & ~15u, &c->r[5]);
L_0016B230:;
SET64(7, (s8)rd8(c, (RW(10) + 0)));
SET32(8, RW(8) + -1);
SET64(5, (s8)rd8(c, (RW(10) + 1)));
wr8(c, (RW(9) + 0), (u8)RW(7));
SET32(10, RW(10) + 2);
wr8(c, (RW(9) + 1), (u8)RW(5));
{ int t = RSD(8) > 0; SET32(9, RW(9) + 2); if (t) { POLL(); goto L_0016B230; } }
SET64(5, rd16(c, (RW(2) + 96)));
SET32(4, RW(4) + 1);
SET32(3, RW(3) + 112);
wr16(c, (RW(13) + 96), (u16)RW(5));
SET64(5, rd16(c, (RW(2) + 98)));
wr16(c, (RW(13) + 98), (u16)RW(5));
SET64(5, rd16(c, (RW(21) + 352)));
SET64(5, RSD(4) < RSD(5));
{ int t = RD(5) != RD(0); SET32(2, RW(2) + 112); if (t) { POLL(); goto L_0016B1F8; } }
L_0016B278:;
SET64(2, rd16(c, (RW(21) + 364)));
{ int t = RD(2) == RD(0);  if (t) goto L_0016B328; }
SET64(18, RD(2) & 0xffff);
SET64(19, RD(0) + RD(0));
SET32(2, RW(18) << 5);
SET64(31, 0x16b298); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(22, RD(2) + RD(0)); if (t) goto L_0016B2C4; }
SET64(5, (s64)(s32)0x170000);
SET64(8, RD(18) + RD(0));
SET32(19, RW(0) + 1);
SET64(4, RD(22) + RD(0));
SET32(5, RW(5) + -19088);
SET64(6, RD(0) + RD(0));
SET64(31, 0x16b2c0); SET32(7, RW(0) + 32); JP_F_00102580(c);
SET64(22, RD(2) + RD(0));
L_0016B2C4:;
wr32(c, (RW(21) + 368), RW(22));
SET64(2, rd16(c, (RW(21) + 364)));
SET64(4, (s32)rd32(c, (RW(16) + 40)));
{ int t = RSD(2) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0016B328; }
SET64(5, RD(0) + RD(0));
L_0016B2DC:;
SET64(3, (s32)rd32(c, (RW(21) + 368)));
SET32(6, RW(6) + 1);
rd128(c, (RW(4) + 0) & ~15u, &c->r[2]);
SET32(3, RW(3) + RW(5));
wr128(c, (RW(3) + 0) & ~15u, &c->r[2]);
SET32(5, RW(5) + 32);
c->f[0].u = rd32(c, (RW(4) + 16));
wr32(c, (RW(3) + 16), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(4) + 20)));
wr32(c, (RW(3) + 20), RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 24)));
wr32(c, (RW(3) + 24), RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 28)));
wr32(c, (RW(3) + 28), RW(2));
SET64(2, rd16(c, (RW(21) + 364)));
SET64(2, RSD(6) < RSD(2));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_0016B2DC; } }
L_0016B328:;
SET64(2, rd16(c, (RW(21) + 372)));
{ int t = RD(2) == RD(0);  if (t) goto L_0016B3D8; }
SET64(18, RD(2) & 0xffff);
SET64(19, RD(0) + RD(0));
SET32(2, RW(18) << 5);
SET64(31, 0x16b348); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(23, RD(2) + RD(0)); if (t) goto L_0016B374; }
SET64(5, (s64)(s32)0x170000);
SET64(8, RD(18) + RD(0));
SET32(19, RW(0) + 1);
SET64(4, RD(23) + RD(0));
SET32(5, RW(5) + -19168);
SET64(6, RD(0) + RD(0));
SET64(31, 0x16b370); SET32(7, RW(0) + 32); JP_F_00102580(c);
SET64(23, RD(2) + RD(0));
L_0016B374:;
wr32(c, (RW(21) + 376), RW(23));
SET64(2, rd16(c, (RW(21) + 372)));
SET64(4, (s32)rd32(c, (RW(16) + 44)));
{ int t = RSD(2) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0016B3D8; }
SET64(5, RD(0) + RD(0));
L_0016B38C:;
SET64(3, (s32)rd32(c, (RW(21) + 376)));
SET32(6, RW(6) + 1);
rd128(c, (RW(4) + 0) & ~15u, &c->r[2]);
SET32(3, RW(3) + RW(5));
wr128(c, (RW(3) + 0) & ~15u, &c->r[2]);
SET32(5, RW(5) + 32);
SET64(2, (s32)rd32(c, (RW(4) + 16)));
wr32(c, (RW(3) + 16), RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 20)));
wr32(c, (RW(3) + 20), RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 24)));
wr32(c, (RW(3) + 24), RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 28)));
wr32(c, (RW(3) + 28), RW(2));
SET64(2, rd16(c, (RW(21) + 372)));
SET64(2, RSD(6) < RSD(2));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_0016B38C; } }
L_0016B3D8:;
SET64(3, rd16(c, (RW(21) + 288)));
SET64(2, rd16(c, (RW(21) + 290)));
SET64(18, RD(0) + RD(0));
mul_s(c, 0, 19, RSW(3), RSW(2));
SET32(2, RW(19) << 2);
SET64(31, 0x16b3f4); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016B420; }
SET64(5, (s64)(s32)0x170000);
SET64(8, RD(19) + RD(0));
SET32(18, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET32(5, RW(5) + -19200);
SET64(6, RD(0) + RD(0));
SET64(31, 0x16b41c); SET32(7, RW(0) + 4); JP_F_00102580(c);
SET64(17, RD(2) + RD(0));
L_0016B420:;
wr32(c, (RW(21) + 296), RW(17));
SET64(2, rd16(c, (RW(21) + 290)));
SET64(7, (s32)rd32(c, (RW(16) + 48)));
{ int t = RSD(2) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0016B488; }
SET64(2, rd16(c, (RW(21) + 288)));
L_0016B438:;
{ int t = RSD(2) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_0016B470; }
L_0016B440:;
SET64(3, RD(7) + RD(0));
SET64(2, rd16(c, (RW(3) + 0)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(5) + 1);
SET32(7, RW(7) + 4);
wr16(c, (RW(4) + 0), (u16)RW(2));
SET64(2, rd16(c, (RW(3) + 2)));
wr16(c, (RW(4) + 2), (u16)RW(2));
SET64(2, rd16(c, (RW(21) + 288)));
SET64(2, RSD(5) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_0016B440; } }
L_0016B470:;
SET64(2, rd16(c, (RW(21) + 290)));
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(21) + 288))); { POLL(); goto L_0016B438; } }
L_0016B488:;
SET64(5, rd16(c, (RW(21) + 294)));
SET64(31, 0x16b494); SET64(4, RD(21) + RD(0)); JP_F_0016A3B0(c);
SET64(31, 0x16b49c); SET64(4, (s32)rd32(c, (RW(21) + 248))); JP_F_001004B0(c);
wr32(c, (RW(21) + 248), RW(0));
SET64(4, (s32)rd32(c, (RW(21) + 244)));
if (RD(4) == RD(0)) { wr32(c, (RW(21) + 244), RW(0)); goto L_0016B4C0; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16b4bc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(21) + 244), RW(0));
L_0016B4C0:;
SET32(2, RW(0) + 1);
L_0016B4C4:;
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

void JP_F_0016B500(Ctx *c) { /* func_0016B500 */
ENTER(0x16b500);
wr16(c, (RW(4) + 0), (u16)RW(0));
SET64(3, RD(0) | 0xffff);
SET64(2, RD(4) + RD(0));
wr16(c, (RW(4) + 2), (u16)RW(3)); return;
}

void JP_F_0016B520(Ctx *c) { /* func_0016B520 */
ENTER(0x16b520);
wr32(c, (RW(4) + 0), RW(0));
SET64(2, (s64)(s32)0x80800000);
wr32(c, (RW(4) + 4), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 8), RW(0));
SET64(2, RD(2) | 0x8080);
wr32(c, (RW(4) + 12), RW(3));
wr32(c, (RW(4) + 16), RW(2));
SET64(2, (s64)(s32)0xddd00000);
SET64(3, RD(2) | 0xddd0);
SET64(2, (s64)(s32)0xcc0c0000);
wr32(c, (RW(4) + 20), RW(3));
SET64(2, RD(2) | 0xcc0c);
wr32(c, (RW(4) + 24), RW(2));
SET64(2, (s64)(s32)0xb0bb0000);
SET64(3, RD(2) | 0xb0bb);
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 28), RW(3)); return;
}

void JP_F_0016B570(Ctx *c) { /* func_0016B570 */
ENTER(0x16b570);
wr32(c, (RW(4) + 0), RW(0));
SET64(2, (s64)(s32)0x80800000);
wr32(c, (RW(4) + 4), RW(0));
SET64(3, RD(2) | 0x8080);
SET64(5, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(5));
SET64(2, (s64)(s32)0x46490000);
wr32(c, (RW(4) + 16), RW(5));
SET64(2, RD(2) | 0x4649);
wr32(c, (RW(4) + 20), RW(3));
wr32(c, (RW(4) + 24), RW(2));
SET64(2, (s64)(s32)0x59630000);
SET64(3, RD(2) | 0x5963);
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 28), RW(3)); return;
}

void JP_F_0016B5C0(Ctx *c) { /* func_0016B5C0 */
ENTER(0x16b5c0);
SET64(2, (s64)(s32)0x3f800000);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(4) + 0), RW(2));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(2));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(0));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(2));
wr32(c, (RW(4) + 44), RW(0));
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(0));
wr32(c, (RW(4) + 56), RW(0));
wr32(c, (RW(4) + 60), RW(2));
wr16(c, (RW(4) + 96), (u16)RW(0));
wr16(c, (RW(4) + 98), (u16)RW(0));
L_0016B610:;
SET32(3, RW(4) + RW(5));
wr8(c, (RW(3) + 64), (u8)RW(0));
SET32(5, RW(5) + 8);
wr8(c, (RW(3) + 65), (u8)RW(0));
SET64(2, RSD(5) < (s64)32);
wr8(c, (RW(3) + 66), (u8)RW(0));
wr8(c, (RW(3) + 67), (u8)RW(0));
wr8(c, (RW(3) + 68), (u8)RW(0));
wr8(c, (RW(3) + 69), (u8)RW(0));
wr8(c, (RW(3) + 70), (u8)RW(0));
{ int t = RD(2) != RD(0); wr8(c, (RW(3) + 71), (u8)RW(0)); if (t) { POLL(); goto L_0016B610; } }
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_0016B650(Ctx *c) { /* func_0016B650 */
ENTER(0x16b650);
SET64(2, (s64)(s32)0x3f800000);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(4) + 0), RW(2));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(2));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(0));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(2));
wr32(c, (RW(4) + 44), RW(0));
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(0));
wr32(c, (RW(4) + 56), RW(0));
wr32(c, (RW(4) + 60), RW(2));
wr16(c, (RW(4) + 96), (u16)RW(0));
wr16(c, (RW(4) + 98), (u16)RW(0));
L_0016B6A0:;
SET32(3, RW(4) + RW(5));
wr8(c, (RW(3) + 64), (u8)RW(0));
SET32(5, RW(5) + 8);
wr8(c, (RW(3) + 65), (u8)RW(0));
SET64(2, RSD(5) < (s64)32);
wr8(c, (RW(3) + 66), (u8)RW(0));
wr8(c, (RW(3) + 67), (u8)RW(0));
wr8(c, (RW(3) + 68), (u8)RW(0));
wr8(c, (RW(3) + 69), (u8)RW(0));
wr8(c, (RW(3) + 70), (u8)RW(0));
{ int t = RD(2) != RD(0); wr8(c, (RW(3) + 71), (u8)RW(0)); if (t) { POLL(); goto L_0016B6A0; } }
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_0016B6E0(Ctx *c) { /* func_0016B6E0 */
ENTER(0x16b6e0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(4, RW(0) + 36);
SET64(31, 0x16b704); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016B734; }
SET64(31, 0x16b714); SET64(4, RD(16) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_0016B734:;
wr32(c, (RW(19) + 244), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
SET64(5, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(25); SET64(31, 0x16b750); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16b764);  rt_call(c, t); }
SET64(31, 0x16b76c); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16b78c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_0016B794:;
SET64(31, 0x16b79c); SET64(4, RD(19) + RD(0)); JP_F_0016AED0(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016B794; } }
SET64(31, 0x16b7b8); SET32(4, RW(0) + 44); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016B7FC; }
SET64(31, 0x16b7c8); SET64(4, RD(16) + RD(0)); JP_F_00158180(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -32);
SET32(2, RW(2) + 3616);
wr32(c, (RW(16) + 16), RW(3));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 36), RW(0));
wr32(c, (RW(16) + 40), RW(0));
L_0016B7FC:;
wr32(c, (RW(19) + 324), RW(16));
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)rd32(c, (RW(2) + 40)));
SET64(31, 0x16b814); SET64(4, RD(16) + RD(0)); JP_F_00158060(c);
SET64(31, 0x16b81c); SET64(4, RD(16) + RD(0)); JP_F_00157C30(c);
SET64(31, 0x16b824); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
wr32(c, (RW(16) + 36), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x16b83c); SET64(7, RD(0) + RD(0)); JP_F_00157E20(c);
L_0016B83C:;
SET64(31, 0x16b844); SET64(4, RD(16) + RD(0)); JP_F_00157DA0(c);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016B83C; } }
SET64(31, 0x16b860); SET64(4, RD(16) + RD(0)); JP_F_00157C60(c);
SET64(5, (s32)rd32(c, (RW(16) + 36)));
SET64(31, 0x16b86c); SET64(4, RD(16) + RD(0)); JP_F_00157540(c);
wr32(c, (RW(16) + 40), RW(17));
SET64(8, RD(0) + RD(0));
SET64(2, rd16(c, (RW(19) + 290)));
{ int t = RSD(2) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_0016B8F0; }
SET64(3, rd16(c, (RW(19) + 288)));
L_0016B884:;
{ int t = RSD(3) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0016B8D8; }
SET64(5, RD(7) & 0xffff);
L_0016B890:;
SET64(4, RD(6) & 0xffff);
mul_s(c, 0, 2, RSW(5), RSW(3));
SET32(2, RW(4) + RW(2));
SET64(3, (s32)rd32(c, (RW(19) + 296)));
SET32(2, RW(2) << 2);
SET32(3, RW(3) + RW(2));
SET64(2, rd16(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_0016B8C0; }
wr16(c, (RW(3) + 2), (u16)RW(8));
SET32(8, RW(8) + 1);
L_0016B8C0:;
SET64(3, rd16(c, (RW(19) + 288)));
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016B890; } }
L_0016B8D8:;
SET64(2, rd16(c, (RW(19) + 290)));
SET32(7, RW(7) + 1);
SET64(2, RSD(7) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(19) + 288))); { POLL(); goto L_0016B884; } }
L_0016B8F0:;
SET64(5, rd16(c, (RW(19) + 294)));
SET64(31, 0x16b8fc); SET64(4, RD(19) + RD(0)); JP_F_0016A2A0(c);
L_0016B8FC:;
SET64(31, 0x16b904); SET64(4, RD(19) + RD(0)); JP_F_00169E90(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016B8FC; } }
SET64(3, rd16(c, (RW(19) + 288)));
SET64(16, RD(0) + RD(0));
SET64(2, rd16(c, (RW(19) + 290)));
mul_s(c, 0, 17, RSW(3), RSW(2));
SET32(2, RW(17) << 3);
SET32(3, RW(2) - RW(17));
SET32(2, RW(3) << 2);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 4);
SET64(31, 0x16b944); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0016B974; }
SET64(5, (s64)(s32)0x160000);
SET64(6, (s64)(s32)0x160000);
SET64(8, RD(17) + RD(0));
SET32(16, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET32(5, RW(5) + 17808);
SET32(6, RW(6) + 17584);
SET64(31, 0x16b970); SET32(7, RW(0) + 336); JP_F_00102580(c);
SET64(18, RD(2) + RD(0));
L_0016B974:;
wr32(c, (RW(19) + 300), RW(18));
wr16(c, (RW(19) + 264), (u16)RW(0));
wr16(c, (RW(19) + 266), (u16)RW(0));
L_0016B980:;
SET64(31, 0x16b988); SET64(4, RD(19) + RD(0)); JP_F_001646E0(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016B980; } }
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 48)));
if (RD(17) != RD(0)) { SET32(4, RW(0) + 36); goto L_0016B9B8; }
wr16(c, (RW(19) + 328), (u16)RW(0));
SET64(3, RD(0) + RD(0)); goto L_0016BA50;
L_0016B9B8:;
SET64(31, 0x16b9c0);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016B9F0; }
SET64(31, 0x16b9d0); SET64(4, RD(16) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_0016B9F0:;
wr32(c, (RW(19) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16ba08); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16ba1c);  rt_call(c, t); }
SET64(31, 0x16ba24); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16ba44); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
SET64(3, RD(0) + (s64)1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_0016BA50:;
{ int t = RD(3) == RD(0);  if (t) goto L_0016BA98; }
L_0016BA58:;
SET64(31, 0x16ba60); SET64(4, RD(19) + RD(0)); JP_F_001680E0(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016BA58; } }
L_0016BA78:;
SET64(31, 0x16ba80); SET64(4, RD(19) + RD(0)); JP_F_00167DF0(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016BA78; } }
L_0016BA98:;
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(5, (s32)rd32(c, (RW(2) + 56)));
SET64(31, 0x16baa8); SET64(4, RD(19) + RD(0)); JP_F_00167270(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0016BB78; }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
L_0016BAB4:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16bac4);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0016BAD8; }
SET64(2, RD(0) + RD(0)); goto L_0016BB48;
L_0016BAD8:;
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x16baec);  rt_call(c, t); }
wr8(c, (RW(19) + 270), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(19) + 244)));
SET64(2, rd16(c, (RW(2) + 32)));
wr16(c, (RW(19) + 340), (u16)RW(2));
SET64(2, rd16(c, (RW(19) + 340)));
SET64(31, 0x16bb08); SET32(4, RW(2) << 2); JP_F_00100530(c);
wr32(c, (RW(19) + 348), RW(2));
SET64(2, rd16(c, (RW(19) + 340)));
{ int t = RSD(2) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_0016BB40; }
SET64(3, RD(0) + RD(0));
L_0016BB20:;
SET64(2, (s32)rd32(c, (RW(19) + 348)));
SET32(4, RW(4) + 1);
SET32(2, RW(2) + RW(3));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, rd16(c, (RW(19) + 340)));
SET64(2, RSD(4) < RSD(2));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 4); if (t) { POLL(); goto L_0016BB20; } }
L_0016BB40:;
wr16(c, (RW(19) + 268), (u16)RW(0));
SET64(2, RD(0) + (s64)1);
L_0016BB48:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 244))); { POLL(); goto L_0016BAB4; } }
L_0016BB58:;
SET64(31, 0x16bb60); SET64(4, RD(19) + RD(0)); JP_F_00167010(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016BB58; } }
L_0016BB78:;
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 52)));
if (RD(17) != RD(0)) { SET32(4, RW(0) + 36); goto L_0016BB90; }
SET64(3, RD(0) + RD(0)); goto L_0016BC28;
L_0016BB90:;
SET64(31, 0x16bb98);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016BBC8; }
SET64(31, 0x16bba8); SET64(4, RD(16) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_0016BBC8:;
wr32(c, (RW(19) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16bbe0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16bbf4);  rt_call(c, t); }
SET64(31, 0x16bbfc); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16bc1c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
SET64(3, RD(0) + (s64)1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_0016BC28:;
{ int t = RD(3) == RD(0);  if (t) goto L_0016BC50; }
L_0016BC30:;
SET64(31, 0x16bc38); SET64(4, RD(19) + RD(0)); JP_F_00167BF0(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016BC30; } }
L_0016BC50:;
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 60)));
if (RD(17) != RD(0)) { SET32(4, RW(0) + 36); goto L_0016BC68; }
SET64(3, RD(0) + RD(0)); goto L_0016BD00;
L_0016BC68:;
SET64(31, 0x16bc70);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016BCA0; }
SET64(31, 0x16bc80); SET64(4, RD(16) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_0016BCA0:;
wr32(c, (RW(19) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16bcb8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16bccc);  rt_call(c, t); }
SET64(31, 0x16bcd4); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16bcf4); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
SET64(3, RD(0) + (s64)1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_0016BD00:;
{ int t = RD(3) == RD(0);  if (t) goto L_0016BD48; }
L_0016BD08:;
SET64(31, 0x16bd10); SET64(4, RD(19) + RD(0)); JP_F_00167A60(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016BD08; } }
L_0016BD28:;
SET64(31, 0x16bd30); SET64(4, RD(19) + RD(0)); JP_F_00167940(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016BD28; } }
L_0016BD48:;
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 64)));
if (RD(17) != RD(0)) { SET32(4, RW(0) + 36); goto L_0016BD60; }
SET64(3, RD(0) + RD(0)); goto L_0016BDF8;
L_0016BD60:;
SET64(31, 0x16bd68);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016BD98; }
SET64(31, 0x16bd78); SET64(4, RD(16) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_0016BD98:;
wr32(c, (RW(19) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16bdb0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16bdc4);  rt_call(c, t); }
SET64(31, 0x16bdcc); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16bdec); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
SET64(3, RD(0) + (s64)1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_0016BDF8:;
{ int t = RD(3) == RD(0);  if (t) goto L_0016BE20; }
L_0016BE00:;
SET64(31, 0x16be08); SET64(4, RD(19) + RD(0)); JP_F_001676C0(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016BE00; } }
L_0016BE20:;
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 68)));
if (RD(17) != RD(0)) { SET32(4, RW(0) + 36); goto L_0016BE38; }
SET64(3, RD(0) + RD(0)); goto L_0016BED0;
L_0016BE38:;
SET64(31, 0x16be40);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016BE70; }
SET64(31, 0x16be50); SET64(4, RD(16) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_0016BE70:;
wr32(c, (RW(19) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16be88); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16be9c);  rt_call(c, t); }
SET64(31, 0x16bea4); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16bec4); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
SET64(3, RD(0) + (s64)1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_0016BED0:;
{ int t = RD(3) == RD(0);  if (t) goto L_0016BEF8; }
L_0016BED8:;
SET64(31, 0x16bee0); SET64(4, RD(19) + RD(0)); JP_F_00167360(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016BED8; } }
L_0016BEF8:;
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(5, (s32)rd32(c, (RW(2) + 72)));
SET64(31, 0x16bf08); SET64(4, RD(19) + RD(0)); JP_F_00166F20(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0016BF90; }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
L_0016BF14:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16bf24);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0016BF38; }
SET64(2, RD(0) + RD(0)); goto L_0016BF80;
L_0016BF38:;
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x16bf4c);  rt_call(c, t); }
wr8(c, (RW(19) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
{ int t = RD(4) == RD(0);  if (t) goto L_0016BF70; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16bf6c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_0016BF70:;
wr32(c, (RW(19) + 244), RW(0));
SET64(31, 0x16bf7c); SET64(4, (s32)rd32(c, (RW(19) + 304))); JP_F_0014A8E0(c);
SET64(2, RD(0) + (s64)1);
L_0016BF80:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 244))); { POLL(); goto L_0016BF14; } }
L_0016BF90:;
SET64(31, 0x16bf98); SET64(4, RD(19) + RD(0)); JP_F_00165790(c);
SET64(3, rd16(c, (RW(19) + 292)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_0016BFF0; }
L_0016BFA4:;
SET64(31, 0x16bfac);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(2, RD(16) & 0xffff);
SET64(5, (s32)rd32(c, (RW(4) + 236)));
SET32(3, RW(2) << 2);
SET64(2, (s32)rd32(c, (RW(19) + 312)));
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16bfd8);  rt_call(c, t); }
SET64(3, rd16(c, (RW(19) + 292)));
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_0016BFA4; } }
L_0016BFF0:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_0016C010(Ctx *c) { /* func_0016C010 */
ENTER(0x16c010);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x490000);
wr64(c, (RW(29) + 16), RD(31));
SET32(3, RW(3) + 26288);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(2, RW(0) + 1);
wr8(c, (RW(4) + 271), (u8)RW(0));
wr16(c, (RW(4) + 294), (u16)RW(5));
SET64(6, rd16(c, (RW(4) + 294)));
SET32(5, RW(6) << 3);
SET32(5, RW(5) + RW(6));
SET32(5, RW(5) << 1);
SET32(5, RW(5) + RW(6));
SET32(5, RW(5) << 2);
SET32(3, RW(3) + RW(5));
wr32(c, (RW(4) + 320), RW(3));
wr8(c, (RW(4) + 272), (u8)RW(2));
wr8(c, (RW(4) + 270), (u8)RW(0));
wr16(c, (RW(4) + 264), (u16)RW(0));
wr16(c, (RW(4) + 266), (u16)RW(0));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x16c070); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(31, 0x16c078); wr16(c, (RW(16) + 0), (u16)RW(0)); JP_F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x16c084); SET64(5, RD(16) + RD(0)); JP_F_0013A470(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0016C0A0(Ctx *c) { /* func_0016C0A0 */
ENTER(0x16c0a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr8(c, (RW(4) + 271), (u8)RW(0));
SET64(16, RD(7) + RD(0));
wr32(c, (RW(4) + 320), RW(5));
wr8(c, (RW(4) + 272), (u8)RW(0));
wr8(c, (RW(4) + 270), (u8)RW(0));
wr16(c, (RW(4) + 264), (u16)RW(0));
{ int t = RD(6) == RD(0); wr16(c, (RW(4) + 266), (u16)RW(0)); if (t) goto L_0016C0E4; }
SET64(31, 0x16c0dc);  JP_F_0016B6E0(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_0016C128;
L_0016C0E4:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x16c0f4);  rt_call(c, t); }
{ int t = RD(16) == RD(0); wr16(c, (RW(17) + 0), (u16)RW(0)); if (t) goto L_0016C110; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x16c108); SET64(5, RD(17) + RD(0)); JP_F_0013A470(c);
 goto L_0016C124;
L_0016C110:;
SET64(31, 0x16c118);  JP_F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x16c124); SET64(5, RD(17) + RD(0)); JP_F_0013A470(c);
L_0016C124:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0016C128:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016C140(Ctx *c) { /* func_0016C140 */
ENTER(0x16c140);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x490000);
wr64(c, (RW(29) + 32), RD(31));
SET32(2, RW(2) + 26288);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr8(c, (RW(4) + 271), (u8)RW(0));
SET64(16, RD(7) + RD(0));
wr16(c, (RW(4) + 294), (u16)RW(5));
SET64(5, rd16(c, (RW(4) + 294)));
SET32(3, RW(5) << 3);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 1);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
wr32(c, (RW(4) + 320), RW(2));
wr8(c, (RW(4) + 272), (u8)RW(0));
wr8(c, (RW(4) + 270), (u8)RW(0));
wr16(c, (RW(4) + 264), (u16)RW(0));
{ int t = RD(6) == RD(0); wr16(c, (RW(4) + 266), (u16)RW(0)); if (t) goto L_0016C1AC; }
SET64(31, 0x16c1a4);  JP_F_0016B6E0(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_0016C1F0;
L_0016C1AC:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x16c1bc);  rt_call(c, t); }
{ int t = RD(16) == RD(0); wr16(c, (RW(17) + 0), (u16)RW(0)); if (t) goto L_0016C1D8; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x16c1d0); SET64(5, RD(17) + RD(0)); JP_F_0013A470(c);
 goto L_0016C1EC;
L_0016C1D8:;
SET64(31, 0x16c1e0);  JP_F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x16c1ec); SET64(5, RD(17) + RD(0)); JP_F_0013A470(c);
L_0016C1EC:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0016C1F0:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016C200(Ctx *c) { /* func_0016C200 */
ENTER(0x16c200);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016C220; }
SET64(31, 0x16c21c);  JP_F_001F0F00(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0016C220:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0016C230(Ctx *c) { /* func_0016C230 */
ENTER(0x16c230);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016C250; }
SET64(31, 0x16c24c);  JP_F_001F0F20(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0016C250:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0016C260(Ctx *c) { /* func_0016C260 */
ENTER(0x16c260);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016C288; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x16c284);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_0016C288:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0016C290(Ctx *c) { /* func_0016C290 */
ENTER(0x16c290);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 256)));
wr8(c, (RW(3) + 8), (u8)RW(5));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016C2C4; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x16c2c0);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_0016C2C4:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0016C2D0(Ctx *c) { /* func_0016C2D0 */
ENTER(0x16c2d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(31, 0x16c2f4); SET64(16, RD(0) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET64(16, RD(0) + (s64)1); goto L_0016C314; }
{ int t = RD(2) == RD(0);  if (t) goto L_0016C310; }
 goto L_0016C314;
L_0016C310:;
SET64(16, RD(0) + (s64)1);
L_0016C314:;
if (RD(16) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 16))); goto L_0016C324; }
SET64(2, RD(0) + RD(0)); goto L_0016C350;
L_0016C324:;
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_0016C350; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16c33c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_0016C34C; }
SET64(2, RD(0) + RD(0)); goto L_0016C350;
L_0016C34C:;
SET32(2, RW(0) + 1);
L_0016C350:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016C370(Ctx *c) { /* func_0016C370 */
ENTER(0x16c370);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x16c38c); SET64(16, RD(6) + RD(0)); JP_F_00151540(c);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0016C3AC; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x16c3a8); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
L_0016C3AC:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016C3C0(Ctx *c) { /* func_0016C3C0 */
ENTER(0x16c3c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(6) + RD(0));
SET64(31, 0x16c3e0); SET64(6, RD(7) + RD(0)); JP_F_001515F0(c);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0016C410; }
if (RD(17) == RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 16))); goto L_0016C3FC; }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
L_0016C3FC:;
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x16c40c); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
L_0016C410:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016C420(Ctx *c) { /* func_0016C420 */
ENTER(0x16c420);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_0016C450; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16c44c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_0016C450:;
SET64(31, 0x16c458); wr32(c, (RW(16) + 16), RW(0)); JP_F_00151740(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0016C470(Ctx *c) { /* func_0016C470 */
ENTER(0x16c470);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016C538; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -31840);
SET32(2, RW(2) + -31804);
wr32(c, (RW(17) + 16), RW(3));
wr32(c, (RW(17) + 176), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16c4b4);  rt_call(c, t); }
SET32(4, RW(17) + 560);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 464); goto L_0016C4D8; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 480);
SET64(31, 0x16c4d4); wr32(c, (RW(17) + 568), RW(2)); JP_F_002B4320(c);
SET32(4, RW(17) + 464);
L_0016C4D8:;
if (RD(4) == RD(0)) { SET32(4, RW(17) + 32); goto L_0016C4F8; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 512);
SET64(31, 0x16c4f4); wr32(c, (RW(17) + 472), RW(2)); JP_F_002B3F70(c);
SET32(4, RW(17) + 32);
L_0016C4F8:;
SET64(31, 0x16c500); SET64(5, RD(0) + RD(0)); JP_F_002A5490(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016C524; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x16c520); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_0016C524:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016C53C; }
SET64(31, 0x16c538); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016C538:;
SET64(2, RD(17) + RD(0));
L_0016C53C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016C550(Ctx *c) { /* func_0016C550 */
ENTER(0x16c550);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x16c570); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_001517B0(c);
SET64(3, rd8(c, (RW(17) + 20)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_0016C614; }
SET64(31, 0x16c584); SET32(4, RW(0) + 624); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016C5F8; }
SET64(31, 0x16c594); SET64(4, RD(16) + RD(0)); JP_F_00141C80(c);
SET32(4, RW(16) + 32);
SET64(31, 0x16c5a0); SET32(5, RW(0) + 1); JP_F_002A5500(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -31840);
SET32(19, RW(16) + 464);
SET32(2, RW(2) + -31804);
wr32(c, (RW(16) + 16), RW(3));
wr32(c, (RW(16) + 176), RW(2));
SET64(4, RD(19) + RD(0));
wr32(c, (RW(16) + 448), RW(0));
SET64(31, 0x16c5cc); wr32(c, (RW(16) + 452), RW(0)); JP_F_002B3FD0(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(18, RW(16) + 560);
SET32(2, RW(2) + 512);
SET64(4, RD(18) + RD(0));
SET64(31, 0x16c5e4); wr32(c, (RW(19) + 8), RW(2)); JP_F_002B4380(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 480);
wr32(c, (RW(18) + 8), RW(2));
wr32(c, (RW(16) + 608), RW(0));
wr32(c, (RW(16) + 612), RW(0));
L_0016C5F8:;
wr32(c, (RW(17) + 16), RW(16));
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET32(6, RW(0) + 2);
SET64(31, 0x16c610); SET64(7, RD(0) + RD(0)); JP_F_001F1290(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_0016C614:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_0016C630(Ctx *c) { /* func_0016C630 */
ENTER(0x16c630);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 268), RW(0));
SET64(16, RD(4) + RD(0));
wr16(c, (RW(4) + 272), (u16)RW(0));
wr16(c, (RW(4) + 274), (u16)RW(0));
wr32(c, (RW(4) + 280), RW(6));
SET64(2, rd16(c, (RW(5) + 276)));
wr16(c, (RW(4) + 276), (u16)RW(2));
SET64(2, rd16(c, (RW(5) + 284)));
wr16(c, (RW(4) + 284), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 288)));
wr32(c, (RW(4) + 288), RW(2));
SET64(2, rd16(c, (RW(5) + 292)));
wr16(c, (RW(4) + 292), (u16)RW(2));
rd128(c, (RW(5) + 304) & ~15u, &c->r[2]);
SET64(31, 0x16c67c); wr128(c, (RW(16) + 304) & ~15u, &c->r[2]); JP_F_001618A0(c);
SET64(31, 0x16c684); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x16c690); SET32(5, RW(16) + 304); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x16c69c); SET32(4, RW(29) + 96); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
SET32(4, RW(16) + 32);
wr128(c, (RW(16) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET64(31, 0x16c6c4); wr128(c, (RW(16) + 80) & ~15u, &c->r[2]); JP_F_002A4D70(c);
wr8(c, (RW(16) + 324), (u8)RW(0));
wr32(c, (RW(16) + 320), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_0016C6E0(Ctx *c) { /* func_0016C6E0 */
ENTER(0x16c6e0);
SET32(29, RW(29) + -224);
SET32(5, RW(0) + 3);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(6, rd16(c, (RW(4) + 272)));
{ int t = RD(6) == RD(5); SET64(16, RD(4) + RD(0)); if (t) goto L_0016C9A4; }
SET32(3, RW(0) + 2);
if (RD(6) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 280))); goto L_0016C7DC; }
SET32(3, RW(0) + 1);
if (RD(6) == RD(3)) { SET64(3, rd16(c, (RW(16) + 274))); goto L_0016C738; }
wr16(c, (RW(16) + 274), (u16)RW(0));
SET32(4, RW(16) + 208);
SET64(31, 0x16c730); wr16(c, (RW(16) + 272), (u16)RW(0)); JP_F_00139AB0(c);
SET64(31, rd64(c, (RW(29) + 64))); goto L_0016C9E8;
L_0016C738:;
if (RD(3) != RD(5)) { SET64(17, (s32)rd32(c, (RW(16) + 280))); goto L_0016C74C; }
wr16(c, (RW(16) + 272), (u16)RW(3));
wr16(c, (RW(16) + 274), (u16)RW(0)); goto L_0016C9E4;
L_0016C74C:;
SET64(18, rd16(c, (RW(16) + 284)));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16c760); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(19, RD(18) & 0xffff); goto L_0016C770; }
SET64(18, RD(0) + RD(0)); goto L_0016C7C8;
L_0016C770:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 220);
SET64(31, 0x16c780); wr32(c, (RW(29) + 220), RW(19)); JP_F_001573C0(c);
SET64(31, 0x16c788); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
SET64(5, (s32)rd32(c, (RW(17) + 40)));
SET64(18, RD(2) + RD(0));
SET64(31, 0x16c798); SET64(4, RD(17) + RD(0)); JP_F_00158060(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 216);
SET64(31, 0x16c7a8); wr32(c, (RW(29) + 216), RW(19)); JP_F_001573C0(c);
SET64(3, (s32)rd32(c, (RW(17) + 20)));
SET32(6, RW(19) << 2);
SET64(7, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET32(2, RW(3) + RW(6));
SET64(6, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x16c7c8); SET64(5, RD(18) + RD(0)); JP_F_00157E20(c);
L_0016C7C8:;
{ int t = RD(18) == RD(0); wr32(c, (RW(16) + 268), RW(18)); if (t) goto L_0016C9E4; }
SET32(3, RW(0) + 2);
wr16(c, (RW(16) + 272), (u16)RW(3)); goto L_0016C9E4;
L_0016C7DC:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16c7ec);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_0016C9E4; }
SET64(3, rd16(c, (RW(16) + 274)));
SET32(2, RW(0) + 3);
if (RD(3) != RD(2)) { SET64(4, (s32)rd32(c, (RW(16) + 268))); goto L_0016C820; }
wr16(c, (RW(16) + 274), (u16)RW(0));
SET64(2, rd16(c, (RW(16) + 274)));
wr16(c, (RW(16) + 272), (u16)RW(2));
SET64(31, 0x16c818); SET64(4, (s32)rd32(c, (RW(16) + 268))); JP_F_001004B0(c);
wr32(c, (RW(16) + 268), RW(0)); goto L_0016C9E4;
L_0016C820:;
SET64(31, 0x16c828);  JP_F_0014AC10(c);
SET64(31, 0x16c830); SET64(4, (s32)rd32(c, (RW(16) + 268))); JP_F_0014AC00(c);
SET32(6, RW(0) + 1);
SET32(5, RW(2) + 8);
SET64(4, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x16c848); SET64(8, RD(6) + RD(0)); JP_F_00162420(c);
SET64(31, 0x16c850); SET64(4, (s32)rd32(c, (RW(16) + 268))); JP_F_001004B0(c);
wr32(c, (RW(16) + 268), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 288)));
{ int t = RD(2) == RD(0);  if (t) goto L_0016C8A0; }
SET64(2, rd16(c, (RW(16) + 292)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_0016C8A0; }
SET64(17, RD(0) + RD(0));
L_0016C870:;
SET64(2, (s32)rd32(c, (RW(16) + 288)));
SET64(6, RD(18) & 0xffff);
SET32(2, RW(2) + RW(17));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x16c888); SET64(4, RD(16) + RD(0)); JP_F_00162110(c);
SET64(2, rd16(c, (RW(16) + 292)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_0016C870; } }
L_0016C8A0:;
SET64(31, 0x16c8a8); SET32(4, RW(29) + 80); JP_F_0013AEA0(c);
SET32(4, RW(29) + 80);
SET64(31, 0x16c8b4); SET32(5, RW(16) + 304); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x16c8c0); SET32(4, RW(29) + 144); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET32(4, RW(16) + 32);
wr128(c, (RW(16) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
SET64(31, 0x16c8e8); wr128(c, (RW(16) + 80) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(2, rd8(c, (RW(16) + 324)));
if (RD(2) == RD(0)) { wr16(c, (RW(16) + 272), (u16)RW(0)); goto L_0016C98C; }
SET64(31, 0x16c8fc); SET32(4, RW(0) + 624); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016C970; }
SET64(31, 0x16c90c); SET64(4, RD(17) + RD(0)); JP_F_00141C80(c);
SET32(4, RW(17) + 32);
SET64(31, 0x16c918); SET32(5, RW(0) + 1); JP_F_002A5500(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -31840);
SET32(19, RW(17) + 464);
SET32(2, RW(2) + -31804);
wr32(c, (RW(17) + 16), RW(3));
wr32(c, (RW(17) + 176), RW(2));
SET64(4, RD(19) + RD(0));
wr32(c, (RW(17) + 448), RW(0));
SET64(31, 0x16c944); wr32(c, (RW(17) + 452), RW(0)); JP_F_002B3FD0(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(18, RW(17) + 560);
SET32(2, RW(2) + 512);
SET64(4, RD(18) + RD(0));
SET64(31, 0x16c95c); wr32(c, (RW(19) + 8), RW(2)); JP_F_002B4380(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 480);
wr32(c, (RW(18) + 8), RW(2));
wr32(c, (RW(17) + 608), RW(0));
wr32(c, (RW(17) + 612), RW(0));
L_0016C970:;
wr32(c, (RW(16) + 320), RW(17));
SET64(4, RD(17) + RD(0));
SET64(5, (s32)rd32(c, (RW(16) + 192)));
SET32(6, RW(0) + 2);
SET64(31, 0x16c988); SET32(7, RW(0) + 1); JP_F_001F1290(c);
wr16(c, (RW(16) + 272), (u16)RW(0));
L_0016C98C:;
SET32(2, RW(0) + 3);
wr16(c, (RW(16) + 276), (u16)RW(2));
SET64(31, 0x16c99c); SET32(4, RW(16) + 208); JP_F_00139AB0(c);
 goto L_0016C9E4;
L_0016C9A4:;
SET64(31, 0x16c9ac);  JP_F_00161D00(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0016C9E4; }
SET64(31, 0x16c9bc); SET64(4, RD(16) + RD(0)); JP_F_00162190(c);
SET32(4, RW(0) + 1);
wr16(c, (RW(16) + 276), (u16)RW(4));
SET64(3, rd16(c, (RW(16) + 274)));
if (RD(3) != RD(4)) { SET32(4, RW(16) + 208); goto L_0016C9DC; }
wr16(c, (RW(16) + 272), (u16)RW(3));
wr16(c, (RW(16) + 274), (u16)RW(0)); goto L_0016C9E4;
L_0016C9DC:;
SET64(31, 0x16c9e4); wr16(c, (RW(16) + 272), (u16)RW(0)); JP_F_00139AB0(c);
L_0016C9E4:;
SET64(31, rd64(c, (RW(29) + 64)));
L_0016C9E8:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 224); return;
}

void JP_F_0016CA00(Ctx *c) { /* func_0016CA00 */
ENTER(0x16ca00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 320)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016CA20; }
SET64(31, 0x16ca1c);  JP_F_001F0EC0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0016CA20:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0016CA30(Ctx *c) { /* func_0016CA30 */
ENTER(0x16ca30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 320)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016CA50; }
SET64(31, 0x16ca4c);  JP_F_001F0F00(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0016CA50:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0016CA60(Ctx *c) { /* func_0016CA60 */
ENTER(0x16ca60);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, rd16(c, (RW(4) + 276)));
if (RD(6) != RD(3)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016CA84; }
SET64(31, 0x16ca80);  JP_F_00161B00(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0016CA84:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0016CA90(Ctx *c) { /* func_0016CA90 */
ENTER(0x16ca90);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(31));
SET64(7, rd16(c, (RW(4) + 276)));
if (RD(7) != RD(3)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016CAB4; }
SET64(31, 0x16cab0); SET64(5, RD(5) & 0xffff); JP_F_00161DA0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0016CAB4:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0016CAC0(Ctx *c) { /* func_0016CAC0 */
ENTER(0x16cac0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x16cadc); SET64(16, RD(5) + RD(0)); JP_F_00161ED0(c);
SET64(4, (s32)rd32(c, (RW(17) + 320)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0016CAFC; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x16caf8); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
L_0016CAFC:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016CB10(Ctx *c) { /* func_0016CB10 */
ENTER(0x16cb10);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(6, rd16(c, (RW(4) + 276)));
{ int t = RD(6) != RD(3); SET64(16, RD(5) + RD(0)); if (t) goto L_0016CB58; }
SET64(31, 0x16cb3c);  JP_F_00161F50(c);
SET64(4, (s32)rd32(c, (RW(17) + 320)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0016CB5C; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x16cb58); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_0016CB58:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0016CB5C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016CB70(Ctx *c) { /* func_0016CB70 */
ENTER(0x16cb70);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(5) + RD(0));
SET64(5, rd16(c, (RW(4) + 276)));
{ int t = RD(5) != RD(3); SET64(17, RD(4) + RD(0)); if (t) goto L_0016CBCC; }
SET64(5, RD(0) + RD(0));
SET64(31, 0x16cba0); SET64(6, RD(16) + RD(0)); JP_F_00162040(c);
SET64(4, (s32)rd32(c, (RW(17) + 320)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0016CBD0; }
if (RD(17) == RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 16))); goto L_0016CBBC; }
SET32(17, RW(17) + 32);
SET64(25, (s32)rd32(c, (RW(4) + 16)));
L_0016CBBC:;
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x16cbcc); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
L_0016CBCC:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0016CBD0:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016CBE0(Ctx *c) { /* func_0016CBE0 */
ENTER(0x16cbe0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x16cbf4); SET64(16, RD(4) + RD(0)); JP_F_00161D00(c);
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(16) + 276))); goto L_0016CC04; }
SET64(2, RD(0) + RD(0)); goto L_0016CC0C;
L_0016CC04:;
SET64(2, RD(2) ^ 0x2);
SET64(2, RD(0) < RD(2));
L_0016CC0C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0016CC20(Ctx *c) { /* func_0016CC20 */
ENTER(0x16cc20);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 280)));
SET64(17, rd16(c, (RW(4) + 284)));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16cc54); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(19, RD(17) & 0xffff); goto L_0016CC64; }
SET64(17, RD(0) + RD(0)); goto L_0016CCBC;
L_0016CC64:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 92);
SET64(31, 0x16cc74); wr32(c, (RW(29) + 92), RW(19)); JP_F_001573C0(c);
SET64(31, 0x16cc7c); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
SET64(5, (s32)rd32(c, (RW(16) + 40)));
SET64(17, RD(2) + RD(0));
SET64(31, 0x16cc8c); SET64(4, RD(16) + RD(0)); JP_F_00158060(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 88);
SET64(31, 0x16cc9c); wr32(c, (RW(29) + 88), RW(19)); JP_F_001573C0(c);
SET64(7, RD(2) + RD(0));
SET32(3, RW(19) << 2);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(4, RD(16) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(6, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x16ccbc); SET64(5, RD(17) + RD(0)); JP_F_00157E20(c);
L_0016CCBC:;
wr32(c, (RW(18) + 268), RW(17));
L_0016CCC0:;
SET64(4, (s32)rd32(c, (RW(18) + 280)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16ccd4);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016CCC0; } }
SET64(31, 0x16cce8); SET64(4, (s32)rd32(c, (RW(18) + 268))); JP_F_0014AC10(c);
SET64(25, (s32)rd32(c, (RW(18) + 16)));
SET64(5, (s32)rd32(c, (RW(18) + 268)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x16ccfc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, 0x16cd04); SET64(4, (s32)rd32(c, (RW(18) + 268))); JP_F_001004B0(c);
wr32(c, (RW(18) + 268), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_0016CD30(Ctx *c) { /* func_0016CD30 */
ENTER(0x16cd30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd16(c, (RW(4) + 276)));
SET64(16, RD(4) + RD(0));
SET32(4, RW(0) + 1);
if (RD(2) != RD(4)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0016CDD4; }
SET64(3, (s32)rd32(c, (RW(16) + 256)));
{ int t = RD(3) == RD(0);  if (t) goto L_0016CD7C; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_0016CD7C; }
wr16(c, (RW(16) + 274), (u16)RW(4));
SET32(2, RW(0) + 2);
wr16(c, (RW(16) + 276), (u16)RW(2)); goto L_0016CDD0;
L_0016CD7C:;
if (RD(5) == RD(0)) { SET32(2, RW(0) + 1); goto L_0016CD94; }
SET64(31, 0x16cd8c); SET64(4, RD(16) + RD(0)); JP_F_0016CC20(c);
 goto L_0016CDD0;
L_0016CD94:;
SET64(17, RD(16) + RD(0));
{ int t = RD(16) == RD(0); wr16(c, (RW(16) + 272), (u16)RW(2)); if (t) goto L_0016CDA4; }
SET32(17, RW(16) + 208);
L_0016CDA4:;
SET64(31, 0x16cdac);  JP_F_0013AA20(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x16cdb8); SET64(5, RD(17) + RD(0)); JP_F_0013A4F0(c);
SET32(2, RW(0) + 2);
wr16(c, (RW(16) + 276), (u16)RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 208)));
{ u32 t = RW(25); SET64(31, 0x16cdd0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
L_0016CDD0:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0016CDD4:;
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016CDF0(Ctx *c) { /* func_0016CDF0 */
ENTER(0x16cdf0);
SET32(2, RW(0) + 1); return;
}

void JP_F_0016CE00(Ctx *c) { /* func_0016CE00 */
ENTER(0x16ce00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr16(c, (RW(4) + 276), (u16)RW(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 280), RW(0));
wr16(c, (RW(4) + 284), (u16)RW(0));
wr32(c, (RW(4) + 288), RW(0));
wr16(c, (RW(4) + 292), (u16)RW(0));
SET64(31, 0x16ce2c); SET64(4, (s32)rd32(c, (RW(4) + 268))); JP_F_001004B0(c);
wr32(c, (RW(16) + 268), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 320)));
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_0016CE50; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16ce4c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_0016CE50:;
SET64(31, 0x16ce58); wr32(c, (RW(16) + 320), RW(0)); JP_F_00162190(c);
SET64(3, (s32)rd32(c, (RW(16) + 212)));
if (RD(3) == RD(0)) { wr32(c, (RW(16) + 212), RW(0)); goto L_0016CE70; }
SET64(31, 0x16ce6c); SET32(4, RW(3) + -16); JP_F_00100430(c);
wr32(c, (RW(16) + 212), RW(0));
L_0016CE70:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0016CE80(Ctx *c) { /* func_0016CE80 */
ENTER(0x16ce80);
SET32(29, RW(29) + -208);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(4, RD(5) + RD(0));
SET64(31, 0x16cea4); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_0014AC00(c);
SET32(6, RW(0) + 1);
SET32(5, RW(2) + 8);
SET64(4, RD(18) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x16cebc); SET64(8, RD(6) + RD(0)); JP_F_00162420(c);
SET64(2, (s32)rd32(c, (RW(18) + 288)));
{ int t = RD(2) == RD(0);  if (t) goto L_0016CF08; }
SET64(2, rd16(c, (RW(18) + 292)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_0016CF08; }
SET64(16, RD(0) + RD(0));
L_0016CED8:;
SET64(2, (s32)rd32(c, (RW(18) + 288)));
SET64(6, RD(17) & 0xffff);
SET32(2, RW(2) + RW(16));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x16cef0); SET64(4, RD(18) + RD(0)); JP_F_00162110(c);
SET64(2, rd16(c, (RW(18) + 292)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_0016CED8; } }
L_0016CF08:;
SET64(31, 0x16cf10); SET32(4, RW(29) + 80); JP_F_0013AEA0(c);
SET32(4, RW(29) + 80);
SET64(31, 0x16cf1c); SET32(5, RW(18) + 304); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x16cf28); SET32(4, RW(29) + 144); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET32(4, RW(18) + 32);
wr128(c, (RW(18) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 48) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
SET64(31, 0x16cf50); wr128(c, (RW(18) + 80) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(3, rd8(c, (RW(18) + 324)));
if (RD(3) == RD(0)) { SET32(3, RW(0) + 3); goto L_0016CFF4; }
SET64(31, 0x16cf64); SET32(4, RW(0) + 624); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016CFD8; }
SET64(31, 0x16cf74); SET64(4, RD(16) + RD(0)); JP_F_00141C80(c);
SET32(4, RW(16) + 32);
SET64(31, 0x16cf80); SET32(5, RW(0) + 1); JP_F_002A5500(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -31840);
SET32(19, RW(16) + 464);
SET32(2, RW(2) + -31804);
wr32(c, (RW(16) + 16), RW(3));
wr32(c, (RW(16) + 176), RW(2));
SET64(4, RD(19) + RD(0));
wr32(c, (RW(16) + 448), RW(0));
SET64(31, 0x16cfac); wr32(c, (RW(16) + 452), RW(0)); JP_F_002B3FD0(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(17, RW(16) + 560);
SET32(2, RW(2) + 512);
SET64(4, RD(17) + RD(0));
SET64(31, 0x16cfc4); wr32(c, (RW(19) + 8), RW(2)); JP_F_002B4380(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 480);
wr32(c, (RW(17) + 8), RW(2));
wr32(c, (RW(16) + 608), RW(0));
wr32(c, (RW(16) + 612), RW(0));
L_0016CFD8:;
wr32(c, (RW(18) + 320), RW(16));
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(18) + 192)));
SET32(6, RW(0) + 2);
SET64(31, 0x16cff0); SET32(7, RW(0) + 1); JP_F_001F1290(c);
SET32(3, RW(0) + 3);
L_0016CFF4:;
wr16(c, (RW(18) + 276), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 208); return;
}

void JP_F_0016D020(Ctx *c) { /* func_0016D020 */
ENTER(0x16d020);
wr16(c, (RW(4) + 276), (u16)RW(7));
SET64(3, rd16(c, (RW(4) + 276)));
{ int t = RD(3) == RD(0);  if (t) goto L_0016D038; }
wr32(c, (RW(4) + 280), RW(5));
wr16(c, (RW(4) + 284), (u16)RW(6));
L_0016D038:;
 return;
}

void JP_F_0016D040(Ctx *c) { /* func_0016D040 */
ENTER(0x16d040);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x16d050);  JP_F_00162190(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0016D060(Ctx *c) { /* func_0016D060 */
ENTER(0x16d060);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x16d078); SET64(4, RD(5) + RD(0)); JP_F_0014AC00(c);
SET32(6, RW(0) + 1);
SET64(4, RD(16) + RD(0));
SET32(5, RW(2) + 8);
SET64(7, RD(0) + RD(0));
SET64(31, 0x16d090); SET64(8, RD(6) + RD(0)); JP_F_00162420(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0016D0A0(Ctx *c) { /* func_0016D0A0 */
ENTER(0x16d0a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 40)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0016D0E4; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16d0c8);  rt_call(c, t); }
SET64(31, 0x16d0d0); SET64(4, (s32)rd32(c, (RW(16) + 36))); JP_F_00100430(c);
wr32(c, (RW(16) + 36), RW(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x16d0e0); wr32(c, (RW(16) + 40), RW(0)); JP_F_00157620(c);
wr32(c, (RW(16) + 40), RW(0));
L_0016D0E4:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0016D100(Ctx *c) { /* func_0016D100 */
ENTER(0x16d100);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x16d114); SET64(16, RD(4) + RD(0)); JP_F_00157650(c);
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_0016D124; }
SET32(2, RW(0) + 1); goto L_0016D130;
L_0016D124:;
SET64(31, 0x16d12c);  JP_F_00157C60(c);
SET64(2, RD(0) + RD(0));
L_0016D130:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0016D140(Ctx *c) { /* func_0016D140 */
ENTER(0x16d140);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016D184; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16d16c); wr32(c, (RW(17) + 40), RW(2)); JP_F_00309A80(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016D188; }
SET64(31, 0x16d184); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016D184:;
SET64(2, RD(17) + RD(0));
L_0016D188:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016D1A0(Ctx *c) { /* func_0016D1A0 */
ENTER(0x16d1a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016D268; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2080);
SET32(2, RW(2) + 2120);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d1e4);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016D254; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d214); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016D230; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16d230); wr32(c, (RW(17) + 56), RW(2)); JP_F_00309A80(c);
L_0016D230:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016D250; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d250); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016D250:;
SET64(2, RD(16) << 48);
L_0016D254:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016D26C; }
SET64(31, 0x16d268); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016D268:;
SET64(2, RD(17) + RD(0));
L_0016D26C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016D280(Ctx *c) { /* func_0016D280 */
ENTER(0x16d280);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016D348; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2144);
SET32(2, RW(2) + 2184);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d2c4);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016D334; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d2f4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016D310; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16d310); wr32(c, (RW(17) + 56), RW(2)); JP_F_00309A80(c);
L_0016D310:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016D330; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d330); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016D330:;
SET64(2, RD(16) << 48);
L_0016D334:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016D34C; }
SET64(31, 0x16d348); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016D348:;
SET64(2, RD(17) + RD(0));
L_0016D34C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016D360(Ctx *c) { /* func_0016D360 */
ENTER(0x16d360);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016D428; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2208);
SET32(2, RW(2) + 2248);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d3a4);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016D414; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d3d4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016D3F0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16d3f0); wr32(c, (RW(17) + 56), RW(2)); JP_F_00309A80(c);
L_0016D3F0:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016D410; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d410); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016D410:;
SET64(2, RD(16) << 48);
L_0016D414:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016D42C; }
SET64(31, 0x16d428); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016D428:;
SET64(2, RD(17) + RD(0));
L_0016D42C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016D440(Ctx *c) { /* func_0016D440 */
ENTER(0x16d440);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016D508; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2272);
SET32(2, RW(2) + 2312);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d484);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016D4F4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d4b4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016D4D0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16d4d0); wr32(c, (RW(17) + 56), RW(2)); JP_F_00309A80(c);
L_0016D4D0:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016D4F0; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d4f0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016D4F0:;
SET64(2, RD(16) << 48);
L_0016D4F4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016D50C; }
SET64(31, 0x16d508); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016D508:;
SET64(2, RD(17) + RD(0));
L_0016D50C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016D520(Ctx *c) { /* func_0016D520 */
ENTER(0x16d520);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016D5E8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2336);
SET32(2, RW(2) + 2376);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d564);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016D5D4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d594); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016D5B0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16d5b0); wr32(c, (RW(17) + 56), RW(2)); JP_F_00309A80(c);
L_0016D5B0:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016D5D0; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d5d0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016D5D0:;
SET64(2, RD(16) << 48);
L_0016D5D4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016D5EC; }
SET64(31, 0x16d5e8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016D5E8:;
SET64(2, RD(17) + RD(0));
L_0016D5EC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016D600(Ctx *c) { /* func_0016D600 */
ENTER(0x16d600);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016D6C8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2400);
SET32(2, RW(2) + 2440);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d644);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016D6B4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d674); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016D690; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16d690); wr32(c, (RW(17) + 56), RW(2)); JP_F_00309A80(c);
L_0016D690:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016D6B0; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d6b0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016D6B0:;
SET64(2, RD(16) << 48);
L_0016D6B4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016D6CC; }
SET64(31, 0x16d6c8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016D6C8:;
SET64(2, RD(17) + RD(0));
L_0016D6CC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016D6E0(Ctx *c) { /* func_0016D6E0 */
ENTER(0x16d6e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016D7A8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2464);
SET32(2, RW(2) + 2504);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d724);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016D794; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d754); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016D770; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16d770); wr32(c, (RW(17) + 56), RW(2)); JP_F_00309A80(c);
L_0016D770:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016D790; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d790); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016D790:;
SET64(2, RD(16) << 48);
L_0016D794:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016D7AC; }
SET64(31, 0x16d7a8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016D7A8:;
SET64(2, RD(17) + RD(0));
L_0016D7AC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016D7C0(Ctx *c) { /* func_0016D7C0 */
ENTER(0x16d7c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016D888; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2528);
SET32(2, RW(2) + 2568);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d804);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016D874; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d834); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016D850; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16d850); wr32(c, (RW(17) + 56), RW(2)); JP_F_00309A80(c);
L_0016D850:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016D870; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d870); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016D870:;
SET64(2, RD(16) << 48);
L_0016D874:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016D88C; }
SET64(31, 0x16d888); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016D888:;
SET64(2, RD(17) + RD(0));
L_0016D88C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016D8A0(Ctx *c) { /* func_0016D8A0 */
ENTER(0x16d8a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016D968; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2592);
SET32(2, RW(2) + 2632);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d8e4);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016D954; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d914); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016D930; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16d930); wr32(c, (RW(17) + 56), RW(2)); JP_F_00309A80(c);
L_0016D930:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016D950; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d950); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016D950:;
SET64(2, RD(16) << 48);
L_0016D954:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016D96C; }
SET64(31, 0x16d968); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016D968:;
SET64(2, RD(17) + RD(0));
L_0016D96C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016D980(Ctx *c) { /* func_0016D980 */
ENTER(0x16d980);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016DA48; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2656);
SET32(2, RW(2) + 2696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d9c4);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016DA34; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d9f4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016DA10; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16da10); wr32(c, (RW(17) + 56), RW(2)); JP_F_00309A80(c);
L_0016DA10:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016DA30; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16da30); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016DA30:;
SET64(2, RD(16) << 48);
L_0016DA34:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016DA4C; }
SET64(31, 0x16da48); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016DA48:;
SET64(2, RD(17) + RD(0));
L_0016DA4C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016DA60(Ctx *c) { /* func_0016DA60 */
ENTER(0x16da60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016DB28; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2720);
SET32(2, RW(2) + 2760);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16daa4);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016DB14; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16dad4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016DAF0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16daf0); wr32(c, (RW(17) + 56), RW(2)); JP_F_00309A80(c);
L_0016DAF0:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016DB10; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16db10); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016DB10:;
SET64(2, RD(16) << 48);
L_0016DB14:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016DB2C; }
SET64(31, 0x16db28); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016DB28:;
SET64(2, RD(17) + RD(0));
L_0016DB2C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016DB40(Ctx *c) { /* func_0016DB40 */
ENTER(0x16db40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016DC08; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2784);
SET32(2, RW(2) + 2824);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16db84);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016DBF4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16dbb4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016DBD0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16dbd0); wr32(c, (RW(17) + 56), RW(2)); JP_F_00309A80(c);
L_0016DBD0:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016DBF0; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16dbf0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016DBF0:;
SET64(2, RD(16) << 48);
L_0016DBF4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016DC0C; }
SET64(31, 0x16dc08); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016DC08:;
SET64(2, RD(17) + RD(0));
L_0016DC0C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016DC20(Ctx *c) { /* func_0016DC20 */
ENTER(0x16dc20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016DCE8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2848);
SET32(2, RW(2) + 2888);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16dc64);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016DCD4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16dc94); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016DCB0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16dcb0); wr32(c, (RW(17) + 56), RW(2)); JP_F_00309A80(c);
L_0016DCB0:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016DCD0; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16dcd0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016DCD0:;
SET64(2, RD(16) << 48);
L_0016DCD4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016DCEC; }
SET64(31, 0x16dce8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016DCE8:;
SET64(2, RD(17) + RD(0));
L_0016DCEC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016DD00(Ctx *c) { /* func_0016DD00 */
ENTER(0x16dd00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016DDC8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2912);
SET32(2, RW(2) + 2952);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16dd44);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016DDB4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16dd74); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016DD90; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
SET64(31, 0x16dd90); wr32(c, (RW(17) + 56), RW(2)); JP_F_00309A80(c);
L_0016DD90:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016DDB0; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16ddb0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016DDB0:;
SET64(2, RD(16) << 48);
L_0016DDB4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016DDCC; }
SET64(31, 0x16ddc8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016DDC8:;
SET64(2, RD(17) + RD(0));
L_0016DDCC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016DDE0(Ctx *c) { /* func_0016DDE0 */
ENTER(0x16dde0);
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_0016DDF0(Ctx *c) { /* func_0016DDF0 */
ENTER(0x16ddf0);
 return;
}

void JP_F_0016DE00(Ctx *c) { /* func_0016DE00 */
ENTER(0x16de00);
SET64(2, (s64)(s32)0x4a0000);
SET32(2, RW(2) + -21040); return;
}

void JP_F_0016DE10(Ctx *c) { /* func_0016DE10 */
ENTER(0x16de10);
SET32(4, RW(4) + -32); { JP_F_00164660(c); return; }
}

void JP_F_0016DE20(Ctx *c) { /* func_0016DE20 */
ENTER(0x16de20);
SET32(4, RW(4) + -32); { JP_F_001644B0(c); return; }
}

void JP_F_0016DE30(Ctx *c) { /* func_0016DE30 */
ENTER(0x16de30);
SET32(4, RW(4) + -212); { JP_F_001644B0(c); return; }
}

void JP_F_0016DE40(Ctx *c) { /* func_0016DE40 */
ENTER(0x16de40);
SET32(4, RW(4) + -232); { JP_F_001644B0(c); return; }
}

void JP_F_0016DE50(Ctx *c) { /* func_0016DE50 */
ENTER(0x16de50);
SET32(4, RW(4) + -208); { JP_F_0016C6E0(c); return; }
}

void JP_F_0016DE60(Ctx *c) { /* func_0016DE60 */
ENTER(0x16de60);
SET32(4, RW(4) + -208); { JP_F_0016DDF0(c); return; }
}

void JP_F_0016DE70(Ctx *c) { /* func_0016DE70 */
ENTER(0x16de70);
SET32(4, RW(4) + -208); { JP_F_0016DE00(c); return; }
}

void JP_F_0016DE80(Ctx *c) { /* func_0016DE80 */
ENTER(0x16de80);
SET32(4, RW(4) + -208); { JP_F_001644B0(c); return; }
}

void JP_F_0016DE90(Ctx *c) { /* func_0016DE90 */
ENTER(0x16de90);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -24);
SET32(4, RW(4) + RW(25)); { JP_F_0016C290(c); return; }
}

void JP_F_0016DEA0(Ctx *c) { /* func_0016DEA0 */
ENTER(0x16dea0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -24);
SET32(4, RW(4) + RW(25)); { JP_F_0016C2D0(c); return; }
}

void JP_F_0016DEB0(Ctx *c) { /* func_0016DEB0 */
ENTER(0x16deb0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -24);
SET32(4, RW(4) + RW(25)); { JP_F_0016C420(c); return; }
}

void JP_F_0016DEC0(Ctx *c) { /* func_0016DEC0 */
ENTER(0x16dec0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -24);
SET32(4, RW(4) + RW(25)); { JP_F_00169BE0(c); return; }
}

void JP_F_0016DED0(Ctx *c) { /* func_0016DED0 */
ENTER(0x16ded0);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -48);
SET32(4, RW(4) + RW(25)); { JP_F_0016C2D0(c); return; }
}

void JP_F_0016DEE0(Ctx *c) { /* func_0016DEE0 */
ENTER(0x16dee0);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -48);
SET32(4, RW(4) + RW(25)); { JP_F_0016C420(c); return; }
}

void JP_F_0016DEF0(Ctx *c) { /* func_0016DEF0 */
ENTER(0x16def0);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -48);
SET32(4, RW(4) + RW(25)); { JP_F_00169BE0(c); return; }
}

void JP_F_0016DF00(Ctx *c) { /* func_0016DF00 */
ENTER(0x16df00);
SET64(25, (s32)rd32(c, (RW(4) + 416)));
SET32(4, RW(4) + -336);
SET32(4, RW(4) + RW(25)); { JP_F_00169BE0(c); return; }
}

void JP_F_0016DF10(Ctx *c) { /* func_0016DF10 */
ENTER(0x16df10);
SET32(4, RW(4) + -16); { JP_F_0016DD00(c); return; }
}

void JP_F_0016DF20(Ctx *c) { /* func_0016DF20 */
ENTER(0x16df20);
SET32(4, RW(4) + -16); { JP_F_0016DC20(c); return; }
}

void JP_F_0016DF30(Ctx *c) { /* func_0016DF30 */
ENTER(0x16df30);
SET32(4, RW(4) + -16); { JP_F_0016DB40(c); return; }
}

void JP_F_0016DF40(Ctx *c) { /* func_0016DF40 */
ENTER(0x16df40);
SET32(4, RW(4) + -16); { JP_F_0016DA60(c); return; }
}

void JP_F_0016DF50(Ctx *c) { /* func_0016DF50 */
ENTER(0x16df50);
SET32(4, RW(4) + -16); { JP_F_0016D980(c); return; }
}

void JP_F_0016DF60(Ctx *c) { /* func_0016DF60 */
ENTER(0x16df60);
SET32(4, RW(4) + -16); { JP_F_0016D8A0(c); return; }
}

void JP_F_0016DF70(Ctx *c) { /* func_0016DF70 */
ENTER(0x16df70);
SET32(4, RW(4) + -16); { JP_F_0016D7C0(c); return; }
}

void JP_F_0016DF80(Ctx *c) { /* func_0016DF80 */
ENTER(0x16df80);
SET32(4, RW(4) + -16); { JP_F_0016D6E0(c); return; }
}

void JP_F_0016DF90(Ctx *c) { /* func_0016DF90 */
ENTER(0x16df90);
SET32(4, RW(4) + -16); { JP_F_0016D600(c); return; }
}

void JP_F_0016DFA0(Ctx *c) { /* func_0016DFA0 */
ENTER(0x16dfa0);
SET32(4, RW(4) + -16); { JP_F_0016D520(c); return; }
}

void JP_F_0016DFB0(Ctx *c) { /* func_0016DFB0 */
ENTER(0x16dfb0);
SET32(4, RW(4) + -16); { JP_F_0016D440(c); return; }
}

void JP_F_0016DFC0(Ctx *c) { /* func_0016DFC0 */
ENTER(0x16dfc0);
SET32(4, RW(4) + -16); { JP_F_0016D360(c); return; }
}

void JP_F_0016DFD0(Ctx *c) { /* func_0016DFD0 */
ENTER(0x16dfd0);
SET32(4, RW(4) + -16); { JP_F_0016D280(c); return; }
}

void JP_F_0016DFE0(Ctx *c) { /* func_0016DFE0 */
ENTER(0x16dfe0);
SET32(4, RW(4) + -16); { JP_F_0016D1A0(c); return; }
}

void JP_F_0016DFF0(Ctx *c) { /* func_0016DFF0 */
ENTER(0x16dff0);
SET32(4, RW(4) + -4); { JP_F_00163B60(c); return; }
}

void JP_F_0016E000(Ctx *c) { /* func_0016E000 */
ENTER(0x16e000);
SET32(4, RW(4) + -24); { JP_F_00163B60(c); return; }
}

void JP_F_0016E010(Ctx *c) { /* func_0016E010 */
ENTER(0x16e010);
SET32(4, RW(4) + -64); { JP_F_00163B60(c); return; }
}

void JP_F_0016E020(Ctx *c) { /* func_0016E020 */
ENTER(0x16e020);
SET32(4, RW(4) + -224); { JP_F_001688D0(c); return; }
}

void JP_F_0016E030(Ctx *c) { /* func_0016E030 */
ENTER(0x16e030);
SET32(4, RW(4) + -224); { JP_F_001688E0(c); return; }
}

void JP_F_0016E040(Ctx *c) { /* func_0016E040 */
ENTER(0x16e040);
SET32(4, RW(4) + -224); { JP_F_001691F0(c); return; }
}

void JP_F_0016E050(Ctx *c) { /* func_0016E050 */
ENTER(0x16e050);
SET32(4, RW(4) + -224); { JP_F_001696A0(c); return; }
}

void JP_F_0016E060(Ctx *c) { /* func_0016E060 */
ENTER(0x16e060);
SET32(4, RW(4) + -224); { JP_F_00163B60(c); return; }
}

void JP_F_0016E070(Ctx *c) { /* func_0016E070 */
ENTER(0x16e070);
 return;
}

void JP_F_0016E080(Ctx *c) { /* func_0016E080 */
ENTER(0x16e080);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(31));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x16e09c); c->f[12].u = rd32(c, (RW(2) + -22384)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0016E0B0(Ctx *c) { /* func_0016E0B0 */
ENTER(0x16e0b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x16e0c8);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0016E0E0(Ctx *c) { /* func_0016E0E0 */
ENTER(0x16e0e0);
wr16(c, (RW(4) + 42), (u16)RW(5)); return;
}

void JP_F_0016E0F0(Ctx *c) { /* func_0016E0F0 */
ENTER(0x16e0f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 44), c->f[14].u);
wr32(c, (RW(4) + 96), RW(0));
wr32(c, (RW(4) + 48), RW(0));
SET64(2, rd8(c, (RW(4) + 40)));
SET64(2, RD(2) | 0x1);
wr8(c, (RW(4) + 40), (u8)RW(2));
SET64(2, rd8(c, (RW(4) + 40)));
SET64(2, RD(2) & 0xfb);
wr8(c, (RW(4) + 40), (u8)RW(2));
SET64(2, rd8(c, (RW(4) + 40)));
SET64(2, RD(2) & 0xfd);
wr8(c, (RW(4) + 40), (u8)RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16e138);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0016E150(Ctx *c) { /* func_0016E150 */
ENTER(0x16e150);
wr32(c, (RW(4) + 44), c->f[12].u);
wr32(c, (RW(4) + 96), RW(0));
wr32(c, (RW(4) + 48), RW(0));
SET64(3, rd8(c, (RW(4) + 40)));
SET64(3, RD(3) | 0x1);
wr8(c, (RW(4) + 40), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 40)));
SET64(3, RD(3) & 0xfb);
wr8(c, (RW(4) + 40), (u8)RW(3));
SET64(3, rd8(c, (RW(4) + 40)));
SET64(3, RD(3) & 0xfd);
wr8(c, (RW(4) + 40), (u8)RW(3)); return;
}

void JP_F_0016E190(Ctx *c) { /* func_0016E190 */
ENTER(0x16e190);
wr32(c, (RW(4) + 104), RW(5)); return;
}

void JP_F_0016E1A0(Ctx *c) { /* func_0016E1A0 */
ENTER(0x16e1a0);
wr32(c, (RW(4) + 108), RW(5)); return;
}

void JP_F_0016E1B0(Ctx *c) { /* func_0016E1B0 */
ENTER(0x16e1b0);
wr32(c, (RW(4) + 112), RW(5)); return;
}

void JP_F_0016E1C0(Ctx *c) { /* func_0016E1C0 */
ENTER(0x16e1c0);
wr32(c, (RW(4) + 116), RW(5)); return;
}

void JP_F_0016E1D0(Ctx *c) { /* func_0016E1D0 */
ENTER(0x16e1d0);
wr32(c, (RW(4) + 120), RW(5)); return;
}

void JP_F_0016E1E0(Ctx *c) { /* func_0016E1E0 */
ENTER(0x16e1e0);
wr32(c, (RW(4) + 52), c->f[12].u); return;
}

void JP_F_0016E1F0(Ctx *c) { /* func_0016E1F0 */
ENTER(0x16e1f0);
wr32(c, (RW(4) + 56), c->f[12].u); return;
}

void JP_F_0016E200(Ctx *c) { /* func_0016E200 */
ENTER(0x16e200);
wr32(c, (RW(4) + 60), c->f[12].u); return;
}

void JP_F_0016E210(Ctx *c) { /* func_0016E210 */
ENTER(0x16e210);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[1].u = rd32(c, (RW(4) + 12));
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[2].u = rd32(c, (RW(4) + 8));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(12) + F(0));
wr32(c, (RW(4) + 12), c->f[0].u);
wr32(c, (RW(4) + 4), c->f[12].u);
c->f[1].u = rd32(c, (RW(4) + 16));
c->f[0].u = rd32(c, (RW(4) + 8));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(4) + 16), c->f[0].u);
wr32(c, (RW(4) + 8), c->f[2].u);
c->f[1].u = rd32(c, (RW(4) + 32));
c->f[0].u = rd32(c, (RW(4) + 24));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(12) + F(0));
wr32(c, (RW(4) + 32), c->f[0].u);
wr32(c, (RW(4) + 24), c->f[12].u);
c->f[1].u = rd32(c, (RW(4) + 36));
c->f[0].u = rd32(c, (RW(4) + 28));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(4) + 36), c->f[0].u);
wr32(c, (RW(4) + 28), c->f[2].u);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x16e28c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0016E2A0(Ctx *c) { /* func_0016E2A0 */
ENTER(0x16e2a0);
c->f[0].u = rd32(c, (RW(4) + 4)); return;
}

void JP_F_0016E2B0(Ctx *c) { /* func_0016E2B0 */
ENTER(0x16e2b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[1].u = rd32(c, (RW(4) + 12));
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[2].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(4) + 12), c->f[0].u);
wr32(c, (RW(4) + 4), c->f[2].u);
c->f[1].u = rd32(c, (RW(4) + 16));
c->f[0].u = rd32(c, (RW(4) + 8));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(12) + F(0));
wr32(c, (RW(4) + 16), c->f[0].u);
wr32(c, (RW(4) + 8), c->f[12].u);
c->f[1].u = rd32(c, (RW(4) + 32));
c->f[0].u = rd32(c, (RW(4) + 24));
c->f[2].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(4) + 32), c->f[0].u);
wr32(c, (RW(4) + 24), c->f[2].u);
c->f[1].u = rd32(c, (RW(4) + 36));
c->f[0].u = rd32(c, (RW(4) + 28));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(12) + F(0));
wr32(c, (RW(4) + 36), c->f[0].u);
wr32(c, (RW(4) + 28), c->f[12].u);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x16e330);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0016E340(Ctx *c) { /* func_0016E340 */
ENTER(0x16e340);
c->f[0].u = rd32(c, (RW(4) + 8)); return;
}

void JP_F_0016E350(Ctx *c) { /* func_0016E350 */
ENTER(0x16e350);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 20), c->f[12].u);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x16e36c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0016E380(Ctx *c) { /* func_0016E380 */
ENTER(0x16e380);
c->f[0].u = rd32(c, (RW(4) + 20)); return;
}

void JP_F_0016E390(Ctx *c) { /* func_0016E390 */
ENTER(0x16e390);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(0) + F(12));
wr32(c, (RW(4) + 12), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x16e3b4);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0016E3C0(Ctx *c) { /* func_0016E3C0 */
ENTER(0x16e3c0);
c->f[1].u = rd32(c, (RW(4) + 12));
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(1) - F(0)); return;
}

void JP_F_0016E3D0(Ctx *c) { /* func_0016E3D0 */
ENTER(0x16e3d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[0].u = rd32(c, (RW(4) + 8));
c->f[0].f = fpu(F(0) + F(12));
wr32(c, (RW(4) + 16), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x16e3f4);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0016E400(Ctx *c) { /* func_0016E400 */
ENTER(0x16e400);
c->f[1].u = rd32(c, (RW(4) + 16));
c->f[0].u = rd32(c, (RW(4) + 8));
c->f[0].f = fpu(F(1) - F(0)); return;
}

void JP_F_0016E410(Ctx *c) { /* func_0016E410 */
ENTER(0x16e410);
SET64(2, rd8(c, (RW(4) + 40)));
SET64(2, RD(2) & 0x1);
SET64(2, RD(0) < RD(2)); return;
}

void JP_F_0016E420(Ctx *c) { /* func_0016E420 */
ENTER(0x16e420);
 return;
}

void JP_F_0016E430(Ctx *c) { /* func_0016E430 */
ENTER(0x16e430);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET32(16, RW(17) + 4);
c->f[1].u = rd32(c, (RW(4) + 44));
c->f[0].u = rd32(c, (RW(4) + 48));
c->fcc = F(1) <= F(0);
{ int t = c->fcc; c->f[20].u = c->f[12].u; if (t) goto L_0016E49C; }
c->f[1].u = rd32(c, (RW(16) + 20));
c->f[0].u = rd32(c, (RW(16) + 0));
c->f[2].u = rd32(c, (RW(16) + 60));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = c->f[0].u & 0x7FFFFFFFu;
c->fcc = F(0) < F(2);
if (!c->fcc) { c->f[1].u = rd32(c, (RW(16) + 40)); goto L_0016E5AC; }
c->f[1].u = rd32(c, (RW(16) + 24));
c->f[0].u = rd32(c, (RW(16) + 4));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = c->f[0].u & 0x7FFFFFFFu;
c->fcc = F(0) < F(2);
{ int t = !c->fcc;  if (t) goto L_0016E5A8; }
L_0016E49C:;
c->f[1].u = rd32(c, (RW(16) + 8));
SET32(3, RW(0) + 3);
c->f[0].u = rd32(c, (RW(16) + 0));
c->f[2].u = rd32(c, (RW(16) + 20));
c->f[3].u = rd32(c, (RW(16) + 24));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(16) + 8), c->f[0].u);
wr32(c, (RW(16) + 0), c->f[2].u);
c->f[1].u = rd32(c, (RW(16) + 12));
c->f[0].u = rd32(c, (RW(16) + 4));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(3) + F(0));
wr32(c, (RW(16) + 12), c->f[0].u);
wr32(c, (RW(16) + 4), c->f[3].u);
SET64(4, (s16)rd16(c, (RW(16) + 38)));
if (RD(4) != RD(3)) { SET64(3, rd8(c, (RW(16) + 36))); goto L_0016E598; }
SET64(4, rd8(c, (RW(16) + 36)));
SET64(3, RD(4) & 0x2);
SET64(3, RD(0) < RD(3));
if (RD(3) == RD(0)) { SET64(3, RD(4) & 0x4); goto L_0016E56C; }
c->f[4].u = rd32(c, (RW(16) + 84));
SET64(2, (s64)(s32)0x40000000);
c->f[3].u = rd32(c, (RW(16) + 80));
c->f[2].u = rd32(c, (RW(16) + 76));
c->f[0].u = rd32(c, (RW(16) + 72));
c->f[1].u = RW(2);
wr32(c, (RW(16) + 20), c->f[0].u);
wr32(c, (RW(16) + 24), c->f[2].u);
wr32(c, (RW(16) + 28), c->f[3].u);
wr32(c, (RW(16) + 32), c->f[4].u);
c->f[0].u = rd32(c, (RW(16) + 88));
c->f[0].f = fpu_div(F(0), F(1));
wr32(c, (RW(16) + 40), c->f[0].u);
wr32(c, (RW(16) + 44), RW(0));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
c->f[12].u = rd32(c, (RW(16) + 20));
c->f[13].u = rd32(c, (RW(16) + 24));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16e54c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, rd8(c, (RW(16) + 36)));
SET64(3, RD(3) & 0xfd);
wr8(c, (RW(16) + 36), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 36)));
SET64(3, RD(3) | 0x4);
wr8(c, (RW(16) + 36), (u8)RW(3)); goto L_0016E5A0;
SET64(3, RD(4) & 0x4);
L_0016E56C:;
SET64(3, RD(0) < RD(3));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_0016E7CC; }
SET64(3, rd8(c, (RW(16) + 36)));
SET64(3, RD(3) & 0xfb);
wr8(c, (RW(16) + 36), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 36)));
SET64(3, RD(3) & 0xfe);
wr8(c, (RW(16) + 36), (u8)RW(3)); goto L_0016E5A0;
SET64(3, rd8(c, (RW(16) + 36)));
L_0016E598:;
SET64(3, RD(3) & 0xfe);
wr8(c, (RW(16) + 36), (u8)RW(3));
L_0016E5A0:;
 goto L_0016E7C8;
L_0016E5A8:;
c->f[1].u = rd32(c, (RW(16) + 40));
L_0016E5AC:;
c->f[0].u = rd32(c, (RW(16) + 44));
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_0016E7C8; }
wr32(c, (RW(29) + 76), RW(0));
SET32(3, RW(0) + 4);
wr32(c, (RW(29) + 72), RW(0));
SET64(4, (s16)rd16(c, (RW(16) + 38)));
if (RD(4) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 120))); goto L_0016E774; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET64(4, rd8(c, (RW(16) + 36))); goto L_0016E660; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 112))); goto L_0016E644; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 108))); goto L_0016E628; }
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 104))); goto L_0016E60C; }
c->f[0].u = rd32(c, (RW(16) + 0)); goto L_0016E788;
SET64(2, (s32)rd32(c, (RW(17) + 104)));
L_0016E60C:;
SET32(4, RW(29) + 76);
SET32(5, RW(29) + 72);
{ u32 t = RW(2); SET64(31, 0x16e61c); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
 goto L_0016E784;
SET64(2, (s32)rd32(c, (RW(17) + 108)));
L_0016E628:;
SET32(4, RW(29) + 76);
SET32(5, RW(29) + 72);
{ u32 t = RW(2); SET64(31, 0x16e638); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
 goto L_0016E784;
SET64(2, (s32)rd32(c, (RW(17) + 112)));
L_0016E644:;
SET32(4, RW(29) + 76);
SET32(5, RW(29) + 72);
{ u32 t = RW(2); SET64(31, 0x16e654); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
 goto L_0016E784;
SET64(4, rd8(c, (RW(16) + 36)));
L_0016E660:;
SET64(3, RD(4) & 0x2);
SET64(3, RD(0) < RD(3));
if (RD(3) != RD(0)) { SET64(4, rd8(c, (RW(16) + 36))); goto L_0016E718; }
SET64(3, RD(4) & 0x4);
SET64(3, RD(0) < RD(3));
{ int t = RD(3) != RD(0);  if (t) goto L_0016E714; }
c->f[4].u = rd32(c, (RW(16) + 32));
SET64(2, (s64)(s32)0x40000000);
c->f[3].u = rd32(c, (RW(16) + 28));
SET64(4, RD(17) + RD(0));
c->f[1].u = rd32(c, (RW(16) + 24));
c->f[0].u = rd32(c, (RW(16) + 20));
c->f[2].u = RW(2);
wr32(c, (RW(16) + 72), c->f[0].u);
wr32(c, (RW(16) + 76), c->f[1].u);
wr32(c, (RW(16) + 80), c->f[3].u);
wr32(c, (RW(16) + 84), c->f[4].u);
c->f[0].u = rd32(c, (RW(16) + 40));
wr32(c, (RW(16) + 88), c->f[0].u);
c->f[4].u = rd32(c, (RW(16) + 4));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
c->f[0].u = rd32(c, (RW(16) + 24));
c->f[3].u = rd32(c, (RW(16) + 0));
c->f[1].u = rd32(c, (RW(16) + 20));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
c->f[0].f = fpu(F(0) - F(4));
c->f[1].f = fpu(F(1) - F(3));
c->f[1].f = fpu_div(F(1), F(2));
c->f[0].f = fpu_div(F(0), F(2));
c->f[12].f = fpu(F(3) + F(1));
{ u32 t = RW(25); SET64(31, 0x16e6f0); c->f[13].f = fpu(F(4) + F(0)); rt_call(c, t); }
c->f[0].u = rd32(c, (RW(16) + 40));
SET64(3, (s64)(s32)0x40000000);
c->f[1].u = RW(3);
c->f[0].f = fpu_div(F(0), F(1));
wr32(c, (RW(16) + 40), c->f[0].u);
SET64(3, rd8(c, (RW(16) + 36)));
SET64(3, RD(3) | 0x2);
wr8(c, (RW(16) + 36), (u8)RW(3));
L_0016E714:;
SET64(4, rd8(c, (RW(16) + 36)));
L_0016E718:;
SET64(3, RD(4) & 0x2);
SET64(3, RD(0) < RD(3));
if (RD(3) == RD(0)) { SET64(3, RD(4) & 0x4); goto L_0016E748; }
SET64(2, (s32)rd32(c, (RW(17) + 108)));
SET32(4, RW(29) + 76);
SET32(5, RW(29) + 72);
{ u32 t = RW(2); SET64(31, 0x16e73c); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
 goto L_0016E784;
SET64(3, RD(4) & 0x4);
L_0016E748:;
SET64(3, RD(0) < RD(3));
{ int t = RD(3) == RD(0);  if (t) goto L_0016E784; }
SET64(2, (s32)rd32(c, (RW(17) + 112)));
SET32(4, RW(29) + 76);
SET32(5, RW(29) + 72);
{ u32 t = RW(2); SET64(31, 0x16e768); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
 goto L_0016E784;
SET64(2, (s32)rd32(c, (RW(17) + 120)));
L_0016E774:;
SET32(4, RW(29) + 76);
SET32(5, RW(29) + 72);
{ u32 t = RW(2); SET64(31, 0x16e784); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
L_0016E784:;
c->f[0].u = rd32(c, (RW(16) + 0));
L_0016E788:;
c->f[1].u = rd32(c, (RW(29) + 76));
c->f[2].u = rd32(c, (RW(29) + 72));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(16) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 4));
c->f[0].f = fpu(F(0) + F(2));
wr32(c, (RW(16) + 4), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 8));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(16) + 8), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 12));
c->f[0].f = fpu(F(0) + F(2));
wr32(c, (RW(16) + 12), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 44));
c->f[0].f = fpu(F(0) + F(20));
wr32(c, (RW(16) + 44), c->f[0].u);
L_0016E7C8:;
SET64(31, rd64(c, (RW(29) + 48)));
L_0016E7CC:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_0016E7E0(Ctx *c) { /* func_0016E7E0 */
ENTER(0x16e7e0);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, rd8(c, (RW(4) + 40)));
SET64(5, RD(5) & 0x1);
SET64(5, RD(0) < RD(5));
if (RD(5) != RD(3)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016E814; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x16e810);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_0016E814:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0016E820(Ctx *c) { /* func_0016E820 */
ENTER(0x16e820);
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(12) - F(0));
wr32(c, (RW(4) + 68), c->f[0].u);
c->f[0].u = rd32(c, (RW(4) + 8));
c->f[0].f = fpu(F(13) - F(0));
wr32(c, (RW(4) + 72), c->f[0].u);
c->f[1].u = rd32(c, (RW(4) + 32));
c->f[0].u = rd32(c, (RW(4) + 24));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(12) + F(0));
wr32(c, (RW(4) + 32), c->f[0].u);
wr32(c, (RW(4) + 24), c->f[12].u);
c->f[1].u = rd32(c, (RW(4) + 36));
c->f[0].u = rd32(c, (RW(4) + 28));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(13) + F(0));
wr32(c, (RW(4) + 36), c->f[0].u);
wr32(c, (RW(4) + 28), c->f[13].u); return;
}

void JP_F_0016E870(Ctx *c) { /* func_0016E870 */
ENTER(0x16e870);
SET64(3, (s64)(s32)0x170000);
SET32(3, RW(3) + -5936);
wr32(c, (RW(4) + 120), RW(3)); return;
}

void JP_F_0016E880(Ctx *c) { /* func_0016E880 */
ENTER(0x16e880);
SET64(3, (s64)(s32)0x170000);
SET32(3, RW(3) + -5952);
wr32(c, (RW(4) + 116), RW(3)); return;
}

void JP_F_0016E890(Ctx *c) { /* func_0016E890 */
ENTER(0x16e890);
SET64(3, (s64)(s32)0x170000);
SET32(3, RW(3) + -5920);
wr32(c, (RW(4) + 112), RW(3)); return;
}

void JP_F_0016E8A0(Ctx *c) { /* func_0016E8A0 */
ENTER(0x16e8a0);
SET64(3, (s64)(s32)0x170000);
SET32(3, RW(3) + -5808);
wr32(c, (RW(4) + 108), RW(3)); return;
}

void JP_F_0016E8B0(Ctx *c) { /* func_0016E8B0 */
ENTER(0x16e8b0);
SET64(3, (s64)(s32)0x170000);
SET32(3, RW(3) + -5712);
wr32(c, (RW(4) + 104), RW(3)); return;
}

void JP_F_0016E8C0(Ctx *c) { /* func_0016E8C0 */
ENTER(0x16e8c0);
 return;
}

void JP_F_0016E8D0(Ctx *c) { /* func_0016E8D0 */
ENTER(0x16e8d0);
 return;
}

void JP_F_0016E8E0(Ctx *c) { /* func_0016E8E0 */
ENTER(0x16e8e0);
c->f[4].u = rd32(c, (RW(6) + 44));
SET64(3, (s64)(s32)0x3f800000);
c->f[3].u = rd32(c, (RW(6) + 40));
c->f[2].u = RW(3);
c->f[0].u = rd32(c, (RW(6) + 64));
c->f[3].f = fpu_div(F(4), F(3));
c->f[4].f = fpu(F(2) - F(3));
c->f[0].f = fpu(F(0) * F(4));
c->f[2].f = fpu(F(4) * F(0));
c->f[1].u = rd32(c, (RW(6) + 20));
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[3].u = RW(0);
c->f[0].f = fpu(F(1) - F(0));
c->facc = fpu(F(3) + F(0));
c->f[0].f = fpu(c->facc - F(4) * F(2));
wr32(c, (RW(4) + 0), c->f[0].u);
c->f[2].u = rd32(c, (RW(6) + 68));
c->f[1].u = rd32(c, (RW(6) + 24));
c->f[0].u = rd32(c, (RW(6) + 4));
c->f[2].f = fpu(F(2) * F(4));
c->f[0].f = fpu(F(1) - F(0));
c->facc = fpu(F(3) + F(0));
c->f[0].f = fpu(F(4) * F(2));
c->f[0].f = fpu(c->facc - F(4) * F(0));
wr32(c, (RW(5) + 0), c->f[0].u); return;
}

void JP_F_0016E950(Ctx *c) { /* func_0016E950 */
ENTER(0x16e950);
c->f[3].u = rd32(c, (RW(6) + 44));
c->f[2].u = rd32(c, (RW(6) + 40));
c->f[1].u = rd32(c, (RW(6) + 64));
c->f[0].u = rd32(c, (RW(6) + 20));
c->f[4].f = fpu_div(F(3), F(2));
c->f[2].f = fpu(F(0) - F(1));
c->f[0].f = fpu(F(1) * F(4));
c->f[0].f = fpu(F(4) * F(0));
c->f[1].u = rd32(c, (RW(6) + 0));
c->f[0].f = fpu(F(4) * F(0));
c->f[1].f = fpu(F(1) - F(2));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(4) + 0), c->f[0].u);
c->f[3].u = rd32(c, (RW(6) + 68));
c->f[1].u = rd32(c, (RW(6) + 24));
c->f[2].u = rd32(c, (RW(6) + 4));
c->f[0].f = fpu(F(3) * F(4));
c->f[0].f = fpu(F(4) * F(0));
c->f[1].f = fpu(F(1) - F(3));
c->f[0].f = fpu(F(4) * F(0));
c->f[1].f = fpu(F(2) - F(1));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(5) + 0), c->f[0].u); return;
}

void JP_F_0016E9B0(Ctx *c) { /* func_0016E9B0 */
ENTER(0x16e9b0);
c->f[3].u = rd32(c, (RW(6) + 44));
c->f[2].u = rd32(c, (RW(6) + 92));
c->f[1].u = rd32(c, (RW(6) + 64));
c->f[0].u = rd32(c, (RW(6) + 40));
c->f[2].f = fpu(F(3) - F(2));
c->f[1].f = fpu(F(1) * F(2));
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(4) + 0), c->f[0].u);
c->f[3].u = rd32(c, (RW(6) + 44));
c->f[2].u = rd32(c, (RW(6) + 92));
c->f[1].u = rd32(c, (RW(6) + 68));
c->f[0].u = rd32(c, (RW(6) + 40));
c->f[2].f = fpu(F(3) - F(2));
c->f[1].f = fpu(F(1) * F(2));
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(5) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(6) + 44));
wr32(c, (RW(6) + 92), c->f[0].u); return;
}

void JP_F_0016EA00(Ctx *c) { /* func_0016EA00 */
ENTER(0x16ea00);
c->f[1].u = rd32(c, (RW(4) + 12));
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(12) + F(0));
wr32(c, (RW(4) + 12), c->f[0].u);
wr32(c, (RW(4) + 4), c->f[12].u);
c->f[1].u = rd32(c, (RW(4) + 16));
c->f[0].u = rd32(c, (RW(4) + 8));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(13) + F(0));
wr32(c, (RW(4) + 16), c->f[0].u);
wr32(c, (RW(4) + 8), c->f[13].u);
c->f[1].u = rd32(c, (RW(4) + 32));
c->f[0].u = rd32(c, (RW(4) + 24));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(12) + F(0));
wr32(c, (RW(4) + 32), c->f[0].u);
wr32(c, (RW(4) + 24), c->f[12].u);
c->f[1].u = rd32(c, (RW(4) + 36));
c->f[0].u = rd32(c, (RW(4) + 28));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(13) + F(0));
wr32(c, (RW(4) + 36), c->f[0].u);
wr32(c, (RW(4) + 28), c->f[13].u); return;
}

void JP_F_0016EA70(Ctx *c) { /* func_0016EA70 */
ENTER(0x16ea70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x16ea8c); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x16ea9c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x16eaac); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x16eabc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x16eacc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 100)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16eadc); SET32(4, RW(16) + 4); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0016EAF0(Ctx *c) { /* func_0016EAF0 */
ENTER(0x16eaf0);
SET64(2, rd8(c, (RW(4) + 198))); return;
}

void JP_F_0016EB00(Ctx *c) { /* func_0016EB00 */
ENTER(0x16eb00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_0016EBB8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 3824);
SET32(2, RW(2) + 3836);
wr32(c, (RW(16) + 40), RW(3));
wr32(c, (RW(16) + 244), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x16eb44);  rt_call(c, t); }
SET32(4, RW(16) + 44);
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_0016EB98; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15072);
wr32(c, (RW(16) + 244), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16eb6c);  rt_call(c, t); }
SET32(4, RW(16) + 44);
{ int t = RD(4) == RD(0);  if (t) goto L_0016EB94; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
SET64(31, 0x16eb88); wr32(c, (RW(16) + 60), RW(2)); JP_F_00157620(c);
SET32(4, RW(16) + 44);
SET64(31, 0x16eb94); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
L_0016EB94:;
SET64(4, RD(16) + RD(0));
L_0016EB98:;
SET64(31, 0x16eba0); SET64(5, RD(0) + RD(0)); JP_F_00160580(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(16) + RD(0)); goto L_0016EBBC; }
SET64(31, 0x16ebb8); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_0016EBB8:;
SET64(2, RD(16) + RD(0));
L_0016EBBC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016EBD0(Ctx *c) { /* func_0016EBD0 */
ENTER(0x16ebd0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 248)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 284))); goto L_0016EC10; }
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x16ebfc);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_0016EC0C; }
SET64(2, RD(0) + RD(0)); goto L_0016EC40;
L_0016EC0C:;
SET64(4, (s32)rd32(c, (RW(16) + 284)));
L_0016EC10:;
if (RD(4) == RD(0)) { SET32(4, RW(16) + 44); goto L_0016EC38; }
SET64(31, 0x16ec20);  JP_F_003BDFC0(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_0016EC34; }
SET64(2, RD(0) + RD(0)); goto L_0016EC40;
L_0016EC34:;
SET32(4, RW(16) + 44);
L_0016EC38:;
SET64(31, 0x16ec40);  JP_F_00195A60(c);
L_0016EC40:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0016EC50(Ctx *c) { /* func_0016EC50 */
ENTER(0x16ec50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 252)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x16ec74);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 256)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 260))); goto L_0016EC8C; }
SET64(31, 0x16ec88);  JP_F_00163040(c);
SET64(4, (s32)rd32(c, (RW(16) + 260)));
L_0016EC8C:;
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_0016ECA8; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 60)));
{ u32 t = RW(25); SET64(31, 0x16eca4); SET64(5, (s32)rd32(c, (RW(16) + 264))); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_0016ECA8:;
SET64(31, 0x16ecb0);  JP_F_0015FE90(c);
SET32(4, RW(16) + 44);
SET64(31, 0x16ecbc); SET64(5, RD(0) + RD(0)); JP_F_00195BE0(c);
SET64(4, (s32)rd32(c, (RW(16) + 284)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_0016ECD4; }
SET64(31, 0x16ecd0);  JP_F_003BE020(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_0016ECD4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

static void JP_B_0016ECE0(Ctx *c, u32 entry) { /* func_0016ECE0 */
ENTER(entry);
switch (entry) { case 0x16ed28: goto L_0016ED28; case 0x16edac: goto L_0016EDAC; case 0x16edb4: goto L_0016EDB4; case 0x16ee00: goto L_0016EE00; case 0x16ee38: goto L_0016EE38; case 0x16ee8c: goto L_0016EE8C; case 0x16eedc: goto L_0016EEDC; case 0x16eee0: goto L_0016EEE0; }
L_0016ECE0:;
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(0) + (s64)1);
SET64(5, rd16(c, (RW(4) + 288)));
SET64(1, RD(5) < (u64)(s64)11);
{ int t = RD(1) == RD(0); c->f[20].u = c->f[12].u; if (t) goto L_0016EEE0; }
SET64(3, (s64)(s32)0x4a0000);
SET32(2, RW(5) << 2);
SET32(3, RW(3) + -21024);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x16ece0: goto L_0016ECE0; case 0x16ed28: goto L_0016ED28; case 0x16edac: goto L_0016EDAC; case 0x16edb4: goto L_0016EDB4; case 0x16ee00: goto L_0016EE00; case 0x16ee38: goto L_0016EE38; case 0x16ee8c: goto L_0016EE8C; case 0x16eedc: goto L_0016EEDC; case 0x16eee0: goto L_0016EEE0; default: rt_jump(c, t); return; } }
L_0016ED28:;
SET64(31, 0x16ed30);  JP_F_001600F0(c);
SET64(4, (s32)rd32(c, (RW(17) + 252)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x16ed44);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 16)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 228), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 24)));
wr8(c, (RW(2) + 36), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr8(c, (RW(2) + 36), (u8)RW(3));
SET64(5, (s32)rd32(c, (RW(17) + 8)));
SET64(6, (s32)rd32(c, (RW(17) + 16)));
SET64(31, 0x16ed70); SET32(4, RW(17) + 44); JP_F_00195FA0(c);
SET64(4, (s32)rd32(c, (RW(17) + 260)));
if (RD(4) == RD(0)) { SET64(2, rd16(c, (RW(17) + 288))); goto L_0016EDA0; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(5, (s32)rd32(c, (RW(17) + 264)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x16ed90); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 256)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 228), (u8)RW(3));
SET64(2, rd16(c, (RW(17) + 288)));
L_0016EDA0:;
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 288), (u16)RW(2)); goto L_0016EEE0;
L_0016EDAC:;
SET32(2, RW(5) + 1);
wr16(c, (RW(17) + 288), (u16)RW(2));
L_0016EDB4:;
SET32(4, RW(17) + 44);
SET64(31, 0x16edc0); c->f[12].u = c->f[20].u; JP_F_00196FD0(c);
SET64(4, (s32)rd32(c, (RW(17) + 260)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_0016EDE0; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x16eddc); c->f[12].u = c->f[20].u; rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
L_0016EDE0:;
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_0016EDEC; }
SET64(2, rd8(c, (RW(17) + 32)));
L_0016EDEC:;
if (RD(2) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_0016EEE4; }
SET32(2, RW(0) + 4);
wr16(c, (RW(17) + 288), (u16)RW(2)); goto L_0016EEE0;
L_0016EE00:;
SET64(31, 0x16ee08);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 252))); goto L_0016EE1C; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 252)));
L_0016EE1C:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x16ee2c);  rt_call(c, t); }
SET64(2, rd16(c, (RW(17) + 288)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 288), (u16)RW(2));
L_0016EE38:;
SET64(5, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x16ee44); SET32(4, RW(17) + 44); JP_F_00195BE0(c);
SET64(4, (s32)rd32(c, (RW(17) + 260)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 16))); goto L_0016EE6C; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 60)));
{ u32 t = RW(25); SET64(31, 0x16ee60); SET64(5, (s32)rd32(c, (RW(17) + 264))); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 256)));
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 16)));
L_0016EE6C:;
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 24)));
wr8(c, (RW(2) + 36), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr8(c, (RW(2) + 36), (u8)RW(0));
SET64(2, rd16(c, (RW(17) + 288)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 288), (u16)RW(2));
L_0016EE8C:;
SET64(4, (s32)rd32(c, (RW(17) + 260)));
if (RD(4) == RD(0)) { SET32(4, RW(17) + 44); goto L_0016EEB4; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x16eea8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0016EEE0; }
SET32(4, RW(17) + 44);
L_0016EEB4:;
SET64(31, 0x16eebc);  JP_F_00195A60(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0016EEE0; }
SET64(25, (s32)rd32(c, (RW(17) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x16eed4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 10);
wr16(c, (RW(17) + 288), (u16)RW(2));
L_0016EEDC:;
SET64(16, RD(0) + RD(0));
L_0016EEE0:;
SET64(2, RD(16) + RD(0));
L_0016EEE4:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}
void JP_F_0016ECE0(Ctx *c) { JP_B_0016ECE0(c, 0x16ece0); }
void JP_F_0016ED28(Ctx *c) { JP_B_0016ECE0(c, 0x16ed28); }
void JP_F_0016EDAC(Ctx *c) { JP_B_0016ECE0(c, 0x16edac); }
void JP_F_0016EDB4(Ctx *c) { JP_B_0016ECE0(c, 0x16edb4); }
void JP_F_0016EE00(Ctx *c) { JP_B_0016ECE0(c, 0x16ee00); }
void JP_F_0016EE38(Ctx *c) { JP_B_0016ECE0(c, 0x16ee38); }
void JP_F_0016EE8C(Ctx *c) { JP_B_0016ECE0(c, 0x16ee8c); }
void JP_F_0016EEDC(Ctx *c) { JP_B_0016ECE0(c, 0x16eedc); }
void JP_F_0016EEE0(Ctx *c) { JP_B_0016ECE0(c, 0x16eee0); }

void JP_F_0016EF00(Ctx *c) { /* func_0016EF00 */
ENTER(0x16ef00);
 return;
}

void JP_F_0016EF10(Ctx *c) { /* func_0016EF10 */
ENTER(0x16ef10);
 return;
}

void JP_F_0016EF20(Ctx *c) { /* func_0016EF20 */
ENTER(0x16ef20);
 return;
}

void JP_F_0016EF30(Ctx *c) { /* func_0016EF30 */
ENTER(0x16ef30);
 return;
}

void JP_F_0016EF40(Ctx *c) { /* func_0016EF40 */
ENTER(0x16ef40);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 248)));
{ int t = RD(2) != RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_0016EF8C; }
SET64(31, 0x16ef6c); SET32(4, RW(0) + 112); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016EF7C; }
SET64(31, 0x16ef7c); SET64(4, RD(16) + RD(0)); JP_F_00161330(c);
L_0016EF7C:;
wr32(c, (RW(18) + 248), RW(16));
SET64(5, rd16(c, (RW(17) + 2)));
SET64(31, 0x16ef8c); SET64(4, RD(16) + RD(0)); JP_F_00160C90(c);
L_0016EF8C:;
SET64(4, (s16)rd16(c, (RW(17) + 14)));
SET64(2, (s64)(s32)0x3f800000);
SET64(3, (s16)rd16(c, (RW(17) + 12)));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 92), RW(2));
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 84), c->f[0].u);
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 80), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(18) + 248)));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x16efd4); SET32(5, RW(29) + 80); rt_call(c, t); }
SET64(6, (s32)rd32(c, (RW(17) + 28)));
if (RD(6) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 248))); goto L_0016EFF4; }
SET64(5, (s32)rd32(c, (RW(17) + 20)));
SET64(31, 0x16efec); SET64(4, (s32)rd32(c, (RW(18) + 248))); JP_F_00161210(c);
SET64(4, (s16)rd16(c, (RW(17) + 16))); goto L_0016F004;
L_0016EFF4:;
SET64(6, (s32)rd32(c, (RW(17) + 24)));
SET64(31, 0x16f000); SET64(5, (s32)rd32(c, (RW(17) + 20))); JP_F_00161110(c);
SET64(4, (s16)rd16(c, (RW(17) + 16)));
L_0016F004:;
SET64(2, (s16)rd16(c, (RW(17) + 12)));
{ int t = RD(2) != RD(4);  if (t) goto L_0016F020; }
SET64(3, (s16)rd16(c, (RW(17) + 14)));
SET64(2, (s16)rd16(c, (RW(17) + 18)));
if (RD(3) == RD(2)) { SET64(4, (s32)rd32(c, (RW(18) + 248))); goto L_0016F068; }
L_0016F020:;
c->f[0].u = RW(4);
SET64(2, (s64)(s32)0x3f800000);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 76), RW(2));
SET64(3, (s16)rd16(c, (RW(17) + 18)));
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 72), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 248)));
wr32(c, (RW(29) + 64), c->f[0].u);
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 68), c->f[0].u);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 16) & ~15u, &c->r[3]);
wr8(c, (RW(4) + 1), (u8)RW(2));
wr32(c, (RW(4) + 4), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 248)));
L_0016F068:;
SET64(2, rd16(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(2, RD(2) & 0x1);
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x16f080); SET64(5, RD(0) < RD(2)); rt_call(c, t); }
SET64(2, rd8(c, (RW(17) + 4)));
{ int t = RSD(2) < 0; SET64(16, (s32)rd32(c, (RW(18) + 248))); if (t) goto L_0016F098; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_0016F0B4;
L_0016F098:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_0016F0B4:;
SET64(2, (s64)(s32)0x43000000);
SET32(4, RW(16) + 48);
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x16f0d8);  JP_F_00163900(c);
SET64(2, rd8(c, (RW(17) + 5)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0016F0F0; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_0016F108;
L_0016F0F0:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_0016F108:;
SET64(2, (s64)(s32)0x43000000);
SET32(4, RW(16) + 48);
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x16f12c);  JP_F_001638F0(c);
SET64(2, rd8(c, (RW(17) + 6)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0016F144; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_0016F15C;
L_0016F144:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_0016F15C:;
SET64(2, (s64)(s32)0x43000000);
SET32(4, RW(16) + 48);
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x16f180);  JP_F_001638E0(c);
SET64(2, rd8(c, (RW(17) + 7)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0016F198; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_0016F1B0;
L_0016F198:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_0016F1B0:;
SET64(2, (s64)(s32)0x43000000);
SET32(4, RW(16) + 48);
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x16f1d4);  JP_F_001638D0(c);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x16f1e4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(31, 0x16f1f0); SET32(5, RW(17) + 8); JP_F_0015FE70(c);
SET64(3, (s32)rd32(c, (RW(18) + 248)));
wr32(c, (RW(18) + 0), RW(3));
SET64(3, rd16(c, (RW(17) + 0)));
wr16(c, (RW(18) + 290), (u16)RW(3));
wr16(c, (RW(18) + 288), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_0016F220(Ctx *c) { /* func_0016F220 */
ENTER(0x16f220);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 260)));
if (RD(4) == RD(0)) { SET32(4, RW(16) + 44); goto L_0016F280; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16f24c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 260)));
SET64(5, (s32)rd32(c, (RW(2) + 124)));
SET64(31, 0x16f25c); SET64(4, (s32)rd32(c, (RW(16) + 168))); JP_F_0019C890(c);
SET64(4, (s32)rd32(c, (RW(16) + 260)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 260), RW(0)); goto L_0016F27C; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16f278); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 260), RW(0));
L_0016F27C:;
SET32(4, RW(16) + 44);
L_0016F280:;
SET64(31, 0x16f288);  JP_F_0019B570(c);
SET64(3, rd16(c, (RW(16) + 336)));
SET64(3, RD(3) & 0xf7ff);
wr16(c, (RW(16) + 336), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0016F2B0(Ctx *c) { /* func_0016F2B0 */
ENTER(0x16f2b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016F328; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 15072);
wr32(c, (RW(17) + 200), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16f2e8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016F314; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + -32);
SET64(31, 0x16f304); wr32(c, (RW(17) + 16), RW(2)); JP_F_00157620(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x16f310); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(2, RD(16) << 48);
L_0016F314:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016F32C; }
SET64(31, 0x16f328); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016F328:;
SET64(2, RD(17) + RD(0));
L_0016F32C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016F340(Ctx *c) { /* func_0016F340 */
ENTER(0x16f340);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x16f354); SET64(16, RD(4) + RD(0)); JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x16f368);  rt_call(c, t); }
SET64(31, 0x16f370);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x16f37c); SET32(5, RW(0) + 1); JP_F_001630B0(c);
SET64(25, (s32)rd32(c, (RW(16) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x16f38c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, 0x16f394); SET32(4, RW(16) + 44); JP_F_0019B3B0(c);
SET64(31, 0x16f39c); SET64(4, RD(16) + RD(0)); JP_F_001603F0(c);
SET64(4, (s32)rd32(c, (RW(16) + 252)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 252), RW(0)); goto L_0016F3BC; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16f3b8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 252), RW(0));
L_0016F3BC:;
SET64(4, (s32)rd32(c, (RW(16) + 248)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 248), RW(0)); goto L_0016F3DC; }
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x16f3d8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 248), RW(0));
L_0016F3DC:;
SET64(4, (s32)rd32(c, (RW(16) + 256)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 256), RW(0)); goto L_0016F3FC; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16f3f8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 256), RW(0));
L_0016F3FC:;
SET64(4, (s32)rd32(c, (RW(16) + 264)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 264), RW(0)); goto L_0016F41C; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16f418); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 264), RW(0));
L_0016F41C:;
SET64(4, (s32)rd32(c, (RW(16) + 284)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 284), RW(0)); goto L_0016F43C; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16f438); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 284), RW(0));
L_0016F43C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0016F450(Ctx *c) { /* func_0016F450 */
ENTER(0x16f450);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016F494; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4104);
SET64(31, 0x16f47c); wr32(c, (RW(17) + 4), RW(2)); JP_F_003BE230(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016F498; }
SET64(31, 0x16f494); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016F494:;
SET64(2, RD(17) + RD(0));
L_0016F498:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016F4B0(Ctx *c) { /* func_0016F4B0 */
ENTER(0x16f4b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016F57C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 3952);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(7, (s32)rd32(c, (RW(17) + 12)));
SET32(9, RW(9) + 4068);
SET64(5, (s64)(s32)0x2b0000);
SET32(8, RW(8) + 4000);
SET32(3, RW(3) + 4020);
SET32(2, RW(17) + 464);
wr32(c, (RW(7) + 16), RW(9));
SET32(4, RW(17) + 272);
wr32(c, (RW(17) + 168), RW(8));
SET32(5, RW(5) + 16688);
wr32(c, (RW(17) + 172), RW(3));
SET32(6, RW(0) + 96);
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(7, RW(0) + 2);
SET32(2, RW(2) - RW(3));
SET64(31, 0x16f528); wr32(c, (RW(3) + 20), RW(2)); JP_F_00102360(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x16f534); SET64(5, RD(0) + RD(0)); JP_F_0014D0B0(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016F568; }
SET32(4, RW(17) + 464);
{ int t = RD(4) == RD(0);  if (t) goto L_0016F564; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 480), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16f564);  rt_call(c, t); }
L_0016F564:;
SET64(2, RD(16) << 48);
L_0016F568:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016F580; }
SET64(31, 0x16f57c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016F57C:;
SET64(2, RD(17) + RD(0));
L_0016F580:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016F5A0(Ctx *c) { /* func_0016F5A0 */
ENTER(0x16f5a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 260)));
if (RD(4) == RD(0)) { SET32(4, RW(16) + 44); goto L_0016F5E0; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x16f5cc);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0016F5DC; }
SET32(2, RW(0) + 1); goto L_0016F5E8;
L_0016F5DC:;
SET32(4, RW(16) + 44);
L_0016F5E0:;
SET64(31, 0x16f5e8);  JP_F_001982B0(c);
L_0016F5E8:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0016F600(Ctx *c) { /* func_0016F600 */
ENTER(0x16f600);
 return;
}

void JP_F_0016F610(Ctx *c) { /* func_0016F610 */
ENTER(0x16f610);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(3, rd16(c, (RW(4) + 336)));
SET64(3, RD(3) | 0x800);
{ int t = RD(5) == RD(0); wr16(c, (RW(4) + 336), (u16)RW(3)); if (t) goto L_0016F644; }
SET64(31, 0x16f644); SET32(4, RW(18) + 44); JP_F_00198420(c);
L_0016F644:;
if (RD(17) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_0016F6CC; }
SET64(31, 0x16f654); SET32(4, RW(0) + 204); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016F664; }
SET64(31, 0x16f664); SET64(4, RD(16) + RD(0)); JP_F_0019C7B0(c);
L_0016F664:;
SET64(31, 0x16f66c); SET64(4, RD(16) + RD(0)); JP_F_0019B4E0(c);
SET64(2, (s32)rd32(c, (RW(18) + 128)));
wr32(c, (RW(16) + 84), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 156)));
wr32(c, (RW(16) + 112), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 160)));
wr32(c, (RW(16) + 116), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 164)));
wr32(c, (RW(16) + 120), RW(2));
wr32(c, (RW(18) + 260), RW(16));
SET64(2, (s32)rd32(c, (RW(18) + 256)));
SET32(2, RW(2) + 784);
wr32(c, (RW(16) + 80), RW(2));
SET64(31, 0x16f6a4); SET64(4, (s32)rd32(c, (RW(18) + 168))); JP_F_0019CB40(c);
SET64(4, (s32)rd32(c, (RW(18) + 260)));
SET32(3, RW(0) + 1);
wr32(c, (RW(4) + 124), RW(2));
wr8(c, (RW(4) + 193), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 260)));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x16f6c8); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
L_0016F6CC:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_0016F6E0(Ctx *c) { /* func_0016F6E0 */
ENTER(0x16f6e0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x16f708); SET32(4, RW(18) + 44); JP_F_0019B2B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_0016F7A8; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(4);  if (t) goto L_0016F7A4; }
SET64(31, 0x16f728);  JP_F_00157C00(c);
SET64(31, 0x16f730); SET32(4, RW(0) + 204); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016F740; }
SET64(31, 0x16f740); SET64(4, RD(16) + RD(0)); JP_F_0019C7B0(c);
L_0016F740:;
SET64(31, 0x16f748); SET64(4, RD(16) + RD(0)); JP_F_0019B4E0(c);
SET64(2, (s32)rd32(c, (RW(18) + 128)));
wr32(c, (RW(16) + 84), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 156)));
wr32(c, (RW(16) + 112), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 160)));
wr32(c, (RW(16) + 116), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 164)));
wr32(c, (RW(16) + 120), RW(2));
wr32(c, (RW(18) + 260), RW(16));
SET64(2, (s32)rd32(c, (RW(18) + 256)));
SET32(2, RW(2) + 784);
wr32(c, (RW(16) + 80), RW(2));
SET64(31, 0x16f780); SET64(4, (s32)rd32(c, (RW(18) + 168))); JP_F_0019CB40(c);
SET64(4, (s32)rd32(c, (RW(18) + 260)));
SET32(3, RW(0) + 1);
wr32(c, (RW(4) + 124), RW(2));
wr8(c, (RW(4) + 193), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 260)));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x16f7a4); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
L_0016F7A4:;
SET64(31, rd64(c, (RW(29) + 48)));
L_0016F7A8:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_0016F7C0(Ctx *c) { /* func_0016F7C0 */
ENTER(0x16f7c0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x16f7e4); SET64(16, RD(5) + RD(0)); JP_F_002C29D0(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(17, (s32)c->f[0].u);
SET64(31, 0x16f7f4);  JP_F_002C2A00(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET32(4, RW(0) + 928);
wr32(c, (RW(29) + 92), RW(17));
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 84), RW(0));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x16f814); wr32(c, (RW(29) + 88), RW(2)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016F82C; }
SET64(5, (s32)rd32(c, (RW(28) + -29932)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x16f82c); SET32(6, RW(0) + 16384); JP_F_001632E0(c);
L_0016F82C:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 80);
SET64(31, 0x16f83c); wr32(c, (RW(18) + 256), RW(17)); JP_F_00162E90(c);
SET64(2, (s32)rd32(c, (RW(18) + 256)));
SET32(4, RW(0) + 496);
SET64(2, (s32)rd32(c, (RW(2) + 236)));
wr8(c, (RW(2) + 324), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 256)));
SET64(31, 0x16f858); wr8(c, (RW(2) + 228), (u8)RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_0016F8B0; }
SET32(5, RW(0) + 32);
SET64(4, RD(19) + RD(0));
SET32(6, RW(0) + 64);
SET64(31, 0x16f874); SET64(7, RD(5) + RD(0)); JP_F_002A6630(c);
SET32(17, RW(19) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(17) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x16f88c); wr32(c, (RW(19) + 240), RW(4)); JP_F_002AE1F0(c);
SET64(31, 0x16f894); SET32(4, RW(17) + 32); JP_F_002A88F0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 240), RW(17));
SET32(2, RW(2) + -3920);
SET64(4, RD(19) + RD(0));
wr32(c, (RW(19) + 144), RW(2));
SET64(31, 0x16f8b0); SET32(5, RW(19) + 272); JP_F_002A6520(c);
L_0016F8B0:;
wr32(c, (RW(18) + 264), RW(19));
SET64(2, (s32)rd32(c, (RW(18) + 256)));
SET64(4, (s32)rd32(c, (RW(2) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x16f8c8); SET64(5, RD(19) + RD(0)); JP_F_002ADFE0(c);
if (RD(16) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_0016F8F8; }
SET64(31, 0x16f8d8); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016F8E8; }
SET64(31, 0x16f8e8); SET64(4, RD(16) + RD(0)); JP_F_003BE340(c);
L_0016F8E8:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x16f8f4); wr32(c, (RW(18) + 284), RW(16)); JP_F_003BE270(c);
SET64(4, RD(18) + RD(0));
L_0016F8F8:;
SET64(31, 0x16f900);  JP_F_00160100(c);
SET64(31, 0x16f908); SET32(4, RW(18) + 44); JP_F_0019B4E0(c);
SET64(2, (s32)rd32(c, (RW(18) + 36)));
wr32(c, (RW(18) + 128), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 16)));
SET32(2, RW(2) + 784);
wr32(c, (RW(18) + 124), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 12)));
SET64(31, 0x16f928); wr32(c, (RW(18) + 104), RW(2)); JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x16f934); SET64(5, RD(0) + RD(0)); JP_F_001630B0(c);
wr16(c, (RW(18) + 336), (u16)RW(0));
SET32(4, RW(0) + 496);
wr16(c, (RW(18) + 290), (u16)RW(0));
SET64(31, 0x16f948); wr16(c, (RW(18) + 288), (u16)RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016F9D0; }
SET32(4, RW(17) + 464);
SET32(16, RW(0) + 1);
SET64(31, 0x16f960); wr32(c, (RW(17) + 12), RW(4)); JP_F_00141C80(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x16f96c); SET64(5, RD(0) + RD(0)); JP_F_0014D1F0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 3952);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(7, (s32)rd32(c, (RW(17) + 12)));
SET32(9, RW(9) + 4068);
SET64(5, (s64)(s32)0x2b0000);
SET64(6, (s64)(s32)0x2b0000);
SET32(8, RW(8) + 4000);
SET32(3, RW(3) + 4020);
wr32(c, (RW(7) + 16), RW(9));
SET32(2, RW(17) + 464);
wr32(c, (RW(17) + 168), RW(8));
SET32(4, RW(17) + 272);
wr32(c, (RW(17) + 172), RW(3));
SET32(5, RW(5) + 16784);
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(6, RW(6) + 16688);
SET32(7, RW(0) + 96);
SET32(8, RW(0) + 2);
SET32(2, RW(2) - RW(3));
SET64(31, 0x16f9d0); wr32(c, (RW(3) + 20), RW(2)); JP_F_001023D0(c);
L_0016F9D0:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x16f9e0); wr32(c, (RW(18) + 252), RW(17)); JP_F_0015EEA0(c);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_0016FA00(Ctx *c) { /* func_0016FA00 */
ENTER(0x16fa00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x16fa14); SET64(16, RD(4) + RD(0)); JP_F_001605E0(c);
SET64(31, 0x16fa1c); SET32(4, RW(16) + 44); JP_F_0019C7B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 3824);
SET32(3, RW(3) + 3836);
wr32(c, (RW(16) + 40), RW(2));
wr32(c, (RW(16) + 244), RW(3));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 248), RW(0));
wr32(c, (RW(16) + 252), RW(0));
wr32(c, (RW(16) + 256), RW(0));
wr32(c, (RW(16) + 260), RW(0));
wr32(c, (RW(16) + 264), RW(0));
wr32(c, (RW(16) + 268), RW(0));
wr32(c, (RW(16) + 272), RW(0));
wr32(c, (RW(16) + 276), RW(0));
wr32(c, (RW(16) + 280), RW(0));
wr32(c, (RW(16) + 284), RW(0));
wr32(c, (RW(16) + 304), RW(0));
wr32(c, (RW(16) + 308), RW(0));
wr32(c, (RW(16) + 312), RW(0));
wr32(c, (RW(16) + 316), RW(0));
wr32(c, (RW(16) + 320), RW(0));
wr32(c, (RW(16) + 324), RW(0));
wr32(c, (RW(16) + 328), RW(0));
wr32(c, (RW(16) + 332), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0016FA90(Ctx *c) { /* func_0016FA90 */
ENTER(0x16fa90);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(28) + -29912)));
SET64(3, (s32)rd32(c, (RW(2) + 40)));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 5);
SET32(2, RW(4) + RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 280)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16fac0); SET32(4, RW(2) + 272); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0016FAD0(Ctx *c) { /* func_0016FAD0 */
ENTER(0x16fad0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { JP_F_0014CAB0(c); return; }
}

void JP_F_0016FAE0(Ctx *c) { /* func_0016FAE0 */
ENTER(0x16fae0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { JP_F_0014CB10(c); return; }
}

void JP_F_0016FAF0(Ctx *c) { /* func_0016FAF0 */
ENTER(0x16faf0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { JP_F_0014D000(c); return; }
}

void JP_F_0016FB00(Ctx *c) { /* func_0016FB00 */
ENTER(0x16fb00);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { JP_F_0016F4B0(c); return; }
}

void JP_F_0016FB10(Ctx *c) { /* func_0016FB10 */
ENTER(0x16fb10);
SET32(4, RW(4) + -160); { JP_F_0016FA90(c); return; }
}

void JP_F_0016FB20(Ctx *c) { /* func_0016FB20 */
ENTER(0x16fb20);
SET32(4, RW(4) + -160); { JP_F_0016F4B0(c); return; }
}

void JP_F_0016FB30(Ctx *c) { /* func_0016FB30 */
ENTER(0x16fb30);
SET32(4, RW(4) + -44); { JP_F_0016EBD0(c); return; }
}

void JP_F_0016FB40(Ctx *c) { /* func_0016FB40 */
ENTER(0x16fb40);
SET32(4, RW(4) + -44); { JP_F_0016ECE0(c); return; }
}

void JP_F_0016FB50(Ctx *c) { /* func_0016FB50 */
ENTER(0x16fb50);
SET32(4, RW(4) + -44); { JP_F_0016F5A0(c); return; }
}

void JP_F_0016FB60(Ctx *c) { /* func_0016FB60 */
ENTER(0x16fb60);
SET32(4, RW(4) + -44); { JP_F_0016F220(c); return; }
}

void JP_F_0016FB70(Ctx *c) { /* func_0016FB70 */
ENTER(0x16fb70);
SET32(4, RW(4) + -44); { JP_F_0016F340(c); return; }
}

void JP_F_0016FB80(Ctx *c) { /* func_0016FB80 */
ENTER(0x16fb80);
SET32(4, RW(4) + -44); { JP_F_0016EB00(c); return; }
}

void JP_F_0016FB90(Ctx *c) { /* func_0016FB90 */
ENTER(0x16fb90);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16fbbc); SET32(16, RW(0) + -1); rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_0016FBD4; }
SET64(16, RD(17) << 48);
wr16(c, (RW(18) + 4), (u16)RW(17));
SET64(16, RSD(16) >> 48);
SET64(2, RD(16) + RD(0));
L_0016FBD4:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_0016FBF0(Ctx *c) { /* func_0016FBF0 */
ENTER(0x16fbf0);
SET32(2, RW(0) + 1); return;
}

void JP_F_0016FC00(Ctx *c) { /* func_0016FC00 */
ENTER(0x16fc00);
SET64(2, (s16)rd16(c, (RW(4) + 4))); return;
}

void JP_F_0016FC10(Ctx *c) { /* func_0016FC10 */
ENTER(0x16fc10);
SET32(29, RW(29) + -96);
SET64(5, RD(5) & 0xffff);
wr64(c, (RW(29) + 80), RD(31));
SET64(3, RD(5) & 0xa0);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET32(2, RW(0) + 160);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(19, (s32)rd32(c, (RW(4) + 0)));
SET64(18, (s16)rd16(c, (RW(4) + 4)));
{ int t = RD(3) == RD(2); SET64(20, RD(4) + RD(0)); if (t) goto L_0016FCD0; }
SET64(17, RD(5) & 0x80);
SET64(16, RD(5) & 0x20);
L_0016FC50:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016FC80; }
SET64(4, RD(18) << 48);
SET64(2, (s32)rd32(c, (RW(20) + 12)));
SET64(4, RSD(4) >> 48);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(18, (s16)rd16(c, (RW(2) + 2))); goto L_0016FCA8;
L_0016FC80:;
{ int t = RD(16) == RD(0);  if (t) goto L_0016FCA8; }
SET64(4, RD(18) << 48);
SET64(2, (s32)rd32(c, (RW(20) + 12)));
SET64(4, RSD(4) >> 48);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(18, (s16)rd16(c, (RW(2) + 4)));
L_0016FCA8:;
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16fcbc); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_0016FCD0; }
SET32(19, RW(19) + -1);
{ int t = RSD(19) >= 0;  if (t) { POLL(); goto L_0016FC50; } }
L_0016FCD0:;
wr16(c, (RW(20) + 4), (u16)RW(18));
SET64(2, RD(18) + RD(0));
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_0016FD00(Ctx *c) { /* func_0016FD00 */
ENTER(0x16fd00);
SET64(5, RD(5) << 48);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET64(5, RSD(5) >> 48);
SET32(3, RW(5) << 1);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + 0))); return;
}

void JP_F_0016FD30(Ctx *c) { /* func_0016FD30 */
ENTER(0x16fd30);
SET32(29, RW(29) + -96);
SET64(5, RD(5) & 0xffff);
wr64(c, (RW(29) + 80), RD(31));
SET64(3, RD(5) & 0x50);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET32(2, RW(0) + 80);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(19, (s32)rd32(c, (RW(4) + 0)));
SET64(18, (s16)rd16(c, (RW(4) + 4)));
{ int t = RD(3) == RD(2); SET64(20, RD(4) + RD(0)); if (t) goto L_0016FDF0; }
SET64(17, RD(5) & 0x10);
SET64(16, RD(5) & 0x40);
L_0016FD70:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016FDA0; }
SET64(4, RD(18) << 48);
SET64(2, (s32)rd32(c, (RW(20) + 12)));
SET64(4, RSD(4) >> 48);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(18, (s16)rd16(c, (RW(2) + 2))); goto L_0016FDC8;
L_0016FDA0:;
{ int t = RD(16) == RD(0);  if (t) goto L_0016FDC8; }
SET64(4, RD(18) << 48);
SET64(2, (s32)rd32(c, (RW(20) + 12)));
SET64(4, RSD(4) >> 48);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(18, (s16)rd16(c, (RW(2) + 4)));
L_0016FDC8:;
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16fddc); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_0016FDF0; }
SET32(19, RW(19) + -1);
{ int t = RSD(19) >= 0;  if (t) { POLL(); goto L_0016FD70; } }
L_0016FDF0:;
wr16(c, (RW(20) + 4), (u16)RW(18));
SET64(2, RD(18) + RD(0));
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_0016FE20(Ctx *c) { /* func_0016FE20 */
ENTER(0x16fe20);
SET64(5, RD(5) << 48);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET64(5, RSD(5) >> 48);
SET32(3, RW(5) << 1);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + 0))); return;
}

void JP_F_0016FE50(Ctx *c) { /* func_0016FE50 */
ENTER(0x16fe50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016FED4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4192);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x16fe88);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016FEC0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(25); SET64(31, 0x16fea8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_0016FEBC; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 12), RW(2));
L_0016FEBC:;
SET64(2, RD(16) << 48);
L_0016FEC0:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016FED8; }
SET64(31, 0x16fed4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0016FED4:;
SET64(2, RD(17) + RD(0));
L_0016FED8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0016FEF0(Ctx *c) { /* func_0016FEF0 */
ENTER(0x16fef0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0016FF00(Ctx *c) { /* func_0016FF00 */
ENTER(0x16ff00);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 68)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_0016FF70; }
SET64(16, RD(19) + RD(0));
L_0016FF30:;
SET64(3, rd16(c, (RW(16) + 44)));
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -19760);
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x16ff5c); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(19) + 68)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_0016FF30; } }
L_0016FF70:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

static void JP_B_0016FF90(Ctx *c, u32 entry) { /* func_0016FF90 */
ENTER(entry);
switch (entry) { case 0x16fffc: goto L_0016FFFC; case 0x170004: goto L_00170004; case 0x170018: goto L_00170018; }
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 68)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00170000; }
SET64(16, RD(19) + RD(0));
L_0016FFC0:;
SET64(3, rd16(c, (RW(16) + 44)));
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -19760);
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x16ffec); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(19) + 68)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_0016FFC0; } }
if (0) { L_0016FFFC:; SET32(16, RW(16) + 2); }
L_00170000:;
SET64(31, rd64(c, (RW(29) + 64)));
L_00170004:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
if (0) { L_00170018:; SET32(29, RW(29) + 80); }
}
void JP_F_0016FF90(Ctx *c) { JP_B_0016FF90(c, 0x16ff90); }
void JP_F_0016FFFC(Ctx *c) { JP_B_0016FF90(c, 0x16fffc); }
void JP_F_00170004(Ctx *c) { JP_B_0016FF90(c, 0x170004); }
void JP_F_00170018(Ctx *c) { JP_B_0016FF90(c, 0x170018); }

static void JP_B_00170020(Ctx *c, u32 entry) { /* func_00170020 */
ENTER(entry);
switch (entry) { case 0x170038: goto L_00170038; case 0x170044: goto L_00170044; }
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
SET64(30, RD(7) + RD(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
L_00170038:;
SET64(23, RD(6) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(8) + RD(0));
L_00170044:;
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
{ int t = RD(22) != RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_00170068; }
SET64(22, RD(21) + RD(0));
L_00170068:;
SET64(2, rd16(c, (RW(21) + 68)));
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_001700F8; }
SET64(17, RD(21) + RD(0));
SET64(16, RD(20) & 0xffff);
L_0017007C:;
SET64(3, rd16(c, (RW(17) + 44)));
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -19760);
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(18, (s32)rd32(c, (RW(2) + 0)));
if (RD(18) == RD(0)) { SET64(2, rd16(c, (RW(21) + 68))); goto L_001700E8; }
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x1700b4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001700E4; }
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(5, RD(20) + RD(0));
SET64(6, RD(23) + RD(0));
SET64(7, RD(30) + RD(0));
SET64(8, RD(22) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x1700dc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 144))); goto L_001701DC;
L_001700E4:;
SET64(2, rd16(c, (RW(21) + 68)));
L_001700E8:;
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 2); if (t) { POLL(); goto L_0017007C; } }
L_001700F8:;
SET64(4, (s64)(s32)0x4a0000);
SET64(18, RD(0) + RD(0));
SET32(4, RW(4) + -20976);
SET64(3, RD(20) & 0xffff);
L_00170108:;
SET64(2, rd16(c, (RW(4) + 20)));
if (RD(2) == RD(0)) { SET32(18, RW(18) + 1); goto L_0017013C; }
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00170138; }
SET64(2, rd16(c, (RW(4) + 22)));
SET64(1, RSD(2) < RSD(3));
{ int t = RD(1) != RD(0);  if (t) goto L_00170138; }
 goto L_0017014C;
L_00170138:;
SET32(18, RW(18) + 1);
L_0017013C:;
SET64(2, RSD(18) < (s64)104);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 24); if (t) { POLL(); goto L_00170108; } }
SET32(18, RW(0) + 105);
L_0017014C:;
SET64(17, (s64)(s32)0x530000);
SET64(19, RD(0) + RD(0));
SET32(17, RW(17) + -19760);
SET64(16, RD(20) & 0xffff);
L_0017015C:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
if (RD(4) == RD(0)) { SET32(19, RW(19) + 1); goto L_001701C8; }
SET64(2, (s32)rd32(c, (RW(4) + 152)));
{ int t = RD(18) != RD(2);  if (t) goto L_001701C4; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x170184); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001701C4; }
SET64(2, (s64)(s32)0x530000);
SET32(3, RW(19) << 2);
SET32(2, RW(2) + -19760);
SET64(5, RD(20) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(6, RD(23) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(7, RD(30) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x1701bc); SET64(8, RD(22) + RD(0)); rt_call(c, t); }
 goto L_001701D8;
L_001701C4:;
SET32(19, RW(19) + 1);
L_001701C8:;
SET64(2, RSD(19) < (s64)12);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_0017015C; } }
SET64(2, RD(0) + RD(0));
L_001701D8:;
SET64(31, rd64(c, (RW(29) + 144)));
L_001701DC:;
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
void JP_F_00170020(Ctx *c) { JP_B_00170020(c, 0x170020); }
void JP_F_00170038(Ctx *c) { JP_B_00170020(c, 0x170038); }
void JP_F_00170044(Ctx *c) { JP_B_00170020(c, 0x170044); }

void JP_F_00170210(Ctx *c) { /* func_00170210 */
ENTER(0x170210);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd16(c, (RW(4) + 68)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00170298; }
SET64(16, RD(19) + RD(0));
L_00170240:;
SET64(3, rd16(c, (RW(16) + 44)));
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -19760);
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x17026c); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(19) + 68))); goto L_00170284; }
SET32(2, RW(0) + 1); goto L_0017029C;
L_00170284:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_00170240; } }
L_00170298:;
SET64(2, RD(0) + RD(0));
L_0017029C:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001702C0(Ctx *c) { /* func_001702C0 */
ENTER(0x1702c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(8, rd16(c, (RW(4) + 68)));
{ int t = RSD(8) <= 0; SET64(10, RD(0) + RD(0)); if (t) goto L_001703B0; }
SET64(14, (s64)(s32)0x4a0000);
SET64(3, (s64)(s32)0x530000);
SET64(7, RD(5) & 0xffff);
SET32(14, RW(14) + -20976);
SET32(12, RW(0) + 1);
SET32(3, RW(3) + -19760);
L_001702EC:;
SET64(9, rd16(c, (RW(4) + 44)));
SET64(9, RD(9) & 0xf);
SET32(9, RW(9) << 2);
SET32(9, RW(3) + RW(9));
SET64(9, (s32)rd32(c, (RW(9) + 0)));
if (RD(9) == RD(0)) { SET32(10, RW(10) + 1); goto L_001703A0; }
SET64(13, (s32)rd32(c, (RW(9) + 152)));
SET64(11, RSD(13) < (s64)104);
if (RD(11) != RD(0)) { SET32(11, RW(13) << 1); goto L_00170320; }
SET64(15, RD(0) + RD(0)); goto L_00170330;
L_00170320:;
SET32(11, RW(11) + RW(13));
SET32(11, RW(11) << 3);
SET32(11, RW(14) + RW(11));
SET64(15, rd16(c, (RW(11) + 20)));
L_00170330:;
SET32(11, RW(13) << 1);
SET32(11, RW(11) + RW(13));
SET32(11, RW(11) << 3);
SET32(11, RW(14) + RW(11));
SET64(13, rd16(c, (RW(11) + 20)));
SET64(11, rd16(c, (RW(11) + 22)));
SET32(11, RW(11) - RW(13));
{ int t = RD(13) == RD(0); SET32(11, RW(11) + 1); if (t) goto L_00170360; }
{ int t = RSD(11) > 0;  if (t) goto L_00170368; }
L_00170360:;
SET64(11, RD(12) + RD(0)); goto L_00170368;
L_00170368:;
SET64(1, RSD(7) < RSD(15));
{ int t = RD(1) != RD(0);  if (t) goto L_0017039C; }
SET32(11, RW(15) + RW(11));
SET64(1, RSD(7) < RSD(11));
{ int t = RD(1) == RD(0);  if (t) goto L_0017039C; }
SET64(25, (s32)rd32(c, (RW(9) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x170394); SET64(4, RD(9) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0))); goto L_001703B4;
L_0017039C:;
SET32(10, RW(10) + 1);
L_001703A0:;
SET64(9, RSD(10) < RSD(8));
{ int t = RD(9) != RD(0); SET32(4, RW(4) + 2); if (t) { POLL(); goto L_001702EC; } }
L_001703B0:;
SET64(31, rd64(c, (RW(29) + 0)));
L_001703B4:;
SET32(29, RW(29) + 16); return;
}

void JP_F_001703C0(Ctx *c) { /* func_001703C0 */
ENTER(0x1703c0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(28) + -29920)));
SET64(31, 0x1703ec); SET64(17, RD(6) + RD(0)); JP_F_002A7400(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 164))); goto L_001703FC; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(16) + 164)));
L_001703FC:;
SET64(31, 0x170404); SET64(5, RD(2) + RD(0)); JP_F_002ADD30(c);
SET64(3, RD(0) < RD(2));
SET64(3, RD(3) ^ 0x1);
wr8(c, (RW(29) + 92), (u8)RW(3));
SET64(3, rd8(c, (RW(29) + 92)));
if (RD(3) != RD(0)) { SET64(16, RD(0) + RD(0)); goto L_00170440; }
SET64(31, 0x170424);  JP_F_002A7400(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -29920))); goto L_00170434; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
L_00170434:;
SET64(31, 0x17043c); SET64(5, RD(2) + RD(0)); JP_F_002ABF00(c);
SET64(16, RD(0) + RD(0));
L_00170440:;
{ int t = RSD(17) <= 0;  if (t) goto L_00170548; }
L_00170448:;
SET64(10, rd16(c, (RW(19) + 68)));
SET64(6, rd16(c, (RW(18) + 2)));
SET64(5, rd16(c, (RW(18) + 0)));
{ int t = RSD(10) <= 0; SET64(13, RD(0) + RD(0)); if (t) goto L_00170538; }
SET64(3, (s64)(s32)0x4a0000);
SET64(8, (s64)(s32)0x530000);
SET64(12, RD(19) + RD(0));
SET64(9, RD(5) & 0xffff);
SET32(3, RW(3) + -20976);
SET32(14, RW(0) + 1);
SET32(8, RW(8) + -19760);
L_00170478:;
SET64(4, rd16(c, (RW(12) + 44)));
SET64(4, RD(4) & 0xf);
SET32(4, RW(4) << 2);
SET32(4, RW(8) + RW(4));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_00170528; }
SET64(11, (s32)rd32(c, (RW(4) + 152)));
SET64(7, RSD(11) < (s64)104);
if (RD(7) != RD(0)) { SET32(7, RW(11) << 1); goto L_001704AC; }
SET64(7, RD(0) + RD(0)); goto L_001704BC;
L_001704AC:;
SET32(7, RW(7) + RW(11));
SET32(7, RW(7) << 3);
SET32(7, RW(3) + RW(7));
SET64(7, rd16(c, (RW(7) + 20)));
L_001704BC:;
SET32(15, RW(11) << 1);
SET32(11, RW(15) + RW(11));
SET32(11, RW(11) << 3);
SET32(11, RW(3) + RW(11));
SET64(15, rd16(c, (RW(11) + 20)));
SET64(11, rd16(c, (RW(11) + 22)));
SET32(11, RW(11) - RW(15));
{ int t = RD(15) == RD(0); SET32(11, RW(11) + 1); if (t) goto L_001704E8; }
{ int t = RSD(11) > 0;  if (t) goto L_001704F0; }
L_001704E8:;
SET64(11, RD(14) + RD(0)); goto L_001704F0;
L_001704F0:;
SET64(1, RSD(9) < RSD(7));
{ int t = RD(1) != RD(0);  if (t) goto L_00170528; }
SET32(7, RW(7) + RW(11));
SET64(1, RSD(9) < RSD(7));
{ int t = RD(1) == RD(0);  if (t) goto L_00170528; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x17051c);  rt_call(c, t); }
 goto L_00170538;
L_00170528:;
SET32(13, RW(13) + 1);
SET64(4, RSD(13) < RSD(10));
{ int t = RD(4) != RD(0); SET32(12, RW(12) + 2); if (t) { POLL(); goto L_00170478; } }
L_00170538:;
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < RSD(17));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_00170448; } }
L_00170548:;
SET64(3, rd8(c, (RW(29) + 92)));
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_0017057C; }
SET64(31, 0x17055c);  JP_F_002A7400(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -29920))); goto L_0017056C; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
L_0017056C:;
SET64(5, RD(2) + RD(0));
SET64(31, 0x170578); SET64(6, RD(0) + RD(0)); JP_F_002ABF80(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_0017057C:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_001705A0(Ctx *c) { /* func_001705A0 */
ENTER(0x1705a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00170604; }
SET64(2, rd8(c, (RW(17) + 0)));
if (RD(2) != RD(0)) { SET64(2, RD(16) << 48); goto L_001705F0; }
SET64(31, 0x1705d0);  JP_F_002A7400(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -29920))); goto L_001705E0; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
L_001705E0:;
SET64(5, RD(2) + RD(0));
SET64(31, 0x1705ec); SET64(6, RD(0) + RD(0)); JP_F_002ABF80(c);
SET64(2, RD(16) << 48);
L_001705F0:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00170608; }
SET64(31, 0x170604); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00170604:;
SET64(2, RD(17) + RD(0));
L_00170608:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00170620(Ctx *c) { /* func_00170620 */
ENTER(0x170620);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, rd16(c, (RW(5) + 0)));
{ int t = RD(3) == RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_00170658; }
SET64(7, RD(5) + RD(0));
SET32(6, RW(6) + 1);
L_0017063C:;
SET64(1, RSD(6) < (s64)711);
{ int t = RD(1) == RD(0); SET32(7, RW(7) + 4); if (t) goto L_00170660; }
SET64(3, rd16(c, (RW(7) + 0)));
if (RD(3) != RD(0)) { SET32(6, RW(6) + 1); { POLL(); goto L_0017063C; } }
L_00170658:;
SET64(31, 0x170660);  JP_F_001703C0(c);
L_00170660:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00170670(Ctx *c) { /* func_00170670 */
ENTER(0x170670);
SET64(7, rd16(c, (RW(4) + 68)));
{ int t = RSD(7) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_001706B8; }
SET64(6, (s64)(s32)0x530000);
SET32(6, RW(6) + -19760);
L_00170684:;
SET64(2, rd16(c, (RW(4) + 44)));
SET64(2, RD(2) & 0xf);
SET32(2, RW(2) << 2);
SET32(2, RW(6) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 152)));
if (RD(5) != RD(3)) { SET32(8, RW(8) + 1); goto L_001706AC; }
 goto L_001706BC;
L_001706AC:;
SET64(2, RSD(8) < RSD(7));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 2); if (t) { POLL(); goto L_00170684; } }
L_001706B8:;
SET64(2, RD(0) + RD(0));
L_001706BC:;
 return;
}

void JP_F_001706D0(Ctx *c) { /* func_001706D0 */
ENTER(0x1706d0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 68)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00170750; }
SET64(16, RD(18) + RD(0));
L_001706FC:;
SET64(4, rd16(c, (RW(16) + 44)));
SET64(3, (s64)(s32)0x530000);
SET32(3, RW(3) + -19760);
SET64(4, RD(4) & 0xf);
SET32(4, RW(4) << 2);
SET32(19, RW(3) + RW(4));
SET64(4, (s32)rd32(c, (RW(19) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_00170730; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x170730); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00170730:;
wr32(c, (RW(19) + 0), RW(0));
wr16(c, (RW(16) + 44), (u16)RW(0));
SET32(17, RW(17) + 1);
SET64(3, rd16(c, (RW(18) + 68)));
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_001706FC; } }
L_00170750:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
if (RD(3) == RD(0)) { wr32(c, (RW(18) + 4), RW(0)); goto L_001707B4; }
SET32(4, RW(3) + 8);
SET64(3, (s32)rd32(c, (RW(3) + 8)));
if (RD(3) != RD(18)) { SET32(4, RW(3) + 4); goto L_00170780; }
SET64(3, (s32)rd32(c, (RW(18) + 4)));
if (RD(3) != RD(0)) { wr32(c, (RW(4) + 0), RW(3)); goto L_001707B0; }
wr32(c, (RW(4) + 0), RW(0)); goto L_001707B0;
L_00170780:;
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(18);  if (t) goto L_001707A8; }
L_0017078C:;
SET32(4, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(18);  if (t) { POLL(); goto L_0017078C; } }
L_001707A8:;
SET64(3, (s32)rd32(c, (RW(18) + 4)));
wr32(c, (RW(4) + 0), RW(3));
L_001707B0:;
wr32(c, (RW(18) + 4), RW(0));
L_001707B4:;
wr32(c, (RW(18) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001707E0(Ctx *c) { /* func_001707E0 */
ENTER(0x1707e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0017097C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4448);
SET32(3, RW(3) + 4456);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 4468);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 36), RW(2));
SET32(3, RW(3) + 4528);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 72), RW(3));
SET32(2, RW(2) + 4552);
wr32(c, (RW(17) + 132), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x170848);  rt_call(c, t); }
SET32(4, RW(17) + 176);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 104); goto L_00170900; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 4288);
SET32(2, RW(2) + 4312);
wr32(c, (RW(17) + 320), RW(3));
wr32(c, (RW(17) + 348), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x17087c);  rt_call(c, t); }
SET32(4, RW(17) + 176);
{ int t = RD(4) == RD(0);  if (t) goto L_001708FC; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 16640);
SET32(2, RW(2) + 16664);
wr32(c, (RW(17) + 320), RW(3));
wr32(c, (RW(17) + 348), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1708b0);  rt_call(c, t); }
SET32(4, RW(17) + 336);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 176); goto L_001708F4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 348), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1708d8);  rt_call(c, t); }
SET32(2, RW(17) + 336);
{ int t = RD(2) == RD(0);  if (t) goto L_001708F0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 348), RW(2));
L_001708F0:;
SET32(4, RW(17) + 176);
L_001708F4:;
SET64(31, 0x1708fc); SET64(5, RD(0) + RD(0)); JP_F_00243920(c);
L_001708FC:;
SET32(4, RW(17) + 104);
L_00170900:;
if (RD(4) == RD(0)) { SET32(4, RW(17) + 60); goto L_0017091C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4264);
SET64(31, 0x170918); wr32(c, (RW(17) + 132), RW(2)); JP_F_001F3300(c);
SET32(4, RW(17) + 60);
L_0017091C:;
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_0017095C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 72), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x170940);  rt_call(c, t); }
SET32(2, RW(17) + 60);
{ int t = RD(2) == RD(0);  if (t) goto L_00170958; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 72), RW(2));
L_00170958:;
SET64(4, RD(17) + RD(0));
L_0017095C:;
SET64(31, 0x170964); SET64(5, RD(0) + RD(0)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00170980; }
SET64(31, 0x17097c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0017097C:;
SET64(2, RD(17) + RD(0));
L_00170980:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001709A0(Ctx *c) { /* func_001709A0 */
ENTER(0x1709a0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd16(c, (RW(4) + 68)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00170A18; }
SET64(16, RD(18) + RD(0));
L_001709C8:;
SET64(3, rd16(c, (RW(16) + 44)));
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -19760);
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x1709f4);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(18) + 68))); goto L_00170A04; }
SET64(2, RD(0) + RD(0)); goto L_00170A1C;
L_00170A04:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_001709C8; } }
L_00170A18:;
SET32(2, RW(0) + 1);
L_00170A1C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00170A40(Ctx *c) { /* func_00170A40 */
ENTER(0x170a40);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) == RD(0); SET64(18, RD(6) + RD(0)); if (t) goto L_00170A80; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x170a80);  rt_call(c, t); }
L_00170A80:;
{ int t = RD(18) == RD(0);  if (t) goto L_00170AA4; }
SET64(25, (s32)rd32(c, (RW(18) + 12)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x170a9c); SET64(5, RD(20) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(20) + 68))); goto L_00170AC0;
L_00170AA4:;
SET64(4, (s64)(s32)0x530000);
SET32(4, RW(4) + -22408);
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x170abc); SET64(5, RD(20) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(20) + 68)));
L_00170AC0:;
SET64(18, RD(20) + RD(0));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00170B60; }
SET64(16, RD(20) + RD(0));
L_00170AD0:;
SET64(4, rd16(c, (RW(16) + 44)));
SET64(3, (s64)(s32)0x530000);
SET32(3, RW(3) + -19760);
SET64(4, RD(4) & 0xf);
SET32(5, RW(4) << 2);
SET32(3, RW(3) + RW(5));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_00170B48; }
SET64(3, (s32)rd32(c, (RW(4) + 152)));
SET32(2, RW(0) + 99);
SET32(5, RW(5) + 128);
{ int t = RD(3) == RD(2); SET64(6, RD(0) + RD(0)); if (t) goto L_00170B28; }
SET32(2, RW(0) + 98);
{ int t = RD(3) == RD(2);  if (t) goto L_00170B20; }
 goto L_00170B30;
L_00170B20:;
SET32(6, RW(0) + 2); goto L_00170B30;
L_00170B28:;
SET32(6, RW(0) + 3);
L_00170B30:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(5, RD(5) & 0xff);
SET64(7, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x170b48); SET64(8, RD(18) + RD(0)); rt_call(c, t); }
L_00170B48:;
SET64(3, rd16(c, (RW(20) + 68)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_00170AD0; } }
L_00170B60:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00170B80(Ctx *c) { /* func_00170B80 */
ENTER(0x170b80);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd16(c, (RW(4) + 68)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00170C00; }
SET64(16, RD(18) + RD(0));
L_00170BA8:;
SET64(3, rd16(c, (RW(16) + 44)));
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -19760);
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x170bd4);  rt_call(c, t); }
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(18) + 68))); goto L_00170BEC; }
SET32(2, RW(0) + 1); goto L_00170C04;
L_00170BEC:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_00170BA8; } }
L_00170C00:;
SET64(2, RD(0) + RD(0));
L_00170C04:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00170C20(Ctx *c) { /* func_00170C20 */
ENTER(0x170c20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, RD(5) + RD(0));
SET64(5, RD(6) + RD(0));
SET64(6, RD(7) + RD(0));
SET64(31, 0x170c44); SET64(7, RD(8) + RD(0)); JP_F_00171430(c);
SET64(3, rd16(c, (RW(16) + 68)));
SET32(3, RW(3) << 1);
SET32(3, RW(3) + RW(16));
wr16(c, (RW(3) + 44), (u16)RW(2));
SET64(4, rd16(c, (RW(16) + 68)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(16));
SET64(3, rd16(c, (RW(3) + 44)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_00170C78; }
SET32(3, RW(4) + 1);
wr16(c, (RW(16) + 68), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
L_00170C78:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00170C90(Ctx *c) { /* func_00170C90 */
ENTER(0x170c90);
wr32(c, (RW(4) + 16), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 20), RW(3));
SET64(5, RD(0) + RD(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr8(c, (RW(4) + 32), (u8)RW(0));
wr16(c, (RW(4) + 68), (u16)RW(0));
L_00170CB8:;
wr16(c, (RW(4) + 44), (u16)RW(0));
SET32(5, RW(5) + 6);
wr16(c, (RW(4) + 46), (u16)RW(0));
SET64(3, RSD(5) < (s64)12);
wr16(c, (RW(4) + 48), (u16)RW(0));
wr16(c, (RW(4) + 50), (u16)RW(0));
wr16(c, (RW(4) + 52), (u16)RW(0));
wr16(c, (RW(4) + 54), (u16)RW(0));
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 12); if (t) { POLL(); goto L_00170CB8; } }
 return;
}

void JP_F_00170CF0(Ctx *c) { /* func_00170CF0 */
ENTER(0x170cf0);
SET32(29, RW(29) + -112);
SET64(3, (s64)(s32)0x530000);
wr64(c, (RW(29) + 96), RD(31));
SET32(3, RW(3) + -19760);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, rd16(c, (RW(4) + 44)));
SET64(4, RD(4) & 0xf);
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
SET64(17, (s32)rd32(c, (RW(3) + 0)));
SET64(3, rd16(c, (RW(17) + 528)));
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00170DD8; }
SET64(18, RD(0) + RD(0));
L_00170D3C:;
SET64(3, (s32)rd32(c, (RW(17) + 532)));
SET32(16, RW(3) + RW(18));
SET64(3, rd16(c, (RW(16) + 6)));
{ int t = RD(3) == RD(0);  if (t) goto L_00170DC0; }
wr16(c, (RW(16) + 6), (u16)RW(0));
SET64(3, rd16(c, (RW(16) + 2)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00170DC0; }
L_00170D60:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(21, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(21) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x170d84); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(21) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x170d94); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00170DA8; }
SET32(3, RW(0) + 1);
wr16(c, (RW(16) + 6), (u16)RW(3));
L_00170DA8:;
SET64(3, rd16(c, (RW(16) + 2)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00170D60; } }
L_00170DC0:;
SET64(3, rd16(c, (RW(17) + 528)));
SET32(20, RW(20) + 1);
SET64(3, RSD(20) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 16); if (t) { POLL(); goto L_00170D3C; } }
L_00170DD8:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_00170E00(Ctx *c) { /* func_00170E00 */
ENTER(0x170e00);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + -19760);
SET64(3, rd16(c, (RW(4) + 44)));
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x170e34);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00170E40(Ctx *c) { /* func_00170E40 */
ENTER(0x170e40);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + -19760);
SET64(3, rd16(c, (RW(4) + 44)));
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x170e74);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00170E80(Ctx *c) { /* func_00170E80 */
ENTER(0x170e80);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(7) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(6) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(8) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
{ int t = RD(20) != RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_00170EC0; }
SET64(20, RD(4) + RD(0));
L_00170EC0:;
SET64(3, RD(21) & 0xffff);
if (RSD(3) <= 0) { SET64(3, rd16(c, (RW(4) + 44))); goto L_00170FC0; }
SET64(1, RSD(3) < (s64)99);
{ int t = RD(1) == RD(0);  if (t) goto L_00170FBC; }
SET64(4, (s64)(s32)0x4a0000);
SET64(18, RD(0) + RD(0));
SET32(4, RW(4) + -20976);
L_00170EE4:;
SET64(2, rd16(c, (RW(4) + 20)));
if (RD(2) == RD(0)) { SET32(18, RW(18) + 1); goto L_00170F18; }
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00170F14; }
SET64(2, rd16(c, (RW(4) + 22)));
SET64(1, RSD(2) < RSD(3));
{ int t = RD(1) != RD(0);  if (t) goto L_00170F14; }
 goto L_00170F28;
L_00170F14:;
SET32(18, RW(18) + 1);
L_00170F18:;
SET64(2, RSD(18) < (s64)104);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 24); if (t) { POLL(); goto L_00170EE4; } }
SET32(18, RW(0) + 105);
L_00170F28:;
SET64(17, (s64)(s32)0x530000);
SET64(19, RD(0) + RD(0));
SET32(17, RW(17) + -19760);
SET64(16, RD(21) & 0xffff);
L_00170F38:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
if (RD(4) == RD(0)) { SET32(19, RW(19) + 1); goto L_00170FA4; }
SET64(2, (s32)rd32(c, (RW(4) + 152)));
{ int t = RD(18) != RD(2);  if (t) goto L_00170FA0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x170f60); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00170FA0; }
SET64(2, (s64)(s32)0x530000);
SET32(3, RW(19) << 2);
SET32(2, RW(2) + -19760);
SET64(5, RD(21) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(6, RD(22) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(7, RD(23) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x170f98); SET64(8, RD(20) + RD(0)); rt_call(c, t); }
 goto L_00170FB4;
L_00170FA0:;
SET32(19, RW(19) + 1);
L_00170FA4:;
SET64(2, RSD(19) < (s64)12);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00170F38; } }
SET64(2, RD(0) + RD(0));
L_00170FB4:;
SET64(31, rd64(c, (RW(29) + 128))); goto L_00170FF8;
L_00170FBC:;
SET64(3, rd16(c, (RW(4) + 44)));
L_00170FC0:;
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -19760);
SET64(5, RD(21) + RD(0));
SET64(6, RD(22) + RD(0));
SET64(7, RD(23) + RD(0));
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x170ff4); SET64(8, RD(20) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 128)));
L_00170FF8:;
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

void JP_F_00171020(Ctx *c) { /* func_00171020 */
ENTER(0x171020);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + -19760);
SET64(3, rd16(c, (RW(4) + 44)));
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x171054);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00171060(Ctx *c) { /* func_00171060 */
ENTER(0x171060);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + -19760);
SET64(3, rd16(c, (RW(4) + 44)));
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x171094);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001710A0(Ctx *c) { /* func_001710A0 */
ENTER(0x1710a0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) == RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_001710D8; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1710d8);  rt_call(c, t); }
L_001710D8:;
{ int t = RD(16) == RD(0);  if (t) goto L_001710FC; }
SET64(25, (s32)rd32(c, (RW(16) + 12)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1710f4); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(4, rd16(c, (RW(18) + 44))); goto L_00171118;
L_001710FC:;
SET64(4, (s64)(s32)0x530000);
SET32(4, RW(4) + -22408);
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x171114); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(4, rd16(c, (RW(18) + 44)));
L_00171118:;
SET64(3, (s64)(s32)0x530000);
SET32(3, RW(3) + -19760);
SET64(4, RD(4) & 0xf);
SET32(5, RW(4) << 2);
SET32(3, RW(3) + RW(5));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) == RD(0); SET64(16, RD(18) + RD(0)); if (t) goto L_0017117C; }
SET64(3, (s32)rd32(c, (RW(4) + 152)));
SET32(2, RW(0) + 99);
SET32(5, RW(5) + 128);
{ int t = RD(3) == RD(2); SET64(6, RD(0) + RD(0)); if (t) goto L_00171160; }
SET32(2, RW(0) + 98);
if (RD(3) == RD(2)) { SET32(6, RW(0) + 2); goto L_00171164; }
SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_00171168;
L_00171160:;
SET32(6, RW(0) + 3);
L_00171164:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
L_00171168:;
SET64(5, RD(5) & 0xff);
SET64(7, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x17117c); SET64(8, RD(16) + RD(0)); rt_call(c, t); }
L_0017117C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001711A0(Ctx *c) { /* func_001711A0 */
ENTER(0x1711a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 44)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001711F4; }
SET64(4, RD(3) & 0xf);
SET64(3, (s64)(s32)0x530000);
SET32(4, RW(4) << 2);
SET32(3, RW(3) + -19760);
SET32(17, RW(3) + RW(4));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 0), RW(0)); goto L_001711F0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1711ec); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 0), RW(0));
L_001711F0:;
wr16(c, (RW(16) + 44), (u16)RW(0));
L_001711F4:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
if (RD(3) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_0017125C; }
SET32(4, RW(3) + 8);
SET64(3, (s32)rd32(c, (RW(3) + 8)));
if (RD(3) != RD(16)) { SET32(4, RW(3) + 4); goto L_00171224; }
SET64(3, (s32)rd32(c, (RW(16) + 4)));
if (RD(3) != RD(0)) { wr32(c, (RW(4) + 0), RW(3)); goto L_00171258; }
wr32(c, (RW(4) + 0), RW(0)); goto L_00171258;
L_00171224:;
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(16);  if (t) goto L_00171250; }
L_00171230:;
SET32(4, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(16);  if (t) { POLL(); goto L_00171230; } }
L_00171250:;
SET64(3, (s32)rd32(c, (RW(16) + 4)));
wr32(c, (RW(4) + 0), RW(3));
L_00171258:;
wr32(c, (RW(16) + 4), RW(0));
L_0017125C:;
wr32(c, (RW(16) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00171280(Ctx *c) { /* func_00171280 */
ENTER(0x171280);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 16), RW(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 20), RW(2));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr8(c, (RW(4) + 32), (u8)RW(0));
SET64(4, RD(5) + RD(0));
SET64(5, RD(6) + RD(0));
SET64(6, RD(7) + RD(0));
SET64(31, 0x1712c4); SET64(7, RD(8) + RD(0)); JP_F_00171430(c);
wr16(c, (RW(16) + 44), (u16)RW(2));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001712E0(Ctx *c) { /* func_001712E0 */
ENTER(0x1712e0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(7) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(6) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(4, (s64)(s32)0x4a0000);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(4, RW(4) + -20976);
SET64(3, RD(21) & 0xffff);
L_00171328:;
SET64(2, rd16(c, (RW(4) + 20)));
if (RD(2) == RD(0)) { SET32(18, RW(18) + 1); goto L_0017135C; }
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00171358; }
SET64(2, rd16(c, (RW(4) + 22)));
SET64(1, RSD(2) < RSD(3));
{ int t = RD(1) != RD(0);  if (t) goto L_00171358; }
 goto L_0017136C;
L_00171358:;
SET32(18, RW(18) + 1);
L_0017135C:;
SET64(2, RSD(18) < (s64)104);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 24); if (t) { POLL(); goto L_00171328; } }
SET32(18, RW(0) + 105);
L_0017136C:;
SET64(17, (s64)(s32)0x530000);
SET64(19, RD(0) + RD(0));
SET32(17, RW(17) + -19760);
SET64(16, RD(21) & 0xffff);
L_0017137C:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
if (RD(4) == RD(0)) { SET32(19, RW(19) + 1); goto L_001713E8; }
SET64(2, (s32)rd32(c, (RW(4) + 152)));
{ int t = RD(18) != RD(2);  if (t) goto L_001713E4; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x1713a4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001713E4; }
SET64(2, (s64)(s32)0x530000);
SET32(3, RW(19) << 2);
SET32(2, RW(2) + -19760);
SET64(5, RD(21) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(6, RD(20) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(7, RD(22) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x1713dc); SET64(8, RD(23) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 128))); goto L_001713FC;
L_001713E4:;
SET32(19, RW(19) + 1);
L_001713E8:;
SET64(2, RSD(19) < (s64)12);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_0017137C; } }
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 128)));
L_001713FC:;
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

void JP_F_00171430(Ctx *c) { /* func_00171430 */
ENTER(0x171430);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(7) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(6) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(0) + RD(0));
SET64(3, (s64)(s32)0x530000);
SET32(3, RW(3) + -19760);
SET64(2, RD(16) & 0xffff);
L_00171474:;
SET32(2, RW(2) << 2);
SET32(2, RW(3) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_001714A0; }
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
SET64(2, RSD(16) < (s64)12);
if (RD(2) != RD(0)) { SET64(2, RD(16) & 0xffff); { POLL(); goto L_00171474; } }
L_001714A0:;
SET64(19, RD(16) & 0xffff);
SET64(2, RSD(19) < (s64)12);
if (RD(2) != RD(0)) { SET32(4, RW(0) + 544); goto L_001714B8; }
SET64(2, RD(0) + RD(0)); goto L_001715C0;
L_001714B8:;
SET64(31, 0x1714c0);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_00171558; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x1714d4); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(31, 0x1714dc); SET32(4, RW(20) + 60); JP_F_00142620(c);
SET64(31, 0x1714e4); SET32(4, RW(20) + 104); JP_F_001718F0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 4448);
SET32(2, RW(2) + 4456);
wr32(c, (RW(20) + 56), RW(3));
SET32(4, RW(20) + 176);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(20) + 20), RW(2));
SET32(3, RW(3) + 4468);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(20) + 36), RW(3));
SET32(2, RW(2) + 4528);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(20) + 72), RW(2));
SET32(3, RW(3) + 4552);
SET32(2, RW(0) + 105);
wr32(c, (RW(20) + 132), RW(3));
wr32(c, (RW(20) + 136), RW(0));
wr8(c, (RW(20) + 140), (u8)RW(0));
wr32(c, (RW(20) + 144), RW(0));
wr8(c, (RW(20) + 148), (u8)RW(0));
wr8(c, (RW(20) + 149), (u8)RW(0));
wr32(c, (RW(20) + 152), RW(2));
wr16(c, (RW(20) + 156), (u16)RW(0));
wr32(c, (RW(20) + 160), RW(0));
SET64(31, 0x171550); wr32(c, (RW(20) + 164), RW(0)); JP_F_00171740(c);
wr16(c, (RW(20) + 528), (u16)RW(0));
wr32(c, (RW(20) + 532), RW(0));
L_00171558:;
SET64(2, RD(16) & 0xffff);
SET64(5, RD(18) + RD(0));
SET32(3, RW(2) << 2);
SET64(6, RD(17) + RD(0));
SET64(2, (s64)(s32)0x530000);
SET64(7, RD(21) + RD(0));
SET32(2, RW(2) + -19760);
SET64(8, RD(22) + RD(0));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(2) + 0), RW(20));
SET64(25, (s32)rd32(c, (RW(20) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x171590); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(2, rd16(c, (RW(28) + -30236)));
SET32(3, RW(0) + -16);
SET64(4, RD(2) | RD(19));
SET32(2, RW(2) + 16);
wr16(c, (RW(28) + -30236), (u16)RW(2));
SET64(2, RD(4) & 0xffff);
SET64(4, rd16(c, (RW(28) + -30236)));
SET64(3, RD(4) & RD(3));
{ int t = RD(3) != RD(0);  if (t) goto L_001715C0; }
SET32(3, RW(0) + 16);
wr16(c, (RW(28) + -30236), (u16)RW(3));
L_001715C0:;
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

void JP_F_001715F0(Ctx *c) { /* func_001715F0 */
ENTER(0x1715f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001716C8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 4288);
SET32(2, RW(2) + 4312);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x171634);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_001716B4; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 16640);
SET32(2, RW(2) + 16664);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x171664); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 160);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_001716A8; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x17168c);  rt_call(c, t); }
SET32(2, RW(17) + 160);
{ int t = RD(2) == RD(0);  if (t) goto L_001716A4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 172), RW(2));
L_001716A4:;
SET64(4, RD(17) + RD(0));
L_001716A8:;
SET64(31, 0x1716b0); SET64(5, RD(0) + RD(0)); JP_F_00243920(c);
SET64(2, RD(16) << 48);
L_001716B4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001716CC; }
SET64(31, 0x1716c8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001716C8:;
SET64(2, RD(17) + RD(0));
L_001716CC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001716E0(Ctx *c) { /* func_001716E0 */
ENTER(0x1716e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00171724; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4264);
SET64(31, 0x17170c); wr32(c, (RW(17) + 28), RW(2)); JP_F_001F3300(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00171728; }
SET64(31, 0x171724); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00171724:;
SET64(2, RD(17) + RD(0));
L_00171728:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00171740(Ctx *c) { /* func_00171740 */
ENTER(0x171740);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x171754); SET64(16, RD(4) + RD(0)); JP_F_00243A30(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 172), RW(2));
SET32(5, RW(5) + -3104);
wr32(c, (RW(16) + 160), RW(0));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 164), RW(0));
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 168), RW(0));
SET32(3, RW(3) + 16640);
wr32(c, (RW(16) + 172), RW(5));
SET32(2, RW(2) + 16664);
wr32(c, (RW(16) + 176), RW(0));
SET64(6, RD(0) + RD(0));
wr32(c, (RW(16) + 180), RW(4));
SET64(5, RD(16) + RD(0));
wr32(c, (RW(16) + 184), RW(0));
wr32(c, (RW(16) + 188), RW(0));
wr32(c, (RW(16) + 200), RW(0));
wr32(c, (RW(16) + 196), RW(0));
wr8(c, (RW(16) + 192), (u8)RW(0));
wr32(c, (RW(16) + 144), RW(3));
wr32(c, (RW(16) + 172), RW(2));
wr32(c, (RW(16) + 332), RW(0));
wr32(c, (RW(16) + 336), RW(0));
wr32(c, (RW(16) + 340), RW(0));
wr16(c, (RW(16) + 344), (u16)RW(0));
wr16(c, (RW(16) + 346), (u16)RW(0));
wr16(c, (RW(16) + 348), (u16)RW(0));
L_001717D0:;
wr32(c, (RW(5) + 204), RW(0));
SET32(6, RW(6) + 8);
wr32(c, (RW(5) + 208), RW(0));
SET64(2, RSD(6) < (s64)32);
wr32(c, (RW(5) + 212), RW(0));
wr32(c, (RW(5) + 216), RW(0));
wr32(c, (RW(5) + 220), RW(0));
wr32(c, (RW(5) + 224), RW(0));
wr32(c, (RW(5) + 228), RW(0));
wr32(c, (RW(5) + 232), RW(0));
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 32); if (t) { POLL(); goto L_001717D0; } }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4288);
SET32(3, RW(3) + 4312);
wr32(c, (RW(16) + 144), RW(2));
wr32(c, (RW(16) + 172), RW(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00171830(Ctx *c) { /* func_00171830 */
ENTER(0x171830);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001718D8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 16640);
SET32(2, RW(2) + 16664);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x171874);  rt_call(c, t); }
SET32(4, RW(17) + 160);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_001718B8; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x17189c);  rt_call(c, t); }
SET32(2, RW(17) + 160);
{ int t = RD(2) == RD(0);  if (t) goto L_001718B4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 172), RW(2));
L_001718B4:;
SET64(4, RD(17) + RD(0));
L_001718B8:;
SET64(31, 0x1718c0); SET64(5, RD(0) + RD(0)); JP_F_00243920(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001718DC; }
SET64(31, 0x1718d8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001718D8:;
SET64(2, RD(17) + RD(0));
L_001718DC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001718F0(Ctx *c) { /* func_001718F0 */
ENTER(0x1718f0);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4264);
wr32(c, (RW(4) + 28), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0)); return;
}

void JP_F_00171920(Ctx *c) { /* func_00171920 */
ENTER(0x171920);
SET64(4, (s64)(s32)0x530000);
wr32(c, (RW(28) + -30240), RW(0));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -19760);
L_00171930:;
wr32(c, (RW(4) + 0), RW(0));
SET32(5, RW(5) + 6);
wr32(c, (RW(4) + 4), RW(0));
SET64(3, RSD(5) < (s64)12);
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 24); if (t) { POLL(); goto L_00171930; } }
SET32(3, RW(0) + 16);
wr32(c, (RW(28) + -30248), RW(0));
wr16(c, (RW(28) + -30236), (u16)RW(3));
wr32(c, (RW(28) + -30244), RW(0)); return;
}

void JP_F_00171970(Ctx *c) { /* func_00171970 */
ENTER(0x171970);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00171980(Ctx *c) { /* func_00171980 */
ENTER(0x171980);
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
SET64(18, RD(7) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(3, rd16(c, (RW(4) + 2)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00171A28; }
SET64(4, rd16(c, (RW(21) + 4)));
L_001719C4:;
SET32(2, RW(4) + 1);
wr16(c, (RW(21) + 4), (u16)RW(2));
SET64(2, RD(2) & 0xffff);
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->hi.d[0]);
wr16(c, (RW(21) + 4), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(21) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(4));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(17, RW(2) + RW(3));
{ int t = RD(17) == RD(0);  if (t) goto L_00171A28; }
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x171a08); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00171A28; }
SET64(3, rd16(c, (RW(21) + 2)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(3));
if (RD(2) != RD(0)) { SET64(4, rd16(c, (RW(21) + 4))); { POLL(); goto L_001719C4; } }
L_00171A28:;
SET64(2, rd16(c, (RW(21) + 2)));
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00171A40; }
SET64(2, RD(0) + RD(0)); goto L_00171A70;
L_00171A40:;
if (RD(17) == RD(0)) { SET32(3, RW(0) + 1); goto L_00171A68; }
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(5, RD(20) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x171a64); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
L_00171A68:;
SET64(2, RD(17) + RD(0));
wr16(c, (RW(21) + 6), (u16)RW(3));
L_00171A70:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_00171AA0(Ctx *c) { /* func_00171AA0 */
ENTER(0x171aa0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
{ int t = RD(19) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_00171B30; }
SET64(2, (s64)(s32)0x4d0000);
SET64(17, RD(0) + RD(0));
SET32(2, RW(2) + 4248);
wr32(c, (RW(19) + 12), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 4)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00171B10; }
L_00171AE0:;
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x171af8); SET32(5, RW(0) + -1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 4)));
SET32(16, RW(16) + 1);
SET64(3, (s32)rd32(c, (RW(19) + 8)));
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + RW(3)); if (t) { POLL(); goto L_00171AE0; } }
L_00171B10:;
SET64(31, 0x171b18); SET64(4, (s32)rd32(c, (RW(19) + 0))); JP_F_001004B0(c);
SET64(2, RD(18) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(19) + 0), RW(0)); if (t) goto L_00171B30; }
SET64(31, 0x171b30); SET64(4, RD(19) + RD(0)); JP_F_001004B0(c);
L_00171B30:;
SET64(2, RD(19) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00171B50(Ctx *c) { /* func_00171B50 */
ENTER(0x171b50);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 528)));
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00171C60; }
SET64(17, RD(5) & 0xffff);
SET64(18, RD(0) + RD(0));
L_00171B88:;
SET64(3, (s32)rd32(c, (RW(21) + 532)));
SET32(16, RW(3) + RW(18));
SET64(3, rd16(c, (RW(16) + 0)));
if (RD(17) != RD(3)) { SET64(3, rd16(c, (RW(21) + 528))); goto L_00171C4C; }
SET64(3, rd16(c, (RW(16) + 2)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00171BF8; }
L_00171BA8:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x171bcc);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00171BE0; }
SET64(3, RD(0) + RD(0)); goto L_00171C00;
L_00171BE0:;
SET64(3, rd16(c, (RW(16) + 2)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00171BA8; } }
L_00171BF8:;
SET64(3, RD(0) + (s64)1);
L_00171C00:;
{ int t = RD(3) == RD(0);  if (t) goto L_00171C48; }
SET64(3, (s32)rd32(c, (RW(21) + 532)));
SET32(4, RW(20) << 4);
SET32(16, RW(3) + RW(4));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_00171C34; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x171c30); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
L_00171C34:;
SET32(3, RW(0) + 711);
wr16(c, (RW(16) + 2), (u16)RW(0));
wr16(c, (RW(16) + 4), (u16)RW(0));
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00171C60;
L_00171C48:;
SET64(3, rd16(c, (RW(21) + 528)));
L_00171C4C:;
SET32(20, RW(20) + 1);
SET64(3, RSD(20) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 16); if (t) { POLL(); goto L_00171B88; } }
L_00171C60:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_00171C90(Ctx *c) { /* func_00171C90 */
ENTER(0x171c90);
SET32(29, RW(29) + -112);
SET64(3, RD(6) & 0xffff);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
{ int t = RSD(3) <= 0; wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_00171EC0; }
SET64(17, RD(5) & 0xffff);
if (RD(17) == RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_00171EC4; }
SET32(3, RW(17) + -46);
SET64(1, RD(3) < (u64)(s64)2);
if (RD(1) == RD(0)) { SET64(7, rd16(c, (RW(20) + 528))); goto L_00171CE0; }
 goto L_00171EC0;
SET64(7, rd16(c, (RW(20) + 528)));
L_00171CE0:;
{ int t = RSD(7) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00171EC0; }
SET64(18, (s32)rd32(c, (RW(20) + 532)));
SET32(4, RW(0) + 711);
L_00171CF0:;
SET64(3, rd16(c, (RW(18) + 0)));
{ int t = RD(17) == RD(3);  if (t) goto L_00171EC0; }
if (RD(3) != RD(4)) { SET32(8, RW(8) + 1); goto L_00171EB4; }
wr16(c, (RW(18) + 0), (u16)RW(5));
SET64(4, RD(18) + RD(0));
wr16(c, (RW(18) + 2), (u16)RW(6));
SET32(7, RW(29) + 104);
wr16(c, (RW(18) + 4), (u16)RW(0));
wr16(c, (RW(18) + 6), (u16)RW(0));
wr16(c, (RW(29) + 110), (u16)RW(0));
wr32(c, (RW(29) + 104), RW(0));
SET64(6, rd16(c, (RW(18) + 2)));
SET64(31, 0x171d30); SET32(8, RW(29) + 110); JP_F_0036EEC0(c);
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 8))); goto L_00171D74; }
SET64(31, 0x171d40); SET32(4, RW(0) + 16); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 8), RW(2)); goto L_00171D70; }
SET64(5, rd16(c, (RW(18) + 2)));
SET64(3, (s64)(s32)0x4d0000);
SET64(4, (s32)rd32(c, (RW(29) + 104)));
SET32(3, RW(3) + 4248);
wr32(c, (RW(2) + 12), RW(3));
wr32(c, (RW(2) + 0), RW(4));
wr32(c, (RW(2) + 4), RW(5));
SET64(3, rd16(c, (RW(29) + 110)));
wr32(c, (RW(2) + 8), RW(3));
wr32(c, (RW(18) + 8), RW(2));
L_00171D70:;
SET64(3, (s32)rd32(c, (RW(18) + 8)));
L_00171D74:;
if (RD(3) != RD(0)) { SET64(4, (s32)rd32(c, (RW(3) + 0))); goto L_00171D88; }
SET64(3, RD(0) + RD(0)); goto L_00171D9C;
SET64(4, (s32)rd32(c, (RW(3) + 0)));
L_00171D88:;
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x171d98);  rt_call(c, t); }
SET64(3, RD(2) + RD(0));
L_00171D9C:;
SET64(3, RD(3) & 0xff);
if (RD(3) != RD(0)) { SET64(3, rd16(c, (RW(18) + 2))); goto L_00171E60; }
SET64(3, rd16(c, (RW(18) + 2)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00171EA8; }
SET64(2, (s32)rd32(c, (RW(18) + 8)));
L_00171DB8:;
SET64(16, RD(19) & 0xffff);
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(16));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x171ddc); SET32(5, RW(20) + 104); rt_call(c, t); }
SET64(3, rd16(c, (RW(20) + 156)));
{ int t = RD(3) == RD(0);  if (t) goto L_00171E40; }
SET32(2, RW(0) + 15);
{ int t = RD(17) == RD(2);  if (t) goto L_00171E00; }
SET64(4, RD(0) + RD(0)); goto L_00171E08;
L_00171E00:;
SET32(4, RW(0) + 1);
L_00171E08:;
SET64(6, (s32)rd32(c, (RW(18) + 8)));
SET32(3, RW(4) << 2);
SET64(2, (s32)rd32(c, (RW(20) + 164)));
SET32(3, RW(3) + RW(4));
SET64(4, (s32)rd32(c, (RW(6) + 8)));
SET32(3, RW(3) << 4);
SET32(5, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(6) + 0)));
mul_s(c, 0, 3, RSW(4), RSW(16));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x171e40);  rt_call(c, t); }
L_00171E40:;
SET64(3, rd16(c, (RW(18) + 2)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 8))); { POLL(); goto L_00171DB8; } }
 goto L_00171EA8;
SET64(3, rd16(c, (RW(18) + 2)));
L_00171E60:;
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00171EA8; }
SET64(2, (s32)rd32(c, (RW(18) + 8)));
L_00171E6C:;
SET64(4, RD(16) & 0xffff);
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(4));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x171e90); SET64(5, RD(20) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(18) + 2)));
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < RSD(3));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 8))); { POLL(); goto L_00171E6C; } }
L_00171EA8:;
 goto L_00171EC0;
SET32(8, RW(8) + 1);
L_00171EB4:;
SET64(3, RSD(8) < RSD(7));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 16); if (t) { POLL(); goto L_00171CF0; } }
L_00171EC0:;
SET64(31, rd64(c, (RW(29) + 80)));
L_00171EC4:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_00171EE0(Ctx *c) { /* func_00171EE0 */
ENTER(0x171ee0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 528)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00171F80; }
SET64(17, RD(0) + RD(0));
L_00171F18:;
SET64(3, (s32)rd32(c, (RW(21) + 532)));
SET32(16, RW(3) + RW(17));
SET64(3, rd16(c, (RW(16) + 2)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00171F68; }
L_00171F30:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(18));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x171f54); SET64(5, RD(20) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 2)));
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00171F30; } }
L_00171F68:;
SET64(3, rd16(c, (RW(21) + 528)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 16); if (t) { POLL(); goto L_00171F18; } }
L_00171F80:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_00171FB0(Ctx *c) { /* func_00171FB0 */
ENTER(0x171fb0);
SET64(6, rd16(c, (RW(4) + 528)));
{ int t = RSD(6) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_00171FE8; }
SET64(4, (s32)rd32(c, (RW(4) + 532)));
SET64(3, RD(5) & 0xffff);
L_00171FC4:;
SET64(2, rd16(c, (RW(4) + 0)));
if (RD(3) != RD(2)) { SET32(7, RW(7) + 1); goto L_00171FD8; }
SET32(2, RW(0) + 1); goto L_00171FEC;
L_00171FD8:;
SET64(2, RSD(7) < RSD(6));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 16); if (t) { POLL(); goto L_00171FC4; } }
L_00171FE8:;
SET64(2, RD(0) + RD(0));
L_00171FEC:;
 return;
}

void JP_F_00172000(Ctx *c) { /* func_00172000 */
ENTER(0x172000);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 528)));
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_001720B0; }
SET64(17, RD(5) & 0xffff);
SET64(18, RD(0) + RD(0));
L_00172038:;
SET64(3, (s32)rd32(c, (RW(21) + 532)));
SET32(16, RW(3) + RW(18));
SET64(3, rd16(c, (RW(16) + 0)));
{ int t = RD(17) != RD(3);  if (t) goto L_00172098; }
SET64(3, rd16(c, (RW(16) + 2)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00172090; }
L_00172058:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x17207c);  rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 2)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00172058; } }
L_00172090:;
wr16(c, (RW(16) + 6), (u16)RW(0));
L_00172098:;
SET64(3, rd16(c, (RW(21) + 528)));
SET32(20, RW(20) + 1);
SET64(3, RSD(20) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 16); if (t) { POLL(); goto L_00172038; } }
L_001720B0:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_001720E0(Ctx *c) { /* func_001720E0 */
ENTER(0x1720e0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 528)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00172178; }
SET64(17, RD(0) + RD(0));
L_00172110:;
SET64(3, (s32)rd32(c, (RW(20) + 532)));
SET32(16, RW(3) + RW(17));
SET64(3, rd16(c, (RW(16) + 2)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00172160; }
L_00172128:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(18));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x17214c);  rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 2)));
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00172128; } }
L_00172160:;
wr16(c, (RW(16) + 6), (u16)RW(0));
SET64(3, rd16(c, (RW(20) + 528)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 16); if (t) { POLL(); goto L_00172110; } }
L_00172178:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_001721A0(Ctx *c) { /* func_001721A0 */
ENTER(0x1721a0);
SET32(29, RW(29) + -16);
{ int t = RD(8) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_001721B4; }
SET64(9, RD(5) & 0xffff); goto L_001721C4;
L_001721B4:;
{ int t = RD(4) == RD(0); SET64(8, RD(4) + RD(0)); if (t) goto L_001721C0; }
SET32(8, RW(8) + 60);
L_001721C0:;
SET64(9, RD(5) & 0xffff);
L_001721C4:;
if (RD(9) == RD(0)) { SET32(2, RW(4) + 176); goto L_00172234; }
SET32(2, RW(9) + -46);
SET64(1, RD(2) < (u64)(s64)2);
if (RD(1) == RD(0)) { SET64(5, rd16(c, (RW(4) + 528))); goto L_001721E8; }
SET32(2, RW(4) + 176);
 goto L_00172234;
L_001721E8:;
{ int t = RSD(5) <= 0; SET64(10, RD(0) + RD(0)); if (t) goto L_00172230; }
SET64(3, (s32)rd32(c, (RW(4) + 532)));
SET64(4, RD(3) + RD(0));
L_001721F8:;
SET64(2, rd16(c, (RW(4) + 0)));
if (RD(9) != RD(2)) { SET32(10, RW(10) + 1); goto L_00172220; }
SET32(2, RW(10) << 4);
SET64(5, RD(6) + RD(0));
SET32(4, RW(3) + RW(2));
SET64(31, 0x172218); SET64(6, RD(8) + RD(0)); JP_F_00171980(c);
 goto L_00172234;
L_00172220:;
SET64(2, RSD(10) < RSD(5));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 16); if (t) { POLL(); goto L_001721F8; } }
L_00172230:;
SET64(2, RD(0) + RD(0));
L_00172234:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00172240(Ctx *c) { /* func_00172240 */
ENTER(0x172240);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd16(c, (RW(4) + 528)));
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00172300; }
SET64(17, RD(0) + RD(0));
L_00172270:;
SET64(2, (s32)rd32(c, (RW(20) + 532)));
SET32(16, RW(2) + RW(17));
SET64(2, rd16(c, (RW(16) + 2)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001722D8; }
L_00172288:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(18));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x1722ac);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001722C0; }
SET64(2, RD(0) + RD(0)); goto L_001722E0;
L_001722C0:;
SET64(2, rd16(c, (RW(16) + 2)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00172288; } }
L_001722D8:;
SET64(2, RD(0) + (s64)1);
L_001722E0:;
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(20) + 528))); goto L_001722F0; }
SET64(2, RD(0) + RD(0)); goto L_00172304;
L_001722F0:;
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 16); if (t) { POLL(); goto L_00172270; } }
L_00172300:;
SET32(2, RW(0) + 1);
L_00172304:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00172330(Ctx *c) { /* func_00172330 */
ENTER(0x172330);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(28) + -29920)));
SET64(31, 0x172358); SET64(18, RD(4) + RD(0)); JP_F_002A7400(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 164))); goto L_00172368; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(16) + 164)));
L_00172368:;
SET64(31, 0x172370); SET64(5, RD(2) + RD(0)); JP_F_002ADD30(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
wr8(c, (RW(29) + 108), (u8)RW(2));
SET64(2, rd8(c, (RW(29) + 108)));
if (RD(2) != RD(0)) { SET64(4, RD(18) + RD(0)); goto L_001723AC; }
SET64(31, 0x172390);  JP_F_002A7400(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -29920))); goto L_001723A0; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
L_001723A0:;
SET64(31, 0x1723a8); SET64(5, RD(2) + RD(0)); JP_F_002ABF00(c);
SET64(4, RD(18) + RD(0));
L_001723AC:;
SET64(31, 0x1723b4);  JP_F_00139AB0(c);
SET64(2, rd8(c, (RW(18) + 148)));
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 144), RW(0)); goto L_001723E0; }
SET64(4, (s32)rd32(c, (RW(18) + 144)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 144), RW(0)); goto L_001723E0; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1723dc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 144), RW(0));
L_001723E0:;
wr8(c, (RW(18) + 148), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 164)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 532))); goto L_001724A0; }
SET64(5, (s64)(s32)0x150000);
SET64(31, 0x1723fc); SET32(5, RW(5) + -4144); JP_F_001022C0(c);
wr32(c, (RW(18) + 164), RW(0));
SET64(2, rd16(c, (RW(18) + 156)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00172490; }
SET64(16, RD(0) + RD(0));
L_00172410:;
SET64(31, 0x172418);  JP_F_00139590(c);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_00172458; }
SET64(31, 0x17242c);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(18) + 160)));
SET32(20, RW(2) + RW(16));
SET64(19, (s32)rd32(c, (RW(20) + 0)));
SET64(31, 0x172444); SET32(5, RW(0) + 3); JP_F_0022CB50(c);
{ int t = RD(19) != RD(2);  if (t) goto L_00172458; }
wr32(c, (RW(20) + 0), RW(0)); goto L_00172478;
L_00172458:;
SET64(2, (s32)rd32(c, (RW(18) + 160)));
SET32(2, RW(2) + RW(16));
SET64(31, 0x172468); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_001004B0(c);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 0), RW(0));
L_00172478:;
SET64(2, rd16(c, (RW(18) + 156)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00172410; } }
L_00172490:;
SET64(31, 0x172498); SET64(4, (s32)rd32(c, (RW(18) + 160))); JP_F_001004B0(c);
wr32(c, (RW(18) + 160), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 532)));
L_001724A0:;
if (RD(4) == RD(0)) { SET32(4, RW(18) + 104); goto L_001724BC; }
SET64(5, (s64)(s32)0x170000);
SET64(31, 0x1724b4); SET32(5, RW(5) + 9664); JP_F_001022C0(c);
wr32(c, (RW(18) + 532), RW(0));
SET32(4, RW(18) + 104);
L_001724BC:;
SET64(31, 0x1724c4); wr16(c, (RW(18) + 528), (u16)RW(0)); JP_F_001F3300(c);
SET64(2, (s32)rd32(c, (RW(18) + 60)));
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 64), RW(0)); goto L_0017252C; }
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET32(4, RW(2) + 8);
SET32(2, RW(18) + 60);
if (RD(3) != RD(2)) { SET32(4, RW(3) + 4); goto L_001724F8; }
SET64(2, (s32)rd32(c, (RW(18) + 64)));
if (RD(2) != RD(0)) { wr32(c, (RW(4) + 0), RW(2)); goto L_00172528; }
wr32(c, (RW(4) + 0), RW(0)); goto L_00172528;
L_001724F8:;
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(2);  if (t) goto L_00172520; }
L_00172504:;
SET32(4, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(2);  if (t) { POLL(); goto L_00172504; } }
L_00172520:;
SET64(2, (s32)rd32(c, (RW(18) + 64)));
wr32(c, (RW(4) + 0), RW(2));
L_00172528:;
wr32(c, (RW(18) + 64), RW(0));
L_0017252C:;
wr32(c, (RW(18) + 60), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 136)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 136), RW(0)); goto L_00172550; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x17254c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 136), RW(0));
L_00172550:;
SET32(2, RW(0) + 105);
wr32(c, (RW(18) + 152), RW(2));
wr16(c, (RW(18) + 156), (u16)RW(0));
wr8(c, (RW(18) + 149), (u8)RW(0));
SET64(25, (s32)rd32(c, (RW(18) + 320)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x172570); SET32(4, RW(18) + 176); rt_call(c, t); }
SET64(3, rd8(c, (RW(29) + 108)));
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_001725A4; }
SET64(31, 0x172584);  JP_F_002A7400(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -29920))); goto L_00172594; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
L_00172594:;
SET64(5, RD(2) + RD(0));
SET64(31, 0x1725a0); SET64(6, RD(0) + RD(0)); JP_F_002ABF80(c);
SET64(31, rd64(c, (RW(29) + 80)));
L_001725A4:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_001725C0(Ctx *c) { /* func_001725C0 */
ENTER(0x1725c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0017262C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4232);
wr32(c, (RW(17) + 12), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 8)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 8), RW(0)); goto L_00172608; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x172604); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 8), RW(0));
L_00172608:;
SET64(2, RD(16) << 48);
wr16(c, (RW(17) + 2), (u16)RW(0));
SET64(2, RSD(2) >> 48);
SET32(3, RW(0) + 711);
wr16(c, (RW(17) + 4), (u16)RW(0));
{ int t = RSD(2) <= 0; wr16(c, (RW(17) + 0), (u16)RW(3)); if (t) goto L_0017262C; }
SET64(31, 0x17262c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0017262C:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00172650(Ctx *c) { /* func_00172650 */
ENTER(0x172650);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, rd16(c, (RW(4) + 156)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_001726F0; }
SET64(4, (s32)rd32(c, (RW(18) + 144)));
L_0017267C:;
SET64(3, RD(16) & 0xffff);
SET32(2, RW(3) << 2);
SET64(7, (s32)rd32(c, (RW(18) + 164)));
SET32(2, RW(2) + RW(3));
SET64(6, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(2) << 4);
SET32(4, RW(7) + RW(2));
SET64(3, (s32)rd32(c, (RW(6) + 8)));
SET64(2, rd16(c, (RW(4) + 52)));
SET32(2, RW(2) << 1);
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_001726C8; }
SET64(2, rd16(c, (RW(4) + 54)));
SET64(3, (s32)rd32(c, (RW(6) + 12)));
SET32(2, RW(2) << 1);
SET64(1, RSD(3) < RSD(2));
{ int t = RD(1) == RD(0);  if (t) goto L_001726D0; }
L_001726C8:;
SET64(5, RD(0) + RD(0));
L_001726D0:;
SET64(31, 0x1726d8);  JP_F_0014F220(c);
SET64(3, rd16(c, (RW(18) + 156)));
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 144))); { POLL(); goto L_0017267C; } }
L_001726F0:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

