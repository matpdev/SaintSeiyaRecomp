#include "r5900.h"
#include "functab.h"

void F_0015F220(Ctx *c) { /* func_0015F220 */
ENTER(0x15f220);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -112);
SET32(4, RW(4) + RW(25)); { F_0015DC60(c); return; }
}

void F_0015F230(Ctx *c) { /* func_0015F230 */
ENTER(0x15f230);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -112);
SET32(4, RW(4) + RW(25)); { F_0015DEA0(c); return; }
}

void F_0015F240(Ctx *c) { /* func_0015F240 */
ENTER(0x15f240);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -112);
SET32(4, RW(4) + RW(25)); { F_0015D6C0(c); return; }
}

void F_0015F250(Ctx *c) { /* func_0015F250 */
ENTER(0x15f250);
SET64(25, (s32)rd32(c, (RW(4) + 416)));
SET32(4, RW(4) + -400);
SET32(4, RW(4) + RW(25)); { F_0015DB30(c); return; }
}

void F_0015F260(Ctx *c) { /* func_0015F260 */
ENTER(0x15f260);
SET64(25, (s32)rd32(c, (RW(4) + 416)));
SET32(4, RW(4) + -400);
SET32(4, RW(4) + RW(25)); { F_0015D6C0(c); return; }
}

void F_0015F270(Ctx *c) { /* func_0015F270 */
ENTER(0x15f270);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 20)));
SET64(31, 0x15f284); SET32(4, RW(2) + 160); F_002A7670(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0015F290(Ctx *c) { /* func_0015F290 */
ENTER(0x15f290);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
if (RD(4) == RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 16))); goto L_0015F2C8; }
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15f2c0);  rt_call(c, t); }
wr32(c, (RW(17) + 0), RW(0));
SET64(3, (s32)rd32(c, (RW(17) + 16)));
L_0015F2C8:;
if (RD(3) == RD(0)) { SET64(16, (s32)rd32(c, (RW(17) + 0))); goto L_0015F300; }
SET64(4, (s32)rd32(c, (RW(17) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x15f2e4);  rt_call(c, t); }
SET64(31, 0x15f2ec); SET64(4, (s32)rd32(c, (RW(17) + 16))); F_00162440(c);
SET64(31, 0x15f2f4); SET64(4, (s32)rd32(c, (RW(17) + 24))); F_00162780(c);
SET64(31, 0x15f2fc); SET64(4, (s32)rd32(c, (RW(17) + 28))); F_00162780(c);
SET64(16, (s32)rd32(c, (RW(17) + 0)));
L_0015F300:;
if (RD(16) == RD(0)) { SET32(3, RW(0) + 1); goto L_0015F30C; }
SET64(3, rd8(c, (RW(17) + 32)));
L_0015F30C:;
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0015F36C; }
if (RD(16) == RD(0)) { SET32(3, RW(0) + 1); goto L_0015F364; }
c->f[12].u = RW(0);
SET64(31, 0x15f328); SET32(4, RW(16) + 48); F_00162D00(c);
c->f[12].u = RW(0);
SET64(31, 0x15f334); SET32(4, RW(16) + 48); F_00162CF0(c);
c->f[12].u = RW(0);
SET64(31, 0x15f340); SET32(4, RW(16) + 48); F_00162CE0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x15f350); SET32(4, RW(16) + 48); F_00162CD0(c);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x15f360); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
L_0015F364:;
wr8(c, (RW(17) + 32), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
L_0015F36C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0015F380(Ctx *c) { /* func_0015F380 */
ENTER(0x15f380);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_0015F3B8; }
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x15f3ac);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_0015F3C4; }
wr32(c, (RW(16) + 0), RW(0));
L_0015F3B8:;
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 32), (u8)RW(0)); goto L_0015F434;
L_0015F3C4:;
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_0015F3D0; }
SET64(2, rd8(c, (RW(16) + 32)));
L_0015F3D0:;
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0015F434; }
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x15f3e8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0015F430; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x15f404);  rt_call(c, t); }
if (RD(2) != RD(0)) { wr8(c, (RW(16) + 32), (u8)RW(0)); goto L_0015F428; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15f420);  rt_call(c, t); }
 goto L_0015F430;
L_0015F428:;
SET32(2, RW(0) + 1); goto L_0015F434;
L_0015F430:;
SET64(2, RD(0) + RD(0));
L_0015F434:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0015F450(Ctx *c) { /* func_0015F450 */
ENTER(0x15f450);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(16) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_0015F474; }
SET64(3, rd8(c, (RW(17) + 32))); goto L_0015F478;
L_0015F474:;
SET32(3, RW(0) + 1);
L_0015F478:;
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0015F4D8; }
if (RD(16) == RD(0)) { SET32(3, RW(0) + 1); goto L_0015F4D0; }
c->f[12].u = RW(0);
SET64(31, 0x15f494); SET32(4, RW(16) + 48); F_00162D00(c);
c->f[12].u = RW(0);
SET64(31, 0x15f4a0); SET32(4, RW(16) + 48); F_00162CF0(c);
c->f[12].u = RW(0);
SET64(31, 0x15f4ac); SET32(4, RW(16) + 48); F_00162CE0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x15f4bc); SET32(4, RW(16) + 48); F_00162CD0(c);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x15f4cc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
L_0015F4D0:;
wr8(c, (RW(17) + 32), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
L_0015F4D8:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0015F4F0(Ctx *c) { /* func_0015F4F0 */
ENTER(0x15f4f0);
wr8(c, (RW(4) + 32), (u8)RW(0)); return;
}

void F_0015F500(Ctx *c) { /* func_0015F500 */
ENTER(0x15f500);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x15f51c); SET64(16, RD(4) + RD(0)); F_002BF970(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(17, (s32)c->f[0].u);
SET64(31, 0x15f52c);  F_002BF9A0(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET32(4, RW(0) + 176);
wr32(c, (RW(29) + 108), RW(17));
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 100), RW(0));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x15f54c); wr32(c, (RW(29) + 104), RW(2)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0015F564; }
SET64(5, (s32)rd32(c, (RW(28) + -30060)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x15f564); SET32(6, RW(0) + 4096); F_00162840(c);
L_0015F564:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 96);
SET64(31, 0x15f574); wr32(c, (RW(16) + 24), RW(17)); F_001627C0(c);
SET64(31, 0x15f57c); SET32(4, RW(0) + 176); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0015F594; }
SET64(5, (s32)rd32(c, (RW(28) + -30060)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x15f594); SET32(6, RW(0) + 4096); F_00162840(c);
L_0015F594:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 96);
SET64(31, 0x15f5a4); wr32(c, (RW(16) + 28), RW(17)); F_001627C0(c);
SET64(31, 0x15f5ac); SET32(4, RW(0) + 928); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0015F5C4; }
SET64(5, (s32)rd32(c, (RW(28) + -30060)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x15f5c4); SET64(6, RD(0) | 0xe000); F_001626E0(c);
L_0015F5C4:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 96);
SET64(31, 0x15f5d4); wr32(c, (RW(16) + 16), RW(17)); F_00162290(c);
SET64(31, 0x15f5dc); SET32(4, RW(0) + 304); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0015F5F0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x15f5f0); SET32(5, RW(0) + 1); F_0014CFE0(c);
L_0015F5F0:;
wr32(c, (RW(16) + 20), RW(17));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x15f604); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 20)));
c->f[12].u = RW(0);
wr32(c, (RW(2) + 32), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
wr32(c, (RW(2) + 36), RW(0));
SET64(31, 0x15f620); SET64(4, (s32)rd32(c, (RW(16) + 20))); F_0014E7A0(c);
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
{ u32 t = RW(25); SET64(31, 0x15f670);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 16)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 20))); goto L_0015F684; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(16) + 20)));
L_0015F684:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x15f694);  rt_call(c, t); }
SET64(31, 0x15f69c); SET32(4, RW(0) + 496); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0015F6F4; }
SET32(5, RW(0) + 64);
SET64(4, RD(18) + RD(0));
SET32(6, RW(0) + 128);
SET64(31, 0x15f6b8); SET64(7, RD(5) + RD(0)); F_002A36E0(c);
SET32(17, RW(18) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(17) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x15f6d0); wr32(c, (RW(18) + 240), RW(4)); F_002AB2A0(c);
SET64(31, 0x15f6d8); SET32(4, RW(17) + 32); F_002A59A0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 240), RW(17));
SET32(2, RW(2) + -30800);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 144), RW(2));
SET64(31, 0x15f6f4); SET32(5, RW(18) + 272); F_002A35D0(c);
L_0015F6F4:;
SET32(4, RW(0) + 496);
SET64(31, 0x15f700); wr32(c, (RW(16) + 8), RW(18)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0015F758; }
SET32(5, RW(0) + 64);
SET64(4, RD(18) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x15f71c); SET64(7, RD(5) + RD(0)); F_002A36E0(c);
SET32(17, RW(18) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(17) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x15f734); wr32(c, (RW(18) + 240), RW(4)); F_002AB2A0(c);
SET64(31, 0x15f73c); SET32(4, RW(17) + 32); F_002A59A0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 240), RW(17));
SET32(2, RW(2) + -30800);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 144), RW(2));
SET64(31, 0x15f758); SET32(5, RW(18) + 272); F_002A35D0(c);
L_0015F758:;
wr32(c, (RW(16) + 12), RW(18));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(4, (s32)rd32(c, (RW(2) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x15f770); SET64(5, RD(18) + RD(0)); F_002AB090(c);
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(4, (s32)rd32(c, (RW(2) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x15f784); SET64(5, (s32)rd32(c, (RW(16) + 8))); F_002AB090(c);
SET64(31, 0x15f78c); SET32(4, RW(0) + 32); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0015F79C; }
SET64(31, 0x15f79c); SET64(4, RD(17) + RD(0)); F_0014FE60(c);
L_0015F79C:;
SET32(5, RW(0) + 512);
SET64(4, RD(17) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x15f7b8); wr32(c, (RW(16) + 36), RW(17)); F_0014FCE0(c);
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(31, 0x15f7c4); wr32(c, (RW(28) + -30368), RW(2)); F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x15f7d0); SET64(5, (s32)rd32(c, (RW(16) + 36))); F_0022ABE0(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_0015F7F0(Ctx *c) { /* func_0015F7F0 */
ENTER(0x15f7f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x15f808); wr32(c, (RW(28) + -30368), RW(0)); F_00139590(c);
SET64(31, 0x15f810); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_0022ABA0(c);
SET64(4, (s32)rd32(c, (RW(16) + 36)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 36), RW(0)); goto L_0015F830; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15f82c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 36), RW(0));
L_0015F830:;
SET64(4, (s32)rd32(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_0015F850; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15f84c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
L_0015F850:;
SET64(4, (s32)rd32(c, (RW(16) + 12)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 12), RW(0)); goto L_0015F870; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15f86c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 12), RW(0));
L_0015F870:;
SET64(4, (s32)rd32(c, (RW(16) + 24)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 24), RW(0)); goto L_0015F890; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15f88c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 24), RW(0));
L_0015F890:;
SET64(4, (s32)rd32(c, (RW(16) + 28)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 28), RW(0)); goto L_0015F8B0; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15f8ac); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 28), RW(0));
L_0015F8B0:;
SET64(4, (s32)rd32(c, (RW(16) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 16), RW(0)); goto L_0015F8D0; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15f8cc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 16), RW(0));
L_0015F8D0:;
SET64(4, (s32)rd32(c, (RW(16) + 20)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 20), RW(0)); goto L_0015F8F0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x15f8ec); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 20), RW(0));
L_0015F8F0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0015F900(Ctx *c) { /* func_0015F900 */
ENTER(0x15f900);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015F95C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(17) + 64);
SET32(2, RW(2) + -25584);
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 4), RW(2)); if (t) goto L_0015F938; }
SET64(31, 0x15f938); SET32(5, RW(0) + -1); F_0014AEC0(c);
L_0015F938:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x15f944); SET64(5, RD(0) + RD(0)); F_002A08E0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015F960; }
SET64(31, 0x15f95c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0015F95C:;
SET64(2, RD(17) + RD(0));
L_0015F960:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0015F980(Ctx *c) { /* func_0015F980 */
ENTER(0x15f980);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0015F9C4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -25608);
SET64(31, 0x15f9ac); wr32(c, (RW(17) + 40), RW(2)); F_0015F7F0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0015F9C8; }
SET64(31, 0x15f9c4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0015F9C4:;
SET64(2, RD(17) + RD(0));
L_0015F9C8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0015F9E0(Ctx *c) { /* func_0015F9E0 */
ENTER(0x15f9e0);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -25608);
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

void F_0015FA20(Ctx *c) { /* func_0015FA20 */
ENTER(0x15fa20);
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
{ u32 t = RW(25); SET64(31, 0x15fa58);  rt_call(c, t); }
SET64(18, RD(0) + RD(0));
SET32(17, RW(29) + 64);
L_0015FA60:;
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(31, 0x15fa6c); SET64(5, RD(18) & 0xffff); F_0014C800(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(31, 0x15fa88); SET64(5, RD(18) & 0xffff); F_0014C760(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)4);
SET64(3, (s32)c->f[0].u);
wr16(c, (RW(17) + 2), (u16)RW(3));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_0015FA60; } }
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
{ u32 t = RW(25); SET64(31, 0x15fadc); SET32(7, RW(29) + 88); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_0015FB00(Ctx *c) { /* func_0015FB00 */
ENTER(0x15fb00);
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
{ u32 t = RW(25); SET64(31, 0x15fb38);  rt_call(c, t); }
SET64(18, RD(0) + RD(0));
SET32(17, RW(29) + 64);
L_0015FB40:;
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(31, 0x15fb4c); SET64(5, RD(18) & 0xffff); F_0014C800(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(31, 0x15fb68); SET64(5, RD(18) & 0xffff); F_0014C760(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)4);
SET64(3, (s32)c->f[0].u);
wr16(c, (RW(17) + 2), (u16)RW(3));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_0015FB40; } }
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
{ u32 t = RW(25); SET64(31, 0x15fbbc); SET32(7, RW(29) + 88); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_0015FBE0(Ctx *c) { /* func_0015FBE0 */
ENTER(0x15fbe0);
SET64(3, (s32)rd32(c, (RW(5) + 96)));
SET64(8, (s32)rd32(c, (RW(3) + 192)));
c->f[1].u = rd32(c, (RW(8) + 16));
c->f[0].u = rd32(c, (RW(8) + 0));
c->fcc = F(0) < F(1);
if (!c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_0015FC0C; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(7, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(8) + 12)); goto L_0015FC14;
L_0015FC0C:;
SET64(7, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(8) + 12));
L_0015FC14:;
c->f[0].u = rd32(c, (RW(8) + 4));
c->fcc = F(0) < F(1);
if (!c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_0015FC34; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(6, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(8) + 24)); goto L_0015FC3C;
L_0015FC34:;
SET64(6, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(8) + 24));
L_0015FC3C:;
c->f[0].u = rd32(c, (RW(8) + 8));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_0015FC5C; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(8) + 28)); goto L_0015FC64;
L_0015FC5C:;
SET64(3, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(8) + 28));
L_0015FC64:;
c->f[0].u = rd32(c, (RW(8) + 20));
c->fcc = F(0) <= F(1);
{ int t = c->fcc; SET32(5, RW(3) - RW(7)); if (t) goto L_0015FC84; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(4) + 0), RW(7)); goto L_0015FC90;
L_0015FC84:;
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(4) + 0), RW(7));
L_0015FC90:;
SET32(3, RW(3) - RW(6));
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 8), RW(5));
wr32(c, (RW(4) + 12), RW(3)); return;
}

void F_0015FCB0(Ctx *c) { /* func_0015FCB0 */
ENTER(0x15fcb0);
SET64(3, (s32)rd32(c, (RW(5) + 96)));
SET64(5, (s32)rd32(c, (RW(3) + 192)));
c->f[1].u = rd32(c, (RW(5) + 16));
c->f[0].u = rd32(c, (RW(5) + 0));
c->fcc = F(0) < F(1);
if (!c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_0015FCDC; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
 goto L_0015FCE0;
L_0015FCDC:;
SET64(3, (s32)c->f[0].u);
L_0015FCE0:;
c->f[0].u = RW(3);
c->f[4].f = (f32)(s32)c->f[0].u;
c->f[1].u = rd32(c, (RW(5) + 12));
c->f[0].u = rd32(c, (RW(5) + 4));
c->fcc = F(0) < F(1);
if (!c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_0015FD10; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
 goto L_0015FD14;
L_0015FD10:;
SET64(3, (s32)c->f[0].u);
L_0015FD14:;
c->f[0].u = RW(3);
c->f[3].f = (f32)(s32)c->f[0].u;
c->f[1].u = rd32(c, (RW(5) + 24));
c->f[0].u = rd32(c, (RW(5) + 8));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_0015FD44; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
 goto L_0015FD48;
L_0015FD44:;
SET64(3, (s32)c->f[0].u);
L_0015FD48:;
c->f[0].u = RW(3);
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[1].u = rd32(c, (RW(5) + 28));
c->f[0].u = rd32(c, (RW(5) + 20));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_0015FD78; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
 goto L_0015FD7C;
L_0015FD78:;
SET64(3, (s32)c->f[0].u);
L_0015FD7C:;
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(4) + 0), c->f[4].u);
wr32(c, (RW(4) + 4), c->f[3].u);
wr32(c, (RW(4) + 8), c->f[2].u);
wr32(c, (RW(4) + 12), c->f[0].u); return;
}

void F_0015FDA0(Ctx *c) { /* func_0015FDA0 */
ENTER(0x15fda0);
SET64(6, (s32)rd32(c, (RW(5) + 96)));
SET64(5, (s32)rd32(c, (RW(6) + 160)));
c->f[1].u = rd32(c, (RW(5) + 28));
c->f[0].u = rd32(c, (RW(5) + 20));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].u = c->f[1].u; goto L_0015FDBC; }
L_0015FDBC:;
c->f[3].u = rd32(c, (RW(6) + 36));
SET64(3, (s32)rd32(c, (RW(6) + 160)));
c->f[4].f = fpu(F(3) + F(0));
c->f[1].u = rd32(c, (RW(3) + 24));
c->f[0].u = rd32(c, (RW(3) + 8));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].u = c->f[1].u; goto L_0015FDDC; }
L_0015FDDC:;
c->f[2].u = rd32(c, (RW(6) + 32));
SET64(3, (s32)rd32(c, (RW(6) + 160)));
c->f[5].f = fpu(F(2) + F(0));
c->f[1].u = rd32(c, (RW(3) + 12));
c->f[0].u = rd32(c, (RW(3) + 4));
c->fcc = F(0) < F(1);
if (!c->fcc) { c->f[0].u = c->f[1].u; goto L_0015FDFC; }
L_0015FDFC:;
c->f[3].f = fpu(F(3) + F(0));
c->f[1].u = rd32(c, (RW(5) + 16));
c->f[0].u = rd32(c, (RW(5) + 0));
c->fcc = F(0) < F(1);
if (!c->fcc) { c->f[0].u = c->f[1].u; goto L_0015FE14; }
L_0015FE14:;
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(4) + 0), c->f[0].u);
wr32(c, (RW(4) + 4), c->f[3].u);
wr32(c, (RW(4) + 8), c->f[5].u);
wr32(c, (RW(4) + 12), c->f[4].u); return;
}

void F_0015FE30(Ctx *c) { /* func_0015FE30 */
ENTER(0x15fe30);
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
SET64(31, 0x15fe88); SET64(18, RD(5) + RD(0)); F_0014E7A0(c);
SET64(4, (s32)rd32(c, (RW(19) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15fe9c);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(28) + -32560)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_0015FF10; }
SET64(16, RD(0) + RD(0));
L_0015FEAC:;
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
SET64(31, 0x15fee0); SET32(4, RW(2) + RW(16)); F_0014E7A0(c);
SET64(2, (s32)rd32(c, (RW(19) + 100)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15fef8);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(28) + -32560)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 224); if (t) { POLL(); goto L_0015FEAC; } }
L_0015FF10:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0015FF30(Ctx *c) { /* func_0015FF30 */
ENTER(0x15ff30);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
SET64(17, (s32)rd32(c, (RW(4) + 100)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_0015FFC8; }
L_0015FF58:;
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
{ u32 t = RW(25); SET64(31, 0x15ffb4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 224); if (t) { POLL(); goto L_0015FF58; } }
L_0015FFC8:;
SET64(4, (s32)rd32(c, (RW(18) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x15ffdc);  rt_call(c, t); }
c->f[12].u = rd32(c, (RW(18) + 76));
SET64(31, 0x15ffe8); SET32(4, RW(18) + 48); F_00162CD0(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_00160000(Ctx *c) { /* func_00160000 */
ENTER(0x160000);
SET32(2, RW(0) + 1); return;
}

void F_00160010(Ctx *c) { /* func_00160010 */
ENTER(0x160010);
 return;
}

void F_00160020(Ctx *c) { /* func_00160020 */
ENTER(0x160020);
 return;
}

static void B_00160030(Ctx *c, u32 entry) { /* func_00160030 */
ENTER(entry);
switch (entry) { case 0x160034: goto L_00160034; case 0x160038: goto L_00160038; case 0x160058: goto L_00160058; }
SET32(29, RW(29) + -32);
L_00160034:;
wr64(c, (RW(29) + 16), RD(31));
L_00160038:;
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 96), RW(0)); goto L_00160060; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16005c); SET32(5, RW(0) + 1); rt_call(c, t); }
if (0) { L_00160058:; SET32(5, RW(0) + 1); }
wr32(c, (RW(16) + 96), RW(0));
L_00160060:;
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 100)));
SET64(31, 0x160070); SET32(5, RW(5) + -18048); F_001022C0(c);
wr32(c, (RW(16) + 100), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}
void F_00160030(Ctx *c) { B_00160030(c, 0x160030); }
void F_00160034(Ctx *c) { B_00160030(c, 0x160034); }
void F_00160038(Ctx *c) { B_00160030(c, 0x160038); }
void F_00160058(Ctx *c) { B_00160030(c, 0x160058); }

static void B_00160090(Ctx *c, u32 entry) { /* func_00160090 */
ENTER(entry);
switch (entry) { case 0x160194: goto L_00160194; case 0x1601cc: goto L_001601CC; }
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
SET64(31, 0x1600ec); wr128(c, (RW(16) + 48) & ~15u, &c->r[2]); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00160100; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x160100); SET32(5, RW(0) + 1); F_0014C680(c);
L_00160100:;
wr32(c, (RW(16) + 96), RW(17));
SET64(5, rd16(c, (RW(28) + -32560)));
SET64(31, 0x160110); SET64(4, RD(17) + RD(0)); F_0014C3D0(c);
SET64(18, (s32)rd32(c, (RW(28) + -32560)));
SET64(17, RD(0) + RD(0));
SET32(2, RW(18) << 3);
SET32(2, RW(2) - RW(18));
SET32(2, RW(2) << 5);
SET64(31, 0x16012c); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_0016015C; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(8, RD(18) + RD(0));
SET32(17, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + -17712);
SET32(6, RW(6) + -18048);
SET64(31, 0x160158); SET32(7, RW(0) + 224); F_00102580(c);
SET64(19, RD(2) + RD(0));
L_0016015C:;
wr32(c, (RW(16) + 100), RW(19));
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00160198; }
SET64(17, RD(0) + RD(0));
L_00160170:;
SET64(2, (s32)rd32(c, (RW(16) + 100)));
SET32(5, RW(0) + 4);
SET64(31, 0x160180); SET32(4, RW(2) + RW(17)); F_0014B840(c);
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 224); if (t) { POLL(); goto L_00160170; } }
L_00160194:;
L_00160198:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 112), RW(0));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 124), RW(2));
wr32(c, (RW(29) + 120), RW(0));
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x1601c0); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
L_001601CC:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}
void F_00160090(Ctx *c) { B_00160090(c, 0x160090); }
void F_00160194(Ctx *c) { B_00160090(c, 0x160194); }
void F_001601CC(Ctx *c) { B_00160090(c, 0x1601cc); }

void F_001601E0(Ctx *c) { /* func_001601E0 */
ENTER(0x1601e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
{ int t = RSD(2) <= 0; SET64(9, RD(0) + RD(0)); if (t) goto L_00160288; }
c->f[3].u = RW(0);
SET64(2, RD(9) & 0xffff);
L_001601FC:;
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
if (RD(2) != RD(0)) { SET64(2, RD(9) & 0xffff); { POLL(); goto L_001601FC; } }
L_00160288:;
SET64(4, (s32)rd32(c, (RW(4) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x16029c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001602B0(Ctx *c) { /* func_001602B0 */
ENTER(0x1602b0);
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
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00160428; }
L_001602E8:;
SET64(6, (s64)(s32)0x3f800000);
SET64(5, RD(0) + RD(0));
c->f[1].u = RW(6);
SET64(4, RD(16) & 0x1);
SET64(6, (s64)(s32)0x40000000);
SET32(3, RSW(16) >> 1);
SET32(2, RW(0) + -2);
c->f[0].u = RW(6);
L_00160308:;
{ int t = RD(4) != RD(0);  if (t) goto L_00160350; }
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
c->f[2].f = fpu(F(2) + F(3)); goto L_001603A8;
L_00160350:;
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
{ int t = RD(6) != RD(0); c->f[2].f = fpu(F(2) + F(3)); if (t) goto L_001603A0; }
c->f[4].f = fpu(F(4) - F(1)); goto L_001603A8;
L_001603A0:;
c->f[4].f = fpu(F(4) + F(1));
L_001603A8:;
SET64(6, RD(5) & 0x2);
{ int t = RD(6) != RD(0);  if (t) goto L_001603C0; }
c->f[2].f = fpu(F(2) - F(0)); goto L_001603C8;
L_001603C0:;
c->f[2].f = fpu(F(2) + F(0));
L_001603C8:;
SET64(7, (s32)rd32(c, (RW(17) + 160)));
SET64(6, RD(5) & 0xffff);
SET32(8, RW(6) << 3);
SET32(5, RW(5) + 1);
SET32(7, RW(7) + RW(8));
SET64(6, RSD(5) < (s64)4);
wr32(c, (RW(7) + 0), c->f[4].u);
SET64(7, (s32)rd32(c, (RW(17) + 160)));
SET32(7, RW(7) + RW(8));
{ int t = RD(6) != RD(0); wr32(c, (RW(7) + 4), c->f[2].u); if (t) { POLL(); goto L_00160308; } }
SET64(2, (s64)(s32)0x44fe0000);
c->f[12].u = RW(2);
SET64(31, 0x160404); SET64(4, RD(17) + RD(0)); F_0014E7A0(c);
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x160414); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(28) + -32560)));
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 224); if (t) { POLL(); goto L_001602E8; } }
L_00160428:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_00160450(Ctx *c) { /* func_00160450 */
ENTER(0x160450);
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
{ int t = RSD(2) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_001604E8; }
L_0016048C:;
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
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 4); if (t) { POLL(); goto L_0016048C; } }
L_001604E8:;
SET64(4, (s32)rd32(c, (RW(4) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1604fc);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00160510(Ctx *c) { /* func_00160510 */
ENTER(0x160510);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(6) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00160530; }
SET64(6, RD(16) + RD(0));
L_00160530:;
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
{ int t = RSD(2) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_00160598; }
L_0016053C:;
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
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_0016053C; } }
L_00160598:;
SET64(25, (s32)rd32(c, (RW(17) + 80)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1605ac); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
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
{ u32 t = RW(25); SET64(31, 0x1605f8); SET32(7, RW(29) + 56); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_00160610(Ctx *c) { /* func_00160610 */
ENTER(0x160610);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16063c); SET64(16, RD(6) + RD(0)); rt_call(c, t); }
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
{ u32 t = RW(25); SET64(31, 0x160688); SET32(7, RW(29) + 72); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 80)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16069c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001606C0(Ctx *c) { /* func_001606C0 */
ENTER(0x1606c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00160710; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -25552);
wr32(c, (RW(17) + 80), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1606f8);  rt_call(c, t); }
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00160714; }
SET64(31, 0x160710); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_00160710:;
SET64(2, RD(17) + RD(0));
L_00160714:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00160730(Ctx *c) { /* func_00160730 */
ENTER(0x160730);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4d0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + -25440);
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
{ u32 t = RW(25); SET64(31, 0x1607ac); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -25552);
wr32(c, (RW(16) + 80), RW(3));
wr32(c, (RW(16) + 96), RW(0));
wr32(c, (RW(16) + 100), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001607E0(Ctx *c) { /* func_001607E0 */
ENTER(0x1607e0);
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

void F_00160830(Ctx *c) { /* func_00160830 */
ENTER(0x160830);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 96)));
SET64(31, 0x160844); SET64(4, (s32)rd32(c, (RW(2) + 12))); F_001419B0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void F_00160860(Ctx *c) { /* func_00160860 */
ENTER(0x160860);
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

void F_001608C0(Ctx *c) { /* func_001608C0 */
ENTER(0x1608c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 96)));
wr32(c, (RW(2) + 188), RW(5));
SET64(4, (s32)rd32(c, (RW(4) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1608e4);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001608F0(Ctx *c) { /* func_001608F0 */
ENTER(0x1608f0);
SET64(2, (s32)rd32(c, (RW(4) + 96)));
c->f[0].u = rd32(c, (RW(2) + 172)); return;
}

void F_00160900(Ctx *c) { /* func_00160900 */
ENTER(0x160900);
SET64(2, (s32)rd32(c, (RW(4) + 96)));
c->f[0].u = rd32(c, (RW(2) + 176)); return;
}

void F_00160910(Ctx *c) { /* func_00160910 */
ENTER(0x160910);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(28) + -32560)));
{ int t = RSD(2) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_00160978; }
SET64(2, (s32)rd32(c, (RW(4) + 96)));
L_00160928:;
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
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 96))); { POLL(); goto L_00160928; } }
L_00160978:;
SET64(4, (s32)rd32(c, (RW(4) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x16098c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001609A0(Ctx *c) { /* func_001609A0 */
ENTER(0x1609a0);
SET64(4, (s32)rd32(c, (RW(4) + 96)));
SET64(3, (s64)(s32)0x44000000);
c->f[0].u = RW(3);
SET64(4, (s32)rd32(c, (RW(4) + 160)));
c->f[2].u = rd32(c, (RW(4) + 24));
c->f[1].u = rd32(c, (RW(4) + 0));
c->f[1].f = fpu(F(2) - F(1));
c->fcc = F(1) < F(0);
{ int t = c->fcc; SET64(2, RD(0) + RD(0)); if (t) goto L_001609F0; }
c->f[2].u = rd32(c, (RW(4) + 28));
SET64(3, (s64)(s32)0x43e00000);
c->f[1].u = rd32(c, (RW(4) + 4));
c->f[0].u = RW(3);
c->f[1].f = fpu(F(2) - F(1));
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_001609F0; }
SET64(2, RD(0) + (s64)1);
L_001609F0:;
 return;
}

void F_00160A00(Ctx *c) { /* func_00160A00 */
ENTER(0x160a00);
SET64(2, rd8(c, (RW(4) + 1)));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1); return;
}

void F_00160A10(Ctx *c) { /* func_00160A10 */
ENTER(0x160a10);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, rd8(c, (RW(4) + 1)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00160AFC; }
c->f[3].u = rd32(c, (RW(16) + 4));
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->fcc = F(3) < F(0);
{ int t = c->fcc;  if (t) goto L_00160A54; }
wr32(c, (RW(16) + 4), c->f[0].u);
wr8(c, (RW(16) + 1), (u8)RW(0)); goto L_00160AFC;
L_00160A54:;
SET64(2, (s64)(s32)0x520000);
SET64(3, (s64)(s32)0x3d230000);
c->f[1].u = rd32(c, (RW(2) + 14864));
SET64(3, RD(3) | 0xd70a);
c->f[0].u = RW(0);
SET32(4, RW(29) + 48);
c->f[2].u = RW(3);
c->facc = fpu(F(0) + F(3));
c->f[20].f = fpu(c->facc + F(2) * F(1));
wr32(c, (RW(16) + 4), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x160a90); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
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
{ u32 t = RW(25); SET64(31, 0x160afc); SET32(5, RW(29) + 64); rt_call(c, t); }
L_00160AFC:;
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00160B10(Ctx *c) { /* func_00160B10 */
ENTER(0x160b10);
wr8(c, (RW(4) + 0), (u8)RW(5)); return;
}

void F_00160B20(Ctx *c) { /* func_00160B20 */
ENTER(0x160b20);
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
L_00160B48:;
SET64(3, RD(17) & 0xffff);
SET64(1, RSD(3) < (s64)3);
{ int t = RD(1) == RD(0);  if (t) goto L_00160B78; }
SET32(3, RW(3) << 2);
SET32(3, RW(19) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 192)));
{ int t = RD(3) == RD(0);  if (t) goto L_00160B78; }
SET64(3, RD(0) + (s64)1); goto L_00160B80;
L_00160B78:;
SET64(3, RD(0) + RD(0));
L_00160B80:;
{ int t = RD(3) == RD(0);  if (t) goto L_00160BA0; }
SET64(4, (s32)rd32(c, (RW(16) + 192)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x160b9c); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00160BA0:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00160B48; } }
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00160BD0(Ctx *c) { /* func_00160BD0 */
ENTER(0x160bd0);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 672) & ~15u, &c->r[3]);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 1264) & ~15u, &c->r[3]);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 1856) & ~15u, &c->r[3]); return;
}

void F_00160BF0(Ctx *c) { /* func_00160BF0 */
ENTER(0x160bf0);
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
L_00160C18:;
SET64(3, RD(17) & 0xffff);
SET64(1, RSD(3) < (s64)3);
{ int t = RD(1) == RD(0);  if (t) goto L_00160C48; }
SET32(3, RW(3) << 2);
SET32(3, RW(19) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 192)));
{ int t = RD(3) == RD(0);  if (t) goto L_00160C48; }
SET64(3, RD(0) + (s64)1); goto L_00160C50;
L_00160C48:;
SET64(3, RD(0) + RD(0));
L_00160C50:;
{ int t = RD(3) == RD(0);  if (t) goto L_00160C70; }
SET64(4, (s32)rd32(c, (RW(16) + 192)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x160c6c); c->f[12].u = rd32(c, (RW(18) + 0)); rt_call(c, t); }
L_00160C70:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00160C18; } }
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00160CA0(Ctx *c) { /* func_00160CA0 */
ENTER(0x160ca0);
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
L_00160CD8:;
SET64(3, RD(16) & 0xffff);
SET64(1, RSD(3) < (s64)3);
{ int t = RD(1) == RD(0);  if (t) goto L_00160D08; }
SET32(3, RW(3) << 2);
SET32(3, RW(17) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 192)));
{ int t = RD(3) == RD(0);  if (t) goto L_00160D08; }
SET64(3, RD(0) + (s64)1); goto L_00160D10;
L_00160D08:;
SET64(3, RD(0) + RD(0));
L_00160D10:;
{ int t = RD(3) == RD(0);  if (t) goto L_00160DC8; }
SET64(31, 0x160d20); SET32(4, RW(0) + 2272); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_00160DA8; }
SET32(4, RW(21) + 2236);
SET32(20, RW(0) + 1);
SET64(31, 0x160d38); wr32(c, (RW(21) + 256), RW(4)); F_00141AA0(c);
SET64(4, RD(21) + RD(0));
SET64(31, 0x160d44); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET64(31, 0x160d4c); SET32(4, RW(21) + 288); F_00240AE0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11552);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(21) + 276), RW(2));
SET32(6, RW(6) + -11428);
SET64(5, (s32)rd32(c, (RW(21) + 256)));
SET32(3, RW(3) + -11480);
SET32(2, RW(21) + 2236);
SET32(4, RW(21) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(21) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(21) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x160d8c); wr32(c, (RW(3) + 20), RW(2)); F_00160EA0(c);
SET64(31, 0x160d94); SET32(4, RW(21) + 1040); F_00160EA0(c);
SET64(31, 0x160d9c); SET32(4, RW(21) + 1632); F_00160EA0(c);
wr32(c, (RW(21) + 2224), RW(0));
wr32(c, (RW(21) + 2228), RW(0));
L_00160DA8:;
wr32(c, (RW(19) + 192), RW(21));
SET64(25, (s32)rd32(c, (RW(21) + 276)));
SET64(5, (s32)rd32(c, (RW(18) + 192)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x160dc0); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
 goto L_00160DD0;
L_00160DC8:;
wr32(c, (RW(19) + 192), RW(0));
L_00160DD0:;
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < (s64)3);
SET32(19, RW(19) + 4);
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_00160CD8; } }
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

void F_00160E10(Ctx *c) { /* func_00160E10 */
ENTER(0x160e10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00160E84; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11392);
wr32(c, (RW(17) + 144), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x160e48);  rt_call(c, t); }
SET32(4, RW(17) + 480);
SET64(31, 0x160e54); SET32(5, RW(0) + -1); F_002B1020(c);
SET32(4, RW(17) + 432);
SET64(31, 0x160e60); SET32(5, RW(0) + -1); F_002B13D0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x160e6c); SET64(5, RD(0) + RD(0)); F_002A2540(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00160E88; }
SET64(31, 0x160e84); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_00160E84:;
SET64(2, RD(17) + RD(0));
L_00160E88:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00160EA0(Ctx *c) { /* func_00160EA0 */
ENTER(0x160ea0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x160eb8); SET64(16, RD(4) + RD(0)); F_002A25B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(16) + 432);
SET32(2, RW(2) + -11392);
wr32(c, (RW(16) + 144), RW(2));
wr16(c, (RW(16) + 416), (u16)RW(0));
wr16(c, (RW(16) + 418), (u16)RW(0));
SET64(31, 0x160ed8); wr32(c, (RW(16) + 420), RW(0)); F_002B1430(c);
SET64(31, 0x160ee0); SET32(4, RW(16) + 480); F_002B1080(c);
wr16(c, (RW(16) + 576), (u16)RW(0));
SET64(2, RD(16) + RD(0));
wr8(c, (RW(16) + 578), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_00160F00(Ctx *c) { /* func_00160F00 */
ENTER(0x160f00);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(4) + RD(0));
L_00160F20:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(4) == RD(0);  if (t) goto L_00160F40; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x160f3c); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00160F40:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00160F20; } }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_00160F70(Ctx *c) { /* func_00160F70 */
ENTER(0x160f70);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(4) + RD(0));
L_00160F90:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(4) == RD(0);  if (t) goto L_00160FB0; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x160fac); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00160FB0:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00160F90; } }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_00160FE0(Ctx *c) { /* func_00160FE0 */
ENTER(0x160fe0);
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
{ u32 t = RW(25); SET64(31, 0x161014); SET32(5, RW(29) + 16); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_00161020(Ctx *c) { /* func_00161020 */
ENTER(0x161020);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(4) + RD(0));
L_00161040:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(4) == RD(0);  if (t) goto L_00161060; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x16105c); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00161060:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00161040; } }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_00161090(Ctx *c) { /* func_00161090 */
ENTER(0x161090);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(4) + RD(0));
L_001610B0:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(4) == RD(0);  if (t) goto L_001610D0; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1610cc); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_001610D0:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001610B0; } }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_00161100(Ctx *c) { /* func_00161100 */
ENTER(0x161100);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x16111c); SET64(16, RD(0) + RD(0)); F_001419B0(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET64(16, RD(0) + (s64)1); goto L_0016113C; }
{ int t = RD(2) == RD(0);  if (t) goto L_00161138; }
 goto L_0016113C;
L_00161138:;
SET64(16, RD(0) + (s64)1);
L_0016113C:;
if (RD(16) != RD(0)) { SET64(16, RD(0) + RD(0)); goto L_0016114C; }
SET64(2, RD(0) + RD(0)); goto L_0016118C;
L_0016114C:;
SET64(4, (s32)rd32(c, (RW(17) + 192)));
if (RD(4) == RD(0)) { SET32(16, RW(16) + 1); goto L_0016117C; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x161168);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00161178; }
SET64(2, RD(0) + RD(0)); goto L_0016118C;
L_00161178:;
SET32(16, RW(16) + 1);
L_0016117C:;
SET64(2, RSD(16) < (s64)3);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_0016114C; } }
SET32(2, RW(0) + 1);
L_0016118C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001611A0(Ctx *c) { /* func_001611A0 */
ENTER(0x1611a0);
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
L_001611D0:;
SET64(2, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(2) == RD(0);  if (t) goto L_00161268; }
{ int t = RD(19) != RD(17);  if (t) goto L_00161240; }
SET64(31, 0x1611ec); SET64(4, (s32)rd32(c, (RW(2) + 256))); F_001419B0(c);
SET32(3, RW(0) + 3);
{ int t = RD(2) == RD(3);  if (t) goto L_00161210; }
SET64(2, (s32)rd32(c, (RW(16) + 192)));
SET64(31, 0x161204); SET64(4, (s32)rd32(c, (RW(2) + 256))); F_001419B0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00161268; }
L_00161210:;
{ int t = RD(20) == RD(0); SET64(6, RD(20) + RD(0)); if (t) goto L_00161220; }
SET32(6, RW(20) + 32);
L_00161220:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x161234); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
 goto L_00161268;
L_00161240:;
SET64(31, 0x161248); SET64(4, (s32)rd32(c, (RW(2) + 256))); F_001419B0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_00161268; }
SET64(4, (s32)rd32(c, (RW(16) + 192)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x161268); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00161268:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001611D0; } }
SET64(31, 0x161280); SET64(4, RD(20) + RD(0)); F_001419B0(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { wr8(c, (RW(20) + 8), (u8)RW(0)); goto L_001612A0; }
SET64(31, 0x161294); SET64(4, RD(20) + RD(0)); F_001419B0(c);
if (RD(2) != RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_001612AC; }
wr8(c, (RW(20) + 8), (u8)RW(0));
L_001612A0:;
SET32(3, RW(0) + 1);
wr32(c, (RW(20) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 80)));
L_001612AC:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001612D0(Ctx *c) { /* func_001612D0 */
ENTER(0x1612d0);
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
L_001612F8:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(4) == RD(0);  if (t) goto L_00161318; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x161314); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00161318:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001612F8; } }
wr8(c, (RW(19) + 8), (u8)RW(18));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00161350(Ctx *c) { /* func_00161350 */
ENTER(0x161350);
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
L_00161378:;
SET64(2, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(2) == RD(0);  if (t) goto L_001613B0; }
SET64(31, 0x16138c); SET64(4, (s32)rd32(c, (RW(2) + 256))); F_001419B0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_001613B0; }
SET64(4, (s32)rd32(c, (RW(16) + 192)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1613ac); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_001613B0:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00161378; } }
SET64(31, 0x1613c8); SET64(4, RD(19) + RD(0)); F_001419B0(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(4, (s32)rd32(c, (RW(19) + 204))); goto L_00161400; }
SET64(31, 0x1613dc); SET64(4, RD(19) + RD(0)); F_001419B0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_001613FC; }
SET32(2, RW(0) + 2);
SET64(31, 0x1613f4); wr32(c, (RW(19) + 0), RW(2)); F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
wr32(c, (RW(19) + 12), RW(3));
L_001613FC:;
SET64(4, (s32)rd32(c, (RW(19) + 204)));
L_00161400:;
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_00161424; }
{ int t = RD(19) == RD(0); SET64(5, RD(19) + RD(0)); if (t) goto L_00161414; }
SET32(5, RW(19) + 32);
L_00161414:;
SET64(31, 0x16141c);  F_00240930(c);
wr32(c, (RW(19) + 204), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
L_00161424:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00161440(Ctx *c) { /* func_00161440 */
ENTER(0x161440);
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
{ int t = RD(4) == RD(0); SET64(16, RD(7) + RD(0)); if (t) goto L_00161484; }
{ int t = RD(19) == RD(0); SET64(5, RD(19) + RD(0)); if (t) goto L_0016147C; }
SET32(5, RW(5) + 32);
L_0016147C:;
SET64(31, 0x161484);  F_00240930(c);
L_00161484:;
{ int t = RD(16) == RD(0);  if (t) goto L_00161494; }
wr32(c, (RW(19) + 204), RW(16)); goto L_001614A0;
L_00161494:;
SET64(16, (s64)(s32)0x540000);
SET32(16, RW(16) + -27024);
wr32(c, (RW(19) + 204), RW(16));
L_001614A0:;
{ int t = RD(19) == RD(0); SET64(5, RD(19) + RD(0)); if (t) goto L_001614AC; }
SET32(5, RW(19) + 32);
L_001614AC:;
SET64(31, 0x1614b4); SET64(4, (s32)rd32(c, (RW(19) + 204))); F_00240980(c);
SET64(5, RD(18) & 0xffff);
SET64(6, RD(17) + RD(0));
SET64(31, 0x1614c4); SET64(4, RD(19) + RD(0)); F_001611A0(c);
SET64(31, 0x1614cc); SET64(4, RD(19) + RD(0)); F_001419B0(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { wr8(c, (RW(19) + 8), (u8)RW(0)); goto L_001614EC; }
SET64(31, 0x1614e0); SET64(4, RD(19) + RD(0)); F_001419B0(c);
if (RD(2) != RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_001614F8; }
wr8(c, (RW(19) + 8), (u8)RW(0));
L_001614EC:;
SET32(3, RW(0) + 1);
wr32(c, (RW(19) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 64)));
L_001614F8:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00161510(Ctx *c) { /* func_00161510 */
ENTER(0x161510);
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
L_00161538:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(4) == RD(0);  if (t) goto L_00161558; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(5, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x161558); SET64(6, RD(18) + RD(0)); rt_call(c, t); }
L_00161558:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00161538; } }
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00161590(Ctx *c) { /* func_00161590 */
ENTER(0x161590);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_001615B0:;
SET64(4, (s32)rd32(c, (RW(16) + 192)));
{ int t = RD(4) == RD(0);  if (t) goto L_001615D0; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1615cc); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001615D0:;
SET32(17, RW(17) + 1);
wr32(c, (RW(16) + 192), RW(0));
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001615B0; } }
wr32(c, (RW(18) + 204), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_00161600(Ctx *c) { /* func_00161600 */
ENTER(0x161600);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00161808; }
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11552);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 276), RW(2));
SET32(6, RW(6) + -11428);
SET64(5, (s32)rd32(c, (RW(17) + 256)));
SET32(3, RW(3) + -11480);
SET32(2, RW(17) + 2236);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(17) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x161664);  rt_call(c, t); }
SET32(4, RW(17) + 1632);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 1040); goto L_001616B4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11392);
wr32(c, (RW(17) + 1776), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x16168c);  rt_call(c, t); }
SET32(4, RW(17) + 2112);
SET64(31, 0x161698); SET32(5, RW(0) + -1); F_002B1020(c);
SET32(4, RW(17) + 2064);
SET64(31, 0x1616a4); SET32(5, RW(0) + -1); F_002B13D0(c);
SET32(4, RW(17) + 1632);
SET64(31, 0x1616b0); SET64(5, RD(0) + RD(0)); F_002A2540(c);
SET32(4, RW(17) + 1040);
L_001616B4:;
if (RD(4) == RD(0)) { SET32(4, RW(17) + 448); goto L_00161700; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11392);
wr32(c, (RW(17) + 1184), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1616d8);  rt_call(c, t); }
SET32(4, RW(17) + 1520);
SET64(31, 0x1616e4); SET32(5, RW(0) + -1); F_002B1020(c);
SET32(4, RW(17) + 1472);
SET64(31, 0x1616f0); SET32(5, RW(0) + -1); F_002B13D0(c);
SET32(4, RW(17) + 1040);
SET64(31, 0x1616fc); SET64(5, RD(0) + RD(0)); F_002A2540(c);
SET32(4, RW(17) + 448);
L_00161700:;
if (RD(4) == RD(0)) { SET32(4, RW(17) + 288); goto L_0016174C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11392);
wr32(c, (RW(17) + 592), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x161724);  rt_call(c, t); }
SET32(4, RW(17) + 928);
SET64(31, 0x161730); SET32(5, RW(0) + -1); F_002B1020(c);
SET32(4, RW(17) + 880);
SET64(31, 0x16173c); SET32(5, RW(0) + -1); F_002B13D0(c);
SET32(4, RW(17) + 448);
SET64(31, 0x161748); SET64(5, RD(0) + RD(0)); F_002A2540(c);
SET32(4, RW(17) + 288);
L_0016174C:;
SET64(31, 0x161754); SET64(5, RD(0) + RD(0)); F_002409D0(c);
{ int t = RD(17) == RD(0);  if (t) goto L_001617C0; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -27472);
SET32(5, RW(5) + -27400);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(17) + 280);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x161798); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_001617C0; }
SET32(4, RW(17) + 32);
SET64(31, 0x1617ac); SET32(5, RW(0) + -1); F_002A5950(c);
{ int t = RD(17) == RD(0);  if (t) goto L_001617C0; }
SET32(4, RW(17) + 4);
SET64(31, 0x1617c0); SET64(5, RD(0) + RD(0)); F_002AB240(c);
L_001617C0:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_001617F4; }
SET32(4, RW(17) + 2236);
{ int t = RD(4) == RD(0);  if (t) goto L_001617F0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 2252), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1617f0);  rt_call(c, t); }
L_001617F0:;
SET64(2, RD(16) << 48);
L_001617F4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016180C; }
SET64(31, 0x161808); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_00161808:;
SET64(2, RD(17) + RD(0));
L_0016180C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00161820(Ctx *c) { /* func_00161820 */
ENTER(0x161820);
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
L_00161860:;
SET64(3, (s32)rd32(c, (RW(19) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_00161928; }
SET64(31, 0x161874); SET32(4, RW(0) + 2272); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_001618F8; }
SET32(4, RW(21) + 2236);
SET32(20, RW(0) + 1);
SET64(31, 0x16188c); wr32(c, (RW(21) + 256), RW(4)); F_00141AA0(c);
SET64(4, RD(21) + RD(0));
SET64(31, 0x161898); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET64(31, 0x1618a0); SET32(4, RW(21) + 288); F_00240AE0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11552);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(21) + 276), RW(2));
SET32(6, RW(6) + -11428);
SET64(5, (s32)rd32(c, (RW(21) + 256)));
SET32(3, RW(3) + -11480);
SET32(2, RW(21) + 2236);
SET32(4, RW(21) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(21) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(21) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x1618e0); wr32(c, (RW(3) + 20), RW(2)); F_00160EA0(c);
SET64(31, 0x1618e8); SET32(4, RW(21) + 1040); F_00160EA0(c);
SET64(31, 0x1618f0); SET32(4, RW(21) + 1632); F_00160EA0(c);
wr32(c, (RW(21) + 2224), RW(0));
wr32(c, (RW(21) + 2228), RW(0));
L_001618F8:;
wr32(c, (RW(18) + 192), RW(21));
SET64(25, (s32)rd32(c, (RW(21) + 276)));
SET64(4, RD(21) + RD(0));
SET64(5, (s32)rd32(c, (RW(19) + 0)));
SET64(6, RD(17) + RD(0));
SET64(7, RD(22) + RD(0));
SET64(8, RD(23) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x161920); SET32(9, RW(0) + 1); rt_call(c, t); }
 goto L_00161930;
L_00161928:;
wr32(c, (RW(18) + 192), RW(0));
L_00161930:;
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < (s64)3);
SET32(19, RW(19) + 4);
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_00161860; } }
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

void F_00161970(Ctx *c) { /* func_00161970 */
ENTER(0x161970);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001619F8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -25328);
SET32(2, RW(2) + -25292);
wr32(c, (RW(17) + 16), RW(3));
wr32(c, (RW(17) + 176), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1619b4);  rt_call(c, t); }
SET32(4, RW(17) + 32);
SET64(31, 0x1619c0); SET64(5, RD(0) + RD(0)); F_002409D0(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_001619E4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x1619e0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_001619E4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001619FC; }
SET64(31, 0x1619f8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001619F8:;
SET64(2, RD(17) + RD(0));
L_001619FC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00161A10(Ctx *c) { /* func_00161A10 */
ENTER(0x161a10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x161a24); SET64(16, RD(4) + RD(0)); F_00141AA0(c);
SET64(31, 0x161a2c); SET32(4, RW(16) + 32); F_00240AE0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -25328);
SET32(3, RW(3) + -25292);
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

void F_00161A70(Ctx *c) { /* func_00161A70 */
ENTER(0x161a70);
SET32(4, RW(4) + -32); { F_00161970(c); return; }
}

void F_00161A80(Ctx *c) { /* func_00161A80 */
ENTER(0x161a80);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00161C00; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -25216);
SET32(3, RW(3) + -25200);
wr32(c, (RW(17) + 176), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 196), RW(3));
SET32(2, RW(2) + -25160);
wr32(c, (RW(17) + 1072), RW(2));
SET64(31, 0x161acc); SET64(4, (s32)rd32(c, (RW(17) + 200))); F_002AAE80(c);
wr8(c, (RW(17) + 228), (u8)RW(0));
SET64(31, 0x161ad8); SET64(4, (s32)rd32(c, (RW(17) + 560))); F_002AAE80(c);
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00161AE4; }
SET32(5, RW(17) + 192);
L_00161AE4:;
SET64(31, 0x161aec); SET64(4, (s32)rd32(c, (RW(28) + -30060))); F_002A0330(c);
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00161AF8; }
SET32(5, RW(17) + 192);
L_00161AF8:;
SET64(31, 0x161b00); SET64(4, (s32)rd32(c, (RW(28) + -30060))); F_002A0330(c);
SET32(2, RW(17) + 928);
{ int t = RD(2) == RD(0);  if (t) goto L_00161B50; }
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(17) + 1168);
SET32(3, RW(3) + -30800);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 1072), RW(3)); if (t) goto L_00161B44; }
SET32(4, RW(17) + 1200);
SET64(31, 0x161b2c); SET32(5, RW(0) + -1); F_002A5950(c);
SET32(2, RW(17) + 1168);
if (RD(2) == RD(0)) { SET32(4, RW(17) + 928); goto L_00161B48; }
SET32(4, RW(17) + 1172);
SET64(31, 0x161b44); SET64(5, RD(0) + RD(0)); F_002AB240(c);
L_00161B44:;
SET32(4, RW(17) + 928);
L_00161B48:;
SET64(31, 0x161b50); SET64(5, RD(0) + RD(0)); F_002A3600(c);
L_00161B50:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_00161BEC; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -25136);
SET32(2, RW(2) + -25120);
wr32(c, (RW(17) + 176), RW(3));
wr32(c, (RW(17) + 196), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 736)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x161b80); SET32(4, RW(17) + 672); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(17) + 912)));
if (RD(18) == RD(0)) { SET32(4, RW(17) + 784); goto L_00161BBC; }
SET32(4, RW(18) + 128);
SET64(31, 0x161b98); SET32(5, RW(0) + -1); F_002B13D0(c);
SET32(4, RW(18) + 80);
SET64(31, 0x161ba4); SET32(5, RW(0) + -1); F_002B13D0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x161bb0); SET32(5, RW(0) + -1); F_002A76F0(c);
SET64(31, 0x161bb8); SET64(4, RD(18) + RD(0)); F_001004B0(c);
SET32(4, RW(17) + 784);
L_00161BBC:;
SET32(5, RW(0) + -1);
SET64(31, 0x161bc8); wr32(c, (RW(17) + 912), RW(0)); F_0015CDD0(c);
SET32(4, RW(17) + 672);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_00161BE0; }
SET64(31, 0x161bdc); SET32(5, RW(0) + -1); F_0014AEC0(c);
SET64(4, RD(17) + RD(0));
L_00161BE0:;
SET64(31, 0x161be8); SET64(5, RD(0) + RD(0)); F_002A1130(c);
SET64(2, RD(16) << 48);
L_00161BEC:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00161C04; }
SET64(31, 0x161c00); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_00161C00:;
SET64(2, RD(17) + RD(0));
L_00161C04:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_00161C20(Ctx *c) { /* func_00161C20 */
ENTER(0x161c20);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(6, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(18, RD(7) + RD(0));
SET64(5, (s32)rd32(c, (RW(28) + -30060)));
SET64(17, RD(8) + RD(0));
SET64(31, 0x161c54); SET64(16, RD(4) + RD(0)); F_002A11D0(c);
SET32(4, RW(16) + 672);
SET64(31, 0x161c60); SET32(5, RW(0) + 1); F_0014AFB0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -25136);
SET32(2, RW(2) + -25120);
wr32(c, (RW(16) + 176), RW(3));
SET32(4, RW(16) + 784);
SET64(31, 0x161c80); wr32(c, (RW(16) + 196), RW(2)); F_0015CE20(c);
SET64(2, (s64)(s32)0x40490000);
SET64(6, RD(18) & 0xffff);
SET64(3, RD(2) | 0xfdb);
wr32(c, (RW(16) + 912), RW(0));
SET64(2, (s64)(s32)0x490000);
SET32(18, RW(16) + 928);
c->f[2].u = rd32(c, (RW(2) + -256));
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
SET64(31, 0x161ce4); wr32(c, (RW(16) + 916), c->f[0].u); F_002A36E0(c);
SET32(17, RW(18) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(17) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x161cfc); wr32(c, (RW(18) + 240), RW(4)); F_002AB2A0(c);
SET64(31, 0x161d04); SET32(4, RW(17) + 32); F_002A59A0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 240), RW(17));
SET32(2, RW(2) + -30800);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 144), RW(2));
SET64(31, 0x161d20); SET32(5, RW(18) + 272); F_002A35D0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -25216);
SET32(3, RW(3) + -25200);
wr32(c, (RW(16) + 176), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 196), RW(3));
SET32(2, RW(2) + -25160);
SET64(31, 0x161d48); wr32(c, (RW(16) + 1072), RW(2)); F_002BF970(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(17, (s32)c->f[0].u);
SET64(31, 0x161d58);  F_002BF9A0(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 80);
wr32(c, (RW(29) + 92), RW(17));
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 84), RW(0));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x161d7c); wr32(c, (RW(29) + 88), RW(2)); F_00162290(c);
SET64(2, (s32)rd32(c, (RW(16) + 236)));
SET64(17, RD(16) + RD(0));
{ int t = RD(16) == RD(0); wr8(c, (RW(2) + 324), (u8)RW(0)); if (t) goto L_00161D90; }
SET32(17, RW(16) + 192);
L_00161D90:;
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(18, (s32)rd32(c, (RW(16) + 912)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x161da4); SET32(5, RW(18) + 128); F_002AB090(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x161db4); SET64(5, RD(18) + RD(0)); F_002AB090(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x161dc4); SET32(5, RW(18) + 80); F_002AB090(c);
SET64(2, (s64)(s32)0x3eb20000);
wr8(c, (RW(16) + 228), (u8)RW(0));
SET64(2, RD(2) | 0xb8c3);
wr32(c, (RW(16) + 916), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x161de4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x161df4); SET32(5, RW(16) + 928); F_002AB090(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_00161E20(Ctx *c) { /* func_00161E20 */
ENTER(0x161e20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00161E5C; }
SET64(31, 0x161e44); SET32(5, RW(0) + -1); F_0014AEC0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00161E60; }
SET64(31, 0x161e5c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_00161E5C:;
SET64(2, RD(17) + RD(0));
L_00161E60:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00161E80(Ctx *c) { /* func_00161E80 */
ENTER(0x161e80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x161e90); SET64(4, (s32)rd32(c, (RW(4) + 912))); F_002A7670(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00161EA0(Ctx *c) { /* func_00161EA0 */
ENTER(0x161ea0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x161eb0); SET32(4, RW(4) + 592); F_002A2070(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00161EC0(Ctx *c) { /* func_00161EC0 */
ENTER(0x161ec0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(18, (s32)rd32(c, (RW(5) + 248)));
c->f[20].u = rd32(c, (RW(5) + 916));
SET64(17, (s32)rd32(c, (RW(5) + 252)));
SET64(31, 0x161eec); SET64(16, RD(4) + RD(0)); F_002BF9B0(c);
c->f[2].u = RW(18);
SET64(2, (s64)(s32)0x40000000);
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[0].f = fpu(F(2) * F(0));
c->f[12].u = c->f[20].u;
c->f[1].u = RW(2);
c->f[20].f = fpu_div(F(0), F(1));
SET64(31, 0x161f1c);  F_0011F7D8(c);
c->f[12].f = fpu_div(F(20), F(0));
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x47800000);
SET32(4, RW(29) + 80);
c->f[0].u = RW(18);
c->f[13].f = (f32)(s32)c->f[0].u;
c->f[0].u = RW(17);
c->f[15].u = RW(3);
c->f[16].u = RW(2);
SET64(31, 0x161f54); c->f[14].f = (f32)(s32)c->f[0].u; F_002A38D0(c);
SET64(31, 0x161f5c); SET64(4, RD(16) + RD(0)); F_002AC130(c);
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

void F_00161FA0(Ctx *c) { /* func_00161FA0 */
ENTER(0x161fa0);
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
SET64(2, (s32)rd32(c, (RW(28) + -30060)));
SET32(5, RW(3) + 2048);
SET32(4, RW(2) + 48);
SET64(2, (s32)rd32(c, (RW(2) + 56)));
SET32(3, RW(2) - RW(19));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_00161FFC; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_00161FFC:;
SET32(17, RW(6) - RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(3, RW(2) - RW(18));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_00162018; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_00162018:;
c->f[20].u = rd32(c, (RW(20) + 916));
SET64(31, 0x162024); SET32(16, RW(5) - RW(2)); F_002BF9B0(c);
c->f[2].u = RW(19);
SET64(2, (s64)(s32)0x40000000);
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[0].f = fpu(F(2) * F(0));
c->f[12].u = c->f[20].u;
c->f[1].u = RW(2);
c->f[20].f = fpu_div(F(0), F(1));
SET64(31, 0x162054);  F_0011F7D8(c);
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
{ u32 t = RW(25); SET64(31, 0x1620dc); c->f[19].u = c->f[13].u; rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 112)));
c->f[20].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 96) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_00162100(Ctx *c) { /* func_00162100 */
ENTER(0x162100);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 916), c->f[12].u);
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x16211c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00162130(Ctx *c) { /* func_00162130 */
ENTER(0x162130);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
SET64(31, 0x16215c); wr128(c, (RW(29) + 80) & ~15u, &c->r[2]); F_002BF9A0(c);
c->f[1].u = rd32(c, (RW(29) + 88));
c->f[1].f = (f32)(s32)c->f[1].u;
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s32)rd32(c, (RW(28) + -30060))); goto L_0016217C; }
SET64(31, 0x162178);  F_002BF970(c);
SET64(2, (s32)rd32(c, (RW(28) + -30060)));
L_0016217C:;
SET64(16, (s32)rd32(c, (RW(2) + 60)));
{ int t = RD(18) == RD(0); SET64(17, (s32)rd32(c, (RW(2) + 56))); if (t) goto L_001621A4; }
SET32(4, RW(19) + 192);
SET64(31, 0x162194); SET32(5, RW(29) + 80); F_002A0780(c);
SET64(25, (s32)rd32(c, (RW(19) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1621a4); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
L_001621A4:;
SET64(3, (s32)rd32(c, (RW(29) + 80)));
if (RSD(3) >= 0) { SET64(2, (s32)rd32(c, (RW(29) + 88))); goto L_001621CC; }
SET64(2, (s32)rd32(c, (RW(29) + 88)));
wr32(c, (RW(29) + 80), RW(0));
SET32(2, RW(2) + RW(3));
SET64(3, RD(0) << 32);
wr32(c, (RW(29) + 88), RW(2));
SET64(3, RSD(3) >> 32);
SET64(2, (s32)rd32(c, (RW(29) + 88)));
L_001621CC:;
SET64(3, RD(3) << 32);
SET64(3, RSD(3) >> 32);
SET32(2, RW(3) + RW(2));
SET64(1, RSD(17) < RSD(2));
if (RD(1) == RD(0)) { SET64(3, (s32)rd32(c, (RW(29) + 84))); goto L_001621F0; }
SET32(2, RW(17) - RW(3));
wr32(c, (RW(29) + 88), RW(2));
SET64(3, (s32)rd32(c, (RW(29) + 84)));
L_001621F0:;
if (RSD(3) >= 0) { SET64(2, (s32)rd32(c, (RW(29) + 92))); goto L_00162214; }
SET64(2, (s32)rd32(c, (RW(29) + 92)));
wr32(c, (RW(29) + 84), RW(0));
SET32(2, RW(2) + RW(3));
SET64(3, RD(0) << 32);
wr32(c, (RW(29) + 92), RW(2));
SET64(3, RSD(3) >> 32);
SET64(2, (s32)rd32(c, (RW(29) + 92)));
L_00162214:;
SET64(3, RD(3) << 32);
SET64(3, RSD(3) >> 32);
SET32(2, RW(3) + RW(2));
SET64(1, RSD(16) < RSD(2));
if (RD(1) == RD(0)) { SET64(2, (s32)rd32(c, (RW(29) + 88))); goto L_00162238; }
SET32(2, RW(16) - RW(3));
wr32(c, (RW(29) + 92), RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 88)));
L_00162238:;
if (RSD(2) > 0) { SET64(2, (s32)rd32(c, (RW(29) + 92))); goto L_0016224C; }
SET32(2, RW(0) + -1);
wr32(c, (RW(29) + 80), RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 92)));
L_0016224C:;
if (RSD(2) > 0) { SET32(4, RW(19) + 192); goto L_00162260; }
SET32(2, RW(0) + -1);
wr32(c, (RW(29) + 84), RW(2));
SET32(4, RW(19) + 192);
L_00162260:;
SET64(31, 0x162268); SET32(5, RW(29) + 80); F_002A0780(c);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_00162290(Ctx *c) { /* func_00162290 */
ENTER(0x162290);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 196)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1622bc); SET32(4, RW(16) + 192); rt_call(c, t); }
SET64(5, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x1622cc); SET32(6, RW(0) + 1); F_00162130(c);
SET64(2, (s32)rd32(c, (RW(16) + 236)));
SET32(4, RW(0) + 192);
SET64(31, 0x1622dc); wr8(c, (RW(2) + 324), (u8)RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016232C; }
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
SET64(31, 0x16231c); wr32(c, (RW(29) + 76), RW(0)); F_002A7760(c);
SET64(31, 0x162324); SET32(4, RW(17) + 80); F_002B1430(c);
SET64(31, 0x16232c); SET32(4, RW(17) + 128); F_002B1430(c);
L_0016232C:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(16) + 240);
SET64(31, 0x16233c); wr32(c, (RW(16) + 912), RW(17)); F_00162600(c);
SET64(31, 0x162344); SET32(4, RW(16) + 672); F_0014AE40(c);
SET32(5, RW(16) + 672);
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 200))); goto L_00162358; }
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET64(4, (s32)rd32(c, (RW(16) + 200)));
L_00162358:;
SET64(31, 0x162360); SET64(6, (s32)rd32(c, (RW(4) + 16))); F_002AB090(c);
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_0016236C; }
SET32(17, RW(16) + 192);
L_0016236C:;
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(18, (s32)rd32(c, (RW(16) + 912)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x162380); SET32(5, RW(18) + 128); F_002AB090(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x162390); SET64(5, RD(18) + RD(0)); F_002AB090(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1623a0); SET32(5, RW(18) + 80); F_002AB090(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 228), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001623C0(Ctx *c) { /* func_001623C0 */
ENTER(0x1623c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(17) + 736)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1623e4); SET32(4, RW(17) + 672); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(17) + 912)));
if (RD(16) == RD(0)) { wr32(c, (RW(17) + 912), RW(0)); goto L_00162420; }
SET32(4, RW(16) + 128);
SET64(31, 0x1623fc); SET32(5, RW(0) + -1); F_002B13D0(c);
SET32(4, RW(16) + 80);
SET64(31, 0x162408); SET32(5, RW(0) + -1); F_002B13D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x162414); SET32(5, RW(0) + -1); F_002A76F0(c);
SET64(31, 0x16241c); SET64(4, RD(16) + RD(0)); F_001004B0(c);
wr32(c, (RW(17) + 912), RW(0));
L_00162420:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00162440(Ctx *c) { /* func_00162440 */
ENTER(0x162440);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x162458); SET64(4, (s32)rd32(c, (RW(4) + 200))); F_002AAE80(c);
wr8(c, (RW(16) + 228), (u8)RW(0));
SET64(31, 0x162464); SET64(4, (s32)rd32(c, (RW(16) + 560))); F_002AAE80(c);
if (RD(16) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -30060))); goto L_00162474; }
SET32(16, RW(16) + 192);
SET64(4, (s32)rd32(c, (RW(28) + -30060)));
L_00162474:;
SET64(31, 0x16247c); SET64(5, RD(16) + RD(0)); F_002A0330(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_00162490(Ctx *c) { /* func_00162490 */
ENTER(0x162490);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 912)));
SET64(31, 0x1624a4); wr32(c, (RW(4) + 176), RW(5)); F_002A7610(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001624B0(Ctx *c) { /* func_001624B0 */
ENTER(0x1624b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
{ int t = RD(5) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_0016250C; }
{ int t = RD(4) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001624D0; }
SET32(16, RW(16) + 192);
L_001624D0:;
SET64(17, (s32)rd32(c, (RW(4) + 912)));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1624e4); SET32(5, RW(17) + 128); F_002AB090(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1624f4); SET64(5, RD(17) + RD(0)); F_002AB090(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x162504); SET32(5, RW(17) + 80); F_002AB090(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_00162544;
L_0016250C:;
{ int t = RD(4) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00162518; }
SET32(16, RW(16) + 192);
L_00162518:;
SET64(17, (s32)rd32(c, (RW(4) + 912)));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x162528); SET32(5, RW(17) + 128); F_002AAEF0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x162534); SET64(5, RD(17) + RD(0)); F_002AAEF0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x162540); SET32(5, RW(17) + 80); F_002AAEF0(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_00162544:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00162560(Ctx *c) { /* func_00162560 */
ENTER(0x162560);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(0); SET64(16, (s32)rd32(c, (RW(4) + 912))); if (t) goto L_001625B4; }
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 80);
SET64(6, RD(5) + RD(0));
SET32(7, RW(0) + 128);
SET64(31, 0x16258c); SET64(8, RD(0) + RD(0)); F_002B1350(c);
SET32(4, RW(16) + 80);
SET64(5, RD(0) + RD(0));
SET64(31, 0x16259c); SET64(6, RD(0) + RD(0)); F_002B1310(c);
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 80);
SET64(31, 0x1625ac); SET64(6, RD(5) + RD(0)); F_002B12E0(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_001625F0;
L_001625B4:;
SET32(4, RW(16) + 80);
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET32(7, RW(0) + 128);
SET64(31, 0x1625cc); SET32(8, RW(0) + 2); F_002B1350(c);
SET32(4, RW(16) + 80);
SET64(5, RD(0) + RD(0));
SET64(31, 0x1625dc); SET64(6, RD(0) + RD(0)); F_002B1310(c);
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 80);
SET64(31, 0x1625ec); SET64(6, RD(5) + RD(0)); F_002B12E0(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_001625F0:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_00162600(Ctx *c) { /* func_00162600 */
ENTER(0x162600);
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
SET64(31, 0x162634); wr8(c, (RW(29) + 62), (u8)RW(0)); F_002A7670(c);
SET64(2, rd64(c, (RW(16) + 0)));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
wr64(c, (RW(17) + 64), RD(2));
SET64(2, rd64(c, (RW(16) + 8)));
wr64(c, (RW(17) + 72), RD(2));
SET64(31, 0x162654); wr32(c, (RW(17) + 176), RW(0)); F_002A7610(c);
SET32(4, RW(17) + 80);
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET32(7, RW(0) + 128);
SET64(31, 0x16266c); SET32(8, RW(0) + 2); F_002B1350(c);
SET32(4, RW(17) + 80);
SET64(5, RD(0) + RD(0));
SET64(31, 0x16267c); SET64(6, RD(0) + RD(0)); F_002B1310(c);
SET32(5, RW(0) + 1);
SET32(4, RW(17) + 80);
SET64(31, 0x16268c); SET64(6, RD(5) + RD(0)); F_002B12E0(c);
SET32(4, RW(17) + 128);
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 7);
SET64(7, RD(0) + RD(0));
SET64(31, 0x1626a4); SET64(8, RD(0) + RD(0)); F_002B1350(c);
SET32(4, RW(17) + 128);
SET64(5, RD(0) + RD(0));
SET64(31, 0x1626b4); SET64(6, RD(0) + RD(0)); F_002B1310(c);
SET32(4, RW(17) + 128);
SET32(5, RW(0) + 1);
SET64(31, 0x1626c4); SET32(6, RW(0) + 2); F_002B12E0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001626E0(Ctx *c) { /* func_001626E0 */
ENTER(0x1626e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1626f4); SET64(16, RD(4) + RD(0)); F_002A11D0(c);
SET32(4, RW(16) + 672);
SET64(31, 0x162700); SET32(5, RW(0) + 1); F_0014AFB0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -25136);
SET32(2, RW(2) + -25120);
wr32(c, (RW(16) + 176), RW(3));
SET32(4, RW(16) + 784);
SET64(31, 0x162720); wr32(c, (RW(16) + 196), RW(2)); F_0015CE20(c);
SET64(2, (s64)(s32)0x40490000);
wr32(c, (RW(16) + 912), RW(0));
SET64(2, RD(2) | 0xfdb);
wr32(c, (RW(16) + 784), RW(16));
c->f[3].u = RW(2);
SET64(2, (s64)(s32)0x490000);
c->f[2].u = rd32(c, (RW(2) + -256));
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

void F_00162780(Ctx *c) { /* func_00162780 */
ENTER(0x162780);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x162798); SET64(4, (s32)rd32(c, (RW(4) + 8))); F_002AAE80(c);
wr8(c, (RW(16) + 36), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(28) + -30060)));
SET64(31, 0x1627a8); SET64(5, RD(16) + RD(0)); F_002A0330(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001627C0(Ctx *c) { /* func_001627C0 */
ENTER(0x1627c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1627e4); SET64(16, RD(5) + RD(0)); rt_call(c, t); }
SET64(5, RD(16) + RD(0));
SET64(31, 0x1627f0); SET64(4, RD(17) + RD(0)); F_002A0780(c);
SET64(3, (s32)rd32(c, (RW(17) + 44)));
SET32(2, RW(0) + 1);
SET32(4, RW(17) + 64);
wr8(c, (RW(3) + 324), (u8)RW(0));
SET64(31, 0x162808); wr8(c, (RW(17) + 36), (u8)RW(2)); F_0014AE40(c);
SET32(5, RW(17) + 64);
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 8))); goto L_0016281C; }
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET64(4, (s32)rd32(c, (RW(17) + 8)));
L_0016281C:;
SET64(31, 0x162824); SET64(6, (s32)rd32(c, (RW(4) + 16))); F_002AB090(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00162840(Ctx *c) { /* func_00162840 */
ENTER(0x162840);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x162854); SET64(16, RD(4) + RD(0)); F_002A0970(c);
SET32(4, RW(16) + 64);
SET64(31, 0x162860); SET32(5, RW(0) + 1); F_0014AFB0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -25584);
wr32(c, (RW(16) + 4), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_00162880(Ctx *c) { /* func_00162880 */
ENTER(0x162880);
SET32(4, RW(4) + -192); { F_001390A0(c); return; }
}

void F_00162890(Ctx *c) { /* func_00162890 */
ENTER(0x162890);
SET32(4, RW(4) + -192); { F_002A0CF0(c); return; }
}

void F_001628A0(Ctx *c) { /* func_001628A0 */
ENTER(0x1628a0);
SET32(4, RW(4) + -192); { F_00161A80(c); return; }
}

void F_001628B0(Ctx *c) { /* func_001628B0 */
ENTER(0x1628b0);
SET32(4, RW(4) + -928); { F_00161A80(c); return; }
}

void F_001628C0(Ctx *c) { /* func_001628C0 */
ENTER(0x1628c0);
c->f[2].u = rd32(c, (RW(4) + 0));
SET64(3, (s64)(s32)0x3c000000);
c->f[1].u = RW(3);
c->fcc = F(2) < F(1);
if (!c->fcc) { SET64(3, (s64)(s32)0x3f800000); goto L_00162900; }
c->f[0].u = rd32(c, (RW(4) + 4));
c->fcc = F(0) < F(1);
{ int t = !c->fcc;  if (t) goto L_001628FC; }
c->f[0].u = rd32(c, (RW(4) + 8));
c->fcc = F(0) < F(1);
{ int t = c->fcc;  if (t) goto L_00162928; }
L_001628FC:;
SET64(3, (s64)(s32)0x3f800000);
L_00162900:;
c->f[1].u = RW(3);
c->f[0].f = fpu(F(1) - F(2));
wr32(c, (RW(4) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(4) + 4), c->f[0].u);
c->f[0].u = rd32(c, (RW(4) + 8));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(4) + 8), c->f[0].u);
L_00162928:;
 return;
}

void F_00162930(Ctx *c) { /* func_00162930 */
ENTER(0x162930);
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

void F_00162980(Ctx *c) { /* func_00162980 */
ENTER(0x162980);
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

void F_001629F0(Ctx *c) { /* func_001629F0 */
ENTER(0x1629f0);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(3, RW(3) >> 24);
SET64(3, RD(3) & 0xff);
if (RSD(3) < 0) { SET32(6, RW(3) >> 1); goto L_00162A10; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00162A28;
L_00162A10:;
SET64(3, RD(3) & 0x1);
SET64(6, RD(6) | RD(3));
c->f[0].u = RW(6);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00162A28:;
SET64(3, (s64)(s32)0x43000000);
c->f[0].u = RW(3);
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(4) + 12), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(3, RW(3) >> 16);
SET64(3, RD(3) & 0xff);
if (RSD(3) < 0) { SET32(6, RW(3) >> 1); goto L_00162A5C; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00162A74;
L_00162A5C:;
SET64(3, RD(3) & 0x1);
SET64(6, RD(6) | RD(3));
c->f[0].u = RW(6);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00162A74:;
SET64(3, (s64)(s32)0x437f0000);
c->f[0].u = RW(3);
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(4) + 8), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(3, RW(3) >> 8);
SET64(3, RD(3) & 0xff);
if (RSD(3) < 0) { SET32(6, RW(3) >> 1); goto L_00162AA8; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00162AC0;
L_00162AA8:;
SET64(3, RD(3) & 0x1);
SET64(6, RD(6) | RD(3));
c->f[0].u = RW(6);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00162AC0:;
SET64(3, (s64)(s32)0x437f0000);
c->f[0].u = RW(3);
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(4) + 4), c->f[0].u);
SET64(3, rd8(c, (RW(5) + 0)));
if (RSD(3) < 0) { SET32(5, RW(3) >> 1); goto L_00162AF0; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00162B08;
L_00162AF0:;
SET64(3, RD(3) & 0x1);
SET64(5, RD(5) | RD(3));
c->f[0].u = RW(5);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00162B08:;
SET64(3, (s64)(s32)0x437f0000);
c->f[0].u = RW(3);
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(4) + 0), c->f[0].u); return;
}

void F_00162B30(Ctx *c) { /* func_00162B30 */
ENTER(0x162b30);
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
SET64(31, 0x162b60); c->f[12].f = fpu(F(0) * F(1)); F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_00162B88; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 8)); goto L_00162BA0;
L_00162B88:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
c->f[1].u = rd32(c, (RW(19) + 8));
L_00162BA0:;
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
SET64(3, RD(3) & 0xff);
SET32(18, RW(3) << 24);
SET64(31, 0x162bb8); c->f[12].f = fpu(F(0) * F(1)); F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_00162BE0; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 4)); goto L_00162BF8;
L_00162BE0:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
c->f[1].u = rd32(c, (RW(19) + 4));
L_00162BF8:;
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
SET64(3, RD(3) & 0xff);
SET32(17, RW(3) << 16);
SET64(31, 0x162c10); c->f[12].f = fpu(F(0) * F(1)); F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_00162C38; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 0)); goto L_00162C50;
L_00162C38:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
c->f[1].u = rd32(c, (RW(19) + 0));
L_00162C50:;
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
SET64(3, RD(3) & 0xff);
SET32(16, RW(3) << 8);
SET64(31, 0x162c68); c->f[12].f = fpu(F(0) * F(1)); F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_00162C90; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(2, RD(3) & 0xff); goto L_00162CA8;
L_00162C90:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(2, RD(3) & 0xff);
L_00162CA8:;
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

void F_00162CD0(Ctx *c) { /* func_00162CD0 */
ENTER(0x162cd0);
wr32(c, (RW(4) + 12), c->f[12].u); return;
}

void F_00162CE0(Ctx *c) { /* func_00162CE0 */
ENTER(0x162ce0);
wr32(c, (RW(4) + 8), c->f[12].u); return;
}

void F_00162CF0(Ctx *c) { /* func_00162CF0 */
ENTER(0x162cf0);
wr32(c, (RW(4) + 4), c->f[12].u); return;
}

void F_00162D00(Ctx *c) { /* func_00162D00 */
ENTER(0x162d00);
wr32(c, (RW(4) + 0), c->f[12].u); return;
}

void F_00162D10(Ctx *c) { /* func_00162D10 */
ENTER(0x162d10);
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 17960); return;
}

void F_00162D20(Ctx *c) { /* func_00162D20 */
ENTER(0x162d20);
 return;
}

void F_00162D30(Ctx *c) { /* func_00162D30 */
ENTER(0x162d30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 400)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_00162D60; }
SET64(31, 0x162d54);  F_00141EB0(c);
SET64(31, 0x162d5c); SET64(4, (s32)rd32(c, (RW(16) + 400))); F_001700E0(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_00162D60:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_00162D70(Ctx *c) { /* func_00162D70 */
ENTER(0x162d70);
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
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00162E58; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_00162DAC:;
SET64(3, (s32)rd32(c, (RW(21) + 332)));
SET32(3, RW(3) + RW(18));
SET64(3, rd16(c, (RW(3) + 98)));
SET64(3, RD(3) & 0x2);
{ int t = RD(3) == RD(0);  if (t) goto L_00162E40; }
SET64(2, (s32)rd32(c, (RW(21) + 336)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x162de0); SET64(5, RD(20) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(21) + 332)));
SET64(3, RD(0) | 0xffff);
SET32(4, RW(4) + RW(18));
SET64(16, rd16(c, (RW(4) + 96)));
{ int t = RD(16) == RD(3);  if (t) goto L_00162E40; }
L_00162DF8:;
SET64(2, (s32)rd32(c, (RW(21) + 336)));
SET32(3, RW(16) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x162e18); SET64(5, RD(20) + RD(0)); rt_call(c, t); }
SET32(3, RW(16) << 3);
SET64(4, (s32)rd32(c, (RW(21) + 332)));
SET32(5, RW(3) - RW(16));
SET32(5, RW(5) << 4);
SET64(3, RD(0) | 0xffff);
SET32(4, RW(4) + RW(5));
SET64(16, rd16(c, (RW(4) + 96)));
{ int t = RD(16) != RD(3);  if (t) { POLL(); goto L_00162DF8; } }
L_00162E40:;
SET64(3, rd16(c, (RW(21) + 328)));
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 112);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00162DAC; } }
L_00162E58:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_00162E80(Ctx *c) { /* func_00162E80 */
ENTER(0x162e80);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET64(2, (s8)rd8(c, (RW(28) + -30440)));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00162EF0; }
wr32(c, (RW(29) + 0), RW(0));
c->f[13].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 8), RW(0));
wr32(c, (RW(29) + 16), RW(2));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 24), RW(0));
SET64(4, (s64)(s32)0x410000);
wr32(c, (RW(29) + 32), RW(0));
SET32(4, RW(4) + 21376);
wr32(c, (RW(29) + 40), RW(0));
c->f[14].u = c->f[13].u;
wr32(c, (RW(29) + 48), RW(0));
c->f[15].u = c->f[13].u;
c->f[16].u = c->f[13].u;
wr32(c, (RW(29) + 56), RW(2));
c->f[17].u = c->f[12].u;
c->f[18].u = c->f[13].u;
SET64(31, 0x162ee8); c->f[19].u = c->f[13].u; F_002AC180(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30440), (u8)RW(2));
L_00162EF0:;
SET64(31, 0x162ef8); SET32(4, RW(29) + 96); F_002AC130(c);
SET64(6, (s64)(s32)0x410000);
SET32(4, RW(16) + 64);
SET32(6, RW(6) + 21376);
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
SET64(31, 0x162f48); wr128(c, (RW(16) + 112) & ~15u, &c->r[2]); F_002A1E20(c);
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void F_00162F60(Ctx *c) { /* func_00162F60 */
ENTER(0x162f60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00163020; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -25072);
SET32(3, RW(3) + -25064);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -25052);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 36), RW(2));
SET32(3, RW(3) + -24992);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 208), RW(3));
SET32(2, RW(2) + -24968);
wr32(c, (RW(17) + 240), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x162fc8);  rt_call(c, t); }
SET32(4, RW(17) + 224);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 64); goto L_00162FF4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 240), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x162ff0);  rt_call(c, t); }
SET32(4, RW(17) + 64);
L_00162FF4:;
SET64(31, 0x162ffc); SET64(5, RD(0) + RD(0)); F_002409D0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x163008); SET64(5, RD(0) + RD(0)); F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00163024; }
SET64(31, 0x163020); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_00163020:;
SET64(2, RD(17) + RD(0));
L_00163024:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00163040(Ctx *c) { /* func_00163040 */
ENTER(0x163040);
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
SET64(31, 0x16316c); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_0016319C; }
SET64(5, (s64)(s32)0x160000);
SET64(6, (s64)(s32)0x160000);
SET64(8, RD(19) + RD(0));
SET32(16, RW(0) + 1);
SET64(4, RD(20) + RD(0));
SET32(5, RW(5) + 14736);
SET32(6, RW(6) + 14512);
SET64(31, 0x163198); SET32(7, RW(0) + 336); F_00102580(c);
SET64(20, RD(2) + RD(0));
L_0016319C:;
wr32(c, (RW(18) + 300), RW(20));
SET64(2, rd16(c, (RW(18) + 290)));
{ int t = RSD(2) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_001632C0; }
SET64(3, rd16(c, (RW(18) + 288)));
L_001631B0:;
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_001632A8; }
SET64(16, RD(20) & 0xffff);
L_001631C0:;
SET64(2, RD(3) & 0xffff);
mul_s(c, 0, 4, RSW(16), RSW(2));
SET64(3, (s32)rd32(c, (RW(18) + 296)));
SET64(2, RD(19) & 0xffff);
SET32(5, RW(2) + RW(4));
SET32(4, RW(5) << 2);
SET32(3, RW(3) + RW(4));
SET64(3, rd16(c, (RW(3) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_00163240; }
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
SET64(31, 0x163234); SET32(5, RW(3) + RW(2)); F_0016BA30(c);
 goto L_00163290;
L_00163240:;
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
SET64(31, 0x16328c); SET32(5, RW(3) + RW(2)); F_0016BA30(c);
L_00163290:;
SET64(3, rd16(c, (RW(18) + 288)));
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001631C0; } }
L_001632A8:;
SET64(2, rd16(c, (RW(18) + 290)));
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(18) + 288))); { POLL(); goto L_001631B0; } }
L_001632C0:;
SET64(2, (s32)rd32(c, (RW(17) + 336)));
if (RD(2) == RD(0)) { SET64(2, rd16(c, (RW(17) + 328))); goto L_0016341C; }
SET64(2, rd16(c, (RW(17) + 328)));
wr16(c, (RW(18) + 328), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 332)));
wr32(c, (RW(18) + 332), RW(2));
SET64(2, rd16(c, (RW(18) + 328)));
SET64(31, 0x1632e8); SET32(4, RW(2) << 2); F_00100530(c);
wr32(c, (RW(18) + 336), RW(2));
SET64(2, rd16(c, (RW(18) + 328)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_0016342C; }
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_00163300:;
SET64(31, 0x163308); SET32(4, RW(0) + 2272); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_00163390; }
SET32(4, RW(21) + 2236);
SET32(22, RW(0) + 1);
SET64(31, 0x163320); wr32(c, (RW(21) + 256), RW(4)); F_00141AA0(c);
SET64(4, RD(21) + RD(0));
SET64(31, 0x16332c); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET64(31, 0x163334); SET32(4, RW(21) + 288); F_00240AE0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11552);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(21) + 276), RW(2));
SET32(6, RW(6) + -11428);
SET64(5, (s32)rd32(c, (RW(21) + 256)));
SET32(3, RW(3) + -11480);
SET32(2, RW(21) + 2236);
SET32(4, RW(21) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(21) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(21) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x163374); wr32(c, (RW(3) + 20), RW(2)); F_00160EA0(c);
SET64(31, 0x16337c); SET32(4, RW(21) + 1040); F_00160EA0(c);
SET64(31, 0x163384); SET32(4, RW(21) + 1632); F_00160EA0(c);
wr32(c, (RW(21) + 2224), RW(0));
wr32(c, (RW(21) + 2228), RW(0));
L_00163390:;
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
{ u32 t = RW(25); SET64(31, 0x1633c0); SET64(5, (s32)rd32(c, (RW(2) + 0))); rt_call(c, t); }
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
SET64(31, 0x1633fc); wr128(c, (RW(3) + 336) & ~15u, &c->r[2]); F_002A1E20(c);
SET64(2, rd16(c, (RW(18) + 328)));
SET32(16, RW(16) + 1);
SET32(20, RW(20) + 4);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 112); if (t) { POLL(); goto L_00163300; } }
SET64(2, (s32)rd32(c, (RW(17) + 348))); goto L_00163430;
L_0016341C:;
wr16(c, (RW(18) + 328), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 332)));
wr32(c, (RW(18) + 332), RW(2));
wr32(c, (RW(18) + 336), RW(0));
L_0016342C:;
SET64(2, (s32)rd32(c, (RW(17) + 348)));
L_00163430:;
if (RD(2) == RD(0)) { SET64(2, rd16(c, (RW(17) + 340))); goto L_00163584; }
SET64(2, rd16(c, (RW(17) + 340)));
wr16(c, (RW(18) + 340), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 344)));
wr32(c, (RW(18) + 344), RW(2));
SET64(2, rd16(c, (RW(18) + 340)));
SET64(31, 0x163454); SET32(4, RW(2) << 2); F_00100530(c);
wr32(c, (RW(18) + 348), RW(2));
SET64(2, rd16(c, (RW(18) + 340)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00163594; }
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_0016346C:;
SET64(31, 0x163474); SET32(4, RW(0) + 2272); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_001634F8; }
SET32(4, RW(21) + 2236);
SET32(22, RW(0) + 1);
SET64(31, 0x16348c); wr32(c, (RW(21) + 256), RW(4)); F_00141AA0(c);
SET64(4, RD(21) + RD(0));
SET64(31, 0x163498); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET64(31, 0x1634a0); SET32(4, RW(21) + 288); F_00240AE0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11552);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(21) + 276), RW(2));
SET32(6, RW(6) + -11428);
SET64(5, (s32)rd32(c, (RW(21) + 256)));
SET32(3, RW(3) + -11480);
SET32(2, RW(21) + 2236);
SET32(4, RW(21) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(21) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(21) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x1634e0); wr32(c, (RW(3) + 20), RW(2)); F_00160EA0(c);
SET64(31, 0x1634e8); SET32(4, RW(21) + 1040); F_00160EA0(c);
SET64(31, 0x1634f0); SET32(4, RW(21) + 1632); F_00160EA0(c);
wr32(c, (RW(21) + 2224), RW(0));
wr32(c, (RW(21) + 2228), RW(0));
L_001634F8:;
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
{ u32 t = RW(25); SET64(31, 0x163528); SET64(5, (s32)rd32(c, (RW(2) + 0))); rt_call(c, t); }
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
SET64(31, 0x163564); wr128(c, (RW(3) + 336) & ~15u, &c->r[2]); F_002A1E20(c);
SET64(2, rd16(c, (RW(18) + 340)));
SET32(16, RW(16) + 1);
SET32(20, RW(20) + 4);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 112); if (t) { POLL(); goto L_0016346C; } }
SET64(2, rd16(c, (RW(17) + 352))); goto L_00163598;
L_00163584:;
wr16(c, (RW(18) + 340), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 344)));
wr32(c, (RW(18) + 344), RW(2));
wr32(c, (RW(18) + 348), RW(0));
L_00163594:;
SET64(2, rd16(c, (RW(17) + 352)));
L_00163598:;
SET64(4, RD(18) + RD(0));
wr16(c, (RW(18) + 352), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 356)));
SET64(31, 0x1635ac); wr32(c, (RW(18) + 356), RW(2)); F_00164B90(c);
SET64(2, (s32)rd32(c, (RW(17) + 380)));
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 380), RW(0)); goto L_00163600; }
{ int t = RD(23) == RD(0);  if (t) goto L_001635FC; }
SET64(31, 0x1635c8); SET32(4, RW(0) + 768); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001635DC; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x1635dc); SET32(5, RW(0) + 1); F_00150D60(c);
L_001635DC:;
wr32(c, (RW(18) + 380), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 12)));
SET64(5, (s32)rd32(c, (RW(17) + 380)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1635f4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 384))); goto L_00163604;
L_001635FC:;
wr32(c, (RW(18) + 380), RW(0));
L_00163600:;
SET64(2, (s32)rd32(c, (RW(17) + 384)));
L_00163604:;
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 384), RW(0)); goto L_001636C4; }
{ int t = RD(30) == RD(0);  if (t) goto L_001636C0; }
SET64(31, 0x16361c); SET32(4, RW(0) + 2272); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001636A0; }
SET32(4, RW(19) + 2236);
SET32(16, RW(0) + 1);
SET64(31, 0x163634); wr32(c, (RW(19) + 256), RW(4)); F_00141AA0(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x163640); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET64(31, 0x163648); SET32(4, RW(19) + 288); F_00240AE0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11552);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 276), RW(2));
SET32(6, RW(6) + -11428);
SET64(5, (s32)rd32(c, (RW(19) + 256)));
SET32(3, RW(3) + -11480);
SET32(2, RW(19) + 2236);
SET32(4, RW(19) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(19) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(19) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x163688); wr32(c, (RW(3) + 20), RW(2)); F_00160EA0(c);
SET64(31, 0x163690); SET32(4, RW(19) + 1040); F_00160EA0(c);
SET64(31, 0x163698); SET32(4, RW(19) + 1632); F_00160EA0(c);
wr32(c, (RW(19) + 2224), RW(0));
wr32(c, (RW(19) + 2228), RW(0));
L_001636A0:;
wr32(c, (RW(18) + 384), RW(19));
SET64(25, (s32)rd32(c, (RW(19) + 276)));
SET64(5, (s32)rd32(c, (RW(17) + 384)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x1636b8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 388))); goto L_001636C8;
L_001636C0:;
wr32(c, (RW(18) + 384), RW(0));
L_001636C4:;
SET64(2, (s32)rd32(c, (RW(17) + 388)));
L_001636C8:;
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 388), RW(0)); goto L_001637C0; }
SET64(31, 0x1636d8); SET32(4, RW(0) + 768); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001637A4; }
SET32(4, RW(19) + 24);
SET32(3, RW(19) + 48);
wr32(c, (RW(19) + 304), RW(4));
SET32(2, RW(19) + 336);
wr32(c, (RW(19) + 0), RW(3));
SET32(16, RW(0) + 1);
SET64(31, 0x163700); wr32(c, (RW(19) + 4), RW(2)); F_00141AA0(c);
SET32(4, RW(19) + 48);
SET64(31, 0x16370c); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET32(4, RW(19) + 336);
SET64(31, 0x163718); SET64(5, RD(16) + RD(0)); F_002A25B0(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x163724); SET64(5, RD(0) + RD(0)); F_00150D60(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -23856);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 12), RW(2));
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(19) + 0)));
SET32(9, RW(9) + -23760);
SET32(8, RW(8) + -23796);
SET32(7, RW(7) + -23688);
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
L_001637A4:;
wr32(c, (RW(18) + 388), RW(19));
wr8(c, (RW(19) + 20), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 388)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1637c0); SET64(5, (s32)rd32(c, (RW(17) + 388))); rt_call(c, t); }
L_001637C0:;
SET64(2, (s32)rd32(c, (RW(17) + 392)));
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 392), RW(0)); goto L_00163870; }
SET64(31, 0x1637d4); SET32(4, RW(0) + 2272); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00163858; }
SET32(4, RW(19) + 2236);
SET32(16, RW(0) + 1);
SET64(31, 0x1637ec); wr32(c, (RW(19) + 256), RW(4)); F_00141AA0(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x1637f8); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET64(31, 0x163800); SET32(4, RW(19) + 288); F_00240AE0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11552);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 276), RW(2));
SET32(6, RW(6) + -11428);
SET64(5, (s32)rd32(c, (RW(19) + 256)));
SET32(3, RW(3) + -11480);
SET32(2, RW(19) + 2236);
SET32(4, RW(19) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(19) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(19) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x163840); wr32(c, (RW(3) + 20), RW(2)); F_00160EA0(c);
SET64(31, 0x163848); SET32(4, RW(19) + 1040); F_00160EA0(c);
SET64(31, 0x163850); SET32(4, RW(19) + 1632); F_00160EA0(c);
wr32(c, (RW(19) + 2224), RW(0));
wr32(c, (RW(19) + 2228), RW(0));
L_00163858:;
wr32(c, (RW(18) + 392), RW(19));
SET64(25, (s32)rd32(c, (RW(19) + 276)));
SET64(5, (s32)rd32(c, (RW(17) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x163870); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
L_00163870:;
SET64(5, rd16(c, (RW(18) + 294)));
SET64(31, 0x16387c); SET64(4, RD(18) + RD(0)); F_001697B0(c);
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

void F_001638B0(Ctx *c) { /* func_001638B0 */
ENTER(0x1638b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00163978; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -23648);
SET32(3, RW(3) + -23612);
wr32(c, (RW(17) + 16), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 176), RW(3));
SET32(2, RW(2) + -23540);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 264), RW(2));
SET32(3, RW(3) + -23532);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 228), RW(3));
SET32(2, RW(2) + -23520);
wr32(c, (RW(17) + 244), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x163918);  rt_call(c, t); }
SET32(4, RW(17) + 208);
SET64(31, 0x163924); SET64(5, RD(0) + RD(0)); F_00139F30(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_00163964; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -23424);
SET32(2, RW(2) + -23388);
wr32(c, (RW(17) + 16), RW(3));
wr32(c, (RW(17) + 176), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x163954); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x163960); SET64(5, RD(0) + RD(0)); F_00161970(c);
SET64(2, RD(16) << 48);
L_00163964:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016397C; }
SET64(31, 0x163978); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_00163978:;
SET64(2, RD(17) + RD(0));
L_0016397C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00163990(Ctx *c) { /* func_00163990 */
ENTER(0x163990);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1639a4); SET64(16, RD(4) + RD(0)); F_00161A10(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -23424);
SET32(2, RW(2) + -23388);
wr32(c, (RW(16) + 16), RW(3));
SET32(4, RW(16) + 208);
wr32(c, (RW(16) + 176), RW(2));
SET64(31, 0x1639c8); SET32(5, RW(0) + 1536); F_0013A040(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -23648);
SET32(3, RW(3) + -23612);
wr32(c, (RW(16) + 16), RW(2));
SET64(4, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 176), RW(3));
SET32(2, RW(2) + -23540);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 264), RW(2));
SET32(3, RW(3) + -23532);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 228), RW(3));
SET32(2, RW(2) + -23520);
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

void F_00163A60(Ctx *c) { /* func_00163A60 */
ENTER(0x163a60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00163AC8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -23424);
SET32(2, RW(2) + -23388);
wr32(c, (RW(17) + 16), RW(3));
wr32(c, (RW(17) + 176), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x163aa4);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x163ab0); SET64(5, RD(0) + RD(0)); F_00161970(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00163ACC; }
SET64(31, 0x163ac8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_00163AC8:;
SET64(2, RD(17) + RD(0));
L_00163ACC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00163AE0(Ctx *c) { /* func_00163AE0 */
ENTER(0x163ae0);
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
{ int t = RD(7) == RD(0); SET64(6, rd16(c, (RW(2) + 2))); if (t) goto L_00163B9C; }
SET32(3, RW(4) << 3);
SET64(2, (s32)rd32(c, (RW(19) + 300)));
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 196)));
{ u32 t = RW(25); SET64(31, 0x163b94); SET64(5, (s32)rd32(c, (RW(19) + 324))); rt_call(c, t); }
SET64(6, rd16(c, (RW(19) + 266))); goto L_00163BD4;
L_00163B9C:;
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
{ u32 t = RW(25); SET64(31, 0x163bd0); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(6, rd16(c, (RW(19) + 266)));
L_00163BD4:;
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
{ int t = RD(3) != RD(2);  if (t) goto L_00163C60; }
SET64(2, rd16(c, (RW(18) + 292)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00163C60; }
SET64(16, RD(0) + RD(0));
L_00163C30:;
SET64(2, (s32)rd32(c, (RW(18) + 288)));
SET64(6, RD(17) & 0xffff);
SET32(2, RW(2) + RW(16));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x163c48); SET64(4, RD(18) + RD(0)); F_00161510(c);
SET64(2, rd16(c, (RW(18) + 292)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00163C30; } }
L_00163C60:;
SET64(2, (s64)(s32)0x3f000000);
c->f[4].u = rd32(c, (RW(19) + 276));
c->f[0].u = RW(2);
SET64(2, rd16(c, (RW(19) + 266)));
{ int t = RSD(2) < 0; c->f[3].f = fpu(F(0) * F(4)); if (t) goto L_00163C84; }
c->f[0].u = RW(2);
c->f[2].f = (f32)(s32)c->f[0].u; goto L_00163CA0;
L_00163C84:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[2].f = fpu(F(2) + F(2));
L_00163CA0:;
c->f[1].u = rd32(c, (RW(19) + 284));
SET64(2, rd16(c, (RW(19) + 264)));
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(2) * F(4));
{ int t = RSD(2) < 0; c->f[1].f = fpu(F(3) + F(0)); if (t) goto L_00163CCC; }
c->f[0].u = RW(2);
c->f[2].f = (f32)(s32)c->f[0].u; goto L_00163CE8;
L_00163CCC:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[2].f = fpu(F(2) + F(2));
L_00163CE8:;
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
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00163D98; }
wr16(c, (RW(19) + 264), (u16)RW(0));
SET64(2, rd16(c, (RW(19) + 266)));
SET32(2, RW(2) + 1);
wr16(c, (RW(19) + 266), (u16)RW(2));
SET64(3, rd16(c, (RW(19) + 266)));
SET64(2, rd16(c, (RW(19) + 290)));
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00163D94; }
SET32(2, RW(0) + 1); goto L_00163D98;
L_00163D94:;
SET64(2, RD(0) + RD(0));
L_00163D98:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_00163DC0(Ctx *c) { /* func_00163DC0 */
ENTER(0x163dc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 412)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_00163DE8; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x163de4);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_00163DE8:;
SET32(29, RW(29) + 16); return;
}

void F_00163DF0(Ctx *c) { /* func_00163DF0 */
ENTER(0x163df0);
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
{ int t = RD(3) == RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_00164350; }
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
SET64(31, 0x163e78); wr32(c, (RW(16) + 4), c->f[0].u); F_002AC130(c);
rd128(c, (RW(19) + 64) & ~15u, &c->r[2]);
SET32(4, RW(29) + 528);
wr128(c, (RW(29) + 528) & ~15u, &c->r[2]);
rd128(c, (RW(19) + 80) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 544) & ~15u, &c->r[2]);
rd128(c, (RW(19) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 560) & ~15u, &c->r[2]);
rd128(c, (RW(19) + 112) & ~15u, &c->r[2]);
SET64(31, 0x163ea0); wr128(c, (RW(29) + 576) & ~15u, &c->r[2]); F_002ABA40(c);
SET64(31, 0x163ea8); SET32(4, RW(29) + 656); F_002AC130(c);
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
SET64(31, 0x163ed8); wr128(c, (RW(29) + 704) & ~15u, &c->r[2]); F_002ACE80(c);
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
SET32(4, RW(29) + 288);
SET64(5, RD(16) + RD(0));
SET32(6, RW(29) + 656);
SET64(31, 0x163ef0); wr128(c, (RW(18) + 0) & ~15u, &c->r[2]); F_002ACE80(c);
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
SET64(31, 0x163f38); wr32(c, (RW(29) + 640), c->f[0].u); F_002AD410(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 208);
wr32(c, (RW(29) + 620), RW(2));
wr32(c, (RW(29) + 636), RW(2));
wr32(c, (RW(29) + 608), RW(0));
wr32(c, (RW(29) + 612), RW(0));
wr32(c, (RW(29) + 616), RW(0));
wr32(c, (RW(29) + 624), RW(0));
wr32(c, (RW(29) + 628), RW(0));
SET64(31, 0x163f64); wr32(c, (RW(29) + 632), RW(0)); F_0013AEA0(c);
SET32(4, RW(29) + 208);
SET64(31, 0x163f70); SET32(5, RW(28) + -32548); F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x163f7c); SET32(4, RW(29) + 432); F_0013ADA0(c);
SET32(4, RW(29) + 496);
SET32(5, RW(29) + 640);
SET64(31, 0x163f8c); SET32(6, RW(29) + 432); F_002ACE80(c);
rd128(c, (RW(29) + 496) & ~15u, &c->r[2]);
SET32(4, RW(29) + 608);
SET64(5, RD(18) + RD(0));
SET64(31, 0x163fa0); wr128(c, (RW(29) + 608) & ~15u, &c->r[2]); F_002AD2E0(c);
c->f[0].u = c->f[0].u ^ 0x80000000u;
SET32(4, RW(29) + 144);
SET64(31, 0x163fb0); wr32(c, (RW(29) + 620), c->f[0].u); F_0013AEA0(c);
SET32(4, RW(29) + 144);
SET64(31, 0x163fbc); SET32(5, RW(28) + -32544); F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x163fc8); SET32(4, RW(29) + 336); F_0013ADA0(c);
SET32(4, RW(29) + 400);
SET32(5, RW(29) + 640);
SET64(31, 0x163fd8); SET32(6, RW(29) + 336); F_002ACE80(c);
rd128(c, (RW(29) + 400) & ~15u, &c->r[2]);
SET32(4, RW(29) + 624);
SET64(5, RD(18) + RD(0));
SET64(31, 0x163fec); wr128(c, (RW(29) + 624) & ~15u, &c->r[2]); F_002AD2E0(c);
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
{ int t = RSD(3) <= 0; wr128(c, (RW(29) + 592) & ~15u, &c->r[4]); if (t) goto L_00164350; }
SET64(3, (s64)(s32)0x41200000);
c->f[21].u = c->f[20].u ^ 0x80000000u;
c->f[0].u = RW(3);
c->f[20].f = fpu(F(0) + F(20));
SET64(5, rd16(c, (RW(19) + 288)));
L_00164040:;
{ int t = RSD(5) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00164338; }
SET64(16, RD(22) & 0xffff);
L_00164050:;
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
{ int t = c->fcc;  if (t) goto L_001642E8; }
c->f[1].u = rd32(c, (RW(29) + 632));
c->f[2].u = rd32(c, (RW(29) + 624));
c->f[0].u = rd32(c, (RW(29) + 636));
c->f[1].f = fpu(F(1) * F(22));
c->facc = fpu(F(6) + F(1));
c->f[1].f = fpu(c->facc + F(2) * F(23));
c->f[0].f = fpu(F(0) + F(1));
c->fcc = F(0) <= F(21);
{ int t = c->fcc;  if (t) goto L_001642A8; }
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
{ u32 t = RW(25); SET64(31, 0x16411c); SET32(21, RW(2) + RW(3)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(21) + 16)));
SET64(5, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x164130); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
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
SET64(31, 0x164168); wr32(c, (RW(29) + 272), c->f[0].u); F_002AD340(c);
c->fcc = F(0) <= F(20);
{ int t = c->fcc;  if (t) goto L_00164210; }
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
{ u32 t = RW(25); SET64(31, 0x1641ac); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
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
{ int t = RD(3) == RD(0);  if (t) goto L_00164320; }
SET64(21, RD(0) + RD(0));
L_001641E8:;
SET64(4, (s32)rd32(c, (RW(20) + 320)));
SET64(5, RD(0) | 0x8000);
SET64(31, 0x1641f8); SET64(6, RD(21) + RD(0)); F_001EF100(c);
SET32(21, RW(21) + 1);
SET64(3, RSD(21) < (s64)2);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_001641E8; } }
 goto L_00164320;
L_00164210:;
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
{ u32 t = RW(25); SET64(31, 0x164248); SET64(5, RD(0) | 0x8002); rt_call(c, t); }
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
{ int t = RD(3) == RD(0);  if (t) goto L_00164320; }
SET64(21, RD(0) + RD(0));
L_00164280:;
SET64(4, (s32)rd32(c, (RW(20) + 320)));
SET64(5, RD(0) | 0x8002);
SET64(31, 0x164290); SET64(6, RD(21) + RD(0)); F_001EF100(c);
SET32(21, RW(21) + 1);
SET64(3, RSD(21) < (s64)2);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00164280; } }
 goto L_00164320;
L_001642A8:;
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
{ u32 t = RW(25); SET64(31, 0x1642e0); SET32(5, RW(0) + 1); rt_call(c, t); }
 goto L_00164320;
L_001642E8:;
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
{ u32 t = RW(25); SET64(31, 0x164320); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00164320:;
SET64(5, rd16(c, (RW(19) + 288)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(5));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00164050; } }
L_00164338:;
SET64(3, rd16(c, (RW(19) + 290)));
SET32(22, RW(22) + 1);
SET64(3, RSD(22) < RSD(3));
if (RD(3) != RD(0)) { SET64(5, rd16(c, (RW(19) + 288))); { POLL(); goto L_00164040; } }
L_00164350:;
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

void F_00164390(Ctx *c) { /* func_00164390 */
ENTER(0x164390);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 304)));
SET64(16, RD(6) + RD(0));
{ int t = RD(4) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_001643C0; }
SET64(31, 0x1643bc);  F_0014A6D0(c);
SET64(5, RD(2) + RD(0));
L_001643C0:;
if (RD(5) == RD(0)) { wr16(c, (RW(16) + 0), (u16)RW(0)); goto L_001643DC; }
SET64(3, rd16(c, (RW(5) + 12)));
wr16(c, (RW(17) + 0), (u16)RW(3));
SET64(3, rd16(c, (RW(5) + 14)));
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_001643E0;
L_001643DC:;
wr16(c, (RW(17) + 0), (u16)RW(0));
L_001643E0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00164400(Ctx *c) { /* func_00164400 */
ENTER(0x164400);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
SET64(17, RD(5) << 48);
SET64(17, RSD(17) >> 48);
{ int t = RSD(17) < 0; wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_00164484; }
SET64(16, RD(6) << 48);
SET64(16, RSD(16) >> 48);
if (RSD(16) < 0) { SET64(2, RD(18) + RD(0)); goto L_00164488; }
SET64(4, (s32)rd32(c, (RW(4) + 304)));
if (RD(4) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00164448; }
SET64(31, 0x164448);  F_0014A6D0(c);
L_00164448:;
{ int t = RD(2) == RD(0);  if (t) goto L_00164484; }
SET64(4, rd16(c, (RW(2) + 12)));
SET64(1, RSD(17) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_00164484; }
SET64(3, rd16(c, (RW(2) + 14)));
SET64(1, RSD(16) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_00164484; }
mul_s(c, 0, 3, RSW(4), RSW(16));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET32(3, RW(17) + RW(3));
SET32(3, RW(3) << 3);
SET32(18, RW(2) + RW(3));
L_00164484:;
SET64(2, RD(18) + RD(0));
L_00164488:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001644A0(Ctx *c) { /* func_001644A0 */
ENTER(0x1644a0);
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
{ int t = RD(4) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_001644E4; }
SET64(31, 0x1644e0);  F_0014A6D0(c);
SET64(3, RD(2) + RD(0));
L_001644E4:;
if (RD(3) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_001644F8; }
SET64(4, rd16(c, (RW(3) + 12)));
SET64(3, rd16(c, (RW(3) + 14))); goto L_001644FC;
L_001644F8:;
SET64(4, RD(0) & 0xffff);
L_001644FC:;
SET64(22, RD(4) & 0xffff);
{ int t = RSD(22) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_001645F8; }
SET64(18, RD(3) & 0xffff);
L_0016450C:;
{ int t = RSD(18) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_001645E0; }
SET64(17, RD(21) << 48);
SET64(17, RSD(17) >> 48);
L_00164520:;
{ int t = RSD(17) < 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00164590; }
SET64(16, RD(20) << 48);
SET64(16, RSD(16) >> 48);
{ int t = RSD(16) < 0;  if (t) goto L_00164590; }
SET64(4, (s32)rd32(c, (RW(23) + 304)));
if (RD(4) == RD(0)) { SET64(5, RD(0) + RD(0)); goto L_00164550; }
SET64(31, 0x16454c);  F_0014A6D0(c);
SET64(5, RD(2) + RD(0));
L_00164550:;
{ int t = RD(5) == RD(0);  if (t) goto L_00164590; }
SET64(4, rd16(c, (RW(5) + 12)));
SET64(1, RSD(17) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_00164590; }
SET64(3, rd16(c, (RW(5) + 14)));
SET64(1, RSD(16) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_00164590; }
mul_s(c, 0, 4, RSW(4), RSW(16));
SET64(3, (s32)rd32(c, (RW(5) + 16)));
SET32(4, RW(17) + RW(4));
SET32(4, RW(4) << 3);
SET32(19, RW(3) + RW(4));
L_00164590:;
{ int t = RD(19) == RD(0);  if (t) goto L_001645C8; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_001645B0; }
SET64(31, 0x1645ac);  F_0014A8B0(c);
L_001645B0:;
SET64(4, (s32)rd32(c, (RW(19) + 4)));
{ int t = RD(4) == RD(0);  if (t) goto L_001645C8; }
SET64(31, 0x1645c4);  F_0014A8B0(c);
L_001645C8:;
SET32(3, RW(20) + 1);
SET64(20, RD(3) & 0xffff);
SET64(3, RSD(20) < RSD(18));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00164520; } }
L_001645E0:;
SET32(3, RW(21) + 1);
SET64(21, RD(3) & 0xffff);
SET64(3, RSD(21) < RSD(22));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_0016450C; } }
L_001645F8:;
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

void F_00164630(Ctx *c) { /* func_00164630 */
ENTER(0x164630);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0x490000);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x164644); SET32(5, RW(5) + 17824); F_0012AB88(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

void F_00164660(Ctx *c) { /* func_00164660 */
ENTER(0x164660);
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
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 184), RW(6)); if (t) goto L_00164B08; }
SET64(3, rd16(c, (RW(21) + 352)));
{ int t = RSD(3) <= 0; SET64(22, RD(0) + RD(0)); if (t) goto L_00164B08; }
SET64(17, RD(0) + RD(0));
SET64(23, RD(0) + RD(0));
L_001646B8:;
SET64(2, (s32)rd32(c, (RW(21) + 356)));
SET64(5, (s64)(s32)0x490000);
SET32(5, RW(5) + 17824);
SET64(20, RD(0) + RD(0));
SET32(2, RW(2) + RW(17));
SET64(16, rd16(c, (RW(2) + 98)));
SET64(31, 0x1646d8); SET32(4, RW(2) + 64); F_0012AB88(c);
SET64(3, RD(0) < RD(2));
{ int t = RD(3) == RD(0);  if (t) goto L_00164708; }
SET64(3, RD(16) & 0xffff);
SET64(3, RD(3) & 0x1);
{ int t = RD(3) == RD(0);  if (t) goto L_00164700; }
SET32(16, RW(0) + 691); goto L_00164710;
L_00164700:;
SET32(16, RW(0) + 690); goto L_00164710;
L_00164708:;
SET32(16, RW(0) + 711);
L_00164710:;
SET32(3, RW(0) + 711);
{ int t = RD(16) == RD(3);  if (t) goto L_00164788; }
SET64(2, (s32)rd32(c, (RW(21) + 356)));
SET32(2, RW(2) + RW(17));
SET64(2, rd16(c, (RW(2) + 98)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_00164760; }
{ int t = RD(21) == RD(0); SET64(6, RD(21) + RD(0)); if (t) goto L_00164740; }
SET32(6, RW(21) + 64);
L_00164740:;
SET64(4, (s32)rd32(c, (RW(21) + 400)));
SET64(7, (s32)rd32(c, (RW(29) + 184)));
SET64(5, RD(16) & 0xffff);
SET64(31, 0x164754); SET64(8, RD(0) + RD(0)); F_00170270(c);
SET64(20, RD(2) + RD(0)); goto L_00164788;
L_00164760:;
{ int t = RD(21) == RD(0); SET64(6, RD(21) + RD(0)); if (t) goto L_00164770; }
SET32(6, RW(21) + 64);
L_00164770:;
SET64(4, (s32)rd32(c, (RW(21) + 400)));
SET64(7, (s32)rd32(c, (RW(29) + 188)));
SET64(5, RD(16) & 0xffff);
SET64(31, 0x164784); SET64(8, RD(0) + RD(0)); F_00170270(c);
SET64(20, RD(2) + RD(0));
L_00164788:;
{ int t = RD(20) == RD(0);  if (t) goto L_00164AE0; }
SET64(3, (s32)rd32(c, (RW(21) + 356)));
SET64(25, (s32)rd32(c, (RW(20) + 144)));
SET64(2, (s32)rd32(c, (RW(21) + 312)));
SET32(3, RW(3) + RW(17));
SET64(3, rd16(c, (RW(3) + 96)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(25); SET64(31, 0x1647bc); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET32(2, RW(16) + -690);
SET64(1, RD(2) < (u64)(s64)3);
{ int t = RD(1) == RD(0);  if (t) goto L_00164AC8; }
SET64(3, (s32)rd32(c, (RW(21) + 356)));
SET64(2, rd16(c, (RW(21) + 294)));
SET32(3, RW(3) + RW(17));
SET64(1, RSD(2) < (s64)30);
{ int t = RD(1) == RD(0); SET32(30, RW(3) + 64); if (t) goto L_00164858; }
SET32(3, RW(2) << 2);
SET64(18, RD(0) + RD(0));
SET64(2, (s64)(s32)0x3e0000);
SET32(2, RW(2) + 29760);
SET32(2, RW(2) + RW(3));
SET64(19, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x164804); SET64(4, RD(19) + RD(0)); F_0012A4D8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00164858; }
SET64(16, RD(19) + RD(0));
L_00164810:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x16481c); SET64(5, RD(30) + RD(0)); F_0012A278(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00164840; }
SET32(2, RW(18) << 2);
SET32(2, RW(2) + RW(18));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(18));
SET32(2, RW(2) << 2);
SET32(18, RW(19) + RW(2)); goto L_00164860;
L_00164840:;
SET32(16, RW(16) + 44);
SET64(4, RD(16) + RD(0));
SET64(31, 0x164850); SET32(18, RW(18) + 1); F_0012A4D8(c);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00164810; } }
L_00164858:;
SET64(18, RD(0) + RD(0));
L_00164860:;
{ int t = RD(18) == RD(0);  if (t) goto L_00164AA8; }
SET64(2, (s32)rd32(c, (RW(21) + 356)));
c->f[20].u = rd32(c, (RW(18) + 40));
SET32(4, RW(29) + 288);
SET64(31, 0x16487c); SET32(16, RW(2) + RW(17)); F_002AC130(c);
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
SET64(31, 0x1648ec); wr32(c, (RW(29) + 376), c->f[0].u); F_0013AEA0(c);
SET32(4, RW(29) + 192);
SET64(31, 0x1648f8); SET32(5, RW(29) + 368); F_00164B80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x164904); SET32(4, RW(29) + 384); F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(20) + 144)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x164918); SET32(5, RW(29) + 384); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(21) + 356)));
SET64(2, (s32)rd32(c, (RW(21) + 312)));
SET64(5, rd16(c, (RW(18) + 32)));
SET32(3, RW(3) + RW(17));
SET64(3, rd16(c, (RW(3) + 96)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(4) + 52)));
{ int t = RSD(2) < 0; c->f[1].u = rd32(c, (RW(18) + 36)); if (t) goto L_00164950; }
c->f[0].u = RW(2);
c->f[7].f = (f32)(s32)c->f[0].u; goto L_0016496C;
L_00164950:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[7].f = (f32)(s32)c->f[0].u;
c->f[7].f = fpu(F(7) + F(7));
L_0016496C:;
SET64(2, rd16(c, (RW(4) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_00164984; }
c->f[0].u = RW(2);
c->f[6].f = (f32)(s32)c->f[0].u; goto L_0016499C;
L_00164984:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[6].f = (f32)(s32)c->f[0].u;
c->f[6].f = fpu(F(6) + F(6));
L_0016499C:;
SET32(2, RW(5) << 5);
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
c->fcc = F(0) < F(6);
{ int t = c->fcc;  if (t) goto L_001649C0; }
SET64(5, RD(0) + RD(0));
L_001649C0:;
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
{ u32 t = RW(25); SET64(31, 0x164a6c); SET32(6, RW(29) + 460); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(20) + 144)));
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 1000);
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x164a84); SET32(6, RW(29) + 272); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(20) + 144)));
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 1001);
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x164a9c); SET32(6, RW(29) + 256); rt_call(c, t); }
 goto L_00164AE0;
L_00164AA8:;
SET64(25, (s32)rd32(c, (RW(20) + 144)));
SET64(2, (s32)rd32(c, (RW(21) + 356)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x164ac0); SET32(5, RW(2) + RW(17)); rt_call(c, t); }
 goto L_00164AE0;
L_00164AC8:;
SET64(25, (s32)rd32(c, (RW(20) + 144)));
SET64(2, (s32)rd32(c, (RW(21) + 356)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x164ae0); SET32(5, RW(2) + RW(17)); rt_call(c, t); }
L_00164AE0:;
SET64(3, (s32)rd32(c, (RW(21) + 360)));
SET32(22, RW(22) + 1);
SET32(17, RW(17) + 112);
SET32(3, RW(3) + RW(23));
wr32(c, (RW(3) + 0), RW(20));
SET64(3, rd16(c, (RW(21) + 352)));
SET64(3, RSD(22) < RSD(3));
{ int t = RD(3) != RD(0); SET32(23, RW(23) + 4); if (t) { POLL(); goto L_001646B8; } }
L_00164B08:;
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

void F_00164B40(Ctx *c) { /* func_00164B40 */
ENTER(0x164b40);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 48) & ~15u, &c->r[2]);
SET64(31, 0x164b6c); wr128(c, (RW(4) + 48) & ~15u, &c->r[2]); F_002A1E20(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00164B80(Ctx *c) { /* func_00164B80 */
ENTER(0x164b80);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
SET64(2, RD(4) + RD(0));
wr128(c, (RW(4) + 48) & ~15u, &c->r[3]); return;
}

void F_00164B90(Ctx *c) { /* func_00164B90 */
ENTER(0x164b90);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 352)));
{ int t = RD(3) == RD(0); SET64(21, RD(4) + RD(0)); if (t) goto L_00164DA0; }
SET64(31, 0x164bc4); SET32(4, RW(0) + 48); F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(21) + 400), RW(2)); goto L_00164C24; }
SET64(3, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -30016);
SET32(5, RW(5) + -29984);
wr32(c, (RW(2) + 12), RW(3));
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 0), RW(0));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(2) + 4), RW(0));
SET32(3, RW(3) + -22512);
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
L_00164C24:;
SET64(2, rd16(c, (RW(21) + 352)));
SET64(31, 0x164c30); SET32(4, RW(2) << 2); F_00100530(c);
wr32(c, (RW(21) + 360), RW(2));
SET64(20, RD(0) + RD(0));
SET64(2, rd16(c, (RW(21) + 352)));
SET64(19, RD(0) + RD(0));
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 116), RW(0));
{ int t = RSD(2) <= 0; wr32(c, (RW(29) + 120), RW(0)); if (t) goto L_00164D08; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_00164C58:;
SET64(2, (s32)rd32(c, (RW(21) + 356)));
SET64(5, (s64)(s32)0x490000);
SET32(5, RW(5) + 17824);
SET32(2, RW(2) + RW(18));
SET64(16, rd16(c, (RW(2) + 98)));
SET64(31, 0x164c74); SET32(4, RW(2) + 64); F_0012AB88(c);
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_00164CA0; }
SET64(2, RD(16) & 0xffff);
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_00164C98; }
SET32(3, RW(0) + 691); goto L_00164CA8;
L_00164C98:;
SET32(3, RW(0) + 690); goto L_00164CA8;
L_00164CA0:;
SET32(3, RW(0) + 711);
L_00164CA8:;
SET32(2, RW(0) + 711);
{ int t = RD(3) == RD(2);  if (t) goto L_00164CE0; }
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(29));
SET32(3, RW(2) + -2648);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_00164CD0; }
SET32(20, RW(20) + 1);
L_00164CD0:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
L_00164CE0:;
SET64(2, (s32)rd32(c, (RW(21) + 360)));
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 112);
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, rd16(c, (RW(21) + 352)));
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00164C58; } }
L_00164D08:;
if (RD(20) != RD(0)) { SET64(4, (s32)rd32(c, (RW(21) + 400))); goto L_00164D40; }
SET64(4, (s32)rd32(c, (RW(21) + 400)));
if (RD(4) == RD(0)) { wr32(c, (RW(21) + 400), RW(0)); goto L_00164D30; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x164d2c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(21) + 400), RW(0));
L_00164D30:;
SET64(31, 0x164d38); SET64(4, (s32)rd32(c, (RW(21) + 360))); F_00100430(c);
wr32(c, (RW(21) + 360), RW(0)); goto L_00164DA0;
L_00164D40:;
SET64(6, RD(20) & 0xffff);
SET32(5, RW(0) + 102);
SET64(7, RD(0) + RD(0));
SET64(31, 0x164d54); SET32(8, RW(0) + 1); F_00170670(c);
SET64(4, (s32)rd32(c, (RW(21) + 400)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x164d64); SET64(6, RD(0) + RD(0)); F_00170490(c);
SET64(17, RD(0) + RD(0));
SET32(16, RW(29) + 112);
L_00164D6C:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_00164D90; }
SET64(4, (s32)rd32(c, (RW(21) + 400)));
SET32(2, RW(17) + 690);
SET64(6, RD(3) & 0xffff);
SET64(31, 0x164d8c); SET64(5, RD(2) & 0xffff); F_00170450(c);
L_00164D90:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00164D6C; } }
L_00164DA0:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_00164DD0(Ctx *c) { /* func_00164DD0 */
ENTER(0x164dd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00164E54; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22512);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x164e08);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_00164E40; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(25); SET64(31, 0x164e28); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_00164E3C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30016);
wr32(c, (RW(17) + 12), RW(2));
L_00164E3C:;
SET64(2, RD(16) << 48);
L_00164E40:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00164E58; }
SET64(31, 0x164e54); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_00164E54:;
SET64(2, RD(17) + RD(0));
L_00164E58:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00164E70(Ctx *c) { /* func_00164E70 */
ENTER(0x164e70);
SET64(5, (s64)(s32)0x490000);
SET64(2, RD(0) + RD(0));
SET32(5, RW(5) + -240);
L_00164E7C:;
SET64(3, (s32)rd32(c, (RW(5) + 40)));
if (RD(4) != RD(3)) { SET32(2, RW(2) + 1); goto L_00164E90; }
 goto L_00164EA0;
L_00164E90:;
SET64(3, RSD(2) < (s64)30);
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 76); if (t) { POLL(); goto L_00164E7C; } }
SET32(2, RW(0) + -1);
L_00164EA0:;
 return;
}

void F_00164EB0(Ctx *c) { /* func_00164EB0 */
ENTER(0x164eb0);
SET64(3, (s32)rd32(c, (RW(4) + 48)));
if (RD(3) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00164ECC; }
SET32(2, RW(0) + 4);
if (RD(3) != RD(2)) { SET32(2, RW(0) + 1); goto L_00164ECC; }
SET64(2, RD(0) + RD(0));
L_00164ECC:;
 return;
}

void F_00164EE0(Ctx *c) { /* func_00164EE0 */
ENTER(0x164ee0);
SET32(29, RW(29) + -80);
SET32(3, RW(0) + 2000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 0)));
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_00165EDC; }
SET32(6, RW(0) + 304);
{ int t = RD(5) == RD(6);  if (t) goto L_00165EC0; }
SET32(6, RW(0) + 303);
if (RD(5) == RD(6)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_00165DDC; }
SET32(6, RW(0) + 302);
if (RD(5) == RD(6)) { SET64(3, (s32)rd32(c, (RW(16) + 320))); goto L_00165D18; }
SET32(6, RW(0) + 301);
if (RD(5) == RD(6)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_00165CA8; }
SET32(7, RW(0) + 300);
if (RD(5) == RD(7)) { SET64(3, (s32)rd32(c, (RW(16) + 320))); goto L_00165BE4; }
SET32(6, RW(0) + 200);
if (RD(5) == RD(6)) { SET32(5, RW(0) + 1); goto L_00165ABC; }
SET32(6, RW(0) + 100);
if (RD(5) == RD(6)) { SET64(4, rd8(c, (RW(16) + 272))); goto L_00165AA4; }
SET32(3, RW(0) + 91);
if (RD(5) == RD(3)) { SET32(4, RW(16) + 64); goto L_00165A90; }
SET32(3, RW(0) + 90);
if (RD(5) == RD(3)) { SET64(3, rd16(c, (RW(16) + 292))); goto L_00165A2C; }
SET32(3, RW(0) + 80);
{ int t = RD(5) == RD(3);  if (t) goto L_00165A18; }
SET32(3, RW(0) + 71);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_001659A4; }
SET32(3, RW(0) + 70);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(16) + 320))); goto L_0016597C; }
SET32(3, RW(0) + 61);
{ int t = RD(5) == RD(3);  if (t) goto L_00165960; }
SET32(3, RW(0) + 60);
if (RD(5) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 320))); goto L_00165894; }
SET32(3, RW(0) + 51);
{ int t = RD(5) == RD(3);  if (t) goto L_00165878; }
SET32(3, RW(0) + 50);
if (RD(5) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 320))); goto L_001657AC; }
SET32(3, RW(0) + 42);
{ int t = RD(5) == RD(3);  if (t) goto L_00165790; }
SET32(3, RW(0) + 41);
{ int t = RD(5) == RD(3);  if (t) goto L_00165770; }
SET32(3, RW(0) + 40);
if (RD(5) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 320))); goto L_001656A4; }
SET32(3, RW(0) + 31);
{ int t = RD(5) == RD(3);  if (t) goto L_00165688; }
SET32(3, RW(0) + 30);
if (RD(5) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 320))); goto L_001655BC; }
SET32(3, RW(0) + 22);
{ int t = RD(5) == RD(3);  if (t) goto L_001655A0; }
SET32(3, RW(0) + 21);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_00165500; }
SET32(3, RW(0) + 20);
if (RD(5) == RD(3)) { SET64(2, (s32)rd32(c, (RW(16) + 320))); goto L_001654D8; }
SET32(3, RW(0) + 12);
{ int t = RD(5) == RD(3);  if (t) goto L_001654BC; }
SET32(3, RW(0) + 11);
{ int t = RD(5) == RD(3);  if (t) goto L_0016549C; }
SET32(3, RW(0) + 10);
if (RD(5) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 320))); goto L_001653CC; }
SET32(3, RW(0) + 8);
{ int t = RD(5) == RD(3);  if (t) goto L_001653B0; }
SET32(3, RW(0) + 7);
if (RD(5) == RD(3)) { SET64(3, rd16(c, (RW(16) + 288))); goto L_0016533C; }
SET32(3, RW(0) + 6);
if (RD(5) == RD(3)) { SET64(17, (s32)rd32(c, (RW(16) + 324))); goto L_001652F0; }
SET32(3, RW(0) + 5);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 44); goto L_00165248; }
SET32(3, RW(0) + 4);
if (RD(5) == RD(3)) { SET64(3, rd16(c, (RW(16) + 290))); goto L_001651BC; }
SET32(2, RW(0) + 3);
{ int t = RD(5) == RD(2);  if (t) goto L_0016519C; }
SET32(2, RW(0) + 2);
if (RD(5) == RD(2)) { SET64(5, rd16(c, (RW(16) + 294))); goto L_00165184; }
SET32(2, RW(0) + 1);
{ int t = RD(5) == RD(2);  if (t) goto L_00165164; }
if (RD(5) == RD(0)) { SET32(4, RW(0) + 36); goto L_001650BC; }
 goto L_00165EEC;
L_001650BC:;
SET64(31, 0x1650c4);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001650F4; }
SET64(31, 0x1650d4); SET64(4, RD(17) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_001650F4:;
wr32(c, (RW(16) + 244), RW(17));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(2, (s32)rd32(c, (RW(16) + 320)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
SET64(5, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(25); SET64(31, 0x165110); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x165124);  rt_call(c, t); }
SET64(31, 0x16512c); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(16) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16514c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 270), (u8)RW(3));
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165164:;
SET64(31, 0x16516c);  F_0016A2D0(c);
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_00165EF8; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165184:;
SET64(31, 0x16518c);  F_001696A0(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_0016519C:;
SET64(31, 0x1651a4);  F_00169290(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00165EF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_001651BC:;
SET64(9, RD(0) + RD(0));
{ int t = RSD(3) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00165238; }
SET64(4, rd16(c, (RW(16) + 288)));
L_001651CC:;
{ int t = RSD(4) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_00165220; }
SET64(6, RD(8) & 0xffff);
L_001651D8:;
SET64(5, RD(7) & 0xffff);
mul_s(c, 0, 3, RSW(6), RSW(4));
SET32(3, RW(5) + RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 296)));
SET32(3, RW(3) << 2);
SET32(4, RW(4) + RW(3));
SET64(3, rd16(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_00165208; }
wr16(c, (RW(4) + 2), (u16)RW(9));
SET32(9, RW(9) + 1);
L_00165208:;
SET64(4, rd16(c, (RW(16) + 288)));
SET32(7, RW(7) + 1);
SET64(3, RSD(7) < RSD(4));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_001651D8; } }
L_00165220:;
SET64(3, rd16(c, (RW(16) + 290)));
SET32(8, RW(8) + 1);
SET64(3, RSD(8) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, rd16(c, (RW(16) + 288))); { POLL(); goto L_001651CC; } }
L_00165238:;
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165248:;
SET64(31, 0x165250);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_00165294; }
SET64(31, 0x165260); SET64(4, RD(18) + RD(0)); F_00157630(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -26960);
SET32(2, RW(2) + -23312);
wr32(c, (RW(18) + 16), RW(3));
wr32(c, (RW(18) + 20), RW(0));
wr32(c, (RW(18) + 24), RW(0));
wr32(c, (RW(18) + 28), RW(0));
wr16(c, (RW(18) + 32), (u16)RW(0));
wr16(c, (RW(18) + 34), (u16)RW(0));
wr32(c, (RW(18) + 16), RW(2));
wr32(c, (RW(18) + 36), RW(0));
wr32(c, (RW(18) + 40), RW(0));
L_00165294:;
wr32(c, (RW(16) + 324), RW(18));
SET64(2, (s32)rd32(c, (RW(16) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)rd32(c, (RW(2) + 40)));
SET64(31, 0x1652ac); SET64(4, RD(18) + RD(0)); F_00157510(c);
SET64(31, 0x1652b4); SET64(4, RD(18) + RD(0)); F_001570E0(c);
SET64(31, 0x1652bc); SET64(4, RD(2) + RD(0)); F_00100530(c);
wr32(c, (RW(18) + 36), RW(2));
SET64(4, RD(18) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x1652d4); SET64(7, RD(0) + RD(0)); F_001572D0(c);
wr32(c, (RW(18) + 40), RW(17));
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 270), (u8)RW(3));
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_001652F0:;
SET64(31, 0x1652f8); SET64(4, RD(17) + RD(0)); F_00157250(c);
if (RD(2) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_00165308; }
SET64(3, RD(0) + RD(0)); goto L_00165320;
L_00165308:;
SET64(31, 0x165310);  F_00157110(c);
SET64(5, (s32)rd32(c, (RW(17) + 36)));
SET64(31, 0x16531c); SET64(4, RD(17) + RD(0)); F_001569F0(c);
SET64(3, RD(0) + (s64)1);
L_00165320:;
{ int t = RD(3) == RD(0);  if (t) goto L_00165EF4; }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_0016533C:;
SET64(17, RD(0) + RD(0));
SET64(2, rd16(c, (RW(16) + 290)));
mul_s(c, 0, 18, RSW(3), RSW(2));
SET32(2, RW(18) << 3);
SET32(3, RW(2) - RW(18));
SET32(2, RW(3) << 2);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 4);
SET64(31, 0x165364); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00165394; }
SET64(5, (s64)(s32)0x160000);
SET64(6, (s64)(s32)0x160000);
SET64(8, RD(18) + RD(0));
SET32(17, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + 14736);
SET32(6, RW(6) + 14512);
SET64(31, 0x165390); SET32(7, RW(0) + 336); F_00102580(c);
SET64(19, RD(2) + RD(0));
L_00165394:;
wr32(c, (RW(16) + 300), RW(19));
wr16(c, (RW(16) + 264), (u16)RW(0));
wr16(c, (RW(16) + 266), (u16)RW(0));
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_001653B0:;
SET64(31, 0x1653b8);  F_00163AE0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00165EF4; }
SET32(3, RW(0) + 10);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_001653CC:;
SET64(18, (s32)rd32(c, (RW(3) + 48)));
if (RD(18) != RD(0)) { SET32(4, RW(0) + 36); goto L_001653E4; }
wr16(c, (RW(16) + 328), (u16)RW(0));
SET64(4, RD(0) + RD(0)); goto L_0016547C;
L_001653E4:;
SET64(31, 0x1653ec);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016541C; }
SET64(31, 0x1653fc); SET64(4, RD(17) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_0016541C:;
wr32(c, (RW(16) + 244), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x165434); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x165448);  rt_call(c, t); }
SET64(31, 0x165450); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(16) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x165470); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(4, RD(0) + (s64)1);
wr8(c, (RW(16) + 270), (u8)RW(3));
L_0016547C:;
if (RD(4) == RD(0)) { SET32(3, RW(0) + 20); goto L_00165494; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165494:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_0016549C:;
SET64(31, 0x1654a4);  F_001674E0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00165EF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_001654BC:;
SET64(31, 0x1654c4);  F_001671F0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00165EF4; }
SET32(3, RW(0) + 20);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_001654D8:;
SET64(31, 0x1654e0); SET64(5, (s32)rd32(c, (RW(2) + 56))); F_00166670(c);
if (RD(2) == RD(0)) { SET32(3, RW(0) + 30); goto L_001654F8; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_001654F8:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165500:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x165510);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_00165520; }
SET64(3, RD(0) + RD(0)); goto L_00165588;
L_00165520:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x165530);  rt_call(c, t); }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 244)));
SET64(2, rd16(c, (RW(2) + 32)));
wr16(c, (RW(16) + 340), (u16)RW(2));
SET64(2, rd16(c, (RW(16) + 340)));
SET64(31, 0x16554c); SET32(4, RW(2) << 2); F_00100530(c);
wr32(c, (RW(16) + 348), RW(2));
SET64(3, rd16(c, (RW(16) + 340)));
{ int t = RSD(3) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_00165580; }
SET64(4, RD(0) + RD(0));
L_00165560:;
SET64(3, (s32)rd32(c, (RW(16) + 348)));
SET32(5, RW(5) + 1);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(3) + 0), RW(0));
SET64(3, rd16(c, (RW(16) + 340)));
SET64(3, RSD(5) < RSD(3));
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_00165560; } }
L_00165580:;
wr16(c, (RW(16) + 268), (u16)RW(0));
SET64(3, RD(0) + (s64)1);
L_00165588:;
{ int t = RD(3) == RD(0);  if (t) goto L_00165EF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_001655A0:;
SET64(31, 0x1655a8);  F_00166410(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00165EF4; }
SET32(3, RW(0) + 30);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_001655BC:;
SET64(18, (s32)rd32(c, (RW(3) + 52)));
if (RD(18) != RD(0)) { SET32(4, RW(0) + 36); goto L_001655D0; }
SET64(4, RD(0) + RD(0)); goto L_00165668;
L_001655D0:;
SET64(31, 0x1655d8);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00165608; }
SET64(31, 0x1655e8); SET64(4, RD(17) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_00165608:;
wr32(c, (RW(16) + 244), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x165620); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x165634);  rt_call(c, t); }
SET64(31, 0x16563c); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(16) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16565c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(4, RD(0) + (s64)1);
wr8(c, (RW(16) + 270), (u8)RW(3));
L_00165668:;
if (RD(4) == RD(0)) { SET32(3, RW(0) + 40); goto L_00165680; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165680:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165688:;
SET64(31, 0x165690);  F_00166FF0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00165EF4; }
SET32(3, RW(0) + 40);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_001656A4:;
SET64(18, (s32)rd32(c, (RW(3) + 60)));
if (RD(18) != RD(0)) { SET32(4, RW(0) + 36); goto L_001656B8; }
SET64(4, RD(0) + RD(0)); goto L_00165750;
L_001656B8:;
SET64(31, 0x1656c0);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001656F0; }
SET64(31, 0x1656d0); SET64(4, RD(17) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_001656F0:;
wr32(c, (RW(16) + 244), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x165708); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16571c);  rt_call(c, t); }
SET64(31, 0x165724); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(16) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x165744); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(4, RD(0) + (s64)1);
wr8(c, (RW(16) + 270), (u8)RW(3));
L_00165750:;
if (RD(4) == RD(0)) { SET32(3, RW(0) + 50); goto L_00165768; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165768:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165770:;
SET64(31, 0x165778);  F_00166E60(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00165EF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165790:;
SET64(31, 0x165798);  F_00166D40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00165EF4; }
SET32(3, RW(0) + 50);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_001657AC:;
SET64(18, (s32)rd32(c, (RW(3) + 64)));
if (RD(18) != RD(0)) { SET32(4, RW(0) + 36); goto L_001657C0; }
SET64(4, RD(0) + RD(0)); goto L_00165858;
L_001657C0:;
SET64(31, 0x1657c8);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001657F8; }
SET64(31, 0x1657d8); SET64(4, RD(17) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_001657F8:;
wr32(c, (RW(16) + 244), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x165810); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x165824);  rt_call(c, t); }
SET64(31, 0x16582c); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(16) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16584c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(4, RD(0) + (s64)1);
wr8(c, (RW(16) + 270), (u8)RW(3));
L_00165858:;
if (RD(4) == RD(0)) { SET32(3, RW(0) + 60); goto L_00165870; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165870:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165878:;
SET64(31, 0x165880);  F_00166AC0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00165EF4; }
SET32(3, RW(0) + 60);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165894:;
SET64(18, (s32)rd32(c, (RW(3) + 68)));
if (RD(18) != RD(0)) { SET32(4, RW(0) + 36); goto L_001658A8; }
SET64(4, RD(0) + RD(0)); goto L_00165940;
L_001658A8:;
SET64(31, 0x1658b0);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001658E0; }
SET64(31, 0x1658c0); SET64(4, RD(17) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_001658E0:;
wr32(c, (RW(16) + 244), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1658f8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16590c);  rt_call(c, t); }
SET64(31, 0x165914); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(16) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x165934); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(4, RD(0) + (s64)1);
wr8(c, (RW(16) + 270), (u8)RW(3));
L_00165940:;
if (RD(4) == RD(0)) { SET32(3, RW(0) + 70); goto L_00165958; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165958:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165960:;
SET64(31, 0x165968);  F_00166760(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00165EF4; }
SET32(3, RW(0) + 70);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_0016597C:;
SET64(31, 0x165984); SET64(5, (s32)rd32(c, (RW(2) + 72))); F_00166320(c);
if (RD(2) == RD(0)) { SET32(3, RW(0) + 80); goto L_0016599C; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_0016599C:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_001659A4:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1659b4);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_001659C4; }
SET64(3, RD(0) + RD(0)); goto L_00165A04;
L_001659C4:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1659d4);  rt_call(c, t); }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 244), RW(0)); goto L_001659F8; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1659f4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 244), RW(0));
L_001659F8:;
SET64(31, 0x165a00); SET64(4, (s32)rd32(c, (RW(16) + 304))); F_0014A6E0(c);
SET64(3, RD(0) + (s64)1);
L_00165A04:;
{ int t = RD(3) == RD(0);  if (t) goto L_00165EF4; }
SET32(3, RW(0) + 80);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165A18:;
SET64(31, 0x165a20);  F_00164B90(c);
SET32(3, RW(0) + 90);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165A2C:;
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00165A80; }
L_00165A34:;
SET64(31, 0x165a3c);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(2, RD(17) & 0xffff);
SET64(5, (s32)rd32(c, (RW(4) + 236)));
SET32(3, RW(2) << 2);
SET64(2, (s32)rd32(c, (RW(16) + 312)));
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x165a68);  rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 292)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00165A34; } }
L_00165A80:;
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165A90:;
SET64(31, 0x165a98);  F_002A1E20(c);
SET32(3, RW(0) + 100);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165AA4:;
if (RD(4) == RD(0)) { wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4; }
wr16(c, (RW(16) + 264), (u16)RW(0));
wr16(c, (RW(16) + 266), (u16)RW(0));
wr16(c, (RW(16) + 0), (u16)RW(7)); goto L_00165EF4;
L_00165ABC:;
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
{ int t = RD(5) == RD(4);  if (t) goto L_00165EF4; }
SET32(4, RW(8) + 1);
wr16(c, (RW(16) + 264), (u16)RW(4));
SET64(5, rd16(c, (RW(16) + 264)));
SET64(4, rd16(c, (RW(16) + 288)));
SET64(4, RSD(5) < RSD(4));
if (RD(4) != RD(0)) { SET64(5, rd16(c, (RW(16) + 266))); goto L_00165B4C; }
wr16(c, (RW(16) + 264), (u16)RW(0));
SET64(4, rd16(c, (RW(16) + 266)));
SET32(4, RW(4) + 1);
wr16(c, (RW(16) + 266), (u16)RW(4));
SET64(5, rd16(c, (RW(16) + 266)));
SET64(4, rd16(c, (RW(16) + 290)));
SET64(4, RSD(5) < RSD(4));
{ int t = RD(4) != RD(0);  if (t) goto L_00165B48; }
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165B48:;
SET64(5, rd16(c, (RW(16) + 266)));
L_00165B4C:;
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
if (RD(3) == RD(0)) { SET32(3, RW(6) + 1); goto L_00165B9C; }
SET64(31, 0x165b8c); SET64(5, RD(0) + RD(0)); F_0016C130(c);
{ int t = RD(2) == RD(0);  if (t) { POLL(); goto L_00165B48; } }
 goto L_00165EF4;
L_00165B9C:;
wr16(c, (RW(16) + 264), (u16)RW(3));
SET64(4, rd16(c, (RW(16) + 264)));
SET64(3, rd16(c, (RW(16) + 288)));
SET64(3, RSD(4) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00165B48; } }
wr16(c, (RW(16) + 264), (u16)RW(0));
SET64(3, rd16(c, (RW(16) + 266)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 266), (u16)RW(3));
SET64(4, rd16(c, (RW(16) + 266)));
SET64(3, rd16(c, (RW(16) + 290)));
SET64(3, RSD(4) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00165B48; } }
SET32(3, RW(0) + 2000);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165BE4:;
SET64(18, (s32)rd32(c, (RW(3) + 40)));
if (RD(18) != RD(0)) { SET32(4, RW(0) + 36); goto L_00165BF8; }
SET64(4, RD(0) + RD(0)); goto L_00165C90;
L_00165BF8:;
SET64(31, 0x165c00);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00165C30; }
SET64(31, 0x165c10); SET64(4, RD(17) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_00165C30:;
wr32(c, (RW(16) + 244), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x165c48); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x165c5c);  rt_call(c, t); }
SET64(31, 0x165c64); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(16) + 252), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x165c84); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(4, RD(0) + (s64)1);
wr8(c, (RW(16) + 270), (u8)RW(3));
L_00165C90:;
{ int t = RD(4) == RD(0);  if (t) goto L_00165EF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165CA8:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x165cb8);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_00165CC8; }
SET64(3, RD(0) + RD(0)); goto L_00165D00;
L_00165CC8:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x165cd8);  rt_call(c, t); }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 244), RW(0)); goto L_00165CFC; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x165cf8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 244), RW(0));
L_00165CFC:;
SET64(3, RD(0) + (s64)1);
L_00165D00:;
{ int t = RD(3) == RD(0);  if (t) goto L_00165EF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165D18:;
SET64(18, (s32)rd32(c, (RW(3) + 44)));
if (RD(18) != RD(0)) { SET32(4, RW(0) + 36); goto L_00165D2C; }
SET64(4, RD(0) + RD(0)); goto L_00165DC4;
L_00165D2C:;
SET64(31, 0x165d34);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00165D64; }
SET64(31, 0x165d44); SET64(4, RD(17) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_00165D64:;
wr32(c, (RW(16) + 244), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x165d7c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x165d90);  rt_call(c, t); }
SET64(31, 0x165d98); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(16) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x165db8); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(4, RD(0) + (s64)1);
wr8(c, (RW(16) + 270), (u8)RW(3));
L_00165DC4:;
{ int t = RD(4) == RD(0);  if (t) goto L_00165EF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165DDC:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x165dec);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_00165DFC; }
SET64(3, RD(0) + RD(0)); goto L_00165EA8;
L_00165DFC:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x165e0c);  rt_call(c, t); }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { SET32(4, RW(0) + 44); goto L_00165E30; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x165e2c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(4, RW(0) + 44);
L_00165E30:;
SET64(31, 0x165e38); wr32(c, (RW(16) + 244), RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00165E7C; }
SET64(31, 0x165e48); SET64(4, RD(19) + RD(0)); F_00157630(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -26960);
SET32(2, RW(2) + -23904);
wr32(c, (RW(19) + 16), RW(3));
wr32(c, (RW(19) + 20), RW(0));
wr32(c, (RW(19) + 24), RW(0));
wr32(c, (RW(19) + 28), RW(0));
wr16(c, (RW(19) + 32), (u16)RW(0));
wr16(c, (RW(19) + 34), (u16)RW(0));
wr32(c, (RW(19) + 16), RW(2));
wr32(c, (RW(19) + 36), RW(0));
wr32(c, (RW(19) + 40), RW(0));
L_00165E7C:;
wr32(c, (RW(16) + 256), RW(19));
SET64(4, RD(19) + RD(0));
SET64(17, (s32)rd32(c, (RW(16) + 252)));
SET64(18, (s32)rd32(c, (RW(16) + 248)));
SET64(31, 0x165e94); SET64(5, RD(17) + RD(0)); F_001569F0(c);
wr32(c, (RW(19) + 36), RW(17));
SET64(3, RD(0) + (s64)1);
wr32(c, (RW(19) + 40), RW(18));
wr16(c, (RW(16) + 264), (u16)RW(0));
wr16(c, (RW(16) + 266), (u16)RW(0));
L_00165EA8:;
{ int t = RD(3) == RD(0);  if (t) goto L_00165EF4; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165EC0:;
SET64(31, 0x165ec8);  F_00165FD0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00165EF4; }
SET32(3, RW(0) + 2000);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00165EF4;
L_00165EDC:;
SET64(31, 0x165ee4);  F_00139AB0(c);
 goto L_00165EF4;
L_00165EEC:;
SET64(31, 0x165ef4);  F_00139AB0(c);
L_00165EF4:;
SET64(31, rd64(c, (RW(29) + 64)));
L_00165EF8:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00165F10(Ctx *c) { /* func_00165F10 */
ENTER(0x165f10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x165f28); SET64(16, RD(4) + RD(0)); F_00139590(c);
SET64(2, rd8(c, (RW(2) + 32)));
if (RD(2) == RD(0)) { SET32(17, RW(0) + 1); goto L_00165F38; }
SET32(17, RW(0) + 2);
L_00165F38:;
SET64(31, 0x165f40);  F_002BFA70(c);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 256); goto L_00165F4C; }
SET32(2, RW(0) + 240);
L_00165F4C:;
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
L_00165F78:;
SET64(31, 0x165f80); SET64(4, RD(16) + RD(0)); F_00164EE0(c);
SET64(31, 0x165f88);  F_002A78D0(c);
SET64(1, RD(2) < RD(17));
{ int t = RD(1) == RD(0);  if (t) goto L_00165FB0; }
SET64(3, rd8(c, (RW(16) + 270)));
{ int t = RD(3) != RD(0);  if (t) goto L_00165FB0; }
SET64(4, (s32)rd32(c, (RW(16) + 48)));
SET32(3, RW(0) + 3);
{ int t = RD(4) == RD(3);  if (t) { POLL(); goto L_00165F78; } }
L_00165FB0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00165FD0(Ctx *c) { /* func_00165FD0 */
ENTER(0x165fd0);
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
if (RD(2) == RD(0)) { SET32(3, RW(4) << 3); goto L_00166094; }
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
SET64(31, 0x16604c); SET64(4, RD(16) + RD(0)); F_0014AA10(c);
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
{ u32 t = RW(25); SET64(31, 0x16608c); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(6, rd16(c, (RW(19) + 266))); goto L_001660C8;
L_00166094:;
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
{ u32 t = RW(25); SET64(31, 0x1660c4); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(6, rd16(c, (RW(19) + 266)));
L_001660C8:;
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
{ int t = RD(3) != RD(2);  if (t) goto L_00166150; }
SET64(2, rd16(c, (RW(18) + 292)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00166150; }
SET64(16, RD(0) + RD(0));
L_00166124:;
SET64(2, (s32)rd32(c, (RW(18) + 288)));
SET64(6, RD(17) & 0xffff);
SET32(2, RW(2) + RW(16));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x16613c); SET64(4, RD(18) + RD(0)); F_00161510(c);
SET64(2, rd16(c, (RW(18) + 292)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00166124; } }
L_00166150:;
SET64(2, rd16(c, (RW(19) + 292)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001661C8; }
SET64(16, RD(0) + RD(0));
L_00166160:;
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
{ int t = RD(3) != RD(2); SET64(5, (s32)rd32(c, (RW(5) + 0))); if (t) goto L_001661B0; }
SET64(31, 0x1661b0); SET64(6, RD(17) & 0xffff); F_00161510(c);
L_001661B0:;
SET64(2, rd16(c, (RW(19) + 292)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00166160; } }
L_001661C8:;
SET64(2, rd16(c, (RW(19) + 264)));
SET32(2, RW(2) + 1);
wr16(c, (RW(19) + 264), (u16)RW(2));
SET64(3, rd16(c, (RW(19) + 264)));
SET64(2, rd16(c, (RW(19) + 288)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00166250; }
wr16(c, (RW(19) + 264), (u16)RW(0));
SET64(2, rd16(c, (RW(19) + 266)));
SET32(2, RW(2) + 1);
wr16(c, (RW(19) + 266), (u16)RW(2));
SET64(3, rd16(c, (RW(19) + 266)));
SET64(2, rd16(c, (RW(19) + 290)));
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_0016624C; }
SET64(4, (s32)rd32(c, (RW(19) + 256)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 256), RW(0)); goto L_0016622C; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x166228); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 256), RW(0));
L_0016622C:;
SET64(31, 0x166234); SET64(4, (s32)rd32(c, (RW(19) + 252))); F_001004B0(c);
wr32(c, (RW(19) + 252), RW(0));
SET64(31, 0x166240); SET64(4, (s32)rd32(c, (RW(19) + 248))); F_001004B0(c);
wr32(c, (RW(19) + 248), RW(0));
SET32(2, RW(0) + 1); goto L_00166250;
L_0016624C:;
SET64(2, RD(0) + RD(0));
L_00166250:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00166270(Ctx *c) { /* func_00166270 */
ENTER(0x166270);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001662E8; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -23904);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x1662a8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_001662D4; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + -26960);
SET64(31, 0x1662c4); wr32(c, (RW(17) + 16), RW(2)); F_00156AD0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1662d0); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(2, RD(16) << 48);
L_001662D4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001662EC; }
SET64(31, 0x1662e8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001662E8:;
SET64(2, RD(17) + RD(0));
L_001662EC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00166300(Ctx *c) { /* func_00166300 */
ENTER(0x166300);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 36), RW(0));
SET64(31, 0x166314); wr32(c, (RW(4) + 40), RW(0)); F_00156AD0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00166320(Ctx *c) { /* func_00166320 */
ENTER(0x166320);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(17, RD(5) + RD(0));
{ int t = RD(17) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_0016634C; }
SET64(2, rd8(c, (RW(18) + 396)));
if (RD(2) == RD(0)) { SET32(4, RW(0) + 36); goto L_00166358; }
L_0016634C:;
wr32(c, (RW(18) + 304), RW(0));
SET64(2, RD(0) + RD(0)); goto L_001663EC;
L_00166358:;
SET64(31, 0x166360);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00166390; }
SET64(31, 0x166370); SET64(4, RD(16) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_00166390:;
wr32(c, (RW(18) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1663a8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x1663bc);  rt_call(c, t); }
SET64(31, 0x1663c4); SET64(4, RD(2) + RD(0)); F_00100530(c);
wr32(c, (RW(18) + 304), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1663e4); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(18) + 270), (u8)RW(2));
L_001663EC:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_00166410(Ctx *c) { /* func_00166410 */
ENTER(0x166410);
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
SET64(31, 0x166454); SET32(19, RW(2) + RW(3)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001664D8; }
SET32(4, RW(18) + 2236);
SET32(17, RW(0) + 1);
SET64(31, 0x16646c); wr32(c, (RW(18) + 256), RW(4)); F_00141AA0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x166478); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET64(31, 0x166480); SET32(4, RW(18) + 288); F_00240AE0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11552);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 276), RW(2));
SET32(6, RW(6) + -11428);
SET64(5, (s32)rd32(c, (RW(18) + 256)));
SET32(3, RW(3) + -11480);
SET32(2, RW(18) + 2236);
SET32(4, RW(18) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(18) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x1664c0); wr32(c, (RW(3) + 20), RW(2)); F_00160EA0(c);
SET64(31, 0x1664c8); SET32(4, RW(18) + 1040); F_00160EA0(c);
SET64(31, 0x1664d0); SET32(4, RW(18) + 1632); F_00160EA0(c);
wr32(c, (RW(18) + 2224), RW(0));
wr32(c, (RW(18) + 2228), RW(0));
L_001664D8:;
SET64(3, rd16(c, (RW(16) + 268)));
SET64(4, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 348)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x1664f4); wr32(c, (RW(2) + 0), RW(18)); F_0013FED0(c);
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
{ u32 t = RW(25); SET64(31, 0x166528); SET64(9, RD(6) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 312)));
{ int t = RD(2) == RD(0);  if (t) goto L_00166588; }
SET64(2, rd16(c, (RW(16) + 292)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00166588; }
SET64(17, RD(0) + RD(0));
L_00166544:;
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
{ u32 t = RW(25); SET64(31, 0x166574); SET64(6, RD(18) & 0xffff); rt_call(c, t); }
SET64(2, rd16(c, (RW(16) + 292)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00166544; } }
L_00166588:;
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
SET64(31, 0x1665d8); wr128(c, (RW(3) + 336) & ~15u, &c->r[2]); F_002A1E20(c);
SET64(3, rd16(c, (RW(16) + 268)));
SET64(2, (s32)rd32(c, (RW(16) + 348)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1665fc); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(2, rd16(c, (RW(16) + 268)));
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 268), (u16)RW(2));
SET64(3, rd16(c, (RW(16) + 268)));
SET64(2, rd16(c, (RW(16) + 340)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00166650; }
wr16(c, (RW(16) + 268), (u16)RW(0));
SET64(31, 0x166628); SET64(4, (s32)rd32(c, (RW(16) + 248))); F_001004B0(c);
wr32(c, (RW(16) + 248), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 244), RW(0)); goto L_0016664C; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x166648); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 244), RW(0));
L_0016664C:;
SET32(2, RW(0) + 1);
L_00166650:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00166670(Ctx *c) { /* func_00166670 */
ENTER(0x166670);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(17, RD(5) + RD(0));
{ int t = RD(17) != RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_00166698; }
SET64(2, RD(0) + RD(0)); goto L_00166740;
L_00166698:;
if (RD(17) != RD(0)) { SET32(4, RW(0) + 36); goto L_001666AC; }
wr16(c, (RW(18) + 340), (u16)RW(0));
SET64(2, RD(0) + RD(0)); goto L_00166740;
L_001666AC:;
SET64(31, 0x1666b4);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001666E4; }
SET64(31, 0x1666c4); SET64(4, RD(16) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_001666E4:;
wr32(c, (RW(18) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1666fc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x166710);  rt_call(c, t); }
SET64(31, 0x166718); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(18) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x166738); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(18) + 270), (u8)RW(2));
L_00166740:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_00166760(Ctx *c) { /* func_00166760 */
ENTER(0x166760);
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
{ u32 t = RW(25); SET64(31, 0x166790);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_001667A0; }
SET64(2, RD(0) + RD(0)); goto L_00166AA0;
L_001667A0:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1667b0);  rt_call(c, t); }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { SET32(4, RW(0) + 768); goto L_001667D4; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1667d0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(4, RW(0) + 768);
L_001667D4:;
SET64(31, 0x1667dc); wr32(c, (RW(16) + 244), RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001668A8; }
SET32(4, RW(17) + 24);
SET32(3, RW(17) + 48);
wr32(c, (RW(17) + 304), RW(4));
SET32(2, RW(17) + 336);
wr32(c, (RW(17) + 0), RW(3));
SET32(18, RW(0) + 1);
SET64(31, 0x166804); wr32(c, (RW(17) + 4), RW(2)); F_00141AA0(c);
SET32(4, RW(17) + 48);
SET64(31, 0x166810); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET32(4, RW(17) + 336);
SET64(31, 0x16681c); SET64(5, RD(18) + RD(0)); F_002A25B0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x166828); SET64(5, RD(0) + RD(0)); F_00150D60(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -23856);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 12), RW(2));
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET32(9, RW(9) + -23760);
SET32(8, RW(8) + -23796);
SET32(7, RW(7) + -23688);
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
L_001668A8:;
wr32(c, (RW(16) + 388), RW(17));
SET32(2, RW(0) + 67);
SET64(3, rd8(c, (RW(16) + 397)));
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
wr8(c, (RW(17) + 20), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 248)));
SET64(3, (s8)rd8(c, (RW(4) + 0)));
{ int t = RD(3) != RD(2); SET64(17, RD(4) + RD(0)); if (t) goto L_00166900; }
SET64(3, (s8)rd8(c, (RW(4) + 1)));
SET32(2, RW(0) + 77);
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_00166904; }
SET64(3, (s8)rd8(c, (RW(4) + 2)));
SET32(2, RW(0) + 80);
{ int t = RD(3) != RD(2);  if (t) goto L_00166900; }
SET64(3, (s8)rd8(c, (RW(4) + 3)));
SET32(2, RW(0) + 83);
if (RD(3) == RD(2)) { SET64(2, RD(0) + (s64)1); goto L_00166904; }
L_00166900:;
SET64(2, RD(0) + RD(0));
L_00166904:;
{ int t = RD(2) == RD(0);  if (t) goto L_00166958; }
SET64(31, 0x166914); SET64(4, (s32)rd32(c, (RW(17) + 8))); F_00100320(c);
SET64(18, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x166924); SET64(5, RD(18) + RD(0)); F_001735D0(c);
SET64(31, 0x16692c); SET64(4, RD(18) + RD(0)); F_0013FED0(c);
SET64(4, (s32)rd32(c, (RW(16) + 388)));
SET32(6, RW(0) + 1);
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x166948); SET64(7, RD(6) + RD(0)); rt_call(c, t); }
SET64(31, 0x166950); SET64(4, RD(18) + RD(0)); F_001004B0(c);
SET64(2, (s32)rd32(c, (RW(16) + 312))); goto L_00166980;
L_00166958:;
SET64(31, 0x166960);  F_0013FED0(c);
SET64(4, (s32)rd32(c, (RW(16) + 388)));
SET32(6, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(16) + 248)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16697c); SET64(7, RD(6) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 312)));
L_00166980:;
{ int t = RD(2) == RD(0);  if (t) goto L_001669D0; }
SET64(2, rd16(c, (RW(16) + 292)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001669D0; }
SET64(17, RD(0) + RD(0));
L_00166998:;
SET64(3, (s32)rd32(c, (RW(16) + 388)));
SET64(2, (s32)rd32(c, (RW(16) + 312)));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(17));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x1669bc); SET64(6, RD(18) & 0xffff); rt_call(c, t); }
SET64(2, rd16(c, (RW(16) + 292)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00166998; } }
L_001669D0:;
SET64(2, (s32)rd32(c, (RW(16) + 388)));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 256)));
wr32(c, (RW(2) + 4), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 388)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1669fc); SET64(5, RD(0) | 0x8002); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 388)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(3) + 264)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00166A90; }
SET64(17, RD(0) + RD(0));
L_00166A14:;
SET64(2, (s32)rd32(c, (RW(3) + 272)));
SET32(2, RW(2) + RW(17));
SET64(19, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(19) == RD(0);  if (t) goto L_00166A70; }
SET32(4, RW(19) + 240);
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 7);
SET64(7, RD(0) + RD(0));
SET64(31, 0x166a40); SET64(8, RD(0) + RD(0)); F_002B1350(c);
SET32(4, RW(19) + 240);
SET64(5, RD(0) + RD(0));
SET64(31, 0x166a50); SET64(6, RD(0) + RD(0)); F_002B1310(c);
SET32(4, RW(19) + 240);
SET32(5, RW(0) + 1);
SET64(31, 0x166a60); SET32(6, RW(0) + 2); F_002B12E0(c);
SET64(25, (s32)rd32(c, (RW(19) + 248)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x166a70); SET32(4, RW(19) + 240); rt_call(c, t); }
L_00166A70:;
SET64(2, (s32)rd32(c, (RW(16) + 388)));
SET32(18, RW(18) + 1);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(3) + 264)));
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00166A14; } }
L_00166A90:;
SET64(31, 0x166a98); SET64(4, (s32)rd32(c, (RW(16) + 248))); F_001004B0(c);
wr32(c, (RW(16) + 248), RW(0));
SET32(2, RW(0) + 1);
L_00166AA0:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00166AC0(Ctx *c) { /* func_00166AC0 */
ENTER(0x166ac0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x166aec);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_00166AFC; }
SET64(2, RD(0) + RD(0)); goto L_00166D28;
L_00166AFC:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x166b0c);  rt_call(c, t); }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { SET32(4, RW(0) + 2272); goto L_00166B30; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x166b2c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(4, RW(0) + 2272);
L_00166B30:;
SET64(31, 0x166b38); wr32(c, (RW(16) + 244), RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_00166BBC; }
SET32(4, RW(18) + 2236);
SET32(17, RW(0) + 1);
SET64(31, 0x166b50); wr32(c, (RW(18) + 256), RW(4)); F_00141AA0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x166b5c); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET64(31, 0x166b64); SET32(4, RW(18) + 288); F_00240AE0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11552);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 276), RW(2));
SET32(6, RW(6) + -11428);
SET64(5, (s32)rd32(c, (RW(18) + 256)));
SET32(3, RW(3) + -11480);
SET32(2, RW(18) + 2236);
SET32(4, RW(18) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(18) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x166ba4); wr32(c, (RW(3) + 20), RW(2)); F_00160EA0(c);
SET64(31, 0x166bac); SET32(4, RW(18) + 1040); F_00160EA0(c);
SET64(31, 0x166bb4); SET32(4, RW(18) + 1632); F_00160EA0(c);
wr32(c, (RW(18) + 2224), RW(0));
wr32(c, (RW(18) + 2228), RW(0));
L_00166BBC:;
wr32(c, (RW(16) + 392), RW(18));
SET32(2, RW(0) + 67);
SET64(4, (s32)rd32(c, (RW(16) + 248)));
SET64(3, (s8)rd8(c, (RW(4) + 0)));
{ int t = RD(3) != RD(2); SET64(17, RD(4) + RD(0)); if (t) goto L_00166C04; }
SET64(3, (s8)rd8(c, (RW(4) + 1)));
SET32(2, RW(0) + 77);
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_00166C08; }
SET64(3, (s8)rd8(c, (RW(4) + 2)));
SET32(2, RW(0) + 80);
{ int t = RD(3) != RD(2);  if (t) goto L_00166C04; }
SET64(3, (s8)rd8(c, (RW(4) + 3)));
SET32(2, RW(0) + 83);
if (RD(3) == RD(2)) { SET64(2, RD(0) + (s64)1); goto L_00166C08; }
L_00166C04:;
SET64(2, RD(0) + RD(0));
L_00166C08:;
{ int t = RD(2) == RD(0);  if (t) goto L_00166C64; }
SET64(31, 0x166c18); SET64(4, (s32)rd32(c, (RW(17) + 8))); F_00100320(c);
SET64(18, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x166c28); SET64(5, RD(18) + RD(0)); F_001735D0(c);
SET64(31, 0x166c30); SET64(4, RD(18) + RD(0)); F_0013FED0(c);
SET64(4, (s32)rd32(c, (RW(16) + 392)));
SET32(6, RW(0) + 1);
SET64(5, RD(18) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x166c54); SET64(9, RD(6) + RD(0)); rt_call(c, t); }
SET64(31, 0x166c5c); SET64(4, RD(18) + RD(0)); F_001004B0(c);
SET64(2, (s32)rd32(c, (RW(16) + 312))); goto L_00166C94;
L_00166C64:;
SET64(31, 0x166c6c);  F_0013FED0(c);
SET64(4, (s32)rd32(c, (RW(16) + 392)));
SET32(6, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(16) + 248)));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x166c90); SET64(9, RD(6) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 312)));
L_00166C94:;
{ int t = RD(2) == RD(0);  if (t) goto L_00166CE0; }
SET64(2, rd16(c, (RW(16) + 292)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00166CE0; }
SET64(17, RD(0) + RD(0));
L_00166CAC:;
SET64(4, (s32)rd32(c, (RW(16) + 392)));
SET64(2, (s32)rd32(c, (RW(16) + 312)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET32(2, RW(2) + RW(17));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x166ccc); SET64(6, RD(18) & 0xffff); rt_call(c, t); }
SET64(2, rd16(c, (RW(16) + 292)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00166CAC; } }
L_00166CE0:;
SET64(2, (s32)rd32(c, (RW(16) + 392)));
SET32(3, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(2) + 256)));
wr32(c, (RW(2) + 4), RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x166d04); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x166d18); SET32(5, RW(0) + 128); rt_call(c, t); }
SET64(31, 0x166d20); SET64(4, (s32)rd32(c, (RW(16) + 248))); F_001004B0(c);
wr32(c, (RW(16) + 248), RW(0));
SET32(2, RW(0) + 1);
L_00166D28:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_00166D40(Ctx *c) { /* func_00166D40 */
ENTER(0x166d40);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 260)));
{ int t = RD(16) == RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_00166D68; }
SET64(4, RD(16) + RD(0)); goto L_00166D70;
L_00166D68:;
SET64(16, (s32)rd32(c, (RW(18) + 248)));
SET64(4, RD(16) + RD(0));
L_00166D70:;
SET64(31, 0x166d78);  F_0013FED0(c);
SET64(4, (s32)rd32(c, (RW(18) + 384)));
SET32(6, RW(0) + 1);
SET64(5, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x166d9c); SET64(9, RD(6) + RD(0)); rt_call(c, t); }
SET64(31, 0x166da4); SET64(4, (s32)rd32(c, (RW(18) + 260))); F_001004B0(c);
wr32(c, (RW(18) + 260), RW(0));
SET64(31, 0x166db0); SET64(4, (s32)rd32(c, (RW(18) + 248))); F_001004B0(c);
wr32(c, (RW(18) + 248), RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 312)));
{ int t = RD(2) == RD(0);  if (t) goto L_00166E08; }
SET64(2, rd16(c, (RW(18) + 292)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00166E08; }
SET64(16, RD(0) + RD(0));
L_00166DD0:;
SET64(4, (s32)rd32(c, (RW(18) + 384)));
SET64(2, (s32)rd32(c, (RW(18) + 312)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET32(2, RW(2) + RW(16));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x166df0); SET64(6, RD(17) & 0xffff); rt_call(c, t); }
SET64(2, rd16(c, (RW(18) + 292)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00166DD0; } }
L_00166E08:;
SET64(2, (s32)rd32(c, (RW(18) + 384)));
SET32(3, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(2) + 256)));
wr32(c, (RW(2) + 4), RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 384)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x166e2c); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 384)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x166e40); SET32(5, RW(0) + 128); rt_call(c, t); }
wr8(c, (RW(18) + 270), (u8)RW(0));
SET32(2, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_00166E60(Ctx *c) { /* func_00166E60 */
ENTER(0x166e60);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x166e8c);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 244))); goto L_00166E9C; }
SET64(2, RD(0) + RD(0)); goto L_00166FD0;
L_00166E9C:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x166eac);  rt_call(c, t); }
SET32(5, RW(0) + 1);
wr8(c, (RW(18) + 270), (u8)RW(5));
SET64(4, (s32)rd32(c, (RW(18) + 244)));
if (RD(4) == RD(0)) { SET32(4, RW(0) + 2272); goto L_00166ED4; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x166ed0);  rt_call(c, t); }
SET32(4, RW(0) + 2272);
L_00166ED4:;
SET64(31, 0x166edc); wr32(c, (RW(18) + 244), RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00166F60; }
SET32(4, RW(17) + 2236);
SET32(16, RW(0) + 1);
SET64(31, 0x166ef4); wr32(c, (RW(17) + 256), RW(4)); F_00141AA0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x166f00); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET64(31, 0x166f08); SET32(4, RW(17) + 288); F_00240AE0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11552);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 276), RW(2));
SET32(6, RW(6) + -11428);
SET64(5, (s32)rd32(c, (RW(17) + 256)));
SET32(3, RW(3) + -11480);
SET32(2, RW(17) + 2236);
SET32(4, RW(17) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(17) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x166f48); wr32(c, (RW(3) + 20), RW(2)); F_00160EA0(c);
SET64(31, 0x166f50); SET32(4, RW(17) + 1040); F_00160EA0(c);
SET64(31, 0x166f58); SET32(4, RW(17) + 1632); F_00160EA0(c);
wr32(c, (RW(17) + 2224), RW(0));
wr32(c, (RW(17) + 2228), RW(0));
L_00166F60:;
wr32(c, (RW(18) + 384), RW(17));
SET32(2, RW(0) + 67);
SET64(16, (s32)rd32(c, (RW(18) + 248)));
SET64(3, (s8)rd8(c, (RW(16) + 0)));
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_00166FAC; }
SET64(3, (s8)rd8(c, (RW(16) + 1)));
SET32(2, RW(0) + 77);
{ int t = RD(3) != RD(2);  if (t) goto L_00166FA8; }
SET64(3, (s8)rd8(c, (RW(16) + 2)));
SET32(2, RW(0) + 80);
{ int t = RD(3) != RD(2);  if (t) goto L_00166FA8; }
SET64(3, (s8)rd8(c, (RW(16) + 3)));
SET32(2, RW(0) + 83);
if (RD(3) == RD(2)) { SET64(2, RD(0) + (s64)1); goto L_00166FAC; }
L_00166FA8:;
SET64(2, RD(0) + RD(0));
L_00166FAC:;
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 260), RW(0)); goto L_00166FCC; }
SET64(31, 0x166fbc); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00100320(c);
wr32(c, (RW(18) + 260), RW(2));
SET64(4, RD(16) + RD(0));
SET64(31, 0x166fcc); SET64(5, RD(2) + RD(0)); F_001735D0(c);
L_00166FCC:;
SET32(2, RW(0) + 1);
L_00166FD0:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_00166FF0(Ctx *c) { /* func_00166FF0 */
ENTER(0x166ff0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16701c);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 244))); goto L_0016702C; }
SET64(2, RD(0) + RD(0)); goto L_001671D4;
L_0016702C:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x16703c);  rt_call(c, t); }
wr8(c, (RW(18) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 244)));
if (RD(4) == RD(0)) { SET32(4, RW(0) + 768); goto L_00167060; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16705c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(4, RW(0) + 768);
L_00167060:;
SET64(31, 0x167068); wr32(c, (RW(18) + 244), RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016707C; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x16707c); SET32(5, RW(0) + 1); F_00150D60(c);
L_0016707C:;
wr32(c, (RW(18) + 380), RW(16));
SET32(2, RW(0) + 67);
SET64(4, (s32)rd32(c, (RW(18) + 248)));
SET64(3, (s8)rd8(c, (RW(4) + 0)));
{ int t = RD(3) != RD(2); SET64(16, RD(4) + RD(0)); if (t) goto L_001670C4; }
SET64(3, (s8)rd8(c, (RW(4) + 1)));
SET32(2, RW(0) + 77);
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_001670C8; }
SET64(3, (s8)rd8(c, (RW(4) + 2)));
SET32(2, RW(0) + 80);
{ int t = RD(3) != RD(2);  if (t) goto L_001670C4; }
SET64(3, (s8)rd8(c, (RW(4) + 3)));
SET32(2, RW(0) + 83);
if (RD(3) == RD(2)) { SET64(2, RD(0) + (s64)1); goto L_001670C8; }
L_001670C4:;
SET64(2, RD(0) + RD(0));
L_001670C8:;
{ int t = RD(2) == RD(0);  if (t) goto L_0016711C; }
SET64(31, 0x1670d8); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00100320(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x1670e8); SET64(5, RD(17) + RD(0)); F_001735D0(c);
SET64(31, 0x1670f0); SET64(4, RD(17) + RD(0)); F_0013FED0(c);
SET64(4, (s32)rd32(c, (RW(18) + 380)));
SET64(5, RD(17) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16710c); SET32(7, RW(0) + 1); rt_call(c, t); }
SET64(31, 0x167114); SET64(4, RD(17) + RD(0)); F_001004B0(c);
SET64(2, (s32)rd32(c, (RW(18) + 312))); goto L_00167144;
L_0016711C:;
SET64(31, 0x167124);  F_0013FED0(c);
SET64(4, (s32)rd32(c, (RW(18) + 380)));
SET64(6, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(18) + 248)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x167140); SET32(7, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 312)));
L_00167144:;
{ int t = RD(2) == RD(0);  if (t) goto L_00167198; }
SET64(2, rd16(c, (RW(18) + 292)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00167198; }
SET64(16, RD(0) + RD(0));
L_0016715C:;
SET64(3, (s32)rd32(c, (RW(18) + 380)));
SET64(2, (s32)rd32(c, (RW(18) + 312)));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(16));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x167180); SET64(6, RD(17) & 0xffff); rt_call(c, t); }
SET64(2, rd16(c, (RW(18) + 292)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_0016715C; } }
L_00167198:;
SET64(2, (s32)rd32(c, (RW(18) + 380)));
SET32(3, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 256)));
wr32(c, (RW(2) + 4), RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 380)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1671c4); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(31, 0x1671cc); SET64(4, (s32)rd32(c, (RW(18) + 248))); F_001004B0(c);
wr32(c, (RW(18) + 248), RW(0));
SET32(2, RW(0) + 1);
L_001671D4:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001671F0(Ctx *c) { /* func_001671F0 */
ENTER(0x1671f0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd16(c, (RW(4) + 328)));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0016724C; }
wr16(c, (RW(16) + 268), (u16)RW(0));
SET64(31, 0x167220); SET64(4, (s32)rd32(c, (RW(16) + 248))); F_001004B0(c);
wr32(c, (RW(16) + 248), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 244), RW(0)); goto L_00167244; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x167240); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 244), RW(0));
L_00167244:;
SET32(2, RW(0) + 1); goto L_001674B8;
L_0016724C:;
SET64(6, (s32)rd32(c, (RW(16) + 244)));
SET32(4, RW(0) + 2272);
SET64(2, rd16(c, (RW(16) + 268)));
SET64(3, (s32)rd32(c, (RW(6) + 20)));
SET32(5, RW(2) << 2);
SET64(2, (s32)rd32(c, (RW(6) + 24)));
SET32(3, RW(3) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x167274); SET32(19, RW(2) + RW(3)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001672F8; }
SET32(4, RW(18) + 2236);
SET32(17, RW(0) + 1);
SET64(31, 0x16728c); wr32(c, (RW(18) + 256), RW(4)); F_00141AA0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x167298); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET64(31, 0x1672a0); SET32(4, RW(18) + 288); F_00240AE0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11552);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 276), RW(2));
SET32(6, RW(6) + -11428);
SET64(5, (s32)rd32(c, (RW(18) + 256)));
SET32(3, RW(3) + -11480);
SET32(2, RW(18) + 2236);
SET32(4, RW(18) + 448);
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(18) + 432), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x1672e0); wr32(c, (RW(3) + 20), RW(2)); F_00160EA0(c);
SET64(31, 0x1672e8); SET32(4, RW(18) + 1040); F_00160EA0(c);
SET64(31, 0x1672f0); SET32(4, RW(18) + 1632); F_00160EA0(c);
wr32(c, (RW(18) + 2224), RW(0));
wr32(c, (RW(18) + 2228), RW(0));
L_001672F8:;
SET64(3, rd16(c, (RW(16) + 268)));
SET64(4, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x167314); wr32(c, (RW(2) + 0), RW(18)); F_0013FED0(c);
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
{ u32 t = RW(25); SET64(31, 0x167348); SET64(9, RD(6) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 312)));
{ int t = RD(2) == RD(0);  if (t) goto L_001673A8; }
SET64(2, rd16(c, (RW(16) + 292)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001673A8; }
SET64(17, RD(0) + RD(0));
L_00167364:;
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
{ u32 t = RW(25); SET64(31, 0x167394); SET64(6, RD(18) & 0xffff); rt_call(c, t); }
SET64(2, rd16(c, (RW(16) + 292)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00167364; } }
L_001673A8:;
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
SET64(31, 0x1673f8); wr128(c, (RW(3) + 336) & ~15u, &c->r[2]); F_002A1E20(c);
SET64(3, rd16(c, (RW(16) + 268)));
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x16741c); SET32(5, RW(0) + 128); rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 268)));
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x167440); SET32(5, RW(0) + 64); rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 268)));
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x167464); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(2, rd16(c, (RW(16) + 268)));
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 268), (u16)RW(2));
SET64(3, rd16(c, (RW(16) + 268)));
SET64(2, rd16(c, (RW(16) + 328)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001674B8; }
wr16(c, (RW(16) + 268), (u16)RW(0));
SET64(31, 0x167490); SET64(4, (s32)rd32(c, (RW(16) + 248))); F_001004B0(c);
wr32(c, (RW(16) + 248), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 244), RW(0)); goto L_001674B4; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1674b0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 244), RW(0));
L_001674B4:;
SET32(2, RW(0) + 1);
L_001674B8:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001674E0(Ctx *c) { /* func_001674E0 */
ENTER(0x1674e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x167504);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 244))); goto L_00167514; }
SET64(2, RD(0) + RD(0)); goto L_00167580;
L_00167514:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x167524);  rt_call(c, t); }
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(2, rd16(c, (RW(16) + 328)));
{ int t = RD(2) == RD(0);  if (t) goto L_00167578; }
SET64(2, RD(2) & 0xffff);
SET64(31, 0x167540); SET32(4, RW(2) << 2); F_00100530(c);
wr32(c, (RW(16) + 336), RW(2));
SET64(2, rd16(c, (RW(16) + 328)));
{ int t = RSD(2) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_00167578; }
SET64(3, RD(0) + RD(0));
L_00167554:;
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(4, RW(4) + 1);
SET32(2, RW(2) + RW(3));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, rd16(c, (RW(16) + 328)));
SET64(2, RSD(4) < RSD(2));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 4); if (t) { POLL(); goto L_00167554; } }
L_00167578:;
wr16(c, (RW(16) + 268), (u16)RW(0));
SET32(2, RW(0) + 1);
L_00167580:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_00167590(Ctx *c) { /* func_00167590 */
ENTER(0x167590);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(6) + RD(0));
{ int t = RD(5) == RD(0); wr8(c, (RW(4) + 270), (u8)RW(0)); if (t) goto L_0016790C; }
if (RD(16) == RD(0)) { SET64(3, rd16(c, (RW(19) + 290))); goto L_0016788C; }
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 40)));
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 244))); goto L_00167668; }
SET64(31, 0x1675d8); SET32(4, RW(0) + 36); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00167608; }
SET64(31, 0x1675e8); SET64(4, RD(16) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_00167608:;
wr32(c, (RW(19) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x167620); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x167634);  rt_call(c, t); }
SET64(31, 0x16763c); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(19) + 252), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16765c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_00167664:;
SET64(4, (s32)rd32(c, (RW(19) + 244)));
L_00167668:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x167678);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00167688; }
SET64(2, RD(0) + RD(0)); goto L_001676C8;
L_00167688:;
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x16769c);  rt_call(c, t); }
wr8(c, (RW(19) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
{ int t = RD(4) == RD(0);  if (t) goto L_001676C0; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1676bc); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001676C0:;
wr32(c, (RW(19) + 244), RW(0));
SET64(2, RD(0) + (s64)1);
L_001676C8:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00167664; } }
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 44)));
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 244))); goto L_00167780; }
SET64(31, 0x1676f0); SET32(4, RW(0) + 36); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00167720; }
SET64(31, 0x167700); SET64(4, RD(16) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_00167720:;
wr32(c, (RW(19) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x167738); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16774c);  rt_call(c, t); }
SET64(31, 0x167754); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x167774); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_0016777C:;
SET64(4, (s32)rd32(c, (RW(19) + 244)));
L_00167780:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x167790);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001677A0; }
SET64(2, RD(0) + RD(0)); goto L_00167858;
L_001677A0:;
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1677b4);  rt_call(c, t); }
wr8(c, (RW(19) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
{ int t = RD(4) == RD(0);  if (t) goto L_001677D8; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1677d4); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001677D8:;
SET32(4, RW(0) + 44);
SET64(31, 0x1677e4); wr32(c, (RW(19) + 244), RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_00167828; }
SET64(31, 0x1677f4); SET64(4, RD(18) + RD(0)); F_00157630(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -26960);
SET32(2, RW(2) + -23904);
wr32(c, (RW(18) + 16), RW(3));
wr32(c, (RW(18) + 20), RW(0));
wr32(c, (RW(18) + 24), RW(0));
wr32(c, (RW(18) + 28), RW(0));
wr16(c, (RW(18) + 32), (u16)RW(0));
wr16(c, (RW(18) + 34), (u16)RW(0));
wr32(c, (RW(18) + 16), RW(2));
wr32(c, (RW(18) + 36), RW(0));
wr32(c, (RW(18) + 40), RW(0));
L_00167828:;
wr32(c, (RW(19) + 256), RW(18));
SET64(16, (s32)rd32(c, (RW(19) + 252)));
SET64(4, RD(18) + RD(0));
SET64(17, (s32)rd32(c, (RW(19) + 248)));
SET64(31, 0x167840); SET64(5, RD(16) + RD(0)); F_001569F0(c);
wr32(c, (RW(18) + 36), RW(16));
SET64(2, RD(0) + (s64)1);
wr32(c, (RW(18) + 40), RW(17));
wr16(c, (RW(19) + 264), (u16)RW(0));
wr16(c, (RW(19) + 266), (u16)RW(0));
L_00167858:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016777C; } }
L_00167868:;
SET64(31, 0x167870); SET64(4, RD(19) + RD(0)); F_00165FD0(c);
SET64(3, RD(0) < RD(2));
SET64(3, RD(3) ^ 0x1);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00167868; } }
SET64(31, rd64(c, (RW(29) + 64))); goto L_00167968;
L_0016788C:;
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00167964; }
SET64(5, rd16(c, (RW(19) + 288)));
L_00167898:;
{ int t = RSD(5) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001678F0; }
SET64(16, RD(18) & 0xffff);
L_001678A8:;
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
SET64(31, 0x1678d8); SET32(4, RW(2) + RW(3)); F_0016C130(c);
SET64(5, rd16(c, (RW(19) + 288)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(5));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_001678A8; } }
L_001678F0:;
SET64(3, rd16(c, (RW(19) + 290)));
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < RSD(3));
if (RD(3) != RD(0)) { SET64(5, rd16(c, (RW(19) + 288))); { POLL(); goto L_00167898; } }
 goto L_00167964;
L_0016790C:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x16791c);  rt_call(c, t); }
if (RD(16) == RD(0)) { wr16(c, (RW(19) + 264), (u16)RW(0)); goto L_00167948; }
wr16(c, (RW(19) + 264), (u16)RW(0));
SET64(31, 0x167930); wr16(c, (RW(19) + 266), (u16)RW(0)); F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x16793c); SET64(5, RD(19) + RD(0)); F_0013A470(c);
SET32(3, RW(0) + 300);
wr16(c, (RW(19) + 0), (u16)RW(3)); goto L_00167964;
L_00167948:;
SET64(31, 0x167950); wr16(c, (RW(19) + 266), (u16)RW(0)); F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x16795c); SET64(5, RD(19) + RD(0)); F_0013A470(c);
SET32(3, RW(0) + 200);
wr16(c, (RW(19) + 0), (u16)RW(3));
L_00167964:;
SET64(31, rd64(c, (RW(29) + 64)));
L_00167968:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00167980(Ctx *c) { /* func_00167980 */
ENTER(0x167980);
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
{ int t = RD(4) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001679D8; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1679c0);  rt_call(c, t); }
c->f[0].u = rd32(c, (RW(16) + 12));
wr32(c, (RW(29) + 124), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 380)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1679d8); SET32(5, RW(29) + 124); F_00152760(c);
L_001679D8:;
SET64(4, (s32)rd32(c, (RW(17) + 384)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 392))); goto L_00167A0C; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x1679f4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 384)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x167a08); c->f[12].u = rd32(c, (RW(16) + 12)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 392)));
L_00167A0C:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 388))); goto L_00167A3C; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x167a24); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 392)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x167a38); c->f[12].u = rd32(c, (RW(16) + 12)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 388)));
L_00167A3C:;
if (RD(4) == RD(0)) { SET64(3, rd16(c, (RW(17) + 328))); goto L_00167A70; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x167a54); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
c->f[0].u = rd32(c, (RW(16) + 12));
wr32(c, (RW(29) + 120), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 388)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x167a6c); SET32(5, RW(29) + 120); F_00152760(c);
SET64(3, rd16(c, (RW(17) + 328)));
L_00167A70:;
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00167AC8; }
SET64(18, RD(0) + RD(0));
L_00167A7C:;
SET64(2, (s32)rd32(c, (RW(17) + 336)));
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x167a98); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 336)));
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x167ab4); c->f[12].u = rd32(c, (RW(16) + 12)); rt_call(c, t); }
SET64(3, rd16(c, (RW(17) + 328)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_00167A7C; } }
L_00167AC8:;
SET64(3, rd16(c, (RW(17) + 290)));
{ int t = RSD(3) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00167B90; }
SET64(4, rd16(c, (RW(17) + 288)));
L_00167AD8:;
{ int t = RSD(4) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00167B78; }
SET64(19, RD(21) & 0xffff);
L_00167AE8:;
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
{ u32 t = RW(25); SET64(31, 0x167b20); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
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
{ u32 t = RW(25); SET64(31, 0x167b60); SET32(5, RW(29) + 116); rt_call(c, t); }
SET64(4, rd16(c, (RW(17) + 288)));
SET32(20, RW(20) + 1);
SET64(3, RSD(20) < RSD(4));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00167AE8; } }
L_00167B78:;
SET64(3, rd16(c, (RW(17) + 290)));
SET32(21, RW(21) + 1);
SET64(3, RSD(21) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, rd16(c, (RW(17) + 288))); { POLL(); goto L_00167AD8; } }
L_00167B90:;
SET64(3, (s32)rd32(c, (RW(17) + 348)));
{ int t = RD(3) == RD(0);  if (t) goto L_00167BE0; }
SET64(3, rd16(c, (RW(17) + 340)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00167BE0; }
SET64(18, RD(0) + RD(0));
L_00167BAC:;
SET64(2, (s32)rd32(c, (RW(17) + 348)));
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x167bc8); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(17) + 340)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_00167BAC; } }
L_00167BE0:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_00167C10(Ctx *c) { /* func_00167C10 */
ENTER(0x167c10);
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
L_00167C38:;
SET64(3, RD(17) & 0xffff);
SET64(1, RSD(3) < (s64)3);
{ int t = RD(1) == RD(0);  if (t) goto L_00167C68; }
SET32(3, RW(3) << 2);
SET32(3, RW(19) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 192)));
{ int t = RD(3) == RD(0);  if (t) goto L_00167C68; }
SET64(3, RD(0) + (s64)1); goto L_00167C70;
L_00167C68:;
SET64(3, RD(0) + RD(0));
L_00167C70:;
{ int t = RD(3) == RD(0);  if (t) goto L_00167C90; }
SET64(4, (s32)rd32(c, (RW(16) + 192)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x167c8c); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
L_00167C90:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00167C38; } }
SET64(4, (s32)rd32(c, (RW(19) + 320)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_00167CB8; }
SET64(31, 0x167cb4); SET64(5, RD(18) + RD(0)); F_001EEFA0(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_00167CB8:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00167CD0(Ctx *c) { /* func_00167CD0 */
ENTER(0x167cd0);
SET64(2, rd8(c, (RW(4) + 398))); return;
}

void F_00167CE0(Ctx *c) { /* func_00167CE0 */
ENTER(0x167ce0);
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
if (RD(4) == RD(3)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_00167ECC; }
wr8(c, (RW(17) + 398), (u8)RW(16));
SET64(3, (s32)rd32(c, (RW(17) + 380)));
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 384))); goto L_00167D40; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x167d3c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 384)));
L_00167D40:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 392))); goto L_00167D5C; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x167d58); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 392)));
L_00167D5C:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 388))); goto L_00167D78; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x167d74); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 388)));
L_00167D78:;
if (RD(4) == RD(0)) { SET64(3, rd16(c, (RW(17) + 328))); goto L_00167D94; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x167d90); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(17) + 328)));
L_00167D94:;
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00167DD0; }
SET64(18, RD(0) + RD(0));
L_00167DA0:;
SET64(2, (s32)rd32(c, (RW(17) + 336)));
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x167dbc); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(17) + 328)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_00167DA0; } }
L_00167DD0:;
SET64(3, rd16(c, (RW(17) + 290)));
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00167E58; }
SET64(5, rd16(c, (RW(17) + 288)));
L_00167DE0:;
{ int t = RSD(5) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00167E40; }
SET64(18, RD(20) & 0xffff);
L_00167DF0:;
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
{ u32 t = RW(25); SET64(31, 0x167e28); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(5, rd16(c, (RW(17) + 288)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(5));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00167DF0; } }
L_00167E40:;
SET64(3, rd16(c, (RW(17) + 290)));
SET32(20, RW(20) + 1);
SET64(3, RSD(20) < RSD(3));
if (RD(3) != RD(0)) { SET64(5, rd16(c, (RW(17) + 288))); { POLL(); goto L_00167DE0; } }
L_00167E58:;
SET64(3, rd16(c, (RW(17) + 340)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00167E98; }
SET64(18, RD(0) + RD(0));
L_00167E68:;
SET64(2, (s32)rd32(c, (RW(17) + 348)));
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x167e84); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(17) + 340)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_00167E68; } }
L_00167E98:;
SET64(4, (s32)rd32(c, (RW(17) + 412)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 400))); goto L_00167EB8; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x167eb4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 400)));
L_00167EB8:;
{ int t = RD(4) == RD(0);  if (t) goto L_00167EC8; }
SET64(31, 0x167ec8); SET64(5, RD(16) + RD(0)); F_00170230(c);
L_00167EC8:;
SET64(31, rd64(c, (RW(29) + 80)));
L_00167ECC:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_00167EF0(Ctx *c) { /* func_00167EF0 */
ENTER(0x167ef0);
 return;
}

void F_00167F00(Ctx *c) { /* func_00167F00 */
ENTER(0x167f00);
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
{ int t = RD(18) == RD(0); SET64(5, RD(18) + RD(0)); if (t) goto L_00167F38; }
SET32(5, RW(5) + 64);
L_00167F38:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x167f44); SET32(4, RW(4) + -27024); F_00240930(c);
SET64(4, (s32)rd32(c, (RW(18) + 380)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 384))); goto L_00167F64; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x167f60); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 384)));
L_00167F64:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 392))); goto L_00167F80; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x167f7c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 392)));
L_00167F80:;
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 336))); goto L_00167F9C; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x167f98); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 336)));
L_00167F9C:;
{ int t = RD(2) == RD(0);  if (t) goto L_00168030; }
SET64(2, rd16(c, (RW(18) + 328)));
{ int t = RSD(2) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00168030; }
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_00167FB8:;
SET64(2, (s32)rd32(c, (RW(18) + 332)));
SET32(2, RW(2) + RW(20));
SET64(2, rd16(c, (RW(2) + 98)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_00167FF8; }
SET64(2, (s32)rd32(c, (RW(18) + 336)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x167fec); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
 goto L_00168018;
L_00167FF8:;
SET64(2, (s32)rd32(c, (RW(18) + 336)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x168014); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_00168018:;
SET64(2, rd16(c, (RW(18) + 328)));
SET32(21, RW(21) + 1);
SET32(20, RW(20) + 112);
SET64(2, RSD(21) < RSD(2));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_00167FB8; } }
L_00168030:;
SET64(2, (s32)rd32(c, (RW(18) + 300)));
{ int t = RD(2) == RD(0);  if (t) goto L_001680C0; }
SET64(2, rd16(c, (RW(18) + 290)));
{ int t = RSD(2) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_001680C0; }
SET64(3, rd16(c, (RW(18) + 288)));
L_0016804C:;
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_001680A8; }
SET64(19, RD(21) & 0xffff);
L_00168058:;
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
{ u32 t = RW(25); SET64(31, 0x168094); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(18) + 288)));
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < RSD(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00168058; } }
L_001680A8:;
SET64(2, rd16(c, (RW(18) + 290)));
SET32(21, RW(21) + 1);
SET64(2, RSD(21) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(18) + 288))); { POLL(); goto L_0016804C; } }
L_001680C0:;
SET64(2, (s32)rd32(c, (RW(18) + 348)));
{ int t = RD(2) == RD(0);  if (t) goto L_00168158; }
SET64(2, rd16(c, (RW(18) + 340)));
{ int t = RSD(2) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00168158; }
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_001680E0:;
SET64(2, (s32)rd32(c, (RW(18) + 344)));
SET32(2, RW(2) + RW(20));
SET64(2, rd16(c, (RW(2) + 98)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_00168120; }
SET64(2, (s32)rd32(c, (RW(18) + 348)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x168114); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
 goto L_00168140;
L_00168120:;
SET64(2, (s32)rd32(c, (RW(18) + 348)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16813c); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_00168140:;
SET64(2, rd16(c, (RW(18) + 340)));
SET32(21, RW(21) + 1);
SET32(20, RW(20) + 112);
SET64(2, RSD(21) < RSD(2));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_001680E0; } }
L_00168158:;
SET64(4, (s32)rd32(c, (RW(18) + 412)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 400))); goto L_0016817C; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x168178); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 400)));
L_0016817C:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 388))); goto L_00168190; }
SET64(31, 0x16818c); SET64(5, RD(0) + RD(0)); F_001701F0(c);
SET64(4, (s32)rd32(c, (RW(18) + 388)));
L_00168190:;
if (RD(4) == RD(0)) { SET32(4, RW(18) + 224); goto L_001681B0; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x1681ac); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET32(4, RW(18) + 224);
L_001681B0:;
SET64(31, 0x1681b8);  F_001419B0(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 96))); goto L_001681DC; }
SET32(2, RW(0) + 2);
SET64(31, 0x1681d0); wr32(c, (RW(18) + 224), RW(2)); F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
wr32(c, (RW(18) + 236), RW(3));
SET64(31, rd64(c, (RW(29) + 96)));
L_001681DC:;
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_00168200(Ctx *c) { /* func_00168200 */
ENTER(0x168200);
 return;
}

void F_00168210(Ctx *c) { /* func_00168210 */
ENTER(0x168210);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00168234; }
SET32(5, RW(5) + 64);
L_00168234:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x168240); SET32(4, RW(4) + -27024); F_00240980(c);
SET64(4, (s32)rd32(c, (RW(17) + 380)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_00168270; }
if (RD(17) == RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 12))); goto L_0016825C; }
SET32(17, RW(17) + 64);
SET64(25, (s32)rd32(c, (RW(4) + 12)));
L_0016825C:;
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16826c); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
L_00168270:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00168280(Ctx *c) { /* func_00168280 */
ENTER(0x168280);
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
{ int t = RD(18) == RD(0); SET64(5, RD(18) + RD(0)); if (t) goto L_001682B8; }
SET32(5, RW(5) + 64);
L_001682B8:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x1682c4); SET32(4, RW(4) + -27024); F_00240980(c);
SET64(4, (s32)rd32(c, (RW(18) + 380)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 384))); goto L_001682F0; }
{ int t = RD(18) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_001682DC; }
SET32(6, RW(18) + 64);
L_001682DC:;
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1682ec); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 384)));
L_001682F0:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 392))); goto L_00168318; }
{ int t = RD(18) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00168304; }
SET32(6, RW(18) + 64);
L_00168304:;
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x168314); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 392)));
L_00168318:;
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 336))); goto L_00168340; }
{ int t = RD(18) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_0016832C; }
SET32(6, RW(18) + 64);
L_0016832C:;
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16833c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 336)));
L_00168340:;
{ int t = RD(2) == RD(0);  if (t) goto L_001683F0; }
SET64(2, rd16(c, (RW(18) + 328)));
{ int t = RSD(2) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_001683F0; }
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_0016835C:;
SET64(2, (s32)rd32(c, (RW(18) + 332)));
SET32(2, RW(2) + RW(20));
SET64(2, rd16(c, (RW(2) + 98)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_001683A8; }
{ int t = RD(18) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00168380; }
SET32(6, RW(18) + 64);
L_00168380:;
SET64(2, (s32)rd32(c, (RW(18) + 336)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16839c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
 goto L_001683D8;
L_001683A8:;
{ int t = RD(18) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_001683B8; }
SET32(6, RW(18) + 64);
L_001683B8:;
SET64(2, (s32)rd32(c, (RW(18) + 336)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1683d4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_001683D8:;
SET64(2, rd16(c, (RW(18) + 328)));
SET32(21, RW(21) + 1);
SET32(20, RW(20) + 112);
SET64(2, RSD(21) < RSD(2));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_0016835C; } }
L_001683F0:;
SET64(2, (s32)rd32(c, (RW(18) + 300)));
{ int t = RD(2) == RD(0);  if (t) goto L_00168490; }
SET64(2, rd16(c, (RW(18) + 290)));
{ int t = RSD(2) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00168490; }
SET64(3, rd16(c, (RW(18) + 288)));
L_0016840C:;
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00168478; }
SET64(19, RD(21) & 0xffff);
L_00168418:;
{ int t = RD(18) == RD(0); SET64(7, RD(18) + RD(0)); if (t) goto L_00168428; }
SET32(7, RW(18) + 64);
L_00168428:;
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
{ u32 t = RW(25); SET64(31, 0x168464); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(18) + 288)));
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < RSD(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00168418; } }
L_00168478:;
SET64(2, rd16(c, (RW(18) + 290)));
SET32(21, RW(21) + 1);
SET64(2, RSD(21) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(18) + 288))); { POLL(); goto L_0016840C; } }
L_00168490:;
SET64(2, (s32)rd32(c, (RW(18) + 348)));
{ int t = RD(2) == RD(0);  if (t) goto L_00168548; }
SET64(2, rd16(c, (RW(18) + 340)));
{ int t = RSD(2) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00168548; }
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_001684B0:;
SET64(2, (s32)rd32(c, (RW(18) + 344)));
SET32(2, RW(2) + RW(20));
SET64(2, rd16(c, (RW(2) + 98)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_00168500; }
{ int t = RD(18) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_001684D8; }
SET32(6, RW(18) + 64);
L_001684D8:;
SET64(2, (s32)rd32(c, (RW(18) + 348)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1684f4); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
 goto L_00168530;
L_00168500:;
{ int t = RD(18) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00168510; }
SET32(6, RW(18) + 64);
L_00168510:;
SET64(2, (s32)rd32(c, (RW(18) + 348)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16852c); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_00168530:;
SET64(2, rd16(c, (RW(18) + 340)));
SET32(21, RW(21) + 1);
SET32(20, RW(20) + 112);
SET64(2, RSD(21) < RSD(2));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_001684B0; } }
L_00168548:;
SET64(4, RD(18) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x168558); SET64(6, RD(17) + RD(0)); F_00164660(c);
SET64(4, (s32)rd32(c, (RW(18) + 388)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 412))); goto L_00168588; }
{ int t = RD(18) == RD(0); SET64(7, RD(18) + RD(0)); if (t) goto L_00168570; }
SET32(7, RW(18) + 64);
L_00168570:;
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x168584); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 412)));
L_00168588:;
if (RD(4) == RD(0)) { SET32(4, RW(18) + 64); goto L_001685A8; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1685a4); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET32(4, RW(18) + 64);
L_001685A8:;
SET64(31, 0x1685b0);  F_002A1E20(c);
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

void F_001685E0(Ctx *c) { /* func_001685E0 */
ENTER(0x1685e0);
 return;
}

void F_001685F0(Ctx *c) { /* func_001685F0 */
ENTER(0x1685f0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 300)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001686A0; }
SET64(2, rd16(c, (RW(16) + 290)));
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_001686A0; }
SET64(3, rd16(c, (RW(16) + 288)));
L_00168624:;
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00168688; }
SET64(17, RD(19) & 0xffff);
L_00168630:;
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
{ u32 t = RW(25); SET64(31, 0x168668);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(16) + 288))); goto L_00168678; }
SET64(2, RD(0) + RD(0)); goto L_00168874;
L_00168678:;
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00168630; } }
L_00168688:;
SET64(2, rd16(c, (RW(16) + 290)));
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(16) + 288))); { POLL(); goto L_00168624; } }
L_001686A0:;
SET64(2, (s32)rd32(c, (RW(16) + 336)));
{ int t = RD(2) == RD(0);  if (t) goto L_00168708; }
SET64(2, rd16(c, (RW(16) + 328)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00168708; }
SET64(17, RD(0) + RD(0));
L_001686BC:;
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
if (RD(4) == RD(0)) { SET64(2, rd16(c, (RW(16) + 328))); goto L_001686F4; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1686e0);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001686F0; }
SET64(2, RD(0) + RD(0)); goto L_00168874;
L_001686F0:;
SET64(2, rd16(c, (RW(16) + 328)));
L_001686F4:;
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001686BC; } }
L_00168708:;
SET64(2, (s32)rd32(c, (RW(16) + 380)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 384))); goto L_0016873C; }
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x168728);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00168738; }
SET64(2, RD(0) + RD(0)); goto L_00168874;
L_00168738:;
SET64(4, (s32)rd32(c, (RW(16) + 384)));
L_0016873C:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 388))); goto L_00168768; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x168754);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00168764; }
SET64(2, RD(0) + RD(0)); goto L_00168874;
L_00168764:;
SET64(4, (s32)rd32(c, (RW(16) + 388)));
L_00168768:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 392))); goto L_00168794; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x168780);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00168790; }
SET64(2, RD(0) + RD(0)); goto L_00168874;
L_00168790:;
SET64(4, (s32)rd32(c, (RW(16) + 392)));
L_00168794:;
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 348))); goto L_001687C0; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1687ac);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001687BC; }
SET64(2, RD(0) + RD(0)); goto L_00168874;
L_001687BC:;
SET64(2, (s32)rd32(c, (RW(16) + 348)));
L_001687C0:;
{ int t = RD(2) == RD(0);  if (t) goto L_00168820; }
SET64(2, rd16(c, (RW(16) + 340)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00168820; }
SET64(17, RD(0) + RD(0));
L_001687D8:;
SET64(2, (s32)rd32(c, (RW(16) + 348)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
if (RD(4) == RD(0)) { SET64(2, rd16(c, (RW(16) + 340))); goto L_00168810; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1687fc);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_0016880C; }
SET64(2, RD(0) + RD(0)); goto L_00168874;
L_0016880C:;
SET64(2, rd16(c, (RW(16) + 340)));
L_00168810:;
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001687D8; } }
L_00168820:;
SET64(4, (s32)rd32(c, (RW(16) + 400)));
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_00168834; }
SET64(31, 0x168834);  F_00170410(c);
L_00168834:;
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 412))); goto L_00168848; }
SET64(2, RD(0) + RD(0)); goto L_00168874;
L_00168848:;
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_00168874; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x168860);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00168870; }
SET64(2, RD(0) + RD(0)); goto L_00168874;
L_00168870:;
SET32(2, RW(0) + 1);
L_00168874:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00168890(Ctx *c) { /* func_00168890 */
ENTER(0x168890);
SET32(2, RW(0) + 1); return;
}

void F_001688A0(Ctx *c) { /* func_001688A0 */
ENTER(0x1688a0);
SET32(29, RW(29) + -64);
SET64(3, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 304)));
{ int t = RD(4) == RD(0); SET64(16, RD(7) + RD(0)); if (t) goto L_001688D8; }
SET64(31, 0x1688d4);  F_0014A6D0(c);
SET64(3, RD(2) + RD(0));
L_001688D8:;
if (RD(3) == RD(0)) { wr32(c, (RW(17) + 0), RW(0)); goto L_001689AC; }
c->f[0].u = rd32(c, (RW(18) + 0));
c->f[1].u = rd32(c, (RW(3) + 4));
c->f[3].u = rd32(c, (RW(18) + 8));
c->f[2].u = rd32(c, (RW(3) + 8));
c->f[1].f = fpu(F(0) - F(1));
c->f[0].u = RW(0);
c->f[4].u = rd32(c, (RW(3) + 0));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; c->f[2].f = fpu(F(3) - F(2)); if (t) goto L_00168934; }
c->f[1].f = fpu_div(F(1), F(4));
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(17) + 0), RW(3)); goto L_00168950;
L_00168934:;
c->f[0].f = fpu_div(F(1), F(4));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(17) + 0), RW(3));
L_00168950:;
c->f[0].u = RW(0);
c->fcc = F(2) < F(0);
{ int t = !c->fcc;  if (t) goto L_00168990; }
c->f[1].f = fpu_div(F(2), F(4));
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(16) + 0), RW(3)); goto L_001689B0;
L_00168990:;
c->f[0].f = fpu_div(F(2), F(4));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(16) + 0), RW(3)); goto L_001689B0;
L_001689AC:;
wr32(c, (RW(16) + 0), RW(0));
L_001689B0:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001689D0(Ctx *c) { /* func_001689D0 */
ENTER(0x1689d0);
c->f[1].u = rd32(c, (RW(5) + 0));
c->f[2].u = rd32(c, (RW(4) + 280));
c->f[4].u = rd32(c, (RW(5) + 8));
c->f[3].u = rd32(c, (RW(4) + 284));
c->f[2].f = fpu(F(1) - F(2));
c->f[0].u = RW(0);
c->fcc = F(2) < F(0);
{ int t = !c->fcc; c->f[3].f = fpu(F(4) - F(3)); if (t) goto L_00168A20; }
c->f[1].u = rd32(c, (RW(4) + 276));
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->f[1].f = fpu_div(F(2), F(1));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(6) + 0), RW(3)); goto L_00168A3C;
L_00168A20:;
c->f[0].u = rd32(c, (RW(4) + 276));
c->f[0].f = fpu_div(F(2), F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(6) + 0), RW(3));
L_00168A3C:;
c->f[0].u = RW(0);
c->fcc = F(3) < F(0);
if (!c->fcc) { c->f[0].u = rd32(c, (RW(4) + 276)); goto L_00168A78; }
c->f[1].u = rd32(c, (RW(4) + 276));
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->f[1].f = fpu_div(F(3), F(1));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(7) + 0), RW(3)); goto L_00168A90;
L_00168A78:;
c->f[0].f = fpu_div(F(3), F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(7) + 0), RW(3));
L_00168A90:;
 return;
}

void F_00168AA0(Ctx *c) { /* func_00168AA0 */
ENTER(0x168aa0);
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
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 244), RW(0)); goto L_00168AFC; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x168af8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 244), RW(0));
L_00168AFC:;
SET64(31, 0x168b04); SET64(4, (s32)rd32(c, (RW(16) + 248))); F_001004B0(c);
wr32(c, (RW(16) + 248), RW(0));
SET64(31, 0x168b10); SET64(4, (s32)rd32(c, (RW(16) + 252))); F_001004B0(c);
wr32(c, (RW(16) + 252), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 256)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 256), RW(0)); goto L_00168B34; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x168b30); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 256), RW(0));
L_00168B34:;
SET64(31, 0x168b3c); SET64(4, (s32)rd32(c, (RW(16) + 260))); F_001004B0(c);
wr32(c, (RW(16) + 260), RW(0));
wr16(c, (RW(16) + 264), (u16)RW(0));
wr16(c, (RW(16) + 266), (u16)RW(0));
wr16(c, (RW(16) + 268), (u16)RW(0));
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(2, rd8(c, (RW(16) + 271)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 368), RW(0)); goto L_00168B74; }
SET64(2, (s32)rd32(c, (RW(16) + 368)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 368), RW(0)); goto L_00168B74; }
SET64(31, 0x168b70); SET32(4, RW(2) + -16); F_00100430(c);
wr32(c, (RW(16) + 368), RW(0));
L_00168B74:;
wr16(c, (RW(16) + 364), (u16)RW(0));
SET64(2, rd8(c, (RW(16) + 271)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 376), RW(0)); goto L_00168B9C; }
SET64(2, (s32)rd32(c, (RW(16) + 376)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 376), RW(0)); goto L_00168B9C; }
SET64(31, 0x168b98); SET32(4, RW(2) + -16); F_00100430(c);
wr32(c, (RW(16) + 376), RW(0));
L_00168B9C:;
wr16(c, (RW(16) + 372), (u16)RW(0));
wr8(c, (RW(16) + 396), (u8)RW(0));
wr8(c, (RW(16) + 397), (u8)RW(0));
wr8(c, (RW(16) + 404), (u8)RW(0));
SET64(31, 0x168bb4); SET64(4, (s32)rd32(c, (RW(16) + 304))); F_00100430(c);
wr32(c, (RW(16) + 304), RW(0));
wr32(c, (RW(16) + 408), RW(0));
SET64(2, rd8(c, (RW(16) + 271)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 308), RW(0)); goto L_00168CB0; }
SET64(2, (s32)rd32(c, (RW(16) + 312)));
{ int t = RD(2) == RD(0);  if (t) goto L_00168C28; }
SET64(2, rd16(c, (RW(16) + 292)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00168C28; }
SET64(17, RD(0) + RD(0));
L_00168BE4:;
SET64(2, (s32)rd32(c, (RW(16) + 312)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_00168C08; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x168c08); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00168C08:;
SET64(2, (s32)rd32(c, (RW(16) + 312)));
SET32(18, RW(18) + 1);
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, rd16(c, (RW(16) + 292)));
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00168BE4; } }
L_00168C28:;
SET64(2, (s32)rd32(c, (RW(16) + 316)));
{ int t = RD(2) == RD(0);  if (t) goto L_00168C88; }
SET64(2, rd16(c, (RW(16) + 292)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00168C88; }
SET64(17, RD(0) + RD(0));
L_00168C44:;
SET64(2, (s32)rd32(c, (RW(16) + 316)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_00168C68; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x168c68); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00168C68:;
SET64(2, (s32)rd32(c, (RW(16) + 316)));
SET32(18, RW(18) + 1);
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, rd16(c, (RW(16) + 292)));
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00168C44; } }
L_00168C88:;
SET64(31, 0x168c90); SET64(4, (s32)rd32(c, (RW(16) + 312))); F_00100430(c);
wr32(c, (RW(16) + 312), RW(0));
SET64(31, 0x168c9c); SET64(4, (s32)rd32(c, (RW(16) + 316))); F_00100430(c);
wr32(c, (RW(16) + 316), RW(0));
SET64(31, 0x168ca8); SET64(4, (s32)rd32(c, (RW(16) + 308))); F_001004B0(c);
wr32(c, (RW(16) + 308), RW(0)); goto L_00168CB8;
L_00168CB0:;
wr32(c, (RW(16) + 312), RW(0));
wr32(c, (RW(16) + 316), RW(0));
L_00168CB8:;
wr16(c, (RW(16) + 292), (u16)RW(0));
SET64(2, rd8(c, (RW(16) + 271)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 324), RW(0)); goto L_00168D08; }
SET64(4, (s32)rd32(c, (RW(16) + 324)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 324), RW(0)); goto L_00168CE8; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x168ce4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 324), RW(0));
L_00168CE8:;
SET64(2, (s32)rd32(c, (RW(16) + 296)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 296), RW(0)); goto L_00168D0C; }
SET64(31, 0x168cfc); SET32(4, RW(2) + -16); F_00100430(c);
wr32(c, (RW(16) + 296), RW(0));
 goto L_00168D0C;
L_00168D08:;
wr32(c, (RW(16) + 296), RW(0));
L_00168D0C:;
SET64(4, (s32)rd32(c, (RW(16) + 300)));
SET64(5, (s64)(s32)0x160000);
SET64(31, 0x168d1c); SET32(5, RW(5) + 14512); F_001022C0(c);
wr32(c, (RW(16) + 300), RW(0));
SET64(2, rd8(c, (RW(16) + 271)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 332), RW(0)); goto L_00168D44; }
SET64(2, (s32)rd32(c, (RW(16) + 332)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 332), RW(0)); goto L_00168D44; }
SET64(31, 0x168d40); SET32(4, RW(2) + -16); F_00100430(c);
wr32(c, (RW(16) + 332), RW(0));
L_00168D44:;
SET64(2, (s32)rd32(c, (RW(16) + 336)));
if (RD(2) == RD(0)) { wr16(c, (RW(16) + 328), (u16)RW(0)); goto L_00168DB8; }
SET64(2, rd16(c, (RW(16) + 328)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00168DA8; }
SET64(17, RD(0) + RD(0));
L_00168D60:;
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_00168D88; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x168d84); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00168D88:;
SET64(2, (s32)rd32(c, (RW(16) + 336)));
SET32(18, RW(18) + 1);
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, rd16(c, (RW(16) + 328)));
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00168D60; } }
L_00168DA8:;
SET64(31, 0x168db0); SET64(4, (s32)rd32(c, (RW(16) + 336))); F_001004B0(c);
wr32(c, (RW(16) + 336), RW(0));
wr16(c, (RW(16) + 328), (u16)RW(0));
L_00168DB8:;
SET64(2, rd8(c, (RW(16) + 271)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 344), RW(0)); goto L_00168DDC; }
SET64(2, (s32)rd32(c, (RW(16) + 344)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 344), RW(0)); goto L_00168DDC; }
SET64(31, 0x168dd8); SET32(4, RW(2) + -16); F_00100430(c);
wr32(c, (RW(16) + 344), RW(0));
L_00168DDC:;
SET64(2, (s32)rd32(c, (RW(16) + 348)));
if (RD(2) == RD(0)) { wr16(c, (RW(16) + 340), (u16)RW(0)); goto L_00168E50; }
SET64(2, rd16(c, (RW(16) + 340)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00168E40; }
SET64(17, RD(0) + RD(0));
L_00168DF8:;
SET64(2, (s32)rd32(c, (RW(16) + 348)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_00168E20; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x168e1c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00168E20:;
SET64(2, (s32)rd32(c, (RW(16) + 348)));
SET32(18, RW(18) + 1);
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, rd16(c, (RW(16) + 340)));
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00168DF8; } }
L_00168E40:;
SET64(31, 0x168e48); SET64(4, (s32)rd32(c, (RW(16) + 348))); F_001004B0(c);
wr32(c, (RW(16) + 348), RW(0));
wr16(c, (RW(16) + 340), (u16)RW(0));
L_00168E50:;
SET64(2, rd8(c, (RW(16) + 271)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 356), RW(0)); goto L_00168E74; }
SET64(2, (s32)rd32(c, (RW(16) + 356)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 356), RW(0)); goto L_00168E74; }
SET64(31, 0x168e70); SET32(4, RW(2) + -16); F_00100430(c);
wr32(c, (RW(16) + 356), RW(0));
L_00168E74:;
SET64(4, (s32)rd32(c, (RW(16) + 400)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 400), RW(0)); goto L_00168E94; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x168e90); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 400), RW(0));
L_00168E94:;
SET64(31, 0x168e9c); SET64(4, (s32)rd32(c, (RW(16) + 360))); F_00100430(c);
wr32(c, (RW(16) + 360), RW(0));
wr16(c, (RW(16) + 352), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 380)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 380), RW(0)); goto L_00168EC4; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x168ec0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 380), RW(0));
L_00168EC4:;
SET64(4, (s32)rd32(c, (RW(16) + 384)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 384), RW(0)); goto L_00168EE4; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x168ee0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 384), RW(0));
L_00168EE4:;
SET64(4, (s32)rd32(c, (RW(16) + 388)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 388), RW(0)); goto L_00168F04; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x168f00); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 388), RW(0));
L_00168F04:;
SET64(4, (s32)rd32(c, (RW(16) + 392)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 392), RW(0)); goto L_00168F24; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x168f20); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 392), RW(0));
L_00168F24:;
SET64(4, (s32)rd32(c, (RW(16) + 412)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 412), RW(0)); goto L_00168F44; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x168f40); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 412), RW(0));
L_00168F44:;
wr8(c, (RW(16) + 271), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_00168F60(Ctx *c) { /* func_00168F60 */
ENTER(0x168f60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00168FB0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -23952);
wr32(c, (RW(17) + 4), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x168f98);  rt_call(c, t); }
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00168FB4; }
SET64(31, 0x168fb0); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_00168FB0:;
SET64(2, RD(17) + RD(0));
L_00168FB4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00168FD0(Ctx *c) { /* func_00168FD0 */
ENTER(0x168fd0);
wr32(c, (RW(4) + 0), RW(0)); return;
}

void F_00168FE0(Ctx *c) { /* func_00168FE0 */
ENTER(0x168fe0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001691D8; }
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -23856);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 12), RW(2));
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET32(9, RW(9) + -23760);
SET32(8, RW(8) + -23796);
SET32(7, RW(7) + -23688);
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
{ u32 t = RW(25); SET64(31, 0x169080);  rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_0016910C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -27856);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 12), RW(2));
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET32(9, RW(9) + -27776);
SET32(8, RW(8) + -27812);
SET32(7, RW(7) + -27704);
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
{ u32 t = RW(25); SET64(31, 0x16910c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016910C:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_001691C4; }
SET32(4, RW(17) + 336);
SET64(31, 0x169120); SET64(5, RD(0) + RD(0)); F_002A2540(c);
SET32(4, RW(17) + 48);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 24); goto L_0016919C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -27472);
SET32(5, RW(5) + -27400);
wr32(c, (RW(17) + 324), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 304)));
SET32(2, RW(17) + 328);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 304)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169168);  rt_call(c, t); }
SET32(2, RW(17) + 48);
{ int t = RD(2) == RD(0);  if (t) goto L_00169198; }
SET32(4, RW(17) + 80);
SET64(31, 0x169180); SET32(5, RW(0) + -1); F_002A5950(c);
SET32(2, RW(17) + 48);
{ int t = RD(2) == RD(0);  if (t) goto L_00169198; }
SET32(4, RW(17) + 52);
SET64(31, 0x169198); SET64(5, RD(0) + RD(0)); F_002AB240(c);
L_00169198:;
SET32(4, RW(17) + 24);
L_0016919C:;
{ int t = RD(4) == RD(0);  if (t) goto L_001691C0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 40), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1691c0);  rt_call(c, t); }
L_001691C0:;
SET64(2, RD(16) << 48);
L_001691C4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001691DC; }
SET64(31, 0x1691d8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001691D8:;
SET64(2, RD(17) + RD(0));
L_001691DC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001691F0(Ctx *c) { /* func_001691F0 */
ENTER(0x1691f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00169270; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -23312);
wr32(c, (RW(17) + 16), RW(2));
SET64(31, 0x169220); SET64(4, (s32)rd32(c, (RW(17) + 36))); F_00100430(c);
wr32(c, (RW(17) + 36), RW(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x169230); wr32(c, (RW(17) + 40), RW(0)); F_00156AD0(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016925C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + -26960);
SET64(31, 0x16924c); wr32(c, (RW(17) + 16), RW(2)); F_00156AD0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x169258); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(2, RD(16) << 48);
L_0016925C:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00169274; }
SET64(31, 0x169270); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_00169270:;
SET64(2, RD(17) + RD(0));
L_00169274:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00169290(Ctx *c) { /* func_00169290 */
ENTER(0x169290);
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
{ u32 t = RW(25); SET64(31, 0x1692cc);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(21) + 244))); goto L_001692DC; }
SET64(2, RD(0) + RD(0)); goto L_00169670;
L_001692DC:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1692ec);  rt_call(c, t); }
wr8(c, (RW(21) + 270), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(21) + 244)));
SET64(20, rd16(c, (RW(21) + 292)));
SET64(2, rd16(c, (RW(2) + 32)));
SET64(1, RSD(2) < RSD(20));
if (RD(1) == RD(0)) { SET32(16, RW(20) << 2); goto L_00169310; }
SET64(20, RD(2) + RD(0));
SET32(16, RW(20) << 2);
L_00169310:;
SET64(31, 0x169318); SET64(4, RD(16) + RD(0)); F_00100530(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x169324); wr32(c, (RW(21) + 312), RW(2)); F_00100530(c);
wr32(c, (RW(21) + 316), RW(2));
{ int t = RSD(20) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_00169470; }
SET64(1, RSD(20) < (s64)9);
{ int t = RD(1) != RD(0); SET32(2, RW(20) + -8); if (t) goto L_00169438; }
{ int t = RSD(20) < 0; SET64(3, RD(0) + RD(0)); if (t) goto L_0016935C; }
SET64(1, (s64)(s32)0x7fff0000);
SET64(1, RD(1) | 0xffff);
SET64(1, RSD(20) < RSD(1));
{ int t = RD(1) == RD(0);  if (t) goto L_0016935C; }
SET64(3, RD(0) + (s64)1);
L_0016935C:;
{ int t = RD(3) == RD(0);  if (t) goto L_00169438; }
SET64(3, RD(0) + RD(0));
L_00169368:;
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
{ int t = RD(5) != RD(0); SET32(3, RW(3) + 32); if (t) { POLL(); goto L_00169368; } }
L_00169438:;
SET64(1, RSD(4) < RSD(20));
{ int t = RD(1) == RD(0);  if (t) goto L_00169470; }
SET32(5, RW(4) << 2);
L_00169448:;
SET64(3, (s32)rd32(c, (RW(21) + 312)));
SET32(4, RW(4) + 1);
SET64(2, RSD(4) < RSD(20));
SET32(3, RW(3) + RW(5));
wr32(c, (RW(3) + 0), RW(0));
SET64(3, (s32)rd32(c, (RW(21) + 316)));
SET32(3, RW(3) + RW(5));
wr32(c, (RW(3) + 0), RW(0));
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 4); if (t) { POLL(); goto L_00169448; } }
L_00169470:;
{ int t = RSD(20) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00169648; }
SET64(16, RD(0) + RD(0));
L_0016947C:;
SET64(2, (s32)rd32(c, (RW(21) + 244)));
SET32(4, RW(0) + 64);
SET64(3, (s32)rd32(c, (RW(2) + 20)));
SET32(3, RW(3) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x16949c); SET32(18, RW(2) + RW(3)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001694B0; }
SET64(31, 0x1694ac); SET64(4, RD(17) + RD(0)); F_0014F940(c);
L_001694B0:;
SET64(2, (s32)rd32(c, (RW(21) + 312)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 0), RW(17));
SET64(2, rd8(c, (RW(21) + 404)));
{ int t = RD(2) != RD(0);  if (t) goto L_001695F8; }
SET64(4, rd16(c, (RW(18) + 36)));
SET64(2, (s64)(s32)0x540000);
SET64(3, rd16(c, (RW(18) + 38)));
SET32(2, RW(2) + -25664);
SET64(5, (s32)rd32(c, (RW(2) + 4)));
SET64(22, RD(0) + RD(0));
{ int t = RD(5) == RD(0); mul_s(c, 0, 4, RSW(4), RSW(3)); if (t) goto L_00169528; }
SET64(2, (s64)(s32)0xff0000);
SET64(3, RD(2) | 0xffff);
L_001694F0:;
SET64(2, (s32)rd32(c, (RW(5) + 16)));
{ int t = RD(2) != RD(3);  if (t) goto L_00169518; }
SET64(2, (s32)rd32(c, (RW(5) + 8)));
SET64(2, RSD(2) < RSD(4));
{ int t = RD(2) != RD(0);  if (t) goto L_00169518; }
SET64(2, RD(0) + (s64)1); goto L_00169530;
L_00169518:;
SET64(5, (s32)rd32(c, (RW(5) + 4)));
{ int t = RD(5) != RD(0);  if (t) { POLL(); goto L_001694F0; } }
L_00169528:;
SET64(2, RD(0) + RD(0));
L_00169530:;
{ int t = RD(2) == RD(0);  if (t) goto L_00169540; }
SET64(22, RD(0) + (s64)1);
L_00169540:;
SET64(2, RD(22) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_00169580; }
SET64(6, (s32)rd32(c, (RW(21) + 408)));
{ int t = RD(6) == RD(0);  if (t) goto L_00169580; }
SET64(2, (s32)rd32(c, (RW(21) + 312)));
SET64(5, RD(18) + RD(0));
SET64(7, RD(18) + RD(0));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x169574); SET64(8, RD(0) + RD(0)); F_0014F0A0(c);
 goto L_00169618;
L_00169580:;
SET64(31, 0x169588); SET32(4, RW(0) + 32); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169598; }
SET64(31, 0x169598); SET64(4, RD(17) + RD(0)); F_0014FE60(c);
L_00169598:;
SET64(2, (s32)rd32(c, (RW(21) + 316)));
SET64(7, RD(22) + RD(0));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 0), RW(17));
SET64(2, (s32)rd32(c, (RW(21) + 316)));
SET64(5, rd16(c, (RW(18) + 36)));
SET64(6, rd16(c, (RW(18) + 38)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1695c4); SET32(8, RW(0) + 1); F_0014FCE0(c);
SET64(3, (s32)rd32(c, (RW(21) + 312)));
SET64(5, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(21) + 316)));
SET64(8, RD(0) + RD(0));
SET32(3, RW(3) + RW(16));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(16));
SET64(6, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1695ec); SET64(7, RD(4) + RD(0)); F_0014F0A0(c);
 goto L_00169618;
L_001695F8:;
SET64(2, (s32)rd32(c, (RW(21) + 312)));
SET64(6, (s32)rd32(c, (RW(21) + 408)));
SET64(5, RD(18) + RD(0));
SET64(7, RD(18) + RD(0));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x169618); SET64(8, RD(0) + RD(0)); F_0014F0A0(c);
L_00169618:;
SET64(2, (s32)rd32(c, (RW(21) + 312)));
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(31, 0x169634); SET32(4, RW(2) + 32); F_002B1840(c);
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(20));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_0016947C; } }
L_00169648:;
wr16(c, (RW(21) + 292), (u16)RW(20));
SET64(4, (s32)rd32(c, (RW(21) + 244)));
if (RD(4) == RD(0)) { wr32(c, (RW(21) + 244), RW(0)); goto L_0016966C; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x169668); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(21) + 244), RW(0));
L_0016966C:;
SET32(2, RW(0) + 1);
L_00169670:;
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

void F_001696A0(Ctx *c) { /* func_001696A0 */
ENTER(0x1696a0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x1696bc); SET32(4, RW(29) + 48); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(0) + 36);
SET32(2, RW(2) + -26960);
wr32(c, (RW(29) + 68), RW(0));
wr32(c, (RW(29) + 64), RW(2));
wr32(c, (RW(29) + 72), RW(0));
wr32(c, (RW(29) + 76), RW(0));
wr16(c, (RW(29) + 80), (u16)RW(0));
SET64(31, 0x1696e4); wr16(c, (RW(29) + 82), (u16)RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169714; }
SET64(31, 0x1696f4); SET64(4, RD(17) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
wr16(c, (RW(17) + 34), (u16)RW(0));
L_00169714:;
wr32(c, (RW(16) + 244), RW(17));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(2, (s32)rd32(c, (RW(16) + 320)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
SET64(5, (s32)rd32(c, (RW(2) + 36)));
{ u32 t = RW(25); SET64(31, 0x169730); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x169744);  rt_call(c, t); }
SET64(31, 0x16974c); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(16) + 308), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16976c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr8(c, (RW(16) + 270), (u8)RW(3));
SET32(4, RW(29) + 48);
SET64(31, 0x169788); wr32(c, (RW(29) + 64), RW(2)); F_00156AD0(c);
SET32(4, RW(29) + 48);
SET64(31, 0x169794); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

static void B_001697B0(Ctx *c, u32 entry) { /* func_001697B0 */
ENTER(entry);
switch (entry) { case 0x1697e8: goto L_001697E8; case 0x169868: goto L_00169868; case 0x1698e8: goto L_001698E8; case 0x169920: goto L_00169920; case 0x169958: goto L_00169958; case 0x169990: goto L_00169990; case 0x169a04: goto L_00169A04; case 0x169a3c: goto L_00169A3C; case 0x169a74: goto L_00169A74; case 0x169aac: goto L_00169AAC; case 0x169ae4: goto L_00169AE4; case 0x169b1c: goto L_00169B1C; case 0x169b54: goto L_00169B54; case 0x169b8c: goto L_00169B8C; case 0x169bc4: goto L_00169BC4; case 0x169c3c: goto L_00169C3C; case 0x169cb4: goto L_00169CB4; case 0x169d34: goto L_00169D34; case 0x169db4: goto L_00169DB4; case 0x169dec: goto L_00169DEC; case 0x169e24: goto L_00169E24; case 0x169e9c: goto L_00169E9C; case 0x169ed4: goto L_00169ED4; case 0x169f54: goto L_00169F54; case 0x169fcc: goto L_00169FCC; case 0x16a044: goto L_0016A044; case 0x16a07c: goto L_0016A07C; case 0x16a0fc: goto L_0016A0FC; case 0x16a17c: goto L_0016A17C; }
L_001697B0:;
SET32(29, RW(29) + -272);
SET64(1, RD(5) < (u64)(s64)29);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(1) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0016A1F4; }
SET64(4, (s64)(s32)0x490000);
SET32(3, RW(5) << 2);
SET32(4, RW(4) + 17840);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x1697b0: goto L_001697B0; case 0x1697e8: goto L_001697E8; case 0x169868: goto L_00169868; case 0x1698e8: goto L_001698E8; case 0x169920: goto L_00169920; case 0x169958: goto L_00169958; case 0x169990: goto L_00169990; case 0x169a04: goto L_00169A04; case 0x169a3c: goto L_00169A3C; case 0x169a74: goto L_00169A74; case 0x169aac: goto L_00169AAC; case 0x169ae4: goto L_00169AE4; case 0x169b1c: goto L_00169B1C; case 0x169b54: goto L_00169B54; case 0x169b8c: goto L_00169B8C; case 0x169bc4: goto L_00169BC4; case 0x169c3c: goto L_00169C3C; case 0x169cb4: goto L_00169CB4; case 0x169d34: goto L_00169D34; case 0x169db4: goto L_00169DB4; case 0x169dec: goto L_00169DEC; case 0x169e24: goto L_00169E24; case 0x169e9c: goto L_00169E9C; case 0x169ed4: goto L_00169ED4; case 0x169f54: goto L_00169F54; case 0x169fcc: goto L_00169FCC; case 0x16a044: goto L_0016A044; case 0x16a07c: goto L_0016A07C; case 0x16a0fc: goto L_0016A0FC; case 0x16a17c: goto L_0016A17C; default: rt_jump(c, t); return; } }
L_001697E8:;
SET64(31, 0x1697f0); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169848; }
SET64(31, 0x169800); SET64(4, RD(17) + RD(0)); F_003049B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24016);
SET32(3, RW(3) + -23976);
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
L_00169848:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169860); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32))); goto L_0016A1F8;
L_00169868:;
SET64(31, 0x169870); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001698C8; }
SET64(31, 0x169880); SET64(4, RD(17) + RD(0)); F_003049B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24080);
SET32(3, RW(3) + -24040);
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
L_001698C8:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1698e0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_001698E8:;
SET64(31, 0x1698f0); SET32(4, RW(0) + 8); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169900; }
SET64(31, 0x169900); SET64(4, RD(17) + RD(0)); F_003054D0(c);
L_00169900:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169918); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169920:;
SET64(31, 0x169928); SET32(4, RW(0) + 192); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169938; }
SET64(31, 0x169938); SET64(4, RD(17) + RD(0)); F_00304680(c);
L_00169938:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169950); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169958:;
SET64(31, 0x169960); SET32(4, RW(0) + 176); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169970; }
SET64(31, 0x169970); SET64(4, RD(17) + RD(0)); F_003041B0(c);
L_00169970:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169988); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169990:;
SET64(31, 0x169998); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001699E4; }
SET64(31, 0x1699a8); SET64(4, RD(17) + RD(0)); F_003049B0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -24144);
SET32(2, RW(2) + -24104);
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
L_001699E4:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1699fc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169A04:;
SET64(31, 0x169a0c); SET32(4, RW(0) + 20); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169A1C; }
SET64(31, 0x169a1c); SET64(4, RD(17) + RD(0)); F_00303A60(c);
L_00169A1C:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169a34); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169A3C:;
SET64(31, 0x169a44); SET32(4, RW(0) + 8); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169A54; }
SET64(31, 0x169a54); SET64(4, RD(17) + RD(0)); F_00305470(c);
L_00169A54:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169a6c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169A74:;
SET64(31, 0x169a7c); SET32(4, RW(0) + 8); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169A8C; }
SET64(31, 0x169a8c); SET64(4, RD(17) + RD(0)); F_00305410(c);
L_00169A8C:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169aa4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169AAC:;
SET64(31, 0x169ab4); SET32(4, RW(0) + 8); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169AC4; }
SET64(31, 0x169ac4); SET64(4, RD(17) + RD(0)); F_003053B0(c);
L_00169AC4:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169adc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169AE4:;
SET64(31, 0x169aec); SET32(4, RW(0) + 8); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169AFC; }
SET64(31, 0x169afc); SET64(4, RD(17) + RD(0)); F_00305350(c);
L_00169AFC:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169b14); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169B1C:;
SET64(31, 0x169b24); SET32(4, RW(0) + 8); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169B34; }
SET64(31, 0x169b34); SET64(4, RD(17) + RD(0)); F_003052F0(c);
L_00169B34:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169b4c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169B54:;
SET64(31, 0x169b5c); SET32(4, RW(0) + 8); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169B6C; }
SET64(31, 0x169b6c); SET64(4, RD(17) + RD(0)); F_00305290(c);
L_00169B6C:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169b84); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169B8C:;
SET64(31, 0x169b94); SET32(4, RW(0) + 8); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169BA4; }
SET64(31, 0x169ba4); SET64(4, RD(17) + RD(0)); F_00305230(c);
L_00169BA4:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169bbc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169BC4:;
SET64(31, 0x169bcc); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169C1C; }
SET64(31, 0x169bdc); SET64(4, RD(17) + RD(0)); F_003049B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24208);
SET32(3, RW(3) + -24168);
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
L_00169C1C:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169c34); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169C3C:;
SET64(31, 0x169c44); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169C94; }
SET64(31, 0x169c54); SET64(4, RD(17) + RD(0)); F_003049B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24272);
SET32(3, RW(3) + -24232);
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
L_00169C94:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169cac); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169CB4:;
SET64(31, 0x169cbc); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169D14; }
SET64(31, 0x169ccc); SET64(4, RD(17) + RD(0)); F_003049B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24336);
SET32(3, RW(3) + -24296);
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
L_00169D14:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169d2c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169D34:;
SET64(31, 0x169d3c); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169D94; }
SET64(31, 0x169d4c); SET64(4, RD(17) + RD(0)); F_003049B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24400);
SET32(3, RW(3) + -24360);
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
L_00169D94:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169dac); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169DB4:;
SET64(31, 0x169dbc); SET32(4, RW(0) + 8); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169DCC; }
SET64(31, 0x169dcc); SET64(4, RD(17) + RD(0)); F_003051D0(c);
L_00169DCC:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169de4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169DEC:;
SET64(31, 0x169df4); SET32(4, RW(0) + 8); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169E04; }
SET64(31, 0x169e04); SET64(4, RD(17) + RD(0)); F_00305170(c);
L_00169E04:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169e1c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169E24:;
SET64(31, 0x169e2c); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169E7C; }
SET64(31, 0x169e3c); SET64(4, RD(17) + RD(0)); F_003049B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24464);
SET32(3, RW(3) + -24424);
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
L_00169E7C:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169e94); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169E9C:;
SET64(31, 0x169ea4); SET32(4, RW(0) + 8); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169EB4; }
SET64(31, 0x169eb4); SET64(4, RD(17) + RD(0)); F_00305110(c);
L_00169EB4:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169ecc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169ED4:;
SET64(31, 0x169edc); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169F34; }
SET64(31, 0x169eec); SET64(4, RD(17) + RD(0)); F_003049B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24528);
SET32(3, RW(3) + -24488);
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
L_00169F34:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169f4c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169F54:;
SET64(31, 0x169f5c); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00169FAC; }
SET64(31, 0x169f6c); SET64(4, RD(17) + RD(0)); F_003049B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24592);
SET32(3, RW(3) + -24552);
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
L_00169FAC:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x169fc4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_00169FCC:;
SET64(31, 0x169fd4); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A024; }
SET64(31, 0x169fe4); SET64(4, RD(17) + RD(0)); F_003049B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24656);
SET32(3, RW(3) + -24616);
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
L_0016A024:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a03c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_0016A044:;
SET64(31, 0x16a04c); SET32(4, RW(0) + 8); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A05C; }
SET64(31, 0x16a05c); SET64(4, RD(17) + RD(0)); F_003050B0(c);
L_0016A05C:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a074); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_0016A07C:;
SET64(31, 0x16a084); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A0DC; }
SET64(31, 0x16a094); SET64(4, RD(17) + RD(0)); F_003049B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24720);
SET32(3, RW(3) + -24680);
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
L_0016A0DC:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a0f4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_0016A0FC:;
SET64(31, 0x16a104); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A15C; }
SET64(31, 0x16a114); SET64(4, RD(17) + RD(0)); F_003049B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24784);
SET32(3, RW(3) + -24744);
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
L_0016A15C:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a174); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_0016A1F4;
L_0016A17C:;
SET64(31, 0x16a184); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A1DC; }
SET64(31, 0x16a194); SET64(4, RD(17) + RD(0)); F_003049B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24848);
SET32(3, RW(3) + -24808);
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
L_0016A1DC:;
wr32(c, (RW(16) + 412), RW(17));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16a1f4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016A1F4:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0016A1F8:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 272); return;
}
void F_001697B0(Ctx *c) { B_001697B0(c, 0x1697b0); }
void F_001697E8(Ctx *c) { B_001697B0(c, 0x1697e8); }
void F_00169868(Ctx *c) { B_001697B0(c, 0x169868); }
void F_001698E8(Ctx *c) { B_001697B0(c, 0x1698e8); }
void F_00169920(Ctx *c) { B_001697B0(c, 0x169920); }
void F_00169958(Ctx *c) { B_001697B0(c, 0x169958); }
void F_00169990(Ctx *c) { B_001697B0(c, 0x169990); }
void F_00169A04(Ctx *c) { B_001697B0(c, 0x169a04); }
void F_00169A3C(Ctx *c) { B_001697B0(c, 0x169a3c); }
void F_00169A74(Ctx *c) { B_001697B0(c, 0x169a74); }
void F_00169AAC(Ctx *c) { B_001697B0(c, 0x169aac); }
void F_00169AE4(Ctx *c) { B_001697B0(c, 0x169ae4); }
void F_00169B1C(Ctx *c) { B_001697B0(c, 0x169b1c); }
void F_00169B54(Ctx *c) { B_001697B0(c, 0x169b54); }
void F_00169B8C(Ctx *c) { B_001697B0(c, 0x169b8c); }
void F_00169BC4(Ctx *c) { B_001697B0(c, 0x169bc4); }
void F_00169C3C(Ctx *c) { B_001697B0(c, 0x169c3c); }
void F_00169CB4(Ctx *c) { B_001697B0(c, 0x169cb4); }
void F_00169D34(Ctx *c) { B_001697B0(c, 0x169d34); }
void F_00169DB4(Ctx *c) { B_001697B0(c, 0x169db4); }
void F_00169DEC(Ctx *c) { B_001697B0(c, 0x169dec); }
void F_00169E24(Ctx *c) { B_001697B0(c, 0x169e24); }
void F_00169E9C(Ctx *c) { B_001697B0(c, 0x169e9c); }
void F_00169ED4(Ctx *c) { B_001697B0(c, 0x169ed4); }
void F_00169F54(Ctx *c) { B_001697B0(c, 0x169f54); }
void F_00169FCC(Ctx *c) { B_001697B0(c, 0x169fcc); }
void F_0016A044(Ctx *c) { B_001697B0(c, 0x16a044); }
void F_0016A07C(Ctx *c) { B_001697B0(c, 0x16a07c); }
void F_0016A0FC(Ctx *c) { B_001697B0(c, 0x16a0fc); }
void F_0016A17C(Ctx *c) { B_001697B0(c, 0x16a17c); }

void F_0016A210(Ctx *c) { /* func_0016A210 */
ENTER(0x16a210);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016A2A8; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -10528);
SET32(2, RW(2) + -10488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16a254);  rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016A270; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16a270); wr32(c, (RW(17) + 56), RW(2)); F_00304BC0(c);
L_0016A270:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016A294; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -23952);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16a290); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_0016A294:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016A2AC; }
SET64(31, 0x16a2a8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016A2A8:;
SET64(2, RD(17) + RD(0));
L_0016A2AC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016A2C0(Ctx *c) { /* func_0016A2C0 */
ENTER(0x16a2c0);
wr32(c, (RW(4) + 0), RW(5)); return;
}

void F_0016A2D0(Ctx *c) { /* func_0016A2D0 */
ENTER(0x16a2d0);
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
{ u32 t = RW(25); SET64(31, 0x16a314);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(21) + 244))); goto L_0016A324; }
SET64(2, RD(0) + RD(0)); goto L_0016A8C4;
L_0016A324:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x16a334);  rt_call(c, t); }
wr8(c, (RW(21) + 270), (u8)RW(0));
SET64(31, 0x16a340); SET64(4, (s32)rd32(c, (RW(21) + 248))); F_0014A900(c);
SET64(31, 0x16a348); SET64(4, (s32)rd32(c, (RW(21) + 248))); F_0014A8F0(c);
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
{ int t = RD(2) == RD(0);  if (t) goto L_0016A498; }
SET64(30, RD(2) & 0xffff);
wr8(c, (RW(29) + 160), (u8)RW(0));
SET32(2, RW(30) << 3);
SET32(2, RW(2) - RW(30));
SET32(2, RW(2) << 4);
SET64(31, 0x16a3cc); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_0016A3FC; }
SET32(2, RW(0) + 1);
SET64(5, (s64)(s32)0x170000);
SET64(8, RD(30) + RD(0));
wr8(c, (RW(29) + 160), (u8)RW(2));
SET64(4, RD(20) + RD(0));
SET32(5, RW(5) + -21936);
SET64(6, RD(0) + RD(0));
SET64(31, 0x16a3f8); SET32(7, RW(0) + 112); F_00102580(c);
SET64(20, RD(2) + RD(0));
L_0016A3FC:;
wr32(c, (RW(21) + 332), RW(20));
SET64(3, rd16(c, (RW(21) + 328)));
SET64(2, (s32)rd32(c, (RW(16) + 28)));
{ int t = RSD(3) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_0016A498; }
SET64(3, RD(0) + RD(0));
SET32(6, RW(0) + 16);
L_0016A418:;
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
L_0016A450:;
SET64(7, (s8)rd8(c, (RW(10) + 0)));
SET32(8, RW(8) + -1);
SET64(5, (s8)rd8(c, (RW(10) + 1)));
wr8(c, (RW(9) + 0), (u8)RW(7));
SET32(10, RW(10) + 2);
wr8(c, (RW(9) + 1), (u8)RW(5));
{ int t = RSD(8) > 0; SET32(9, RW(9) + 2); if (t) { POLL(); goto L_0016A450; } }
SET64(5, rd16(c, (RW(2) + 96)));
SET32(4, RW(4) + 1);
SET32(3, RW(3) + 112);
wr16(c, (RW(13) + 96), (u16)RW(5));
SET64(5, rd16(c, (RW(2) + 98)));
wr16(c, (RW(13) + 98), (u16)RW(5));
SET64(5, rd16(c, (RW(21) + 328)));
SET64(5, RSD(4) < RSD(5));
{ int t = RD(5) != RD(0); SET32(2, RW(2) + 112); if (t) { POLL(); goto L_0016A418; } }
L_0016A498:;
SET64(2, rd16(c, (RW(21) + 340)));
{ int t = RD(2) == RD(0);  if (t) goto L_0016A588; }
SET64(20, RD(2) & 0xffff);
SET64(30, RD(0) + RD(0));
SET32(2, RW(20) << 3);
SET32(2, RW(2) - RW(20));
SET32(2, RW(2) << 4);
SET64(31, 0x16a4c0); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_0016A4EC; }
SET64(5, (s64)(s32)0x170000);
SET64(8, RD(20) + RD(0));
SET32(30, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + -21936);
SET64(6, RD(0) + RD(0));
SET64(31, 0x16a4e8); SET32(7, RW(0) + 112); F_00102580(c);
SET64(19, RD(2) + RD(0));
L_0016A4EC:;
wr32(c, (RW(21) + 344), RW(19));
SET64(3, rd16(c, (RW(21) + 340)));
SET64(2, (s32)rd32(c, (RW(16) + 32)));
{ int t = RSD(3) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_0016A588; }
SET64(3, RD(0) + RD(0));
SET32(6, RW(0) + 16);
L_0016A508:;
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
L_0016A540:;
SET64(7, (s8)rd8(c, (RW(10) + 0)));
SET32(8, RW(8) + -1);
SET64(5, (s8)rd8(c, (RW(10) + 1)));
wr8(c, (RW(9) + 0), (u8)RW(7));
SET32(10, RW(10) + 2);
wr8(c, (RW(9) + 1), (u8)RW(5));
{ int t = RSD(8) > 0; SET32(9, RW(9) + 2); if (t) { POLL(); goto L_0016A540; } }
SET64(5, rd16(c, (RW(2) + 96)));
SET32(4, RW(4) + 1);
SET32(3, RW(3) + 112);
wr16(c, (RW(13) + 96), (u16)RW(5));
SET64(5, rd16(c, (RW(2) + 98)));
wr16(c, (RW(13) + 98), (u16)RW(5));
SET64(5, rd16(c, (RW(21) + 340)));
SET64(5, RSD(4) < RSD(5));
{ int t = RD(5) != RD(0); SET32(2, RW(2) + 112); if (t) { POLL(); goto L_0016A508; } }
L_0016A588:;
SET64(2, rd16(c, (RW(21) + 352)));
{ int t = RD(2) == RD(0);  if (t) goto L_0016A678; }
SET64(19, RD(2) & 0xffff);
SET64(20, RD(0) + RD(0));
SET32(2, RW(19) << 3);
SET32(2, RW(2) - RW(19));
SET32(2, RW(2) << 4);
SET64(31, 0x16a5b0); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0016A5DC; }
SET64(5, (s64)(s32)0x170000);
SET64(8, RD(19) + RD(0));
SET32(20, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET32(5, RW(5) + -22080);
SET64(6, RD(0) + RD(0));
SET64(31, 0x16a5d8); SET32(7, RW(0) + 112); F_00102580(c);
SET64(18, RD(2) + RD(0));
L_0016A5DC:;
wr32(c, (RW(21) + 356), RW(18));
SET64(3, rd16(c, (RW(21) + 352)));
SET64(2, (s32)rd32(c, (RW(16) + 36)));
{ int t = RSD(3) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_0016A678; }
SET64(3, RD(0) + RD(0));
SET32(6, RW(0) + 16);
L_0016A5F8:;
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
L_0016A630:;
SET64(7, (s8)rd8(c, (RW(10) + 0)));
SET32(8, RW(8) + -1);
SET64(5, (s8)rd8(c, (RW(10) + 1)));
wr8(c, (RW(9) + 0), (u8)RW(7));
SET32(10, RW(10) + 2);
wr8(c, (RW(9) + 1), (u8)RW(5));
{ int t = RSD(8) > 0; SET32(9, RW(9) + 2); if (t) { POLL(); goto L_0016A630; } }
SET64(5, rd16(c, (RW(2) + 96)));
SET32(4, RW(4) + 1);
SET32(3, RW(3) + 112);
wr16(c, (RW(13) + 96), (u16)RW(5));
SET64(5, rd16(c, (RW(2) + 98)));
wr16(c, (RW(13) + 98), (u16)RW(5));
SET64(5, rd16(c, (RW(21) + 352)));
SET64(5, RSD(4) < RSD(5));
{ int t = RD(5) != RD(0); SET32(2, RW(2) + 112); if (t) { POLL(); goto L_0016A5F8; } }
L_0016A678:;
SET64(2, rd16(c, (RW(21) + 364)));
{ int t = RD(2) == RD(0);  if (t) goto L_0016A728; }
SET64(18, RD(2) & 0xffff);
SET64(19, RD(0) + RD(0));
SET32(2, RW(18) << 5);
SET64(31, 0x16a698); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(22, RD(2) + RD(0)); if (t) goto L_0016A6C4; }
SET64(5, (s64)(s32)0x170000);
SET64(8, RD(18) + RD(0));
SET32(19, RW(0) + 1);
SET64(4, RD(22) + RD(0));
SET32(5, RW(5) + -22160);
SET64(6, RD(0) + RD(0));
SET64(31, 0x16a6c0); SET32(7, RW(0) + 32); F_00102580(c);
SET64(22, RD(2) + RD(0));
L_0016A6C4:;
wr32(c, (RW(21) + 368), RW(22));
SET64(2, rd16(c, (RW(21) + 364)));
SET64(4, (s32)rd32(c, (RW(16) + 40)));
{ int t = RSD(2) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0016A728; }
SET64(5, RD(0) + RD(0));
L_0016A6DC:;
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
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_0016A6DC; } }
L_0016A728:;
SET64(2, rd16(c, (RW(21) + 372)));
{ int t = RD(2) == RD(0);  if (t) goto L_0016A7D8; }
SET64(18, RD(2) & 0xffff);
SET64(19, RD(0) + RD(0));
SET32(2, RW(18) << 5);
SET64(31, 0x16a748); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(23, RD(2) + RD(0)); if (t) goto L_0016A774; }
SET64(5, (s64)(s32)0x170000);
SET64(8, RD(18) + RD(0));
SET32(19, RW(0) + 1);
SET64(4, RD(23) + RD(0));
SET32(5, RW(5) + -22240);
SET64(6, RD(0) + RD(0));
SET64(31, 0x16a770); SET32(7, RW(0) + 32); F_00102580(c);
SET64(23, RD(2) + RD(0));
L_0016A774:;
wr32(c, (RW(21) + 376), RW(23));
SET64(2, rd16(c, (RW(21) + 372)));
SET64(4, (s32)rd32(c, (RW(16) + 44)));
{ int t = RSD(2) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0016A7D8; }
SET64(5, RD(0) + RD(0));
L_0016A78C:;
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
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_0016A78C; } }
L_0016A7D8:;
SET64(3, rd16(c, (RW(21) + 288)));
SET64(2, rd16(c, (RW(21) + 290)));
SET64(18, RD(0) + RD(0));
mul_s(c, 0, 19, RSW(3), RSW(2));
SET32(2, RW(19) << 2);
SET64(31, 0x16a7f4); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016A820; }
SET64(5, (s64)(s32)0x170000);
SET64(8, RD(19) + RD(0));
SET32(18, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET32(5, RW(5) + -22272);
SET64(6, RD(0) + RD(0));
SET64(31, 0x16a81c); SET32(7, RW(0) + 4); F_00102580(c);
SET64(17, RD(2) + RD(0));
L_0016A820:;
wr32(c, (RW(21) + 296), RW(17));
SET64(2, rd16(c, (RW(21) + 290)));
SET64(7, (s32)rd32(c, (RW(16) + 48)));
{ int t = RSD(2) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0016A888; }
SET64(2, rd16(c, (RW(21) + 288)));
L_0016A838:;
{ int t = RSD(2) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_0016A870; }
L_0016A840:;
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
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_0016A840; } }
L_0016A870:;
SET64(2, rd16(c, (RW(21) + 290)));
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(21) + 288))); { POLL(); goto L_0016A838; } }
L_0016A888:;
SET64(5, rd16(c, (RW(21) + 294)));
SET64(31, 0x16a894); SET64(4, RD(21) + RD(0)); F_001697B0(c);
SET64(31, 0x16a89c); SET64(4, (s32)rd32(c, (RW(21) + 248))); F_001004B0(c);
wr32(c, (RW(21) + 248), RW(0));
SET64(4, (s32)rd32(c, (RW(21) + 244)));
if (RD(4) == RD(0)) { wr32(c, (RW(21) + 244), RW(0)); goto L_0016A8C0; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16a8bc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(21) + 244), RW(0));
L_0016A8C0:;
SET32(2, RW(0) + 1);
L_0016A8C4:;
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

void F_0016A900(Ctx *c) { /* func_0016A900 */
ENTER(0x16a900);
wr16(c, (RW(4) + 0), (u16)RW(0));
SET64(3, RD(0) | 0xffff);
SET64(2, RD(4) + RD(0));
wr16(c, (RW(4) + 2), (u16)RW(3)); return;
}

void F_0016A920(Ctx *c) { /* func_0016A920 */
ENTER(0x16a920);
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

void F_0016A970(Ctx *c) { /* func_0016A970 */
ENTER(0x16a970);
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

void F_0016A9C0(Ctx *c) { /* func_0016A9C0 */
ENTER(0x16a9c0);
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
L_0016AA10:;
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
{ int t = RD(2) != RD(0); wr8(c, (RW(3) + 71), (u8)RW(0)); if (t) { POLL(); goto L_0016AA10; } }
SET64(2, RD(4) + RD(0)); return;
}

void F_0016AA50(Ctx *c) { /* func_0016AA50 */
ENTER(0x16aa50);
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
L_0016AAA0:;
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
{ int t = RD(2) != RD(0); wr8(c, (RW(3) + 71), (u8)RW(0)); if (t) { POLL(); goto L_0016AAA0; } }
SET64(2, RD(4) + RD(0)); return;
}

void F_0016AAE0(Ctx *c) { /* func_0016AAE0 */
ENTER(0x16aae0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(4, RW(0) + 36);
SET64(31, 0x16ab04); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016AB34; }
SET64(31, 0x16ab14); SET64(4, RD(16) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_0016AB34:;
wr32(c, (RW(19) + 244), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
SET64(5, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(25); SET64(31, 0x16ab50); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16ab64);  rt_call(c, t); }
SET64(31, 0x16ab6c); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16ab8c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_0016AB94:;
SET64(31, 0x16ab9c); SET64(4, RD(19) + RD(0)); F_0016A2D0(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016AB94; } }
SET64(31, 0x16abb8); SET32(4, RW(0) + 44); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016ABFC; }
SET64(31, 0x16abc8); SET64(4, RD(16) + RD(0)); F_00157630(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -26960);
SET32(2, RW(2) + -23312);
wr32(c, (RW(16) + 16), RW(3));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 36), RW(0));
wr32(c, (RW(16) + 40), RW(0));
L_0016ABFC:;
wr32(c, (RW(19) + 324), RW(16));
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)rd32(c, (RW(2) + 40)));
SET64(31, 0x16ac14); SET64(4, RD(16) + RD(0)); F_00157510(c);
SET64(31, 0x16ac1c); SET64(4, RD(16) + RD(0)); F_001570E0(c);
SET64(31, 0x16ac24); SET64(4, RD(2) + RD(0)); F_00100530(c);
wr32(c, (RW(16) + 36), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x16ac3c); SET64(7, RD(0) + RD(0)); F_001572D0(c);
L_0016AC3C:;
SET64(31, 0x16ac44); SET64(4, RD(16) + RD(0)); F_00157250(c);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016AC3C; } }
SET64(31, 0x16ac60); SET64(4, RD(16) + RD(0)); F_00157110(c);
SET64(5, (s32)rd32(c, (RW(16) + 36)));
SET64(31, 0x16ac6c); SET64(4, RD(16) + RD(0)); F_001569F0(c);
wr32(c, (RW(16) + 40), RW(17));
SET64(8, RD(0) + RD(0));
SET64(2, rd16(c, (RW(19) + 290)));
{ int t = RSD(2) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_0016ACF0; }
SET64(3, rd16(c, (RW(19) + 288)));
L_0016AC84:;
{ int t = RSD(3) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0016ACD8; }
SET64(5, RD(7) & 0xffff);
L_0016AC90:;
SET64(4, RD(6) & 0xffff);
mul_s(c, 0, 2, RSW(5), RSW(3));
SET32(2, RW(4) + RW(2));
SET64(3, (s32)rd32(c, (RW(19) + 296)));
SET32(2, RW(2) << 2);
SET32(3, RW(3) + RW(2));
SET64(2, rd16(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_0016ACC0; }
wr16(c, (RW(3) + 2), (u16)RW(8));
SET32(8, RW(8) + 1);
L_0016ACC0:;
SET64(3, rd16(c, (RW(19) + 288)));
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016AC90; } }
L_0016ACD8:;
SET64(2, rd16(c, (RW(19) + 290)));
SET32(7, RW(7) + 1);
SET64(2, RSD(7) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(19) + 288))); { POLL(); goto L_0016AC84; } }
L_0016ACF0:;
SET64(5, rd16(c, (RW(19) + 294)));
SET64(31, 0x16acfc); SET64(4, RD(19) + RD(0)); F_001696A0(c);
L_0016ACFC:;
SET64(31, 0x16ad04); SET64(4, RD(19) + RD(0)); F_00169290(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016ACFC; } }
SET64(3, rd16(c, (RW(19) + 288)));
SET64(16, RD(0) + RD(0));
SET64(2, rd16(c, (RW(19) + 290)));
mul_s(c, 0, 17, RSW(3), RSW(2));
SET32(2, RW(17) << 3);
SET32(3, RW(2) - RW(17));
SET32(2, RW(3) << 2);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 4);
SET64(31, 0x16ad44); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0016AD74; }
SET64(5, (s64)(s32)0x160000);
SET64(6, (s64)(s32)0x160000);
SET64(8, RD(17) + RD(0));
SET32(16, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET32(5, RW(5) + 14736);
SET32(6, RW(6) + 14512);
SET64(31, 0x16ad70); SET32(7, RW(0) + 336); F_00102580(c);
SET64(18, RD(2) + RD(0));
L_0016AD74:;
wr32(c, (RW(19) + 300), RW(18));
wr16(c, (RW(19) + 264), (u16)RW(0));
wr16(c, (RW(19) + 266), (u16)RW(0));
L_0016AD80:;
SET64(31, 0x16ad88); SET64(4, RD(19) + RD(0)); F_00163AE0(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016AD80; } }
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 48)));
if (RD(17) != RD(0)) { SET32(4, RW(0) + 36); goto L_0016ADB8; }
wr16(c, (RW(19) + 328), (u16)RW(0));
SET64(3, RD(0) + RD(0)); goto L_0016AE50;
L_0016ADB8:;
SET64(31, 0x16adc0);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016ADF0; }
SET64(31, 0x16add0); SET64(4, RD(16) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_0016ADF0:;
wr32(c, (RW(19) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16ae08); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16ae1c);  rt_call(c, t); }
SET64(31, 0x16ae24); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16ae44); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
SET64(3, RD(0) + (s64)1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_0016AE50:;
{ int t = RD(3) == RD(0);  if (t) goto L_0016AE98; }
L_0016AE58:;
SET64(31, 0x16ae60); SET64(4, RD(19) + RD(0)); F_001674E0(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016AE58; } }
L_0016AE78:;
SET64(31, 0x16ae80); SET64(4, RD(19) + RD(0)); F_001671F0(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016AE78; } }
L_0016AE98:;
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(5, (s32)rd32(c, (RW(2) + 56)));
SET64(31, 0x16aea8); SET64(4, RD(19) + RD(0)); F_00166670(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0016AF78; }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
L_0016AEB4:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16aec4);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0016AED8; }
SET64(2, RD(0) + RD(0)); goto L_0016AF48;
L_0016AED8:;
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x16aeec);  rt_call(c, t); }
wr8(c, (RW(19) + 270), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(19) + 244)));
SET64(2, rd16(c, (RW(2) + 32)));
wr16(c, (RW(19) + 340), (u16)RW(2));
SET64(2, rd16(c, (RW(19) + 340)));
SET64(31, 0x16af08); SET32(4, RW(2) << 2); F_00100530(c);
wr32(c, (RW(19) + 348), RW(2));
SET64(2, rd16(c, (RW(19) + 340)));
{ int t = RSD(2) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_0016AF40; }
SET64(3, RD(0) + RD(0));
L_0016AF20:;
SET64(2, (s32)rd32(c, (RW(19) + 348)));
SET32(4, RW(4) + 1);
SET32(2, RW(2) + RW(3));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, rd16(c, (RW(19) + 340)));
SET64(2, RSD(4) < RSD(2));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 4); if (t) { POLL(); goto L_0016AF20; } }
L_0016AF40:;
wr16(c, (RW(19) + 268), (u16)RW(0));
SET64(2, RD(0) + (s64)1);
L_0016AF48:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 244))); { POLL(); goto L_0016AEB4; } }
L_0016AF58:;
SET64(31, 0x16af60); SET64(4, RD(19) + RD(0)); F_00166410(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016AF58; } }
L_0016AF78:;
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 52)));
if (RD(17) != RD(0)) { SET32(4, RW(0) + 36); goto L_0016AF90; }
SET64(3, RD(0) + RD(0)); goto L_0016B028;
L_0016AF90:;
SET64(31, 0x16af98);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016AFC8; }
SET64(31, 0x16afa8); SET64(4, RD(16) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_0016AFC8:;
wr32(c, (RW(19) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16afe0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16aff4);  rt_call(c, t); }
SET64(31, 0x16affc); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16b01c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
SET64(3, RD(0) + (s64)1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_0016B028:;
{ int t = RD(3) == RD(0);  if (t) goto L_0016B050; }
L_0016B030:;
SET64(31, 0x16b038); SET64(4, RD(19) + RD(0)); F_00166FF0(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016B030; } }
L_0016B050:;
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 60)));
if (RD(17) != RD(0)) { SET32(4, RW(0) + 36); goto L_0016B068; }
SET64(3, RD(0) + RD(0)); goto L_0016B100;
L_0016B068:;
SET64(31, 0x16b070);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016B0A0; }
SET64(31, 0x16b080); SET64(4, RD(16) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_0016B0A0:;
wr32(c, (RW(19) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16b0b8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16b0cc);  rt_call(c, t); }
SET64(31, 0x16b0d4); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16b0f4); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
SET64(3, RD(0) + (s64)1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_0016B100:;
{ int t = RD(3) == RD(0);  if (t) goto L_0016B148; }
L_0016B108:;
SET64(31, 0x16b110); SET64(4, RD(19) + RD(0)); F_00166E60(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016B108; } }
L_0016B128:;
SET64(31, 0x16b130); SET64(4, RD(19) + RD(0)); F_00166D40(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016B128; } }
L_0016B148:;
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 64)));
if (RD(17) != RD(0)) { SET32(4, RW(0) + 36); goto L_0016B160; }
SET64(3, RD(0) + RD(0)); goto L_0016B1F8;
L_0016B160:;
SET64(31, 0x16b168);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016B198; }
SET64(31, 0x16b178); SET64(4, RD(16) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_0016B198:;
wr32(c, (RW(19) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16b1b0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16b1c4);  rt_call(c, t); }
SET64(31, 0x16b1cc); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16b1ec); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
SET64(3, RD(0) + (s64)1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_0016B1F8:;
{ int t = RD(3) == RD(0);  if (t) goto L_0016B220; }
L_0016B200:;
SET64(31, 0x16b208); SET64(4, RD(19) + RD(0)); F_00166AC0(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016B200; } }
L_0016B220:;
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(17, (s32)rd32(c, (RW(2) + 68)));
if (RD(17) != RD(0)) { SET32(4, RW(0) + 36); goto L_0016B238; }
SET64(3, RD(0) + RD(0)); goto L_0016B2D0;
L_0016B238:;
SET64(31, 0x16b240);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016B270; }
SET64(31, 0x16b250); SET64(4, RD(16) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_0016B270:;
wr32(c, (RW(19) + 244), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16b288); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16b29c);  rt_call(c, t); }
SET64(31, 0x16b2a4); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16b2c4); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
SET64(3, RD(0) + (s64)1);
wr8(c, (RW(19) + 270), (u8)RW(2));
L_0016B2D0:;
{ int t = RD(3) == RD(0);  if (t) goto L_0016B2F8; }
L_0016B2D8:;
SET64(31, 0x16b2e0); SET64(4, RD(19) + RD(0)); F_00166760(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016B2D8; } }
L_0016B2F8:;
SET64(2, (s32)rd32(c, (RW(19) + 320)));
SET64(5, (s32)rd32(c, (RW(2) + 72)));
SET64(31, 0x16b308); SET64(4, RD(19) + RD(0)); F_00166320(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0016B390; }
SET64(4, (s32)rd32(c, (RW(19) + 244)));
L_0016B314:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16b324);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0016B338; }
SET64(2, RD(0) + RD(0)); goto L_0016B380;
L_0016B338:;
SET64(4, (s32)rd32(c, (RW(19) + 244)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x16b34c);  rt_call(c, t); }
wr8(c, (RW(19) + 270), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(19) + 244)));
{ int t = RD(4) == RD(0);  if (t) goto L_0016B370; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16b36c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_0016B370:;
wr32(c, (RW(19) + 244), RW(0));
SET64(31, 0x16b37c); SET64(4, (s32)rd32(c, (RW(19) + 304))); F_0014A6E0(c);
SET64(2, RD(0) + (s64)1);
L_0016B380:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 244))); { POLL(); goto L_0016B314; } }
L_0016B390:;
SET64(31, 0x16b398); SET64(4, RD(19) + RD(0)); F_00164B90(c);
SET64(3, rd16(c, (RW(19) + 292)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_0016B3F0; }
L_0016B3A4:;
SET64(31, 0x16b3ac);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(2, RD(16) & 0xffff);
SET64(5, (s32)rd32(c, (RW(4) + 236)));
SET32(3, RW(2) << 2);
SET64(2, (s32)rd32(c, (RW(19) + 312)));
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16b3d8);  rt_call(c, t); }
SET64(3, rd16(c, (RW(19) + 292)));
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_0016B3A4; } }
L_0016B3F0:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0016B410(Ctx *c) { /* func_0016B410 */
ENTER(0x16b410);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x490000);
wr64(c, (RW(29) + 16), RD(31));
SET32(3, RW(3) + -240);
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
{ u32 t = RW(25); SET64(31, 0x16b470); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(31, 0x16b478); wr16(c, (RW(16) + 0), (u16)RW(0)); F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x16b484); SET64(5, RD(16) + RD(0)); F_0013A470(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0016B4A0(Ctx *c) { /* func_0016B4A0 */
ENTER(0x16b4a0);
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
{ int t = RD(6) == RD(0); wr16(c, (RW(4) + 266), (u16)RW(0)); if (t) goto L_0016B4E4; }
SET64(31, 0x16b4dc);  F_0016AAE0(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_0016B528;
L_0016B4E4:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x16b4f4);  rt_call(c, t); }
{ int t = RD(16) == RD(0); wr16(c, (RW(17) + 0), (u16)RW(0)); if (t) goto L_0016B510; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x16b508); SET64(5, RD(17) + RD(0)); F_0013A470(c);
 goto L_0016B524;
L_0016B510:;
SET64(31, 0x16b518);  F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x16b524); SET64(5, RD(17) + RD(0)); F_0013A470(c);
L_0016B524:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0016B528:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016B540(Ctx *c) { /* func_0016B540 */
ENTER(0x16b540);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x490000);
wr64(c, (RW(29) + 32), RD(31));
SET32(2, RW(2) + -240);
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
{ int t = RD(6) == RD(0); wr16(c, (RW(4) + 266), (u16)RW(0)); if (t) goto L_0016B5AC; }
SET64(31, 0x16b5a4);  F_0016AAE0(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_0016B5F0;
L_0016B5AC:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x16b5bc);  rt_call(c, t); }
{ int t = RD(16) == RD(0); wr16(c, (RW(17) + 0), (u16)RW(0)); if (t) goto L_0016B5D8; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x16b5d0); SET64(5, RD(17) + RD(0)); F_0013A470(c);
 goto L_0016B5EC;
L_0016B5D8:;
SET64(31, 0x16b5e0);  F_0013AA20(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x16b5ec); SET64(5, RD(17) + RD(0)); F_0013A470(c);
L_0016B5EC:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0016B5F0:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016B600(Ctx *c) { /* func_0016B600 */
ENTER(0x16b600);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016B620; }
SET64(31, 0x16b61c);  F_001EF0C0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0016B620:;
SET32(29, RW(29) + 16); return;
}

void F_0016B630(Ctx *c) { /* func_0016B630 */
ENTER(0x16b630);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016B650; }
SET64(31, 0x16b64c);  F_001EF0E0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0016B650:;
SET32(29, RW(29) + 16); return;
}

void F_0016B660(Ctx *c) { /* func_0016B660 */
ENTER(0x16b660);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016B688; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x16b684);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_0016B688:;
SET32(29, RW(29) + 16); return;
}

void F_0016B690(Ctx *c) { /* func_0016B690 */
ENTER(0x16b690);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 256)));
wr8(c, (RW(3) + 8), (u8)RW(5));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016B6C4; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x16b6c0);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_0016B6C4:;
SET32(29, RW(29) + 16); return;
}

void F_0016B6D0(Ctx *c) { /* func_0016B6D0 */
ENTER(0x16b6d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(31, 0x16b6f4); SET64(16, RD(0) + RD(0)); F_001419B0(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET64(16, RD(0) + (s64)1); goto L_0016B714; }
{ int t = RD(2) == RD(0);  if (t) goto L_0016B710; }
 goto L_0016B714;
L_0016B710:;
SET64(16, RD(0) + (s64)1);
L_0016B714:;
if (RD(16) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 16))); goto L_0016B724; }
SET64(2, RD(0) + RD(0)); goto L_0016B750;
L_0016B724:;
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_0016B750; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16b73c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_0016B74C; }
SET64(2, RD(0) + RD(0)); goto L_0016B750;
L_0016B74C:;
SET32(2, RW(0) + 1);
L_0016B750:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016B770(Ctx *c) { /* func_0016B770 */
ENTER(0x16b770);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x16b78c); SET64(16, RD(6) + RD(0)); F_001509F0(c);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0016B7AC; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x16b7a8); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
L_0016B7AC:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016B7C0(Ctx *c) { /* func_0016B7C0 */
ENTER(0x16b7c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(6) + RD(0));
SET64(31, 0x16b7e0); SET64(6, RD(7) + RD(0)); F_00150AA0(c);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0016B810; }
if (RD(17) == RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 16))); goto L_0016B7FC; }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
L_0016B7FC:;
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x16b80c); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
L_0016B810:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016B820(Ctx *c) { /* func_0016B820 */
ENTER(0x16b820);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_0016B850; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16b84c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_0016B850:;
SET64(31, 0x16b858); wr32(c, (RW(16) + 16), RW(0)); F_00150BF0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0016B870(Ctx *c) { /* func_0016B870 */
ENTER(0x16b870);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016B938; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 6768);
SET32(2, RW(2) + 6804);
wr32(c, (RW(17) + 16), RW(3));
wr32(c, (RW(17) + 176), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16b8b4);  rt_call(c, t); }
SET32(4, RW(17) + 560);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 464); goto L_0016B8D8; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -26448);
SET64(31, 0x16b8d4); wr32(c, (RW(17) + 568), RW(2)); F_002B13D0(c);
SET32(4, RW(17) + 464);
L_0016B8D8:;
if (RD(4) == RD(0)) { SET32(4, RW(17) + 32); goto L_0016B8F8; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -26416);
SET64(31, 0x16b8f4); wr32(c, (RW(17) + 472), RW(2)); F_002B1020(c);
SET32(4, RW(17) + 32);
L_0016B8F8:;
SET64(31, 0x16b900); SET64(5, RD(0) + RD(0)); F_002A2540(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016B924; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x16b920); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_0016B924:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016B93C; }
SET64(31, 0x16b938); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016B938:;
SET64(2, RD(17) + RD(0));
L_0016B93C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016B950(Ctx *c) { /* func_0016B950 */
ENTER(0x16b950);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x16b970); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_00150C60(c);
SET64(3, rd8(c, (RW(17) + 20)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_0016BA14; }
SET64(31, 0x16b984); SET32(4, RW(0) + 624); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016B9F8; }
SET64(31, 0x16b994); SET64(4, RD(16) + RD(0)); F_00141AA0(c);
SET32(4, RW(16) + 32);
SET64(31, 0x16b9a0); SET32(5, RW(0) + 1); F_002A25B0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 6768);
SET32(19, RW(16) + 464);
SET32(2, RW(2) + 6804);
wr32(c, (RW(16) + 16), RW(3));
wr32(c, (RW(16) + 176), RW(2));
SET64(4, RD(19) + RD(0));
wr32(c, (RW(16) + 448), RW(0));
SET64(31, 0x16b9cc); wr32(c, (RW(16) + 452), RW(0)); F_002B1080(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(18, RW(16) + 560);
SET32(2, RW(2) + -26416);
SET64(4, RD(18) + RD(0));
SET64(31, 0x16b9e4); wr32(c, (RW(19) + 8), RW(2)); F_002B1430(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26448);
wr32(c, (RW(18) + 8), RW(2));
wr32(c, (RW(16) + 608), RW(0));
wr32(c, (RW(16) + 612), RW(0));
L_0016B9F8:;
wr32(c, (RW(17) + 16), RW(16));
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET32(6, RW(0) + 2);
SET64(31, 0x16ba10); SET64(7, RD(0) + RD(0)); F_001EF450(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_0016BA14:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0016BA30(Ctx *c) { /* func_0016BA30 */
ENTER(0x16ba30);
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
SET64(31, 0x16ba7c); wr128(c, (RW(16) + 304) & ~15u, &c->r[2]); F_00160CA0(c);
SET64(31, 0x16ba84); SET32(4, RW(29) + 32); F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x16ba90); SET32(5, RW(16) + 304); F_00164B80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x16ba9c); SET32(4, RW(29) + 96); F_0013ADA0(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
SET32(4, RW(16) + 32);
wr128(c, (RW(16) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET64(31, 0x16bac4); wr128(c, (RW(16) + 80) & ~15u, &c->r[2]); F_002A1E20(c);
wr8(c, (RW(16) + 324), (u8)RW(0));
wr32(c, (RW(16) + 320), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void F_0016BAE0(Ctx *c) { /* func_0016BAE0 */
ENTER(0x16bae0);
SET32(29, RW(29) + -224);
SET32(5, RW(0) + 3);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(6, rd16(c, (RW(4) + 272)));
{ int t = RD(6) == RD(5); SET64(16, RD(4) + RD(0)); if (t) goto L_0016BDA4; }
SET32(3, RW(0) + 2);
if (RD(6) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 280))); goto L_0016BBDC; }
SET32(3, RW(0) + 1);
if (RD(6) == RD(3)) { SET64(3, rd16(c, (RW(16) + 274))); goto L_0016BB38; }
wr16(c, (RW(16) + 274), (u16)RW(0));
SET32(4, RW(16) + 208);
SET64(31, 0x16bb30); wr16(c, (RW(16) + 272), (u16)RW(0)); F_00139AB0(c);
SET64(31, rd64(c, (RW(29) + 64))); goto L_0016BDE8;
L_0016BB38:;
if (RD(3) != RD(5)) { SET64(17, (s32)rd32(c, (RW(16) + 280))); goto L_0016BB4C; }
wr16(c, (RW(16) + 272), (u16)RW(3));
wr16(c, (RW(16) + 274), (u16)RW(0)); goto L_0016BDE4;
L_0016BB4C:;
SET64(18, rd16(c, (RW(16) + 284)));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16bb60); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(19, RD(18) & 0xffff); goto L_0016BB70; }
SET64(18, RD(0) + RD(0)); goto L_0016BBC8;
L_0016BB70:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 220);
SET64(31, 0x16bb80); wr32(c, (RW(29) + 220), RW(19)); F_00156870(c);
SET64(31, 0x16bb88); SET64(4, RD(2) + RD(0)); F_00100320(c);
SET64(5, (s32)rd32(c, (RW(17) + 40)));
SET64(18, RD(2) + RD(0));
SET64(31, 0x16bb98); SET64(4, RD(17) + RD(0)); F_00157510(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 216);
SET64(31, 0x16bba8); wr32(c, (RW(29) + 216), RW(19)); F_00156870(c);
SET64(3, (s32)rd32(c, (RW(17) + 20)));
SET32(6, RW(19) << 2);
SET64(7, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET32(2, RW(3) + RW(6));
SET64(6, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x16bbc8); SET64(5, RD(18) + RD(0)); F_001572D0(c);
L_0016BBC8:;
{ int t = RD(18) == RD(0); wr32(c, (RW(16) + 268), RW(18)); if (t) goto L_0016BDE4; }
SET32(3, RW(0) + 2);
wr16(c, (RW(16) + 272), (u16)RW(3)); goto L_0016BDE4;
L_0016BBDC:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16bbec);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_0016BDE4; }
SET64(3, rd16(c, (RW(16) + 274)));
SET32(2, RW(0) + 3);
if (RD(3) != RD(2)) { SET64(4, (s32)rd32(c, (RW(16) + 268))); goto L_0016BC20; }
wr16(c, (RW(16) + 274), (u16)RW(0));
SET64(2, rd16(c, (RW(16) + 274)));
wr16(c, (RW(16) + 272), (u16)RW(2));
SET64(31, 0x16bc18); SET64(4, (s32)rd32(c, (RW(16) + 268))); F_001004B0(c);
wr32(c, (RW(16) + 268), RW(0)); goto L_0016BDE4;
L_0016BC20:;
SET64(31, 0x16bc28);  F_0014AA10(c);
SET64(31, 0x16bc30); SET64(4, (s32)rd32(c, (RW(16) + 268))); F_0014AA00(c);
SET32(6, RW(0) + 1);
SET32(5, RW(2) + 8);
SET64(4, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x16bc48); SET64(8, RD(6) + RD(0)); F_00161820(c);
SET64(31, 0x16bc50); SET64(4, (s32)rd32(c, (RW(16) + 268))); F_001004B0(c);
wr32(c, (RW(16) + 268), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 288)));
{ int t = RD(2) == RD(0);  if (t) goto L_0016BCA0; }
SET64(2, rd16(c, (RW(16) + 292)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_0016BCA0; }
SET64(17, RD(0) + RD(0));
L_0016BC70:;
SET64(2, (s32)rd32(c, (RW(16) + 288)));
SET64(6, RD(18) & 0xffff);
SET32(2, RW(2) + RW(17));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x16bc88); SET64(4, RD(16) + RD(0)); F_00161510(c);
SET64(2, rd16(c, (RW(16) + 292)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_0016BC70; } }
L_0016BCA0:;
SET64(31, 0x16bca8); SET32(4, RW(29) + 80); F_0013AEA0(c);
SET32(4, RW(29) + 80);
SET64(31, 0x16bcb4); SET32(5, RW(16) + 304); F_00164B80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x16bcc0); SET32(4, RW(29) + 144); F_0013ADA0(c);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET32(4, RW(16) + 32);
wr128(c, (RW(16) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
SET64(31, 0x16bce8); wr128(c, (RW(16) + 80) & ~15u, &c->r[2]); F_002A1E20(c);
SET64(2, rd8(c, (RW(16) + 324)));
if (RD(2) == RD(0)) { wr16(c, (RW(16) + 272), (u16)RW(0)); goto L_0016BD8C; }
SET64(31, 0x16bcfc); SET32(4, RW(0) + 624); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016BD70; }
SET64(31, 0x16bd0c); SET64(4, RD(17) + RD(0)); F_00141AA0(c);
SET32(4, RW(17) + 32);
SET64(31, 0x16bd18); SET32(5, RW(0) + 1); F_002A25B0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 6768);
SET32(19, RW(17) + 464);
SET32(2, RW(2) + 6804);
wr32(c, (RW(17) + 16), RW(3));
wr32(c, (RW(17) + 176), RW(2));
SET64(4, RD(19) + RD(0));
wr32(c, (RW(17) + 448), RW(0));
SET64(31, 0x16bd44); wr32(c, (RW(17) + 452), RW(0)); F_002B1080(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(18, RW(17) + 560);
SET32(2, RW(2) + -26416);
SET64(4, RD(18) + RD(0));
SET64(31, 0x16bd5c); wr32(c, (RW(19) + 8), RW(2)); F_002B1430(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26448);
wr32(c, (RW(18) + 8), RW(2));
wr32(c, (RW(17) + 608), RW(0));
wr32(c, (RW(17) + 612), RW(0));
L_0016BD70:;
wr32(c, (RW(16) + 320), RW(17));
SET64(4, RD(17) + RD(0));
SET64(5, (s32)rd32(c, (RW(16) + 192)));
SET32(6, RW(0) + 2);
SET64(31, 0x16bd88); SET32(7, RW(0) + 1); F_001EF450(c);
wr16(c, (RW(16) + 272), (u16)RW(0));
L_0016BD8C:;
SET32(2, RW(0) + 3);
wr16(c, (RW(16) + 276), (u16)RW(2));
SET64(31, 0x16bd9c); SET32(4, RW(16) + 208); F_00139AB0(c);
 goto L_0016BDE4;
L_0016BDA4:;
SET64(31, 0x16bdac);  F_00161100(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0016BDE4; }
SET64(31, 0x16bdbc); SET64(4, RD(16) + RD(0)); F_00161590(c);
SET32(4, RW(0) + 1);
wr16(c, (RW(16) + 276), (u16)RW(4));
SET64(3, rd16(c, (RW(16) + 274)));
if (RD(3) != RD(4)) { SET32(4, RW(16) + 208); goto L_0016BDDC; }
wr16(c, (RW(16) + 272), (u16)RW(3));
wr16(c, (RW(16) + 274), (u16)RW(0)); goto L_0016BDE4;
L_0016BDDC:;
SET64(31, 0x16bde4); wr16(c, (RW(16) + 272), (u16)RW(0)); F_00139AB0(c);
L_0016BDE4:;
SET64(31, rd64(c, (RW(29) + 64)));
L_0016BDE8:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 224); return;
}

void F_0016BE00(Ctx *c) { /* func_0016BE00 */
ENTER(0x16be00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 320)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016BE20; }
SET64(31, 0x16be1c);  F_001EF080(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0016BE20:;
SET32(29, RW(29) + 16); return;
}

void F_0016BE30(Ctx *c) { /* func_0016BE30 */
ENTER(0x16be30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 320)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016BE50; }
SET64(31, 0x16be4c);  F_001EF0C0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0016BE50:;
SET32(29, RW(29) + 16); return;
}

void F_0016BE60(Ctx *c) { /* func_0016BE60 */
ENTER(0x16be60);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, rd16(c, (RW(4) + 276)));
if (RD(6) != RD(3)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016BE84; }
SET64(31, 0x16be80);  F_00160F00(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0016BE84:;
SET32(29, RW(29) + 16); return;
}

void F_0016BE90(Ctx *c) { /* func_0016BE90 */
ENTER(0x16be90);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(31));
SET64(7, rd16(c, (RW(4) + 276)));
if (RD(7) != RD(3)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016BEB4; }
SET64(31, 0x16beb0); SET64(5, RD(5) & 0xffff); F_001611A0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0016BEB4:;
SET32(29, RW(29) + 16); return;
}

void F_0016BEC0(Ctx *c) { /* func_0016BEC0 */
ENTER(0x16bec0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x16bedc); SET64(16, RD(5) + RD(0)); F_001612D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 320)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0016BEFC; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x16bef8); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
L_0016BEFC:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016BF10(Ctx *c) { /* func_0016BF10 */
ENTER(0x16bf10);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(6, rd16(c, (RW(4) + 276)));
{ int t = RD(6) != RD(3); SET64(16, RD(5) + RD(0)); if (t) goto L_0016BF58; }
SET64(31, 0x16bf3c);  F_00161350(c);
SET64(4, (s32)rd32(c, (RW(17) + 320)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0016BF5C; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x16bf58); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_0016BF58:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0016BF5C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016BF70(Ctx *c) { /* func_0016BF70 */
ENTER(0x16bf70);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(5) + RD(0));
SET64(5, rd16(c, (RW(4) + 276)));
{ int t = RD(5) != RD(3); SET64(17, RD(4) + RD(0)); if (t) goto L_0016BFCC; }
SET64(5, RD(0) + RD(0));
SET64(31, 0x16bfa0); SET64(6, RD(16) + RD(0)); F_00161440(c);
SET64(4, (s32)rd32(c, (RW(17) + 320)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0016BFD0; }
if (RD(17) == RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 16))); goto L_0016BFBC; }
SET32(17, RW(17) + 32);
SET64(25, (s32)rd32(c, (RW(4) + 16)));
L_0016BFBC:;
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x16bfcc); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
L_0016BFCC:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0016BFD0:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016BFE0(Ctx *c) { /* func_0016BFE0 */
ENTER(0x16bfe0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x16bff4); SET64(16, RD(4) + RD(0)); F_00161100(c);
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(16) + 276))); goto L_0016C004; }
SET64(2, RD(0) + RD(0)); goto L_0016C00C;
L_0016C004:;
SET64(2, RD(2) ^ 0x2);
SET64(2, RD(0) < RD(2));
L_0016C00C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0016C020(Ctx *c) { /* func_0016C020 */
ENTER(0x16c020);
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
{ u32 t = RW(25); SET64(31, 0x16c054); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(19, RD(17) & 0xffff); goto L_0016C064; }
SET64(17, RD(0) + RD(0)); goto L_0016C0BC;
L_0016C064:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 92);
SET64(31, 0x16c074); wr32(c, (RW(29) + 92), RW(19)); F_00156870(c);
SET64(31, 0x16c07c); SET64(4, RD(2) + RD(0)); F_00100320(c);
SET64(5, (s32)rd32(c, (RW(16) + 40)));
SET64(17, RD(2) + RD(0));
SET64(31, 0x16c08c); SET64(4, RD(16) + RD(0)); F_00157510(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 88);
SET64(31, 0x16c09c); wr32(c, (RW(29) + 88), RW(19)); F_00156870(c);
SET64(7, RD(2) + RD(0));
SET32(3, RW(19) << 2);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(4, RD(16) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(6, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x16c0bc); SET64(5, RD(17) + RD(0)); F_001572D0(c);
L_0016C0BC:;
wr32(c, (RW(18) + 268), RW(17));
L_0016C0C0:;
SET64(4, (s32)rd32(c, (RW(18) + 280)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16c0d4);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0016C0C0; } }
SET64(31, 0x16c0e8); SET64(4, (s32)rd32(c, (RW(18) + 268))); F_0014AA10(c);
SET64(25, (s32)rd32(c, (RW(18) + 16)));
SET64(5, (s32)rd32(c, (RW(18) + 268)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x16c0fc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, 0x16c104); SET64(4, (s32)rd32(c, (RW(18) + 268))); F_001004B0(c);
wr32(c, (RW(18) + 268), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_0016C130(Ctx *c) { /* func_0016C130 */
ENTER(0x16c130);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd16(c, (RW(4) + 276)));
SET64(16, RD(4) + RD(0));
SET32(4, RW(0) + 1);
if (RD(2) != RD(4)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0016C1D4; }
SET64(3, (s32)rd32(c, (RW(16) + 256)));
{ int t = RD(3) == RD(0);  if (t) goto L_0016C17C; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_0016C17C; }
wr16(c, (RW(16) + 274), (u16)RW(4));
SET32(2, RW(0) + 2);
wr16(c, (RW(16) + 276), (u16)RW(2)); goto L_0016C1D0;
L_0016C17C:;
if (RD(5) == RD(0)) { SET32(2, RW(0) + 1); goto L_0016C194; }
SET64(31, 0x16c18c); SET64(4, RD(16) + RD(0)); F_0016C020(c);
 goto L_0016C1D0;
L_0016C194:;
SET64(17, RD(16) + RD(0));
{ int t = RD(16) == RD(0); wr16(c, (RW(16) + 272), (u16)RW(2)); if (t) goto L_0016C1A4; }
SET32(17, RW(16) + 208);
L_0016C1A4:;
SET64(31, 0x16c1ac);  F_0013AA20(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x16c1b8); SET64(5, RD(17) + RD(0)); F_0013A4F0(c);
SET32(2, RW(0) + 2);
wr16(c, (RW(16) + 276), (u16)RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 208)));
{ u32 t = RW(25); SET64(31, 0x16c1d0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
L_0016C1D0:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0016C1D4:;
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016C1F0(Ctx *c) { /* func_0016C1F0 */
ENTER(0x16c1f0);
SET32(2, RW(0) + 1); return;
}

void F_0016C200(Ctx *c) { /* func_0016C200 */
ENTER(0x16c200);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr16(c, (RW(4) + 276), (u16)RW(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 280), RW(0));
wr16(c, (RW(4) + 284), (u16)RW(0));
wr32(c, (RW(4) + 288), RW(0));
wr16(c, (RW(4) + 292), (u16)RW(0));
SET64(31, 0x16c22c); SET64(4, (s32)rd32(c, (RW(4) + 268))); F_001004B0(c);
wr32(c, (RW(16) + 268), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 320)));
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_0016C250; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16c24c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_0016C250:;
SET64(31, 0x16c258); wr32(c, (RW(16) + 320), RW(0)); F_00161590(c);
SET64(3, (s32)rd32(c, (RW(16) + 212)));
if (RD(3) == RD(0)) { wr32(c, (RW(16) + 212), RW(0)); goto L_0016C270; }
SET64(31, 0x16c26c); SET32(4, RW(3) + -16); F_00100430(c);
wr32(c, (RW(16) + 212), RW(0));
L_0016C270:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0016C280(Ctx *c) { /* func_0016C280 */
ENTER(0x16c280);
SET32(29, RW(29) + -208);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(4, RD(5) + RD(0));
SET64(31, 0x16c2a4); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_0014AA00(c);
SET32(6, RW(0) + 1);
SET32(5, RW(2) + 8);
SET64(4, RD(18) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x16c2bc); SET64(8, RD(6) + RD(0)); F_00161820(c);
SET64(2, (s32)rd32(c, (RW(18) + 288)));
{ int t = RD(2) == RD(0);  if (t) goto L_0016C308; }
SET64(2, rd16(c, (RW(18) + 292)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_0016C308; }
SET64(16, RD(0) + RD(0));
L_0016C2D8:;
SET64(2, (s32)rd32(c, (RW(18) + 288)));
SET64(6, RD(17) & 0xffff);
SET32(2, RW(2) + RW(16));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x16c2f0); SET64(4, RD(18) + RD(0)); F_00161510(c);
SET64(2, rd16(c, (RW(18) + 292)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_0016C2D8; } }
L_0016C308:;
SET64(31, 0x16c310); SET32(4, RW(29) + 80); F_0013AEA0(c);
SET32(4, RW(29) + 80);
SET64(31, 0x16c31c); SET32(5, RW(18) + 304); F_00164B80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x16c328); SET32(4, RW(29) + 144); F_0013ADA0(c);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET32(4, RW(18) + 32);
wr128(c, (RW(18) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 48) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
SET64(31, 0x16c350); wr128(c, (RW(18) + 80) & ~15u, &c->r[2]); F_002A1E20(c);
SET64(3, rd8(c, (RW(18) + 324)));
if (RD(3) == RD(0)) { SET32(3, RW(0) + 3); goto L_0016C3F4; }
SET64(31, 0x16c364); SET32(4, RW(0) + 624); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016C3D8; }
SET64(31, 0x16c374); SET64(4, RD(16) + RD(0)); F_00141AA0(c);
SET32(4, RW(16) + 32);
SET64(31, 0x16c380); SET32(5, RW(0) + 1); F_002A25B0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 6768);
SET32(19, RW(16) + 464);
SET32(2, RW(2) + 6804);
wr32(c, (RW(16) + 16), RW(3));
wr32(c, (RW(16) + 176), RW(2));
SET64(4, RD(19) + RD(0));
wr32(c, (RW(16) + 448), RW(0));
SET64(31, 0x16c3ac); wr32(c, (RW(16) + 452), RW(0)); F_002B1080(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(17, RW(16) + 560);
SET32(2, RW(2) + -26416);
SET64(4, RD(17) + RD(0));
SET64(31, 0x16c3c4); wr32(c, (RW(19) + 8), RW(2)); F_002B1430(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26448);
wr32(c, (RW(17) + 8), RW(2));
wr32(c, (RW(16) + 608), RW(0));
wr32(c, (RW(16) + 612), RW(0));
L_0016C3D8:;
wr32(c, (RW(18) + 320), RW(16));
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(18) + 192)));
SET32(6, RW(0) + 2);
SET64(31, 0x16c3f0); SET32(7, RW(0) + 1); F_001EF450(c);
SET32(3, RW(0) + 3);
L_0016C3F4:;
wr16(c, (RW(18) + 276), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 208); return;
}

void F_0016C420(Ctx *c) { /* func_0016C420 */
ENTER(0x16c420);
wr16(c, (RW(4) + 276), (u16)RW(7));
SET64(3, rd16(c, (RW(4) + 276)));
{ int t = RD(3) == RD(0);  if (t) goto L_0016C438; }
wr32(c, (RW(4) + 280), RW(5));
wr16(c, (RW(4) + 284), (u16)RW(6));
L_0016C438:;
 return;
}

void F_0016C440(Ctx *c) { /* func_0016C440 */
ENTER(0x16c440);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x16c450);  F_00161590(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0016C460(Ctx *c) { /* func_0016C460 */
ENTER(0x16c460);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x16c478); SET64(4, RD(5) + RD(0)); F_0014AA00(c);
SET32(6, RW(0) + 1);
SET64(4, RD(16) + RD(0));
SET32(5, RW(2) + 8);
SET64(7, RD(0) + RD(0));
SET64(31, 0x16c490); SET64(8, RD(6) + RD(0)); F_00161820(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0016C4A0(Ctx *c) { /* func_0016C4A0 */
ENTER(0x16c4a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 40)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0016C4E4; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16c4c8);  rt_call(c, t); }
SET64(31, 0x16c4d0); SET64(4, (s32)rd32(c, (RW(16) + 36))); F_00100430(c);
wr32(c, (RW(16) + 36), RW(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x16c4e0); wr32(c, (RW(16) + 40), RW(0)); F_00156AD0(c);
wr32(c, (RW(16) + 40), RW(0));
L_0016C4E4:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0016C500(Ctx *c) { /* func_0016C500 */
ENTER(0x16c500);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x16c514); SET64(16, RD(4) + RD(0)); F_00156B00(c);
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_0016C524; }
SET32(2, RW(0) + 1); goto L_0016C530;
L_0016C524:;
SET64(31, 0x16c52c);  F_00157110(c);
SET64(2, RD(0) + RD(0));
L_0016C530:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0016C540(Ctx *c) { /* func_0016C540 */
ENTER(0x16c540);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016C584; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16c56c); wr32(c, (RW(17) + 40), RW(2)); F_00304BC0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016C588; }
SET64(31, 0x16c584); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016C584:;
SET64(2, RD(17) + RD(0));
L_0016C588:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016C5A0(Ctx *c) { /* func_0016C5A0 */
ENTER(0x16c5a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016C668; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -24848);
SET32(2, RW(2) + -24808);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16c5e4);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016C654; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -10528);
SET32(2, RW(2) + -10488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16c614); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016C630; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16c630); wr32(c, (RW(17) + 56), RW(2)); F_00304BC0(c);
L_0016C630:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016C650; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -23952);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16c650); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016C650:;
SET64(2, RD(16) << 48);
L_0016C654:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016C66C; }
SET64(31, 0x16c668); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016C668:;
SET64(2, RD(17) + RD(0));
L_0016C66C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016C680(Ctx *c) { /* func_0016C680 */
ENTER(0x16c680);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016C748; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -24784);
SET32(2, RW(2) + -24744);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16c6c4);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016C734; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -10528);
SET32(2, RW(2) + -10488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16c6f4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016C710; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16c710); wr32(c, (RW(17) + 56), RW(2)); F_00304BC0(c);
L_0016C710:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016C730; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -23952);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16c730); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016C730:;
SET64(2, RD(16) << 48);
L_0016C734:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016C74C; }
SET64(31, 0x16c748); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016C748:;
SET64(2, RD(17) + RD(0));
L_0016C74C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016C760(Ctx *c) { /* func_0016C760 */
ENTER(0x16c760);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016C828; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -24720);
SET32(2, RW(2) + -24680);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16c7a4);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016C814; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -10528);
SET32(2, RW(2) + -10488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16c7d4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016C7F0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16c7f0); wr32(c, (RW(17) + 56), RW(2)); F_00304BC0(c);
L_0016C7F0:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016C810; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -23952);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16c810); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016C810:;
SET64(2, RD(16) << 48);
L_0016C814:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016C82C; }
SET64(31, 0x16c828); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016C828:;
SET64(2, RD(17) + RD(0));
L_0016C82C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016C840(Ctx *c) { /* func_0016C840 */
ENTER(0x16c840);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016C908; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -24656);
SET32(2, RW(2) + -24616);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16c884);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016C8F4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -10528);
SET32(2, RW(2) + -10488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16c8b4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016C8D0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16c8d0); wr32(c, (RW(17) + 56), RW(2)); F_00304BC0(c);
L_0016C8D0:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016C8F0; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -23952);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16c8f0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016C8F0:;
SET64(2, RD(16) << 48);
L_0016C8F4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016C90C; }
SET64(31, 0x16c908); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016C908:;
SET64(2, RD(17) + RD(0));
L_0016C90C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016C920(Ctx *c) { /* func_0016C920 */
ENTER(0x16c920);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016C9E8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -24592);
SET32(2, RW(2) + -24552);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16c964);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016C9D4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -10528);
SET32(2, RW(2) + -10488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16c994); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016C9B0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16c9b0); wr32(c, (RW(17) + 56), RW(2)); F_00304BC0(c);
L_0016C9B0:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016C9D0; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -23952);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16c9d0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016C9D0:;
SET64(2, RD(16) << 48);
L_0016C9D4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016C9EC; }
SET64(31, 0x16c9e8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016C9E8:;
SET64(2, RD(17) + RD(0));
L_0016C9EC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016CA00(Ctx *c) { /* func_0016CA00 */
ENTER(0x16ca00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016CAC8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -24528);
SET32(2, RW(2) + -24488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16ca44);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016CAB4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -10528);
SET32(2, RW(2) + -10488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16ca74); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016CA90; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16ca90); wr32(c, (RW(17) + 56), RW(2)); F_00304BC0(c);
L_0016CA90:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016CAB0; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -23952);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cab0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016CAB0:;
SET64(2, RD(16) << 48);
L_0016CAB4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016CACC; }
SET64(31, 0x16cac8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016CAC8:;
SET64(2, RD(17) + RD(0));
L_0016CACC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016CAE0(Ctx *c) { /* func_0016CAE0 */
ENTER(0x16cae0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016CBA8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -24464);
SET32(2, RW(2) + -24424);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cb24);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016CB94; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -10528);
SET32(2, RW(2) + -10488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cb54); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016CB70; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16cb70); wr32(c, (RW(17) + 56), RW(2)); F_00304BC0(c);
L_0016CB70:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016CB90; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -23952);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cb90); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016CB90:;
SET64(2, RD(16) << 48);
L_0016CB94:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016CBAC; }
SET64(31, 0x16cba8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016CBA8:;
SET64(2, RD(17) + RD(0));
L_0016CBAC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016CBC0(Ctx *c) { /* func_0016CBC0 */
ENTER(0x16cbc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016CC88; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -24400);
SET32(2, RW(2) + -24360);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cc04);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016CC74; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -10528);
SET32(2, RW(2) + -10488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cc34); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016CC50; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16cc50); wr32(c, (RW(17) + 56), RW(2)); F_00304BC0(c);
L_0016CC50:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016CC70; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -23952);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cc70); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016CC70:;
SET64(2, RD(16) << 48);
L_0016CC74:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016CC8C; }
SET64(31, 0x16cc88); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016CC88:;
SET64(2, RD(17) + RD(0));
L_0016CC8C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016CCA0(Ctx *c) { /* func_0016CCA0 */
ENTER(0x16cca0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016CD68; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -24336);
SET32(2, RW(2) + -24296);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cce4);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016CD54; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -10528);
SET32(2, RW(2) + -10488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cd14); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016CD30; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16cd30); wr32(c, (RW(17) + 56), RW(2)); F_00304BC0(c);
L_0016CD30:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016CD50; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -23952);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cd50); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016CD50:;
SET64(2, RD(16) << 48);
L_0016CD54:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016CD6C; }
SET64(31, 0x16cd68); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016CD68:;
SET64(2, RD(17) + RD(0));
L_0016CD6C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016CD80(Ctx *c) { /* func_0016CD80 */
ENTER(0x16cd80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016CE48; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -24272);
SET32(2, RW(2) + -24232);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cdc4);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016CE34; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -10528);
SET32(2, RW(2) + -10488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cdf4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016CE10; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16ce10); wr32(c, (RW(17) + 56), RW(2)); F_00304BC0(c);
L_0016CE10:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016CE30; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -23952);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16ce30); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016CE30:;
SET64(2, RD(16) << 48);
L_0016CE34:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016CE4C; }
SET64(31, 0x16ce48); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016CE48:;
SET64(2, RD(17) + RD(0));
L_0016CE4C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016CE60(Ctx *c) { /* func_0016CE60 */
ENTER(0x16ce60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016CF28; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -24208);
SET32(2, RW(2) + -24168);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cea4);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016CF14; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -10528);
SET32(2, RW(2) + -10488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16ced4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016CEF0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16cef0); wr32(c, (RW(17) + 56), RW(2)); F_00304BC0(c);
L_0016CEF0:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016CF10; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -23952);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cf10); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016CF10:;
SET64(2, RD(16) << 48);
L_0016CF14:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016CF2C; }
SET64(31, 0x16cf28); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016CF28:;
SET64(2, RD(17) + RD(0));
L_0016CF2C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016CF40(Ctx *c) { /* func_0016CF40 */
ENTER(0x16cf40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016D008; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -24144);
SET32(2, RW(2) + -24104);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cf84);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016CFF4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -10528);
SET32(2, RW(2) + -10488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cfb4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016CFD0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16cfd0); wr32(c, (RW(17) + 56), RW(2)); F_00304BC0(c);
L_0016CFD0:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016CFF0; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -23952);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16cff0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016CFF0:;
SET64(2, RD(16) << 48);
L_0016CFF4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016D00C; }
SET64(31, 0x16d008); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016D008:;
SET64(2, RD(17) + RD(0));
L_0016D00C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016D020(Ctx *c) { /* func_0016D020 */
ENTER(0x16d020);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016D0E8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -24080);
SET32(2, RW(2) + -24040);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d064);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016D0D4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -10528);
SET32(2, RW(2) + -10488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d094); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016D0B0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16d0b0); wr32(c, (RW(17) + 56), RW(2)); F_00304BC0(c);
L_0016D0B0:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016D0D0; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -23952);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d0d0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016D0D0:;
SET64(2, RD(16) << 48);
L_0016D0D4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016D0EC; }
SET64(31, 0x16d0e8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016D0E8:;
SET64(2, RD(17) + RD(0));
L_0016D0EC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016D100(Ctx *c) { /* func_0016D100 */
ENTER(0x16d100);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016D1C8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -24016);
SET32(2, RW(2) + -23976);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d144);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016D1B4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -10528);
SET32(2, RW(2) + -10488);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d174); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_0016D190; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -24864);
SET64(31, 0x16d190); wr32(c, (RW(17) + 56), RW(2)); F_00304BC0(c);
L_0016D190:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016D1B0; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + -23952);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16d1b0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0016D1B0:;
SET64(2, RD(16) << 48);
L_0016D1B4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016D1CC; }
SET64(31, 0x16d1c8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016D1C8:;
SET64(2, RD(17) + RD(0));
L_0016D1CC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016D1E0(Ctx *c) { /* func_0016D1E0 */
ENTER(0x16d1e0);
SET64(2, RD(4) + RD(0)); return;
}

void F_0016D1F0(Ctx *c) { /* func_0016D1F0 */
ENTER(0x16d1f0);
 return;
}

void F_0016D200(Ctx *c) { /* func_0016D200 */
ENTER(0x16d200);
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 17968); return;
}

void F_0016D210(Ctx *c) { /* func_0016D210 */
ENTER(0x16d210);
SET32(4, RW(4) + -32); { F_00163A60(c); return; }
}

void F_0016D220(Ctx *c) { /* func_0016D220 */
ENTER(0x16d220);
SET32(4, RW(4) + -32); { F_001638B0(c); return; }
}

void F_0016D230(Ctx *c) { /* func_0016D230 */
ENTER(0x16d230);
SET32(4, RW(4) + -212); { F_001638B0(c); return; }
}

void F_0016D240(Ctx *c) { /* func_0016D240 */
ENTER(0x16d240);
SET32(4, RW(4) + -232); { F_001638B0(c); return; }
}

void F_0016D250(Ctx *c) { /* func_0016D250 */
ENTER(0x16d250);
SET32(4, RW(4) + -208); { F_0016BAE0(c); return; }
}

void F_0016D260(Ctx *c) { /* func_0016D260 */
ENTER(0x16d260);
SET32(4, RW(4) + -208); { F_0016D1F0(c); return; }
}

void F_0016D270(Ctx *c) { /* func_0016D270 */
ENTER(0x16d270);
SET32(4, RW(4) + -208); { F_0016D200(c); return; }
}

void F_0016D280(Ctx *c) { /* func_0016D280 */
ENTER(0x16d280);
SET32(4, RW(4) + -208); { F_001638B0(c); return; }
}

void F_0016D290(Ctx *c) { /* func_0016D290 */
ENTER(0x16d290);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -24);
SET32(4, RW(4) + RW(25)); { F_0016B690(c); return; }
}

void F_0016D2A0(Ctx *c) { /* func_0016D2A0 */
ENTER(0x16d2a0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -24);
SET32(4, RW(4) + RW(25)); { F_0016B6D0(c); return; }
}

void F_0016D2B0(Ctx *c) { /* func_0016D2B0 */
ENTER(0x16d2b0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -24);
SET32(4, RW(4) + RW(25)); { F_0016B820(c); return; }
}

void F_0016D2C0(Ctx *c) { /* func_0016D2C0 */
ENTER(0x16d2c0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -24);
SET32(4, RW(4) + RW(25)); { F_00168FE0(c); return; }
}

void F_0016D2D0(Ctx *c) { /* func_0016D2D0 */
ENTER(0x16d2d0);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -48);
SET32(4, RW(4) + RW(25)); { F_0016B6D0(c); return; }
}

void F_0016D2E0(Ctx *c) { /* func_0016D2E0 */
ENTER(0x16d2e0);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -48);
SET32(4, RW(4) + RW(25)); { F_0016B820(c); return; }
}

void F_0016D2F0(Ctx *c) { /* func_0016D2F0 */
ENTER(0x16d2f0);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -48);
SET32(4, RW(4) + RW(25)); { F_00168FE0(c); return; }
}

void F_0016D300(Ctx *c) { /* func_0016D300 */
ENTER(0x16d300);
SET64(25, (s32)rd32(c, (RW(4) + 416)));
SET32(4, RW(4) + -336);
SET32(4, RW(4) + RW(25)); { F_00168FE0(c); return; }
}

void F_0016D310(Ctx *c) { /* func_0016D310 */
ENTER(0x16d310);
SET32(4, RW(4) + -16); { F_0016D100(c); return; }
}

void F_0016D320(Ctx *c) { /* func_0016D320 */
ENTER(0x16d320);
SET32(4, RW(4) + -16); { F_0016D020(c); return; }
}

void F_0016D330(Ctx *c) { /* func_0016D330 */
ENTER(0x16d330);
SET32(4, RW(4) + -16); { F_0016CF40(c); return; }
}

void F_0016D340(Ctx *c) { /* func_0016D340 */
ENTER(0x16d340);
SET32(4, RW(4) + -16); { F_0016CE60(c); return; }
}

void F_0016D350(Ctx *c) { /* func_0016D350 */
ENTER(0x16d350);
SET32(4, RW(4) + -16); { F_0016CD80(c); return; }
}

void F_0016D360(Ctx *c) { /* func_0016D360 */
ENTER(0x16d360);
SET32(4, RW(4) + -16); { F_0016CCA0(c); return; }
}

void F_0016D370(Ctx *c) { /* func_0016D370 */
ENTER(0x16d370);
SET32(4, RW(4) + -16); { F_0016CBC0(c); return; }
}

void F_0016D380(Ctx *c) { /* func_0016D380 */
ENTER(0x16d380);
SET32(4, RW(4) + -16); { F_0016CAE0(c); return; }
}

void F_0016D390(Ctx *c) { /* func_0016D390 */
ENTER(0x16d390);
SET32(4, RW(4) + -16); { F_0016CA00(c); return; }
}

void F_0016D3A0(Ctx *c) { /* func_0016D3A0 */
ENTER(0x16d3a0);
SET32(4, RW(4) + -16); { F_0016C920(c); return; }
}

void F_0016D3B0(Ctx *c) { /* func_0016D3B0 */
ENTER(0x16d3b0);
SET32(4, RW(4) + -16); { F_0016C840(c); return; }
}

void F_0016D3C0(Ctx *c) { /* func_0016D3C0 */
ENTER(0x16d3c0);
SET32(4, RW(4) + -16); { F_0016C760(c); return; }
}

void F_0016D3D0(Ctx *c) { /* func_0016D3D0 */
ENTER(0x16d3d0);
SET32(4, RW(4) + -16); { F_0016C680(c); return; }
}

void F_0016D3E0(Ctx *c) { /* func_0016D3E0 */
ENTER(0x16d3e0);
SET32(4, RW(4) + -16); { F_0016C5A0(c); return; }
}

void F_0016D3F0(Ctx *c) { /* func_0016D3F0 */
ENTER(0x16d3f0);
SET32(4, RW(4) + -4); { F_00162F60(c); return; }
}

void F_0016D400(Ctx *c) { /* func_0016D400 */
ENTER(0x16d400);
SET32(4, RW(4) + -24); { F_00162F60(c); return; }
}

void F_0016D410(Ctx *c) { /* func_0016D410 */
ENTER(0x16d410);
SET32(4, RW(4) + -64); { F_00162F60(c); return; }
}

void F_0016D420(Ctx *c) { /* func_0016D420 */
ENTER(0x16d420);
SET32(4, RW(4) + -224); { F_00167CD0(c); return; }
}

void F_0016D430(Ctx *c) { /* func_0016D430 */
ENTER(0x16d430);
SET32(4, RW(4) + -224); { F_00167CE0(c); return; }
}

void F_0016D440(Ctx *c) { /* func_0016D440 */
ENTER(0x16d440);
SET32(4, RW(4) + -224); { F_001685F0(c); return; }
}

void F_0016D450(Ctx *c) { /* func_0016D450 */
ENTER(0x16d450);
SET32(4, RW(4) + -224); { F_00168AA0(c); return; }
}

void F_0016D460(Ctx *c) { /* func_0016D460 */
ENTER(0x16d460);
SET32(4, RW(4) + -224); { F_00162F60(c); return; }
}

void F_0016D470(Ctx *c) { /* func_0016D470 */
ENTER(0x16d470);
 return;
}

void F_0016D480(Ctx *c) { /* func_0016D480 */
ENTER(0x16d480);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x520000);
wr64(c, (RW(29) + 0), RD(31));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x16d49c); c->f[12].u = rd32(c, (RW(2) + 14864)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0016D4B0(Ctx *c) { /* func_0016D4B0 */
ENTER(0x16d4b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x16d4c8);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0016D4E0(Ctx *c) { /* func_0016D4E0 */
ENTER(0x16d4e0);
wr16(c, (RW(4) + 42), (u16)RW(5)); return;
}

void F_0016D4F0(Ctx *c) { /* func_0016D4F0 */
ENTER(0x16d4f0);
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
{ u32 t = RW(25); SET64(31, 0x16d538);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0016D550(Ctx *c) { /* func_0016D550 */
ENTER(0x16d550);
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

void F_0016D590(Ctx *c) { /* func_0016D590 */
ENTER(0x16d590);
wr32(c, (RW(4) + 104), RW(5)); return;
}

void F_0016D5A0(Ctx *c) { /* func_0016D5A0 */
ENTER(0x16d5a0);
wr32(c, (RW(4) + 108), RW(5)); return;
}

void F_0016D5B0(Ctx *c) { /* func_0016D5B0 */
ENTER(0x16d5b0);
wr32(c, (RW(4) + 112), RW(5)); return;
}

void F_0016D5C0(Ctx *c) { /* func_0016D5C0 */
ENTER(0x16d5c0);
wr32(c, (RW(4) + 116), RW(5)); return;
}

void F_0016D5D0(Ctx *c) { /* func_0016D5D0 */
ENTER(0x16d5d0);
wr32(c, (RW(4) + 120), RW(5)); return;
}

void F_0016D5E0(Ctx *c) { /* func_0016D5E0 */
ENTER(0x16d5e0);
wr32(c, (RW(4) + 52), c->f[12].u); return;
}

void F_0016D5F0(Ctx *c) { /* func_0016D5F0 */
ENTER(0x16d5f0);
wr32(c, (RW(4) + 56), c->f[12].u); return;
}

void F_0016D600(Ctx *c) { /* func_0016D600 */
ENTER(0x16d600);
wr32(c, (RW(4) + 60), c->f[12].u); return;
}

void F_0016D610(Ctx *c) { /* func_0016D610 */
ENTER(0x16d610);
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
{ u32 t = RW(25); SET64(31, 0x16d68c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0016D6A0(Ctx *c) { /* func_0016D6A0 */
ENTER(0x16d6a0);
c->f[0].u = rd32(c, (RW(4) + 4)); return;
}

void F_0016D6B0(Ctx *c) { /* func_0016D6B0 */
ENTER(0x16d6b0);
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
{ u32 t = RW(25); SET64(31, 0x16d730);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0016D740(Ctx *c) { /* func_0016D740 */
ENTER(0x16d740);
c->f[0].u = rd32(c, (RW(4) + 8)); return;
}

void F_0016D750(Ctx *c) { /* func_0016D750 */
ENTER(0x16d750);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 20), c->f[12].u);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x16d76c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0016D780(Ctx *c) { /* func_0016D780 */
ENTER(0x16d780);
c->f[0].u = rd32(c, (RW(4) + 20)); return;
}

void F_0016D790(Ctx *c) { /* func_0016D790 */
ENTER(0x16d790);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(0) + F(12));
wr32(c, (RW(4) + 12), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x16d7b4);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0016D7C0(Ctx *c) { /* func_0016D7C0 */
ENTER(0x16d7c0);
c->f[1].u = rd32(c, (RW(4) + 12));
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(1) - F(0)); return;
}

void F_0016D7D0(Ctx *c) { /* func_0016D7D0 */
ENTER(0x16d7d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[0].u = rd32(c, (RW(4) + 8));
c->f[0].f = fpu(F(0) + F(12));
wr32(c, (RW(4) + 16), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x16d7f4);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0016D800(Ctx *c) { /* func_0016D800 */
ENTER(0x16d800);
c->f[1].u = rd32(c, (RW(4) + 16));
c->f[0].u = rd32(c, (RW(4) + 8));
c->f[0].f = fpu(F(1) - F(0)); return;
}

void F_0016D810(Ctx *c) { /* func_0016D810 */
ENTER(0x16d810);
SET64(2, rd8(c, (RW(4) + 40)));
SET64(2, RD(2) & 0x1);
SET64(2, RD(0) < RD(2)); return;
}

void F_0016D820(Ctx *c) { /* func_0016D820 */
ENTER(0x16d820);
 return;
}

void F_0016D830(Ctx *c) { /* func_0016D830 */
ENTER(0x16d830);
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
{ int t = c->fcc; c->f[20].u = c->f[12].u; if (t) goto L_0016D89C; }
c->f[1].u = rd32(c, (RW(16) + 20));
c->f[0].u = rd32(c, (RW(16) + 0));
c->f[2].u = rd32(c, (RW(16) + 60));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = c->f[0].u & 0x7FFFFFFFu;
c->fcc = F(0) < F(2);
if (!c->fcc) { c->f[1].u = rd32(c, (RW(16) + 40)); goto L_0016D9AC; }
c->f[1].u = rd32(c, (RW(16) + 24));
c->f[0].u = rd32(c, (RW(16) + 4));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = c->f[0].u & 0x7FFFFFFFu;
c->fcc = F(0) < F(2);
{ int t = !c->fcc;  if (t) goto L_0016D9A8; }
L_0016D89C:;
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
if (RD(4) != RD(3)) { SET64(3, rd8(c, (RW(16) + 36))); goto L_0016D998; }
SET64(4, rd8(c, (RW(16) + 36)));
SET64(3, RD(4) & 0x2);
SET64(3, RD(0) < RD(3));
if (RD(3) == RD(0)) { SET64(3, RD(4) & 0x4); goto L_0016D96C; }
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
{ u32 t = RW(25); SET64(31, 0x16d94c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, rd8(c, (RW(16) + 36)));
SET64(3, RD(3) & 0xfd);
wr8(c, (RW(16) + 36), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 36)));
SET64(3, RD(3) | 0x4);
wr8(c, (RW(16) + 36), (u8)RW(3)); goto L_0016D9A0;
SET64(3, RD(4) & 0x4);
L_0016D96C:;
SET64(3, RD(0) < RD(3));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_0016DBCC; }
SET64(3, rd8(c, (RW(16) + 36)));
SET64(3, RD(3) & 0xfb);
wr8(c, (RW(16) + 36), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 36)));
SET64(3, RD(3) & 0xfe);
wr8(c, (RW(16) + 36), (u8)RW(3)); goto L_0016D9A0;
SET64(3, rd8(c, (RW(16) + 36)));
L_0016D998:;
SET64(3, RD(3) & 0xfe);
wr8(c, (RW(16) + 36), (u8)RW(3));
L_0016D9A0:;
 goto L_0016DBC8;
L_0016D9A8:;
c->f[1].u = rd32(c, (RW(16) + 40));
L_0016D9AC:;
c->f[0].u = rd32(c, (RW(16) + 44));
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_0016DBC8; }
wr32(c, (RW(29) + 76), RW(0));
SET32(3, RW(0) + 4);
wr32(c, (RW(29) + 72), RW(0));
SET64(4, (s16)rd16(c, (RW(16) + 38)));
if (RD(4) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 120))); goto L_0016DB74; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET64(4, rd8(c, (RW(16) + 36))); goto L_0016DA60; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 112))); goto L_0016DA44; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 108))); goto L_0016DA28; }
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 104))); goto L_0016DA0C; }
c->f[0].u = rd32(c, (RW(16) + 0)); goto L_0016DB88;
SET64(2, (s32)rd32(c, (RW(17) + 104)));
L_0016DA0C:;
SET32(4, RW(29) + 76);
SET32(5, RW(29) + 72);
{ u32 t = RW(2); SET64(31, 0x16da1c); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
 goto L_0016DB84;
SET64(2, (s32)rd32(c, (RW(17) + 108)));
L_0016DA28:;
SET32(4, RW(29) + 76);
SET32(5, RW(29) + 72);
{ u32 t = RW(2); SET64(31, 0x16da38); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
 goto L_0016DB84;
SET64(2, (s32)rd32(c, (RW(17) + 112)));
L_0016DA44:;
SET32(4, RW(29) + 76);
SET32(5, RW(29) + 72);
{ u32 t = RW(2); SET64(31, 0x16da54); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
 goto L_0016DB84;
SET64(4, rd8(c, (RW(16) + 36)));
L_0016DA60:;
SET64(3, RD(4) & 0x2);
SET64(3, RD(0) < RD(3));
if (RD(3) != RD(0)) { SET64(4, rd8(c, (RW(16) + 36))); goto L_0016DB18; }
SET64(3, RD(4) & 0x4);
SET64(3, RD(0) < RD(3));
{ int t = RD(3) != RD(0);  if (t) goto L_0016DB14; }
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
{ u32 t = RW(25); SET64(31, 0x16daf0); c->f[13].f = fpu(F(4) + F(0)); rt_call(c, t); }
c->f[0].u = rd32(c, (RW(16) + 40));
SET64(3, (s64)(s32)0x40000000);
c->f[1].u = RW(3);
c->f[0].f = fpu_div(F(0), F(1));
wr32(c, (RW(16) + 40), c->f[0].u);
SET64(3, rd8(c, (RW(16) + 36)));
SET64(3, RD(3) | 0x2);
wr8(c, (RW(16) + 36), (u8)RW(3));
L_0016DB14:;
SET64(4, rd8(c, (RW(16) + 36)));
L_0016DB18:;
SET64(3, RD(4) & 0x2);
SET64(3, RD(0) < RD(3));
if (RD(3) == RD(0)) { SET64(3, RD(4) & 0x4); goto L_0016DB48; }
SET64(2, (s32)rd32(c, (RW(17) + 108)));
SET32(4, RW(29) + 76);
SET32(5, RW(29) + 72);
{ u32 t = RW(2); SET64(31, 0x16db3c); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
 goto L_0016DB84;
SET64(3, RD(4) & 0x4);
L_0016DB48:;
SET64(3, RD(0) < RD(3));
{ int t = RD(3) == RD(0);  if (t) goto L_0016DB84; }
SET64(2, (s32)rd32(c, (RW(17) + 112)));
SET32(4, RW(29) + 76);
SET32(5, RW(29) + 72);
{ u32 t = RW(2); SET64(31, 0x16db68); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
 goto L_0016DB84;
SET64(2, (s32)rd32(c, (RW(17) + 120)));
L_0016DB74:;
SET32(4, RW(29) + 76);
SET32(5, RW(29) + 72);
{ u32 t = RW(2); SET64(31, 0x16db84); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
L_0016DB84:;
c->f[0].u = rd32(c, (RW(16) + 0));
L_0016DB88:;
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
L_0016DBC8:;
SET64(31, rd64(c, (RW(29) + 48)));
L_0016DBCC:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0016DBE0(Ctx *c) { /* func_0016DBE0 */
ENTER(0x16dbe0);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, rd8(c, (RW(4) + 40)));
SET64(5, RD(5) & 0x1);
SET64(5, RD(0) < RD(5));
if (RD(5) != RD(3)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0016DC14; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x16dc10);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_0016DC14:;
SET32(29, RW(29) + 16); return;
}

void F_0016DC20(Ctx *c) { /* func_0016DC20 */
ENTER(0x16dc20);
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

void F_0016DC70(Ctx *c) { /* func_0016DC70 */
ENTER(0x16dc70);
SET64(3, (s64)(s32)0x170000);
SET32(3, RW(3) + -9008);
wr32(c, (RW(4) + 120), RW(3)); return;
}

void F_0016DC80(Ctx *c) { /* func_0016DC80 */
ENTER(0x16dc80);
SET64(3, (s64)(s32)0x170000);
SET32(3, RW(3) + -9024);
wr32(c, (RW(4) + 116), RW(3)); return;
}

void F_0016DC90(Ctx *c) { /* func_0016DC90 */
ENTER(0x16dc90);
SET64(3, (s64)(s32)0x170000);
SET32(3, RW(3) + -8992);
wr32(c, (RW(4) + 112), RW(3)); return;
}

void F_0016DCA0(Ctx *c) { /* func_0016DCA0 */
ENTER(0x16dca0);
SET64(3, (s64)(s32)0x170000);
SET32(3, RW(3) + -8880);
wr32(c, (RW(4) + 108), RW(3)); return;
}

void F_0016DCB0(Ctx *c) { /* func_0016DCB0 */
ENTER(0x16dcb0);
SET64(3, (s64)(s32)0x170000);
SET32(3, RW(3) + -8784);
wr32(c, (RW(4) + 104), RW(3)); return;
}

void F_0016DCC0(Ctx *c) { /* func_0016DCC0 */
ENTER(0x16dcc0);
 return;
}

void F_0016DCD0(Ctx *c) { /* func_0016DCD0 */
ENTER(0x16dcd0);
 return;
}

void F_0016DCE0(Ctx *c) { /* func_0016DCE0 */
ENTER(0x16dce0);
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

void F_0016DD50(Ctx *c) { /* func_0016DD50 */
ENTER(0x16dd50);
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

void F_0016DDB0(Ctx *c) { /* func_0016DDB0 */
ENTER(0x16ddb0);
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

void F_0016DE00(Ctx *c) { /* func_0016DE00 */
ENTER(0x16de00);
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

void F_0016DE70(Ctx *c) { /* func_0016DE70 */
ENTER(0x16de70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x16de8c); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x16de9c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x16deac); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x16debc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x16decc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 100)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16dedc); SET32(4, RW(16) + 4); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0016DEF0(Ctx *c) { /* func_0016DEF0 */
ENTER(0x16def0);
SET64(2, rd8(c, (RW(4) + 198))); return;
}

void F_0016DF00(Ctx *c) { /* func_0016DF00 */
ENTER(0x16df00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_0016DFB8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -23104);
SET32(2, RW(2) + -23092);
wr32(c, (RW(16) + 40), RW(3));
wr32(c, (RW(16) + 244), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x16df44);  rt_call(c, t); }
SET32(4, RW(16) + 44);
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_0016DF98; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11856);
wr32(c, (RW(16) + 244), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16df6c);  rt_call(c, t); }
SET32(4, RW(16) + 44);
{ int t = RD(4) == RD(0);  if (t) goto L_0016DF94; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
SET64(31, 0x16df88); wr32(c, (RW(16) + 60), RW(2)); F_00156AD0(c);
SET32(4, RW(16) + 44);
SET64(31, 0x16df94); SET64(5, RD(0) + RD(0)); F_001575C0(c);
L_0016DF94:;
SET64(4, RD(16) + RD(0));
L_0016DF98:;
SET64(31, 0x16dfa0); SET64(5, RD(0) + RD(0)); F_0015F980(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(16) + RD(0)); goto L_0016DFBC; }
SET64(31, 0x16dfb8); SET64(4, RD(16) + RD(0)); F_001004B0(c);
L_0016DFB8:;
SET64(2, RD(16) + RD(0));
L_0016DFBC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016DFD0(Ctx *c) { /* func_0016DFD0 */
ENTER(0x16dfd0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 248)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 284))); goto L_0016E010; }
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x16dffc);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_0016E00C; }
SET64(2, RD(0) + RD(0)); goto L_0016E040;
L_0016E00C:;
SET64(4, (s32)rd32(c, (RW(16) + 284)));
L_0016E010:;
if (RD(4) == RD(0)) { SET32(4, RW(16) + 44); goto L_0016E038; }
SET64(31, 0x16e020);  F_003B78A0(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_0016E034; }
SET64(2, RD(0) + RD(0)); goto L_0016E040;
L_0016E034:;
SET32(4, RW(16) + 44);
L_0016E038:;
SET64(31, 0x16e040);  F_00194B20(c);
L_0016E040:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0016E050(Ctx *c) { /* func_0016E050 */
ENTER(0x16e050);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 252)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x16e074);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 256)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 260))); goto L_0016E08C; }
SET64(31, 0x16e088);  F_00162440(c);
SET64(4, (s32)rd32(c, (RW(16) + 260)));
L_0016E08C:;
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_0016E0A8; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 60)));
{ u32 t = RW(25); SET64(31, 0x16e0a4); SET64(5, (s32)rd32(c, (RW(16) + 264))); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_0016E0A8:;
SET64(31, 0x16e0b0);  F_0015F290(c);
SET32(4, RW(16) + 44);
SET64(31, 0x16e0bc); SET64(5, RD(0) + RD(0)); F_00194CA0(c);
SET64(4, (s32)rd32(c, (RW(16) + 284)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_0016E0D4; }
SET64(31, 0x16e0d0);  F_003B7900(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_0016E0D4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

static void B_0016E0E0(Ctx *c, u32 entry) { /* func_0016E0E0 */
ENTER(entry);
switch (entry) { case 0x16e128: goto L_0016E128; case 0x16e1ac: goto L_0016E1AC; case 0x16e1b4: goto L_0016E1B4; case 0x16e200: goto L_0016E200; case 0x16e238: goto L_0016E238; case 0x16e28c: goto L_0016E28C; case 0x16e2dc: goto L_0016E2DC; case 0x16e2e0: goto L_0016E2E0; }
L_0016E0E0:;
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(0) + (s64)1);
SET64(5, rd16(c, (RW(4) + 288)));
SET64(1, RD(5) < (u64)(s64)11);
{ int t = RD(1) == RD(0); c->f[20].u = c->f[12].u; if (t) goto L_0016E2E0; }
SET64(3, (s64)(s32)0x490000);
SET32(2, RW(5) << 2);
SET32(3, RW(3) + 17984);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x16e0e0: goto L_0016E0E0; case 0x16e128: goto L_0016E128; case 0x16e1ac: goto L_0016E1AC; case 0x16e1b4: goto L_0016E1B4; case 0x16e200: goto L_0016E200; case 0x16e238: goto L_0016E238; case 0x16e28c: goto L_0016E28C; case 0x16e2dc: goto L_0016E2DC; case 0x16e2e0: goto L_0016E2E0; default: rt_jump(c, t); return; } }
L_0016E128:;
SET64(31, 0x16e130);  F_0015F4F0(c);
SET64(4, (s32)rd32(c, (RW(17) + 252)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x16e144);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 16)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 228), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 24)));
wr8(c, (RW(2) + 36), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr8(c, (RW(2) + 36), (u8)RW(3));
SET64(5, (s32)rd32(c, (RW(17) + 8)));
SET64(6, (s32)rd32(c, (RW(17) + 16)));
SET64(31, 0x16e170); SET32(4, RW(17) + 44); F_00195060(c);
SET64(4, (s32)rd32(c, (RW(17) + 260)));
if (RD(4) == RD(0)) { SET64(2, rd16(c, (RW(17) + 288))); goto L_0016E1A0; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(5, (s32)rd32(c, (RW(17) + 264)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x16e190); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 256)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 228), (u8)RW(3));
SET64(2, rd16(c, (RW(17) + 288)));
L_0016E1A0:;
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 288), (u16)RW(2)); goto L_0016E2E0;
L_0016E1AC:;
SET32(2, RW(5) + 1);
wr16(c, (RW(17) + 288), (u16)RW(2));
L_0016E1B4:;
SET32(4, RW(17) + 44);
SET64(31, 0x16e1c0); c->f[12].u = c->f[20].u; F_00195FE0(c);
SET64(4, (s32)rd32(c, (RW(17) + 260)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_0016E1E0; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x16e1dc); c->f[12].u = c->f[20].u; rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
L_0016E1E0:;
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_0016E1EC; }
SET64(2, rd8(c, (RW(17) + 32)));
L_0016E1EC:;
if (RD(2) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_0016E2E4; }
SET32(2, RW(0) + 4);
wr16(c, (RW(17) + 288), (u16)RW(2)); goto L_0016E2E0;
L_0016E200:;
SET64(31, 0x16e208);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 252))); goto L_0016E21C; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 252)));
L_0016E21C:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x16e22c);  rt_call(c, t); }
SET64(2, rd16(c, (RW(17) + 288)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 288), (u16)RW(2));
L_0016E238:;
SET64(5, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x16e244); SET32(4, RW(17) + 44); F_00194CA0(c);
SET64(4, (s32)rd32(c, (RW(17) + 260)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 16))); goto L_0016E26C; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 60)));
{ u32 t = RW(25); SET64(31, 0x16e260); SET64(5, (s32)rd32(c, (RW(17) + 264))); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 256)));
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 16)));
L_0016E26C:;
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 24)));
wr8(c, (RW(2) + 36), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr8(c, (RW(2) + 36), (u8)RW(0));
SET64(2, rd16(c, (RW(17) + 288)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 288), (u16)RW(2));
L_0016E28C:;
SET64(4, (s32)rd32(c, (RW(17) + 260)));
if (RD(4) == RD(0)) { SET32(4, RW(17) + 44); goto L_0016E2B4; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x16e2a8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0016E2E0; }
SET32(4, RW(17) + 44);
L_0016E2B4:;
SET64(31, 0x16e2bc);  F_00194B20(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0016E2E0; }
SET64(25, (s32)rd32(c, (RW(17) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x16e2d4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 10);
wr16(c, (RW(17) + 288), (u16)RW(2));
L_0016E2DC:;
SET64(16, RD(0) + RD(0));
L_0016E2E0:;
SET64(2, RD(16) + RD(0));
L_0016E2E4:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}
void F_0016E0E0(Ctx *c) { B_0016E0E0(c, 0x16e0e0); }
void F_0016E128(Ctx *c) { B_0016E0E0(c, 0x16e128); }
void F_0016E1AC(Ctx *c) { B_0016E0E0(c, 0x16e1ac); }
void F_0016E1B4(Ctx *c) { B_0016E0E0(c, 0x16e1b4); }
void F_0016E200(Ctx *c) { B_0016E0E0(c, 0x16e200); }
void F_0016E238(Ctx *c) { B_0016E0E0(c, 0x16e238); }
void F_0016E28C(Ctx *c) { B_0016E0E0(c, 0x16e28c); }
void F_0016E2DC(Ctx *c) { B_0016E0E0(c, 0x16e2dc); }
void F_0016E2E0(Ctx *c) { B_0016E0E0(c, 0x16e2e0); }

void F_0016E300(Ctx *c) { /* func_0016E300 */
ENTER(0x16e300);
 return;
}

void F_0016E310(Ctx *c) { /* func_0016E310 */
ENTER(0x16e310);
 return;
}

void F_0016E320(Ctx *c) { /* func_0016E320 */
ENTER(0x16e320);
 return;
}

void F_0016E330(Ctx *c) { /* func_0016E330 */
ENTER(0x16e330);
 return;
}

void F_0016E340(Ctx *c) { /* func_0016E340 */
ENTER(0x16e340);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 248)));
{ int t = RD(2) != RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_0016E38C; }
SET64(31, 0x16e36c); SET32(4, RW(0) + 112); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016E37C; }
SET64(31, 0x16e37c); SET64(4, RD(16) + RD(0)); F_00160730(c);
L_0016E37C:;
wr32(c, (RW(18) + 248), RW(16));
SET64(5, rd16(c, (RW(17) + 2)));
SET64(31, 0x16e38c); SET64(4, RD(16) + RD(0)); F_00160090(c);
L_0016E38C:;
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
{ u32 t = RW(25); SET64(31, 0x16e3d4); SET32(5, RW(29) + 80); rt_call(c, t); }
SET64(6, (s32)rd32(c, (RW(17) + 28)));
if (RD(6) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 248))); goto L_0016E3F4; }
SET64(5, (s32)rd32(c, (RW(17) + 20)));
SET64(31, 0x16e3ec); SET64(4, (s32)rd32(c, (RW(18) + 248))); F_00160610(c);
SET64(4, (s16)rd16(c, (RW(17) + 16))); goto L_0016E404;
L_0016E3F4:;
SET64(6, (s32)rd32(c, (RW(17) + 24)));
SET64(31, 0x16e400); SET64(5, (s32)rd32(c, (RW(17) + 20))); F_00160510(c);
SET64(4, (s16)rd16(c, (RW(17) + 16)));
L_0016E404:;
SET64(2, (s16)rd16(c, (RW(17) + 12)));
{ int t = RD(2) != RD(4);  if (t) goto L_0016E420; }
SET64(3, (s16)rd16(c, (RW(17) + 14)));
SET64(2, (s16)rd16(c, (RW(17) + 18)));
if (RD(3) == RD(2)) { SET64(4, (s32)rd32(c, (RW(18) + 248))); goto L_0016E468; }
L_0016E420:;
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
L_0016E468:;
SET64(2, rd16(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(2, RD(2) & 0x1);
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x16e480); SET64(5, RD(0) < RD(2)); rt_call(c, t); }
SET64(2, rd8(c, (RW(17) + 4)));
{ int t = RSD(2) < 0; SET64(16, (s32)rd32(c, (RW(18) + 248))); if (t) goto L_0016E498; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_0016E4B4;
L_0016E498:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_0016E4B4:;
SET64(2, (s64)(s32)0x43000000);
SET32(4, RW(16) + 48);
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x16e4d8);  F_00162D00(c);
SET64(2, rd8(c, (RW(17) + 5)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0016E4F0; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_0016E508;
L_0016E4F0:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_0016E508:;
SET64(2, (s64)(s32)0x43000000);
SET32(4, RW(16) + 48);
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x16e52c);  F_00162CF0(c);
SET64(2, rd8(c, (RW(17) + 6)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0016E544; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_0016E55C;
L_0016E544:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_0016E55C:;
SET64(2, (s64)(s32)0x43000000);
SET32(4, RW(16) + 48);
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x16e580);  F_00162CE0(c);
SET64(2, rd8(c, (RW(17) + 7)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0016E598; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_0016E5B0;
L_0016E598:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_0016E5B0:;
SET64(2, (s64)(s32)0x43000000);
SET32(4, RW(16) + 48);
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x16e5d4);  F_00162CD0(c);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x16e5e4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(31, 0x16e5f0); SET32(5, RW(17) + 8); F_0015F270(c);
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

void F_0016E620(Ctx *c) { /* func_0016E620 */
ENTER(0x16e620);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 260)));
if (RD(4) == RD(0)) { SET32(4, RW(16) + 44); goto L_0016E680; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x16e64c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 260)));
SET64(5, (s32)rd32(c, (RW(2) + 124)));
SET64(31, 0x16e65c); SET64(4, (s32)rd32(c, (RW(16) + 168))); F_0019B510(c);
SET64(4, (s32)rd32(c, (RW(16) + 260)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 260), RW(0)); goto L_0016E67C; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16e678); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 260), RW(0));
L_0016E67C:;
SET32(4, RW(16) + 44);
L_0016E680:;
SET64(31, 0x16e688);  F_0019A3B0(c);
SET64(3, rd16(c, (RW(16) + 336)));
SET64(3, RD(3) & 0xf7ff);
wr16(c, (RW(16) + 336), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0016E6B0(Ctx *c) { /* func_0016E6B0 */
ENTER(0x16e6b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016E728; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11856);
wr32(c, (RW(17) + 200), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x16e6e8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016E714; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + -26960);
SET64(31, 0x16e704); wr32(c, (RW(17) + 16), RW(2)); F_00156AD0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x16e710); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(2, RD(16) << 48);
L_0016E714:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016E72C; }
SET64(31, 0x16e728); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016E728:;
SET64(2, RD(17) + RD(0));
L_0016E72C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016E740(Ctx *c) { /* func_0016E740 */
ENTER(0x16e740);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x16e754); SET64(16, RD(4) + RD(0)); F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x16e768);  rt_call(c, t); }
SET64(31, 0x16e770);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x16e77c); SET32(5, RW(0) + 1); F_001624B0(c);
SET64(25, (s32)rd32(c, (RW(16) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x16e78c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, 0x16e794); SET32(4, RW(16) + 44); F_0019A1F0(c);
SET64(31, 0x16e79c); SET64(4, RD(16) + RD(0)); F_0015F7F0(c);
SET64(4, (s32)rd32(c, (RW(16) + 252)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 252), RW(0)); goto L_0016E7BC; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16e7b8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 252), RW(0));
L_0016E7BC:;
SET64(4, (s32)rd32(c, (RW(16) + 248)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 248), RW(0)); goto L_0016E7DC; }
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x16e7d8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 248), RW(0));
L_0016E7DC:;
SET64(4, (s32)rd32(c, (RW(16) + 256)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 256), RW(0)); goto L_0016E7FC; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16e7f8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 256), RW(0));
L_0016E7FC:;
SET64(4, (s32)rd32(c, (RW(16) + 264)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 264), RW(0)); goto L_0016E81C; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16e818); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 264), RW(0));
L_0016E81C:;
SET64(4, (s32)rd32(c, (RW(16) + 284)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 284), RW(0)); goto L_0016E83C; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16e838); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 284), RW(0));
L_0016E83C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0016E850(Ctx *c) { /* func_0016E850 */
ENTER(0x16e850);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016E894; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22824);
SET64(31, 0x16e87c); wr32(c, (RW(17) + 4), RW(2)); F_003B7B10(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016E898; }
SET64(31, 0x16e894); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016E894:;
SET64(2, RD(17) + RD(0));
L_0016E898:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016E8B0(Ctx *c) { /* func_0016E8B0 */
ENTER(0x16e8b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016E97C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22976);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(7, (s32)rd32(c, (RW(17) + 12)));
SET32(9, RW(9) + -22860);
SET64(5, (s64)(s32)0x2b0000);
SET32(8, RW(8) + -22928);
SET32(3, RW(3) + -22908);
SET32(2, RW(17) + 464);
wr32(c, (RW(7) + 16), RW(9));
SET32(4, RW(17) + 272);
wr32(c, (RW(17) + 168), RW(8));
SET32(5, RW(5) + 4576);
wr32(c, (RW(17) + 172), RW(3));
SET32(6, RW(0) + 96);
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(7, RW(0) + 2);
SET32(2, RW(2) - RW(3));
SET64(31, 0x16e928); wr32(c, (RW(3) + 20), RW(2)); F_00102360(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x16e934); SET64(5, RD(0) + RD(0)); F_0014CEA0(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016E968; }
SET32(4, RW(17) + 464);
{ int t = RD(4) == RD(0);  if (t) goto L_0016E964; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 480), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16e964);  rt_call(c, t); }
L_0016E964:;
SET64(2, RD(16) << 48);
L_0016E968:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016E980; }
SET64(31, 0x16e97c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016E97C:;
SET64(2, RD(17) + RD(0));
L_0016E980:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016E9A0(Ctx *c) { /* func_0016E9A0 */
ENTER(0x16e9a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 260)));
if (RD(4) == RD(0)) { SET32(4, RW(16) + 44); goto L_0016E9E0; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x16e9cc);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0016E9DC; }
SET32(2, RW(0) + 1); goto L_0016E9E8;
L_0016E9DC:;
SET32(4, RW(16) + 44);
L_0016E9E0:;
SET64(31, 0x16e9e8);  F_001972A0(c);
L_0016E9E8:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0016EA00(Ctx *c) { /* func_0016EA00 */
ENTER(0x16ea00);
 return;
}

void F_0016EA10(Ctx *c) { /* func_0016EA10 */
ENTER(0x16ea10);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(3, rd16(c, (RW(4) + 336)));
SET64(3, RD(3) | 0x800);
{ int t = RD(5) == RD(0); wr16(c, (RW(4) + 336), (u16)RW(3)); if (t) goto L_0016EA44; }
SET64(31, 0x16ea44); SET32(4, RW(18) + 44); F_00197410(c);
L_0016EA44:;
if (RD(17) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_0016EACC; }
SET64(31, 0x16ea54); SET32(4, RW(0) + 204); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016EA64; }
SET64(31, 0x16ea64); SET64(4, RD(16) + RD(0)); F_0019B430(c);
L_0016EA64:;
SET64(31, 0x16ea6c); SET64(4, RD(16) + RD(0)); F_0019A320(c);
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
SET64(31, 0x16eaa4); SET64(4, (s32)rd32(c, (RW(18) + 168))); F_0019B7C0(c);
SET64(4, (s32)rd32(c, (RW(18) + 260)));
SET32(3, RW(0) + 1);
wr32(c, (RW(4) + 124), RW(2));
wr8(c, (RW(4) + 193), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 260)));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x16eac8); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
L_0016EACC:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0016EAE0(Ctx *c) { /* func_0016EAE0 */
ENTER(0x16eae0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x16eb08); SET32(4, RW(18) + 44); F_0019A0F0(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_0016EBA8; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(4);  if (t) goto L_0016EBA4; }
SET64(31, 0x16eb28);  F_001570B0(c);
SET64(31, 0x16eb30); SET32(4, RW(0) + 204); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016EB40; }
SET64(31, 0x16eb40); SET64(4, RD(16) + RD(0)); F_0019B430(c);
L_0016EB40:;
SET64(31, 0x16eb48); SET64(4, RD(16) + RD(0)); F_0019A320(c);
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
SET64(31, 0x16eb80); SET64(4, (s32)rd32(c, (RW(18) + 168))); F_0019B7C0(c);
SET64(4, (s32)rd32(c, (RW(18) + 260)));
SET32(3, RW(0) + 1);
wr32(c, (RW(4) + 124), RW(2));
wr8(c, (RW(4) + 193), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 260)));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x16eba4); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
L_0016EBA4:;
SET64(31, rd64(c, (RW(29) + 48)));
L_0016EBA8:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0016EBC0(Ctx *c) { /* func_0016EBC0 */
ENTER(0x16ebc0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x16ebe4); SET64(16, RD(5) + RD(0)); F_002BF970(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(17, (s32)c->f[0].u);
SET64(31, 0x16ebf4);  F_002BF9A0(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET32(4, RW(0) + 928);
wr32(c, (RW(29) + 92), RW(17));
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 84), RW(0));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x16ec14); wr32(c, (RW(29) + 88), RW(2)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016EC2C; }
SET64(5, (s32)rd32(c, (RW(28) + -30060)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x16ec2c); SET32(6, RW(0) + 16384); F_001626E0(c);
L_0016EC2C:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 80);
SET64(31, 0x16ec3c); wr32(c, (RW(18) + 256), RW(17)); F_00162290(c);
SET64(2, (s32)rd32(c, (RW(18) + 256)));
SET32(4, RW(0) + 496);
SET64(2, (s32)rd32(c, (RW(2) + 236)));
wr8(c, (RW(2) + 324), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 256)));
SET64(31, 0x16ec58); wr8(c, (RW(2) + 228), (u8)RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_0016ECB0; }
SET32(5, RW(0) + 32);
SET64(4, RD(19) + RD(0));
SET32(6, RW(0) + 64);
SET64(31, 0x16ec74); SET64(7, RD(5) + RD(0)); F_002A36E0(c);
SET32(17, RW(19) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(17) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x16ec8c); wr32(c, (RW(19) + 240), RW(4)); F_002AB2A0(c);
SET64(31, 0x16ec94); SET32(4, RW(17) + 32); F_002A59A0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 240), RW(17));
SET32(2, RW(2) + -30800);
SET64(4, RD(19) + RD(0));
wr32(c, (RW(19) + 144), RW(2));
SET64(31, 0x16ecb0); SET32(5, RW(19) + 272); F_002A35D0(c);
L_0016ECB0:;
wr32(c, (RW(18) + 264), RW(19));
SET64(2, (s32)rd32(c, (RW(18) + 256)));
SET64(4, (s32)rd32(c, (RW(2) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x16ecc8); SET64(5, RD(19) + RD(0)); F_002AB090(c);
if (RD(16) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_0016ECF8; }
SET64(31, 0x16ecd8); SET32(4, RW(0) + 8); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0016ECE8; }
SET64(31, 0x16ece8); SET64(4, RD(16) + RD(0)); F_003B7C20(c);
L_0016ECE8:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x16ecf4); wr32(c, (RW(18) + 284), RW(16)); F_003B7B50(c);
SET64(4, RD(18) + RD(0));
L_0016ECF8:;
SET64(31, 0x16ed00);  F_0015F500(c);
SET64(31, 0x16ed08); SET32(4, RW(18) + 44); F_0019A320(c);
SET64(2, (s32)rd32(c, (RW(18) + 36)));
wr32(c, (RW(18) + 128), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 16)));
SET32(2, RW(2) + 784);
wr32(c, (RW(18) + 124), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 12)));
SET64(31, 0x16ed28); wr32(c, (RW(18) + 104), RW(2)); F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x16ed34); SET64(5, RD(0) + RD(0)); F_001624B0(c);
wr16(c, (RW(18) + 336), (u16)RW(0));
SET32(4, RW(0) + 496);
wr16(c, (RW(18) + 290), (u16)RW(0));
SET64(31, 0x16ed48); wr16(c, (RW(18) + 288), (u16)RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0016EDD0; }
SET32(4, RW(17) + 464);
SET32(16, RW(0) + 1);
SET64(31, 0x16ed60); wr32(c, (RW(17) + 12), RW(4)); F_00141AA0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x16ed6c); SET64(5, RD(0) + RD(0)); F_0014CFE0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22976);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(7, (s32)rd32(c, (RW(17) + 12)));
SET32(9, RW(9) + -22860);
SET64(5, (s64)(s32)0x2b0000);
SET64(6, (s64)(s32)0x2b0000);
SET32(8, RW(8) + -22928);
SET32(3, RW(3) + -22908);
wr32(c, (RW(7) + 16), RW(9));
SET32(2, RW(17) + 464);
wr32(c, (RW(17) + 168), RW(8));
SET32(4, RW(17) + 272);
wr32(c, (RW(17) + 172), RW(3));
SET32(5, RW(5) + 4672);
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(6, RW(6) + 4576);
SET32(7, RW(0) + 96);
SET32(8, RW(0) + 2);
SET32(2, RW(2) - RW(3));
SET64(31, 0x16edd0); wr32(c, (RW(3) + 20), RW(2)); F_001023D0(c);
L_0016EDD0:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x16ede0); wr32(c, (RW(18) + 252), RW(17)); F_0015E2A0(c);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_0016EE00(Ctx *c) { /* func_0016EE00 */
ENTER(0x16ee00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x16ee14); SET64(16, RD(4) + RD(0)); F_0015F9E0(c);
SET64(31, 0x16ee1c); SET32(4, RW(16) + 44); F_0019B430(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -23104);
SET32(3, RW(3) + -23092);
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

void F_0016EE90(Ctx *c) { /* func_0016EE90 */
ENTER(0x16ee90);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(28) + -30040)));
SET64(3, (s32)rd32(c, (RW(2) + 40)));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 5);
SET32(2, RW(4) + RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 280)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16eec0); SET32(4, RW(2) + 272); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0016EED0(Ctx *c) { /* func_0016EED0 */
ENTER(0x16eed0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { F_0014C8A0(c); return; }
}

void F_0016EEE0(Ctx *c) { /* func_0016EEE0 */
ENTER(0x16eee0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { F_0014C900(c); return; }
}

void F_0016EEF0(Ctx *c) { /* func_0016EEF0 */
ENTER(0x16eef0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { F_0014CDF0(c); return; }
}

void F_0016EF00(Ctx *c) { /* func_0016EF00 */
ENTER(0x16ef00);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { F_0016E8B0(c); return; }
}

void F_0016EF10(Ctx *c) { /* func_0016EF10 */
ENTER(0x16ef10);
SET32(4, RW(4) + -160); { F_0016EE90(c); return; }
}

void F_0016EF20(Ctx *c) { /* func_0016EF20 */
ENTER(0x16ef20);
SET32(4, RW(4) + -160); { F_0016E8B0(c); return; }
}

void F_0016EF30(Ctx *c) { /* func_0016EF30 */
ENTER(0x16ef30);
SET32(4, RW(4) + -44); { F_0016DFD0(c); return; }
}

void F_0016EF40(Ctx *c) { /* func_0016EF40 */
ENTER(0x16ef40);
SET32(4, RW(4) + -44); { F_0016E0E0(c); return; }
}

void F_0016EF50(Ctx *c) { /* func_0016EF50 */
ENTER(0x16ef50);
SET32(4, RW(4) + -44); { F_0016E9A0(c); return; }
}

void F_0016EF60(Ctx *c) { /* func_0016EF60 */
ENTER(0x16ef60);
SET32(4, RW(4) + -44); { F_0016E620(c); return; }
}

void F_0016EF70(Ctx *c) { /* func_0016EF70 */
ENTER(0x16ef70);
SET32(4, RW(4) + -44); { F_0016E740(c); return; }
}

void F_0016EF80(Ctx *c) { /* func_0016EF80 */
ENTER(0x16ef80);
SET32(4, RW(4) + -44); { F_0016DF00(c); return; }
}

void F_0016EF90(Ctx *c) { /* func_0016EF90 */
ENTER(0x16ef90);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16efbc); SET32(16, RW(0) + -1); rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_0016EFD4; }
SET64(16, RD(17) << 48);
wr16(c, (RW(18) + 4), (u16)RW(17));
SET64(16, RSD(16) >> 48);
SET64(2, RD(16) + RD(0));
L_0016EFD4:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0016EFF0(Ctx *c) { /* func_0016EFF0 */
ENTER(0x16eff0);
SET32(2, RW(0) + 1); return;
}

void F_0016F000(Ctx *c) { /* func_0016F000 */
ENTER(0x16f000);
SET64(2, (s16)rd16(c, (RW(4) + 4))); return;
}

void F_0016F010(Ctx *c) { /* func_0016F010 */
ENTER(0x16f010);
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
{ int t = RD(3) == RD(2); SET64(20, RD(4) + RD(0)); if (t) goto L_0016F0D0; }
SET64(17, RD(5) & 0x80);
SET64(16, RD(5) & 0x20);
L_0016F050:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016F080; }
SET64(4, RD(18) << 48);
SET64(2, (s32)rd32(c, (RW(20) + 12)));
SET64(4, RSD(4) >> 48);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(18, (s16)rd16(c, (RW(2) + 2))); goto L_0016F0A8;
L_0016F080:;
{ int t = RD(16) == RD(0);  if (t) goto L_0016F0A8; }
SET64(4, RD(18) << 48);
SET64(2, (s32)rd32(c, (RW(20) + 12)));
SET64(4, RSD(4) >> 48);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(18, (s16)rd16(c, (RW(2) + 4)));
L_0016F0A8:;
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16f0bc); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_0016F0D0; }
SET32(19, RW(19) + -1);
{ int t = RSD(19) >= 0;  if (t) { POLL(); goto L_0016F050; } }
L_0016F0D0:;
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

void F_0016F100(Ctx *c) { /* func_0016F100 */
ENTER(0x16f100);
SET64(5, RD(5) << 48);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET64(5, RSD(5) >> 48);
SET32(3, RW(5) << 1);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + 0))); return;
}

void F_0016F130(Ctx *c) { /* func_0016F130 */
ENTER(0x16f130);
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
{ int t = RD(3) == RD(2); SET64(20, RD(4) + RD(0)); if (t) goto L_0016F1F0; }
SET64(17, RD(5) & 0x10);
SET64(16, RD(5) & 0x40);
L_0016F170:;
{ int t = RD(17) == RD(0);  if (t) goto L_0016F1A0; }
SET64(4, RD(18) << 48);
SET64(2, (s32)rd32(c, (RW(20) + 12)));
SET64(4, RSD(4) >> 48);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(18, (s16)rd16(c, (RW(2) + 2))); goto L_0016F1C8;
L_0016F1A0:;
{ int t = RD(16) == RD(0);  if (t) goto L_0016F1C8; }
SET64(4, RD(18) << 48);
SET64(2, (s32)rd32(c, (RW(20) + 12)));
SET64(4, RSD(4) >> 48);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(18, (s16)rd16(c, (RW(2) + 4)));
L_0016F1C8:;
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x16f1dc); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_0016F1F0; }
SET32(19, RW(19) + -1);
{ int t = RSD(19) >= 0;  if (t) { POLL(); goto L_0016F170; } }
L_0016F1F0:;
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

void F_0016F220(Ctx *c) { /* func_0016F220 */
ENTER(0x16f220);
SET64(5, RD(5) << 48);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET64(5, RSD(5) >> 48);
SET32(3, RW(5) << 1);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + 0))); return;
}

void F_0016F250(Ctx *c) { /* func_0016F250 */
ENTER(0x16f250);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016F2D4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22736);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x16f288);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0016F2C0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(25); SET64(31, 0x16f2a8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_0016F2BC; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30016);
wr32(c, (RW(17) + 12), RW(2));
L_0016F2BC:;
SET64(2, RD(16) << 48);
L_0016F2C0:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016F2D8; }
SET64(31, 0x16f2d4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016F2D4:;
SET64(2, RD(17) + RD(0));
L_0016F2D8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016F2F0(Ctx *c) { /* func_0016F2F0 */
ENTER(0x16f2f0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 68)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_0016F360; }
SET64(16, RD(19) + RD(0));
L_0016F320:;
SET64(3, rd16(c, (RW(16) + 44)));
SET64(2, (s64)(s32)0x520000);
SET32(2, RW(2) + 17488);
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x16f34c); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(19) + 68)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_0016F320; } }
L_0016F360:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0016F380(Ctx *c) { /* func_0016F380 */
ENTER(0x16f380);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 68)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_0016F3F0; }
SET64(16, RD(19) + RD(0));
L_0016F3B0:;
SET64(3, rd16(c, (RW(16) + 44)));
SET64(2, (s64)(s32)0x520000);
SET32(2, RW(2) + 17488);
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x16f3dc); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(19) + 68)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_0016F3B0; } }
L_0016F3F0:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0016F410(Ctx *c) { /* func_0016F410 */
ENTER(0x16f410);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
SET64(30, RD(7) + RD(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(6) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(8) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
{ int t = RD(22) != RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_0016F458; }
SET64(22, RD(21) + RD(0));
L_0016F458:;
SET64(2, rd16(c, (RW(21) + 68)));
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_0016F4E8; }
SET64(17, RD(21) + RD(0));
SET64(16, RD(20) & 0xffff);
L_0016F46C:;
SET64(3, rd16(c, (RW(17) + 44)));
SET64(2, (s64)(s32)0x520000);
SET32(2, RW(2) + 17488);
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(18, (s32)rd32(c, (RW(2) + 0)));
if (RD(18) == RD(0)) { SET64(2, rd16(c, (RW(21) + 68))); goto L_0016F4D8; }
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x16f4a4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0016F4D4; }
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(5, RD(20) + RD(0));
SET64(6, RD(23) + RD(0));
SET64(7, RD(30) + RD(0));
SET64(8, RD(22) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x16f4cc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 144))); goto L_0016F5CC;
L_0016F4D4:;
SET64(2, rd16(c, (RW(21) + 68)));
L_0016F4D8:;
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 2); if (t) { POLL(); goto L_0016F46C; } }
L_0016F4E8:;
SET64(4, (s64)(s32)0x490000);
SET64(18, RD(0) + RD(0));
SET32(4, RW(4) + 18032);
SET64(3, RD(20) & 0xffff);
L_0016F4F8:;
SET64(2, rd16(c, (RW(4) + 20)));
if (RD(2) == RD(0)) { SET32(18, RW(18) + 1); goto L_0016F52C; }
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_0016F528; }
SET64(2, rd16(c, (RW(4) + 22)));
SET64(1, RSD(2) < RSD(3));
{ int t = RD(1) != RD(0);  if (t) goto L_0016F528; }
 goto L_0016F53C;
L_0016F528:;
SET32(18, RW(18) + 1);
L_0016F52C:;
SET64(2, RSD(18) < (s64)104);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 24); if (t) { POLL(); goto L_0016F4F8; } }
SET32(18, RW(0) + 105);
L_0016F53C:;
SET64(17, (s64)(s32)0x520000);
SET64(19, RD(0) + RD(0));
SET32(17, RW(17) + 17488);
SET64(16, RD(20) & 0xffff);
L_0016F54C:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
if (RD(4) == RD(0)) { SET32(19, RW(19) + 1); goto L_0016F5B8; }
SET64(2, (s32)rd32(c, (RW(4) + 152)));
{ int t = RD(18) != RD(2);  if (t) goto L_0016F5B4; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x16f574); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0016F5B4; }
SET64(2, (s64)(s32)0x520000);
SET32(3, RW(19) << 2);
SET32(2, RW(2) + 17488);
SET64(5, RD(20) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(6, RD(23) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(7, RD(30) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x16f5ac); SET64(8, RD(22) + RD(0)); rt_call(c, t); }
 goto L_0016F5C8;
L_0016F5B4:;
SET32(19, RW(19) + 1);
L_0016F5B8:;
SET64(2, RSD(19) < (s64)12);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_0016F54C; } }
SET64(2, RD(0) + RD(0));
L_0016F5C8:;
SET64(31, rd64(c, (RW(29) + 144)));
L_0016F5CC:;
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

void F_0016F600(Ctx *c) { /* func_0016F600 */
ENTER(0x16f600);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd16(c, (RW(4) + 68)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_0016F688; }
SET64(16, RD(19) + RD(0));
L_0016F630:;
SET64(3, rd16(c, (RW(16) + 44)));
SET64(2, (s64)(s32)0x520000);
SET32(2, RW(2) + 17488);
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x16f65c); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(19) + 68))); goto L_0016F674; }
SET32(2, RW(0) + 1); goto L_0016F68C;
L_0016F674:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_0016F630; } }
L_0016F688:;
SET64(2, RD(0) + RD(0));
L_0016F68C:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0016F6B0(Ctx *c) { /* func_0016F6B0 */
ENTER(0x16f6b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(8, rd16(c, (RW(4) + 68)));
{ int t = RSD(8) <= 0; SET64(10, RD(0) + RD(0)); if (t) goto L_0016F7A0; }
SET64(14, (s64)(s32)0x490000);
SET64(3, (s64)(s32)0x520000);
SET64(7, RD(5) & 0xffff);
SET32(14, RW(14) + 18032);
SET32(12, RW(0) + 1);
SET32(3, RW(3) + 17488);
L_0016F6DC:;
SET64(9, rd16(c, (RW(4) + 44)));
SET64(9, RD(9) & 0xf);
SET32(9, RW(9) << 2);
SET32(9, RW(3) + RW(9));
SET64(9, (s32)rd32(c, (RW(9) + 0)));
if (RD(9) == RD(0)) { SET32(10, RW(10) + 1); goto L_0016F790; }
SET64(13, (s32)rd32(c, (RW(9) + 152)));
SET64(11, RSD(13) < (s64)104);
if (RD(11) != RD(0)) { SET32(11, RW(13) << 1); goto L_0016F710; }
SET64(15, RD(0) + RD(0)); goto L_0016F720;
L_0016F710:;
SET32(11, RW(11) + RW(13));
SET32(11, RW(11) << 3);
SET32(11, RW(14) + RW(11));
SET64(15, rd16(c, (RW(11) + 20)));
L_0016F720:;
SET32(11, RW(13) << 1);
SET32(11, RW(11) + RW(13));
SET32(11, RW(11) << 3);
SET32(11, RW(14) + RW(11));
SET64(13, rd16(c, (RW(11) + 20)));
SET64(11, rd16(c, (RW(11) + 22)));
SET32(11, RW(11) - RW(13));
{ int t = RD(13) == RD(0); SET32(11, RW(11) + 1); if (t) goto L_0016F750; }
{ int t = RSD(11) > 0;  if (t) goto L_0016F758; }
L_0016F750:;
SET64(11, RD(12) + RD(0)); goto L_0016F758;
L_0016F758:;
SET64(1, RSD(7) < RSD(15));
{ int t = RD(1) != RD(0);  if (t) goto L_0016F78C; }
SET32(11, RW(15) + RW(11));
SET64(1, RSD(7) < RSD(11));
{ int t = RD(1) == RD(0);  if (t) goto L_0016F78C; }
SET64(25, (s32)rd32(c, (RW(9) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x16f784); SET64(4, RD(9) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0))); goto L_0016F7A4;
L_0016F78C:;
SET32(10, RW(10) + 1);
L_0016F790:;
SET64(9, RSD(10) < RSD(8));
{ int t = RD(9) != RD(0); SET32(4, RW(4) + 2); if (t) { POLL(); goto L_0016F6DC; } }
L_0016F7A0:;
SET64(31, rd64(c, (RW(29) + 0)));
L_0016F7A4:;
SET32(29, RW(29) + 16); return;
}

void F_0016F7B0(Ctx *c) { /* func_0016F7B0 */
ENTER(0x16f7b0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(28) + -30048)));
SET64(31, 0x16f7dc); SET64(17, RD(6) + RD(0)); F_002A44B0(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 164))); goto L_0016F7EC; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(16) + 164)));
L_0016F7EC:;
SET64(31, 0x16f7f4); SET64(5, RD(2) + RD(0)); F_002AADE0(c);
SET64(3, RD(0) < RD(2));
SET64(3, RD(3) ^ 0x1);
wr8(c, (RW(29) + 92), (u8)RW(3));
SET64(3, rd8(c, (RW(29) + 92)));
if (RD(3) != RD(0)) { SET64(16, RD(0) + RD(0)); goto L_0016F830; }
SET64(31, 0x16f814);  F_002A44B0(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -30048))); goto L_0016F824; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(28) + -30048)));
L_0016F824:;
SET64(31, 0x16f82c); SET64(5, RD(2) + RD(0)); F_002A8FB0(c);
SET64(16, RD(0) + RD(0));
L_0016F830:;
{ int t = RSD(17) <= 0;  if (t) goto L_0016F938; }
L_0016F838:;
SET64(10, rd16(c, (RW(19) + 68)));
SET64(6, rd16(c, (RW(18) + 2)));
SET64(5, rd16(c, (RW(18) + 0)));
{ int t = RSD(10) <= 0; SET64(13, RD(0) + RD(0)); if (t) goto L_0016F928; }
SET64(3, (s64)(s32)0x490000);
SET64(8, (s64)(s32)0x520000);
SET64(12, RD(19) + RD(0));
SET64(9, RD(5) & 0xffff);
SET32(3, RW(3) + 18032);
SET32(14, RW(0) + 1);
SET32(8, RW(8) + 17488);
L_0016F868:;
SET64(4, rd16(c, (RW(12) + 44)));
SET64(4, RD(4) & 0xf);
SET32(4, RW(4) << 2);
SET32(4, RW(8) + RW(4));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_0016F918; }
SET64(11, (s32)rd32(c, (RW(4) + 152)));
SET64(7, RSD(11) < (s64)104);
if (RD(7) != RD(0)) { SET32(7, RW(11) << 1); goto L_0016F89C; }
SET64(7, RD(0) + RD(0)); goto L_0016F8AC;
L_0016F89C:;
SET32(7, RW(7) + RW(11));
SET32(7, RW(7) << 3);
SET32(7, RW(3) + RW(7));
SET64(7, rd16(c, (RW(7) + 20)));
L_0016F8AC:;
SET32(15, RW(11) << 1);
SET32(11, RW(15) + RW(11));
SET32(11, RW(11) << 3);
SET32(11, RW(3) + RW(11));
SET64(15, rd16(c, (RW(11) + 20)));
SET64(11, rd16(c, (RW(11) + 22)));
SET32(11, RW(11) - RW(15));
{ int t = RD(15) == RD(0); SET32(11, RW(11) + 1); if (t) goto L_0016F8D8; }
{ int t = RSD(11) > 0;  if (t) goto L_0016F8E0; }
L_0016F8D8:;
SET64(11, RD(14) + RD(0)); goto L_0016F8E0;
L_0016F8E0:;
SET64(1, RSD(9) < RSD(7));
{ int t = RD(1) != RD(0);  if (t) goto L_0016F918; }
SET32(7, RW(7) + RW(11));
SET64(1, RSD(9) < RSD(7));
{ int t = RD(1) == RD(0);  if (t) goto L_0016F918; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x16f90c);  rt_call(c, t); }
 goto L_0016F928;
L_0016F918:;
SET32(13, RW(13) + 1);
SET64(4, RSD(13) < RSD(10));
{ int t = RD(4) != RD(0); SET32(12, RW(12) + 2); if (t) { POLL(); goto L_0016F868; } }
L_0016F928:;
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < RSD(17));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_0016F838; } }
L_0016F938:;
SET64(3, rd8(c, (RW(29) + 92)));
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_0016F96C; }
SET64(31, 0x16f94c);  F_002A44B0(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -30048))); goto L_0016F95C; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(28) + -30048)));
L_0016F95C:;
SET64(5, RD(2) + RD(0));
SET64(31, 0x16f968); SET64(6, RD(0) + RD(0)); F_002A9030(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_0016F96C:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_0016F990(Ctx *c) { /* func_0016F990 */
ENTER(0x16f990);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016F9F4; }
SET64(2, rd8(c, (RW(17) + 0)));
if (RD(2) != RD(0)) { SET64(2, RD(16) << 48); goto L_0016F9E0; }
SET64(31, 0x16f9c0);  F_002A44B0(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -30048))); goto L_0016F9D0; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(28) + -30048)));
L_0016F9D0:;
SET64(5, RD(2) + RD(0));
SET64(31, 0x16f9dc); SET64(6, RD(0) + RD(0)); F_002A9030(c);
SET64(2, RD(16) << 48);
L_0016F9E0:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016F9F8; }
SET64(31, 0x16f9f4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016F9F4:;
SET64(2, RD(17) + RD(0));
L_0016F9F8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016FA10(Ctx *c) { /* func_0016FA10 */
ENTER(0x16fa10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, rd16(c, (RW(5) + 0)));
{ int t = RD(3) == RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_0016FA48; }
SET64(7, RD(5) + RD(0));
SET32(6, RW(6) + 1);
L_0016FA2C:;
SET64(1, RSD(6) < (s64)711);
{ int t = RD(1) == RD(0); SET32(7, RW(7) + 4); if (t) goto L_0016FA50; }
SET64(3, rd16(c, (RW(7) + 0)));
if (RD(3) != RD(0)) { SET32(6, RW(6) + 1); { POLL(); goto L_0016FA2C; } }
L_0016FA48:;
SET64(31, 0x16fa50);  F_0016F7B0(c);
L_0016FA50:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0016FA60(Ctx *c) { /* func_0016FA60 */
ENTER(0x16fa60);
SET64(7, rd16(c, (RW(4) + 68)));
{ int t = RSD(7) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_0016FAA8; }
SET64(6, (s64)(s32)0x520000);
SET32(6, RW(6) + 17488);
L_0016FA74:;
SET64(2, rd16(c, (RW(4) + 44)));
SET64(2, RD(2) & 0xf);
SET32(2, RW(2) << 2);
SET32(2, RW(6) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 152)));
if (RD(5) != RD(3)) { SET32(8, RW(8) + 1); goto L_0016FA9C; }
 goto L_0016FAAC;
L_0016FA9C:;
SET64(2, RSD(8) < RSD(7));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 2); if (t) { POLL(); goto L_0016FA74; } }
L_0016FAA8:;
SET64(2, RD(0) + RD(0));
L_0016FAAC:;
 return;
}

void F_0016FAC0(Ctx *c) { /* func_0016FAC0 */
ENTER(0x16fac0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 68)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_0016FB40; }
SET64(16, RD(18) + RD(0));
L_0016FAEC:;
SET64(4, rd16(c, (RW(16) + 44)));
SET64(3, (s64)(s32)0x520000);
SET32(3, RW(3) + 17488);
SET64(4, RD(4) & 0xf);
SET32(4, RW(4) << 2);
SET32(19, RW(3) + RW(4));
SET64(4, (s32)rd32(c, (RW(19) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_0016FB20; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x16fb20); SET32(5, RW(0) + 1); rt_call(c, t); }
L_0016FB20:;
wr32(c, (RW(19) + 0), RW(0));
wr16(c, (RW(16) + 44), (u16)RW(0));
SET32(17, RW(17) + 1);
SET64(3, rd16(c, (RW(18) + 68)));
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_0016FAEC; } }
L_0016FB40:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
if (RD(3) == RD(0)) { wr32(c, (RW(18) + 4), RW(0)); goto L_0016FBA4; }
SET32(4, RW(3) + 8);
SET64(3, (s32)rd32(c, (RW(3) + 8)));
if (RD(3) != RD(18)) { SET32(4, RW(3) + 4); goto L_0016FB70; }
SET64(3, (s32)rd32(c, (RW(18) + 4)));
if (RD(3) != RD(0)) { wr32(c, (RW(4) + 0), RW(3)); goto L_0016FBA0; }
wr32(c, (RW(4) + 0), RW(0)); goto L_0016FBA0;
L_0016FB70:;
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(18);  if (t) goto L_0016FB98; }
L_0016FB7C:;
SET32(4, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(18);  if (t) { POLL(); goto L_0016FB7C; } }
L_0016FB98:;
SET64(3, (s32)rd32(c, (RW(18) + 4)));
wr32(c, (RW(4) + 0), RW(3));
L_0016FBA0:;
wr32(c, (RW(18) + 4), RW(0));
L_0016FBA4:;
wr32(c, (RW(18) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0016FBD0(Ctx *c) { /* func_0016FBD0 */
ENTER(0x16fbd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0016FD6C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22480);
SET32(3, RW(3) + -22472);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -22460);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 36), RW(2));
SET32(3, RW(3) + -22400);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 72), RW(3));
SET32(2, RW(2) + -22376);
wr32(c, (RW(17) + 132), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x16fc38);  rt_call(c, t); }
SET32(4, RW(17) + 176);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 104); goto L_0016FCF0; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -22640);
SET32(2, RW(2) + -22616);
wr32(c, (RW(17) + 320), RW(3));
wr32(c, (RW(17) + 348), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x16fc6c);  rt_call(c, t); }
SET32(4, RW(17) + 176);
{ int t = RD(4) == RD(0);  if (t) goto L_0016FCEC; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -10288);
SET32(2, RW(2) + -10264);
wr32(c, (RW(17) + 320), RW(3));
wr32(c, (RW(17) + 348), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x16fca0);  rt_call(c, t); }
SET32(4, RW(17) + 336);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 176); goto L_0016FCE4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(17) + 348), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16fcc8);  rt_call(c, t); }
SET32(2, RW(17) + 336);
{ int t = RD(2) == RD(0);  if (t) goto L_0016FCE0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30016);
wr32(c, (RW(17) + 348), RW(2));
L_0016FCE0:;
SET32(4, RW(17) + 176);
L_0016FCE4:;
SET64(31, 0x16fcec); SET64(5, RD(0) + RD(0)); F_002409D0(c);
L_0016FCEC:;
SET32(4, RW(17) + 104);
L_0016FCF0:;
if (RD(4) == RD(0)) { SET32(4, RW(17) + 60); goto L_0016FD0C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22664);
SET64(31, 0x16fd08); wr32(c, (RW(17) + 132), RW(2)); F_001F14C0(c);
SET32(4, RW(17) + 60);
L_0016FD0C:;
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_0016FD4C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(17) + 72), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x16fd30);  rt_call(c, t); }
SET32(2, RW(17) + 60);
{ int t = RD(2) == RD(0);  if (t) goto L_0016FD48; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30016);
wr32(c, (RW(17) + 72), RW(2));
L_0016FD48:;
SET64(4, RD(17) + RD(0));
L_0016FD4C:;
SET64(31, 0x16fd54); SET64(5, RD(0) + RD(0)); F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0016FD70; }
SET64(31, 0x16fd6c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0016FD6C:;
SET64(2, RD(17) + RD(0));
L_0016FD70:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0016FD90(Ctx *c) { /* func_0016FD90 */
ENTER(0x16fd90);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd16(c, (RW(4) + 68)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_0016FE08; }
SET64(16, RD(18) + RD(0));
L_0016FDB8:;
SET64(3, rd16(c, (RW(16) + 44)));
SET64(2, (s64)(s32)0x520000);
SET32(2, RW(2) + 17488);
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x16fde4);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(18) + 68))); goto L_0016FDF4; }
SET64(2, RD(0) + RD(0)); goto L_0016FE0C;
L_0016FDF4:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_0016FDB8; } }
L_0016FE08:;
SET32(2, RW(0) + 1);
L_0016FE0C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0016FE30(Ctx *c) { /* func_0016FE30 */
ENTER(0x16fe30);
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
{ int t = RD(2) == RD(0); SET64(18, RD(6) + RD(0)); if (t) goto L_0016FE70; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x16fe70);  rt_call(c, t); }
L_0016FE70:;
{ int t = RD(18) == RD(0);  if (t) goto L_0016FE94; }
SET64(25, (s32)rd32(c, (RW(18) + 12)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16fe8c); SET64(5, RD(20) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(20) + 68))); goto L_0016FEB0;
L_0016FE94:;
SET64(4, (s64)(s32)0x520000);
SET32(4, RW(4) + 14840);
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x16feac); SET64(5, RD(20) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(20) + 68)));
L_0016FEB0:;
SET64(18, RD(20) + RD(0));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_0016FF50; }
SET64(16, RD(20) + RD(0));
L_0016FEC0:;
SET64(4, rd16(c, (RW(16) + 44)));
SET64(3, (s64)(s32)0x520000);
SET32(3, RW(3) + 17488);
SET64(4, RD(4) & 0xf);
SET32(5, RW(4) << 2);
SET32(3, RW(3) + RW(5));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_0016FF38; }
SET64(3, (s32)rd32(c, (RW(4) + 152)));
SET32(2, RW(0) + 99);
SET32(5, RW(5) + 128);
{ int t = RD(3) == RD(2); SET64(6, RD(0) + RD(0)); if (t) goto L_0016FF18; }
SET32(2, RW(0) + 98);
{ int t = RD(3) == RD(2);  if (t) goto L_0016FF10; }
 goto L_0016FF20;
L_0016FF10:;
SET32(6, RW(0) + 2); goto L_0016FF20;
L_0016FF18:;
SET32(6, RW(0) + 3);
L_0016FF20:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(5, RD(5) & 0xff);
SET64(7, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x16ff38); SET64(8, RD(18) + RD(0)); rt_call(c, t); }
L_0016FF38:;
SET64(3, rd16(c, (RW(20) + 68)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_0016FEC0; } }
L_0016FF50:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

static void B_0016FF70(Ctx *c, u32 entry) { /* func_0016FF70 */
ENTER(entry);
switch (entry) { case 0x16fffc: goto L_0016FFFC; case 0x170004: goto L_00170004; }
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd16(c, (RW(4) + 68)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_0016FFF0; }
SET64(16, RD(18) + RD(0));
L_0016FF98:;
SET64(3, rd16(c, (RW(16) + 44)));
SET64(2, (s64)(s32)0x520000);
SET32(2, RW(2) + 17488);
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x16ffc4);  rt_call(c, t); }
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(18) + 68))); goto L_0016FFDC; }
SET32(2, RW(0) + 1); goto L_0016FFF4;
L_0016FFDC:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_0016FF98; } }
L_0016FFF0:;
SET64(2, RD(0) + RD(0));
L_0016FFF4:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
L_0016FFFC:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
L_00170004:;
SET32(29, RW(29) + 64); return;
}
void F_0016FF70(Ctx *c) { B_0016FF70(c, 0x16ff70); }
void F_0016FFFC(Ctx *c) { B_0016FF70(c, 0x16fffc); }
void F_00170004(Ctx *c) { B_0016FF70(c, 0x170004); }

static void B_00170010(Ctx *c, u32 entry) { /* func_00170010 */
ENTER(entry);
switch (entry) { case 0x170018: goto L_00170018; case 0x17001c: goto L_0017001C; case 0x170020: goto L_00170020; case 0x170038: goto L_00170038; case 0x170044: goto L_00170044; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
L_00170018:;
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
L_0017001C:;
SET64(16, RD(4) + RD(0));
L_00170020:;
SET64(4, RD(5) + RD(0));
SET64(5, RD(6) + RD(0));
SET64(6, RD(7) + RD(0));
SET64(31, 0x170034); SET64(7, RD(8) + RD(0)); F_00170820(c);
SET64(3, rd16(c, (RW(16) + 68)));
L_00170038:;
SET32(3, RW(3) << 1);
SET32(3, RW(3) + RW(16));
wr16(c, (RW(3) + 44), (u16)RW(2));
L_00170044:;
SET64(4, rd16(c, (RW(16) + 68)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(16));
SET64(3, rd16(c, (RW(3) + 44)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_00170068; }
SET32(3, RW(4) + 1);
wr16(c, (RW(16) + 68), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
L_00170068:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}
void F_00170010(Ctx *c) { B_00170010(c, 0x170010); }
void F_00170018(Ctx *c) { B_00170010(c, 0x170018); }
void F_0017001C(Ctx *c) { B_00170010(c, 0x17001c); }
void F_00170020(Ctx *c) { B_00170010(c, 0x170020); }
void F_00170038(Ctx *c) { B_00170010(c, 0x170038); }
void F_00170044(Ctx *c) { B_00170010(c, 0x170044); }

void F_00170080(Ctx *c) { /* func_00170080 */
ENTER(0x170080);
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
L_001700A8:;
wr16(c, (RW(4) + 44), (u16)RW(0));
SET32(5, RW(5) + 6);
wr16(c, (RW(4) + 46), (u16)RW(0));
SET64(3, RSD(5) < (s64)12);
wr16(c, (RW(4) + 48), (u16)RW(0));
wr16(c, (RW(4) + 50), (u16)RW(0));
wr16(c, (RW(4) + 52), (u16)RW(0));
wr16(c, (RW(4) + 54), (u16)RW(0));
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 12); if (t) { POLL(); goto L_001700A8; } }
 return;
}

void F_001700E0(Ctx *c) { /* func_001700E0 */
ENTER(0x1700e0);
SET32(29, RW(29) + -112);
SET64(3, (s64)(s32)0x520000);
wr64(c, (RW(29) + 96), RD(31));
SET32(3, RW(3) + 17488);
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
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_001701C8; }
SET64(18, RD(0) + RD(0));
L_0017012C:;
SET64(3, (s32)rd32(c, (RW(17) + 532)));
SET32(16, RW(3) + RW(18));
SET64(3, rd16(c, (RW(16) + 6)));
{ int t = RD(3) == RD(0);  if (t) goto L_001701B0; }
wr16(c, (RW(16) + 6), (u16)RW(0));
SET64(3, rd16(c, (RW(16) + 2)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_001701B0; }
L_00170150:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(21, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(21) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x170174); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(21) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x170184); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00170198; }
SET32(3, RW(0) + 1);
wr16(c, (RW(16) + 6), (u16)RW(3));
L_00170198:;
SET64(3, rd16(c, (RW(16) + 2)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00170150; } }
L_001701B0:;
SET64(3, rd16(c, (RW(17) + 528)));
SET32(20, RW(20) + 1);
SET64(3, RSD(20) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 16); if (t) { POLL(); goto L_0017012C; } }
L_001701C8:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001701F0(Ctx *c) { /* func_001701F0 */
ENTER(0x1701f0);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x520000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + 17488);
SET64(3, rd16(c, (RW(4) + 44)));
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x170224);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00170230(Ctx *c) { /* func_00170230 */
ENTER(0x170230);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x520000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + 17488);
SET64(3, rd16(c, (RW(4) + 44)));
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x170264);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00170270(Ctx *c) { /* func_00170270 */
ENTER(0x170270);
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
{ int t = RD(20) != RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_001702B0; }
SET64(20, RD(4) + RD(0));
L_001702B0:;
SET64(3, RD(21) & 0xffff);
if (RSD(3) <= 0) { SET64(3, rd16(c, (RW(4) + 44))); goto L_001703B0; }
SET64(1, RSD(3) < (s64)99);
{ int t = RD(1) == RD(0);  if (t) goto L_001703AC; }
SET64(4, (s64)(s32)0x490000);
SET64(18, RD(0) + RD(0));
SET32(4, RW(4) + 18032);
L_001702D4:;
SET64(2, rd16(c, (RW(4) + 20)));
if (RD(2) == RD(0)) { SET32(18, RW(18) + 1); goto L_00170308; }
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00170304; }
SET64(2, rd16(c, (RW(4) + 22)));
SET64(1, RSD(2) < RSD(3));
{ int t = RD(1) != RD(0);  if (t) goto L_00170304; }
 goto L_00170318;
L_00170304:;
SET32(18, RW(18) + 1);
L_00170308:;
SET64(2, RSD(18) < (s64)104);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 24); if (t) { POLL(); goto L_001702D4; } }
SET32(18, RW(0) + 105);
L_00170318:;
SET64(17, (s64)(s32)0x520000);
SET64(19, RD(0) + RD(0));
SET32(17, RW(17) + 17488);
SET64(16, RD(21) & 0xffff);
L_00170328:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
if (RD(4) == RD(0)) { SET32(19, RW(19) + 1); goto L_00170394; }
SET64(2, (s32)rd32(c, (RW(4) + 152)));
{ int t = RD(18) != RD(2);  if (t) goto L_00170390; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x170350); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00170390; }
SET64(2, (s64)(s32)0x520000);
SET32(3, RW(19) << 2);
SET32(2, RW(2) + 17488);
SET64(5, RD(21) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(6, RD(22) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(7, RD(23) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x170388); SET64(8, RD(20) + RD(0)); rt_call(c, t); }
 goto L_001703A4;
L_00170390:;
SET32(19, RW(19) + 1);
L_00170394:;
SET64(2, RSD(19) < (s64)12);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00170328; } }
SET64(2, RD(0) + RD(0));
L_001703A4:;
SET64(31, rd64(c, (RW(29) + 128))); goto L_001703E8;
L_001703AC:;
SET64(3, rd16(c, (RW(4) + 44)));
L_001703B0:;
SET64(2, (s64)(s32)0x520000);
SET32(2, RW(2) + 17488);
SET64(5, RD(21) + RD(0));
SET64(6, RD(22) + RD(0));
SET64(7, RD(23) + RD(0));
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x1703e4); SET64(8, RD(20) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 128)));
L_001703E8:;
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

void F_00170410(Ctx *c) { /* func_00170410 */
ENTER(0x170410);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x520000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + 17488);
SET64(3, rd16(c, (RW(4) + 44)));
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x170444);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00170450(Ctx *c) { /* func_00170450 */
ENTER(0x170450);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x520000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + 17488);
SET64(3, rd16(c, (RW(4) + 44)));
SET64(3, RD(3) & 0xf);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x170484);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00170490(Ctx *c) { /* func_00170490 */
ENTER(0x170490);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) == RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_001704C8; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1704c8);  rt_call(c, t); }
L_001704C8:;
{ int t = RD(16) == RD(0);  if (t) goto L_001704EC; }
SET64(25, (s32)rd32(c, (RW(16) + 12)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1704e4); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(4, rd16(c, (RW(18) + 44))); goto L_00170508;
L_001704EC:;
SET64(4, (s64)(s32)0x520000);
SET32(4, RW(4) + 14840);
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x170504); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(4, rd16(c, (RW(18) + 44)));
L_00170508:;
SET64(3, (s64)(s32)0x520000);
SET32(3, RW(3) + 17488);
SET64(4, RD(4) & 0xf);
SET32(5, RW(4) << 2);
SET32(3, RW(3) + RW(5));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) == RD(0); SET64(16, RD(18) + RD(0)); if (t) goto L_0017056C; }
SET64(3, (s32)rd32(c, (RW(4) + 152)));
SET32(2, RW(0) + 99);
SET32(5, RW(5) + 128);
{ int t = RD(3) == RD(2); SET64(6, RD(0) + RD(0)); if (t) goto L_00170550; }
SET32(2, RW(0) + 98);
if (RD(3) == RD(2)) { SET32(6, RW(0) + 2); goto L_00170554; }
SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_00170558;
L_00170550:;
SET32(6, RW(0) + 3);
L_00170554:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
L_00170558:;
SET64(5, RD(5) & 0xff);
SET64(7, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x17056c); SET64(8, RD(16) + RD(0)); rt_call(c, t); }
L_0017056C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_00170590(Ctx *c) { /* func_00170590 */
ENTER(0x170590);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 44)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001705E4; }
SET64(4, RD(3) & 0xf);
SET64(3, (s64)(s32)0x520000);
SET32(4, RW(4) << 2);
SET32(3, RW(3) + 17488);
SET32(17, RW(3) + RW(4));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 0), RW(0)); goto L_001705E0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1705dc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 0), RW(0));
L_001705E0:;
wr16(c, (RW(16) + 44), (u16)RW(0));
L_001705E4:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
if (RD(3) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_0017064C; }
SET32(4, RW(3) + 8);
SET64(3, (s32)rd32(c, (RW(3) + 8)));
if (RD(3) != RD(16)) { SET32(4, RW(3) + 4); goto L_00170614; }
SET64(3, (s32)rd32(c, (RW(16) + 4)));
if (RD(3) != RD(0)) { wr32(c, (RW(4) + 0), RW(3)); goto L_00170648; }
wr32(c, (RW(4) + 0), RW(0)); goto L_00170648;
L_00170614:;
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(16);  if (t) goto L_00170640; }
L_00170620:;
SET32(4, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(16);  if (t) { POLL(); goto L_00170620; } }
L_00170640:;
SET64(3, (s32)rd32(c, (RW(16) + 4)));
wr32(c, (RW(4) + 0), RW(3));
L_00170648:;
wr32(c, (RW(16) + 4), RW(0));
L_0017064C:;
wr32(c, (RW(16) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00170670(Ctx *c) { /* func_00170670 */
ENTER(0x170670);
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
SET64(31, 0x1706b4); SET64(7, RD(8) + RD(0)); F_00170820(c);
wr16(c, (RW(16) + 44), (u16)RW(2));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001706D0(Ctx *c) { /* func_001706D0 */
ENTER(0x1706d0);
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
SET64(4, (s64)(s32)0x490000);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(4, RW(4) + 18032);
SET64(3, RD(21) & 0xffff);
L_00170718:;
SET64(2, rd16(c, (RW(4) + 20)));
if (RD(2) == RD(0)) { SET32(18, RW(18) + 1); goto L_0017074C; }
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00170748; }
SET64(2, rd16(c, (RW(4) + 22)));
SET64(1, RSD(2) < RSD(3));
{ int t = RD(1) != RD(0);  if (t) goto L_00170748; }
 goto L_0017075C;
L_00170748:;
SET32(18, RW(18) + 1);
L_0017074C:;
SET64(2, RSD(18) < (s64)104);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 24); if (t) { POLL(); goto L_00170718; } }
SET32(18, RW(0) + 105);
L_0017075C:;
SET64(17, (s64)(s32)0x520000);
SET64(19, RD(0) + RD(0));
SET32(17, RW(17) + 17488);
SET64(16, RD(21) & 0xffff);
L_0017076C:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
if (RD(4) == RD(0)) { SET32(19, RW(19) + 1); goto L_001707D8; }
SET64(2, (s32)rd32(c, (RW(4) + 152)));
{ int t = RD(18) != RD(2);  if (t) goto L_001707D4; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x170794); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001707D4; }
SET64(2, (s64)(s32)0x520000);
SET32(3, RW(19) << 2);
SET32(2, RW(2) + 17488);
SET64(5, RD(21) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(6, RD(20) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(7, RD(22) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x1707cc); SET64(8, RD(23) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 128))); goto L_001707EC;
L_001707D4:;
SET32(19, RW(19) + 1);
L_001707D8:;
SET64(2, RSD(19) < (s64)12);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_0017076C; } }
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 128)));
L_001707EC:;
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

void F_00170820(Ctx *c) { /* func_00170820 */
ENTER(0x170820);
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
SET64(3, (s64)(s32)0x520000);
SET32(3, RW(3) + 17488);
SET64(2, RD(16) & 0xffff);
L_00170864:;
SET32(2, RW(2) << 2);
SET32(2, RW(3) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_00170890; }
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
SET64(2, RSD(16) < (s64)12);
if (RD(2) != RD(0)) { SET64(2, RD(16) & 0xffff); { POLL(); goto L_00170864; } }
L_00170890:;
SET64(19, RD(16) & 0xffff);
SET64(2, RSD(19) < (s64)12);
if (RD(2) != RD(0)) { SET32(4, RW(0) + 544); goto L_001708A8; }
SET64(2, RD(0) + RD(0)); goto L_001709A8;
L_001708A8:;
SET64(31, 0x1708b0);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_00170948; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x1708c4); SET32(5, RW(0) + 1536); F_0013A040(c);
SET64(31, 0x1708cc); SET32(4, RW(20) + 60); F_00142440(c);
SET64(31, 0x1708d4); SET32(4, RW(20) + 104); F_00170CD0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -22480);
SET32(2, RW(2) + -22472);
wr32(c, (RW(20) + 56), RW(3));
SET32(4, RW(20) + 176);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(20) + 20), RW(2));
SET32(3, RW(3) + -22460);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(20) + 36), RW(3));
SET32(2, RW(2) + -22400);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(20) + 72), RW(2));
SET32(3, RW(3) + -22376);
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
SET64(31, 0x170940); wr32(c, (RW(20) + 164), RW(0)); F_00170B20(c);
wr16(c, (RW(20) + 528), (u16)RW(0));
wr32(c, (RW(20) + 532), RW(0));
L_00170948:;
SET64(2, RD(16) & 0xffff);
SET64(5, RD(18) + RD(0));
SET32(3, RW(2) << 2);
SET64(6, RD(17) + RD(0));
SET64(2, (s64)(s32)0x520000);
SET64(7, RD(21) + RD(0));
SET32(2, RW(2) + 17488);
SET64(8, RD(22) + RD(0));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(2) + 0), RW(20));
SET64(25, (s32)rd32(c, (RW(20) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x170980); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(2, rd16(c, (RW(28) + -30364)));
SET64(3, RD(2) | RD(19));
SET32(2, RW(2) + 16);
wr16(c, (RW(28) + -30364), (u16)RW(2));
SET64(2, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(28) + -30364)));
{ int t = RD(3) != RD(0);  if (t) goto L_001709A8; }
SET32(3, RW(0) + 16);
wr16(c, (RW(28) + -30364), (u16)RW(3));
L_001709A8:;
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

void F_001709D0(Ctx *c) { /* func_001709D0 */
ENTER(0x1709d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00170AA8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -22640);
SET32(2, RW(2) + -22616);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x170a14);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_00170A94; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -10288);
SET32(2, RW(2) + -10264);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x170a44); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 160);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_00170A88; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x170a6c);  rt_call(c, t); }
SET32(2, RW(17) + 160);
{ int t = RD(2) == RD(0);  if (t) goto L_00170A84; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30016);
wr32(c, (RW(17) + 172), RW(2));
L_00170A84:;
SET64(4, RD(17) + RD(0));
L_00170A88:;
SET64(31, 0x170a90); SET64(5, RD(0) + RD(0)); F_002409D0(c);
SET64(2, RD(16) << 48);
L_00170A94:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00170AAC; }
SET64(31, 0x170aa8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_00170AA8:;
SET64(2, RD(17) + RD(0));
L_00170AAC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00170AC0(Ctx *c) { /* func_00170AC0 */
ENTER(0x170ac0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00170B04; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22664);
SET64(31, 0x170aec); wr32(c, (RW(17) + 28), RW(2)); F_001F14C0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00170B08; }
SET64(31, 0x170b04); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_00170B04:;
SET64(2, RD(17) + RD(0));
L_00170B08:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00170B20(Ctx *c) { /* func_00170B20 */
ENTER(0x170b20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x170b34); SET64(16, RD(4) + RD(0)); F_00240AE0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30016);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 172), RW(2));
SET32(5, RW(5) + -29984);
wr32(c, (RW(16) + 160), RW(0));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 164), RW(0));
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 168), RW(0));
SET32(3, RW(3) + -10288);
wr32(c, (RW(16) + 172), RW(5));
SET32(2, RW(2) + -10264);
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
L_00170BB0:;
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
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 32); if (t) { POLL(); goto L_00170BB0; } }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22640);
SET32(3, RW(3) + -22616);
wr32(c, (RW(16) + 144), RW(2));
wr32(c, (RW(16) + 172), RW(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_00170C10(Ctx *c) { /* func_00170C10 */
ENTER(0x170c10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00170CB8; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -10288);
SET32(2, RW(2) + -10264);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x170c54);  rt_call(c, t); }
SET32(4, RW(17) + 160);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_00170C98; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x170c7c);  rt_call(c, t); }
SET32(2, RW(17) + 160);
{ int t = RD(2) == RD(0);  if (t) goto L_00170C94; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30016);
wr32(c, (RW(17) + 172), RW(2));
L_00170C94:;
SET64(4, RD(17) + RD(0));
L_00170C98:;
SET64(31, 0x170ca0); SET64(5, RD(0) + RD(0)); F_002409D0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00170CBC; }
SET64(31, 0x170cb8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_00170CB8:;
SET64(2, RD(17) + RD(0));
L_00170CBC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00170CD0(Ctx *c) { /* func_00170CD0 */
ENTER(0x170cd0);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22664);
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

void F_00170D00(Ctx *c) { /* func_00170D00 */
ENTER(0x170d00);
SET64(4, (s64)(s32)0x520000);
wr32(c, (RW(28) + -30368), RW(0));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 17488);
L_00170D10:;
wr32(c, (RW(4) + 0), RW(0));
SET32(5, RW(5) + 6);
wr32(c, (RW(4) + 4), RW(0));
SET64(3, RSD(5) < (s64)12);
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 24); if (t) { POLL(); goto L_00170D10; } }
SET32(3, RW(0) + 16);
wr32(c, (RW(28) + -30376), RW(0));
wr16(c, (RW(28) + -30364), (u16)RW(3));
wr32(c, (RW(28) + -30372), RW(0)); return;
}

void F_00170D50(Ctx *c) { /* func_00170D50 */
ENTER(0x170d50);
SET64(2, RD(0) + RD(0)); return;
}

void F_00170D60(Ctx *c) { /* func_00170D60 */
ENTER(0x170d60);
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
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00170E08; }
SET64(4, rd16(c, (RW(21) + 4)));
L_00170DA4:;
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
{ int t = RD(17) == RD(0);  if (t) goto L_00170E08; }
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x170de8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00170E08; }
SET64(3, rd16(c, (RW(21) + 2)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(3));
if (RD(2) != RD(0)) { SET64(4, rd16(c, (RW(21) + 4))); { POLL(); goto L_00170DA4; } }
L_00170E08:;
SET64(2, rd16(c, (RW(21) + 2)));
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00170E20; }
SET64(2, RD(0) + RD(0)); goto L_00170E50;
L_00170E20:;
if (RD(17) == RD(0)) { SET32(3, RW(0) + 1); goto L_00170E48; }
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(5, RD(20) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x170e44); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
L_00170E48:;
SET64(2, RD(17) + RD(0));
wr16(c, (RW(21) + 6), (u16)RW(3));
L_00170E50:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_00170E80(Ctx *c) { /* func_00170E80 */
ENTER(0x170e80);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
{ int t = RD(19) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_00170F10; }
SET64(2, (s64)(s32)0x4d0000);
SET64(17, RD(0) + RD(0));
SET32(2, RW(2) + -22680);
wr32(c, (RW(19) + 12), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 4)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00170EF0; }
L_00170EC0:;
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x170ed8); SET32(5, RW(0) + -1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 4)));
SET32(16, RW(16) + 1);
SET64(3, (s32)rd32(c, (RW(19) + 8)));
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + RW(3)); if (t) { POLL(); goto L_00170EC0; } }
L_00170EF0:;
SET64(31, 0x170ef8); SET64(4, (s32)rd32(c, (RW(19) + 0))); F_001004B0(c);
SET64(2, RD(18) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(19) + 0), RW(0)); if (t) goto L_00170F10; }
SET64(31, 0x170f10); SET64(4, RD(19) + RD(0)); F_001004B0(c);
L_00170F10:;
SET64(2, RD(19) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00170F30(Ctx *c) { /* func_00170F30 */
ENTER(0x170f30);
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
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00171040; }
SET64(17, RD(5) & 0xffff);
SET64(18, RD(0) + RD(0));
L_00170F68:;
SET64(3, (s32)rd32(c, (RW(21) + 532)));
SET32(16, RW(3) + RW(18));
SET64(3, rd16(c, (RW(16) + 0)));
if (RD(17) != RD(3)) { SET64(3, rd16(c, (RW(21) + 528))); goto L_0017102C; }
SET64(3, rd16(c, (RW(16) + 2)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00170FD8; }
L_00170F88:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x170fac);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00170FC0; }
SET64(3, RD(0) + RD(0)); goto L_00170FE0;
L_00170FC0:;
SET64(3, rd16(c, (RW(16) + 2)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00170F88; } }
L_00170FD8:;
SET64(3, RD(0) + (s64)1);
L_00170FE0:;
{ int t = RD(3) == RD(0);  if (t) goto L_00171028; }
SET64(3, (s32)rd32(c, (RW(21) + 532)));
SET32(4, RW(20) << 4);
SET32(16, RW(3) + RW(4));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_00171014; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x171010); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
L_00171014:;
SET32(3, RW(0) + 711);
wr16(c, (RW(16) + 2), (u16)RW(0));
wr16(c, (RW(16) + 4), (u16)RW(0));
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_00171040;
L_00171028:;
SET64(3, rd16(c, (RW(21) + 528)));
L_0017102C:;
SET32(20, RW(20) + 1);
SET64(3, RSD(20) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 16); if (t) { POLL(); goto L_00170F68; } }
L_00171040:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_00171070(Ctx *c) { /* func_00171070 */
ENTER(0x171070);
SET32(29, RW(29) + -112);
SET64(3, RD(6) & 0xffff);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
{ int t = RSD(3) <= 0; wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_00171298; }
SET64(17, RD(5) & 0xffff);
if (RD(17) == RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_0017129C; }
SET32(3, RW(17) + -46);
SET64(1, RD(3) < (u64)(s64)2);
if (RD(1) == RD(0)) { SET64(7, rd16(c, (RW(20) + 528))); goto L_001710C0; }
 goto L_00171298;
SET64(7, rd16(c, (RW(20) + 528)));
L_001710C0:;
{ int t = RSD(7) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00171298; }
SET64(18, (s32)rd32(c, (RW(20) + 532)));
SET32(4, RW(0) + 711);
L_001710D0:;
SET64(3, rd16(c, (RW(18) + 0)));
{ int t = RD(17) == RD(3);  if (t) goto L_00171298; }
if (RD(3) != RD(4)) { SET32(8, RW(8) + 1); goto L_0017128C; }
wr16(c, (RW(18) + 0), (u16)RW(5));
SET64(4, RD(18) + RD(0));
wr16(c, (RW(18) + 2), (u16)RW(6));
SET32(7, RW(29) + 104);
wr16(c, (RW(18) + 4), (u16)RW(0));
wr16(c, (RW(18) + 6), (u16)RW(0));
wr16(c, (RW(29) + 110), (u16)RW(0));
wr32(c, (RW(29) + 104), RW(0));
SET64(6, rd16(c, (RW(18) + 2)));
SET64(31, 0x171110); SET32(8, RW(29) + 110); F_00368B90(c);
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 8))); goto L_00171154; }
SET64(31, 0x171120); SET32(4, RW(0) + 16); F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 8), RW(2)); goto L_00171150; }
SET64(5, rd16(c, (RW(18) + 2)));
SET64(3, (s64)(s32)0x4d0000);
SET64(4, (s32)rd32(c, (RW(29) + 104)));
SET32(3, RW(3) + -22680);
wr32(c, (RW(2) + 12), RW(3));
wr32(c, (RW(2) + 0), RW(4));
wr32(c, (RW(2) + 4), RW(5));
SET64(3, rd16(c, (RW(29) + 110)));
wr32(c, (RW(2) + 8), RW(3));
wr32(c, (RW(18) + 8), RW(2));
L_00171150:;
SET64(3, (s32)rd32(c, (RW(18) + 8)));
L_00171154:;
if (RD(3) != RD(0)) { SET64(4, (s32)rd32(c, (RW(3) + 0))); goto L_00171168; }
SET64(3, RD(0) + RD(0)); goto L_0017117C;
SET64(4, (s32)rd32(c, (RW(3) + 0)));
L_00171168:;
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x171178);  rt_call(c, t); }
SET64(3, RD(2) + RD(0));
L_0017117C:;
SET64(3, RD(3) & 0xff);
if (RD(3) != RD(0)) { SET64(3, rd16(c, (RW(18) + 2))); goto L_00171238; }
SET64(3, rd16(c, (RW(18) + 2)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00171280; }
SET64(2, (s32)rd32(c, (RW(18) + 8)));
L_00171198:;
SET64(16, RD(19) & 0xffff);
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(16));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x1711bc); SET32(5, RW(20) + 104); rt_call(c, t); }
SET64(3, rd16(c, (RW(20) + 156)));
{ int t = RD(3) == RD(0);  if (t) goto L_00171218; }
SET32(2, RW(0) + 15);
{ int t = RD(17) == RD(2);  if (t) goto L_001711E0; }
SET64(2, RD(0) + RD(0)); goto L_001711E8;
L_001711E0:;
SET32(2, RW(0) + 1);
L_001711E8:;
SET64(6, (s32)rd32(c, (RW(18) + 8)));
SET32(3, RW(2) << 6);
SET64(2, (s32)rd32(c, (RW(20) + 164)));
SET64(4, (s32)rd32(c, (RW(6) + 8)));
SET32(5, RW(2) + RW(3));
mul_s(c, 0, 3, RSW(4), RSW(16));
SET64(2, (s32)rd32(c, (RW(6) + 0)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x171218);  rt_call(c, t); }
L_00171218:;
SET64(3, rd16(c, (RW(18) + 2)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 8))); { POLL(); goto L_00171198; } }
 goto L_00171280;
SET64(3, rd16(c, (RW(18) + 2)));
L_00171238:;
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00171280; }
SET64(2, (s32)rd32(c, (RW(18) + 8)));
L_00171244:;
SET64(4, RD(16) & 0xffff);
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(4));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x171268); SET64(5, RD(20) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(18) + 2)));
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < RSD(3));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 8))); { POLL(); goto L_00171244; } }
L_00171280:;
 goto L_00171298;
SET32(8, RW(8) + 1);
L_0017128C:;
SET64(3, RSD(8) < RSD(7));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 16); if (t) { POLL(); goto L_001710D0; } }
L_00171298:;
SET64(31, rd64(c, (RW(29) + 80)));
L_0017129C:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001712C0(Ctx *c) { /* func_001712C0 */
ENTER(0x1712c0);
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
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00171360; }
SET64(17, RD(0) + RD(0));
L_001712F8:;
SET64(3, (s32)rd32(c, (RW(21) + 532)));
SET32(16, RW(3) + RW(17));
SET64(3, rd16(c, (RW(16) + 2)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00171348; }
L_00171310:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(18));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x171334); SET64(5, RD(20) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 2)));
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00171310; } }
L_00171348:;
SET64(3, rd16(c, (RW(21) + 528)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 16); if (t) { POLL(); goto L_001712F8; } }
L_00171360:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_00171390(Ctx *c) { /* func_00171390 */
ENTER(0x171390);
SET64(6, rd16(c, (RW(4) + 528)));
{ int t = RSD(6) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_001713C8; }
SET64(4, (s32)rd32(c, (RW(4) + 532)));
SET64(3, RD(5) & 0xffff);
L_001713A4:;
SET64(2, rd16(c, (RW(4) + 0)));
if (RD(3) != RD(2)) { SET32(7, RW(7) + 1); goto L_001713B8; }
SET32(2, RW(0) + 1); goto L_001713CC;
L_001713B8:;
SET64(2, RSD(7) < RSD(6));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 16); if (t) { POLL(); goto L_001713A4; } }
L_001713C8:;
SET64(2, RD(0) + RD(0));
L_001713CC:;
 return;
}

void F_001713E0(Ctx *c) { /* func_001713E0 */
ENTER(0x1713e0);
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
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00171490; }
SET64(17, RD(5) & 0xffff);
SET64(18, RD(0) + RD(0));
L_00171418:;
SET64(3, (s32)rd32(c, (RW(21) + 532)));
SET32(16, RW(3) + RW(18));
SET64(3, rd16(c, (RW(16) + 0)));
{ int t = RD(17) != RD(3);  if (t) goto L_00171478; }
SET64(3, rd16(c, (RW(16) + 2)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00171470; }
L_00171438:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(19));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x17145c);  rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 2)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00171438; } }
L_00171470:;
wr16(c, (RW(16) + 6), (u16)RW(0));
L_00171478:;
SET64(3, rd16(c, (RW(21) + 528)));
SET32(20, RW(20) + 1);
SET64(3, RSD(20) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 16); if (t) { POLL(); goto L_00171418; } }
L_00171490:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001714C0(Ctx *c) { /* func_001714C0 */
ENTER(0x1714c0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 528)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00171558; }
SET64(17, RD(0) + RD(0));
L_001714F0:;
SET64(3, (s32)rd32(c, (RW(20) + 532)));
SET32(16, RW(3) + RW(17));
SET64(3, rd16(c, (RW(16) + 2)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00171540; }
L_00171508:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(18));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x17152c);  rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 2)));
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00171508; } }
L_00171540:;
wr16(c, (RW(16) + 6), (u16)RW(0));
SET64(3, rd16(c, (RW(20) + 528)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 16); if (t) { POLL(); goto L_001714F0; } }
L_00171558:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_00171580(Ctx *c) { /* func_00171580 */
ENTER(0x171580);
SET32(29, RW(29) + -16);
{ int t = RD(8) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00171594; }
SET64(9, RD(5) & 0xffff); goto L_001715A4;
L_00171594:;
{ int t = RD(4) == RD(0); SET64(8, RD(4) + RD(0)); if (t) goto L_001715A0; }
SET32(8, RW(8) + 60);
L_001715A0:;
SET64(9, RD(5) & 0xffff);
L_001715A4:;
if (RD(9) == RD(0)) { SET32(2, RW(4) + 176); goto L_00171614; }
SET32(2, RW(9) + -46);
SET64(1, RD(2) < (u64)(s64)2);
if (RD(1) == RD(0)) { SET64(5, rd16(c, (RW(4) + 528))); goto L_001715C8; }
SET32(2, RW(4) + 176);
 goto L_00171614;
L_001715C8:;
{ int t = RSD(5) <= 0; SET64(10, RD(0) + RD(0)); if (t) goto L_00171610; }
SET64(3, (s32)rd32(c, (RW(4) + 532)));
SET64(4, RD(3) + RD(0));
L_001715D8:;
SET64(2, rd16(c, (RW(4) + 0)));
if (RD(9) != RD(2)) { SET32(10, RW(10) + 1); goto L_00171600; }
SET32(2, RW(10) << 4);
SET64(5, RD(6) + RD(0));
SET32(4, RW(3) + RW(2));
SET64(31, 0x1715f8); SET64(6, RD(8) + RD(0)); F_00170D60(c);
 goto L_00171614;
L_00171600:;
SET64(2, RSD(10) < RSD(5));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 16); if (t) { POLL(); goto L_001715D8; } }
L_00171610:;
SET64(2, RD(0) + RD(0));
L_00171614:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00171620(Ctx *c) { /* func_00171620 */
ENTER(0x171620);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd16(c, (RW(4) + 528)));
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_001716E0; }
SET64(17, RD(0) + RD(0));
L_00171650:;
SET64(2, (s32)rd32(c, (RW(20) + 532)));
SET32(16, RW(2) + RW(17));
SET64(2, rd16(c, (RW(16) + 2)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001716B8; }
L_00171668:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(18));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x17168c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001716A0; }
SET64(2, RD(0) + RD(0)); goto L_001716C0;
L_001716A0:;
SET64(2, rd16(c, (RW(16) + 2)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00171668; } }
L_001716B8:;
SET64(2, RD(0) + (s64)1);
L_001716C0:;
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(20) + 528))); goto L_001716D0; }
SET64(2, RD(0) + RD(0)); goto L_001716E4;
L_001716D0:;
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 16); if (t) { POLL(); goto L_00171650; } }
L_001716E0:;
SET32(2, RW(0) + 1);
L_001716E4:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_00171710(Ctx *c) { /* func_00171710 */
ENTER(0x171710);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(28) + -30048)));
SET64(31, 0x171738); SET64(18, RD(4) + RD(0)); F_002A44B0(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 164))); goto L_00171748; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(16) + 164)));
L_00171748:;
SET64(31, 0x171750); SET64(5, RD(2) + RD(0)); F_002AADE0(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
wr8(c, (RW(29) + 108), (u8)RW(2));
SET64(2, rd8(c, (RW(29) + 108)));
if (RD(2) != RD(0)) { SET64(4, RD(18) + RD(0)); goto L_0017178C; }
SET64(31, 0x171770);  F_002A44B0(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -30048))); goto L_00171780; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(28) + -30048)));
L_00171780:;
SET64(31, 0x171788); SET64(5, RD(2) + RD(0)); F_002A8FB0(c);
SET64(4, RD(18) + RD(0));
L_0017178C:;
SET64(31, 0x171794);  F_00139AB0(c);
SET64(2, rd8(c, (RW(18) + 148)));
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 144), RW(0)); goto L_001717C0; }
SET64(4, (s32)rd32(c, (RW(18) + 144)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 144), RW(0)); goto L_001717C0; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1717bc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 144), RW(0));
L_001717C0:;
wr8(c, (RW(18) + 148), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 164)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 532))); goto L_00171880; }
SET64(5, (s64)(s32)0x150000);
SET64(31, 0x1717dc); SET32(5, RW(5) + -1840); F_001022C0(c);
wr32(c, (RW(18) + 164), RW(0));
SET64(2, rd16(c, (RW(18) + 156)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00171870; }
SET64(16, RD(0) + RD(0));
L_001717F0:;
SET64(31, 0x1717f8);  F_00139590(c);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_00171838; }
SET64(31, 0x17180c);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(18) + 160)));
SET32(20, RW(2) + RW(16));
SET64(19, (s32)rd32(c, (RW(20) + 0)));
SET64(31, 0x171824); SET32(5, RW(0) + 3); F_0022AC70(c);
{ int t = RD(19) != RD(2);  if (t) goto L_00171838; }
wr32(c, (RW(20) + 0), RW(0)); goto L_00171858;
L_00171838:;
SET64(2, (s32)rd32(c, (RW(18) + 160)));
SET32(2, RW(2) + RW(16));
SET64(31, 0x171848); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_001004B0(c);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 0), RW(0));
L_00171858:;
SET64(2, rd16(c, (RW(18) + 156)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001717F0; } }
L_00171870:;
SET64(31, 0x171878); SET64(4, (s32)rd32(c, (RW(18) + 160))); F_001004B0(c);
wr32(c, (RW(18) + 160), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 532)));
L_00171880:;
if (RD(4) == RD(0)) { SET32(4, RW(18) + 104); goto L_0017189C; }
SET64(5, (s64)(s32)0x170000);
SET64(31, 0x171894); SET32(5, RW(5) + 6560); F_001022C0(c);
wr32(c, (RW(18) + 532), RW(0));
SET32(4, RW(18) + 104);
L_0017189C:;
SET64(31, 0x1718a4); wr16(c, (RW(18) + 528), (u16)RW(0)); F_001F14C0(c);
SET64(2, (s32)rd32(c, (RW(18) + 60)));
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 64), RW(0)); goto L_0017190C; }
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET32(4, RW(2) + 8);
SET32(2, RW(18) + 60);
if (RD(3) != RD(2)) { SET32(4, RW(3) + 4); goto L_001718D8; }
SET64(2, (s32)rd32(c, (RW(18) + 64)));
if (RD(2) != RD(0)) { wr32(c, (RW(4) + 0), RW(2)); goto L_00171908; }
wr32(c, (RW(4) + 0), RW(0)); goto L_00171908;
L_001718D8:;
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(2);  if (t) goto L_00171900; }
L_001718E4:;
SET32(4, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(2);  if (t) { POLL(); goto L_001718E4; } }
L_00171900:;
SET64(2, (s32)rd32(c, (RW(18) + 64)));
wr32(c, (RW(4) + 0), RW(2));
L_00171908:;
wr32(c, (RW(18) + 64), RW(0));
L_0017190C:;
wr32(c, (RW(18) + 60), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 136)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 136), RW(0)); goto L_00171930; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x17192c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 136), RW(0));
L_00171930:;
SET32(2, RW(0) + 105);
wr32(c, (RW(18) + 152), RW(2));
wr16(c, (RW(18) + 156), (u16)RW(0));
wr8(c, (RW(18) + 149), (u8)RW(0));
SET64(25, (s32)rd32(c, (RW(18) + 320)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x171950); SET32(4, RW(18) + 176); rt_call(c, t); }
SET64(3, rd8(c, (RW(29) + 108)));
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_00171984; }
SET64(31, 0x171964);  F_002A44B0(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -30048))); goto L_00171974; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(28) + -30048)));
L_00171974:;
SET64(5, RD(2) + RD(0));
SET64(31, 0x171980); SET64(6, RD(0) + RD(0)); F_002A9030(c);
SET64(31, rd64(c, (RW(29) + 80)));
L_00171984:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001719A0(Ctx *c) { /* func_001719A0 */
ENTER(0x1719a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00171A0C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22696);
wr32(c, (RW(17) + 12), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 8)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 8), RW(0)); goto L_001719E8; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1719e4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 8), RW(0));
L_001719E8:;
SET64(2, RD(16) << 48);
wr16(c, (RW(17) + 2), (u16)RW(0));
SET64(2, RSD(2) >> 48);
SET32(3, RW(0) + 711);
wr16(c, (RW(17) + 4), (u16)RW(0));
{ int t = RSD(2) <= 0; wr16(c, (RW(17) + 0), (u16)RW(3)); if (t) goto L_00171A0C; }
SET64(31, 0x171a0c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_00171A0C:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00171A30(Ctx *c) { /* func_00171A30 */
ENTER(0x171a30);
 return;
}

void F_00171A40(Ctx *c) { /* func_00171A40 */
ENTER(0x171a40);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 149)));
{ int t = RD(3) != RD(0); SET64(16, RD(8) + RD(0)); if (t) goto L_00171B98; }
SET32(2, RW(0) + 1);
{ int t = RD(7) == RD(0); wr8(c, (RW(19) + 149), (u8)RW(2)); if (t) goto L_00171A80; }
wr32(c, (RW(19) + 144), RW(7));
wr8(c, (RW(19) + 148), (u8)RW(0)); goto L_00171AE4;
L_00171A80:;
SET64(4, (s32)rd32(c, (RW(19) + 152)));
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 18032);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 0)));
if (RD(2) == RD(0)) { wr8(c, (RW(19) + 148), (u8)RW(0)); goto L_00171AE4; }
SET64(31, 0x171ab0); SET32(4, RW(0) + 32); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00171AC0; }
SET64(31, 0x171ac0); SET64(4, RD(17) + RD(0)); F_0014FE60(c);
L_00171AC0:;
SET32(5, RW(0) + 256);
SET64(4, RD(17) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x171adc); wr32(c, (RW(19) + 144), RW(17)); F_0014FCE0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(19) + 148), (u8)RW(2));
L_00171AE4:;
{ int t = RD(19) == RD(0); SET64(17, RD(19) + RD(0)); if (t) goto L_00171AF0; }
SET32(17, RW(19) + 60);
L_00171AF0:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_00171B0C; }
SET64(25, (s32)rd32(c, (RW(17) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x171b0c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_00171B0C:;
{ int t = RD(16) == RD(0);  if (t) goto L_00171B30; }
SET64(25, (s32)rd32(c, (RW(16) + 12)));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x171b28); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(19) + 156))); goto L_00171B4C;
L_00171B30:;
SET64(4, (s64)(s32)0x520000);
SET32(4, RW(4) + 14840);
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x171b48); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(19) + 156)));
L_00171B4C:;
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00171B98; }
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_00171B5C:;
SET64(2, (s32)rd32(c, (RW(19) + 160)));
SET64(8, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(19) + 164)));
SET64(6, (s32)rd32(c, (RW(19) + 144)));
SET32(2, RW(2) + RW(16));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(3) + RW(17));
SET64(31, 0x171b80); SET64(7, RD(4) + RD(0)); F_0014F2D0(c);
SET64(3, rd16(c, (RW(19) + 156)));
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 64);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00171B5C; } }
L_00171B98:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_00171BC0(Ctx *c) { /* func_00171BC0 */
ENTER(0x171bc0);
SET64(2, rd8(c, (RW(4) + 140))); return;
}

void F_00171BD0(Ctx *c) { /* func_00171BD0 */
ENTER(0x171bd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x171bec); SET32(4, RW(0) + 20); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00171BFC; }
SET64(31, 0x171bfc); SET64(4, RD(17) + RD(0)); F_00157630(c);
L_00171BFC:;
wr32(c, (RW(16) + 136), RW(17));
SET64(4, (s64)(s32)0x490000);
SET64(6, (s32)rd32(c, (RW(16) + 152)));
SET32(4, RW(4) + 18036);
SET64(3, rd16(c, (RW(16) + 156)));
SET32(2, RW(0) + 1488);
SET32(5, RW(6) << 1);
SET32(5, RW(5) + RW(6));
SET32(3, RW(3) << 2);
SET32(5, RW(5) << 3);
SET32(4, RW(4) + RW(5));
SET32(3, RW(3) + RW(4));
SET64(5, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(5) == RD(2);  if (t) goto L_00171CB0; }
SET64(4, (s32)rd32(c, (RW(16) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x171c4c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x171c60);  rt_call(c, t); }
SET64(31, 0x171c68); SET64(4, RD(2) + RD(0)); F_00100530(c);
SET64(4, rd16(c, (RW(16) + 156)));
SET64(6, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 160)));
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(3) + 0), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 136)));
SET64(3, rd16(c, (RW(16) + 156)));
SET64(2, (s32)rd32(c, (RW(16) + 160)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x171ca8); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32))); goto L_00171CDC;
L_00171CB0:;
SET64(31, 0x171cb8);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x171cc4); SET32(5, RW(0) + 3); F_0022AC70(c);
SET64(4, rd16(c, (RW(16) + 156)));
SET64(3, (s32)rd32(c, (RW(16) + 160)));
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(3) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 32)));
L_00171CDC:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_00171CF0(Ctx *c) { /* func_00171CF0 */
ENTER(0x171cf0);
SET32(29, RW(29) + -112);
SET32(7, RW(0) + 100);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 0)));
{ int t = RD(5) == RD(7); SET64(20, RD(4) + RD(0)); if (t) goto L_00171EE8; }
SET32(3, RW(0) + 5);
if (RD(5) == RD(3)) { SET32(4, RW(20) + 104); goto L_00171EC8; }
SET32(6, RW(0) + 4);
if (RD(5) == RD(6)) { SET64(5, (s32)rd32(c, (RW(20) + 152))); goto L_00171E80; }
SET32(3, RW(0) + 3);
if (RD(5) == RD(3)) { SET32(4, RW(20) + 104); goto L_00171E64; }
SET32(3, RW(0) + 2);
if (RD(5) == RD(3)) { SET64(5, (s32)rd32(c, (RW(20) + 152))); goto L_00171E28; }
SET32(2, RW(0) + 1);
if (RD(5) == RD(2)) { SET64(4, (s32)rd32(c, (RW(20) + 136))); goto L_00171D84; }
{ int t = RD(5) == RD(0);  if (t) goto L_00171D6C; }
 goto L_00171F9C;
L_00171D6C:;
SET64(31, 0x171d74);  F_00171BD0(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_00171FA4;
L_00171D84:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x171d94);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(31, rd64(c, (RW(29) + 96))); goto L_00171FA8; }
SET64(4, (s32)rd32(c, (RW(20) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x171db0);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(20) + 136)));
if (RD(4) == RD(0)) { wr32(c, (RW(20) + 136), RW(0)); goto L_00171DD0; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x171dcc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(20) + 136), RW(0));
L_00171DD0:;
SET64(3, (s64)(s32)0x490000);
SET64(4, rd16(c, (RW(20) + 156)));
SET32(3, RW(3) + 18032);
SET32(4, RW(4) + 1);
wr16(c, (RW(20) + 156), (u16)RW(4));
SET64(5, (s32)rd32(c, (RW(20) + 152)));
SET64(6, rd16(c, (RW(20) + 156)));
SET32(4, RW(5) << 1);
SET32(4, RW(4) + RW(5));
SET32(4, RW(4) << 3);
SET32(3, RW(3) + RW(4));
SET64(3, rd16(c, (RW(3) + 0)));
SET64(3, RSD(6) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, rd16(c, (RW(20) + 0))); goto L_00171E1C; }
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_00171FA4;
L_00171E1C:;
SET32(3, RW(3) + -1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_00171FA4;
L_00171E28:;
SET64(3, (s64)(s32)0x490000);
SET32(3, RW(3) + 18044);
SET32(4, RW(5) << 1);
SET32(4, RW(4) + RW(5));
SET32(4, RW(4) << 3);
SET32(3, RW(3) + RW(4));
SET64(5, (s32)rd32(c, (RW(3) + 0)));
if (RD(5) == RD(0)) { wr16(c, (RW(20) + 0), (u16)RW(6)); goto L_00171FA4; }
SET64(31, 0x171e54); SET32(4, RW(20) + 104); F_001F13E0(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_00171FA4;
L_00171E64:;
SET64(31, 0x171e6c);  F_001F1230(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00171FA4; }
SET32(3, RW(0) + 4);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_00171FA4;
L_00171E80:;
SET64(3, (s64)(s32)0x490000);
SET32(3, RW(3) + 18048);
SET32(4, RW(5) << 1);
SET32(4, RW(4) + RW(5));
SET32(4, RW(4) << 3);
SET32(3, RW(3) + RW(4));
SET64(5, (s32)rd32(c, (RW(3) + 0)));
if (RD(5) != RD(0)) { SET32(4, RW(20) + 104); goto L_00171EB0; }
wr16(c, (RW(20) + 0), (u16)RW(7));
wr8(c, (RW(20) + 140), (u8)RW(0)); goto L_00171FA4;
L_00171EB0:;
SET64(31, 0x171eb8);  F_001F1300(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_00171FA4;
L_00171EC8:;
SET64(31, 0x171ed0);  F_001F1230(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00171FA4; }
SET32(3, RW(0) + 100);
wr16(c, (RW(20) + 0), (u16)RW(3));
wr8(c, (RW(20) + 140), (u8)RW(0)); goto L_00171FA4;
L_00171EE8:;
SET64(3, rd16(c, (RW(20) + 528)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00171FA4; }
SET64(17, RD(0) + RD(0));
L_00171EF8:;
SET64(3, (s32)rd32(c, (RW(20) + 532)));
SET32(16, RW(3) + RW(17));
SET64(3, rd16(c, (RW(16) + 6)));
{ int t = RD(3) == RD(0);  if (t) goto L_00171F80; }
wr16(c, (RW(16) + 6), (u16)RW(0));
SET64(3, rd16(c, (RW(16) + 2)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00171F80; }
L_00171F20:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(18));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(21, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(21) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x171f44); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(21) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x171f54); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00171F68; }
SET32(3, RW(0) + 1);
wr16(c, (RW(16) + 6), (u16)RW(3));
L_00171F68:;
SET64(3, rd16(c, (RW(16) + 2)));
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00171F20; } }
L_00171F80:;
SET64(3, rd16(c, (RW(20) + 528)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 16); if (t) { POLL(); goto L_00171EF8; } }
 goto L_00171FA4;
L_00171F9C:;
SET64(31, 0x171fa4);  F_00139AB0(c);
L_00171FA4:;
SET64(31, rd64(c, (RW(29) + 96)));
L_00171FA8:;
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_00171FD0(Ctx *c) { /* func_00171FD0 */
ENTER(0x171fd0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(7) + RD(0));
wr32(c, (RW(4) + 152), RW(5));
SET64(16, RD(8) + RD(0));
SET32(4, RW(18) + 104);
SET64(31, 0x172014); SET32(5, RW(0) + 64); F_001F1620(c);
wr16(c, (RW(18) + 528), (u16)RW(19));
SET64(22, RD(0) + RD(0));
SET64(19, rd16(c, (RW(18) + 528)));
SET32(2, RW(19) << 4);
SET64(31, 0x17202c); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_0017205C; }
SET64(5, (s64)(s32)0x170000);
SET64(6, (s64)(s32)0x170000);
SET64(8, RD(19) + RD(0));
SET32(22, RW(0) + 1);
SET64(4, RD(21) + RD(0));
SET32(5, RW(5) + 8928);
SET32(6, RW(6) + 6560);
SET64(31, 0x172058); SET32(7, RW(0) + 16); F_00102580(c);
SET64(21, RD(2) + RD(0));
L_0017205C:;
wr32(c, (RW(18) + 532), RW(21));
SET64(2, (s64)(s32)0x490000);
SET64(4, (s32)rd32(c, (RW(18) + 152)));
SET32(2, RW(2) + 18032);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 3);
SET32(21, RW(2) + RW(3));
SET64(2, rd16(c, (RW(21) + 0)));
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 160), RW(0)); goto L_00172114; }
SET64(2, RD(2) & 0xffff);
SET64(31, 0x172094); SET32(4, RW(2) << 2); F_00100530(c);
SET64(19, rd16(c, (RW(21) + 0)));
SET64(22, RD(0) + RD(0));
wr32(c, (RW(18) + 160), RW(2));
SET32(2, RW(19) << 6);
SET64(31, 0x1720ac); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_001720DC; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(8, RD(19) + RD(0));
SET32(22, RW(0) + 1);
SET64(4, RD(20) + RD(0));
SET32(5, RW(5) + -1728);
SET32(6, RW(6) + -1840);
SET64(31, 0x1720d8); SET32(7, RW(0) + 64); F_00102580(c);
SET64(20, RD(2) + RD(0));
L_001720DC:;
SET64(4, rd16(c, (RW(21) + 0)));
SET64(6, RD(0) + RD(0));
{ int t = RSD(4) <= 0; wr32(c, (RW(18) + 164), RW(20)); if (t) goto L_00172118; }
SET64(5, RD(0) + RD(0));
L_001720F0:;
SET64(3, (s32)rd32(c, (RW(18) + 160)));
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(4));
SET32(3, RW(3) + RW(5));
wr32(c, (RW(3) + 0), RW(0));
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 4); if (t) { POLL(); goto L_001720F0; } }
 goto L_00172118;
L_00172114:;
wr32(c, (RW(18) + 164), RW(0));
L_00172118:;
{ int t = RD(17) == RD(0);  if (t) goto L_00172134; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x17212c); SET64(5, RD(18) + RD(0)); F_0013A470(c);
wr8(c, (RW(18) + 140), (u8)RW(0)); goto L_0017214C;
L_00172134:;
SET64(31, 0x17213c);  F_0013AA20(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x172148); SET64(5, RD(18) + RD(0)); F_0013A4F0(c);
wr8(c, (RW(18) + 140), (u8)RW(0));
L_0017214C:;
SET32(2, RW(0) + 100);
{ int t = RD(16) == RD(0); wr16(c, (RW(18) + 0), (u16)RW(2)); if (t) goto L_0017226C; }
wr16(c, (RW(18) + 156), (u16)RW(0));
SET64(2, (s64)(s32)0x490000);
SET64(5, (s32)rd32(c, (RW(18) + 152)));
SET32(2, RW(2) + 18032);
SET64(3, rd16(c, (RW(18) + 156)));
SET32(4, RW(5) << 1);
SET32(4, RW(4) + RW(5));
SET32(4, RW(4) << 3);
SET32(2, RW(2) + RW(4));
SET64(2, rd16(c, (RW(2) + 0)));
SET64(1, RSD(3) < RSD(2));
{ int t = RD(1) == RD(0);  if (t) goto L_00172228; }
L_0017218C:;
SET64(31, 0x172194); SET64(4, RD(18) + RD(0)); F_00171BD0(c);
L_00172198:;
SET64(4, (s32)rd32(c, (RW(18) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1721ac);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00172198; } }
SET64(4, (s32)rd32(c, (RW(18) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1721cc);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 136)));
{ int t = RD(4) == RD(0);  if (t) goto L_001721E8; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1721e8); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001721E8:;
wr32(c, (RW(18) + 136), RW(0));
SET64(3, rd16(c, (RW(18) + 156)));
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 18032);
SET32(3, RW(3) + 1);
wr16(c, (RW(18) + 156), (u16)RW(3));
SET64(5, (s32)rd32(c, (RW(18) + 152)));
SET64(3, rd16(c, (RW(18) + 156)));
SET32(4, RW(5) << 1);
SET32(4, RW(4) + RW(5));
SET32(4, RW(4) << 3);
SET32(2, RW(2) + RW(4));
SET64(2, rd16(c, (RW(2) + 0)));
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0017218C; } }
L_00172228:;
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 18044);
SET32(2, RW(2) + RW(4));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
if (RD(5) == RD(0)) { SET64(25, (s32)rd32(c, (RW(18) + 320))); goto L_001722A8; }
SET64(31, 0x172248); SET32(4, RW(18) + 104); F_001F13E0(c);
L_00172248:;
SET64(31, 0x172250); SET32(4, RW(18) + 104); F_001F1010(c);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00172248; } }
 goto L_001722A4;
L_0017226C:;
wr16(c, (RW(18) + 156), (u16)RW(0));
SET64(2, (s64)(s32)0x490000);
SET64(4, (s32)rd32(c, (RW(18) + 152)));
SET32(2, RW(2) + 18032);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_001722A4; }
SET32(2, RW(0) + 1);
wr8(c, (RW(18) + 140), (u8)RW(2));
wr16(c, (RW(18) + 0), (u16)RW(0));
L_001722A4:;
SET64(25, (s32)rd32(c, (RW(18) + 320)));
L_001722A8:;
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x1722b4); SET32(4, RW(18) + 176); rt_call(c, t); }
wr8(c, (RW(18) + 149), (u8)RW(0));
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

void F_001722E0(Ctx *c) { /* func_001722E0 */
ENTER(0x1722e0);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22696);
wr32(c, (RW(4) + 12), RW(2));
SET32(2, RW(0) + 711);
wr16(c, (RW(4) + 0), (u16)RW(2));
wr16(c, (RW(4) + 2), (u16)RW(0));
SET64(2, RD(4) + RD(0));
wr16(c, (RW(4) + 4), (u16)RW(0));
wr16(c, (RW(4) + 6), (u16)RW(0));
wr32(c, (RW(4) + 8), RW(0)); return;
}

void F_00172310(Ctx *c) { /* func_00172310 */
ENTER(0x172310);
SET64(3, RD(4) & 0xffff);
SET32(2, RW(0) + 492);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 709); goto L_001723CC; }
SET32(2, RW(0) + 491);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 708); goto L_001723CC; }
SET32(2, RW(0) + 490);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 707); goto L_001723CC; }
SET32(2, RW(0) + 45);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 706); goto L_001723CC; }
SET32(2, RW(0) + 37);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 705); goto L_001723CC; }
SET32(2, RW(0) + 36);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 704); goto L_001723CC; }
SET32(2, RW(0) + 35);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 703); goto L_001723CC; }
SET32(2, RW(0) + 34);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 702); goto L_001723CC; }
SET32(2, RW(0) + 33);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 701); goto L_001723CC; }
SET32(2, RW(0) + 32);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 700); goto L_001723CC; }
SET32(2, RW(0) + 3);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 697); goto L_001723CC; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 696); goto L_001723CC; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 695); goto L_001723CC; }
SET32(2, RW(0) + 16);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 699); goto L_001723CC; }
SET32(2, RW(0) + 13);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 698); goto L_001723CC; }
SET64(2, RD(0) + RD(0));
L_001723CC:;
 return;
}

void F_001723E0(Ctx *c) { /* func_001723E0 */
ENTER(0x1723e0);
SET64(5, (s64)(s32)0x490000);
SET64(4, RD(4) & 0xffff);
SET64(2, RD(0) + RD(0));
SET32(5, RW(5) + 18032);
L_001723F0:;
SET64(3, rd16(c, (RW(5) + 20)));
if (RD(3) == RD(0)) { SET32(2, RW(2) + 1); goto L_00172424; }
SET64(3, RSD(4) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) goto L_00172420; }
SET64(3, rd16(c, (RW(5) + 22)));
SET64(1, RSD(3) < RSD(4));
{ int t = RD(1) != RD(0);  if (t) goto L_00172420; }
 goto L_00172434;
L_00172420:;
SET32(2, RW(2) + 1);
L_00172424:;
SET64(3, RSD(2) < (s64)104);
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 24); if (t) { POLL(); goto L_001723F0; } }
SET32(2, RW(0) + 105);
L_00172434:;
 return;
}

void F_00172440(Ctx *c) { /* func_00172440 */
ENTER(0x172440);
SET32(2, RW(4) << 1);
SET32(3, RW(2) + RW(4));
SET64(2, (s64)(s32)0x490000);
SET32(3, RW(3) << 3);
SET32(2, RW(2) + 18032);
SET32(2, RW(2) + RW(3));
SET64(3, rd16(c, (RW(2) + 20)));
SET64(2, rd16(c, (RW(2) + 22)));
SET32(2, RW(2) - RW(3));
{ int t = RD(3) == RD(0); SET32(2, RW(2) + 1); if (t) goto L_00172474; }
{ int t = RSD(2) > 0;  if (t) goto L_00172478; }
L_00172474:;
SET32(2, RW(0) + 1);
L_00172478:;
 return;
}

