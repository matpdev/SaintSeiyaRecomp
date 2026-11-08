#include "r5900.h"
#include "functab.h"

void F_0019FA50(Ctx *c) { /* func_0019FA50 */
ENTER(0x19fa50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x19fa60); SET64(5, (s32)rd32(c, (RW(4) + 4136))); F_001E7840(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0019FA70(Ctx *c) { /* func_0019FA70 */
ENTER(0x19fa70);
SET32(29, RW(29) + -80);
SET32(2, RW(5) << 2);
wr64(c, (RW(29) + 48), RD(31));
SET32(5, RW(0) + 1);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 904)));
SET64(17, RD(6) + RD(0));
SET64(31, 0x19faa4); SET32(16, RW(2) + 904); F_001584A0(c);
SET32(2, RW(17) << 2);
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 904)));
SET64(31, 0x19fab8); SET32(5, RW(0) + 4); F_00158A30(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
rd128(c, (RW(2) + 112) & ~15u, &c->r[4]);
wr128(c, (RW(3) + 2208) & ~15u, &c->r[4]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0019FAE0(Ctx *c) { /* func_0019FAE0 */
ENTER(0x19fae0);
SET32(29, RW(29) + -48);
SET32(2, RW(5) << 2);
wr64(c, (RW(29) + 32), RD(31));
SET32(2, RW(2) + RW(4));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(5, RD(6) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, (s32)rd32(c, (RW(2) + 904)));
c->f[20].u = c->f[12].u;
SET64(2, (s32)rd32(c, (RW(16) + 4040)));
SET64(31, 0x19fb10); SET32(4, RW(2) + 36); F_003148A0(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(16) + 4108), RW(2)); if (t) goto L_0019FB34; }
SET64(3, rd16(c, (RW(2) + 14)));
if (RD(3) != RD(0)) { SET32(4, RW(16) + 4108); goto L_0019FB38; }
SET64(4, RD(3) | 0x1);
SET32(3, RW(2) + 32);
wr16(c, (RW(2) + 14), (u16)RW(4));
wr32(c, (RW(2) + 28), RW(3));
L_0019FB34:;
SET32(4, RW(16) + 4108);
L_0019FB38:;
SET64(31, 0x19fb40);  F_002BD950(c);
SET64(31, 0x19fb48); SET32(4, RW(16) + 4108); F_002BD950(c);
SET64(3, (s64)(s32)0x4b0000);
SET32(4, RW(0) + 1);
c->f[0].u = rd32(c, (RW(3) + 10144));
c->f[0].f = fpu(F(20) + F(0));
wr32(c, (RW(16) + 4116), c->f[0].u);
wr8(c, (RW(16) + 4132), (u8)RW(4));
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0019FB80(Ctx *c) { /* func_0019FB80 */
ENTER(0x19fb80);
SET32(29, RW(29) + -16);
SET32(3, RW(5) << 2);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(3) + RW(4));
SET32(2, RW(6) << 8);
SET64(4, (s32)rd32(c, (RW(3) + 904)));
SET32(2, RW(2) + RW(7));
SET64(31, 0x19fba4); SET64(5, RD(2) & 0xffff); F_001582B0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0019FBB0(Ctx *c) { /* func_0019FBB0 */
ENTER(0x19fbb0);
SET32(29, RW(29) + -16);
SET32(2, RW(5) << 2);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + RW(4));
SET64(4, (s32)rd32(c, (RW(2) + 904)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 196)));
{ u32 t = RW(25); SET64(31, 0x19fbd4); SET64(5, RD(6) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0019FBE0(Ctx *c) { /* func_0019FBE0 */
ENTER(0x19fbe0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4016)));
{ int t = RD(4) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0019FC10; }
SET64(25, (s32)rd32(c, (RW(4) + 132)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x19fc10);  rt_call(c, t); }
L_0019FC10:;
SET64(2, (s32)rd32(c, (RW(17) + 2260)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 256))); goto L_0019FC34; }
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x19fc30); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 256)));
L_0019FC34:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x19fc44); wr8(c, (RW(2) + 8), (u8)RW(16)); F_00314480(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0019FC60(Ctx *c) { /* func_0019FC60 */
ENTER(0x19fc60);
SET32(29, RW(29) + -64);
SET32(2, RW(5) << 2);
wr64(c, (RW(29) + 48), RD(31));
SET32(2, RW(2) + RW(4));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, (s32)rd32(c, (RW(2) + 904)));
SET64(16, (s32)rd32(c, (RW(17) + 4040)));
SET64(3, (s32)rd32(c, (RW(16) + 100)));
{ int t = RD(3) == RD(0); SET64(18, RD(6) + RD(0)); if (t) goto L_0019FCFC; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET32(4, RW(17) + 4044); goto L_0019FD00; }
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x19fcac); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, RD(2) & 0xff);
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_0019FCFC; }
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x19fccc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 96)));
SET64(31, 0x19fcd8); SET64(4, RD(16) + RD(0)); F_001569F0(c);
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 100), RW(2));
SET64(2, rd8(c, (RW(16) + 104)));
{ int t = RD(2) == RD(0);  if (t) goto L_0019FCFC; }
SET64(6, (s32)rd32(c, (RW(16) + 108)));
SET32(4, RW(16) + 36);
SET64(31, 0x19fcfc); SET64(5, RD(16) + RD(0)); F_00314910(c);
L_0019FCFC:;
SET32(4, RW(17) + 4044);
L_0019FD00:;
SET64(31, 0x19fd08);  F_00155760(c);
SET64(2, (s32)rd32(c, (RW(17) + 4040)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x19fd18); SET32(4, RW(2) + 36); F_003148E0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x19fd24); SET32(4, RW(17) + 4044); F_00155540(c);
c->f[12].u = RW(0);
SET64(4, RD(17) + RD(0));
SET32(5, RW(17) + 4044);
SET64(31, 0x19fd38); SET32(6, RW(0) + 1); F_00151A90(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0019FD50(Ctx *c) { /* func_0019FD50 */
ENTER(0x19fd50);
SET32(29, RW(29) + -32);
SET32(2, RW(5) << 2);
SET32(7, RW(2) + RW(4));
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s64)(s32)0x40490000);
SET64(4, (s32)rd32(c, (RW(7) + 904)));
SET64(3, RD(2) | 0xfdb);
rd128(c, (RW(6) + 0) & ~15u, &c->r[5]);
c->f[0].u = RW(3);
SET64(2, (s64)(s32)0x43340000);
c->f[1].f = fpu(F(0) * F(12));
SET64(3, (s32)rd32(c, (RW(4) + 912)));
wr128(c, (RW(3) + 48) & ~15u, &c->r[5]);
SET64(4, (s32)rd32(c, (RW(7) + 904)));
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(1), F(0));
SET64(31, 0x19fda4); wr32(c, (RW(29) + 28), c->f[0].u); F_0019FDC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x19fdb0); SET32(5, RW(29) + 28); F_0013AE00(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_0019FDC0(Ctx *c) { /* func_0019FDC0 */
ENTER(0x19fdc0);
SET64(2, (s32)rd32(c, (RW(4) + 912))); return;
}

void F_0019FDD0(Ctx *c) { /* func_0019FDD0 */
ENTER(0x19fdd0);
SET32(29, RW(29) + -96);
SET32(2, RW(5) << 2);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(3, RW(2) + RW(20));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(2, RW(0) + 2);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(16, RW(3) + 904);
SET64(3, (s32)rd32(c, (RW(3) + 904)));
SET64(3, (s32)rd32(c, (RW(3) + 4032)));
{ int t = RD(3) == RD(2); SET64(19, RD(7) + RD(0)); if (t) goto L_0019FE18; }
SET64(2, RD(0) + RD(0)); goto L_0019FF3C;
L_0019FE18:;
SET64(31, 0x19fe20);  F_0019FD50(c);
SET64(18, (s32)rd32(c, (RW(16) + 0)));
SET64(17, (s32)rd32(c, (RW(18) + 4040)));
SET64(3, (s32)rd32(c, (RW(17) + 100)));
if (RD(3) == RD(0)) { SET32(4, RW(18) + 4044); goto L_0019FEA4; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2);  if (t) goto L_0019FEA0; }
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x19fe50); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, RD(2) & 0xff);
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_0019FEA0; }
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x19fe70); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(17) + 96)));
SET64(31, 0x19fe7c); SET64(4, RD(17) + RD(0)); F_001569F0(c);
SET32(2, RW(0) + 2);
wr32(c, (RW(17) + 100), RW(2));
SET64(2, rd8(c, (RW(17) + 104)));
{ int t = RD(2) == RD(0);  if (t) goto L_0019FEA0; }
SET64(6, (s32)rd32(c, (RW(17) + 108)));
SET32(4, RW(17) + 36);
SET64(31, 0x19fea0); SET64(5, RD(17) + RD(0)); F_00314910(c);
L_0019FEA0:;
SET32(4, RW(18) + 4044);
L_0019FEA4:;
SET64(31, 0x19feac);  F_00155760(c);
SET64(2, (s32)rd32(c, (RW(18) + 4040)));
SET64(5, RD(19) + RD(0));
SET64(31, 0x19febc); SET32(4, RW(2) + 36); F_003148E0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x19fec8); SET32(4, RW(18) + 4044); F_00155540(c);
c->f[12].u = RW(0);
SET64(4, RD(18) + RD(0));
SET32(5, RW(18) + 4044);
SET64(31, 0x19fedc); SET32(6, RW(0) + 1); F_00151A90(c);
SET64(2, (s32)rd32(c, (RW(20) + 872)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x19feec); SET32(4, RW(2) + 36); F_00314900(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, (s32)rd32(c, (RW(3) + 1024)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(20) + 860))); goto L_0019FF08; }
SET64(31, 0x19ff04); SET64(5, RD(2) + RD(0)); F_002B7C20(c);
SET64(2, (s32)rd32(c, (RW(20) + 860)));
L_0019FF08:;
SET64(5, (s32)rd32(c, (RW(2) + 1424)));
SET64(31, 0x19ff14); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_00314500(c);
SET64(5, (s32)rd32(c, (RW(20) + 860)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_0019FF28; }
SET32(5, RW(5) + 928);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_0019FF28:;
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x19ff38);  rt_call(c, t); }
SET32(2, RW(0) + 1);
L_0019FF3C:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_0019FF60(Ctx *c) { /* func_0019FF60 */
ENTER(0x19ff60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 4136), RW(5));
SET64(31, 0x19ff78); SET64(16, RD(4) + RD(0)); F_001E78C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x19ff84); SET32(5, RW(0) + 1); F_00314480(c);
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4032), RW(2));
c->f[12].u = RW(0);
SET64(25, (s32)rd32(c, (RW(16) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 240)));
{ u32 t = RW(25); SET64(31, 0x19ffa0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

static void B_0019FFB0(Ctx *c, u32 entry) { /* func_0019FFB0 */
ENTER(entry);
switch (entry) { case 0x1a0000: goto L_001A0000; case 0x1a000c: goto L_001A000C; case 0x1a0014: goto L_001A0014; case 0x1a0018: goto L_001A0018; case 0x1a001c: goto L_001A001C; case 0x1a0020: goto L_001A0020; case 0x1a0064: goto L_001A0064; }
SET32(29, RW(29) + -320);
SET64(5, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 48), RD(31));
SET64(2, (s64)(s32)0x3e4c0000);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(2, RD(2) | 0xcccd);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 288), RW(2));
wr32(c, (RW(29) + 292), RW(2));
wr32(c, (RW(29) + 296), RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 860)));
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 116), RW(0));
rd128(c, (RW(2) + 800) & ~15u, &c->r[3]);
SET32(4, RW(29) + 272);
wr32(c, (RW(29) + 120), RW(0));
wr32(c, (RW(29) + 124), RW(5));
rd128(c, (RW(2) + 816) & ~15u, &c->r[2]);
L_001A0000:;
wr128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 128), RW(0));
c->f[0].u = rd32(c, (RW(29) + 112));
L_001A000C:;
wr32(c, (RW(29) + 132), RW(0));
c->f[2].u = rd32(c, (RW(29) + 116));
L_001A0014:;
wr32(c, (RW(29) + 136), RW(0));
L_001A0018:;
wr32(c, (RW(29) + 140), RW(5));
L_001A001C:;
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
L_001A0020:;
c->f[1].u = rd32(c, (RW(29) + 128));
wr32(c, (RW(29) + 156), RW(5));
c->f[3].u = rd32(c, (RW(29) + 132));
wr32(c, (RW(29) + 284), RW(5));
wr32(c, (RW(29) + 272), RW(0));
c->f[4].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 276), RW(0));
wr32(c, (RW(29) + 280), RW(0));
wr32(c, (RW(29) + 300), RW(5));
c->f[2].f = fpu(F(3) - F(2));
c->f[1].u = rd32(c, (RW(29) + 136));
c->f[0].u = rd32(c, (RW(29) + 120));
wr32(c, (RW(29) + 144), c->f[4].u);
wr32(c, (RW(29) + 148), c->f[2].u);
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 152), c->f[0].u);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
L_001A0064:;
SET64(31, 0x1a006c); wr128(c, (RW(29) + 272) & ~15u, &c->r[2]); F_002AD410(c);
c->f[2].u = rd32(c, (RW(29) + 288));
SET32(4, RW(29) + 208);
c->f[1].u = rd32(c, (RW(29) + 292));
SET32(5, RW(29) + 80);
c->f[0].u = rd32(c, (RW(29) + 296));
SET32(6, RW(29) + 272);
wr32(c, (RW(29) + 80), c->f[2].u);
wr32(c, (RW(29) + 92), RW(0));
wr32(c, (RW(29) + 84), c->f[1].u);
SET64(31, 0x1a0098); wr32(c, (RW(29) + 88), c->f[0].u); F_002B3040(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(5, RW(29) + 208);
SET32(2, RW(2) + -20880);
wr32(c, (RW(29) + 240), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 860)));
SET64(16, (s32)rd32(c, (RW(2) + 1424)));
SET64(25, (s32)rd32(c, (RW(16) + 64)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1a00c0); SET32(4, RW(16) + 32); rt_call(c, t); }
rd128(c, (RW(29) + 256) & ~15u, &c->r[4]);
SET64(2, (s64)(s32)0x3f330000);
SET64(2, RD(2) | 0x3333);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 108), RW(3));
SET32(6, RW(0) + 1);
wr128(c, (RW(16) + 80) & ~15u, &c->r[4]);
SET32(5, RW(29) + 64);
SET64(7, (s32)rd32(c, (RW(18) + 860)));
SET32(4, RW(29) + 160);
wr32(c, (RW(29) + 96), RW(2));
wr32(c, (RW(29) + 100), RW(2));
wr32(c, (RW(29) + 104), RW(2));
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
SET64(7, (s32)rd32(c, (RW(7) + 1424)));
wr128(c, (RW(29) + 288) & ~15u, &c->r[2]);
SET32(2, RW(7) + 32);
wr32(c, (RW(7) + 0), RW(2));
c->f[2].u = rd32(c, (RW(29) + 288));
wr32(c, (RW(7) + 12), RW(6));
c->f[1].u = rd32(c, (RW(29) + 292));
SET64(2, (s32)rd32(c, (RW(18) + 864)));
c->f[0].u = rd32(c, (RW(29) + 296));
SET64(2, RD(2) | 0x1);
wr32(c, (RW(18) + 864), RW(2));
wr32(c, (RW(29) + 64), c->f[2].u);
wr32(c, (RW(29) + 76), RW(3));
wr32(c, (RW(29) + 68), c->f[1].u);
SET64(31, 0x1a0138); wr32(c, (RW(29) + 72), c->f[0].u); F_002B3100(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(5, RW(29) + 160);
SET32(2, RW(2) + -20816);
wr32(c, (RW(29) + 192), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 860)));
SET64(2, (s32)rd32(c, (RW(2) + 1424)));
SET64(25, (s32)rd32(c, (RW(2) + 336)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1a0160); SET32(4, RW(2) + 304); rt_call(c, t); }
SET64(6, (s32)rd32(c, (RW(18) + 860)));
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(0) + 3);
SET32(2, RW(2) + -20816);
SET32(4, RW(29) + 160);
SET64(5, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(6) + 1424)));
SET32(6, RW(7) + 304);
wr32(c, (RW(7) + 8), RW(6));
wr32(c, (RW(7) + 20), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 864)));
SET64(3, RD(3) | 0x4);
wr32(c, (RW(18) + 864), RW(3));
SET64(31, 0x1a019c); wr32(c, (RW(29) + 192), RW(2)); F_002B30A0(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 208);
SET32(2, RW(2) + -20880);
SET64(5, RD(0) + RD(0));
SET64(31, 0x1a01b4); wr32(c, (RW(29) + 240), RW(2)); F_002B2FE0(c);
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_001A01BC:;
SET64(4, (s32)rd32(c, (RW(16) + 904)));
{ int t = RD(4) == RD(0);  if (t) goto L_001A0228; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 240)));
{ u32 t = RW(25); SET64(31, 0x1a01d8); c->f[12].u = rd32(c, (RW(18) + 84)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 904)));
SET32(3, RW(0) + 5);
SET64(5, (s32)rd32(c, (RW(4) + 4032)));
{ int t = RD(5) != RD(3);  if (t) goto L_001A0210; }
{ int t = RD(4) == RD(0);  if (t) goto L_001A0208; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a0204); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001A0208:;
wr32(c, (RW(16) + 904), RW(0)); goto L_001A0228;
L_001A0210:;
SET64(3, (s32)rd32(c, (RW(18) + 864)));
{ int t = RD(3) == RD(0);  if (t) goto L_001A0228; }
SET64(2, (s32)rd32(c, (RW(18) + 860)));
SET64(31, 0x1a0228); SET64(5, (s32)rd32(c, (RW(2) + 1424))); F_00314500(c);
L_001A0228:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)6);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001A01BC; } }
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_001A0240:;
SET64(3, (s32)rd32(c, (RW(16) + 656)));
SET32(4, RW(0) + -1);
{ int t = RD(3) == RD(4);  if (t) goto L_001A0318; }
SET64(3, (s32)rd32(c, (RW(16) + 648)));
{ int t = RD(3) == RD(4);  if (t) goto L_001A0310; }
{ int t = RSD(3) < 0; SET64(4, (s32)rd32(c, (RW(18) + 624))); if (t) goto L_001A0280; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x1a0278); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_001B8290(c);
SET64(3, RD(2) & 0xff); goto L_001A0288;
L_001A0280:;
SET64(3, RD(0) + RD(0));
L_001A0288:;
{ int t = RD(3) == RD(0);  if (t) goto L_001A0310; }
SET64(3, (s32)rd32(c, (RW(16) + 656)));
SET32(3, RW(3) << 2);
SET32(3, RW(18) + RW(3));
SET64(5, (s32)rd32(c, (RW(3) + 904)));
{ int t = RD(5) == RD(0);  if (t) goto L_001A02D0; }
SET64(4, rd16(c, (RW(5) + 4120)));
SET64(3, rd16(c, (RW(5) + 4122)));
SET64(3, RSD(4) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) goto L_001A02C8; }
SET32(3, RW(0) + -1);
wr32(c, (RW(16) + 656), RW(3)); goto L_001A0318;
L_001A02C8:;
wr8(c, (RW(5) + 4132), (u8)RW(0)); goto L_001A0318;
L_001A02D0:;
SET64(3, (s64)(s32)0x3f000000);
wr32(c, (RW(29) + 316), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 648)));
{ int t = RSD(3) < 0; SET64(4, (s32)rd32(c, (RW(18) + 624))); if (t) goto L_001A0300; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1a02fc); SET32(5, RW(29) + 316); F_001B8300(c);
L_001A0300:;
SET32(3, RW(0) + -1);
wr32(c, (RW(16) + 656), RW(3)); goto L_001A0318;
L_001A0310:;
SET32(3, RW(0) + -1);
wr32(c, (RW(16) + 656), RW(3));
L_001A0318:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)2);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001A0240; } }
wr32(c, (RW(18) + 864), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 320); return;
}
void F_0019FFB0(Ctx *c) { B_0019FFB0(c, 0x19ffb0); }
void F_001A0000(Ctx *c) { B_0019FFB0(c, 0x1a0000); }
void F_001A000C(Ctx *c) { B_0019FFB0(c, 0x1a000c); }
void F_001A0014(Ctx *c) { B_0019FFB0(c, 0x1a0014); }
void F_001A0018(Ctx *c) { B_0019FFB0(c, 0x1a0018); }
void F_001A001C(Ctx *c) { B_0019FFB0(c, 0x1a001c); }
void F_001A0020(Ctx *c) { B_0019FFB0(c, 0x1a0020); }
void F_001A0064(Ctx *c) { B_0019FFB0(c, 0x1a0064); }

void F_001A0350(Ctx *c) { /* func_001A0350 */
ENTER(0x1a0350);
SET32(29, RW(29) + -112);
SET32(2, RW(5) << 2);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(2, RW(2) + RW(19));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(20, RW(2) + 904);
SET64(2, (s32)rd32(c, (RW(2) + 904)));
SET64(18, RD(6) + RD(0));
{ int t = RD(2) == RD(0); SET64(17, RD(7) + RD(0)); if (t) goto L_001A0398; }
SET64(2, RD(0) + RD(0)); goto L_001A053C;
L_001A0398:;
SET64(31, 0x1a03a0); SET32(4, RW(0) + 4288); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001A0448; }
SET32(4, RW(16) + 4144);
SET32(2, RW(16) + 4208);
wr32(c, (RW(16) + 912), RW(4));
SET32(21, RW(0) + 1);
SET64(31, 0x1a03c0); wr32(c, (RW(16) + 256), RW(2)); F_002AC130(c);
SET64(31, 0x1a03c8); SET32(4, RW(16) + 4208); F_00141AA0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1a03d4); SET64(5, RD(0) + RD(0)); F_001E7F50(c);
wr32(c, (RW(16) + 4032), RW(0));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -8512);
wr8(c, (RW(16) + 4036), (u8)RW(0));
wr32(c, (RW(16) + 276), RW(2));
SET64(7, (s64)(s32)0x4e0000);
SET64(6, (s32)rd32(c, (RW(16) + 256)));
SET32(7, RW(7) + -8248);
SET64(5, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(5, RW(5) + -8440);
SET32(3, RW(3) + -8408);
wr32(c, (RW(6) + 16), RW(7));
SET32(2, RW(16) + 4208);
wr32(c, (RW(16) + 432), RW(5));
SET32(4, RW(16) + 4044);
wr32(c, (RW(16) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x1a0428); wr32(c, (RW(3) + 20), RW(2)); F_001559F0(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(16) + 4108);
SET32(2, RW(2) + -26472);
wr32(c, (RW(16) + 4128), RW(2));
SET64(31, 0x1a0440); wr32(c, (RW(16) + 4108), RW(0)); F_002BD950(c);
wr32(c, (RW(16) + 4040), RW(0));
wr32(c, (RW(16) + 4136), RW(0));
L_001A0448:;
SET64(3, (s32)rd32(c, (RW(19) + 140)));
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 1748), RW(3));
{ int t = RD(17) == RD(0); wr8(c, (RW(16) + 1746), (u8)RW(2)); if (t) goto L_001A051C; }
SET64(31, 0x1a0464); SET32(4, RW(0) + 112); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001A04B8; }
SET64(31, 0x1a0474); SET64(4, RD(19) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(19) + 36);
SET32(2, RW(2) + -26960);
wr32(c, (RW(19) + 16), RW(2));
wr32(c, (RW(19) + 20), RW(0));
wr32(c, (RW(19) + 24), RW(0));
wr32(c, (RW(19) + 28), RW(0));
wr16(c, (RW(19) + 32), (u16)RW(0));
SET64(31, 0x1a049c); wr16(c, (RW(19) + 34), (u16)RW(0)); F_00314DC0(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -10992);
wr32(c, (RW(19) + 16), RW(2));
wr32(c, (RW(19) + 96), RW(0));
wr32(c, (RW(19) + 100), RW(0));
wr8(c, (RW(19) + 104), (u8)RW(0));
wr32(c, (RW(19) + 108), RW(0));
L_001A04B8:;
wr32(c, (RW(16) + 4040), RW(19));
SET32(2, RW(0) + 1);
wr8(c, (RW(19) + 104), (u8)RW(2));
SET64(5, RD(17) + RD(0));
wr32(c, (RW(19) + 108), RW(0));
SET64(25, (s32)rd32(c, (RW(19) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1a04dc); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x1a04ec); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(31, 0x1a04f4); SET64(4, RD(2) + RD(0)); F_00100530(c);
wr32(c, (RW(19) + 96), RW(2));
SET64(5, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 16)));
SET64(4, RD(19) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1a0514); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr32(c, (RW(19) + 100), RW(2));
L_001A051C:;
SET64(25, (s32)rd32(c, (RW(16) + 276)));
SET64(5, RD(18) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x1a0534); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
wr32(c, (RW(20) + 0), RW(16));
SET32(2, RW(0) + 1);
L_001A053C:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001A0560(Ctx *c) { /* func_001A0560 */
ENTER(0x1a0560);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x1a057c); wr8(c, (RW(4) + 2489), (u8)RW(2)); F_001E67A0(c);
SET64(31, 0x1a0584); SET32(4, RW(16) + 4108); F_002BD950(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 4032), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001A05A0(Ctx *c) { /* func_001A05A0 */
ENTER(0x1a05a0);
SET32(29, RW(29) + -32);
SET32(2, RW(5) << 2);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + RW(4));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(2) + 872)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1a05c8); SET32(16, RW(2) + 872); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_001A05E8; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a05e4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
L_001A05E8:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001A0600(Ctx *c) { /* func_001A0600 */
ENTER(0x1a0600);
SET32(29, RW(29) + -16);
SET32(2, RW(5) << 2);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + RW(4));
SET64(4, (s32)rd32(c, (RW(2) + 872)));
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_001A0640; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1a062c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001A063C; }
SET64(2, RD(0) + RD(0)); goto L_001A0640;
L_001A063C:;
SET32(2, RW(0) + 1);
L_001A0640:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001A0650(Ctx *c) { /* func_001A0650 */
ENTER(0x1a0650);
SET32(2, RW(5) << 2);
SET32(2, RW(2) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 872)));
SET32(4, RW(6) << 2);
SET64(3, (s32)rd32(c, (RW(2) + 20)));
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(3)); return;
}

void F_001A0680(Ctx *c) { /* func_001A0680 */
ENTER(0x1a0680);
SET32(29, RW(29) + -32);
SET32(2, RW(5) << 2);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + RW(4));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(2) + 872)));
if (RD(16) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001A0728; }
SET64(3, (s32)rd32(c, (RW(16) + 100)));
if (RD(3) != RD(0)) { SET32(2, RW(0) + 2); goto L_001A06B4; }
SET64(2, RD(0) + RD(0)); goto L_001A0728;
L_001A06B4:;
if (RD(3) != RD(2)) { SET64(25, (s32)rd32(c, (RW(16) + 16))); goto L_001A06C4; }
SET64(2, RD(0) + (s64)1); goto L_001A0728;
L_001A06C4:;
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1a06d0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, RD(2) & 0xff);
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(25, (s32)rd32(c, (RW(16) + 16))); goto L_001A06E8; }
SET64(2, RD(0) + RD(0)); goto L_001A0728;
L_001A06E8:;
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1a06f4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 96)));
SET64(31, 0x1a0700); SET64(4, RD(16) + RD(0)); F_001569F0(c);
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 100), RW(2));
SET64(2, rd8(c, (RW(16) + 104)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + (s64)1); goto L_001A0728; }
SET64(6, (s32)rd32(c, (RW(16) + 108)));
SET32(4, RW(16) + 36);
SET64(31, 0x1a0724); SET64(5, RD(16) + RD(0)); F_00314910(c);
SET64(2, RD(0) + (s64)1);
L_001A0728:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001A0740(Ctx *c) { /* func_001A0740 */
ENTER(0x1a0740);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(2, RW(19) << 2);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(2, RW(2) + RW(20));
SET32(16, RW(2) + 872);
SET64(2, (s32)rd32(c, (RW(2) + 872)));
{ int t = RD(2) == RD(0); SET64(18, RD(6) + RD(0)); if (t) goto L_001A0784; }
SET64(2, RD(0) + RD(0)); goto L_001A08BC;
L_001A0784:;
SET64(31, 0x1a078c); SET32(4, RW(0) + 112); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001A07E0; }
SET64(31, 0x1a079c); SET64(4, RD(17) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(17) + 36);
SET32(2, RW(2) + -26960);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 32), (u16)RW(0));
SET64(31, 0x1a07c4); wr16(c, (RW(17) + 34), (u16)RW(0)); F_00314DC0(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -10992);
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 96), RW(0));
wr32(c, (RW(17) + 100), RW(0));
wr8(c, (RW(17) + 104), (u8)RW(0));
wr32(c, (RW(17) + 108), RW(0));
L_001A07E0:;
if (RD(17) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001A08BC; }
if (RD(19) != RD(0)) { wr8(c, (RW(17) + 104), (u8)RW(0)); goto L_001A085C; }
SET64(3, (s32)rd32(c, (RW(20) + 140)));
SET32(2, RW(0) + 1);
SET64(5, RD(18) + RD(0));
wr8(c, (RW(17) + 104), (u8)RW(2));
wr32(c, (RW(17) + 108), RW(3));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1a0814); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x1a0824); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, 0x1a082c); SET64(4, RD(2) + RD(0)); F_00100530(c);
wr32(c, (RW(17) + 96), RW(2));
SET64(5, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(4, RD(17) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1a084c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 100), RW(2));
wr8(c, (RW(20) + 848), (u8)RW(2)); goto L_001A08B4;
L_001A085C:;
SET64(5, RD(18) + RD(0));
wr32(c, (RW(17) + 108), RW(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1a0874); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x1a0884); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, 0x1a088c); SET64(4, RD(2) + RD(0)); F_00100530(c);
wr32(c, (RW(17) + 96), RW(2));
SET64(5, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(4, RD(17) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1a08ac); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 100), RW(2));
L_001A08B4:;
wr32(c, (RW(16) + 0), RW(17));
SET32(2, RW(0) + 1);
L_001A08BC:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001A08E0(Ctx *c) { /* func_001A08E0 */
ENTER(0x1a08e0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(2, RW(20) << 2);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(2, RW(2) + RW(21));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(19, RD(6) + RD(0));
SET32(16, RW(2) + 1360);
SET64(2, (s32)rd32(c, (RW(2) + 1360)));
{ int t = RD(2) == RD(0); SET64(18, RD(7) + RD(0)); if (t) goto L_001A092C; }
SET64(2, RD(0) + RD(0)); goto L_001A09FC;
L_001A092C:;
SET64(31, 0x1a0934); SET32(4, RW(0) + 400); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001A094C; }
SET64(4, RD(17) + RD(0));
SET64(5, RD(21) + RD(0));
SET64(31, 0x1a094c); SET32(6, RW(0) + 1); F_001A9C40(c);
L_001A094C:;
if (RD(17) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001A09FC; }
SET64(5, RD(19) + RD(0));
SET64(31, 0x1a0960); SET64(4, RD(17) + RD(0)); F_001A84A0(c);
SET64(5, rd16(c, (RW(17) + 374)));
SET64(7, RD(18) + RD(0));
SET64(6, rd16(c, (RW(17) + 376)));
SET64(31, 0x1a0974); SET64(4, RD(17) + RD(0)); F_001A97F0(c);
wr32(c, (RW(16) + 0), RW(17));
SET64(5, (s32)rd32(c, (RW(21) + 840)));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET64(2, (s32)rd32(c, (RW(5) + 4)));
SET64(4, (s32)rd32(c, (RW(5) + 16)));
{ int t = RD(3) == RD(2); SET64(6, RD(20) & 0xffff); if (t) goto L_001A09F8; }
SET64(8, (s32)rd32(c, (RW(5) + 8)));
{ int t = RD(3) == RD(0); SET32(7, RW(3) + -1); if (t) goto L_001A09C0; }
L_001A099C:;
SET64(2, rd8(c, (RW(8) + 0)));
if (RD(2) != RD(0)) { SET64(2, RD(7) + RD(0)); goto L_001A09B4; }
SET32(2, RW(0) + 1);
wr8(c, (RW(8) + 0), (u8)RW(2)); goto L_001A09C4;
L_001A09B4:;
SET32(8, RW(8) + 20);
{ int t = RD(2) != RD(0); SET32(7, RW(7) + -1); if (t) { POLL(); goto L_001A099C; } }
L_001A09C0:;
SET64(8, RD(0) + RD(0));
L_001A09C4:;
if (RD(8) == RD(0)) { SET32(2, RW(0) + 1); goto L_001A09FC; }
wr32(c, (RW(8) + 4), RW(4));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(8) + 8), RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(2) + 4), RW(8));
wr32(c, (RW(4) + 8), RW(8));
SET64(2, (s32)rd32(c, (RW(5) + 4)));
SET32(2, RW(2) + 1);
wr32(c, (RW(5) + 4), RW(2));
wr16(c, (RW(8) + 12), (u16)RW(6));
wr32(c, (RW(8) + 16), RW(17));
L_001A09F8:;
SET32(2, RW(0) + 1);
L_001A09FC:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001A0A20(Ctx *c) { /* func_001A0A20 */
ENTER(0x1a0a20);
SET32(29, RW(29) + -128);
SET32(2, RW(5) << 2);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET32(2, RW(2) + RW(21));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(22, RW(2) + 1096);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(20, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(19, RD(7) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 1096)));
SET64(18, RD(8) + RD(0));
{ int t = RD(2) == RD(0); SET64(17, RD(9) + RD(0)); if (t) goto L_001A0A74; }
SET64(2, RD(0) + RD(0)); goto L_001A0B10;
L_001A0A74:;
SET64(31, 0x1a0a7c); SET32(4, RW(0) + 400); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001A0A94; }
SET64(5, RD(21) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x1a0a94); SET32(6, RW(0) + 1); F_001A9C40(c);
L_001A0A94:;
if (RD(16) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001A0B10; }
if (RD(20) != RD(0)) { SET64(4, RD(20) + RD(0)); goto L_001A0AAC; }
SET64(3, RD(0) + RD(0)); goto L_001A0AD4;
L_001A0AAC:;
SET64(31, 0x1a0ab4); SET32(5, RW(0) + 1); F_00321EA0(c);
SET32(3, RW(0) + -1);
{ int t = RD(2) == RD(3); wr32(c, (RW(16) + 396), RW(2)); if (t) goto L_001A0AD0; }
SET32(2, RW(0) + 1);
SET64(3, RD(0) + (s64)1);
wr8(c, (RW(16) + 392), (u8)RW(2)); goto L_001A0AD4;
L_001A0AD0:;
SET64(3, RD(0) + RD(0));
L_001A0AD4:;
{ int t = RD(3) == RD(0);  if (t) goto L_001A0AF4; }
wr16(c, (RW(16) + 370), (u16)RW(19));
SET32(2, RW(0) + 1);
wr16(c, (RW(16) + 372), (u16)RW(18));
wr32(c, (RW(16) + 216), RW(17));
wr32(c, (RW(22) + 0), RW(16)); goto L_001A0B10;
L_001A0AF4:;
{ int t = RD(16) == RD(0);  if (t) goto L_001A0B0C; }
SET64(31, 0x1a0b04); SET64(4, RD(16) + RD(0)); F_001A9A10(c);
SET64(31, 0x1a0b0c); SET64(4, RD(16) + RD(0)); F_001004B0(c);
L_001A0B0C:;
SET64(2, RD(0) + RD(0));
L_001A0B10:;
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

void F_001A0B40(Ctx *c) { /* func_001A0B40 */
ENTER(0x1a0b40);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET32(19, RW(16) << 2);
SET32(2, RW(19) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 1096)));
SET64(31, 0x1a0b74); SET32(18, RW(2) + 1096); F_001A8260(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001A0C54; }
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(2, RD(0) | 0xffff);
SET64(5, rd16(c, (RW(4) + 370)));
SET64(7, (s32)rd32(c, (RW(4) + 216)));
{ int t = RD(5) == RD(2); SET64(6, rd16(c, (RW(4) + 372))); if (t) goto L_001A0BAC; }
if (RD(6) == RD(2)) { SET64(5, rd16(c, (RW(4) + 374))); goto L_001A0BB0; }
SET64(31, 0x1a0ba4);  F_001A97F0(c);
SET32(3, RW(19) + RW(17)); goto L_001A0BBC;
L_001A0BAC:;
SET64(5, rd16(c, (RW(4) + 374)));
L_001A0BB0:;
SET64(31, 0x1a0bb8); SET64(6, rd16(c, (RW(4) + 376))); F_001A97F0(c);
SET32(3, RW(19) + RW(17));
L_001A0BBC:;
SET64(2, (s32)rd32(c, (RW(3) + 1096)));
wr32(c, (RW(3) + 1360), RW(2));
wr32(c, (RW(3) + 1096), RW(0));
SET64(5, (s32)rd32(c, (RW(17) + 840)));
SET64(7, (s32)rd32(c, (RW(3) + 1360)));
SET64(2, (s32)rd32(c, (RW(5) + 4)));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET64(4, (s32)rd32(c, (RW(5) + 16)));
{ int t = RD(3) == RD(2); SET64(6, RD(16) & 0xffff); if (t) goto L_001A0C50; }
SET64(9, (s32)rd32(c, (RW(5) + 8)));
{ int t = RD(3) == RD(0); SET32(8, RW(3) + -1); if (t) goto L_001A0C18; }
L_001A0BF0:;
SET64(2, rd8(c, (RW(9) + 0)));
if (RD(2) != RD(0)) { SET64(2, RD(8) + RD(0)); goto L_001A0C08; }
SET32(2, RW(0) + 1);
wr8(c, (RW(9) + 0), (u8)RW(2)); goto L_001A0C1C;
L_001A0C08:;
SET32(9, RW(9) + 20);
{ int t = RD(2) != RD(0); SET32(8, RW(8) + -1); if (t) { POLL(); goto L_001A0BF0; } }
L_001A0C18:;
SET64(9, RD(0) + RD(0));
L_001A0C1C:;
if (RD(9) == RD(0)) { SET32(2, RW(0) + 1); goto L_001A0C54; }
wr32(c, (RW(9) + 4), RW(4));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(9) + 8), RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(2) + 4), RW(9));
wr32(c, (RW(4) + 8), RW(9));
SET64(2, (s32)rd32(c, (RW(5) + 4)));
SET32(2, RW(2) + 1);
wr32(c, (RW(5) + 4), RW(2));
wr16(c, (RW(9) + 12), (u16)RW(6));
wr32(c, (RW(9) + 16), RW(7));
L_001A0C50:;
SET32(2, RW(0) + 1);
L_001A0C54:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001A0C70(Ctx *c) { /* func_001A0C70 */
ENTER(0x1a0c70);
SET32(2, RW(5) << 2);
SET32(2, RW(2) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 1360))); return;
}

void F_001A0C80(Ctx *c) { /* func_001A0C80 */
ENTER(0x1a0c80);
SET32(2, RW(5) << 2);
SET32(2, RW(2) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 1360)));
SET64(2, RD(0) < RD(2)); return;
}

static void B_001A0CA0(Ctx *c, u32 entry) { /* func_001A0CA0 */
ENTER(entry);
switch (entry) { case 0x1a0ccc: goto L_001A0CCC; case 0x1a0ce8: goto L_001A0CE8; case 0x1a0d04: goto L_001A0D04; case 0x1a0d1c: goto L_001A0D1C; case 0x1a0d34: goto L_001A0D34; }
L_001A0CA0:;
SET32(29, RW(29) + -16);
SET64(1, RD(5) < (u64)(s64)8);
{ int t = RD(1) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_001A0D34; }
SET64(3, (s64)(s32)0x490000);
SET32(2, RW(5) << 2);
SET32(3, RW(3) + 22720);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x1a0ca0: goto L_001A0CA0; case 0x1a0ccc: goto L_001A0CCC; case 0x1a0ce8: goto L_001A0CE8; case 0x1a0d04: goto L_001A0D04; case 0x1a0d1c: goto L_001A0D1C; case 0x1a0d34: goto L_001A0D34; default: rt_jump(c, t); return; } }
L_001A0CCC:;
SET64(2, (s32)rd32(c, (RW(4) + 160)));
SET64(2, (s32)rd32(c, (RW(2) + 28)));
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_001A0D50; }
SET32(2, RW(2) + 64);
 goto L_001A0D4C;
L_001A0CE8:;
SET64(2, (s32)rd32(c, (RW(4) + 160)));
SET64(2, (s32)rd32(c, (RW(2) + 256)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A0D4C; }
SET32(2, RW(2) + 672);
 goto L_001A0D4C;
L_001A0D04:;
SET64(2, (s32)rd32(c, (RW(4) + 856)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A0D4C; }
SET32(2, RW(2) + 672);
 goto L_001A0D4C;
L_001A0D1C:;
SET64(2, (s32)rd32(c, (RW(4) + 852)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A0D4C; }
SET32(2, RW(2) + 672);
 goto L_001A0D4C;
L_001A0D34:;
SET64(31, 0x1a0d3c);  F_00139590(c);
SET64(2, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A0D4C; }
SET32(2, RW(2) + 672);
L_001A0D4C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_001A0D50:;
SET32(29, RW(29) + 16); return;
}
void F_001A0CA0(Ctx *c) { B_001A0CA0(c, 0x1a0ca0); }
void F_001A0CCC(Ctx *c) { B_001A0CA0(c, 0x1a0ccc); }
void F_001A0CE8(Ctx *c) { B_001A0CA0(c, 0x1a0ce8); }
void F_001A0D04(Ctx *c) { B_001A0CA0(c, 0x1a0d04); }
void F_001A0D1C(Ctx *c) { B_001A0CA0(c, 0x1a0d1c); }
void F_001A0D34(Ctx *c) { B_001A0CA0(c, 0x1a0d34); }

void F_001A0D60(Ctx *c) { /* func_001A0D60 */
ENTER(0x1a0d60);
SET64(3, (s32)rd32(c, (RW(4) + 1872)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_001A0D8C; }
SET64(3, rd16(c, (RW(4) + 0)));
SET64(3, RSD(3) < (s64)4);
{ int t = RD(3) != RD(0);  if (t) goto L_001A0D88; }
 goto L_001A0D8C;
L_001A0D88:;
SET64(2, RD(0) + RD(0));
L_001A0D8C:;
 return;
}

void F_001A0DA0(Ctx *c) { /* func_001A0DA0 */
ENTER(0x1a0da0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1a0db0); SET64(4, (s32)rd32(c, (RW(4) + 868))); F_0030CCB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001A0DC0(Ctx *c) { /* func_001A0DC0 */
ENTER(0x1a0dc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1a0dd0); SET64(4, (s32)rd32(c, (RW(4) + 868))); F_0030D110(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001A0DE0(Ctx *c) { /* func_001A0DE0 */
ENTER(0x1a0de0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1a0dfc); SET32(4, RW(0) + 768); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001A0E18; }
SET64(31, 0x1a0e0c); SET32(4, RW(16) + 16); F_00178800(c);
SET32(4, RW(16) + 432);
SET64(31, 0x1a0e18); SET32(5, RW(0) + 1); F_00178760(c);
L_001A0E18:;
SET64(31, 0x1a0e20); wr32(c, (RW(17) + 868), RW(16)); F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(5) == RD(0);  if (t) goto L_001A0E30; }
SET32(5, RW(5) + 672);
L_001A0E30:;
SET64(2, (s64)(s32)0x490000);
SET64(4, (s32)rd32(c, (RW(17) + 868)));
c->f[1].u = rd32(c, (RW(2) + 20536));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
SET64(31, 0x1a0e4c); c->f[12].f = fpu(F(1) - F(0)); F_0030D290(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A0E60(Ctx *c) { /* func_001A0E60 */
ENTER(0x1a0e60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001A0FD0; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -11184);
SET32(2, RW(2) + -11176);
wr32(c, (RW(17) + 56), RW(3));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 20), RW(2));
SET32(3, RW(3) + -11164);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11104);
wr32(c, (RW(17) + 36), RW(3));
SET64(31, 0x1a0eb0); wr32(c, (RW(17) + 72), RW(2)); F_00226380(c);
SET64(31, 0x1a0eb8); SET64(4, (s32)rd32(c, (RW(17) + 196))); F_00100430(c);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 196), RW(0)); if (t) goto L_001A0FB8; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -30064);
SET32(2, RW(2) + -30056);
wr32(c, (RW(17) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(2));
SET32(3, RW(3) + -30044);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(17) + 36), RW(3));
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 72), RW(2)); if (t) goto L_001A0FB8; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -29600);
SET32(2, RW(2) + -29592);
wr32(c, (RW(17) + 56), RW(3));
SET64(4, RD(17) + RD(0));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(2));
SET32(3, RW(3) + -29580);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -29520);
wr32(c, (RW(17) + 36), RW(3));
SET64(31, 0x1a0f2c); wr32(c, (RW(17) + 72), RW(2)); F_00226380(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_001A0FBC; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -29296);
SET32(2, RW(2) + -29288);
wr32(c, (RW(17) + 56), RW(3));
SET64(4, RD(17) + RD(0));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(2));
SET32(3, RW(3) + -29276);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -29216);
wr32(c, (RW(17) + 36), RW(3));
SET64(31, 0x1a0f6c); wr32(c, (RW(17) + 72), RW(2)); F_00228060(c);
{ int t = RD(17) == RD(0);  if (t) goto L_001A0FB8; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -29104);
SET32(2, RW(2) + -29096);
wr32(c, (RW(17) + 56), RW(3));
SET64(4, RD(17) + RD(0));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(2));
SET32(3, RW(3) + -29084);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -29024);
wr32(c, (RW(17) + 36), RW(3));
SET64(31, 0x1a0fac); wr32(c, (RW(17) + 72), RW(2)); F_00228DA0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1a0fb8); SET64(5, RD(0) + RD(0)); F_00228FC0(c);
L_001A0FB8:;
SET64(2, RD(16) << 48);
L_001A0FBC:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001A0FD4; }
SET64(31, 0x1a0fd0); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001A0FD0:;
SET64(2, RD(17) + RD(0));
L_001A0FD4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A0FF0(Ctx *c) { /* func_001A0FF0 */
ENTER(0x1a0ff0);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
wr8(c, (RW(4) + 180), (u8)RW(2));
SET32(2, RW(0) + -1);
SET64(31, 0x1a100c); wr16(c, (RW(4) + 184), (u16)RW(2)); F_002284B0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001A1020(Ctx *c) { /* func_001A1020 */
ENTER(0x1a1020);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 1032)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_001A1048; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x1a1044);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_001A1048:;
SET32(29, RW(29) + 16); return;
}

void F_001A1050(Ctx *c) { /* func_001A1050 */
ENTER(0x1a1050);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 1032)));
{ int t = RD(4) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001A10B0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x1a1084);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 1032))); goto L_001A1094; }
SET64(2, RD(0) + RD(0)); goto L_001A12C4;
L_001A1094:;
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 1032), RW(0)); goto L_001A10B0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a10ac); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 1032), RW(0));
L_001A10B0:;
SET64(3, (s32)rd32(c, (RW(17) + 276)));
SET64(2, RD(16) & 0xffff);
SET32(2, RW(2) << 1);
SET32(4, RW(0) + 200);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 2)));
SET32(2, RW(2) << 1);
wr32(c, (RW(29) + 100), RW(0));
SET32(2, RW(3) + RW(2));
SET64(31, 0x1a10dc); wr32(c, (RW(29) + 96), RW(2)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001A1150; }
SET64(31, 0x1a10ec); SET64(4, RD(16) + RD(0)); F_002265B0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -30064);
SET32(2, RW(2) + -30056);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -30044);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 36), RW(3));
SET32(2, RW(2) + -29984);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 72), RW(2));
SET32(3, RW(3) + -11184);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 56), RW(3));
SET32(2, RW(2) + -11176);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -11164);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11104);
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 72), RW(2));
wr32(c, (RW(16) + 196), RW(0));
L_001A1150:;
wr32(c, (RW(17) + 1032), RW(16));
SET32(6, RW(0) + 2);
SET64(10, (s32)rd32(c, (RW(17) + 140)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 96);
SET32(7, RW(0) + -1);
SET64(8, RD(0) + RD(0));
SET64(31, 0x1a1174); SET64(9, RD(6) + RD(0)); F_00224180(c);
SET64(2, (s64)(s32)0x43a00000);
SET64(3, (s64)(s32)0x42c80000);
wr32(c, (RW(29) + 80), RW(2));
SET64(2, (s64)(s32)0x48920000);
wr32(c, (RW(29) + 84), RW(3));
SET64(2, RD(2) | 0x7c00);
wr32(c, (RW(29) + 88), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 92), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 1032)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x1a11ac); SET32(5, RW(29) + 80); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 1032)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 181), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 1032)));
wr8(c, (RW(2) + 182), (u8)RW(3));
SET64(31, 0x1a11c8); SET64(4, (s32)rd32(c, (RW(17) + 1032))); F_00228570(c);
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 852))); goto L_001A11DC; }
SET64(31, 0x1a11d8); SET64(4, RD(2) + RD(0)); F_0022A4B0(c);
SET64(5, (s32)rd32(c, (RW(17) + 852)));
L_001A11DC:;
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 1032))); goto L_001A11EC; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 1032)));
L_001A11EC:;
SET64(31, 0x1a11f4);  F_002284F0(c);
SET64(16, (s32)rd32(c, (RW(17) + 1032)));
SET64(18, (s32)rd32(c, (RW(17) + 1044)));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x1a120c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 76), RW(3));
wr32(c, (RW(29) + 68), RW(0));
wr32(c, (RW(29) + 72), RW(0));
rd128(c, (RW(2) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x1a1238); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(2) + 0));
c->f[2].u = rd32(c, (RW(29) + 64));
SET64(2, (s64)(s32)0x42400000);
c->f[0].u = RW(2);
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(29) + 64), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x1a1268); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
c->f[2].u = rd32(c, (RW(2) + 4));
SET64(4, RD(18) + RD(0));
c->f[1].u = rd32(c, (RW(29) + 68));
SET32(5, RW(29) + 64);
SET64(2, (s64)(s32)0x42400000);
c->f[0].u = RW(2);
c->f[2].f = fpu(F(2) - F(0));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].f = fpu(F(1) + F(2));
wr32(c, (RW(29) + 68), c->f[1].u);
c->f[0].u = rd32(c, (RW(29) + 72));
c->f[1].u = RW(2);
c->f[0].f = fpu(F(1) + F(0));
SET64(31, 0x1a12ac); wr32(c, (RW(29) + 72), c->f[0].u); F_0014E770(c);
SET64(4, (s32)rd32(c, (RW(17) + 1044)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a12c0);  rt_call(c, t); }
SET32(2, RW(0) + 1);
L_001A12C4:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001A12E0(Ctx *c) { /* func_001A12E0 */
ENTER(0x1a12e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001A13A4; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -9168);
SET32(3, RW(3) + -9160);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -9148);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 36), RW(2));
SET32(3, RW(3) + -9088);
SET32(2, RW(17) + 204);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 72), RW(3)); if (t) goto L_001A1340; }
SET64(31, 0x1a133c); SET64(4, (s32)rd32(c, (RW(17) + 208))); F_00100430(c);
wr32(c, (RW(17) + 208), RW(0));
L_001A1340:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_001A1390; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -11184);
SET32(2, RW(2) + -11176);
wr32(c, (RW(17) + 56), RW(3));
SET64(4, RD(17) + RD(0));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 20), RW(2));
SET32(3, RW(3) + -11164);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11104);
wr32(c, (RW(17) + 36), RW(3));
SET64(31, 0x1a1380); wr32(c, (RW(17) + 72), RW(2)); F_001A13C0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1a138c); SET64(5, RD(0) + RD(0)); F_0017E420(c);
SET64(2, RD(16) << 48);
L_001A1390:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001A13A8; }
SET64(31, 0x1a13a4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001A13A4:;
SET64(2, RD(17) + RD(0));
L_001A13A8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A13C0(Ctx *c) { /* func_001A13C0 */
ENTER(0x1a13c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1a13d4); SET64(16, RD(4) + RD(0)); F_00226380(c);
SET64(31, 0x1a13dc); SET64(4, (s32)rd32(c, (RW(16) + 196))); F_00100430(c);
wr32(c, (RW(16) + 196), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001A13F0(Ctx *c) { /* func_001A13F0 */
ENTER(0x1a13f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 252)));
wr16(c, (RW(2) + 774), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(4) + 852)));
{ int t = RD(5) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_001A1418; }
SET32(5, RW(5) + 672);
L_001A1418:;
SET64(16, (s32)rd32(c, (RW(17) + 1028)));
SET64(31, 0x1a1424); SET64(4, RD(16) + RD(0)); F_002284F0(c);
SET32(6, RW(0) + 1);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(16) + 216), RW(6));
SET64(31, 0x1a1438); SET64(5, RD(0) + RD(0)); F_001A1B20(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A1450(Ctx *c) { /* func_001A1450 */
ENTER(0x1a1450);
SET32(29, RW(29) + -112);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, rd16(c, (RW(2) + -25236)));
SET64(1, RSD(16) < (s64)4);
{ int t = RD(1) != RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_001A1480; }
SET32(16, RW(0) + 3);
L_001A1480:;
SET64(3, (s32)rd32(c, (RW(17) + 276)));
SET64(7, RD(0) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(5, RD(17) + RD(0));
SET32(4, RW(0) + 3);
L_001A1494:;
SET64(1, RSD(16) < RSD(7));
{ int t = RD(1) != RD(0);  if (t) goto L_001A14C8; }
wr32(c, (RW(6) + 980), RW(4));
SET64(2, rd16(c, (RW(5) + 948)));
SET32(2, RW(2) << 1);
SET32(2, RW(3) + RW(2));
SET64(2, rd16(c, (RW(2) + 2)));
SET32(2, RW(2) << 1);
SET32(2, RW(3) + RW(2));
wr32(c, (RW(6) + 984), RW(2)); goto L_001A14F0;
L_001A14C8:;
wr32(c, (RW(6) + 980), RW(0));
SET64(2, (s32)rd32(c, (RW(5) + 948)));
SET32(2, RW(2) + 1);
SET64(2, RD(2) & 0xffff);
SET32(2, RW(2) << 1);
SET32(2, RW(3) + RW(2));
SET64(2, rd16(c, (RW(2) + 2)));
SET32(2, RW(2) << 1);
SET32(2, RW(3) + RW(2));
wr32(c, (RW(6) + 984), RW(2));
L_001A14F0:;
SET32(7, RW(7) + 1);
SET64(2, RSD(7) < (s64)4);
SET32(6, RW(6) + 12);
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 8); if (t) { POLL(); goto L_001A1494; } }
SET64(31, 0x1a150c); SET32(4, RW(0) + 228); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001A151C; }
SET64(31, 0x1a151c); SET64(4, RD(18) + RD(0)); F_00311810(c);
L_001A151C:;
wr32(c, (RW(17) + 1028), RW(18));
SET64(31, 0x1a1528); SET64(19, (s32)rd32(c, (RW(17) + 140))); F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(18, (s32)rd32(c, (RW(17) + 1028)));
SET64(31, 0x1a1538); SET32(5, RW(0) + 2); F_0022ACB0(c);
SET64(8, (s16)rd16(c, (RW(17) + 844)));
SET32(6, RW(0) + 4);
SET64(4, RD(18) + RD(0));
SET64(7, RD(2) + RD(0));
SET64(11, RD(19) + RD(0));
SET32(5, RW(17) + 980);
SET64(9, RD(0) + RD(0));
SET64(31, 0x1a155c); SET64(10, RD(6) + RD(0)); F_00311680(c);
SET64(4, (s32)rd32(c, (RW(17) + 1028)));
SET64(31, 0x1a1568); SET64(5, RD(16) + RD(0)); F_00311800(c);
SET64(2, (s64)(s32)0x42800000);
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 84), RW(2));
SET64(2, (s64)(s32)0x48920000);
SET64(3, RD(2) | 0x7c00);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 88), RW(3));
wr32(c, (RW(29) + 92), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 1028)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x1a159c); SET32(5, RW(29) + 80); rt_call(c, t); }
SET64(31, 0x1a15a4); SET64(4, (s32)rd32(c, (RW(17) + 1028))); F_00228570(c);
SET64(4, RD(2) + RD(0));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_001A15BC; }
SET64(31, 0x1a15b8);  F_0022A4B0(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_001A15BC:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001A15E0(Ctx *c) { /* func_001A15E0 */
ENTER(0x1a15e0);
SET32(3, RW(5) << 3);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(3) + 948), RW(6));
wr32(c, (RW(3) + 952), RW(7)); return;
}

void F_001A1600(Ctx *c) { /* func_001A1600 */
ENTER(0x1a1600);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 944)));
SET64(16, RD(4) + RD(0));
SET64(4, RD(0) + (s64)1);
{ int t = RD(2) == RD(0); SET64(3, RD(4) + RD(0)); if (t) goto L_001A1624; }
SET64(4, rd8(c, (RW(2) + 212)));
L_001A1624:;
SET64(2, (s32)rd32(c, (RW(16) + 1032)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A1634; }
SET64(3, RD(0) + RD(0));
L_001A1634:;
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 1044))); goto L_001A1668; }
{ int t = RD(3) == RD(0);  if (t) goto L_001A1664; }
SET64(2, (s32)rd32(c, (RW(16) + 1044)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1a165c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16))); goto L_001A168C;
L_001A1664:;
SET64(2, (s32)rd32(c, (RW(16) + 1044)));
L_001A1668:;
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1a167c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
c->f[12].u = rd32(c, (RW(16) + 84));
SET64(31, 0x1a1688); SET64(4, (s32)rd32(c, (RW(16) + 1044))); F_003118E0(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_001A168C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001A16A0(Ctx *c) { /* func_001A16A0 */
ENTER(0x1a16a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 1044)));
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1a16c8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 1044)));
wr32(c, (RW(3) + 420), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001A16E0(Ctx *c) { /* func_001A16E0 */
ENTER(0x1a16e0);
SET64(2, (s32)rd32(c, (RW(4) + 252)));
SET64(2, rd8(c, (RW(2) + 505)));
SET64(2, RD(2) & 0x40);
SET64(2, RD(0) < RD(2));
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(4) + 1040))); goto L_001A1704; }
SET32(2, RW(0) + 1);
wr8(c, (RW(4) + 1040), (u8)RW(2)); goto L_001A1714;
L_001A1704:;
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001A1714; }
wr8(c, (RW(4) + 1040), (u8)RW(0));
SET32(2, RW(0) + 1);
L_001A1714:;
 return;
}

void F_001A1720(Ctx *c) { /* func_001A1720 */
ENTER(0x1a1720);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001A17F0; }
SET64(2, (s64)(s32)0x4e0000);
SET64(7, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -8976);
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET32(7, RW(7) + -8860);
SET32(5, RW(5) + -8928);
SET32(3, RW(3) + -8908);
SET32(2, RW(17) + 424);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 216), RW(5));
wr32(c, (RW(17) + 220), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1a1790);  rt_call(c, t); }
SET32(4, RW(17) + 356);
SET64(31, 0x1a179c); SET32(5, RW(0) + -1); F_0014F8D0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1a17a8); SET64(5, RD(0) + RD(0)); F_0014E280(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_001A17DC; }
SET32(4, RW(17) + 424);
{ int t = RD(4) == RD(0);  if (t) goto L_001A17D8; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 440), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1a17d8);  rt_call(c, t); }
L_001A17D8:;
SET64(2, RD(16) << 48);
L_001A17DC:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001A17F4; }
SET64(31, 0x1a17f0); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001A17F0:;
SET64(2, RD(17) + RD(0));
L_001A17F4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A1810(Ctx *c) { /* func_001A1810 */
ENTER(0x1a1810);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(7) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RSD(6) >= 0; SET64(16, RD(4) + RD(0)); if (t) goto L_001A1844; }
SET64(4, (s32)rd32(c, (RW(16) + 944)));
SET64(31, 0x1a183c); SET32(5, RW(0) + 1); F_00313AD0(c);
SET64(31, rd64(c, (RW(29) + 48))); goto L_001A18F8;
L_001A1844:;
SET32(2, RW(6) << 2);
SET64(7, RD(6) + RD(0));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(16) + 944)));
SET64(5, (s32)rd32(c, (RW(2) + 904)));
SET64(17, rd16(c, (RW(5) + 918)));
SET64(31, 0x1a1864); SET64(6, RD(18) + RD(0)); F_00313E40(c);
SET64(4, (s32)rd32(c, (RW(16) + 944)));
SET64(31, 0x1a1870); SET64(5, RD(0) + RD(0)); F_00313AD0(c);
SET32(2, RW(17) << 4);
SET64(4, (s32)rd32(c, (RW(16) + 944)));
SET32(3, RW(2) + RW(17));
SET32(6, RW(18) << 3);
SET32(7, RW(3) << 3);
SET64(2, (s64)(s32)0x3f800000);
SET64(3, (s32)rd32(c, (RW(4) + 208)));
SET64(5, (s32)rd32(c, (RW(16) + 856)));
wr32(c, (RW(29) + 92), RW(2));
wr32(c, (RW(29) + 76), RW(2));
SET32(2, RW(3) + 8);
SET32(4, RW(5) + 784);
SET32(2, RW(2) + RW(6));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(2, RW(2) + RW(7));
c->f[2].u = rd32(c, (RW(2) + 8));
c->f[1].u = rd32(c, (RW(2) + 4));
c->f[0].u = rd32(c, (RW(2) + 0));
wr32(c, (RW(29) + 88), c->f[2].u);
wr32(c, (RW(29) + 84), c->f[1].u);
wr32(c, (RW(29) + 80), c->f[0].u);
c->f[2].u = rd32(c, (RW(2) + 24));
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
c->f[1].u = rd32(c, (RW(2) + 20));
c->f[0].u = rd32(c, (RW(2) + 16));
wr32(c, (RW(29) + 72), c->f[2].u);
wr32(c, (RW(29) + 68), c->f[1].u);
wr32(c, (RW(29) + 64), c->f[0].u);
wr128(c, (RW(5) + 800) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr128(c, (RW(5) + 816) & ~15u, &c->r[2]);
SET64(31, 0x1a18f4); wr32(c, (RW(5) + 832), RW(0)); F_0015CEB0(c);
SET64(31, rd64(c, (RW(29) + 48)));
L_001A18F8:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001A1910(Ctx *c) { /* func_001A1910 */
ENTER(0x1a1910);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1a1920); SET32(6, RW(0) + 1); F_001A1B20(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001A1930(Ctx *c) { /* func_001A1930 */
ENTER(0x1a1930);
SET32(29, RW(29) + -128);
SET64(3, (s64)(s32)0x42200000);
wr64(c, (RW(29) + 80), RD(31));
c->f[1].u = RW(3);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[0].f = fpu(F(1) + F(12));
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
SET32(2, RW(0) + 1);
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
wr32(c, (RW(29) + 20), c->f[25].u);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
c->f[21].f = fpu(F(12) + F(14));
wr32(c, (RW(29) + 0), c->f[20].u);
wr32(c, (RW(4) + 256), c->f[0].u);
c->f[0].f = fpu(F(1) + F(21));
wr32(c, (RW(4) + 260), c->f[13].u);
c->f[20].f = fpu(F(13) + F(15));
wr32(c, (RW(4) + 264), c->f[0].u);
wr32(c, (RW(4) + 268), c->f[20].u);
wr8(c, (RW(4) + 272), (u8)RW(2));
c->f[24].u = rd32(c, (RW(4) + 260));
SET64(18, (s32)rd32(c, (RW(4) + 252)));
c->f[25].u = rd32(c, (RW(4) + 256));
c->f[22].u = rd32(c, (RW(4) + 268));
c->f[23].u = rd32(c, (RW(4) + 264));
c->f[13].u = c->f[24].u;
c->f[12].u = c->f[25].u;
SET64(31, 0x1a19b8); SET32(4, RW(18) + 812); F_0016DE00(c);
c->f[0].f = fpu(F(23) - F(25));
c->f[1].u = rd32(c, (RW(18) + 816));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(18) + 824), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(18) + 812)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x1a19d8); SET32(4, RW(18) + 812); rt_call(c, t); }
c->f[22].f = fpu(F(22) - F(24));
c->f[0].u = rd32(c, (RW(18) + 820));
c->f[0].f = fpu(F(0) + F(22));
wr32(c, (RW(18) + 828), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(18) + 812)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x1a19f8); SET32(4, RW(18) + 812); rt_call(c, t); }
wr32(c, (RW(18) + 184), c->f[22].u);
SET64(2, (s64)(s32)0x490000);
c->f[22].u = rd32(c, (RW(2) + 20536));
SET64(3, (s32)rd32(c, (RW(17) + 252)));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
SET64(2, rd8(c, (RW(3) + 505)));
c->f[0].f = fpu(F(22) - F(0));
SET64(2, RD(2) | 0x80);
wr8(c, (RW(3) + 505), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 252)));
wr32(c, (RW(2) + 832), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(2) + 812)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x1a1a38); SET32(4, RW(2) + 812); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 844)));
wr16(c, (RW(29) + 126), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 252)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 188)));
{ u32 t = RW(25); SET64(31, 0x1a1a54); SET32(5, RW(29) + 126); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 252)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 388)));
{ u32 t = RW(25); SET64(31, 0x1a1a68);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 872)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x1a1a78); SET32(4, RW(2) + 36); F_003148C0(c);
SET64(3, (s64)(s32)0x42880000);
SET64(5, (s32)rd32(c, (RW(17) + 944)));
c->f[0].u = RW(3);
SET64(4, (s64)(s32)0x43200000);
c->f[0].f = fpu(F(21) - F(0));
SET64(3, (s64)(s32)0x41980000);
wr32(c, (RW(5) + 208), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 108), RW(2));
wr32(c, (RW(29) + 96), c->f[0].u);
c->f[0].u = RW(4);
c->f[0].f = fpu(F(20) - F(0));
wr32(c, (RW(29) + 100), c->f[0].u);
c->f[0].u = RW(3);
c->f[0].f = fpu(F(22) - F(0));
wr32(c, (RW(29) + 104), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(17) + 1044)));
SET64(31, 0x1a1acc); SET32(5, RW(29) + 96); F_0014E770(c);
SET64(4, (s32)rd32(c, (RW(17) + 1044)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a1ae0);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x1a1af0); SET64(6, RD(0) + RD(0)); F_001A1B20(c);
SET64(31, rd64(c, (RW(29) + 80)));
c->f[25].u = rd32(c, (RW(29) + 20));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 128); return;
}

void F_001A1B20(Ctx *c) { /* func_001A1B20 */
ENTER(0x1a1b20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 944)));
SET64(16, RD(6) + RD(0));
SET64(31, 0x1a1b44); SET64(5, RD(16) + RD(0)); F_00313B30(c);
SET64(2, (s32)rd32(c, (RW(17) + 252)));
wr8(c, (RW(2) + 956), (u8)RW(16));
SET64(4, (s32)rd32(c, (RW(17) + 252)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x1a1b60); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 1616)));
{ int t = RD(3) == RD(0);  if (t) goto L_001A1C30; }
if (RD(16) == RD(0)) { wr8(c, (RW(3) + 380), (u8)RW(0)); goto L_001A1BE0; }
wr16(c, (RW(3) + 382), (u16)RW(0));
SET32(5, RW(0) + 1);
wr8(c, (RW(3) + 380), (u8)RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 1616)));
SET64(3, (s32)rd32(c, (RW(3) + 28)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 1620))); goto L_001A1BA8; }
SET64(4, (s32)rd32(c, (RW(3) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1a1ba4);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 1620)));
L_001A1BA8:;
SET32(5, RW(0) + 1);
wr16(c, (RW(3) + 382), (u16)RW(0));
wr8(c, (RW(3) + 380), (u8)RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 1620)));
SET64(3, (s32)rd32(c, (RW(3) + 28)));
{ int t = RD(3) == RD(0);  if (t) goto L_001A1C30; }
SET64(4, (s32)rd32(c, (RW(3) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1a1bd8);  rt_call(c, t); }
 goto L_001A1C30;
L_001A1BE0:;
SET64(3, (s32)rd32(c, (RW(17) + 1616)));
SET64(3, (s32)rd32(c, (RW(3) + 28)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 1620))); goto L_001A1C08; }
SET64(4, (s32)rd32(c, (RW(3) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1a1c04); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 1620)));
L_001A1C08:;
wr8(c, (RW(3) + 380), (u8)RW(0));
SET64(3, (s32)rd32(c, (RW(17) + 1620)));
SET64(3, (s32)rd32(c, (RW(3) + 28)));
{ int t = RD(3) == RD(0);  if (t) goto L_001A1C30; }
SET64(4, (s32)rd32(c, (RW(3) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1a1c30); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
L_001A1C30:;
if (RD(16) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_001A1C5C; }
SET64(2, (s32)rd32(c, (RW(17) + 1044)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1a1c50); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 1044)));
wr32(c, (RW(3) + 420), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
L_001A1C5C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A1C70(Ctx *c) { /* func_001A1C70 */
ENTER(0x1a1c70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd8(c, (RW(4) + 280)));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001A1C90; }
SET64(2, RD(0) + RD(0)); goto L_001A1D64;
L_001A1C90:;
wr32(c, (RW(16) + 256), RW(0));
SET64(2, (s64)(s32)0x44000000);
wr32(c, (RW(16) + 260), RW(0));
SET64(3, (s64)(s32)0x43800000);
wr32(c, (RW(16) + 264), RW(2));
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 268), RW(3));
wr8(c, (RW(16) + 272), (u8)RW(2));
SET64(2, rd8(c, (RW(16) + 272)));
if (RD(2) == RD(0)) { wr8(c, (RW(16) + 1040), (u8)RW(0)); goto L_001A1D48; }
SET64(2, rd8(c, (RW(16) + 280)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A1D44; }
c->f[3].u = rd32(c, (RW(16) + 268));
c->f[2].u = rd32(c, (RW(16) + 264));
c->f[1].u = rd32(c, (RW(16) + 260));
c->f[0].u = rd32(c, (RW(16) + 256));
wr32(c, (RW(29) + 32), c->f[0].u);
wr32(c, (RW(29) + 36), c->f[1].u);
wr32(c, (RW(29) + 40), c->f[2].u);
wr32(c, (RW(29) + 44), c->f[3].u);
SET64(4, (s32)rd32(c, (RW(16) + 252)));
SET64(6, (s32)rd32(c, (RW(16) + 276)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1a1d00); SET32(5, RW(29) + 32); rt_call(c, t); }
SET64(2, (s64)(s32)0x490000);
SET64(3, (s32)rd32(c, (RW(16) + 252)));
c->f[1].u = rd32(c, (RW(2) + 20536));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(3) + 832), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(3) + 812)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x1a1d30); SET32(4, RW(3) + 812); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 252)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 388)));
{ u32 t = RW(25); SET64(31, 0x1a1d44);  rt_call(c, t); }
L_001A1D44:;
wr8(c, (RW(16) + 1040), (u8)RW(0));
L_001A1D48:;
SET32(2, RW(0) + 1);
SET64(31, 0x1a1d54); wr8(c, (RW(16) + 848), (u8)RW(2)); F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x1a1d60); SET32(5, RW(0) + 1); F_001624B0(c);
SET32(2, RW(0) + 1);
L_001A1D64:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A1D80(Ctx *c) { /* func_001A1D80 */
ENTER(0x1a1d80);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(4, RW(0) + 224);
SET64(31, 0x1a1da0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001A1DDC; }
SET64(31, 0x1a1db0); SET64(4, RD(16) + RD(0)); F_00149480(c);
SET64(31, 0x1a1db8); SET32(4, RW(16) + 16); F_00149480(c);
SET64(31, 0x1a1dc0); SET32(4, RW(16) + 48); F_00149480(c);
SET64(31, 0x1a1dc8); SET32(4, RW(16) + 80); F_001A1F30(c);
SET64(31, 0x1a1dd0); SET32(4, RW(16) + 144); F_001A1EE0(c);
wr32(c, (RW(16) + 64), RW(0));
wr8(c, (RW(16) + 192), (u8)RW(0));
wr8(c, (RW(16) + 212), (u8)RW(0));
L_001A1DDC:;
wr32(c, (RW(18) + 944), RW(16));
SET64(5, (s32)rd32(c, (RW(18) + 856)));
SET64(31, 0x1a1dec); SET64(4, RD(16) + RD(0)); F_00314420(c);
SET64(31, 0x1a1df4); SET32(4, RW(0) + 448); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001A1E64; }
SET32(4, RW(17) + 424);
SET32(16, RW(0) + 1);
SET64(31, 0x1a1e0c); wr32(c, (RW(17) + 12), RW(4)); F_00141AA0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1a1e18); SET64(5, RD(0) + RD(0)); F_0014E400(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(7, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -8976);
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET32(7, RW(7) + -8860);
SET32(5, RW(5) + -8928);
SET32(3, RW(3) + -8908);
SET32(2, RW(17) + 424);
SET32(4, RW(17) + 356);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 216), RW(5));
wr32(c, (RW(17) + 220), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x1a1e64); wr32(c, (RW(3) + 20), RW(2)); F_0014F940(c);
L_001A1E64:;
wr32(c, (RW(18) + 1044), RW(17));
SET64(5, (s32)rd32(c, (RW(18) + 140)));
SET64(31, 0x1a1e74); SET64(4, RD(17) + RD(0)); F_00311A10(c);
SET64(31, 0x1a1e7c);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 1044))); goto L_001A1E90; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(18) + 1044)));
L_001A1E90:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x1a1ea0);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 1044)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1a1eb8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 1044)));
wr32(c, (RW(3) + 420), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001A1EE0(Ctx *c) { /* func_001A1EE0 */
ENTER(0x1a1ee0);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(29) + 32);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 44), RW(2));
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 36), RW(0));
SET64(31, 0x1a1f0c); wr32(c, (RW(29) + 40), RW(0)); F_002B3100(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -20816);
wr32(c, (RW(16) + 32), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A1F30(Ctx *c) { /* func_001A1F30 */
ENTER(0x1a1f30);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(29) + 48);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(6, RW(29) + 32);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 44), RW(2));
wr32(c, (RW(29) + 60), RW(2));
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0));
wr32(c, (RW(29) + 48), RW(0));
wr32(c, (RW(29) + 52), RW(0));
SET64(31, 0x1a1f70); wr32(c, (RW(29) + 56), RW(0)); F_002B3040(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -20880);
wr32(c, (RW(16) + 32), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001A1F90(Ctx *c) { /* func_001A1F90 */
ENTER(0x1a1f90);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_001A1FB0:;
SET64(5, (s32)rd32(c, (RW(16) + 648)));
SET32(3, RW(0) + -1);
{ int t = RD(5) == RD(3);  if (t) goto L_001A2090; }
{ int t = RSD(5) < 0; SET64(4, (s32)rd32(c, (RW(18) + 624))); if (t) goto L_001A1FE8; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(5) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x1a1fdc); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_001B8290(c);
SET64(3, RD(2) & 0xff); goto L_001A1FF0;
L_001A1FE8:;
SET64(3, RD(0) + RD(0));
L_001A1FF0:;
{ int t = RD(3) == RD(0);  if (t) goto L_001A2018; }
SET64(3, (s32)rd32(c, (RW(16) + 648)));
SET64(5, (s32)rd32(c, (RW(18) + 624)));
SET64(4, (s32)rd32(c, (RW(16) + 664)));
SET32(3, RW(3) << 2);
SET32(3, RW(5) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
{ int t = RD(4) == RD(3);  if (t) goto L_001A2090; }
L_001A2018:;
SET64(3, (s32)rd32(c, (RW(16) + 656)));
{ int t = RSD(3) < 0;  if (t) goto L_001A2060; }
SET32(2, RW(3) << 2);
SET32(5, RW(0) + 5);
SET32(2, RW(18) + RW(2));
SET64(3, (s32)rd32(c, (RW(2) + 904)));
wr32(c, (RW(3) + 4116), RW(0));
wr16(c, (RW(3) + 4124), (u16)RW(5));
SET64(2, rd16(c, (RW(3) + 4122)));
wr16(c, (RW(3) + 4120), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 656)));
SET32(2, RW(2) << 2);
SET32(2, RW(18) + RW(2));
SET64(31, 0x1a2058); SET64(4, (s32)rd32(c, (RW(2) + 904))); F_00157FC0(c);
SET32(3, RW(0) + -1);
wr32(c, (RW(16) + 656), RW(3));
L_001A2060:;
wr32(c, (RW(29) + 76), RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 648)));
{ int t = RSD(3) < 0; SET64(4, (s32)rd32(c, (RW(18) + 624))); if (t) goto L_001A2088; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1a2088); SET32(5, RW(29) + 76); F_001B8300(c);
L_001A2088:;
SET32(3, RW(0) + -1);
wr32(c, (RW(16) + 648), RW(3));
L_001A2090:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)2);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001A1FB0; } }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001A20C0(Ctx *c) { /* func_001A20C0 */
ENTER(0x1a20c0);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + -1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, rd16(c, (RW(4) + 638)));
SET32(4, RW(4) << 2);
SET32(4, RW(4) + RW(16));
SET64(5, (s32)rd32(c, (RW(4) + 648)));
if (RD(5) == RD(3)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001A21C0; }
SET32(3, RW(5) << 2);
SET64(4, (s32)rd32(c, (RW(4) + 664)));
SET64(5, (s32)rd32(c, (RW(16) + 624)));
SET32(3, RW(3) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
if (RD(4) != RD(3)) { SET64(3, rd16(c, (RW(16) + 638))); goto L_001A2140; }
wr32(c, (RW(29) + 44), RW(0));
SET64(3, rd16(c, (RW(16) + 638)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(16));
SET64(3, (s32)rd32(c, (RW(3) + 648)));
{ int t = RSD(3) < 0; SET64(4, (s32)rd32(c, (RW(16) + 624))); if (t) goto L_001A213C; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1a213c); SET32(5, RW(29) + 44); F_001B8300(c);
L_001A213C:;
SET64(3, rd16(c, (RW(16) + 638)));
L_001A2140:;
SET32(4, RW(0) + -1);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(16));
wr32(c, (RW(3) + 648), RW(4));
SET64(3, rd16(c, (RW(16) + 638)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(16));
SET64(3, (s32)rd32(c, (RW(3) + 656)));
{ int t = RSD(3) < 0;  if (t) goto L_001A21BC; }
SET32(2, RW(3) << 2);
SET32(5, RW(0) + 5);
SET32(2, RW(2) + RW(16));
SET64(3, (s32)rd32(c, (RW(2) + 904)));
wr32(c, (RW(3) + 4116), RW(0));
wr16(c, (RW(3) + 4124), (u16)RW(5));
SET64(2, rd16(c, (RW(3) + 4122)));
wr16(c, (RW(3) + 4120), (u16)RW(2));
SET64(2, rd16(c, (RW(16) + 638)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 656)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(31, 0x1a21a8); SET64(4, (s32)rd32(c, (RW(2) + 904))); F_00157FC0(c);
SET64(3, rd16(c, (RW(16) + 638)));
SET32(4, RW(0) + -1);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(16));
wr32(c, (RW(3) + 656), RW(4));
L_001A21BC:;
SET64(31, rd64(c, (RW(29) + 16)));
L_001A21C0:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A21D0(Ctx *c) { /* func_001A21D0 */
ENTER(0x1a21d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(31, 0x1a21f4); SET64(16, RD(4) + RD(0)); F_001A20C0(c);
SET64(2, rd16(c, (RW(16) + 638)));
SET64(5, (s32)rd32(c, (RW(18) + 0)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 656), RW(17));
SET64(31, 0x1a2210); SET64(4, (s32)rd32(c, (RW(16) + 624))); F_001B76E0(c);
SET64(3, rd16(c, (RW(16) + 638)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(16));
wr32(c, (RW(3) + 648), RW(2));
SET64(3, rd16(c, (RW(16) + 638)));
SET64(4, (s32)rd32(c, (RW(16) + 624)));
SET32(3, RW(3) << 2);
SET32(5, RW(3) + RW(16));
SET64(3, (s32)rd32(c, (RW(5) + 648)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
wr32(c, (RW(5) + 664), RW(3));
SET64(3, rd16(c, (RW(16) + 638)));
c->f[12].u = rd32(c, (RW(16) + 676));
SET64(17, (s32)rd32(c, (RW(16) + 624)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(16));
SET64(16, (s32)rd32(c, (RW(3) + 648)));
if (RSD(16) < 0) { SET64(31, rd64(c, (RW(29) + 48))); goto L_001A2290; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x1a2270); SET64(5, RD(16) + RD(0)); F_001B7530(c);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(16) << 2);
c->f[12].u = RW(0);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1a228c); SET64(5, RD(0) + RD(0)); F_001B84F0(c);
SET64(31, rd64(c, (RW(29) + 48)));
L_001A2290:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001A22B0(Ctx *c) { /* func_001A22B0 */
ENTER(0x1a22b0);
SET64(3, rd16(c, (RW(4) + 636)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(3) + 628), RW(5)); return;
}

void F_001A22D0(Ctx *c) { /* func_001A22D0 */
ENTER(0x1a22d0);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + -1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, rd16(c, (RW(4) + 636)));
SET32(4, RW(4) << 2);
SET32(4, RW(4) + RW(16));
SET64(4, (s32)rd32(c, (RW(4) + 640)));
if (RD(4) == RD(3)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001A2348; }
wr32(c, (RW(29) + 44), c->f[12].u);
SET64(3, rd16(c, (RW(16) + 636)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(16));
SET64(3, (s32)rd32(c, (RW(3) + 640)));
{ int t = RSD(3) < 0; SET64(4, (s32)rd32(c, (RW(16) + 624))); if (t) goto L_001A2330; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1a2330); SET32(5, RW(29) + 44); F_001B8300(c);
L_001A2330:;
SET64(3, rd16(c, (RW(16) + 636)));
SET32(4, RW(0) + -1);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(16));
wr32(c, (RW(3) + 640), RW(4));
SET64(31, rd64(c, (RW(29) + 16)));
L_001A2348:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A2360(Ctx *c) { /* func_001A2360 */
ENTER(0x1a2360);
SET32(29, RW(29) + -96);
SET64(2, (s64)(s32)0x3dcc0000);
wr64(c, (RW(29) + 64), RD(31));
SET64(2, RD(2) | 0xcccd);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[0].u = RW(2);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = c->f[12].u;
c->fcc = F(20) <= F(0);
{ int t = c->fcc; SET64(16, RD(5) + RD(0)); if (t) goto L_001A2404; }
SET64(3, rd16(c, (RW(18) + 636)));
SET32(2, RW(0) + -1);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(18));
SET64(3, (s32)rd32(c, (RW(3) + 640)));
if (RD(3) == RD(2)) { SET64(3, rd16(c, (RW(18) + 636))); goto L_001A246C; }
wr32(c, (RW(29) + 88), c->f[20].u);
SET64(3, rd16(c, (RW(18) + 636)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(18));
SET64(3, (s32)rd32(c, (RW(3) + 640)));
{ int t = RSD(3) < 0; SET64(2, (s32)rd32(c, (RW(18) + 624))); if (t) goto L_001A23EC; }
SET64(2, (s32)rd32(c, (RW(2) + 4)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1a23ec); SET32(5, RW(29) + 88); F_001B8300(c);
L_001A23EC:;
SET64(2, rd16(c, (RW(18) + 636)));
SET32(3, RW(0) + -1);
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 640), RW(3)); goto L_001A2468;
L_001A2404:;
SET64(3, rd16(c, (RW(18) + 636)));
SET32(2, RW(0) + -1);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(18));
SET64(3, (s32)rd32(c, (RW(3) + 640)));
{ int t = RD(3) == RD(2);  if (t) goto L_001A2468; }
wr32(c, (RW(29) + 84), c->f[0].u);
SET64(3, rd16(c, (RW(18) + 636)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(18));
SET64(3, (s32)rd32(c, (RW(3) + 640)));
{ int t = RSD(3) < 0; SET64(2, (s32)rd32(c, (RW(18) + 624))); if (t) goto L_001A2454; }
SET64(2, (s32)rd32(c, (RW(2) + 4)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1a2454); SET32(5, RW(29) + 84); F_001B8300(c);
L_001A2454:;
SET64(2, rd16(c, (RW(18) + 636)));
SET32(3, RW(0) + -1);
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 640), RW(3));
L_001A2468:;
SET64(3, rd16(c, (RW(18) + 636)));
L_001A246C:;
SET32(2, RW(0) + -1);
SET32(3, RW(3) + 1);
SET64(3, RD(3) & 0x1);
wr16(c, (RW(18) + 636), (u16)RW(3));
SET64(3, rd16(c, (RW(18) + 636)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(18));
SET64(3, (s32)rd32(c, (RW(3) + 640)));
if (RD(3) == RD(2)) { SET64(5, (s32)rd32(c, (RW(16) + 0))); goto L_001A24CC; }
wr32(c, (RW(29) + 92), RW(0));
SET64(3, rd16(c, (RW(18) + 636)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(18));
SET64(3, (s32)rd32(c, (RW(3) + 640)));
{ int t = RSD(3) < 0; SET64(2, (s32)rd32(c, (RW(18) + 624))); if (t) goto L_001A24C8; }
SET64(2, (s32)rd32(c, (RW(2) + 4)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1a24c8); SET32(5, RW(29) + 92); F_001B8300(c);
L_001A24C8:;
SET64(5, (s32)rd32(c, (RW(16) + 0)));
L_001A24CC:;
SET64(31, 0x1a24d4); SET64(4, (s32)rd32(c, (RW(18) + 624))); F_001B76E0(c);
SET64(3, rd16(c, (RW(18) + 636)));
SET64(16, RD(0) < RD(17));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(18));
wr32(c, (RW(3) + 640), RW(2));
SET64(3, rd16(c, (RW(18) + 636)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(18));
wr32(c, (RW(3) + 628), RW(17));
SET64(3, rd16(c, (RW(18) + 636)));
c->f[12].u = rd32(c, (RW(18) + 672));
SET64(17, (s32)rd32(c, (RW(18) + 624)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(18));
SET64(18, (s32)rd32(c, (RW(3) + 640)));
if (RSD(18) < 0) { SET64(31, rd64(c, (RW(29) + 64))); goto L_001A2544; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x1a2524); SET64(5, RD(18) + RD(0)); F_001B75B0(c);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(18) << 2);
SET64(5, RD(16) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1a2540); c->f[12].u = c->f[20].u; F_001B84F0(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_001A2544:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001A2560(Ctx *c) { /* func_001A2560 */
ENTER(0x1a2560);
SET32(29, RW(29) + -32);
SET32(3, RW(6) << 2);
wr64(c, (RW(29) + 16), RD(31));
SET32(3, RW(3) + RW(4));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(8, (s32)rd32(c, (RW(3) + 324)));
if (RD(8) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001A2608; }
if (RSD(7) >= 0) { SET32(3, RW(6) << 1); goto L_001A25CC; }
SET32(3, RW(6) << 1);
SET64(10, RD(0) + RD(0));
SET32(3, RW(3) + RW(6));
SET32(3, RW(3) << 5);
SET32(9, RW(4) + RW(3));
L_001A259C:;
SET64(3, (s32)rd32(c, (RW(9) + 344)));
if (RD(3) != RD(5)) { SET32(10, RW(10) + 1); goto L_001A25B0; }
SET64(7, RD(10) + RD(0)); goto L_001A25C0;
L_001A25B0:;
SET64(3, RSD(10) < (s64)8);
{ int t = RD(3) != RD(0); SET32(9, RW(9) + 12); if (t) { POLL(); goto L_001A259C; } }
L_001A25C0:;
{ int t = RSD(7) < 0;  if (t) goto L_001A2604; }
SET32(3, RW(6) << 1);
L_001A25CC:;
SET32(2, RW(7) << 1);
SET32(3, RW(3) + RW(6));
SET32(2, RW(2) + RW(7));
SET32(3, RW(3) << 5);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + RW(4));
SET32(6, RW(0) + 250);
SET32(2, RW(2) + RW(3));
SET64(4, RD(8) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 336)));
SET64(31, 0x1a25fc); SET32(16, RW(2) + 336); F_001B5E90(c);
SET32(3, RW(0) + -1);
wr32(c, (RW(16) + 0), RW(3));
L_001A2604:;
SET64(31, rd64(c, (RW(29) + 16)));
L_001A2608:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001A2620(Ctx *c) { /* func_001A2620 */
ENTER(0x1a2620);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(5) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(8) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET32(30, RW(22) << 2);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(19, RW(0) + -1);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(3, RW(30) + RW(21));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(18, RD(19) + RD(0));
SET32(16, RW(3) + 324);
wr32(c, (RW(29) + 172), RW(6));
SET64(3, (s32)rd32(c, (RW(3) + 324)));
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 168), RW(7)); if (t) goto L_001A27DC; }
if (RSD(9) >= 0) { SET64(19, RD(9) + RD(0)); goto L_001A2700; }
SET32(2, RW(22) << 1);
SET64(20, RD(0) + RD(0));
SET32(2, RW(2) + RW(22));
SET32(2, RW(2) << 5);
SET32(17, RW(21) + RW(2));
L_001A2698:;
SET64(5, (s32)rd32(c, (RW(17) + 336)));
SET32(2, RW(0) + -1);
{ int t = RD(5) == RD(2);  if (t) goto L_001A26B8; }
SET64(31, 0x1a26b0); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_001B5F90(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 340))); goto L_001A26C0; }
L_001A26B8:;
SET64(19, RD(20) + RD(0)); goto L_001A26E8;
L_001A26C0:;
SET64(1, RD(2) < RD(18));
{ int t = RD(1) == RD(0);  if (t) goto L_001A26D8; }
SET64(18, RD(2) + RD(0));
SET64(19, RD(20) + RD(0));
L_001A26D8:;
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < (s64)8);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 12); if (t) { POLL(); goto L_001A2698; } }
L_001A26E8:;
SET64(2, RSD(20) < (s64)8);
if (RD(2) != RD(0)) { SET32(2, RW(22) << 1); goto L_001A2704; }
{ int t = RSD(19) >= 0;  if (t) goto L_001A2700; }
SET64(19, RD(0) + RD(0));
L_001A2700:;
SET32(2, RW(22) << 1);
L_001A2704:;
SET32(3, RW(19) << 1);
SET32(2, RW(2) + RW(22));
SET32(3, RW(3) + RW(19));
SET32(17, RW(2) << 5);
SET32(18, RW(3) << 2);
SET32(2, RW(17) + RW(21));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(18) + RW(2));
SET64(5, (s32)rd32(c, (RW(2) + 336)));
SET64(31, 0x1a2730); SET32(20, RW(2) + 336); F_001B5F90(c);
if (RD(2) == RD(0)) { SET32(2, RW(17) + RW(21)); goto L_001A274C; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(5, (s32)rd32(c, (RW(20) + 0)));
SET64(31, 0x1a2748); SET32(6, RW(0) + 250); F_001B5E90(c);
SET32(2, RW(17) + RW(21));
L_001A274C:;
SET64(4, RD(21) + RD(0));
SET32(2, RW(18) + RW(2));
SET64(31, 0x1a275c); wr32(c, (RW(2) + 344), RW(23)); F_001CB090(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_001A2784; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(4, (s32)c->f[0].u);
SET32(2, RW(17) + RW(21)); goto L_001A279C;
L_001A2784:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(4, (s32)c->f[0].u);
SET64(4, RD(4) | RD(2));
SET32(2, RW(17) + RW(21));
L_001A279C:;
SET32(3, RW(30) + RW(21));
SET32(2, RW(18) + RW(2));
SET64(7, (s32)rd32(c, (RW(29) + 172)));
wr32(c, (RW(2) + 340), RW(4));
SET64(6, RD(23) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 324)));
SET64(8, (s32)rd32(c, (RW(29) + 168)));
SET64(2, rd16(c, (RW(2) + 26)));
SET32(2, RW(2) + RW(19));
SET32(2, RW(2) << 16);
SET64(2, RD(23) | RD(2));
wr32(c, (RW(20) + 0), RW(2));
SET64(4, (s32)rd32(c, (RW(3) + 324)));
SET64(2, rd16(c, (RW(4) + 26)));
SET64(31, 0x1a27dc); SET32(5, RW(2) + RW(19)); F_001B5CF0(c);
L_001A27DC:;
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

void F_001A2810(Ctx *c) { /* func_001A2810 */
ENTER(0x1a2810);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(4, RW(0) + 76);
SET64(31, 0x1a283c); SET64(16, RD(6) + RD(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001A284C; }
SET64(31, 0x1a284c); SET64(4, RD(17) + RD(0)); F_001B6630(c);
L_001A284C:;
SET32(2, RW(16) << 2);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + RW(19));
SET32(5, RW(0) + 8);
wr32(c, (RW(2) + 324), RW(17));
SET64(25, (s32)rd32(c, (RW(17) + 72)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1a2870); SET32(16, RW(2) + 324); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x1a2880); SET32(6, RW(0) + -1); F_001B62D0(c);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001A28A0(Ctx *c) { /* func_001A28A0 */
ENTER(0x1a28a0);
SET32(29, RW(29) + -336);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(19) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
L_001A28C8:;
SET64(16, (s32)rd32(c, (RW(17) + 872)));
{ int t = RD(16) == RD(0);  if (t) goto L_001A2950; }
SET64(3, (s32)rd32(c, (RW(16) + 100)));
{ int t = RD(3) == RD(0);  if (t) goto L_001A2950; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2);  if (t) goto L_001A2950; }
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1a28fc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, RD(2) & 0xff);
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_001A2950; }
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1a291c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 96)));
SET64(31, 0x1a2928); SET64(4, RD(16) + RD(0)); F_001569F0(c);
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 100), RW(2));
SET64(2, rd8(c, (RW(16) + 104)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A2950; }
SET64(6, (s32)rd32(c, (RW(16) + 108)));
SET32(4, RW(16) + 36);
SET64(31, 0x1a294c); SET64(5, RD(16) + RD(0)); F_00314910(c);
L_001A2950:;
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)8);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001A28C8; } }
c->f[20].u = rd32(c, (RW(19) + 84));
SET64(16, (s32)rd32(c, (RW(19) + 860)));
SET64(31, 0x1a2970); SET32(4, RW(29) + 304); F_00149480(c);
SET64(31, 0x1a2978); SET32(4, RW(29) + 288); F_00149480(c);
SET64(31, 0x1a2980); SET32(4, RW(29) + 224); F_00183610(c);
SET64(3, (s32)rd32(c, (RW(16) + 1432)));
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { c->f[0].u = rd32(c, (RW(16) + 1520)); goto L_001A2A5C; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { c->f[1].u = rd32(c, (RW(16) + 1504)); goto L_001A29A4; }
SET64(3, (s32)rd32(c, (RW(19) + 1872))); goto L_001A2AF0;
L_001A29A4:;
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_001A2AEC; }
c->f[0].u = rd32(c, (RW(16) + 1508));
c->f[0].f = fpu(F(0) + F(20));
wr32(c, (RW(16) + 1508), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 1504));
c->f[0].u = rd32(c, (RW(16) + 1508));
c->fcc = F(0) < F(1);
if (c->fcc) { c->f[1].u = rd32(c, (RW(16) + 1508)); goto L_001A29E0; }
wr32(c, (RW(16) + 1508), c->f[1].u);
c->f[1].u = rd32(c, (RW(16) + 1508));
L_001A29E0:;
SET32(4, RW(29) + 208);
c->f[0].u = rd32(c, (RW(16) + 1504));
SET32(5, RW(16) + 1440);
SET32(6, RW(16) + 1472);
c->f[20].f = fpu_div(F(1), F(0));
SET64(31, 0x1a2a04); c->f[12].u = c->f[20].u; F_001A2EE0(c);
SET32(4, RW(29) + 304);
SET64(31, 0x1a2a10); SET32(5, RW(29) + 208); F_00149470(c);
c->f[12].u = c->f[20].u;
SET32(4, RW(29) + 192);
SET32(5, RW(16) + 1456);
SET64(31, 0x1a2a24); SET32(6, RW(16) + 1488); F_001A2EE0(c);
SET32(4, RW(29) + 288);
SET64(31, 0x1a2a30); SET32(5, RW(29) + 192); F_00149470(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 304);
SET64(31, 0x1a2a40); SET32(6, RW(29) + 288); F_001A2EB0(c);
c->f[1].u = rd32(c, (RW(16) + 1508));
c->f[0].u = rd32(c, (RW(16) + 1504));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_001A2AEC; }
wr32(c, (RW(16) + 1504), RW(0)); goto L_001A2AEC;
L_001A2A5C:;
SET32(4, RW(16) + 1512);
SET32(5, RW(29) + 332);
c->f[0].f = fpu(F(20) * F(0));
SET64(31, 0x1a2a70); wr32(c, (RW(29) + 332), c->f[0].u); F_001A2DD0(c);
SET64(31, 0x1a2a78); SET32(4, RW(16) + 1512); F_001A2DC0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1a2a84); SET32(4, RW(29) + 128); F_001A2CA0(c);
SET32(4, RW(29) + 224);
SET64(31, 0x1a2a90); SET32(5, RW(29) + 128); F_0015CFD0(c);
SET32(4, RW(29) + 304);
SET64(31, 0x1a2a9c); SET32(5, RW(16) + 1440); F_00149470(c);
SET32(4, RW(29) + 304);
SET64(31, 0x1a2aa8); SET32(5, RW(29) + 224); F_001A2C60(c);
SET64(31, 0x1a2ab0); SET64(4, RD(16) + RD(0)); F_0019F5C0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1a2abc); SET32(4, RW(29) + 112); F_0019F680(c);
SET32(4, RW(29) + 304);
SET64(31, 0x1a2ac8); SET32(5, RW(29) + 112); F_001A2C20(c);
SET64(31, 0x1a2ad0); SET64(4, RD(16) + RD(0)); F_0019F5C0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1a2adc); SET32(4, RW(29) + 96); F_0019F680(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 304);
SET64(31, 0x1a2aec); SET32(6, RW(29) + 96); F_001A2EB0(c);
L_001A2AEC:;
SET64(3, (s32)rd32(c, (RW(19) + 1872)));
L_001A2AF0:;
SET32(2, RW(0) + 3);
{ int t = RD(3) == RD(2);  if (t) goto L_001A2B4C; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(4, RD(19) + RD(0)); goto L_001A2B44; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(4, RD(19) + RD(0)); goto L_001A2B34; }
if (RD(3) == RD(0)) { SET64(4, RD(19) + RD(0)); goto L_001A2B24; }
 goto L_001A2B4C;
L_001A2B24:;
SET64(31, 0x1a2b2c);  F_001A3160(c);
 goto L_001A2B4C;
L_001A2B34:;
SET64(31, 0x1a2b3c);  F_001A3400(c);
 goto L_001A2B4C;
L_001A2B44:;
SET64(31, 0x1a2b4c);  F_001A2F40(c);
L_001A2B4C:;
SET64(31, 0x1a2b54);  F_00321B20(c);
SET64(31, 0x1a2b5c); SET64(4, RD(19) + RD(0)); F_001A1F90(c);
SET64(17, RD(0) + RD(0));
SET64(16, RD(19) + RD(0));
L_001A2B64:;
SET64(4, (s32)rd32(c, (RW(16) + 928)));
{ int t = RD(4) == RD(0);  if (t) goto L_001A2BB8; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 192)));
{ u32 t = RW(25); SET64(31, 0x1a2b80); c->f[12].u = rd32(c, (RW(19) + 84)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 928)));
SET32(2, RW(0) + 5);
SET64(3, (s32)rd32(c, (RW(4) + 416)));
{ int t = RD(3) != RD(2);  if (t) goto L_001A2BB8; }
{ int t = RD(4) == RD(0);  if (t) goto L_001A2BB0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a2bac); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001A2BB0:;
wr32(c, (RW(16) + 928), RW(0));
L_001A2BB8:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001A2B64; } }
wr32(c, (RW(19) + 864), RW(0));
SET64(4, (s32)rd32(c, (RW(19) + 1068)));
{ int t = RD(4) == RD(0); c->f[12].u = rd32(c, (RW(19) + 84)); if (t) goto L_001A2BE0; }
SET64(31, 0x1a2be0);  F_003128F0(c);
L_001A2BE0:;
SET64(31, 0x1a2be8); SET64(4, RD(19) + RD(0)); F_0019FFB0(c);
c->f[12].u = rd32(c, (RW(19) + 84));
SET64(31, 0x1a2bf4); SET64(4, (s32)rd32(c, (RW(19) + 944))); F_003141E0(c);
SET64(31, rd64(c, (RW(29) + 80)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 336); return;
}

void F_001A2C20(Ctx *c) { /* func_001A2C20 */
ENTER(0x1a2c20);
c->f[1].u = rd32(c, (RW(4) + 0));
SET64(2, RD(4) + RD(0));
c->f[0].u = rd32(c, (RW(5) + 0));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(4) + 0), c->f[0].u);
c->f[1].u = rd32(c, (RW(5) + 4));
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(4) + 4), c->f[0].u);
c->f[1].u = rd32(c, (RW(5) + 8));
c->f[0].u = rd32(c, (RW(4) + 8));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(4) + 8), c->f[0].u); return;
}

void F_001A2C60(Ctx *c) { /* func_001A2C60 */
ENTER(0x1a2c60);
SET32(29, RW(29) + -48);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET32(4, RW(29) + 32);
SET64(31, 0x1a2c80); SET64(5, RD(16) + RD(0)); F_002ACE80(c);
rd128(c, (RW(29) + 32) & ~15u, &c->r[3]);
SET64(2, RD(16) + RD(0));
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A2CA0(Ctx *c) { /* func_001A2CA0 */
ENTER(0x1a2ca0);
SET32(29, RW(29) + -368);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s8)rd8(c, (RW(28) + -30440)));
{ int t = RD(2) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001A2D18; }
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
SET64(31, 0x1a2d10); c->f[19].u = c->f[13].u; F_002AC180(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30440), (u8)RW(2));
L_001A2D18:;
SET64(31, 0x1a2d20); SET32(4, RW(29) + 304); F_002AC130(c);
SET64(6, (s64)(s32)0x410000);
SET32(4, RW(29) + 112);
SET32(6, RW(6) + 21376);
rd128(c, (RW(6) + 0) & ~15u, &c->r[5]);
rd128(c, (RW(6) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(6) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 304) & ~15u, &c->r[5]);
wr128(c, (RW(29) + 320) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 336) & ~15u, &c->r[2]);
rd128(c, (RW(6) + 48) & ~15u, &c->r[2]);
SET64(31, 0x1a2d50); wr128(c, (RW(29) + 352) & ~15u, &c->r[2]); F_0015D060(c);
c->f[12].u = rd32(c, (RW(16) + 0));
SET64(31, 0x1a2d5c); SET64(4, RD(2) + RD(0)); F_002AC040(c);
SET64(5, RD(2) + RD(0));
SET32(4, RW(29) + 176);
SET64(31, 0x1a2d6c); SET32(6, RW(29) + 304); F_002ABB90(c);
SET32(4, RW(29) + 240);
SET64(31, 0x1a2d78); SET32(5, RW(29) + 176); F_0015D000(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1a2d84); SET32(4, RW(29) + 304); F_0015CFD0(c);
SET64(31, 0x1a2d8c); SET64(4, RD(17) + RD(0)); F_002AC130(c);
rd128(c, (RW(29) + 304) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 320) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 336) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 352) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET32(29, RW(29) + 368); return;
}

void F_001A2DC0(Ctx *c) { /* func_001A2DC0 */
ENTER(0x1a2dc0);
SET64(2, RD(4) + RD(0)); return;
}

void F_001A2DD0(Ctx *c) { /* func_001A2DD0 */
ENTER(0x1a2dd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a2df4); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
c->f[2].u = rd32(c, (RW(17) + 0));
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(2) + F(0));
c->fcc = F(12) <= F(1);
if (c->fcc) { SET64(2, (s64)(s32)0xc0490000); goto L_001A2E40; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x1a2e2c); c->f[12].f = fpu(F(1) + F(12)); F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(0) - F(1)); goto L_001A2E80;
L_001A2E40:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_001A2E80; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x1a2e6c); c->f[12].f = fpu(F(12) - F(1)); F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(1) + F(0));
L_001A2E80:;
SET64(25, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1a2e90); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A2EB0(Ctx *c) { /* func_001A2EB0 */
ENTER(0x1a2eb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 800) & ~15u, &c->r[2]);
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 816) & ~15u, &c->r[2]);
wr32(c, (RW(4) + 832), RW(0));
SET64(31, 0x1a2ed4); SET32(4, RW(4) + 784); F_0015CEB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001A2EE0(Ctx *c) { /* func_001A2EE0 */
ENTER(0x1a2ee0);
c->f[1].u = rd32(c, (RW(5) + 8));
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(6) + 8));
c->f[4].u = RW(0);
c->facc = fpu(F(4) + F(1));
c->f[0].f = fpu(F(0) - F(1));
c->f[5].f = fpu(c->facc + F(12) * F(0));
c->f[3].u = rd32(c, (RW(5) + 4));
c->f[2].u = rd32(c, (RW(6) + 4));
c->f[1].u = rd32(c, (RW(5) + 0));
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[2].f = fpu(F(2) - F(3));
c->facc = fpu(F(4) + F(3));
c->f[2].f = fpu(c->facc + F(12) * F(2));
c->f[0].f = fpu(F(0) - F(1));
c->facc = fpu(F(4) + F(1));
c->f[0].f = fpu(c->facc + F(12) * F(0));
wr32(c, (RW(4) + 0), c->f[0].u);
wr32(c, (RW(4) + 4), c->f[2].u);
wr32(c, (RW(4) + 8), c->f[5].u);
wr32(c, (RW(4) + 12), RW(3)); return;
}

void F_001A2F40(Ctx *c) { /* func_001A2F40 */
ENTER(0x1a2f40);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(31, 0x1a2f5c); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_001CB0A0(c);
SET64(4, rd16(c, (RW(18) + 0)));
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET64(4, RD(18) + RD(0)); goto L_001A30E8; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(4, RD(18) + RD(0)); goto L_001A30C0; }
SET32(3, RW(0) + 1);
{ int t = RD(4) == RD(3);  if (t) goto L_001A3078; }
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 284))); goto L_001A2F94; }
SET64(31, rd64(c, (RW(29) + 48))); goto L_001A3148;
L_001A2F94:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 868))); goto L_001A2FD0; }
wr8(c, (RW(2) + 392), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 284)));
SET64(4, (s32)rd32(c, (RW(2) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a2fb8);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 284)));
SET32(3, RW(0) + 1);
SET32(2, RW(0) + 2);
wr8(c, (RW(4) + 384), (u8)RW(3));
wr32(c, (RW(4) + 388), RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 868)));
L_001A2FD0:;
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
SET64(31, 0x1a2fe4); SET32(5, RW(0) + 257); F_0030CCB0(c);
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x1a2ff4); SET64(4, (s32)rd32(c, (RW(18) + 868))); F_0030D1B0(c);
SET64(3, (s64)(s32)0x3f000000);
wr32(c, (RW(29) + 76), RW(3));
SET64(3, (s32)rd32(c, (RW(28) + -32220)));
SET64(16, (s32)rd32(c, (RW(18) + 624)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001A3038; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
L_001A3010:;
SET32(3, RW(17) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1a3024); SET32(5, RW(29) + 76); F_001B8300(c);
SET64(3, (s32)rd32(c, (RW(28) + -32220)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 4))); { POLL(); goto L_001A3010; } }
L_001A3038:;
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_001A3040:;
SET64(4, (s32)rd32(c, (RW(16) + 324)));
{ int t = RD(4) == RD(0);  if (t) goto L_001A3058; }
SET64(31, 0x1a3054); SET32(5, RW(0) + 250); F_001B5E20(c);
L_001A3058:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001A3040; } }
SET64(3, rd16(c, (RW(18) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(18) + 0), (u16)RW(3)); goto L_001A3144;
L_001A3078:;
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x1a3088); SET64(4, (s32)rd32(c, (RW(18) + 868))); F_0030D1B0(c);
SET64(2, (s32)rd32(c, (RW(18) + 868)));
SET64(31, 0x1a3094); SET32(4, RW(2) + 16); F_00172D40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001A3144; }
SET64(31, 0x1a30a4); SET64(4, RD(18) + RD(0)); F_001A4A90(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x1a30b0); SET64(5, RD(0) + RD(0)); F_001A40A0(c);
SET64(3, rd16(c, (RW(18) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(18) + 0), (u16)RW(3)); goto L_001A3144;
L_001A30C0:;
SET64(31, 0x1a30c8); SET64(5, RD(0) + RD(0)); F_001A47B0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001A3144; }
SET64(31, 0x1a30d8); SET64(4, (s32)rd32(c, (RW(18) + 868))); F_0030D170(c);
SET64(3, rd16(c, (RW(18) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(18) + 0), (u16)RW(3)); goto L_001A3144;
L_001A30E8:;
SET64(31, 0x1a30f0); SET32(5, RW(0) + 1); F_001A47B0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001A3144; }
SET64(31, 0x1a3100);  F_002E1CB0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_001A3144; }
SET64(31, 0x1a3110); SET64(4, RD(18) + RD(0)); F_00139AB0(c);
SET64(16, (s32)rd32(c, (RW(18) + 284)));
if (RD(16) == RD(0)) { SET64(4, RD(0) + RD(0)); goto L_001A3130; }
SET64(31, 0x1a3124); SET64(4, RD(16) + RD(0)); F_001A9A10(c);
SET64(31, 0x1a312c); SET64(4, RD(16) + RD(0)); F_001004B0(c);
SET64(4, RD(0) + RD(0));
L_001A3130:;
SET64(31, 0x1a3138); wr32(c, (RW(18) + 284), RW(0)); F_00138B20(c);
SET64(31, 0x1a3140); SET64(4, RD(0) + RD(0)); F_0013C340(c);
wr8(c, (RW(18) + 108), (u8)RW(0));
L_001A3144:;
SET64(31, rd64(c, (RW(29) + 48)));
L_001A3148:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

static void B_001A3160(Ctx *c, u32 entry) { /* func_001A3160 */
ENTER(entry);
switch (entry) { case 0x1a31a0: goto L_001A31A0; case 0x1a31e4: goto L_001A31E4; case 0x1a31ec: goto L_001A31EC; case 0x1a3214: goto L_001A3214; case 0x1a3334: goto L_001A3334; case 0x1a334c: goto L_001A334C; case 0x1a33ac: goto L_001A33AC; case 0x1a33d0: goto L_001A33D0; }
L_001A3160:;
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(6, rd16(c, (RW(4) + 0)));
SET64(1, RD(6) < (u64)(s64)8);
{ int t = RD(1) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001A33E8; }
SET64(5, (s64)(s32)0x490000);
SET32(3, RW(6) << 2);
SET32(5, RW(5) + 22752);
SET32(3, RW(3) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x1a3160: goto L_001A3160; case 0x1a31a0: goto L_001A31A0; case 0x1a31e4: goto L_001A31E4; case 0x1a31ec: goto L_001A31EC; case 0x1a3214: goto L_001A3214; case 0x1a3334: goto L_001A3334; case 0x1a334c: goto L_001A334C; case 0x1a33ac: goto L_001A33AC; case 0x1a33d0: goto L_001A33D0; default: rt_jump(c, t); return; } }
L_001A31A0:;
SET64(25, (s32)rd32(c, (RW(16) + 236)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1a31b0); SET32(4, RW(16) + 220); rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_001A33EC; }
SET64(25, (s32)rd32(c, (RW(16) + 236)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1a31c8); SET32(4, RW(16) + 220); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 240)));
SET64(31, 0x1a31d4); SET64(4, RD(16) + RD(0)); F_001A6500(c);
SET64(31, 0x1a31dc); SET64(4, (s32)rd32(c, (RW(16) + 240))); F_00100430(c);
wr32(c, (RW(16) + 240), RW(0)); goto L_001A33E8;
L_001A31E4:;
SET32(2, RW(6) + 1);
wr16(c, (RW(16) + 0), (u16)RW(2));
L_001A31EC:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1a31f8); SET32(5, RW(0) + 1); F_001A62C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1a3204); SET64(5, RD(0) + RD(0)); F_001A62C0(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_001A33E8;
L_001A3214:;
SET64(25, (s32)rd32(c, (RW(16) + 236)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1a3224); SET32(4, RW(16) + 220); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001A33E8; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(16) + RD(0));
L_001A3234:;
SET64(4, (s32)rd32(c, (RW(17) + 324)));
{ int t = RD(4) == RD(0);  if (t) goto L_001A3250; }
SET64(31, 0x1a3248);  F_001B60C0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_001A3260; }
L_001A3250:;
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < (s64)3);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001A3234; } }
L_001A3260:;
SET64(3, RSD(18) < (s64)3);
{ int t = RD(3) != RD(0);  if (t) goto L_001A33E8; }
SET64(25, (s32)rd32(c, (RW(16) + 236)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1a327c); SET32(4, RW(16) + 220); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 280), (u8)RW(2));
SET64(2, rd8(c, (RW(16) + 272)));
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001A331C; }
SET64(2, rd8(c, (RW(16) + 280)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A3318; }
c->f[3].u = rd32(c, (RW(16) + 268));
c->f[2].u = rd32(c, (RW(16) + 264));
c->f[1].u = rd32(c, (RW(16) + 260));
c->f[0].u = rd32(c, (RW(16) + 256));
wr32(c, (RW(29) + 64), c->f[0].u);
wr32(c, (RW(29) + 68), c->f[1].u);
wr32(c, (RW(29) + 72), c->f[2].u);
wr32(c, (RW(29) + 76), c->f[3].u);
SET64(4, (s32)rd32(c, (RW(16) + 252)));
SET64(6, (s32)rd32(c, (RW(16) + 276)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1a32d4); SET32(5, RW(29) + 64); rt_call(c, t); }
SET64(2, (s64)(s32)0x490000);
SET64(3, (s32)rd32(c, (RW(16) + 252)));
c->f[1].u = rd32(c, (RW(2) + 20536));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(3) + 832), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(3) + 812)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x1a3304); SET32(4, RW(3) + 812); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 252)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 388)));
{ u32 t = RW(25); SET64(31, 0x1a3318);  rt_call(c, t); }
L_001A3318:;
SET64(4, RD(16) + RD(0));
L_001A331C:;
SET64(31, 0x1a3324); SET32(5, RW(0) + 1); F_001A4E40(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_001A33E8;
L_001A3334:;
SET64(31, 0x1a333c); SET64(5, RD(0) + RD(0)); F_001A4E40(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_001A33E8;
L_001A334C:;
SET64(4, (s32)rd32(c, (RW(16) + 160)));
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x1a3360);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001A33E8; }
SET64(3, rd8(c, (RW(16) + 1072)));
if (RD(3) == RD(0)) { SET64(3, rd8(c, (RW(16) + 848))); goto L_001A3380; }
SET32(3, RW(0) + 7);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_001A33E8;
L_001A3380:;
if (RD(3) != RD(0)) { SET32(3, RW(0) + 1); goto L_001A33A0; }
SET64(31, 0x1a3390);  F_002E1CC0(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_001A33E8;
L_001A33A0:;
wr32(c, (RW(16) + 1872), RW(3));
wr16(c, (RW(16) + 0), (u16)RW(0)); goto L_001A33E8;
L_001A33AC:;
SET64(31, 0x1a33b4);  F_002E1CB0(c);
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_001A33E8; }
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_001A33E8;
L_001A33D0:;
SET64(3, rd8(c, (RW(16) + 1072)));
{ int t = RD(3) != RD(0);  if (t) goto L_001A33E8; }
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 1872), RW(3));
wr16(c, (RW(16) + 0), (u16)RW(0));
L_001A33E8:;
SET64(31, rd64(c, (RW(29) + 48)));
L_001A33EC:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}
void F_001A3160(Ctx *c) { B_001A3160(c, 0x1a3160); }
void F_001A31A0(Ctx *c) { B_001A3160(c, 0x1a31a0); }
void F_001A31E4(Ctx *c) { B_001A3160(c, 0x1a31e4); }
void F_001A31EC(Ctx *c) { B_001A3160(c, 0x1a31ec); }
void F_001A3214(Ctx *c) { B_001A3160(c, 0x1a3214); }
void F_001A3334(Ctx *c) { B_001A3160(c, 0x1a3334); }
void F_001A334C(Ctx *c) { B_001A3160(c, 0x1a334c); }
void F_001A33AC(Ctx *c) { B_001A3160(c, 0x1a33ac); }
void F_001A33D0(Ctx *c) { B_001A3160(c, 0x1a33d0); }

void F_001A3400(Ctx *c) { /* func_001A3400 */
ENTER(0x1a3400);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(31, 0x1a3424); SET64(16, RD(4) + RD(0)); F_001CB0A0(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(2, RW(0) + 31);
if (RD(3) == RD(2)) { SET64(2, rd8(c, (RW(16) + 1090))); goto L_001A3C24; }
SET32(2, RW(0) + 21);
{ int t = RD(3) == RD(2);  if (t) goto L_001A3C20; }
SET32(2, RW(0) + 30);
if (RD(3) == RD(2)) { SET64(2, rd8(c, (RW(16) + 1090))); goto L_001A3BB4; }
SET32(2, RW(0) + 20);
if (RD(3) == RD(2)) { SET64(4, (s32)rd32(c, (RW(16) + 868))); goto L_001A3B98; }
SET32(2, RW(0) + 6);
if (RD(3) == RD(2)) { SET64(2, rd8(c, (RW(16) + 1090))); goto L_001A39E8; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(2, rd8(c, (RW(16) + 1090))); goto L_001A3600; }
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { SET64(3, rd16(c, (RW(16) + 636))); goto L_001A3584; }
SET32(2, RW(0) + 3);
if (RD(3) == RD(2)) { SET64(4, (s32)rd32(c, (RW(16) + 160))); goto L_001A355C; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(4, RD(16) + RD(0)); goto L_001A351C; }
SET32(5, RW(0) + 1);
if (RD(3) == RD(5)) { SET64(4, RD(16) + RD(0)); goto L_001A34EC; }
if (RD(3) == RD(0)) { SET64(4, RD(5) + RD(0)); goto L_001A34B0; }
SET64(4, (s32)rd32(c, (RW(16) + 868))); goto L_001A3CC4;
L_001A34B0:;
SET64(31, 0x1a34b8);  F_00138B20(c);
SET64(31, 0x1a34c0); SET64(4, RD(0) + RD(0)); F_0013C320(c);
SET64(3, (s64)(s32)0x3c880000);
SET64(4, (s32)rd32(c, (RW(16) + 868)));
SET64(2, (s64)(s32)0x3f800000);
SET64(3, RD(3) | 0x8889);
c->f[12].u = RW(3);
c->f[13].u = RW(2);
SET64(31, 0x1a34e0); SET32(5, RW(0) + 256); F_0030CCB0(c);
SET32(2, RW(0) + 1);
wr16(c, (RW(16) + 0), (u16)RW(2)); goto L_001A3CC0;
L_001A34EC:;
SET64(31, 0x1a34f4);  F_001A4E40(c);
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3);  if (t) goto L_001A3CC0; }
c->f[12].u = RW(0);
SET64(31, 0x1a350c); SET64(4, RD(16) + RD(0)); F_001CB020(c);
SET64(2, rd16(c, (RW(16) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 0), (u16)RW(2)); goto L_001A3CC0;
L_001A351C:;
SET64(31, 0x1a3524); SET64(5, RD(0) + RD(0)); F_001A4E40(c);
SET64(2, (s32)rd32(c, (RW(16) + 148)));
if (RSD(2) < 0) { SET64(2, rd16(c, (RW(16) + 0))); goto L_001A3550; }
SET64(2, rd8(c, (RW(16) + 1092)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A3CC0; }
wr8(c, (RW(16) + 1092), (u8)RW(0));
SET64(2, rd16(c, (RW(16) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 0), (u16)RW(2)); goto L_001A3CC0;
L_001A3550:;
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 0), (u16)RW(2)); goto L_001A3CC0;
L_001A355C:;
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x1a356c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001A3CC0; }
wr8(c, (RW(16) + 1092), (u8)RW(0));
SET32(2, RW(0) + 4);
wr16(c, (RW(16) + 0), (u16)RW(2)); goto L_001A3CC0;
L_001A3584:;
SET32(2, RW(0) + -1);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(16));
SET64(3, (s32)rd32(c, (RW(3) + 640)));
{ int t = RD(3) == RD(2);  if (t) goto L_001A35E8; }
SET64(31, 0x1a35a4);  F_00139590(c);
SET64(31, 0x1a35ac);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 20)));
SET64(2, rd16(c, (RW(16) + 636)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 640)));
if (RSD(2) < 0) { SET64(2, RD(0) + RD(0)); goto L_001A35E0; }
SET32(3, RW(2) << 2);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(2, RW(2) + RW(3));
SET64(31, 0x1a35dc); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_001B8110(c);
SET64(2, RD(2) & 0xff);
L_001A35E0:;
{ int t = RD(2) != RD(0);  if (t) goto L_001A3CC0; }
L_001A35E8:;
c->f[12].u = RW(0);
SET64(31, 0x1a35f4); SET64(4, RD(16) + RD(0)); F_001CB020(c);
SET32(2, RW(0) + 5);
wr16(c, (RW(16) + 0), (u16)RW(2));
SET64(2, rd8(c, (RW(16) + 1090)));
L_001A3600:;
if (RD(2) != RD(0)) { SET64(2, rd8(c, (RW(16) + 156))); goto L_001A3610; }
SET64(18, RD(0) + RD(0)); goto L_001A3660;
L_001A3610:;
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 160))); goto L_001A3640; }
SET64(4, (s32)rd32(c, (RW(16) + 160)));
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x1a362c); c->f[12].u = rd32(c, (RW(16) + 84)); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001A363C; }
SET64(18, RD(0) + RD(0)); goto L_001A3660;
L_001A363C:;
SET64(3, (s32)rd32(c, (RW(16) + 160)));
L_001A3640:;
SET32(2, RW(0) + 2);
SET64(3, rd16(c, (RW(3) + 288)));
if (RD(3) != RD(2)) { SET64(18, RD(0) + (s64)1); goto L_001A3660; }
c->f[12].u = RW(0);
SET64(31, 0x1a365c); SET64(4, RD(16) + RD(0)); F_001CB020(c);
SET64(18, RD(0) + (s64)1);
L_001A3660:;
SET64(2, rd8(c, (RW(16) + 272)));
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001A36D4; }
SET64(2, rd8(c, (RW(16) + 280)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A36D0; }
SET64(2, rd8(c, (RW(16) + 848)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 252))); goto L_001A36B8; }
SET64(31, 0x1a368c);  F_002C5120(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001A36B4; }
SET64(31, 0x1a369c);  F_002C5110(c);
SET64(31, 0x1a36a4); SET64(4, RD(2) + RD(0)); F_002C5310(c);
SET64(3, RD(0) < RD(2));
SET64(2, (s32)rd32(c, (RW(16) + 252)));
SET64(3, RD(3) ^ 0x1);
wr8(c, (RW(2) + 956), (u8)RW(3));
L_001A36B4:;
SET64(4, (s32)rd32(c, (RW(16) + 252)));
L_001A36B8:;
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 392)));
{ u32 t = RW(25); SET64(31, 0x1a36d0);  rt_call(c, t); }
L_001A36D0:;
SET64(4, RD(16) + RD(0));
L_001A36D4:;
SET64(31, 0x1a36dc);  F_001A4C80(c);
SET64(3, (s32)rd32(c, (RW(16) + 1028)));
if (RD(3) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001A36F4; }
SET64(2, (s32)rd32(c, (RW(3) + 216)));
SET64(2, RSD(2) < (s64)1);
SET64(2, RD(2) ^ 0x1);
L_001A36F4:;
if (RD(2) != RD(0)) { SET32(2, RW(0) + 9); goto L_001A3728; }
if (RD(3) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001A370C; }
SET64(2, (s32)rd32(c, (RW(3) + 216)));
SET64(2, RSD(2) < RSD(0));
L_001A370C:;
{ int t = RD(2) != RD(0);  if (t) goto L_001A3724; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x1a3720); SET64(5, RD(0) + RD(0)); F_001A4E40(c);
SET64(17, RD(2) + RD(0));
L_001A3724:;
SET32(2, RW(0) + 9);
L_001A3728:;
if (RD(17) == RD(2)) { SET64(3, (s32)rd32(c, (RW(16) + 1028))); goto L_001A3750; }
SET64(2, (s32)rd32(c, (RW(16) + 1028)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001A3744; }
SET64(2, (s32)rd32(c, (RW(2) + 216)));
SET64(2, RSD(2) < RSD(0));
L_001A3744:;
if (RD(2) == RD(0)) { SET64(3, rd8(c, (RW(16) + 1074))); goto L_001A3784; }
SET64(3, (s32)rd32(c, (RW(16) + 1028)));
L_001A3750:;
if (RD(3) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001A3760; }
SET64(2, (s32)rd32(c, (RW(3) + 216)));
SET64(2, RSD(2) < RSD(0));
L_001A3760:;
if (RD(2) == RD(0)) { SET32(2, RW(0) + 30); goto L_001A377C; }
SET64(3, (s16)rd16(c, (RW(3) + 184)));
SET32(2, RW(0) + 20);
wr32(c, (RW(16) + 1036), RW(3));
wr16(c, (RW(16) + 0), (u16)RW(2)); goto L_001A3CC0;
L_001A377C:;
wr16(c, (RW(16) + 0), (u16)RW(2)); goto L_001A3CC0;
L_001A3784:;
{ int t = RD(3) == RD(0);  if (t) goto L_001A37AC; }
{ int t = RD(18) == RD(0);  if (t) goto L_001A37AC; }
SET64(2, rd8(c, (RW(16) + 1080)));
{ int t = RD(2) != RD(0);  if (t) goto L_001A37AC; }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 1080), (u8)RW(2)); goto L_001A3864;
L_001A37AC:;
if (RD(3) == RD(0)) { SET64(2, rd8(c, (RW(16) + 1080))); goto L_001A3868; }
{ int t = RD(18) != RD(0);  if (t) goto L_001A3864; }
SET64(2, rd8(c, (RW(16) + 1080)));
{ int t = RD(2) != RD(0);  if (t) goto L_001A3864; }
SET64(2, (s32)rd32(c, (RW(16) + 1868)));
SET32(3, RW(0) + -1);
if (RD(2) == RD(3)) { SET64(4, RD(16) + RD(0)); goto L_001A3850; }
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(17, (s32)rd32(c, (RW(2) + 1672)));
if (RD(17) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 1868))); goto L_001A3828; }
SET64(4, (s32)rd32(c, (RW(17) + 8)));
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 16))); goto L_001A3804; }
SET64(31, 0x1a3800);  F_003219B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
L_001A3804:;
SET32(2, RW(0) + -1);
if (RD(4) == RD(2)) { SET64(4, RD(17) + RD(0)); goto L_001A381C; }
SET64(31, 0x1a3818);  F_003219B0(c);
SET64(4, RD(17) + RD(0));
L_001A381C:;
SET64(31, 0x1a3824);  F_001004B0(c);
SET64(3, (s32)rd32(c, (RW(16) + 1868)));
L_001A3828:;
SET32(2, RW(0) + -1);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(16));
wr32(c, (RW(3) + 1672), RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 1868)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(16));
wr32(c, (RW(3) + 1672), RW(0));
wr32(c, (RW(16) + 1868), RW(2));
SET64(4, RD(16) + RD(0));
L_001A3850:;
SET64(31, 0x1a3858); SET64(5, RD(0) + RD(0)); F_001A62C0(c);
SET32(2, RW(0) + 1);
wr16(c, (RW(16) + 0), (u16)RW(2));
wr8(c, (RW(16) + 1074), (u8)RW(0));
L_001A3864:;
SET64(2, rd8(c, (RW(16) + 1080)));
L_001A3868:;
{ int t = RD(2) == RD(0);  if (t) goto L_001A3900; }
SET64(3, (s32)rd32(c, (RW(16) + 308)));
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { wr32(c, (RW(16) + 312), RW(0)); goto L_001A38A4; }
SET32(2, RW(0) + 5);
{ int t = RD(3) == RD(2);  if (t) goto L_001A38A0; }
SET32(2, RW(0) + 3);
{ int t = RD(3) == RD(2);  if (t) goto L_001A38A0; }
wr8(c, (RW(16) + 1080), (u8)RW(0)); goto L_001A38F0;
L_001A38A0:;
wr32(c, (RW(16) + 312), RW(0));
L_001A38A4:;
SET64(3, (s32)rd32(c, (RW(16) + 284)));
wr32(c, (RW(3) + 348), RW(0));
c->f[0].u = rd32(c, (RW(28) + -32260));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
wr32(c, (RW(2) + 264), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32256));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
wr32(c, (RW(2) + 268), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32252));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
wr32(c, (RW(2) + 272), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
wr32(c, (RW(2) + 276), RW(0));
SET64(4, (s32)rd32(c, (RW(3) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a38ec);  rt_call(c, t); }
wr8(c, (RW(16) + 1080), (u8)RW(0));
L_001A38F0:;
wr8(c, (RW(16) + 1074), (u8)RW(0));
SET64(2, rd16(c, (RW(16) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 0), (u16)RW(2));
L_001A3900:;
SET64(31, 0x1a3908);  F_002E1CB0(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_001A3CC0; }
SET64(17, (s32)rd32(c, (RW(16) + 844)));
SET32(2, RW(0) + -1);
{ int t = RD(17) != RD(2);  if (t) goto L_001A3928; }
SET64(17, RD(0) + RD(0));
L_001A3928:;
SET64(31, 0x1a3930);  F_00138DE0(c);
SET64(5, RD(17) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x1a3940); SET64(5, RSD(5) >> 48); F_0013E020(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x8);
{ int t = RD(2) == RD(0);  if (t) goto L_001A3CC0; }
SET64(3, (s32)rd32(c, (RW(16) + 1028)));
if (RD(3) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001A3968; }
SET64(2, (s32)rd32(c, (RW(3) + 216)));
SET64(2, RSD(2) < (s64)1);
SET64(2, RD(2) ^ 0x1);
L_001A3968:;
{ int t = RD(2) != RD(0);  if (t) goto L_001A3CC0; }
if (RD(3) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001A3980; }
SET64(2, (s32)rd32(c, (RW(3) + 216)));
SET64(2, RSD(2) < RSD(0));
L_001A3980:;
if (RD(2) != RD(0)) { SET32(2, RW(0) + 20); goto L_001A39E0; }
if (RD(3) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001A3994; }
SET64(2, rd8(c, (RW(3) + 200)));
L_001A3994:;
{ int t = RD(2) == RD(0);  if (t) goto L_001A39DC; }
SET64(2, (s32)rd32(c, (RW(16) + 252)));
wr16(c, (RW(2) + 774), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(16) + 852)));
if (RD(5) == RD(0)) { SET64(17, (s32)rd32(c, (RW(16) + 1028))); goto L_001A39B8; }
SET32(5, RW(5) + 672);
SET64(17, (s32)rd32(c, (RW(16) + 1028)));
L_001A39B8:;
SET64(31, 0x1a39c0); SET64(4, RD(17) + RD(0)); F_002284F0(c);
SET32(6, RW(0) + 1);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(17) + 216), RW(6));
SET64(31, 0x1a39d4); SET64(5, RD(0) + RD(0)); F_001A1B20(c);
 goto L_001A3CC0;
L_001A39DC:;
SET32(2, RW(0) + 20);
L_001A39E0:;
wr16(c, (RW(16) + 0), (u16)RW(2)); goto L_001A3CC0;
L_001A39E8:;
if (RD(2) != RD(0)) { SET64(2, rd8(c, (RW(16) + 156))); goto L_001A39F8; }
SET64(2, rd8(c, (RW(16) + 272))); goto L_001A3A4C;
L_001A39F8:;
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 160))); goto L_001A3A28; }
SET64(4, (s32)rd32(c, (RW(16) + 160)));
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x1a3a14); c->f[12].u = rd32(c, (RW(16) + 84)); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001A3A24; }
 goto L_001A3A48;
L_001A3A24:;
SET64(3, (s32)rd32(c, (RW(16) + 160)));
L_001A3A28:;
SET32(2, RW(0) + 2);
SET64(3, rd16(c, (RW(3) + 288)));
if (RD(3) != RD(2)) { SET64(17, RD(0) + (s64)1); goto L_001A3A48; }
c->f[12].u = RW(0);
SET64(31, 0x1a3a44); SET64(4, RD(16) + RD(0)); F_001CB020(c);
SET64(17, RD(0) + (s64)1);
L_001A3A48:;
SET64(2, rd8(c, (RW(16) + 272)));
L_001A3A4C:;
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001A3ABC; }
SET64(2, rd8(c, (RW(16) + 280)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A3AB8; }
SET64(2, rd8(c, (RW(16) + 848)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 252))); goto L_001A3AA0; }
SET64(31, 0x1a3a74);  F_002C5120(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001A3A9C; }
SET64(31, 0x1a3a84);  F_002C5110(c);
SET64(31, 0x1a3a8c); SET64(4, RD(2) + RD(0)); F_002C5310(c);
SET64(3, RD(0) < RD(2));
SET64(2, (s32)rd32(c, (RW(16) + 252)));
SET64(3, RD(3) ^ 0x1);
wr8(c, (RW(2) + 956), (u8)RW(3));
L_001A3A9C:;
SET64(4, (s32)rd32(c, (RW(16) + 252)));
L_001A3AA0:;
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 392)));
{ u32 t = RW(25); SET64(31, 0x1a3ab8);  rt_call(c, t); }
L_001A3AB8:;
SET64(4, RD(16) + RD(0));
L_001A3ABC:;
SET64(31, 0x1a3ac4);  F_001A4C80(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1a3ad0); SET64(5, RD(0) + RD(0)); F_001A4E40(c);
{ int t = RD(17) != RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001A3CC0; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x1a3ae4); SET64(5, RD(0) + RD(0)); F_001A40A0(c);
SET32(2, RW(0) + 9);
if (RD(18) != RD(2)) { SET64(2, (s32)rd32(c, (RW(16) + 1868))); goto L_001A3B00; }
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 1872), RW(2));
wr16(c, (RW(16) + 0), (u16)RW(0)); goto L_001A3CC0;
L_001A3B00:;
SET32(3, RW(0) + -1);
if (RD(2) == RD(3)) { SET64(4, RD(16) + RD(0)); goto L_001A3B84; }
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(17, (s32)rd32(c, (RW(2) + 1672)));
if (RD(17) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 1868))); goto L_001A3B5C; }
SET64(4, (s32)rd32(c, (RW(17) + 8)));
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 16))); goto L_001A3B38; }
SET64(31, 0x1a3b34);  F_003219B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
L_001A3B38:;
SET32(2, RW(0) + -1);
if (RD(4) == RD(2)) { SET64(4, RD(17) + RD(0)); goto L_001A3B50; }
SET64(31, 0x1a3b4c);  F_003219B0(c);
SET64(4, RD(17) + RD(0));
L_001A3B50:;
SET64(31, 0x1a3b58);  F_001004B0(c);
SET64(3, (s32)rd32(c, (RW(16) + 1868)));
L_001A3B5C:;
SET32(2, RW(0) + -1);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(16));
wr32(c, (RW(3) + 1672), RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 1868)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(16));
wr32(c, (RW(3) + 1672), RW(0));
wr32(c, (RW(16) + 1868), RW(2));
SET64(4, RD(16) + RD(0));
L_001A3B84:;
SET64(31, 0x1a3b8c); SET64(5, RD(0) + RD(0)); F_001A62C0(c);
SET32(2, RW(0) + 1);
wr16(c, (RW(16) + 0), (u16)RW(2)); goto L_001A3CC0;
L_001A3B98:;
SET64(3, (s64)(s32)0x3f000000);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(3);
c->f[13].u = RW(2);
SET64(31, 0x1a3bb0); SET32(5, RW(0) + 257); F_0030CCB0(c);
SET64(2, rd8(c, (RW(16) + 1090)));
L_001A3BB4:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 160))); goto L_001A3C08; }
SET64(2, rd8(c, (RW(16) + 156)));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 160))); goto L_001A3BE8; }
SET64(4, (s32)rd32(c, (RW(16) + 160)));
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x1a3bdc); c->f[12].u = rd32(c, (RW(16) + 84)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001A3C04; }
SET64(3, (s32)rd32(c, (RW(16) + 160)));
L_001A3BE8:;
SET32(2, RW(0) + 2);
SET64(3, rd16(c, (RW(3) + 288)));
{ int t = RD(3) != RD(2);  if (t) goto L_001A3C04; }
c->f[12].u = RW(0);
SET64(31, 0x1a3c04); SET64(4, RD(16) + RD(0)); F_001CB020(c);
L_001A3C04:;
SET64(4, (s32)rd32(c, (RW(16) + 160)));
L_001A3C08:;
SET64(31, 0x1a3c10);  F_0015F450(c);
SET64(2, rd16(c, (RW(16) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 0), (u16)RW(2)); goto L_001A3CC0;
L_001A3C20:;
SET64(2, rd8(c, (RW(16) + 1090)));
L_001A3C24:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 868))); goto L_001A3C78; }
SET64(2, rd8(c, (RW(16) + 156)));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 160))); goto L_001A3C58; }
SET64(4, (s32)rd32(c, (RW(16) + 160)));
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x1a3c4c); c->f[12].u = rd32(c, (RW(16) + 84)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001A3C74; }
SET64(3, (s32)rd32(c, (RW(16) + 160)));
L_001A3C58:;
SET32(2, RW(0) + 2);
SET64(3, rd16(c, (RW(3) + 288)));
{ int t = RD(3) != RD(2);  if (t) goto L_001A3C74; }
c->f[12].u = RW(0);
SET64(31, 0x1a3c74); SET64(4, RD(16) + RD(0)); F_001CB020(c);
L_001A3C74:;
SET64(2, (s32)rd32(c, (RW(16) + 868)));
L_001A3C78:;
SET64(31, 0x1a3c80); SET32(4, RW(2) + 16); F_00172D40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001A3CC0; }
SET64(4, (s32)rd32(c, (RW(16) + 160)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_001A3C9C; }
SET64(2, rd8(c, (RW(4) + 32)));
L_001A3C9C:;
{ int t = RD(2) == RD(0);  if (t) goto L_001A3CC0; }
SET64(31, 0x1a3cac);  F_0015F380(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001A3CC0; }
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 1872), RW(2));
wr16(c, (RW(16) + 0), (u16)RW(0));
L_001A3CC0:;
SET64(4, (s32)rd32(c, (RW(16) + 868)));
L_001A3CC4:;
SET64(31, 0x1a3ccc); c->f[12].u = rd32(c, (RW(16) + 84)); F_0030D1B0(c);
SET64(31, 0x1a3cd4); SET64(4, RD(16) + RD(0)); F_001CB090(c);
SET64(19, RD(0) + RD(0));
SET64(17, RD(16) + RD(0));
L_001A3CDC:;
SET64(5, (s32)rd32(c, (RW(17) + 640)));
SET32(3, RW(0) + -1);
{ int t = RD(5) == RD(3);  if (t) goto L_001A3D38; }
SET64(3, (s32)rd32(c, (RW(17) + 628)));
{ int t = RD(3) != RD(0);  if (t) goto L_001A3D38; }
{ int t = RSD(5) < 0; SET64(4, (s32)rd32(c, (RW(16) + 624))); if (t) goto L_001A3D20; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(5) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x1a3d14); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_001B8190(c);
SET64(3, RD(2) & 0xff); goto L_001A3D28;
L_001A3D20:;
SET64(3, RD(0) + (s64)1);
L_001A3D28:;
{ int t = RD(3) == RD(0);  if (t) goto L_001A3D38; }
SET32(3, RW(0) + -1);
wr32(c, (RW(17) + 640), RW(3));
L_001A3D38:;
SET64(4, (s32)rd32(c, (RW(17) + 680)));
SET32(3, RW(0) + -1);
{ int t = RD(4) == RD(3);  if (t) goto L_001A3E10; }
SET64(3, (s32)rd32(c, (RW(16) + 160)));
SET64(18, (s32)rd32(c, (RW(3) + 168)));
{ int t = RD(18) == RD(0); SET64(5, RD(4) & 0xffff); if (t) goto L_001A3D88; }
SET64(31, 0x1a3d60); SET64(4, RD(18) + RD(0)); F_0019C750(c);
SET32(3, RW(0) + -1);
if (RD(2) != RD(3)) { SET32(3, RW(2) << 2); goto L_001A3D74; }
SET64(18, RD(0) + RD(0)); goto L_001A3D7C;
L_001A3D74:;
SET32(3, RW(18) + RW(3));
SET64(18, (s32)rd32(c, (RW(3) + 4)));
L_001A3D7C:;
 goto L_001A3D90;
L_001A3D88:;
SET64(18, RD(0) + RD(0));
L_001A3D90:;
{ int t = RD(18) == RD(0);  if (t) goto L_001A3E10; }
SET64(3, (s32)rd32(c, (RW(17) + 648)));
{ int t = RSD(3) < 0; SET64(4, (s32)rd32(c, (RW(16) + 624))); if (t) goto L_001A3DC0; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x1a3db8); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_001B8290(c);
SET64(3, RD(2) & 0xff); goto L_001A3DC8;
L_001A3DC0:;
SET64(3, RD(0) + RD(0));
L_001A3DC8:;
{ int t = RD(3) != RD(0);  if (t) goto L_001A3E10; }
wr32(c, (RW(29) + 92), RW(0));
SET64(3, (s32)rd32(c, (RW(17) + 648)));
{ int t = RSD(3) < 0; SET64(2, (s32)rd32(c, (RW(16) + 624))); if (t) goto L_001A3DF8; }
SET64(2, (s32)rd32(c, (RW(2) + 4)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1a3df8); SET32(5, RW(29) + 92); F_001B8300(c);
L_001A3DF8:;
SET32(2, RW(0) + -1);
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x1a3e0c); wr32(c, (RW(17) + 680), RW(2)); F_00157FA0(c);
L_001A3E10:;
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < (s64)2);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001A3CDC; } }
SET64(3, (s32)rd32(c, (RW(16) + 288)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_001A3EC4; }
SET64(2, (s32)rd32(c, (RW(3) + 28)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1a3e44);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 288))); goto L_001A3E74; }
SET64(17, (s32)rd32(c, (RW(16) + 288)));
if (RD(17) == RD(0)) { wr32(c, (RW(16) + 288), RW(0)); goto L_001A3E6C; }
SET64(31, 0x1a3e60); SET64(4, RD(17) + RD(0)); F_001A9A10(c);
SET64(31, 0x1a3e68); SET64(4, RD(17) + RD(0)); F_001004B0(c);
wr32(c, (RW(16) + 288), RW(0));
L_001A3E6C:;
wr32(c, (RW(16) + 288), RW(0)); goto L_001A3EC0;
L_001A3E74:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x1a3e80); SET64(4, (s32)rd32(c, (RW(2) + 12))); F_001419B0(c);
SET32(5, RW(0) + 1);
if (RD(2) != RD(5)) { SET64(4, (s32)rd32(c, (RW(16) + 288))); goto L_001A3EB4; }
SET64(2, (s32)rd32(c, (RW(16) + 288)));
wr8(c, (RW(2) + 392), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 288)));
SET64(4, (s32)rd32(c, (RW(2) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a3eac);  rt_call(c, t); }
 goto L_001A3EC0;
L_001A3EB4:;
SET32(3, RW(0) + 2);
wr8(c, (RW(4) + 384), (u8)RW(5));
wr32(c, (RW(4) + 388), RW(3));
L_001A3EC0:;
SET64(31, rd64(c, (RW(29) + 64)));
L_001A3EC4:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001A3EE0(Ctx *c) { /* func_001A3EE0 */
ENTER(0x1a3ee0);
wr32(c, (RW(4) + 676), c->f[12].u); return;
}

void F_001A3EF0(Ctx *c) { /* func_001A3EF0 */
ENTER(0x1a3ef0);
wr32(c, (RW(4) + 672), c->f[12].u); return;
}

void F_001A3F00(Ctx *c) { /* func_001A3F00 */
ENTER(0x1a3f00);
 return;
}

void F_001A3F10(Ctx *c) { /* func_001A3F10 */
ENTER(0x1a3f10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, rd8(c, (RW(4) + 272)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_001A3F48; }
SET64(3, rd8(c, (RW(4) + 280)));
{ int t = RD(3) == RD(0);  if (t) goto L_001A3F44; }
SET64(4, (s32)rd32(c, (RW(4) + 252)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x1a3f44);  rt_call(c, t); }
L_001A3F44:;
SET64(31, rd64(c, (RW(29) + 0)));
L_001A3F48:;
SET32(29, RW(29) + 16); return;
}

void F_001A3F50(Ctx *c) { /* func_001A3F50 */
ENTER(0x1a3f50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 272)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001A3FF0; }
SET64(3, rd8(c, (RW(16) + 280)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001A3FF4; }
SET64(4, (s32)rd32(c, (RW(16) + 252)));
SET64(31, 0x1a3f80); SET32(6, RW(0) + 1); F_00144A60(c);
SET64(31, 0x1a3f88);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 252))); goto L_001A3F9C; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(16) + 252)));
L_001A3F9C:;
SET32(3, RW(0) + 10);
wr32(c, (RW(4) + 952), RW(5));
wr16(c, (RW(4) + 940), (u16)RW(3));
SET64(3, rd8(c, (RW(4) + 976)));
SET64(3, RD(3) | 0x1);
wr8(c, (RW(4) + 976), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 848)));
{ int t = RD(3) != RD(0);  if (t) goto L_001A3FF0; }
SET64(31, 0x1a3fc8);  F_002C5120(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001A3FF0; }
SET64(31, 0x1a3fd8);  F_002C5110(c);
SET64(31, 0x1a3fe0); SET64(4, RD(2) + RD(0)); F_002C5310(c);
SET64(3, (s32)rd32(c, (RW(16) + 252)));
SET64(4, RD(0) < RD(2));
SET64(4, RD(4) ^ 0x1);
wr8(c, (RW(3) + 956), (u8)RW(4));
L_001A3FF0:;
SET64(31, rd64(c, (RW(29) + 16)));
L_001A3FF4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001A4000(Ctx *c) { /* func_001A4000 */
ENTER(0x1a4000);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x1a4018); SET64(4, (s32)rd32(c, (RW(4) + 160))); F_0016E340(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 1090), (u8)RW(2));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001A4030(Ctx *c) { /* func_001A4030 */
ENTER(0x1a4030);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 160)));
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x1a404c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void F_001A4060(Ctx *c) { /* func_001A4060 */
ENTER(0x1a4060);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 160)));
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x1a4084);  rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 1092), (u8)RW(2));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001A40A0(Ctx *c) { /* func_001A40A0 */
ENTER(0x1a40a0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 840)));
SET64(3, (s32)rd32(c, (RW(4) + 16)));
SET64(16, (s32)rd32(c, (RW(4) + 20)));
SET64(17, (s32)rd32(c, (RW(3) + 8)));
{ int t = RD(16) == RD(17); SET64(18, RD(5) + RD(0)); if (t) goto L_001A4250; }
SET64(3, RD(16) << 32);
L_001A40DC:;
SET64(3, RSD(3) >> 32);
SET64(4, (s32)rd32(c, (RW(3) + 16)));
SET64(3, rd8(c, (RW(4) + 384)));
{ int t = RD(3) == RD(0);  if (t) goto L_001A4150; }
SET64(3, (s32)rd32(c, (RW(4) + 388)));
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); wr32(c, (RW(4) + 388), RW(3)); if (t) goto L_001A4120; }
SET64(4, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a4114);  rt_call(c, t); }
 goto L_001A4150;
L_001A4120:;
SET64(3, (s32)rd32(c, (RW(4) + 388)));
{ int t = RSD(3) >= 0;  if (t) goto L_001A4150; }
wr32(c, (RW(4) + 388), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 28)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1a4148);  rt_call(c, t); }
SET64(3, RD(2) & 0xff); goto L_001A4158;
L_001A4150:;
SET64(3, RD(0) + RD(0));
L_001A4158:;
{ int t = RD(3) == RD(0);  if (t) goto L_001A41D0; }
SET64(3, RD(16) << 32);
SET64(3, RSD(3) >> 32);
SET64(20, (s32)rd32(c, (RW(3) + 16)));
{ int t = RD(20) == RD(0);  if (t) goto L_001A4188; }
SET64(31, 0x1a417c); SET64(4, RD(20) + RD(0)); F_001A9A10(c);
SET64(31, 0x1a4184); SET64(4, RD(20) + RD(0)); F_001004B0(c);
L_001A4188:;
SET64(6, RD(16) << 32);
SET64(6, RSD(6) >> 32);
wr32(c, (RW(6) + 16), RW(0));
SET64(5, (s32)rd32(c, (RW(19) + 840)));
SET64(3, (s32)rd32(c, (RW(5) + 4)));
{ int t = RD(3) == RD(0);  if (t) goto L_001A4230; }
SET64(4, (s32)rd32(c, (RW(6) + 8)));
SET64(3, (s32)rd32(c, (RW(6) + 4)));
wr32(c, (RW(3) + 8), RW(4));
SET64(4, (s32)rd32(c, (RW(6) + 4)));
SET64(3, (s32)rd32(c, (RW(6) + 8)));
wr32(c, (RW(3) + 4), RW(4));
wr8(c, (RW(6) + 0), (u8)RW(0));
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET32(3, RW(3) + -1);
wr32(c, (RW(5) + 4), RW(3)); goto L_001A4230;
L_001A41D0:;
{ int t = RD(18) != RD(0);  if (t) goto L_001A41F0; }
SET64(3, RD(16) << 32);
SET64(3, RSD(3) >> 32);
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, rd8(c, (RW(3) + 392)));
{ int t = RD(3) != RD(0);  if (t) goto L_001A4230; }
L_001A41F0:;
SET64(2, RD(16) << 32);
SET64(2, RSD(2) >> 32);
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(4, (s32)rd32(c, (RW(2) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a4210);  rt_call(c, t); }
SET64(3, RD(16) << 32);
SET32(4, RW(0) + 1);
SET64(3, RSD(3) >> 32);
SET64(5, (s32)rd32(c, (RW(3) + 16)));
SET32(3, RW(0) + 2);
wr8(c, (RW(5) + 384), (u8)RW(4));
wr32(c, (RW(5) + 388), RW(3));
L_001A4230:;
SET64(3, RD(16) << 32);
SET64(3, RSD(3) >> 32);
SET64(16, (s32)rd32(c, (RW(3) + 8)));
SET64(3, RD(17) << 32);
SET64(3, RSD(3) >> 32);
if (RD(16) != RD(3)) { SET64(3, RD(16) << 32); { POLL(); goto L_001A40DC; } }
L_001A4250:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001A4270(Ctx *c) { /* func_001A4270 */
ENTER(0x1a4270);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 252)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 252), RW(0)); goto L_001A42AC; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x1a42a8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 252), RW(0));
L_001A42AC:;
SET64(4, (s32)rd32(c, (RW(18) + 160)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 160), RW(0)); goto L_001A42CC; }
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a42c8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 160), RW(0));
L_001A42CC:;
SET64(3, (s32)rd32(c, (RW(18) + 840)));
SET64(2, (s32)rd32(c, (RW(3) + 16)));
SET64(16, (s32)rd32(c, (RW(3) + 20)));
SET64(17, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(16) == RD(17);  if (t) goto L_001A4370; }
SET64(2, RD(16) << 32);
L_001A42E8:;
SET64(2, RSD(2) >> 32);
SET64(19, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(19) == RD(0);  if (t) goto L_001A4308; }
SET64(31, 0x1a4300); SET64(4, RD(19) + RD(0)); F_001A9A10(c);
SET64(31, 0x1a4308); SET64(4, RD(19) + RD(0)); F_001004B0(c);
L_001A4308:;
SET64(5, RD(16) << 32);
SET64(5, RSD(5) >> 32);
wr32(c, (RW(5) + 16), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 840)));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A4350; }
SET64(3, (s32)rd32(c, (RW(5) + 8)));
SET64(2, (s32)rd32(c, (RW(5) + 4)));
wr32(c, (RW(2) + 8), RW(3));
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET64(2, (s32)rd32(c, (RW(5) + 8)));
wr32(c, (RW(2) + 4), RW(3));
wr8(c, (RW(5) + 0), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(2, RW(2) + -1);
wr32(c, (RW(4) + 4), RW(2));
L_001A4350:;
SET64(2, RD(16) << 32);
SET64(2, RSD(2) >> 32);
SET64(16, (s32)rd32(c, (RW(2) + 8)));
SET64(2, RD(17) << 32);
SET64(2, RSD(2) >> 32);
if (RD(16) != RD(2)) { SET64(2, RD(16) << 32); { POLL(); goto L_001A42E8; } }
L_001A4370:;
SET32(4, RW(18) + 60);
SET64(31, 0x1a437c); SET64(5, RD(4) + RD(0)); F_001A4690(c);
SET64(31, 0x1a4384); SET64(4, (s32)rd32(c, (RW(18) + 276))); F_00100430(c);
wr32(c, (RW(18) + 276), RW(0));
SET64(31, 0x1a4390); SET64(4, (s32)rd32(c, (RW(18) + 240))); F_00100430(c);
wr32(c, (RW(18) + 240), RW(0));
SET64(16, (s32)rd32(c, (RW(18) + 944)));
if (RD(16) == RD(0)) { wr32(c, (RW(18) + 944), RW(0)); goto L_001A43F8; }
SET64(31, 0x1a43a8); SET64(4, RD(16) + RD(0)); F_003143E0(c);
SET32(4, RW(16) + 144);
if (RD(4) == RD(0)) { SET32(4, RW(16) + 80); goto L_001A43CC; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20816);
SET64(31, 0x1a43c8); wr32(c, (RW(16) + 176), RW(2)); F_002B30A0(c);
SET32(4, RW(16) + 80);
L_001A43CC:;
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001A43EC; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20880);
SET64(31, 0x1a43e8); wr32(c, (RW(16) + 112), RW(2)); F_002B2FE0(c);
SET64(4, RD(16) + RD(0));
L_001A43EC:;
SET64(31, 0x1a43f4);  F_001004B0(c);
wr32(c, (RW(18) + 944), RW(0));
L_001A43F8:;
SET64(4, (s32)rd32(c, (RW(18) + 1044)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 1044), RW(0)); goto L_001A4418; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a4414); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 1044), RW(0));
L_001A4418:;
SET64(4, (s32)rd32(c, (RW(18) + 1028)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 1028), RW(0)); goto L_001A4438; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a4434); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 1028), RW(0));
L_001A4438:;
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_001A4440:;
SET64(4, (s32)rd32(c, (RW(16) + 904)));
{ int t = RD(4) == RD(0);  if (t) goto L_001A4460; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a445c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001A4460:;
SET32(17, RW(17) + 1);
wr32(c, (RW(16) + 904), RW(0));
SET64(3, RSD(17) < (s64)6);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001A4440; } }
SET64(16, (s32)rd32(c, (RW(18) + 868)));
if (RD(16) == RD(0)) { wr32(c, (RW(18) + 868), RW(0)); goto L_001A4558; }
SET32(4, RW(16) + 432);
if (RD(4) == RD(0)) { SET32(3, RW(16) + 16); goto L_001A4504; }
SET64(2, (s64)(s32)0x4d0000);
SET64(8, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -20672);
SET64(6, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 440), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(7, (s32)rd32(c, (RW(16) + 444)));
SET32(8, RW(8) + -20556);
SET32(6, RW(6) + -20624);
SET32(3, RW(3) + -20604);
SET32(2, RW(16) + 720);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(7) + 16), RW(8));
wr32(c, (RW(16) + 600), RW(6));
wr32(c, (RW(16) + 604), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 444)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x1a44d8); wr32(c, (RW(3) + 20), RW(2)); F_0014CEA0(c);
SET32(4, RW(16) + 720);
{ int t = RD(4) == RD(0);  if (t) goto L_001A4500; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(16) + 736), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1a4500);  rt_call(c, t); }
L_001A4500:;
SET32(3, RW(16) + 16);
L_001A4504:;
if (RD(3) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001A454C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -20688);
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 404), RW(2)); if (t) goto L_001A4548; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22096);
wr32(c, (RW(16) + 404), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 88)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1a4538); SET32(4, RW(16) + 80); rt_call(c, t); }
SET32(4, RW(16) + 80);
SET32(5, RW(0) + -1);
SET64(31, 0x1a4548); wr8(c, (RW(16) + 400), (u8)RW(0)); F_0014CEA0(c);
L_001A4548:;
SET64(4, RD(16) + RD(0));
L_001A454C:;
SET64(31, 0x1a4554);  F_001004B0(c);
wr32(c, (RW(18) + 868), RW(0));
L_001A4558:;
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_001A4560:;
SET64(4, (s32)rd32(c, (RW(16) + 872)));
{ int t = RD(4) == RD(0);  if (t) goto L_001A4580; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a457c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001A4580:;
SET32(17, RW(17) + 1);
wr32(c, (RW(16) + 872), RW(0));
SET64(3, RSD(17) < (s64)8);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001A4560; } }
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_001A459C:;
SET64(4, (s32)rd32(c, (RW(16) + 928)));
{ int t = RD(4) == RD(0);  if (t) goto L_001A45B8; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a45b8); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001A45B8:;
SET32(17, RW(17) + 1);
wr32(c, (RW(16) + 928), RW(0));
SET64(3, RSD(17) < (s64)2);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001A459C; } }
SET64(16, (s32)rd32(c, (RW(18) + 1068)));
if (RD(16) == RD(0)) { wr32(c, (RW(18) + 1068), RW(0)); goto L_001A45EC; }
SET64(31, 0x1a45e0); SET64(4, RD(16) + RD(0)); F_00312660(c);
SET64(31, 0x1a45e8); SET64(4, RD(16) + RD(0)); F_001004B0(c);
wr32(c, (RW(18) + 1068), RW(0));
L_001A45EC:;
SET64(4, (s32)rd32(c, (RW(18) + 1032)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 1032), RW(0)); goto L_001A460C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a4608); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 1032), RW(0));
L_001A460C:;
SET64(4, (s32)rd32(c, (RW(18) + 860)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 860), RW(0)); goto L_001A462C; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a4628); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 860), RW(0));
L_001A462C:;
SET64(4, (s32)rd32(c, (RW(18) + 856)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 856), RW(0)); goto L_001A464C; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a4648); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 856), RW(0));
L_001A464C:;
SET64(4, (s32)rd32(c, (RW(18) + 852)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 852), RW(0)); goto L_001A466C; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a4668); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 852), RW(0));
L_001A466C:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001A4690(Ctx *c) { /* func_001A4690 */
ENTER(0x1a4690);
SET64(7, (s32)rd32(c, (RW(4) + 0)));
if (RD(7) == RD(0)) { wr32(c, (RW(4) + 4), RW(0)); goto L_001A46F4; }
SET64(3, (s32)rd32(c, (RW(7) + 8)));
{ int t = RD(3) != RD(5); SET32(6, RW(7) + 8); if (t) goto L_001A46BC; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
if (RD(3) != RD(0)) { wr32(c, (RW(6) + 0), RW(3)); goto L_001A46F0; }
wr32(c, (RW(6) + 0), RW(0)); goto L_001A46F0;
L_001A46BC:;
SET32(6, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(5);  if (t) goto L_001A46E8; }
L_001A46CC:;
SET32(6, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(5);  if (t) { POLL(); goto L_001A46CC; } }
L_001A46E8:;
SET64(3, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(6) + 0), RW(3));
L_001A46F0:;
wr32(c, (RW(4) + 4), RW(0));
L_001A46F4:;
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s32)rd32(c, (RW(4) + 8)));
if (RD(3) == RD(0)) { wr32(c, (RW(4) + 4), RW(0)); goto L_001A479C; }
SET64(6, (s32)rd32(c, (RW(3) + 4)));
wr32(c, (RW(3) + 0), RW(7));
SET64(5, (s32)rd32(c, (RW(4) + 8)));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(3) != RD(0);  if (t) goto L_001A4720; }
wr32(c, (RW(5) + 4), RW(0));
L_001A4720:;
{ int t = RD(6) == RD(0);  if (t) goto L_001A4748; }
L_001A4728:;
SET64(3, (s32)rd32(c, (RW(6) + 4)));
{ int t = RD(7) != RD(0); wr32(c, (RW(6) + 0), RW(7)); if (t) goto L_001A4738; }
wr32(c, (RW(6) + 4), RW(0));
L_001A4738:;
SET64(6, RD(3) + RD(0));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_001A4728; } }
L_001A4748:;
{ int t = RD(7) == RD(0);  if (t) goto L_001A4798; }
SET64(5, (s32)rd32(c, (RW(7) + 8)));
if (RD(5) == RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 8))); goto L_001A4794; }
SET64(3, (s32)rd32(c, (RW(5) + 4)));
{ int t = RD(3) == RD(0);  if (t) goto L_001A4788; }
L_001A4768:;
SET64(5, RD(3) + RD(0));
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_001A4768; } }
L_001A4788:;
SET64(3, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(5) + 4), RW(3)); goto L_001A4798;
L_001A4794:;
wr32(c, (RW(7) + 8), RW(3));
L_001A4798:;
wr32(c, (RW(4) + 4), RW(0));
L_001A479C:;
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0)); return;
}

void F_001A47B0(Ctx *c) { /* func_001A47B0 */
ENTER(0x1a47b0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 840)));
SET64(16, (s32)rd32(c, (RW(2) + 20)));
SET64(4, (s32)rd32(c, (RW(4) + 624)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(19, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x1a47e8); SET64(17, RD(5) + RD(0)); F_001B72D0(c);
if (RD(2) != RD(0)) { SET64(16, RD(16) << 32); goto L_001A47F8; }
SET64(2, RD(0) + RD(0)); goto L_001A4A74;
L_001A47F8:;
SET64(2, RD(19) << 32);
SET64(16, RSD(16) >> 32);
SET64(2, RSD(2) >> 32);
{ int t = RD(16) == RD(2);  if (t) goto L_001A4858; }
SET64(2, RD(16) << 32);
L_001A4810:;
SET64(2, RSD(2) >> 32);
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1a4830);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(3, RD(16) << 32); goto L_001A4840; }
SET64(2, RD(0) + RD(0)); goto L_001A4A74;
L_001A4840:;
SET64(2, RD(19) << 32);
SET64(3, RSD(3) >> 32);
SET64(2, RSD(2) >> 32);
SET64(16, (s32)rd32(c, (RW(3) + 8)));
if (RD(16) != RD(2)) { SET64(2, RD(16) << 32); { POLL(); goto L_001A4810; } }
L_001A4858:;
SET64(4, (s32)rd32(c, (RW(18) + 160)));
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x1a486c);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 252))); goto L_001A487C; }
SET64(2, RD(0) + RD(0)); goto L_001A4A74;
L_001A487C:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 404)));
{ u32 t = RW(25); SET64(31, 0x1a488c);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(19, RD(0) + RD(0)); goto L_001A489C; }
SET64(2, RD(0) + RD(0)); goto L_001A4A74;
L_001A489C:;
SET64(16, RD(18) + RD(0));
L_001A48A0:;
SET64(4, (s32)rd32(c, (RW(16) + 904)));
if (RD(4) == RD(0)) { SET32(19, RW(19) + 1); goto L_001A48C8; }
SET64(31, 0x1a48b4);  F_00314580(c);
{ int t = RD(2) != RD(0);  if (t) goto L_001A48C4; }
SET64(2, RD(0) + RD(0)); goto L_001A48D8;
L_001A48C4:;
SET32(19, RW(19) + 1);
L_001A48C8:;
SET64(2, RSD(19) < (s64)6);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001A48A0; } }
SET64(2, RD(0) + (s64)1);
L_001A48D8:;
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 944))); goto L_001A48E8; }
SET64(2, RD(0) + RD(0)); goto L_001A4A74;
L_001A48E8:;
SET64(31, 0x1a48f0);  F_00314390(c);
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_001A4918; }
SET64(2, (s32)rd32(c, (RW(18) + 1044)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1a4914);  rt_call(c, t); }
SET64(2, RD(0) < RD(2));
L_001A4918:;
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 1028))); goto L_001A4928; }
SET64(2, RD(0) + RD(0)); goto L_001A4A74;
L_001A4928:;
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_001A4940; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x1a4940);  rt_call(c, t); }
L_001A4940:;
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(19, RD(0) + RD(0)); goto L_001A4954; }
SET64(2, RD(0) + RD(0)); goto L_001A4A74;
L_001A4954:;
SET64(16, RD(18) + RD(0));
L_001A4958:;
SET64(4, (s32)rd32(c, (RW(16) + 872)));
if (RD(4) == RD(0)) { SET32(19, RW(19) + 1); goto L_001A4988; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1a4974);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001A4984; }
SET64(2, RD(0) + RD(0)); goto L_001A4998;
L_001A4984:;
SET32(19, RW(19) + 1);
L_001A4988:;
SET64(2, RSD(19) < (s64)8);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001A4958; } }
SET64(2, RD(0) + (s64)1);
L_001A4998:;
if (RD(2) != RD(0)) { SET64(19, RD(0) + RD(0)); goto L_001A49A8; }
SET64(2, RD(0) + RD(0)); goto L_001A4A74;
L_001A49A8:;
SET64(16, RD(18) + RD(0));
L_001A49AC:;
SET64(4, (s32)rd32(c, (RW(16) + 928)));
if (RD(4) == RD(0)) { SET32(19, RW(19) + 1); goto L_001A49DC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x1a49c8);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001A49D8; }
SET64(2, RD(0) + RD(0)); goto L_001A49EC;
L_001A49D8:;
SET32(19, RW(19) + 1);
L_001A49DC:;
SET64(2, RSD(19) < (s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001A49AC; } }
SET64(2, RD(0) + (s64)1);
L_001A49EC:;
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 1068))); goto L_001A49FC; }
SET64(2, RD(0) + RD(0)); goto L_001A4A74;
L_001A49FC:;
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_001A4A0C; }
SET64(31, 0x1a4a0c);  F_00312760(c);
L_001A4A0C:;
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 1032))); goto L_001A4A20; }
SET64(2, RD(0) + RD(0)); goto L_001A4A74;
L_001A4A20:;
if (RD(4) != RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_001A4A30; }
SET32(2, RW(0) + 1); goto L_001A4A3C;
L_001A4A30:;
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x1a4a3c);  rt_call(c, t); }
L_001A4A3C:;
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_001A4A50; }
SET64(2, RD(0) + RD(0)); goto L_001A4A74;
L_001A4A50:;
if (RD(17) == RD(0)) { SET32(2, RW(0) + 1); goto L_001A4A74; }
SET64(31, 0x1a4a60); SET64(4, (s32)rd32(c, (RW(18) + 868))); F_0030D140(c);
{ int t = RD(2) != RD(0);  if (t) goto L_001A4A70; }
SET64(2, RD(0) + RD(0)); goto L_001A4A74;
L_001A4A70:;
SET32(2, RW(0) + 1);
L_001A4A74:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001A4A90(Ctx *c) { /* func_001A4A90 */
ENTER(0x1a4a90);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x1a4ab4); SET64(4, (s32)rd32(c, (RW(4) + 160))); F_0016E050(c);
SET64(4, (s32)rd32(c, (RW(16) + 252)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x1a4ac8);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 840)));
SET64(2, (s32)rd32(c, (RW(3) + 16)));
SET64(17, (s32)rd32(c, (RW(3) + 20)));
SET64(18, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(17) == RD(18);  if (t) goto L_001A4B28; }
SET64(3, RD(17) << 32);
L_001A4AE4:;
SET64(3, RSD(3) >> 32);
SET64(2, (s32)rd32(c, (RW(3) + 16)));
wr8(c, (RW(2) + 392), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 16)));
SET64(4, (s32)rd32(c, (RW(2) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a4b08);  rt_call(c, t); }
SET64(3, RD(17) << 32);
SET64(2, RD(18) << 32);
SET64(3, RSD(3) >> 32);
SET64(2, RSD(2) >> 32);
SET64(17, (s32)rd32(c, (RW(3) + 8)));
if (RD(17) != RD(2)) { SET64(3, RD(17) << 32); { POLL(); goto L_001A4AE4; } }
L_001A4B28:;
SET64(4, (s32)rd32(c, (RW(16) + 944)));
SET64(31, 0x1a4b34); SET64(5, RD(0) + RD(0)); F_003141A0(c);
SET64(4, (s32)rd32(c, (RW(16) + 1044)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a4b48);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 1028)));
if (RD(4) == RD(0)) { SET64(19, RD(0) + RD(0)); goto L_001A4B68; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x1a4b64);  rt_call(c, t); }
SET64(19, RD(0) + RD(0));
L_001A4B68:;
SET64(18, RD(16) + RD(0));
L_001A4B6C:;
SET64(17, (s32)rd32(c, (RW(18) + 904)));
{ int t = RD(17) == RD(0);  if (t) goto L_001A4BA8; }
SET64(3, (s32)rd32(c, (RW(17) + 4032)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2);  if (t) goto L_001A4B90; }
wr8(c, (RW(17) + 4036), (u8)RW(2)); goto L_001A4BA8;
L_001A4B90:;
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 260)));
{ u32 t = RW(25); SET64(31, 0x1a4ba0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 4);
wr32(c, (RW(17) + 4032), RW(2));
L_001A4BA8:;
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < (s64)6);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_001A4B6C; } }
SET64(19, RD(0) + RD(0));
SET64(18, RD(16) + RD(0));
L_001A4BC0:;
SET64(17, (s32)rd32(c, (RW(18) + 928)));
{ int t = RD(17) == RD(0);  if (t) goto L_001A4C00; }
SET64(3, (s32)rd32(c, (RW(17) + 416)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2);  if (t) goto L_001A4BE8; }
wr8(c, (RW(17) + 420), (u8)RW(2)); goto L_001A4C00;
L_001A4BE8:;
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 208)));
{ u32 t = RW(25); SET64(31, 0x1a4bf8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 4);
wr32(c, (RW(17) + 416), RW(2));
L_001A4C00:;
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < (s64)2);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_001A4BC0; } }
SET64(3, (s32)rd32(c, (RW(16) + 1068)));
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 868))); goto L_001A4C28; }
SET32(2, RW(0) + 1);
wr8(c, (RW(3) + 16), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 868)));
L_001A4C28:;
SET64(31, 0x1a4c30);  F_0030D170(c);
SET64(4, (s32)rd32(c, (RW(16) + 1032)));
if (RD(4) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 856))); goto L_001A4C50; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x1a4c4c);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 856)));
L_001A4C50:;
wr8(c, (RW(3) + 228), (u8)RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 860)));
wr8(c, (RW(3) + 228), (u8)RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 852)));
wr8(c, (RW(3) + 228), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001A4C80(Ctx *c) { /* func_001A4C80 */
ENTER(0x1a4c80);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 840)));
SET64(3, (s32)rd32(c, (RW(4) + 16)));
SET64(16, (s32)rd32(c, (RW(4) + 20)));
SET64(17, (s32)rd32(c, (RW(3) + 8)));
{ int t = RD(16) == RD(17);  if (t) goto L_001A4E18; }
SET64(2, RD(16) << 32);
L_001A4CB8:;
SET64(2, RSD(2) >> 32);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET64(31, 0x1a4cc8); SET64(5, RD(18) + RD(0)); F_001A8570(c);
SET64(3, RD(16) << 32);
SET64(3, RSD(3) >> 32);
SET64(4, (s32)rd32(c, (RW(3) + 16)));
SET64(3, rd8(c, (RW(4) + 384)));
{ int t = RD(3) == RD(0);  if (t) goto L_001A4D40; }
SET64(3, (s32)rd32(c, (RW(4) + 388)));
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); wr32(c, (RW(4) + 388), RW(3)); if (t) goto L_001A4D10; }
SET64(4, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a4d04);  rt_call(c, t); }
 goto L_001A4D40;
L_001A4D10:;
SET64(3, (s32)rd32(c, (RW(4) + 388)));
{ int t = RSD(3) >= 0;  if (t) goto L_001A4D40; }
wr32(c, (RW(4) + 388), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 28)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1a4d38);  rt_call(c, t); }
SET64(3, RD(2) & 0xff); goto L_001A4D48;
L_001A4D40:;
SET64(3, RD(0) + RD(0));
L_001A4D48:;
{ int t = RD(3) == RD(0);  if (t) goto L_001A4DF8; }
SET64(5, RD(16) << 32);
SET64(7, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(5, RSD(5) >> 32);
L_001A4D60:;
SET64(4, (s32)rd32(c, (RW(5) + 16)));
SET64(3, (s32)rd32(c, (RW(6) + 1360)));
{ int t = RD(4) != RD(3);  if (t) goto L_001A4D78; }
wr32(c, (RW(6) + 1360), RW(0));
L_001A4D78:;
SET32(7, RW(7) + 1);
SET64(3, RSD(7) < (s64)66);
{ int t = RD(3) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_001A4D60; } }
SET64(3, RD(16) << 32);
SET64(3, RSD(3) >> 32);
SET64(19, (s32)rd32(c, (RW(3) + 16)));
{ int t = RD(19) == RD(0);  if (t) goto L_001A4DB0; }
SET64(31, 0x1a4da4); SET64(4, RD(19) + RD(0)); F_001A9A10(c);
SET64(31, 0x1a4dac); SET64(4, RD(19) + RD(0)); F_001004B0(c);
L_001A4DB0:;
SET64(6, RD(16) << 32);
SET64(6, RSD(6) >> 32);
wr32(c, (RW(6) + 16), RW(0));
SET64(5, (s32)rd32(c, (RW(18) + 840)));
SET64(3, (s32)rd32(c, (RW(5) + 4)));
{ int t = RD(3) == RD(0);  if (t) goto L_001A4DF8; }
SET64(4, (s32)rd32(c, (RW(6) + 8)));
SET64(3, (s32)rd32(c, (RW(6) + 4)));
wr32(c, (RW(3) + 8), RW(4));
SET64(4, (s32)rd32(c, (RW(6) + 4)));
SET64(3, (s32)rd32(c, (RW(6) + 8)));
wr32(c, (RW(3) + 4), RW(4));
wr8(c, (RW(6) + 0), (u8)RW(0));
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET32(3, RW(3) + -1);
wr32(c, (RW(5) + 4), RW(3));
L_001A4DF8:;
SET64(3, RD(16) << 32);
SET64(3, RSD(3) >> 32);
SET64(16, (s32)rd32(c, (RW(3) + 8)));
SET64(3, RD(17) << 32);
SET64(3, RSD(3) >> 32);
if (RD(16) != RD(3)) { SET64(2, RD(16) << 32); { POLL(); goto L_001A4CB8; } }
L_001A4E18:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001A4E40(Ctx *c) { /* func_001A4E40 */
ENTER(0x1a4e40);
SET32(29, RW(29) + -400);
wr64(c, (RW(29) + 160), RD(31));
wr128(c, (RW(29) + 144) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[22]);
SET32(23, RW(0) + 9);
wr128(c, (RW(29) + 112) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[20]);
SET64(21, RD(0) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
SET64(19, RD(0) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, (s32)rd32(c, (RW(4) + 132)));
{ int t = RD(16) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_001A50A0; }
L_001A4E9C:;
SET64(2, (s32)rd32(c, (RW(16) + 16)));
{ int t = RD(20) == RD(0); SET64(3, (s32)rd32(c, (RW(2) + 16))); if (t) goto L_001A4F7C; }
{ int t = RD(3) == RD(0);  if (t) goto L_001A4EE0; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_001A4EE0; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_001A4EE0; }
SET32(2, RW(0) + 5);
{ int t = RD(3) == RD(2);  if (t) goto L_001A4EE0; }
SET32(2, RW(0) + 12);
{ int t = RD(3) != RD(2);  if (t) goto L_001A4F7C; }
L_001A4EE0:;
SET64(2, rd8(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A4F20; }
SET64(31, 0x1a4ef4); SET64(4, RD(18) + RD(0)); F_001CB090(c);
c->f[1].u = rd32(c, (RW(16) + 8));
SET64(2, (s64)(s32)0x447a0000);
c->f[2].u = RW(2);
c->f[1].f = fpu(F(2) * F(1));
c->fcc = F(0) < F(1);
{ int t = !c->fcc;  if (t) goto L_001A4F20; }
SET32(2, RW(0) + 5); goto L_001A4F68;
L_001A4F20:;
SET64(2, rd8(c, (RW(16) + 5)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A4F38; }
SET64(2, RD(0) + RD(0)); goto L_001A4F68;
L_001A4F38:;
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 5), (u8)RW(2));
SET64(4, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(5, (s32)rd32(c, (RW(2) + 20)));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(2); SET64(31, 0x1a4f58); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001A4F68; }
wr8(c, (RW(16) + 5), (u8)RW(0));
L_001A4F68:;
SET64(23, RD(2) + RD(0));
{ int t = RD(2) == RD(0); SET64(17, RD(0) + (s64)1); if (t) goto L_001A506C; }
 goto L_001A50A0;
L_001A4F7C:;
if (RD(20) != RD(0)) { SET64(23, RD(0) + RD(0)); goto L_001A50A0; }
{ int t = RD(3) == RD(0);  if (t) goto L_001A5060; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_001A5060; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_001A5060; }
SET32(2, RW(0) + 5);
{ int t = RD(3) == RD(2);  if (t) goto L_001A5060; }
SET32(2, RW(0) + 12);
{ int t = RD(3) == RD(2);  if (t) goto L_001A5060; }
SET64(2, rd8(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A4FF8; }
SET64(31, 0x1a4fd0); SET64(4, RD(18) + RD(0)); F_001CB090(c);
c->f[1].u = rd32(c, (RW(16) + 8));
SET64(2, (s64)(s32)0x447a0000);
c->f[2].u = RW(2);
c->f[1].f = fpu(F(2) * F(1));
c->fcc = F(0) < F(1);
{ int t = !c->fcc;  if (t) goto L_001A4FF8; }
SET32(2, RW(0) + 5); goto L_001A5040;
L_001A4FF8:;
SET64(2, rd8(c, (RW(16) + 5)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A5010; }
SET64(2, RD(0) + RD(0)); goto L_001A5040;
L_001A5010:;
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 5), (u8)RW(2));
SET64(4, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(5, (s32)rd32(c, (RW(2) + 20)));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(2); SET64(31, 0x1a5030); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001A5040; }
wr8(c, (RW(16) + 5), (u8)RW(0));
L_001A5040:;
{ int t = RD(21) != RD(0); SET64(23, RD(2) + RD(0)); if (t) goto L_001A5050; }
SET64(19, RD(0) + (s64)1);
L_001A5050:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 132))); goto L_001A5070; }
 goto L_001A50A0;
L_001A5060:;
SET64(23, RD(0) + RD(0));
 goto L_001A50A0;
L_001A506C:;
SET64(4, (s32)rd32(c, (RW(18) + 132)));
L_001A5070:;
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -2432);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
{ int t = RD(3) != RD(2);  if (t) goto L_001A5090; }
SET64(19, RD(0) + RD(0));
SET64(21, RD(0) + (s64)1);
L_001A5090:;
SET64(16, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(16) != RD(0); wr32(c, (RW(18) + 132), RW(16)); if (t) { POLL(); goto L_001A4E9C; } }
L_001A50A0:;
if (RD(17) == RD(0)) { SET64(16, (s32)rd32(c, (RW(18) + 136))); goto L_001A5104; }
SET64(5, (s32)rd32(c, (RW(18) + 136)));
{ int t = RD(5) == RD(0);  if (t) goto L_001A5100; }
SET64(4, rd8(c, (RW(18) + 281)));
{ int t = RD(4) == RD(0);  if (t) goto L_001A50D8; }
SET64(3, (s32)rd32(c, (RW(5) + 16)));
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -11808);
SET64(3, (s32)rd32(c, (RW(3) + 12)));
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(5) + 0))); goto L_001A50FC; }
L_001A50D8:;
{ int t = RD(4) != RD(0);  if (t) goto L_001A5100; }
SET64(3, (s32)rd32(c, (RW(5) + 16)));
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -11824);
SET64(3, (s32)rd32(c, (RW(3) + 12)));
{ int t = RD(3) != RD(2);  if (t) goto L_001A5100; }
SET64(2, (s32)rd32(c, (RW(5) + 0)));
L_001A50FC:;
wr32(c, (RW(18) + 136), RW(2));
L_001A5100:;
SET64(16, (s32)rd32(c, (RW(18) + 136)));
L_001A5104:;
{ int t = RD(16) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_001A5310; }
L_001A510C:;
SET64(2, (s32)rd32(c, (RW(16) + 16)));
{ int t = RD(20) == RD(0); SET64(3, (s32)rd32(c, (RW(2) + 16))); if (t) goto L_001A51D8; }
SET32(2, RW(0) + 8);
{ int t = RD(3) == RD(2);  if (t) goto L_001A5140; }
SET32(2, RW(0) + 9);
{ int t = RD(3) == RD(2);  if (t) goto L_001A5140; }
SET32(2, RW(0) + 12);
{ int t = RD(3) != RD(2);  if (t) goto L_001A51D8; }
L_001A5140:;
SET64(2, rd8(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A5180; }
SET64(31, 0x1a5154); SET64(4, RD(18) + RD(0)); F_001CB090(c);
c->f[1].u = rd32(c, (RW(16) + 8));
SET64(2, (s64)(s32)0x447a0000);
c->f[2].u = RW(2);
c->f[1].f = fpu(F(2) * F(1));
c->fcc = F(0) < F(1);
{ int t = !c->fcc;  if (t) goto L_001A5180; }
SET32(2, RW(0) + 5); goto L_001A51C8;
L_001A5180:;
SET64(2, rd8(c, (RW(16) + 5)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A5198; }
SET64(2, RD(0) + RD(0)); goto L_001A51C8;
L_001A5198:;
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 5), (u8)RW(2));
SET64(4, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(5, (s32)rd32(c, (RW(2) + 20)));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(2); SET64(31, 0x1a51b8); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001A51C8; }
wr8(c, (RW(16) + 5), (u8)RW(0));
L_001A51C8:;
if (RD(2) == RD(0)) { SET64(5, rd8(c, (RW(18) + 281))); goto L_001A52A8; }
 goto L_001A5310;
L_001A51D8:;
if (RD(20) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001A5310; }
SET32(2, RW(0) + 8);
{ int t = RD(3) == RD(2);  if (t) goto L_001A5298; }
SET32(2, RW(0) + 9);
{ int t = RD(3) == RD(2);  if (t) goto L_001A5298; }
SET32(2, RW(0) + 12);
{ int t = RD(3) == RD(2);  if (t) goto L_001A5298; }
SET64(2, rd8(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A5240; }
SET64(31, 0x1a5218); SET64(4, RD(18) + RD(0)); F_001CB090(c);
c->f[1].u = rd32(c, (RW(16) + 8));
SET64(2, (s64)(s32)0x447a0000);
c->f[2].u = RW(2);
c->f[1].f = fpu(F(2) * F(1));
c->fcc = F(0) < F(1);
{ int t = !c->fcc;  if (t) goto L_001A5240; }
SET32(2, RW(0) + 5); goto L_001A5288;
L_001A5240:;
SET64(2, rd8(c, (RW(16) + 5)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A5258; }
SET64(2, RD(0) + RD(0)); goto L_001A5288;
L_001A5258:;
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 5), (u8)RW(2));
SET64(4, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(5, (s32)rd32(c, (RW(2) + 20)));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(2); SET64(31, 0x1a5278); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001A5288; }
wr8(c, (RW(16) + 5), (u8)RW(0));
L_001A5288:;
{ int t = RD(2) == RD(0);  if (t) goto L_001A52A4; }
 goto L_001A5310;
L_001A5298:;
SET64(2, RD(0) + RD(0));
 goto L_001A5310;
L_001A52A4:;
SET64(5, rd8(c, (RW(18) + 281)));
L_001A52A8:;
{ int t = RD(5) == RD(0);  if (t) goto L_001A52D0; }
SET64(4, (s32)rd32(c, (RW(18) + 136)));
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -11808);
SET64(4, (s32)rd32(c, (RW(4) + 16)));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(4) == RD(3);  if (t) goto L_001A52F8; }
L_001A52D0:;
{ int t = RD(5) != RD(0);  if (t) goto L_001A5300; }
SET64(4, (s32)rd32(c, (RW(18) + 136)));
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -11824);
SET64(4, (s32)rd32(c, (RW(4) + 16)));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(4) != RD(3);  if (t) goto L_001A5300; }
L_001A52F8:;
{ int t = RD(19) == RD(0);  if (t) goto L_001A5310; }
L_001A5300:;
SET64(3, (s32)rd32(c, (RW(18) + 136)));
SET64(16, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(16) != RD(0); wr32(c, (RW(18) + 136), RW(16)); if (t) { POLL(); goto L_001A510C; } }
L_001A5310:;
SET32(3, RW(0) + 2);
if (RD(2) == RD(3)) { SET64(23, RD(2) + RD(0)); goto L_001A532C; }
SET32(3, RW(0) + 5);
if (RD(2) != RD(3)) { SET32(2, RW(0) + 2); goto L_001A5330; }
SET64(23, RD(2) + RD(0));
L_001A532C:;
SET32(2, RW(0) + 2);
L_001A5330:;
if (RD(23) != RD(2)) { SET64(2, rd8(c, (RW(18) + 1090))); goto L_001A5348; }
c->f[12].u = RW(0);
SET64(31, 0x1a5344); SET64(4, RD(18) + RD(0)); F_001CB020(c);
SET64(2, rd8(c, (RW(18) + 1090)));
L_001A5348:;
if (RD(2) != RD(0)) { SET64(17, (s32)rd32(c, (RW(18) + 160))); goto L_001A5358; }
SET64(2, RD(23) + RD(0)); goto L_001A6274;
L_001A5358:;
SET64(21, RD(0) + RD(0));
SET64(16, (s32)rd32(c, (RW(17) + 248)));
SET64(19, RD(18) + RD(0)); goto L_001A60F0;
L_001A5368:;
SET64(31, 0x1a5370); SET64(4, RD(18) + RD(0)); F_001CB090(c);
SET64(2, (s64)(s32)0x447a0000);
SET64(3, (s32)rd32(c, (RW(19) + 1672)));
c->f[1].u = RW(2);
c->f[20].f = fpu_div(F(0), F(1));
{ int t = RD(3) == RD(0);  if (t) goto L_001A60E8; }
SET64(2, rd8(c, (RW(3) + 242)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A5A08; }
c->f[1].u = rd32(c, (RW(3) + 248));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(0);
c->f[12].u = RW(2);
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_001A53C8; }
c->f[0].u = rd32(c, (RW(3) + 244));
c->f[0].f = fpu(F(20) - F(0));
c->f[12].f = fpu_div(F(0), F(1));
L_001A53C8:;
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
wr32(c, (RW(29) + 368), RW(0));
c->fcc = F(12) < F(0);
wr32(c, (RW(29) + 372), RW(0));
wr32(c, (RW(29) + 376), RW(0));
{ int t = c->fcc; wr32(c, (RW(29) + 380), RW(2)); if (t) goto L_001A53F8; }
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
c->f[12].u = c->f[0].u;
wr8(c, (RW(2) + 242), (u8)RW(0));
L_001A53F8:;
SET64(2, (s64)(s32)0x461c0000);
SET64(3, RD(2) | 0x3c00);
SET64(8, RD(0) + RD(0));
c->f[11].u = RW(3);
SET64(2, RD(0) + RD(0));
c->f[10].u = RW(0);
SET64(7, RD(0) + RD(0));
c->f[9].u = c->f[11].u;
c->f[8].u = c->f[10].u;
c->f[7].u = c->f[11].u;
c->f[6].u = c->f[10].u;
c->f[5].u = c->f[11].u;
c->f[4].u = c->f[10].u;
c->f[3].u = c->f[11].u;
c->f[2].u = c->f[10].u;
c->f[1].u = c->f[11].u;
c->f[0].u = c->f[10].u;
c->f[17].u = c->f[10].u;
SET64(6, (s64)(s32)0x3f800000);
L_001A5448:;
SET64(3, (s32)rd32(c, (RW(19) + 1672)));
wr32(c, (RW(29) + 316), RW(6));
SET32(3, RW(3) + RW(8));
c->f[14].u = rd32(c, (RW(3) + 264));
c->f[13].u = rd32(c, (RW(3) + 328));
c->f[16].u = rd32(c, (RW(3) + 260));
c->f[15].u = rd32(c, (RW(3) + 324));
c->f[13].f = fpu(F(13) - F(14));
c->facc = fpu(F(17) + F(14));
c->f[13].f = fpu(c->facc + F(12) * F(13));
wr32(c, (RW(29) + 312), c->f[13].u);
c->f[14].u = rd32(c, (RW(3) + 256));
c->f[13].u = rd32(c, (RW(3) + 320));
c->f[15].f = fpu(F(15) - F(16));
c->facc = fpu(F(17) + F(16));
c->f[15].f = fpu(c->facc + F(12) * F(15));
c->f[13].f = fpu(F(13) - F(14));
c->facc = fpu(F(17) + F(14));
c->f[13].f = fpu(c->facc + F(12) * F(13));
wr32(c, (RW(29) + 308), c->f[15].u);
wr32(c, (RW(29) + 304), c->f[13].u);
rd128(c, (RW(29) + 304) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 368) & ~15u, &c->r[3]);
c->f[13].u = rd32(c, (RW(29) + 368));
SET64(3, (s32)rd32(c, (RW(19) + 1672)));
c->f[13].u = (u32)fpu_cvtw(F(13));
SET32(3, RW(3) + RW(7));
SET64(4, (s32)c->f[13].u);
wr16(c, (RW(3) + 76), (u16)RW(4));
c->f[13].u = rd32(c, (RW(29) + 372));
SET64(3, (s32)rd32(c, (RW(19) + 1672)));
c->f[13].u = (u32)fpu_cvtw(F(13));
SET32(3, RW(3) + RW(7));
SET64(4, (s32)c->f[13].u);
wr16(c, (RW(3) + 78), (u16)RW(4));
SET64(5, (s32)rd32(c, (RW(19) + 1672)));
SET32(3, RW(5) + RW(8));
c->f[13].u = rd32(c, (RW(3) + 256));
c->fcc = F(11) <= F(13);
{ int t = c->fcc;  if (t) goto L_001A54F8; }
c->f[11].u = c->f[13].u;
L_001A54F8:;
c->fcc = F(10) < F(13);
{ int t = !c->fcc;  if (t) goto L_001A5508; }
c->f[10].u = c->f[13].u;
L_001A5508:;
c->f[13].u = rd32(c, (RW(3) + 260));
c->fcc = F(9) <= F(13);
{ int t = c->fcc;  if (t) goto L_001A5520; }
c->f[9].u = c->f[13].u;
L_001A5520:;
c->fcc = F(8) < F(13);
{ int t = !c->fcc;  if (t) goto L_001A5530; }
c->f[8].u = c->f[13].u;
L_001A5530:;
c->f[13].u = rd32(c, (RW(3) + 320));
c->fcc = F(7) <= F(13);
{ int t = c->fcc;  if (t) goto L_001A5548; }
c->f[7].u = c->f[13].u;
L_001A5548:;
c->fcc = F(6) < F(13);
{ int t = !c->fcc;  if (t) goto L_001A5558; }
c->f[6].u = c->f[13].u;
L_001A5558:;
c->f[13].u = rd32(c, (RW(3) + 324));
c->fcc = F(5) <= F(13);
{ int t = c->fcc;  if (t) goto L_001A5570; }
c->f[5].u = c->f[13].u;
L_001A5570:;
c->fcc = F(4) < F(13);
{ int t = !c->fcc;  if (t) goto L_001A5580; }
c->f[4].u = c->f[13].u;
L_001A5580:;
c->f[13].u = rd32(c, (RW(29) + 368));
c->fcc = F(3) <= F(13);
{ int t = c->fcc; c->f[14].u = rd32(c, (RW(29) + 368)); if (t) goto L_001A5598; }
c->f[3].u = c->f[14].u;
L_001A5598:;
c->fcc = F(2) < F(14);
{ int t = !c->fcc;  if (t) goto L_001A55A8; }
c->f[2].u = c->f[14].u;
L_001A55A8:;
c->f[13].u = rd32(c, (RW(29) + 372));
c->fcc = F(1) <= F(13);
{ int t = c->fcc;  if (t) goto L_001A55C0; }
c->f[1].u = c->f[13].u;
L_001A55C0:;
c->fcc = F(0) < F(13);
{ int t = !c->fcc;  if (t) goto L_001A55D0; }
c->f[0].u = c->f[13].u;
L_001A55D0:;
SET32(2, RW(2) + 1);
SET64(3, RSD(2) < (s64)4);
SET32(8, RW(8) + 16);
{ int t = RD(3) != RD(0); SET32(7, RW(7) + 4); if (t) { POLL(); goto L_001A5448; } }
c->f[9].f = fpu(F(8) - F(9));
SET64(2, (s64)(s32)0x3f800000);
SET64(4, (s16)rd16(c, (RW(5) + 76)));
SET64(3, (s16)rd16(c, (RW(5) + 78)));
wr32(c, (RW(29) + 300), RW(2));
c->f[8].f = fpu(F(4) - F(5));
c->f[5].f = fpu(F(0) - F(1));
c->f[0].u = RW(4);
c->f[24].f = (f32)(s32)c->f[0].u;
c->f[3].f = fpu(F(2) - F(3));
c->f[0].u = RW(3);
c->f[23].f = (f32)(s32)c->f[0].u;
c->f[10].f = fpu(F(10) - F(11));
c->f[11].u = rd32(c, (RW(5) + 392));
c->f[4].f = fpu(F(6) - F(7));
c->f[7].u = rd32(c, (RW(5) + 408));
c->f[2].u = rd32(c, (RW(5) + 436));
c->f[1].u = rd32(c, (RW(5) + 452));
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(2));
c->f[1].f = fpu(F(1) - F(2));
c->f[21].f = fpu(c->facc + F(12) * F(1));
c->f[2].u = rd32(c, (RW(5) + 432));
c->f[1].u = rd32(c, (RW(5) + 448));
c->f[9].f = fpu(F(9) * F(11));
c->f[6].f = fpu(F(8) * F(7));
c->f[10].f = fpu(F(10) * F(11));
c->f[4].f = fpu(F(4) * F(7));
c->f[1].f = fpu(F(1) - F(2));
c->facc = fpu(F(0) + F(2));
c->f[22].f = fpu(c->facc + F(12) * F(1));
c->f[6].f = fpu(F(6) - F(9));
c->facc = fpu(F(0) + F(9));
c->f[6].f = fpu(c->facc + F(12) * F(6));
c->f[4].f = fpu(F(4) - F(10));
c->facc = fpu(F(0) + F(10));
c->f[4].f = fpu(c->facc + F(12) * F(4));
c->f[4].f = fpu_div(F(4), F(3));
c->f[5].f = fpu_div(F(6), F(5));
c->f[2].u = rd32(c, (RW(5) + 388));
c->f[1].u = rd32(c, (RW(5) + 404));
c->f[3].f = fpu(F(7) - F(11));
c->facc = fpu(F(0) + F(11));
c->f[3].f = fpu(c->facc + F(12) * F(3));
c->f[1].f = fpu(F(1) - F(2));
c->facc = fpu(F(0) + F(2));
c->f[1].f = fpu(c->facc + F(12) * F(1));
wr32(c, (RW(29) + 292), c->f[1].u);
c->f[2].u = rd32(c, (RW(5) + 384));
c->f[1].u = rd32(c, (RW(5) + 400));
wr32(c, (RW(29) + 296), c->f[3].u);
c->facc = fpu(F(0) + F(2));
c->f[0].f = fpu(F(1) - F(2));
c->f[0].f = fpu(c->facc + F(12) * F(0));
wr32(c, (RW(29) + 288), c->f[0].u);
rd128(c, (RW(29) + 288) & ~15u, &c->r[2]);
c->fcc = F(5) < F(4);
{ int t = !c->fcc; wr128(c, (RW(29) + 368) & ~15u, &c->r[2]); if (t) goto L_001A5708; }
c->f[0].u = rd32(c, (RW(29) + 368));
SET64(3, (s32)rd32(c, (RW(19) + 1672)));
c->f[1].u = rd32(c, (RW(29) + 372));
c->f[0].u = (u32)fpu_cvtw(F(0));
c->f[1].u = (u32)fpu_cvtw(F(1));
SET64(2, (s32)c->f[0].u);
SET64(4, (s32)c->f[1].u);
wr16(c, (RW(3) + 92), (u16)RW(2));
wr16(c, (RW(3) + 94), (u16)RW(4));
wr32(c, (RW(3) + 96), c->f[5].u); goto L_001A5730;
L_001A5708:;
SET64(3, (s32)rd32(c, (RW(19) + 1672)));
c->f[0].u = rd32(c, (RW(29) + 368));
c->f[1].u = rd32(c, (RW(29) + 372));
c->f[0].u = (u32)fpu_cvtw(F(0));
c->f[1].u = (u32)fpu_cvtw(F(1));
SET64(2, (s32)c->f[0].u);
SET64(4, (s32)c->f[1].u);
wr16(c, (RW(3) + 92), (u16)RW(2));
wr16(c, (RW(3) + 94), (u16)RW(4));
wr32(c, (RW(3) + 96), c->f[4].u);
L_001A5730:;
SET64(3, (s32)rd32(c, (RW(19) + 1672)));
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(16) + RD(0));
c->f[4].u = RW(0);
wr32(c, (RW(29) + 284), RW(2));
c->f[1].u = rd32(c, (RW(3) + 472));
c->f[0].u = rd32(c, (RW(3) + 488));
c->f[3].u = rd32(c, (RW(3) + 468));
c->f[2].u = rd32(c, (RW(3) + 484));
c->f[0].f = fpu(F(0) - F(1));
c->facc = fpu(F(4) + F(1));
c->f[0].f = fpu(c->facc + F(12) * F(0));
wr32(c, (RW(29) + 280), c->f[0].u);
c->f[1].u = rd32(c, (RW(3) + 464));
c->f[0].u = rd32(c, (RW(3) + 480));
c->f[2].f = fpu(F(2) - F(3));
c->facc = fpu(F(4) + F(3));
c->f[2].f = fpu(c->facc + F(12) * F(2));
c->f[0].f = fpu(F(0) - F(1));
c->facc = fpu(F(4) + F(1));
c->f[0].f = fpu(c->facc + F(12) * F(0));
wr32(c, (RW(29) + 276), c->f[2].u);
wr32(c, (RW(29) + 272), c->f[0].u);
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 368) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
c->f[0].u = rd32(c, (RW(2) + 216));
wr32(c, (RW(2) + 224), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
c->f[0].u = rd32(c, (RW(2) + 220));
wr32(c, (RW(2) + 228), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 368));
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
wr32(c, (RW(2) + 216), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 372));
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
wr32(c, (RW(2) + 220), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(20, (s16)rd16(c, (RW(2) + 76)));
SET64(22, (s16)rd16(c, (RW(2) + 78)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a57e0); SET32(5, RW(2) + 76); rt_call(c, t); }
c->f[0].u = RW(22);
SET64(4, RD(16) + RD(0));
c->f[0].f = (f32)(s32)c->f[0].u;
SET32(6, RW(29) + 392);
SET32(7, RW(29) + 388);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(29) + 388), c->f[0].u);
c->f[0].u = RW(20);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(29) + 392), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1a5824); SET32(5, RW(2) + 76); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1a583c); SET32(5, RW(2) + 92); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET32(4, RW(29) + 352);
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1a5850); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
c->f[0].u = RW(0);
c->f[1].u = rd32(c, (RW(2) + 24));
c->fcc = F(1) == F(0);
{ int t = c->fcc;  if (t) goto L_001A5920; }
SET64(2, rd8(c, (RW(2) + 20)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A58A0; }
SET64(3, (s32)rd32(c, (RW(29) + 364)));
SET64(2, (s32)rd32(c, (RW(29) + 356)));
SET32(2, RW(3) + RW(2));
wr32(c, (RW(29) + 364), RW(2));
SET64(2, RSD(2) < (s64)448);
{ int t = RD(2) != RD(0);  if (t) goto L_001A5898; }
SET32(2, RW(0) + 448);
wr32(c, (RW(29) + 364), RW(2));
L_001A5898:;
wr32(c, (RW(29) + 356), RW(0));
L_001A58A0:;
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
SET64(2, rd8(c, (RW(2) + 22)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A58C0; }
SET64(2, (s32)rd32(c, (RW(29) + 356)));
SET32(3, RW(0) + 448);
SET32(2, RW(3) - RW(2));
wr32(c, (RW(29) + 364), RW(2));
L_001A58C0:;
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
SET64(2, rd8(c, (RW(2) + 23)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A5900; }
SET64(3, (s32)rd32(c, (RW(29) + 360)));
SET64(2, (s32)rd32(c, (RW(29) + 352)));
SET32(2, RW(3) + RW(2));
wr32(c, (RW(29) + 360), RW(2));
SET64(2, RSD(2) < (s64)512);
{ int t = RD(2) != RD(0);  if (t) goto L_001A58F8; }
SET32(2, RW(0) + 512);
wr32(c, (RW(29) + 360), RW(2));
L_001A58F8:;
wr32(c, (RW(29) + 352), RW(0));
L_001A5900:;
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
SET64(2, rd8(c, (RW(2) + 21)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A5920; }
SET64(2, (s32)rd32(c, (RW(29) + 352)));
SET32(3, RW(0) + 512);
SET32(2, RW(3) - RW(2));
wr32(c, (RW(29) + 360), RW(2));
L_001A5920:;
SET64(4, (s32)rd32(c, (RW(19) + 1672)));
SET32(2, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
{ int t = RD(3) == RD(2);  if (t) goto L_001A5948; }
c->f[12].u = rd32(c, (RW(4) + 96));
SET32(5, RW(29) + 352);
SET64(31, 0x1a5944); SET64(4, RD(17) + RD(0)); F_0016E320(c);
L_001A5948:;
SET64(3, (s32)rd32(c, (RW(19) + 1672)));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 264), RW(0));
wr32(c, (RW(29) + 268), RW(2));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(3) + 416), c->f[22].u);
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
wr32(c, (RW(2) + 420), c->f[21].u);
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
c->f[0].u = rd32(c, (RW(2) + 416));
c->f[0].f = fpu(F(24) + F(0));
wr32(c, (RW(2) + 132), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
c->f[0].u = rd32(c, (RW(2) + 420));
c->f[0].f = fpu(F(23) + F(0));
wr32(c, (RW(2) + 136), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
c->f[0].u = rd32(c, (RW(2) + 132));
wr32(c, (RW(2) + 140), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
c->f[0].u = rd32(c, (RW(2) + 136));
wr32(c, (RW(2) + 144), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
c->f[1].u = rd32(c, (RW(2) + 136));
c->f[0].u = rd32(c, (RW(2) + 132));
wr32(c, (RW(29) + 260), c->f[1].u);
wr32(c, (RW(29) + 256), c->f[0].u);
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 368) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x1a59cc); SET32(5, RW(29) + 368); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET32(4, RW(29) + 240);
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x1a59e0); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 160)));
c->f[3].u = rd32(c, (RW(29) + 252));
c->f[2].u = rd32(c, (RW(29) + 248));
c->f[1].u = rd32(c, (RW(29) + 244));
c->f[0].u = rd32(c, (RW(29) + 240));
wr32(c, (RW(4) + 268), c->f[0].u);
wr32(c, (RW(4) + 272), c->f[1].u);
wr32(c, (RW(4) + 276), c->f[2].u);
SET64(31, 0x1a5a08); wr32(c, (RW(4) + 280), c->f[3].u); F_0016E300(c);
L_001A5A08:;
SET64(4, (s32)rd32(c, (RW(19) + 1672)));
c->f[9].u = rd32(c, (RW(4) + 132));
c->f[7].u = rd32(c, (RW(4) + 140));
c->f[8].u = rd32(c, (RW(4) + 136));
c->f[6].u = rd32(c, (RW(4) + 144));
c->fcc = F(9) == F(7);
{ int t = !c->fcc; SET32(3, RW(4) + 132); if (t) goto L_001A5A38; }
c->fcc = F(8) == F(6);
{ int t = c->fcc;  if (t) goto L_001A5C50; }
L_001A5A38:;
SET64(2, (s64)(s32)0x41200000);
c->f[2].u = rd32(c, (RW(4) + 156));
c->f[1].u = rd32(c, (RW(4) + 160));
c->f[0].u = RW(2);
c->f[2].f = fpu(F(20) - F(2));
c->f[1].f = fpu_div(F(2), F(1));
c->f[5].u = rd32(c, (RW(4) + 148));
c->f[4].u = rd32(c, (RW(4) + 152));
c->f[1].f = fpu(F(0) * F(1));
c->fcc = F(1) < F(0);
{ int t = !c->fcc;  if (t) goto L_001A5BE0; }
c->f[3].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
c->fcc = F(3) == F(5);
wr32(c, (RW(29) + 344), RW(0));
wr32(c, (RW(29) + 348), RW(2));
wr32(c, (RW(29) + 336), c->f[9].u);
c->f[2].u = RW(2);
{ int t = !c->fcc; wr32(c, (RW(29) + 340), c->f[8].u); if (t) goto L_001A5AE0; }
c->f[1].f = fpu_div(F(1), F(0));
c->f[0].f = fpu(F(7) - F(9));
c->facc = fpu(F(3) + F(9));
c->f[0].f = fpu(c->facc + F(1) * F(0));
wr32(c, (RW(29) + 224), c->f[0].u);
c->f[0].f = fpu(F(6) - F(8));
c->facc = fpu(F(3) + F(8));
c->f[0].f = fpu(c->facc + F(1) * F(0));
wr32(c, (RW(29) + 228), c->f[0].u);
c->f[0].f = fpu(F(3) - F(3));
c->facc = fpu(F(3) + F(3));
c->f[0].f = fpu(c->facc + F(1) * F(0));
wr32(c, (RW(29) + 236), c->f[2].u);
wr32(c, (RW(29) + 232), c->f[0].u);
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 336) & ~15u, &c->r[2]); goto L_001A5B88;
L_001A5AE0:;
SET64(2, (s64)(s32)0x3f000000);
c->f[0].u = RW(2);
c->f[0].f = fpu(F(0) * F(5));
SET64(2, (s64)(s32)0x42c80000);
c->f[0].f = fpu(F(0) * F(1));
c->f[0].f = fpu(F(1) * F(0));
c->facc = fpu(F(3) + F(0));
c->f[1].f = fpu(c->facc + F(4) * F(1));
c->f[0].u = RW(2);
c->f[5].f = fpu_div(F(1), F(0));
c->fcc = F(5) <= F(2);
{ int t = c->fcc;  if (t) goto L_001A5B38; }
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
c->f[5].u = c->f[2].u;
wr32(c, (RW(2) + 132), c->f[7].u);
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
wr32(c, (RW(2) + 136), c->f[6].u);
L_001A5B38:;
SET64(2, (s64)(s32)0x3f800000);
c->f[4].u = rd32(c, (RW(29) + 336));
wr32(c, (RW(29) + 220), RW(2));
c->f[3].u = RW(0);
c->f[2].u = rd32(c, (RW(29) + 340));
c->f[1].f = fpu(F(7) - F(4));
c->facc = fpu(F(3) + F(4));
c->f[1].f = fpu(c->facc + F(5) * F(1));
wr32(c, (RW(29) + 208), c->f[1].u);
c->f[1].f = fpu(F(6) - F(2));
c->facc = fpu(F(3) + F(2));
c->f[1].f = fpu(c->facc + F(5) * F(1));
c->f[0].u = rd32(c, (RW(29) + 344));
wr32(c, (RW(29) + 212), c->f[1].u);
c->facc = fpu(F(3) + F(0));
c->f[0].f = fpu(F(3) - F(0));
c->f[0].f = fpu(c->facc + F(5) * F(0));
wr32(c, (RW(29) + 216), c->f[0].u);
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 336) & ~15u, &c->r[2]);
L_001A5B88:;
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x1a5b9c); SET32(5, RW(29) + 336); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET32(4, RW(29) + 192);
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x1a5bb0); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 160)));
c->f[3].u = rd32(c, (RW(29) + 204));
c->f[2].u = rd32(c, (RW(29) + 200));
c->f[1].u = rd32(c, (RW(29) + 196));
c->f[0].u = rd32(c, (RW(29) + 192));
wr32(c, (RW(4) + 268), c->f[0].u);
wr32(c, (RW(4) + 272), c->f[1].u);
wr32(c, (RW(4) + 276), c->f[2].u);
SET64(31, 0x1a5bd8); wr32(c, (RW(4) + 280), c->f[3].u); F_0016E300(c);
 goto L_001A5C50;
L_001A5BE0:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(3) + 0), c->f[7].u);
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(19) + 1672)));
wr32(c, (RW(3) + 136), c->f[6].u);
wr32(c, (RW(29) + 320), c->f[7].u);
wr32(c, (RW(29) + 332), RW(2));
wr32(c, (RW(29) + 324), c->f[6].u);
wr32(c, (RW(29) + 328), RW(0));
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x1a5c14); SET32(5, RW(29) + 320); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET32(4, RW(29) + 176);
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x1a5c28); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 160)));
c->f[3].u = rd32(c, (RW(29) + 188));
c->f[2].u = rd32(c, (RW(29) + 184));
c->f[1].u = rd32(c, (RW(29) + 180));
c->f[0].u = rd32(c, (RW(29) + 176));
wr32(c, (RW(4) + 268), c->f[0].u);
wr32(c, (RW(4) + 272), c->f[1].u);
wr32(c, (RW(4) + 276), c->f[2].u);
SET64(31, 0x1a5c50); wr32(c, (RW(4) + 280), c->f[3].u); F_0016E300(c);
L_001A5C50:;
SET64(3, (s32)rd32(c, (RW(19) + 1672)));
c->f[3].u = rd32(c, (RW(3) + 224));
c->f[2].u = rd32(c, (RW(3) + 216));
c->fcc = F(2) == F(3);
{ int t = !c->fcc;  if (t) goto L_001A5C80; }
c->f[1].u = rd32(c, (RW(3) + 220));
c->f[0].u = rd32(c, (RW(3) + 228));
c->fcc = F(1) == F(0);
{ int t = c->fcc;  if (t) goto L_001A5DD8; }
L_001A5C80:;
c->f[3].f = fpu(F(2) - F(3));
c->f[0].u = (u32)fpu_cvtw(F(3));
SET64(5, (s32)c->f[0].u);
c->f[2].u = rd32(c, (RW(3) + 220));
c->f[1].u = rd32(c, (RW(3) + 228));
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[4].f = fpu(F(2) - F(1));
c->f[2].f = fpu(F(3) - F(0));
c->f[0].u = (u32)fpu_cvtw(F(4));
SET64(4, (s32)c->f[0].u);
c->f[0].u = RW(0);
c->fcc = F(0) == F(2);
{ int t = c->fcc;  if (t) goto L_001A5D20; }
c->f[1].u = rd32(c, (RW(3) + 232));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(1) + F(2));
wr32(c, (RW(3) + 232), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
c->f[1].u = rd32(c, (RW(2) + 232));
c->fcc = F(1) < F(0);
{ int t = c->fcc; SET32(3, RW(2) + 232); if (t) goto L_001A5CF8; }
c->f[0].f = fpu(F(1) - F(0));
SET32(5, RW(5) + 1);
wr32(c, (RW(3) + 0), c->f[0].u); goto L_001A5D20;
L_001A5CF8:;
SET64(2, (s64)(s32)0xbf800000);
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc;  if (t) goto L_001A5D20; }
c->f[0].f = fpu(F(1) - F(0));
SET32(5, RW(5) + -1);
wr32(c, (RW(3) + 0), c->f[0].u);
L_001A5D20:;
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[2].f = fpu(F(4) - F(0));
c->f[0].u = RW(0);
c->fcc = F(0) == F(2);
{ int t = c->fcc;  if (t) goto L_001A5DA8; }
SET64(3, (s32)rd32(c, (RW(19) + 1672)));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(3) + 236));
c->f[1].f = fpu(F(1) + F(2));
wr32(c, (RW(3) + 236), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
c->f[1].u = rd32(c, (RW(2) + 236));
c->fcc = F(1) < F(0);
{ int t = c->fcc; SET32(3, RW(2) + 236); if (t) goto L_001A5D80; }
c->f[0].f = fpu(F(1) - F(0));
SET32(4, RW(4) + 1);
wr32(c, (RW(3) + 0), c->f[0].u); goto L_001A5DA8;
L_001A5D80:;
SET64(2, (s64)(s32)0xbf800000);
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc;  if (t) goto L_001A5DA8; }
c->f[0].f = fpu(F(1) - F(0));
SET32(4, RW(4) + -1);
wr32(c, (RW(3) + 0), c->f[0].u);
L_001A5DA8:;
SET64(6, RD(4) << 48);
SET64(5, RD(5) << 48);
SET64(6, RSD(6) >> 48);
SET64(5, RSD(5) >> 48);
SET64(31, 0x1a5dc0); SET64(4, RD(17) + RD(0)); F_0016E310(c);
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
c->f[0].u = rd32(c, (RW(2) + 216));
wr32(c, (RW(2) + 224), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
c->f[0].u = rd32(c, (RW(2) + 220));
wr32(c, (RW(2) + 228), c->f[0].u);
L_001A5DD8:;
SET64(3, (s32)rd32(c, (RW(19) + 1672)));
SET64(2, rd8(c, (RW(3) + 241)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A6030; }
SET64(2, (s32)rd32(c, (RW(18) + 1864)));
{ int t = RD(21) != RD(2);  if (t) goto L_001A6030; }
SET64(2, rd8(c, (RW(3) + 240)));
{ int t = RD(2) == RD(0);  if (t) goto L_001A6010; }
SET64(20, (s32)rd32(c, (RW(17) + 248)));
c->f[21].u = rd32(c, (RW(3) + 40));
c->f[22].u = rd32(c, (RW(3) + 36));
c->f[23].u = rd32(c, (RW(3) + 32));
c->f[12].u = rd32(c, (RW(3) + 28));
SET64(31, 0x1a5e1c); SET32(4, RW(20) + 48); F_00162D00(c);
c->f[12].u = c->f[23].u;
SET64(31, 0x1a5e28); SET32(4, RW(20) + 48); F_00162CF0(c);
c->f[12].u = c->f[22].u;
SET64(31, 0x1a5e34); SET32(4, RW(20) + 48); F_00162CE0(c);
c->f[12].u = c->f[21].u;
SET64(31, 0x1a5e40); SET32(4, RW(20) + 48); F_00162CD0(c);
SET64(25, (s32)rd32(c, (RW(20) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a5e50); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
SET64(20, (s32)rd32(c, (RW(17) + 248)));
c->f[21].u = rd32(c, (RW(2) + 72));
c->f[22].u = rd32(c, (RW(2) + 68));
c->f[23].u = rd32(c, (RW(2) + 64));
c->f[12].u = rd32(c, (RW(2) + 60));
SET64(31, 0x1a5e70); SET32(4, RW(20) + 64); F_00162D00(c);
c->f[12].u = c->f[23].u;
SET64(31, 0x1a5e7c); SET32(4, RW(20) + 64); F_00162CF0(c);
c->f[12].u = c->f[22].u;
SET64(31, 0x1a5e88); SET32(4, RW(20) + 64); F_00162CE0(c);
c->f[12].u = c->f[21].u;
SET64(31, 0x1a5e94); SET32(4, RW(20) + 64); F_00162CD0(c);
SET64(25, (s32)rd32(c, (RW(20) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a5ea4); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 1672)));
SET64(2, (s64)(s32)0x43000000);
c->f[2].u = RW(2);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = rd32(c, (RW(3) + 56));
c->f[0].u = RW(2);
c->f[1].f = fpu(F(2) * F(1));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_001A5EE0; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(4, (s32)c->f[0].u);
SET64(4, RD(4) & 0xff); goto L_001A5EF8;
L_001A5EE0:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(4, (s32)c->f[0].u);
SET64(4, RD(4) | RD(2));
SET64(4, RD(4) & 0xff);
L_001A5EF8:;
SET64(2, RD(4) & 0xff);
SET64(4, (s64)(s32)0x437f0000);
c->f[2].u = RW(4);
c->f[1].u = rd32(c, (RW(3) + 52));
SET64(4, (s64)(s32)0x4f000000);
c->f[0].u = RW(4);
c->f[1].f = fpu(F(2) * F(1));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_001A5F34; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(5, (s32)c->f[0].u);
SET64(5, RD(5) & 0xff); goto L_001A5F4C;
L_001A5F34:;
SET64(4, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
SET64(5, RD(5) | RD(4));
SET64(5, RD(5) & 0xff);
L_001A5F4C:;
c->f[1].u = rd32(c, (RW(3) + 48));
SET64(4, (s64)(s32)0x437f0000);
c->f[2].u = RW(4);
SET64(4, (s64)(s32)0x4f000000);
c->f[1].f = fpu(F(2) * F(1));
c->f[0].u = RW(4);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; SET64(6, RD(5) & 0xff); if (t) goto L_001A5F84; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(5, (s32)c->f[0].u);
SET64(5, RD(5) & 0xff); goto L_001A5FA0;
L_001A5F84:;
c->f[0].f = fpu(F(1) - F(0));
SET64(4, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
SET64(5, RD(5) | RD(4));
SET64(5, RD(5) & 0xff);
L_001A5FA0:;
c->f[1].u = rd32(c, (RW(3) + 44));
SET64(4, (s64)(s32)0x437f0000);
c->f[2].u = RW(4);
SET64(4, (s64)(s32)0x4f000000);
c->f[1].f = fpu(F(2) * F(1));
c->f[0].u = RW(4);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; SET64(5, RD(5) & 0xff); if (t) goto L_001A5FD8; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(4, (s32)c->f[0].u);
SET64(4, RD(4) & 0xff); goto L_001A5FF4;
L_001A5FD8:;
c->f[0].f = fpu(F(1) - F(0));
SET64(3, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(4, (s32)c->f[0].u);
SET64(4, RD(4) | RD(3));
SET64(4, RD(4) & 0xff);
L_001A5FF4:;
wr8(c, (RW(29) + 384), (u8)RW(4));
wr8(c, (RW(29) + 385), (u8)RW(5));
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 384);
wr8(c, (RW(29) + 386), (u8)RW(6));
SET64(31, 0x1a6010); wr8(c, (RW(29) + 387), (u8)RW(2)); F_0015F270(c);
L_001A6010:;
SET64(4, (s32)rd32(c, (RW(17) + 248)));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a6024);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
wr8(c, (RW(2) + 241), (u8)RW(0));
L_001A6030:;
SET64(4, (s32)rd32(c, (RW(19) + 1672)));
SET64(2, rd8(c, (RW(4) + 184)));
{ int t = RD(2) == RD(0); SET32(3, RW(4) + 184); if (t) goto L_001A60E8; }
c->f[1].u = rd32(c, (RW(4) + 196));
c->f[0].u = rd32(c, (RW(4) + 204));
c->fcc = F(1) == F(0);
{ int t = c->fcc;  if (t) goto L_001A60E0; }
c->f[2].u = rd32(c, (RW(4) + 208));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(4) + 212));
c->f[0].u = RW(2);
c->f[2].f = fpu(F(20) - F(2));
c->f[3].f = fpu_div(F(2), F(1));
c->fcc = F(3) <= F(0);
{ int t = c->fcc;  if (t) goto L_001A6088; }
wr8(c, (RW(3) + 0), (u8)RW(0));
c->f[3].u = c->f[0].u;
L_001A6088:;
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
c->f[0].u = RW(0);
SET64(4, RD(16) + RD(0));
c->f[2].u = rd32(c, (RW(2) + 200));
c->f[1].u = rd32(c, (RW(2) + 204));
c->facc = fpu(F(0) + F(2));
c->f[0].f = fpu(F(1) - F(2));
c->f[0].f = fpu(c->facc + F(3) * F(0));
wr32(c, (RW(29) + 396), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 1672)));
wr32(c, (RW(2) + 196), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x1a60c4); SET32(5, RW(29) + 396); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a60d4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
 goto L_001A60E8;
L_001A60E0:;
wr8(c, (RW(3) + 0), (u8)RW(0));
L_001A60E8:;
SET32(19, RW(19) + 4);
SET32(21, RW(21) + 1);
L_001A60F0:;
{ int t = RD(17) == RD(0);  if (t) goto L_001A6110; }
{ int t = RD(16) == RD(0);  if (t) goto L_001A6110; }
SET64(2, RSD(21) < (s64)48);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001A5368; } }
L_001A6110:;
SET64(2, rd8(c, (RW(18) + 1074)));
if (RD(2) != RD(0)) { SET64(2, RD(23) + RD(0)); goto L_001A6274; }
SET64(2, rd8(c, (RW(18) + 305)));
{ int t = RD(2) != RD(0);  if (t) goto L_001A6270; }
SET64(3, (s32)rd32(c, (RW(18) + 308)));
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { c->f[2].u = rd32(c, (RW(18) + 312)); goto L_001A61E4; }
SET32(2, RW(0) + 3);
if (RD(3) == RD(2)) { c->f[2].u = rd32(c, (RW(18) + 312)); goto L_001A614C; }
 goto L_001A6270;
L_001A614C:;
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = RW(2);
c->fcc = F(2) < F(1);
if (c->fcc) { SET64(2, (s64)(s32)0x3dcc0000); goto L_001A6170; }
SET32(2, RW(0) + 4);
wr32(c, (RW(18) + 308), RW(2)); goto L_001A6270;
L_001A6170:;
SET64(2, RD(2) | 0xcccd);
c->f[0].u = RW(2);
c->f[0].f = fpu(F(2) + F(0));
c->fcc = F(0) < F(1);
{ int t = c->fcc; wr32(c, (RW(18) + 312), c->f[0].u); if (t) goto L_001A6190; }
wr32(c, (RW(18) + 312), c->f[1].u);
L_001A6190:;
c->f[1].u = rd32(c, (RW(18) + 312));
SET64(3, (s32)rd32(c, (RW(18) + 284)));
wr32(c, (RW(3) + 348), c->f[1].u);
c->f[0].u = rd32(c, (RW(28) + -32260));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
wr32(c, (RW(2) + 264), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32256));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
wr32(c, (RW(2) + 268), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32252));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
wr32(c, (RW(2) + 272), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
wr32(c, (RW(2) + 276), c->f[1].u);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a61dc);  rt_call(c, t); }
 goto L_001A6270;
L_001A61E4:;
c->f[1].u = RW(0);
c->fcc = F(2) <= F(1);
if (!c->fcc) { SET64(2, (s64)(s32)0x3dcc0000); goto L_001A6204; }
SET32(2, RW(0) + 2);
wr32(c, (RW(18) + 308), RW(2)); goto L_001A6270;
L_001A6204:;
SET64(2, RD(2) | 0xcccd);
c->f[0].u = RW(2);
c->f[0].f = fpu(F(2) - F(0));
c->fcc = F(0) <= F(1);
{ int t = !c->fcc; wr32(c, (RW(18) + 312), c->f[0].u); if (t) goto L_001A6224; }
wr32(c, (RW(18) + 312), c->f[1].u);
L_001A6224:;
c->f[1].u = rd32(c, (RW(18) + 312));
SET64(3, (s32)rd32(c, (RW(18) + 284)));
wr32(c, (RW(3) + 348), c->f[1].u);
c->f[0].u = rd32(c, (RW(28) + -32260));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
wr32(c, (RW(2) + 264), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32256));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
wr32(c, (RW(2) + 268), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32252));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
wr32(c, (RW(2) + 272), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
wr32(c, (RW(2) + 276), c->f[1].u);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a6270);  rt_call(c, t); }
L_001A6270:;
SET64(2, RD(23) + RD(0));
L_001A6274:;
SET64(31, rd64(c, (RW(29) + 160)));
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 144) & ~15u, &c->r[23]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 128) & ~15u, &c->r[22]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 112) & ~15u, &c->r[21]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 96) & ~15u, &c->r[20]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET32(29, RW(29) + 400); return;
}

void F_001A62C0(Ctx *c) { /* func_001A62C0 */
ENTER(0x1a62c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001A62F0; }
SET64(31, 0x1a62dc); SET64(5, (s32)rd32(c, (RW(16) + 132))); F_001A63B0(c);
SET64(5, (s32)rd32(c, (RW(16) + 136)));
SET64(31, 0x1a62e8); SET64(4, RD(16) + RD(0)); F_001A63B0(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_001A63A4;
L_001A62F0:;
SET64(5, (s32)rd32(c, (RW(16) + 132)));
{ int t = RD(5) == RD(0);  if (t) goto L_001A6328; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -416);
SET64(3, (s32)rd32(c, (RW(5) + 16)));
L_001A6308:;
SET64(3, (s32)rd32(c, (RW(3) + 12)));
if (RD(3) != RD(2)) { SET64(5, (s32)rd32(c, (RW(5) + 0))); goto L_001A631C; }
SET64(5, (s32)rd32(c, (RW(5) + 0))); goto L_001A6328;
L_001A631C:;
if (RD(5) != RD(0)) { SET64(3, (s32)rd32(c, (RW(5) + 16))); { POLL(); goto L_001A6308; } }
L_001A6328:;
SET64(31, 0x1a6330); SET64(4, RD(16) + RD(0)); F_001A63B0(c);
SET64(5, (s32)rd32(c, (RW(16) + 136)));
{ int t = RD(5) == RD(0);  if (t) goto L_001A6398; }
SET64(7, rd8(c, (RW(16) + 281)));
SET64(4, (s64)(s32)0x1b0000);
SET64(2, (s64)(s32)0x1b0000);
SET32(4, RW(4) + -11808);
SET32(2, RW(2) + -11824);
L_001A6350:;
{ int t = RD(7) == RD(0); SET64(6, (s32)rd32(c, (RW(5) + 16))); if (t) goto L_001A6368; }
SET64(3, (s32)rd32(c, (RW(6) + 12)));
{ int t = RD(3) == RD(4);  if (t) goto L_001A6380; }
L_001A6368:;
if (RD(7) != RD(0)) { SET64(5, (s32)rd32(c, (RW(5) + 0))); goto L_001A638C; }
SET64(3, (s32)rd32(c, (RW(6) + 12)));
{ int t = RD(3) != RD(2);  if (t) goto L_001A6388; }
L_001A6380:;
SET64(5, (s32)rd32(c, (RW(5) + 0))); goto L_001A6398;
L_001A6388:;
SET64(5, (s32)rd32(c, (RW(5) + 0)));
L_001A638C:;
{ int t = RD(5) != RD(0);  if (t) { POLL(); goto L_001A6350; } }
L_001A6398:;
SET64(31, 0x1a63a0); SET64(4, RD(16) + RD(0)); F_001A63B0(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_001A63A4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001A63B0(Ctx *c) { /* func_001A63B0 */
ENTER(0x1a63b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_001A64E0; }
SET64(5, rd8(c, (RW(18) + 281)));
L_001A63D8:;
{ int t = RD(5) == RD(0); SET64(6, (s32)rd32(c, (RW(17) + 16))); if (t) goto L_001A63F8; }
SET64(4, (s32)rd32(c, (RW(6) + 12)));
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -11808);
{ int t = RD(4) == RD(3);  if (t) goto L_001A64E0; }
L_001A63F8:;
{ int t = RD(5) != RD(0);  if (t) goto L_001A6418; }
SET64(4, (s32)rd32(c, (RW(6) + 12)));
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -11824);
{ int t = RD(4) == RD(3);  if (t) goto L_001A64E0; }
L_001A6418:;
{ int t = RD(16) == RD(0);  if (t) goto L_001A6438; }
SET64(4, (s32)rd32(c, (RW(6) + 12)));
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + 2672);
{ int t = RD(4) == RD(3);  if (t) goto L_001A64E0; }
L_001A6438:;
SET64(4, (s32)rd32(c, (RW(6) + 16)));
SET32(3, RW(0) + 12);
{ int t = RD(4) == RD(3);  if (t) goto L_001A6470; }
SET32(3, RW(0) + 8);
{ int t = RD(4) == RD(3);  if (t) goto L_001A6470; }
SET32(3, RW(0) + 4);
{ int t = RD(4) == RD(3);  if (t) goto L_001A6470; }
{ int t = RD(4) == RD(0);  if (t) goto L_001A6470; }
 goto L_001A64D0;
L_001A6470:;
{ int t = RD(16) != RD(0);  if (t) goto L_001A64A8; }
SET64(7, (s32)rd32(c, (RW(6) + 12)));
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + 2672);
{ int t = RD(7) != RD(3);  if (t) goto L_001A64A8; }
SET64(5, (s32)rd32(c, (RW(6) + 20)));
SET64(4, RD(18) + RD(0));
{ u32 t = RW(7); SET64(31, 0x1a649c); SET32(6, RW(0) + 1); rt_call(c, t); }
SET64(16, RD(0) + (s64)1); goto L_001A64D0;
L_001A64A8:;
SET64(7, (s32)rd32(c, (RW(6) + 12)));
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -10944);
{ int t = RD(7) == RD(3);  if (t) goto L_001A64D0; }
SET64(5, (s32)rd32(c, (RW(6) + 20)));
SET64(4, RD(18) + RD(0));
{ u32 t = RW(7); SET64(31, 0x1a64cc); SET32(6, RW(0) + 1); rt_call(c, t); }
L_001A64D0:;
SET64(17, (s32)rd32(c, (RW(17) + 0)));
if (RD(17) != RD(0)) { SET64(5, rd8(c, (RW(18) + 281))); { POLL(); goto L_001A63D8; } }
L_001A64E0:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

static void B_001A6500(Ctx *c, u32 entry) { /* func_001A6500 */
ENTER(entry);
switch (entry) { case 0x1a6678: goto L_001A6678; case 0x1a6688: goto L_001A6688; case 0x1a6690: goto L_001A6690; case 0x1a66a0: goto L_001A66A0; case 0x1a66a8: goto L_001A66A8; case 0x1a66b0: goto L_001A66B0; case 0x1a66b8: goto L_001A66B8; }
L_001A6500:;
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 172), RW(5));
SET64(16, (s32)rd32(c, (RW(4) + 124)));
{ int t = RD(16) == RD(0); SET64(20, RD(4) + RD(0)); if (t) goto L_001A6574; }
SET64(4, (s32)rd32(c, (RW(16) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 16), RW(0)); goto L_001A655C; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a6558); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 16), RW(0));
L_001A655C:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1a6568); SET32(5, RW(0) + 1); F_001A6C50(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1a6574); wr32(c, (RW(16) + 0), RW(0)); F_001004B0(c);
L_001A6574:;
wr32(c, (RW(20) + 124), RW(0));
SET64(16, (s32)rd32(c, (RW(20) + 128)));
if (RD(16) == RD(0)) { wr32(c, (RW(20) + 128), RW(0)); goto L_001A65C0; }
SET64(4, (s32)rd32(c, (RW(16) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 16), RW(0)); goto L_001A65A4; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a65a0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 16), RW(0));
L_001A65A4:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1a65b0); SET32(5, RW(0) + 1); F_001A6C50(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1a65bc); wr32(c, (RW(16) + 0), RW(0)); F_001004B0(c);
wr32(c, (RW(20) + 128), RW(0));
L_001A65C0:;
SET32(6, RW(0) + 1);
wr32(c, (RW(20) + 128), RW(0));
SET32(2, RW(0) + 83);
wr32(c, (RW(20) + 124), RW(0));
SET64(22, RD(0) + RD(0));
wr8(c, (RW(20) + 281), (u8)RW(6));
SET64(19, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 172)));
SET32(5, RW(3) + 1);
wr32(c, (RW(29) + 172), RW(5));
SET64(3, rd8(c, (RW(3) + 0)));
{ int t = RD(3) == RD(2); SET64(30, RD(0) + RD(0)); if (t) goto L_001A6600; }
wr8(c, (RW(20) + 108), (u8)RW(0));
SET64(2, RD(0) + RD(0)); goto L_001A6C20;
L_001A6600:;
SET32(4, RW(5) + 1);
SET32(2, RW(0) + 67);
wr32(c, (RW(29) + 172), RW(4));
SET64(3, rd8(c, (RW(5) + 0)));
if (RD(3) == RD(2)) { SET32(2, RW(4) + 4); goto L_001A6624; }
wr8(c, (RW(20) + 108), (u8)RW(0));
SET64(2, RD(0) + RD(0)); goto L_001A6C20;
L_001A6624:;
SET64(23, RD(6) & 0xff);
wr32(c, (RW(29) + 172), RW(2));
L_001A662C:;
SET64(5, (s32)rd32(c, (RW(20) + 120)));
L_001A6630:;
SET32(4, RW(29) + 172);
SET64(31, 0x1a663c); SET64(18, RD(0) + (s64)1); F_001CACD0(c);
SET64(21, RD(2) + RD(0));
{ int t = RD(21) == RD(0);  if (t) goto L_001A6BF8; }
SET64(2, (s32)rd32(c, (RW(21) + 16)));
SET64(1, RD(2) < (u64)(s64)21);
{ int t = RD(1) == RD(0);  if (t) goto L_001A66B8; }
SET64(3, (s64)(s32)0x490000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + 22784);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x1a6500: goto L_001A6500; case 0x1a6678: goto L_001A6678; case 0x1a6688: goto L_001A6688; case 0x1a6690: goto L_001A6690; case 0x1a66a0: goto L_001A66A0; case 0x1a66a8: goto L_001A66A8; case 0x1a66b0: goto L_001A66B0; case 0x1a66b8: goto L_001A66B8; default: rt_jump(c, t); return; } }
L_001A6678:;
SET64(18, RD(0) + RD(0));
SET64(23, RD(0) + (s64)1); goto L_001A66B8;
L_001A6688:;
SET64(23, RD(18) + RD(0)); goto L_001A66B8;
L_001A6690:;
SET64(18, RD(0) + RD(0));
SET64(23, RD(0) + RD(0)); goto L_001A66B8;
L_001A66A0:;
SET64(23, RD(0) + RD(0)); goto L_001A66B8;
L_001A66A8:;
SET64(18, RD(0) + RD(0)); goto L_001A66B8;
L_001A66B0:;
SET64(18, RD(0) + RD(0));
SET64(23, RD(0) + RD(0));
L_001A66B8:;
{ int t = RD(23) == RD(0); SET64(16, (s32)rd32(c, (RW(21) + 12))); if (t) goto L_001A6A38; }
SET64(31, 0x1a66c8); SET32(4, RW(0) + 20); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001A66F0; }
wr32(c, (RW(17) + 0), RW(0));
wr8(c, (RW(17) + 4), (u8)RW(18));
wr32(c, (RW(17) + 16), RW(21));
wr8(c, (RW(17) + 5), (u8)RW(0));
wr8(c, (RW(17) + 6), (u8)RW(0));
wr32(c, (RW(17) + 12), RW(0));
wr32(c, (RW(17) + 8), RW(0));
L_001A66F0:;
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -416);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6790; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -2432);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6790; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -9344);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6790; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -9440);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6790; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -5936);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6790; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -7600);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6790; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -6960);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6790; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -7024);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6790; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -8528);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6790; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -8608);
{ int t = RD(16) != RD(2);  if (t) goto L_001A67F0; }
L_001A6790:;
SET64(2, (s32)rd32(c, (RW(17) + 16)));
c->f[0].u = RW(0);
SET64(2, (s32)rd32(c, (RW(2) + 20)));
SET64(4, (s32)rd32(c, (RW(2) + 4)));
{ int t = RD(4) == RD(0);  if (t) goto L_001A6950; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(0) + 194);
{ int t = RD(3) == RD(2);  if (t) goto L_001A67E0; }
SET32(2, RW(0) + 193);
{ int t = RD(3) == RD(2);  if (t) goto L_001A67D0; }
 goto L_001A67E8;
L_001A67D0:;
c->f[0].u = rd32(c, (RW(4) + 12));
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001A67E8;
L_001A67E0:;
c->f[0].u = rd32(c, (RW(4) + 12));
L_001A67E8:;
wr32(c, (RW(17) + 8), c->f[0].u); goto L_001A6950;
L_001A67F0:;
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -1232);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6880; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -1680);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6880; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -2080);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6880; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -9872);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6880; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -10304);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6880; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -10688);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6880; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -10928);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6880; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -4240);
{ int t = RD(16) == RD(2);  if (t) goto L_001A6880; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -6880);
{ int t = RD(16) != RD(2);  if (t) goto L_001A6898; }
L_001A6880:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x1a688c); SET32(5, RW(0) + 1); F_001A81D0(c);
 goto L_001A6950;
L_001A6898:;
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -13856);
{ int t = RD(16) == RD(2);  if (t) goto L_001A68F8; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -14032);
{ int t = RD(16) == RD(2);  if (t) goto L_001A68F8; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -13440);
{ int t = RD(16) == RD(2);  if (t) goto L_001A68F8; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -13648);
{ int t = RD(16) == RD(2);  if (t) goto L_001A68F8; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -14288);
{ int t = RD(16) == RD(2);  if (t) goto L_001A68F8; }
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -12320);
{ int t = RD(16) != RD(2);  if (t) goto L_001A6950; }
L_001A68F8:;
SET64(2, (s32)rd32(c, (RW(17) + 16)));
c->f[0].u = RW(0);
SET64(4, (s32)rd32(c, (RW(2) + 20)));
{ int t = RD(4) == RD(0);  if (t) goto L_001A6950; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(0) + 194);
{ int t = RD(3) == RD(2);  if (t) goto L_001A6940; }
SET32(2, RW(0) + 193);
{ int t = RD(3) == RD(2);  if (t) goto L_001A6930; }
 goto L_001A6948;
L_001A6930:;
c->f[0].u = rd32(c, (RW(4) + 12));
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001A6948;
L_001A6940:;
c->f[0].u = rd32(c, (RW(4) + 12));
L_001A6948:;
wr32(c, (RW(17) + 8), c->f[0].u);
L_001A6950:;
SET64(2, (s32)rd32(c, (RW(20) + 124)));
{ int t = RD(2) != RD(0);  if (t) goto L_001A6968; }
wr32(c, (RW(20) + 124), RW(17));
SET64(19, RD(17) + RD(0)); { POLL(); goto L_001A662C; }
L_001A6968:;
SET64(2, RD(18) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_001A6988; }
wr32(c, (RW(19) + 0), RW(17));
SET64(22, RD(17) + RD(0));
SET64(19, RD(17) + RD(0)); { POLL(); goto L_001A662C; }
L_001A6988:;
{ int t = RD(22) != RD(0);  if (t) goto L_001A69A0; }
wr32(c, (RW(19) + 0), RW(17));
SET64(19, RD(17) + RD(0)); { POLL(); goto L_001A662C; }
L_001A69A0:;
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + -7616);
{ int t = RD(16) != RD(2);  if (t) goto L_001A69C0; }
wr32(c, (RW(19) + 0), RW(17));
SET64(19, RD(17) + RD(0)); { POLL(); goto L_001A662C; }
L_001A69C0:;
SET64(5, RD(0) + RD(0));
{ int t = RD(22) == RD(0); SET64(4, RD(22) + RD(0)); if (t) { POLL(); goto L_001A662C; } }
c->f[1].u = rd32(c, (RW(17) + 8));
SET32(3, RW(0) + 1);
L_001A69D8:;
c->f[0].u = rd32(c, (RW(4) + 8));
c->fcc = F(0) <= F(1);
{ int t = !c->fcc; SET64(2, RD(3) + RD(0)); if (t) goto L_001A69EC; }
SET64(2, RD(0) + RD(0));
L_001A69EC:;
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_001A6A08; }
SET64(2, (s32)rd32(c, (RW(5) + 0)));
wr32(c, (RW(5) + 0), RW(17));
wr32(c, (RW(17) + 0), RW(2)); { POLL(); goto L_001A662C; }
L_001A6A08:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_001A6A20; }
wr32(c, (RW(4) + 0), RW(17));
SET64(19, RD(17) + RD(0)); { POLL(); goto L_001A662C; }
L_001A6A20:;
SET64(5, RD(4) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, RD(2) + RD(0)); if (t) { POLL(); goto L_001A69D8; } }
SET64(5, (s32)rd32(c, (RW(20) + 120))); { POLL(); goto L_001A6630; }
L_001A6A38:;
SET64(31, 0x1a6a40); SET32(4, RW(0) + 20); F_00100670(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001A6A68; }
wr32(c, (RW(2) + 0), RW(0));
wr8(c, (RW(2) + 4), (u8)RW(18));
wr32(c, (RW(2) + 16), RW(21));
wr8(c, (RW(2) + 5), (u8)RW(0));
wr8(c, (RW(2) + 6), (u8)RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 8), RW(0));
L_001A6A68:;
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -11776);
{ int t = RD(16) == RD(3);  if (t) goto L_001A6B08; }
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -11808);
{ int t = RD(16) == RD(3);  if (t) goto L_001A6B08; }
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -13216);
{ int t = RD(16) == RD(3);  if (t) goto L_001A6B08; }
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -13088);
{ int t = RD(16) == RD(3);  if (t) goto L_001A6B08; }
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -13856);
{ int t = RD(16) == RD(3);  if (t) goto L_001A6B08; }
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -14032);
{ int t = RD(16) == RD(3);  if (t) goto L_001A6B08; }
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -13440);
{ int t = RD(16) == RD(3);  if (t) goto L_001A6B08; }
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -13648);
{ int t = RD(16) == RD(3);  if (t) goto L_001A6B08; }
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -14288);
{ int t = RD(16) == RD(3);  if (t) goto L_001A6B08; }
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -12320);
{ int t = RD(16) != RD(3);  if (t) goto L_001A6B60; }
L_001A6B08:;
SET64(3, (s32)rd32(c, (RW(2) + 16)));
c->f[0].u = RW(0);
SET64(5, (s32)rd32(c, (RW(3) + 20)));
{ int t = RD(5) == RD(0);  if (t) goto L_001A6BD0; }
SET64(4, (s32)rd32(c, (RW(5) + 0)));
SET32(3, RW(0) + 194);
{ int t = RD(4) == RD(3);  if (t) goto L_001A6B50; }
SET32(3, RW(0) + 193);
{ int t = RD(4) == RD(3);  if (t) goto L_001A6B40; }
 goto L_001A6B58;
L_001A6B40:;
c->f[0].u = rd32(c, (RW(5) + 12));
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001A6B58;
L_001A6B50:;
c->f[0].u = rd32(c, (RW(5) + 12));
L_001A6B58:;
wr32(c, (RW(2) + 8), c->f[0].u); goto L_001A6BD0;
L_001A6B60:;
SET64(3, (s64)(s32)0x1b0000);
SET32(3, RW(3) + -11824);
{ int t = RD(16) != RD(3);  if (t) goto L_001A6BD0; }
SET64(3, (s32)rd32(c, (RW(2) + 16)));
c->f[0].u = RW(0);
SET64(5, (s32)rd32(c, (RW(3) + 20)));
{ int t = RD(5) == RD(0);  if (t) goto L_001A6BC8; }
SET64(4, (s32)rd32(c, (RW(5) + 0)));
SET32(3, RW(0) + 194);
{ int t = RD(4) == RD(3);  if (t) goto L_001A6BB8; }
SET32(3, RW(0) + 193);
{ int t = RD(4) == RD(3);  if (t) goto L_001A6BA8; }
 goto L_001A6BC0;
L_001A6BA8:;
c->f[0].u = rd32(c, (RW(5) + 12));
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001A6BC0;
L_001A6BB8:;
c->f[0].u = rd32(c, (RW(5) + 12));
L_001A6BC0:;
wr32(c, (RW(2) + 8), c->f[0].u);
L_001A6BC8:;
wr8(c, (RW(20) + 281), (u8)RW(0));
L_001A6BD0:;
SET64(3, (s32)rd32(c, (RW(20) + 128)));
{ int t = RD(3) != RD(0);  if (t) goto L_001A6BE8; }
wr32(c, (RW(20) + 128), RW(2));
SET64(30, RD(2) + RD(0)); { POLL(); goto L_001A662C; }
L_001A6BE8:;
wr32(c, (RW(30) + 0), RW(2));
SET64(30, RD(2) + RD(0)); { POLL(); goto L_001A662C; }
L_001A6BF8:;
SET64(3, (s32)rd32(c, (RW(20) + 124)));
SET32(2, RW(0) + 1);
wr32(c, (RW(20) + 132), RW(3));
SET64(3, (s32)rd32(c, (RW(20) + 128)));
wr32(c, (RW(20) + 136), RW(3));
wr32(c, (RW(20) + 1872), RW(0));
wr16(c, (RW(20) + 0), (u16)RW(0));
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3));
L_001A6C20:;
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
void F_001A6500(Ctx *c) { B_001A6500(c, 0x1a6500); }
void F_001A6678(Ctx *c) { B_001A6500(c, 0x1a6678); }
void F_001A6688(Ctx *c) { B_001A6500(c, 0x1a6688); }
void F_001A6690(Ctx *c) { B_001A6500(c, 0x1a6690); }
void F_001A66A0(Ctx *c) { B_001A6500(c, 0x1a66a0); }
void F_001A66A8(Ctx *c) { B_001A6500(c, 0x1a66a8); }
void F_001A66B0(Ctx *c) { B_001A6500(c, 0x1a66b0); }
void F_001A66B8(Ctx *c) { B_001A6500(c, 0x1a66b8); }

void F_001A6C50(Ctx *c) { /* func_001A6C50 */
ENTER(0x1a6c50);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(5) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
{ int t = RD(21) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_001A6DDC; }
SET64(4, (s32)rd32(c, (RW(21) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(21) + 16), RW(0)); goto L_001A6CA0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a6c9c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(21) + 16), RW(0));
L_001A6CA0:;
SET64(20, (s32)rd32(c, (RW(21) + 0)));
if (RD(20) == RD(0)) { SET64(2, RD(22) << 48); goto L_001A6DC8; }
SET64(4, (s32)rd32(c, (RW(20) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(20) + 16), RW(0)); goto L_001A6CCC; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a6cc8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(20) + 16), RW(0));
L_001A6CCC:;
SET64(19, (s32)rd32(c, (RW(20) + 0)));
if (RD(19) == RD(0)) { SET64(4, RD(20) + RD(0)); goto L_001A6DBC; }
SET64(4, (s32)rd32(c, (RW(19) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 16), RW(0)); goto L_001A6CF8; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a6cf4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 16), RW(0));
L_001A6CF8:;
SET64(18, (s32)rd32(c, (RW(19) + 0)));
if (RD(18) == RD(0)) { SET64(4, RD(19) + RD(0)); goto L_001A6DB0; }
SET64(4, (s32)rd32(c, (RW(18) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 16), RW(0)); goto L_001A6D24; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a6d20); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 16), RW(0));
L_001A6D24:;
SET64(17, (s32)rd32(c, (RW(18) + 0)));
if (RD(17) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_001A6DA4; }
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 16), RW(0)); goto L_001A6D50; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a6d4c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 16), RW(0));
L_001A6D50:;
SET64(16, (s32)rd32(c, (RW(17) + 0)));
if (RD(16) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_001A6D98; }
SET64(4, (s32)rd32(c, (RW(16) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 16), RW(0)); goto L_001A6D7C; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a6d78); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 16), RW(0));
L_001A6D7C:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1a6d88); SET32(5, RW(0) + 1); F_001A6C50(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1a6d94); wr32(c, (RW(16) + 0), RW(0)); F_001004B0(c);
SET64(4, RD(17) + RD(0));
L_001A6D98:;
SET64(31, 0x1a6da0); wr32(c, (RW(17) + 0), RW(0)); F_001004B0(c);
SET64(4, RD(18) + RD(0));
L_001A6DA4:;
SET64(31, 0x1a6dac); wr32(c, (RW(18) + 0), RW(0)); F_001004B0(c);
SET64(4, RD(19) + RD(0));
L_001A6DB0:;
SET64(31, 0x1a6db8); wr32(c, (RW(19) + 0), RW(0)); F_001004B0(c);
SET64(4, RD(20) + RD(0));
L_001A6DBC:;
SET64(31, 0x1a6dc4); wr32(c, (RW(20) + 0), RW(0)); F_001004B0(c);
SET64(2, RD(22) << 48);
L_001A6DC8:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(21) + 0), RW(0)); if (t) goto L_001A6DDC; }
SET64(31, 0x1a6ddc); SET64(4, RD(21) + RD(0)); F_001004B0(c);
L_001A6DDC:;
SET64(2, RD(21) + RD(0));
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

void F_001A6E10(Ctx *c) { /* func_001A6E10 */
ENTER(0x1a6e10);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(18) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_001A6E94; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11216);
wr32(c, (RW(18) + 8), RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 20)));
{ int t = RD(4) == RD(0);  if (t) goto L_001A6E68; }
L_001A6E48:;
{ int t = RD(4) == RD(0); SET64(16, (s32)rd32(c, (RW(4) + 4))); if (t) goto L_001A6E60; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a6e60); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001A6E60:;
{ int t = RD(16) != RD(0); SET64(4, RD(16) + RD(0)); if (t) { POLL(); goto L_001A6E48; } }
L_001A6E68:;
if (RD(18) == RD(0)) { SET64(2, RD(17) << 48); goto L_001A6E80; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -9120);
wr32(c, (RW(18) + 8), RW(2));
SET64(2, RD(17) << 48);
L_001A6E80:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(18) + RD(0)); goto L_001A6E98; }
SET64(31, 0x1a6e94); SET64(4, RD(18) + RD(0)); F_001004B0(c);
L_001A6E94:;
SET64(2, RD(18) + RD(0));
L_001A6E98:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001A6EB0(Ctx *c) { /* func_001A6EB0 */
ENTER(0x1a6eb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
if (RD(16) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_001A6EEC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -9120);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 8), RW(3)); if (t) goto L_001A6EE8; }
SET64(31, 0x1a6ee8);  F_001004B0(c);
L_001A6EE8:;
SET64(2, RD(16) + RD(0));
L_001A6EEC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001A6F00(Ctx *c) { /* func_001A6F00 */
ENTER(0x1a6f00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 236)));
SET64(16, RD(6) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1a6f28); SET32(4, RW(17) + 220); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 236)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x1a6f38); SET32(4, RW(17) + 220); rt_call(c, t); }
SET64(31, 0x1a6f40); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(17) + 240), RW(2));
SET32(4, RW(17) + 220);
SET64(25, (s32)rd32(c, (RW(17) + 236)));
SET64(5, RD(2) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1a6f60); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 1872), RW(0));
wr16(c, (RW(17) + 0), (u16)RW(0));
wr8(c, (RW(17) + 1072), (u8)RW(16));
SET64(3, rd8(c, (RW(17) + 1072)));
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_001A6F94; }
SET64(31, 0x1a6f80); SET32(4, RW(0) + 1); F_00138B20(c);
SET64(31, 0x1a6f88); SET32(4, RW(0) + 255); F_002E1CD0(c);
SET64(31, 0x1a6f90); SET64(4, (s32)rd32(c, (RW(17) + 140))); F_002E1C90(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_001A6F94:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A6FB0(Ctx *c) { /* func_001A6FB0 */
ENTER(0x1a6fb0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1a6fc8); SET64(16, RD(4) + RD(0)); F_001CB0F0(c);
SET64(5, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x3e4c0000);
wr32(c, (RW(16) + 1640), RW(5));
SET64(4, RD(2) | 0xcccd);
wr32(c, (RW(16) + 1644), RW(5));
SET64(2, (s64)(s32)0x437f0000);
wr32(c, (RW(16) + 1648), RW(5));
c->f[2].u = RW(2);
wr32(c, (RW(16) + 1652), RW(5));
SET64(2, (s64)(s32)0x4f000000);
wr32(c, (RW(16) + 1624), RW(4));
SET32(3, RW(0) + 128);
wr32(c, (RW(16) + 1628), RW(4));
c->f[0].u = RW(2);
wr32(c, (RW(16) + 1632), RW(4));
wr32(c, (RW(16) + 1636), RW(5));
wr32(c, (RW(16) + 1656), RW(5));
wr32(c, (RW(16) + 1660), RW(5));
wr32(c, (RW(16) + 1664), RW(5));
wr32(c, (RW(16) + 1668), RW(5));
wr8(c, (RW(16) + 248), (u8)RW(0));
wr8(c, (RW(16) + 249), (u8)RW(0));
wr8(c, (RW(16) + 250), (u8)RW(0));
wr8(c, (RW(16) + 251), (u8)RW(3));
c->f[1].u = rd32(c, (RW(16) + 1624));
c->f[1].f = fpu(F(2) * F(1));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_001A704C; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001A7064;
L_001A704C:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001A7064:;
wr8(c, (RW(16) + 244), (u8)RW(3));
SET64(2, (s64)(s32)0x437f0000);
c->f[1].u = rd32(c, (RW(16) + 1628));
c->f[2].u = RW(2);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].f = fpu(F(2) * F(1));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_001A70A0; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001A70B8;
L_001A70A0:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001A70B8:;
wr8(c, (RW(16) + 245), (u8)RW(3));
SET64(2, (s64)(s32)0x437f0000);
c->f[1].u = rd32(c, (RW(16) + 1632));
c->f[2].u = RW(2);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].f = fpu(F(2) * F(1));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_001A70F4; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001A710C;
L_001A70F4:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001A710C:;
wr8(c, (RW(16) + 246), (u8)RW(3));
SET64(2, (s64)(s32)0x43000000);
c->f[1].u = rd32(c, (RW(16) + 1636));
c->f[2].u = RW(2);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].f = fpu(F(2) * F(1));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_001A7148; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001A7160;
L_001A7148:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001A7160:;
wr8(c, (RW(16) + 247), (u8)RW(3));
SET64(31, 0x1a716c); SET32(4, RW(0) + 1008); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001A7180; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x1a7180); SET32(5, RW(0) + 1); F_00174660(c);
L_001A7180:;
SET64(31, 0x1a7188); wr32(c, (RW(16) + 252), RW(17)); F_00139590(c);
SET64(31, 0x1a7190);  F_00139590(c);
SET64(2, (s32)rd32(c, (RW(2) + 20)));
SET64(4, RD(0) + RD(0));
SET64(3, RD(16) + RD(0));
wr32(c, (RW(16) + 624), RW(2));
L_001A71A0:;
wr32(c, (RW(3) + 1672), RW(0));
SET32(4, RW(4) + 8);
wr32(c, (RW(3) + 1676), RW(0));
SET64(2, RSD(4) < (s64)48);
wr32(c, (RW(3) + 1680), RW(0));
wr32(c, (RW(3) + 1684), RW(0));
wr32(c, (RW(3) + 1688), RW(0));
wr32(c, (RW(3) + 1692), RW(0));
wr32(c, (RW(3) + 1696), RW(0));
wr32(c, (RW(3) + 1700), RW(0));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 32); if (t) { POLL(); goto L_001A71A0; } }
SET64(31, 0x1a71d8);  F_00322000(c);
SET64(31, 0x1a71e0); SET64(4, RD(16) + RD(0)); F_001A0DE0(c);
SET64(31, 0x1a71e8); SET64(4, RD(16) + RD(0)); F_001A1D80(c);
wr8(c, (RW(16) + 1072), (u8)RW(0));
SET32(4, RW(0) + 1);
wr8(c, (RW(16) + 1074), (u8)RW(0));
SET32(3, RW(0) + 3);
wr8(c, (RW(16) + 1080), (u8)RW(0));
wr8(c, (RW(16) + 1090), (u8)RW(0));
wr32(c, (RW(16) + 628), RW(4));
wr32(c, (RW(16) + 632), RW(4));
wr32(c, (RW(16) + 1872), RW(3));
wr16(c, (RW(16) + 0), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A7230(Ctx *c) { /* func_001A7230 */
ENTER(0x1a7230);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, RD(5) + RD(0));
SET64(31, 0x1a724c); SET32(5, RW(0) + 12592); F_00157370(c);
SET64(25, (s32)rd32(c, (RW(16) + 236)));
SET64(5, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1a7260); SET32(4, RW(16) + 220); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 236)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x1a7270); SET32(4, RW(16) + 220); rt_call(c, t); }
SET64(31, 0x1a7278); SET64(4, RD(2) + RD(0)); F_00100530(c);
wr32(c, (RW(16) + 276), RW(2));
SET64(5, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 236)));
SET32(4, RW(16) + 220);
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1a7298); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001A72B0(Ctx *c) { /* func_001A72B0 */
ENTER(0x1a72b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 272)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001A7350; }
SET64(3, rd8(c, (RW(16) + 280)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001A7354; }
c->f[3].u = rd32(c, (RW(16) + 268));
c->f[2].u = rd32(c, (RW(16) + 264));
c->f[1].u = rd32(c, (RW(16) + 260));
c->f[0].u = rd32(c, (RW(16) + 256));
wr32(c, (RW(29) + 32), c->f[0].u);
wr32(c, (RW(29) + 36), c->f[1].u);
wr32(c, (RW(29) + 40), c->f[2].u);
wr32(c, (RW(29) + 44), c->f[3].u);
SET64(4, (s32)rd32(c, (RW(16) + 252)));
SET64(6, (s32)rd32(c, (RW(16) + 276)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1a730c); SET32(5, RW(29) + 32); rt_call(c, t); }
SET64(2, (s64)(s32)0x490000);
SET64(3, (s32)rd32(c, (RW(16) + 252)));
c->f[1].u = rd32(c, (RW(2) + 20536));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(3) + 832), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(3) + 812)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x1a733c); SET32(4, RW(3) + 812); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 252)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 388)));
{ u32 t = RW(25); SET64(31, 0x1a7350);  rt_call(c, t); }
L_001A7350:;
SET64(31, rd64(c, (RW(29) + 16)));
L_001A7354:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A7360(Ctx *c) { /* func_001A7360 */
ENTER(0x1a7360);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
{ int t = RD(20) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_001A760C; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -11328);
SET32(2, RW(2) + -11320);
wr32(c, (RW(20) + 56), RW(3));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(20) + 20), RW(2));
SET32(3, RW(3) + -11308);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11248);
wr32(c, (RW(20) + 36), RW(3));
SET64(31, 0x1a73bc); wr32(c, (RW(20) + 72), RW(2)); F_001A4270(c);
SET64(17, (s32)rd32(c, (RW(20) + 124)));
{ int t = RD(17) == RD(0);  if (t) goto L_001A7448; }
L_001A73C8:;
SET64(4, (s32)rd32(c, (RW(17) + 16)));
{ int t = RD(4) == RD(0); SET64(16, (s32)rd32(c, (RW(17) + 0))); if (t) goto L_001A73E8; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a73e4); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001A73E8:;
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 0), RW(0));
SET64(17, (s32)rd32(c, (RW(20) + 124)));
{ int t = RD(17) == RD(0);  if (t) goto L_001A7438; }
SET64(4, (s32)rd32(c, (RW(17) + 16)));
{ int t = RD(4) == RD(0);  if (t) goto L_001A7418; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a7418); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001A7418:;
wr32(c, (RW(17) + 16), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x1a7428); SET32(5, RW(0) + 1); F_001A6C50(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1a7434); wr32(c, (RW(17) + 0), RW(0)); F_001004B0(c);
L_001A7438:;
wr32(c, (RW(20) + 124), RW(0));
wr32(c, (RW(20) + 124), RW(16));
{ int t = RD(16) != RD(0); SET64(17, RD(16) + RD(0)); if (t) { POLL(); goto L_001A73C8; } }
L_001A7448:;
SET64(17, (s32)rd32(c, (RW(20) + 128)));
{ int t = RD(17) == RD(0);  if (t) goto L_001A74D0; }
L_001A7454:;
SET64(4, (s32)rd32(c, (RW(17) + 16)));
{ int t = RD(4) == RD(0); SET64(16, (s32)rd32(c, (RW(17) + 0))); if (t) goto L_001A7470; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a7470); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001A7470:;
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 0), RW(0));
SET64(17, (s32)rd32(c, (RW(20) + 128)));
{ int t = RD(17) == RD(0);  if (t) goto L_001A74C0; }
SET64(4, (s32)rd32(c, (RW(17) + 16)));
{ int t = RD(4) == RD(0);  if (t) goto L_001A74A0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a74a0); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001A74A0:;
wr32(c, (RW(17) + 16), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x1a74b0); SET32(5, RW(0) + 1); F_001A6C50(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1a74bc); wr32(c, (RW(17) + 0), RW(0)); F_001004B0(c);
L_001A74C0:;
wr32(c, (RW(20) + 128), RW(0));
wr32(c, (RW(20) + 128), RW(16));
{ int t = RD(16) != RD(0); SET64(17, RD(16) + RD(0)); if (t) { POLL(); goto L_001A7454; } }
L_001A74D0:;
SET64(18, RD(0) + RD(0));
SET64(16, RD(20) + RD(0));
L_001A74D8:;
SET64(17, (s32)rd32(c, (RW(16) + 1672)));
{ int t = RD(17) == RD(0);  if (t) goto L_001A7520; }
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET32(2, RW(0) + -1);
{ int t = RD(4) == RD(2);  if (t) goto L_001A7500; }
SET64(31, 0x1a74fc);  F_003219B0(c);
L_001A7500:;
SET64(4, (s32)rd32(c, (RW(17) + 16)));
SET32(2, RW(0) + -1);
{ int t = RD(4) == RD(2);  if (t) goto L_001A7518; }
SET64(31, 0x1a7518);  F_003219B0(c);
L_001A7518:;
SET64(31, 0x1a7520); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001A7520:;
SET32(18, RW(18) + 1);
wr32(c, (RW(16) + 1672), RW(0));
SET64(2, RSD(18) < (s64)48);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001A74D8; } }
SET64(16, RD(0) + RD(0));
SET64(17, RD(20) + RD(0));
L_001A753C:;
SET64(18, (s32)rd32(c, (RW(17) + 1096)));
{ int t = RD(18) == RD(0);  if (t) goto L_001A7558; }
SET64(31, 0x1a7550); SET64(4, RD(18) + RD(0)); F_001A9A10(c);
SET64(31, 0x1a7558); SET64(4, RD(18) + RD(0)); F_001004B0(c);
L_001A7558:;
SET32(16, RW(16) + 1);
wr32(c, (RW(17) + 1096), RW(0));
SET64(2, RSD(16) < (s64)66);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001A753C; } }
SET64(16, (s32)rd32(c, (RW(20) + 840)));
if (RD(16) == RD(0)) { wr32(c, (RW(20) + 840), RW(0)); goto L_001A759C; }
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001A7590; }
SET64(31, 0x1a758c); SET32(4, RW(2) + -16); F_00100430(c);
SET64(4, RD(16) + RD(0));
L_001A7590:;
SET64(31, 0x1a7598);  F_001004B0(c);
wr32(c, (RW(20) + 840), RW(0));
L_001A759C:;
SET64(17, RD(0) + RD(0));
SET64(16, RD(20) + RD(0));
L_001A75A4:;
SET64(4, (s32)rd32(c, (RW(16) + 324)));
{ int t = RD(4) == RD(0);  if (t) goto L_001A75C0; }
SET64(25, (s32)rd32(c, (RW(4) + 72)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a75c0); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001A75C0:;
SET32(17, RW(17) + 1);
wr32(c, (RW(16) + 324), RW(0));
SET64(2, RSD(17) < (s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001A75A4; } }
SET64(31, 0x1a75dc);  F_00321FC0(c);
SET32(4, RW(20) + 220);
SET64(31, 0x1a75e8); SET32(5, RW(0) + -1); F_001575C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x1a75f4); SET64(5, RD(0) + RD(0)); F_001CB1F0(c);
SET64(2, RD(19) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(20) + RD(0)); goto L_001A7610; }
SET64(31, 0x1a760c); SET64(4, RD(20) + RD(0)); F_001004B0(c);
L_001A760C:;
SET64(2, RD(20) + RD(0));
L_001A7610:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001A7630(Ctx *c) { /* func_001A7630 */
ENTER(0x1a7630);
SET32(29, RW(29) + -416);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr8(c, (RW(4) + 848), (u8)RW(0));
SET64(31, 0x1a765c); SET32(4, RW(0) + 1424); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001A767C; }
SET32(6, RW(0) + 100);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 8192);
SET64(7, RD(6) + RD(0));
SET64(31, 0x1a767c); SET64(8, RD(6) + RD(0)); F_00161C20(c);
L_001A767C:;
wr32(c, (RW(17) + 852), RW(18));
SET32(2, RW(0) + 1);
wr8(c, (RW(18) + 228), (u8)RW(2));
SET64(31, 0x1a7690); SET32(4, RW(0) + 352); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001A76A0; }
SET64(31, 0x1a76a0); SET64(4, RD(18) + RD(0)); F_0016EE00(c);
L_001A76A0:;
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x1a76b0); wr32(c, (RW(17) + 160), RW(18)); F_0016EBC0(c);
SET64(2, (s32)rd32(c, (RW(17) + 160)));
SET32(4, RW(0) + 1552);
SET64(2, (s32)rd32(c, (RW(2) + 36)));
SET64(31, 0x1a76c4); wr32(c, (RW(17) + 140), RW(2)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001A7774; }
SET32(6, RW(0) + 100);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 12288);
SET64(7, RD(6) + RD(0));
SET64(31, 0x1a76e4); SET64(8, RD(6) + RD(0)); F_00161C20(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -20784);
SET32(3, RW(3) + -20768);
wr32(c, (RW(18) + 176), RW(2));
SET32(4, RW(18) + 1440);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 196), RW(3));
SET32(2, RW(2) + -20728);
SET64(31, 0x1a7710); wr32(c, (RW(18) + 1072), RW(2)); F_00149480(c);
SET64(31, 0x1a7718); SET32(4, RW(18) + 1456); F_00149480(c);
SET64(31, 0x1a7720); SET32(4, RW(18) + 1472); F_00149480(c);
SET64(31, 0x1a7728); SET32(4, RW(18) + 1488); F_00149480(c);
SET64(31, 0x1a7730); SET32(4, RW(18) + 1512); F_00178910(c);
wr32(c, (RW(18) + 1424), RW(0));
SET32(3, RW(0) + 12288);
wr8(c, (RW(18) + 1428), (u8)RW(0));
SET32(2, RW(0) + 100);
wr32(c, (RW(18) + 1524), RW(3));
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 1528), RW(2));
SET32(5, RW(0) + 1);
wr32(c, (RW(18) + 1532), RW(2));
SET64(31, 0x1a775c); wr32(c, (RW(18) + 1536), RW(2)); F_001624B0(c);
wr32(c, (RW(18) + 1504), RW(0));
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 1540), RW(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x1a7774); wr32(c, (RW(18) + 1432), RW(0)); F_00162490(c);
L_001A7774:;
SET32(4, RW(0) + 352);
SET64(31, 0x1a7780); wr32(c, (RW(17) + 856), RW(18)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001A7790; }
SET64(31, 0x1a7790); SET64(4, RD(19) + RD(0)); F_001A8000(c);
L_001A7790:;
SET64(6, (s64)(s32)0x490000);
SET64(8, (s64)(s32)0x490000);
SET64(4, RD(19) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(6, RW(6) + 23056);
SET32(7, RW(0) + 245);
SET32(8, RW(8) + 22688);
SET64(31, 0x1a77b4); wr32(c, (RW(18) + 1424), RW(19)); F_001A7FF0(c);
SET64(31, 0x1a77bc); SET64(4, (s32)rd32(c, (RW(18) + 1424))); F_001A7FD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(18) + 1428), (u8)RW(0));
c->f[12].u = RW(2);
SET32(4, RW(29) + 288);
SET64(2, (s32)rd32(c, (RW(17) + 856)));
c->f[13].u = c->f[12].u;
c->f[14].u = c->f[12].u;
SET64(19, (s32)rd32(c, (RW(2) + 1424)));
SET64(31, 0x1a77e4); c->f[15].u = c->f[12].u; F_0013E630(c);
SET64(18, RD(2) + RD(0));
SET64(2, (s64)(s32)0x3f420000);
SET64(3, RD(2) | 0x8f5c);
SET64(2, (s64)(s32)0xbf420000);
SET64(2, RD(2) | 0x8f5c);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(3);
c->f[15].u = RW(2);
c->f[12].u = RW(0);
SET64(31, 0x1a7814); SET32(4, RW(29) + 272); F_0013E630(c);
SET64(5, RD(18) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(31, 0x1a7824); SET32(4, RW(29) + 352); F_001A7F70(c);
SET64(4, RD(19) + RD(0));
SET32(5, RW(29) + 352);
SET64(31, 0x1a7834); SET64(6, RD(0) + RD(0)); F_001A7F20(c);
SET64(4, RD(19) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x1a7844); SET64(6, RD(0) + RD(0)); F_001A7EE0(c);
SET64(3, (s64)(s32)0x3ecc0000);
SET64(2, (s64)(s32)0x3f800000);
SET64(3, RD(3) | 0xcccd);
SET32(4, RW(29) + 256);
c->f[12].u = RW(3);
c->f[15].u = RW(2);
c->f[13].u = c->f[12].u;
SET64(31, 0x1a7868); c->f[14].u = c->f[12].u; F_0013E630(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1a7874); SET32(4, RW(29) + 304); F_001A7E80(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x1a7880); SET32(5, RW(29) + 304); F_001A7E50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x1a788c); SET32(5, RW(0) + 1); F_001A7E20(c);
SET32(4, RW(29) + 304);
SET64(31, 0x1a7898); SET32(5, RW(0) + -1); F_0017EAB0(c);
SET32(4, RW(29) + 352);
SET64(31, 0x1a78a4); SET32(5, RW(0) + -1); F_00177FB0(c);
SET64(2, (s32)rd32(c, (RW(17) + 856)));
SET32(3, RW(0) + 1);
SET32(4, RW(0) + 1552);
SET64(31, 0x1a78b8); wr8(c, (RW(2) + 228), (u8)RW(3)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001A796C; }
SET32(6, RW(0) + 100);
SET64(4, RD(19) + RD(0));
SET64(5, RD(0) | 0xe000);
SET64(7, RD(6) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(31, 0x1a78dc); SET64(18, RD(19) + RD(0)); F_00161C20(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -20784);
SET32(3, RW(3) + -20768);
wr32(c, (RW(18) + 176), RW(2));
SET32(4, RW(18) + 1440);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 196), RW(3));
SET32(2, RW(2) + -20728);
SET64(31, 0x1a7908); wr32(c, (RW(18) + 1072), RW(2)); F_00149480(c);
SET64(31, 0x1a7910); SET32(4, RW(18) + 1456); F_00149480(c);
SET64(31, 0x1a7918); SET32(4, RW(18) + 1472); F_00149480(c);
SET64(31, 0x1a7920); SET32(4, RW(18) + 1488); F_00149480(c);
SET64(31, 0x1a7928); SET32(4, RW(18) + 1512); F_00178910(c);
wr32(c, (RW(18) + 1424), RW(0));
SET64(3, RD(0) | 0xe000);
wr8(c, (RW(18) + 1428), (u8)RW(0));
SET32(2, RW(0) + 100);
wr32(c, (RW(18) + 1524), RW(3));
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 1528), RW(2));
SET32(5, RW(0) + 1);
wr32(c, (RW(18) + 1532), RW(2));
SET64(31, 0x1a7954); wr32(c, (RW(18) + 1536), RW(2)); F_001624B0(c);
wr32(c, (RW(18) + 1504), RW(0));
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 1540), RW(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x1a796c); wr32(c, (RW(18) + 1432), RW(0)); F_00162490(c);
L_001A796C:;
wr32(c, (RW(17) + 860), RW(19));
SET32(2, RW(0) + 1);
wr32(c, (RW(19) + 1544), RW(2));
SET64(31, 0x1a7980); SET32(4, RW(0) + 4); F_00100530(c);
wr32(c, (RW(19) + 1540), RW(2));
SET64(31, 0x1a798c); SET32(4, RW(0) + 496); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001A79E4; }
SET32(5, RW(0) + 100);
SET64(4, RD(18) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x1a79a8); SET64(7, RD(5) + RD(0)); F_002A36E0(c);
SET32(20, RW(18) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(20) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x1a79c0); wr32(c, (RW(18) + 240), RW(4)); F_002AB2A0(c);
SET64(31, 0x1a79c8); SET32(4, RW(20) + 32); F_002A59A0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(20) + 240), RW(20));
SET32(2, RW(2) + -30800);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 144), RW(2));
SET64(31, 0x1a79e4); SET32(5, RW(18) + 272); F_002A35D0(c);
L_001A79E4:;
SET64(2, (s32)rd32(c, (RW(19) + 1540)));
wr32(c, (RW(2) + 0), RW(18));
SET64(4, (s32)rd32(c, (RW(19) + 560)));
SET64(2, (s32)rd32(c, (RW(19) + 1540)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1a7a00); SET64(6, (s32)rd32(c, (RW(4) + 16))); F_002AB090(c);
SET64(18, (s32)rd32(c, (RW(17) + 860)));
SET64(31, 0x1a7a0c); SET32(4, RW(0) + 352); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001A7A1C; }
SET64(31, 0x1a7a1c); SET64(4, RD(19) + RD(0)); F_001A8000(c);
L_001A7A1C:;
SET64(6, (s64)(s32)0x490000);
SET64(8, (s64)(s32)0x490000);
SET64(4, RD(19) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(6, RW(6) + 23056);
SET32(7, RW(0) + 245);
SET32(8, RW(8) + 22688);
SET64(31, 0x1a7a40); wr32(c, (RW(18) + 1424), RW(19)); F_001A7FF0(c);
SET64(31, 0x1a7a48); SET64(4, (s32)rd32(c, (RW(18) + 1424))); F_001A7FD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(18) + 1428), (u8)RW(0));
c->f[12].u = RW(2);
SET32(4, RW(29) + 128);
SET64(2, (s32)rd32(c, (RW(17) + 860)));
c->f[13].u = c->f[12].u;
c->f[14].u = c->f[12].u;
SET64(19, (s32)rd32(c, (RW(2) + 1424)));
SET64(31, 0x1a7a70); c->f[15].u = c->f[12].u; F_0013E630(c);
SET64(18, RD(2) + RD(0));
SET64(2, (s64)(s32)0x3f420000);
SET64(3, RD(2) | 0x8f5c);
SET64(2, (s64)(s32)0xbf420000);
SET64(2, RD(2) | 0x8f5c);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(3);
c->f[15].u = RW(2);
c->f[12].u = RW(0);
SET64(31, 0x1a7aa0); SET32(4, RW(29) + 112); F_0013E630(c);
SET64(5, RD(18) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(31, 0x1a7ab0); SET32(4, RW(29) + 192); F_001A7F70(c);
SET64(4, RD(19) + RD(0));
SET32(5, RW(29) + 192);
SET64(31, 0x1a7ac0); SET64(6, RD(0) + RD(0)); F_001A7F20(c);
SET64(4, RD(19) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x1a7ad0); SET64(6, RD(0) + RD(0)); F_001A7EE0(c);
SET64(3, (s64)(s32)0x3ecc0000);
SET64(2, (s64)(s32)0x3f800000);
SET64(3, RD(3) | 0xcccd);
SET32(4, RW(29) + 96);
c->f[12].u = RW(3);
c->f[15].u = RW(2);
c->f[13].u = c->f[12].u;
SET64(31, 0x1a7af4); c->f[14].u = c->f[12].u; F_0013E630(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1a7b00); SET32(4, RW(29) + 144); F_001A7E80(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x1a7b0c); SET32(5, RW(29) + 144); F_001A7E50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x1a7b18); SET32(5, RW(0) + 1); F_001A7E20(c);
SET32(4, RW(29) + 144);
SET64(31, 0x1a7b24); SET32(5, RW(0) + -1); F_0017EAB0(c);
SET32(4, RW(29) + 192);
SET64(31, 0x1a7b30); SET32(5, RW(0) + -1); F_00177FB0(c);
SET64(2, (s32)rd32(c, (RW(17) + 860)));
SET32(4, RW(0) + 1);
SET32(3, RW(0) + -1);
SET64(7, RD(0) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(5, RD(17) + RD(0));
wr8(c, (RW(2) + 228), (u8)RW(4));
wr32(c, (RW(17) + 864), RW(0));
wr8(c, (RW(17) + 281), (u8)RW(4));
wr32(c, (RW(17) + 1868), RW(3));
wr32(c, (RW(17) + 148), RW(3));
wr8(c, (RW(17) + 156), (u8)RW(0));
L_001A7B60:;
wr32(c, (RW(6) + 324), RW(0));
SET32(7, RW(7) + 1);
wr32(c, (RW(5) + 336), RW(3));
SET64(2, RSD(7) < (s64)3);
wr32(c, (RW(5) + 348), RW(3));
SET32(6, RW(6) + 4);
wr32(c, (RW(5) + 360), RW(3));
wr32(c, (RW(5) + 372), RW(3));
wr32(c, (RW(5) + 384), RW(3));
wr32(c, (RW(5) + 396), RW(3));
wr32(c, (RW(5) + 408), RW(3));
wr32(c, (RW(5) + 420), RW(3));
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 96); if (t) { POLL(); goto L_001A7B60; } }
wr32(c, (RW(17) + 624), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr16(c, (RW(17) + 636), (u16)RW(0));
SET32(4, RW(0) + 32);
wr32(c, (RW(17) + 672), RW(2));
wr16(c, (RW(17) + 638), (u16)RW(0));
wr32(c, (RW(17) + 676), RW(2));
wr32(c, (RW(17) + 640), RW(3));
wr32(c, (RW(17) + 648), RW(3));
wr32(c, (RW(17) + 680), RW(3));
wr32(c, (RW(17) + 656), RW(3));
wr32(c, (RW(17) + 644), RW(3));
wr32(c, (RW(17) + 652), RW(3));
wr32(c, (RW(17) + 684), RW(3));
SET64(31, 0x1a7bd8); wr32(c, (RW(17) + 660), RW(3)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001A7C74; }
wr16(c, (RW(18) + 24), (u16)RW(0));
SET64(19, RD(0) + RD(0));
SET32(4, RW(0) + 1336);
SET64(31, 0x1a7bf4); wr32(c, (RW(18) + 28), RW(0)); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001A7C20; }
SET64(5, (s64)(s32)0x1a0000);
SET32(19, RW(0) + 1);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 32272);
SET64(6, RD(0) + RD(0));
SET32(7, RW(0) + 20);
SET64(31, 0x1a7c1c); SET32(8, RW(0) + 66); F_00102580(c);
SET64(16, RD(2) + RD(0));
L_001A7C20:;
wr32(c, (RW(18) + 8), RW(16));
SET32(3, RW(0) + 66);
wr32(c, (RW(18) + 0), RW(3));
wr32(c, (RW(18) + 4), RW(0));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(5, (s32)rd32(c, (RW(18) + 8)));
{ int t = RD(3) == RD(0); SET32(4, RW(3) + -1); if (t) goto L_001A7C60; }
L_001A7C40:;
wr8(c, (RW(5) + 0), (u8)RW(0));
SET64(3, RD(4) + RD(0));
wr32(c, (RW(5) + 4), RW(0));
SET32(4, RW(4) + -1);
wr32(c, (RW(5) + 8), RW(0));
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 20); if (t) { POLL(); goto L_001A7C40; } }
L_001A7C60:;
SET32(3, RW(0) + 1);
wr8(c, (RW(18) + 12), (u8)RW(3));
SET32(3, RW(18) + 12);
wr32(c, (RW(18) + 20), RW(3));
wr32(c, (RW(18) + 16), RW(3));
L_001A7C74:;
wr32(c, (RW(17) + 840), RW(18));
SET64(5, RD(0) + RD(0));
wr32(c, (RW(17) + 128), RW(0));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 124), RW(0));
wr32(c, (RW(17) + 136), RW(0));
wr32(c, (RW(17) + 132), RW(0));
L_001A7C90:;
wr32(c, (RW(4) + 1096), RW(0));
SET32(5, RW(5) + 8);
wr32(c, (RW(4) + 1360), RW(0));
SET64(3, RSD(5) < (s64)58);
wr32(c, (RW(4) + 1100), RW(0));
wr32(c, (RW(4) + 1364), RW(0));
wr32(c, (RW(4) + 1104), RW(0));
wr32(c, (RW(4) + 1368), RW(0));
wr32(c, (RW(4) + 1108), RW(0));
wr32(c, (RW(4) + 1372), RW(0));
wr32(c, (RW(4) + 1112), RW(0));
wr32(c, (RW(4) + 1376), RW(0));
wr32(c, (RW(4) + 1116), RW(0));
wr32(c, (RW(4) + 1380), RW(0));
wr32(c, (RW(4) + 1120), RW(0));
wr32(c, (RW(4) + 1384), RW(0));
wr32(c, (RW(4) + 1124), RW(0));
wr32(c, (RW(4) + 1388), RW(0));
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_001A7C90; } }
SET32(3, RW(5) << 2);
SET64(4, RD(17) + RD(0));
SET32(3, RW(3) + RW(17));
SET64(5, RD(0) + RD(0));
wr32(c, (RW(3) + 1096), RW(0));
wr32(c, (RW(3) + 1360), RW(0));
wr32(c, (RW(3) + 1100), RW(0));
wr32(c, (RW(3) + 1364), RW(0));
L_001A7D00:;
wr32(c, (RW(4) + 1672), RW(0));
SET32(5, RW(5) + 8);
wr32(c, (RW(4) + 1676), RW(0));
SET64(3, RSD(5) < (s64)48);
wr32(c, (RW(4) + 1680), RW(0));
wr32(c, (RW(4) + 1684), RW(0));
wr32(c, (RW(4) + 1688), RW(0));
wr32(c, (RW(4) + 1692), RW(0));
wr32(c, (RW(4) + 1696), RW(0));
wr32(c, (RW(4) + 1700), RW(0));
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_001A7D00; } }
wr8(c, (RW(17) + 272), (u8)RW(0));
SET32(4, RW(0) + 4);
wr8(c, (RW(17) + 280), (u8)RW(0));
SET32(3, RW(0) + -1);
wr8(c, (RW(17) + 1088), (u8)RW(0));
wr8(c, (RW(17) + 1089), (u8)RW(0));
wr8(c, (RW(17) + 1090), (u8)RW(0));
wr8(c, (RW(17) + 1092), (u8)RW(0));
wr32(c, (RW(17) + 300), RW(0));
wr32(c, (RW(17) + 284), RW(0));
wr32(c, (RW(17) + 288), RW(0));
wr8(c, (RW(17) + 304), (u8)RW(0));
wr8(c, (RW(17) + 305), (u8)RW(0));
wr32(c, (RW(17) + 308), RW(0));
wr32(c, (RW(17) + 276), RW(0));
wr32(c, (RW(17) + 1872), RW(4));
wr16(c, (RW(17) + 0), (u16)RW(0));
wr32(c, (RW(17) + 844), RW(3));
wr32(c, (RW(17) + 872), RW(0));
wr32(c, (RW(17) + 876), RW(0));
wr32(c, (RW(17) + 880), RW(0));
wr32(c, (RW(17) + 884), RW(0));
wr32(c, (RW(17) + 888), RW(0));
wr32(c, (RW(17) + 892), RW(0));
wr32(c, (RW(17) + 896), RW(0));
wr32(c, (RW(17) + 900), RW(0));
wr32(c, (RW(17) + 944), RW(0));
wr32(c, (RW(17) + 1044), RW(0));
wr32(c, (RW(17) + 868), RW(0));
wr32(c, (RW(17) + 904), RW(0));
wr32(c, (RW(17) + 908), RW(0));
wr32(c, (RW(17) + 912), RW(0));
wr32(c, (RW(17) + 916), RW(0));
wr32(c, (RW(17) + 920), RW(0));
wr32(c, (RW(17) + 924), RW(0));
wr32(c, (RW(17) + 928), RW(0));
wr32(c, (RW(17) + 932), RW(0));
wr32(c, (RW(17) + 1068), RW(0));
wr32(c, (RW(17) + 1028), RW(0));
wr32(c, (RW(17) + 948), RW(3));
wr32(c, (RW(17) + 956), RW(3));
wr32(c, (RW(17) + 964), RW(3));
wr32(c, (RW(17) + 972), RW(3));
wr32(c, (RW(17) + 1048), RW(0));
wr32(c, (RW(17) + 1052), RW(0));
wr32(c, (RW(17) + 1056), RW(0));
wr32(c, (RW(17) + 1032), RW(0));
wr32(c, (RW(17) + 1036), RW(3));
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 416); return;
}

void F_001A7E10(Ctx *c) { /* func_001A7E10 */
ENTER(0x1a7e10);
wr16(c, (RW(4) + 12), (u16)RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 16), RW(0)); return;
}

void F_001A7E20(Ctx *c) { /* func_001A7E20 */
ENTER(0x1a7e20);
if (RD(5) == RD(0)) { wr32(c, (RW(4) + 8), RW(0)); goto L_001A7E3C; }
SET32(5, RW(4) + 304);
SET32(3, RW(0) + 3);
wr32(c, (RW(4) + 8), RW(5));
wr32(c, (RW(4) + 20), RW(3)); goto L_001A7E40;
L_001A7E3C:;
wr32(c, (RW(4) + 20), RW(0));
L_001A7E40:;
 return;
}

void F_001A7E50(Ctx *c) { /* func_001A7E50 */
ENTER(0x1a7e50);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(25, (s32)rd32(c, (RW(2) + 336)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1a7e6c); SET32(4, RW(2) + 304); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001A7E80(Ctx *c) { /* func_001A7E80 */
ENTER(0x1a7e80);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[2].u = rd32(c, (RW(5) + 8));
SET64(16, RD(4) + RD(0));
c->f[1].u = rd32(c, (RW(5) + 4));
c->f[0].u = rd32(c, (RW(5) + 0));
wr32(c, (RW(29) + 32), c->f[0].u);
SET32(5, RW(29) + 32);
wr32(c, (RW(29) + 36), c->f[1].u);
wr32(c, (RW(29) + 44), RW(2));
SET64(31, 0x1a7eb8); wr32(c, (RW(29) + 40), c->f[2].u); F_002B3100(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -20816);
wr32(c, (RW(16) + 32), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A7EE0(Ctx *c) { /* func_001A7EE0 */
ENTER(0x1a7ee0);
if (RD(5) == RD(0)) { SET32(3, RW(6) << 2); goto L_001A7F0C; }
SET32(3, RW(6) << 6);
SET32(5, RW(6) << 2);
SET32(3, RW(4) + RW(3));
SET32(4, RW(4) + RW(5));
SET32(5, RW(3) + 32);
SET32(3, RW(0) + 1);
wr32(c, (RW(4) + 0), RW(5));
wr32(c, (RW(4) + 12), RW(3)); goto L_001A7F18;
L_001A7F0C:;
SET32(3, RW(4) + RW(3));
wr32(c, (RW(3) + 0), RW(0));
wr32(c, (RW(3) + 12), RW(0));
L_001A7F18:;
 return;
}

void F_001A7F20(Ctx *c) { /* func_001A7F20 */
ENTER(0x1a7f20);
SET32(29, RW(29) + -48);
SET32(2, RW(6) << 6);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET32(16, RW(4) + RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 64)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1a7f4c); SET32(4, RW(16) + 32); rt_call(c, t); }
rd128(c, (RW(17) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 80) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A7F70(Ctx *c) { /* func_001A7F70 */
ENTER(0x1a7f70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[2].u = rd32(c, (RW(5) + 8));
SET64(16, RD(4) + RD(0));
c->f[1].u = rd32(c, (RW(5) + 4));
c->f[0].u = rd32(c, (RW(5) + 0));
wr32(c, (RW(29) + 32), c->f[0].u);
SET32(5, RW(29) + 32);
wr32(c, (RW(29) + 36), c->f[1].u);
wr32(c, (RW(29) + 44), RW(0));
SET64(31, 0x1a7fa4); wr32(c, (RW(29) + 40), c->f[2].u); F_002B3040(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -20880);
wr32(c, (RW(16) + 32), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A7FD0(Ctx *c) { /* func_001A7FD0 */
ENTER(0x1a7fd0);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 20), RW(0)); return;
}

void F_001A7FF0(Ctx *c) { /* func_001A7FF0 */
ENTER(0x1a7ff0);
 return;
}

void F_001A8000(Ctx *c) { /* func_001A8000 */
ENTER(0x1a8000);
SET32(29, RW(29) + -112);
SET64(5, (s64)(s32)0x1a0000);
wr64(c, (RW(29) + 48), RD(31));
SET64(6, (s64)(s32)0x170000);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(5, RW(5) + 7984);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(6, RW(6) + 32688);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(7, RW(0) + 64);
SET64(16, RD(4) + RD(0));
SET32(8, RW(0) + 3);
SET64(31, 0x1a8038); SET32(4, RW(16) + 32); F_001023D0(c);
SET64(3, (s64)(s32)0x3f800000);
SET32(18, RW(16) + 224);
SET64(2, (s64)(s32)0x41200000);
wr32(c, (RW(29) + 92), RW(3));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 108), RW(3));
SET64(4, RD(18) + RD(0));
SET32(5, RW(29) + 96);
SET32(6, RW(29) + 80);
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 84), RW(0));
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 100), RW(0));
SET64(31, 0x1a8078); wr32(c, (RW(29) + 104), RW(0)); F_002B3230(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(17, RW(16) + 304);
SET32(2, RW(2) + -20848);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(18) + 32), RW(2));
SET32(5, RW(29) + 64);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 76), RW(2));
wr32(c, (RW(29) + 68), RW(0));
SET64(31, 0x1a80a8); wr32(c, (RW(29) + 72), RW(0)); F_002B3100(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -20816);
wr32(c, (RW(17) + 32), RW(3));
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 12), RW(0));
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 16), RW(0));
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 20), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001A80F0(Ctx *c) { /* func_001A80F0 */
ENTER(0x1a80f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1a8104); SET64(16, RD(4) + RD(0)); F_001CB380(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11328);
SET32(3, RW(3) + -11320);
wr32(c, (RW(16) + 56), RW(2));
SET32(4, RW(16) + 220);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + -11308);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 36), RW(2));
SET32(3, RW(3) + -11248);
wr32(c, (RW(16) + 72), RW(3));
SET32(2, RW(0) + 128);
SET64(3, (s16)rd16(c, (RW(28) + -32292)));
wr16(c, (RW(16) + 180), (u16)RW(3));
SET64(3, (s16)rd16(c, (RW(28) + -32288)));
wr16(c, (RW(16) + 182), (u16)RW(3));
c->f[0].u = rd32(c, (RW(28) + -32284));
wr32(c, (RW(16) + 184), c->f[0].u);
wr8(c, (RW(16) + 192), (u8)RW(2));
wr8(c, (RW(16) + 193), (u8)RW(2));
wr8(c, (RW(16) + 194), (u8)RW(2));
wr8(c, (RW(16) + 195), (u8)RW(2));
wr8(c, (RW(16) + 196), (u8)RW(2));
wr8(c, (RW(16) + 197), (u8)RW(2));
wr8(c, (RW(16) + 198), (u8)RW(2));
SET64(31, 0x1a8178); wr8(c, (RW(16) + 199), (u8)RW(2)); F_00157630(c);
wr32(c, (RW(16) + 240), RW(0));
SET32(2, RW(0) + 128);
wr8(c, (RW(16) + 244), (u8)RW(2));
SET64(4, RD(16) + RD(0));
wr8(c, (RW(16) + 245), (u8)RW(2));
wr8(c, (RW(16) + 246), (u8)RW(2));
wr8(c, (RW(16) + 247), (u8)RW(2));
wr8(c, (RW(16) + 248), (u8)RW(2));
wr8(c, (RW(16) + 249), (u8)RW(2));
wr8(c, (RW(16) + 250), (u8)RW(2));
wr8(c, (RW(16) + 251), (u8)RW(2));
wr32(c, (RW(16) + 256), RW(0));
wr32(c, (RW(16) + 260), RW(0));
wr32(c, (RW(16) + 264), RW(0));
wr32(c, (RW(16) + 268), RW(0));
SET64(31, 0x1a81bc); wr32(c, (RW(16) + 840), RW(0)); F_001A7630(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001A81D0(Ctx *c) { /* func_001A81D0 */
ENTER(0x1a81d0);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
c->f[0].u = RW(0);
{ int t = RD(5) == RD(0); SET64(6, (s32)rd32(c, (RW(3) + 20))); if (t) goto L_001A81E4; }
SET64(6, (s32)rd32(c, (RW(6) + 4)));
L_001A81E4:;
{ int t = RD(6) == RD(0);  if (t) goto L_001A8254; }
SET64(5, (s32)rd32(c, (RW(6) + 0)));
SET32(3, RW(0) + 194);
if (RD(5) == RD(3)) { c->f[0].u = rd32(c, (RW(6) + 12)); goto L_001A8214; }
SET32(3, RW(0) + 193);
if (RD(5) == RD(3)) { c->f[0].u = rd32(c, (RW(6) + 12)); goto L_001A8210; }
wr32(c, (RW(4) + 8), c->f[0].u); goto L_001A8218;
L_001A8210:;
c->f[0].f = (f32)(s32)c->f[0].u;
L_001A8214:;
wr32(c, (RW(4) + 8), c->f[0].u);
L_001A8218:;
SET64(6, (s32)rd32(c, (RW(6) + 4)));
c->f[0].u = RW(0);
{ int t = RD(6) == RD(0);  if (t) goto L_001A8254; }
SET64(5, (s32)rd32(c, (RW(6) + 0)));
SET32(3, RW(0) + 194);
if (RD(5) == RD(3)) { c->f[0].u = rd32(c, (RW(6) + 12)); goto L_001A8250; }
SET32(3, RW(0) + 193);
if (RD(5) == RD(3)) { c->f[0].u = rd32(c, (RW(6) + 12)); goto L_001A824C; }
wr32(c, (RW(4) + 12), c->f[0].u); goto L_001A8254;
L_001A824C:;
c->f[0].f = (f32)(s32)c->f[0].u;
L_001A8250:;
wr32(c, (RW(4) + 12), c->f[0].u);
L_001A8254:;
 return;
}

void F_001A8260(Ctx *c) { /* func_001A8260 */
ENTER(0x1a8260);
SET32(29, RW(29) + -64);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 396)));
{ int t = RD(4) != RD(2);  if (t) goto L_001A8290; }
SET32(2, RW(0) + 1); goto L_001A8424;
L_001A8290:;
SET64(31, 0x1a8298);  F_00321BE0(c);
SET64(16, RD(2) & 0xff);
if (RD(16) != RD(0)) { SET64(2, RD(0) < RD(16)); goto L_001A8420; }
SET64(31, 0x1a82ac); SET64(4, (s32)rd32(c, (RW(17) + 396))); F_00321A60(c);
wr32(c, (RW(17) + 20), RW(2));
SET64(31, 0x1a82b8); SET64(4, (s32)rd32(c, (RW(17) + 396))); F_00321930(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x1);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 4))); goto L_001A8358; }
SET64(5, (s32)rd32(c, (RW(17) + 20)));
SET64(2, rd16(c, (RW(5) + 30)));
if (RD(2) == RD(0)) { SET64(7, RD(0) + RD(0)); goto L_001A82F0; }
SET64(3, rd16(c, (RW(5) + 28)));
SET64(2, (s32)rd32(c, (RW(5) + 24)));
SET32(3, RW(3) + 8);
SET32(3, RW(5) + RW(3));
SET32(3, RW(3) + 8);
SET32(7, RW(2) + RW(3));
L_001A82F0:;
SET64(2, rd16(c, (RW(5) + 30)));
{ int t = RSD(2) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_001A8348; }
SET64(4, (s64)(s32)0xff000000);
L_001A8300:;
SET64(3, (s32)rd32(c, (RW(7) + 0)));
SET64(2, RD(3) & RD(4));
{ int t = RD(2) == RD(0);  if (t) goto L_001A8330; }
SET32(2, RW(2) >> 1);
SET64(3, RD(3) << 40);
SET32(2, RW(2) + 1);
SET64(3, RD(3) >> 40);
SET64(2, RD(2) & RD(4));
wr32(c, (RW(7) + 0), RW(3));
SET64(2, RD(3) | RD(2));
wr32(c, (RW(7) + 0), RW(2));
L_001A8330:;
SET64(2, rd16(c, (RW(5) + 30)));
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(2));
{ int t = RD(2) != RD(0); SET32(7, RW(7) + 4); if (t) { POLL(); goto L_001A8300; } }
L_001A8348:;
SET64(4, (s32)rd32(c, (RW(17) + 396)));
SET64(31, 0x1a8354); SET32(5, RW(0) + 1); F_00321970(c);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
L_001A8358:;
if (RD(2) != RD(0)) { SET32(4, RW(0) + 64); goto L_001A8398; }
SET64(31, 0x1a8368); SET32(4, RW(0) + 32); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001A8378; }
SET64(31, 0x1a8378); SET64(4, RD(18) + RD(0)); F_0014FE60(c);
L_001A8378:;
SET32(5, RW(0) + 512);
SET64(4, RD(18) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x1a8394); wr32(c, (RW(17) + 4), RW(18)); F_0014FCE0(c);
SET32(4, RW(0) + 64);
L_001A8398:;
SET64(31, 0x1a83a0);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001A83B0; }
SET64(31, 0x1a83b0); SET64(4, RD(18) + RD(0)); F_0014F940(c);
L_001A83B0:;
wr32(c, (RW(17) + 8), RW(18));
SET64(4, RD(18) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 20)));
SET32(7, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x1a83cc); SET64(8, RD(0) + RD(0)); F_0014F2D0(c);
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(2, rd16(c, (RW(2) + 52)));
wr16(c, (RW(17) + 374), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(2, rd16(c, (RW(2) + 54)));
wr16(c, (RW(17) + 376), (u16)RW(2));
SET64(2, rd16(c, (RW(17) + 370)));
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(17) + 372))); goto L_001A83FC; }
SET64(2, rd16(c, (RW(17) + 374)));
wr16(c, (RW(17) + 370), (u16)RW(2));
SET64(2, rd16(c, (RW(17) + 372)));
L_001A83FC:;
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 16))); goto L_001A8410; }
SET64(2, rd16(c, (RW(17) + 376)));
wr16(c, (RW(17) + 372), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 16)));
L_001A8410:;
SET32(2, RW(2) + 1);
wr32(c, (RW(17) + 16), RW(2));
wr8(c, (RW(17) + 392), (u8)RW(0));
SET64(2, RD(0) < RD(16));
L_001A8420:;
SET64(2, RD(2) ^ 0x1);
L_001A8424:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001A8440(Ctx *c) { /* func_001A8440 */
ENTER(0x1a8440);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001A845C; }
SET64(2, RD(0) + RD(0)); goto L_001A8484;
L_001A845C:;
SET64(4, RD(5) + RD(0));
SET64(31, 0x1a8468); SET32(5, RW(0) + 1); F_00321EA0(c);
SET32(3, RW(0) + -1);
{ int t = RD(2) == RD(3); wr32(c, (RW(16) + 396), RW(2)); if (t) goto L_001A8480; }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 392), (u8)RW(2)); goto L_001A8484;
L_001A8480:;
SET64(2, RD(0) + RD(0));
L_001A8484:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001A84A0(Ctx *c) { /* func_001A84A0 */
ENTER(0x1a84a0);
SET32(29, RW(29) + -48);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr8(c, (RW(4) + 24), (u8)RW(2));
wr32(c, (RW(4) + 20), RW(5));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001A84FC; }
SET64(31, 0x1a84d0); SET32(4, RW(0) + 32); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001A84E0; }
SET64(31, 0x1a84e0); SET64(4, RD(17) + RD(0)); F_0014FE60(c);
L_001A84E0:;
SET32(5, RW(0) + 512);
SET64(4, RD(17) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x1a84fc); wr32(c, (RW(16) + 4), RW(17)); F_0014FCE0(c);
L_001A84FC:;
SET64(31, 0x1a8504); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001A8514; }
SET64(31, 0x1a8514); SET64(4, RD(17) + RD(0)); F_0014F940(c);
L_001A8514:;
wr32(c, (RW(16) + 8), RW(17));
SET64(4, RD(17) + RD(0));
SET64(5, (s32)rd32(c, (RW(16) + 20)));
SET32(7, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x1a8530); SET64(8, RD(0) + RD(0)); F_0014F2D0(c);
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(3, rd16(c, (RW(3) + 52)));
wr16(c, (RW(16) + 374), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(3, rd16(c, (RW(3) + 54)));
wr16(c, (RW(16) + 376), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET32(3, RW(3) + 1);
wr32(c, (RW(16) + 16), RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A8570(Ctx *c) { /* func_001A8570 */
ENTER(0x1a8570);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(4) + 28)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(31, 0x1a85a0); SET64(16, RD(5) + RD(0)); F_001419B0(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_001A8F58; }
SET64(3, rd8(c, (RW(17) + 384)));
{ int t = RD(3) != RD(0);  if (t) goto L_001A8F54; }
SET64(2, rd8(c, (RW(17) + 380)));
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(17) + 379))); goto L_001A85E0; }
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001A8760; }
SET64(3, rd16(c, (RW(17) + 382)));
SET64(2, rd16(c, (RW(17) + 34)));
{ int t = RD(3) == RD(2);  if (t) goto L_001A875C; }
SET64(2, rd8(c, (RW(17) + 379)));
L_001A85E0:;
{ int t = RD(2) == RD(0);  if (t) goto L_001A875C; }
SET64(31, 0x1a85f0); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_001CB090(c);
c->f[1].u = rd32(c, (RW(17) + 168));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc;  if (t) goto L_001A875C; }
SET64(2, rd16(c, (RW(17) + 34)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 34), (u16)RW(2));
SET64(3, RD(2) & 0xffff);
SET64(2, rd16(c, (RW(17) + 36)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, rd8(c, (RW(17) + 379))); goto L_001A8628; }
wr16(c, (RW(17) + 34), (u16)RW(0));
SET64(2, rd8(c, (RW(17) + 379)));
L_001A8628:;
if (RD(2) == RD(0)) { SET64(8, rd16(c, (RW(17) + 370))); goto L_001A8654; }
SET64(2, rd16(c, (RW(17) + 34)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(17));
c->f[20].u = rd32(c, (RW(2) + 40));
SET64(31, 0x1a8648); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_001CB090(c);
c->f[0].f = fpu(F(20) + F(0));
wr32(c, (RW(17) + 168), c->f[0].u);
SET64(8, rd16(c, (RW(17) + 370)));
L_001A8654:;
SET64(2, rd16(c, (RW(17) + 374)));
SET64(5, rd16(c, (RW(17) + 34)));
SET64(3, rd16(c, (RW(17) + 32)));
div_s(c, 0, RSW(2), RSW(8));
SET64(4, rd16(c, (RW(17) + 372)));
SET32(3, RW(5) + RW(3));
SET64(6, RD(3) & 0xffff);
SET64(7, c->lo.d[0]);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(7, RD(7) & 0xffff);
div_s(c, 0, RSW(6), RSW(7));
SET64(3, c->hi.d[0]);
mul_s(c, 0, 5, RSW(8), RSW(3));
div_s(c, 0, RSW(6), RSW(7));
c->f[0].u = RW(5);
c->f[1].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(2) + 248), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(3, c->lo.d[0]);
mul_s(c, 0, 3, RSW(4), RSW(3));
c->f[0].u = RW(3);
c->f[2].f = (f32)(s32)c->f[0].u;
{ int t = RSD(8) < 0; wr32(c, (RW(2) + 256), c->f[2].u); if (t) goto L_001A86C8; }
c->f[0].u = RW(8);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001A86E4;
L_001A86C8:;
SET32(3, RW(8) >> 1);
SET64(2, RD(8) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_001A86E4:;
c->f[1].f = fpu(F(1) + F(0));
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
c->f[0].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
{ int t = RSD(4) < 0; wr32(c, (RW(2) + 252), c->f[0].u); if (t) goto L_001A8710; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001A872C;
L_001A8710:;
SET32(3, RW(4) >> 1);
SET64(2, RD(4) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_001A872C:;
c->f[1].f = fpu(F(2) + F(0));
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
c->f[0].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(2) + 260), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(17) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a875c);  rt_call(c, t); }
L_001A875C:;
SET64(4, RD(16) + RD(0));
L_001A8760:;
SET64(31, 0x1a8768);  F_001CB090(c);
SET64(4, (s64)(s32)0x447a0000);
SET64(3, rd8(c, (RW(17) + 256)));
c->f[1].u = RW(4);
c->f[20].f = fpu_div(F(0), F(1));
{ int t = RD(3) == RD(0);  if (t) goto L_001A8A6C; }
c->f[3].u = rd32(c, (RW(17) + 240));
c->f[0].u = rd32(c, (RW(17) + 204));
c->fcc = F(0) == F(3);
if (!c->fcc) { c->f[2].u = rd32(c, (RW(17) + 264)); goto L_001A87B8; }
c->f[1].u = rd32(c, (RW(17) + 208));
c->f[0].u = rd32(c, (RW(17) + 244));
c->fcc = F(1) == F(0);
if (c->fcc) { wr8(c, (RW(17) + 256), (u8)RW(0)); goto L_001A8A6C; }
c->f[2].u = rd32(c, (RW(17) + 264));
L_001A87B8:;
SET64(2, (s64)(s32)0x41200000);
c->f[0].u = rd32(c, (RW(17) + 268));
c->f[1].u = RW(2);
c->f[2].f = fpu(F(20) - F(2));
c->f[0].f = fpu_div(F(2), F(0));
c->f[5].f = fpu(F(1) * F(0));
c->fcc = F(5) < F(1);
if (!c->fcc) { c->f[0].u = rd32(c, (RW(17) + 244)); goto L_001A89BC; }
c->f[3].u = rd32(c, (RW(17) + 260));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(0);
c->f[4].u = RW(2);
c->fcc = F(0) == F(3);
if (!c->fcc) { SET64(2, (s64)(s32)0x3f000000); goto L_001A8860; }
c->f[5].f = fpu_div(F(5), F(1));
c->f[2].u = rd32(c, (RW(17) + 232));
c->f[1].u = rd32(c, (RW(17) + 248));
wr32(c, (RW(29) + 124), c->f[4].u);
c->f[4].u = rd32(c, (RW(17) + 228));
c->f[3].u = rd32(c, (RW(17) + 244));
c->f[1].f = fpu(F(1) - F(2));
c->facc = fpu(F(0) + F(2));
c->f[1].f = fpu(c->facc + F(5) * F(1));
wr32(c, (RW(29) + 120), c->f[1].u);
c->f[3].f = fpu(F(3) - F(4));
c->facc = fpu(F(0) + F(4));
c->f[3].f = fpu(c->facc + F(5) * F(3));
c->f[2].u = rd32(c, (RW(17) + 224));
c->f[1].u = rd32(c, (RW(17) + 240));
wr32(c, (RW(29) + 116), c->f[3].u);
c->facc = fpu(F(0) + F(2));
c->f[0].f = fpu(F(1) - F(2));
c->f[0].f = fpu(c->facc + F(5) * F(0));
wr32(c, (RW(29) + 112), c->f[0].u);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]); goto L_001A8900;
L_001A8860:;
c->f[1].u = RW(2);
c->f[1].f = fpu(F(1) * F(3));
SET64(2, (s64)(s32)0x42c80000);
c->f[1].f = fpu(F(1) * F(5));
c->f[1].f = fpu(F(5) * F(1));
c->facc = fpu(F(0) + F(1));
c->f[2].u = rd32(c, (RW(17) + 272));
c->f[1].u = RW(2);
c->f[2].f = fpu(c->facc + F(2) * F(5));
c->f[5].f = fpu_div(F(2), F(1));
c->fcc = F(5) < F(4);
if (c->fcc) { c->f[2].u = rd32(c, (RW(17) + 232)); goto L_001A88B0; }
rd128(c, (RW(17) + 240) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr8(c, (RW(17) + 256), (u8)RW(0)); goto L_001A8900;
L_001A88B0:;
c->f[1].u = rd32(c, (RW(17) + 248));
wr32(c, (RW(29) + 108), c->f[4].u);
c->f[4].u = rd32(c, (RW(17) + 228));
c->f[3].u = rd32(c, (RW(17) + 244));
c->f[1].f = fpu(F(1) - F(2));
c->facc = fpu(F(0) + F(2));
c->f[1].f = fpu(c->facc + F(5) * F(1));
wr32(c, (RW(29) + 104), c->f[1].u);
c->f[3].f = fpu(F(3) - F(4));
c->facc = fpu(F(0) + F(4));
c->f[3].f = fpu(c->facc + F(5) * F(3));
c->f[2].u = rd32(c, (RW(17) + 224));
c->f[1].u = rd32(c, (RW(17) + 240));
wr32(c, (RW(29) + 100), c->f[3].u);
c->facc = fpu(F(0) + F(2));
c->f[0].f = fpu(F(1) - F(2));
c->f[0].f = fpu(c->facc + F(5) * F(0));
wr32(c, (RW(29) + 96), c->f[0].u);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
L_001A8900:;
c->f[0].u = rd32(c, (RW(29) + 144));
c->f[1].u = rd32(c, (RW(29) + 148));
wr32(c, (RW(17) + 204), c->f[0].u);
wr32(c, (RW(17) + 208), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 196), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 200), c->f[1].u);
SET64(2, rd16(c, (RW(17) + 370)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001A8938; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001A8950;
L_001A8938:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001A8950:;
c->f[0].u = rd32(c, (RW(17) + 276));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(2) + 208), c->f[0].u);
SET64(2, rd16(c, (RW(17) + 372)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001A8978; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001A8990;
L_001A8978:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001A8990:;
c->f[0].u = rd32(c, (RW(17) + 280));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(2) + 212), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(17) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a89b4);  rt_call(c, t); }
SET64(3, rd8(c, (RW(17) + 320))); goto L_001A8A70;
L_001A89BC:;
wr32(c, (RW(17) + 204), c->f[3].u);
wr32(c, (RW(17) + 208), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 196), c->f[3].u);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 200), c->f[0].u);
SET64(2, rd16(c, (RW(17) + 370)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001A89EC; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001A8A04;
L_001A89EC:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001A8A04:;
c->f[0].u = rd32(c, (RW(17) + 276));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(2) + 208), c->f[0].u);
SET64(2, rd16(c, (RW(17) + 372)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001A8A2C; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001A8A44;
L_001A8A2C:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001A8A44:;
c->f[0].u = rd32(c, (RW(17) + 280));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(2) + 212), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(17) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a8a68);  rt_call(c, t); }
wr8(c, (RW(17) + 256), (u8)RW(0));
L_001A8A6C:;
SET64(3, rd8(c, (RW(17) + 320)));
L_001A8A70:;
if (RD(3) == RD(0)) { c->f[0].u = rd32(c, (RW(17) + 192)); goto L_001A8D94; }
c->f[21].u = rd32(c, (RW(17) + 304));
c->f[0].u = rd32(c, (RW(17) + 276));
c->fcc = F(0) == F(21);
if (!c->fcc) { c->f[2].u = rd32(c, (RW(17) + 328)); goto L_001A8AA4; }
c->f[1].u = rd32(c, (RW(17) + 280));
c->f[0].u = rd32(c, (RW(17) + 308));
c->fcc = F(1) == F(0);
if (c->fcc) { wr8(c, (RW(17) + 320), (u8)RW(0)); goto L_001A8D90; }
c->f[2].u = rd32(c, (RW(17) + 328));
L_001A8AA4:;
SET64(2, (s64)(s32)0x41200000);
c->f[0].u = rd32(c, (RW(17) + 332));
c->f[1].u = RW(2);
c->f[2].f = fpu(F(20) - F(2));
c->f[0].f = fpu_div(F(2), F(0));
c->f[5].f = fpu(F(1) * F(0));
c->fcc = F(5) < F(1);
if (!c->fcc) { SET64(5, (s32)rd32(c, (RW(17) + 220))); goto L_001A8CC4; }
c->f[3].u = rd32(c, (RW(17) + 324));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(0);
c->f[4].u = RW(2);
c->fcc = F(0) == F(3);
if (!c->fcc) { SET64(2, (s64)(s32)0x3f000000); goto L_001A8B4C; }
c->f[5].f = fpu_div(F(5), F(1));
c->f[2].u = rd32(c, (RW(17) + 296));
c->f[1].u = rd32(c, (RW(17) + 312));
wr32(c, (RW(29) + 92), c->f[4].u);
c->f[4].u = rd32(c, (RW(17) + 292));
c->f[3].u = rd32(c, (RW(17) + 308));
c->f[1].f = fpu(F(1) - F(2));
c->facc = fpu(F(0) + F(2));
c->f[1].f = fpu(c->facc + F(5) * F(1));
wr32(c, (RW(29) + 88), c->f[1].u);
c->f[3].f = fpu(F(3) - F(4));
c->facc = fpu(F(0) + F(4));
c->f[3].f = fpu(c->facc + F(5) * F(3));
c->f[2].u = rd32(c, (RW(17) + 288));
c->f[1].u = rd32(c, (RW(17) + 304));
wr32(c, (RW(29) + 84), c->f[3].u);
c->facc = fpu(F(0) + F(2));
c->f[0].f = fpu(F(1) - F(2));
c->f[0].f = fpu(c->facc + F(5) * F(0));
wr32(c, (RW(29) + 80), c->f[0].u);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]); goto L_001A8BEC;
L_001A8B4C:;
c->f[1].u = RW(2);
c->f[1].f = fpu(F(1) * F(3));
SET64(2, (s64)(s32)0x42c80000);
c->f[1].f = fpu(F(1) * F(5));
c->f[1].f = fpu(F(5) * F(1));
c->facc = fpu(F(0) + F(1));
c->f[2].u = rd32(c, (RW(17) + 336));
c->f[1].u = RW(2);
c->f[2].f = fpu(c->facc + F(2) * F(5));
c->f[5].f = fpu_div(F(2), F(1));
c->fcc = F(5) < F(4);
if (c->fcc) { c->f[2].u = rd32(c, (RW(17) + 296)); goto L_001A8B9C; }
rd128(c, (RW(17) + 304) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr8(c, (RW(17) + 320), (u8)RW(0)); goto L_001A8BEC;
L_001A8B9C:;
c->f[1].u = rd32(c, (RW(17) + 312));
wr32(c, (RW(29) + 76), c->f[4].u);
c->f[4].u = rd32(c, (RW(17) + 292));
c->f[3].u = rd32(c, (RW(17) + 308));
c->f[1].f = fpu(F(1) - F(2));
c->facc = fpu(F(0) + F(2));
c->f[1].f = fpu(c->facc + F(5) * F(1));
wr32(c, (RW(29) + 72), c->f[1].u);
c->f[3].f = fpu(F(3) - F(4));
c->facc = fpu(F(0) + F(4));
c->f[3].f = fpu(c->facc + F(5) * F(3));
c->f[2].u = rd32(c, (RW(17) + 288));
c->f[1].u = rd32(c, (RW(17) + 304));
wr32(c, (RW(29) + 68), c->f[3].u);
c->facc = fpu(F(0) + F(2));
c->f[0].f = fpu(F(1) - F(2));
c->f[0].f = fpu(c->facc + F(5) * F(0));
wr32(c, (RW(29) + 64), c->f[0].u);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
L_001A8BEC:;
SET64(5, (s32)rd32(c, (RW(17) + 220)));
c->f[21].u = rd32(c, (RW(29) + 128));
{ int t = RSD(5) < 0; c->f[22].u = rd32(c, (RW(29) + 132)); if (t) goto L_001A8C08; }
wr32(c, (RW(17) + 220), RW(5));
SET64(31, 0x1a8c08); SET64(4, (s32)rd32(c, (RW(17) + 28))); F_001AA070(c);
L_001A8C08:;
wr32(c, (RW(17) + 276), c->f[21].u);
wr32(c, (RW(17) + 280), c->f[22].u);
c->f[1].u = rd32(c, (RW(17) + 208));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
c->f[0].u = rd32(c, (RW(17) + 204));
wr32(c, (RW(2) + 196), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 200), c->f[1].u);
SET64(2, rd16(c, (RW(17) + 370)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001A8C40; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001A8C58;
L_001A8C40:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001A8C58:;
c->f[0].u = rd32(c, (RW(17) + 276));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(2) + 208), c->f[0].u);
SET64(2, rd16(c, (RW(17) + 372)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001A8C80; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001A8C98;
L_001A8C80:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001A8C98:;
c->f[0].u = rd32(c, (RW(17) + 280));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(2) + 212), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(17) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a8cbc);  rt_call(c, t); }
 goto L_001A8D90;
L_001A8CC4:;
{ int t = RSD(5) < 0; c->f[22].u = rd32(c, (RW(17) + 308)); if (t) goto L_001A8CD8; }
wr32(c, (RW(17) + 220), RW(5));
SET64(31, 0x1a8cd8); SET64(4, (s32)rd32(c, (RW(17) + 28))); F_001AA070(c);
L_001A8CD8:;
wr32(c, (RW(17) + 276), c->f[21].u);
wr32(c, (RW(17) + 280), c->f[22].u);
c->f[1].u = rd32(c, (RW(17) + 208));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
c->f[0].u = rd32(c, (RW(17) + 204));
wr32(c, (RW(2) + 196), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 200), c->f[1].u);
SET64(2, rd16(c, (RW(17) + 370)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001A8D10; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001A8D28;
L_001A8D10:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001A8D28:;
c->f[0].u = rd32(c, (RW(17) + 276));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(2) + 208), c->f[0].u);
SET64(2, rd16(c, (RW(17) + 372)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001A8D50; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001A8D68;
L_001A8D50:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001A8D68:;
c->f[0].u = rd32(c, (RW(17) + 280));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(2) + 212), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(17) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a8d8c);  rt_call(c, t); }
wr8(c, (RW(17) + 320), (u8)RW(0));
L_001A8D90:;
c->f[0].u = rd32(c, (RW(17) + 192));
L_001A8D94:;
c->f[5].u = RW(0);
c->fcc = F(0) == F(5);
if (c->fcc) { SET64(3, rd8(c, (RW(17) + 368))); goto L_001A8E64; }
c->f[4].u = rd32(c, (RW(17) + 188));
c->f[0].u = rd32(c, (RW(17) + 172));
c->fcc = F(0) == F(4);
if (c->fcc) { wr32(c, (RW(17) + 192), c->f[5].u); goto L_001A8E60; }
c->f[2].u = rd32(c, (RW(17) + 196));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(17) + 200));
c->f[0].u = RW(2);
c->f[2].f = fpu(F(20) - F(2));
c->f[3].f = fpu_div(F(2), F(1));
c->fcc = F(3) < F(0);
if (!c->fcc) { c->f[1].u = rd32(c, (RW(17) + 180)); goto L_001A8E30; }
c->f[2].u = rd32(c, (RW(17) + 184));
c->f[1].u = rd32(c, (RW(17) + 180));
c->f[0].u = rd32(c, (RW(17) + 176));
c->facc = fpu(F(5) + F(2));
c->f[2].f = fpu(F(4) - F(2));
c->f[2].f = fpu(c->facc + F(3) * F(2));
wr32(c, (RW(17) + 172), c->f[2].u);
wr32(c, (RW(17) + 176), c->f[0].u);
wr32(c, (RW(17) + 180), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 216), c->f[2].u);
SET64(4, (s32)rd32(c, (RW(17) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a8e28);  rt_call(c, t); }
 goto L_001A8E60;
L_001A8E30:;
c->f[0].u = rd32(c, (RW(17) + 176));
wr32(c, (RW(17) + 172), c->f[4].u);
wr32(c, (RW(17) + 176), c->f[0].u);
wr32(c, (RW(17) + 180), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 216), c->f[4].u);
SET64(4, (s32)rd32(c, (RW(17) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a8e5c);  rt_call(c, t); }
wr32(c, (RW(17) + 192), RW(0));
L_001A8E60:;
SET64(3, rd8(c, (RW(17) + 368)));
L_001A8E64:;
{ int t = RD(3) == RD(0);  if (t) goto L_001A8F54; }
c->f[3].u = rd32(c, (RW(17) + 356));
c->f[0].u = rd32(c, (RW(17) + 348));
c->fcc = F(3) == F(0);
if (c->fcc) { wr8(c, (RW(17) + 368), (u8)RW(0)); goto L_001A8F54; }
c->f[2].u = rd32(c, (RW(17) + 360));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(17) + 364));
c->f[0].u = RW(2);
c->f[2].f = fpu(F(20) - F(2));
c->f[2].f = fpu_div(F(2), F(1));
c->fcc = F(2) < F(0);
if (!c->fcc) { wr32(c, (RW(17) + 348), c->f[3].u); goto L_001A8F10; }
c->f[1].u = rd32(c, (RW(17) + 352));
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(F(3) - F(1));
c->f[1].f = fpu(c->facc + F(2) * F(0));
wr32(c, (RW(17) + 348), c->f[1].u);
c->f[0].u = rd32(c, (RW(28) + -32260));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 264), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32256));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 268), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32252));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 272), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 276), c->f[1].u);
SET64(4, (s32)rd32(c, (RW(17) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a8f08);  rt_call(c, t); }
 goto L_001A8F54;
L_001A8F10:;
c->f[0].u = rd32(c, (RW(28) + -32260));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 264), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32256));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 268), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32252));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 272), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(2) + 276), c->f[3].u);
SET64(4, (s32)rd32(c, (RW(17) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a8f50);  rt_call(c, t); }
wr8(c, (RW(17) + 368), (u8)RW(0));
L_001A8F54:;
SET64(31, rd64(c, (RW(29) + 48)));
L_001A8F58:;
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 160); return;
}

void F_001A8F80(Ctx *c) { /* func_001A8F80 */
ENTER(0x1a8f80);
c->f[1].u = rd32(c, (RW(4) + 348));
SET32(3, RW(0) + 1);
c->f[0].f = fpu(F(14) - F(13));
wr32(c, (RW(4) + 352), c->f[1].u);
wr32(c, (RW(4) + 356), c->f[12].u);
wr32(c, (RW(4) + 360), c->f[13].u);
wr32(c, (RW(4) + 364), c->f[0].u);
wr8(c, (RW(4) + 368), (u8)RW(3)); return;
}

void F_001A8FB0(Ctx *c) { /* func_001A8FB0 */
ENTER(0x1a8fb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 348), c->f[12].u);
c->f[0].u = rd32(c, (RW(28) + -32260));
SET64(2, (s32)rd32(c, (RW(4) + 28)));
wr32(c, (RW(2) + 264), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32256));
SET64(2, (s32)rd32(c, (RW(4) + 28)));
wr32(c, (RW(2) + 268), c->f[0].u);
c->f[0].u = rd32(c, (RW(28) + -32252));
SET64(2, (s32)rd32(c, (RW(4) + 28)));
wr32(c, (RW(2) + 272), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(4) + 28)));
wr32(c, (RW(2) + 276), c->f[12].u);
SET64(4, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a8ffc);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001A9010(Ctx *c) { /* func_001A9010 */
ENTER(0x1a9010);
c->f[1].u = rd32(c, (RW(4) + 192));
c->f[0].u = RW(0);
c->fcc = F(1) == F(0);
if (c->fcc) { c->f[0].u = rd32(c, (RW(4) + 172)); goto L_001A9034; }
c->f[0].u = rd32(c, (RW(4) + 188));
wr32(c, (RW(4) + 184), c->f[0].u); goto L_001A9038;
L_001A9034:;
wr32(c, (RW(4) + 184), c->f[0].u);
L_001A9038:;
wr32(c, (RW(4) + 188), c->f[12].u);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 176), c->f[13].u);
wr32(c, (RW(4) + 180), c->f[14].u);
c->f[0].f = fpu(F(16) - F(15));
wr32(c, (RW(4) + 196), c->f[15].u);
wr32(c, (RW(4) + 200), c->f[0].u);
wr32(c, (RW(4) + 192), RW(3)); return;
}

void F_001A9060(Ctx *c) { /* func_001A9060 */
ENTER(0x1a9060);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 172), c->f[12].u);
wr32(c, (RW(4) + 176), c->f[13].u);
wr32(c, (RW(4) + 180), c->f[14].u);
SET64(2, (s32)rd32(c, (RW(4) + 28)));
wr32(c, (RW(2) + 216), c->f[12].u);
SET64(4, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a9090);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001A90A0(Ctx *c) { /* func_001A90A0 */
ENTER(0x1a90a0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 16), c->f[24].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[24].u = c->f[12].u;
c->f[23].u = c->f[13].u;
c->f[20].u = c->f[14].u;
c->f[22].u = c->f[15].u;
{ int t = RSD(5) < 0; c->f[21].u = c->f[16].u; if (t) goto L_001A90E8; }
wr32(c, (RW(16) + 220), RW(5));
SET64(31, 0x1a90e8); SET64(4, (s32)rd32(c, (RW(16) + 28))); F_001AA070(c);
L_001A90E8:;
SET64(3, (s64)(s32)0x3f000000);
SET64(5, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
SET64(4, (s64)(s32)0x42c80000);
c->f[1].f = fpu(F(0) * F(21));
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 92), RW(5));
SET32(3, RW(0) + 1);
wr32(c, (RW(29) + 76), RW(5));
wr32(c, (RW(29) + 72), RW(0));
c->f[2].u = RW(4);
c->f[4].u = RW(0);
SET64(4, (s64)(s32)0x41200000);
c->facc = fpu(F(4) + F(2));
c->f[0].u = RW(4);
c->f[1].f = fpu(c->facc - F(2) * F(1));
c->f[0].f = fpu_div(F(1), F(0));
c->f[6].u = rd32(c, (RW(16) + 208));
c->f[5].u = rd32(c, (RW(16) + 204));
wr32(c, (RW(29) + 64), c->f[24].u);
wr32(c, (RW(29) + 68), c->f[23].u);
wr32(c, (RW(29) + 84), c->f[6].u);
rd128(c, (RW(29) + 64) & ~15u, &c->r[5]);
wr32(c, (RW(29) + 80), c->f[5].u);
rd128(c, (RW(29) + 80) & ~15u, &c->r[4]);
c->f[3].f = fpu(F(22) - F(20));
wr128(c, (RW(16) + 224) & ~15u, &c->r[4]);
wr128(c, (RW(16) + 240) & ~15u, &c->r[5]);
wr32(c, (RW(16) + 264), c->f[20].u);
wr32(c, (RW(16) + 268), c->f[3].u);
wr32(c, (RW(16) + 260), c->f[21].u);
wr32(c, (RW(16) + 272), c->f[0].u);
wr8(c, (RW(16) + 256), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[23].u = rd32(c, (RW(29) + 12));
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 96); return;
}

void F_001A91A0(Ctx *c) { /* func_001A91A0 */
ENTER(0x1a91a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[21].u = c->f[12].u;
{ int t = RSD(5) < 0; c->f[20].u = c->f[13].u; if (t) goto L_001A91D0; }
wr32(c, (RW(16) + 220), RW(5));
SET64(31, 0x1a91d0); SET64(4, (s32)rd32(c, (RW(16) + 28))); F_001AA070(c);
L_001A91D0:;
wr32(c, (RW(16) + 204), c->f[21].u);
wr32(c, (RW(16) + 208), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(16) + 28)));
wr32(c, (RW(2) + 196), c->f[21].u);
SET64(2, (s32)rd32(c, (RW(16) + 28)));
wr32(c, (RW(2) + 200), c->f[20].u);
SET64(2, rd16(c, (RW(16) + 370)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001A9200; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001A9218;
L_001A9200:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001A9218:;
c->f[0].u = rd32(c, (RW(16) + 276));
SET64(2, (s32)rd32(c, (RW(16) + 28)));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(2) + 208), c->f[0].u);
SET64(2, rd16(c, (RW(16) + 372)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001A9240; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001A9258;
L_001A9240:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001A9258:;
c->f[0].u = rd32(c, (RW(16) + 280));
SET64(2, (s32)rd32(c, (RW(16) + 28)));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(2) + 212), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a927c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void F_001A92A0(Ctx *c) { /* func_001A92A0 */
ENTER(0x1a92a0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 16), c->f[24].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[24].u = c->f[12].u;
c->f[23].u = c->f[13].u;
c->f[20].u = c->f[14].u;
c->f[22].u = c->f[15].u;
{ int t = RSD(5) < 0; c->f[21].u = c->f[16].u; if (t) goto L_001A92E8; }
wr32(c, (RW(16) + 220), RW(5));
SET64(31, 0x1a92e8); SET64(4, (s32)rd32(c, (RW(16) + 28))); F_001AA070(c);
L_001A92E8:;
SET64(3, (s64)(s32)0x3f000000);
SET64(5, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
SET64(4, (s64)(s32)0x42c80000);
c->f[1].f = fpu(F(0) * F(21));
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 92), RW(5));
SET32(3, RW(0) + 1);
wr32(c, (RW(29) + 76), RW(5));
wr32(c, (RW(29) + 72), RW(0));
c->f[2].u = RW(4);
c->f[4].u = RW(0);
SET64(4, (s64)(s32)0x41200000);
c->facc = fpu(F(4) + F(2));
c->f[0].u = RW(4);
c->f[1].f = fpu(c->facc - F(2) * F(1));
c->f[0].f = fpu_div(F(1), F(0));
c->f[6].u = rd32(c, (RW(16) + 280));
c->f[5].u = rd32(c, (RW(16) + 276));
wr32(c, (RW(29) + 64), c->f[24].u);
wr32(c, (RW(29) + 68), c->f[23].u);
wr32(c, (RW(29) + 84), c->f[6].u);
rd128(c, (RW(29) + 64) & ~15u, &c->r[5]);
wr32(c, (RW(29) + 80), c->f[5].u);
rd128(c, (RW(29) + 80) & ~15u, &c->r[4]);
c->f[3].f = fpu(F(22) - F(20));
wr128(c, (RW(16) + 288) & ~15u, &c->r[4]);
wr128(c, (RW(16) + 304) & ~15u, &c->r[5]);
wr32(c, (RW(16) + 328), c->f[20].u);
wr32(c, (RW(16) + 332), c->f[3].u);
wr32(c, (RW(16) + 324), c->f[21].u);
wr32(c, (RW(16) + 336), c->f[0].u);
wr8(c, (RW(16) + 320), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[23].u = rd32(c, (RW(29) + 12));
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 96); return;
}

void F_001A93A0(Ctx *c) { /* func_001A93A0 */
ENTER(0x1a93a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[21].u = c->f[12].u;
{ int t = RSD(5) < 0; c->f[20].u = c->f[13].u; if (t) goto L_001A93D0; }
wr32(c, (RW(16) + 220), RW(5));
SET64(31, 0x1a93d0); SET64(4, (s32)rd32(c, (RW(16) + 28))); F_001AA070(c);
L_001A93D0:;
wr32(c, (RW(16) + 276), c->f[21].u);
wr32(c, (RW(16) + 280), c->f[20].u);
c->f[1].u = rd32(c, (RW(16) + 208));
SET64(2, (s32)rd32(c, (RW(16) + 28)));
c->f[0].u = rd32(c, (RW(16) + 204));
wr32(c, (RW(2) + 196), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 28)));
wr32(c, (RW(2) + 200), c->f[1].u);
SET64(2, rd16(c, (RW(16) + 370)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001A9408; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001A9420;
L_001A9408:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001A9420:;
c->f[0].u = rd32(c, (RW(16) + 276));
SET64(2, (s32)rd32(c, (RW(16) + 28)));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(2) + 208), c->f[0].u);
SET64(2, rd16(c, (RW(16) + 372)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001A9448; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001A9460;
L_001A9448:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001A9460:;
c->f[0].u = rd32(c, (RW(16) + 280));
SET64(2, (s32)rd32(c, (RW(16) + 28)));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(2) + 212), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a9484);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void F_001A94A0(Ctx *c) { /* func_001A94A0 */
ENTER(0x1a94a0);
wr8(c, (RW(4) + 380), (u8)RW(0)); return;
}

void F_001A94B0(Ctx *c) { /* func_001A94B0 */
ENTER(0x1a94b0);
wr16(c, (RW(4) + 382), (u16)RW(5));
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 380), (u8)RW(3)); return;
}

void F_001A94C0(Ctx *c) { /* func_001A94C0 */
ENTER(0x1a94c0);
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 384), (u8)RW(3));
SET32(3, RW(0) + 2);
wr32(c, (RW(4) + 388), RW(3)); return;
}

void F_001A94E0(Ctx *c) { /* func_001A94E0 */
ENTER(0x1a94e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1a94fc);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001A9510(Ctx *c) { /* func_001A9510 */
ENTER(0x1a9510);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
{ int t = RD(5) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001A9540; }
SET64(31, 0x1a9530);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(5) == RD(0);  if (t) goto L_001A9540; }
SET32(5, RW(5) + 672);
L_001A9540:;
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x1a9554);  rt_call(c, t); }
SET64(2, rd8(c, (RW(16) + 379)));
if (RD(2) == RD(0)) { SET64(8, rd16(c, (RW(16) + 370))); goto L_001A9584; }
SET64(2, rd16(c, (RW(16) + 34)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
c->f[20].u = rd32(c, (RW(2) + 40));
SET64(31, 0x1a9578); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_001CB090(c);
c->f[0].f = fpu(F(20) + F(0));
wr32(c, (RW(16) + 168), c->f[0].u);
SET64(8, rd16(c, (RW(16) + 370)));
L_001A9584:;
SET64(2, rd16(c, (RW(16) + 374)));
SET64(5, rd16(c, (RW(16) + 34)));
SET64(3, rd16(c, (RW(16) + 32)));
div_s(c, 0, RSW(2), RSW(8));
SET64(4, rd16(c, (RW(16) + 372)));
SET32(3, RW(5) + RW(3));
SET64(6, RD(3) & 0xffff);
SET64(7, c->lo.d[0]);
SET64(2, (s32)rd32(c, (RW(16) + 28)));
SET64(7, RD(7) & 0xffff);
div_s(c, 0, RSW(6), RSW(7));
SET64(3, c->hi.d[0]);
mul_s(c, 0, 5, RSW(8), RSW(3));
div_s(c, 0, RSW(6), RSW(7));
c->f[0].u = RW(5);
c->f[1].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(2) + 248), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(16) + 28)));
SET64(3, c->lo.d[0]);
mul_s(c, 0, 3, RSW(4), RSW(3));
c->f[0].u = RW(3);
c->f[2].f = (f32)(s32)c->f[0].u;
{ int t = RSD(8) < 0; wr32(c, (RW(2) + 256), c->f[2].u); if (t) goto L_001A95F8; }
c->f[0].u = RW(8);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001A9614;
L_001A95F8:;
SET32(3, RW(8) >> 1);
SET64(2, RD(8) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_001A9614:;
c->f[1].f = fpu(F(1) + F(0));
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s32)rd32(c, (RW(16) + 28)));
c->f[0].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
{ int t = RSD(4) < 0; wr32(c, (RW(2) + 252), c->f[0].u); if (t) goto L_001A9640; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001A965C;
L_001A9640:;
SET32(3, RW(4) >> 1);
SET64(2, RD(4) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_001A965C:;
c->f[1].f = fpu(F(2) + F(0));
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s32)rd32(c, (RW(16) + 28)));
c->f[0].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(2) + 260), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a968c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A96A0(Ctx *c) { /* func_001A96A0 */
ENTER(0x1a96a0);
SET64(3, rd16(c, (RW(4) + 36)));
SET64(2, RD(5) & 0xffff);
SET64(1, RSD(3) < RSD(2));
if (RD(1) == RD(0)) { wr16(c, (RW(4) + 34), (u16)RW(5)); goto L_001A96BC; }
SET64(2, RD(0) + RD(0)); goto L_001A96C0;
L_001A96BC:;
SET32(2, RW(0) + 1);
L_001A96C0:;
 return;
}

void F_001A96D0(Ctx *c) { /* func_001A96D0 */
ENTER(0x1a96d0);
SET64(9, RD(6) & 0xffff);
SET64(1, RSD(9) < (s64)33);
if (RD(1) != RD(0)) { SET64(10, RD(0) + RD(0)); goto L_001A96E8; }
SET64(2, RD(0) + RD(0)); goto L_001A97DC;
L_001A96E8:;
{ int t = RSD(9) <= 0;  if (t) goto L_001A97D0; }
SET64(2, RD(9) & 0xffff);
SET64(1, RD(2) < (u64)(s64)9);
{ int t = RD(1) != RD(0); SET32(8, RW(9) + -8); if (t) goto L_001A9788; }
SET64(2, (s64)(s32)0x447a0000);
c->f[1].u = RW(2);
L_001A9708:;
SET64(3, RD(10) & 0xffff);
SET32(2, RW(10) + 8);
SET32(3, RW(3) << 2);
SET64(10, RD(2) & 0xffff);
SET32(7, RW(5) + RW(3));
SET64(2, RSD(10) < RSD(8));
c->f[0].u = rd32(c, (RW(7) + 0));
SET32(3, RW(4) + RW(3));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(3) + 40), c->f[0].u);
c->f[0].u = rd32(c, (RW(7) + 4));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(3) + 44), c->f[0].u);
c->f[0].u = rd32(c, (RW(7) + 8));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(3) + 48), c->f[0].u);
c->f[0].u = rd32(c, (RW(7) + 12));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(3) + 52), c->f[0].u);
c->f[0].u = rd32(c, (RW(7) + 16));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(3) + 56), c->f[0].u);
c->f[0].u = rd32(c, (RW(7) + 20));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(3) + 60), c->f[0].u);
c->f[0].u = rd32(c, (RW(7) + 24));
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(3) + 64), c->f[0].u);
c->f[0].u = rd32(c, (RW(7) + 28));
c->f[0].f = fpu(F(1) * F(0));
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 68), c->f[0].u); if (t) { POLL(); goto L_001A9708; } }
L_001A9788:;
SET64(2, RD(10) & 0xffff);
SET64(1, RSD(2) < RSD(9));
{ int t = RD(1) == RD(0);  if (t) goto L_001A97D0; }
SET64(2, (s64)(s32)0x447a0000);
c->f[1].u = RW(2);
L_001A97A0:;
SET64(3, RD(10) & 0xffff);
SET32(2, RW(10) + 1);
SET32(3, RW(3) << 2);
SET64(10, RD(2) & 0xffff);
SET32(2, RW(5) + RW(3));
c->f[0].u = rd32(c, (RW(2) + 0));
SET32(3, RW(4) + RW(3));
c->f[0].f = fpu(F(1) * F(0));
SET64(2, RSD(10) < RSD(9));
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 40), c->f[0].u); if (t) { POLL(); goto L_001A97A0; } }
L_001A97D0:;
wr16(c, (RW(4) + 36), (u16)RW(6));
SET32(2, RW(0) + 1);
wr8(c, (RW(4) + 379), (u8)RW(2));
L_001A97DC:;
 return;
}

static void B_001A97F0(Ctx *c, u32 entry) { /* func_001A97F0 */
ENTER(entry);
switch (entry) { case 0x1a9840: goto L_001A9840; case 0x1a9860: goto L_001A9860; case 0x1a9880: goto L_001A9880; }
L_001A97F0:;
SET32(29, RW(29) + -96);
SET64(1, RD(7) < (u64)(s64)6);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(6) + RD(0));
{ int t = RD(1) == RD(0); wr32(c, (RW(4) + 216), RW(7)); if (t) goto L_001A9884; }
SET64(3, (s64)(s32)0x490000);
SET32(2, RW(7) << 2);
SET32(3, RW(3) + 22880);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x1a97f0: goto L_001A97F0; case 0x1a9840: goto L_001A9840; case 0x1a9860: goto L_001A9860; case 0x1a9880: goto L_001A9880; default: rt_jump(c, t); return; } }
L_001A9840:;
SET64(2, (s64)(s32)0x490000);
SET64(3, (s64)(s32)0x40000000);
c->f[1].u = rd32(c, (RW(2) + 20536));
c->f[0].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(18) + 212), c->f[0].u); goto L_001A9884;
L_001A9860:;
SET64(2, (s64)(s32)0x490000);
SET64(3, (s64)(s32)0x40400000);
c->f[1].u = rd32(c, (RW(2) + 20536));
c->f[0].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(18) + 212), c->f[0].u); goto L_001A9884;
L_001A9880:;
wr32(c, (RW(18) + 212), RW(0));
L_001A9884:;
SET32(2, RSW(17) >> 1);
wr16(c, (RW(18) + 370), (u16)RW(17));
c->f[0].u = RW(2);
wr16(c, (RW(18) + 372), (u16)RW(16));
c->f[0].f = (f32)(s32)c->f[0].u;
SET32(2, RSW(16) >> 1);
SET32(4, RW(0) + 320);
wr32(c, (RW(18) + 340), c->f[0].u);
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(31, 0x1a98b8); wr32(c, (RW(18) + 344), c->f[0].u); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_001A9930; }
SET32(4, RW(20) + 288);
SET32(19, RW(0) + 1);
SET64(31, 0x1a98d0); wr32(c, (RW(20) + 12), RW(4)); F_00141AA0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x1a98dc); SET64(5, RD(0) + RD(0)); F_0014C680(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -10944);
SET32(6, RW(6) + -10892);
wr32(c, (RW(20) + 8), RW(2));
SET32(4, RW(20) + 288);
SET64(5, (s32)rd32(c, (RW(20) + 12)));
SET64(3, RD(19) + RD(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(5) + 16), RW(6));
SET64(5, (s32)rd32(c, (RW(20) + 12)));
SET32(4, RW(4) - RW(5));
wr32(c, (RW(5) + 20), RW(4));
wr8(c, (RW(20) + 244), (u8)RW(3));
wr32(c, (RW(20) + 280), RW(0));
wr32(c, (RW(20) + 284), RW(0));
wr32(c, (RW(20) + 216), RW(0));
wr32(c, (RW(20) + 276), RW(2));
wr32(c, (RW(20) + 272), RW(2));
wr32(c, (RW(20) + 268), RW(2));
wr32(c, (RW(20) + 264), RW(2));
L_001A9930:;
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 4);
SET64(31, 0x1a9940); wr32(c, (RW(18) + 28), RW(20)); F_0014C3D0(c);
c->f[0].u = RW(17);
SET64(4, (s32)rd32(c, (RW(18) + 8)));
c->f[3].f = (f32)(s32)c->f[0].u;
SET64(3, (s32)rd32(c, (RW(18) + 28)));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(3) + 188), RW(4));
SET64(3, (s32)rd32(c, (RW(18) + 28)));
c->f[0].u = RW(16);
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[4].u = rd32(c, (RW(28) + -32276));
c->f[0].u = RW(2);
c->f[1].f = fpu(F(3) - F(0));
wr32(c, (RW(3) + 196), c->f[4].u);
SET64(2, (s32)rd32(c, (RW(18) + 28)));
c->f[4].u = rd32(c, (RW(28) + -32272));
c->f[0].f = fpu(F(2) - F(0));
wr32(c, (RW(2) + 200), c->f[4].u);
SET64(2, (s32)rd32(c, (RW(18) + 28)));
wr32(c, (RW(2) + 208), c->f[3].u);
SET64(2, (s32)rd32(c, (RW(18) + 28)));
wr32(c, (RW(2) + 212), c->f[2].u);
c->f[2].u = rd32(c, (RW(18) + 212));
SET64(2, (s32)rd32(c, (RW(18) + 28)));
wr32(c, (RW(2) + 204), c->f[2].u);
c->f[2].u = rd32(c, (RW(28) + -32268));
SET64(2, (s32)rd32(c, (RW(18) + 28)));
wr32(c, (RW(2) + 248), c->f[2].u);
c->f[2].u = rd32(c, (RW(28) + -32264));
SET64(2, (s32)rd32(c, (RW(18) + 28)));
wr32(c, (RW(2) + 256), c->f[2].u);
SET64(2, (s32)rd32(c, (RW(18) + 28)));
wr32(c, (RW(2) + 252), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(18) + 28)));
wr32(c, (RW(2) + 260), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(18) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1a99e4);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 80)));
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}
void F_001A97F0(Ctx *c) { B_001A97F0(c, 0x1a97f0); }
void F_001A9840(Ctx *c) { B_001A97F0(c, 0x1a9840); }
void F_001A9860(Ctx *c) { B_001A97F0(c, 0x1a9860); }
void F_001A9880(Ctx *c) { B_001A97F0(c, 0x1a9880); }

void F_001A9A10(Ctx *c) { /* func_001A9A10 */
ENTER(0x1a9a10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 16)));
SET64(16, RD(4) + RD(0));
SET32(2, RW(2) + -1);
{ int t = RSD(2) > 0; wr32(c, (RW(4) + 16), RW(2)); if (t) goto L_001A9B44; }
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET64(2, RD(3) & 0xffff); goto L_001A9A94; }
SET64(2, rd8(c, (RW(16) + 378)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 8))); goto L_001A9A70; }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_001A9A6C; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a9a68); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
L_001A9A6C:;
SET64(4, (s32)rd32(c, (RW(16) + 8)));
L_001A9A70:;
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_001A9B44; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a9a88); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
 goto L_001A9B44;
L_001A9A94:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 840)));
SET64(4, (s32)rd32(c, (RW(3) + 16)));
SET64(3, (s32)rd32(c, (RW(3) + 20)));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(3) == RD(4); SET64(6, RD(0) + RD(0)); if (t) goto L_001A9AE0; }
SET64(5, RD(2) & 0xffff);
SET64(2, RD(4) << 32);
SET64(2, RSD(2) >> 32);
SET64(4, RD(3) << 32);
L_001A9AC0:;
SET64(4, RSD(4) >> 32);
SET64(3, rd16(c, (RW(4) + 12)));
if (RD(5) != RD(3)) { SET64(3, (s32)rd32(c, (RW(4) + 8))); goto L_001A9AD8; }
SET64(6, (s32)rd32(c, (RW(4) + 16))); goto L_001A9AE0;
L_001A9AD8:;
if (RD(3) != RD(2)) { SET64(4, RD(3) << 32); { POLL(); goto L_001A9AC0; } }
L_001A9AE0:;
{ int t = RD(6) == RD(0);  if (t) goto L_001A9B44; }
SET64(2, (s32)rd32(c, (RW(6) + 16)));
SET32(2, RW(2) + -1);
{ int t = RSD(2) > 0; wr32(c, (RW(6) + 16), RW(2)); if (t) goto L_001A9B44; }
SET64(2, rd8(c, (RW(16) + 378)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 8))); goto L_001A9B28; }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_001A9B24; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a9b20); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
L_001A9B24:;
SET64(4, (s32)rd32(c, (RW(16) + 8)));
L_001A9B28:;
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_001A9B44; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a9b40); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
L_001A9B44:;
SET64(4, (s32)rd32(c, (RW(16) + 28)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 28), RW(0)); goto L_001A9B64; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1a9b60); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 28), RW(0));
L_001A9B64:;
SET64(31, 0x1a9b6c); SET64(4, (s32)rd32(c, (RW(16) + 396))); F_003219B0(c);
wr32(c, (RW(16) + 20), RW(0));
SET32(3, RW(0) + -1);
wr32(c, (RW(16) + 396), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A9B90(Ctx *c) { /* func_001A9B90 */
ENTER(0x1a9b90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001A9C28; }
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -10944);
SET32(6, RW(6) + -10892);
wr32(c, (RW(17) + 8), RW(2));
SET64(5, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 288);
wr32(c, (RW(3) + 16), RW(6));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x1a9be0); wr32(c, (RW(3) + 20), RW(2)); F_0014C530(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_001A9C14; }
SET32(4, RW(17) + 288);
{ int t = RD(4) == RD(0);  if (t) goto L_001A9C10; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 304), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1a9c10);  rt_call(c, t); }
L_001A9C10:;
SET64(2, RD(16) << 48);
L_001A9C14:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001A9C2C; }
SET64(31, 0x1a9c28); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001A9C28:;
SET64(2, RD(17) + RD(0));
L_001A9C2C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001A9C40(Ctx *c) { /* func_001A9C40 */
ENTER(0x1a9c40);
wr32(c, (RW(4) + 224), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 228), RW(0));
wr32(c, (RW(4) + 232), RW(0));
wr32(c, (RW(4) + 236), RW(2));
wr32(c, (RW(4) + 240), RW(0));
wr32(c, (RW(4) + 244), RW(0));
wr32(c, (RW(4) + 248), RW(0));
wr32(c, (RW(4) + 252), RW(2));
wr32(c, (RW(4) + 288), RW(0));
wr32(c, (RW(4) + 292), RW(0));
wr32(c, (RW(4) + 296), RW(0));
wr32(c, (RW(4) + 300), RW(2));
wr32(c, (RW(4) + 304), RW(0));
wr32(c, (RW(4) + 308), RW(0));
wr32(c, (RW(4) + 312), RW(0));
wr32(c, (RW(4) + 316), RW(2));
{ int t = RD(6) == RD(0); wr32(c, (RW(4) + 0), RW(5)); if (t) goto L_001A9C98; }
SET64(2, (s32)rd32(c, (RW(5) + 140)));
wr32(c, (RW(4) + 4), RW(2)); goto L_001A9C9C;
L_001A9C98:;
wr32(c, (RW(4) + 4), RW(0));
L_001A9C9C:;
wr16(c, (RW(4) + 372), (u16)RW(0));
SET32(7, RW(0) + -1);
wr16(c, (RW(4) + 370), (u16)RW(0));
SET64(5, (s64)(s32)0xc3480000);
wr32(c, (RW(4) + 8), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 12), RW(7));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr8(c, (RW(4) + 24), (u8)RW(0));
wr32(c, (RW(4) + 28), RW(0));
wr8(c, (RW(4) + 378), (u8)RW(6));
wr16(c, (RW(4) + 32), (u16)RW(0));
wr16(c, (RW(4) + 34), (u16)RW(0));
wr32(c, (RW(4) + 204), RW(5));
wr32(c, (RW(4) + 208), RW(5));
wr32(c, (RW(4) + 172), RW(0));
wr32(c, (RW(4) + 192), RW(0));
wr8(c, (RW(4) + 256), (u8)RW(0));
wr32(c, (RW(4) + 280), RW(3));
wr32(c, (RW(4) + 276), RW(3));
wr8(c, (RW(4) + 320), (u8)RW(0));
wr32(c, (RW(4) + 348), RW(3));
wr8(c, (RW(4) + 368), (u8)RW(0));
wr8(c, (RW(4) + 379), (u8)RW(0));
wr8(c, (RW(4) + 380), (u8)RW(0));
wr16(c, (RW(4) + 382), (u16)RW(0));
wr8(c, (RW(4) + 384), (u8)RW(0));
wr8(c, (RW(4) + 392), (u8)RW(0));
wr32(c, (RW(4) + 396), RW(7)); return;
}

static void B_001A9D20(Ctx *c, u32 entry) { /* func_001A9D20 */
ENTER(entry);
switch (entry) { case 0x1a9d68: goto L_001A9D68; case 0x1a9dbc: goto L_001A9DBC; case 0x1a9df0: goto L_001A9DF0; case 0x1a9e40: goto L_001A9E40; case 0x1a9e78: goto L_001A9E78; case 0x1a9ecc: goto L_001A9ECC; case 0x1a9f08: goto L_001A9F08; }
L_001A9D20:;
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 280)));
c->f[3].u = rd32(c, (RW(4) + 196));
c->f[2].u = rd32(c, (RW(4) + 200));
SET64(1, RD(2) < (u64)(s64)9);
{ int t = RD(1) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_001A9F54; }
SET64(3, (s64)(s32)0x490000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + 22912);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x1a9d20: goto L_001A9D20; case 0x1a9d68: goto L_001A9D68; case 0x1a9dbc: goto L_001A9DBC; case 0x1a9df0: goto L_001A9DF0; case 0x1a9e40: goto L_001A9E40; case 0x1a9e78: goto L_001A9E78; case 0x1a9ecc: goto L_001A9ECC; case 0x1a9f08: goto L_001A9F08; default: rt_jump(c, t); return; } }
L_001A9D68:;
c->f[1].u = c->f[3].u;
SET64(3, (s64)(s32)0x3f000000);
c->f[0].u = c->f[2].u;
SET64(2, (s64)(s32)0xbf800000);
c->f[3].u = rd32(c, (RW(17) + 208));
c->f[5].u = RW(3);
c->f[2].u = rd32(c, (RW(17) + 212));
c->f[3].f = fpu(F(5) * F(3));
c->f[2].f = fpu(F(5) * F(2));
c->f[4].u = RW(2);
wr32(c, (RW(29) + 92), c->f[3].u);
wr32(c, (RW(29) + 84), c->f[3].u);
c->f[3].f = fpu(F(4) * F(3));
wr32(c, (RW(29) + 76), c->f[2].u);
wr32(c, (RW(29) + 72), c->f[2].u);
c->f[2].f = fpu(F(4) * F(2));
wr32(c, (RW(29) + 88), c->f[3].u);
wr32(c, (RW(29) + 80), c->f[3].u);
wr32(c, (RW(29) + 68), c->f[2].u);
wr32(c, (RW(29) + 64), c->f[2].u); goto L_001A9F54;
L_001A9DBC:;
c->f[1].u = c->f[3].u;
wr32(c, (RW(29) + 88), RW(0));
c->f[3].u = rd32(c, (RW(17) + 208));
wr32(c, (RW(29) + 80), RW(0));
c->f[0].u = c->f[2].u;
wr32(c, (RW(29) + 68), RW(0));
c->f[2].u = rd32(c, (RW(17) + 212));
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 92), c->f[3].u);
wr32(c, (RW(29) + 84), c->f[3].u);
wr32(c, (RW(29) + 76), c->f[2].u);
wr32(c, (RW(29) + 72), c->f[2].u); goto L_001A9F54;
L_001A9DF0:;
c->f[4].u = rd32(c, (RW(17) + 208));
SET64(2, (s64)(s32)0x3f000000);
c->f[5].u = RW(2);
wr32(c, (RW(29) + 68), RW(0));
c->f[0].u = c->f[2].u;
SET64(2, (s64)(s32)0xbf800000);
c->f[4].f = fpu(F(5) * F(4));
wr32(c, (RW(29) + 64), RW(0));
c->f[2].u = rd32(c, (RW(17) + 212));
c->f[1].u = c->f[3].u;
c->f[3].u = RW(2);
wr32(c, (RW(29) + 76), c->f[2].u);
wr32(c, (RW(29) + 72), c->f[2].u);
c->f[2].f = fpu(F(3) * F(4));
wr32(c, (RW(29) + 92), c->f[4].u);
wr32(c, (RW(29) + 84), c->f[4].u);
wr32(c, (RW(29) + 88), c->f[2].u);
wr32(c, (RW(29) + 80), c->f[2].u); goto L_001A9F54;
L_001A9E40:;
c->f[1].u = c->f[3].u;
wr32(c, (RW(29) + 92), RW(0));
c->f[0].u = c->f[2].u;
wr32(c, (RW(29) + 84), RW(0));
c->f[2].u = rd32(c, (RW(17) + 212));
wr32(c, (RW(29) + 68), RW(0));
c->f[3].u = rd32(c, (RW(17) + 208));
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 76), c->f[2].u);
c->f[3].u = c->f[3].u ^ 0x80000000u;
wr32(c, (RW(29) + 88), c->f[3].u);
wr32(c, (RW(29) + 80), c->f[3].u);
wr32(c, (RW(29) + 72), c->f[2].u); goto L_001A9F54;
L_001A9E78:;
c->f[0].u = c->f[2].u;
SET64(2, (s64)(s32)0x3f000000);
c->f[2].u = rd32(c, (RW(17) + 208));
wr32(c, (RW(29) + 92), RW(0));
c->f[1].u = c->f[3].u;
wr32(c, (RW(29) + 84), RW(0));
c->f[4].u = RW(2);
c->f[3].u = c->f[2].u ^ 0x80000000u;
SET64(2, (s64)(s32)0xbf800000);
wr32(c, (RW(29) + 88), c->f[3].u);
wr32(c, (RW(29) + 80), c->f[3].u);
c->f[3].u = rd32(c, (RW(17) + 212));
c->f[2].u = RW(2);
c->f[3].f = fpu(F(4) * F(3));
c->f[2].f = fpu(F(2) * F(3));
wr32(c, (RW(29) + 76), c->f[3].u);
wr32(c, (RW(29) + 72), c->f[3].u);
wr32(c, (RW(29) + 68), c->f[2].u);
wr32(c, (RW(29) + 64), c->f[2].u); goto L_001A9F54;
L_001A9ECC:;
c->f[1].u = c->f[3].u;
wr32(c, (RW(29) + 92), RW(0));
c->f[0].u = c->f[2].u;
wr32(c, (RW(29) + 84), RW(0));
c->f[3].u = rd32(c, (RW(17) + 208));
wr32(c, (RW(29) + 76), RW(0));
c->f[2].u = rd32(c, (RW(17) + 212));
wr32(c, (RW(29) + 72), RW(0));
c->f[3].u = c->f[3].u ^ 0x80000000u;
c->f[2].u = c->f[2].u ^ 0x80000000u;
wr32(c, (RW(29) + 88), c->f[3].u);
wr32(c, (RW(29) + 80), c->f[3].u);
wr32(c, (RW(29) + 68), c->f[2].u);
wr32(c, (RW(29) + 64), c->f[2].u); goto L_001A9F54;
L_001A9F08:;
c->f[1].u = c->f[3].u;
SET64(2, (s64)(s32)0x3f000000);
c->f[3].u = rd32(c, (RW(17) + 208));
wr32(c, (RW(29) + 88), RW(0));
c->f[4].u = RW(2);
wr32(c, (RW(29) + 80), RW(0));
c->f[0].u = c->f[2].u;
SET64(2, (s64)(s32)0xbf800000);
wr32(c, (RW(29) + 92), c->f[3].u);
wr32(c, (RW(29) + 84), c->f[3].u);
c->f[3].u = rd32(c, (RW(17) + 212));
c->f[2].u = RW(2);
c->f[3].f = fpu(F(4) * F(3));
c->f[2].f = fpu(F(2) * F(3));
wr32(c, (RW(29) + 76), c->f[3].u);
wr32(c, (RW(29) + 72), c->f[3].u);
wr32(c, (RW(29) + 68), c->f[2].u);
wr32(c, (RW(29) + 64), c->f[2].u);
L_001A9F54:;
wr32(c, (RW(17) + 32), c->f[1].u);
wr32(c, (RW(17) + 36), c->f[0].u);
c->f[12].u = rd32(c, (RW(17) + 204));
SET64(31, 0x1a9f68); SET64(4, RD(17) + RD(0)); F_0014E7A0(c);
SET64(16, RD(0) + RD(0));
SET64(6, RD(16) & 0xffff);
L_001A9F70:;
SET64(3, (s32)rd32(c, (RW(17) + 160)));
SET32(2, RW(6) << 2);
SET32(5, RW(6) << 3);
SET32(4, RW(2) + RW(29));
c->f[1].u = rd32(c, (RW(4) + 80));
SET32(3, RW(3) + RW(5));
c->f[0].u = rd32(c, (RW(4) + 64));
SET64(2, RD(6) & 0x1);
wr32(c, (RW(3) + 0), c->f[1].u);
SET64(3, (s32)rd32(c, (RW(17) + 160)));
SET32(3, RW(3) + RW(5));
{ int t = RSD(6) >= 0; wr32(c, (RW(3) + 4), c->f[0].u); if (t) goto L_001A9FB0; }
if (RD(2) == RD(0)) { SET32(2, RW(2) << 2); goto L_001A9FB4; }
SET32(2, RW(2) + -2);
L_001A9FB0:;
SET32(2, RW(2) << 2);
L_001A9FB4:;
SET64(3, (s32)rd32(c, (RW(17) + 192)));
SET32(4, RW(17) + RW(2));
SET32(18, RW(6) << 4);
c->f[0].u = rd32(c, (RW(4) + 248));
SET32(2, RW(6) >> 1);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + RW(5));
SET32(2, RW(17) + RW(2));
wr32(c, (RW(3) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(2) + 256));
SET64(2, (s32)rd32(c, (RW(17) + 192)));
SET32(2, RW(2) + RW(5));
wr32(c, (RW(2) + 4), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 164)));
c->f[12].u = rd32(c, (RW(17) + 264));
SET64(31, 0x1a9ff8); SET32(4, RW(2) + RW(18)); F_00162D00(c);
SET64(2, (s32)rd32(c, (RW(17) + 164)));
c->f[12].u = rd32(c, (RW(17) + 268));
SET64(31, 0x1aa008); SET32(4, RW(2) + RW(18)); F_00162CF0(c);
SET64(2, (s32)rd32(c, (RW(17) + 164)));
c->f[12].u = rd32(c, (RW(17) + 272));
SET64(31, 0x1aa018); SET32(4, RW(2) + RW(18)); F_00162CE0(c);
SET64(2, (s32)rd32(c, (RW(17) + 164)));
c->f[12].u = rd32(c, (RW(17) + 276));
SET64(31, 0x1aa028); SET32(4, RW(2) + RW(18)); F_00162CD0(c);
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
SET64(2, RSD(16) < (s64)4);
if (RD(2) != RD(0)) { SET64(6, RD(16) & 0xffff); { POLL(); goto L_001A9F70; } }
c->f[0].u = rd32(c, (RW(17) + 216));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1aa04c); wr32(c, (RW(17) + 172), c->f[0].u); F_0014BE80(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}
void F_001A9D20(Ctx *c) { B_001A9D20(c, 0x1a9d20); }
void F_001A9D68(Ctx *c) { B_001A9D20(c, 0x1a9d68); }
void F_001A9DBC(Ctx *c) { B_001A9D20(c, 0x1a9dbc); }
void F_001A9DF0(Ctx *c) { B_001A9D20(c, 0x1a9df0); }
void F_001A9E40(Ctx *c) { B_001A9D20(c, 0x1a9e40); }
void F_001A9E78(Ctx *c) { B_001A9D20(c, 0x1a9e78); }
void F_001A9ECC(Ctx *c) { B_001A9D20(c, 0x1a9ecc); }
void F_001A9F08(Ctx *c) { B_001A9D20(c, 0x1a9f08); }

static void B_001AA070(Ctx *c, u32 entry) { /* func_001AA070 */
ENTER(entry);
switch (entry) { case 0x1aa0a4: goto L_001AA0A4; case 0x1aa0b0: goto L_001AA0B0; case 0x1aa0e4: goto L_001AA0E4; case 0x1aa10c: goto L_001AA10C; case 0x1aa140: goto L_001AA140; case 0x1aa168: goto L_001AA168; case 0x1aa19c: goto L_001AA19C; case 0x1aa1c4: goto L_001AA1C4; case 0x1aa1f8: goto L_001AA1F8; case 0x1aa244: goto L_001AA244; case 0x1aa250: goto L_001AA250; case 0x1aa284: goto L_001AA284; case 0x1aa2a8: goto L_001AA2A8; case 0x1aa2dc: goto L_001AA2DC; case 0x1aa304: goto L_001AA304; case 0x1aa338: goto L_001AA338; case 0x1aa35c: goto L_001AA35C; case 0x1aa390: goto L_001AA390; }
SET64(3, (s32)rd32(c, (RW(4) + 280)));
{ int t = RD(3) == RD(5);  if (t) goto L_001AA3B4; }
SET64(1, RD(3) < (u64)(s64)9);
if (RD(1) == RD(0)) { SET64(1, RD(5) < (u64)(s64)9); goto L_001AA220; }
SET64(6, (s64)(s32)0x490000);
SET32(3, RW(3) << 2);
SET32(6, RW(6) + 23008);
SET32(3, RW(3) + RW(6));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x1aa0a4: goto L_001AA0A4; case 0x1aa0b0: goto L_001AA0B0; case 0x1aa0e4: goto L_001AA0E4; case 0x1aa10c: goto L_001AA10C; case 0x1aa140: goto L_001AA140; case 0x1aa168: goto L_001AA168; case 0x1aa19c: goto L_001AA19C; case 0x1aa1c4: goto L_001AA1C4; case 0x1aa1f8: goto L_001AA1F8; case 0x1aa244: goto L_001AA244; case 0x1aa250: goto L_001AA250; case 0x1aa284: goto L_001AA284; case 0x1aa2a8: goto L_001AA2A8; case 0x1aa2dc: goto L_001AA2DC; case 0x1aa304: goto L_001AA304; case 0x1aa338: goto L_001AA338; case 0x1aa35c: goto L_001AA35C; case 0x1aa390: goto L_001AA390; default: rt_jump(c, t); return; } }
L_001AA0A4:;
c->f[0].u = rd32(c, (RW(4) + 200));
c->f[1].u = rd32(c, (RW(4) + 196)); goto L_001AA21C;
L_001AA0B0:;
c->f[0].u = rd32(c, (RW(4) + 196));
SET64(3, (s64)(s32)0x3f000000);
c->f[3].u = RW(0);
c->f[1].u = rd32(c, (RW(4) + 208));
c->facc = fpu(F(3) + F(0));
c->f[0].u = rd32(c, (RW(4) + 200));
c->f[4].u = RW(3);
c->f[1].f = fpu(c->facc + F(4) * F(1));
c->f[2].u = rd32(c, (RW(4) + 212));
c->facc = fpu(F(3) + F(0));
c->f[0].f = fpu(c->facc + F(4) * F(2)); goto L_001AA21C;
L_001AA0E4:;
c->f[0].u = rd32(c, (RW(4) + 212));
SET64(3, (s64)(s32)0x40000000);
c->f[2].u = RW(3);
c->f[3].u = rd32(c, (RW(4) + 200));
c->f[0].f = fpu_div(F(0), F(2));
c->f[1].u = rd32(c, (RW(4) + 196));
c->f[0].f = fpu(F(3) + F(0)); goto L_001AA21C;
L_001AA10C:;
c->f[0].u = rd32(c, (RW(4) + 196));
SET64(3, (s64)(s32)0x3f000000);
c->f[3].u = RW(0);
c->f[1].u = rd32(c, (RW(4) + 208));
c->facc = fpu(F(3) + F(0));
c->f[0].u = rd32(c, (RW(4) + 200));
c->f[4].u = RW(3);
c->f[1].f = fpu(c->facc - F(4) * F(1));
c->f[2].u = rd32(c, (RW(4) + 212));
c->facc = fpu(F(3) + F(0));
c->f[0].f = fpu(c->facc + F(4) * F(2)); goto L_001AA21C;
L_001AA140:;
c->f[2].u = rd32(c, (RW(4) + 196));
SET64(3, (s64)(s32)0x3f000000);
c->f[4].u = rd32(c, (RW(4) + 208));
c->f[1].u = RW(0);
c->f[0].u = rd32(c, (RW(4) + 200));
c->f[3].u = RW(3);
c->facc = fpu(F(1) + F(2));
c->f[1].f = fpu(c->facc - F(3) * F(4)); goto L_001AA21C;
L_001AA168:;
c->f[0].u = rd32(c, (RW(4) + 196));
SET64(3, (s64)(s32)0x3f000000);
c->f[3].u = RW(0);
c->f[1].u = rd32(c, (RW(4) + 208));
c->facc = fpu(F(3) + F(0));
c->f[0].u = rd32(c, (RW(4) + 200));
c->f[4].u = RW(3);
c->f[1].f = fpu(c->facc - F(4) * F(1));
c->f[2].u = rd32(c, (RW(4) + 212));
c->facc = fpu(F(3) + F(0));
c->f[0].f = fpu(c->facc - F(4) * F(2)); goto L_001AA21C;
L_001AA19C:;
c->f[0].u = rd32(c, (RW(4) + 212));
SET64(3, (s64)(s32)0x40000000);
c->f[2].u = RW(3);
c->f[3].u = rd32(c, (RW(4) + 200));
c->f[0].f = fpu_div(F(0), F(2));
c->f[1].u = rd32(c, (RW(4) + 196));
c->f[0].f = fpu(F(3) - F(0)); goto L_001AA21C;
L_001AA1C4:;
c->f[0].u = rd32(c, (RW(4) + 196));
SET64(3, (s64)(s32)0x3f000000);
c->f[3].u = RW(0);
c->f[1].u = rd32(c, (RW(4) + 208));
c->facc = fpu(F(3) + F(0));
c->f[0].u = rd32(c, (RW(4) + 200));
c->f[4].u = RW(3);
c->f[1].f = fpu(c->facc + F(4) * F(1));
c->f[2].u = rd32(c, (RW(4) + 212));
c->facc = fpu(F(3) + F(0));
c->f[0].f = fpu(c->facc - F(4) * F(2)); goto L_001AA21C;
L_001AA1F8:;
c->f[2].u = rd32(c, (RW(4) + 196));
SET64(3, (s64)(s32)0x3f000000);
c->f[4].u = rd32(c, (RW(4) + 208));
c->f[1].u = RW(0);
c->f[0].u = rd32(c, (RW(4) + 200));
c->f[3].u = RW(3);
c->facc = fpu(F(1) + F(2));
c->f[1].f = fpu(c->facc + F(3) * F(4));
L_001AA21C:;
SET64(1, RD(5) < (u64)(s64)9);
L_001AA220:;
{ int t = RD(1) == RD(0); wr32(c, (RW(4) + 280), RW(5)); if (t) goto L_001AA3B4; }
SET32(3, RW(5) << 2);
SET64(5, (s64)(s32)0x490000);
SET32(5, RW(5) + 22960);
SET32(3, RW(3) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x1aa0a4: goto L_001AA0A4; case 0x1aa0b0: goto L_001AA0B0; case 0x1aa0e4: goto L_001AA0E4; case 0x1aa10c: goto L_001AA10C; case 0x1aa140: goto L_001AA140; case 0x1aa168: goto L_001AA168; case 0x1aa19c: goto L_001AA19C; case 0x1aa1c4: goto L_001AA1C4; case 0x1aa1f8: goto L_001AA1F8; case 0x1aa244: goto L_001AA244; case 0x1aa250: goto L_001AA250; case 0x1aa284: goto L_001AA284; case 0x1aa2a8: goto L_001AA2A8; case 0x1aa2dc: goto L_001AA2DC; case 0x1aa304: goto L_001AA304; case 0x1aa338: goto L_001AA338; case 0x1aa35c: goto L_001AA35C; case 0x1aa390: goto L_001AA390; default: rt_jump(c, t); return; } }
L_001AA244:;
wr32(c, (RW(4) + 196), c->f[1].u);
wr32(c, (RW(4) + 200), c->f[0].u); goto L_001AA3B4;
L_001AA250:;
c->f[4].u = rd32(c, (RW(4) + 208));
SET64(3, (s64)(s32)0x3f000000);
c->f[2].u = RW(0);
c->f[3].u = RW(3);
c->facc = fpu(F(2) + F(1));
c->f[1].f = fpu(c->facc - F(3) * F(4));
c->facc = fpu(F(2) + F(0));
wr32(c, (RW(4) + 196), c->f[1].u);
c->f[0].u = rd32(c, (RW(4) + 212));
c->f[0].f = fpu(c->facc - F(3) * F(0));
wr32(c, (RW(4) + 200), c->f[0].u); goto L_001AA3B4;
L_001AA284:;
wr32(c, (RW(4) + 196), c->f[1].u);
SET64(3, (s64)(s32)0x3f000000);
c->f[3].u = rd32(c, (RW(4) + 212));
c->f[1].u = RW(0);
c->f[2].u = RW(3);
c->facc = fpu(F(1) + F(0));
c->f[0].f = fpu(c->facc - F(2) * F(3));
wr32(c, (RW(4) + 200), c->f[0].u); goto L_001AA3B4;
L_001AA2A8:;
c->f[4].u = rd32(c, (RW(4) + 208));
SET64(3, (s64)(s32)0x3f000000);
c->f[2].u = RW(0);
c->f[3].u = RW(3);
c->facc = fpu(F(2) + F(1));
c->f[1].f = fpu(c->facc + F(3) * F(4));
c->facc = fpu(F(2) + F(0));
wr32(c, (RW(4) + 196), c->f[1].u);
c->f[0].u = rd32(c, (RW(4) + 212));
c->f[0].f = fpu(c->facc - F(3) * F(0));
wr32(c, (RW(4) + 200), c->f[0].u); goto L_001AA3B4;
L_001AA2DC:;
c->f[4].u = rd32(c, (RW(4) + 208));
SET64(3, (s64)(s32)0x3f000000);
c->f[2].u = RW(0);
c->f[3].u = RW(3);
c->facc = fpu(F(2) + F(1));
c->f[1].f = fpu(c->facc + F(3) * F(4));
wr32(c, (RW(4) + 196), c->f[1].u);
wr32(c, (RW(4) + 200), c->f[0].u); goto L_001AA3B4;
L_001AA304:;
c->f[4].u = rd32(c, (RW(4) + 208));
SET64(3, (s64)(s32)0x3f000000);
c->f[2].u = RW(0);
c->f[3].u = RW(3);
c->facc = fpu(F(2) + F(1));
c->f[1].f = fpu(c->facc + F(3) * F(4));
c->facc = fpu(F(2) + F(0));
wr32(c, (RW(4) + 196), c->f[1].u);
c->f[0].u = rd32(c, (RW(4) + 212));
c->f[0].f = fpu(c->facc + F(3) * F(0));
wr32(c, (RW(4) + 200), c->f[0].u); goto L_001AA3B4;
L_001AA338:;
wr32(c, (RW(4) + 196), c->f[1].u);
SET64(3, (s64)(s32)0x3f000000);
c->f[3].u = rd32(c, (RW(4) + 212));
c->f[1].u = RW(0);
c->f[2].u = RW(3);
c->facc = fpu(F(1) + F(0));
c->f[0].f = fpu(c->facc + F(2) * F(3));
wr32(c, (RW(4) + 200), c->f[0].u); goto L_001AA3B4;
L_001AA35C:;
c->f[4].u = rd32(c, (RW(4) + 208));
SET64(3, (s64)(s32)0x3f000000);
c->f[2].u = RW(0);
c->f[3].u = RW(3);
c->facc = fpu(F(2) + F(1));
c->f[1].f = fpu(c->facc - F(3) * F(4));
c->facc = fpu(F(2) + F(0));
wr32(c, (RW(4) + 196), c->f[1].u);
c->f[0].u = rd32(c, (RW(4) + 212));
c->f[0].f = fpu(c->facc + F(3) * F(0));
wr32(c, (RW(4) + 200), c->f[0].u); goto L_001AA3B4;
L_001AA390:;
c->f[4].u = rd32(c, (RW(4) + 208));
SET64(3, (s64)(s32)0x3f000000);
c->f[2].u = RW(0);
c->f[3].u = RW(3);
c->facc = fpu(F(2) + F(1));
c->f[1].f = fpu(c->facc - F(3) * F(4));
wr32(c, (RW(4) + 196), c->f[1].u);
wr32(c, (RW(4) + 200), c->f[0].u);
L_001AA3B4:;
 return;
}
void F_001AA070(Ctx *c) { B_001AA070(c, 0x1aa070); }
void F_001AA0A4(Ctx *c) { B_001AA070(c, 0x1aa0a4); }
void F_001AA0B0(Ctx *c) { B_001AA070(c, 0x1aa0b0); }
void F_001AA0E4(Ctx *c) { B_001AA070(c, 0x1aa0e4); }
void F_001AA10C(Ctx *c) { B_001AA070(c, 0x1aa10c); }
void F_001AA140(Ctx *c) { B_001AA070(c, 0x1aa140); }
void F_001AA168(Ctx *c) { B_001AA070(c, 0x1aa168); }
void F_001AA19C(Ctx *c) { B_001AA070(c, 0x1aa19c); }
void F_001AA1C4(Ctx *c) { B_001AA070(c, 0x1aa1c4); }
void F_001AA1F8(Ctx *c) { B_001AA070(c, 0x1aa1f8); }
void F_001AA244(Ctx *c) { B_001AA070(c, 0x1aa244); }
void F_001AA250(Ctx *c) { B_001AA070(c, 0x1aa250); }
void F_001AA284(Ctx *c) { B_001AA070(c, 0x1aa284); }
void F_001AA2A8(Ctx *c) { B_001AA070(c, 0x1aa2a8); }
void F_001AA2DC(Ctx *c) { B_001AA070(c, 0x1aa2dc); }
void F_001AA304(Ctx *c) { B_001AA070(c, 0x1aa304); }
void F_001AA338(Ctx *c) { B_001AA070(c, 0x1aa338); }
void F_001AA35C(Ctx *c) { B_001AA070(c, 0x1aa35c); }
void F_001AA390(Ctx *c) { B_001AA070(c, 0x1aa390); }

void F_001AA3C0(Ctx *c) { /* func_001AA3C0 */
ENTER(0x1aa3c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1aa3d0);  F_002287B0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001AA3E0(Ctx *c) { /* func_001AA3E0 */
ENTER(0x1aa3e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1aa3f0);  F_00228710(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001AA400(Ctx *c) { /* func_001AA400 */
ENTER(0x1aa400);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1aa410);  F_002285A0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001AA420(Ctx *c) { /* func_001AA420 */
ENTER(0x1aa420);
c->f[0].u = rd32(c, (RW(5) + 132));
wr32(c, (RW(4) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 136));
wr32(c, (RW(4) + 4), c->f[0].u); return;
}

void F_001AA440(Ctx *c) { /* func_001AA440 */
ENTER(0x1aa440);
c->f[1].u = rd32(c, (RW(5) + 0));
c->f[0].u = rd32(c, (RW(5) + 4));
wr32(c, (RW(4) + 132), c->f[1].u);
wr32(c, (RW(4) + 136), c->f[0].u); return;
}

void F_001AA460(Ctx *c) { /* func_001AA460 */
ENTER(0x1aa460);
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 23072); return;
}

void F_001AA470(Ctx *c) { /* func_001AA470 */
ENTER(0x1aa470);
 return;
}

void F_001AA480(Ctx *c) { /* func_001AA480 */
ENTER(0x1aa480);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x1aa498);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001AA4B0(Ctx *c) { /* func_001AA4B0 */
ENTER(0x1aa4b0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -288);
SET32(4, RW(4) + RW(25)); { F_0014BBB0(c); return; }
}

void F_001AA4C0(Ctx *c) { /* func_001AA4C0 */
ENTER(0x1aa4c0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -288);
SET32(4, RW(4) + RW(25)); { F_0014BC10(c); return; }
}

void F_001AA4D0(Ctx *c) { /* func_001AA4D0 */
ENTER(0x1aa4d0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -288);
SET32(4, RW(4) + RW(25)); { F_0014C350(c); return; }
}

void F_001AA4E0(Ctx *c) { /* func_001AA4E0 */
ENTER(0x1aa4e0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -288);
SET32(4, RW(4) + RW(25)); { F_001A9B90(c); return; }
}

void F_001AA4F0(Ctx *c) { /* func_001AA4F0 */
ENTER(0x1aa4f0);
SET32(4, RW(4) + -4); { F_001A0E60(c); return; }
}

void F_001AA500(Ctx *c) { /* func_001AA500 */
ENTER(0x1aa500);
SET32(4, RW(4) + -24); { F_001A0E60(c); return; }
}

void F_001AA510(Ctx *c) { /* func_001AA510 */
ENTER(0x1aa510);
SET32(4, RW(4) + -60); { F_001A0E60(c); return; }
}

void F_001AA520(Ctx *c) { /* func_001AA520 */
ENTER(0x1aa520);
SET32(4, RW(4) + -4); { F_001A7360(c); return; }
}

void F_001AA530(Ctx *c) { /* func_001AA530 */
ENTER(0x1aa530);
SET32(4, RW(4) + -24); { F_001A7360(c); return; }
}

void F_001AA540(Ctx *c) { /* func_001AA540 */
ENTER(0x1aa540);
SET32(4, RW(4) + -60); { F_001A7360(c); return; }
}

void F_001AA550(Ctx *c) { /* func_001AA550 */
ENTER(0x1aa550);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aa570); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
SET64(5, RD(0) < RD(2));
SET64(31, 0x1aa57c); SET64(4, RD(16) + RD(0)); F_0019E700(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001AA590(Ctx *c) { /* func_001AA590 */
ENTER(0x1aa590);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aa5c8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x3f800000);
c->f[20].u = RW(2);
{ int t = RD(17) == RD(0);  if (t) goto L_001AA5F8; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aa5f0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[22].u = c->f[0].u;
L_001AA5F8:;
{ int t = RD(17) == RD(0);  if (t) goto L_001AA618; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aa610); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[21].u = c->f[0].u;
L_001AA618:;
if (RD(17) == RD(0)) { SET32(2, RW(16) << 2); goto L_001AA638; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aa630); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
SET32(2, RW(16) << 2);
L_001AA638:;
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 1360)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_001AA65C; }
c->f[12].u = c->f[20].u;
c->f[13].u = c->f[22].u;
SET64(31, 0x1aa658); c->f[14].u = c->f[21].u; F_001A8F80(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_001AA65C:;
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 80); return;
}

void F_001AA680(Ctx *c) { /* func_001AA680 */
ENTER(0x1aa680);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aa6ac); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(18, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aa6c4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aa6d8); SET64(17, RD(2) + RD(0)); rt_call(c, t); }
SET32(4, RW(18) << 1);
SET32(3, RW(17) << 1);
SET32(4, RW(4) + RW(18));
SET32(3, RW(3) + RW(17));
SET32(4, RW(4) << 4);
SET32(3, RW(3) << 1);
SET32(4, RW(4) + RW(3));
SET32(2, RW(2) + RW(4));
SET32(3, RW(0) + 1);
SET64(4, RD(2) & 0x1f);
SET32(2, RSW(2) >> 5);
SET32(5, RW(3) << (RW(4) & 31));
SET32(2, RW(2) << 2);
SET32(4, RW(2) + RW(16));
SET64(3, (s32)rd32(c, (RW(4) + 1048)));
SET64(2, RD(0) + RD(0));
SET64(3, RD(3) | RD(5));
wr32(c, (RW(4) + 1048), RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001AA740(Ctx *c) { /* func_001AA740 */
ENTER(0x1aa740);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1aa750);  F_001A13F0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_001AA760(Ctx *c) { /* func_001AA760 */
ENTER(0x1aa760);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
SET64(16, RD(5) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aa794); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aa7ac); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
c->f[21].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aa7c4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aa7d8); c->f[20].u = c->f[0].u; rt_call(c, t); }
SET64(4, RD(17) + RD(0));
c->f[12].u = c->f[22].u;
c->f[13].u = c->f[21].u;
c->f[14].u = c->f[20].u;
SET64(31, 0x1aa7f0); c->f[15].u = c->f[0].u; F_001A1450(c);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 64); return;
}

void F_001AA820(Ctx *c) { /* func_001AA820 */
ENTER(0x1aa820);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aa840); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(31, 0x1aa84c); SET64(5, RD(2) + RD(0)); F_0019EAC0(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001AA860(Ctx *c) { /* func_001AA860 */
ENTER(0x1aa860);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aa888); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aa89c); SET64(16, RD(2) + RD(0)); rt_call(c, t); }
SET64(6, RD(0) < RD(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1aa8ac); SET64(5, RD(16) + RD(0)); F_0019EBD0(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001AA8D0(Ctx *c) { /* func_001AA8D0 */
ENTER(0x1aa8d0);
SET64(2, RD(0) + RD(0)); return;
}

void F_001AA8E0(Ctx *c) { /* func_001AA8E0 */
ENTER(0x1aa8e0);
SET32(29, RW(29) + -112);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
wr32(c, (RW(29) + 108), RW(2));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aa92c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(18, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aa944); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aa95c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[21].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aa974); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aa988); c->f[20].u = c->f[0].u; rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(29) + 80), c->f[22].u);
wr32(c, (RW(29) + 92), RW(2));
wr32(c, (RW(29) + 84), c->f[21].u);
SET64(5, RD(18) + RD(0));
wr32(c, (RW(29) + 88), c->f[20].u);
SET32(6, RW(29) + 96);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
c->f[12].u = c->f[0].u;
SET64(31, 0x1aa9b8); wr128(c, (RW(29) + 96) & ~15u, &c->r[2]); F_0019EC20(c);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 5); goto L_001AA9C4; }
SET64(2, RD(0) + RD(0));
L_001AA9C4:;
SET64(31, rd64(c, (RW(29) + 64)));
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001AA9F0(Ctx *c) { /* func_001AA9F0 */
ENTER(0x1aa9f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aaa18); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aaa2c); SET64(16, RD(2) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x1aaa3c); SET64(6, RD(2) + RD(0)); F_0019EE90(c);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 5); goto L_001AAA48; }
SET64(2, RD(0) + RD(0));
L_001AAA48:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001AAA60(Ctx *c) { /* func_001AAA60 */
ENTER(0x1aaa60);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 64), RW(0));
SET64(16, RD(5) + RD(0));
wr32(c, (RW(29) + 68), RW(0));
wr32(c, (RW(29) + 72), RW(0));
wr32(c, (RW(29) + 76), RW(2));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aaaa0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(16) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001AAAE8; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aaac0); SET64(17, RD(17) | 0x2); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aaad4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aaae8);  rt_call(c, t); }
L_001AAAE8:;
SET32(7, RW(29) + 64);
SET64(4, RD(18) + RD(0));
SET64(6, RD(17) + RD(0));
SET32(5, RW(0) + 3);
c->f[12].u = RW(0);
SET64(31, 0x1aab04); SET64(8, RD(7) + RD(0)); F_0019F130(c);
SET64(31, rd64(c, (RW(29) + 48)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001AAB20(Ctx *c) { /* func_001AAB20 */
ENTER(0x1aab20);
SET32(29, RW(29) + -160);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 24), c->f[26].u);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(29) + 20), c->f[25].u);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
wr32(c, (RW(29) + 144), RW(0));
c->f[20].u = RW(0);
wr32(c, (RW(29) + 148), RW(0));
c->f[21].u = c->f[20].u;
wr32(c, (RW(29) + 152), RW(0));
c->f[22].u = c->f[20].u;
wr32(c, (RW(29) + 128), RW(0));
c->f[23].u = c->f[20].u;
wr32(c, (RW(29) + 132), RW(0));
c->f[24].u = c->f[20].u;
wr32(c, (RW(29) + 156), RW(2));
c->f[25].u = c->f[20].u;
wr32(c, (RW(29) + 140), RW(2));
wr32(c, (RW(29) + 136), RW(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aaba8); c->f[26].u = c->f[20].u; rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
{ int t = RD(18) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001AAC58; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aabc8); SET64(16, RD(16) | 0x2); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[26].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aabe0); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[25].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aabf8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[24].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aac10); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[23].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aac28); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aac40); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aac54); c->f[21].u = c->f[0].u; rt_call(c, t); }
c->f[20].u = c->f[0].u;
L_001AAC58:;
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(29) + 112), c->f[26].u);
wr32(c, (RW(29) + 124), RW(2));
wr32(c, (RW(29) + 116), c->f[25].u);
wr32(c, (RW(29) + 108), RW(2));
wr32(c, (RW(29) + 120), c->f[24].u);
SET64(6, RD(16) + RD(0));
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 96), c->f[23].u);
wr32(c, (RW(29) + 100), c->f[22].u);
SET32(5, RW(0) + 2);
wr32(c, (RW(29) + 104), c->f[21].u);
SET32(7, RW(29) + 144);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
c->f[12].u = c->f[20].u;
SET32(8, RW(29) + 128);
wr128(c, (RW(29) + 144) & ~15u, &c->r[3]);
SET64(31, 0x1aaca8); wr128(c, (RW(29) + 128) & ~15u, &c->r[2]); F_0019F130(c);
SET64(31, rd64(c, (RW(29) + 80)));
c->f[26].u = rd32(c, (RW(29) + 24));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[25].u = rd32(c, (RW(29) + 20));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[23].u = rd32(c, (RW(29) + 12));
c->f[22].u = rd32(c, (RW(29) + 8));
SET64(2, RD(0) + RD(0));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 160); return;
}

void F_001AACE0(Ctx *c) { /* func_001AACE0 */
ENTER(0x1aace0);
SET32(29, RW(29) + -160);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 20), c->f[25].u);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
wr32(c, (RW(29) + 144), RW(0));
c->f[20].u = RW(0);
wr32(c, (RW(29) + 148), RW(0));
c->f[21].u = c->f[20].u;
wr32(c, (RW(29) + 152), RW(0));
c->f[22].u = c->f[20].u;
wr32(c, (RW(29) + 128), RW(0));
c->f[23].u = c->f[20].u;
wr32(c, (RW(29) + 132), RW(0));
c->f[24].u = c->f[20].u;
wr32(c, (RW(29) + 156), RW(2));
wr32(c, (RW(29) + 140), RW(2));
wr32(c, (RW(29) + 136), RW(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aad60); c->f[25].u = c->f[20].u; rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
{ int t = RD(18) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001AADF8; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aad80); SET64(16, RD(16) | 0x2); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[25].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aad98); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[24].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aadb0); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[23].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aadc8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aade0); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aadf4); c->f[21].u = c->f[0].u; rt_call(c, t); }
c->f[20].u = c->f[0].u;
L_001AADF8:;
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(29) + 112), c->f[25].u);
wr32(c, (RW(29) + 124), RW(2));
wr32(c, (RW(29) + 116), c->f[24].u);
wr32(c, (RW(29) + 108), RW(2));
wr32(c, (RW(29) + 120), c->f[23].u);
SET64(6, RD(16) + RD(0));
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 96), c->f[22].u);
wr32(c, (RW(29) + 100), c->f[21].u);
SET32(5, RW(0) + 1);
wr32(c, (RW(29) + 104), c->f[20].u);
SET32(7, RW(29) + 144);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
c->f[12].u = RW(0);
SET32(8, RW(29) + 128);
wr128(c, (RW(29) + 144) & ~15u, &c->r[3]);
SET64(31, 0x1aae48); wr128(c, (RW(29) + 128) & ~15u, &c->r[2]); F_0019F130(c);
SET64(31, rd64(c, (RW(29) + 80)));
c->f[25].u = rd32(c, (RW(29) + 20));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
SET64(2, RD(0) + RD(0));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 160); return;
}

void F_001AAE80(Ctx *c) { /* func_001AAE80 */
ENTER(0x1aae80);
SET32(29, RW(29) + -96);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 84), RW(0));
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 92), RW(2));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aaec8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aaee0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[21].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aaef8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[20].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aaf10); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aaf24); SET64(17, RD(2) + RD(0)); rt_call(c, t); }
SET64(7, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x3f800000);
SET64(6, RD(17) + RD(0));
wr32(c, (RW(29) + 64), c->f[22].u);
wr32(c, (RW(29) + 76), RW(2));
wr32(c, (RW(29) + 68), c->f[21].u);
SET32(5, RW(29) + 80);
wr32(c, (RW(29) + 72), c->f[20].u);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
SET64(31, 0x1aaf54); wr128(c, (RW(29) + 80) & ~15u, &c->r[2]); F_0019F3C0(c);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 96); return;
}

void F_001AAF80(Ctx *c) { /* func_001AAF80 */
ENTER(0x1aaf80);
SET32(29, RW(29) + -144);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 20), c->f[25].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 140), RW(2));
wr32(c, (RW(29) + 124), RW(2));
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aafe4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[25].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aaffc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[24].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab014); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[23].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab02c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab044); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[21].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab05c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab070); c->f[20].u = c->f[0].u; rt_call(c, t); }
SET64(7, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x3f800000);
SET32(5, RW(29) + 128);
wr32(c, (RW(29) + 96), c->f[25].u);
wr32(c, (RW(29) + 108), RW(2));
wr32(c, (RW(29) + 100), c->f[24].u);
wr32(c, (RW(29) + 92), RW(2));
wr32(c, (RW(29) + 104), c->f[23].u);
SET32(6, RW(29) + 112);
rd128(c, (RW(29) + 96) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 80), c->f[22].u);
wr32(c, (RW(29) + 84), c->f[21].u);
wr32(c, (RW(29) + 88), c->f[20].u);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[3]);
SET64(31, 0x1ab0b8); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); F_0019F5D0(c);
SET64(31, rd64(c, (RW(29) + 64)));
c->f[25].u = rd32(c, (RW(29) + 20));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[23].u = rd32(c, (RW(29) + 12));
c->f[22].u = rd32(c, (RW(29) + 8));
SET64(2, RD(0) + RD(0));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 144); return;
}

void F_001AB0F0(Ctx *c) { /* func_001AB0F0 */
ENTER(0x1ab0f0);
SET32(29, RW(29) + -144);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 16), c->f[24].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 140), RW(2));
wr32(c, (RW(29) + 124), RW(2));
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab150); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[24].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab168); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[23].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab180); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab198); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[21].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab1b0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab1c4); c->f[20].u = c->f[0].u; rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(29) + 96), c->f[24].u);
wr32(c, (RW(29) + 108), RW(2));
wr32(c, (RW(29) + 100), c->f[23].u);
wr32(c, (RW(29) + 92), RW(2));
wr32(c, (RW(29) + 104), c->f[22].u);
SET32(5, RW(29) + 128);
rd128(c, (RW(29) + 96) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 80), c->f[21].u);
wr32(c, (RW(29) + 84), c->f[20].u);
SET32(6, RW(29) + 112);
wr32(c, (RW(29) + 88), c->f[0].u);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[3]);
SET64(31, 0x1ab208); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); F_0019F6A0(c);
SET64(31, rd64(c, (RW(29) + 64)));
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
SET64(2, RD(0) + RD(0));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 144); return;
}

void F_001AB240(Ctx *c) { /* func_001AB240 */
ENTER(0x1ab240);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab260); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(31, 0x1ab26c); SET64(5, RD(2) + RD(0)); F_0019F960(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001AB280(Ctx *c) { /* func_001AB280 */
ENTER(0x1ab280);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab2a8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab2bc); SET64(16, RD(2) + RD(0)); rt_call(c, t); }
SET64(6, RD(0) < RD(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1ab2cc); SET64(5, RD(16) + RD(0)); F_0019FBB0(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001AB2F0(Ctx *c) { /* func_001AB2F0 */
ENTER(0x1ab2f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab318); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab32c); SET64(16, RD(2) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x1ab33c); SET64(6, RD(2) + RD(0)); F_0019FA70(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001AB360(Ctx *c) { /* func_001AB360 */
ENTER(0x1ab360);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab38c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
SET64(17, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab3a4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab3b8); SET64(16, RD(2) + RD(0)); rt_call(c, t); }
c->f[0].u = RW(2);
SET64(4, RD(18) + RD(0));
c->f[12].f = (f32)(s32)c->f[0].u;
SET64(5, RD(17) + RD(0));
SET64(31, 0x1ab3d0); SET64(6, RD(16) + RD(0)); F_0019FAE0(c);
SET64(31, rd64(c, (RW(29) + 48)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001AB3F0(Ctx *c) { /* func_001AB3F0 */
ENTER(0x1ab3f0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab41c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
SET64(17, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab434); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab448); SET64(16, RD(2) + RD(0)); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x1ab45c); SET64(7, RD(2) + RD(0)); F_0019FB80(c);
SET64(31, rd64(c, (RW(29) + 48)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001AB480(Ctx *c) { /* func_001AB480 */
ENTER(0x1ab480);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab4a8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab4bc); SET64(16, RD(2) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x1ab4cc); SET64(6, RD(2) + RD(0)); F_0019FC60(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001AB4F0(Ctx *c) { /* func_001AB4F0 */
ENTER(0x1ab4f0);
SET32(29, RW(29) + -112);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
wr32(c, (RW(29) + 108), RW(2));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab53c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(18, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab554); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab56c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[21].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab584); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab598); c->f[20].u = c->f[0].u; rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(29) + 80), c->f[22].u);
wr32(c, (RW(29) + 92), RW(2));
wr32(c, (RW(29) + 84), c->f[21].u);
SET64(5, RD(18) + RD(0));
wr32(c, (RW(29) + 88), c->f[20].u);
SET32(6, RW(29) + 96);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
c->f[12].u = c->f[0].u;
SET64(31, 0x1ab5c8); wr128(c, (RW(29) + 96) & ~15u, &c->r[2]); F_0019FD50(c);
SET64(31, rd64(c, (RW(29) + 64)));
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 112); return;
}

void F_001AB5F0(Ctx *c) { /* func_001AB5F0 */
ENTER(0x1ab5f0);
SET32(29, RW(29) + -112);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
wr32(c, (RW(29) + 108), RW(2));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab63c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(18, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab654); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[22].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab66c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[21].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab684); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ab698); c->f[20].u = c->f[0].u; rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(29) + 80), c->f[22].u);
wr32(c, (RW(29) + 92), RW(2));
wr32(c, (RW(29) + 84), c->f[21].u);
SET64(5, RD(18) + RD(0));
wr32(c, (RW(29) + 88), c->f[20].u);
SET32(6, RW(29) + 96);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
c->f[12].u = c->f[0].u;
SET64(7, RD(0) + RD(0));
SET64(31, 0x1ab6cc); wr128(c, (RW(29) + 96) & ~15u, &c->r[2]); F_0019FDD0(c);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 5); goto L_001AB6D8; }
SET64(2, RD(0) + RD(0));
L_001AB6D8:;
SET64(31, rd64(c, (RW(29) + 64)));
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001AB700(Ctx *c) { /* func_001AB700 */
ENTER(0x1ab700);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab738); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(16) + 4)));
SET64(19, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab750); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(4) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001AB77C; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1ab76c);  rt_call(c, t); }
SET64(4, RD(2) + RD(0));
SET64(31, 0x1ab778); SET64(5, RD(0) + RD(0)); F_00157370(c);
SET64(18, RD(2) + RD(0));
L_001AB77C:;
SET64(6, RD(16) & 0xffff);
SET64(4, RD(20) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x1ab790); SET64(7, RD(18) + RD(0)); F_001A0350(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001AB79C; }
SET32(2, RW(0) + 5);
L_001AB79C:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001AB7C0(Ctx *c) { /* func_001AB7C0 */
ENTER(0x1ab7c0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 76), RW(0));
{ int t = RD(17) == RD(0); SET32(16, RW(0) + -1); if (t) goto L_001AB80C; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1ab7f8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(2) + RD(0));
SET64(31, 0x1ab804); SET64(5, RD(0) + RD(0)); F_00157370(c);
wr32(c, (RW(29) + 76), RW(2));
SET64(17, (s32)rd32(c, (RW(17) + 4)));
L_001AB80C:;
if (RD(17) == RD(0)) { SET64(2, (s32)rd32(c, (RW(29) + 76))); goto L_001AB82C; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab824); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 76)));
L_001AB82C:;
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_001AB848; }
SET64(4, RD(18) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x1ab844); SET32(5, RW(29) + 76); F_001A21D0(c);
SET64(31, rd64(c, (RW(29) + 48)));
L_001AB848:;
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001AB860(Ctx *c) { /* func_001AB860 */
ENTER(0x1ab860);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
{ int t = RD(19) == RD(0); SET32(16, RW(0) + -1); if (t) goto L_001AB8AC; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab8a4); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
SET64(18, RD(2) + RD(0));
L_001AB8AC:;
{ int t = RD(19) == RD(0);  if (t) goto L_001AB8CC; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab8c4); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
SET64(17, RD(2) + RD(0));
L_001AB8CC:;
if (RD(19) == RD(0)) { SET64(4, RD(20) + RD(0)); goto L_001AB8EC; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab8e4); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(4, RD(20) + RD(0));
L_001AB8EC:;
SET64(5, RD(18) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x1ab8fc); SET64(7, RD(16) + RD(0)); F_001A2560(c);
SET64(31, rd64(c, (RW(29) + 80)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001AB920(Ctx *c) { /* func_001AB920 */
ENTER(0x1ab920);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(0) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(19, RW(0) + 127);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(18, RW(0) + 64);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
{ int t = RD(21) == RD(0); SET32(16, RW(0) + -1); if (t) goto L_001AB97C; }
SET64(25, (s32)rd32(c, (RW(21) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab974); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
SET64(21, (s32)rd32(c, (RW(21) + 4)));
SET64(20, RD(2) + RD(0));
L_001AB97C:;
{ int t = RD(21) == RD(0);  if (t) goto L_001AB99C; }
SET64(25, (s32)rd32(c, (RW(21) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab994); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
SET64(21, (s32)rd32(c, (RW(21) + 4)));
SET64(19, RD(2) + RD(0));
L_001AB99C:;
{ int t = RD(21) == RD(0);  if (t) goto L_001AB9BC; }
SET64(25, (s32)rd32(c, (RW(21) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab9b4); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
SET64(21, (s32)rd32(c, (RW(21) + 4)));
SET64(18, RD(2) + RD(0));
L_001AB9BC:;
{ int t = RD(21) == RD(0);  if (t) goto L_001AB9DC; }
SET64(25, (s32)rd32(c, (RW(21) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab9d4); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
SET64(21, (s32)rd32(c, (RW(21) + 4)));
SET64(17, RD(2) + RD(0));
L_001AB9DC:;
if (RD(21) == RD(0)) { SET64(4, RD(22) + RD(0)); goto L_001AB9FC; }
SET64(25, (s32)rd32(c, (RW(21) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ab9f4); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(4, RD(22) + RD(0));
L_001AB9FC:;
SET64(5, RD(20) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(18) + RD(0));
SET64(8, RD(17) + RD(0));
SET64(31, 0x1aba14); SET64(9, RD(16) + RD(0)); F_001A2620(c);
SET64(31, rd64(c, (RW(29) + 112)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_001ABA40(Ctx *c) { /* func_001ABA40 */
ENTER(0x1aba40);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = RW(2);
{ int t = RD(17) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_001ABA88; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aba80); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[20].u = c->f[0].u;
L_001ABA88:;
if (RD(17) == RD(0)) { SET32(2, RW(0) + 1); goto L_001ABAA8; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1abaa0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + 1);
L_001ABAA8:;
if (RD(16) != RD(2)) { SET64(4, RD(18) + RD(0)); goto L_001ABAC4; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x1ababc); SET32(5, RW(0) + 2); F_001A22B0(c);
SET64(31, rd64(c, (RW(29) + 64))); goto L_001ABAD0;
L_001ABAC4:;
SET64(31, 0x1abacc); c->f[12].u = c->f[20].u; F_001A22D0(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_001ABAD0:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001ABAF0(Ctx *c) { /* func_001ABAF0 */
ENTER(0x1abaf0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET32(16, RW(0) + 1);
c->f[20].u = RW(0);
{ int t = RD(17) == RD(0); wr32(c, (RW(29) + 92), RW(0)); if (t) goto L_001ABB44; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1abb30); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(2) + RD(0));
SET64(31, 0x1abb3c); SET64(5, RD(0) + RD(0)); F_00157370(c);
wr32(c, (RW(29) + 92), RW(2));
SET64(17, (s32)rd32(c, (RW(17) + 4)));
L_001ABB44:;
{ int t = RD(17) == RD(0);  if (t) goto L_001ABB64; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1abb5c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(16, RD(2) + RD(0));
L_001ABB64:;
if (RD(17) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_001ABB84; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1abb7c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
SET64(4, RD(18) + RD(0));
L_001ABB84:;
SET64(6, RD(16) + RD(0));
c->f[12].u = c->f[20].u;
SET64(31, 0x1abb94); SET32(5, RW(29) + 92); F_001A2360(c);
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001ABBC0(Ctx *c) { /* func_001ABBC0 */
ENTER(0x1abbc0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1abbe0); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 1360)));
{ int t = RD(4) == RD(0); SET32(16, RW(2) + 1360); if (t) goto L_001ABC04; }
SET64(31, 0x1abbfc);  F_001A94E0(c);
SET64(31, 0x1abc04); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_001A94C0(c);
L_001ABC04:;
SET64(31, rd64(c, (RW(29) + 16)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001ABC20(Ctx *c) { /* func_001ABC20 */
ENTER(0x1abc20);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1abc58); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[20].u = RW(0);
SET64(18, RD(2) + RD(0));
SET64(17, RD(0) + RD(0));
{ int t = RD(19) == RD(0); c->f[21].u = c->f[20].u; if (t) goto L_001ABC88; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1abc80); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
SET64(17, RD(2) + RD(0));
L_001ABC88:;
{ int t = RD(19) == RD(0);  if (t) goto L_001ABCA8; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1abca0); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[21].u = c->f[0].u;
L_001ABCA8:;
if (RD(19) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001ABCC8; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1abcc0); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
SET64(4, RD(16) + RD(0));
L_001ABCC8:;
SET64(31, 0x1abcd0); SET64(5, RD(18) + RD(0)); F_001A0C70(c);
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_001ABD74; }
SET64(2, (s64)(s32)0xbf800000);
c->f[0].u = RW(2);
c->fcc = F(0) == F(21);
{ int t = c->fcc;  if (t) goto L_001ABD1C; }
c->fcc = F(0) == F(20);
{ int t = c->fcc;  if (t) goto L_001ABD1C; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x1abd08); SET64(5, RD(18) + RD(0)); F_001A0C70(c);
SET64(4, RD(2) + RD(0));
SET32(5, RW(0) + -1);
c->f[12].u = c->f[21].u;
SET64(31, 0x1abd1c); c->f[13].u = c->f[20].u; F_001A91A0(c);
L_001ABD1C:;
if (RD(17) != RD(0)) { SET32(2, RW(18) << 2); goto L_001ABD4C; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x1abd30); SET64(5, RD(0) + RD(0)); F_001A0CA0(c);
SET32(3, RW(18) << 2);
SET64(5, RD(2) + RD(0));
SET32(2, RW(3) + RW(16));
SET64(31, 0x1abd44); SET64(4, (s32)rd32(c, (RW(2) + 1360))); F_001A9510(c);
 goto L_001ABD70;
L_001ABD4C:;
SET64(4, RD(16) + RD(0));
SET32(2, RW(2) + RW(16));
SET32(16, RW(2) + 1360);
SET64(2, (s32)rd32(c, (RW(2) + 1360)));
SET64(31, 0x1abd64); SET64(5, (s32)rd32(c, (RW(2) + 216))); F_001A0CA0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1abd70); SET64(5, RD(2) + RD(0)); F_001A9510(c);
L_001ABD70:;
SET64(31, rd64(c, (RW(29) + 80)));
L_001ABD74:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001ABDA0(Ctx *c) { /* func_001ABDA0 */
ENTER(0x1abda0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1abdb0);  F_001ADF40(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001ABDC0(Ctx *c) { /* func_001ABDC0 */
ENTER(0x1abdc0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1abdf4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(16, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1abe0c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
SET64(20, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1abe24); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1abe38); SET64(19, RD(2) + RD(0)); rt_call(c, t); }
SET64(18, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1abe48); SET64(5, RD(20) + RD(0)); F_001A0680(c);
if (RD(2) != RD(0)) { SET64(4, RD(17) + RD(0)); goto L_001ABE58; }
SET32(2, RW(0) + 5); goto L_001ABE94;
L_001ABE58:;
SET64(31, 0x1abe60); SET64(5, RD(16) + RD(0)); F_001A0C80(c);
if (RD(2) == RD(0)) { SET64(5, RD(20) + RD(0)); goto L_001ABE70; }
SET64(2, RD(0) + RD(0)); goto L_001ABE94;
L_001ABE70:;
SET64(6, RD(19) + RD(0));
SET64(31, 0x1abe7c); SET64(4, RD(17) + RD(0)); F_001A0650(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(31, 0x1abe90); SET64(7, RD(18) + RD(0)); F_001A08E0(c);
SET64(2, RD(0) + RD(0));
L_001ABE94:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001ABEC0(Ctx *c) { /* func_001ABEC0 */
ENTER(0x1abec0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1abee4); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1abef4); SET64(5, RD(16) + RD(0)); F_001A0600(c);
if (RD(2) != RD(0)) { SET64(4, RD(17) + RD(0)); goto L_001ABF04; }
SET32(2, RW(0) + 5); goto L_001ABF10;
L_001ABF04:;
SET64(31, 0x1abf0c); SET64(5, RD(16) + RD(0)); F_001A05A0(c);
SET64(2, RD(0) + RD(0));
L_001ABF10:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001ABF30(Ctx *c) { /* func_001ABF30 */
ENTER(0x1abf30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1abf58); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(16, RD(2) + RD(0));
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_001ABF84; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1abf78);  rt_call(c, t); }
SET64(4, RD(2) + RD(0));
SET64(31, 0x1abf84); SET64(5, RD(0) + RD(0)); F_00157370(c);
L_001ABF84:;
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x1abf94); SET64(6, RD(2) + RD(0)); F_001A0740(c);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 2); goto L_001ABFA0; }
SET64(2, RD(0) + RD(0));
L_001ABFA0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001ABFC0(Ctx *c) { /* func_001ABFC0 */
ENTER(0x1abfc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1abfe4); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
SET64(31, 0x1abff0); SET64(4, RD(16) + RD(0)); F_001CB090(c);
SET64(2, (s64)(s32)0x447a0000);
c->f[1].u = RW(2);
c->f[1].f = fpu(F(1) * F(20));
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(4, RD(16) + RD(0)); goto L_001AC014; }
SET32(2, RW(0) + 5); goto L_001AC0A8;
L_001AC014:;
SET64(31, 0x1ac01c);  F_001A16E0(c);
if (RD(2) != RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001AC04C; }
SET64(31, 0x1ac02c);  F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x1ac038); SET64(5, RD(0) + RD(0)); F_0013E020(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x4000);
{ int t = RD(2) != RD(0);  if (t) goto L_001AC05C; }
SET64(4, RD(16) + RD(0));
L_001AC04C:;
SET64(31, 0x1ac054);  F_001A1600(c);
SET32(2, RW(0) + 5); goto L_001AC0A8;
L_001AC05C:;
SET64(31, 0x1ac064);  F_00139590(c);
SET64(31, 0x1ac06c);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 6);
SET32(6, RW(0) + 127);
SET64(31, 0x1ac080); SET32(7, RW(0) + 64); F_001B5FF0(c);
SET64(31, 0x1ac088); SET64(4, RD(16) + RD(0)); F_001A20C0(c);
SET64(31, 0x1ac090); SET64(4, RD(16) + RD(0)); F_001A16A0(c);
c->f[12].u = RW(0);
SET64(31, 0x1ac09c); SET64(4, RD(16) + RD(0)); F_001CB020(c);
SET64(31, 0x1ac0a4); SET64(4, RD(16) + RD(0)); F_001A1020(c);
SET64(2, RD(0) + RD(0));
L_001AC0A8:;
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001AC0C0(Ctx *c) { /* func_001AC0C0 */
ENTER(0x1ac0c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1ac0d4); SET64(16, RD(4) + RD(0)); F_001A0D60(c);
if (RD(2) != RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001AC0E4; }
SET32(2, RW(0) + 5); goto L_001AC114;
L_001AC0E4:;
SET64(31, 0x1ac0ec);  F_0019E740(c);
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001AC0FC; }
SET32(2, RW(0) + 5); goto L_001AC114;
L_001AC0FC:;
c->f[12].u = RW(0);
SET64(31, 0x1ac108);  F_001CB020(c);
SET64(31, 0x1ac110);  F_002E1CC0(c);
SET64(2, RD(0) + RD(0));
L_001AC114:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001AC130(Ctx *c) { /* func_001AC130 */
ENTER(0x1ac130);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ac154); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
SET64(31, 0x1ac160); SET64(4, RD(16) + RD(0)); F_001CB090(c);
SET64(2, (s64)(s32)0x447a0000);
c->f[1].u = RW(2);
c->f[1].f = fpu(F(1) * F(20));
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(4, RD(16) + RD(0)); goto L_001AC184; }
SET32(2, RW(0) + 5); goto L_001AC194;
L_001AC184:;
c->f[12].u = RW(0);
SET64(31, 0x1ac190);  F_001CB020(c);
SET64(2, RD(0) + RD(0));
L_001AC194:;
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001AC1B0(Ctx *c) { /* func_001AC1B0 */
ENTER(0x1ac1b0);
SET32(29, RW(29) + -112);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 64), RD(31));
SET64(3, (s64)(s32)0x3f0000);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
c->f[1].u = rd32(c, (RW(2) + -32496));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
c->f[0].u = rd32(c, (RW(3) + -32492));
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x3f0000);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
c->f[2].u = rd32(c, (RW(2) + -32488));
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(29) + 80), c->f[1].u);
wr32(c, (RW(29) + 84), c->f[0].u);
SET64(2, (s64)(s32)0x3f0000);
c->f[0].u = rd32(c, (RW(2) + -32480));
c->f[1].u = rd32(c, (RW(3) + -32484));
wr32(c, (RW(29) + 88), c->f[2].u);
SET64(2, (s64)(s32)0x3f0000);
wr32(c, (RW(29) + 92), c->f[1].u);
c->f[1].u = rd32(c, (RW(2) + -32476));
wr32(c, (RW(29) + 96), c->f[0].u);
SET64(2, (s64)(s32)0x3f0000);
c->f[0].u = rd32(c, (RW(2) + -32472));
wr32(c, (RW(29) + 100), c->f[1].u);
{ u32 t = RW(25); SET64(31, 0x1ac234); wr32(c, (RW(29) + 104), c->f[0].u); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
SET64(18, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ac24c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ac260); c->f[20].u = c->f[0].u; rt_call(c, t); }
SET32(2, RW(18) << 2);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + RW(29));
SET64(5, (s32)rd32(c, (RW(2) + 80)));
c->f[12].u = c->f[20].u;
SET64(31, 0x1ac27c); c->f[13].u = c->f[0].u; F_001A0DA0(c);
c->f[12].u = RW(0);
SET64(31, 0x1ac288); SET64(4, RD(17) + RD(0)); F_001CB020(c);
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001AC2B0(Ctx *c) { /* func_001AC2B0 */
ENTER(0x1ac2b0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(5) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ac2e0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
c->f[21].u = c->f[0].u;
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ac2f8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ac30c); c->f[20].u = c->f[0].u; rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(29) + 72), c->f[0].u);
SET32(5, RW(29) + 64);
wr32(c, (RW(29) + 76), RW(2));
wr32(c, (RW(29) + 64), c->f[21].u);
SET64(31, 0x1ac32c); wr32(c, (RW(29) + 68), c->f[20].u); F_001A0DC0(c);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 80); return;
}

void F_001AC350(Ctx *c) { /* func_001AC350 */
ENTER(0x1ac350);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ac374); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 1616)));
{ int t = RD(4) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001AC390; }
SET64(31, 0x1ac388);  F_001A94E0(c);
SET64(31, 0x1ac390); SET64(4, (s32)rd32(c, (RW(17) + 1616))); F_001A94C0(c);
L_001AC390:;
SET64(4, (s32)rd32(c, (RW(17) + 1620)));
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_001AC3B0; }
SET64(31, 0x1ac3a4);  F_001A94E0(c);
SET64(31, 0x1ac3ac); SET64(4, (s32)rd32(c, (RW(17) + 1620))); F_001A94C0(c);
SET64(4, RD(17) + RD(0));
L_001AC3B0:;
SET64(31, 0x1ac3b8); SET64(5, RD(16) + RD(0)); F_001A1910(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001AC3D0(Ctx *c) { /* func_001AC3D0 */
ENTER(0x1ac3d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ac3f8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ac40c); SET64(16, RD(2) + RD(0)); rt_call(c, t); }
SET64(6, RD(0) < RD(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1ac41c); SET64(5, RD(16) + RD(0)); F_001A1B20(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001AC440(Ctx *c) { /* func_001AC440 */
ENTER(0x1ac440);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ac46c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
SET64(17, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ac484); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ac498); SET64(16, RD(2) + RD(0)); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x1ac4ac); SET64(7, RD(2) + RD(0)); F_001A1810(c);
SET64(31, rd64(c, (RW(29) + 48)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001AC4D0(Ctx *c) { /* func_001AC4D0 */
ENTER(0x1ac4d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ac4fc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ac510); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ac524); SET64(17, RD(2) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(4, RD(18) + RD(0));
SET64(31, 0x1ac534); SET64(5, RD(0) + RD(0)); F_001A0680(c);
if (RD(2) != RD(0)) { SET64(4, RD(18) + RD(0)); goto L_001AC544; }
SET32(3, RW(0) + 5); goto L_001AC580;
L_001AC544:;
SET64(31, 0x1ac54c); SET32(5, RW(0) + 64); F_001A0C80(c);
if (RD(2) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_001AC55C; }
SET64(3, RD(0) + RD(0)); goto L_001AC580;
L_001AC55C:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x1ac568); SET32(6, RW(0) + 1); F_001A0650(c);
SET64(6, RD(2) + RD(0));
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 64);
SET64(31, 0x1ac57c); SET32(7, RW(0) + 7); F_001A08E0(c);
SET64(3, RD(0) + RD(0));
L_001AC580:;
SET32(2, RW(0) + 5);
if (RD(3) != RD(2)) { SET64(4, RD(18) + RD(0)); goto L_001AC594; }
SET64(31, rd64(c, (RW(29) + 48))); goto L_001AC798;
L_001AC594:;
SET64(31, 0x1ac59c); SET64(5, RD(0) + RD(0)); F_001A0680(c);
if (RD(2) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_001AC5E0; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x1ac5b0); SET32(5, RW(0) + 65); F_001A0C80(c);
{ int t = RD(2) != RD(0);  if (t) goto L_001AC5DC; }
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x1ac5c8); SET32(6, RW(0) + 2); F_001A0650(c);
SET64(6, RD(2) + RD(0));
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 65);
SET64(31, 0x1ac5dc); SET32(7, RW(0) + 7); F_001A08E0(c);
L_001AC5DC:;
SET64(4, RD(18) + RD(0));
L_001AC5E0:;
SET64(31, 0x1ac5e8); SET32(5, RW(0) + 64); F_001A0C70(c);
if (RD(2) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_001AC688; }
SET32(3, RW(17) + 128);
SET64(2, (s64)(s32)0xbf800000);
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[1].u = RW(2);
c->fcc = F(1) == F(0);
if (c->fcc) { SET64(2, (s32)rd32(c, (RW(18) + 1616))); goto L_001AC66C; }
SET32(2, RW(16) + 64);
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
c->fcc = F(1) == F(0);
{ int t = c->fcc;  if (t) goto L_001AC668; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x1ac640); SET32(5, RW(0) + 64); F_001A0C70(c);
SET64(4, RD(2) + RD(0));
SET32(5, RW(0) + -1);
SET32(2, RW(17) + 128);
c->f[0].u = RW(2);
c->f[12].f = (f32)(s32)c->f[0].u;
SET32(2, RW(16) + 64);
c->f[0].u = RW(2);
SET64(31, 0x1ac668); c->f[13].f = (f32)(s32)c->f[0].u; F_001A91A0(c);
L_001AC668:;
SET64(2, (s32)rd32(c, (RW(18) + 1616)));
L_001AC66C:;
SET64(5, (s32)rd32(c, (RW(2) + 216)));
SET64(31, 0x1ac678); SET64(4, RD(18) + RD(0)); F_001A0CA0(c);
SET64(4, (s32)rd32(c, (RW(18) + 1616)));
SET64(31, 0x1ac684); SET64(5, RD(2) + RD(0)); F_001A9510(c);
SET64(4, RD(18) + RD(0));
L_001AC688:;
SET64(31, 0x1ac690); SET32(5, RW(0) + 65); F_001A0C70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001AC72C; }
SET32(3, RW(17) + 384);
SET64(2, (s64)(s32)0xbf800000);
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[1].u = RW(2);
c->fcc = F(1) == F(0);
if (c->fcc) { SET64(2, (s32)rd32(c, (RW(18) + 1620))); goto L_001AC714; }
SET32(2, RW(16) + 64);
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
c->fcc = F(1) == F(0);
{ int t = c->fcc;  if (t) goto L_001AC710; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x1ac6e8); SET32(5, RW(0) + 65); F_001A0C70(c);
SET64(4, RD(2) + RD(0));
SET32(5, RW(0) + -1);
SET32(2, RW(17) + 384);
c->f[0].u = RW(2);
c->f[12].f = (f32)(s32)c->f[0].u;
SET32(2, RW(16) + 64);
c->f[0].u = RW(2);
SET64(31, 0x1ac710); c->f[13].f = (f32)(s32)c->f[0].u; F_001A91A0(c);
L_001AC710:;
SET64(2, (s32)rd32(c, (RW(18) + 1620)));
L_001AC714:;
SET64(5, (s32)rd32(c, (RW(2) + 216)));
SET64(31, 0x1ac720); SET64(4, RD(18) + RD(0)); F_001A0CA0(c);
SET64(4, (s32)rd32(c, (RW(18) + 1620)));
SET64(31, 0x1ac72c); SET64(5, RD(2) + RD(0)); F_001A9510(c);
L_001AC72C:;
c->f[0].u = RW(17);
SET64(2, (s64)(s32)0x490000);
c->f[12].f = (f32)(s32)c->f[0].u;
SET64(3, (s64)(s32)0x44000000);
SET64(7, (s32)rd32(c, (RW(18) + 1616)));
SET64(6, (s64)(s32)0x41b00000);
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
c->f[2].u = rd32(c, (RW(2) + 20536));
c->f[14].u = RW(3);
SET64(2, (s64)(s32)0x41a80000);
c->f[1].u = RW(2);
c->f[0].f = fpu(F(2) - F(1));
SET64(2, (s64)(s32)0x43800000);
wr32(c, (RW(7) + 212), c->f[0].u);
c->f[0].u = RW(6);
c->f[0].f = fpu(F(2) - F(0));
SET64(6, (s32)rd32(c, (RW(18) + 1620)));
wr32(c, (RW(6) + 212), c->f[0].u);
c->f[0].u = RW(16);
c->f[15].u = RW(2);
SET64(31, 0x1ac790); c->f[13].f = (f32)(s32)c->f[0].u; F_001A1930(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
L_001AC798:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001AC7B0(Ctx *c) { /* func_001AC7B0 */
ENTER(0x1ac7b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1ac7c0);  F_001A1C70(c);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 5); goto L_001AC7CC; }
SET64(2, RD(0) + RD(0));
L_001AC7CC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001AC7E0(Ctx *c) { /* func_001AC7E0 */
ENTER(0x1ac7e0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
c->f[0].u = RW(2);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001AC80C; }
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ac80c); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
L_001AC80C:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1ac818); c->f[12].u = c->f[0].u; F_001A3EE0(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001AC830(Ctx *c) { /* func_001AC830 */
ENTER(0x1ac830);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(17, RD(5) + RD(0));
{ int t = RD(17) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_001AC854; }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
L_001AC854:;
wr32(c, (RW(29) + 76), RW(0));
{ int t = RD(17) == RD(0); SET32(16, RW(0) + -1); if (t) goto L_001AC884; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1ac870); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(2) + RD(0));
SET64(31, 0x1ac87c); SET64(5, RD(0) + RD(0)); F_00157370(c);
wr32(c, (RW(29) + 76), RW(2));
SET64(17, (s32)rd32(c, (RW(17) + 4)));
L_001AC884:;
if (RD(17) == RD(0)) { SET64(2, (s32)rd32(c, (RW(29) + 76))); goto L_001AC8A4; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ac89c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 76)));
L_001AC8A4:;
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_001AC8C0; }
SET64(4, RD(18) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x1ac8bc); SET32(5, RW(29) + 76); F_001A21D0(c);
SET64(31, rd64(c, (RW(29) + 48)));
L_001AC8C0:;
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001AC8E0(Ctx *c) { /* func_001AC8E0 */
ENTER(0x1ac8e0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
c->f[0].u = RW(2);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001AC90C; }
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ac90c); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
L_001AC90C:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1ac918); c->f[12].u = c->f[0].u; F_001A3EF0(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001AC930(Ctx *c) { /* func_001AC930 */
ENTER(0x1ac930);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(17, (s32)rd32(c, (RW(5) + 4)));
c->f[20].u = RW(2);
{ int t = RD(17) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_001AC978; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ac970); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[20].u = c->f[0].u;
L_001AC978:;
if (RD(17) == RD(0)) { SET32(2, RW(0) + 1); goto L_001AC998; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ac990); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + 1);
L_001AC998:;
if (RD(16) != RD(2)) { SET64(4, RD(18) + RD(0)); goto L_001AC9B4; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x1ac9ac); SET32(5, RW(0) + 2); F_001A22B0(c);
SET64(31, rd64(c, (RW(29) + 64))); goto L_001AC9C0;
L_001AC9B4:;
SET64(31, 0x1ac9bc); c->f[12].u = c->f[20].u; F_001A22D0(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_001AC9C0:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001AC9E0(Ctx *c) { /* func_001AC9E0 */
ENTER(0x1ac9e0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET32(16, RW(0) + 1);
SET64(17, (s32)rd32(c, (RW(5) + 4)));
c->f[20].u = RW(0);
{ int t = RD(17) == RD(0); wr32(c, (RW(29) + 92), RW(0)); if (t) goto L_001ACA34; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1aca20); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(2) + RD(0));
SET64(31, 0x1aca2c); SET64(5, RD(0) + RD(0)); F_00157370(c);
wr32(c, (RW(29) + 92), RW(2));
SET64(17, (s32)rd32(c, (RW(17) + 4)));
L_001ACA34:;
{ int t = RD(17) == RD(0);  if (t) goto L_001ACA54; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aca4c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(16, RD(2) + RD(0));
L_001ACA54:;
if (RD(17) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_001ACA74; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aca6c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
SET64(4, RD(18) + RD(0));
L_001ACA74:;
SET64(6, RD(16) + RD(0));
c->f[12].u = c->f[20].u;
SET64(31, 0x1aca84); SET32(5, RW(29) + 92); F_001A2360(c);
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001ACAB0(Ctx *c) { /* func_001ACAB0 */
ENTER(0x1acab0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
{ int t = RD(19) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_001ACADC; }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
L_001ACADC:;
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
{ int t = RD(19) == RD(0); SET32(16, RW(0) + -1); if (t) goto L_001ACB04; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1acafc); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
SET64(18, RD(2) + RD(0));
L_001ACB04:;
{ int t = RD(19) == RD(0);  if (t) goto L_001ACB24; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1acb1c); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
SET64(17, RD(2) + RD(0));
L_001ACB24:;
if (RD(19) == RD(0)) { SET64(4, RD(20) + RD(0)); goto L_001ACB44; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1acb3c); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(4, RD(20) + RD(0));
L_001ACB44:;
SET64(5, RD(18) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x1acb54); SET64(7, RD(16) + RD(0)); F_001A2560(c);
SET64(31, rd64(c, (RW(29) + 80)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001ACB80(Ctx *c) { /* func_001ACB80 */
ENTER(0x1acb80);
SET32(29, RW(29) + -16);
{ int t = RD(5) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_001ACB90; }
SET64(5, (s32)rd32(c, (RW(5) + 4)));
L_001ACB90:;
SET64(31, 0x1acb98);  F_001AB920(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001ACBB0(Ctx *c) { /* func_001ACBB0 */
ENTER(0x1acbb0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(5) + RD(0));
{ int t = RD(16) == RD(0); SET64(18, RD(6) + RD(0)); if (t) goto L_001ACC40; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1acbe8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1acbfc); SET64(17, RD(2) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET32(2, RW(16) << 2);
SET32(2, RW(2) + RW(19));
SET64(2, (s32)rd32(c, (RW(2) + 324)));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_001ACC1C; }
SET64(2, RD(0) + RD(0)); goto L_001ACC44;
L_001ACC1C:;
if (RD(18) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_001ACC44; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x1acc30); SET64(5, RD(0) + RD(0)); F_00157370(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x1acc40); SET64(6, RD(16) + RD(0)); F_001A2810(c);
L_001ACC40:;
SET64(2, RD(0) + RD(0));
L_001ACC44:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001ACC60(Ctx *c) { /* func_001ACC60 */
ENTER(0x1acc60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(6) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001ACC7C; }
SET64(2, RD(0) + RD(0)); goto L_001ACCC8;
L_001ACC7C:;
{ int t = RD(5) == RD(0);  if (t) goto L_001ACC94; }
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1acc94); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
L_001ACC94:;
if (RD(16) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001ACCC8; }
SET64(31, 0x1acca4); SET64(4, RD(16) + RD(0)); F_001CB090(c);
SET64(2, (s64)(s32)0x3f000000);
c->f[1].u = RW(2);
wr32(c, (RW(16) + 316), c->f[0].u);
SET32(2, RW(0) + 5);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 320), c->f[0].u);
wr32(c, (RW(16) + 308), RW(2));
SET64(2, RD(0) + RD(0));
L_001ACCC8:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001ACCE0(Ctx *c) { /* func_001ACCE0 */
ENTER(0x1acce0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(6) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001ACCFC; }
SET64(2, RD(0) + RD(0)); goto L_001ACD48;
L_001ACCFC:;
{ int t = RD(5) == RD(0);  if (t) goto L_001ACD14; }
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1acd14); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
L_001ACD14:;
if (RD(16) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001ACD48; }
SET64(31, 0x1acd24); SET64(4, RD(16) + RD(0)); F_001CB090(c);
SET64(2, (s64)(s32)0x3f000000);
c->f[1].u = RW(2);
wr32(c, (RW(16) + 316), c->f[0].u);
SET32(2, RW(0) + 3);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 320), c->f[0].u);
wr32(c, (RW(16) + 308), RW(2));
SET64(2, RD(0) + RD(0));
L_001ACD48:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001ACD60(Ctx *c) { /* func_001ACD60 */
ENTER(0x1acd60);
SET32(29, RW(29) + -96);
SET64(2, (s64)(s32)0xbf800000);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = RW(2);
{ int t = RD(19) == RD(0); c->f[21].u = c->f[20].u; if (t) goto L_001ACDC4; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1acdb0); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(4, RD(2) + RD(0));
SET64(31, 0x1acdbc); SET64(5, RD(0) + RD(0)); F_00157370(c);
SET64(19, (s32)rd32(c, (RW(19) + 4)));
SET64(18, RD(2) + RD(0));
L_001ACDC4:;
{ int t = RD(19) == RD(0);  if (t) goto L_001ACDE4; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1acddc); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[21].u = c->f[0].u;
L_001ACDE4:;
{ int t = RD(19) == RD(0);  if (t) goto L_001ACE00; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1acdfc); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
L_001ACE00:;
{ int t = RD(17) != RD(0);  if (t) goto L_001ACF54; }
if (RD(16) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001ACFBC; }
wr32(c, (RW(16) + 300), RW(18));
SET32(2, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(16) + 308)));
{ int t = RD(3) != RD(2);  if (t) goto L_001ACF48; }
SET64(31, 0x1ace2c); SET64(4, (s32)rd32(c, (RW(16) + 284))); F_001A8260(c);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 2); goto L_001ACFBC; }
SET64(2, (s32)rd32(c, (RW(16) + 284)));
SET64(2, rd16(c, (RW(2) + 370)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001ACE50; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001ACE68;
L_001ACE50:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001ACE68:;
SET64(2, (s64)(s32)0x40000000);
c->f[0].u = RW(2);
c->f[1].f = fpu_div(F(1), F(0));
c->f[0].u = rd32(c, (RW(16) + 292));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(16) + 292), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 284)));
SET64(2, rd16(c, (RW(2) + 372)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001ACEA0; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001ACEB8;
L_001ACEA0:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001ACEB8:;
SET64(2, (s64)(s32)0x40000000);
c->f[0].u = RW(2);
c->f[1].f = fpu_div(F(1), F(0));
c->f[0].u = rd32(c, (RW(16) + 296));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(16) + 296), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(16) + 284)));
SET64(5, rd16(c, (RW(4) + 370)));
SET64(6, rd16(c, (RW(4) + 372)));
SET64(31, 0x1acee8); SET32(7, RW(0) + 5); F_001A97F0(c);
SET64(4, (s32)rd32(c, (RW(16) + 284)));
c->f[12].u = rd32(c, (RW(16) + 292));
c->f[13].u = rd32(c, (RW(16) + 296));
SET64(31, 0x1acefc); SET32(5, RW(0) + -1); F_001A91A0(c);
c->f[12].u = RW(0);
SET64(31, 0x1acf08); SET64(4, (s32)rd32(c, (RW(16) + 284))); F_001A8FB0(c);
SET64(2, (s32)rd32(c, (RW(16) + 284)));
SET32(4, RW(0) + 5);
SET32(3, RW(0) + 1);
wr32(c, (RW(2) + 216), RW(4));
SET64(2, (s32)rd32(c, (RW(16) + 284)));
SET64(31, 0x1acf24); wr8(c, (RW(2) + 392), (u8)RW(3)); F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 284))); goto L_001ACF38; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(16) + 284)));
L_001ACF38:;
SET64(31, 0x1acf40);  F_001A9510(c);
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 308), RW(2));
L_001ACF48:;
SET64(2, RD(0) + RD(0));
 goto L_001ACFBC;
L_001ACF54:;
if (RD(16) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001ACFBC; }
SET64(2, (s32)rd32(c, (RW(16) + 284)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 292), c->f[21].u); goto L_001ACF70; }
wr32(c, (RW(16) + 288), RW(2));
wr32(c, (RW(16) + 292), c->f[21].u);
L_001ACF70:;
SET32(4, RW(0) + 400);
SET64(31, 0x1acf7c); wr32(c, (RW(16) + 296), c->f[20].u); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001ACF94; }
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x1acf94); SET32(6, RW(0) + 1); F_001A9C40(c);
L_001ACF94:;
{ int t = RD(17) == RD(0); wr32(c, (RW(16) + 284), RW(17)); if (t) goto L_001ACFB8; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x1acfa8); SET64(5, RD(18) + RD(0)); F_001A8440(c);
wr32(c, (RW(16) + 312), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 308), RW(2));
wr8(c, (RW(16) + 304), (u8)RW(2));
L_001ACFB8:;
SET64(2, RD(0) + RD(0));
L_001ACFBC:;
SET64(31, rd64(c, (RW(29) + 80)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

static void B_001ACFE0(Ctx *c, u32 entry) { /* func_001ACFE0 */
ENTER(entry);
switch (entry) { case 0x1ad110: goto L_001AD110; case 0x1ad124: goto L_001AD124; case 0x1ad138: goto L_001AD138; case 0x1ad14c: goto L_001AD14C; case 0x1ad160: goto L_001AD160; case 0x1ad174: goto L_001AD174; case 0x1ad188: goto L_001AD188; case 0x1ad19c: goto L_001AD19C; }
L_001ACFE0:;
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(16, RW(0) + -1);
SET64(18, RD(16) + RD(0));
{ int t = RD(19) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_001AD018; }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
L_001AD018:;
{ int t = RD(19) == RD(0);  if (t) goto L_001AD038; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ad030); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
SET64(16, RD(2) + RD(0));
L_001AD038:;
{ int t = RD(19) == RD(0);  if (t) goto L_001AD058; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ad050); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
SET64(18, RD(2) + RD(0));
L_001AD058:;
{ int t = RD(19) == RD(0);  if (t) goto L_001AD074; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ad070); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(17, RD(2) + RD(0));
L_001AD074:;
if (RD(20) == RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_001AD1AC; }
SET64(2, (s32)rd32(c, (RW(20) + 160)));
{ int t = RD(2) == RD(0);  if (t) goto L_001AD1A8; }
SET64(5, RD(16) & 0xffff);
SET64(16, (s32)rd32(c, (RW(2) + 168)));
if (RD(16) == RD(0)) { SET64(16, RD(0) + RD(0)); goto L_001AD0BC; }
SET64(31, 0x1ad0a0); SET64(4, RD(16) + RD(0)); F_0019C750(c);
SET32(3, RW(0) + -1);
if (RD(2) != RD(3)) { SET32(2, RW(2) << 2); goto L_001AD0B4; }
SET64(16, RD(0) + RD(0)); goto L_001AD0BC;
L_001AD0B4:;
SET32(2, RW(2) + RW(16));
SET64(16, (s32)rd32(c, (RW(2) + 4)));
L_001AD0BC:;
{ int t = RD(16) == RD(0);  if (t) goto L_001AD1A8; }
SET32(2, RW(0) + -1);
if (RD(18) == RD(2)) { SET32(2, RW(0) + -1); goto L_001AD0E0; }
SET64(5, RD(18) & 0xffff);
SET64(31, 0x1ad0dc); SET64(4, RD(16) + RD(0)); F_001583C0(c);
SET32(2, RW(0) + -1);
L_001AD0E0:;
{ int t = RD(17) == RD(2);  if (t) goto L_001AD1A8; }
SET64(1, RD(17) < (u64)(s64)8);
if (RD(1) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001AD114; }
SET64(3, (s64)(s32)0x490000);
SET32(2, RW(17) << 2);
SET32(3, RW(3) + 23088);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x1acfe0: goto L_001ACFE0; case 0x1ad110: goto L_001AD110; case 0x1ad124: goto L_001AD124; case 0x1ad138: goto L_001AD138; case 0x1ad14c: goto L_001AD14C; case 0x1ad160: goto L_001AD160; case 0x1ad174: goto L_001AD174; case 0x1ad188: goto L_001AD188; case 0x1ad19c: goto L_001AD19C; default: rt_jump(c, t); return; } }
L_001AD110:;
SET64(4, RD(16) + RD(0));
L_001AD114:;
SET64(31, 0x1ad11c); SET32(5, RW(0) + 5); F_00157FC0(c);
 goto L_001AD1A8;
L_001AD124:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1ad130); SET64(5, RD(0) + RD(0)); F_00157FC0(c);
 goto L_001AD1A8;
L_001AD138:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1ad144); SET32(5, RW(0) + 2); F_00157FC0(c);
 goto L_001AD1A8;
L_001AD14C:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1ad158); SET32(5, RW(0) + 4); F_00157FC0(c);
 goto L_001AD1A8;
L_001AD160:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1ad16c); SET32(5, RW(0) + 1); F_00157FC0(c);
 goto L_001AD1A8;
L_001AD174:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1ad180); SET32(5, RW(0) + 3); F_00157FC0(c);
 goto L_001AD1A8;
L_001AD188:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1ad194); SET32(5, RW(0) + 4); F_00157FA0(c);
 goto L_001AD1A8;
L_001AD19C:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1ad1a8); SET32(5, RW(0) + 5); F_00157FA0(c);
L_001AD1A8:;
SET64(31, rd64(c, (RW(29) + 80)));
L_001AD1AC:;
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}
void F_001ACFE0(Ctx *c) { B_001ACFE0(c, 0x1acfe0); }
void F_001AD110(Ctx *c) { B_001ACFE0(c, 0x1ad110); }
void F_001AD124(Ctx *c) { B_001ACFE0(c, 0x1ad124); }
void F_001AD138(Ctx *c) { B_001ACFE0(c, 0x1ad138); }
void F_001AD14C(Ctx *c) { B_001ACFE0(c, 0x1ad14c); }
void F_001AD160(Ctx *c) { B_001ACFE0(c, 0x1ad160); }
void F_001AD174(Ctx *c) { B_001ACFE0(c, 0x1ad174); }
void F_001AD188(Ctx *c) { B_001ACFE0(c, 0x1ad188); }
void F_001AD19C(Ctx *c) { B_001ACFE0(c, 0x1ad19c); }

void F_001AD1D0(Ctx *c) { /* func_001AD1D0 */
ENTER(0x1ad1d0);
SET64(2, RD(0) + RD(0)); return;
}

void F_001AD1E0(Ctx *c) { /* func_001AD1E0 */
ENTER(0x1ad1e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1ad1f0);  F_001A3F10(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_001AD200(Ctx *c) { /* func_001AD200 */
ENTER(0x1ad200);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
{ int t = RD(20) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_001AD230; }
SET64(20, (s32)rd32(c, (RW(20) + 4)));
L_001AD230:;
{ int t = RD(20) == RD(0);  if (t) goto L_001AD250; }
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ad248); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(20, (s32)rd32(c, (RW(20) + 4)));
SET64(18, RD(2) + RD(0));
L_001AD250:;
{ int t = RD(20) == RD(0);  if (t) goto L_001AD270; }
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ad268); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(20, (s32)rd32(c, (RW(20) + 4)));
SET64(17, RD(2) + RD(0));
L_001AD270:;
if (RD(20) == RD(0)) { SET32(2, RW(0) + -2); goto L_001AD2A4; }
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1ad288); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(5, (s64)(s32)0x490000);
SET64(4, RD(2) + RD(0));
SET32(5, RW(5) + 23120);
SET64(31, 0x1ad29c); SET64(6, RD(0) + RD(0)); F_0035C830(c);
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + -2);
L_001AD2A4:;
if (RD(17) == RD(2)) { SET64(4, RD(19) + RD(0)); goto L_001AD2FC; }
SET32(2, RW(0) + 3);
if (RD(17) == RD(2)) { SET64(4, RD(19) + RD(0)); goto L_001AD2E4; }
SET32(2, RW(0) + 2);
{ int t = RD(17) == RD(2);  if (t) goto L_001AD2E0; }
SET32(2, RW(0) + 1);
{ int t = RD(17) == RD(2);  if (t) goto L_001AD2E0; }
{ int t = RD(17) == RD(0);  if (t) goto L_001AD2E0; }
SET64(5, RD(18) & 0xffff); goto L_001AD30C;
L_001AD2E0:;
SET64(4, RD(19) + RD(0));
L_001AD2E4:;
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x1ad2f4); SET64(7, RD(16) + RD(0)); F_001A15E0(c);
SET64(31, rd64(c, (RW(29) + 80))); goto L_001AD318;
L_001AD2FC:;
SET64(31, 0x1ad304); SET64(5, RD(18) + RD(0)); F_001A1050(c);
 goto L_001AD314;
L_001AD30C:;
SET64(31, 0x1ad314); SET64(4, RD(19) + RD(0)); F_001A3F50(c);
L_001AD314:;
SET64(31, rd64(c, (RW(29) + 80)));
L_001AD318:;
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001AD340(Ctx *c) { /* func_001AD340 */
ENTER(0x1ad340);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 12), c->f[23].u);
SET64(16, RD(5) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, rd8(c, (RW(4) + 272)));
c->f[20].u = RW(0);
c->f[21].u = c->f[20].u;
c->f[22].u = c->f[20].u;
{ int t = RD(2) == RD(0); c->f[23].u = c->f[20].u; if (t) goto L_001AD38C; }
SET64(2, RD(0) + RD(0)); goto L_001AD434;
L_001AD38C:;
{ int t = RD(16) == RD(0);  if (t) goto L_001AD3AC; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad3a4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
c->f[23].u = c->f[0].u;
L_001AD3AC:;
{ int t = RD(16) == RD(0);  if (t) goto L_001AD3CC; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad3c4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
c->f[22].u = c->f[0].u;
L_001AD3CC:;
{ int t = RD(16) == RD(0);  if (t) goto L_001AD3EC; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad3e4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
c->f[21].u = c->f[0].u;
L_001AD3EC:;
if (RD(16) == RD(0)) { c->f[1].f = fpu(F(23) + F(21)); goto L_001AD40C; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad404); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
c->f[1].f = fpu(F(23) + F(21));
L_001AD40C:;
SET32(2, RW(0) + 1);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 256), c->f[23].u);
wr32(c, (RW(17) + 260), c->f[22].u);
c->f[0].f = fpu(F(22) + F(20));
wr32(c, (RW(17) + 264), c->f[1].u);
wr32(c, (RW(17) + 268), c->f[0].u);
SET64(31, 0x1ad430); wr8(c, (RW(17) + 272), (u8)RW(2)); F_001A72B0(c);
SET64(2, RD(0) + RD(0));
L_001AD434:;
SET64(31, rd64(c, (RW(29) + 48)));
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 64); return;
}

void F_001AD460(Ctx *c) { /* func_001AD460 */
ENTER(0x1ad460);
SET32(29, RW(29) + -544);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(6) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001AD48C; }
SET32(2, RW(0) + 2);
if (RD(6) == RD(2)) { SET64(2, RD(0) + RD(0)); goto L_001AD524; }
SET64(2, rd8(c, (RW(16) + 280)));
if (RD(2) == RD(0)) { SET64(25, (s32)rd32(c, (RW(5) + 8))); goto L_001AD498; }
L_001AD48C:;
SET64(2, RD(0) + RD(0));
 goto L_001AD524;
L_001AD498:;
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1ad4a4); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
SET64(5, RD(2) + RD(0));
SET64(31, 0x1ad4b0); SET32(4, RW(29) + 32); F_0012A3C0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1ad4bc); SET32(5, RW(0) + 92); F_0012A0E8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001AD4E8; }
SET32(4, RW(29) + 288);
SET64(31, 0x1ad4d0); SET32(5, RW(29) + 32); F_0012A3C0(c);
SET64(5, (s64)(s32)0x490000);
SET32(4, RW(29) + 288);
SET64(31, 0x1ad4e0); SET32(5, RW(5) + 23128); F_00129FB8(c);
SET64(4, RD(16) + RD(0)); goto L_001AD518;
L_001AD4E8:;
SET64(5, (s64)(s32)0x490000);
SET32(4, RW(29) + 288);
SET64(31, 0x1ad4f8); SET32(5, RW(5) + 23136); F_0012A3C0(c);
SET32(4, RW(29) + 288);
SET64(31, 0x1ad504); SET32(5, RW(29) + 32); F_00129FB8(c);
SET64(5, (s64)(s32)0x490000);
SET32(4, RW(29) + 288);
SET64(31, 0x1ad514); SET32(5, RW(5) + 23128); F_00129FB8(c);
SET64(4, RD(16) + RD(0));
L_001AD518:;
SET64(31, 0x1ad520); SET32(5, RW(29) + 288); F_001A7230(c);
SET64(2, RD(0) + RD(0));
L_001AD524:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 544); return;
}

void F_001AD540(Ctx *c) { /* func_001AD540 */
ENTER(0x1ad540);
SET64(2, RD(0) + RD(0)); return;
}

void F_001AD550(Ctx *c) { /* func_001AD550 */
ENTER(0x1ad550);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ad588); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x3f800000);
c->f[20].u = RW(2);
{ int t = RD(17) == RD(0);  if (t) goto L_001AD5B8; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad5b0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[22].u = c->f[0].u;
L_001AD5B8:;
{ int t = RD(17) == RD(0);  if (t) goto L_001AD5D8; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad5d0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[21].u = c->f[0].u;
L_001AD5D8:;
if (RD(17) == RD(0)) { SET32(2, RW(16) << 2); goto L_001AD5F8; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad5f0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
SET32(2, RW(16) << 2);
L_001AD5F8:;
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 1360)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_001AD61C; }
c->f[12].u = c->f[20].u;
c->f[13].u = c->f[22].u;
SET64(31, 0x1ad618); c->f[14].u = c->f[21].u; F_001A8F80(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_001AD61C:;
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 80); return;
}

void F_001AD640(Ctx *c) { /* func_001AD640 */
ENTER(0x1ad640);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ad680); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[20].u = RW(0);
SET64(16, RD(2) + RD(0));
c->f[21].u = c->f[20].u;
{ int t = RD(17) == RD(0); c->f[22].u = c->f[20].u; if (t) goto L_001AD6B0; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad6a8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[24].u = c->f[0].u;
L_001AD6B0:;
{ int t = RD(17) == RD(0);  if (t) goto L_001AD6D0; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad6c8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[23].u = c->f[0].u;
L_001AD6D0:;
{ int t = RD(17) == RD(0);  if (t) goto L_001AD6F0; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad6e8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[22].u = c->f[0].u;
L_001AD6F0:;
{ int t = RD(17) == RD(0);  if (t) goto L_001AD710; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad708); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[21].u = c->f[0].u;
L_001AD710:;
if (RD(17) == RD(0)) { SET32(2, RW(16) << 2); goto L_001AD730; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad728); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
SET32(2, RW(16) << 2);
L_001AD730:;
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 1360)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_001AD788; }
c->f[1].f = fpu(F(23) - F(24));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
if (!c->fcc) { c->f[12].u = c->f[22].u; goto L_001AD770; }
c->f[12].u = c->f[22].u;
c->f[13].u = c->f[21].u;
SET64(31, 0x1ad768); c->f[14].u = c->f[20].u; F_001A9060(c);
 goto L_001AD784;
L_001AD770:;
c->f[13].u = c->f[21].u;
c->f[14].u = c->f[20].u;
c->f[15].u = c->f[24].u;
SET64(31, 0x1ad784); c->f[16].u = c->f[23].u; F_001A9010(c);
L_001AD784:;
SET64(31, rd64(c, (RW(29) + 80)));
L_001AD788:;
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 96); return;
}

void F_001AD7C0(Ctx *c) { /* func_001AD7C0 */
ENTER(0x1ad7c0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ad804); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(18, (s32)rd32(c, (RW(18) + 4)));
SET64(2, (s64)(s32)0x3f800000);
SET64(17, RD(0) + RD(0));
c->f[21].u = RW(2);
c->f[20].u = RW(0);
{ int t = RD(18) == RD(0); c->f[22].u = c->f[21].u; if (t) goto L_001AD83C; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad834); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[24].u = c->f[0].u;
L_001AD83C:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AD85C; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad854); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[23].u = c->f[0].u;
L_001AD85C:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AD87C; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad874); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[22].u = c->f[0].u;
L_001AD87C:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AD89C; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad894); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[21].u = c->f[0].u;
L_001AD89C:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AD8BC; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad8b4); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[20].u = c->f[0].u;
L_001AD8BC:;
if (RD(18) == RD(0)) { SET32(2, RW(16) << 2); goto L_001AD8DC; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ad8d4); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(17, RD(2) + RD(0));
SET32(2, RW(16) << 2);
L_001AD8DC:;
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 1360)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 96))); goto L_001AD938; }
c->f[1].f = fpu(F(23) - F(24));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
if (!c->fcc) { c->f[12].u = c->f[22].u; goto L_001AD91C; }
c->f[12].u = c->f[22].u;
SET64(5, RD(17) + RD(0));
SET64(31, 0x1ad914); c->f[13].u = c->f[21].u; F_001A93A0(c);
 goto L_001AD934;
L_001AD91C:;
SET64(5, RD(17) + RD(0));
c->f[13].u = c->f[21].u;
c->f[14].u = c->f[24].u;
c->f[15].u = c->f[23].u;
SET64(31, 0x1ad934); c->f[16].u = c->f[20].u; F_001A92A0(c);
L_001AD934:;
SET64(31, rd64(c, (RW(29) + 96)));
L_001AD938:;
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 112); return;
}

void F_001AD970(Ctx *c) { /* func_001AD970 */
ENTER(0x1ad970);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ad9b4); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[20].u = RW(0);
SET64(16, RD(2) + RD(0));
SET64(17, RD(0) + RD(0));
c->f[21].u = c->f[20].u;
{ int t = RD(18) == RD(0); c->f[22].u = c->f[20].u; if (t) goto L_001AD9E8; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ad9e0); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[24].u = c->f[0].u;
L_001AD9E8:;
{ int t = RD(18) == RD(0);  if (t) goto L_001ADA08; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ada00); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[23].u = c->f[0].u;
L_001ADA08:;
{ int t = RD(18) == RD(0);  if (t) goto L_001ADA28; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ada20); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[22].u = c->f[0].u;
L_001ADA28:;
{ int t = RD(18) == RD(0);  if (t) goto L_001ADA48; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ada40); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[21].u = c->f[0].u;
L_001ADA48:;
{ int t = RD(18) == RD(0);  if (t) goto L_001ADA68; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ada60); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[20].u = c->f[0].u;
L_001ADA68:;
if (RD(18) == RD(0)) { SET32(2, RW(16) << 2); goto L_001ADA88; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ada80); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(17, RD(2) + RD(0));
SET32(2, RW(16) << 2);
L_001ADA88:;
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 1360)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 96))); goto L_001ADAE4; }
c->f[1].f = fpu(F(23) - F(24));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
if (!c->fcc) { c->f[12].u = c->f[22].u; goto L_001ADAC8; }
c->f[12].u = c->f[22].u;
SET64(5, RD(17) + RD(0));
SET64(31, 0x1adac0); c->f[13].u = c->f[21].u; F_001A91A0(c);
 goto L_001ADAE0;
L_001ADAC8:;
SET64(5, RD(17) + RD(0));
c->f[13].u = c->f[21].u;
c->f[14].u = c->f[24].u;
c->f[15].u = c->f[23].u;
SET64(31, 0x1adae0); c->f[16].u = c->f[20].u; F_001A90A0(c);
L_001ADAE0:;
SET64(31, rd64(c, (RW(29) + 96)));
L_001ADAE4:;
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 112); return;
}

void F_001ADB20(Ctx *c) { /* func_001ADB20 */
ENTER(0x1adb20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1adb40); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 1360)));
{ int t = RD(4) == RD(0); SET32(16, RW(2) + 1360); if (t) goto L_001ADB64; }
SET64(31, 0x1adb5c);  F_001A94E0(c);
SET64(31, 0x1adb64); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_001A94C0(c);
L_001ADB64:;
SET64(31, rd64(c, (RW(29) + 16)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001ADB80(Ctx *c) { /* func_001ADB80 */
ENTER(0x1adb80);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1adbb8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[20].u = RW(0);
SET64(18, RD(2) + RD(0));
SET64(17, RD(0) + RD(0));
{ int t = RD(19) == RD(0); c->f[21].u = c->f[20].u; if (t) goto L_001ADBD4; }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
L_001ADBD4:;
{ int t = RD(19) == RD(0);  if (t) goto L_001ADBF4; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1adbec); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
SET64(17, RD(2) + RD(0));
L_001ADBF4:;
{ int t = RD(19) == RD(0);  if (t) goto L_001ADC14; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1adc0c); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[21].u = c->f[0].u;
L_001ADC14:;
if (RD(19) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001ADC34; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1adc2c); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
SET64(4, RD(16) + RD(0));
L_001ADC34:;
SET64(31, 0x1adc3c); SET64(5, RD(18) + RD(0)); F_001A0C70(c);
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_001ADCE0; }
SET64(2, (s64)(s32)0xbf800000);
c->f[0].u = RW(2);
c->fcc = F(0) == F(21);
{ int t = c->fcc;  if (t) goto L_001ADC88; }
c->fcc = F(0) == F(20);
{ int t = c->fcc;  if (t) goto L_001ADC88; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x1adc74); SET64(5, RD(18) + RD(0)); F_001A0C70(c);
SET64(4, RD(2) + RD(0));
SET32(5, RW(0) + -1);
c->f[12].u = c->f[21].u;
SET64(31, 0x1adc88); c->f[13].u = c->f[20].u; F_001A91A0(c);
L_001ADC88:;
if (RD(17) != RD(0)) { SET32(2, RW(18) << 2); goto L_001ADCB8; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x1adc9c); SET64(5, RD(0) + RD(0)); F_001A0CA0(c);
SET32(3, RW(18) << 2);
SET64(5, RD(2) + RD(0));
SET32(2, RW(3) + RW(16));
SET64(31, 0x1adcb0); SET64(4, (s32)rd32(c, (RW(2) + 1360))); F_001A9510(c);
 goto L_001ADCDC;
L_001ADCB8:;
SET64(4, RD(16) + RD(0));
SET32(2, RW(2) + RW(16));
SET32(16, RW(2) + 1360);
SET64(2, (s32)rd32(c, (RW(2) + 1360)));
SET64(31, 0x1adcd0); SET64(5, (s32)rd32(c, (RW(2) + 216))); F_001A0CA0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1adcdc); SET64(5, RD(2) + RD(0)); F_001A9510(c);
L_001ADCDC:;
SET64(31, rd64(c, (RW(29) + 80)));
L_001ADCE0:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001ADD10(Ctx *c) { /* func_001ADD10 */
ENTER(0x1add10);
SET32(29, RW(29) + -256);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1add4c); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(20, (s32)rd32(c, (RW(20) + 4)));
SET64(16, RD(2) + RD(0));
SET64(19, RD(0) + RD(0));
{ int t = RD(20) == RD(0); SET64(22, RD(0) + RD(0)); if (t) goto L_001ADD78; }
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1add70); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(20, (s32)rd32(c, (RW(20) + 4)));
SET64(22, RD(2) + RD(0));
L_001ADD78:;
if (RD(20) == RD(0)) { SET64(1, RSD(19) < (s64)33); goto L_001ADD9C; }
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1add90); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(20, (s32)rd32(c, (RW(20) + 4)));
SET64(19, RD(2) + RD(0));
SET64(1, RSD(19) < (s64)33);
L_001ADD9C:;
{ int t = RD(1) != RD(0);  if (t) goto L_001ADDA8; }
SET32(19, RW(0) + 32);
L_001ADDA8:;
if (RSD(19) <= 0) { SET32(2, RW(16) << 2); goto L_001ADE14; }
SET64(18, RD(0) + RD(0));
SET32(17, RW(29) + 128); goto L_001ADDD8;
L_001ADDBC:;
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1addc8); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 0), c->f[0].u);
SET32(18, RW(18) + 1);
SET64(20, (s32)rd32(c, (RW(20) + 4)));
SET32(17, RW(17) + 4);
L_001ADDD8:;
SET64(1, RSD(18) < RSD(19));
{ int t = RD(1) == RD(0);  if (t) goto L_001ADDF0; }
if (RD(20) != RD(0)) { SET64(25, (s32)rd32(c, (RW(20) + 8))); { POLL(); goto L_001ADDBC; } }
L_001ADDF0:;
SET32(2, RW(16) << 2);
SET32(2, RW(2) + RW(21));
SET64(4, (s32)rd32(c, (RW(2) + 1360)));
{ int t = RD(4) == RD(0);  if (t) goto L_001ADE10; }
SET64(6, RD(19) & 0xffff);
SET64(31, 0x1ade10); SET32(5, RW(29) + 128); F_001A96D0(c);
L_001ADE10:;
SET32(2, RW(16) << 2);
L_001ADE14:;
SET32(2, RW(2) + RW(21));
SET64(4, (s32)rd32(c, (RW(2) + 1360)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 112))); goto L_001ADE30; }
SET64(31, 0x1ade2c); SET64(5, RD(22) & 0xffff); F_001A96A0(c);
SET64(31, rd64(c, (RW(29) + 112)));
L_001ADE30:;
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 256); return;
}

void F_001ADE60(Ctx *c) { /* func_001ADE60 */
ENTER(0x1ade60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ade80); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 1360)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001ADEA0; }
SET64(31, 0x1ade9c);  F_001A94A0(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_001ADEA0:;
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001ADEB0(Ctx *c) { /* func_001ADEB0 */
ENTER(0x1adeb0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1adedc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(16, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_001ADEF0; }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
L_001ADEF0:;
if (RD(17) == RD(0)) { SET32(3, RW(16) << 2); goto L_001ADF0C; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1adf08); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(3, RW(16) << 2);
L_001ADF0C:;
SET32(3, RW(3) + RW(18));
SET64(4, (s32)rd32(c, (RW(3) + 1360)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_001ADF28; }
SET64(31, 0x1adf24); SET64(5, RD(2) + RD(0)); F_001A94B0(c);
SET64(31, rd64(c, (RW(29) + 48)));
L_001ADF28:;
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001ADF40(Ctx *c) { /* func_001ADF40 */
ENTER(0x1adf40);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1adf84); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(18, (s32)rd32(c, (RW(18) + 4)));
SET64(2, (s64)(s32)0x3f800000);
SET64(17, RD(0) + RD(0));
c->f[21].u = RW(2);
c->f[23].u = RW(0);
c->f[22].u = c->f[21].u;
c->f[24].u = c->f[23].u;
{ int t = RD(18) == RD(0); c->f[20].u = c->f[21].u; if (t) goto L_001ADFC4; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1adfbc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[24].u = c->f[0].u;
L_001ADFC4:;
{ int t = RD(18) == RD(0);  if (t) goto L_001ADFE4; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1adfdc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[23].u = c->f[0].u;
L_001ADFE4:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AE004; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1adffc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[22].u = c->f[0].u;
L_001AE004:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AE024; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ae01c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[21].u = c->f[0].u;
L_001AE024:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AE044; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ae03c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
SET64(17, RD(2) + RD(0));
L_001AE044:;
if (RD(18) == RD(0)) { SET32(2, RW(16) << 2); goto L_001AE064; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ae05c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
SET32(2, RW(16) << 2);
L_001AE064:;
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 1360)));
{ int t = RD(4) == RD(0); SET32(16, RW(2) + 1360); if (t) goto L_001AE0A4; }
c->f[12].u = c->f[22].u;
SET32(5, RW(0) + -1);
SET64(31, 0x1ae084); c->f[13].u = c->f[21].u; F_001A93A0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1ae090); c->f[12].u = c->f[20].u; F_001A8FB0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
c->f[12].u = c->f[24].u;
c->f[13].u = c->f[23].u;
SET64(31, 0x1ae0a4); SET64(5, RD(17) + RD(0)); F_001A91A0(c);
L_001AE0A4:;
SET64(31, rd64(c, (RW(29) + 96)));
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 112); return;
}

void F_001AE0E0(Ctx *c) { /* func_001AE0E0 */
ENTER(0x1ae0e0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ae124); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(20, (s32)rd32(c, (RW(20) + 4)));
SET32(16, RW(0) + -1);
SET64(18, RD(2) + RD(0));
SET64(17, RD(0) + RD(0));
SET64(23, RD(0) + RD(0));
{ int t = RD(20) == RD(0); SET64(22, RD(16) + RD(0)); if (t) goto L_001AE164; }
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1ae150); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(4, RD(2) + RD(0));
SET64(31, 0x1ae15c); SET64(5, RD(0) + RD(0)); F_00157370(c);
SET64(20, (s32)rd32(c, (RW(20) + 4)));
SET64(17, RD(2) + RD(0));
L_001AE164:;
{ int t = RD(20) == RD(0);  if (t) goto L_001AE184; }
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ae17c); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(20, (s32)rd32(c, (RW(20) + 4)));
SET64(22, RD(2) + RD(0));
L_001AE184:;
{ int t = RD(20) == RD(0);  if (t) goto L_001AE1A4; }
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ae19c); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(20, (s32)rd32(c, (RW(20) + 4)));
SET64(16, RD(2) + RD(0));
L_001AE1A4:;
{ int t = RD(20) == RD(0);  if (t) goto L_001AE1C0; }
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ae1bc); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(23, RD(2) + RD(0));
L_001AE1C0:;
if (RD(19) != RD(0)) { SET32(2, RW(0) + 1); goto L_001AE1E8; }
SET64(4, RD(21) + RD(0));
SET64(31, 0x1ae1d4); SET64(5, RD(18) + RD(0)); F_001A0B40(c);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 2); goto L_001AE1E0; }
SET64(2, RD(0) + RD(0));
L_001AE1E0:;
SET64(31, rd64(c, (RW(29) + 128))); goto L_001AE214;
L_001AE1E8:;
if (RD(19) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_001AE210; }
SET64(4, RD(21) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(7, RD(22) + RD(0));
SET64(8, RD(16) + RD(0));
SET64(31, 0x1ae20c); SET64(9, RD(23) + RD(0)); F_001A0A20(c);
SET64(2, RD(0) + RD(0));
L_001AE210:;
SET64(31, rd64(c, (RW(29) + 128)));
L_001AE214:;
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

void F_001AE240(Ctx *c) { /* func_001AE240 */
ENTER(0x1ae240);
SET64(2, RD(0) + RD(0)); return;
}

void F_001AE250(Ctx *c) { /* func_001AE250 */
ENTER(0x1ae250);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ae28c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[21].u = RW(0);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x3f800000);
c->f[20].u = RW(2);
c->f[22].u = c->f[21].u;
{ int t = RD(18) == RD(0); c->f[23].u = c->f[21].u; if (t) goto L_001AE2B4; }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
L_001AE2B4:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AE2D4; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ae2cc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[23].u = c->f[0].u;
L_001AE2D4:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AE2F4; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ae2ec); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[22].u = c->f[0].u;
L_001AE2F4:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AE314; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ae30c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[21].u = c->f[0].u;
L_001AE314:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AE330; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ae32c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
L_001AE330:;
if (RD(16) != RD(0)) { SET32(2, RW(16) << 2); goto L_001AE3D8; }
wr32(c, (RW(17) + 1656), c->f[23].u);
wr32(c, (RW(17) + 1660), c->f[22].u);
wr32(c, (RW(17) + 1664), c->f[21].u);
wr32(c, (RW(17) + 1668), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(17) + 160)));
c->f[12].u = c->f[23].u;
SET64(16, (s32)rd32(c, (RW(2) + 248)));
SET64(31, 0x1ae35c); SET32(4, RW(16) + 64); F_00162D00(c);
SET32(4, RW(16) + 64);
SET64(31, 0x1ae368); c->f[12].u = c->f[22].u; F_00162CF0(c);
SET32(4, RW(16) + 64);
SET64(31, 0x1ae374); c->f[12].u = c->f[21].u; F_00162CE0(c);
SET32(4, RW(16) + 64);
SET64(31, 0x1ae380); c->f[12].u = c->f[20].u; F_00162CD0(c);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1ae390); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, RD(0) + RD(0));
L_001AE394:;
SET64(2, (s32)rd32(c, (RW(17) + 1672)));
{ int t = RD(2) == RD(0);  if (t) goto L_001AE3C0; }
wr32(c, (RW(2) + 60), c->f[23].u);
SET64(2, (s32)rd32(c, (RW(17) + 1672)));
wr32(c, (RW(2) + 64), c->f[22].u);
SET64(2, (s32)rd32(c, (RW(17) + 1672)));
wr32(c, (RW(2) + 68), c->f[21].u);
SET64(2, (s32)rd32(c, (RW(17) + 1672)));
wr32(c, (RW(2) + 72), c->f[20].u);
L_001AE3C0:;
SET32(3, RW(3) + 1);
SET64(2, RSD(3) < (s64)48);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001AE394; } }
SET64(31, rd64(c, (RW(29) + 64))); goto L_001AE460;
L_001AE3D8:;
SET32(2, RW(2) + RW(17));
SET32(16, RW(2) + 1672);
SET64(2, (s32)rd32(c, (RW(2) + 1672)));
{ int t = RD(2) == RD(0);  if (t) goto L_001AE45C; }
wr32(c, (RW(2) + 60), c->f[23].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
c->f[12].u = c->f[23].u;
wr32(c, (RW(2) + 64), c->f[22].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(2) + 68), c->f[21].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(2) + 72), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(17) + 160)));
SET64(17, (s32)rd32(c, (RW(2) + 248)));
SET64(31, 0x1ae41c); SET32(4, RW(17) + 64); F_00162D00(c);
c->f[12].u = c->f[22].u;
SET64(31, 0x1ae428); SET32(4, RW(17) + 64); F_00162CF0(c);
c->f[12].u = c->f[21].u;
SET64(31, 0x1ae434); SET32(4, RW(17) + 64); F_00162CE0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x1ae440); SET32(4, RW(17) + 64); F_00162CD0(c);
SET64(25, (s32)rd32(c, (RW(17) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1ae450); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 241), (u8)RW(3));
L_001AE45C:;
SET64(31, rd64(c, (RW(29) + 64)));
L_001AE460:;
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 80); return;
}

void F_001AE490(Ctx *c) { /* func_001AE490 */
ENTER(0x1ae490);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ae4b0); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
if (RD(16) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001AE4C0; }
wr8(c, (RW(16) + 156), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
L_001AE4C0:;
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001AE4D0(Ctx *c) { /* func_001AE4D0 */
ENTER(0x1ae4d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ae4f0); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
if (RD(16) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001AE504; }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 156), (u8)RW(2));
SET64(31, rd64(c, (RW(29) + 16)));
L_001AE504:;
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001AE520(Ctx *c) { /* func_001AE520 */
ENTER(0x1ae520);
SET32(29, RW(29) + -272);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ae55c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[20].u = RW(0);
SET64(16, RD(2) + RD(0));
{ int t = RD(17) == RD(0); c->f[21].u = c->f[20].u; if (t) goto L_001AE588; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ae580); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[23].u = c->f[0].u;
L_001AE588:;
{ int t = RD(17) == RD(0);  if (t) goto L_001AE5A8; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ae5a0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[22].u = c->f[0].u;
L_001AE5A8:;
{ int t = RD(17) == RD(0);  if (t) goto L_001AE5C8; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ae5c0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[21].u = c->f[0].u;
L_001AE5C8:;
if (RD(17) == RD(0)) { SET32(2, RW(16) << 2); goto L_001AE5E8; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ae5e0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
SET32(2, RW(16) << 2);
L_001AE5E8:;
SET32(3, RW(2) + RW(18));
SET32(2, RW(3) + 1672);
SET64(3, (s32)rd32(c, (RW(3) + 1672)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_001AE89C; }
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 264), RW(0));
wr32(c, (RW(3) + 244), c->f[23].u);
wr32(c, (RW(29) + 268), RW(4));
c->f[0].f = fpu(F(22) - F(23));
wr32(c, (RW(29) + 252), RW(4));
wr32(c, (RW(29) + 236), RW(4));
SET32(3, RW(0) + 1);
wr32(c, (RW(29) + 220), RW(4));
wr32(c, (RW(29) + 204), RW(4));
wr32(c, (RW(29) + 188), RW(4));
wr32(c, (RW(29) + 80), c->f[21].u);
wr32(c, (RW(29) + 172), RW(4));
wr32(c, (RW(29) + 84), c->f[20].u);
wr32(c, (RW(29) + 156), RW(4));
wr32(c, (RW(29) + 140), RW(4));
wr32(c, (RW(29) + 124), RW(4));
wr32(c, (RW(29) + 108), RW(4));
wr32(c, (RW(29) + 92), RW(4));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 248), RW(0));
wr32(c, (RW(4) + 248), c->f[0].u);
wr32(c, (RW(29) + 232), RW(0));
SET64(7, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(29) + 216), RW(0));
wr32(c, (RW(29) + 184), RW(0));
SET64(6, (s16)rd16(c, (RW(7) + 78)));
SET64(4, (s16)rd16(c, (RW(7) + 76)));
wr32(c, (RW(29) + 168), RW(0));
c->f[0].u = RW(6);
wr32(c, (RW(29) + 152), RW(0));
c->f[1].u = RW(4);
wr32(c, (RW(29) + 136), RW(0));
c->f[1].f = (f32)(s32)c->f[1].u;
wr32(c, (RW(29) + 120), RW(0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[5]);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 256), c->f[1].u);
wr32(c, (RW(29) + 260), c->f[0].u);
rd128(c, (RW(29) + 256) & ~15u, &c->r[4]);
wr128(c, (RW(7) + 256) & ~15u, &c->r[4]);
SET64(7, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s16)rd16(c, (RW(7) + 82)));
SET64(4, (s16)rd16(c, (RW(7) + 80)));
c->f[0].u = RW(6);
c->f[1].u = RW(4);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 240), c->f[1].u);
wr32(c, (RW(29) + 244), c->f[0].u);
rd128(c, (RW(29) + 240) & ~15u, &c->r[4]);
wr128(c, (RW(7) + 272) & ~15u, &c->r[4]);
SET64(7, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s16)rd16(c, (RW(7) + 86)));
SET64(4, (s16)rd16(c, (RW(7) + 84)));
c->f[0].u = RW(6);
c->f[1].u = RW(4);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 224), c->f[1].u);
wr32(c, (RW(29) + 228), c->f[0].u);
rd128(c, (RW(29) + 224) & ~15u, &c->r[4]);
wr128(c, (RW(7) + 288) & ~15u, &c->r[4]);
SET64(7, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s16)rd16(c, (RW(7) + 90)));
SET64(4, (s16)rd16(c, (RW(7) + 88)));
c->f[0].u = RW(6);
c->f[1].u = RW(4);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 208), c->f[1].u);
wr32(c, (RW(29) + 212), c->f[0].u);
rd128(c, (RW(29) + 208) & ~15u, &c->r[4]);
wr128(c, (RW(7) + 304) & ~15u, &c->r[4]);
SET64(7, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(7) + 96));
SET64(6, (s16)rd16(c, (RW(7) + 94)));
SET64(4, (s16)rd16(c, (RW(7) + 92)));
wr32(c, (RW(29) + 200), c->f[0].u);
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 196), c->f[0].u);
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 192), c->f[0].u);
rd128(c, (RW(29) + 192) & ~15u, &c->r[4]);
wr128(c, (RW(7) + 384) & ~15u, &c->r[4]);
SET64(6, (s32)rd32(c, (RW(2) + 0)));
c->f[1].u = rd32(c, (RW(6) + 220));
c->f[0].u = rd32(c, (RW(6) + 216));
wr32(c, (RW(29) + 180), c->f[1].u);
wr32(c, (RW(29) + 176), c->f[0].u);
rd128(c, (RW(29) + 176) & ~15u, &c->r[4]);
wr128(c, (RW(6) + 464) & ~15u, &c->r[4]);
SET64(7, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s16)rd16(c, (RW(7) + 78)));
SET64(4, (s16)rd16(c, (RW(7) + 76)));
c->f[0].u = RW(6);
c->f[1].u = RW(4);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 160), c->f[1].u);
wr32(c, (RW(29) + 164), c->f[0].u);
rd128(c, (RW(29) + 160) & ~15u, &c->r[4]);
wr128(c, (RW(7) + 320) & ~15u, &c->r[4]);
SET64(7, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s16)rd16(c, (RW(7) + 82)));
SET64(4, (s16)rd16(c, (RW(7) + 80)));
c->f[0].u = RW(6);
c->f[1].u = RW(4);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 144), c->f[1].u);
wr32(c, (RW(29) + 148), c->f[0].u);
rd128(c, (RW(29) + 144) & ~15u, &c->r[4]);
wr128(c, (RW(7) + 336) & ~15u, &c->r[4]);
SET64(7, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s16)rd16(c, (RW(7) + 86)));
SET64(4, (s16)rd16(c, (RW(7) + 84)));
c->f[0].u = RW(6);
c->f[1].u = RW(4);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 128), c->f[1].u);
wr32(c, (RW(29) + 132), c->f[0].u);
rd128(c, (RW(29) + 128) & ~15u, &c->r[4]);
wr128(c, (RW(7) + 352) & ~15u, &c->r[4]);
SET64(7, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s16)rd16(c, (RW(7) + 90)));
SET64(4, (s16)rd16(c, (RW(7) + 88)));
c->f[0].u = RW(6);
c->f[1].u = RW(4);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 112), c->f[1].u);
wr32(c, (RW(29) + 116), c->f[0].u);
rd128(c, (RW(29) + 112) & ~15u, &c->r[4]);
wr128(c, (RW(7) + 368) & ~15u, &c->r[4]);
SET64(7, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(7) + 96));
SET64(6, (s16)rd16(c, (RW(7) + 94)));
SET64(4, (s16)rd16(c, (RW(7) + 92)));
wr32(c, (RW(29) + 104), c->f[0].u);
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 100), c->f[0].u);
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 96), c->f[0].u);
rd128(c, (RW(29) + 96) & ~15u, &c->r[4]);
wr128(c, (RW(7) + 400) & ~15u, &c->r[4]);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(4) + 480) & ~15u, &c->r[5]);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr8(c, (RW(2) + 242), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 64)));
L_001AE89C:;
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 272); return;
}

void F_001AE8D0(Ctx *c) { /* func_001AE8D0 */
ENTER(0x1ae8d0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 28), c->f[27].u);
wr32(c, (RW(29) + 24), c->f[26].u);
wr32(c, (RW(29) + 20), c->f[25].u);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1ae91c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(18, (s32)rd32(c, (RW(18) + 4)));
SET64(2, (s64)(s32)0x3f800000);
c->f[24].u = RW(2);
c->f[21].u = RW(0);
c->f[25].u = c->f[24].u;
c->f[26].u = c->f[24].u;
c->f[27].u = c->f[24].u;
c->f[20].u = c->f[24].u;
c->f[22].u = c->f[21].u;
{ int t = RD(18) == RD(0); c->f[23].u = c->f[21].u; if (t) goto L_001AE950; }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
L_001AE950:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AE970; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ae968); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[27].u = c->f[0].u;
L_001AE970:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AE990; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ae988); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[26].u = c->f[0].u;
L_001AE990:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AE9B0; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ae9a8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[25].u = c->f[0].u;
L_001AE9B0:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AE9D0; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ae9c8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[24].u = c->f[0].u;
L_001AE9D0:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AE9F0; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1ae9e8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[23].u = c->f[0].u;
L_001AE9F0:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AEA10; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aea08); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[22].u = c->f[0].u;
L_001AEA10:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AEA30; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aea28); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[21].u = c->f[0].u;
L_001AEA30:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AEA4C; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1aea48); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
L_001AEA4C:;
if (RD(16) != RD(0)) { SET32(2, RW(16) << 2); goto L_001AECE0; }
wr32(c, (RW(17) + 1624), c->f[27].u);
wr32(c, (RW(17) + 1628), c->f[26].u);
wr32(c, (RW(17) + 1632), c->f[25].u);
wr32(c, (RW(17) + 1636), c->f[24].u);
wr32(c, (RW(17) + 1640), c->f[23].u);
wr32(c, (RW(17) + 1644), c->f[22].u);
wr32(c, (RW(17) + 1648), c->f[21].u);
wr32(c, (RW(17) + 1652), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(17) + 160)));
c->f[12].u = c->f[27].u;
SET64(16, (s32)rd32(c, (RW(2) + 248)));
SET64(31, 0x1aea88); SET32(4, RW(16) + 48); F_00162D00(c);
SET32(4, RW(16) + 48);
SET64(31, 0x1aea94); c->f[12].u = c->f[26].u; F_00162CF0(c);
SET32(4, RW(16) + 48);
SET64(31, 0x1aeaa0); c->f[12].u = c->f[25].u; F_00162CE0(c);
SET32(4, RW(16) + 48);
SET64(31, 0x1aeaac); c->f[12].u = c->f[24].u; F_00162CD0(c);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1aeabc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 160)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(16, (s32)rd32(c, (RW(3) + 248)));
SET64(31, 0x1aead4); SET32(4, RW(16) + 64); F_00162D00(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x1aeae4); SET32(4, RW(16) + 64); F_00162CF0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x1aeaf4); SET32(4, RW(16) + 64); F_00162CE0(c);
SET32(4, RW(16) + 64);
SET64(31, 0x1aeb00); c->f[12].u = c->f[20].u; F_00162CD0(c);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1aeb10); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x437f0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(3);
c->f[1].f = fpu(F(0) * F(23));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_001AEB48; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001AEB60;
L_001AEB48:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001AEB60:;
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(0) * F(22));
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; wr8(c, (RW(29) + 108), (u8)RW(3)); if (t) goto L_001AEB98; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001AEBB4;
L_001AEB98:;
c->f[0].f = fpu(F(1) - F(0));
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001AEBB4:;
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(0) * F(21));
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; wr8(c, (RW(29) + 109), (u8)RW(3)); if (t) goto L_001AEBEC; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001AEC08;
L_001AEBEC:;
c->f[0].f = fpu(F(1) - F(0));
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001AEC08:;
SET64(2, (s64)(s32)0x43000000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(0) * F(20));
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; wr8(c, (RW(29) + 110), (u8)RW(3)); if (t) goto L_001AEC40; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001AEC5C;
L_001AEC40:;
c->f[0].f = fpu(F(1) - F(0));
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001AEC5C:;
wr8(c, (RW(29) + 111), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(17) + 160)));
SET64(31, 0x1aec6c); SET32(5, RW(29) + 108); F_0015F270(c);
SET64(4, RD(0) + RD(0));
SET32(3, RW(0) + 1);
L_001AEC74:;
SET64(2, (s32)rd32(c, (RW(17) + 1672)));
{ int t = RD(2) == RD(0);  if (t) goto L_001AECC8; }
wr32(c, (RW(2) + 28), c->f[27].u);
SET64(2, (s32)rd32(c, (RW(17) + 1672)));
wr32(c, (RW(2) + 32), c->f[26].u);
SET64(2, (s32)rd32(c, (RW(17) + 1672)));
wr32(c, (RW(2) + 36), c->f[25].u);
SET64(2, (s32)rd32(c, (RW(17) + 1672)));
wr32(c, (RW(2) + 40), c->f[24].u);
SET64(2, (s32)rd32(c, (RW(17) + 1672)));
wr32(c, (RW(2) + 44), c->f[23].u);
SET64(2, (s32)rd32(c, (RW(17) + 1672)));
wr32(c, (RW(2) + 48), c->f[22].u);
SET64(2, (s32)rd32(c, (RW(17) + 1672)));
wr32(c, (RW(2) + 52), c->f[21].u);
SET64(2, (s32)rd32(c, (RW(17) + 1672)));
wr32(c, (RW(2) + 56), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(17) + 1672)));
wr8(c, (RW(2) + 241), (u8)RW(3));
L_001AECC8:;
SET32(4, RW(4) + 1);
SET64(2, RSD(4) < (s64)48);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001AEC74; } }
SET64(31, rd64(c, (RW(29) + 80))); goto L_001AEF38;
L_001AECE0:;
SET32(2, RW(2) + RW(17));
SET32(16, RW(2) + 1672);
SET64(2, (s32)rd32(c, (RW(2) + 1672)));
{ int t = RD(2) == RD(0);  if (t) goto L_001AEF34; }
wr32(c, (RW(2) + 28), c->f[27].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
c->f[12].u = c->f[27].u;
wr32(c, (RW(2) + 32), c->f[26].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(2) + 36), c->f[25].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(2) + 40), c->f[24].u);
SET64(2, (s32)rd32(c, (RW(17) + 160)));
SET64(18, (s32)rd32(c, (RW(2) + 248)));
SET64(31, 0x1aed24); SET32(4, RW(18) + 48); F_00162D00(c);
c->f[12].u = c->f[26].u;
SET64(31, 0x1aed30); SET32(4, RW(18) + 48); F_00162CF0(c);
c->f[12].u = c->f[25].u;
SET64(31, 0x1aed3c); SET32(4, RW(18) + 48); F_00162CE0(c);
c->f[12].u = c->f[24].u;
SET64(31, 0x1aed48); SET32(4, RW(18) + 48); F_00162CD0(c);
SET64(25, (s32)rd32(c, (RW(18) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1aed58); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
wr32(c, (RW(3) + 44), c->f[23].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(2) + 48), c->f[22].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(2) + 52), c->f[21].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(2) + 56), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(17) + 160)));
SET64(18, (s32)rd32(c, (RW(2) + 248)));
SET64(31, 0x1aed90); SET32(4, RW(18) + 64); F_00162D00(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x1aeda0); SET32(4, RW(18) + 64); F_00162CF0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x1aedb0); SET32(4, RW(18) + 64); F_00162CE0(c);
SET32(4, RW(18) + 64);
SET64(31, 0x1aedbc); c->f[12].u = c->f[20].u; F_00162CD0(c);
SET64(25, (s32)rd32(c, (RW(18) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1aedcc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x437f0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(3);
c->f[1].f = fpu(F(0) * F(23));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_001AEE04; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001AEE1C;
L_001AEE04:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001AEE1C:;
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(0) * F(22));
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; wr8(c, (RW(29) + 104), (u8)RW(3)); if (t) goto L_001AEE54; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001AEE70;
L_001AEE54:;
c->f[0].f = fpu(F(1) - F(0));
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001AEE70:;
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(0) * F(21));
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; wr8(c, (RW(29) + 105), (u8)RW(3)); if (t) goto L_001AEEA8; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001AEEC4;
L_001AEEA8:;
c->f[0].f = fpu(F(1) - F(0));
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001AEEC4:;
SET64(2, (s64)(s32)0x43000000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(0) * F(20));
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; wr8(c, (RW(29) + 106), (u8)RW(3)); if (t) goto L_001AEEFC; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001AEF18;
L_001AEEFC:;
c->f[0].f = fpu(F(1) - F(0));
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001AEF18:;
wr8(c, (RW(29) + 107), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(17) + 160)));
SET64(31, 0x1aef28); SET32(5, RW(29) + 104); F_0015F270(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 241), (u8)RW(3));
L_001AEF34:;
SET64(31, rd64(c, (RW(29) + 80)));
L_001AEF38:;
c->f[27].u = rd32(c, (RW(29) + 28));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[26].u = rd32(c, (RW(29) + 24));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[25].u = rd32(c, (RW(29) + 20));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[24].u = rd32(c, (RW(29) + 16));
c->f[23].u = rd32(c, (RW(29) + 12));
SET64(2, RD(0) + RD(0));
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 112); return;
}

void F_001AEF70(Ctx *c) { /* func_001AEF70 */
ENTER(0x1aef70);
SET32(29, RW(29) + -368);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 44), c->f[31].u);
wr32(c, (RW(29) + 40), c->f[30].u);
wr32(c, (RW(29) + 36), c->f[29].u);
wr32(c, (RW(29) + 32), c->f[28].u);
wr32(c, (RW(29) + 28), c->f[27].u);
wr32(c, (RW(29) + 24), c->f[26].u);
wr32(c, (RW(29) + 20), c->f[25].u);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1aefd0); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[23].u = RW(0);
SET64(17, RD(2) + RD(0));
SET32(16, RW(0) + 1);
SET64(2, (s64)(s32)0x3f800000);
c->f[20].u = RW(2);
c->f[24].u = c->f[23].u;
c->f[25].u = c->f[23].u;
c->f[26].u = c->f[23].u;
c->f[27].u = c->f[23].u;
c->f[28].u = c->f[23].u;
c->f[29].u = c->f[23].u;
c->f[30].u = c->f[23].u;
c->f[21].u = c->f[23].u;
c->f[22].u = c->f[23].u;
wr32(c, (RW(29) + 132), c->f[23].u);
{ int t = RD(18) == RD(0); wr32(c, (RW(29) + 136), c->f[23].u); if (t) goto L_001AF030; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af028); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[31].u = c->f[0].u;
L_001AF030:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF050; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af048); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
wr32(c, (RW(29) + 140), c->f[0].u);
L_001AF050:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF070; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af068); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[30].u = c->f[0].u;
L_001AF070:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF090; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af088); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[29].u = c->f[0].u;
L_001AF090:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF0B0; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af0a8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[28].u = c->f[0].u;
L_001AF0B0:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF0D0; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af0c8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[27].u = c->f[0].u;
L_001AF0D0:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF0F0; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af0e8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[26].u = c->f[0].u;
L_001AF0F0:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF110; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af108); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[25].u = c->f[0].u;
L_001AF110:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF130; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af128); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[24].u = c->f[0].u;
L_001AF130:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF150; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af148); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[23].u = c->f[0].u;
L_001AF150:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF170; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af168); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[22].u = c->f[0].u;
L_001AF170:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF190; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af188); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[21].u = c->f[0].u;
L_001AF190:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF1B0; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af1a8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[20].u = c->f[0].u;
L_001AF1B0:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF1D0; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1af1c8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
SET64(16, RD(2) + RD(0));
L_001AF1D0:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF1F0; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af1e8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
wr32(c, (RW(29) + 136), c->f[0].u);
L_001AF1F0:;
if (RD(18) == RD(0)) { SET32(2, RW(17) << 2); goto L_001AF210; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af208); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
wr32(c, (RW(29) + 132), c->f[0].u);
SET32(2, RW(17) << 2);
L_001AF210:;
SET32(3, RW(2) + RW(19));
SET32(2, RW(3) + 1672);
SET64(3, (s32)rd32(c, (RW(3) + 1672)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 112))); goto L_001AF62C; }
c->f[0].u = rd32(c, (RW(29) + 140));
wr32(c, (RW(3) + 244), c->f[31].u);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
c->f[0].f = fpu(F(0) - F(31));
wr32(c, (RW(3) + 248), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(3, rd8(c, (RW(4) + 242)));
if (RD(3) == RD(0)) { c->f[0].u = rd32(c, (RW(29) + 136)); goto L_001AF374; }
c->f[0].u = rd32(c, (RW(4) + 320));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr16(c, (RW(4) + 76), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(4) + 324));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr16(c, (RW(4) + 78), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(4) + 336));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr16(c, (RW(4) + 80), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(4) + 340));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr16(c, (RW(4) + 82), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(4) + 352));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr16(c, (RW(4) + 84), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(4) + 356));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr16(c, (RW(4) + 86), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(4) + 368));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr16(c, (RW(4) + 88), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(4) + 372));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr16(c, (RW(4) + 90), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(3) + 448));
wr32(c, (RW(3) + 416), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(3) + 452));
wr32(c, (RW(3) + 420), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(4) + 400));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr16(c, (RW(4) + 92), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(4) + 404));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr16(c, (RW(4) + 94), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(3) + 408));
wr32(c, (RW(3) + 96), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(3) + 480));
wr32(c, (RW(3) + 216), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(3) + 484));
wr32(c, (RW(3) + 220), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 136));
L_001AF374:;
SET64(6, (s64)(s32)0x3f800000);
SET64(3, RD(16) ^ 0x1);
SET64(8, (s32)rd32(c, (RW(2) + 0)));
SET64(5, RD(3) < (u64)(s64)1);
wr32(c, (RW(29) + 360), RW(0));
wr32(c, (RW(29) + 144), c->f[0].u);
SET64(3, (s64)(s32)0x40800000);
c->f[0].u = rd32(c, (RW(29) + 132));
wr32(c, (RW(29) + 364), RW(6));
c->f[1].f = fpu(F(30) + F(28));
wr32(c, (RW(29) + 344), RW(0));
wr32(c, (RW(29) + 348), RW(6));
SET32(4, RW(0) + 1);
wr32(c, (RW(29) + 328), RW(0));
wr32(c, (RW(29) + 332), RW(6));
wr32(c, (RW(29) + 148), c->f[0].u);
wr32(c, (RW(29) + 312), RW(0));
c->f[0].f = fpu(F(26) + F(1));
wr32(c, (RW(29) + 316), RW(6));
wr32(c, (RW(29) + 296), RW(0));
wr32(c, (RW(29) + 300), RW(6));
wr32(c, (RW(29) + 284), RW(6));
c->f[0].f = fpu(F(24) + F(0));
wr32(c, (RW(29) + 264), RW(0));
wr32(c, (RW(29) + 268), RW(6));
wr32(c, (RW(29) + 248), RW(0));
wr32(c, (RW(29) + 252), RW(6));
c->f[3].u = RW(3);
wr32(c, (RW(29) + 232), RW(0));
c->f[2].f = fpu_div(F(0), F(3));
wr32(c, (RW(29) + 236), RW(6));
wr32(c, (RW(29) + 216), RW(0));
wr32(c, (RW(29) + 220), RW(6));
wr32(c, (RW(29) + 200), RW(0));
wr32(c, (RW(29) + 204), RW(6));
wr32(c, (RW(29) + 184), RW(0));
wr32(c, (RW(29) + 188), RW(6));
wr32(c, (RW(29) + 172), RW(6));
wr32(c, (RW(29) + 156), RW(6));
wr32(c, (RW(29) + 152), RW(0));
rd128(c, (RW(29) + 144) & ~15u, &c->r[6]);
c->f[0].f = fpu(F(30) - F(2));
wr32(c, (RW(29) + 224), c->f[0].u);
c->f[0].f = fpu(F(28) - F(2));
wr32(c, (RW(29) + 208), c->f[0].u);
c->f[0].f = fpu(F(24) - F(2));
wr32(c, (RW(29) + 176), c->f[0].u);
c->f[0].f = fpu(F(29) + F(27));
c->f[1].f = fpu(F(26) - F(2));
c->f[0].f = fpu(F(25) + F(0));
wr32(c, (RW(29) + 240), c->f[2].u);
c->f[2].u = rd32(c, (RW(8) + 420));
c->f[0].f = fpu(F(23) + F(0));
wr32(c, (RW(29) + 356), c->f[2].u);
c->f[2].f = fpu_div(F(0), F(3));
wr32(c, (RW(29) + 192), c->f[1].u);
c->f[1].u = rd32(c, (RW(8) + 416));
wr32(c, (RW(29) + 244), c->f[2].u);
rd128(c, (RW(29) + 240) & ~15u, &c->r[12]);
wr32(c, (RW(29) + 160), c->f[22].u);
wr32(c, (RW(29) + 352), c->f[1].u);
rd128(c, (RW(29) + 352) & ~15u, &c->r[3]);
c->f[1].f = fpu(F(29) - F(2));
wr128(c, (RW(8) + 432) & ~15u, &c->r[3]);
SET64(9, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(29) + 228), c->f[1].u);
c->f[1].f = fpu(F(25) - F(2));
rd128(c, (RW(29) + 224) & ~15u, &c->r[11]);
SET64(3, (s16)rd16(c, (RW(9) + 76)));
SET64(8, (s16)rd16(c, (RW(9) + 78)));
wr32(c, (RW(29) + 196), c->f[1].u);
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 336), c->f[0].u);
c->f[0].u = RW(8);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 340), c->f[0].u);
rd128(c, (RW(29) + 336) & ~15u, &c->r[3]);
c->f[0].f = fpu(F(27) - F(2));
wr128(c, (RW(9) + 256) & ~15u, &c->r[3]);
SET64(14, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(29) + 212), c->f[0].u);
c->f[0].f = fpu(F(23) - F(2));
rd128(c, (RW(29) + 208) & ~15u, &c->r[10]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[9]);
SET64(3, (s16)rd16(c, (RW(14) + 80)));
SET64(13, (s16)rd16(c, (RW(14) + 82)));
wr32(c, (RW(29) + 180), c->f[0].u);
c->f[0].u = RW(3);
rd128(c, (RW(29) + 176) & ~15u, &c->r[8]);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 320), c->f[0].u);
c->f[0].u = RW(13);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 324), c->f[0].u);
rd128(c, (RW(29) + 320) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 164), c->f[21].u);
wr32(c, (RW(29) + 168), c->f[20].u);
rd128(c, (RW(29) + 160) & ~15u, &c->r[7]);
wr128(c, (RW(14) + 272) & ~15u, &c->r[3]);
SET64(14, (s32)rd32(c, (RW(2) + 0)));
SET64(13, (s16)rd16(c, (RW(14) + 86)));
SET64(3, (s16)rd16(c, (RW(14) + 84)));
c->f[0].u = RW(13);
c->f[1].u = RW(3);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 304), c->f[1].u);
wr32(c, (RW(29) + 308), c->f[0].u);
rd128(c, (RW(29) + 304) & ~15u, &c->r[3]);
wr128(c, (RW(14) + 288) & ~15u, &c->r[3]);
SET64(14, (s32)rd32(c, (RW(2) + 0)));
SET64(13, (s16)rd16(c, (RW(14) + 90)));
SET64(3, (s16)rd16(c, (RW(14) + 88)));
c->f[0].u = RW(13);
c->f[1].u = RW(3);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 288), c->f[1].u);
wr32(c, (RW(29) + 292), c->f[0].u);
rd128(c, (RW(29) + 288) & ~15u, &c->r[3]);
wr128(c, (RW(14) + 304) & ~15u, &c->r[3]);
SET64(14, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = rd32(c, (RW(14) + 96));
SET64(13, (s16)rd16(c, (RW(14) + 94)));
SET64(3, (s16)rd16(c, (RW(14) + 92)));
wr32(c, (RW(29) + 280), c->f[0].u);
c->f[0].u = RW(13);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 276), c->f[0].u);
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 272), c->f[0].u);
rd128(c, (RW(29) + 272) & ~15u, &c->r[3]);
wr128(c, (RW(14) + 384) & ~15u, &c->r[3]);
SET64(13, (s32)rd32(c, (RW(2) + 0)));
c->f[1].u = rd32(c, (RW(13) + 220));
c->f[0].u = rd32(c, (RW(13) + 216));
wr32(c, (RW(29) + 260), c->f[1].u);
wr32(c, (RW(29) + 256), c->f[0].u);
rd128(c, (RW(29) + 256) & ~15u, &c->r[3]);
wr128(c, (RW(13) + 464) & ~15u, &c->r[3]);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(3) + 448) & ~15u, &c->r[12]);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(3) + 320) & ~15u, &c->r[11]);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(3) + 336) & ~15u, &c->r[10]);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(3) + 352) & ~15u, &c->r[9]);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(3) + 368) & ~15u, &c->r[8]);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(3) + 400) & ~15u, &c->r[7]);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(3) + 480) & ~15u, &c->r[6]);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(3) + 232), RW(0));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(3) + 236), RW(0));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
wr8(c, (RW(3) + 240), (u8)RW(5));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
wr8(c, (RW(3) + 241), (u8)RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr8(c, (RW(2) + 242), (u8)RW(4));
SET64(31, rd64(c, (RW(29) + 112)));
L_001AF62C:;
c->f[31].u = rd32(c, (RW(29) + 44));
rd128(c, (RW(29) + 96) & ~15u, &c->r[19]);
c->f[30].u = rd32(c, (RW(29) + 40));
rd128(c, (RW(29) + 80) & ~15u, &c->r[18]);
c->f[29].u = rd32(c, (RW(29) + 36));
rd128(c, (RW(29) + 64) & ~15u, &c->r[17]);
c->f[28].u = rd32(c, (RW(29) + 32));
rd128(c, (RW(29) + 48) & ~15u, &c->r[16]);
c->f[27].u = rd32(c, (RW(29) + 28));
c->f[26].u = rd32(c, (RW(29) + 24));
SET64(2, RD(0) + RD(0));
c->f[25].u = rd32(c, (RW(29) + 20));
c->f[24].u = rd32(c, (RW(29) + 16));
c->f[23].u = rd32(c, (RW(29) + 12));
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 368); return;
}

void F_001AF680(Ctx *c) { /* func_001AF680 */
ENTER(0x1af680);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1af6ac); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
SET64(17, RD(2) + RD(0));
SET64(4, RD(19) + RD(0));
SET32(2, RW(0) + 1);
wr8(c, (RW(19) + 1074), (u8)RW(2));
SET64(31, 0x1af6c4); wr32(c, (RW(19) + 1076), RW(0)); F_001A3F00(c);
SET64(31, 0x1af6cc); SET64(4, (s32)rd32(c, (RW(19) + 160))); F_0015F450(c);
SET32(2, RW(17) << 2);
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 1672)));
{ int t = RD(4) == RD(0); SET32(16, RW(2) + 1672); if (t) goto L_001AF7B8; }
SET64(3, (s32)rd32(c, (RW(19) + 160)));
c->f[2].u = rd32(c, (RW(4) + 140));
c->f[0].u = rd32(c, (RW(4) + 132));
SET64(18, (s32)rd32(c, (RW(3) + 248)));
c->fcc = F(2) == F(0);
{ int t = !c->fcc; SET32(2, RW(4) + 132); if (t) goto L_001AF710; }
c->f[1].u = rd32(c, (RW(4) + 144));
c->f[0].u = rd32(c, (RW(4) + 136));
c->fcc = F(1) == F(0);
if (c->fcc) { SET32(2, RW(0) + -1); goto L_001AF794; }
L_001AF710:;
wr32(c, (RW(2) + 0), c->f[2].u);
SET64(4, RD(18) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(3) + 144));
wr32(c, (RW(3) + 136), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
c->f[1].u = rd32(c, (RW(3) + 136));
c->f[0].u = rd32(c, (RW(3) + 132));
wr32(c, (RW(29) + 96), c->f[0].u);
wr32(c, (RW(29) + 108), RW(2));
wr32(c, (RW(29) + 100), c->f[1].u);
wr32(c, (RW(29) + 104), RW(0));
SET64(25, (s32)rd32(c, (RW(18) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x1af754); SET32(5, RW(29) + 96); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 80)));
SET32(4, RW(29) + 80);
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x1af768); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 160)));
c->f[3].u = rd32(c, (RW(29) + 92));
c->f[2].u = rd32(c, (RW(29) + 88));
c->f[1].u = rd32(c, (RW(29) + 84));
c->f[0].u = rd32(c, (RW(29) + 80));
wr32(c, (RW(4) + 268), c->f[0].u);
wr32(c, (RW(4) + 272), c->f[1].u);
wr32(c, (RW(4) + 276), c->f[2].u);
SET64(31, 0x1af790); wr32(c, (RW(4) + 280), c->f[3].u); F_0016E300(c);
SET32(2, RW(0) + -1);
L_001AF794:;
wr32(c, (RW(19) + 1864), RW(2));
wr32(c, (RW(19) + 1868), RW(17));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(2, rd16(c, (RW(2) + 100)));
SET64(2, RD(2) & 0x8000);
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_001AF7BC; }
SET32(2, RW(0) + 1);
wr32(c, (RW(19) + 1084), RW(2));
L_001AF7B8:;
SET64(31, rd64(c, (RW(29) + 64)));
L_001AF7BC:;
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001AF7E0(Ctx *c) { /* func_001AF7E0 */
ENTER(0x1af7e0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1af820); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[20].u = RW(0);
SET64(16, RD(2) + RD(0));
c->f[21].u = c->f[20].u;
{ int t = RD(18) == RD(0); c->f[22].u = c->f[20].u; if (t) goto L_001AF850; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af848); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[24].u = c->f[0].u;
L_001AF850:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF870; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af868); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[23].u = c->f[0].u;
L_001AF870:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF890; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af888); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[22].u = c->f[0].u;
L_001AF890:;
{ int t = RD(18) == RD(0);  if (t) goto L_001AF8B0; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af8a8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 4)));
c->f[21].u = c->f[0].u;
L_001AF8B0:;
if (RD(18) == RD(0)) { SET32(2, RW(16) << 2); goto L_001AF8D0; }
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af8c8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
c->f[20].u = c->f[0].u;
SET32(2, RW(16) << 2);
L_001AF8D0:;
SET32(2, RW(2) + RW(17));
SET32(16, RW(2) + 1672);
SET64(2, (s32)rd32(c, (RW(2) + 1672)));
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_001AF93C; }
c->f[0].u = rd32(c, (RW(2) + 196));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(2) + 200), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(2) + 204), c->f[22].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(2) + 188), c->f[21].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1af90c); wr32(c, (RW(2) + 192), c->f[20].u); F_001CB090(c);
SET64(4, (s64)(s32)0x447a0000);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
c->f[2].u = RW(4);
SET32(3, RW(0) + 1);
c->f[0].f = fpu_div(F(0), F(2));
wr32(c, (RW(2) + 208), c->f[0].u);
c->f[1].f = fpu(F(23) - F(24));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(2) + 212), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr8(c, (RW(2) + 184), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 80)));
L_001AF93C:;
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 96); return;
}

void F_001AF970(Ctx *c) { /* func_001AF970 */
ENTER(0x1af970);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1af9b0); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x3f800000);
c->f[21].u = RW(2);
c->f[20].u = RW(0);
{ int t = RD(19) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_001AF9E4; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af9dc); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[23].u = c->f[0].u;
L_001AF9E4:;
{ int t = RD(19) == RD(0);  if (t) goto L_001AFA04; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1af9fc); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[22].u = c->f[0].u;
L_001AFA04:;
{ int t = RD(19) == RD(0);  if (t) goto L_001AFA24; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1afa1c); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[21].u = c->f[0].u;
L_001AFA24:;
{ int t = RD(19) == RD(0);  if (t) goto L_001AFA44; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1afa3c); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[20].u = c->f[0].u;
L_001AFA44:;
if (RD(19) == RD(0)) { SET32(2, RW(16) << 2); goto L_001AFA64; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1afa5c); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(17, RD(2) + RD(0));
SET32(2, RW(16) << 2);
L_001AFA64:;
SET32(2, RW(2) + RW(18));
SET32(16, RW(2) + 1672);
SET64(2, (s32)rd32(c, (RW(2) + 1672)));
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_001AFB00; }
wr32(c, (RW(2) + 164), c->f[21].u);
SET64(3, (s64)(s32)0x41200000);
SET64(2, (s64)(s32)0x42c80000);
SET64(5, (s32)rd32(c, (RW(16) + 0)));
c->f[3].u = RW(2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x3f000000);
c->f[0].u = RW(2);
c->f[2].f = fpu(F(0) * F(20));
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(3));
c->f[0].u = RW(3);
c->f[1].f = fpu(c->facc - F(3) * F(2));
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(5) + 168), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1afad0); wr32(c, (RW(2) + 172), c->f[0].u); F_001CB090(c);
SET64(3, (s64)(s32)0x447a0000);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
c->f[2].u = RW(3);
c->f[0].f = fpu_div(F(0), F(2));
wr32(c, (RW(2) + 176), c->f[0].u);
c->f[1].f = fpu(F(22) - F(23));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(2) + 180), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(2) + 496), RW(17));
SET64(31, rd64(c, (RW(29) + 80)));
L_001AFB00:;
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 96); return;
}

void F_001AFB30(Ctx *c) { /* func_001AFB30 */
ENTER(0x1afb30);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1afb74); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[20].u = RW(0);
SET64(16, RD(2) + RD(0));
SET64(18, RD(0) + RD(0));
c->f[21].u = c->f[20].u;
{ int t = RD(17) == RD(0); c->f[22].u = c->f[20].u; if (t) goto L_001AFBA8; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1afba0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[24].u = c->f[0].u;
L_001AFBA8:;
{ int t = RD(17) == RD(0);  if (t) goto L_001AFBC8; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1afbc0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[23].u = c->f[0].u;
L_001AFBC8:;
{ int t = RD(17) == RD(0);  if (t) goto L_001AFBE8; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1afbe0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[22].u = c->f[0].u;
L_001AFBE8:;
{ int t = RD(17) == RD(0);  if (t) goto L_001AFC08; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1afc00); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[21].u = c->f[0].u;
L_001AFC08:;
{ int t = RD(17) == RD(0);  if (t) goto L_001AFC28; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1afc20); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[20].u = c->f[0].u;
L_001AFC28:;
if (RD(17) == RD(0)) { SET32(2, RW(16) << 2); goto L_001AFC48; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1afc40); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(18, RD(2) + RD(0));
SET32(2, RW(16) << 2);
L_001AFC48:;
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 1672)));
{ int t = RD(4) == RD(0); SET32(16, RW(2) + 1672); if (t) goto L_001AFE20; }
SET64(3, (s32)rd32(c, (RW(19) + 160)));
c->f[2].u = rd32(c, (RW(4) + 140));
c->f[0].u = rd32(c, (RW(4) + 132));
SET64(17, (s32)rd32(c, (RW(3) + 248)));
c->fcc = F(2) == F(0);
{ int t = !c->fcc; SET32(2, RW(4) + 132); if (t) goto L_001AFC88; }
c->f[1].u = rd32(c, (RW(4) + 144));
c->f[0].u = rd32(c, (RW(4) + 136));
c->fcc = F(1) == F(0);
if (c->fcc) { SET64(2, (s64)(s32)0x42c80000); goto L_001AFD0C; }
L_001AFC88:;
wr32(c, (RW(2) + 0), c->f[2].u);
SET64(4, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(3) + 144));
wr32(c, (RW(3) + 136), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
c->f[1].u = rd32(c, (RW(3) + 136));
c->f[0].u = rd32(c, (RW(3) + 132));
wr32(c, (RW(29) + 160), c->f[0].u);
wr32(c, (RW(29) + 172), RW(2));
wr32(c, (RW(29) + 164), c->f[1].u);
wr32(c, (RW(29) + 168), RW(0));
SET64(25, (s32)rd32(c, (RW(17) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x1afccc); SET32(5, RW(29) + 160); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 80)));
SET32(4, RW(29) + 144);
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x1afce0); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 160)));
c->f[3].u = rd32(c, (RW(29) + 156));
c->f[2].u = rd32(c, (RW(29) + 152));
c->f[1].u = rd32(c, (RW(29) + 148));
c->f[0].u = rd32(c, (RW(29) + 144));
wr32(c, (RW(4) + 268), c->f[0].u);
wr32(c, (RW(4) + 272), c->f[1].u);
wr32(c, (RW(4) + 276), c->f[2].u);
SET64(31, 0x1afd08); wr32(c, (RW(4) + 280), c->f[3].u); F_0016E300(c);
SET64(2, (s64)(s32)0x42c80000);
L_001AFD0C:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
c->f[3].u = RW(2);
SET64(4, RD(19) + RD(0));
SET64(2, (s64)(s32)0x3f000000);
c->f[0].u = RW(2);
c->f[2].f = fpu(F(0) * F(20));
SET64(2, (s64)(s32)0x41200000);
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(3));
c->f[0].u = RW(2);
c->f[1].f = fpu(c->facc - F(3) * F(2));
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(3) + 140), c->f[22].u);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(3) + 144), c->f[21].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(2) + 148), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1afd6c); wr32(c, (RW(2) + 152), c->f[0].u); F_001CB090(c);
SET64(3, (s64)(s32)0x447a0000);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
c->f[2].u = RW(3);
c->f[0].f = fpu_div(F(0), F(2));
wr32(c, (RW(2) + 156), c->f[0].u);
c->f[1].f = fpu(F(23) - F(24));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(2) + 160), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
c->f[0].u = RW(0);
wr32(c, (RW(2) + 496), RW(18));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
c->f[1].u = rd32(c, (RW(2) + 160));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(31, rd64(c, (RW(29) + 96))); goto L_001AFE24; }
wr32(c, (RW(2) + 132), c->f[22].u);
SET64(4, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(3) + 136), c->f[21].u);
wr32(c, (RW(29) + 128), c->f[22].u);
wr32(c, (RW(29) + 140), RW(2));
wr32(c, (RW(29) + 132), c->f[21].u);
wr32(c, (RW(29) + 136), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(17) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x1afde4); SET32(5, RW(29) + 128); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 80)));
SET32(4, RW(29) + 112);
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x1afdf8); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 160)));
c->f[3].u = rd32(c, (RW(29) + 124));
c->f[2].u = rd32(c, (RW(29) + 120));
c->f[1].u = rd32(c, (RW(29) + 116));
c->f[0].u = rd32(c, (RW(29) + 112));
wr32(c, (RW(4) + 268), c->f[0].u);
wr32(c, (RW(4) + 272), c->f[1].u);
wr32(c, (RW(4) + 276), c->f[2].u);
SET64(31, 0x1afe20); wr32(c, (RW(4) + 280), c->f[3].u); F_0016E300(c);
L_001AFE20:;
SET64(31, rd64(c, (RW(29) + 96)));
L_001AFE24:;
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 176); return;
}

static void B_001AFE60(Ctx *c, u32 entry) { /* func_001AFE60 */
ENTER(entry);
switch (entry) { case 0x1b0004: goto L_001B0004; case 0x1b0010: goto L_001B0010; case 0x1b0018: goto L_001B0018; case 0x1b0020: goto L_001B0020; case 0x1b0024: goto L_001B0024; case 0x1b0028: goto L_001B0028; case 0x1b004c: goto L_001B004C; case 0x1b0064: goto L_001B0064; }
SET32(29, RW(29) + -240);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 20), c->f[25].u);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1afeb0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(21, RD(2) + RD(0));
SET32(3, RW(0) + -1);
SET64(2, (s32)rd32(c, (RW(18) + 1868)));
c->f[22].u = RW(0);
SET64(16, RD(0) + RD(0));
{ int t = RD(2) == RD(3); c->f[23].u = c->f[22].u; if (t) goto L_001AFF40; }
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(18));
SET64(19, (s32)rd32(c, (RW(2) + 1672)));
if (RD(19) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 1868))); goto L_001AFF1C; }
SET64(4, (s32)rd32(c, (RW(19) + 8)));
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(19) + 16))); goto L_001AFEF8; }
SET64(31, 0x1afef4);  F_003219B0(c);
SET64(4, (s32)rd32(c, (RW(19) + 16)));
L_001AFEF8:;
SET32(2, RW(0) + -1);
if (RD(4) == RD(2)) { SET64(4, RD(19) + RD(0)); goto L_001AFF10; }
SET64(31, 0x1aff0c);  F_003219B0(c);
SET64(4, RD(19) + RD(0));
L_001AFF10:;
SET64(31, 0x1aff18);  F_001004B0(c);
SET64(3, (s32)rd32(c, (RW(18) + 1868)));
L_001AFF1C:;
SET32(2, RW(0) + -1);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(18));
wr32(c, (RW(3) + 1672), RW(0));
SET64(3, (s32)rd32(c, (RW(18) + 1868)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(18));
wr32(c, (RW(3) + 1672), RW(0));
wr32(c, (RW(18) + 1868), RW(2));
L_001AFF40:;
SET64(4, (s32)rd32(c, (RW(18) + 160)));
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x1aff54);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET32(3, RW(21) << 2); goto L_001AFF64; }
SET32(2, RW(0) + 2); goto L_001B0588;
L_001AFF64:;
SET32(2, RW(0) + -1);
SET32(3, RW(3) + RW(18));
SET32(20, RW(3) + 1672);
SET64(3, (s32)rd32(c, (RW(3) + 1672)));
SET64(4, (s32)rd32(c, (RW(3) + 8)));
if (RD(4) == RD(2)) { SET64(3, (s32)rd32(c, (RW(20) + 0))); goto L_001AFF9C; }
SET64(31, 0x1aff88);  F_00321BE0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001AFF98; }
SET32(2, RW(0) + 2); goto L_001B0588;
L_001AFF98:;
SET64(3, (s32)rd32(c, (RW(20) + 0)));
L_001AFF9C:;
SET32(2, RW(0) + -1);
SET64(4, (s32)rd32(c, (RW(3) + 16)));
if (RD(4) == RD(2)) { SET64(19, (s32)rd32(c, (RW(20) + 0))); goto L_001AFFC8; }
SET64(31, 0x1affb4);  F_00321BE0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001AFFC4; }
SET32(2, RW(0) + 2); goto L_001B0588;
L_001AFFC4:;
SET64(19, (s32)rd32(c, (RW(20) + 0)));
L_001AFFC8:;
SET64(2, rd8(c, (RW(19) + 1)));
if (RD(2) != RD(0)) { SET64(17, (s32)rd32(c, (RW(17) + 4))); goto L_001B002C; }
SET64(31, 0x1affdc); SET64(4, (s32)rd32(c, (RW(19) + 8))); F_00321A60(c);
SET64(4, (s32)rd32(c, (RW(19) + 16)));
SET64(31, 0x1affe8); SET64(19, RD(2) + RD(0)); F_00321A60(c);
SET64(5, RD(19) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(31, 0x1afff8); SET64(4, RD(18) + RD(0)); F_001A4060(c);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 1), (u8)RW(3));
L_001B0004:;
SET64(4, (s32)rd32(c, (RW(18) + 160)));
SET64(25, (s32)rd32(c, (RW(4) + 40)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
L_001B0010:;
{ u32 t = RW(25); SET64(31, 0x1b0018);  rt_call(c, t); }
L_001B0018:;
{ int t = RD(2) == RD(0);  if (t) goto L_001B0028; }
L_001B0020:;
SET32(2, RW(0) + 2); goto L_001B0588;
if (0) { L_001B0024:; SET32(2, RW(0) + 2); }
L_001B0028:;
SET64(17, (s32)rd32(c, (RW(17) + 4)));
L_001B002C:;
{ int t = RD(17) == RD(0);  if (t) goto L_001B0038; }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
L_001B0038:;
{ int t = RD(17) == RD(0);  if (t) goto L_001B0058; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b0050); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
if (0) { L_001B004C:; SET64(4, RD(17) + RD(0)); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[23].u = c->f[0].u;
L_001B0058:;
{ int t = RD(17) == RD(0);  if (t) goto L_001B0078; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
L_001B0064:;
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b0070); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
c->f[22].u = c->f[0].u;
L_001B0078:;
{ int t = RD(17) == RD(0);  if (t) goto L_001B0094; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b0090); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
L_001B0094:;
{ int t = RD(17) == RD(0);  if (t) goto L_001B00B0; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b00ac); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
L_001B00B0:;
if (RD(17) == RD(0)) { SET64(2, (s32)rd32(c, (RW(20) + 0))); goto L_001B00D0; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b00c8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
L_001B00D0:;
if (RD(2) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_001B0578; }
wr32(c, (RW(2) + 132), c->f[23].u);
SET64(5, (s64)(s32)0x3f800000);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
c->f[0].u = (u32)fpu_cvtw(F(23));
wr32(c, (RW(2) + 136), c->f[22].u);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET64(4, (s32)c->f[0].u);
c->f[0].u = (u32)fpu_cvtw(F(22));
wr32(c, (RW(2) + 140), c->f[23].u);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(2) + 144), c->f[22].u);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
wr32(c, (RW(2) + 148), RW(0));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
wr32(c, (RW(2) + 164), RW(5));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
wr32(c, (RW(2) + 168), RW(0));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
wr32(c, (RW(2) + 196), RW(0));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
wr32(c, (RW(2) + 496), RW(16));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
wr16(c, (RW(2) + 112), (u16)RW(4));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
wr16(c, (RW(2) + 114), (u16)RW(3));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
wr16(c, (RW(2) + 116), (u16)RW(4));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
wr16(c, (RW(2) + 118), (u16)RW(3));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET64(2, rd8(c, (RW(2) + 0)));
wr8(c, (RW(18) + 1091), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET64(31, 0x1b0168); SET64(4, (s32)rd32(c, (RW(2) + 4))); F_001570B0(c);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET64(31, 0x1b0174); SET64(4, (s32)rd32(c, (RW(2) + 12))); F_001570B0(c);
wr32(c, (RW(18) + 1864), RW(21));
SET64(4, RD(18) + RD(0));
SET64(6, (s32)rd32(c, (RW(20) + 0)));
SET32(5, RW(29) + 176);
SET64(2, rd16(c, (RW(6) + 100)));
wr16(c, (RW(29) + 176), (u16)RW(2));
SET64(2, rd16(c, (RW(6) + 102)));
wr16(c, (RW(29) + 178), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(6) + 104)));
wr32(c, (RW(29) + 180), RW(2));
SET64(2, (s32)rd32(c, (RW(6) + 108)));
wr32(c, (RW(29) + 184), RW(2));
SET64(3, (s16)rd16(c, (RW(6) + 112)));
SET64(2, (s16)rd16(c, (RW(6) + 114)));
wr16(c, (RW(29) + 188), (u16)RW(3));
wr16(c, (RW(29) + 190), (u16)RW(2));
SET64(3, (s16)rd16(c, (RW(6) + 116)));
SET64(2, (s16)rd16(c, (RW(6) + 118)));
wr16(c, (RW(29) + 192), (u16)RW(3));
wr16(c, (RW(29) + 194), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(6) + 120)));
wr32(c, (RW(29) + 196), RW(2));
SET64(2, (s32)rd32(c, (RW(6) + 124)));
wr32(c, (RW(29) + 200), RW(2));
SET64(2, (s32)rd32(c, (RW(6) + 128)));
SET64(31, 0x1b01e0); wr32(c, (RW(29) + 204), RW(2)); F_001A4000(c);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(16, (s32)rd32(c, (RW(2) + 248)));
c->f[24].u = rd32(c, (RW(3) + 32));
c->f[21].u = rd32(c, (RW(3) + 36));
c->f[20].u = rd32(c, (RW(3) + 40));
c->f[12].u = rd32(c, (RW(3) + 28));
SET64(31, 0x1b0204); SET32(4, RW(16) + 48); F_00162D00(c);
c->f[12].u = c->f[24].u;
SET64(31, 0x1b0210); SET32(4, RW(16) + 48); F_00162CF0(c);
c->f[12].u = c->f[21].u;
SET64(31, 0x1b021c); SET32(4, RW(16) + 48); F_00162CE0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x1b0228); SET32(4, RW(16) + 48); F_00162CD0(c);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1b0238); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET64(3, (s32)rd32(c, (RW(20) + 0)));
c->f[12].u = RW(2);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
c->f[25].u = rd32(c, (RW(3) + 44));
c->f[24].u = rd32(c, (RW(3) + 48));
SET64(16, (s32)rd32(c, (RW(2) + 248)));
c->f[21].u = rd32(c, (RW(3) + 52));
c->f[20].u = rd32(c, (RW(3) + 56));
SET64(31, 0x1b0264); SET32(4, RW(16) + 64); F_00162D00(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x1b0274); SET32(4, RW(16) + 64); F_00162CF0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x1b0284); SET32(4, RW(16) + 64); F_00162CE0(c);
SET32(4, RW(16) + 64);
SET64(31, 0x1b0290); c->f[12].u = c->f[20].u; F_00162CD0(c);
SET64(25, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1b02a0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x437f0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(3);
c->f[1].f = fpu(F(0) * F(25));
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_001B02D8; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001B02F0;
L_001B02D8:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001B02F0:;
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(0) * F(24));
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; wr8(c, (RW(29) + 236), (u8)RW(3)); if (t) goto L_001B0328; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001B0344;
L_001B0328:;
c->f[0].f = fpu(F(1) - F(0));
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001B0344:;
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(0) * F(21));
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; wr8(c, (RW(29) + 237), (u8)RW(3)); if (t) goto L_001B037C; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001B0398;
L_001B037C:;
c->f[0].f = fpu(F(1) - F(0));
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001B0398:;
SET64(2, (s64)(s32)0x43000000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(0) * F(20));
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; wr8(c, (RW(29) + 238), (u8)RW(3)); if (t) goto L_001B03D0; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_001B03EC;
L_001B03D0:;
c->f[0].f = fpu(F(1) - F(0));
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_001B03EC:;
wr8(c, (RW(29) + 239), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 160)));
SET64(31, 0x1b03fc); SET32(5, RW(29) + 236); F_0015F270(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 168), RW(0));
wr32(c, (RW(29) + 160), c->f[23].u);
wr32(c, (RW(29) + 172), RW(2));
wr32(c, (RW(29) + 164), c->f[22].u);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
SET64(4, (s32)rd32(c, (RW(2) + 248)));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x1b0428); SET32(5, RW(29) + 160); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
{ int t = RD(2) == RD(0);  if (t) goto L_001B0574; }
SET64(2, (s32)rd32(c, (RW(18) + 160)));
SET64(5, (s32)rd32(c, (RW(2) + 248)));
SET64(25, (s32)rd32(c, (RW(5) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1b0450); SET32(4, RW(29) + 208); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 0)));
c->f[0].u = RW(0);
c->f[1].u = rd32(c, (RW(2) + 24));
c->fcc = F(1) == F(0);
if (c->fcc) { SET64(2, (s32)rd32(c, (RW(20) + 0))); goto L_001B0518; }
SET64(2, rd8(c, (RW(2) + 20)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(20) + 0))); goto L_001B04A0; }
SET64(3, (s32)rd32(c, (RW(29) + 220)));
SET64(2, (s32)rd32(c, (RW(29) + 212)));
SET32(2, RW(3) + RW(2));
wr32(c, (RW(29) + 220), RW(2));
SET64(2, RSD(2) < (s64)448);
if (RD(2) != RD(0)) { wr32(c, (RW(29) + 212), RW(0)); goto L_001B049C; }
SET32(2, RW(0) + 448);
wr32(c, (RW(29) + 220), RW(2));
wr32(c, (RW(29) + 212), RW(0));
L_001B049C:;
SET64(2, (s32)rd32(c, (RW(20) + 0)));
L_001B04A0:;
SET64(2, rd8(c, (RW(2) + 22)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(20) + 0))); goto L_001B04C0; }
SET64(2, (s32)rd32(c, (RW(29) + 212)));
SET32(3, RW(0) + 448);
SET32(2, RW(3) - RW(2));
wr32(c, (RW(29) + 220), RW(2));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
L_001B04C0:;
SET64(2, rd8(c, (RW(2) + 23)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(20) + 0))); goto L_001B04F8; }
SET64(3, (s32)rd32(c, (RW(29) + 216)));
SET64(2, (s32)rd32(c, (RW(29) + 208)));
SET32(2, RW(3) + RW(2));
wr32(c, (RW(29) + 216), RW(2));
SET64(2, RSD(2) < (s64)512);
if (RD(2) != RD(0)) { wr32(c, (RW(29) + 208), RW(0)); goto L_001B04F4; }
SET32(2, RW(0) + 512);
wr32(c, (RW(29) + 216), RW(2));
wr32(c, (RW(29) + 208), RW(0));
L_001B04F4:;
SET64(2, (s32)rd32(c, (RW(20) + 0)));
L_001B04F8:;
SET64(2, rd8(c, (RW(2) + 21)));
{ int t = RD(2) == RD(0);  if (t) goto L_001B0514; }
SET64(2, (s32)rd32(c, (RW(29) + 208)));
SET32(3, RW(0) + 512);
SET32(2, RW(3) - RW(2));
wr32(c, (RW(29) + 216), RW(2));
L_001B0514:;
SET64(2, (s32)rd32(c, (RW(20) + 0)));
L_001B0518:;
SET32(5, RW(29) + 208);
SET64(4, (s32)rd32(c, (RW(18) + 160)));
c->f[12].u = rd32(c, (RW(2) + 96));
SET64(6, rd8(c, (RW(2) + 20)));
SET64(7, rd8(c, (RW(2) + 21)));
SET64(31, 0x1b0534); SET32(8, RW(0) + 1); F_0016E330(c);
SET64(2, (s32)rd32(c, (RW(18) + 160)));
SET64(5, (s32)rd32(c, (RW(2) + 248)));
SET64(25, (s32)rd32(c, (RW(5) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x1b054c); SET32(4, RW(29) + 144); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 160)));
c->f[3].u = rd32(c, (RW(29) + 156));
c->f[2].u = rd32(c, (RW(29) + 152));
c->f[1].u = rd32(c, (RW(29) + 148));
c->f[0].u = rd32(c, (RW(29) + 144));
wr32(c, (RW(4) + 268), c->f[0].u);
wr32(c, (RW(4) + 272), c->f[1].u);
wr32(c, (RW(4) + 276), c->f[2].u);
SET64(31, 0x1b0574); wr32(c, (RW(4) + 280), c->f[3].u); F_0016E300(c);
L_001B0574:;
SET64(4, RD(18) + RD(0));
L_001B0578:;
c->f[12].u = RW(0);
SET64(31, 0x1b0584);  F_001CB020(c);
SET64(2, RD(0) + RD(0));
L_001B0588:;
SET64(31, rd64(c, (RW(29) + 128)));
c->f[25].u = rd32(c, (RW(29) + 20));
rd128(c, (RW(29) + 112) & ~15u, &c->r[21]);
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 96) & ~15u, &c->r[20]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET32(29, RW(29) + 240); return;
}
void F_001AFE60(Ctx *c) { B_001AFE60(c, 0x1afe60); }
void F_001B0004(Ctx *c) { B_001AFE60(c, 0x1b0004); }
void F_001B0010(Ctx *c) { B_001AFE60(c, 0x1b0010); }
void F_001B0018(Ctx *c) { B_001AFE60(c, 0x1b0018); }
void F_001B0020(Ctx *c) { B_001AFE60(c, 0x1b0020); }
void F_001B0024(Ctx *c) { B_001AFE60(c, 0x1b0024); }
void F_001B0028(Ctx *c) { B_001AFE60(c, 0x1b0028); }
void F_001B004C(Ctx *c) { B_001AFE60(c, 0x1b004c); }
void F_001B0064(Ctx *c) { B_001AFE60(c, 0x1b0064); }

void F_001B05D0(Ctx *c) { /* func_001B05D0 */
ENTER(0x1b05d0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 44), c->f[31].u);
wr32(c, (RW(29) + 40), c->f[30].u);
wr32(c, (RW(29) + 36), c->f[29].u);
wr32(c, (RW(29) + 32), c->f[28].u);
wr32(c, (RW(29) + 28), c->f[27].u);
wr32(c, (RW(29) + 24), c->f[26].u);
wr32(c, (RW(29) + 20), c->f[25].u);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b0630); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[23].u = RW(0);
SET64(18, RD(2) + RD(0));
SET32(16, RW(0) + 1);
SET64(2, (s64)(s32)0x3f800000);
c->f[21].u = RW(2);
c->f[24].u = c->f[23].u;
c->f[25].u = c->f[23].u;
c->f[26].u = c->f[23].u;
c->f[27].u = c->f[23].u;
c->f[28].u = c->f[23].u;
c->f[29].u = c->f[23].u;
c->f[30].u = c->f[23].u;
c->f[22].u = c->f[23].u;
c->f[31].u = c->f[23].u;
wr32(c, (RW(29) + 140), c->f[23].u);
{ int t = RD(19) == RD(0); c->f[20].u = c->f[23].u; if (t) goto L_001B0690; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b0688); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[30].u = c->f[0].u;
L_001B0690:;
{ int t = RD(19) == RD(0);  if (t) goto L_001B06B0; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b06a8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[29].u = c->f[0].u;
L_001B06B0:;
{ int t = RD(19) == RD(0);  if (t) goto L_001B06D0; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b06c8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[28].u = c->f[0].u;
L_001B06D0:;
{ int t = RD(19) == RD(0);  if (t) goto L_001B06F0; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b06e8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[27].u = c->f[0].u;
L_001B06F0:;
{ int t = RD(19) == RD(0);  if (t) goto L_001B0710; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b0708); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[26].u = c->f[0].u;
L_001B0710:;
{ int t = RD(19) == RD(0);  if (t) goto L_001B0730; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b0728); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[25].u = c->f[0].u;
L_001B0730:;
{ int t = RD(19) == RD(0);  if (t) goto L_001B0750; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b0748); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[24].u = c->f[0].u;
L_001B0750:;
{ int t = RD(19) == RD(0);  if (t) goto L_001B0770; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b0768); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[23].u = c->f[0].u;
L_001B0770:;
{ int t = RD(19) == RD(0);  if (t) goto L_001B0790; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b0788); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[31].u = c->f[0].u;
L_001B0790:;
{ int t = RD(19) == RD(0);  if (t) goto L_001B07B0; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b07a8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[22].u = c->f[0].u;
L_001B07B0:;
{ int t = RD(19) == RD(0);  if (t) goto L_001B07D0; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b07c8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[21].u = c->f[0].u;
L_001B07D0:;
{ int t = RD(19) == RD(0);  if (t) goto L_001B07F0; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b07e8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
SET64(16, RD(2) + RD(0));
L_001B07F0:;
{ int t = RD(19) == RD(0);  if (t) goto L_001B0810; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b0808); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(19, (s32)rd32(c, (RW(19) + 4)));
c->f[20].u = c->f[0].u;
L_001B0810:;
if (RD(19) == RD(0)) { SET32(2, RW(18) << 2); goto L_001B0830; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b0828); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
wr32(c, (RW(29) + 140), c->f[0].u);
SET32(2, RW(18) << 2);
L_001B0830:;
SET32(3, RW(2) + RW(17));
SET64(10, (s32)rd32(c, (RW(3) + 1672)));
{ int t = RD(10) == RD(0); SET32(2, RW(3) + 1672); if (t) goto L_001B0A18; }
c->f[0].u = (u32)fpu_cvtw(F(31));
SET64(4, (s64)(s32)0x40800000);
SET64(3, RD(16) ^ 0x1);
SET32(8, RW(0) + 4);
SET64(6, RD(3) < (u64)(s64)1);
SET32(7, RW(0) + 5);
SET32(5, RW(0) + 1);
SET64(9, (s32)c->f[0].u);
c->f[0].u = (u32)fpu_cvtw(F(22));
c->f[3].u = RW(4);
SET64(4, (s32)c->f[0].u);
c->f[0].f = fpu(F(30) + F(28));
c->f[0].f = fpu(F(26) + F(0));
c->f[0].f = fpu(F(24) + F(0));
c->f[2].f = fpu_div(F(0), F(3));
c->f[0].f = fpu(F(30) - F(2));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(14, (s32)c->f[0].u);
c->f[0].f = fpu(F(28) - F(2));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(13, (s32)c->f[0].u);
c->f[0].f = fpu(F(24) - F(2));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(11, (s32)c->f[0].u);
c->f[0].f = fpu(F(29) + F(27));
c->f[0].f = fpu(F(25) + F(0));
c->f[1].f = fpu(F(26) - F(2));
wr32(c, (RW(10) + 416), c->f[2].u);
c->f[0].f = fpu(F(23) + F(0));
SET64(10, (s32)rd32(c, (RW(2) + 0)));
c->f[2].f = fpu_div(F(0), F(3));
c->f[0].f = fpu(F(29) - F(2));
wr32(c, (RW(10) + 420), c->f[2].u);
SET64(10, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = (u32)fpu_cvtw(F(0));
wr16(c, (RW(10) + 76), (u16)RW(14));
SET64(10, (s32)rd32(c, (RW(2) + 0)));
SET64(14, (s32)c->f[0].u);
c->f[0].f = fpu(F(27) - F(2));
wr16(c, (RW(10) + 78), (u16)RW(14));
SET64(10, (s32)rd32(c, (RW(2) + 0)));
c->f[1].u = (u32)fpu_cvtw(F(1));
wr16(c, (RW(10) + 80), (u16)RW(13));
SET64(10, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(13, (s32)c->f[0].u);
SET64(12, (s32)c->f[1].u);
wr16(c, (RW(10) + 82), (u16)RW(13));
c->f[1].f = fpu(F(25) - F(2));
SET64(10, (s32)rd32(c, (RW(2) + 0)));
wr16(c, (RW(10) + 84), (u16)RW(12));
c->f[1].u = (u32)fpu_cvtw(F(1));
SET64(10, (s32)rd32(c, (RW(2) + 0)));
c->f[0].f = fpu(F(23) - F(2));
SET64(12, (s32)c->f[1].u);
wr16(c, (RW(10) + 86), (u16)RW(12));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(10, (s32)rd32(c, (RW(2) + 0)));
wr16(c, (RW(10) + 88), (u16)RW(11));
SET64(10, (s32)rd32(c, (RW(2) + 0)));
SET64(11, (s32)c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 140));
wr16(c, (RW(10) + 90), (u16)RW(11));
SET64(10, (s32)rd32(c, (RW(2) + 0)));
wr16(c, (RW(10) + 92), (u16)RW(9));
wr16(c, (RW(10) + 94), (u16)RW(4));
wr32(c, (RW(10) + 96), c->f[21].u);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(4) + 216), c->f[20].u);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(4) + 220), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(4) + 232), RW(0));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(4) + 236), RW(0));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
wr16(c, (RW(4) + 102), (u16)RW(8));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
wr16(c, (RW(4) + 100), (u16)RW(7));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
wr8(c, (RW(4) + 240), (u8)RW(6));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
wr8(c, (RW(4) + 241), (u8)RW(5));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
wr8(c, (RW(4) + 0), (u8)RW(5));
wr8(c, (RW(17) + 1091), (u8)RW(5));
SET64(4, (s32)rd32(c, (RW(17) + 132)));
SET64(8, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(8) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_001B0A00; }
SET64(5, (s64)(s32)0x1b0000);
SET64(6, (s64)(s32)0x1b0000);
SET64(4, RD(0) + (s64)1);
SET32(5, RW(5) + -7616);
SET32(6, RW(6) + 2672);
SET64(7, (s32)rd32(c, (RW(8) + 16)));
L_001B09C4:;
SET64(7, (s32)rd32(c, (RW(7) + 12)));
{ int t = RD(7) != RD(6);  if (t) goto L_001B09E0; }
SET64(4, (s32)rd32(c, (RW(2) + 0)));
wr8(c, (RW(4) + 0), (u8)RW(0));
wr8(c, (RW(17) + 1091), (u8)RW(0)); goto L_001B0A00;
L_001B09E0:;
{ int t = RD(7) != RD(5);  if (t) goto L_001B09F0; }
SET64(3, RD(4) + RD(0));
L_001B09F0:;
SET64(8, (s32)rd32(c, (RW(8) + 0)));
if (RD(8) != RD(0)) { SET64(7, (s32)rd32(c, (RW(8) + 16))); { POLL(); goto L_001B09C4; } }
L_001B0A00:;
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 112))); goto L_001B0A1C; }
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(3) + 100)));
SET64(2, RD(2) | 0x8000);
wr16(c, (RW(3) + 100), (u16)RW(2));
L_001B0A18:;
SET64(31, rd64(c, (RW(29) + 112)));
L_001B0A1C:;
c->f[31].u = rd32(c, (RW(29) + 44));
rd128(c, (RW(29) + 96) & ~15u, &c->r[19]);
c->f[30].u = rd32(c, (RW(29) + 40));
rd128(c, (RW(29) + 80) & ~15u, &c->r[18]);
c->f[29].u = rd32(c, (RW(29) + 36));
rd128(c, (RW(29) + 64) & ~15u, &c->r[17]);
c->f[28].u = rd32(c, (RW(29) + 32));
rd128(c, (RW(29) + 48) & ~15u, &c->r[16]);
c->f[27].u = rd32(c, (RW(29) + 28));
c->f[26].u = rd32(c, (RW(29) + 24));
SET64(2, RD(0) + RD(0));
c->f[25].u = rd32(c, (RW(29) + 20));
c->f[24].u = rd32(c, (RW(29) + 16));
c->f[23].u = rd32(c, (RW(29) + 12));
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 144); return;
}

void F_001B0A70(Ctx *c) { /* func_001B0A70 */
ENTER(0x1b0a70);
SET32(29, RW(29) + -208);
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
SET64(17, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(6) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b0ab8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(22, RD(0) + (s64)1);
SET64(18, RD(2) + RD(0));
SET64(23, RD(0) + RD(0));
SET64(30, RD(0) + RD(0));
wr8(c, (RW(29) + 192), (u8)RW(22));
wr8(c, (RW(29) + 176), (u8)RW(0));
SET64(20, RD(22) + RD(0));
{ int t = RD(17) == RD(0); wr8(c, (RW(29) + 160), (u8)RW(0)); if (t) goto L_001B0B04; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1b0af0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(2) + RD(0));
SET64(31, 0x1b0afc); SET64(5, RD(0) + RD(0)); F_00157370(c);
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(23, RD(2) + RD(0));
L_001B0B04:;
if (RD(17) == RD(0)) { SET32(2, RW(0) + 2); goto L_001B0B34; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1b0b1c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(2) + RD(0));
SET64(31, 0x1b0b28); SET64(5, RD(0) + RD(0)); F_00157370(c);
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(30, RD(2) + RD(0));
SET32(2, RW(0) + 2);
L_001B0B34:;
{ int t = RD(16) != RD(2);  if (t) goto L_001B0B44; }
SET64(2, RD(0) + RD(0)); goto L_001B0EDC;
L_001B0B44:;
{ int t = RD(17) == RD(0);  if (t) goto L_001B0B74; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b0b5c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(22, RD(0) < RD(2)); if (t) goto L_001B0B70; }
SET64(2, RD(3) & 0xff);
wr8(c, (RW(29) + 176), (u8)RW(2));
L_001B0B70:;
SET64(17, (s32)rd32(c, (RW(17) + 4)));
L_001B0B74:;
{ int t = RD(17) == RD(0);  if (t) goto L_001B0BAC; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b0b8c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, RD(0) < RD(2));
wr8(c, (RW(29) + 192), (u8)RW(3));
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET64(17, (s32)rd32(c, (RW(17) + 4))); goto L_001B0BAC; }
SET64(2, RD(3) & 0xff);
wr8(c, (RW(29) + 160), (u8)RW(2));
SET64(17, (s32)rd32(c, (RW(17) + 4)));
L_001B0BAC:;
{ int t = RD(17) == RD(0);  if (t) goto L_001B0BC8; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b0bc4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(20, RD(0) < RD(2));
L_001B0BC8:;
if (RD(16) != RD(0)) { SET32(2, RW(18) << 2); goto L_001B0C10; }
SET32(2, RW(18) << 2);
SET32(2, RW(2) + RW(21));
SET32(16, RW(2) + 1672);
SET64(2, (s32)rd32(c, (RW(2) + 1672)));
SET64(31, 0x1b0be8); SET64(4, (s32)rd32(c, (RW(2) + 8))); F_00321F90(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, (s32)rd32(c, (RW(3) + 16)));
SET64(31, 0x1b0bf8); SET64(16, RD(2) + RD(0)); F_00321F90(c);
SET64(4, RD(21) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x1b0c08); SET64(6, RD(2) + RD(0)); F_001A4030(c);
SET64(2, RD(0) + RD(0)); goto L_001B0EDC;
L_001B0C10:;
SET32(2, RW(2) + RW(21));
SET64(17, (s32)rd32(c, (RW(2) + 1672)));
{ int t = RD(17) == RD(0); SET32(16, RW(2) + 1672); if (t) goto L_001B0C6C; }
if (RD(17) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_001B0C68; }
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET32(2, RW(0) + -1);
if (RD(4) == RD(2)) { SET64(4, (s32)rd32(c, (RW(17) + 16))); goto L_001B0C44; }
SET64(31, 0x1b0c40);  F_003219B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
L_001B0C44:;
SET32(2, RW(0) + -1);
if (RD(4) == RD(2)) { SET64(4, RD(17) + RD(0)); goto L_001B0C5C; }
SET64(31, 0x1b0c58);  F_003219B0(c);
SET64(4, RD(17) + RD(0));
L_001B0C5C:;
SET64(31, 0x1b0c64);  F_001004B0(c);
wr32(c, (RW(16) + 0), RW(0));
L_001B0C68:;
wr32(c, (RW(16) + 0), RW(0));
L_001B0C6C:;
SET64(31, 0x1b0c74); SET32(4, RW(0) + 512); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001B0DF8; }
SET64(31, 0x1b0c84); SET32(4, RW(19) + 92); F_001B0F50(c);
SET64(31, 0x1b0c8c); SET32(4, RW(19) + 100); F_001B0F20(c);
SET32(18, RW(19) + 256);
L_001B0C90:;
SET64(31, 0x1b0c98); SET64(4, RD(18) + RD(0)); F_00149480(c);
SET32(18, RW(18) + 16);
SET32(17, RW(19) + 320);
SET64(2, RD(18) < RD(17));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001B0C90; } }
L_001B0CAC:;
SET64(31, 0x1b0cb4); SET64(4, RD(17) + RD(0)); F_00149480(c);
SET32(17, RW(17) + 16);
SET32(4, RW(19) + 384);
SET64(2, RD(17) < RD(4));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001B0CAC; } }
SET64(31, 0x1b0cd0);  F_00149480(c);
SET64(31, 0x1b0cd8); SET32(4, RW(19) + 400); F_00149480(c);
SET64(31, 0x1b0ce0); SET32(4, RW(19) + 432); F_00149480(c);
SET64(31, 0x1b0ce8); SET32(4, RW(19) + 448); F_00149480(c);
SET64(31, 0x1b0cf0); SET32(4, RW(19) + 464); F_00149480(c);
SET64(31, 0x1b0cf8); SET32(4, RW(19) + 480); F_00149480(c);
wr8(c, (RW(19) + 0), (u8)RW(0));
SET32(2, RW(0) + -1);
wr8(c, (RW(19) + 1), (u8)RW(0));
SET32(6, RW(0) + 1);
wr32(c, (RW(19) + 16), RW(2));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(19) + 8), RW(2));
SET32(4, RW(19) + 104);
wr32(c, (RW(19) + 220), RW(0));
SET32(2, RW(19) + 76);
wr32(c, (RW(19) + 216), RW(0));
SET32(5, RW(21) + 244);
wr32(c, (RW(19) + 228), RW(0));
wr32(c, (RW(19) + 224), RW(0));
wr32(c, (RW(19) + 236), RW(0));
wr32(c, (RW(19) + 232), RW(0));
wr8(c, (RW(19) + 20), (u8)RW(6));
wr8(c, (RW(19) + 21), (u8)RW(6));
wr8(c, (RW(19) + 22), (u8)RW(0));
wr8(c, (RW(19) + 23), (u8)RW(0));
wr32(c, (RW(19) + 24), RW(3));
wr32(c, (RW(19) + 144), RW(0));
wr32(c, (RW(19) + 140), RW(0));
wr32(c, (RW(19) + 136), RW(0));
wr32(c, (RW(19) + 132), RW(0));
wr32(c, (RW(19) + 196), RW(0));
wr32(c, (RW(19) + 164), RW(0));
c->f[0].u = rd32(c, (RW(21) + 1624));
wr32(c, (RW(19) + 28), c->f[0].u);
c->f[0].u = rd32(c, (RW(21) + 1628));
wr32(c, (RW(19) + 32), c->f[0].u);
c->f[0].u = rd32(c, (RW(21) + 1632));
wr32(c, (RW(19) + 36), c->f[0].u);
c->f[0].u = rd32(c, (RW(21) + 1636));
wr32(c, (RW(19) + 40), c->f[0].u);
c->f[0].u = rd32(c, (RW(21) + 1640));
wr32(c, (RW(19) + 44), c->f[0].u);
c->f[0].u = rd32(c, (RW(21) + 1644));
wr32(c, (RW(19) + 48), c->f[0].u);
c->f[0].u = rd32(c, (RW(21) + 1648));
wr32(c, (RW(19) + 52), c->f[0].u);
c->f[0].u = rd32(c, (RW(21) + 1652));
wr32(c, (RW(19) + 56), c->f[0].u);
c->f[0].u = rd32(c, (RW(21) + 1656));
wr32(c, (RW(19) + 60), c->f[0].u);
c->f[0].u = rd32(c, (RW(21) + 1660));
wr32(c, (RW(19) + 64), c->f[0].u);
c->f[0].u = rd32(c, (RW(21) + 1664));
wr32(c, (RW(19) + 68), c->f[0].u);
c->f[0].u = rd32(c, (RW(21) + 1668));
wr32(c, (RW(19) + 72), c->f[0].u);
SET64(31, 0x1b0dcc); wr32(c, (RW(19) + 120), RW(2)); F_001B0F10(c);
SET32(4, RW(19) + 108);
SET64(31, 0x1b0dd8); SET32(5, RW(21) + 248); F_001B0F10(c);
SET32(3, RW(19) + 92);
SET32(2, RW(0) + 1);
wr32(c, (RW(19) + 128), RW(3));
wr32(c, (RW(19) + 124), RW(0));
wr8(c, (RW(19) + 240), (u8)RW(2));
wr8(c, (RW(19) + 241), (u8)RW(2));
wr8(c, (RW(19) + 242), (u8)RW(0));
wr8(c, (RW(19) + 184), (u8)RW(0));
L_001B0DF8:;
wr32(c, (RW(16) + 0), RW(19));
SET64(4, RD(23) + RD(0));
wr32(c, (RW(19) + 4), RW(23));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1b0e14); wr32(c, (RW(2) + 12), RW(30)); F_00321EA0(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(30) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x1b0e28); wr32(c, (RW(3) + 8), RW(2)); F_00321EA0(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(3) + 16), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr8(c, (RW(2) + 20), (u8)RW(22));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, rd8(c, (RW(29) + 192)));
wr8(c, (RW(3) + 21), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, rd8(c, (RW(29) + 176)));
wr8(c, (RW(3) + 22), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, rd8(c, (RW(29) + 160)));
{ int t = RSD(20) < 0; wr8(c, (RW(3) + 23), (u8)RW(2)); if (t) goto L_001B0E6C; }
c->f[0].u = RW(20);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001B0E88;
L_001B0E6C:;
SET32(3, RW(20) >> 1);
SET64(2, RD(20) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_001B0E88:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(2) + 24), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr8(c, (RW(2) + 0), (u8)RW(0));
wr8(c, (RW(21) + 1091), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 16)));
SET64(2, (s32)rd32(c, (RW(2) + 8)));
if (RD(2) != RD(3)) { wr8(c, (RW(21) + 1089), (u8)RW(0)); goto L_001B0EC8; }
SET32(2, RW(0) + -1);
{ int t = RD(3) == RD(2);  if (t) goto L_001B0EC4; }
SET32(2, RW(0) + 1);
wr8(c, (RW(21) + 1088), (u8)RW(2));
L_001B0EC4:;
wr8(c, (RW(21) + 1089), (u8)RW(0));
L_001B0EC8:;
SET64(2, RD(0) + RD(0));
wr32(c, (RW(21) + 1084), RW(0));
wr8(c, (RW(21) + 1074), (u8)RW(0));
wr8(c, (RW(21) + 1080), (u8)RW(0));
wr8(c, (RW(21) + 1090), (u8)RW(0));
L_001B0EDC:;
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
SET32(29, RW(29) + 208); return;
}

void F_001B0F10(Ctx *c) { /* func_001B0F10 */
ENTER(0x1b0f10);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 0), RW(3)); return;
}

void F_001B0F20(Ctx *c) { /* func_001B0F20 */
ENTER(0x1b0f20);
SET32(3, RW(0) + 128);
SET64(2, RD(4) + RD(0));
wr8(c, (RW(4) + 4), (u8)RW(3));
wr8(c, (RW(4) + 5), (u8)RW(3));
wr8(c, (RW(4) + 6), (u8)RW(3));
wr8(c, (RW(4) + 7), (u8)RW(3));
wr8(c, (RW(4) + 8), (u8)RW(3));
wr8(c, (RW(4) + 9), (u8)RW(3));
wr8(c, (RW(4) + 10), (u8)RW(3));
wr8(c, (RW(4) + 11), (u8)RW(3)); return;
}

void F_001B0F50(Ctx *c) { /* func_001B0F50 */
ENTER(0x1b0f50);
SET64(3, (s16)rd16(c, (RW(28) + -32248)));
SET64(2, RD(4) + RD(0));
wr16(c, (RW(4) + 0), (u16)RW(3));
SET64(3, (s16)rd16(c, (RW(28) + -32244)));
wr16(c, (RW(4) + 2), (u16)RW(3));
c->f[0].u = rd32(c, (RW(28) + -32240));
wr32(c, (RW(4) + 4), c->f[0].u); return;
}

void F_001B0F70(Ctx *c) { /* func_001B0F70 */
ENTER(0x1b0f70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001B1060; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -10848);
SET32(2, RW(2) + -10824);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1b0fb4);  rt_call(c, t); }
SET64(5, (s64)(s32)0x1b0000);
SET32(4, RW(17) + 352);
SET32(5, RW(5) + 4224);
SET32(6, RW(0) + 400);
SET64(31, 0x1b0fcc); SET32(7, RW(0) + 4); F_00102360(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_001B104C; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -10288);
SET32(2, RW(2) + -10264);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1b0ffc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 160);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_001B1040; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1b1024);  rt_call(c, t); }
SET32(2, RW(17) + 160);
{ int t = RD(2) == RD(0);  if (t) goto L_001B103C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30016);
wr32(c, (RW(17) + 172), RW(2));
L_001B103C:;
SET64(4, RD(17) + RD(0));
L_001B1040:;
SET64(31, 0x1b1048); SET64(5, RD(0) + RD(0)); F_002409D0(c);
SET64(2, RD(16) << 48);
L_001B104C:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001B1064; }
SET64(31, 0x1b1060); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001B1060:;
SET64(2, RD(17) + RD(0));
L_001B1064:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B1080(Ctx *c) { /* func_001B1080 */
ENTER(0x1b1080);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001B1160; }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_001B114C; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -10432);
SET32(2, RW(2) + -10408);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1b10cc);  rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_001B1148; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -10288);
SET32(2, RW(2) + -10264);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1b10fc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 160);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_001B1140; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1b1124);  rt_call(c, t); }
SET32(2, RW(17) + 160);
{ int t = RD(2) == RD(0);  if (t) goto L_001B113C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30016);
wr32(c, (RW(17) + 172), RW(2));
L_001B113C:;
SET64(4, RD(17) + RD(0));
L_001B1140:;
SET64(31, 0x1b1148); SET64(5, RD(0) + RD(0)); F_002409D0(c);
L_001B1148:;
SET64(2, RD(16) << 48);
L_001B114C:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001B1164; }
SET64(31, 0x1b1160); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001B1160:;
SET64(2, RD(17) + RD(0));
L_001B1164:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B1180(Ctx *c) { /* func_001B1180 */
ENTER(0x1b1180);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(5, rd16(c, (RW(4) + 1954)));
SET64(2, rd8(c, (RW(4) + 1952)));
SET64(2, RSD(5) < RSD(2));
{ int t = RD(2) != RD(0); c->f[20].u = c->f[12].u; if (t) goto L_001B11B8; }
SET32(2, RW(0) + 1); goto L_001B12E0;
L_001B11B8:;
SET32(3, RW(5) << 2);
SET64(2, rd8(c, (RW(17) + 1953)));
SET32(4, RW(3) + RW(5));
SET32(3, RW(4) << 2);
SET32(3, RW(4) + RW(3));
SET32(3, RW(3) << 4);
SET32(3, RW(17) + RW(3));
{ int t = RD(2) != RD(0); SET32(16, RW(3) + 352); if (t) goto L_001B1228; }
SET32(2, RW(2) + 1);
SET64(6, RD(17) + RD(0));
{ int t = RD(17) == RD(0); wr8(c, (RW(17) + 1953), (u8)RW(2)); if (t) goto L_001B11F0; }
SET32(6, RW(6) + 160);
L_001B11F0:;
SET64(25, (s32)rd32(c, (RW(16) + 144)));
SET64(4, RD(16) + RD(0));
SET64(7, (s32)rd32(c, (RW(17) + 1960)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x1b1208); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 384)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(25, (s32)rd32(c, (RW(16) + 144))); goto L_001B12D0; }
SET64(2, rd16(c, (RW(16) + 396)));
wr16(c, (RW(16) + 380), (u16)RW(0));
wr16(c, (RW(16) + 382), (u16)RW(2)); goto L_001B12CC;
L_001B1228:;
c->f[1].u = rd32(c, (RW(16) + 392));
c->f[0].u = RW(0);
c->fcc = F(0) == F(1);
{ int t = c->fcc; SET64(18, RD(0) + RD(0)); if (t) goto L_001B1264; }
c->f[0].u = rd32(c, (RW(17) + 1956));
c->fcc = F(1) <= F(0);
if (!c->fcc) { c->f[0].u = rd32(c, (RW(17) + 1956)); goto L_001B1258; }
SET64(18, RD(0) + (s64)1);
c->f[0].u = rd32(c, (RW(17) + 1956));
L_001B1258:;
c->f[0].f = fpu(F(0) + F(20));
wr32(c, (RW(17) + 1956), c->f[0].u); goto L_001B1284;
L_001B1264:;
SET64(25, (s32)rd32(c, (RW(16) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x1b1274); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_001B1284; }
SET64(18, RD(0) + (s64)1);
L_001B1284:;
{ int t = RD(18) == RD(0);  if (t) goto L_001B12CC; }
SET64(25, (s32)rd32(c, (RW(16) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x1b129c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 1956), RW(0));
c->f[12].u = c->f[20].u;
wr8(c, (RW(17) + 1953), (u8)RW(0));
SET64(2, rd16(c, (RW(17) + 1954)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 1954), (u16)RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x1b12c4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64))); goto L_001B12E4;
L_001B12CC:;
SET64(25, (s32)rd32(c, (RW(16) + 144)));
L_001B12D0:;
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x1b12dc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) + RD(0));
L_001B12E0:;
SET64(31, rd64(c, (RW(29) + 64)));
L_001B12E4:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001B1300(Ctx *c) { /* func_001B1300 */
ENTER(0x1b1300);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 1952)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001B1350; }
SET64(17, RD(16) + RD(0));
L_001B1328:;
SET64(25, (s32)rd32(c, (RW(17) + 496)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x1b1338); SET32(4, RW(17) + 352); rt_call(c, t); }
SET64(3, rd8(c, (RW(16) + 1952)));
SET32(18, RW(18) + 1);
SET64(3, RD(18) < RD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 400); if (t) { POLL(); goto L_001B1328; } }
L_001B1350:;
SET64(4, (s32)rd32(c, (RW(16) + 332)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 332), RW(0)); goto L_001B1368; }
SET64(31, 0x1b1364); SET64(5, RD(16) + RD(0)); F_00240930(c);
wr32(c, (RW(16) + 332), RW(0));
L_001B1368:;
SET64(3, (s16)rd16(c, (RW(16) + 344)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001B13A0; }
SET64(17, RD(16) + RD(0));
L_001B1378:;
SET64(4, (s32)rd32(c, (RW(17) + 204)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x1b138c);  rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(16) + 344)));
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001B1378; } }
L_001B13A0:;
SET64(3, (s32)rd32(c, (RW(16) + 160)));
if (RD(3) == RD(0)) { wr32(c, (RW(16) + 164), RW(0)); goto L_001B140C; }
SET64(4, (s32)rd32(c, (RW(3) + 8)));
SET32(5, RW(3) + 8);
SET32(3, RW(16) + 160);
if (RD(4) != RD(3)) { SET32(5, RW(4) + 4); goto L_001B13D4; }
SET64(3, (s32)rd32(c, (RW(16) + 164)));
if (RD(3) != RD(0)) { wr32(c, (RW(5) + 0), RW(3)); goto L_001B1408; }
wr32(c, (RW(5) + 0), RW(0)); goto L_001B1408;
L_001B13D4:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(4) == RD(3);  if (t) goto L_001B1400; }
L_001B13E0:;
SET32(5, RW(4) + 4);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(4) != RD(3);  if (t) { POLL(); goto L_001B13E0; } }
L_001B1400:;
SET64(3, (s32)rd32(c, (RW(16) + 164)));
wr32(c, (RW(5) + 0), RW(3));
L_001B1408:;
wr32(c, (RW(16) + 164), RW(0));
L_001B140C:;
wr32(c, (RW(16) + 160), RW(0));
wr16(c, (RW(16) + 348), (u16)RW(0));
wr32(c, (RW(16) + 340), RW(0));
wr16(c, (RW(16) + 346), (u16)RW(0));
wr32(c, (RW(16) + 336), RW(0));
wr16(c, (RW(16) + 350), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B1440(Ctx *c) { /* func_001B1440 */
ENTER(0x1b1440);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x1b145c); SET64(16, RD(7) + RD(0)); F_001B53B0(c);
wr32(c, (RW(17) + 1960), RW(16));
wr32(c, (RW(17) + 1956), RW(0));
wr16(c, (RW(17) + 1954), (u16)RW(0));
wr8(c, (RW(17) + 1953), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B1480(Ctx *c) { /* func_001B1480 */
ENTER(0x1b1480);
 return;
}

void F_001B1490(Ctx *c) { /* func_001B1490 */
ENTER(0x1b1490);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, rd8(c, (RW(4) + 1952)));
{ int t = RD(3) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001B14F8; }
SET64(18, RD(17) + RD(0));
L_001B14C0:;
SET64(25, (s32)rd32(c, (RW(16) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1b14d0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 496)));
SET32(4, RW(18) + 352);
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x1b14e4); SET64(5, RD(2) + RD(0)); rt_call(c, t); }
SET64(3, rd8(c, (RW(17) + 1952)));
SET32(19, RW(19) + 1);
SET64(3, RD(19) < RD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 400); if (t) { POLL(); goto L_001B14C0; } }
L_001B14F8:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001B1520(Ctx *c) { /* func_001B1520 */
ENTER(0x1b1520);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(17) + RD(0));
L_001B1540:;
SET64(25, (s32)rd32(c, (RW(16) + 496)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x1b1550); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET32(18, RW(18) + 1); goto L_001B1564; }
SET64(2, RD(0) + RD(0)); goto L_001B15BC;
L_001B1564:;
SET64(2, RD(18) < (u64)(s64)4);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 400); if (t) { POLL(); goto L_001B1540; } }
SET64(2, (s16)rd16(c, (RW(17) + 344)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_001B15B8; }
SET64(18, RD(17) + RD(0));
L_001B1580:;
SET64(2, (s32)rd32(c, (RW(18) + 204)));
SET64(25, (s32)rd32(c, (RW(2) + 160)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1b1594); SET32(4, RW(2) + 144); rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(2, (s16)rd16(c, (RW(17) + 344))); goto L_001B15A4; }
SET64(2, RD(0) + RD(0)); goto L_001B15BC;
L_001B15A4:;
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_001B1580; } }
L_001B15B8:;
SET64(2, RD(0) + (s64)1);
L_001B15BC:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B15E0(Ctx *c) { /* func_001B15E0 */
ENTER(0x1b15e0);
SET32(29, RW(29) + -64);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1b1600); SET64(16, RD(4) + RD(0)); F_00240890(c);
SET64(4, RD(0) + RD(0));
SET64(3, RD(16) + RD(0));
L_001B1608:;
wr32(c, (RW(3) + 204), RW(0));
SET32(4, RW(4) + 8);
wr32(c, (RW(3) + 208), RW(0));
SET64(2, RSD(4) < (s64)32);
wr32(c, (RW(3) + 212), RW(0));
wr32(c, (RW(3) + 216), RW(0));
wr32(c, (RW(3) + 220), RW(0));
wr32(c, (RW(3) + 224), RW(0));
wr32(c, (RW(3) + 228), RW(0));
wr32(c, (RW(3) + 232), RW(0));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 32); if (t) { POLL(); goto L_001B1608; } }
wr16(c, (RW(16) + 344), (u16)RW(0));
SET64(18, RD(0) + RD(0));
wr32(c, (RW(16) + 332), RW(0));
SET64(17, RD(16) + RD(0));
wr16(c, (RW(16) + 348), (u16)RW(0));
wr32(c, (RW(16) + 340), RW(0));
wr16(c, (RW(16) + 346), (u16)RW(0));
wr32(c, (RW(16) + 336), RW(0));
L_001B1658:;
SET64(25, (s32)rd32(c, (RW(17) + 496)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1b1668); SET32(4, RW(17) + 352); rt_call(c, t); }
SET32(18, RW(18) + 1);
SET64(3, RD(18) < (u64)(s64)4);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 400); if (t) { POLL(); goto L_001B1658; } }
wr32(c, (RW(16) + 1960), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B16A0(Ctx *c) { /* func_001B16A0 */
ENTER(0x1b16a0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 332), RW(0));
wr16(c, (RW(4) + 348), (u16)RW(0));
wr16(c, (RW(4) + 350), (u16)RW(0));
SET64(3, rd8(c, (RW(4) + 1952)));
{ int t = RD(3) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_001B1710; }
SET64(16, RD(18) + RD(0));
L_001B16D8:;
SET64(25, (s32)rd32(c, (RW(16) + 496)));
SET32(19, RW(16) + 352);
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x1b16ec); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(19) + 388)));
SET32(17, RW(17) + 1);
wr16(c, (RW(19) + 376), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(19) + 384)));
wr32(c, (RW(19) + 368), RW(3));
SET64(3, rd8(c, (RW(18) + 1952)));
SET64(3, RD(17) < RD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 400); if (t) { POLL(); goto L_001B16D8; } }
L_001B1710:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001B1730(Ctx *c) { /* func_001B1730 */
ENTER(0x1b1730);
SET64(8, rd8(c, (RW(4) + 1952)));
SET32(9, RW(8) + 1);
SET32(3, RW(8) << 2);
SET32(8, RW(3) + RW(8));
wr8(c, (RW(4) + 1952), (u8)RW(9));
SET32(3, RW(8) << 2);
SET32(3, RW(8) + RW(3));
SET32(3, RW(3) << 4);
SET32(3, RW(4) + RW(3));
wr16(c, (RW(3) + 740), (u16)RW(5));
wr32(c, (RW(3) + 736), RW(6));
wr32(c, (RW(3) + 744), c->f[12].u);
wr16(c, (RW(3) + 748), (u16)RW(7)); return;
}

void F_001B1770(Ctx *c) { /* func_001B1770 */
ENTER(0x1b1770);
SET32(29, RW(29) + -256);
SET32(3, RW(0) + 7);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
{ int t = RD(17) == RD(3); SET64(16, RD(6) + RD(0)); if (t) goto L_001B18DC; }
SET32(3, RW(0) + 5);
if (RD(17) == RD(3)) { rd128(c, (RW(16) + 0) & ~15u, &c->r[2]); goto L_001B18B4; }
SET32(3, RW(0) + 9);
if (RD(17) == RD(3)) { rd128(c, (RW(16) + 0) & ~15u, &c->r[3]); goto L_001B18AC; }
SET64(3, (s32)rd32(c, (RW(19) + 352)));
if (RD(3) == RD(0)) { SET32(3, RW(0) + 11); goto L_001B17D4; }
{ u32 t = RW(3); SET64(31, 0x1b17c8);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_001B192C; }
SET32(3, RW(0) + 11);
L_001B17D4:;
if (RD(17) == RD(3)) { SET64(5, (s32)rd32(c, (RW(16) + 0))); goto L_001B189C; }
SET32(3, RW(0) + 3);
if (RD(17) == RD(3)) { SET64(2, (s64)(s32)0x3f800000); goto L_001B1870; }
wr32(c, (RW(29) + 252), RW(17));
SET64(3, (s16)rd16(c, (RW(19) + 360)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001B1928; }
SET64(17, RD(19) + RD(0));
SET64(16, RD(0) + RD(0));
L_001B1800:;
SET64(4, (s32)rd32(c, (RW(17) + 204)));
{ int t = RD(4) == RD(0);  if (t) goto L_001B1850; }
SET64(5, (s32)rd32(c, (RW(19) + 356)));
SET32(3, RW(0) + 5);
SET32(5, RW(5) + RW(16));
SET64(5, (s32)rd32(c, (RW(5) + 160)));
{ int t = RD(5) == RD(3);  if (t) goto L_001B1838; }
{ int t = RD(5) == RD(0);  if (t) goto L_001B1850; }
 goto L_001B1850;
L_001B1838:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET32(5, RW(0) + 11);
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x1b184c); SET32(6, RW(29) + 252); rt_call(c, t); }
L_001B1850:;
SET64(3, (s16)rd16(c, (RW(19) + 360)));
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 4);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 208); if (t) { POLL(); goto L_001B1800; } }
 goto L_001B1928;
L_001B1870:;
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 148), RW(0));
SET64(4, RD(19) + RD(0));
wr32(c, (RW(29) + 156), RW(2));
SET32(5, RW(29) + 144);
wr32(c, (RW(29) + 152), RW(0));
rd128(c, (RW(16) + 0) & ~15u, &c->r[2]);
SET64(31, 0x1b1894); wr128(c, (RW(29) + 144) & ~15u, &c->r[2]); F_001B2090(c);
 goto L_001B1928;
L_001B189C:;
SET64(31, 0x1b18a4); SET64(4, RD(19) + RD(0)); F_001B1EC0(c);
 goto L_001B1928;
L_001B18AC:;
wr128(c, (RW(19) + 400) & ~15u, &c->r[3]); goto L_001B1928;
L_001B18B4:;
SET64(3, (s64)(s32)0x3f800000);
SET32(5, RW(29) + 176);
wr32(c, (RW(29) + 188), RW(3));
wr32(c, (RW(29) + 176), RW(0));
wr32(c, (RW(29) + 180), RW(0));
wr32(c, (RW(29) + 184), RW(0));
SET64(31, 0x1b18d4); wr128(c, (RW(29) + 176) & ~15u, &c->r[2]); F_001B1980(c);
 goto L_001B1928;
L_001B18DC:;
rd128(c, (RW(16) + 0) & ~15u, &c->r[2]);
SET32(4, RW(29) + 80);
SET64(31, 0x1b18ec); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); F_002AC130(c);
rd128(c, (RW(19) + 0) & ~15u, &c->r[3]);
SET32(5, RW(29) + 80);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[3]);
rd128(c, (RW(19) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[3]);
rd128(c, (RW(19) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[3]);
rd128(c, (RW(19) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(19) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x1b1928); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
L_001B1928:;
SET64(31, rd64(c, (RW(29) + 64)));
L_001B192C:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 256); return;
}

void F_001B1950(Ctx *c) { /* func_001B1950 */
ENTER(0x1b1950);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 180)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_001B1978; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x1b1974);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_001B1978:;
SET32(29, RW(29) + 16); return;
}

void F_001B1980(Ctx *c) { /* func_001B1980 */
ENTER(0x1b1980);
SET32(29, RW(29) + -256);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x1b19a0); SET32(4, RW(29) + 192); F_002AC130(c);
rd128(c, (RW(17) + 0) & ~15u, &c->r[2]);
SET32(4, RW(29) + 48);
wr128(c, (RW(29) + 192) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 208) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 224) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 240) & ~15u, &c->r[2]);
SET64(31, 0x1b19cc); wr128(c, (RW(29) + 176) & ~15u, &c->r[2]); F_0013AEA0(c);
SET64(5, RD(16) + RD(0));
SET64(31, 0x1b19d8); SET32(4, RW(29) + 48); F_00180BE0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1b19e4); SET32(4, RW(29) + 112); F_0013ADA0(c);
SET32(4, RW(29) + 192);
SET32(6, RW(29) + 112);
SET64(31, 0x1b19f4); SET64(5, RD(4) + RD(0)); F_00106578(c);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
SET64(4, RD(17) + RD(0));
wr128(c, (RW(29) + 240) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x1b1a10); SET32(5, RW(29) + 192); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 256); return;
}

void F_001B1A30(Ctx *c) { /* func_001B1A30 */
ENTER(0x1b1a30);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(4) + RD(0));
SET64(31, 0x1b1a50); SET32(4, RW(29) + 64); F_002AC130(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 48), RW(0));
wr32(c, (RW(29) + 60), RW(2));
c->f[4].u = rd32(c, (RW(17) + 0));
rd128(c, (RW(16) + 0) & ~15u, &c->r[2]);
c->f[3].u = rd32(c, (RW(17) + 4));
wr32(c, (RW(29) + 52), RW(0));
c->f[1].u = rd32(c, (RW(17) + 8));
wr32(c, (RW(29) + 56), RW(0));
SET32(5, RW(29) + 64);
wr128(c, (RW(29) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[2]);
c->f[5].u = rd32(c, (RW(29) + 48));
wr128(c, (RW(29) + 112) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 52));
c->f[0].u = rd32(c, (RW(29) + 56));
c->f[4].f = fpu(F(5) + F(4));
c->f[2].f = fpu(F(2) + F(3));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 48), c->f[4].u);
wr32(c, (RW(29) + 52), c->f[2].u);
wr32(c, (RW(29) + 56), c->f[0].u);
rd128(c, (RW(29) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(16) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x1b1ad4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_001B1AF0(Ctx *c) { /* func_001B1AF0 */
ENTER(0x1b1af0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x1b1b08); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_001B4440(c);
SET64(16, RD(2) & 0xff);
wr32(c, (RW(29) + 48), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 52), RW(0));
wr32(c, (RW(29) + 60), RW(2));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(29) + 56), RW(0));
SET32(5, RW(29) + 48);
rd128(c, (RW(17) + 400) & ~15u, &c->r[2]);
SET64(31, 0x1b1b34); wr128(c, (RW(29) + 48) & ~15u, &c->r[2]); F_001B1A30(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B1B50(Ctx *c) { /* func_001B1B50 */
ENTER(0x1b1b50);
SET32(29, RW(29) + -96);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr32(c, (RW(29) + 80), RW(0));
SET64(17, RD(7) + RD(0));
wr32(c, (RW(29) + 84), RW(0));
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 92), RW(2));
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 76), RW(2));
wr32(c, (RW(29) + 68), RW(0));
wr32(c, (RW(29) + 72), RW(0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 400) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 384) & ~15u, &c->r[2]);
SET64(16, (s16)rd16(c, (RW(4) + 344)));
SET64(31, 0x1b1bac); wr16(c, (RW(4) + 344), (u16)RW(0)); F_001B53B0(c);
wr16(c, (RW(18) + 344), (u16)RW(16));
wr32(c, (RW(18) + 364), RW(17));
wr32(c, (RW(18) + 372), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001B1BD0(Ctx *c) { /* func_001B1BD0 */
ENTER(0x1b1bd0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s16)rd16(c, (RW(4) + 360)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001B1D70; }
SET64(17, RD(20) + RD(0));
SET64(16, RD(0) + RD(0));
L_001B1C08:;
SET64(4, (s32)rd32(c, (RW(17) + 204)));
{ int t = RD(4) == RD(0);  if (t) goto L_001B1D58; }
SET64(3, (s32)rd32(c, (RW(20) + 356)));
SET32(5, RW(0) + 4);
SET32(3, RW(3) + RW(16));
SET64(3, (s32)rd32(c, (RW(3) + 160)));
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D48; }
SET32(5, RW(0) + 928);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D48; }
SET32(5, RW(0) + 896);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D48; }
SET32(5, RW(0) + 384);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D48; }
SET32(5, RW(0) + 448);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D48; }
SET32(5, RW(0) + 416);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D48; }
SET32(5, RW(0) + 400);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D48; }
SET32(5, RW(0) + 262);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D48; }
SET32(5, RW(0) + 672);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D30; }
SET32(5, RW(0) + 640);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D30; }
SET32(5, RW(0) + 128);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D30; }
SET32(5, RW(0) + 192);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D30; }
SET32(5, RW(0) + 160);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D30; }
SET32(5, RW(0) + 144);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D30; }
SET32(5, RW(0) + 6);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D30; }
SET32(5, RW(0) + 3);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D18; }
SET32(5, RW(0) + 2);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D18; }
SET32(5, RW(0) + 1);
{ int t = RD(3) == RD(5);  if (t) goto L_001B1D18; }
SET32(4, RW(0) + 5);
{ int t = RD(3) == RD(4);  if (t) goto L_001B1D58; }
{ int t = RD(3) == RD(0);  if (t) goto L_001B1D58; }
 goto L_001B1D58;
L_001B1D18:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x1b1d28); SET64(5, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001B1D58;
L_001B1D30:;
SET64(4, (s32)rd32(c, (RW(4) + 176)));
SET64(31, 0x1b1d3c); SET64(5, RD(19) + RD(0)); F_00152A10(c);
 goto L_001B1D58;
L_001B1D48:;
SET32(4, RW(4) + 192);
SET64(31, 0x1b1d54); SET64(5, RD(19) + RD(0)); F_00152A10(c);
L_001B1D58:;
SET64(3, (s16)rd16(c, (RW(20) + 360)));
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 4);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 208); if (t) { POLL(); goto L_001B1C08; } }
L_001B1D70:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001B1D90(Ctx *c) { /* func_001B1D90 */
ENTER(0x1b1d90);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 352)));
{ int t = RD(3) == RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_001B1DCC; }
{ u32 t = RW(3); SET64(31, 0x1b1dc4);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_001B1EA0; }
L_001B1DCC:;
SET32(3, RW(0) + 11);
if (RD(17) == RD(3)) { SET64(5, (s32)rd32(c, (RW(16) + 0))); goto L_001B1E94; }
SET32(3, RW(0) + 3);
if (RD(17) == RD(3)) { SET64(2, (s64)(s32)0x3f800000); goto L_001B1E68; }
wr32(c, (RW(29) + 108), RW(17));
SET64(3, (s16)rd16(c, (RW(19) + 360)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001B1E9C; }
SET64(17, RD(19) + RD(0));
SET64(16, RD(0) + RD(0));
L_001B1DFC:;
SET64(4, (s32)rd32(c, (RW(17) + 204)));
{ int t = RD(4) == RD(0);  if (t) goto L_001B1E48; }
SET64(5, (s32)rd32(c, (RW(19) + 356)));
SET32(3, RW(0) + 5);
SET32(5, RW(5) + RW(16));
SET64(5, (s32)rd32(c, (RW(5) + 160)));
{ int t = RD(5) == RD(3);  if (t) goto L_001B1E30; }
{ int t = RD(5) == RD(0);  if (t) goto L_001B1E48; }
 goto L_001B1E48;
L_001B1E30:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET32(5, RW(0) + 11);
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x1b1e44); SET32(6, RW(29) + 108); rt_call(c, t); }
L_001B1E48:;
SET64(3, (s16)rd16(c, (RW(19) + 360)));
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 4);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 208); if (t) { POLL(); goto L_001B1DFC; } }
 goto L_001B1E9C;
L_001B1E68:;
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 84), RW(0));
SET64(4, RD(19) + RD(0));
wr32(c, (RW(29) + 92), RW(2));
SET32(5, RW(29) + 80);
wr32(c, (RW(29) + 88), RW(0));
rd128(c, (RW(16) + 0) & ~15u, &c->r[2]);
SET64(31, 0x1b1e8c); wr128(c, (RW(29) + 80) & ~15u, &c->r[2]); F_001B2090(c);
 goto L_001B1E9C;
L_001B1E94:;
SET64(31, 0x1b1e9c); SET64(4, RD(19) + RD(0)); F_001B1EC0(c);
L_001B1E9C:;
SET64(31, rd64(c, (RW(29) + 64)));
L_001B1EA0:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001B1EC0(Ctx *c) { /* func_001B1EC0 */
ENTER(0x1b1ec0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 108), RW(5));
SET64(3, (s16)rd16(c, (RW(4) + 360)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_001B2068; }
SET64(18, RD(20) + RD(0));
SET64(17, RD(0) + RD(0));
L_001B1EF8:;
SET64(16, (s32)rd32(c, (RW(18) + 204)));
{ int t = RD(16) == RD(0);  if (t) goto L_001B2050; }
SET64(3, (s32)rd32(c, (RW(20) + 356)));
SET32(4, RW(0) + 4);
SET32(3, RW(3) + RW(17));
SET64(3, (s32)rd32(c, (RW(3) + 160)));
{ int t = RD(3) == RD(4);  if (t) goto L_001B2040; }
SET32(4, RW(0) + 928);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2040; }
SET32(4, RW(0) + 896);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2040; }
SET32(4, RW(0) + 384);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2040; }
SET32(4, RW(0) + 448);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2040; }
SET32(4, RW(0) + 416);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2040; }
SET32(4, RW(0) + 400);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2040; }
SET32(4, RW(0) + 262);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2040; }
SET32(4, RW(0) + 672);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2028; }
SET32(4, RW(0) + 640);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2028; }
SET32(4, RW(0) + 128);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2028; }
SET32(4, RW(0) + 192);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2028; }
SET32(4, RW(0) + 160);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2028; }
SET32(4, RW(0) + 144);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2028; }
SET32(4, RW(0) + 6);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2028; }
SET32(4, RW(0) + 3);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2028; }
SET32(4, RW(0) + 2);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2028; }
SET32(4, RW(0) + 1);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2028; }
SET32(4, RW(0) + 5);
{ int t = RD(3) == RD(4);  if (t) goto L_001B2008; }
{ int t = RD(3) == RD(0);  if (t) goto L_001B2050; }
 goto L_001B2050;
L_001B2008:;
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 11);
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x1b2020); SET32(6, RW(29) + 108); rt_call(c, t); }
 goto L_001B2050;
L_001B2028:;
SET64(5, (s32)rd32(c, (RW(29) + 108)));
SET64(31, 0x1b2034); SET64(4, RD(16) + RD(0)); F_001EA760(c);
 goto L_001B2050;
L_001B2040:;
SET64(5, (s32)rd32(c, (RW(29) + 108)));
SET64(31, 0x1b204c); SET64(4, RD(16) + RD(0)); F_001EA760(c);
wr8(c, (RW(16) + 1333), (u8)RW(0));
L_001B2050:;
SET64(3, (s16)rd16(c, (RW(20) + 360)));
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 4);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 208); if (t) { POLL(); goto L_001B1EF8; } }
L_001B2068:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001B2090(Ctx *c) { /* func_001B2090 */
ENTER(0x1b2090);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s16)rd16(c, (RW(4) + 360)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001B2260; }
SET64(17, RD(20) + RD(0));
SET64(16, RD(0) + RD(0));
L_001B20C8:;
SET64(4, (s32)rd32(c, (RW(17) + 204)));
{ int t = RD(4) == RD(0);  if (t) goto L_001B2248; }
SET64(3, (s32)rd32(c, (RW(20) + 356)));
SET32(5, RW(0) + 4);
SET32(3, RW(3) + RW(16));
SET64(3, (s32)rd32(c, (RW(3) + 160)));
{ int t = RD(3) == RD(5);  if (t) goto L_001B2238; }
SET32(5, RW(0) + 928);
{ int t = RD(3) == RD(5);  if (t) goto L_001B2238; }
SET32(5, RW(0) + 896);
{ int t = RD(3) == RD(5);  if (t) goto L_001B2238; }
SET32(5, RW(0) + 384);
{ int t = RD(3) == RD(5);  if (t) goto L_001B2238; }
SET32(5, RW(0) + 448);
{ int t = RD(3) == RD(5);  if (t) goto L_001B2238; }
SET32(5, RW(0) + 416);
{ int t = RD(3) == RD(5);  if (t) goto L_001B2238; }
SET32(5, RW(0) + 400);
{ int t = RD(3) == RD(5);  if (t) goto L_001B2238; }
SET32(5, RW(0) + 262);
{ int t = RD(3) == RD(5);  if (t) goto L_001B2238; }
SET32(5, RW(0) + 672);
{ int t = RD(3) == RD(5);  if (t) goto L_001B2220; }
SET32(5, RW(0) + 640);
{ int t = RD(3) == RD(5);  if (t) goto L_001B2220; }
SET32(5, RW(0) + 128);
{ int t = RD(3) == RD(5);  if (t) goto L_001B2220; }
SET32(5, RW(0) + 192);
{ int t = RD(3) == RD(5);  if (t) goto L_001B2220; }
SET32(5, RW(0) + 160);
{ int t = RD(3) == RD(5);  if (t) goto L_001B2220; }
SET32(5, RW(0) + 144);
{ int t = RD(3) == RD(5);  if (t) goto L_001B2220; }
SET32(5, RW(0) + 6);
{ int t = RD(3) == RD(5);  if (t) goto L_001B2220; }
SET32(5, RW(0) + 3);
{ int t = RD(3) == RD(5);  if (t) goto L_001B2208; }
SET32(6, RW(0) + 2);
{ int t = RD(3) == RD(6);  if (t) goto L_001B21F0; }
SET32(6, RW(0) + 1);
{ int t = RD(3) == RD(6);  if (t) goto L_001B21F0; }
SET32(6, RW(0) + 5);
{ int t = RD(3) == RD(6);  if (t) goto L_001B21D8; }
{ int t = RD(3) == RD(0);  if (t) goto L_001B2248; }
 goto L_001B2248;
L_001B21D8:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x1b21e8); SET64(6, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001B2248;
L_001B21F0:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 200)));
{ u32 t = RW(25); SET64(31, 0x1b2200); SET64(5, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001B2248;
L_001B2208:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x1b2218); SET64(5, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001B2248;
L_001B2220:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x1b2230); SET64(5, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001B2248;
L_001B2238:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1b2248); SET64(5, RD(19) + RD(0)); rt_call(c, t); }
L_001B2248:;
SET64(3, (s16)rd16(c, (RW(20) + 360)));
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 4);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 208); if (t) { POLL(); goto L_001B20C8; } }
L_001B2260:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001B2280(Ctx *c) { /* func_001B2280 */
ENTER(0x1b2280);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 344)));
{ u32 t = RW(25); SET64(31, 0x1b2298);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001B22B0(Ctx *c) { /* func_001B22B0 */
ENTER(0x1b22b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 216)));
{ u32 t = RW(25); SET64(31, 0x1b22c8);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001B22E0(Ctx *c) { /* func_001B22E0 */
ENTER(0x1b22e0);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 400) & ~15u, &c->r[3]); return;
}

void F_001B22F0(Ctx *c) { /* func_001B22F0 */
ENTER(0x1b22f0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(2, RW(18) << 1);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(2, RW(2) + RW(18));
SET64(16, RD(0) + RD(0));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(18));
SET32(2, RW(2) << 4);
SET64(31, 0x1b2330); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001B2360; }
SET64(5, (s64)(s32)0x1b0000);
SET64(6, (s64)(s32)0x1b0000);
SET32(16, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET32(5, RW(5) + 9376);
SET32(6, RW(6) + 9280);
SET32(7, RW(0) + 208);
SET64(31, 0x1b235c); SET64(8, RD(18) + RD(0)); F_00102580(c);
SET64(17, RD(2) + RD(0));
L_001B2360:;
SET64(3, RD(18) << 48);
wr32(c, (RW(19) + 356), RW(17));
SET64(3, RSD(3) >> 48);
SET64(17, RD(0) + RD(0));
{ int t = RSD(3) <= 0; wr16(c, (RW(19) + 360), (u16)RW(18)); if (t) goto L_001B2418; }
SET64(16, RD(0) + RD(0));
L_001B237C:;
SET64(3, (s32)rd32(c, (RW(19) + 356)));
SET32(2, RW(0) + -1);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 4);
SET32(7, RW(3) + RW(16));
wr32(c, (RW(7) + 160), RW(0));
SET32(3, RW(7) + 160);
wr16(c, (RW(7) + 164), (u16)RW(0));
SET32(4, RW(3) + 28);
wr16(c, (RW(7) + 166), (u16)RW(0));
wr16(c, (RW(7) + 168), (u16)RW(0));
wr16(c, (RW(7) + 170), (u16)RW(2));
wr16(c, (RW(7) + 172), (u16)RW(2));
wr16(c, (RW(7) + 174), (u16)RW(2));
wr32(c, (RW(7) + 176), RW(0));
wr32(c, (RW(7) + 180), RW(0));
SET64(31, 0x1b23c4); wr32(c, (RW(7) + 184), RW(0)); F_001273D0(c);
SET64(2, (s32)rd32(c, (RW(19) + 356)));
SET32(4, RW(29) + 80);
SET32(2, RW(2) + RW(16));
SET64(31, 0x1b23d8); wr32(c, (RW(2) + 192), RW(0)); F_002AC130(c);
SET64(3, (s32)rd32(c, (RW(19) + 356)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
SET32(4, RW(3) + RW(16));
wr128(c, (RW(4) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
SET64(31, 0x1b2404); wr128(c, (RW(4) + 48) & ~15u, &c->r[2]); F_002A1E20(c);
SET64(3, (s16)rd16(c, (RW(19) + 360)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 208); if (t) { POLL(); goto L_001B237C; } }
L_001B2418:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void F_001B2440(Ctx *c) { /* func_001B2440 */
ENTER(0x1b2440);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001B2488; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -10720);
SET64(31, 0x1b2470); wr32(c, (RW(17) + 144), RW(2)); F_002409D0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001B248C; }
SET64(31, 0x1b2488); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001B2488:;
SET64(2, RD(17) + RD(0));
L_001B248C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B24A0(Ctx *c) { /* func_001B24A0 */
ENTER(0x1b24a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1b24b4); SET64(16, RD(4) + RD(0)); F_00240AE0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -10720);
wr32(c, (RW(16) + 144), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001B24E0(Ctx *c) { /* func_001B24E0 */
ENTER(0x1b24e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, rd16(c, (RW(4) + 184)));
{ int t = RD(4) == RD(0); SET64(3, RD(5) + RD(0)); if (t) goto L_001B251C; }
SET64(7, (s32)rd32(c, (RW(16) + 176)));
if (RD(7) == RD(0)) { SET64(5, RD(6) + RD(0)); goto L_001B2510; }
SET32(7, RW(7) + 160);
SET64(5, RD(6) + RD(0));
L_001B2510:;
SET64(31, 0x1b2518); SET64(6, RD(3) + RD(0)); F_001706D0(c);
wr32(c, (RW(16) + 180), RW(2));
L_001B251C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001B2530(Ctx *c) { /* func_001B2530 */
ENTER(0x1b2530);
SET32(29, RW(29) + -544);
SET32(2, RW(0) + 5);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(7) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
{ int t = RD(18) != RD(2); SET64(16, RD(6) + RD(0)); if (t) goto L_001B256C; }
SET64(2, RD(0) + RD(0)); goto L_001B3154;
L_001B256C:;
{ int t = RSD(17) < 0;  if (t) goto L_001B2590; }
SET64(31, 0x1b257c); SET64(4, RD(16) + RD(0)); F_001F0FC0(c);
SET64(2, (s32)rd32(c, (RW(2) + 4)));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_001B2590; }
SET64(18, RD(18) | 0x100);
L_001B2590:;
if (RD(19) == RD(0)) { SET32(2, RW(0) + -625); goto L_001B25A0; }
wr32(c, (RW(19) + 0), RW(18));
SET32(2, RW(0) + -625);
L_001B25A0:;
SET32(3, RW(0) + 4);
SET64(2, RD(18) & RD(2));
{ int t = RD(2) == RD(3); SET64(19, RD(0) + RD(0)); if (t) goto L_001B3060; }
SET32(3, RW(0) + 928);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 1600); goto L_001B2DF8; }
SET32(3, RW(0) + 896);
{ int t = RD(2) == RD(3);  if (t) goto L_001B2DF4; }
SET32(3, RW(0) + 384);
{ int t = RD(2) == RD(3);  if (t) goto L_001B2DF4; }
SET32(3, RW(0) + 448);
{ int t = RD(2) == RD(3);  if (t) goto L_001B2DF4; }
SET32(3, RW(0) + 416);
{ int t = RD(2) == RD(3);  if (t) goto L_001B2DF4; }
SET32(3, RW(0) + 400);
{ int t = RD(2) == RD(3);  if (t) goto L_001B2DF4; }
SET32(3, RW(0) + 262);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 1408); goto L_001B2D1C; }
SET32(3, RW(0) + 672);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 1264); goto L_001B2A4C; }
SET32(3, RW(0) + 640);
{ int t = RD(2) == RD(3);  if (t) goto L_001B2A48; }
SET32(3, RW(0) + 128);
{ int t = RD(2) == RD(3);  if (t) goto L_001B2A48; }
SET32(3, RW(0) + 192);
{ int t = RD(2) == RD(3);  if (t) goto L_001B2A48; }
SET32(3, RW(0) + 160);
{ int t = RD(2) == RD(3);  if (t) goto L_001B2A48; }
SET32(3, RW(0) + 144);
{ int t = RD(2) == RD(3);  if (t) goto L_001B2A48; }
SET32(3, RW(0) + 6);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 1168); goto L_001B28D4; }
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 624); goto L_001B27EC; }
SET32(3, RW(0) + 2);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 688); goto L_001B2780; }
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 624); goto L_001B268C; }
{ int t = RD(2) == RD(0);  if (t) goto L_001B3134; }
 goto L_001B3134;
L_001B268C:;
SET64(31, 0x1b2694);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001B2770; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x1b26a8); SET64(18, RD(17) + RD(0)); F_002B1080(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(19, RW(18) + 96);
SET32(2, RW(2) + -26416);
SET64(4, RD(19) + RD(0));
SET64(31, 0x1b26c0); wr32(c, (RW(17) + 8), RW(2)); F_002B1430(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(17) + 144);
SET32(2, RW(2) + -26448);
SET64(31, 0x1b26d4); wr32(c, (RW(19) + 8), RW(2)); F_00141AA0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -19936);
SET32(3, RW(3) + -19916);
wr32(c, (RW(17) + 8), RW(2));
SET32(4, RW(18) + 176);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + -19896);
SET64(31, 0x1b2700); wr32(c, (RW(17) + 160), RW(2)); F_001E9FD0(c);
SET32(4, RW(18) + 336);
SET64(31, 0x1b270c); SET64(5, RD(0) + RD(0)); F_002A2950(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 6432);
SET32(3, RW(3) + 6452);
wr32(c, (RW(18) + 8), RW(2));
SET32(4, RW(18) + 384);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 104), RW(3));
SET32(2, RW(2) + 6472);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 160), RW(2));
SET32(3, RW(3) + 6536);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 320), RW(3));
SET32(2, RW(2) + 6560);
SET64(31, 0x1b2750); wr32(c, (RW(18) + 336), RW(2)); F_002B2810(c);
SET64(31, 0x1b2758); SET32(4, RW(18) + 448); F_0029F940(c);
SET64(31, 0x1b2760); SET32(4, RW(18) + 544); F_002AC130(c);
wr32(c, (RW(18) + 608), RW(0));
wr32(c, (RW(18) + 612), RW(0));
wr32(c, (RW(18) + 616), RW(0));
wr32(c, (RW(18) + 620), RW(0));
L_001B2770:;
SET64(31, 0x1b2778); SET64(4, RD(17) + RD(0)); F_001ED930(c);
SET64(19, RD(17) + RD(0)); goto L_001B3134;
L_001B2780:;
SET64(31, 0x1b2788);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001B27DC; }
SET64(31, 0x1b2798); SET64(4, RD(17) + RD(0)); F_00183640(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 6224);
SET32(3, RW(3) + 6244);
wr32(c, (RW(17) + 8), RW(2));
SET32(4, RW(17) + 624);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + 6264);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + 6328);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 320), RW(3));
SET32(2, RW(2) + 6352);
SET64(31, 0x1b27dc); wr32(c, (RW(17) + 336), RW(2)); F_00183610(c);
L_001B27DC:;
SET64(31, 0x1b27e4); SET64(4, RD(17) + RD(0)); F_001ED930(c);
SET64(19, RD(17) + RD(0)); goto L_001B3134;
L_001B27EC:;
SET64(31, 0x1b27f4);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001B28C4; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x1b2808); SET64(18, RD(17) + RD(0)); F_002B1080(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(19, RW(18) + 96);
SET32(2, RW(2) + -26416);
SET64(4, RD(19) + RD(0));
SET64(31, 0x1b2820); wr32(c, (RW(17) + 8), RW(2)); F_002B1430(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(17) + 144);
SET32(2, RW(2) + -26448);
SET64(31, 0x1b2834); wr32(c, (RW(19) + 8), RW(2)); F_00141AA0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -19936);
SET32(3, RW(3) + -19916);
wr32(c, (RW(17) + 8), RW(2));
SET32(4, RW(18) + 176);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + -19896);
SET32(5, RW(0) + 1);
SET64(31, 0x1b2864); wr32(c, (RW(17) + 160), RW(2)); F_002B7B40(c);
SET32(4, RW(18) + 496);
SET64(31, 0x1b2870); SET64(5, RD(0) + RD(0)); F_002A2950(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4832);
SET32(3, RW(3) + 4852);
wr32(c, (RW(18) + 8), RW(2));
SET32(4, RW(18) + 544);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 104), RW(3));
SET32(2, RW(2) + 4872);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 160), RW(2));
SET32(3, RW(3) + 4936);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 320), RW(3));
SET32(2, RW(2) + 4968);
SET64(31, 0x1b28b4); wr32(c, (RW(18) + 496), RW(2)); F_002B2810(c);
wr32(c, (RW(18) + 608), RW(0));
wr32(c, (RW(18) + 612), RW(0));
wr32(c, (RW(18) + 616), RW(0));
wr32(c, (RW(18) + 620), RW(0));
L_001B28C4:;
SET64(31, 0x1b28cc); SET64(4, RD(17) + RD(0)); F_001EBF90(c);
SET64(19, RD(17) + RD(0)); goto L_001B3134;
L_001B28D4:;
SET64(31, 0x1b28dc);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001B2A2C; }
SET32(4, RW(19) + 416);
SET32(3, RW(19) + 448);
wr32(c, (RW(19) + 704), RW(4));
SET32(2, RW(19) + 736);
wr32(c, (RW(19) + 176), RW(3));
SET32(18, RW(0) + 1);
SET64(31, 0x1b2904); wr32(c, (RW(19) + 180), RW(2)); F_00141AA0(c);
SET32(4, RW(19) + 448);
SET64(31, 0x1b2910); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET32(4, RW(19) + 736);
SET64(31, 0x1b291c); SET64(5, RD(18) + RD(0)); F_002A25B0(c);
SET64(31, 0x1b2924); SET64(4, RD(19) + RD(0)); F_001B3F50(c);
SET32(4, RW(19) + 176);
SET64(31, 0x1b2930); SET64(5, RD(0) + RD(0)); F_00150D60(c);
SET64(31, 0x1b2938); SET32(4, RW(19) + 192); F_001B3F30(c);
SET64(31, 0x1b2940); SET32(4, RW(19) + 240); F_001B3EF0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 4448);
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 8), RW(3));
SET32(2, RW(2) + 4468);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 104), RW(2));
SET32(3, RW(3) + 4488);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 160), RW(3));
SET32(2, RW(2) + 4552);
wr32(c, (RW(19) + 188), RW(2));
SET64(10, (s64)(s32)0x4d0000);
SET64(2, (s32)rd32(c, (RW(19) + 176)));
SET32(4, RW(4) + 4716);
SET64(9, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(10, RW(10) + 4680);
wr32(c, (RW(2) + 276), RW(4));
SET32(9, RW(9) + 4788);
SET64(8, (s32)rd32(c, (RW(19) + 176)));
SET32(7, RW(7) + 4596);
SET32(6, RW(6) + 4616);
SET32(5, RW(19) + 416);
SET32(3, RW(19) + 448);
SET32(2, RW(19) + 736);
SET64(8, (s32)rd32(c, (RW(8) + 256)));
SET32(4, RW(19) + 320);
wr32(c, (RW(8) + 16), RW(10));
SET64(8, (s32)rd32(c, (RW(19) + 180)));
wr32(c, (RW(8) + 144), RW(9));
wr32(c, (RW(19) + 236), RW(7));
wr32(c, (RW(19) + 312), RW(6));
SET64(6, (s32)rd32(c, (RW(19) + 176)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
SET64(5, (s32)rd32(c, (RW(19) + 176)));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(5) + 280), RW(3));
SET64(3, (s32)rd32(c, (RW(19) + 180)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x1b29f8); wr32(c, (RW(3) + 416), RW(2)); F_00183610(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(19) + 384);
c->f[12].u = RW(2);
c->f[13].u = c->f[12].u;
c->f[14].u = c->f[12].u;
SET64(31, 0x1b2a18); c->f[15].u = c->f[12].u; F_0013E630(c);
SET32(2, RW(0) + -1);
wr32(c, (RW(19) + 400), RW(2));
wr32(c, (RW(19) + 404), RW(0));
wr32(c, (RW(19) + 408), RW(0));
wr32(c, (RW(19) + 412), RW(0));
L_001B2A2C:;
SET64(2, (s64)(s32)0xbf800000);
SET64(5, RD(17) + RD(0));
c->f[12].u = RW(2);
SET64(31, 0x1b2a40); SET64(4, RD(19) + RD(0)); F_001EBB90(c);
 goto L_001B3134;
L_001B2A48:;
SET32(4, RW(0) + 1264);
L_001B2A4C:;
SET64(31, 0x1b2a54);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_001B2B70; }
SET32(4, RW(20) + 520);
SET32(3, RW(20) + 544);
wr32(c, (RW(20) + 800), RW(4));
SET32(2, RW(20) + 832);
wr32(c, (RW(20) + 176), RW(3));
SET32(19, RW(0) + 1);
SET64(31, 0x1b2a7c); wr32(c, (RW(20) + 180), RW(2)); F_00141AA0(c);
SET32(4, RW(20) + 544);
SET64(31, 0x1b2a88); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET32(4, RW(20) + 832);
SET64(31, 0x1b2a94); SET64(5, RD(19) + RD(0)); F_002A25B0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x1b2aa0); SET64(5, RD(0) + RD(0)); F_001B3D00(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 4064);
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(20) + 8), RW(3));
SET32(2, RW(2) + 4084);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(20) + 104), RW(2));
SET32(3, RW(3) + 4104);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(20) + 160), RW(3));
SET32(2, RW(2) + 4168);
wr32(c, (RW(20) + 188), RW(2));
SET64(10, (s64)(s32)0x4d0000);
SET64(2, (s32)rd32(c, (RW(20) + 176)));
SET32(4, RW(4) + 4332);
SET64(9, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(10, RW(10) + 4296);
wr32(c, (RW(2) + 276), RW(4));
SET32(9, RW(9) + 4404);
SET64(8, (s32)rd32(c, (RW(20) + 176)));
SET32(7, RW(7) + 4212);
SET32(6, RW(6) + 4232);
SET32(5, RW(20) + 520);
SET32(3, RW(20) + 544);
SET32(2, RW(20) + 832);
SET64(8, (s32)rd32(c, (RW(8) + 256)));
SET32(4, RW(20) + 416);
wr32(c, (RW(8) + 16), RW(10));
SET64(8, (s32)rd32(c, (RW(20) + 180)));
wr32(c, (RW(8) + 144), RW(9));
wr32(c, (RW(20) + 236), RW(7));
wr32(c, (RW(20) + 312), RW(6));
SET64(6, (s32)rd32(c, (RW(20) + 176)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
SET64(5, (s32)rd32(c, (RW(20) + 176)));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(5) + 280), RW(3));
SET64(3, (s32)rd32(c, (RW(20) + 180)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x1b2b58); wr32(c, (RW(3) + 416), RW(2)); F_00183610(c);
SET64(31, 0x1b2b60); SET32(4, RW(20) + 480); F_00149480(c);
SET64(31, 0x1b2b68); SET32(4, RW(20) + 496); F_00149480(c);
wr8(c, (RW(20) + 512), (u8)RW(0));
wr32(c, (RW(20) + 516), RW(0));
L_001B2B70:;
SET64(2, (s64)(s32)0xbf800000);
SET64(5, RD(17) + RD(0));
c->f[12].u = RW(2);
SET64(31, 0x1b2b84); SET64(4, RD(20) + RD(0)); F_001EBB90(c);
SET64(2, RD(18) & 0x200);
if (RD(2) != RD(0)) { SET32(4, RW(29) + 256); goto L_001B2CC0; }
SET64(2, RD(18) & 0x10);
if (RD(2) == RD(0)) { SET64(2, RD(18) & 0x20); goto L_001B2BF8; }
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 400);
c->f[12].u = RW(2);
c->f[13].u = RW(0);
c->f[15].u = c->f[12].u;
SET64(31, 0x1b2bbc); c->f[14].u = c->f[13].u; F_0013E630(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 384);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1b2be0); c->f[13].u = c->f[12].u; F_0013E630(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(31, 0x1b2bf4); SET32(5, RW(0) + 1); F_001B3C90(c);
SET64(2, RD(18) & 0x20);
L_001B2BF8:;
if (RD(2) == RD(0)) { SET64(2, RD(18) & 0x40); goto L_001B2C5C; }
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 368);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
c->f[14].u = c->f[12].u;
SET64(31, 0x1b2c20); c->f[15].u = c->f[13].u; F_0013E630(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 352);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1b2c44); c->f[13].u = c->f[12].u; F_0013E630(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(31, 0x1b2c58); SET32(5, RW(0) + 1); F_001B3C90(c);
SET64(2, RD(18) & 0x40);
L_001B2C5C:;
if (RD(2) == RD(0)) { SET64(19, RD(20) + RD(0)); goto L_001B3134; }
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 336);
c->f[12].u = RW(0);
c->f[14].u = RW(2);
c->f[13].u = c->f[12].u;
SET64(31, 0x1b2c80); c->f[15].u = c->f[14].u; F_0013E630(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 320);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
c->f[13].u = RW(0);
c->f[15].u = c->f[12].u;
SET64(31, 0x1b2ca4); c->f[14].u = c->f[13].u; F_0013E630(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(31, 0x1b2cb8); SET32(5, RW(0) + 1); F_001B3C90(c);
 goto L_001B2D10;
L_001B2CC0:;
SET64(31, 0x1b2cc8);  F_0013AEA0(c);
SET32(4, RW(29) + 256);
SET64(31, 0x1b2cd4); SET32(5, RW(28) + -32236); F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1b2ce0); SET32(4, RW(29) + 480); F_0013ADA0(c);
rd128(c, (RW(29) + 480) & ~15u, &c->r[3]);
SET64(2, RD(18) & 0x20);
wr128(c, (RW(20) + 416) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 496) & ~15u, &c->r[3]);
wr128(c, (RW(20) + 432) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 512) & ~15u, &c->r[3]);
wr128(c, (RW(20) + 448) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 528) & ~15u, &c->r[3]);
{ int t = RD(2) == RD(0); wr128(c, (RW(20) + 464) & ~15u, &c->r[3]); if (t) goto L_001B2D10; }
SET32(2, RW(0) + 2);
wr32(c, (RW(20) + 516), RW(2));
L_001B2D10:;
SET64(19, RD(20) + RD(0));
 goto L_001B3134;
L_001B2D1C:;
SET64(31, 0x1b2d24);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001B2DE0; }
SET32(4, RW(18) + 1340);
SET32(19, RW(0) + 1);
SET64(31, 0x1b2d3c); wr32(c, (RW(18) + 448), RW(4)); F_00141AA0(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x1b2d4c); SET32(6, RW(0) + 8); F_001B3AD0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 3664);
SET64(9, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 8), RW(3));
SET32(2, RW(2) + 3684);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 104), RW(2));
SET32(3, RW(3) + 3704);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 160), RW(3));
SET32(2, RW(2) + 3768);
wr32(c, (RW(18) + 468), RW(2));
SET64(8, (s64)(s32)0x4d0000);
SET64(2, (s32)rd32(c, (RW(18) + 448)));
SET32(9, RW(9) + 4024);
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(2) + 16), RW(9));
SET32(8, RW(8) + 3840);
SET32(7, RW(7) + 3872);
wr32(c, (RW(18) + 624), RW(8));
SET32(6, RW(6) + 3920);
wr32(c, (RW(18) + 952), RW(7));
SET32(5, RW(5) + 3932);
wr32(c, (RW(18) + 1148), RW(6));
SET32(4, RW(4) + 3952);
wr32(c, (RW(18) + 1212), RW(5));
wr32(c, (RW(18) + 1288), RW(4));
SET32(3, RW(18) + 1340);
SET64(4, (s32)rd32(c, (RW(18) + 448)));
SET32(2, RW(0) + -1);
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 20), RW(3));
wr32(c, (RW(18) + 1336), RW(2));
L_001B2DE0:;
SET64(5, RD(17) + RD(0));
SET64(31, 0x1b2dec); SET64(4, RD(18) + RD(0)); F_001EAC90(c);
SET64(19, RD(18) + RD(0)); goto L_001B3134;
L_001B2DF4:;
SET32(4, RW(0) + 1600);
L_001B2DF8:;
SET64(31, 0x1b2e00);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_001B2EBC; }
SET32(4, RW(20) + 1516);
SET32(19, RW(0) + 1);
SET64(31, 0x1b2e18); wr32(c, (RW(20) + 448), RW(4)); F_00141AA0(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x1b2e28); SET32(6, RW(0) + 8); F_001B38B0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 3264);
SET64(9, (s64)(s32)0x4d0000);
wr32(c, (RW(20) + 8), RW(3));
SET32(2, RW(2) + 3284);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(20) + 104), RW(2));
SET32(3, RW(3) + 3304);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(20) + 160), RW(3));
SET32(2, RW(2) + 3368);
wr32(c, (RW(20) + 468), RW(2));
SET64(8, (s64)(s32)0x4d0000);
SET64(2, (s32)rd32(c, (RW(20) + 448)));
SET32(9, RW(9) + 3628);
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(2) + 16), RW(9));
SET32(8, RW(8) + 3440);
SET32(7, RW(7) + 3472);
wr32(c, (RW(20) + 624), RW(8));
SET32(6, RW(6) + 3520);
wr32(c, (RW(20) + 952), RW(7));
SET32(5, RW(5) + 3532);
wr32(c, (RW(20) + 1148), RW(6));
SET32(4, RW(4) + 3552);
wr32(c, (RW(20) + 1212), RW(5));
wr32(c, (RW(20) + 1288), RW(4));
SET32(3, RW(20) + 1516);
SET64(4, (s32)rd32(c, (RW(20) + 448)));
SET32(2, RW(0) + -1);
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 20), RW(3));
wr32(c, (RW(20) + 1512), RW(2));
L_001B2EBC:;
SET64(4, RD(20) + RD(0));
SET64(31, 0x1b2ec8); wr32(c, (RW(20) + 1512), RW(17)); F_001ED2A0(c);
SET64(2, RD(18) & 0x200);
if (RD(2) != RD(0)) { SET32(4, RW(29) + 96); goto L_001B3004; }
SET64(2, RD(18) & 0x10);
if (RD(2) == RD(0)) { SET64(2, RD(18) & 0x20); goto L_001B2F3C; }
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 240);
c->f[12].u = RW(2);
c->f[13].u = RW(0);
c->f[15].u = c->f[12].u;
SET64(31, 0x1b2f00); c->f[14].u = c->f[13].u; F_0013E630(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 224);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1b2f24); c->f[13].u = c->f[12].u; F_0013E630(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(31, 0x1b2f38); SET32(5, RW(0) + 1); F_001811E0(c);
SET64(2, RD(18) & 0x20);
L_001B2F3C:;
if (RD(2) == RD(0)) { SET64(2, RD(18) & 0x40); goto L_001B2FA0; }
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 208);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
c->f[14].u = c->f[12].u;
SET64(31, 0x1b2f64); c->f[15].u = c->f[13].u; F_0013E630(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 192);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1b2f88); c->f[13].u = c->f[12].u; F_0013E630(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(31, 0x1b2f9c); SET32(5, RW(0) + 1); F_001811E0(c);
SET64(2, RD(18) & 0x40);
L_001B2FA0:;
if (RD(2) == RD(0)) { SET64(19, RD(20) + RD(0)); goto L_001B3134; }
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 176);
c->f[12].u = RW(0);
c->f[14].u = RW(2);
c->f[13].u = c->f[12].u;
SET64(31, 0x1b2fc4); c->f[15].u = c->f[14].u; F_0013E630(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 160);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
c->f[13].u = RW(0);
c->f[15].u = c->f[12].u;
SET64(31, 0x1b2fe8); c->f[14].u = c->f[13].u; F_0013E630(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(31, 0x1b2ffc); SET32(5, RW(0) + 1); F_001811E0(c);
 goto L_001B3054;
L_001B3004:;
SET64(31, 0x1b300c);  F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1b3018); SET32(5, RW(28) + -32232); F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1b3024); SET32(4, RW(29) + 416); F_0013ADA0(c);
rd128(c, (RW(29) + 416) & ~15u, &c->r[3]);
SET64(2, RD(18) & 0x20);
wr128(c, (RW(20) + 1408) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 432) & ~15u, &c->r[3]);
wr128(c, (RW(20) + 1424) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 448) & ~15u, &c->r[3]);
wr128(c, (RW(20) + 1440) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 464) & ~15u, &c->r[3]);
{ int t = RD(2) == RD(0); wr128(c, (RW(20) + 1456) & ~15u, &c->r[3]); if (t) goto L_001B3054; }
SET32(2, RW(0) + 2);
wr32(c, (RW(20) + 1508), RW(2));
L_001B3054:;
SET64(19, RD(20) + RD(0));
 goto L_001B3134;
L_001B3060:;
SET64(31, 0x1b3068); SET32(4, RW(0) + 1472); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001B3124; }
SET32(4, RW(18) + 1416);
SET32(19, RW(0) + 1);
SET64(31, 0x1b3080); wr32(c, (RW(18) + 448), RW(4)); F_00141AA0(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x1b3090); SET32(6, RW(0) + 8); F_001B36C0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 2864);
SET64(9, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 8), RW(3));
SET32(2, RW(2) + 2884);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 104), RW(2));
SET32(3, RW(3) + 2904);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 160), RW(3));
SET32(2, RW(2) + 2968);
wr32(c, (RW(18) + 468), RW(2));
SET64(8, (s64)(s32)0x4d0000);
SET64(2, (s32)rd32(c, (RW(18) + 448)));
SET32(9, RW(9) + 3228);
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(2) + 16), RW(9));
SET32(8, RW(8) + 3040);
SET32(7, RW(7) + 3072);
wr32(c, (RW(18) + 624), RW(8));
SET32(6, RW(6) + 3120);
wr32(c, (RW(18) + 952), RW(7));
SET32(5, RW(5) + 3132);
wr32(c, (RW(18) + 1148), RW(6));
SET32(4, RW(4) + 3152);
wr32(c, (RW(18) + 1212), RW(5));
wr32(c, (RW(18) + 1288), RW(4));
SET32(3, RW(18) + 1416);
SET64(4, (s32)rd32(c, (RW(18) + 448)));
SET32(2, RW(0) + -1);
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 20), RW(3));
wr32(c, (RW(18) + 1412), RW(2));
L_001B3124:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x1b3130); wr32(c, (RW(18) + 1412), RW(17)); F_001ED2A0(c);
SET64(19, RD(18) + RD(0));
L_001B3134:;
if (RD(19) == RD(0)) { SET64(2, RD(19) + RD(0)); goto L_001B3154; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x1b3150); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(2, RD(19) + RD(0));
L_001B3154:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 544); return;
}

void F_001B3180(Ctx *c) { /* func_001B3180 */
ENTER(0x1b3180);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001B334C; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 5024);
SET64(10, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(3));
SET32(2, RW(2) + 5044);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(2));
SET32(3, RW(3) + 5064);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 160), RW(3));
SET32(2, RW(2) + 5128);
wr32(c, (RW(17) + 468), RW(2));
SET64(8, (s64)(s32)0x4d0000);
SET64(9, (s32)rd32(c, (RW(17) + 448)));
SET32(10, RW(10) + 5388);
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(8, RW(8) + 5200);
wr32(c, (RW(9) + 16), RW(10));
SET32(7, RW(7) + 5232);
wr32(c, (RW(17) + 624), RW(8));
SET32(6, RW(6) + 5280);
wr32(c, (RW(17) + 952), RW(7));
SET32(5, RW(5) + 5292);
wr32(c, (RW(17) + 1148), RW(6));
SET32(3, RW(3) + 5312);
wr32(c, (RW(17) + 1212), RW(5));
wr32(c, (RW(17) + 1288), RW(3));
SET32(2, RW(17) + 1412);
SET64(3, (s32)rd32(c, (RW(17) + 448)));
SET32(2, RW(2) - RW(3));
{ int t = RD(17) == RD(0); wr32(c, (RW(3) + 20), RW(2)); if (t) goto L_001B3304; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 5824);
SET64(10, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(3));
SET32(2, RW(2) + 5844);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(2));
SET32(3, RW(3) + 5864);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 160), RW(3));
SET32(2, RW(2) + 5928);
wr32(c, (RW(17) + 468), RW(2));
SET64(8, (s64)(s32)0x4d0000);
SET64(9, (s32)rd32(c, (RW(17) + 448)));
SET32(10, RW(10) + 6184);
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(8, RW(8) + 6000);
wr32(c, (RW(9) + 16), RW(10));
SET32(7, RW(7) + 6032);
wr32(c, (RW(17) + 624), RW(8));
SET32(6, RW(6) + 6080);
wr32(c, (RW(17) + 952), RW(7));
SET32(5, RW(5) + 6092);
wr32(c, (RW(17) + 1148), RW(6));
SET32(3, RW(3) + 6112);
wr32(c, (RW(17) + 1212), RW(5));
wr32(c, (RW(17) + 1288), RW(3));
SET32(2, RW(17) + 1336);
SET64(3, (s32)rd32(c, (RW(17) + 448)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1b32c8);  rt_call(c, t); }
SET32(4, RW(17) + 1216);
SET64(31, 0x1b32d4); SET64(5, RD(0) + RD(0)); F_00185270(c);
SET32(4, RW(17) + 1168);
SET64(31, 0x1b32e0); SET64(5, RD(0) + RD(0)); F_00185200(c);
SET32(4, RW(17) + 1104);
SET64(31, 0x1b32ec); SET64(5, RD(0) + RD(0)); F_00155870(c);
SET32(4, RW(17) + 192);
SET64(31, 0x1b32f8); SET64(5, RD(0) + RD(0)); F_00151230(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1b3304); SET64(5, RD(0) + RD(0)); F_00183290(c);
L_001B3304:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_001B3338; }
SET32(4, RW(17) + 1412);
{ int t = RD(4) == RD(0);  if (t) goto L_001B3334; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 1428), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b3334);  rt_call(c, t); }
L_001B3334:;
SET64(2, RD(16) << 48);
L_001B3338:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001B3350; }
SET64(31, 0x1b334c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001B334C:;
SET64(2, RD(17) + RD(0));
L_001B3350:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B3370(Ctx *c) { /* func_001B3370 */
ENTER(0x1b3370);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001B369C; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 4448);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(3));
SET32(2, RW(2) + 4468);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(2));
SET32(3, RW(3) + 4488);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 160), RW(3));
SET32(2, RW(2) + 4552);
wr32(c, (RW(17) + 188), RW(2));
SET64(10, (s64)(s32)0x4d0000);
SET64(2, (s32)rd32(c, (RW(17) + 176)));
SET32(8, RW(8) + 4716);
SET64(9, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(10, RW(10) + 4680);
wr32(c, (RW(2) + 276), RW(8));
SET32(9, RW(9) + 4788);
SET64(8, (s32)rd32(c, (RW(17) + 176)));
SET32(7, RW(7) + 4596);
SET32(6, RW(6) + 4616);
SET32(5, RW(17) + 416);
SET32(3, RW(17) + 448);
SET32(2, RW(17) + 736);
SET64(8, (s32)rd32(c, (RW(8) + 256)));
wr32(c, (RW(8) + 16), RW(10));
SET64(8, (s32)rd32(c, (RW(17) + 180)));
wr32(c, (RW(8) + 144), RW(9));
wr32(c, (RW(17) + 236), RW(7));
wr32(c, (RW(17) + 312), RW(6));
SET64(6, (s32)rd32(c, (RW(17) + 176)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 176)));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(5) + 280), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 180)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 416), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1b344c);  rt_call(c, t); }
SET32(4, RW(17) + 240);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 192); goto L_001B3478; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2752);
wr32(c, (RW(17) + 312), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 72)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b3474);  rt_call(c, t); }
SET32(4, RW(17) + 192);
L_001B3478:;
if (RD(4) == RD(0)) { SET32(4, RW(17) + 176); goto L_001B34A0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -10016);
wr32(c, (RW(17) + 236), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 44)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1b349c);  rt_call(c, t); }
SET32(4, RW(17) + 176);
L_001B34A0:;
{ int t = RD(4) == RD(0);  if (t) goto L_001B352C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -27856);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 188), RW(2));
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 176)));
SET32(9, RW(9) + -27776);
SET32(8, RW(8) + -27812);
SET32(7, RW(7) + -27704);
SET32(5, RW(17) + 192);
SET32(3, RW(17) + 224);
wr32(c, (RW(6) + 276), RW(9));
SET32(2, RW(17) + 512);
SET64(6, (s32)rd32(c, (RW(17) + 176)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
wr32(c, (RW(6) + 16), RW(8));
SET64(6, (s32)rd32(c, (RW(17) + 180)));
wr32(c, (RW(6) + 144), RW(7));
SET64(6, (s32)rd32(c, (RW(17) + 176)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 176)));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(5) + 280), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 180)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 416), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1b352c);  rt_call(c, t); }
L_001B352C:;
{ int t = RD(17) == RD(0);  if (t) goto L_001B35D0; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -19936);
SET32(3, RW(3) + -19916);
wr32(c, (RW(17) + 8), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + -19896);
wr32(c, (RW(17) + 160), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1b3568); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 144);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 96); goto L_001B3594; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 160), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b3590);  rt_call(c, t); }
SET32(4, RW(17) + 96);
L_001B3594:;
{ int t = RD(4) == RD(0);  if (t) goto L_001B35B0; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -26448);
SET64(31, 0x1b35b0); wr32(c, (RW(17) + 104), RW(2)); F_002B13D0(c);
L_001B35B0:;
{ int t = RD(17) == RD(0);  if (t) goto L_001B35D0; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + -26416);
SET64(5, RD(0) + RD(0));
SET64(31, 0x1b35d0); wr32(c, (RW(17) + 8), RW(2)); F_002B1020(c);
L_001B35D0:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_001B3688; }
SET32(4, RW(17) + 736);
SET64(31, 0x1b35e4); SET64(5, RD(0) + RD(0)); F_002A2540(c);
SET32(4, RW(17) + 448);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 416); goto L_001B3660; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -27472);
SET32(5, RW(5) + -27400);
wr32(c, (RW(17) + 724), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 704)));
SET32(2, RW(17) + 728);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 704)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b362c);  rt_call(c, t); }
SET32(2, RW(17) + 448);
{ int t = RD(2) == RD(0);  if (t) goto L_001B365C; }
SET32(4, RW(17) + 480);
SET64(31, 0x1b3644); SET32(5, RW(0) + -1); F_002A5950(c);
SET32(2, RW(17) + 448);
{ int t = RD(2) == RD(0);  if (t) goto L_001B365C; }
SET32(4, RW(17) + 452);
SET64(31, 0x1b365c); SET64(5, RD(0) + RD(0)); F_002AB240(c);
L_001B365C:;
SET32(4, RW(17) + 416);
L_001B3660:;
{ int t = RD(4) == RD(0);  if (t) goto L_001B3684; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 432), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b3684);  rt_call(c, t); }
L_001B3684:;
SET64(2, RD(16) << 48);
L_001B3688:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001B36A0; }
SET64(31, 0x1b369c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001B369C:;
SET64(2, RD(17) + RD(0));
L_001B36A0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B36C0(Ctx *c) { /* func_001B36C0 */
ENTER(0x1b36c0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RD(18) << 48);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_001B36FC; }
SET32(4, RW(17) + 1412);
SET64(31, 0x1b36fc); wr32(c, (RW(17) + 448), RW(4)); F_00141AA0(c);
L_001B36FC:;
SET64(16, RD(0) + RD(0));
SET64(31, 0x1b3708); SET64(4, RD(17) + RD(0)); F_001B3F50(c);
SET32(4, RW(17) + 192);
SET64(31, 0x1b3714); SET64(5, RD(0) + RD(0)); F_00152580(c);
SET64(5, RD(19) + RD(0));
SET64(31, 0x1b3720); SET32(4, RW(17) + 1104); F_00155990(c);
SET64(31, 0x1b3728); SET32(4, RW(17) + 1168); F_001B3F30(c);
SET64(31, 0x1b3730); SET32(4, RW(17) + 1216); F_001B3EF0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 5824);
SET64(9, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(3));
SET32(2, RW(2) + 5844);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(2));
SET32(3, RW(3) + 5864);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 160), RW(3));
SET32(2, RW(2) + 5928);
wr32(c, (RW(17) + 468), RW(2));
SET64(8, (s64)(s32)0x4d0000);
SET64(2, (s32)rd32(c, (RW(17) + 448)));
SET32(9, RW(9) + 6184);
SET64(4, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(2) + 16), RW(9));
SET32(8, RW(8) + 6000);
SET32(4, RW(4) + 6032);
wr32(c, (RW(17) + 624), RW(8));
wr32(c, (RW(17) + 952), RW(4));
SET32(7, RW(7) + 6080);
SET32(6, RW(6) + 6092);
wr32(c, (RW(17) + 1148), RW(7));
SET32(5, RW(5) + 6112);
wr32(c, (RW(17) + 1212), RW(6));
wr32(c, (RW(17) + 1288), RW(5));
SET64(2, (s64)(s32)0x3f800000);
SET64(5, (s32)rd32(c, (RW(17) + 448)));
c->f[12].u = RW(2);
SET32(3, RW(17) + 1336);
SET32(4, RW(17) + 1296);
c->f[13].u = c->f[12].u;
SET32(2, RW(3) - RW(5));
c->f[14].u = c->f[12].u;
wr32(c, (RW(5) + 20), RW(2));
SET64(31, 0x1b37d8); c->f[15].u = c->f[12].u; F_0013E630(c);
wr32(c, (RW(17) + 1312), RW(0));
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 1316), RW(0));
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 1320), RW(0));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 1324), RW(0));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 1328), RW(0));
SET64(10, (s64)(s32)0x4d0000);
SET32(6, RW(0) + 1);
wr8(c, (RW(17) + 1332), (u8)RW(0));
wr8(c, (RW(17) + 1333), (u8)RW(6));
SET32(5, RW(5) + 5024);
wr32(c, (RW(17) + 8), RW(5));
SET32(4, RW(4) + 5044);
wr32(c, (RW(17) + 104), RW(4));
SET32(3, RW(3) + 5064);
wr32(c, (RW(17) + 160), RW(3));
SET32(2, RW(2) + 5128);
wr32(c, (RW(17) + 468), RW(2));
SET64(8, (s64)(s32)0x4d0000);
SET64(9, (s32)rd32(c, (RW(17) + 448)));
SET32(10, RW(10) + 5388);
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(8, RW(8) + 5200);
wr32(c, (RW(9) + 16), RW(10));
SET32(7, RW(7) + 5232);
wr32(c, (RW(17) + 624), RW(8));
SET32(6, RW(6) + 5280);
wr32(c, (RW(17) + 952), RW(7));
SET32(5, RW(5) + 5292);
wr32(c, (RW(17) + 1148), RW(6));
SET32(3, RW(3) + 5312);
wr32(c, (RW(17) + 1212), RW(5));
wr32(c, (RW(17) + 1288), RW(3));
SET32(2, RW(17) + 1412);
SET64(3, (s32)rd32(c, (RW(17) + 448)));
SET32(4, RW(17) + 1344);
SET32(2, RW(2) - RW(3));
SET64(31, 0x1b388c); wr32(c, (RW(3) + 20), RW(2)); F_002AC130(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001B38B0(Ctx *c) { /* func_001B38B0 */
ENTER(0x1b38b0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RD(18) << 48);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_001B38EC; }
SET32(4, RW(17) + 1512);
SET64(31, 0x1b38ec); wr32(c, (RW(17) + 448), RW(4)); F_00141AA0(c);
L_001B38EC:;
SET64(16, RD(0) + RD(0));
SET64(31, 0x1b38f8); SET64(4, RD(17) + RD(0)); F_001B3F50(c);
SET32(4, RW(17) + 192);
SET64(31, 0x1b3904); SET64(5, RD(0) + RD(0)); F_00152580(c);
SET64(5, RD(19) + RD(0));
SET64(31, 0x1b3910); SET32(4, RW(17) + 1104); F_00155990(c);
SET64(31, 0x1b3918); SET32(4, RW(17) + 1168); F_001B3F30(c);
SET64(31, 0x1b3920); SET32(4, RW(17) + 1216); F_001B3EF0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 5824);
SET64(9, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(3));
SET32(2, RW(2) + 5844);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(2));
SET32(3, RW(3) + 5864);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 160), RW(3));
SET32(2, RW(2) + 5928);
wr32(c, (RW(17) + 468), RW(2));
SET64(8, (s64)(s32)0x4d0000);
SET64(2, (s32)rd32(c, (RW(17) + 448)));
SET32(9, RW(9) + 6184);
SET64(4, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(2) + 16), RW(9));
SET32(8, RW(8) + 6000);
SET32(4, RW(4) + 6032);
wr32(c, (RW(17) + 624), RW(8));
wr32(c, (RW(17) + 952), RW(4));
SET32(7, RW(7) + 6080);
SET32(6, RW(6) + 6092);
wr32(c, (RW(17) + 1148), RW(7));
SET32(5, RW(5) + 6112);
wr32(c, (RW(17) + 1212), RW(6));
wr32(c, (RW(17) + 1288), RW(5));
SET64(2, (s64)(s32)0x3f800000);
SET64(5, (s32)rd32(c, (RW(17) + 448)));
c->f[12].u = RW(2);
SET32(3, RW(17) + 1336);
SET32(4, RW(17) + 1296);
c->f[13].u = c->f[12].u;
SET32(2, RW(3) - RW(5));
c->f[14].u = c->f[12].u;
wr32(c, (RW(5) + 20), RW(2));
SET64(31, 0x1b39c8); c->f[15].u = c->f[12].u; F_0013E630(c);
wr32(c, (RW(17) + 1312), RW(0));
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 1316), RW(0));
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 1320), RW(0));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 1324), RW(0));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 1328), RW(0));
SET64(10, (s64)(s32)0x4d0000);
SET32(6, RW(0) + 1);
wr8(c, (RW(17) + 1332), (u8)RW(0));
wr8(c, (RW(17) + 1333), (u8)RW(6));
SET32(5, RW(5) + 5424);
wr32(c, (RW(17) + 8), RW(5));
SET32(4, RW(4) + 5444);
wr32(c, (RW(17) + 104), RW(4));
SET32(3, RW(3) + 5464);
wr32(c, (RW(17) + 160), RW(3));
SET32(2, RW(2) + 5528);
wr32(c, (RW(17) + 468), RW(2));
SET64(8, (s64)(s32)0x4d0000);
SET64(9, (s32)rd32(c, (RW(17) + 448)));
SET32(10, RW(10) + 5788);
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(8, RW(8) + 5600);
wr32(c, (RW(9) + 16), RW(10));
SET32(7, RW(7) + 5632);
wr32(c, (RW(17) + 624), RW(8));
SET32(6, RW(6) + 5680);
wr32(c, (RW(17) + 952), RW(7));
SET32(5, RW(5) + 5692);
wr32(c, (RW(17) + 1148), RW(6));
SET32(3, RW(3) + 5712);
wr32(c, (RW(17) + 1212), RW(5));
wr32(c, (RW(17) + 1288), RW(3));
SET32(2, RW(17) + 1512);
SET64(3, (s32)rd32(c, (RW(17) + 448)));
SET32(4, RW(17) + 1344);
SET32(2, RW(2) - RW(3));
SET64(31, 0x1b3a7c); wr32(c, (RW(3) + 20), RW(2)); F_002AC130(c);
SET64(31, 0x1b3a84); SET32(4, RW(17) + 1408); F_002AC130(c);
wr32(c, (RW(17) + 1472), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(17) + 1476), RW(0));
SET64(2, RD(17) + RD(0));
wr32(c, (RW(17) + 1480), RW(0));
wr32(c, (RW(17) + 1484), RW(3));
wr32(c, (RW(17) + 1488), RW(0));
wr32(c, (RW(17) + 1492), RW(0));
wr32(c, (RW(17) + 1496), RW(0));
wr32(c, (RW(17) + 1500), RW(3));
wr8(c, (RW(17) + 1504), (u8)RW(0));
wr32(c, (RW(17) + 1508), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001B3AD0(Ctx *c) { /* func_001B3AD0 */
ENTER(0x1b3ad0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(17, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_001B3B0C; }
SET32(4, RW(18) + 1336);
SET64(31, 0x1b3b0c); wr32(c, (RW(18) + 448), RW(4)); F_00141AA0(c);
L_001B3B0C:;
SET64(31, 0x1b3b14); SET64(4, RD(18) + RD(0)); F_002B1080(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(19, RW(18) + 96);
SET32(2, RW(2) + -26416);
SET64(4, RD(19) + RD(0));
SET64(31, 0x1b3b2c); wr32(c, (RW(18) + 8), RW(2)); F_002B1430(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(18) + 144);
SET32(2, RW(2) + -26448);
SET64(31, 0x1b3b40); wr32(c, (RW(19) + 8), RW(2)); F_00141AA0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -19936);
SET32(3, RW(3) + -19916);
wr32(c, (RW(18) + 8), RW(2));
SET32(4, RW(18) + 192);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 104), RW(3));
SET32(2, RW(2) + -19896);
SET64(5, RD(0) + RD(0));
SET64(31, 0x1b3b70); wr32(c, (RW(18) + 160), RW(2)); F_00152580(c);
SET64(5, RD(16) + RD(0));
SET64(31, 0x1b3b7c); SET32(4, RW(18) + 1104); F_00155990(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(18) + 1216);
SET32(2, RW(2) + -10016);
wr32(c, (RW(18) + 1212), RW(2));
wr32(c, (RW(18) + 1200), RW(0));
wr16(c, (RW(18) + 1208), (u16)RW(0));
SET64(31, 0x1b3b9c); wr8(c, (RW(18) + 1210), (u8)RW(0)); F_002AC130(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2752);
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 1288), RW(2));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 1280), RW(0));
SET64(2, (s64)(s32)0x4d0000);
SET32(5, RW(5) + 5824);
wr32(c, (RW(18) + 1284), RW(0));
wr32(c, (RW(18) + 8), RW(5));
SET32(4, RW(4) + 5844);
wr32(c, (RW(18) + 104), RW(4));
SET32(3, RW(3) + 5864);
wr32(c, (RW(18) + 160), RW(3));
SET32(2, RW(2) + 5928);
wr32(c, (RW(18) + 468), RW(2));
SET64(11, (s64)(s32)0x4d0000);
SET64(2, (s32)rd32(c, (RW(18) + 448)));
SET32(11, RW(11) + 6184);
SET64(10, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET64(8, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
wr32(c, (RW(2) + 16), RW(11));
SET32(10, RW(10) + 6000);
SET32(9, RW(9) + 6032);
wr32(c, (RW(18) + 624), RW(10));
SET32(8, RW(8) + 6080);
wr32(c, (RW(18) + 952), RW(9));
SET64(6, (s64)(s32)0x4d0000);
SET32(7, RW(7) + 6092);
wr32(c, (RW(18) + 1148), RW(8));
SET32(6, RW(6) + 6112);
wr32(c, (RW(18) + 1212), RW(7));
SET32(5, RW(18) + 1336);
wr32(c, (RW(18) + 1288), RW(6));
SET64(4, (s64)(s32)0x3f800000);
SET64(6, (s32)rd32(c, (RW(18) + 448)));
SET32(3, RW(0) + 1);
SET64(2, RD(18) + RD(0));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
wr32(c, (RW(18) + 1296), RW(4));
wr32(c, (RW(18) + 1300), RW(4));
wr32(c, (RW(18) + 1304), RW(4));
wr32(c, (RW(18) + 1308), RW(4));
wr32(c, (RW(18) + 1312), RW(0));
wr32(c, (RW(18) + 1316), RW(0));
wr32(c, (RW(18) + 1320), RW(0));
wr32(c, (RW(18) + 1324), RW(0));
wr32(c, (RW(18) + 1328), RW(0));
wr8(c, (RW(18) + 1332), (u8)RW(0));
wr8(c, (RW(18) + 1333), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001B3C90(Ctx *c) { /* func_001B3C90 */
ENTER(0x1b3c90);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr8(c, (RW(4) + 512), (u8)RW(5));
SET64(16, RD(4) + RD(0));
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
SET64(5, RD(6) + RD(0));
SET32(4, RW(29) + 32);
wr128(c, (RW(16) + 480) & ~15u, &c->r[2]);
SET64(31, 0x1b3cbc); SET64(6, RD(7) + RD(0)); F_002AD200(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 48), RW(0));
wr32(c, (RW(29) + 60), RW(2));
SET32(4, RW(29) + 48);
rd128(c, (RW(29) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 52), RW(0));
wr32(c, (RW(29) + 56), RW(0));
SET64(31, 0x1b3ce0); wr128(c, (RW(29) + 48) & ~15u, &c->r[2]); F_002AD410(c);
rd128(c, (RW(29) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 496) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001B3D00(Ctx *c) { /* func_001B3D00 */
ENTER(0x1b3d00);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(5) + RD(0));
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_001B3D5C; }
SET32(4, RW(17) + 416);
SET32(3, RW(17) + 448);
wr32(c, (RW(17) + 704), RW(4));
SET32(2, RW(17) + 736);
wr32(c, (RW(17) + 176), RW(3));
SET64(31, 0x1b3d44); wr32(c, (RW(17) + 180), RW(2)); F_00141AA0(c);
SET32(4, RW(17) + 448);
SET64(31, 0x1b3d50); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET32(4, RW(17) + 736);
SET64(31, 0x1b3d5c); SET32(5, RW(0) + 1); F_002A25B0(c);
L_001B3D5C:;
SET64(31, 0x1b3d64); SET64(4, RD(17) + RD(0)); F_002B1080(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(18, RW(17) + 96);
SET32(2, RW(2) + -26416);
SET64(4, RD(18) + RD(0));
SET64(31, 0x1b3d7c); wr32(c, (RW(17) + 8), RW(2)); F_002B1430(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(17) + 144);
SET32(2, RW(2) + -26448);
SET64(31, 0x1b3d90); wr32(c, (RW(18) + 8), RW(2)); F_00141AA0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -19936);
SET32(3, RW(3) + -19916);
wr32(c, (RW(17) + 8), RW(2));
SET32(4, RW(17) + 176);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + -19896);
SET64(5, RD(0) + RD(0));
SET64(31, 0x1b3dc0); wr32(c, (RW(17) + 160), RW(2)); F_00150D60(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(17) + 240);
SET32(2, RW(2) + -10016);
wr32(c, (RW(17) + 236), RW(2));
wr32(c, (RW(17) + 224), RW(0));
wr16(c, (RW(17) + 232), (u16)RW(0));
SET64(31, 0x1b3de0); wr8(c, (RW(17) + 234), (u8)RW(0)); F_002AC130(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2752);
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 312), RW(2));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 304), RW(0));
SET64(2, (s64)(s32)0x4d0000);
SET32(5, RW(5) + 4448);
wr32(c, (RW(17) + 308), RW(0));
wr32(c, (RW(17) + 8), RW(5));
SET32(4, RW(4) + 4468);
wr32(c, (RW(17) + 104), RW(4));
SET32(3, RW(3) + 4488);
wr32(c, (RW(17) + 160), RW(3));
SET32(2, RW(2) + 4552);
wr32(c, (RW(17) + 188), RW(2));
SET64(11, (s64)(s32)0x4d0000);
SET64(8, (s32)rd32(c, (RW(17) + 176)));
SET32(11, RW(11) + 4716);
SET64(10, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
wr32(c, (RW(8) + 276), RW(11));
SET32(10, RW(10) + 4680);
SET64(8, (s32)rd32(c, (RW(17) + 176)));
SET32(9, RW(9) + 4788);
SET32(7, RW(7) + 4596);
SET32(6, RW(6) + 4616);
SET32(5, RW(17) + 416);
SET32(3, RW(17) + 448);
SET64(8, (s32)rd32(c, (RW(8) + 256)));
SET32(2, RW(17) + 736);
SET32(4, RW(17) + 320);
wr32(c, (RW(8) + 16), RW(10));
SET64(8, (s32)rd32(c, (RW(17) + 180)));
wr32(c, (RW(8) + 144), RW(9));
wr32(c, (RW(17) + 236), RW(7));
wr32(c, (RW(17) + 312), RW(6));
SET64(6, (s32)rd32(c, (RW(17) + 176)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 176)));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(5) + 280), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 180)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x1b3eac); wr32(c, (RW(3) + 416), RW(2)); F_002AC130(c);
SET64(4, (s64)(s32)0x3f800000);
SET32(3, RW(0) + -1);
wr32(c, (RW(17) + 384), RW(4));
SET64(2, RD(17) + RD(0));
wr32(c, (RW(17) + 388), RW(4));
wr32(c, (RW(17) + 392), RW(4));
wr32(c, (RW(17) + 396), RW(4));
wr32(c, (RW(17) + 400), RW(3));
wr32(c, (RW(17) + 404), RW(0));
wr32(c, (RW(17) + 408), RW(0));
wr32(c, (RW(17) + 412), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B3EF0(Ctx *c) { /* func_001B3EF0 */
ENTER(0x1b3ef0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1b3f04); SET64(16, RD(4) + RD(0)); F_002AC130(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + 2752);
wr32(c, (RW(16) + 72), RW(3));
wr32(c, (RW(16) + 64), RW(0));
wr32(c, (RW(16) + 68), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001B3F30(Ctx *c) { /* func_001B3F30 */
ENTER(0x1b3f30);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -10016);
wr32(c, (RW(4) + 44), RW(2));
wr32(c, (RW(4) + 32), RW(0));
SET64(2, RD(4) + RD(0));
wr16(c, (RW(4) + 40), (u16)RW(0));
wr8(c, (RW(4) + 42), (u8)RW(0)); return;
}

void F_001B3F50(Ctx *c) { /* func_001B3F50 */
ENTER(0x1b3f50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1b3f68); SET64(16, RD(4) + RD(0)); F_002B1080(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(17, RW(16) + 96);
SET32(2, RW(2) + -26416);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1b3f80); wr32(c, (RW(16) + 8), RW(2)); F_002B1430(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(16) + 144);
SET32(2, RW(2) + -26448);
SET64(31, 0x1b3f94); wr32(c, (RW(17) + 8), RW(2)); F_00141AA0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -19936);
SET32(2, RW(2) + -19916);
wr32(c, (RW(16) + 8), RW(3));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 104), RW(2));
SET32(3, RW(3) + -19896);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 160), RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B3FD0(Ctx *c) { /* func_001B3FD0 */
ENTER(0x1b3fd0);
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
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s16)rd16(c, (RW(4) + 344)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001B4058; }
SET64(17, RD(0) + RD(0));
SET64(16, RD(21) + RD(0));
L_001B4010:;
SET64(3, (s32)rd32(c, (RW(21) + 356)));
SET32(3, RW(3) + RW(17));
SET64(3, (s16)rd16(c, (RW(3) + 172)));
{ int t = RD(19) != RD(3);  if (t) goto L_001B4040; }
SET64(4, (s32)rd32(c, (RW(16) + 204)));
{ int t = RD(4) == RD(0);  if (t) goto L_001B4040; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x1b4040); SET64(5, RD(20) + RD(0)); rt_call(c, t); }
L_001B4040:;
SET64(3, (s16)rd16(c, (RW(21) + 344)));
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 208);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001B4010; } }
L_001B4058:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001B4080(Ctx *c) { /* func_001B4080 */
ENTER(0x1b4080);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
SET64(30, RD(6) + RD(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(5) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s16)rd16(c, (RW(4) + 360)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001B4200; }
SET64(20, RD(18) + RD(0));
SET64(19, RD(0) + RD(0));
L_001B40CC:;
SET64(3, (s32)rd32(c, (RW(20) + 204)));
{ int t = RD(3) != RD(0);  if (t) goto L_001B41E8; }
SET64(4, (s32)rd32(c, (RW(18) + 356)));
SET32(3, RW(0) + 5);
SET32(4, RW(4) + RW(19));
SET32(7, RW(4) + 160);
SET64(4, (s32)rd32(c, (RW(4) + 160)));
{ int t = RD(4) != RD(3);  if (t) goto L_001B41C0; }
SET64(16, (s16)rd16(c, (RW(7) + 14)));
{ int t = RSD(16) >= 0;  if (t) goto L_001B4108; }
SET64(16, RD(0) + RD(0));
L_001B4108:;
SET64(31, 0x1b4110); SET32(4, RW(0) + 192); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_001B41A0; }
SET64(31, 0x1b4120); SET64(4, RD(21) + RD(0)); F_002B1080(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(22, RW(21) + 96);
SET32(2, RW(2) + -26416);
SET64(4, RD(22) + RD(0));
SET64(31, 0x1b4138); wr32(c, (RW(21) + 8), RW(2)); F_002B1430(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(21) + 144);
SET32(2, RW(2) + -26448);
SET64(31, 0x1b414c); wr32(c, (RW(22) + 8), RW(2)); F_00141AA0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -19936);
SET32(2, RW(2) + -19916);
wr32(c, (RW(21) + 8), RW(3));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(21) + 104), RW(2));
SET32(3, RW(3) + -19896);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(21) + 160), RW(3));
SET32(2, RW(2) + -10544);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(21) + 8), RW(2));
SET32(3, RW(3) + -10524);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -10504);
wr32(c, (RW(21) + 104), RW(3));
wr32(c, (RW(21) + 160), RW(2));
wr32(c, (RW(21) + 176), RW(0));
wr32(c, (RW(21) + 180), RW(0));
wr16(c, (RW(21) + 184), (u16)RW(16));
L_001B41A0:;
SET64(31, 0x1b41a8); SET64(4, RD(21) + RD(0)); F_001ED9A0(c);
wr32(c, (RW(20) + 204), RW(21));
SET64(3, (s16)rd16(c, (RW(18) + 344)));
SET32(3, RW(3) + 1);
wr16(c, (RW(18) + 344), (u16)RW(3)); goto L_001B41E8;
L_001B41C0:;
SET64(3, (s16)rd16(c, (RW(7) + 12)));
{ int t = RD(30) != RD(3);  if (t) goto L_001B41E8; }
SET64(5, (s16)rd16(c, (RW(7) + 14)));
SET64(31, 0x1b41d8); SET64(6, RD(23) + RD(0)); F_001B2530(c);
wr32(c, (RW(20) + 204), RW(2));
SET64(3, (s16)rd16(c, (RW(18) + 344)));
SET32(3, RW(3) + 1);
wr16(c, (RW(18) + 344), (u16)RW(3));
L_001B41E8:;
SET64(3, (s16)rd16(c, (RW(18) + 360)));
SET32(17, RW(17) + 1);
SET32(20, RW(20) + 4);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(19, RW(19) + 208); if (t) { POLL(); goto L_001B40CC; } }
L_001B4200:;
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

void F_001B4230(Ctx *c) { /* func_001B4230 */
ENTER(0x1b4230);
SET32(29, RW(29) + -96);
SET32(3, RW(0) + -1);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s16)rd16(c, (RW(4) + 376)));
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_001B4418; }
SET64(31, 0x1b4268); SET32(4, RW(20) + 104); F_001F0F00(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_001B441C; }
SET64(3, rd16(c, (RW(17) + 8)));
SET64(1, RSD(3) < (s64)32);
{ int t = RD(1) == RD(0);  if (t) goto L_001B4418; }
SET64(2, rd16(c, (RW(17) + 10)));
SET64(3, (s64)(s32)0x520000);
SET32(19, RW(17) + 32);
SET32(18, RW(0) + -1);
SET64(4, RD(0) + RD(0));
SET32(3, RW(3) + 17488);
wr16(c, (RW(16) + 378), (u16)RW(2));
SET64(2, RD(4) & 0xf);
L_001B42A4:;
SET32(2, RW(2) << 2);
SET32(2, RW(3) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
if (RD(2) != RD(20)) { SET32(4, RW(4) + 1); goto L_001B42C0; }
SET64(18, RD(4) + RD(0)); goto L_001B42D0;
L_001B42C0:;
SET64(2, RSD(4) < (s64)12);
if (RD(2) != RD(0)) { SET64(2, RD(4) & 0xf); { POLL(); goto L_001B42A4; } }
L_001B42D0:;
SET64(5, rd16(c, (RW(17) + 8)));
SET64(31, 0x1b42dc); SET64(4, RD(16) + RD(0)); F_001B22F0(c);
SET64(3, rd16(c, (RW(17) + 8)));
{ int t = RSD(3) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_001B4390; }
SET64(3, RD(0) + RD(0));
L_001B42EC:;
SET64(6, (s32)rd32(c, (RW(16) + 356)));
SET64(5, (s32)rd32(c, (RW(19) + 0)));
SET32(10, RW(6) + RW(3));
wr32(c, (RW(10) + 160), RW(5));
SET64(5, rd16(c, (RW(19) + 4)));
wr16(c, (RW(10) + 164), (u16)RW(5));
SET64(5, rd16(c, (RW(19) + 6)));
wr16(c, (RW(10) + 166), (u16)RW(5));
SET64(5, rd16(c, (RW(19) + 8)));
wr16(c, (RW(10) + 168), (u16)RW(5));
SET64(5, (s16)rd16(c, (RW(19) + 10)));
wr16(c, (RW(10) + 170), (u16)RW(5));
SET64(5, (s16)rd16(c, (RW(19) + 12)));
wr16(c, (RW(10) + 172), (u16)RW(5));
SET64(5, (s16)rd16(c, (RW(19) + 14)));
wr16(c, (RW(10) + 174), (u16)RW(5));
c->f[0].u = rd32(c, (RW(19) + 16));
wr32(c, (RW(10) + 176), c->f[0].u);
c->f[0].u = rd32(c, (RW(19) + 20));
wr32(c, (RW(10) + 180), c->f[0].u);
c->f[0].u = rd32(c, (RW(19) + 24));
wr32(c, (RW(10) + 184), c->f[0].u);
SET64(8, rd8(c, (RW(19) + 28)));
SET64(7, rd8(c, (RW(19) + 29)));
SET64(6, rd8(c, (RW(19) + 30)));
SET64(5, rd8(c, (RW(19) + 31)));
wr8(c, (RW(10) + 188), (u8)RW(8));
wr8(c, (RW(10) + 189), (u8)RW(7));
wr8(c, (RW(10) + 190), (u8)RW(6));
wr8(c, (RW(10) + 191), (u8)RW(5));
SET64(5, (s16)rd16(c, (RW(10) + 170)));
{ int t = RSD(5) < 0; SET32(9, RW(10) + 160); if (t) goto L_001B4378; }
wr16(c, (RW(9) + 12), (u16)RW(18));
L_001B4378:;
SET64(5, rd16(c, (RW(17) + 8)));
SET32(4, RW(4) + 1);
SET32(3, RW(3) + 208);
SET64(5, RSD(4) < RSD(5));
{ int t = RD(5) != RD(0); SET32(19, RW(19) + 32); if (t) { POLL(); goto L_001B42EC; } }
L_001B4390:;
SET64(17, RD(0) + RD(0));
SET64(4, RD(17) & 0xf);
L_001B4398:;
SET64(3, (s64)(s32)0x520000);
SET32(3, RW(3) + 17488);
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
SET64(18, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(18) == RD(0);  if (t) goto L_001B4408; }
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x1b43c4); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001B4408; }
SET64(25, (s32)rd32(c, (RW(16) + 144)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(18) + 104);
SET64(25, (s32)rd32(c, (RW(25) + 60)));
{ u32 t = RW(25); SET64(31, 0x1b43e4); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(18) + 156)));
{ int t = RD(3) == RD(0);  if (t) goto L_001B4408; }
SET64(25, (s32)rd32(c, (RW(16) + 144)));
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(18) + 164)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x1b4408); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
L_001B4408:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)12);
if (RD(3) != RD(0)) { SET64(4, RD(17) & 0xf); { POLL(); goto L_001B4398; } }
L_001B4418:;
SET64(31, rd64(c, (RW(29) + 80)));
L_001B441C:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001B4440(Ctx *c) { /* func_001B4440 */
ENTER(0x1b4440);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x1b4474); c->f[20].u = c->f[12].u; rt_call(c, t); }
if (RD(2) != RD(0)) { c->f[0].u = rd32(c, (RW(16) + 372)); goto L_001B4484; }
SET32(2, RW(0) + 1); goto L_001B46E0;
L_001B4484:;
c->f[0].f = fpu(F(0) + F(20));
wr32(c, (RW(16) + 372), c->f[0].u);
SET64(2, (s16)rd16(c, (RW(16) + 360)));
{ int t = RSD(2) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_001B4530; }
SET64(19, RD(16) + RD(0));
SET64(18, RD(0) + RD(0));
L_001B44A0:;
SET64(6, (s32)rd32(c, (RW(19) + 204)));
{ int t = RD(6) == RD(0);  if (t) goto L_001B4518; }
SET64(2, (s32)rd32(c, (RW(16) + 356)));
SET32(5, RW(2) + RW(18));
SET64(2, (s32)rd32(c, (RW(5) + 192)));
SET32(3, RW(5) + 160);
{ int t = RD(2) != RD(0); SET32(17, RW(5) + 192); if (t) goto L_001B4518; }
SET64(2, rd16(c, (RW(3) + 4)));
{ int t = RSD(2) < 0; c->f[1].u = rd32(c, (RW(16) + 372)); if (t) goto L_001B44DC; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001B44F8;
L_001B44DC:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_001B44F8:;
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_001B4518; }
SET64(31, 0x1b450c); SET64(4, RD(16) + RD(0)); F_001B4900(c);
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(2));
L_001B4518:;
SET64(2, (s16)rd16(c, (RW(16) + 360)));
SET32(20, RW(20) + 1);
SET32(19, RW(19) + 4);
SET64(2, RSD(20) < RSD(2));
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 208); if (t) { POLL(); goto L_001B44A0; } }
L_001B4530:;
SET64(5, (s16)rd16(c, (RW(16) + 344)));
{ int t = RSD(5) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_001B45D0; }
SET64(18, RD(16) + RD(0));
SET64(17, RD(0) + RD(0));
L_001B4544:;
SET64(4, (s32)rd32(c, (RW(18) + 204)));
{ int t = RD(4) == RD(0);  if (t) goto L_001B45B8; }
SET64(3, (s32)rd32(c, (RW(16) + 356)));
SET32(2, RW(0) + 1);
SET32(3, RW(3) + RW(17));
SET64(3, (s32)rd32(c, (RW(3) + 192)));
{ int t = RD(3) != RD(2);  if (t) goto L_001B45B8; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x1b4578); c->f[12].u = c->f[20].u; rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001B45B8; }
SET64(3, (s32)rd32(c, (RW(16) + 368)));
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2);  if (t) goto L_001B45A8; }
SET64(4, (s32)rd32(c, (RW(18) + 204)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x1b45a4);  rt_call(c, t); }
L_001B45A8:;
SET64(2, (s32)rd32(c, (RW(16) + 356)));
SET32(3, RW(0) + 2);
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 192), RW(3));
L_001B45B8:;
SET64(5, (s16)rd16(c, (RW(16) + 344)));
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 4);
SET64(2, RSD(19) < RSD(5));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 208); if (t) { POLL(); goto L_001B4544; } }
L_001B45D0:;
SET64(4, (s32)rd32(c, (RW(16) + 368)));
SET32(2, RW(0) + 1);
if (RD(4) != RD(2)) { SET64(7, RD(0) + RD(0)); goto L_001B46A4; }
SET64(2, rd16(c, (RW(16) + 382)));
{ int t = RSD(2) < 0; c->f[1].u = rd32(c, (RW(16) + 372)); if (t) goto L_001B45F8; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001B4614;
L_001B45F8:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_001B4614:;
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_001B46A0; }
SET64(31, 0x1b4628); SET64(4, RD(16) + RD(0)); F_001B4710(c);
SET64(2, rd16(c, (RW(16) + 382)));
{ int t = RSD(2) < 0; c->f[1].u = rd32(c, (RW(16) + 372)); if (t) goto L_001B4640; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001B465C;
L_001B4640:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_001B465C:;
SET64(2, rd16(c, (RW(16) + 380)));
{ int t = RSD(2) < 0; c->f[20].f = fpu(F(1) - F(0)); if (t) goto L_001B4674; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001B4690;
L_001B4674:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_001B4690:;
c->f[0].f = fpu(F(0) + F(20));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 372), c->f[0].u); goto L_001B46E0;
L_001B46A0:;
SET64(7, RD(0) + RD(0));
L_001B46A4:;
{ int t = RSD(5) <= 0;  if (t) goto L_001B46D8; }
SET64(6, (s32)rd32(c, (RW(16) + 356)));
SET32(3, RW(0) + 2);
L_001B46B4:;
SET64(2, (s32)rd32(c, (RW(6) + 192)));
if (RD(2) == RD(3)) { SET32(7, RW(7) + 1); goto L_001B46C8; }
SET64(2, RD(0) + RD(0)); goto L_001B46E0;
L_001B46C8:;
SET64(2, RSD(7) < RSD(5));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 208); if (t) { POLL(); goto L_001B46B4; } }
L_001B46D8:;
SET64(2, RD(4) ^ 0x2);
SET64(2, RD(0) < RD(2));
L_001B46E0:;
SET64(31, rd64(c, (RW(29) + 96)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_001B4710(Ctx *c) { /* func_001B4710 */
ENTER(0x1b4710);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, rd16(c, (RW(4) + 380)));
{ int t = RSD(3) < 0; SET64(21, RD(4) + RD(0)); if (t) goto L_001B474C; }
c->f[0].u = RW(3);
c->f[20].f = (f32)(s32)c->f[0].u; goto L_001B4768;
L_001B474C:;
SET32(4, RW(3) >> 1);
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[20].f = (f32)(s32)c->f[0].u;
c->f[20].f = fpu(F(20) + F(20));
L_001B4768:;
SET64(3, (s16)rd16(c, (RW(21) + 360)));
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_001B48D8; }
SET64(19, RD(21) + RD(0));
SET64(18, RD(0) + RD(0));
L_001B477C:;
SET64(6, (s32)rd32(c, (RW(19) + 204)));
{ int t = RD(6) == RD(0);  if (t) goto L_001B48C0; }
SET64(3, (s32)rd32(c, (RW(21) + 356)));
SET32(5, RW(3) + RW(18));
SET64(4, (s32)rd32(c, (RW(5) + 192)));
SET32(17, RW(5) + 160);
{ int t = RD(4) == RD(0); SET32(16, RW(5) + 192); if (t) goto L_001B48C0; }
SET32(3, RW(0) + 1);
{ int t = RD(4) != RD(3);  if (t) goto L_001B4858; }
SET64(4, rd16(c, (RW(17) + 4)));
if (RSD(4) < 0) { SET32(3, RW(4) >> 1); goto L_001B47C4; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001B47DC;
L_001B47C4:;
SET64(2, RD(4) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_001B47DC:;
c->fcc = F(20) <= F(0);
{ int t = !c->fcc;  if (t) goto L_001B4800; }
SET64(25, (s32)rd32(c, (RW(6) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x1b47f8); SET64(4, RD(6) + RD(0)); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0)); goto L_001B48C0;
L_001B4800:;
if (RSD(4) < 0) { SET32(3, RW(4) >> 1); goto L_001B4814; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001B482C;
L_001B4814:;
SET64(2, RD(4) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_001B482C:;
SET64(25, (s32)rd32(c, (RW(6) + 8)));
c->f[12].f = fpu(F(20) - F(0));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x1b4840); SET64(4, RD(6) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_001B48C0; }
SET32(3, RW(0) + 2);
wr32(c, (RW(16) + 0), RW(3)); goto L_001B48C0;
L_001B4858:;
SET32(3, RW(0) + 2);
{ int t = RD(4) != RD(3);  if (t) goto L_001B48C0; }
SET64(31, 0x1b486c); SET64(4, RD(21) + RD(0)); F_001B4900(c);
SET64(2, rd16(c, (RW(17) + 4)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001B4884; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001B489C;
L_001B4884:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_001B489C:;
SET64(4, (s32)rd32(c, (RW(19) + 204)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x1b48b0); c->f[12].f = fpu(F(20) - F(0)); rt_call(c, t); }
if (RD(2) == RD(0)) { SET32(3, RW(0) + 1); goto L_001B48BC; }
SET32(3, RW(0) + 2);
L_001B48BC:;
wr32(c, (RW(16) + 0), RW(3));
L_001B48C0:;
SET64(3, (s16)rd16(c, (RW(21) + 360)));
SET32(20, RW(20) + 1);
SET32(19, RW(19) + 4);
SET64(3, RSD(20) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 208); if (t) { POLL(); goto L_001B477C; } }
L_001B48D8:;
SET64(31, rd64(c, (RW(29) + 112)));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_001B4900(Ctx *c) { /* func_001B4900 */
ENTER(0x1b4900);
SET32(29, RW(29) + -944);
wr64(c, (RW(29) + 160), RD(31));
wr128(c, (RW(29) + 144) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[20]);
SET64(21, RD(0) + RD(0));
wr128(c, (RW(29) + 112) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(2, (s8)rd8(c, (RW(28) + -30440)));
SET64(16, RD(6) + RD(0));
{ int t = RD(2) != RD(0); SET32(19, RW(17) + 160); if (t) goto L_001B4994; }
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
SET64(31, 0x1b498c); c->f[19].u = c->f[13].u; F_002AC180(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30440), (u8)RW(2));
L_001B4994:;
SET64(31, 0x1b499c); SET32(4, RW(29) + 880); F_002AC130(c);
SET64(7, (s64)(s32)0x410000);
SET64(2, (s64)(s32)0x3f800000);
SET32(7, RW(7) + 21376);
SET32(4, RW(29) + 240);
rd128(c, (RW(7) + 0) & ~15u, &c->r[6]);
rd128(c, (RW(7) + 16) & ~15u, &c->r[5]);
rd128(c, (RW(7) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 880) & ~15u, &c->r[6]);
wr128(c, (RW(29) + 896) & ~15u, &c->r[5]);
wr128(c, (RW(29) + 912) & ~15u, &c->r[3]);
rd128(c, (RW(7) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 928) & ~15u, &c->r[3]);
c->f[2].u = rd32(c, (RW(19) + 24));
c->f[1].u = rd32(c, (RW(19) + 20));
c->f[0].u = rd32(c, (RW(19) + 16));
wr32(c, (RW(29) + 720), c->f[0].u);
wr32(c, (RW(29) + 732), RW(2));
wr32(c, (RW(29) + 724), c->f[1].u);
SET64(31, 0x1b49ec); wr32(c, (RW(29) + 728), c->f[2].u); F_0013AEA0(c);
SET32(4, RW(29) + 240);
SET64(31, 0x1b49f8); SET32(5, RW(29) + 720); F_00164B80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1b4a04); SET32(4, RW(29) + 736); F_0013ADA0(c);
rd128(c, (RW(29) + 768) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 736) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 752) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 912) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 784) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 880) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 896) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 928) & ~15u, &c->r[2]);
SET64(5, rd16(c, (RW(19) + 6)));
SET64(1, RSD(5) < (s64)23);
{ int t = RD(1) == RD(0); SET64(20, RD(0) + RD(0)); if (t) goto L_001B4AD4; }
SET64(4, (s32)rd32(c, (RW(18) + 336)));
if (RD(4) == RD(0)) { SET32(3, RW(5) << 3); goto L_001B4AC4; }
SET64(31, 0x1b4a48);  F_00158A30(c);
SET64(3, rd16(c, (RW(19) + 8)));
SET64(20, RD(2) + RD(0));
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(3, rd16(c, (RW(19) + 8))); goto L_001B4AD8; }
SET64(5, rd16(c, (RW(19) + 6)));
SET64(31, 0x1b4a68); SET64(4, (s32)rd32(c, (RW(18) + 336))); F_001E5400(c);
SET64(6, RD(2) + RD(0));
SET32(4, RW(29) + 432);
SET64(31, 0x1b4a78); SET32(5, RW(29) + 880); F_002ABB90(c);
SET64(31, 0x1b4a80); SET32(4, RW(29) + 656); F_002AC130(c);
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
wr128(c, (RW(29) + 912) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 704) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 880) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 896) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 928) & ~15u, &c->r[2]); goto L_001B4AD4;
L_001B4AC4:;
SET64(2, (s32)rd32(c, (RW(18) + 340)));
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 5);
SET32(20, RW(2) + RW(3));
L_001B4AD4:;
SET64(3, rd16(c, (RW(19) + 8)));
L_001B4AD8:;
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2);  if (t) goto L_001B4B7C; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_001B4B6C; }
{ int t = RD(3) == RD(0);  if (t) goto L_001B4B00; }
 goto L_001B4C44;
L_001B4B00:;
if (RD(20) == RD(0)) { SET64(21, RD(18) + RD(0)); goto L_001B4C44; }
SET32(6, RW(20) + 64);
SET32(4, RW(29) + 368);
SET64(31, 0x1b4b18); SET32(5, RW(29) + 880); F_002ABB90(c);
SET64(31, 0x1b4b20); SET32(4, RW(29) + 592); F_002AC130(c);
rd128(c, (RW(29) + 368) & ~15u, &c->r[4]);
SET64(21, (s64)(s32)0x540000);
rd128(c, (RW(29) + 384) & ~15u, &c->r[3]);
SET32(21, RW(21) + -27024);
rd128(c, (RW(29) + 400) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 592) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 608) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 624) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 416) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 640) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 624) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 592) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 608) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 912) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 640) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 880) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 896) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 928) & ~15u, &c->r[2]); goto L_001B4C44;
L_001B4B6C:;
if (RD(20) == RD(0)) { SET64(21, RD(18) + RD(0)); goto L_001B4C44; }
SET64(21, RD(20) + RD(0)); goto L_001B4C44;
L_001B4B7C:;
if (RD(20) == RD(0)) { SET64(21, RD(18) + RD(0)); goto L_001B4C44; }
SET64(2, (s64)(s32)0x3f800000);
SET32(6, RW(20) + 64);
wr32(c, (RW(29) + 572), RW(2));
SET32(4, RW(29) + 576);
SET32(5, RW(29) + 560);
wr32(c, (RW(29) + 560), RW(0));
wr32(c, (RW(29) + 564), RW(0));
SET64(31, 0x1b4ba8); wr32(c, (RW(29) + 568), RW(0)); F_002ACE80(c);
rd128(c, (RW(29) + 576) & ~15u, &c->r[3]);
SET32(4, RW(29) + 176);
SET64(2, (s32)rd32(c, (RW(18) + 340)));
wr128(c, (RW(29) + 864) & ~15u, &c->r[3]);
SET64(31, 0x1b4bc0); SET32(5, RW(2) + 64); F_0013ADA0(c);
SET64(31, 0x1b4bc8); SET32(4, RW(29) + 176); F_00147BD0(c);
SET64(31, 0x1b4bd0); SET64(4, RD(2) + RD(0)); F_00147BA0(c);
SET32(4, RW(29) + 800);
SET64(31, 0x1b4bdc); SET32(5, RW(29) + 176); F_0013ADA0(c);
rd128(c, (RW(29) + 864) & ~15u, &c->r[2]);
SET32(4, RW(29) + 304);
SET32(5, RW(29) + 880);
SET32(6, RW(29) + 800);
SET64(31, 0x1b4bf4); wr128(c, (RW(29) + 848) & ~15u, &c->r[2]); F_002ABB90(c);
SET64(31, 0x1b4bfc); SET32(4, RW(29) + 496); F_002AC130(c);
rd128(c, (RW(29) + 304) & ~15u, &c->r[4]);
SET64(21, (s64)(s32)0x540000);
rd128(c, (RW(29) + 320) & ~15u, &c->r[3]);
SET32(21, RW(21) + -27024);
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 496) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 512) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 528) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 352) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 544) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 528) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 496) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 512) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 912) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 544) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 880) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 896) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 928) & ~15u, &c->r[2]);
L_001B4C44:;
if (RD(21) == RD(0)) { rd128(c, (RW(29) + 880) & ~15u, &c->r[2]); goto L_001B4C5C; }
SET64(4, RD(21) + RD(0));
SET64(31, 0x1b4c58); SET64(5, RD(17) + RD(0)); F_00240980(c);
rd128(c, (RW(29) + 880) & ~15u, &c->r[2]);
L_001B4C5C:;
SET64(4, RD(17) + RD(0));
wr128(c, (RW(17) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 896) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 912) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 928) & ~15u, &c->r[2]);
SET64(31, 0x1b4c80); wr128(c, (RW(17) + 48) & ~15u, &c->r[2]); F_002A1E20(c);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(6, RD(17) + RD(0));
SET64(5, (s32)rd32(c, (RW(18) + 364)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x1b4c98); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 160)));
rd128(c, (RW(29) + 144) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET32(29, RW(29) + 944); return;
}

void F_001B4CC0(Ctx *c) { /* func_001B4CC0 */
ENTER(0x1b4cc0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s16)rd16(c, (RW(4) + 344)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001B4D60; }
SET64(16, RD(0) + RD(0));
L_001B4CE8:;
SET64(2, (s32)rd32(c, (RW(18) + 356)));
SET32(4, RW(29) + 64);
SET32(2, RW(2) + RW(16));
SET64(31, 0x1b4cfc); wr32(c, (RW(2) + 192), RW(0)); F_002AC130(c);
SET64(3, (s32)rd32(c, (RW(18) + 356)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
SET32(4, RW(3) + RW(16));
wr128(c, (RW(4) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET64(31, 0x1b4d28); wr128(c, (RW(4) + 48) & ~15u, &c->r[2]); F_002A1E20(c);
SET64(3, (s32)rd32(c, (RW(18) + 356)));
SET32(5, RW(3) + RW(16));
SET64(4, (s32)rd32(c, (RW(5) + 128)));
{ int t = RD(4) == RD(0);  if (t) goto L_001B4D48; }
SET64(31, 0x1b4d44);  F_00240930(c);
L_001B4D48:;
SET64(3, (s16)rd16(c, (RW(18) + 344)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 208); if (t) { POLL(); goto L_001B4CE8; } }
L_001B4D60:;
wr32(c, (RW(18) + 364), RW(0));
wr32(c, (RW(18) + 372), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 332)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 332), RW(0)); goto L_001B4D80; }
SET64(31, 0x1b4d7c); SET64(5, RD(18) + RD(0)); F_00240930(c);
wr32(c, (RW(18) + 332), RW(0));
L_001B4D80:;
SET64(3, (s16)rd16(c, (RW(18) + 344)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001B4DB8; }
SET64(16, RD(18) + RD(0));
L_001B4D90:;
SET64(4, (s32)rd32(c, (RW(16) + 204)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x1b4da4);  rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(18) + 344)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001B4D90; } }
L_001B4DB8:;
SET64(3, (s32)rd32(c, (RW(18) + 160)));
if (RD(3) == RD(0)) { wr32(c, (RW(18) + 164), RW(0)); goto L_001B4E24; }
SET64(4, (s32)rd32(c, (RW(3) + 8)));
SET32(5, RW(3) + 8);
SET32(3, RW(18) + 160);
if (RD(4) != RD(3)) { SET32(5, RW(4) + 4); goto L_001B4DEC; }
SET64(3, (s32)rd32(c, (RW(18) + 164)));
if (RD(3) != RD(0)) { wr32(c, (RW(5) + 0), RW(3)); goto L_001B4E20; }
wr32(c, (RW(5) + 0), RW(0)); goto L_001B4E20;
L_001B4DEC:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(4) == RD(3);  if (t) goto L_001B4E18; }
L_001B4DF8:;
SET32(5, RW(4) + 4);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(4) != RD(3);  if (t) { POLL(); goto L_001B4DF8; } }
L_001B4E18:;
SET64(3, (s32)rd32(c, (RW(18) + 164)));
wr32(c, (RW(5) + 0), RW(3));
L_001B4E20:;
wr32(c, (RW(18) + 164), RW(0));
L_001B4E24:;
wr32(c, (RW(18) + 160), RW(0));
wr16(c, (RW(18) + 348), (u16)RW(0));
wr32(c, (RW(18) + 340), RW(0));
wr16(c, (RW(18) + 346), (u16)RW(0));
wr32(c, (RW(18) + 336), RW(0));
wr16(c, (RW(18) + 350), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_001B4E60(Ctx *c) { /* func_001B4E60 */
ENTER(0x1b4e60);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(7) + RD(0));
SET64(16, (s16)rd16(c, (RW(4) + 344)));
SET64(31, 0x1b4e88); wr16(c, (RW(4) + 344), (u16)RW(0)); F_001B53B0(c);
wr16(c, (RW(18) + 344), (u16)RW(16));
wr32(c, (RW(18) + 364), RW(17));
wr32(c, (RW(18) + 372), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B4EB0(Ctx *c) { /* func_001B4EB0 */
ENTER(0x1b4eb0);
wr32(c, (RW(4) + 356), RW(0));
SET32(3, RW(0) + -1);
wr16(c, (RW(4) + 360), (u16)RW(0));
wr32(c, (RW(4) + 352), RW(0));
wr32(c, (RW(4) + 368), RW(0));
wr32(c, (RW(4) + 372), RW(0));
wr32(c, (RW(4) + 364), RW(0));
wr16(c, (RW(4) + 376), (u16)RW(3));
wr16(c, (RW(4) + 378), (u16)RW(0)); return;
}

void F_001B4EE0(Ctx *c) { /* func_001B4EE0 */
ENTER(0x1b4ee0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(17, RD(16) + RD(0));
L_001B4F00:;
SET64(4, (s32)rd32(c, (RW(17) + 204)));
{ int t = RD(4) == RD(0);  if (t) goto L_001B4F30; }
{ int t = RD(4) == RD(0);  if (t) goto L_001B4F28; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1b4f24); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001B4F28:;
wr32(c, (RW(17) + 204), RW(0));
L_001B4F30:;
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)32);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001B4F00; } }
SET64(4, RD(16) + RD(0));
SET64(31, 0x1b4f4c); SET64(5, RD(0) + RD(0)); F_00240890(c);
SET64(4, RD(0) + RD(0));
SET64(3, RD(16) + RD(0));
L_001B4F54:;
wr32(c, (RW(3) + 204), RW(0));
SET32(4, RW(4) + 8);
wr32(c, (RW(3) + 208), RW(0));
SET64(2, RSD(4) < (s64)32);
wr32(c, (RW(3) + 212), RW(0));
wr32(c, (RW(3) + 216), RW(0));
wr32(c, (RW(3) + 220), RW(0));
wr32(c, (RW(3) + 224), RW(0));
wr32(c, (RW(3) + 228), RW(0));
wr32(c, (RW(3) + 232), RW(0));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 32); if (t) { POLL(); goto L_001B4F54; } }
wr16(c, (RW(16) + 344), (u16)RW(0));
SET64(5, (s64)(s32)0x1b0000);
wr32(c, (RW(16) + 332), RW(0));
wr16(c, (RW(16) + 348), (u16)RW(0));
wr32(c, (RW(16) + 340), RW(0));
wr16(c, (RW(16) + 346), (u16)RW(0));
wr32(c, (RW(16) + 336), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 356)));
SET64(31, 0x1b4fac); SET32(5, RW(5) + 9280); F_001022C0(c);
wr32(c, (RW(16) + 356), RW(0));
SET32(3, RW(0) + -1);
wr32(c, (RW(16) + 356), RW(0));
wr16(c, (RW(16) + 360), (u16)RW(0));
wr32(c, (RW(16) + 352), RW(0));
wr32(c, (RW(16) + 368), RW(0));
wr32(c, (RW(16) + 372), RW(0));
wr32(c, (RW(16) + 364), RW(0));
wr16(c, (RW(16) + 376), (u16)RW(3));
wr16(c, (RW(16) + 378), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B4FF0(Ctx *c) { /* func_001B4FF0 */
ENTER(0x1b4ff0);
wr32(c, (RW(4) + 332), RW(0));
wr16(c, (RW(4) + 348), (u16)RW(0));
wr16(c, (RW(4) + 350), (u16)RW(0)); return;
}

void F_001B5000(Ctx *c) { /* func_001B5000 */
ENTER(0x1b5000);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 336), RW(5));
SET64(6, rd16(c, (RW(5) + 898)));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x1b5020); SET64(5, (s32)rd32(c, (RW(5) + 900))); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001B5030(Ctx *c) { /* func_001B5030 */
ENTER(0x1b5030);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 160)));
{ int t = RD(2) == RD(0); SET64(6, RD(5) + RD(0)); if (t) goto L_001B50A0; }
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET32(5, RW(2) + 8);
SET32(2, RW(4) + 160);
if (RD(3) != RD(2)) { SET32(5, RW(3) + 4); goto L_001B506C; }
SET64(2, (s32)rd32(c, (RW(4) + 164)));
if (RD(2) != RD(0)) { wr32(c, (RW(5) + 0), RW(2)); goto L_001B50A0; }
wr32(c, (RW(5) + 0), RW(0)); goto L_001B50A0;
L_001B506C:;
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(2);  if (t) goto L_001B5098; }
L_001B5078:;
SET32(5, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(2);  if (t) { POLL(); goto L_001B5078; } }
L_001B5098:;
SET64(2, (s32)rd32(c, (RW(4) + 164)));
wr32(c, (RW(5) + 0), RW(2));
L_001B50A0:;
wr32(c, (RW(4) + 164), RW(0));
{ int t = RD(6) == RD(0); wr32(c, (RW(4) + 160), RW(0)); if (t) goto L_001B50C8; }
SET64(25, (s32)rd32(c, (RW(6) + 12)));
SET32(5, RW(4) + 160);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b50c0); SET64(4, RD(6) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0))); goto L_001B50E8;
L_001B50C8:;
SET32(5, RW(4) + 160);
SET64(4, (s64)(s32)0x520000);
SET32(4, RW(4) + 14840);
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b50e4);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_001B50E8:;
SET32(29, RW(29) + 16); return;
}

void F_001B50F0(Ctx *c) { /* func_001B50F0 */
ENTER(0x1b50f0);
SET64(3, (s16)rd16(c, (RW(4) + 344)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(3) + 204), RW(5));
SET64(3, (s16)rd16(c, (RW(4) + 344)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 344), (u16)RW(3)); return;
}

void F_001B5110(Ctx *c) { /* func_001B5110 */
ENTER(0x1b5110);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s16)rd16(c, (RW(4) + 348)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001B5150; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x1b5138); c->f[12].u = rd32(c, (RW(16) + 184)); rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001B5154; }
SET64(25, (s32)rd32(c, (RW(16) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x1b5150); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
L_001B5150:;
SET64(31, rd64(c, (RW(29) + 16)));
L_001B5154:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001B5160(Ctx *c) { /* func_001B5160 */
ENTER(0x1b5160);
 return;
}

void F_001B5170(Ctx *c) { /* func_001B5170 */
ENTER(0x1b5170);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(0) + (s64)1);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(0) + RD(0));
SET64(2, (s16)rd16(c, (RW(4) + 344)));
{ int t = RSD(2) <= 0; c->f[20].u = c->f[12].u; if (t) goto L_001B51E0; }
SET64(19, RD(18) + RD(0));
L_001B51A8:;
SET64(4, (s32)rd32(c, (RW(19) + 204)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x1b51bc); c->f[12].u = c->f[20].u; rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001B51C8; }
SET64(17, RD(0) + RD(0));
L_001B51C8:;
SET64(2, (s16)rd16(c, (RW(18) + 344)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_001B51A8; } }
L_001B51E0:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 80)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001B5210(Ctx *c) { /* func_001B5210 */
ENTER(0x1b5210);
SET64(2, (s16)rd16(c, (RW(4) + 348)));
SET64(2, RD(0) < RD(2)); return;
}

void F_001B5220(Ctx *c) { /* func_001B5220 */
ENTER(0x1b5220);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, (s16)rd16(c, (RW(4) + 344)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_001B5280; }
SET64(19, RD(18) + RD(0));
L_001B5250:;
SET64(2, (s32)rd32(c, (RW(19) + 204)));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(2) + 160)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1b5268); SET32(4, RW(2) + 144); rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(18) + 344)));
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < RSD(3));
{ int t = RD(3) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_001B5250; } }
L_001B5280:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001B52A0(Ctx *c) { /* func_001B52A0 */
ENTER(0x1b52a0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 332)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 332), RW(0)); goto L_001B52D0; }
SET64(31, 0x1b52cc); SET64(5, RD(16) + RD(0)); F_00240930(c);
wr32(c, (RW(16) + 332), RW(0));
L_001B52D0:;
SET64(3, (s16)rd16(c, (RW(16) + 344)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001B5308; }
SET64(17, RD(16) + RD(0));
L_001B52E0:;
SET64(4, (s32)rd32(c, (RW(17) + 204)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x1b52f4);  rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(16) + 344)));
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001B52E0; } }
L_001B5308:;
SET64(3, (s32)rd32(c, (RW(16) + 160)));
if (RD(3) == RD(0)) { wr32(c, (RW(16) + 164), RW(0)); goto L_001B5374; }
SET64(4, (s32)rd32(c, (RW(3) + 8)));
SET32(5, RW(3) + 8);
SET32(3, RW(16) + 160);
if (RD(4) != RD(3)) { SET32(5, RW(4) + 4); goto L_001B533C; }
SET64(3, (s32)rd32(c, (RW(16) + 164)));
if (RD(3) != RD(0)) { wr32(c, (RW(5) + 0), RW(3)); goto L_001B5370; }
wr32(c, (RW(5) + 0), RW(0)); goto L_001B5370;
L_001B533C:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(4) == RD(3);  if (t) goto L_001B5368; }
L_001B5348:;
SET32(5, RW(4) + 4);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(4) != RD(3);  if (t) { POLL(); goto L_001B5348; } }
L_001B5368:;
SET64(3, (s32)rd32(c, (RW(16) + 164)));
wr32(c, (RW(5) + 0), RW(3));
L_001B5370:;
wr32(c, (RW(16) + 164), RW(0));
L_001B5374:;
wr32(c, (RW(16) + 160), RW(0));
wr16(c, (RW(16) + 348), (u16)RW(0));
wr32(c, (RW(16) + 340), RW(0));
wr16(c, (RW(16) + 346), (u16)RW(0));
wr32(c, (RW(16) + 336), RW(0));
wr16(c, (RW(16) + 350), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B53B0(Ctx *c) { /* func_001B53B0 */
ENTER(0x1b53b0);
SET32(29, RW(29) + -208);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(0); SET64(17, RD(7) + RD(0)); if (t) goto L_001B53DC; }
wr32(c, (RW(18) + 332), RW(5)); goto L_001B53E8;
L_001B53DC:;
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + -27024);
wr32(c, (RW(18) + 332), RW(2));
L_001B53E8:;
{ int t = RD(6) == RD(0);  if (t) goto L_001B540C; }
SET64(25, (s32)rd32(c, (RW(6) + 12)));
SET64(4, RD(6) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b5404); SET32(5, RW(18) + 160); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 332))); goto L_001B5428;
L_001B540C:;
SET64(4, (s64)(s32)0x520000);
SET32(4, RW(4) + 14840);
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b5424); SET32(5, RW(18) + 160); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 332)));
L_001B5428:;
SET64(31, 0x1b5430); SET64(5, RD(18) + RD(0)); F_00240980(c);
SET64(2, (s8)rd8(c, (RW(28) + -30440)));
if (RD(2) != RD(0)) { SET32(4, RW(29) + 144); goto L_001B5498; }
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
SET64(31, 0x1b548c); c->f[19].u = c->f[13].u; F_002AC180(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30440), (u8)RW(2));
SET32(4, RW(29) + 144);
L_001B5498:;
SET64(31, 0x1b54a0);  F_002AC130(c);
SET64(7, (s64)(s32)0x410000);
SET32(5, RW(29) + 144);
SET32(7, RW(7) + 21376);
rd128(c, (RW(7) + 0) & ~15u, &c->r[6]);
rd128(c, (RW(7) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(7) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[6]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 176) & ~15u, &c->r[2]);
rd128(c, (RW(7) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 192) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(18) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x1b54dc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
wr32(c, (RW(18) + 184), RW(0));
SET64(3, (s16)rd16(c, (RW(18) + 344)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_001B5520; }
SET64(19, RD(18) + RD(0));
L_001B54F0:;
SET64(4, (s32)rd32(c, (RW(19) + 204)));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x1b5508); SET64(6, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(18) + 344)));
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < RSD(3));
{ int t = RD(3) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_001B54F0; } }
L_001B5520:;
SET32(3, RW(0) + 1);
wr16(c, (RW(18) + 348), (u16)RW(3));
wr16(c, (RW(18) + 350), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 128)));
rd128(c, (RW(29) + 112) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET32(29, RW(29) + 208); return;
}

void F_001B5550(Ctx *c) { /* func_001B5550 */
ENTER(0x1b5550);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s16)rd16(c, (RW(4) + 344)));
{ int t = RSD(3) <= 0; SET64(16, RD(5) + RD(0)); if (t) goto L_001B55A8; }
SET64(18, RD(17) + RD(0));
L_001B5580:;
SET64(4, (s32)rd32(c, (RW(18) + 204)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x1b5594); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(17) + 344)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_001B5580; } }
L_001B55A8:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001B55D0(Ctx *c) { /* func_001B55D0 */
ENTER(0x1b55d0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s16)rd16(c, (RW(4) + 344)));
{ int t = RSD(3) <= 0; SET64(16, RD(5) + RD(0)); if (t) goto L_001B5628; }
SET64(18, RD(17) + RD(0));
L_001B5600:;
SET64(4, (s32)rd32(c, (RW(18) + 204)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x1b5614); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(17) + 344)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_001B5600; } }
L_001B5628:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001B5650(Ctx *c) { /* func_001B5650 */
ENTER(0x1b5650);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s16)rd16(c, (RW(4) + 344)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_001B56B0; }
SET64(18, RD(17) + RD(0));
L_001B5678:;
SET64(2, (s32)rd32(c, (RW(18) + 204)));
SET64(25, (s32)rd32(c, (RW(2) + 160)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1b568c); SET32(4, RW(2) + 144); rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(2, (s16)rd16(c, (RW(17) + 344))); goto L_001B569C; }
SET64(2, RD(0) + RD(0)); goto L_001B56B4;
L_001B569C:;
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_001B5678; } }
L_001B56B0:;
SET32(2, RW(0) + 1);
L_001B56B4:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B56D0(Ctx *c) { /* func_001B56D0 */
ENTER(0x1b56d0);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1b56e8); SET64(16, RD(4) + RD(0)); F_00240890(c);
SET64(5, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
L_001B56F0:;
wr32(c, (RW(4) + 204), RW(0));
SET32(5, RW(5) + 8);
wr32(c, (RW(4) + 208), RW(0));
SET64(3, RSD(5) < (s64)32);
wr32(c, (RW(4) + 212), RW(0));
wr32(c, (RW(4) + 216), RW(0));
wr32(c, (RW(4) + 220), RW(0));
wr32(c, (RW(4) + 224), RW(0));
wr32(c, (RW(4) + 228), RW(0));
wr32(c, (RW(4) + 232), RW(0));
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_001B56F0; } }
wr16(c, (RW(16) + 344), (u16)RW(0));
wr32(c, (RW(16) + 332), RW(0));
wr16(c, (RW(16) + 348), (u16)RW(0));
wr32(c, (RW(16) + 340), RW(0));
wr16(c, (RW(16) + 346), (u16)RW(0));
wr32(c, (RW(16) + 336), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001B5750(Ctx *c) { /* func_001B5750 */
ENTER(0x1b5750);
wr32(c, (RW(4) + 332), RW(0));
wr16(c, (RW(4) + 348), (u16)RW(0));
wr16(c, (RW(4) + 350), (u16)RW(0)); return;
}

void F_001B5760(Ctx *c) { /* func_001B5760 */
ENTER(0x1b5760);
 return;
}

void F_001B5770(Ctx *c) { /* func_001B5770 */
ENTER(0x1b5770);
 return;
}

void F_001B5780(Ctx *c) { /* func_001B5780 */
ENTER(0x1b5780);
SET32(2, RW(0) + 1); return;
}

void F_001B5790(Ctx *c) { /* func_001B5790 */
ENTER(0x1b5790);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001B5898; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -10688);
SET32(2, RW(2) + -10664);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1b57d4);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_001B5884; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -10432);
SET32(2, RW(2) + -10408);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1b5804); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_001B5880; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -10288);
SET32(2, RW(2) + -10264);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1b5834); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 160);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_001B5878; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1b585c);  rt_call(c, t); }
SET32(2, RW(17) + 160);
{ int t = RD(2) == RD(0);  if (t) goto L_001B5874; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30016);
wr32(c, (RW(17) + 172), RW(2));
L_001B5874:;
SET64(4, RD(17) + RD(0));
L_001B5878:;
SET64(31, 0x1b5880); SET64(5, RD(0) + RD(0)); F_002409D0(c);
L_001B5880:;
SET64(2, RD(16) << 48);
L_001B5884:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001B589C; }
SET64(31, 0x1b5898); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001B5898:;
SET64(2, RD(17) + RD(0));
L_001B589C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B58B0(Ctx *c) { /* func_001B58B0 */
ENTER(0x1b58b0);
 return;
}

void F_001B58C0(Ctx *c) { /* func_001B58C0 */
ENTER(0x1b58c0);
 return;
}

void F_001B58D0(Ctx *c) { /* func_001B58D0 */
ENTER(0x1b58d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 180)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001B5904; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x1b58fc);  rt_call(c, t); }
wr32(c, (RW(16) + 180), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
L_001B5904:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001B5910(Ctx *c) { /* func_001B5910 */
ENTER(0x1b5910);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 180)));
if (RD(4) != RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 144))); goto L_001B5934; }
SET32(2, RW(0) + 1); goto L_001B5958;
L_001B5934:;
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x1b5940);  rt_call(c, t); }
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) == RD(0);  if (t) goto L_001B5958; }
wr32(c, (RW(16) + 180), RW(0));
L_001B5958:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001B5970(Ctx *c) { /* func_001B5970 */
ENTER(0x1b5970);
SET64(2, RD(0) + RD(0)); return;
}

void F_001B5980(Ctx *c) { /* func_001B5980 */
ENTER(0x1b5980);
wr32(c, (RW(4) + 180), RW(0)); return;
}

void F_001B5990(Ctx *c) { /* func_001B5990 */
ENTER(0x1b5990);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001B5A9C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -10544);
SET32(3, RW(3) + -10524);
wr32(c, (RW(17) + 8), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + -10504);
wr32(c, (RW(17) + 160), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1b59e0);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_001B5A88; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -19936);
SET32(3, RW(3) + -19916);
wr32(c, (RW(17) + 8), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + -19896);
wr32(c, (RW(17) + 160), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1b5a1c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 144);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 96); goto L_001B5A48; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 160), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b5a44);  rt_call(c, t); }
SET32(4, RW(17) + 96);
L_001B5A48:;
{ int t = RD(4) == RD(0);  if (t) goto L_001B5A64; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -26448);
SET64(31, 0x1b5a64); wr32(c, (RW(17) + 104), RW(2)); F_002B13D0(c);
L_001B5A64:;
{ int t = RD(17) == RD(0);  if (t) goto L_001B5A84; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + -26416);
SET64(5, RD(0) + RD(0));
SET64(31, 0x1b5a84); wr32(c, (RW(17) + 8), RW(2)); F_002B1020(c);
L_001B5A84:;
SET64(2, RD(16) << 48);
L_001B5A88:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001B5AA0; }
SET64(31, 0x1b5a9c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001B5A9C:;
SET64(2, RD(17) + RD(0));
L_001B5AA0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B5AC0(Ctx *c) { /* func_001B5AC0 */
ENTER(0x1b5ac0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001B5B98; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -10432);
SET32(2, RW(2) + -10408);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1b5b04);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_001B5B84; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -10288);
SET32(2, RW(2) + -10264);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1b5b34); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 160);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_001B5B78; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1b5b5c);  rt_call(c, t); }
SET32(2, RW(17) + 160);
{ int t = RD(2) == RD(0);  if (t) goto L_001B5B74; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30016);
wr32(c, (RW(17) + 172), RW(2));
L_001B5B74:;
SET64(4, RD(17) + RD(0));
L_001B5B78:;
SET64(31, 0x1b5b80); SET64(5, RD(0) + RD(0)); F_002409D0(c);
SET64(2, RD(16) << 48);
L_001B5B84:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001B5B9C; }
SET64(31, 0x1b5b98); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001B5B98:;
SET64(2, RD(17) + RD(0));
L_001B5B9C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B5BB0(Ctx *c) { /* func_001B5BB0 */
ENTER(0x1b5bb0);
SET32(4, RW(4) + -160); { F_00170C10(c); return; }
}

void F_001B5BC0(Ctx *c) { /* func_001B5BC0 */
ENTER(0x1b5bc0);
SET32(4, RW(4) + -160); { F_001B5AC0(c); return; }
}

void F_001B5BD0(Ctx *c) { /* func_001B5BD0 */
ENTER(0x1b5bd0);
SET32(4, RW(4) + -96); { F_001B5990(c); return; }
}

void F_001B5BE0(Ctx *c) { /* func_001B5BE0 */
ENTER(0x1b5be0);
SET32(4, RW(4) + -144); { F_001B5980(c); return; }
}

void F_001B5BF0(Ctx *c) { /* func_001B5BF0 */
ENTER(0x1b5bf0);
SET32(4, RW(4) + -144); { F_001B5990(c); return; }
}

void F_001B5C00(Ctx *c) { /* func_001B5C00 */
ENTER(0x1b5c00);
SET32(4, RW(4) + -160); { F_001B5790(c); return; }
}

void F_001B5C10(Ctx *c) { /* func_001B5C10 */
ENTER(0x1b5c10);
SET32(4, RW(4) + -160); { F_001B0F70(c); return; }
}

void F_001B5C20(Ctx *c) { /* func_001B5C20 */
ENTER(0x1b5c20);
SET64(6, (s32)rd32(c, (RW(4) + 4)));
SET64(5, RD(5) & 0xffff);
SET64(3, rd16(c, (RW(4) + 30)));
SET64(9, RD(0) + RD(0));
SET32(6, RW(6) << 16);
{ int t = RSD(3) <= 0; SET32(7, RW(6) + RW(5)); if (t) goto L_001B5C80; }
SET64(8, RD(4) + RD(0));
SET32(6, RW(0) + 1);
L_001B5C44:;
SET64(3, (s32)rd32(c, (RW(8) + 36)));
{ int t = RD(3) != RD(7);  if (t) goto L_001B5C68; }
SET64(3, rd8(c, (RW(4) + 68)));
SET32(5, RW(6) << (RW(9) & 31));
SET64(5, RD(5) & 0xff);
SET64(3, RD(3) | RD(5));
wr8(c, (RW(4) + 68), (u8)RW(3));
L_001B5C68:;
SET64(3, rd16(c, (RW(4) + 30)));
SET32(9, RW(9) + 1);
SET64(3, RSD(9) < RSD(3));
{ int t = RD(3) != RD(0); SET32(8, RW(8) + 4); if (t) { POLL(); goto L_001B5C44; } }
L_001B5C80:;
 return;
}

void F_001B5C90(Ctx *c) { /* func_001B5C90 */
ENTER(0x1b5c90);
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 69), (u8)RW(3));
SET64(6, (s32)rd32(c, (RW(5) + 4)));
SET32(3, RW(0) + 7);
wr32(c, (RW(4) + 4), RW(6));
SET64(6, (s32)rd32(c, (RW(5) + 8)));
wr32(c, (RW(4) + 8), RW(6));
SET64(5, rd16(c, (RW(5) + 30)));
wr16(c, (RW(4) + 30), (u16)RW(5));
wr16(c, (RW(4) + 24), (u16)RW(3));
wr16(c, (RW(4) + 28), (u16)RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 44), RW(0));
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(0));
wr32(c, (RW(4) + 56), RW(0));
wr32(c, (RW(4) + 60), RW(0));
wr32(c, (RW(4) + 64), RW(0));
wr8(c, (RW(4) + 68), (u8)RW(0)); return;
}

void F_001B5CF0(Ctx *c) { /* func_001B5CF0 */
ENTER(0x1b5cf0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(7) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(8) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(18) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001B5DF0; }
SET64(3, rd16(c, (RW(28) + -32224)));
SET64(2, rd16(c, (RW(17) + 32)));
if (RD(2) == RD(3)) { SET64(3, rd16(c, (RW(17) + 34))); goto L_001B5D40; }
wr16(c, (RW(17) + 32), (u16)RW(3));
wr16(c, (RW(17) + 34), (u16)RW(0));
SET64(3, rd16(c, (RW(17) + 34)));
L_001B5D40:;
SET32(2, RW(3) + 1);
wr16(c, (RW(17) + 34), (u16)RW(2));
SET64(2, rd16(c, (RW(17) + 30)));
SET64(1, RSD(3) < RSD(2));
if (RD(1) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001B5DF4; }
SET64(31, 0x1b5d60);  F_002C5110(c);
SET64(31, 0x1b5d68); SET64(4, RD(2) + RD(0)); F_002C5250(c);
c->f[1].u = RW(20);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu(F(1) * F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(20, (s32)c->f[0].u);
SET64(31, 0x1b5d88);  F_002C5110(c);
SET64(3, (s32)rd32(c, (RW(2) + 12)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(2, rd16(c, (RW(17) + 26))); goto L_001B5DA0; }
SET32(19, RW(0) + 63);
SET64(2, rd16(c, (RW(17) + 26)));
L_001B5DA0:;
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(16) - RW(2));
SET32(2, RW(2) << 2);
SET32(3, RW(3) << 16);
SET32(2, RW(2) + RW(17));
SET32(18, RW(3) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 36)));
{ int t = RD(4) == RD(0); SET32(17, RW(2) + 36); if (t) goto L_001B5DD0; }
SET64(5, RD(16) + RD(0));
SET64(31, 0x1b5dd0); SET64(6, RD(0) + RD(0)); F_00243120(c);
L_001B5DD0:;
SET64(5, RD(16) + RD(0));
SET64(6, RD(20) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(31, 0x1b5de4); SET64(4, RD(18) + RD(0)); F_00242FA0(c);
wr32(c, (RW(17) + 0), RW(18));
SET32(2, RW(0) + 1); goto L_001B5DF4;
L_001B5DF0:;
SET64(2, RD(0) + RD(0));
L_001B5DF4:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001B5E20(Ctx *c) { /* func_001B5E20 */
ENTER(0x1b5e20);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + -1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 30))); goto L_001B5E4C; }
SET64(31, 0x1b5e48); SET64(4, RD(4) & 0xffff); F_00243528(c);
SET64(3, rd16(c, (RW(16) + 30)));
L_001B5E4C:;
{ int t = RSD(3) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_001B5E78; }
SET64(4, RD(16) + RD(0));
L_001B5E58:;
wr32(c, (RW(4) + 36), RW(0));
SET32(5, RW(5) + 1);
SET64(3, rd16(c, (RW(16) + 30)));
SET32(4, RW(4) + 4);
SET64(3, RSD(5) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_001B5E58; } }
L_001B5E78:;
wr8(c, (RW(16) + 68), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001B5E90(Ctx *c) { /* func_001B5E90 */
ENTER(0x1b5e90);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + -1);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(4) == RD(3);  if (t) goto L_001B5F70; }
if (RD(5) != RD(0)) { SET64(7, rd16(c, (RW(17) + 30))); goto L_001B5F08; }
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(17) + 30))); goto L_001B5ED4; }
SET64(4, RD(4) & 0xffff);
SET64(31, 0x1b5ed0); SET64(5, RD(6) + RD(0)); F_00243528(c);
SET64(3, rd16(c, (RW(17) + 30)));
L_001B5ED4:;
{ int t = RSD(3) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_001B5F00; }
SET64(4, RD(17) + RD(0));
L_001B5EE0:;
wr32(c, (RW(4) + 36), RW(0));
SET32(5, RW(5) + 1);
SET64(3, rd16(c, (RW(17) + 30)));
SET32(4, RW(4) + 4);
SET64(3, RSD(5) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_001B5EE0; } }
L_001B5F00:;
wr8(c, (RW(17) + 68), (u8)RW(0)); goto L_001B5F70;
L_001B5F08:;
SET32(4, RW(4) << 16);
SET64(3, RD(5) & 0xffff);
SET64(16, RD(0) + RD(0));
{ int t = RSD(7) <= 0; SET32(4, RW(4) + RW(3)); if (t) goto L_001B5F70; }
SET64(8, RD(17) + RD(0));
L_001B5F20:;
SET64(3, (s32)rd32(c, (RW(8) + 36)));
if (RD(3) != RD(4)) { SET32(16, RW(16) + 1); goto L_001B5F64; }
SET32(2, RW(5) >> 16);
SET64(31, 0x1b5f38); SET64(5, RD(2) & 0x7fff); F_00243120(c);
SET32(3, RW(0) + 1);
SET64(4, rd8(c, (RW(17) + 68)));
SET32(5, RW(3) << (RW(16) & 31));
SET64(5, ~(RD(5) | RD(0)));
SET32(3, RW(16) << 2);
SET64(5, RD(5) & 0xff);
SET32(3, RW(3) + RW(17));
SET64(4, RD(4) & RD(5));
wr8(c, (RW(17) + 68), (u8)RW(4));
wr32(c, (RW(3) + 36), RW(0)); goto L_001B5F70;
L_001B5F64:;
SET64(3, RSD(16) < RSD(7));
{ int t = RD(3) != RD(0); SET32(8, RW(8) + 4); if (t) { POLL(); goto L_001B5F20; } }
L_001B5F70:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B5F90(Ctx *c) { /* func_001B5F90 */
ENTER(0x1b5f90);
SET32(29, RW(29) + -32);
SET64(3, RD(5) & 0xffff);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(5) >> 16);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(5, RD(2) & 0xffff);
SET32(2, RW(4) << 16);
SET64(31, 0x1b5fb4); SET32(4, RW(2) + RW(3)); F_00242EC8(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(29) + 28), RW(2)); if (t) goto L_001B5FD8; }
L_001B5FBC:;
SET64(31, 0x1b5fc4); SET32(4, RW(29) + 28); F_00241010(c);
{ int t = RSD(2) < 0;  if (t) { POLL(); goto L_001B5FBC; } }
L_001B5FD8:;
SET64(2, (s32)rd32(c, (RW(29) + 28)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 32); return;
}

void F_001B5FF0(Ctx *c) { /* func_001B5FF0 */
ENTER(0x1b5ff0);
SET32(29, RW(29) + -64);
SET64(8, RD(7) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(17, RD(5) + RD(0));
{ int t = RD(17) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_001B60A4; }
SET64(3, (s32)rd32(c, (RW(18) + 4)));
SET32(2, RW(0) + -1);
if (RD(3) == RD(2)) { SET64(2, RD(0) + RD(0)); goto L_001B60A8; }
SET64(3, rd16(c, (RW(18) + 26)));
SET64(7, RD(6) + RD(0));
SET64(2, rd16(c, (RW(18) + 28)));
SET64(6, RD(17) + RD(0));
SET32(16, RW(3) + RW(2));
SET64(31, 0x1b6040); SET64(5, RD(16) + RD(0)); F_001B5CF0(c);
SET64(2, RD(2) & 0xff);
SET32(4, RW(0) + 1);
{ int t = RD(2) != RD(4);  if (t) goto L_001B60A4; }
SET64(5, RD(0) + RD(0));
SET64(3, rd16(c, (RW(18) + 28)));
L_001B6058:;
SET32(5, RW(5) + 1);
SET64(2, rd16(c, (RW(18) + 30)));
SET32(3, RW(3) + 1);
div_s(c, 0, RSW(3), RSW(2));
SET64(2, c->hi.d[0]);
wr16(c, (RW(18) + 28), (u16)RW(2));
SET64(2, rd16(c, (RW(18) + 30)));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) != RD(0);  if (t) goto L_001B6098; }
SET64(2, rd16(c, (RW(18) + 28)));
SET64(3, rd8(c, (RW(18) + 68)));
SET32(2, RW(4) << (RW(2) & 31));
SET64(2, RD(3) & RD(2));
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(18) + 28))); { POLL(); goto L_001B6058; } }
L_001B6098:;
SET32(2, RW(16) << 16);
SET64(2, RD(17) | RD(2)); goto L_001B60A8;
L_001B60A4:;
SET64(2, RD(0) + RD(0));
L_001B60A8:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

static void B_001B60C0(Ctx *c, u32 entry) { /* func_001B60C0 */
ENTER(entry);
switch (entry) { case 0x1b6108: goto L_001B6108; case 0x1b613c: goto L_001B613C; case 0x1b6184: goto L_001B6184; case 0x1b61e8: goto L_001B61E8; case 0x1b6200: goto L_001B6200; case 0x1b622c: goto L_001B622C; case 0x1b62ac: goto L_001B62AC; }
L_001B60C0:;
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 16))); goto L_001B62B0; }
SET64(2, rd16(c, (RW(16) + 24)));
SET64(1, RD(2) < (u64)(s64)7);
{ int t = RD(1) == RD(0);  if (t) goto L_001B62AC; }
SET64(3, (s64)(s32)0x490000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + 23152);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x1b60c0: goto L_001B60C0; case 0x1b6108: goto L_001B6108; case 0x1b613c: goto L_001B613C; case 0x1b6184: goto L_001B6184; case 0x1b61e8: goto L_001B61E8; case 0x1b6200: goto L_001B6200; case 0x1b622c: goto L_001B622C; case 0x1b62ac: goto L_001B62AC; default: rt_jump(c, t); return; } }
L_001B6108:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1b6118);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001B62AC; }
SET64(4, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1b6134);  rt_call(c, t); }
SET32(2, RW(0) + 2);
wr16(c, (RW(16) + 24), (u16)RW(2));
L_001B613C:;
SET64(2, rd8(c, (RW(28) + -30360)));
{ int t = RD(2) != RD(0);  if (t) goto L_001B62AC; }
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(5, RD(0) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 20)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(3, (s32)rd32(c, (RW(3) + 4)));
SET64(31, 0x1b6168); SET32(4, RW(2) + RW(3)); F_002429E0(c);
{ int t = RSD(2) < 0; wr32(c, (RW(16) + 8), RW(2)); if (t) goto L_001B62AC; }
SET32(3, RW(0) + 1);
SET32(2, RW(0) + 3);
wr8(c, (RW(28) + -30360), (u8)RW(3));
wr16(c, (RW(16) + 24), (u16)RW(2)); goto L_001B62AC;
L_001B6184:;
SET64(31, 0x1b618c); SET32(4, RW(29) + 32); F_00241068(c);
{ int t = RSD(2) < 0;  if (t) goto L_001B62AC; }
SET64(4, (s16)rd16(c, (RW(29) + 32)));
SET32(3, RW(0) + 32);
{ int t = RD(4) == RD(3);  if (t) goto L_001B61C0; }
SET32(3, RW(0) + 33);
{ int t = RD(4) == RD(3);  if (t) goto L_001B61C0; }
wr8(c, (RW(28) + -30360), (u8)RW(0));
SET32(2, RW(0) + 2);
wr16(c, (RW(16) + 24), (u16)RW(2)); goto L_001B62AC;
L_001B61C0:;
if (RD(2) != RD(0)) { SET32(4, RW(0) + 1); goto L_001B61D4; }
SET64(2, (s32)rd32(c, (RW(29) + 36)));
wr32(c, (RW(16) + 8), RW(2));
SET32(4, RW(0) + 1);
L_001B61D4:;
SET64(31, 0x1b61dc);  F_00241368(c);
SET32(2, RW(0) + 4);
wr16(c, (RW(16) + 24), (u16)RW(2)); goto L_001B62AC;
L_001B61E8:;
SET64(31, 0x1b61f0); SET64(4, RD(0) + RD(0)); F_00242C78(c);
{ int t = RD(2) != RD(0);  if (t) goto L_001B62AC; }
SET32(2, RW(0) + 5);
wr16(c, (RW(16) + 24), (u16)RW(2));
L_001B6200:;
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 20)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1b6218); SET32(4, RW(3) + RW(2)); F_00242D60(c);
{ int t = RSD(2) < 0; wr32(c, (RW(16) + 4), RW(2)); if (t) goto L_001B62AC; }
SET32(2, RW(0) + 6);
wr16(c, (RW(16) + 24), (u16)RW(2)); goto L_001B62AC;
L_001B622C:;
SET64(31, 0x1b6234); SET32(4, RW(29) + 32); F_00241068(c);
{ int t = RSD(2) < 0;  if (t) goto L_001B62AC; }
SET64(4, (s16)rd16(c, (RW(29) + 32)));
SET32(3, RW(0) + 80);
{ int t = RD(4) == RD(3);  if (t) goto L_001B6258; }
SET32(2, RW(0) + 5);
wr16(c, (RW(16) + 24), (u16)RW(2)); goto L_001B62AC;
L_001B6258:;
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 16))); goto L_001B626C; }
SET64(2, (s32)rd32(c, (RW(29) + 36)));
wr32(c, (RW(16) + 4), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
L_001B626C:;
SET64(31, 0x1b6274); SET64(4, (s32)rd32(c, (RW(2) + 4))); F_001570B0(c);
SET64(31, 0x1b627c); SET64(4, (s32)rd32(c, (RW(16) + 12))); F_00100430(c);
wr32(c, (RW(16) + 12), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 16), RW(0)); goto L_001B62A0; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1b629c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 16), RW(0));
L_001B62A0:;
SET32(2, RW(0) + 7);
wr16(c, (RW(16) + 24), (u16)RW(2));
wr8(c, (RW(28) + -30360), (u8)RW(0));
L_001B62AC:;
SET64(2, (s32)rd32(c, (RW(16) + 16)));
L_001B62B0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 64); return;
}
void F_001B60C0(Ctx *c) { B_001B60C0(c, 0x1b60c0); }
void F_001B6108(Ctx *c) { B_001B60C0(c, 0x1b6108); }
void F_001B613C(Ctx *c) { B_001B60C0(c, 0x1b613c); }
void F_001B6184(Ctx *c) { B_001B60C0(c, 0x1b6184); }
void F_001B61E8(Ctx *c) { B_001B60C0(c, 0x1b61e8); }
void F_001B6200(Ctx *c) { B_001B60C0(c, 0x1b6200); }
void F_001B622C(Ctx *c) { B_001B60C0(c, 0x1b622c); }
void F_001B62AC(Ctx *c) { B_001B60C0(c, 0x1b62ac); }

void F_001B62D0(Ctx *c) { /* func_001B62D0 */
ENTER(0x1b62d0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
SET64(17, RD(6) + RD(0));
SET32(4, RW(0) + 36);
SET64(31, 0x1b62fc); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001B632C; }
SET64(31, 0x1b630c); SET64(4, RD(16) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_001B632C:;
wr32(c, (RW(19) + 16), RW(16));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1b6344); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 16)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x1b6358);  rt_call(c, t); }
SET64(31, 0x1b6360); SET64(4, RD(2) + RD(0)); F_00100320(c);
wr32(c, (RW(19) + 12), RW(2));
SET64(5, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 16)));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1b6380); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr16(c, (RW(19) + 24), (u16)RW(2));
wr32(c, (RW(19) + 20), RW(17));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001B63B0(Ctx *c) { /* func_001B63B0 */
ENTER(0x1b63b0);
SET32(29, RW(29) + -64);
SET64(4, (s64)(s32)0x490000);
wr64(c, (RW(29) + 16), RD(31));
SET32(4, RW(4) + 23184);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x1b63d4); SET64(16, RD(0) + (s64)1); F_001177B8(c);
{ int t = RSD(2) >= 0;  if (t) goto L_001B63E0; }
SET64(16, RD(0) + RD(0));
L_001B63E0:;
SET64(4, (s64)(s32)0x490000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 23216);
SET64(31, 0x1b63f4); SET64(6, RD(0) + RD(0)); F_001177B8(c);
if (RSD(2) >= 0) { SET64(2, (s64)(s32)0x20000); goto L_001B6404; }
SET64(16, RD(0) + RD(0));
SET64(2, (s64)(s32)0x20000);
L_001B6404:;
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 32), RW(2));
SET32(2, RW(0) + 10);
wr32(c, (RW(29) + 52), RW(0));
wr32(c, (RW(29) + 36), RW(2));
SET32(2, RW(0) + 16);
wr32(c, (RW(29) + 40), RW(2));
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + 25760);
wr32(c, (RW(29) + 44), RW(2));
SET64(2, (s64)(s32)0x1b0000);
SET32(2, RW(2) + 25728);
wr32(c, (RW(29) + 48), RW(2));
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 23248);
SET64(31, 0x1b6448); wr32(c, (RW(29) + 56), RW(2)); F_00240BD0(c);
SET64(31, 0x1b6450); SET32(4, RW(0) + 1); F_00242738(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x1b6464); SET64(7, RD(0) + RD(0)); F_00242858(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B6480(Ctx *c) { /* func_001B6480 */
ENTER(0x1b6480);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1b6490);  F_00100430(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001B64A0(Ctx *c) { /* func_001B64A0 */
ENTER(0x1b64a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1b64b0);  F_00100530(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001B64C0(Ctx *c) { /* func_001B64C0 */
ENTER(0x1b64c0);
SET32(29, RW(29) + -32);
SET64(4, (s64)(s32)0x490000);
wr64(c, (RW(29) + 16), RD(31));
SET32(4, RW(4) + 23280);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x1b64e4); SET64(16, RD(0) + (s64)1); F_001177B8(c);
if (RSD(2) >= 0) { SET64(2, RD(16) + RD(0)); goto L_001B64F4; }
SET64(16, RD(0) + RD(0));
SET64(2, RD(16) + RD(0));
L_001B64F4:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001B6510(Ctx *c) { /* func_001B6510 */
ENTER(0x1b6510);
wr16(c, (RW(4) + 30), (u16)RW(5));
SET32(3, RW(0) + 1);
wr16(c, (RW(4) + 28), (u16)RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 44), RW(0));
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(0));
wr32(c, (RW(4) + 56), RW(0));
wr32(c, (RW(4) + 60), RW(0));
wr32(c, (RW(4) + 64), RW(0));
wr8(c, (RW(4) + 68), (u8)RW(0));
wr8(c, (RW(4) + 0), (u8)RW(3)); return;
}

void F_001B6550(Ctx *c) { /* func_001B6550 */
ENTER(0x1b6550);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001B6614; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -10160);
wr32(c, (RW(17) + 72), RW(2));
SET64(2, rd16(c, (RW(28) + -32228)));
SET32(2, RW(2) + -1);
wr16(c, (RW(28) + -32228), (u16)RW(2));
SET64(2, rd8(c, (RW(17) + 69)));
if (RD(2) != RD(0)) { wr8(c, (RW(17) + 69), (u8)RW(0)); goto L_001B65F0; }
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 16), RW(0)); goto L_001B65B0; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1b65ac); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 16), RW(0));
L_001B65B0:;
SET64(31, 0x1b65b8); SET64(4, (s32)rd32(c, (RW(17) + 12))); F_00100430(c);
wr32(c, (RW(17) + 12), RW(0));
SET32(2, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(17) + 8)));
if (RD(3) == RD(2)) { SET64(3, (s32)rd32(c, (RW(17) + 4))); goto L_001B65D8; }
SET64(31, 0x1b65d4); SET64(4, RD(3) & 0xffff); F_00242BE8(c);
SET64(3, (s32)rd32(c, (RW(17) + 4)));
L_001B65D8:;
SET32(2, RW(0) + -1);
{ int t = RD(3) == RD(2);  if (t) goto L_001B65EC; }
SET64(31, 0x1b65ec); SET64(4, RD(3) & 0xffff); F_00242DB0(c);
L_001B65EC:;
wr8(c, (RW(17) + 69), (u8)RW(0));
L_001B65F0:;
SET32(3, RW(0) + -1);
SET64(2, RD(16) << 48);
wr32(c, (RW(17) + 8), RW(3));
wr32(c, (RW(17) + 4), RW(3));
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr8(c, (RW(17) + 0), (u8)RW(0)); if (t) goto L_001B6614; }
SET64(31, 0x1b6614); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001B6614:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B6630(Ctx *c) { /* func_001B6630 */
ENTER(0x1b6630);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(0) + -1);
SET32(2, RW(2) + -10160);
wr32(c, (RW(4) + 72), RW(2));
wr8(c, (RW(4) + 0), (u8)RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3));
wr32(c, (RW(4) + 8), RW(3));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr16(c, (RW(4) + 24), (u16)RW(0));
wr8(c, (RW(4) + 69), (u8)RW(0));
SET64(3, rd16(c, (RW(28) + -32228)));
SET32(3, RW(3) << 8);
wr16(c, (RW(4) + 26), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -32228)));
SET32(3, RW(3) + 1);
wr16(c, (RW(28) + -32228), (u16)RW(3)); return;
}

void F_001B6680(Ctx *c) { /* func_001B6680 */
ENTER(0x1b6680);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001B66E0; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -10128);
SET32(3, RW(3) + -10120);
wr32(c, (RW(17) + 56), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -10108);
SET64(31, 0x1b66c8); wr32(c, (RW(17) + 36), RW(2)); F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001B66E4; }
SET64(31, 0x1b66e0); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001B66E0:;
SET64(2, RD(17) + RD(0));
L_001B66E4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B6700(Ctx *c) { /* func_001B6700 */
ENTER(0x1b6700);
SET64(2, (s64)(s32)0x490000);
SET32(2, RW(2) + 23512); return;
}

void F_001B6710(Ctx *c) { /* func_001B6710 */
ENTER(0x1b6710);
 return;
}

void F_001B6720(Ctx *c) { /* func_001B6720 */
ENTER(0x1b6720);
SET32(29, RW(29) + -128);
SET32(5, RW(0) + 4);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(6, rd16(c, (RW(4) + 0)));
{ int t = RD(6) == RD(5); SET64(16, RD(4) + RD(0)); if (t) goto L_001B6DD8; }
SET32(3, RW(0) + 3);
{ int t = RD(6) == RD(3);  if (t) goto L_001B6CA4; }
SET32(3, RW(0) + 2);
{ int t = RD(6) == RD(3);  if (t) goto L_001B69DC; }
SET32(3, RW(0) + 1);
{ int t = RD(6) == RD(3);  if (t) goto L_001B67F8; }
if (RD(6) == RD(0)) { SET64(3, rd8(c, (RW(16) + 72))); goto L_001B6784; }
SET64(31, rd64(c, (RW(29) + 96))); goto L_001B6DE4;
L_001B6784:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 68))); goto L_001B6794; }
wr16(c, (RW(16) + 0), (u16)RW(5)); goto L_001B6DE0;
L_001B6794:;
{ int t = RD(3) == RD(0);  if (t) goto L_001B6DE0; }
SET64(31, 0x1b67a4);  F_00139590(c);
SET64(31, 0x1b67ac);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(16) + 68)));
SET64(31, 0x1b67b8); SET64(4, (s32)rd32(c, (RW(2) + 20))); F_001B76E0(c);
wr32(c, (RW(16) + 60), RW(2));
SET64(31, 0x1b67c4); SET64(17, RD(2) + RD(0)); F_00139590(c);
SET64(31, 0x1b67cc);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 20)));
SET32(4, RW(17) << 2);
SET32(3, RW(0) + 1);
SET32(4, RW(4) + RW(5));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
wr32(c, (RW(16) + 64), RW(4));
wr32(c, (RW(16) + 68), RW(0));
wr16(c, (RW(16) + 0), (u16)RW(3));
wr8(c, (RW(16) + 75), (u8)RW(0));
wr8(c, (RW(16) + 73), (u8)RW(0)); goto L_001B6DE0;
L_001B67F8:;
SET64(31, 0x1b6800);  F_00139590(c);
SET64(31, 0x1b6808);  F_00139590(c);
SET64(3, (s32)rd32(c, (RW(16) + 60)));
{ int t = RSD(3) < 0; SET64(5, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_001B688C; }
SET32(4, RW(3) << 2);
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET32(3, RW(3) + RW(4));
SET64(18, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
if (RD(3) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_001B6880; }
SET64(31, 0x1b6838); SET64(4, (s32)rd32(c, (RW(3) + 0))); F_002556F8(c);
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(31, 0x1b6844); SET64(17, RD(2) + RD(0)); F_0029CE50(c);
SET64(31, 0x1b684c); SET64(4, (s32)rd32(c, (RW(18) + 32))); F_001570B0(c);
SET32(3, RW(0) + 1);
if (RD(17) == RD(3)) { SET64(3, RD(0) + (s64)1); goto L_001B6880; }
SET32(3, RW(0) + 2);
{ int t = RD(17) == RD(3);  if (t) goto L_001B6870; }
SET32(3, RW(0) + 6);
{ int t = RD(17) != RD(3);  if (t) goto L_001B687C; }
L_001B6870:;
SET64(3, RD(0) + (s64)1);
 goto L_001B6880;
L_001B687C:;
SET64(3, RD(0) + RD(0));
L_001B6880:;
SET64(3, RD(3) & 0xff);
SET64(3, RD(3) & 0xff); goto L_001B6894;
L_001B688C:;
SET64(3, RD(0) + RD(0));
SET64(3, RD(3) & 0xff);
L_001B6894:;
{ int t = RD(3) != RD(0);  if (t) goto L_001B6DE0; }
SET32(2, RW(0) + 2);
wr16(c, (RW(16) + 0), (u16)RW(2));
SET64(17, (s32)rd32(c, (RW(16) + 60)));
SET64(31, 0x1b68b0); SET64(19, rd8(c, (RW(16) + 74))); F_00139590(c);
SET64(31, 0x1b68b8);  F_00139590(c);
{ int t = RSD(17) < 0; SET64(18, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_001B693C; }
SET64(2, (s64)(s32)0x3f800000);
c->f[20].u = RW(2);
SET64(31, 0x1b68d0);  F_002C5110(c);
SET64(31, 0x1b68d8); SET64(4, RD(2) + RD(0)); F_002C51F0(c);
c->f[20].f = fpu(F(20) * F(0));
SET64(4, RD(18) + RD(0));
SET64(31, 0x1b68e8); SET64(5, RD(17) + RD(0)); F_001B6E60(c);
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET32(17, RW(17) << 2);
SET32(2, RW(2) + RW(17));
SET64(20, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(20) + 0)));
{ int t = RD(4) == RD(0); c->f[20].f = fpu(F(20) * F(0)); if (t) goto L_001B690C; }
SET64(31, 0x1b690c); c->f[12].u = c->f[20].u; F_0029CED0(c);
L_001B690C:;
wr32(c, (RW(20) + 28), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET32(2, RW(2) + RW(17));
SET64(17, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x1b6928); SET64(5, RD(19) + RD(0)); F_0029D0C0(c);
wr8(c, (RW(17) + 16), (u8)RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 20), RW(0));
SET64(31, 0x1b693c); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_0029D150(c);
L_001B693C:;
SET64(17, rd8(c, (RW(16) + 73)));
SET64(31, 0x1b6948); SET64(16, (s32)rd32(c, (RW(16) + 60))); F_00139590(c);
SET64(31, 0x1b6950);  F_00139590(c);
{ int t = RSD(16) < 0; SET64(3, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_001B6DE0; }
SET64(3, (s32)rd32(c, (RW(3) + 4)));
SET32(4, RW(16) << 2);
SET32(3, RW(3) + RW(4));
SET64(16, (s32)rd32(c, (RW(3) + 0)));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_001B6DE0; }
{ int t = RD(17) == RD(0);  if (t) goto L_001B69AC; }
if (RD(4) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_001B6990; }
SET64(31, 0x1b698c);  F_0029CF50(c);
SET64(3, RD(2) + RD(0));
L_001B6990:;
SET64(3, RD(3) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_001B6DE0; }
SET64(31, 0x1b69a4); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0029D070(c);
 goto L_001B6DE0;
L_001B69AC:;
if (RD(4) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_001B69C0; }
SET64(31, 0x1b69bc);  F_0029CF50(c);
SET64(3, RD(2) + RD(0));
L_001B69C0:;
SET64(3, RD(3) & 0xff);
{ int t = RD(3) == RD(0);  if (t) goto L_001B6DE0; }
SET64(31, 0x1b69d4); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0029D150(c);
 goto L_001B6DE0;
L_001B69DC:;
SET64(31, 0x1b69e4);  F_00139590(c);
SET64(31, 0x1b69ec);  F_00139590(c);
SET64(3, (s32)rd32(c, (RW(16) + 60)));
{ int t = RSD(3) < 0; SET64(5, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_001B6AE0; }
SET32(4, RW(3) << 2);
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET32(3, RW(3) + RW(4));
SET64(17, (s32)rd32(c, (RW(3) + 0)));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(4) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_001B6A4C; }
SET64(31, 0x1b6a1c);  F_0029CF70(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_001B6A2C; }
SET64(18, RD(0) + (s64)1); goto L_001B6A4C;
L_001B6A2C:;
SET64(31, 0x1b6a34); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001B6A4C; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_001B6A4C; }
SET64(18, RD(0) + (s64)1);
L_001B6A4C:;
if (RD(18) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 32))); goto L_001B6A5C; }
SET64(3, RD(0) + RD(0)); goto L_001B6AD8;
L_001B6A5C:;
if (RD(4) == RD(0)) { SET64(3, RD(0) + (s64)1); goto L_001B6AD8; }
SET64(31, 0x1b6a6c);  F_001570B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(4) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_001B6AB0; }
SET64(31, 0x1b6a80);  F_0029CF70(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_001B6A90; }
SET64(18, RD(0) + (s64)1); goto L_001B6AB0;
L_001B6A90:;
SET64(31, 0x1b6a98); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001B6AB0; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_001B6AB0; }
SET64(18, RD(0) + (s64)1);
L_001B6AB0:;
if (RD(18) == RD(0)) { wr32(c, (RW(17) + 8), RW(0)); goto L_001B6AC4; }
SET64(31, 0x1b6ac0); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_0029CFE0(c);
wr32(c, (RW(17) + 8), RW(0));
L_001B6AC4:;
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 32), RW(0));
wr32(c, (RW(17) + 28), RW(3));
SET64(3, RD(0) + (s64)1);
L_001B6AD8:;
SET64(3, RD(3) & 0xff); goto L_001B6AE4;
L_001B6AE0:;
SET64(3, RD(0) + (s64)1);
L_001B6AE4:;
{ int t = RD(3) == RD(0);  if (t) goto L_001B6AF8; }
SET32(3, RW(0) + 3);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_001B6DE0;
L_001B6AF8:;
SET64(31, 0x1b6b00);  F_00139590(c);
SET64(31, 0x1b6b08);  F_00139590(c);
SET64(3, (s32)rd32(c, (RW(16) + 60)));
{ int t = RSD(3) < 0; SET64(5, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_001B6B44; }
SET32(4, RW(3) << 2);
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
if (RD(4) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_001B6B3C; }
SET64(31, 0x1b6b38);  F_0029CF50(c);
SET64(3, RD(2) + RD(0));
L_001B6B3C:;
SET64(3, RD(3) & 0xff); goto L_001B6B48;
L_001B6B44:;
SET64(3, RD(0) + RD(0));
L_001B6B48:;
SET64(18, rd8(c, (RW(16) + 73)));
SET64(3, RD(3) & 0xff);
if (RD(18) == RD(3)) { SET64(3, rd8(c, (RW(16) + 72))); goto L_001B6BF0; }
SET64(31, 0x1b6b60); SET64(17, (s32)rd32(c, (RW(16) + 60))); F_00139590(c);
SET64(31, 0x1b6b68);  F_00139590(c);
{ int t = RSD(17) < 0; SET64(3, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_001B6BEC; }
SET64(3, (s32)rd32(c, (RW(3) + 4)));
SET32(4, RW(17) << 2);
SET32(3, RW(3) + RW(4));
SET64(17, (s32)rd32(c, (RW(3) + 0)));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_001B6BEC; }
{ int t = RD(18) == RD(0);  if (t) goto L_001B6BC4; }
if (RD(4) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_001B6BA8; }
SET64(31, 0x1b6ba4);  F_0029CF50(c);
SET64(3, RD(2) + RD(0));
L_001B6BA8:;
SET64(3, RD(3) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_001B6BEC; }
SET64(31, 0x1b6bbc); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_0029D070(c);
 goto L_001B6BEC;
L_001B6BC4:;
if (RD(4) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_001B6BD8; }
SET64(31, 0x1b6bd4);  F_0029CF50(c);
SET64(3, RD(2) + RD(0));
L_001B6BD8:;
SET64(3, RD(3) & 0xff);
{ int t = RD(3) == RD(0);  if (t) goto L_001B6BEC; }
SET64(31, 0x1b6bec); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_0029D150(c);
L_001B6BEC:;
SET64(3, rd8(c, (RW(16) + 72)));
L_001B6BF0:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 68))); goto L_001B6C08; }
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 75), (u8)RW(3));
wr32(c, (RW(16) + 76), RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 68)));
L_001B6C08:;
if (RD(3) != RD(0)) { SET64(17, (s32)rd32(c, (RW(16) + 60))); goto L_001B6C20; }
SET64(3, rd8(c, (RW(16) + 75)));
{ int t = RD(3) == RD(0);  if (t) goto L_001B6DE0; }
SET64(17, (s32)rd32(c, (RW(16) + 60)));
L_001B6C20:;
SET64(31, 0x1b6c28);  F_00139590(c);
SET64(31, 0x1b6c30);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 20)));
SET32(3, RW(17) << 2);
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET32(3, RW(3) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
if (RD(4) != RD(3)) { wr8(c, (RW(16) + 75), (u8)RW(0)); goto L_001B6C94; }
SET64(2, rd8(c, (RW(16) + 73)));
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 76)); goto L_001B6C5C; }
c->f[0].u = RW(0);
L_001B6C5C:;
wr32(c, (RW(29) + 124), c->f[0].u);
SET64(31, 0x1b6c68); SET64(17, (s32)rd32(c, (RW(16) + 60))); F_00139590(c);
SET64(31, 0x1b6c70);  F_00139590(c);
{ int t = RSD(17) < 0; SET64(4, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_001B6C90; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(17) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1b6c90); SET32(5, RW(29) + 124); F_001B8300(c);
L_001B6C90:;
wr8(c, (RW(16) + 75), (u8)RW(0));
L_001B6C94:;
SET32(3, RW(0) + 3);
wr32(c, (RW(16) + 76), RW(0));
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_001B6DE0;
L_001B6CA4:;
SET64(31, 0x1b6cac);  F_00139590(c);
SET64(31, 0x1b6cb4);  F_00139590(c);
SET64(3, (s32)rd32(c, (RW(16) + 60)));
{ int t = RSD(3) < 0; SET64(5, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_001B6DA8; }
SET32(4, RW(3) << 2);
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET32(3, RW(3) + RW(4));
SET64(17, (s32)rd32(c, (RW(3) + 0)));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(4) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_001B6D14; }
SET64(31, 0x1b6ce4);  F_0029CF70(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_001B6CF4; }
SET64(18, RD(0) + (s64)1); goto L_001B6D14;
L_001B6CF4:;
SET64(31, 0x1b6cfc); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001B6D14; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_001B6D14; }
SET64(18, RD(0) + (s64)1);
L_001B6D14:;
if (RD(18) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 32))); goto L_001B6D24; }
SET64(3, RD(0) + RD(0)); goto L_001B6DA0;
L_001B6D24:;
if (RD(4) == RD(0)) { SET64(3, RD(0) + (s64)1); goto L_001B6DA0; }
SET64(31, 0x1b6d34);  F_001570B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(4) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_001B6D78; }
SET64(31, 0x1b6d48);  F_0029CF70(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_001B6D58; }
SET64(18, RD(0) + (s64)1); goto L_001B6D78;
L_001B6D58:;
SET64(31, 0x1b6d60); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001B6D78; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_001B6D78; }
SET64(18, RD(0) + (s64)1);
L_001B6D78:;
if (RD(18) == RD(0)) { wr32(c, (RW(17) + 8), RW(0)); goto L_001B6D8C; }
SET64(31, 0x1b6d88); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_0029CFE0(c);
wr32(c, (RW(17) + 8), RW(0));
L_001B6D8C:;
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 32), RW(0));
wr32(c, (RW(17) + 28), RW(3));
SET64(3, RD(0) + (s64)1);
L_001B6DA0:;
SET64(3, RD(3) & 0xff); goto L_001B6DAC;
L_001B6DA8:;
SET64(3, RD(0) + (s64)1);
L_001B6DAC:;
{ int t = RD(3) == RD(0);  if (t) goto L_001B6DE0; }
SET32(3, RW(0) + -1);
wr32(c, (RW(16) + 60), RW(3));
SET64(3, rd8(c, (RW(16) + 72)));
if (RD(3) != RD(0)) { SET32(3, RW(0) + 4); goto L_001B6DD0; }
wr16(c, (RW(16) + 0), (u16)RW(0)); goto L_001B6DE0;
L_001B6DD0:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_001B6DE0;
L_001B6DD8:;
SET64(31, 0x1b6de0);  F_00139AB0(c);
L_001B6DE0:;
SET64(31, rd64(c, (RW(29) + 96)));
L_001B6DE4:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_001B6E10(Ctx *c) { /* func_001B6E10 */
ENTER(0x1b6e10);
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 75), (u8)RW(3));
wr32(c, (RW(4) + 76), c->f[12].u); return;
}

void F_001B6E20(Ctx *c) { /* func_001B6E20 */
ENTER(0x1b6e20);
wr32(c, (RW(4) + 68), RW(5));
wr32(c, (RW(4) + 76), c->f[12].u);
wr8(c, (RW(4) + 74), (u8)RW(6)); return;
}

void F_001B6E30(Ctx *c) { /* func_001B6E30 */
ENTER(0x1b6e30);
SET32(3, RW(0) + -1);
wr32(c, (RW(4) + 60), RW(3));
wr32(c, (RW(4) + 68), RW(0));
wr8(c, (RW(4) + 72), (u8)RW(0));
wr8(c, (RW(4) + 73), (u8)RW(0));
wr8(c, (RW(4) + 74), (u8)RW(0));
wr8(c, (RW(4) + 75), (u8)RW(0));
wr32(c, (RW(4) + 76), RW(0));
wr16(c, (RW(4) + 0), (u16)RW(0)); return;
}

static void B_001B6E60(Ctx *c, u32 entry) { /* func_001B6E60 */
ENTER(entry);
switch (entry) { case 0x1b6ea8: goto L_001B6EA8; case 0x1b6ebc: goto L_001B6EBC; case 0x1b6ed0: goto L_001B6ED0; case 0x1b6ee4: goto L_001B6EE4; case 0x1b6ef8: goto L_001B6EF8; case 0x1b6f00: goto L_001B6F00; case 0x1b6f14: goto L_001B6F14; case 0x1b6f28: goto L_001B6F28; case 0x1b6f3c: goto L_001B6F3C; case 0x1b6f50: goto L_001B6F50; case 0x1b6f64: goto L_001B6F64; case 0x1b6f78: goto L_001B6F78; case 0x1b6f8c: goto L_001B6F8C; case 0x1b6fa0: goto L_001B6FA0; case 0x1b6fb4: goto L_001B6FB4; case 0x1b6fc8: goto L_001B6FC8; case 0x1b6fdc: goto L_001B6FDC; case 0x1b6ff0: goto L_001B6FF0; case 0x1b7004: goto L_001B7004; case 0x1b7018: goto L_001B7018; case 0x1b702c: goto L_001B702C; case 0x1b7040: goto L_001B7040; case 0x1b7054: goto L_001B7054; case 0x1b7068: goto L_001B7068; case 0x1b707c: goto L_001B707C; case 0x1b7090: goto L_001B7090; case 0x1b70a4: goto L_001B70A4; case 0x1b70b8: goto L_001B70B8; case 0x1b70cc: goto L_001B70CC; case 0x1b70e0: goto L_001B70E0; case 0x1b70f4: goto L_001B70F4; case 0x1b7108: goto L_001B7108; case 0x1b711c: goto L_001B711C; case 0x1b7130: goto L_001B7130; case 0x1b7144: goto L_001B7144; case 0x1b7158: goto L_001B7158; case 0x1b716c: goto L_001B716C; case 0x1b7180: goto L_001B7180; case 0x1b7194: goto L_001B7194; case 0x1b71a8: goto L_001B71A8; case 0x1b71bc: goto L_001B71BC; case 0x1b71d0: goto L_001B71D0; case 0x1b71e4: goto L_001B71E4; case 0x1b71f8: goto L_001B71F8; case 0x1b720c: goto L_001B720C; case 0x1b7220: goto L_001B7220; case 0x1b7234: goto L_001B7234; case 0x1b7248: goto L_001B7248; case 0x1b7254: goto L_001B7254; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(5) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s64)(s32)0x3f800000);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
c->f[0].u = RW(4);
SET64(2, (s32)rd32(c, (RW(2) + 32)));
SET32(2, RW(2) + -115);
SET64(1, RD(2) < (u64)(s64)50);
{ int t = RD(1) == RD(0);  if (t) goto L_001B7254; }
SET64(3, (s64)(s32)0x490000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + 23312);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x1b6ea8: goto L_001B6EA8; case 0x1b6ebc: goto L_001B6EBC; case 0x1b6ed0: goto L_001B6ED0; case 0x1b6ee4: goto L_001B6EE4; case 0x1b6ef8: goto L_001B6EF8; case 0x1b6f00: goto L_001B6F00; case 0x1b6f14: goto L_001B6F14; case 0x1b6f28: goto L_001B6F28; case 0x1b6f3c: goto L_001B6F3C; case 0x1b6f50: goto L_001B6F50; case 0x1b6f64: goto L_001B6F64; case 0x1b6f78: goto L_001B6F78; case 0x1b6f8c: goto L_001B6F8C; case 0x1b6fa0: goto L_001B6FA0; case 0x1b6fb4: goto L_001B6FB4; case 0x1b6fc8: goto L_001B6FC8; case 0x1b6fdc: goto L_001B6FDC; case 0x1b6ff0: goto L_001B6FF0; case 0x1b7004: goto L_001B7004; case 0x1b7018: goto L_001B7018; case 0x1b702c: goto L_001B702C; case 0x1b7040: goto L_001B7040; case 0x1b7054: goto L_001B7054; case 0x1b7068: goto L_001B7068; case 0x1b707c: goto L_001B707C; case 0x1b7090: goto L_001B7090; case 0x1b70a4: goto L_001B70A4; case 0x1b70b8: goto L_001B70B8; case 0x1b70cc: goto L_001B70CC; case 0x1b70e0: goto L_001B70E0; case 0x1b70f4: goto L_001B70F4; case 0x1b7108: goto L_001B7108; case 0x1b711c: goto L_001B711C; case 0x1b7130: goto L_001B7130; case 0x1b7144: goto L_001B7144; case 0x1b7158: goto L_001B7158; case 0x1b716c: goto L_001B716C; case 0x1b7180: goto L_001B7180; case 0x1b7194: goto L_001B7194; case 0x1b71a8: goto L_001B71A8; case 0x1b71bc: goto L_001B71BC; case 0x1b71d0: goto L_001B71D0; case 0x1b71e4: goto L_001B71E4; case 0x1b71f8: goto L_001B71F8; case 0x1b720c: goto L_001B720C; case 0x1b7220: goto L_001B7220; case 0x1b7234: goto L_001B7234; case 0x1b7248: goto L_001B7248; case 0x1b7254: goto L_001B7254; default: rt_jump(c, t); return; } }
L_001B6EA8:;
SET64(2, (s64)(s32)0x3f750000);
SET64(2, RD(2) | 0xc28f);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6EBC:;
SET64(2, (s64)(s32)0x3f700000);
SET64(2, RD(2) | 0xa3d7);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6ED0:;
SET64(2, (s64)(s32)0x3f730000);
SET64(2, RD(2) | 0x3333);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6EE4:;
SET64(2, (s64)(s32)0x3f730000);
SET64(2, RD(2) | 0x3333);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6EF8:;
 goto L_001B7254;
L_001B6F00:;
SET64(2, (s64)(s32)0x3f700000);
SET64(2, RD(2) | 0xa3d7);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6F14:;
SET64(2, (s64)(s32)0x3f700000);
SET64(2, RD(2) | 0xa3d7);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6F28:;
SET64(2, (s64)(s32)0x3f7a0000);
SET64(2, RD(2) | 0xe147);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6F3C:;
SET64(2, (s64)(s32)0x3f750000);
SET64(2, RD(2) | 0xc28f);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6F50:;
SET64(2, (s64)(s32)0x3f680000);
SET64(2, RD(2) | 0xf5c2);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6F64:;
SET64(2, (s64)(s32)0x3f680000);
SET64(2, RD(2) | 0xf5c2);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6F78:;
SET64(2, (s64)(s32)0x3f680000);
SET64(2, RD(2) | 0xf5c2);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6F8C:;
SET64(2, (s64)(s32)0x3f6e0000);
SET64(2, RD(2) | 0x147b);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6FA0:;
SET64(2, (s64)(s32)0x3f660000);
SET64(2, RD(2) | 0x6666);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6FB4:;
SET64(2, (s64)(s32)0x3f680000);
SET64(2, RD(2) | 0xf5c2);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6FC8:;
SET64(2, (s64)(s32)0x3f680000);
SET64(2, RD(2) | 0xf5c2);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6FDC:;
SET64(2, (s64)(s32)0x3f680000);
SET64(2, RD(2) | 0xf5c2);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B6FF0:;
SET64(2, (s64)(s32)0x3f680000);
SET64(2, RD(2) | 0xf5c2);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B7004:;
SET64(2, (s64)(s32)0x3f660000);
SET64(2, RD(2) | 0x6666);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B7018:;
SET64(2, (s64)(s32)0x3f680000);
SET64(2, RD(2) | 0xf5c2);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B702C:;
SET64(2, (s64)(s32)0x3f780000);
SET64(2, RD(2) | 0x51eb);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B7040:;
SET64(2, (s64)(s32)0x3f6b0000);
SET64(2, RD(2) | 0x851e);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B7054:;
SET64(2, (s64)(s32)0x3f700000);
SET64(2, RD(2) | 0xa3d7);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B7068:;
SET64(2, (s64)(s32)0x3f6b0000);
SET64(2, RD(2) | 0x851e);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B707C:;
SET64(2, (s64)(s32)0x3f700000);
SET64(2, RD(2) | 0xa3d7);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B7090:;
SET64(2, (s64)(s32)0x3f700000);
SET64(2, RD(2) | 0xa3d7);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B70A4:;
SET64(2, (s64)(s32)0x3f6b0000);
SET64(2, RD(2) | 0x851e);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B70B8:;
SET64(2, (s64)(s32)0x3f6e0000);
SET64(2, RD(2) | 0x147b);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B70CC:;
SET64(2, (s64)(s32)0x3f700000);
SET64(2, RD(2) | 0xa3d7);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B70E0:;
SET64(2, (s64)(s32)0x3f6e0000);
SET64(2, RD(2) | 0x147b);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B70F4:;
SET64(2, (s64)(s32)0x3f6e0000);
SET64(2, RD(2) | 0x147b);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B7108:;
SET64(2, (s64)(s32)0x3f6e0000);
SET64(2, RD(2) | 0x147b);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B711C:;
SET64(2, (s64)(s32)0x3f6b0000);
SET64(2, RD(2) | 0x851e);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B7130:;
SET64(2, (s64)(s32)0x3f6b0000);
SET64(2, RD(2) | 0x851e);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B7144:;
SET64(2, (s64)(s32)0x3f6b0000);
SET64(2, RD(2) | 0x851e);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B7158:;
SET64(2, (s64)(s32)0x3f6e0000);
SET64(2, RD(2) | 0x147b);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B716C:;
SET64(2, (s64)(s32)0x3f6e0000);
SET64(2, RD(2) | 0x147b);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B7180:;
SET64(2, (s64)(s32)0x3f700000);
SET64(2, RD(2) | 0xa3d7);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B7194:;
SET64(2, (s64)(s32)0x3f6e0000);
SET64(2, RD(2) | 0x147b);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B71A8:;
SET64(2, (s64)(s32)0x3f700000);
SET64(2, RD(2) | 0xa3d7);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B71BC:;
SET64(2, (s64)(s32)0x3f700000);
SET64(2, RD(2) | 0xa3d7);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B71D0:;
SET64(2, (s64)(s32)0x3f6b0000);
SET64(2, RD(2) | 0x851e);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B71E4:;
SET64(2, (s64)(s32)0x3f6b0000);
SET64(2, RD(2) | 0x851e);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B71F8:;
SET64(2, (s64)(s32)0x3f6b0000);
SET64(2, RD(2) | 0x851e);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B720C:;
SET64(2, (s64)(s32)0x3f730000);
SET64(2, RD(2) | 0x3333);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B7220:;
SET64(2, (s64)(s32)0x3f730000);
SET64(2, RD(2) | 0x3333);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B7234:;
SET64(2, (s64)(s32)0x3f730000);
SET64(2, RD(2) | 0x3333);
c->f[0].u = RW(2);
 goto L_001B7254;
L_001B7248:;
SET64(2, (s64)(s32)0x3f730000);
SET64(2, RD(2) | 0x3333);
c->f[0].u = RW(2);
L_001B7254:;
 return;
}
void F_001B6E60(Ctx *c) { B_001B6E60(c, 0x1b6e60); }
void F_001B6EA8(Ctx *c) { B_001B6E60(c, 0x1b6ea8); }
void F_001B6EBC(Ctx *c) { B_001B6E60(c, 0x1b6ebc); }
void F_001B6ED0(Ctx *c) { B_001B6E60(c, 0x1b6ed0); }
void F_001B6EE4(Ctx *c) { B_001B6E60(c, 0x1b6ee4); }
void F_001B6EF8(Ctx *c) { B_001B6E60(c, 0x1b6ef8); }
void F_001B6F00(Ctx *c) { B_001B6E60(c, 0x1b6f00); }
void F_001B6F14(Ctx *c) { B_001B6E60(c, 0x1b6f14); }
void F_001B6F28(Ctx *c) { B_001B6E60(c, 0x1b6f28); }
void F_001B6F3C(Ctx *c) { B_001B6E60(c, 0x1b6f3c); }
void F_001B6F50(Ctx *c) { B_001B6E60(c, 0x1b6f50); }
void F_001B6F64(Ctx *c) { B_001B6E60(c, 0x1b6f64); }
void F_001B6F78(Ctx *c) { B_001B6E60(c, 0x1b6f78); }
void F_001B6F8C(Ctx *c) { B_001B6E60(c, 0x1b6f8c); }
void F_001B6FA0(Ctx *c) { B_001B6E60(c, 0x1b6fa0); }
void F_001B6FB4(Ctx *c) { B_001B6E60(c, 0x1b6fb4); }
void F_001B6FC8(Ctx *c) { B_001B6E60(c, 0x1b6fc8); }
void F_001B6FDC(Ctx *c) { B_001B6E60(c, 0x1b6fdc); }
void F_001B6FF0(Ctx *c) { B_001B6E60(c, 0x1b6ff0); }
void F_001B7004(Ctx *c) { B_001B6E60(c, 0x1b7004); }
void F_001B7018(Ctx *c) { B_001B6E60(c, 0x1b7018); }
void F_001B702C(Ctx *c) { B_001B6E60(c, 0x1b702c); }
void F_001B7040(Ctx *c) { B_001B6E60(c, 0x1b7040); }
void F_001B7054(Ctx *c) { B_001B6E60(c, 0x1b7054); }
void F_001B7068(Ctx *c) { B_001B6E60(c, 0x1b7068); }
void F_001B707C(Ctx *c) { B_001B6E60(c, 0x1b707c); }
void F_001B7090(Ctx *c) { B_001B6E60(c, 0x1b7090); }
void F_001B70A4(Ctx *c) { B_001B6E60(c, 0x1b70a4); }
void F_001B70B8(Ctx *c) { B_001B6E60(c, 0x1b70b8); }
void F_001B70CC(Ctx *c) { B_001B6E60(c, 0x1b70cc); }
void F_001B70E0(Ctx *c) { B_001B6E60(c, 0x1b70e0); }
void F_001B70F4(Ctx *c) { B_001B6E60(c, 0x1b70f4); }
void F_001B7108(Ctx *c) { B_001B6E60(c, 0x1b7108); }
void F_001B711C(Ctx *c) { B_001B6E60(c, 0x1b711c); }
void F_001B7130(Ctx *c) { B_001B6E60(c, 0x1b7130); }
void F_001B7144(Ctx *c) { B_001B6E60(c, 0x1b7144); }
void F_001B7158(Ctx *c) { B_001B6E60(c, 0x1b7158); }
void F_001B716C(Ctx *c) { B_001B6E60(c, 0x1b716c); }
void F_001B7180(Ctx *c) { B_001B6E60(c, 0x1b7180); }
void F_001B7194(Ctx *c) { B_001B6E60(c, 0x1b7194); }
void F_001B71A8(Ctx *c) { B_001B6E60(c, 0x1b71a8); }
void F_001B71BC(Ctx *c) { B_001B6E60(c, 0x1b71bc); }
void F_001B71D0(Ctx *c) { B_001B6E60(c, 0x1b71d0); }
void F_001B71E4(Ctx *c) { B_001B6E60(c, 0x1b71e4); }
void F_001B71F8(Ctx *c) { B_001B6E60(c, 0x1b71f8); }
void F_001B720C(Ctx *c) { B_001B6E60(c, 0x1b720c); }
void F_001B7220(Ctx *c) { B_001B6E60(c, 0x1b7220); }
void F_001B7234(Ctx *c) { B_001B6E60(c, 0x1b7234); }
void F_001B7248(Ctx *c) { B_001B6E60(c, 0x1b7248); }
void F_001B7254(Ctx *c) { B_001B6E60(c, 0x1b7254); }

void F_001B7260(Ctx *c) { /* func_001B7260 */
ENTER(0x1b7260);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(28) + -32220)));
{ int t = RSD(3) <= 0; c->f[20].u = c->f[12].u; if (t) goto L_001B72B8; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
L_001B728C:;
SET32(3, RW(16) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1b72a0); c->f[12].u = c->f[20].u; F_001B7DA0(c);
SET64(3, (s32)rd32(c, (RW(28) + -32220)));
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < RSD(3));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 4))); { POLL(); goto L_001B728C; } }
L_001B72B8:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B72D0(Ctx *c) { /* func_001B72D0 */
ENTER(0x1b72d0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0); SET64(19, RD(4) + RD(0)); if (t) goto L_001B73C8; }
SET64(2, (s32)rd32(c, (RW(28) + -32220)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001B73C8; }
SET64(2, (s32)rd32(c, (RW(19) + 4)));
L_001B7304:;
SET32(3, RW(18) << 2);
SET32(2, RW(2) + RW(3));
SET64(16, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) != RD(0);  if (t) goto L_001B7338; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_001B7338; }
SET64(31, 0x1b7330); SET64(4, (s32)rd32(c, (RW(16) + 32))); F_001570B0(c);
SET64(2, RD(0) + (s64)1); goto L_001B7340;
L_001B7338:;
SET64(2, RD(0) + RD(0));
L_001B7340:;
{ int t = RD(2) == RD(0); SET64(3, RD(2) & 0xff); if (t) goto L_001B73A8; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_001B7398; }
SET64(31, 0x1b735c);  F_0029CF70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001B7370; }
SET64(17, RD(0) + (s64)1); goto L_001B7398;
L_001B7370:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1b737c); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001B7398; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_001B7398; }
SET64(17, RD(0) + (s64)1);
L_001B7398:;
SET64(2, RD(0) < RD(17));
SET64(2, RD(2) ^ 0x1);
SET64(3, RD(2) & 0xff);
L_001B73A8:;
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(28) + -32220))); goto L_001B73B8; }
SET64(2, RD(0) + RD(0)); goto L_001B73CC;
L_001B73B8:;
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(19) + 4))); { POLL(); goto L_001B7304; } }
L_001B73C8:;
SET32(2, RW(0) + 1);
L_001B73CC:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001B73F0(Ctx *c) { /* func_001B73F0 */
ENTER(0x1b73f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1b7404); SET64(16, RD(4) + RD(0)); F_002C5110(c);
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(0) < RD(2));
SET64(31, 0x1b741c); SET64(5, RD(2) ^ 0x1); F_0029E000(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001B7430(Ctx *c) { /* func_001B7430 */
ENTER(0x1b7430);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(31, 0x1b7454); c->f[20].u = c->f[12].u; F_002C5110(c);
SET64(31, 0x1b745c); SET64(4, RD(2) + RD(0)); F_002C5190(c);
c->f[20].f = fpu(F(20) * F(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1b746c); SET64(5, RD(16) + RD(0)); F_001B6E60(c);
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(4, RW(16) << 2);
SET32(3, RW(3) + RW(4));
SET64(16, (s32)rd32(c, (RW(3) + 0)));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0); c->f[20].f = fpu(F(20) * F(0)); if (t) goto L_001B7490; }
SET64(31, 0x1b7490); c->f[12].u = c->f[20].u; F_0029CED0(c);
L_001B7490:;
wr32(c, (RW(16) + 28), c->f[20].u);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B74B0(Ctx *c) { /* func_001B74B0 */
ENTER(0x1b74b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(31, 0x1b74d4); c->f[20].u = c->f[12].u; F_002C5110(c);
SET64(31, 0x1b74dc); SET64(4, RD(2) + RD(0)); F_002C5190(c);
c->f[1].f = fpu(F(20) * F(0));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(4, RW(16) << 2);
SET64(5, (s64)(s32)0x3f7a0000);
SET64(5, RD(5) | 0xe148);
SET32(3, RW(3) + RW(4));
SET64(16, (s32)rd32(c, (RW(3) + 0)));
c->f[0].u = RW(5);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0); c->f[20].f = fpu(F(1) * F(0)); if (t) goto L_001B7510; }
SET64(31, 0x1b7510); c->f[12].u = c->f[20].u; F_0029CED0(c);
L_001B7510:;
wr32(c, (RW(16) + 28), c->f[20].u);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B7530(Ctx *c) { /* func_001B7530 */
ENTER(0x1b7530);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(31, 0x1b7554); c->f[20].u = c->f[12].u; F_002C5110(c);
SET64(31, 0x1b755c); SET64(4, RD(2) + RD(0)); F_002C5190(c);
c->f[1].f = fpu(F(20) * F(0));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(4, RW(16) << 2);
SET64(5, (s64)(s32)0x3f750000);
SET64(5, RD(5) | 0xc28f);
SET32(3, RW(3) + RW(4));
SET64(16, (s32)rd32(c, (RW(3) + 0)));
c->f[0].u = RW(5);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0); c->f[20].f = fpu(F(1) * F(0)); if (t) goto L_001B7590; }
SET64(31, 0x1b7590); c->f[12].u = c->f[20].u; F_0029CED0(c);
L_001B7590:;
wr32(c, (RW(16) + 28), c->f[20].u);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B75B0(Ctx *c) { /* func_001B75B0 */
ENTER(0x1b75b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(31, 0x1b75d4); c->f[20].u = c->f[12].u; F_002C5110(c);
SET64(31, 0x1b75dc); SET64(4, RD(2) + RD(0)); F_002C51F0(c);
c->f[20].f = fpu(F(20) * F(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1b75ec); SET64(5, RD(16) + RD(0)); F_001B6E60(c);
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(4, RW(16) << 2);
SET32(3, RW(3) + RW(4));
SET64(16, (s32)rd32(c, (RW(3) + 0)));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0); c->f[20].f = fpu(F(20) * F(0)); if (t) goto L_001B7610; }
SET64(31, 0x1b7610); c->f[12].u = c->f[20].u; F_0029CED0(c);
L_001B7610:;
wr32(c, (RW(16) + 28), c->f[20].u);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B7630(Ctx *c) { /* func_001B7630 */
ENTER(0x1b7630);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(16, RD(5) + RD(0));
{ int t = RSD(16) < 0; wr32(c, (RW(29) + 0), c->f[20].u); if (t) goto L_001B76B8; }
SET64(31, 0x1b765c);  F_002C5110(c);
SET64(31, 0x1b7664); SET64(4, RD(2) + RD(0)); F_002C5190(c);
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET32(17, RW(16) << 2);
SET32(2, RW(2) + RW(17));
SET64(16, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0); c->f[20].u = c->f[0].u; if (t) goto L_001B7688; }
SET64(31, 0x1b7688); c->f[12].u = c->f[0].u; F_0029CED0(c);
L_001B7688:;
wr32(c, (RW(16) + 28), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET32(2, RW(2) + RW(17));
SET64(16, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1b76a4); SET64(5, RD(0) + RD(0)); F_0029D0C0(c);
wr8(c, (RW(16) + 16), (u8)RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 20), RW(0));
SET64(31, 0x1b76b8); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0029D150(c);
L_001B76B8:;
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001B76E0(Ctx *c) { /* func_001B76E0 */
ENTER(0x1b76e0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(5) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
{ int t = RD(22) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_001B7874; }
SET32(19, RW(0) + 1);
L_001B7714:;
SET64(3, (s32)rd32(c, (RW(28) + -32220)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001B7828; }
L_001B7720:;
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(21, RW(18) << 2);
SET32(2, RW(2) + RW(21));
SET64(16, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) != RD(0);  if (t) goto L_001B7758; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_001B7758; }
SET64(31, 0x1b7750); SET64(4, (s32)rd32(c, (RW(16) + 32))); F_001570B0(c);
SET64(2, RD(0) + (s64)1); goto L_001B7760;
L_001B7758:;
SET64(2, RD(0) + RD(0));
L_001B7760:;
{ int t = RD(2) == RD(0); SET64(3, RD(2) & 0xff); if (t) goto L_001B77C8; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_001B77B8; }
SET64(31, 0x1b777c);  F_0029CF70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001B7790; }
SET64(17, RD(0) + (s64)1); goto L_001B77B8;
L_001B7790:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1b779c); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001B77B8; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_001B77B8; }
SET64(17, RD(0) + (s64)1);
L_001B77B8:;
SET64(2, RD(0) < RD(17));
SET64(2, RD(2) ^ 0x1);
SET64(3, RD(2) & 0xff);
L_001B77C8:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(28) + -32220))); goto L_001B7818; }
SET64(31, 0x1b77d8);  F_002C5110(c);
SET64(3, (s32)rd32(c, (RW(2) + 12)));
SET64(5, RD(22) + RD(0));
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET64(3, RD(3) ^ 0x1);
SET32(2, RW(2) + RW(21));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1b77f8); SET64(6, RD(0) < RD(3)); F_001B8580(c);
SET64(5, (s32)rd32(c, (RW(20) + 12)));
SET32(2, RW(18) << 2);
SET32(3, RW(2) + RW(20));
SET64(2, RD(18) + RD(0));
SET32(4, RW(5) + 1);
wr32(c, (RW(20) + 12), RW(4));
wr32(c, (RW(3) + 16), RW(5)); goto L_001B7878;
L_001B7818:;
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001B7720; } }
L_001B7828:;
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_001B7860; }
L_001B7830:;
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(3, RW(16) << 2);
c->f[12].u = RW(0);
SET32(2, RW(2) + RW(3));
SET64(31, 0x1b7848); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_001B7DA0(c);
SET64(2, (s32)rd32(c, (RW(28) + -32220)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001B7830; } }
L_001B7860:;
SET64(2, RD(19) + RD(0));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + -1); if (t) { POLL(); goto L_001B7714; } }
SET64(31, 0x1b7874); SET64(4, RD(22) + RD(0)); F_001570B0(c);
L_001B7874:;
SET32(2, RW(0) + -1);
L_001B7878:;
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

void F_001B78A0(Ctx *c) { /* func_001B78A0 */
ENTER(0x1b78a0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(17, RW(6) << 2);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(2, RW(2) + RW(17));
SET64(16, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(16) + 32)));
{ int t = RD(4) == RD(0); SET64(19, RD(5) + RD(0)); if (t) goto L_001B794C; }
SET64(31, 0x1b78e4);  F_001570B0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_001B7928; }
SET64(31, 0x1b78f8);  F_0029CF70(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_001B7908; }
SET64(18, RD(0) + (s64)1); goto L_001B7928;
L_001B7908:;
SET64(31, 0x1b7910); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001B7928; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_001B7928; }
SET64(18, RD(0) + (s64)1);
L_001B7928:;
if (RD(18) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_001B793C; }
SET64(31, 0x1b7938); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0029CFE0(c);
wr32(c, (RW(16) + 8), RW(0));
L_001B793C:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 28), RW(2));
L_001B794C:;
SET64(31, 0x1b7954);  F_002C5110(c);
SET64(3, (s32)rd32(c, (RW(20) + 4)));
SET64(5, RD(19) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET32(2, RW(3) + RW(17));
SET64(3, RD(4) ^ 0x1);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1b7974); SET64(6, RD(0) < RD(3)); F_001B8580(c);
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001B79A0(Ctx *c) { /* func_001B79A0 */
ENTER(0x1b79a0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(28) + -32220)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001B7A68; }
SET64(2, (s32)rd32(c, (RW(20) + 4)));
L_001B79D8:;
SET32(16, RW(17) << 2);
SET32(2, RW(2) + RW(16));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
if (RD(3) == RD(0)) { SET64(18, RD(0) + (s64)1); goto L_001B7A4C; }
SET64(2, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(2) != RD(0);  if (t) goto L_001B7A18; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_001B7A18; }
SET64(31, 0x1b7a0c); SET64(4, (s32)rd32(c, (RW(3) + 32))); F_001570B0(c);
SET64(2, RD(0) + (s64)1); goto L_001B7A20;
L_001B7A18:;
SET64(2, RD(0) + RD(0));
L_001B7A20:;
{ int t = RD(2) != RD(0);  if (t) goto L_001B7A48; }
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(2, RW(2) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
{ int t = RD(19) != RD(2);  if (t) goto L_001B7A50; }
SET64(2, RD(17) + RD(0)); goto L_001B7A78;
L_001B7A48:;
SET64(18, RD(0) + (s64)1);
L_001B7A4C:;
L_001B7A50:;
SET64(2, (s32)rd32(c, (RW(28) + -32220)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(20) + 4))); { POLL(); goto L_001B79D8; } }
L_001B7A68:;
if (RD(18) == RD(0)) { SET32(2, RW(0) + -1); goto L_001B7A78; }
SET32(2, RW(0) + -2); goto L_001B7A78;
L_001B7A78:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_001B7AA0(Ctx *c) { /* func_001B7AA0 */
ENTER(0x1b7aa0);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(28) + -32220)));
if (RD(4) == RD(3)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001B7B08; }
SET32(3, RW(4) + -1);
wr32(c, (RW(28) + -32220), RW(3));
SET32(4, RW(3) << 2);
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET32(3, RW(3) + RW(4));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -32220))); goto L_001B7AF4; }
SET64(25, (s32)rd32(c, (RW(4) + 36)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1b7af0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(28) + -32220)));
L_001B7AF4:;
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(3) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
L_001B7B08:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001B7B20(Ctx *c) { /* func_001B7B20 */
ENTER(0x1b7b20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001B7BAC; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -10032);
wr32(c, (RW(17) + 36), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_001B7B68; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1b7b64); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 4), RW(0));
L_001B7B68:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 0), RW(0)); goto L_001B7B88; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1b7b84); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 0), RW(0));
L_001B7B88:;
SET64(31, 0x1b7b90); SET64(4, (s32)rd32(c, (RW(17) + 12))); F_00100430(c);
SET64(2, RD(16) << 48);
wr32(c, (RW(17) + 12), RW(0));
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(17) + 8), RW(0)); if (t) goto L_001B7BAC; }
SET64(31, 0x1b7bac); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_001B7BAC:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B7BD0(Ctx *c) { /* func_001B7BD0 */
ENTER(0x1b7bd0);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 4);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(28) + -32220)));
if (RD(4) == RD(3)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001B7C70; }
SET64(31, 0x1b7bf8); SET32(4, RW(0) + 40); F_00100670(c);
if (RD(2) == RD(0)) { SET64(3, (s64)(s32)0x40000); goto L_001B7C20; }
SET64(3, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -10032);
wr32(c, (RW(2) + 36), RW(3));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
SET64(3, (s64)(s32)0x40000);
L_001B7C20:;
SET64(5, (s32)rd32(c, (RW(28) + -32220)));
SET64(4, RD(3) | 0xb224);
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET32(5, RW(5) << 2);
SET32(3, RW(3) + RW(5));
wr32(c, (RW(3) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(28) + -32220)));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x1b7c50); SET64(16, (s32)rd32(c, (RW(2) + 0))); F_00100530(c);
wr32(c, (RW(16) + 12), RW(2));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 28), RW(3));
wr32(c, (RW(16) + 32), RW(0));
SET64(3, (s32)rd32(c, (RW(28) + -32220)));
SET32(3, RW(3) + 1);
wr32(c, (RW(28) + -32220), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
L_001B7C70:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001B7C80(Ctx *c) { /* func_001B7C80 */
ENTER(0x1b7c80);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 64), RD(31));
SET32(2, RW(2) + -27536);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 0), RW(2));
SET64(31, 0x1b7cb0); SET32(4, RW(0) + 16); F_00100530(c);
wr32(c, (RW(18) + 4), RW(2));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 4)));
wr32(c, (RW(2) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 4)));
wr32(c, (RW(2) + 8), RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 4)));
wr32(c, (RW(2) + 12), RW(0));
SET64(2, (s32)rd32(c, (RW(28) + -32220)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001B7D58; }
SET64(16, RD(0) + RD(0));
L_001B7CE0:;
SET64(31, 0x1b7ce8); SET32(4, RW(0) + 40); F_00100670(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001B7D10; }
SET64(3, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -10032);
wr32(c, (RW(2) + 36), RW(3));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
L_001B7D10:;
SET64(5, (s32)rd32(c, (RW(18) + 4)));
SET64(3, (s64)(s32)0x40000);
SET64(4, RD(3) | 0xb224);
SET32(3, RW(5) + RW(16));
wr32(c, (RW(3) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET32(2, RW(2) + RW(16));
SET64(31, 0x1b7d34); SET64(19, (s32)rd32(c, (RW(2) + 0))); F_00100530(c);
wr32(c, (RW(19) + 12), RW(2));
SET32(17, RW(17) + 1);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(19) + 28), RW(2));
wr32(c, (RW(19) + 32), RW(0));
SET64(2, (s32)rd32(c, (RW(28) + -32220)));
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001B7CE0; } }
L_001B7D58:;
SET64(31, 0x1b7d60); SET64(4, (s32)rd32(c, (RW(18) + 0))); F_0029E010(c);
wr32(c, (RW(18) + 12), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001B7D80(Ctx *c) { /* func_001B7D80 */
ENTER(0x1b7d80);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -10048);
wr32(c, (RW(4) + 8), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(0)); return;
}

void F_001B7DA0(Ctx *c) { /* func_001B7DA0 */
ENTER(0x1b7da0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_001B8064; }
SET64(3, (s32)rd32(c, (RW(16) + 32)));
if (RD(3) != RD(0)) { c->f[0].u = rd32(c, (RW(16) + 20)); goto L_001B7E60; }
{ int t = RD(4) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_001B7E0C; }
SET64(31, 0x1b7ddc);  F_0029CF70(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_001B7DEC; }
SET64(17, RD(0) + (s64)1); goto L_001B7E0C;
L_001B7DEC:;
SET64(31, 0x1b7df4); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
if (RD(2) == RD(0)) { SET64(3, RD(17) & 0xff); goto L_001B7E10; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_001B7E0C; }
SET64(17, RD(0) + (s64)1);
L_001B7E0C:;
SET64(3, RD(17) & 0xff);
L_001B7E10:;
{ int t = RD(3) != RD(0);  if (t) goto L_001B8060; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_001B7E38; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1b7e34); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
L_001B7E38:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_001B8060; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1b7e54); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
 goto L_001B8060;
L_001B7E60:;
c->f[7].u = RW(0);
c->fcc = F(0) <= F(7);
{ int t = c->fcc;  if (t) goto L_001B8060; }
SET64(3, (s64)(s32)0x41850000);
c->facc = fpu(F(7) + F(0));
SET64(3, RD(3) | 0x5555);
c->f[0].u = RW(3);
c->f[4].f = fpu(c->facc - F(0) * F(12));
c->fcc = F(4) <= F(7);
{ int t = !c->fcc; wr32(c, (RW(16) + 20), c->f[4].u); if (t) goto L_001B7F38; }
wr32(c, (RW(16) + 20), c->f[7].u);
SET64(3, rd8(c, (RW(16) + 16)));
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_001B7F28; }
SET64(4, (s32)rd32(c, (RW(16) + 32)));
{ int t = RD(4) == RD(0);  if (t) goto L_001B8060; }
SET64(31, 0x1b7ebc);  F_001570B0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_001B7F00; }
SET64(31, 0x1b7ed0);  F_0029CF70(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_001B7EE0; }
SET64(17, RD(0) + (s64)1); goto L_001B7F00;
L_001B7EE0:;
SET64(31, 0x1b7ee8); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001B7F00; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_001B7F00; }
SET64(17, RD(0) + (s64)1);
L_001B7F00:;
if (RD(17) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_001B7F14; }
SET64(31, 0x1b7f10); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0029CFE0(c);
wr32(c, (RW(16) + 8), RW(0));
L_001B7F14:;
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 28), RW(3)); goto L_001B8060;
L_001B7F28:;
SET64(31, 0x1b7f30); c->f[12].u = rd32(c, (RW(16) + 28)); F_0029CED0(c);
 goto L_001B8060;
L_001B7F38:;
SET64(2, rd8(c, (RW(16) + 16)));
SET64(3, (s64)(s32)0x3f800000);
c->f[6].u = RW(3);
if (RD(2) == RD(0)) { c->f[1].u = rd32(c, (RW(16) + 24)); goto L_001B7FBC; }
c->f[2].u = rd32(c, (RW(16) + 24));
SET64(2, (s64)(s32)0x41200000);
c->f[0].u = RW(2);
SET64(3, (s64)(s32)0x40000000);
SET64(2, (s64)(s32)0x3cd40000);
c->f[1].f = fpu(F(2) - F(4));
SET64(5, RD(2) | 0xfdf3);
SET64(2, (s64)(s32)0x3fa60000);
SET64(4, RD(2) | 0x6666);
SET64(2, (s64)(s32)0x42c80000);
c->f[1].f = fpu_div(F(1), F(2));
c->f[5].f = fpu(F(0) * F(1));
c->f[3].f = fpu(F(5) * F(5));
c->f[2].u = RW(4);
c->f[2].f = fpu(F(2) * F(3));
c->f[1].u = RW(3);
c->f[1].f = fpu_div(F(2), F(1));
c->f[4].u = RW(5);
c->facc = fpu(F(7) + F(1));
c->f[0].u = RW(2);
c->f[1].f = fpu(c->facc + F(4) * F(5));
c->f[0].f = fpu_div(F(1), F(0));
c->f[1].f = fpu(F(6) - F(0)); goto L_001B801C;
L_001B7FBC:;
SET64(2, (s64)(s32)0x41200000);
c->f[3].u = RW(2);
SET64(4, (s64)(s32)0xbf000000);
SET64(2, (s64)(s32)0x3c750000);
SET64(3, (s64)(s32)0x40000000);
c->f[0].f = fpu(F(1) - F(4));
SET64(5, RD(2) | 0xc290);
SET64(2, (s64)(s32)0x42c80000);
c->f[5].f = fpu_div(F(0), F(1));
c->facc = fpu(F(7) + F(3));
c->f[5].f = fpu(c->facc - F(3) * F(5));
c->f[3].f = fpu(F(5) * F(5));
c->f[2].u = RW(4);
c->f[2].f = fpu(F(2) * F(3));
c->f[1].u = RW(3);
c->f[1].f = fpu_div(F(2), F(1));
c->f[4].u = RW(5);
c->facc = fpu(F(7) + F(1));
c->f[0].u = RW(2);
c->f[1].f = fpu(c->facc + F(4) * F(5));
c->f[0].f = fpu_div(F(1), F(0));
c->f[1].f = fpu(F(6) + F(0));
L_001B801C:;
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x3f800000); goto L_001B8038; }
c->f[1].u = c->f[0].u; goto L_001B8050;
L_001B8038:;
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].u = rd32(c, (RW(16) + 28)); goto L_001B8054; }
c->f[1].u = c->f[0].u;
L_001B8050:;
c->f[0].u = rd32(c, (RW(16) + 28));
L_001B8054:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1b8060); c->f[12].f = fpu(F(1) * F(0)); F_0029CED0(c);
L_001B8060:;
SET64(31, rd64(c, (RW(29) + 32)));
L_001B8064:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B8080(Ctx *c) { /* func_001B8080 */
ENTER(0x1b8080);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001B8100; }
{ int t = RD(5) == RD(0);  if (t) goto L_001B80D4; }
if (RD(4) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_001B80B8; }
SET64(31, 0x1b80b4);  F_0029CF50(c);
SET64(3, RD(2) + RD(0));
L_001B80B8:;
SET64(3, RD(3) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_001B80FC; }
SET64(31, 0x1b80cc); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0029D070(c);
 goto L_001B80FC;
L_001B80D4:;
if (RD(4) == RD(0)) { SET64(3, RD(0) + RD(0)); goto L_001B80E8; }
SET64(31, 0x1b80e4);  F_0029CF50(c);
SET64(3, RD(2) + RD(0));
L_001B80E8:;
SET64(3, RD(3) & 0xff);
{ int t = RD(3) == RD(0);  if (t) goto L_001B80FC; }
SET64(31, 0x1b80fc); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0029D150(c);
L_001B80FC:;
SET64(31, rd64(c, (RW(29) + 16)));
L_001B8100:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001B8110(Ctx *c) { /* func_001B8110 */
ENTER(0x1b8110);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_001B8178; }
SET64(31, 0x1b8134); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x1b8140); SET64(16, RD(2) + RD(0)); F_0029CE50(c);
SET64(31, 0x1b8148); SET64(4, (s32)rd32(c, (RW(17) + 32))); F_001570B0(c);
SET32(2, RW(0) + 1);
if (RD(16) == RD(2)) { SET32(2, RW(0) + 1); goto L_001B817C; }
SET32(2, RW(0) + 2);
{ int t = RD(16) == RD(2);  if (t) goto L_001B816C; }
SET32(2, RW(0) + 6);
if (RD(16) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_001B817C; }
L_001B816C:;
SET32(2, RW(0) + 1);
 goto L_001B817C;
L_001B8178:;
SET64(2, RD(0) + RD(0));
L_001B817C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B8190(Ctx *c) { /* func_001B8190 */
ENTER(0x1b8190);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(4) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_001B81E8; }
SET64(31, 0x1b81b8);  F_0029CF70(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_001B81C8; }
SET64(17, RD(0) + (s64)1); goto L_001B81E8;
L_001B81C8:;
SET64(31, 0x1b81d0); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001B81E8; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_001B81E8; }
SET64(17, RD(0) + (s64)1);
L_001B81E8:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 32))); goto L_001B81F8; }
SET64(2, RD(0) + RD(0)); goto L_001B8274;
L_001B81F8:;
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_001B8274; }
SET64(31, 0x1b8208);  F_001570B0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_001B824C; }
SET64(31, 0x1b821c);  F_0029CF70(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_001B822C; }
SET64(17, RD(0) + (s64)1); goto L_001B824C;
L_001B822C:;
SET64(31, 0x1b8234); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001B824C; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_001B824C; }
SET64(17, RD(0) + (s64)1);
L_001B824C:;
if (RD(17) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_001B8260; }
SET64(31, 0x1b825c); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0029CFE0(c);
wr32(c, (RW(16) + 8), RW(0));
L_001B8260:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 28), RW(2));
SET32(2, RW(0) + 1);
L_001B8274:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B8290(Ctx *c) { /* func_001B8290 */
ENTER(0x1b8290);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(4) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_001B82E8; }
SET64(31, 0x1b82b8);  F_0029CF70(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_001B82C8; }
SET64(16, RD(0) + (s64)1); goto L_001B82E8;
L_001B82C8:;
SET64(31, 0x1b82d0); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
if (RD(2) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_001B82EC; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_001B82E8; }
SET64(16, RD(0) + (s64)1);
L_001B82E8:;
SET64(2, RD(16) + RD(0));
L_001B82EC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B8300(Ctx *c) { /* func_001B8300 */
ENTER(0x1b8300);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(3) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001B8340; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
if (RD(3) != RD(0)) { SET64(3, RD(0) + RD(0)); goto L_001B8344; }
SET64(31, 0x1b8338); SET64(4, (s32)rd32(c, (RW(17) + 32))); F_001570B0(c);
SET64(3, RD(0) + (s64)1); goto L_001B8344;
L_001B8340:;
SET64(3, RD(0) + RD(0));
L_001B8344:;
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_001B84D0; }
c->f[1].u = rd32(c, (RW(16) + 0));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(17) + 32))); goto L_001B83B4; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(4) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_001B83A8; }
SET64(31, 0x1b8378);  F_0029CF70(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_001B8388; }
SET64(18, RD(0) + (s64)1); goto L_001B83A8;
L_001B8388:;
SET64(31, 0x1b8390); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001B83A8; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_001B83A8; }
SET64(18, RD(0) + (s64)1);
L_001B83A8:;
if (RD(18) != RD(0)) { c->f[2].u = rd32(c, (RW(17) + 20)); goto L_001B8430; }
SET64(4, (s32)rd32(c, (RW(17) + 32)));
L_001B83B4:;
{ int t = RD(4) == RD(0);  if (t) goto L_001B84CC; }
SET64(31, 0x1b83c4);  F_001570B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(4) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_001B8408; }
SET64(31, 0x1b83d8);  F_0029CF70(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_001B83E8; }
SET64(16, RD(0) + (s64)1); goto L_001B8408;
L_001B83E8:;
SET64(31, 0x1b83f0); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001B8408; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_001B8408; }
SET64(16, RD(0) + (s64)1);
L_001B8408:;
if (RD(16) == RD(0)) { wr32(c, (RW(17) + 8), RW(0)); goto L_001B841C; }
SET64(31, 0x1b8418); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_0029CFE0(c);
wr32(c, (RW(17) + 8), RW(0));
L_001B841C:;
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 32), RW(0));
wr32(c, (RW(17) + 28), RW(3)); goto L_001B84CC;
L_001B8430:;
c->f[1].u = RW(0);
c->fcc = F(2) <= F(1);
if (c->fcc) { c->f[0].u = rd32(c, (RW(16) + 0)); goto L_001B8458; }
c->f[0].u = rd32(c, (RW(17) + 24));
c->fcc = F(0) <= F(1);
{ int t = !c->fcc;  if (t) goto L_001B8474; }
c->f[0].u = rd32(c, (RW(16) + 0));
L_001B8458:;
SET64(3, (s64)(s32)0x447a0000);
c->f[1].u = RW(3);
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(17) + 24), c->f[0].u);
wr32(c, (RW(17) + 20), c->f[0].u); goto L_001B84C4;
L_001B8474:;
c->f[2].f = fpu_div(F(2), F(0));
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->fcc = F(2) <= F(0);
if (!c->fcc) { SET32(3, RW(0) + 1); goto L_001B84C8; }
c->fcc = F(2) <= F(1);
{ int t = c->fcc;  if (t) goto L_001B84C4; }
c->f[0].u = rd32(c, (RW(16) + 0));
SET64(3, (s64)(s32)0x447a0000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(1) * F(0));
c->f[0].f = fpu(F(2) * F(1));
wr32(c, (RW(17) + 24), c->f[1].u);
wr32(c, (RW(17) + 20), c->f[0].u);
L_001B84C4:;
SET32(3, RW(0) + 1);
L_001B84C8:;
wr8(c, (RW(17) + 16), (u8)RW(3));
L_001B84CC:;
SET64(31, rd64(c, (RW(29) + 48)));
L_001B84D0:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B84F0(Ctx *c) { /* func_001B84F0 */
ENTER(0x1b84f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET64(31, 0x1b8510); c->f[20].u = c->f[12].u; F_0029D0C0(c);
c->f[12].u = RW(0);
c->fcc = F(20) <= F(12);
{ int t = c->fcc; wr8(c, (RW(16) + 16), (u8)RW(0)); if (t) goto L_001B854C; }
SET64(2, (s64)(s32)0x447a0000);
c->f[0].u = RW(2);
c->f[0].f = fpu(F(0) * F(20));
wr32(c, (RW(16) + 24), c->f[0].u);
wr32(c, (RW(16) + 20), c->f[0].u);
SET64(31, 0x1b8544); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0029CED0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_001B8558;
L_001B854C:;
wr32(c, (RW(16) + 24), c->f[12].u);
wr32(c, (RW(16) + 20), c->f[12].u);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_001B8558:;
SET64(31, 0x1b8560);  F_0029D150(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_001B8580(Ctx *c) { /* func_001B8580 */
ENTER(0x1b8580);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(17, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1b85a4); SET64(4, RD(17) + RD(0)); F_001570B0(c);
SET64(31, 0x1b85ac); SET32(4, RW(0) + 24); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001B85C0; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x1b85c0); SET32(5, RW(0) + 2); F_0029D440(c);
L_001B85C0:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1b85cc); wr32(c, (RW(18) + 0), RW(16)); F_0029D390(c);
SET64(31, 0x1b85d4); SET64(4, (s32)rd32(c, (RW(18) + 0))); F_0029D390(c);
SET64(31, 0x1b85dc); SET32(4, RW(0) + 20); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001B8600; }
SET64(5, (s32)rd32(c, (RW(18) + 12)));
SET64(2, (s64)(s32)0x40000);
SET64(4, RD(16) + RD(0));
SET32(7, RW(0) + 64);
SET64(6, RD(2) | 0xb1e4);
SET64(31, 0x1b8600); SET64(8, RD(0) + RD(0)); F_002AB3D0(c);
L_001B8600:;
wr32(c, (RW(18) + 8), RW(16));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(31, 0x1b8610); SET64(5, RD(16) + RD(0)); F_0029D2F0(c);
wr32(c, (RW(18) + 32), RW(17));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1b8620); wr32(c, (RW(18) + 20), RW(0)); F_00157340(c);
wr32(c, (RW(18) + 4), RW(2));
SET64(5, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x1b8630); SET64(4, (s32)rd32(c, (RW(18) + 0))); F_0029D200(c);
SET64(31, 0x1b8638); SET64(4, (s32)rd32(c, (RW(18) + 0))); F_0029D150(c);
SET64(31, 0x1b8640); SET64(4, (s32)rd32(c, (RW(18) + 0))); F_0029D070(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B8660(Ctx *c) { /* func_001B8660 */
ENTER(0x1b8660);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
{ int t = RD(19) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_001B8708; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -10048);
wr32(c, (RW(19) + 8), RW(2));
SET64(2, (s32)rd32(c, (RW(28) + -32220)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001B86E8; }
SET64(16, RD(0) + RD(0));
L_001B86A0:;
SET64(2, (s32)rd32(c, (RW(19) + 4)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_001B86C8; }
SET64(25, (s32)rd32(c, (RW(4) + 36)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1b86c4); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001B86C8:;
SET64(2, (s32)rd32(c, (RW(19) + 4)));
SET32(17, RW(17) + 1);
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(28) + -32220)));
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001B86A0; } }
L_001B86E8:;
SET64(31, 0x1b86f0); SET64(4, (s32)rd32(c, (RW(19) + 4))); F_00100430(c);
SET64(2, RD(18) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(19) + 4), RW(0)); if (t) goto L_001B8708; }
SET64(31, 0x1b8708); SET64(4, RD(19) + RD(0)); F_001004B0(c);
L_001B8708:;
SET64(2, RD(19) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_001B8730(Ctx *c) { /* func_001B8730 */
ENTER(0x1b8730);
SET32(4, RW(4) + -4); { F_001B6680(c); return; }
}

void F_001B8740(Ctx *c) { /* func_001B8740 */
ENTER(0x1b8740);
SET32(4, RW(4) + -24); { F_001B6680(c); return; }
}

void F_001B8750(Ctx *c) { /* func_001B8750 */
ENTER(0x1b8750);
SET32(29, RW(29) + -64);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, rd16(c, (RW(28) + -32216)));
SET64(4, rd16(c, (RW(4) + 40)));
SET64(6, rd16(c, (RW(28) + -32216)));
SET32(2, RW(2) << (RW(3) & 31));
SET64(2, RD(4) & RD(2));
{ int t = RD(2) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001B87D8; }
SET64(2, (s32)rd32(c, (RW(17) + 32)));
SET64(5, (s32)rd32(c, (RW(2) + 4)));
{ int t = RSD(5) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_001B87D8; }
SET64(4, RD(6) & 0xffff);
SET64(6, RD(17) + RD(0));
L_001B879C:;
SET64(3, (s32)rd32(c, (RW(6) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
if (RD(2) != RD(4)) { SET32(7, RW(7) + 1); goto L_001B87CC; }
SET32(4, RW(3) + 32);
SET32(5, RW(3) + 4);
SET32(6, RW(17) + 36);
SET64(31, 0x1b87c0); SET64(7, RD(0) + RD(0)); F_0015C970(c);
SET64(2, RD(0) + (s64)1); goto L_001B87DC;
SET32(7, RW(7) + 1);
L_001B87CC:;
SET64(2, RSD(7) < RSD(5));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_001B879C; } }
L_001B87D8:;
SET64(2, RD(0) + RD(0));
L_001B87DC:;
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_001B8808; }
c->f[1].u = RW(0);
c->fcc = F(1) == F(0);
{ int t = !c->fcc; SET32(2, RW(0) + 1); if (t) goto L_001B8808; }
SET64(2, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 256))); goto L_001B880C;
SET32(2, RW(0) + 1);
L_001B8808:;
SET64(4, (s32)rd32(c, (RW(16) + 256)));
L_001B880C:;
SET64(2, RD(0) < RD(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1b8820); SET64(5, RD(2) ^ 0x1); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 276)));
SET32(4, RW(29) + 48);
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x1b8834); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 48);
SET64(31, 0x1b8844); SET32(6, RW(28) + -32208); F_001B8870(c);
SET64(25, (s32)rd32(c, (RW(16) + 276)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x1b8858); SET32(5, RW(29) + 48); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

static void B_001B8870(Ctx *c, u32 entry) { /* func_001B8870 */
ENTER(entry);
switch (entry) { case 0x1b8920: goto L_001B8920; case 0x1b8928: goto L_001B8928; case 0x1b8930: goto L_001B8930; case 0x1b8938: goto L_001B8938; case 0x1b8988: goto L_001B8988; }
L_001B8870:;
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(6) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 40)));
SET64(2, rd16(c, (RW(6) + 0)));
SET64(2, RD(3) & RD(2));
{ int t = RD(2) == RD(0); SET64(19, RD(5) + RD(0)); if (t) goto L_001B89A8; }
SET64(2, (s32)rd32(c, (RW(20) + 32)));
SET64(2, (s32)rd32(c, (RW(2) + 4)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001B89A0; }
SET64(17, RD(20) + RD(0));
L_001B88C0:;
SET64(16, (s32)rd32(c, (RW(17) + 0)));
SET32(7, RW(0) + 1);
SET64(2, rd16(c, (RW(21) + 0)));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(7) << (RW(3) & 31));
SET64(2, RD(3) & RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_001B8988; }
SET32(4, RW(16) + 32);
SET32(5, RW(16) + 4);
SET64(31, 0x1b88f0); SET32(6, RW(20) + 36); F_0015C970(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(2) < (u64)(s64)11);
{ int t = RD(1) == RD(0);  if (t) goto L_001B8988; }
SET64(3, (s64)(s32)0x490000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + 23520);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x1b8870: goto L_001B8870; case 0x1b8920: goto L_001B8920; case 0x1b8928: goto L_001B8928; case 0x1b8930: goto L_001B8930; case 0x1b8938: goto L_001B8938; case 0x1b8988: goto L_001B8988; default: rt_jump(c, t); return; } }
L_001B8920:;
wr32(c, (RW(19) + 0), c->f[0].u); goto L_001B8988;
L_001B8928:;
wr32(c, (RW(19) + 4), c->f[0].u); goto L_001B8988;
L_001B8930:;
wr32(c, (RW(19) + 8), c->f[0].u); goto L_001B8988;
L_001B8938:;
c->f[1].u = RW(0);
c->fcc = F(0) < F(1);
{ int t = !c->fcc;  if (t) goto L_001B8950; }
c->f[0].u = c->f[1].u;
L_001B8950:;
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc;  if (t) goto L_001B8970; }
c->f[0].u = c->f[1].u;
L_001B8970:;
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = RW(2);
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(19) + 12), c->f[0].u);
L_001B8988:;
SET64(2, (s32)rd32(c, (RW(20) + 32)));
SET32(18, RW(18) + 1);
SET64(2, (s32)rd32(c, (RW(2) + 4)));
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_001B88C0; } }
L_001B89A0:;
SET32(2, RW(0) + 1); goto L_001B89AC;
L_001B89A8:;
SET64(2, RD(0) + RD(0));
L_001B89AC:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}
void F_001B8870(Ctx *c) { B_001B8870(c, 0x1b8870); }
void F_001B8920(Ctx *c) { B_001B8870(c, 0x1b8920); }
void F_001B8928(Ctx *c) { B_001B8870(c, 0x1b8928); }
void F_001B8930(Ctx *c) { B_001B8870(c, 0x1b8930); }
void F_001B8938(Ctx *c) { B_001B8870(c, 0x1b8938); }
void F_001B8988(Ctx *c) { B_001B8870(c, 0x1b8988); }

void F_001B89D0(Ctx *c) { /* func_001B89D0 */
ENTER(0x1b89d0);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, rd16(c, (RW(28) + -32212)));
SET64(5, rd16(c, (RW(4) + 40)));
SET32(2, RW(2) << (RW(3) & 31));
SET64(2, RD(5) & RD(2));
{ int t = RD(2) == RD(0); SET64(7, rd16(c, (RW(28) + -32212))); if (t) goto L_001B8A48; }
SET64(2, (s32)rd32(c, (RW(4) + 32)));
SET64(6, (s32)rd32(c, (RW(2) + 4)));
{ int t = RSD(6) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_001B8A48; }
SET64(5, RD(7) & 0xffff);
SET64(7, RD(4) + RD(0));
L_001B8A0C:;
SET64(3, (s32)rd32(c, (RW(7) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
if (RD(2) != RD(5)) { SET32(8, RW(8) + 1); goto L_001B8A38; }
SET32(6, RW(4) + 36);
SET32(5, RW(3) + 4);
SET32(4, RW(3) + 32);
SET64(31, 0x1b8a30); SET32(7, RW(0) + 1); F_0015C970(c);
SET64(2, RD(0) + (s64)1); goto L_001B8A4C;
L_001B8A38:;
SET64(2, RSD(8) < RSD(6));
{ int t = RD(2) != RD(0); SET32(7, RW(7) + 4); if (t) { POLL(); goto L_001B8A0C; } }
L_001B8A48:;
SET64(2, RD(0) + RD(0));
L_001B8A4C:;
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x3f800000); goto L_001B8A64; }
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = RW(2);
c->f[0].f = fpu(F(1) - F(0)); goto L_001B8A68;
L_001B8A64:;
c->f[0].u = RW(2);
L_001B8A68:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001B8A80(Ctx *c) { /* func_001B8A80 */
ENTER(0x1b8a80);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, rd16(c, (RW(28) + -32216)));
SET64(5, rd16(c, (RW(4) + 40)));
SET32(2, RW(2) << (RW(3) & 31));
SET64(2, RD(5) & RD(2));
{ int t = RD(2) == RD(0); SET64(7, rd16(c, (RW(28) + -32216))); if (t) goto L_001B8AF8; }
SET64(2, (s32)rd32(c, (RW(4) + 32)));
SET64(6, (s32)rd32(c, (RW(2) + 4)));
{ int t = RSD(6) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_001B8AF8; }
SET64(5, RD(7) & 0xffff);
SET64(7, RD(4) + RD(0));
L_001B8ABC:;
SET64(3, (s32)rd32(c, (RW(7) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
if (RD(2) != RD(5)) { SET32(8, RW(8) + 1); goto L_001B8AEC; }
SET32(6, RW(4) + 36);
SET32(5, RW(3) + 4);
SET32(4, RW(3) + 32);
SET64(31, 0x1b8ae0); SET64(7, RD(0) + RD(0)); F_0015C970(c);
SET64(2, RD(0) + (s64)1); goto L_001B8AFC;
SET32(8, RW(8) + 1);
L_001B8AEC:;
SET64(2, RSD(8) < RSD(6));
{ int t = RD(2) != RD(0); SET32(7, RW(7) + 4); if (t) { POLL(); goto L_001B8ABC; } }
L_001B8AF8:;
SET64(2, RD(0) + RD(0));
L_001B8AFC:;
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_001B8B28; }
c->f[1].u = RW(0);
c->fcc = F(1) == F(0);
{ int t = !c->fcc; SET32(2, RW(0) + 1); if (t) goto L_001B8B28; }
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0))); goto L_001B8B2C;
SET32(2, RW(0) + 1);
L_001B8B28:;
SET64(31, rd64(c, (RW(29) + 0)));
L_001B8B2C:;
SET32(29, RW(29) + 16); return;
}

void F_001B8B40(Ctx *c) { /* func_001B8B40 */
ENTER(0x1b8b40);
SET64(3, (s32)rd32(c, (RW(4) + 32)));
{ int t = RD(3) == RD(0);  if (t) goto L_001B8C0C; }
c->f[0].u = rd32(c, (RW(4) + 36));
SET64(3, (s64)(s32)0x3f000000);
c->f[1].u = rd32(c, (RW(5) + 0));
c->f[2].u = RW(0);
c->f[3].u = RW(3);
c->facc = fpu(F(2) + F(0));
c->f[0].f = fpu(c->facc + F(3) * F(1));
wr32(c, (RW(4) + 36), c->f[0].u);
SET64(3, rd8(c, (RW(4) + 42)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 32))); goto L_001B8BD8; }
 goto L_001B8BB0;
L_001B8B84:;
{ int t = RD(3) == RD(0);  if (t) goto L_001B8B98; }
c->f[1].u = rd32(c, (RW(3) + 8)); goto L_001B8BA0;
L_001B8B98:;
c->f[1].u = c->f[2].u;
L_001B8BA0:;
c->f[0].u = rd32(c, (RW(4) + 36));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(4) + 36), c->f[0].u);
L_001B8BB0:;
SET64(3, (s32)rd32(c, (RW(4) + 32)));
if (RD(3) == RD(0)) { c->f[1].u = c->f[2].u; goto L_001B8BC0; }
c->f[1].u = rd32(c, (RW(3) + 8));
L_001B8BC0:;
c->f[0].u = rd32(c, (RW(4) + 36));
c->fcc = F(0) < F(1);
{ int t = !c->fcc;  if (t) { POLL(); goto L_001B8B84; } }
 goto L_001B8C0C;
L_001B8BD8:;
{ int t = RD(3) == RD(0);  if (t) goto L_001B8BE4; }
c->f[2].u = rd32(c, (RW(3) + 8));
L_001B8BE4:;
c->f[0].u = rd32(c, (RW(4) + 36));
c->fcc = F(0) <= F(2);
{ int t = c->fcc;  if (t) goto L_001B8C0C; }
{ int t = RD(3) == RD(0);  if (t) goto L_001B8C04; }
c->f[0].u = rd32(c, (RW(3) + 8)); goto L_001B8C08;
L_001B8C04:;
c->f[0].u = RW(0);
L_001B8C08:;
wr32(c, (RW(4) + 36), c->f[0].u);
L_001B8C0C:;
 return;
}

void F_001B8C20(Ctx *c) { /* func_001B8C20 */
ENTER(0x1b8c20);
{ int t = RD(5) == RD(0);  if (t) goto L_001B8C80; }
wr32(c, (RW(4) + 32), RW(5));
SET32(9, RW(5) + 16);
SET64(3, (s32)rd32(c, (RW(5) + 4)));
{ int t = RSD(3) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_001B8C80; }
SET64(7, RD(4) + RD(0));
SET32(6, RW(0) + 1);
L_001B8C44:;
wr32(c, (RW(7) + 0), RW(9));
SET32(8, RW(8) + 1);
SET64(5, (s32)rd32(c, (RW(9) + 0)));
SET32(7, RW(7) + 4);
SET64(3, rd16(c, (RW(4) + 40)));
SET32(5, RW(6) << (RW(5) & 31));
SET64(5, RD(5) & 0xffff);
SET64(3, RD(3) | RD(5));
wr16(c, (RW(4) + 40), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET64(5, (s32)rd32(c, (RW(9) + 8)));
SET64(3, (s32)rd32(c, (RW(3) + 4)));
SET64(3, RSD(8) < RSD(3));
{ int t = RD(3) != RD(0); SET32(9, RW(9) + RW(5)); if (t) { POLL(); goto L_001B8C44; } }
L_001B8C80:;
 return;
}

void F_001B8C90(Ctx *c) { /* func_001B8C90 */
ENTER(0x1b8c90);
wr32(c, (RW(4) + 36), RW(0));
wr8(c, (RW(4) + 42), (u8)RW(0)); return;
}

void F_001B8CA0(Ctx *c) { /* func_001B8CA0 */
ENTER(0x1b8ca0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 1908)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001B8D40; }
SET64(2, (s32)rd32(c, (RW(16) + 1904)));
SET64(31, 0x1b8cc4); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_00172DE0(c);
SET64(2, rd8(c, (RW(16) + 1908)));
SET64(2, RD(0) < RD(2));
if (RD(2) == RD(0)) { SET64(2, RD(2) & 0xff); goto L_001B8CE8; }
SET64(2, (s32)rd32(c, (RW(16) + 1904)));
SET64(31, 0x1b8ce0); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_00172D40(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) & 0xff);
L_001B8CE8:;
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 1832), RW(0)); goto L_001B8D18; }
SET64(3, (s32)rd32(c, (RW(16) + 1904)));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
c->f[1].u = rd32(c, (RW(2) + 0));
SET64(31, 0x1b8d10); c->f[12].f = fpu(F(0) - F(1)); F_001BC650(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_001B8D44;
L_001B8D18:;
SET32(3, RW(0) + 362);
wr32(c, (RW(16) + 1840), RW(3));
SET64(2, (s64)(s32)0xbf800000);
wr32(c, (RW(16) + 1848), RW(2));
c->f[12].u = RW(0);
wr32(c, (RW(16) + 1836), RW(0));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 1844), RW(3));
SET64(31, 0x1b8d40); wr32(c, (RW(16) + 1852), RW(2)); F_001BCDA0(c);
L_001B8D40:;
SET64(31, rd64(c, (RW(29) + 16)));
L_001B8D44:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_001B8D50(Ctx *c) { /* func_001B8D50 */
ENTER(0x1b8d50);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(4, RW(0) + 1168);
SET64(31, 0x1b8d70); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001B8E54; }
SET32(4, RW(17) + 16);
SET32(2, RW(17) + 420);
wr32(c, (RW(17) + 0), RW(4));
SET32(3, RW(17) + 448);
wr32(c, (RW(17) + 704), RW(2));
SET32(16, RW(0) + 1);
SET32(2, RW(17) + 736);
wr32(c, (RW(17) + 4), RW(3));
SET64(31, 0x1b8da0); wr32(c, (RW(17) + 8), RW(2)); F_0019AF50(c);
SET64(31, 0x1b8da8); SET32(4, RW(17) + 420); F_00141AA0(c);
SET32(4, RW(17) + 448);
SET64(31, 0x1b8db4); SET64(5, RD(0) + RD(0)); F_001538E0(c);
SET32(4, RW(17) + 736);
SET64(31, 0x1b8dc0); SET64(5, RD(16) + RD(0)); F_002A25B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22304);
SET64(9, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 12), RW(2));
SET64(8, (s64)(s32)0x4d0000);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET32(6, RW(6) + -22256);
SET64(7, (s64)(s32)0x4d0000);
SET32(9, RW(9) + -22204);
SET32(8, RW(8) + -22240);
SET32(7, RW(7) + -22132);
wr32(c, (RW(2) + 388), RW(6));
SET32(5, RW(17) + 16);
SET64(6, (s32)rd32(c, (RW(17) + 4)));
SET32(4, RW(17) + 420);
SET32(3, RW(17) + 448);
SET32(2, RW(17) + 736);
wr32(c, (RW(6) + 276), RW(9));
SET64(6, (s32)rd32(c, (RW(17) + 4)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
wr32(c, (RW(6) + 16), RW(8));
SET64(6, (s32)rd32(c, (RW(17) + 8)));
wr32(c, (RW(6) + 144), RW(7));
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 400), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET64(5, (s32)rd32(c, (RW(5) + 256)));
SET32(4, RW(4) - RW(5));
wr32(c, (RW(5) + 20), RW(4));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 280), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 8)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 416), RW(2));
L_001B8E54:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x1b8e60); wr32(c, (RW(18) + 1904), RW(17)); F_00172D00(c);
wr8(c, (RW(18) + 1908), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B8E80(Ctx *c) { /* func_001B8E80 */
ENTER(0x1b8e80);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x1b8e9c); SET64(8, RD(0) + RD(0)); F_002B0E70(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_001B8EB0(Ctx *c) { /* func_001B8EB0 */
ENTER(0x1b8eb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(28) + -30004)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_001B8EE4; }
SET64(31, 0x1b8ecc);  F_002F95E0(c);
SET64(3, (s64)(s32)0x41f00000);
SET64(4, RD(2) + RD(0));
c->f[12].u = RW(3);
SET64(31, 0x1b8ee0); SET32(5, RW(0) + 15); F_0031A010(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_001B8EE4:;
SET32(29, RW(29) + 16); return;
}

void F_001B8EF0(Ctx *c) { /* func_001B8EF0 */
ENTER(0x1b8ef0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(28) + -30004)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_001B8F24; }
SET64(31, 0x1b8f0c);  F_002F95E0(c);
SET64(3, (s64)(s32)0x41f00000);
SET64(4, RD(2) + RD(0));
c->f[12].u = RW(3);
SET64(31, 0x1b8f20); SET32(5, RW(0) + 15); F_0031A2A0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_001B8F24:;
SET32(29, RW(29) + 16); return;
}

static void B_001B8F30(Ctx *c, u32 entry) { /* func_001B8F30 */
ENTER(entry);
switch (entry) { case 0x1b8f70: goto L_001B8F70; case 0x1b8fd8: goto L_001B8FD8; case 0x1b9038: goto L_001B9038; }
L_001B8F30:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 416)));
SET64(1, RD(3) < (u64)(s64)31);
{ int t = RD(1) == RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_001B9038; }
SET64(4, (s64)(s32)0x4b0000);
SET32(3, RW(3) << 2);
SET32(4, RW(4) + -32112);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x1b8f30: goto L_001B8F30; case 0x1b8f70: goto L_001B8F70; case 0x1b8fd8: goto L_001B8FD8; case 0x1b9038: goto L_001B9038; default: rt_jump(c, t); return; } }
L_001B8F70:;
SET32(3, RW(5) << 2);
SET32(3, RW(3) + RW(17));
SET64(5, (s32)rd32(c, (RW(3) + 280)));
if (RD(5) == RD(0)) { SET32(3, RW(16) << 2); goto L_001B8FA4; }
SET64(4, rd16(c, (RW(5) + 1046)));
SET32(3, RW(0) + 32);
{ int t = RD(4) != RD(3);  if (t) goto L_001B8FA0; }
SET64(4, (s32)rd32(c, (RW(5) + 4144)));
SET64(31, 0x1b8fa0); SET64(5, RD(0) + RD(0)); F_00344910(c);
L_001B8FA0:;
SET32(3, RW(16) << 2);
L_001B8FA4:;
SET32(3, RW(3) + RW(17));
SET64(5, (s32)rd32(c, (RW(3) + 280)));
if (RD(5) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_001B903C; }
SET64(4, rd16(c, (RW(5) + 1046)));
SET32(3, RW(0) + 32);
{ int t = RD(4) != RD(3);  if (t) goto L_001B9038; }
SET64(4, (s32)rd32(c, (RW(5) + 4144)));
SET64(31, 0x1b8fd0); SET32(5, RW(0) + 1); F_00344910(c);
 goto L_001B9038;
L_001B8FD8:;
SET32(3, RW(5) << 2);
SET32(3, RW(3) + RW(17));
SET64(5, (s32)rd32(c, (RW(3) + 280)));
if (RD(5) == RD(0)) { SET32(3, RW(16) << 2); goto L_001B900C; }
SET64(4, rd16(c, (RW(5) + 1046)));
SET32(3, RW(0) + 32);
{ int t = RD(4) != RD(3);  if (t) goto L_001B9008; }
SET64(4, (s32)rd32(c, (RW(5) + 4144)));
SET64(31, 0x1b9008); SET32(5, RW(0) + 1); F_00344910(c);
L_001B9008:;
SET32(3, RW(16) << 2);
L_001B900C:;
SET32(3, RW(3) + RW(17));
SET64(5, (s32)rd32(c, (RW(3) + 280)));
{ int t = RD(5) == RD(0);  if (t) goto L_001B9038; }
SET64(4, rd16(c, (RW(5) + 1046)));
SET32(3, RW(0) + 32);
{ int t = RD(4) != RD(3);  if (t) goto L_001B9038; }
SET64(4, (s32)rd32(c, (RW(5) + 4144)));
SET64(31, 0x1b9038); SET32(5, RW(0) + 1); F_00344910(c);
L_001B9038:;
SET64(31, rd64(c, (RW(29) + 32)));
L_001B903C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void F_001B8F30(Ctx *c) { B_001B8F30(c, 0x1b8f30); }
void F_001B8F70(Ctx *c) { B_001B8F30(c, 0x1b8f70); }
void F_001B8FD8(Ctx *c) { B_001B8F30(c, 0x1b8fd8); }
void F_001B9038(Ctx *c) { B_001B8F30(c, 0x1b9038); }

void F_001B9050(Ctx *c) { /* func_001B9050 */
ENTER(0x1b9050);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x520000);
wr64(c, (RW(29) + 48), RD(31));
c->f[0].u = RW(0);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[1].u = rd32(c, (RW(4) + 1764));
c->f[4].u = rd32(c, (RW(2) + 14864));
c->f[1].f = fpu(F(1) * F(4));
c->fcc = F(1) <= F(0);
{ int t = c->fcc; SET64(18, RD(4) + RD(0)); if (t) goto L_001B9090; }
c->f[0].u = rd32(c, (RW(18) + 1768));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(18) + 1768), c->f[0].u);
L_001B9090:;
c->f[0].u = rd32(c, (RW(18) + 1760));
c->f[3].u = RW(0);
c->f[1].f = fpu(F(0) + F(1));
c->fcc = F(1) <= F(3);
{ int t = !c->fcc; wr32(c, (RW(18) + 1760), c->f[1].u); if (t) goto L_001B90B4; }
wr32(c, (RW(18) + 1760), c->f[3].u);
wr32(c, (RW(18) + 1764), c->f[3].u); goto L_001B9150;
L_001B90B4:;
SET64(2, (s64)(s32)0x42480000);
c->f[0].u = RW(2);
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(2, rd16(c, (RW(18) + 134))); goto L_001B9154; }
SET64(2, (s64)(s32)0x42200000);
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_001B910C; }
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x40000000);
c->f[1].u = rd32(c, (RW(2) + -32168));
c->f[2].u = RW(3);
c->f[0].u = rd32(c, (RW(18) + 1764));
c->f[1].f = fpu(F(2) * F(1));
c->facc = fpu(F(3) + F(0));
c->f[0].f = fpu(c->facc - F(1) * F(4));
wr32(c, (RW(18) + 1764), c->f[0].u); goto L_001B9130;
L_001B910C:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x3fc00000);
c->f[1].u = rd32(c, (RW(2) + -32168));
c->f[2].u = RW(3);
c->f[0].u = rd32(c, (RW(18) + 1764));
c->f[1].f = fpu(F(2) * F(1));
c->facc = fpu(F(3) + F(0));
c->f[0].f = fpu(c->facc - F(1) * F(4));
wr32(c, (RW(18) + 1764), c->f[0].u);
L_001B9130:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
c->f[0].u = rd32(c, (RW(2) + -32152));
c->f[1].u = rd32(c, (RW(18) + 1764));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; c->f[2].u = rd32(c, (RW(3) + -32152)); if (t) goto L_001B9150; }
wr32(c, (RW(18) + 1764), c->f[2].u);
L_001B9150:;
SET64(2, rd16(c, (RW(18) + 134)));
L_001B9154:;
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001B9198; }
SET64(16, RD(0) + RD(0));
L_001B9160:;
SET64(2, (s32)rd32(c, (RW(18) + 104)));
c->f[0].u = rd32(c, (RW(18) + 1760));
SET32(5, RW(28) + -32036);
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 20), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 104)));
SET64(31, 0x1b9180); SET32(4, RW(2) + RW(16)); F_001CA560(c);
SET64(2, rd16(c, (RW(18) + 134)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 28); if (t) { POLL(); goto L_001B9160; } }
L_001B9198:;
SET64(2, (s32)rd32(c, (RW(18) + 80)));
c->f[0].u = rd32(c, (RW(18) + 1760));
wr32(c, (RW(2) + 112), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(18) + 80)));
SET64(31, 0x1b91b0); SET32(5, RW(28) + -32032); F_0015C070(c);
SET64(2, (s64)(s32)0x520000);
SET64(3, (s32)rd32(c, (RW(18) + 412)));
c->f[12].u = rd32(c, (RW(2) + 14864));
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(18));
SET64(2, (s32)rd32(c, (RW(2) + 280)));
SET64(31, 0x1b91d0); SET32(4, RW(2) + 128); F_001E7BF0(c);
SET64(2, (s32)rd32(c, (RW(18) + 412)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(18));
SET64(2, (s32)rd32(c, (RW(2) + 280)));
SET32(3, RW(2) + 832);
SET64(2, (s32)rd32(c, (RW(2) + 860)));
SET64(2, rd16(c, (RW(2) + 16)));
{ int t = RD(2) == RD(0); c->f[0].u = rd32(c, (RW(18) + 1760)); if (t) goto L_001B9204; }
SET64(2, (s32)rd32(c, (RW(3) + 68)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 204))); goto L_001B9208; }
wr32(c, (RW(2) + 28), c->f[0].u);
L_001B9204:;
SET64(4, (s32)rd32(c, (RW(18) + 204)));
L_001B9208:;
SET32(5, RW(28) + -32028);
SET64(31, 0x1b9214); SET64(6, RD(0) + RD(0)); F_0019C400(c);
c->f[1].u = rd32(c, (RW(18) + 1760));
SET64(2, (s64)(s32)0x42200000);
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
{ int t = c->fcc; SET64(16, RD(0) + RD(0)); if (t) goto L_001B9238; }
SET32(16, RW(0) + 3); goto L_001B9270;
L_001B9238:;
SET64(2, (s64)(s32)0x41f00000);
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(2, (s64)(s32)0x41a00000); goto L_001B9258; }
SET32(16, RW(0) + 2); goto L_001B9270;
L_001B9258:;
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(2, (s32)rd32(c, (RW(18) + 412))); goto L_001B9274; }
SET32(16, RW(0) + 1);
L_001B9270:;
SET64(2, (s32)rd32(c, (RW(18) + 412)));
L_001B9274:;
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(18));
SET64(2, (s32)rd32(c, (RW(2) + 280)));
SET64(31, 0x1b928c); SET32(4, RW(2) + 128); F_001E5100(c);
SET64(2, (s32)rd32(c, (RW(18) + 412)));
SET64(6, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(18));
SET64(2, (s32)rd32(c, (RW(2) + 280)));
SET64(31, 0x1b92ac); SET32(4, RW(2) + 128); F_001E51A0(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_001B92D0(Ctx *c) { /* func_001B92D0 */
ENTER(0x1b92d0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(19, (s32)rd32(c, (RW(4) + 212)));
{ int t = RD(19) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001B9574; }
SET64(2, rd16(c, (RW(16) + 432)));
SET32(2, RSW(2) >> 1);
SET64(18, RD(2) & 0x3);
SET64(17, RD(18) & 0x1);
if (RD(17) == RD(0)) { wr32(c, (RW(19) + 172), RW(0)); goto L_001B9344; }
SET32(2, RSW(18) >> 1);
SET32(2, RW(2) + 1);
SET64(3, RD(2) & 0xffff);
SET32(2, RW(3) << 3);
SET32(3, RW(2) - RW(3));
SET32(2, RW(3) << 2);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 2);
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(19) + 172), c->f[0].u);
L_001B9344:;
wr32(c, (RW(19) + 176), RW(0));
SET64(2, (s64)(s32)0x42a60000);
wr32(c, (RW(19) + 164), RW(2));
SET64(4, RD(19) + RD(0));
SET64(2, (s64)(s32)0x42d00000);
wr32(c, (RW(19) + 168), RW(2));
c->f[1].u = rd32(c, (RW(19) + 172));
SET64(2, (s64)(s32)0x4b7f0000);
c->f[0].u = rd32(c, (RW(19) + 164));
SET64(2, RD(2) | 0xff00);
c->f[12].u = RW(2);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(19) + 180), c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 176));
c->f[0].u = rd32(c, (RW(19) + 168));
c->f[0].f = fpu(F(1) + F(0));
SET64(31, 0x1b938c); wr32(c, (RW(19) + 184), c->f[0].u); F_0014E7A0(c);
SET64(31, 0x1b9394); SET64(4, RD(19) + RD(0)); F_0014E900(c);
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1b93a4); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 212)));
{ int t = RD(17) == RD(0); SET32(19, RW(2) + 384); if (t) goto L_001B93C0; }
SET64(2, (s64)(s32)0x42d20000);
c->f[0].u = RW(2);
wr32(c, (RW(19) + 172), c->f[0].u); goto L_001B93CC;
L_001B93C0:;
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
wr32(c, (RW(19) + 172), c->f[0].u);
L_001B93CC:;
SET64(2, (s64)(s32)0x42d20000);
wr32(c, (RW(19) + 176), RW(2));
SET64(4, RD(19) + RD(0));
SET64(2, (s64)(s32)0x42d00000);
wr32(c, (RW(19) + 164), RW(2));
SET64(2, (s64)(s32)0x42be0000);
wr32(c, (RW(19) + 168), RW(2));
c->f[1].u = rd32(c, (RW(19) + 172));
SET64(2, (s64)(s32)0x4b7f0000);
c->f[0].u = rd32(c, (RW(19) + 164));
SET64(2, RD(2) | 0xff00);
c->f[12].u = RW(2);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(19) + 180), c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 176));
c->f[0].u = rd32(c, (RW(19) + 168));
c->f[0].f = fpu(F(1) + F(0));
SET64(31, 0x1b9418); wr32(c, (RW(19) + 184), c->f[0].u); F_0014E7A0(c);
SET64(31, 0x1b9420); SET64(4, RD(19) + RD(0)); F_0014E900(c);
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1b9430); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
if (RD(20) == RD(0)) { SET64(3, rd16(c, (RW(16) + 432))); goto L_001B956C; }
SET64(2, (s32)rd32(c, (RW(16) + 212)));
{ int t = RD(17) == RD(0); SET32(19, RW(2) + 768); if (t) goto L_001B9478; }
SET32(2, RSW(18) >> 1);
SET32(2, RW(2) + 1);
SET64(3, RD(2) & 0xffff);
SET32(2, RW(3) << 3);
SET32(3, RW(2) - RW(3));
SET32(2, RW(3) << 2);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 2);
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(19) + 172), c->f[0].u); goto L_001B947C;
L_001B9478:;
wr32(c, (RW(19) + 172), RW(0));
L_001B947C:;
wr32(c, (RW(19) + 176), RW(0));
SET64(2, (s64)(s32)0x42a60000);
wr32(c, (RW(19) + 164), RW(2));
SET64(4, RD(19) + RD(0));
SET64(2, (s64)(s32)0x42d00000);
wr32(c, (RW(19) + 168), RW(2));
c->f[1].u = rd32(c, (RW(19) + 172));
SET64(2, (s64)(s32)0x4b7f0000);
c->f[0].u = rd32(c, (RW(19) + 164));
SET64(2, RD(2) | 0xff00);
c->f[12].u = RW(2);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(19) + 180), c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 176));
c->f[0].u = rd32(c, (RW(19) + 168));
c->f[0].f = fpu(F(1) + F(0));
SET64(31, 0x1b94c4); wr32(c, (RW(19) + 184), c->f[0].u); F_0014E7A0(c);
SET64(31, 0x1b94cc); SET64(4, RD(19) + RD(0)); F_0014E900(c);
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1b94dc); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 212)));
{ int t = RD(17) == RD(0); SET32(18, RW(2) + 1152); if (t) goto L_001B94F8; }
SET64(2, (s64)(s32)0x42d20000);
c->f[0].u = RW(2);
wr32(c, (RW(18) + 172), c->f[0].u); goto L_001B9504;
L_001B94F8:;
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
wr32(c, (RW(18) + 172), c->f[0].u);
L_001B9504:;
SET64(2, (s64)(s32)0x42d20000);
wr32(c, (RW(18) + 176), RW(2));
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x42d00000);
wr32(c, (RW(18) + 164), RW(2));
SET64(2, (s64)(s32)0x42be0000);
wr32(c, (RW(18) + 168), RW(2));
c->f[1].u = rd32(c, (RW(18) + 172));
SET64(2, (s64)(s32)0x4b7f0000);
c->f[0].u = rd32(c, (RW(18) + 164));
SET64(2, RD(2) | 0xff00);
c->f[12].u = RW(2);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(18) + 180), c->f[0].u);
c->f[1].u = rd32(c, (RW(18) + 176));
c->f[0].u = rd32(c, (RW(18) + 168));
c->f[0].f = fpu(F(1) + F(0));
SET64(31, 0x1b9550); wr32(c, (RW(18) + 184), c->f[0].u); F_0014E7A0(c);
SET64(31, 0x1b9558); SET64(4, RD(18) + RD(0)); F_0014E900(c);
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1b9568); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 432)));
L_001B956C:;
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 432), (u16)RW(3));
L_001B9574:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

static void B_001B95A0(Ctx *c, u32 entry) { /* func_001B95A0 */
ENTER(entry);
switch (entry) { case 0x1b9610: goto L_001B9610; case 0x1b967c: goto L_001B967C; case 0x1b96ec: goto L_001B96EC; case 0x1b975c: goto L_001B975C; case 0x1b97cc: goto L_001B97CC; case 0x1b9820: goto L_001B9820; case 0x1b9888: goto L_001B9888; case 0x1b98d4: goto L_001B98D4; case 0x1b992c: goto L_001B992C; case 0x1b9998: goto L_001B9998; }
L_001B95A0:;
SET32(29, RW(29) + -208);
SET64(3, (s64)(s32)0x43000000);
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s64)(s32)0x424c0000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(6) + 164), RW(3));
SET64(16, RD(6) + RD(0));
{ int t = RD(7) == RD(0); wr32(c, (RW(6) + 168), RW(2)); if (t) goto L_001B95CC; }
SET64(9, RD(0) + RD(0)); goto L_001B95D0;
L_001B95CC:;
SET32(9, RW(0) + 1);
L_001B95D0:;
SET32(4, RW(0) + 288);
SET32(8, RW(0) + 128);
SET32(6, RW(0) + 384);
SET64(1, RD(5) < (u64)(s64)10);
wr32(c, (RW(29) + 200), RW(8));
wr32(c, (RW(29) + 192), RW(4));
wr32(c, (RW(29) + 204), RW(6));
{ int t = RD(1) == RD(0); wr32(c, (RW(29) + 196), RW(4)); if (t) goto L_001B99E0; }
SET64(3, (s64)(s32)0x4b0000);
SET32(2, RW(5) << 2);
SET32(3, RW(3) + -31984);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x1b95a0: goto L_001B95A0; case 0x1b9610: goto L_001B9610; case 0x1b967c: goto L_001B967C; case 0x1b96ec: goto L_001B96EC; case 0x1b975c: goto L_001B975C; case 0x1b97cc: goto L_001B97CC; case 0x1b9820: goto L_001B9820; case 0x1b9888: goto L_001B9888; case 0x1b98d4: goto L_001B98D4; case 0x1b992c: goto L_001B992C; case 0x1b9998: goto L_001B9998; default: rt_jump(c, t); return; } }
L_001B9610:;
c->f[0].u = RW(4);
wr32(c, (RW(16) + 172), RW(0));
c->f[1].f = (f32)(s32)c->f[0].u;
SET64(3, (s64)(s32)0x40000000);
wr32(c, (RW(16) + 176), RW(0));
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 176);
c->f[2].u = RW(0);
c->facc = fpu(F(2) + F(1));
c->f[1].u = rd32(c, (RW(16) + 164));
c->f[3].u = RW(3);
c->f[2].u = rd32(c, (RW(16) + 168));
c->f[1].f = fpu_div(F(1), F(3));
wr32(c, (RW(29) + 188), RW(2));
wr32(c, (RW(29) + 184), RW(0));
c->f[0].u = RW(8);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) - F(1));
c->f[2].f = fpu(c->facc - F(3) * F(2));
wr32(c, (RW(29) + 180), c->f[2].u);
SET64(31, 0x1b9674); wr32(c, (RW(29) + 176), c->f[0].u); F_0014E770(c);
c->f[1].u = rd32(c, (RW(16) + 172)); goto L_001B99E4;
L_001B967C:;
c->f[0].u = RW(4);
SET64(2, (s64)(s32)0x43000000);
c->f[1].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(16) + 172), RW(2));
SET64(3, (s64)(s32)0x40000000);
wr32(c, (RW(16) + 176), RW(0));
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 160);
c->f[2].u = RW(0);
c->facc = fpu(F(2) + F(1));
c->f[1].u = rd32(c, (RW(16) + 164));
c->f[3].u = RW(3);
c->f[2].u = rd32(c, (RW(16) + 168));
c->f[1].f = fpu_div(F(1), F(3));
wr32(c, (RW(29) + 172), RW(2));
wr32(c, (RW(29) + 168), RW(0));
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) - F(1));
c->f[2].f = fpu(c->facc - F(3) * F(2));
wr32(c, (RW(29) + 164), c->f[2].u);
SET64(31, 0x1b96e4); wr32(c, (RW(29) + 160), c->f[0].u); F_0014E770(c);
 goto L_001B99E0;
L_001B96EC:;
SET32(2, RW(7) << 2);
wr32(c, (RW(16) + 172), RW(0));
SET32(3, RW(2) + RW(29));
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x434c0000);
SET32(5, RW(29) + 144);
wr32(c, (RW(16) + 176), RW(2));
c->f[4].u = rd32(c, (RW(3) + 192));
SET64(2, (s64)(s32)0x43800000);
wr32(c, (RW(16) + 164), RW(2));
c->f[0].u = rd32(c, (RW(3) + 200));
c->f[2].u = rd32(c, (RW(16) + 164));
SET64(2, (s64)(s32)0x40000000);
c->f[1].u = RW(2);
c->f[3].u = rd32(c, (RW(16) + 168));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].f = fpu_div(F(2), F(1));
wr32(c, (RW(29) + 156), RW(2));
wr32(c, (RW(29) + 152), RW(0));
c->f[4].f = (f32)(s32)c->f[4].u;
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[3].f = fpu(F(4) - F(3));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(29) + 148), c->f[3].u);
SET64(31, 0x1b9754); wr32(c, (RW(29) + 144), c->f[0].u); F_0014E770(c);
 goto L_001B99E0;
L_001B975C:;
SET32(2, RW(9) << 2);
wr32(c, (RW(16) + 172), RW(0));
SET32(3, RW(2) + RW(29));
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x434c0000);
SET32(5, RW(29) + 128);
wr32(c, (RW(16) + 176), RW(2));
c->f[4].u = rd32(c, (RW(3) + 192));
SET64(2, (s64)(s32)0x43800000);
wr32(c, (RW(16) + 164), RW(2));
c->f[0].u = rd32(c, (RW(3) + 200));
c->f[2].u = rd32(c, (RW(16) + 164));
SET64(2, (s64)(s32)0x40000000);
c->f[1].u = RW(2);
c->f[3].u = rd32(c, (RW(16) + 168));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].f = fpu_div(F(2), F(1));
wr32(c, (RW(29) + 140), RW(2));
wr32(c, (RW(29) + 136), RW(0));
c->f[4].f = (f32)(s32)c->f[4].u;
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[3].f = fpu(F(4) - F(3));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(29) + 132), c->f[3].u);
SET64(31, 0x1b97c4); wr32(c, (RW(29) + 128), c->f[0].u); F_0014E770(c);
 goto L_001B99E0;
L_001B97CC:;
SET32(2, RW(7) << 2);
wr32(c, (RW(16) + 172), RW(0));
SET32(3, RW(2) + RW(29));
SET64(4, RD(16) + RD(0));
c->f[2].u = rd32(c, (RW(3) + 200));
SET64(2, (s64)(s32)0x424c0000);
wr32(c, (RW(16) + 176), RW(2));
c->f[0].u = rd32(c, (RW(3) + 192));
c->f[1].u = rd32(c, (RW(16) + 164));
SET64(2, (s64)(s32)0x3f800000);
c->f[2].f = (f32)(s32)c->f[2].u;
SET32(5, RW(29) + 112);
wr32(c, (RW(29) + 124), RW(2));
wr32(c, (RW(29) + 120), RW(0));
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(2) - F(1));
wr32(c, (RW(29) + 112), c->f[1].u);
SET64(31, 0x1b9818); wr32(c, (RW(29) + 116), c->f[0].u); F_0014E770(c);
 goto L_001B99E0;
L_001B9820:;
SET32(2, RW(7) << 2);
wr32(c, (RW(16) + 172), RW(0));
SET32(3, RW(2) + RW(29));
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x42cc0000);
SET32(5, RW(29) + 96);
wr32(c, (RW(16) + 176), RW(2));
c->f[4].u = rd32(c, (RW(3) + 192));
c->f[2].u = rd32(c, (RW(16) + 164));
SET64(2, (s64)(s32)0x40000000);
c->f[1].u = RW(2);
c->f[0].u = rd32(c, (RW(3) + 200));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].f = fpu_div(F(2), F(1));
c->f[3].u = rd32(c, (RW(16) + 168));
c->f[4].f = (f32)(s32)c->f[4].u;
wr32(c, (RW(29) + 108), RW(2));
wr32(c, (RW(29) + 104), RW(0));
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[3].f = fpu(F(4) + F(3));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(29) + 100), c->f[3].u);
SET64(31, 0x1b9880); wr32(c, (RW(29) + 96), c->f[0].u); F_0014E770(c);
 goto L_001B99E0;
L_001B9888:;
SET32(2, RW(7) << 2);
wr32(c, (RW(16) + 172), RW(0));
SET32(3, RW(2) + RW(29));
SET64(4, RD(16) + RD(0));
c->f[1].u = rd32(c, (RW(3) + 200));
SET64(2, (s64)(s32)0x43190000);
c->f[0].u = rd32(c, (RW(3) + 192));
wr32(c, (RW(16) + 176), RW(2));
SET64(2, (s64)(s32)0x3f800000);
SET32(5, RW(29) + 80);
c->f[1].f = (f32)(s32)c->f[1].u;
wr32(c, (RW(29) + 92), RW(2));
wr32(c, (RW(29) + 88), RW(0));
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 80), c->f[1].u);
SET64(31, 0x1b98cc); wr32(c, (RW(29) + 84), c->f[0].u); F_0014E770(c);
 goto L_001B99E0;
L_001B98D4:;
SET64(3, (s64)(s32)0x43000000);
SET32(2, RW(9) << 2);
wr32(c, (RW(16) + 172), RW(3));
SET64(4, RD(16) + RD(0));
SET32(3, RW(2) + RW(29));
SET32(5, RW(29) + 64);
c->f[2].u = rd32(c, (RW(3) + 200));
SET64(2, (s64)(s32)0x424c0000);
wr32(c, (RW(16) + 176), RW(2));
c->f[0].u = rd32(c, (RW(3) + 192));
c->f[1].u = rd32(c, (RW(16) + 164));
SET64(2, (s64)(s32)0x3f800000);
c->f[2].f = (f32)(s32)c->f[2].u;
wr32(c, (RW(29) + 76), RW(2));
wr32(c, (RW(29) + 72), RW(0));
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(2) - F(1));
wr32(c, (RW(29) + 64), c->f[1].u);
SET64(31, 0x1b9924); wr32(c, (RW(29) + 68), c->f[0].u); F_0014E770(c);
 goto L_001B99E0;
L_001B992C:;
SET64(3, (s64)(s32)0x43000000);
SET32(2, RW(9) << 2);
wr32(c, (RW(16) + 172), RW(3));
SET64(4, RD(16) + RD(0));
SET32(3, RW(2) + RW(29));
SET32(5, RW(29) + 48);
c->f[2].u = rd32(c, (RW(3) + 192));
SET64(2, (s64)(s32)0x42cc0000);
wr32(c, (RW(16) + 176), RW(2));
c->f[0].u = rd32(c, (RW(3) + 200));
SET64(2, (s64)(s32)0x40000000);
c->f[4].f = (f32)(s32)c->f[2].u;
c->f[2].u = rd32(c, (RW(16) + 164));
c->f[1].u = RW(2);
c->f[3].u = rd32(c, (RW(16) + 168));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].f = fpu_div(F(2), F(1));
wr32(c, (RW(29) + 60), RW(2));
wr32(c, (RW(29) + 56), RW(0));
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[3].f = fpu(F(4) + F(3));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(29) + 52), c->f[3].u);
SET64(31, 0x1b9990); wr32(c, (RW(29) + 48), c->f[0].u); F_0014E770(c);
 goto L_001B99E0;
L_001B9998:;
SET64(3, (s64)(s32)0x43000000);
SET32(2, RW(9) << 2);
wr32(c, (RW(16) + 172), RW(3));
SET64(4, RD(16) + RD(0));
SET32(3, RW(2) + RW(29));
SET32(5, RW(29) + 32);
c->f[0].u = rd32(c, (RW(3) + 200));
SET64(2, (s64)(s32)0x43190000);
wr32(c, (RW(16) + 176), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 40), RW(0));
c->f[1].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 44), RW(2));
c->f[0].u = rd32(c, (RW(3) + 192));
wr32(c, (RW(29) + 32), c->f[1].u);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(31, 0x1b99e0); wr32(c, (RW(29) + 36), c->f[0].u); F_0014E770(c);
L_001B99E0:;
c->f[1].u = rd32(c, (RW(16) + 172));
L_001B99E4:;
c->f[0].u = rd32(c, (RW(16) + 164));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 180), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 176));
c->f[0].u = rd32(c, (RW(16) + 168));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 184), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1b9a10); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 208); return;
}
void F_001B95A0(Ctx *c) { B_001B95A0(c, 0x1b95a0); }
void F_001B9610(Ctx *c) { B_001B95A0(c, 0x1b9610); }
void F_001B967C(Ctx *c) { B_001B95A0(c, 0x1b967c); }
void F_001B96EC(Ctx *c) { B_001B95A0(c, 0x1b96ec); }
void F_001B975C(Ctx *c) { B_001B95A0(c, 0x1b975c); }
void F_001B97CC(Ctx *c) { B_001B95A0(c, 0x1b97cc); }
void F_001B9820(Ctx *c) { B_001B95A0(c, 0x1b9820); }
void F_001B9888(Ctx *c) { B_001B95A0(c, 0x1b9888); }
void F_001B98D4(Ctx *c) { B_001B95A0(c, 0x1b98d4); }
void F_001B992C(Ctx *c) { B_001B95A0(c, 0x1b992c); }
void F_001B9998(Ctx *c) { B_001B95A0(c, 0x1b9998); }

void F_001B9A20(Ctx *c) { /* func_001B9A20 */
ENTER(0x1b9a20);
SET32(29, RW(29) + -176);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(3) == RD(2); SET64(18, RD(4) + RD(0)); if (t) goto L_001B9D00; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET32(16, RW(0) + 1); goto L_001B9D04; }
SET32(2, RW(3) + 1);
SET64(17, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(18) + 268)));
SET32(16, RW(2) << 1);
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(19, (s32)rd32(c, (RW(3) + 12)));
SET32(2, RW(2) << 7);
SET64(31, 0x1b9a84); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_001B9AB4; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET32(17, RW(0) + 1);
SET64(4, RD(20) + RD(0));
SET32(5, RW(5) + -7168);
SET32(6, RW(6) + -7552);
SET32(7, RW(0) + 384);
SET64(31, 0x1b9ab0); SET64(8, RD(16) + RD(0)); F_00102580(c);
SET64(20, RD(2) + RD(0));
L_001B9AB4:;
wr32(c, (RW(18) + 212), RW(20));
SET64(17, RD(0) + RD(0));
{ int t = RSD(16) <= 0; wr32(c, (RW(18) + 1780), RW(16)); if (t) goto L_001B9DC8; }
SET64(20, RD(0) + RD(0));
L_001B9AC8:;
SET64(2, (s32)rd32(c, (RW(18) + 212)));
SET32(4, RW(2) + RW(20));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1b9ae0);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 212)));
SET32(2, RW(0) + 3);
SET32(3, RW(3) + RW(20));
{ int t = RD(17) == RD(2); wr32(c, (RW(3) + 160), RW(19)); if (t) goto L_001B9BC0; }
SET32(2, RW(0) + 1);
{ int t = RD(17) == RD(2);  if (t) goto L_001B9B88; }
SET32(2, RW(0) + 2);
{ int t = RD(17) == RD(2);  if (t) goto L_001B9B58; }
{ int t = RD(17) == RD(0);  if (t) goto L_001B9B20; }
 goto L_001B9BF0;
L_001B9B20:;
SET64(2, (s64)(s32)0x439e0000);
wr32(c, (RW(29) + 160), RW(2));
SET64(3, (s64)(s32)0x43a00000);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 168), RW(0));
wr32(c, (RW(29) + 164), RW(3));
SET32(5, RW(29) + 160);
wr32(c, (RW(29) + 172), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 212)));
SET64(31, 0x1b9b4c); SET32(4, RW(2) + RW(20)); F_0014E770(c);
 goto L_001B9BF0;
L_001B9B58:;
SET64(2, (s64)(s32)0x43a80000);
wr32(c, (RW(29) + 148), RW(2));
SET32(5, RW(29) + 144);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 156), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 212)));
SET64(31, 0x1b9b80); SET32(4, RW(2) + RW(20)); F_0014E770(c);
 goto L_001B9BF0;
L_001B9B88:;
SET64(2, (s64)(s32)0x43c00000);
wr32(c, (RW(29) + 128), RW(2));
SET32(5, RW(29) + 128);
SET64(2, (s64)(s32)0x43a20000);
wr32(c, (RW(29) + 132), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 136), RW(2));
wr32(c, (RW(29) + 140), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 212)));
SET64(31, 0x1b9bb4); SET32(4, RW(2) + RW(20)); F_0014E770(c);
 goto L_001B9BF0;
L_001B9BC0:;
SET64(2, (s64)(s32)0x428a0000);
wr32(c, (RW(29) + 112), RW(2));
SET32(5, RW(29) + 112);
SET64(2, (s64)(s32)0x43a20000);
wr32(c, (RW(29) + 116), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 120), RW(2));
wr32(c, (RW(29) + 124), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 212)));
SET64(31, 0x1b9bec); SET32(4, RW(2) + RW(20)); F_0014E770(c);
L_001B9BF0:;
SET64(2, RD(17) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_001B9C78; }
SET64(7, (s32)rd32(c, (RW(18) + 212)));
SET64(2, (s64)(s32)0x4b7f0000);
SET64(2, RD(2) | 0xff00);
SET64(6, (s64)(s32)0x3f800000);
SET64(4, (s64)(s32)0x42d20000);
SET64(5, (s64)(s32)0x42d00000);
SET32(21, RW(7) + RW(20));
SET64(3, (s64)(s32)0x42be0000);
wr32(c, (RW(21) + 172), RW(6));
c->f[12].u = RW(2);
wr32(c, (RW(21) + 176), RW(4));
wr32(c, (RW(21) + 164), RW(5));
SET64(4, RD(21) + RD(0));
wr32(c, (RW(21) + 168), RW(3));
c->f[1].u = rd32(c, (RW(21) + 172));
c->f[0].u = rd32(c, (RW(21) + 164));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(21) + 180), c->f[0].u);
c->f[1].u = rd32(c, (RW(21) + 176));
c->f[0].u = rd32(c, (RW(21) + 168));
c->f[0].f = fpu(F(1) + F(0));
SET64(31, 0x1b9c58); wr32(c, (RW(21) + 184), c->f[0].u); F_0014E7A0(c);
SET64(31, 0x1b9c60); SET64(4, RD(21) + RD(0)); F_0014E900(c);
SET64(25, (s32)rd32(c, (RW(21) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1b9c70); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
 goto L_001B9CE8;
L_001B9C78:;
SET64(4, (s32)rd32(c, (RW(18) + 212)));
SET64(2, (s64)(s32)0x4b7f0000);
SET64(5, (s64)(s32)0x42a60000);
SET64(2, RD(2) | 0xff00);
SET64(3, (s64)(s32)0x42d00000);
SET32(21, RW(4) + RW(20));
wr32(c, (RW(21) + 172), RW(0));
c->f[12].u = RW(2);
wr32(c, (RW(21) + 176), RW(0));
SET64(4, RD(21) + RD(0));
wr32(c, (RW(21) + 164), RW(5));
wr32(c, (RW(21) + 168), RW(3));
c->f[1].u = rd32(c, (RW(21) + 172));
c->f[0].u = rd32(c, (RW(21) + 164));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(21) + 180), c->f[0].u);
c->f[1].u = rd32(c, (RW(21) + 176));
c->f[0].u = rd32(c, (RW(21) + 168));
c->f[0].f = fpu(F(1) + F(0));
SET64(31, 0x1b9ccc); wr32(c, (RW(21) + 184), c->f[0].u); F_0014E7A0(c);
SET64(31, 0x1b9cd4); SET64(4, RD(21) + RD(0)); F_0014E900(c);
SET64(25, (s32)rd32(c, (RW(21) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1b9ce4); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
L_001B9CE8:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(16));
{ int t = RD(3) != RD(0); SET32(20, RW(20) + 384); if (t) { POLL(); goto L_001B9AC8; } }
 goto L_001B9DC8;
L_001B9D00:;
SET32(16, RW(0) + 1);
L_001B9D04:;
{ int t = RD(3) != RD(16);  if (t) goto L_001B9D10; }
SET64(16, RD(0) + RD(0));
L_001B9D10:;
SET32(19, RW(0) + 10);
SET64(2, RD(0) + (s64)20);
SET32(2, RW(2) + RW(19));
SET64(17, RD(0) + RD(0));
SET32(2, RW(2) << 7);
wr32(c, (RW(18) + 1780), RW(19));
SET64(31, 0x1b9d30); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_001B9D60; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(8, RD(19) + RD(0));
SET32(17, RW(0) + 1);
SET64(4, RD(20) + RD(0));
SET32(5, RW(5) + -7168);
SET32(6, RW(6) + -7552);
SET64(31, 0x1b9d5c); SET32(7, RW(0) + 384); F_00102580(c);
SET64(20, RD(2) + RD(0));
L_001B9D60:;
wr32(c, (RW(18) + 212), RW(20));
SET64(3, (s32)rd32(c, (RW(18) + 1780)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_001B9DC8; }
SET64(17, RD(0) + RD(0));
L_001B9D74:;
SET64(2, (s32)rd32(c, (RW(18) + 212)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1b9d8c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 212)));
SET64(4, RD(18) + RD(0));
SET64(3, (s32)rd32(c, (RW(18) + 1596)));
SET64(5, RD(19) + RD(0));
SET64(7, RD(16) + RD(0));
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 160), RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 212)));
SET64(31, 0x1b9db4); SET32(6, RW(2) + RW(17)); F_001B95A0(c);
SET64(3, (s32)rd32(c, (RW(18) + 1780)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_001B9D74; } }
L_001B9DC8:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void F_001B9DF0(Ctx *c) { /* func_001B9DF0 */
ENTER(0x1b9df0);
wr8(c, (RW(4) + 944), (u8)RW(5)); return;
}

void F_001B9E00(Ctx *c) { /* func_001B9E00 */
ENTER(0x1b9e00);
SET32(29, RW(29) + -96);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 44), RW(2));
c->f[1].u = rd32(c, (RW(28) + -32040));
SET64(2, (s64)(s32)0x4b0000);
wr32(c, (RW(29) + 32), RW(0));
rd128(c, (RW(2) + 10112) & ~15u, &c->r[3]);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 36), RW(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x41c00000);
wr32(c, (RW(29) + 40), c->f[1].u);
c->f[1].u = rd32(c, (RW(29) + 36));
c->f[0].u = RW(2);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 36), c->f[0].u);
rd128(c, (RW(29) + 32) & ~15u, &c->r[2]);
SET64(31, 0x1b9e58); wr128(c, (RW(29) + 64) & ~15u, &c->r[2]); F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET32(5, RW(0) + 1);
SET64(2, (s64)(s32)0x4b0000);
wr32(c, (RW(29) + 48), RW(0));
c->f[1].u = rd32(c, (RW(2) + 10088));
wr32(c, (RW(29) + 52), RW(0));
wr32(c, (RW(29) + 56), RW(0));
SET64(2, (s64)(s32)0x4b0000);
c->f[0].u = rd32(c, (RW(2) + 10092));
wr32(c, (RW(29) + 88), c->f[1].u);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 60), RW(2));
wr32(c, (RW(29) + 92), c->f[0].u);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
SET64(31, 0x1b9e98); wr128(c, (RW(29) + 48) & ~15u, &c->r[2]); F_0022ACB0(c);
SET64(10, (s32)rd32(c, (RW(16) + 84)));
SET64(8, RD(2) + RD(0));
SET32(4, RW(16) + 464);
SET32(5, RW(29) + 48);
SET32(6, RW(29) + 88);
SET32(7, RW(0) + 1);
SET64(9, RD(0) + RD(0));
SET64(31, 0x1b9ebc); SET64(11, RD(0) + RD(0)); F_002BB420(c);
SET64(25, (s32)rd32(c, (RW(16) + 1232)));
SET32(4, RW(16) + 464);
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x1b9ed0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1232)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x1b9ee0); SET32(4, RW(16) + 464); rt_call(c, t); }
SET32(3, RW(0) + 3);
wr32(c, (RW(16) + 1440), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

static void B_001B9F00(Ctx *c, u32 entry) { /* func_001B9F00 */
ENTER(entry);
switch (entry) { case 0x1b9f60: goto L_001B9F60; case 0x1b9f70: goto L_001B9F70; case 0x1b9fd4: goto L_001B9FD4; case 0x1ba0b0: goto L_001BA0B0; case 0x1ba700: goto L_001BA700; case 0x1ba7e4: goto L_001BA7E4; case 0x1ba844: goto L_001BA844; case 0x1ba880: goto L_001BA880; case 0x1ba900: goto L_001BA900; }
L_001B9F00:;
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(31, 0x1b9f34); wr32(c, (RW(29) + 0), c->f[20].u); F_001C39F0(c);
SET64(2, (s32)rd32(c, (RW(18) + 1620)));
SET64(1, RD(2) < (u64)(s64)9);
if (RD(1) == RD(0)) { SET32(2, RW(0) + 1); goto L_001BA904; }
SET64(3, (s64)(s32)0x4b0000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + -31936);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x1b9f00: goto L_001B9F00; case 0x1b9f60: goto L_001B9F60; case 0x1b9f70: goto L_001B9F70; case 0x1b9fd4: goto L_001B9FD4; case 0x1ba0b0: goto L_001BA0B0; case 0x1ba700: goto L_001BA700; case 0x1ba7e4: goto L_001BA7E4; case 0x1ba844: goto L_001BA844; case 0x1ba880: goto L_001BA880; case 0x1ba900: goto L_001BA900; default: rt_jump(c, t); return; } }
L_001B9F60:;
SET64(31, 0x1b9f68); SET64(4, RD(18) + RD(0)); F_001BA950(c);
SET32(2, RW(0) + 2);
wr32(c, (RW(18) + 1620), RW(2));
L_001B9F70:;
SET64(3, (s32)rd32(c, (RW(18) + 276)));
SET64(2, (s64)(s32)0x520000);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x1b9f84); c->f[12].u = rd32(c, (RW(2) + 14864)); F_00172DE0(c);
SET64(2, (s32)rd32(c, (RW(18) + 276)));
SET64(31, 0x1b9f90); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_00172D40(c);
if (RD(2) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_001B9FC4; }
SET32(2, RW(0) + 3);
wr32(c, (RW(18) + 1620), RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 208)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 1756), RW(0)); goto L_001B9FC0; }
SET64(5, rd16(c, (RW(28) + -32052)));
SET32(6, RW(0) + 127);
SET64(31, 0x1b9fbc); SET32(7, RW(0) + 64); F_001B5FF0(c);
wr32(c, (RW(18) + 1756), RW(0));
L_001B9FC0:;
SET64(4, RD(18) + RD(0));
L_001B9FC4:;
SET64(31, 0x1b9fcc);  F_001BAFB0(c);
 goto L_001BA900;
L_001B9FD4:;
c->f[1].u = rd32(c, (RW(18) + 1756));
SET64(2, (s64)(s32)0x3d4c0000);
c->f[2].u = rd32(c, (RW(17) + 0));
SET64(2, RD(2) | 0xcccd);
c->f[0].u = RW(0);
c->f[3].u = RW(2);
c->facc = fpu(F(0) + F(1));
c->f[12].f = fpu(c->facc + F(3) * F(2));
wr32(c, (RW(18) + 1756), c->f[12].u);
SET64(16, (s32)rd32(c, (RW(18) + 88)));
if (RD(16) == RD(0)) { SET64(2, (s64)(s32)0x3f4c0000); goto L_001BA028; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1ba010); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1ba024);  rt_call(c, t); }
SET64(2, (s64)(s32)0x3f4c0000);
L_001BA028:;
SET64(2, RD(2) | 0xcccd);
c->f[1].u = rd32(c, (RW(18) + 1756));
c->f[0].u = RW(2);
c->fcc = F(1) < F(0);
if (c->fcc) { SET64(4, RD(18) + RD(0)); goto L_001BA0A0; }
wr32(c, (RW(18) + 1756), RW(0));
SET32(2, RW(0) + 4);
wr32(c, (RW(18) + 1620), RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 208)));
if (RD(4) == RD(0)) { SET32(2, RW(0) + -1); goto L_001BA06C; }
SET64(5, rd16(c, (RW(28) + -32048)));
SET32(6, RW(0) + 127);
SET64(31, 0x1ba06c); SET32(7, RW(0) + 64); F_001B5FF0(c);
L_001BA06C:;
wr32(c, (RW(18) + 1772), RW(2));
SET32(5, RW(0) + 31);
SET64(3, (s32)rd32(c, (RW(18) + 412)));
SET64(2, (s64)(s32)0x10000);
SET32(6, RW(0) + 127);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(18));
SET64(3, (s32)rd32(c, (RW(3) + 280)));
SET32(2, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30860)));
SET64(31, 0x1ba09c); SET32(7, RW(0) + 64); F_001B5FF0(c);
SET64(4, RD(18) + RD(0));
L_001BA0A0:;
SET64(31, 0x1ba0a8);  F_001BAFB0(c);
 goto L_001BA900;
L_001BA0B0:;
SET64(31, 0x1ba0b8); SET64(4, RD(18) + RD(0)); F_001BAFB0(c);
c->f[0].u = rd32(c, (RW(18) + 1756));
c->f[1].u = rd32(c, (RW(18) + 1752));
c->fcc = F(1) <= F(0);
if (!c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_001BA0D8; }
SET32(2, RW(0) + 6);
wr32(c, (RW(18) + 1620), RW(2)); goto L_001BA900;
L_001BA0D8:;
SET64(2, (s64)(s32)0x3f4c0000);
SET64(2, RD(2) | 0xcccd);
SET64(16, (s32)rd32(c, (RW(18) + 88)));
c->f[1].f = fpu_div(F(0), F(1));
c->f[0].u = RW(2);
{ int t = RD(16) == RD(0); c->f[12].f = fpu(F(0) * F(1)); if (t) goto L_001BA118; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x1ba104); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1ba118);  rt_call(c, t); }
L_001BA118:;
c->f[1].u = rd32(c, (RW(18) + 1756));
SET64(2, (s32)rd32(c, (RW(18) + 412)));
c->f[0].u = rd32(c, (RW(18) + 1752));
c->f[20].f = fpu_div(F(1), F(0));
{ int t = RD(2) == RD(0);  if (t) goto L_001BA140; }
SET64(16, RD(0) + RD(0)); goto L_001BA144;
L_001BA140:;
SET32(16, RW(0) + 1);
L_001BA144:;
SET64(2, (s32)rd32(c, (RW(18) + 1744)));
SET64(4, RD(18) + RD(0));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(18));
SET64(6, (s32)rd32(c, (RW(2) + 1624)));
SET64(31, 0x1ba160); SET64(5, RD(16) + RD(0)); F_001BC620(c);
if (RD(2) == RD(0)) { SET32(2, RW(16) + 1); goto L_001BA304; }
SET32(2, RW(16) + 1);
SET64(1, RSD(2) < (s64)3);
if (RD(1) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1744))); goto L_001BA224; }
SET32(20, RW(2) << 4);
SET32(2, RW(20) + RW(18));
SET32(19, RW(2) + 1856);
SET64(2, (s32)rd32(c, (RW(2) + 1856)));
{ int t = RSD(2) < 0;  if (t) goto L_001BA220; }
SET64(31, 0x1ba198);  F_00139590(c);
SET64(31, 0x1ba1a0);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 20)));
SET64(2, (s32)rd32(c, (RW(19) + 0)));
if (RSD(2) < 0) { SET64(2, RD(0) + RD(0)); goto L_001BA1D8; }
SET32(3, RW(2) << 2);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
if (RD(4) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001BA1D4; }
SET64(31, 0x1ba1d4);  F_0029CF50(c);
L_001BA1D4:;
SET64(2, RD(2) & 0xff);
L_001BA1D8:;
SET64(2, RD(2) & 0xff);
if (RD(2) == RD(0)) { SET32(2, RW(20) + RW(18)); goto L_001BA218; }
SET64(31, 0x1ba1ec); SET64(19, (s32)rd32(c, (RW(19) + 0))); F_00139590(c);
SET64(31, 0x1ba1f4);  F_00139590(c);
{ int t = RSD(19) < 0; SET64(2, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_001BA214; }
SET64(2, (s32)rd32(c, (RW(2) + 4)));
SET32(3, RW(19) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1ba214); SET64(5, RD(0) + RD(0)); F_001B8080(c);
L_001BA214:;
SET32(2, RW(20) + RW(18));
L_001BA218:;
SET32(3, RW(0) + 3);
wr32(c, (RW(2) + 1864), RW(3));
L_001BA220:;
SET64(2, (s32)rd32(c, (RW(18) + 1744)));
L_001BA224:;
SET32(4, RW(18) + 464);
SET64(19, (s32)rd32(c, (RW(18) + 412)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(18));
SET64(2, (s32)rd32(c, (RW(2) + 1684)));
SET32(2, RW(2) + -307);
SET64(31, 0x1ba244); SET64(20, RD(2) & 0xffff); F_00143110(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1744))); goto L_001BA2E4; }
SET64(2, (s32)rd32(c, (RW(18) + 1440)));
{ int t = RD(19) != RD(2);  if (t) goto L_001BA2E0; }
SET32(2, RW(0) + 2);
wr32(c, (RW(18) + 1324), RW(2));
SET64(31, 0x1ba268); SET64(4, (s32)rd32(c, (RW(18) + 492))); F_001419B0(c);
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET64(5, RD(20) + RD(0)); goto L_001BA2A0; }
SET64(31, 0x1ba27c);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(25, (s32)rd32(c, (RW(18) + 1232))); goto L_001BA290; }
SET32(5, RW(5) + 672);
SET64(25, (s32)rd32(c, (RW(18) + 1232)));
L_001BA290:;
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x1ba29c); SET32(4, RW(18) + 464); rt_call(c, t); }
SET64(5, RD(20) + RD(0));
L_001BA2A0:;
SET32(4, RW(18) + 464);
SET32(6, RW(0) + 1);
SET64(31, 0x1ba2b0); wr32(c, (RW(18) + 1000), RW(0)); F_00144A60(c);
SET64(31, 0x1ba2b8); SET32(4, RW(18) + 464); F_00143100(c);
SET64(25, (s32)rd32(c, (RW(18) + 1232)));
SET32(4, RW(18) + 464);
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x1ba2cc); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 1232)));
SET32(4, RW(18) + 464);
SET64(25, (s32)rd32(c, (RW(25) + 380)));
{ u32 t = RW(25); SET64(31, 0x1ba2e0); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
L_001BA2E0:;
SET64(2, (s32)rd32(c, (RW(18) + 1744)));
L_001BA2E4:;
SET32(3, RW(2) + 1);
wr32(c, (RW(18) + 1744), RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 1748)));
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_001BA300; }
wr32(c, (RW(18) + 1744), RW(0));
L_001BA300:;
SET32(2, RW(16) + 1);
L_001BA304:;
SET64(1, RSD(2) < (s64)3);
{ int t = RD(1) == RD(0);  if (t) goto L_001BA368; }
SET32(2, RW(2) << 4);
SET32(2, RW(2) + RW(18));
SET32(16, RW(2) + 1856);
SET64(2, (s32)rd32(c, (RW(2) + 1856)));
{ int t = RSD(2) < 0;  if (t) goto L_001BA368; }
SET64(31, 0x1ba330);  F_00139590(c);
SET64(31, 0x1ba338);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 20)));
c->f[0].u = RW(0);
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3e190000);
SET64(2, RD(2) | 0x999a);
c->f[2].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = RW(2);
c->facc = fpu(F(0) + F(1));
SET64(31, 0x1ba368); c->f[12].f = fpu(c->facc - F(2) * F(20)); F_001B74B0(c);
L_001BA368:;
SET64(3, (s64)(s32)0x4b0000);
SET64(2, (s64)(s32)0x4b0000);
c->f[22].u = rd32(c, (RW(3) + 31152));
SET64(16, (s32)rd32(c, (RW(18) + 412)));
c->f[20].u = rd32(c, (RW(2) + -32160));
SET64(4, (s64)(s32)0x10000);
c->f[2].u = rd32(c, (RW(18) + 1764));
SET64(3, (s64)(s32)0x4b0000);
c->f[1].u = rd32(c, (RW(3) + -32160));
SET32(2, RW(16) << 2);
SET32(5, RW(2) + RW(18));
SET64(2, (s64)(s32)0x4b0000);
SET64(5, (s32)rd32(c, (RW(5) + 280)));
c->f[1].f = fpu_div(F(2), F(1));
SET32(4, RW(5) + RW(4));
SET64(20, (s32)rd32(c, (RW(4) + -30268)));
c->f[0].u = rd32(c, (RW(2) + 31160));
{ int t = RD(20) == RD(0); c->f[21].f = fpu(F(0) * F(1)); if (t) goto L_001BA3F0; }
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 188)));
{ u32 t = RW(25); SET64(31, 0x1ba3cc); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(19, RD(2) & 0xff);
c->f[12].u = c->f[22].u;
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 208)));
{ u32 t = RW(25); SET64(31, 0x1ba3e8); c->f[13].u = c->f[21].u; rt_call(c, t); }
c->f[2].u = rd32(c, (RW(18) + 424)); goto L_001BA484;
L_001BA3F0:;
SET64(31, 0x1ba3f8);  F_00138DE0(c);
SET64(5, RD(16) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x1ba408); SET64(5, RSD(5) >> 48); F_0013E020(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0xf0f0);
SET64(31, 0x1ba418); SET64(19, RD(0) < RD(2)); F_00138DE0(c);
SET64(5, (s32)rd32(c, (RW(18) + 412)));
SET64(31, 0x1ba424); SET64(4, RD(2) + RD(0)); F_0013E0E0(c);
SET64(4, (s64)(s32)0x437f0000);
SET64(3, (s64)(s32)0x4f000000);
c->f[0].u = RW(4);
c->f[1].f = fpu(F(0) * F(21));
c->f[0].u = RW(3);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_001BA45C; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(5, (s32)c->f[0].u);
SET64(5, RD(5) & 0xff); goto L_001BA474;
L_001BA45C:;
SET64(3, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
SET64(5, RD(5) | RD(3));
SET64(5, RD(5) & 0xff);
L_001BA474:;
SET64(4, RD(2) + RD(0));
SET64(31, 0x1ba480); c->f[12].u = c->f[22].u; F_0013E7B0(c);
c->f[2].u = rd32(c, (RW(18) + 424));
L_001BA484:;
c->f[1].u = rd32(c, (RW(17) + 0));
c->f[0].u = RW(0);
c->f[1].f = fpu(F(2) - F(1));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; wr32(c, (RW(18) + 424), c->f[1].u); if (t) goto L_001BA4B4; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x1ba4ac); SET64(5, RD(0) + RD(0)); F_001B92D0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(18) + 424), RW(2));
L_001BA4B4:;
SET64(4, (s32)rd32(c, (RW(28) + -30004)));
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_001BA4F4; }
SET64(3, rd16(c, (RW(18) + 412)));
SET64(5, RD(0) + RD(0));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(4) + RW(2));
SET64(31, 0x1ba4e8); SET32(4, RW(2) + 864); F_002EC550(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, rd16(c, (RW(3) + -30710)));
L_001BA4F4:;
SET64(16, RD(2) & 0xffff);
SET64(2, RSD(16) < (s64)3);
{ int t = RD(2) != RD(0);  if (t) goto L_001BA544; }
c->f[0].u = rd32(c, (RW(18) + 1760));
SET64(2, (s64)(s32)0x42200000);
c->f[2].u = RW(2);
c->fcc = F(0) <= F(2);
{ int t = c->fcc;  if (t) goto L_001BA544; }
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x41000000);
c->f[0].u = rd32(c, (RW(2) + -32152));
SET64(19, RD(0) + RD(0));
c->f[1].u = RW(3);
c->f[0].f = fpu_div(F(0), F(1));
wr32(c, (RW(18) + 1764), c->f[0].u);
wr32(c, (RW(18) + 1760), c->f[2].u);
L_001BA544:;
if (RD(19) == RD(0)) { c->f[0].u = rd32(c, (RW(18) + 1764)); goto L_001BA58C; }
SET64(2, (s64)(s32)0x4b0000);
c->f[1].u = rd32(c, (RW(2) + -32168));
c->f[2].u = rd32(c, (RW(18) + 1764));
c->f[0].u = RW(0);
SET64(2, (s64)(s32)0x4b0000);
c->f[1].f = fpu(F(2) + F(1));
wr32(c, (RW(18) + 1764), c->f[1].u);
c->f[3].u = rd32(c, (RW(2) + -32176));
c->f[2].u = rd32(c, (RW(17) + 0));
c->f[1].u = rd32(c, (RW(18) + 1764));
c->f[4].u = rd32(c, (RW(18) + 352));
c->f[2].f = fpu(F(3) * F(2));
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(4) * F(2));
wr32(c, (RW(18) + 1764), c->f[0].u);
c->f[0].u = rd32(c, (RW(18) + 1764));
L_001BA58C:;
c->fcc = F(0) <= F(20);
if (c->fcc) { c->f[0].u = rd32(c, (RW(17) + 0)); goto L_001BA5A0; }
wr32(c, (RW(18) + 1764), c->f[20].u);
c->f[0].u = rd32(c, (RW(17) + 0));
L_001BA5A0:;
SET64(4, RD(18) + RD(0));
c->f[1].u = rd32(c, (RW(18) + 1756));
c->f[0].f = fpu(F(1) + F(0));
SET64(31, 0x1ba5b4); wr32(c, (RW(18) + 1756), c->f[0].u); F_001B9050(c);
c->f[1].u = rd32(c, (RW(18) + 1760));
SET64(2, (s64)(s32)0x42480000);
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[1].u = rd32(c, (RW(18) + 1756)); goto L_001BA6CC; }
SET64(1, RSD(16) < (s64)3);
{ int t = RD(1) == RD(0);  if (t) goto L_001BA6C8; }
SET64(3, (s64)(s32)0x3dcc0000);
SET32(2, RW(0) + 5);
SET64(3, RD(3) | 0xcccd);
SET32(5, RW(0) + 167);
wr32(c, (RW(18) + 1764), RW(3));
wr32(c, (RW(18) + 1620), RW(2));
SET64(16, (s32)rd32(c, (RW(18) + 412)));
SET64(2, (s32)rd32(c, (RW(18) + 216)));
SET32(3, RW(16) << 1);
SET32(3, RW(3) + RW(16));
SET32(3, RW(3) << 4);
SET64(31, 0x1ba610); SET32(4, RW(2) + RW(3)); F_001C7130(c);
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 412))); goto L_001BA67C; }
SET32(4, RW(16) << 1);
SET32(3, RW(0) + 5);
SET32(4, RW(4) + RW(16));
SET32(5, RW(4) << 3);
SET32(4, RW(5) + RW(18));
wr32(c, (RW(4) + 1792), RW(0));
wr16(c, (RW(4) + 1800), (u16)RW(3));
SET64(3, rd16(c, (RW(4) + 1798)));
wr16(c, (RW(4) + 1796), (u16)RW(3));
{ int t = RD(2) == RD(0); wr32(c, (RW(4) + 1784), RW(2)); if (t) goto L_001BA660; }
SET64(3, rd16(c, (RW(2) + 14)));
if (RD(3) != RD(0)) { SET32(2, RW(18) + RW(5)); goto L_001BA664; }
SET64(4, RD(3) | 0x1);
SET32(3, RW(2) + 32);
wr16(c, (RW(2) + 14), (u16)RW(4));
wr32(c, (RW(2) + 28), RW(3));
L_001BA660:;
SET32(2, RW(18) + RW(5));
L_001BA664:;
SET32(16, RW(2) + 1784);
SET64(31, 0x1ba670); SET64(4, RD(16) + RD(0)); F_002BD950(c);
SET64(31, 0x1ba678); SET64(4, RD(16) + RD(0)); F_002BD950(c);
SET64(3, (s32)rd32(c, (RW(18) + 412)));
L_001BA67C:;
SET64(2, (s64)(s32)0x10000);
SET32(5, RW(0) + 32);
SET32(6, RW(0) + 127);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(18));
SET64(3, (s32)rd32(c, (RW(3) + 280)));
SET32(2, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30860)));
SET64(31, 0x1ba6a4); SET32(7, RW(0) + 64); F_001B5FF0(c);
SET64(4, (s32)rd32(c, (RW(18) + 208)));
{ int t = RD(4) == RD(0);  if (t) goto L_001BA900; }
SET64(5, rd16(c, (RW(28) + -32044)));
SET32(6, RW(0) + 127);
SET64(31, 0x1ba6c0); SET32(7, RW(0) + 64); F_001B5FF0(c);
 goto L_001BA900;
L_001BA6C8:;
c->f[1].u = rd32(c, (RW(18) + 1756));
L_001BA6CC:;
c->f[0].u = rd32(c, (RW(18) + 1752));
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_001BA900; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x1ba6e8); SET64(5, RD(0) + RD(0)); F_001B92D0(c);
SET64(3, (s64)(s32)0xbdcc0000);
SET32(2, RW(0) + 6);
SET64(3, RD(3) | 0xcccd);
wr32(c, (RW(18) + 1764), RW(3));
wr32(c, (RW(18) + 1620), RW(2)); goto L_001BA900;
L_001BA700:;
SET64(2, (s64)(s32)0x4b0000);
SET64(20, RD(0) + RD(0));
c->f[20].u = rd32(c, (RW(2) + 10144));
SET64(19, RD(18) + RD(0));
SET64(16, RD(18) + RD(0));
L_001BA714:;
SET64(2, (s32)rd32(c, (RW(19) + 1784)));
{ int t = RD(2) == RD(0);  if (t) goto L_001BA768; }
SET64(3, rd16(c, (RW(19) + 1796)));
SET64(2, rd16(c, (RW(19) + 1798)));
SET64(1, RSD(3) < RSD(2));
{ int t = RD(1) == RD(0); SET32(4, RW(19) + 1784); if (t) goto L_001BA768; }
SET64(31, 0x1ba73c); c->f[12].u = rd32(c, (RW(17) + 0)); F_002BD880(c);
SET64(2, (s32)rd32(c, (RW(16) + 280)));
{ int t = RD(2) == RD(0);  if (t) goto L_001BA768; }
c->f[0].u = rd32(c, (RW(19) + 1792));
c->fcc = F(0) <= F(20);
{ int t = !c->fcc;  if (t) goto L_001BA768; }
SET64(5, rd16(c, (RW(19) + 1800)));
SET64(31, 0x1ba764); SET32(4, RW(2) + 128); F_00157FC0(c);
L_001BA768:;
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < (s64)2);
SET32(19, RW(19) + 24);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001BA714; } }
SET64(31, 0x1ba784); SET64(4, RD(18) + RD(0)); F_001B9050(c);
SET64(2, (s32)rd32(c, (RW(18) + 412)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(18));
SET64(2, (s32)rd32(c, (RW(2) + 280)));
SET64(2, rd8(c, (RW(2) + 980)));
{ int t = RD(2) == RD(0);  if (t) goto L_001BA900; }
SET64(31, 0x1ba7a8);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 276))); goto L_001BA7BC; }
SET32(5, RW(5) + 672);
SET64(3, (s32)rd32(c, (RW(18) + 276)));
L_001BA7BC:;
SET64(2, (s64)(s32)0x3ca30000);
SET64(2, RD(2) | 0xd70a);
c->f[12].u = RW(2);
SET64(31, 0x1ba7d0); SET64(4, (s32)rd32(c, (RW(3) + 0))); F_00172FD0(c);
SET32(3, RW(0) + 1);
SET32(2, RW(0) + 7);
wr8(c, (RW(18) + 1492), (u8)RW(3));
wr32(c, (RW(18) + 1620), RW(2)); goto L_001BA900;
L_001BA7E4:;
SET64(31, 0x1ba7ec); SET64(4, RD(18) + RD(0)); F_001B9050(c);
c->f[1].u = rd32(c, (RW(18) + 1760));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc;  if (t) goto L_001BA900; }
SET64(31, 0x1ba80c);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 276))); goto L_001BA820; }
SET32(5, RW(5) + 672);
SET64(3, (s32)rd32(c, (RW(18) + 276)));
L_001BA820:;
SET64(2, (s64)(s32)0x3ca30000);
SET64(2, RD(2) | 0xd70a);
c->f[12].u = RW(2);
SET64(31, 0x1ba834); SET64(4, (s32)rd32(c, (RW(3) + 0))); F_00173230(c);
wr8(c, (RW(18) + 1492), (u8)RW(0));
SET32(2, RW(0) + 7);
wr32(c, (RW(18) + 1620), RW(2)); goto L_001BA900;
L_001BA844:;
SET64(31, 0x1ba84c); SET64(4, RD(18) + RD(0)); F_001B9050(c);
SET64(3, (s32)rd32(c, (RW(18) + 276)));
SET64(2, (s64)(s32)0x520000);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x1ba860); c->f[12].u = rd32(c, (RW(2) + 14864)); F_00172DE0(c);
SET64(2, (s32)rd32(c, (RW(18) + 276)));
SET64(31, 0x1ba86c); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_00172D40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001BA900; }
SET32(2, RW(0) + 8);
wr32(c, (RW(18) + 1620), RW(2)); goto L_001BA900;
L_001BA880:;
SET64(2, (s32)rd32(c, (RW(18) + 212)));
{ int t = RD(2) == RD(0);  if (t) goto L_001BA8C8; }
SET64(2, (s32)rd32(c, (RW(18) + 1780)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_001BA8C8; }
SET64(17, RD(0) + RD(0));
L_001BA89C:;
SET64(2, (s32)rd32(c, (RW(18) + 212)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1ba8b4);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 1780)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_001BA89C; } }
L_001BA8C8:;
SET64(4, (s32)rd32(c, (RW(18) + 208)));
if (RD(4) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001BA904; }
SET64(5, (s32)rd32(c, (RW(18) + 1772)));
SET32(2, RW(0) + -1);
{ int t = RD(5) == RD(2);  if (t) goto L_001BA8F4; }
SET64(31, 0x1ba8ec); SET32(6, RW(0) + 250); F_001B5E90(c);
SET32(2, RW(0) + -1);
wr32(c, (RW(18) + 1772), RW(2));
L_001BA8F4:;
SET64(2, RD(0) + RD(0));
 goto L_001BA904;
L_001BA900:;
SET32(2, RW(0) + 1);
L_001BA904:;
SET64(31, rd64(c, (RW(29) + 96)));
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}
void F_001B9F00(Ctx *c) { B_001B9F00(c, 0x1b9f00); }
void F_001B9F60(Ctx *c) { B_001B9F00(c, 0x1b9f60); }
void F_001B9F70(Ctx *c) { B_001B9F00(c, 0x1b9f70); }
void F_001B9FD4(Ctx *c) { B_001B9F00(c, 0x1b9fd4); }
void F_001BA0B0(Ctx *c) { B_001B9F00(c, 0x1ba0b0); }
void F_001BA700(Ctx *c) { B_001B9F00(c, 0x1ba700); }
void F_001BA7E4(Ctx *c) { B_001B9F00(c, 0x1ba7e4); }
void F_001BA844(Ctx *c) { B_001B9F00(c, 0x1ba844); }
void F_001BA880(Ctx *c) { B_001B9F00(c, 0x1ba880); }
void F_001BA900(Ctx *c) { B_001B9F00(c, 0x1ba900); }

void F_001BA930(Ctx *c) { /* func_001BA930 */
ENTER(0x1ba930);
 return;
}

