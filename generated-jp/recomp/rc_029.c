#include "r5900.h"
#include "functab.h"

void JP_F_002EEFF0(Ctx *c) { /* func_002EEFF0 */
ENTER(0x2eeff0);
SET64(3, (s64)(s32)0x3dcc0000);
SET64(5, RD(3) | 0xcccd);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(4) + RW(3));
wr32(c, (RW(3) + -30440), RW(5)); return;
}

void JP_F_002EF010(Ctx *c) { /* func_002EF010 */
ENTER(0x2ef010);
SET32(29, RW(29) + -80);
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(3) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(3, RW(4) + RW(3));
wr8(c, (RW(3) + -30848), (u8)RW(0));
SET32(2, RW(4) + RW(2));
wr8(c, (RW(2) + -30847), (u8)RW(0));
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(5, RW(0) + -1);
SET32(3, RW(4) + RW(3));
SET32(2, RW(4) + RW(2));
wr16(c, (RW(3) + -30828), (u16)RW(5));
SET64(16, RD(4) + RD(0));
wr8(c, (RW(2) + -30408), (u8)RW(0));
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(5, RW(0) + 1);
SET32(2, RW(4) + RW(2));
SET32(3, RW(4) + RW(3));
wr8(c, (RW(2) + -30368), (u8)RW(0));
SET64(2, (s64)(s32)0x10000);
wr8(c, (RW(3) + -30544), (u8)RW(5));
SET32(2, RW(4) + RW(2));
SET64(3, (s64)(s32)0x10000);
wr8(c, (RW(2) + -30543), (u8)RW(5));
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
L_002EF0E0:;
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
{ int t = RD(2) != RD(0); wr8(c, (RW(3) + 6), (u8)RW(0)); if (t) { POLL(); goto L_002EF0E0; } }
SET64(2, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x3f800000);
SET32(4, RW(0) + 255);
SET32(2, RW(16) + RW(2));
wr8(c, (RW(2) + -30507), (u8)RW(4));
SET64(6, (s64)(s32)0x10000);
wr32(c, (RW(29) + 76), RW(3));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(16) + RW(2));
wr32(c, (RW(29) + 64), RW(0));
wr8(c, (RW(2) + -30506), (u8)RW(4));
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(29) + 68), RW(0));
wr32(c, (RW(29) + 72), RW(0));
SET32(6, RW(16) + RW(6));
rd128(c, (RW(29) + 64) & ~15u, &c->r[7]);
SET32(3, RW(16) + RW(3));
SET32(5, RW(0) + 1);
SET32(2, RW(16) + RW(2));
SET32(4, RW(16) + 128);
wr128(c, (RW(6) + -30496) & ~15u, &c->r[7]);
wr16(c, (RW(3) + -30480), (u16)RW(0));
SET64(31, 0x2ef180); wr8(c, (RW(2) + -30448), (u8)RW(5)); JP_F_0031CFA0(c);
SET64(31, 0x2ef188); SET32(4, RW(16) + 128); JP_F_0031CBD0(c);
SET64(31, 0x2ef190); SET32(4, RW(16) + 128); JP_F_0031CA60(c);
SET64(31, 0x2ef198); SET32(4, RW(16) + 128); JP_F_0031CA60(c);
SET64(31, 0x2ef1a0); SET32(4, RW(16) + 128); JP_F_0031C9A0(c);
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002EF1E8; }
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
SET64(2, (s64)(s32)0x10000);
L_002EF1E8:;
SET32(4, RW(0) + -1);
SET64(3, RD(2) + RD(0));
SET32(2, RW(16) + RW(2));
SET32(3, RW(16) + RW(3));
wr32(c, (RW(2) + -30280), RW(0));
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30276), RW(0));
SET32(2, RW(16) + RW(2));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(2) + -30272), RW(0));
SET64(2, RD(3) + RD(0));
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
wr16(c, (RW(3) + -30856), (u16)RW(4));
SET32(4, RW(16) + 128);
SET64(31, 0x2ef22c); wr16(c, (RW(2) + -30288), (u16)RW(0)); JP_F_001E69E0(c);
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(16) + RW(3));
SET32(4, RW(0) + 1);
wr16(c, (RW(3) + -30828), (u16)RW(0));
SET32(2, RW(16) + RW(2));
wr8(c, (RW(2) + -30826), (u8)RW(4));
SET64(31, 0x2ef250); SET64(4, RD(16) + RD(0)); JP_F_002EE170(c);
SET64(5, (s64)(s32)0x3f800000);
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(29) + 48), RW(0));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(29) + 52), RW(0));
SET32(4, RW(16) + RW(4));
wr32(c, (RW(29) + 56), RW(0));
SET32(3, RW(16) + RW(3));
wr32(c, (RW(29) + 60), RW(5));
rd128(c, (RW(29) + 48) & ~15u, &c->r[6]);
wr32(c, (RW(29) + 44), RW(5));
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[5]);
wr128(c, (RW(4) + -30192) & ~15u, &c->r[6]);
wr128(c, (RW(3) + -30176) & ~15u, &c->r[5]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002EF2B0(Ctx *c) { /* func_002EF2B0 */
ENTER(0x2ef2b0);
SET32(29, RW(29) + -208);
SET64(3, (s64)(s32)0x10000);
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s64)(s32)0x10000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(5, RW(0) + 1);
SET32(3, RW(4) + RW(3));
SET32(2, RW(4) + RW(2));
wr8(c, (RW(3) + -31052), (u8)RW(5));
SET64(16, RD(4) + RD(0));
wr8(c, (RW(2) + -31051), (u8)RW(0));
SET64(31, 0x2ef2e4); SET64(4, (s32)rd32(c, (RW(4) + 44))); JP_F_002AF080(c);
SET64(2, (s64)(s32)0x3f190000);
SET64(7, (s64)(s32)0x3f800000);
SET64(2, RD(2) | 0x999a);
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(29) + 204), RW(7));
SET64(5, (s64)(s32)0x10000);
wr32(c, (RW(29) + 192), RW(2));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(29) + 196), RW(2));
SET32(4, RW(16) + RW(4));
wr32(c, (RW(29) + 200), RW(2));
SET32(5, RW(16) + RW(5));
SET64(2, RD(3) + RD(0));
rd128(c, (RW(29) + 192) & ~15u, &c->r[6]);
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
wr128(c, (RW(4) + -30896) & ~15u, &c->r[6]);
c->f[2].u = rd32(c, (RW(5) + -30888));
SET32(4, RW(29) + 144);
c->f[1].u = rd32(c, (RW(3) + -30892));
c->f[0].u = rd32(c, (RW(2) + -30896));
SET32(5, RW(29) + 48);
wr32(c, (RW(29) + 48), c->f[0].u);
wr32(c, (RW(29) + 60), RW(7));
wr32(c, (RW(29) + 52), c->f[1].u);
SET64(31, 0x2ef350); wr32(c, (RW(29) + 56), c->f[2].u); JP_F_002B6050(c);
SET64(7, (s64)(s32)0x4d0000);
rd128(c, (RW(29) + 144) & ~15u, &c->r[4]);
SET32(7, RW(7) + 6112);
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(29) + 176), RW(7));
SET32(3, RW(16) + RW(3));
wr128(c, (RW(3) + -31008) & ~15u, &c->r[4]);
SET64(2, (s64)(s32)0x10000);
SET64(6, (s32)rd32(c, (RW(29) + 160)));
SET32(2, RW(16) + RW(2));
SET64(1, RD(0) | 0x86f4);
SET32(4, RW(29) + 144);
SET32(3, RW(16) + RW(1));
SET64(5, RD(0) + RD(0));
wr32(c, (RW(2) + -30992), RW(6));
c->f[2].u = rd32(c, (RW(29) + 164));
c->f[1].u = rd32(c, (RW(29) + 168));
c->f[0].u = rd32(c, (RW(29) + 172));
wr32(c, (RW(3) + 0), c->f[2].u);
wr32(c, (RW(3) + 4), c->f[1].u);
wr32(c, (RW(3) + 8), c->f[0].u);
SET64(31, 0x2ef3ac); wr32(c, (RW(29) + 176), RW(7)); JP_F_002B5FF0(c);
SET64(2, (s64)(s32)0x3f330000);
SET64(3, (s64)(s32)0x3f800000);
SET64(2, RD(2) | 0x3333);
wr32(c, (RW(29) + 132), RW(3));
wr32(c, (RW(29) + 140), RW(3));
SET32(4, RW(29) + 64);
wr32(c, (RW(29) + 32), RW(2));
SET32(5, RW(29) + 32);
wr32(c, (RW(29) + 36), RW(2));
SET32(6, RW(29) + 128);
wr32(c, (RW(29) + 40), RW(2));
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 136), RW(0));
SET64(31, 0x2ef3e8); wr32(c, (RW(29) + 44), RW(0)); JP_F_002B5F90(c);
SET64(6, (s64)(s32)0x4d0000);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
SET32(6, RW(6) + 6048);
SET64(1, RD(0) | 0x8710);
SET32(3, RW(16) + RW(1));
wr32(c, (RW(29) + 96), RW(6));
wr128(c, (RW(3) + 0) & ~15u, &c->r[2]);
SET32(4, RW(29) + 64);
SET64(2, (s32)rd32(c, (RW(29) + 80)));
SET64(5, RD(0) + RD(0));
wr32(c, (RW(3) + 16), RW(2));
c->f[2].u = rd32(c, (RW(29) + 84));
c->f[1].u = rd32(c, (RW(29) + 88));
c->f[0].u = rd32(c, (RW(29) + 92));
wr32(c, (RW(3) + 20), c->f[2].u);
wr32(c, (RW(3) + 24), c->f[1].u);
wr32(c, (RW(3) + 28), c->f[0].u);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 48) & ~15u, &c->r[2]);
SET64(31, 0x2ef43c); wr32(c, (RW(29) + 96), RW(6)); JP_F_002B5F30(c);
SET64(31, 0x2ef444); SET64(4, RD(16) + RD(0)); JP_F_002E8D90(c);
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(3) + RD(0));
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
wr32(c, (RW(3) + -30852), RW(0));
wr32(c, (RW(2) + -30268), RW(0));
SET64(31, 0x2ef464); SET64(4, (s32)rd32(c, (RW(16) + 44))); JP_F_002AF080(c);
SET64(31, 0x2ef46c); SET64(4, RD(16) + RD(0)); JP_F_002EF010(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 208); return;
}

void JP_F_002EF480(Ctx *c) { /* func_002EF480 */
ENTER(0x2ef480);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr8(c, (RW(4) + 1058), (u8)RW(6));
SET64(16, RD(4) + RD(0));
wr8(c, (RW(4) + 1059), (u8)RW(6));
SET64(31, 0x2ef4a4); SET32(4, RW(16) + 128); JP_F_0031D500(c);
SET64(31, 0x2ef4ac); SET64(4, RD(16) + RD(0)); JP_F_002EF2B0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002EF4C0(Ctx *c) { /* func_002EF4C0 */
ENTER(0x2ef4c0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(4) + RW(2));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + -30864)));
if (RD(4) == RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002EF4F8; }
SET64(25, (s32)rd32(c, (RW(4) + 72)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ef4f4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s64)(s32)0x10000);
L_002EF4F8:;
SET64(2, RD(3) + RD(0));
SET32(3, RW(16) + RW(3));
SET32(2, RW(16) + RW(2));
wr32(c, (RW(3) + -30864), RW(0));
SET64(4, (s32)rd32(c, (RW(2) + -30860)));
if (RD(4) == RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_002EF528; }
SET64(25, (s32)rd32(c, (RW(4) + 72)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ef524); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s64)(s32)0x10000);
L_002EF528:;
SET64(1, RD(0) | 0x86a0);
SET64(3, RD(2) + RD(0));
SET32(4, RW(16) + RW(1));
SET32(2, RW(16) + RW(2));
SET32(3, RW(16) + RW(3));
wr32(c, (RW(2) + -30860), RW(0));
SET64(2, (s64)(s32)0x10000);
wr8(c, (RW(3) + -31052), (u8)RW(0));
SET32(2, RW(16) + RW(2));
SET64(31, 0x2ef554); wr8(c, (RW(2) + -31051), (u8)RW(0)); JP_F_00300180(c);
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(1, RD(0) | 0x8710);
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x2ef56c); SET32(5, RW(16) + RW(1)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 404)));
SET64(1, RD(0) | 0x86e0);
SET32(4, RW(16) + 128);
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x2ef584); SET32(5, RW(16) + RW(1)); rt_call(c, t); }
SET64(31, 0x2ef58c); SET32(4, RW(16) + 128); JP_F_001E9750(c);
SET64(31, 0x2ef594); SET32(4, RW(16) + 128); JP_F_001E7DA0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002EF5B0(Ctx *c) { /* func_002EF5B0 */
ENTER(0x2ef5b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002EF698; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 15056);
SET32(2, RW(2) + 15076);
wr32(c, (RW(17) + 72), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 132), RW(2));
SET32(3, RW(3) + 15084);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15096);
wr32(c, (RW(17) + 96), RW(3));
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 112), RW(2)); if (t) goto L_002EF680; }
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
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 112), RW(2)); if (t) goto L_002EF680; }
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
SET64(31, 0x2ef668); wr32(c, (RW(17) + 112), RW(2)); JP_F_001F0C20(c);
SET32(4, RW(17) + 76);
SET64(31, 0x2ef674); SET64(5, RD(0) + RD(0)); JP_F_00139F30(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ef680); SET64(5, RD(0) + RD(0)); JP_F_001B7980(c);
L_002EF680:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002EF69C; }
SET64(31, 0x2ef698); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002EF698:;
SET64(2, RD(17) + RD(0));
L_002EF69C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002EF6B0(Ctx *c) { /* func_002EF6B0 */
ENTER(0x2ef6b0);
SET32(29, RW(29) + -32);
SET32(5, RW(5) + 128);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2ef6cc); SET32(4, RW(16) + 128); JP_F_001E8B00(c);
SET64(31, 0x2ef6d4); SET64(4, RD(16) + RD(0)); JP_F_002EF2B0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002EF6F0(Ctx *c) { /* func_002EF6F0 */
ENTER(0x2ef6f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2ef700);  JP_F_002F11A0(c);
SET64(31, 0x2ef708); SET64(4, RD(2) + RD(0)); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ef714); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002EF720(Ctx *c) { /* func_002EF720 */
ENTER(0x2ef720);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(5) + RD(0));
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002EF780; }
SET64(1, RD(0) | 0x8a30);
SET32(4, RW(17) + RW(1));
SET64(1, RD(0) | 0x8a70);
wr32(c, (RW(17) + 44), RW(4));
SET32(2, RW(17) + RW(1));
wr32(c, (RW(17) + 1040), RW(4));
SET64(31, 0x2ef774); wr32(c, (RW(17) + 384), RW(2)); JP_F_002AF080(c);
SET64(1, RD(0) | 0x8a70);
SET64(31, 0x2ef780); SET32(4, RW(17) + RW(1)); JP_F_00141C80(c);
L_002EF780:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ef78c); SET64(5, RD(0) + RD(0)); JP_F_002F11C0(c);
SET32(21, RW(17) + 128);
SET64(20, RD(0) + RD(0));
SET64(4, RD(21) + RD(0));
SET64(31, 0x2ef7a0); SET64(5, RD(0) + RD(0)); JP_F_001E99D0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(6, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 19872);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(21) + 276), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(5, (s32)rd32(c, (RW(21) + 256)));
SET32(6, RW(6) + 20140);
SET64(1, RD(0) | 0x8660);
SET32(4, RW(4) + 19944);
SET32(3, RW(3) + 19976);
SET32(2, RW(21) + RW(1));
wr32(c, (RW(5) + 16), RW(6));
SET32(19, RW(21) + 4048);
wr32(c, (RW(21) + 432), RW(4));
wr32(c, (RW(21) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(21) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
L_002EF7EC:;
SET64(31, 0x2ef7f4); SET64(4, RD(19) + RD(0)); JP_F_0031E1E0(c);
SET32(19, RW(19) + 640);
SET32(18, RW(21) + 11088);
SET64(2, RD(19) < RD(18));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002EF7EC; } }
L_002EF808:;
SET64(31, 0x2ef810); SET64(4, RD(18) + RD(0)); JP_F_0031E010(c);
SET32(18, RW(18) + 768);
SET32(4, RW(21) + 29520);
SET64(2, RD(18) < RD(4));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002EF808; } }
SET64(31, 0x2ef82c);  JP_F_0031E010(c);
SET64(31, 0x2ef834); SET32(4, RW(21) + 30288); JP_F_0031E010(c);
SET64(5, (s64)(s32)0x320000);
SET64(6, (s64)(s32)0x2f0000);
SET32(4, RW(21) + 31056);
SET32(5, RW(5) + -8304);
SET32(6, RW(6) + 80);
SET32(7, RW(0) + 160);
SET64(31, 0x2ef854); SET32(8, RW(0) + 20); JP_F_001023D0(c);
SET64(1, RD(0) | 0x85d0);
SET64(31, 0x2ef860); SET32(4, RW(21) + RW(1)); JP_F_002F0000(c);
SET64(1, RD(0) | 0x86a0);
SET64(31, 0x2ef86c); SET32(4, RW(17) + RW(1)); JP_F_003001B0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 15328);
SET64(7, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 12), RW(3));
SET32(2, RW(2) + 15396);
wr32(c, (RW(17) + 404), RW(2));
SET64(6, (s64)(s32)0x4e0000);
SET64(4, (s32)rd32(c, (RW(17) + 384)));
SET32(7, RW(7) + 15728);
SET64(3, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x8a70);
wr32(c, (RW(4) + 16), RW(7));
SET32(6, RW(6) + 15468);
wr32(c, (RW(17) + 560), RW(6));
SET32(3, RW(3) + 15500);
wr32(c, (RW(17) + 888), RW(3));
SET32(5, RW(5) + 15664);
SET32(2, RW(17) + RW(2));
SET32(8, RW(17) + RW(1));
wr32(c, (RW(2) + -31056), RW(5));
SET64(4, (s64)(s32)0x10000);
SET64(9, (s32)rd32(c, (RW(17) + 384)));
SET64(3, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x86c0);
SET32(4, RW(17) + RW(4));
SET32(7, RW(17) + RW(1));
SET32(3, RW(17) + RW(3));
SET32(8, RW(8) - RW(9));
SET64(1, RD(0) | 0x86e0);
wr32(c, (RW(9) + 20), RW(8));
SET32(2, RW(7) + 16);
wr8(c, (RW(4) + -31052), (u8)RW(0));
SET32(5, RW(17) + RW(1));
wr8(c, (RW(3) + -31051), (u8)RW(0));
SET64(6, (s64)(s32)0x3f800000);
wr32(c, (RW(7) + 0), RW(0));
SET64(1, RD(2) < RD(5));
wr32(c, (RW(7) + 4), RW(0));
wr32(c, (RW(7) + 8), RW(0));
{ int t = RD(1) == RD(0); wr32(c, (RW(7) + 12), RW(6)); if (t) goto L_002EFAA0; }
SET64(1, RD(0) | 0x86d0);
SET32(4, RW(17) + RW(1));
SET32(9, RW(5) - RW(4));
SET32(8, RW(9) + 15);
{ int t = RSD(8) >= 0; SET32(7, RSW(8) >> 4); if (t) goto L_002EF93C; }
SET32(3, RW(8) + 15);
SET32(7, RSW(3) >> 4);
L_002EF93C:;
SET64(1, RD(0) | 0x8660);
SET32(6, RW(7) + 1);
SET32(5, RW(17) + RW(1));
SET64(1, RSD(6) < (s64)9);
{ int t = RD(1) != RD(0);  if (t) goto L_002EFA68; }
SET64(1, RD(0) | 0x86e0);
SET64(12, RD(0) + RD(0));
SET32(3, RW(17) + RW(1));
SET64(1, RD(3) < RD(4));
{ int t = RD(1) != RD(0); SET64(11, RD(0) + RD(0)); if (t) goto L_002EF998; }
SET64(4, (s64)(s32)0x80000000);
SET64(3, RD(9) & RD(4));
{ int t = RD(3) != RD(0); SET64(10, RD(0) + (s64)1); if (t) goto L_002EF98C; }
SET64(3, RD(8) & RD(4));
{ int t = RD(3) == RD(0);  if (t) goto L_002EF98C; }
SET64(10, RD(0) + RD(0));
L_002EF98C:;
{ int t = RD(10) == RD(0);  if (t) goto L_002EF998; }
SET64(11, RD(0) + (s64)1);
L_002EF998:;
{ int t = RD(11) == RD(0);  if (t) goto L_002EF9CC; }
SET64(3, (s64)(s32)0x80000000);
SET64(4, RD(7) & RD(3));
{ int t = RD(4) != RD(0); SET64(8, RD(0) + (s64)1); if (t) goto L_002EF9C0; }
SET64(3, RD(6) & RD(3));
{ int t = RD(4) == RD(3);  if (t) goto L_002EF9C0; }
SET64(8, RD(0) + RD(0));
L_002EF9C0:;
{ int t = RD(8) == RD(0);  if (t) goto L_002EF9CC; }
SET64(12, RD(0) + (s64)1);
L_002EF9CC:;
{ int t = RD(12) == RD(0);  if (t) goto L_002EFA68; }
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 0), RW(0));
L_002EF9DC:;
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
SET32(2, RW(2) + 128);
SET64(3, RD(2) < RD(5));
if (RD(3) != RD(0)) { wr32(c, (RW(2) + 0), RW(0)); { POLL(); goto L_002EF9DC; } }
L_002EFA68:;
SET64(1, RD(0) | 0x86e0);
SET32(5, RW(17) + RW(1));
SET64(1, RD(2) < RD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002EFAA0; }
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 0), RW(0));
L_002EFA84:;
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(4));
SET32(2, RW(2) + 16);
SET64(3, RD(2) < RD(5));
if (RD(3) != RD(0)) { wr32(c, (RW(2) + 0), RW(0)); { POLL(); goto L_002EFA84; } }
L_002EFAA0:;
SET64(1, RD(0) | 0x86e0);
SET32(18, RW(17) + RW(1));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 124), RW(2));
SET64(4, RD(18) + RD(0));
SET32(5, RW(29) + 112);
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 116), RW(0));
SET64(31, 0x2efac8); wr32(c, (RW(29) + 120), RW(0)); JP_F_002B6050(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(1, RD(0) | 0x8710);
SET32(2, RW(2) + 6112);
SET64(5, (s64)(s32)0x1a0000);
SET64(6, (s64)(s32)0x180000);
SET32(4, RW(17) + RW(1));
wr32(c, (RW(18) + 32), RW(2));
SET32(5, RW(5) + 12960);
SET32(6, RW(6) + -29088);
SET32(7, RW(0) + 64);
SET64(31, 0x2efaf8); SET32(8, RW(0) + 1); JP_F_001023D0(c);
SET64(2, (s64)(s32)0x10000);
SET64(6, (s64)(s32)0x4e0000);
SET64(3, RD(2) + RD(0));
SET32(5, RW(0) + -1);
SET32(2, RW(17) + RW(2));
SET32(3, RW(17) + RW(3));
wr32(c, (RW(2) + -30896), RW(0));
SET32(6, RW(6) + 15040);
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30892), RW(0));
SET32(2, RW(17) + RW(2));
SET64(3, (s64)(s32)0x10000);
SET64(4, RD(3) + RD(0));
wr32(c, (RW(2) + -30888), RW(0));
SET64(2, (s64)(s32)0x3f800000);
SET32(3, RW(17) + RW(3));
wr32(c, (RW(3) + -30884), RW(2));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30880), RW(0));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30876), RW(0));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30872), RW(0));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30868), RW(2));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30864), RW(0));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30860), RW(0));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30836), RW(0));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30832), RW(0));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30816), RW(0));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30812), RW(0));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30808), RW(0));
SET32(3, RW(17) + RW(3));
wr32(c, (RW(3) + -30804), RW(0));
SET64(3, (s64)(s32)0x10000);
SET64(4, RD(3) + RD(0));
SET32(3, RW(17) + RW(3));
SET32(4, RW(17) + RW(4));
wr16(c, (RW(3) + -30720), (u16)RW(5));
SET64(3, (s64)(s32)0x10000);
wr8(c, (RW(4) + -30718), (u8)RW(0));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr8(c, (RW(3) + -30717), (u8)RW(0));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30496), RW(0));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30492), RW(0));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30488), RW(0));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30484), RW(2));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30464), RW(0));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30460), RW(0));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30456), RW(0));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30452), RW(2));
SET64(5, (s64)(s32)0x4e0000);
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30404), RW(6));
SET32(5, RW(5) + 15312);
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30404), RW(5));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
SET64(5, (s64)(s32)0x4e0000);
SET32(3, RW(17) + RW(3));
SET32(5, RW(5) + 14896);
wr32(c, (RW(3) + -30364), RW(6));
wr32(c, (RW(4) + -30364), RW(5));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30320), RW(0));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30316), RW(0));
SET32(3, RW(17) + RW(3));
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(3) + -30312), RW(0));
SET64(4, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x10000);
SET32(5, RW(5) + 15024);
SET32(3, RW(17) + RW(3));
SET32(4, RW(17) + RW(4));
wr32(c, (RW(3) + -30308), RW(2));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30252), RW(5));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr8(c, (RW(3) + -30256), (u8)RW(0));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30192), RW(0));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30188), RW(0));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30184), RW(0));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30180), RW(2));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30176), RW(0));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr32(c, (RW(3) + -30172), RW(0));
SET32(4, RW(17) + RW(4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(4) + -30168), RW(0));
SET32(3, RW(17) + RW(3));
wr32(c, (RW(3) + -30164), RW(2));
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002EFD70(Ctx *c) { /* func_002EFD70 */
ENTER(0x2efd70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
if (RD(16) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_002EFDAC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 15024);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 4), RW(3)); if (t) goto L_002EFDA8; }
SET64(31, 0x2efda8);  JP_F_001004B0(c);
L_002EFDA8:;
SET64(2, RD(16) + RD(0));
L_002EFDAC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002EFDC0(Ctx *c) { /* func_002EFDC0 */
ENTER(0x2efdc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002EFE04; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15008);
SET64(31, 0x2efdec); wr32(c, (RW(17) + 16), RW(2)); JP_F_00300180(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002EFE08; }
SET64(31, 0x2efe04); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002EFE04:;
SET64(2, RD(17) + RD(0));
L_002EFE08:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002EFE20(Ctx *c) { /* func_002EFE20 */
ENTER(0x2efe20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002EFF58; }
SET64(2, (s64)(s32)0x4e0000);
SET64(9, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 19872);
SET64(8, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(7, (s32)rd32(c, (RW(17) + 256)));
SET32(9, RW(9) + 20140);
SET64(1, RD(0) | 0x8660);
SET64(5, (s64)(s32)0x2f0000);
SET32(8, RW(8) + 19944);
SET32(3, RW(3) + 19976);
wr32(c, (RW(7) + 16), RW(9));
SET32(2, RW(17) + RW(1));
wr32(c, (RW(17) + 432), RW(8));
SET32(4, RW(17) + 31056);
wr32(c, (RW(17) + 760), RW(3));
SET32(5, RW(5) + 80);
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(6, RW(0) + 160);
SET32(7, RW(0) + 20);
SET32(2, RW(2) - RW(3));
SET64(31, 0x2efe9c); wr32(c, (RW(3) + 20), RW(2)); JP_F_00102360(c);
{ int t = RD(17) == RD(0);  if (t) goto L_002EFF04; }
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 28848);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 256)));
SET32(7, RW(7) + 29108);
SET32(5, RW(5) + 28920);
SET32(3, RW(3) + 28952);
SET32(2, RW(17) + 4096);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 432), RW(5));
wr32(c, (RW(17) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2efef8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2eff04); SET64(5, RD(0) + RD(0)); JP_F_001E8250(c);
L_002EFF04:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_002EFF44; }
SET64(1, RD(0) | 0x8660);
SET32(4, RW(17) + RW(1));
{ int t = RD(4) == RD(0);  if (t) goto L_002EFF40; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(3) + -3184);
SET32(2, RW(17) + RW(2));
wr32(c, (RW(2) + -31120), RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2eff40);  rt_call(c, t); }
L_002EFF40:;
SET64(2, RD(16) << 48);
L_002EFF44:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002EFF5C; }
SET64(31, 0x2eff58); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002EFF58:;
SET64(2, RD(17) + RD(0));
L_002EFF5C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002EFF70(Ctx *c) { /* func_002EFF70 */
ENTER(0x2eff70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002EFFE4; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 14928);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 12), RW(2)); if (t) goto L_002EFFCC; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2effb8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002EFFD0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 12), RW(2));
L_002EFFCC:;
SET64(2, RD(16) << 48);
L_002EFFD0:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002EFFE8; }
SET64(31, 0x2effe4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002EFFE4:;
SET64(2, RD(17) + RD(0));
L_002EFFE8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

static void JP_B_002F0000(Ctx *c, u32 entry) { /* func_002F0000 */
ENTER(entry);
switch (entry) { case 0x2f000c: goto L_002F000C; case 0x2f0018: goto L_002F0018; case 0x2f001c: goto L_002F001C; case 0x2f0024: goto L_002F0024; case 0x2f0028: goto L_002F0028; case 0x2f002c: goto L_002F002C; case 0x2f0034: goto L_002F0034; case 0x2f0044: goto L_002F0044; }
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 4), RW(0));
L_002F000C:;
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3));
L_002F0018:;
wr32(c, (RW(4) + 16), RW(0));
L_002F001C:;
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
L_002F0024:;
wr32(c, (RW(4) + 28), RW(3));
L_002F0028:;
wr32(c, (RW(4) + 32), RW(0));
L_002F002C:;
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(0));
L_002F0034:;
wr32(c, (RW(4) + 44), RW(3));
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(0));
wr32(c, (RW(4) + 56), RW(0));
L_002F0044:;
wr32(c, (RW(4) + 60), RW(3)); return;
}
void JP_F_002F0000(Ctx *c) { JP_B_002F0000(c, 0x2f0000); }
void JP_F_002F000C(Ctx *c) { JP_B_002F0000(c, 0x2f000c); }
void JP_F_002F0018(Ctx *c) { JP_B_002F0000(c, 0x2f0018); }
void JP_F_002F001C(Ctx *c) { JP_B_002F0000(c, 0x2f001c); }
void JP_F_002F0024(Ctx *c) { JP_B_002F0000(c, 0x2f0024); }
void JP_F_002F0028(Ctx *c) { JP_B_002F0000(c, 0x2f0028); }
void JP_F_002F002C(Ctx *c) { JP_B_002F0000(c, 0x2f002c); }
void JP_F_002F0034(Ctx *c) { JP_B_002F0000(c, 0x2f0034); }
void JP_F_002F0044(Ctx *c) { JP_B_002F0000(c, 0x2f0044); }

static void JP_B_002F0050(Ctx *c, u32 entry) { /* func_002F0050 */
ENTER(entry);
switch (entry) { case 0x2f0064: goto L_002F0064; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
L_002F0064:;
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002F0094; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 14912);
SET64(31, 0x2f007c); wr32(c, (RW(17) + 156), RW(2)); JP_F_0031DD20(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002F0098; }
SET64(31, 0x2f0094); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002F0094:;
SET64(2, RD(17) + RD(0));
L_002F0098:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_002F0050(Ctx *c) { JP_B_002F0050(c, 0x2f0050); }
void JP_F_002F0064(Ctx *c) { JP_B_002F0050(c, 0x2f0064); }

void JP_F_002F00B0(Ctx *c) { /* func_002F00B0 */
ENTER(0x2f00b0);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(0) + 22);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 1); goto L_002F00E4; }
SET32(2, RW(0) + 21);
{ int t = RD(3) == RD(2);  if (t) goto L_002F00E0; }
SET32(2, RW(0) + 20);
{ int t = RD(3) == RD(2);  if (t) goto L_002F00E0; }
SET64(2, RD(0) + RD(0)); goto L_002F00E4;
L_002F00E0:;
SET32(2, RW(0) + 1);
L_002F00E4:;
 return;
}

static void JP_B_002F00F0(Ctx *c, u32 entry) { /* func_002F00F0 */
ENTER(entry);
switch (entry) { case 0x2f0200: goto L_002F0200; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(0) + 50);
if (RD(3) == RD(2)) { SET64(2, RD(0) + (s64)1); goto L_002F019C; }
SET32(2, RW(0) + 49);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0198; }
SET32(2, RW(0) + 41);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0198; }
SET32(2, RW(0) + 40);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0198; }
SET32(2, RW(0) + 39);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0198; }
SET32(2, RW(0) + 38);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0198; }
SET32(2, RW(0) + 37);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0198; }
SET32(2, RW(0) + 36);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0198; }
SET32(2, RW(0) + 35);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0198; }
SET32(2, RW(0) + 34);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0198; }
SET32(2, RW(0) + 33);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0198; }
SET32(2, RW(0) + 32);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0198; }
SET32(2, RW(0) + 31);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0198; }
SET64(2, RD(0) + RD(0)); goto L_002F019C;
L_002F0198:;
SET64(2, RD(0) + (s64)1);
L_002F019C:;
if (RD(2) == RD(0)) { SET32(2, RW(0) + 57); goto L_002F01AC; }
SET32(2, RW(0) + 1); goto L_002F0220;
L_002F01AC:;
if (RD(3) == RD(2)) { SET64(2, RD(0) + (s64)1); goto L_002F0214; }
SET32(2, RW(0) + 48);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0210; }
SET32(2, RW(0) + 47);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0210; }
SET32(2, RW(0) + 46);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0210; }
SET32(2, RW(0) + 45);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0210; }
SET32(2, RW(0) + 44);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0210; }
SET32(2, RW(0) + 43);
{ int t = RD(3) == RD(2);  if (t) goto L_002F0210; }
SET32(2, RW(0) + 42);
L_002F0200:;
{ int t = RD(3) == RD(2);  if (t) goto L_002F0210; }
SET64(2, RD(0) + RD(0)); goto L_002F0214;
L_002F0210:;
SET64(2, RD(0) + (s64)1);
L_002F0214:;
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002F0220; }
SET32(2, RW(0) + 1);
L_002F0220:;
 return;
}
void JP_F_002F00F0(Ctx *c) { JP_B_002F00F0(c, 0x2f00f0); }
void JP_F_002F0200(Ctx *c) { JP_B_002F00F0(c, 0x2f0200); }

void JP_F_002F0230(Ctx *c) { /* func_002F0230 */
ENTER(0x2f0230);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(0) + 57);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 1); goto L_002F02A0; }
SET32(2, RW(0) + 48);
{ int t = RD(3) == RD(2);  if (t) goto L_002F029C; }
SET32(2, RW(0) + 47);
{ int t = RD(3) == RD(2);  if (t) goto L_002F029C; }
SET32(2, RW(0) + 46);
{ int t = RD(3) == RD(2);  if (t) goto L_002F029C; }
SET32(2, RW(0) + 45);
{ int t = RD(3) == RD(2);  if (t) goto L_002F029C; }
SET32(2, RW(0) + 44);
{ int t = RD(3) == RD(2);  if (t) goto L_002F029C; }
SET32(2, RW(0) + 43);
{ int t = RD(3) == RD(2);  if (t) goto L_002F029C; }
SET32(2, RW(0) + 42);
{ int t = RD(3) == RD(2);  if (t) goto L_002F029C; }
SET64(2, RD(0) + RD(0)); goto L_002F02A0;
L_002F029C:;
SET32(2, RW(0) + 1);
L_002F02A0:;
 return;
}

static void JP_B_002F02B0(Ctx *c, u32 entry) { /* func_002F02B0 */
ENTER(entry);
switch (entry) { case 0x2f02e0: goto L_002F02E0; case 0x2f02e8: goto L_002F02E8; }
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(2) + -9);
SET64(1, RD(2) < (u64)(s64)11);
if (RD(1) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002F02EC; }
SET64(3, (s64)(s32)0x4c0000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + -9552);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x2f02e0: goto L_002F02E0; case 0x2f02e8: goto L_002F02E8; default: rt_jump(c, t); return; } }
L_002F02E0:;
SET32(2, RW(0) + 1); goto L_002F02EC;
L_002F02E8:;
SET64(2, RD(0) + RD(0));
L_002F02EC:;
 return;
}
void JP_F_002F02B0(Ctx *c) { JP_B_002F02B0(c, 0x2f02b0); }
void JP_F_002F02E0(Ctx *c) { JP_B_002F02B0(c, 0x2f02e0); }
void JP_F_002F02E8(Ctx *c) { JP_B_002F02B0(c, 0x2f02e8); }

static void JP_B_002F0300(Ctx *c, u32 entry) { /* func_002F0300 */
ENTER(entry);
switch (entry) { case 0x2f0330: goto L_002F0330; }
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(2) + -8);
SET64(1, RD(2) < (u64)(s64)12);
if (RD(1) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002F033C; }
SET64(3, (s64)(s32)0x4c0000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + -9504);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x2f0330: goto L_002F0330; default: rt_jump(c, t); return; } }
L_002F0330:;
SET32(2, RW(0) + 1); goto L_002F033C;
SET64(2, RD(0) + RD(0));
L_002F033C:;
 return;
}
void JP_F_002F0300(Ctx *c) { JP_B_002F0300(c, 0x2f0300); }
void JP_F_002F0330(Ctx *c) { JP_B_002F0300(c, 0x2f0330); }

void JP_F_002F0350(Ctx *c) { /* func_002F0350 */
ENTER(0x2f0350);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1); return;
}

void JP_F_002F0360(Ctx *c) { /* func_002F0360 */
ENTER(0x2f0360);
 return;
}

void JP_F_002F0370(Ctx *c) { /* func_002F0370 */
ENTER(0x2f0370);
 return;
}

void JP_F_002F0380(Ctx *c) { /* func_002F0380 */
ENTER(0x2f0380);
SET32(2, RW(0) + 1); return;
}

void JP_F_002F0390(Ctx *c) { /* func_002F0390 */
ENTER(0x2f0390);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(5) + 44)));
SET64(31, 0x2f03ac); SET64(17, RD(4) + RD(0)); JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
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

void JP_F_002F03E0(Ctx *c) { /* func_002F03E0 */
ENTER(0x2f03e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(5) + 44)));
SET64(31, 0x2f03fc); SET64(17, RD(4) + RD(0)); JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
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

void JP_F_002F0430(Ctx *c) { /* func_002F0430 */
ENTER(0x2f0430);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_002F0440(Ctx *c) { /* func_002F0440 */
ENTER(0x2f0440);
SET64(3, (s32)rd32(c, (RW(4) + 44)));
rd128(c, (RW(3) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 64) & ~15u, &c->r[3]); return;
}

void JP_F_002F0450(Ctx *c) { /* func_002F0450 */
ENTER(0x2f0450);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 12), RW(3));
c->f[5].u = rd32(c, (RW(4) + 72));
wr32(c, (RW(29) + 28), RW(3));
c->f[3].u = rd32(c, (RW(4) + 68));
SET64(3, (s32)rd32(c, (RW(4) + 44)));
c->f[1].u = rd32(c, (RW(4) + 64));
wr32(c, (RW(29) + 0), RW(0));
wr32(c, (RW(29) + 4), RW(0));
rd128(c, (RW(3) + 48) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 8), RW(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[3]);
c->f[4].u = rd32(c, (RW(29) + 8));
c->f[2].u = rd32(c, (RW(29) + 4));
c->f[0].u = rd32(c, (RW(29) + 0));
c->f[4].f = fpu(F(4) - F(5));
c->f[2].f = fpu(F(2) - F(3));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(29) + 24), c->f[4].u);
wr32(c, (RW(29) + 20), c->f[2].u);
wr32(c, (RW(29) + 16), c->f[0].u);
rd128(c, (RW(29) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 80) & ~15u, &c->r[3]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002F04C0(Ctx *c) { /* func_002F04C0 */
ENTER(0x2f04c0);
 return;
}

void JP_F_002F04D0(Ctx *c) { /* func_002F04D0 */
ENTER(0x2f04d0);
 return;
}

void JP_F_002F04E0(Ctx *c) { /* func_002F04E0 */
ENTER(0x2f04e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[0].u = rd32(c, (RW(5) + 144));
SET64(31, 0x2f04f4); wr32(c, (RW(4) + 144), c->f[0].u); JP_F_001F0890(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002F0500(Ctx *c) { /* func_002F0500 */
ENTER(0x2f0500);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2f0510); SET64(4, (s32)rd32(c, (RW(4) + 384))); JP_F_00141B90(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002F0530(Ctx *c) { /* func_002F0530 */
ENTER(0x2f0530);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(4, RW(5) + 128);
SET64(31, 0x2f0550); SET64(5, rd16(c, (RW(5) + 1024))); JP_F_001520B0(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x2f055c); SET64(4, RD(17) + RD(0)); JP_F_002AF080(c);
rd128(c, (RW(16) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 96) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002F0590(Ctx *c) { /* func_002F0590 */
ENTER(0x2f0590);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(4, RW(5) + 128);
SET64(31, 0x2f05b0); SET64(5, rd16(c, (RW(5) + 2252))); JP_F_001520B0(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x2f05bc); SET64(4, RD(17) + RD(0)); JP_F_002AF080(c);
rd128(c, (RW(16) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 96) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002F05F0(Ctx *c) { /* func_002F05F0 */
ENTER(0x2f05f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 384)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2f060c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) & 0xff);
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002F0630(Ctx *c) { /* func_002F0630 */
ENTER(0x2f0630);
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_002F0640(Ctx *c) { /* func_002F0640 */
ENTER(0x2f0640);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2f0650); SET32(4, RW(4) + 128); JP_F_001EA7B0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002F0660(Ctx *c) { /* func_002F0660 */
ENTER(0x2f0660);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2f0670); SET32(4, RW(4) + 128); JP_F_0031D610(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002F0680(Ctx *c) { /* func_002F0680 */
ENTER(0x2f0680);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2f0690); SET32(4, RW(4) + 128); JP_F_0031D630(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002F06A0(Ctx *c) { /* func_002F06A0 */
ENTER(0x2f06a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2f06b0); SET32(4, RW(4) + 128); JP_F_0031D650(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002F06C0(Ctx *c) { /* func_002F06C0 */
ENTER(0x2f06c0);
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_002F06D0(Ctx *c) { /* func_002F06D0 */
ENTER(0x2f06d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002F0908; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 15328);
SET64(9, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15396);
wr32(c, (RW(17) + 12), RW(3));
wr32(c, (RW(17) + 404), RW(2));
SET64(7, (s64)(s32)0x4e0000);
SET64(8, (s32)rd32(c, (RW(17) + 384)));
SET32(9, RW(9) + 15728);
SET64(6, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x8a70);
SET32(7, RW(7) + 15468);
wr32(c, (RW(8) + 16), RW(9));
SET32(6, RW(6) + 15500);
wr32(c, (RW(17) + 560), RW(7));
SET32(5, RW(5) + 15664);
SET32(2, RW(17) + RW(2));
wr32(c, (RW(17) + 888), RW(6));
SET32(3, RW(17) + RW(1));
wr32(c, (RW(2) + -31056), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 384)));
SET32(2, RW(3) - RW(5));
wr32(c, (RW(5) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 356)));
{ u32 t = RW(25); SET64(31, 0x2f0764);  rt_call(c, t); }
SET64(1, RD(0) | 0x89d0);
SET32(2, RW(17) + RW(1));
if (RD(2) == RD(0)) { SET64(1, RD(0) | 0x8710); goto L_002F078C; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(3) + 15024);
SET32(2, RW(17) + RW(2));
wr32(c, (RW(2) + -30252), RW(3));
SET64(1, RD(0) | 0x8710);
L_002F078C:;
SET64(5, (s64)(s32)0x180000);
SET32(4, RW(17) + RW(1));
SET32(5, RW(5) + -29088);
SET32(6, RW(0) + 64);
SET64(31, 0x2f07a4); SET32(7, RW(0) + 1); JP_F_00102360(c);
SET64(1, RD(0) | 0x86e0);
SET32(4, RW(17) + RW(1));
if (RD(4) == RD(0)) { SET64(1, RD(0) | 0x86a0); goto L_002F07D4; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(3) + 6112);
SET32(2, RW(17) + RW(2));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2f07d0); wr32(c, (RW(2) + -30976), RW(3)); JP_F_002B5FF0(c);
SET64(1, RD(0) | 0x86a0);
L_002F07D4:;
SET32(4, RW(17) + RW(1));
if (RD(4) == RD(0)) { SET32(2, RW(17) + 128); goto L_002F07FC; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(3) + 15008);
SET32(2, RW(17) + RW(2));
SET64(31, 0x2f07f8); wr32(c, (RW(2) + -31056), RW(3)); JP_F_00300180(c);
SET32(2, RW(17) + 128);
L_002F07FC:;
{ int t = RD(2) == RD(0);  if (t) goto L_002F0870; }
SET64(2, (s64)(s32)0x4e0000);
SET64(9, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 19872);
SET64(8, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 404), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(7, (s32)rd32(c, (RW(17) + 384)));
SET32(9, RW(9) + 20140);
SET64(1, RD(0) | 0x86e0);
SET64(5, (s64)(s32)0x2f0000);
SET32(8, RW(8) + 19944);
SET32(3, RW(3) + 19976);
wr32(c, (RW(7) + 16), RW(9));
SET32(2, RW(17) + RW(1));
wr32(c, (RW(17) + 560), RW(8));
SET32(4, RW(17) + 31184);
wr32(c, (RW(17) + 888), RW(3));
SET32(5, RW(5) + 80);
SET64(3, (s32)rd32(c, (RW(17) + 384)));
SET32(6, RW(0) + 160);
SET32(7, RW(0) + 20);
SET32(2, RW(2) - RW(3));
SET64(31, 0x2f0864); wr32(c, (RW(3) + 20), RW(2)); JP_F_00102360(c);
SET32(4, RW(17) + 128);
SET64(31, 0x2f0870); SET64(5, RD(0) + RD(0)); JP_F_0019BEE0(c);
L_002F0870:;
{ int t = RD(17) == RD(0);  if (t) goto L_002F08B4; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 14928);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 12), RW(2)); if (t) goto L_002F08B4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(25); SET64(31, 0x2f08a0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_002F08B4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 12), RW(2));
L_002F08B4:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_002F08F4; }
SET64(1, RD(0) | 0x8a70);
SET32(4, RW(17) + RW(1));
{ int t = RD(4) == RD(0);  if (t) goto L_002F08F0; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(3) + -3184);
SET32(2, RW(17) + RW(2));
wr32(c, (RW(2) + -30080), RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2f08f0);  rt_call(c, t); }
L_002F08F0:;
SET64(2, RD(16) << 48);
L_002F08F4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002F090C; }
SET64(31, 0x2f0908); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002F0908:;
SET64(2, RD(17) + RD(0));
L_002F090C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002F0920(Ctx *c) { /* func_002F0920 */
ENTER(0x2f0920);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(24, (s64)(s32)0xffff0000);
SET64(24, RD(24) | 0x7610);
SET32(4, RW(4) + RW(24));
SET32(4, RW(4) + RW(25)); { JP_F_001C2670(c); return; }
}

void JP_F_002F0940(Ctx *c) { /* func_002F0940 */
ENTER(0x2f0940);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(24, (s64)(s32)0xffff0000);
SET64(24, RD(24) | 0x7590);
SET32(4, RW(4) + RW(24));
SET32(4, RW(4) + RW(25)); { JP_F_002F0660(c); return; }
}

void JP_F_002F0960(Ctx *c) { /* func_002F0960 */
ENTER(0x2f0960);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(24, (s64)(s32)0xffff0000);
SET64(24, RD(24) | 0x7590);
SET32(4, RW(4) + RW(24));
SET32(4, RW(4) + RW(25)); { JP_F_002EF4C0(c); return; }
}

void JP_F_002F0980(Ctx *c) { /* func_002F0980 */
ENTER(0x2f0980);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(24, (s64)(s32)0xffff0000);
SET64(24, RD(24) | 0x7590);
SET32(4, RW(4) + RW(24));
SET32(4, RW(4) + RW(25)); { JP_F_002F06D0(c); return; }
}

void JP_F_002F09A0(Ctx *c) { /* func_002F09A0 */
ENTER(0x2f09a0);
SET32(4, RW(4) + -416); { JP_F_002F06D0(c); return; }
}

void JP_F_002F09B0(Ctx *c) { /* func_002F09B0 */
ENTER(0x2f09b0);
SET32(4, RW(4) + -832); { JP_F_002F06D0(c); return; }
}

void JP_F_002F09C0(Ctx *c) { /* func_002F09C0 */
ENTER(0x2f09c0);
SET32(4, RW(4) + -128); { JP_F_002E8310(c); return; }
}

void JP_F_002F09D0(Ctx *c) { /* func_002F09D0 */
ENTER(0x2f09d0);
SET32(4, RW(4) + -128); { JP_F_002F0640(c); return; }
}

void JP_F_002F09E0(Ctx *c) { /* func_002F09E0 */
ENTER(0x2f09e0);
SET32(5, RW(5) + -128); { JP_F_002E8140(c); return; }
}

void JP_F_002F09F0(Ctx *c) { /* func_002F09F0 */
ENTER(0x2f09f0);
SET32(5, RW(5) + -128); { JP_F_002E8160(c); return; }
}

void JP_F_002F0A00(Ctx *c) { /* func_002F0A00 */
ENTER(0x2f0a00);
SET32(4, RW(4) + -128); { JP_F_002EEEB0(c); return; }
}

void JP_F_002F0A10(Ctx *c) { /* func_002F0A10 */
ENTER(0x2f0a10);
SET32(4, RW(4) + -128); { JP_F_002EF4C0(c); return; }
}

void JP_F_002F0A20(Ctx *c) { /* func_002F0A20 */
ENTER(0x2f0a20);
SET32(4, RW(4) + -128); { JP_F_002F06D0(c); return; }
}

void JP_F_002F0A30(Ctx *c) { /* func_002F0A30 */
ENTER(0x2f0a30);
SET32(4, RW(4) + -128); { JP_F_002ED610(c); return; }
}

void JP_F_002F0A40(Ctx *c) { /* func_002F0A40 */
ENTER(0x2f0a40);
SET32(4, RW(4) + -128); { JP_F_002ED620(c); return; }
}

void JP_F_002F0A50(Ctx *c) { /* func_002F0A50 */
ENTER(0x2f0a50);
SET32(4, RW(4) + -128); { JP_F_002F0660(c); return; }
}

void JP_F_002F0A60(Ctx *c) { /* func_002F0A60 */
ENTER(0x2f0a60);
SET32(4, RW(4) + -128); { JP_F_002F0680(c); return; }
}

void JP_F_002F0A70(Ctx *c) { /* func_002F0A70 */
ENTER(0x2f0a70);
SET32(4, RW(4) + -128); { JP_F_002F06A0(c); return; }
}

void JP_F_002F0A80(Ctx *c) { /* func_002F0A80 */
ENTER(0x2f0a80);
SET32(4, RW(4) + -128); { JP_F_002F06C0(c); return; }
}

void JP_F_002F0A90(Ctx *c) { /* func_002F0A90 */
ENTER(0x2f0a90);
SET64(24, (s64)(s32)0xffff0000);
SET64(24, RD(24) | 0x7960);
SET32(5, RW(5) + RW(24));
 { JP_F_003005C0(c); return; }
}

void JP_F_002F0AB0(Ctx *c) { /* func_002F0AB0 */
ENTER(0x2f0ab0);
SET64(24, (s64)(s32)0xffff0000);
SET64(24, RD(24) | 0x7960);
SET32(4, RW(4) + RW(24));
 { JP_F_002F06D0(c); return; }
}

void JP_F_002F0AD0(Ctx *c) { /* func_002F0AD0 */
ENTER(0x2f0ad0);
SET32(4, RW(4) + -80); { JP_F_002E8F90(c); return; }
}

void JP_F_002F0AE0(Ctx *c) { /* func_002F0AE0 */
ENTER(0x2f0ae0);
SET32(4, RW(4) + -100); { JP_F_002E8F90(c); return; }
}

void JP_F_002F0AF0(Ctx *c) { /* func_002F0AF0 */
ENTER(0x2f0af0);
SET32(4, RW(4) + -76); { JP_F_002E8F90(c); return; }
}

void JP_F_002F0B00(Ctx *c) { /* func_002F0B00 */
ENTER(0x2f0b00);
SET32(4, RW(4) + -80); { JP_F_002EF5B0(c); return; }
}

void JP_F_002F0B10(Ctx *c) { /* func_002F0B10 */
ENTER(0x2f0b10);
SET32(4, RW(4) + -100); { JP_F_002EF5B0(c); return; }
}

void JP_F_002F0B20(Ctx *c) { /* func_002F0B20 */
ENTER(0x2f0b20);
SET32(4, RW(4) + -76); { JP_F_002EF5B0(c); return; }
}

void JP_F_002F0B30(Ctx *c) { /* func_002F0B30 */
ENTER(0x2f0b30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 48)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002F0B58; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 60)));
{ u32 t = RW(25); SET64(31, 0x2f0b54);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_002F0B58:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002F0B60(Ctx *c) { /* func_002F0B60 */
ENTER(0x2f0b60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 48)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002F0B88; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2f0b84);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_002F0B88:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002F0B90(Ctx *c) { /* func_002F0B90 */
ENTER(0x2f0b90);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 48)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002F0BB8; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x2f0bb4);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_002F0BB8:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002F0BC0(Ctx *c) { /* func_002F0BC0 */
ENTER(0x2f0bc0);
SET64(2, rd16(c, (RW(4) + 44)));
SET32(3, RW(2) + 1);
{ int t = RSD(3) >= 0; SET64(2, RD(3) & 0x1); if (t) goto L_002F0BDC; }
if (RD(2) == RD(0)) { SET64(4, RD(2) & 0xffff); goto L_002F0BE0; }
SET32(2, RW(2) + -2);
L_002F0BDC:;
SET64(4, RD(2) & 0xffff);
L_002F0BE0:;
SET32(3, RW(4) << 1);
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) + 864); return;
}

void JP_F_002F0C10(Ctx *c) { /* func_002F0C10 */
ENTER(0x2f0c10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(4) == RD(0); SET64(16, RD(0) + (s64)1); if (t) goto L_002F0C48; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2f0c38);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(16) + RD(0)); goto L_002F0C4C; }
SET64(16, RD(0) + RD(0));
L_002F0C48:;
SET64(2, RD(16) + RD(0));
L_002F0C4C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002F0C60(Ctx *c) { /* func_002F0C60 */
ENTER(0x2f0c60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(16, RW(4) + 48);
SET64(4, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(4) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002F0CAC; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2f0c90);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002F0CB0; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f0cac); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
L_002F0CAC:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002F0CB0:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002F0CC0(Ctx *c) { /* func_002F0CC0 */
ENTER(0x2f0cc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(16, RW(4) + 48);
SET64(4, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(4) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002F0D10; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2f0cf0);  rt_call(c, t); }
SET64(3, RD(2) & 0xff);
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002F0D14; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2f0d10); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
L_002F0D10:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002F0D14:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002F0D30(Ctx *c) { /* func_002F0D30 */
ENTER(0x2f0d30);
SET32(29, RW(29) + -16);
SET64(2, RD(5) & 0xffff);
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + RW(4));
SET64(4, (s32)rd32(c, (RW(2) + 48)));
if (RD(4) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002F0D58; }
SET64(31, 0x2f0d58);  JP_F_002F11B0(c);
L_002F0D58:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002F0D70(Ctx *c) { /* func_002F0D70 */
ENTER(0x2f0d70);
SET32(29, RW(29) + -16);
SET64(2, RD(5) & 0xffff);
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + RW(4));
SET64(4, (s32)rd32(c, (RW(2) + 48)));
if (RD(4) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002F0D98; }
SET64(31, 0x2f0d98);  JP_F_002F11B0(c);
L_002F0D98:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002F0DB0(Ctx *c) { /* func_002F0DB0 */
ENTER(0x2f0db0);
SET32(29, RW(29) + -64);
SET64(3, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(2, RD(3) & 0xffff);
L_002F0DD4:;
SET32(2, RW(2) << 2);
SET32(2, RW(17) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + 48)));
if (RD(2) != RD(0)) { SET32(2, RW(3) + 1); goto L_002F0DF4; }
SET64(18, RD(3) << 48);
SET64(18, RSD(18) >> 48); goto L_002F0E04;
L_002F0DF4:;
SET64(3, RD(2) & 0xffff);
if (RSD(3) <= 0) { SET64(2, RD(3) & 0xffff); { POLL(); goto L_002F0DD4; } }
SET32(18, RW(0) + -1);
L_002F0E04:;
SET64(6, RD(18) & 0xffff);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2f0e14); SET64(5, RD(17) + RD(0)); JP_F_002F10F0(c);
SET64(3, RD(18) << 48);
SET64(3, RSD(3) >> 48);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(17));
wr32(c, (RW(3) + 48), RW(16));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002F0E40(Ctx *c) { /* func_002F0E40 */
ENTER(0x2f0e40);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(16) == RD(0); SET32(17, RW(18) + 48); if (t) goto L_002F0EC8; }
SET64(31, 0x2f0e6c); SET64(4, RD(16) + RD(0)); JP_F_002F1070(c);
SET64(4, RD(0) + RD(0));
SET64(3, RD(4) & 0xffff);
L_002F0E74:;
SET32(3, RW(3) << 2);
SET32(3, RW(18) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 48)));
if (RD(3) != RD(16)) { SET32(3, RW(4) + 1); goto L_002F0E94; }
SET64(3, RD(4) << 48);
SET64(3, RSD(3) >> 48); goto L_002F0EA4;
L_002F0E94:;
SET64(4, RD(3) & 0xffff);
if (RSD(4) <= 0) { SET64(3, RD(4) & 0xffff); { POLL(); goto L_002F0E74; } }
SET32(3, RW(0) + -1);
L_002F0EA4:;
SET64(4, RD(3) << 48);
SET64(4, RSD(4) >> 48);
SET32(3, RW(0) + -1);
if (RD(4) == RD(3)) { wr32(c, (RW(17) + 0), RW(0)); goto L_002F0EC8; }
SET32(3, RW(4) << 2);
SET32(3, RW(18) + RW(3));
wr32(c, (RW(3) + 48), RW(0));
wr32(c, (RW(17) + 0), RW(0));
L_002F0EC8:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002F0EE0(Ctx *c) { /* func_002F0EE0 */
ENTER(0x2f0ee0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(16) == RD(0); SET32(17, RW(18) + 48); if (t) goto L_002F0F68; }
SET64(31, 0x2f0f0c); SET64(4, RD(16) + RD(0)); JP_F_002F1070(c);
SET64(4, RD(0) + RD(0));
SET64(3, RD(4) & 0xffff);
L_002F0F14:;
SET32(3, RW(3) << 2);
SET32(3, RW(18) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 48)));
if (RD(3) != RD(16)) { SET32(3, RW(4) + 1); goto L_002F0F34; }
SET64(3, RD(4) << 48);
SET64(3, RSD(3) >> 48); goto L_002F0F44;
L_002F0F34:;
SET64(4, RD(3) & 0xffff);
if (RSD(4) <= 0) { SET64(3, RD(4) & 0xffff); { POLL(); goto L_002F0F14; } }
SET32(3, RW(0) + -1);
L_002F0F44:;
SET64(4, RD(3) << 48);
SET64(4, RSD(4) >> 48);
SET32(3, RW(0) + -1);
if (RD(4) == RD(3)) { wr32(c, (RW(17) + 0), RW(0)); goto L_002F0F68; }
SET32(3, RW(4) << 2);
SET32(3, RW(18) + RW(3));
wr32(c, (RW(3) + 48), RW(0));
wr32(c, (RW(17) + 0), RW(0));
L_002F0F68:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
if (RD(3) == RD(0)) { wr32(c, (RW(18) + 4), RW(0)); goto L_002F0FCC; }
SET32(4, RW(3) + 8);
SET64(3, (s32)rd32(c, (RW(3) + 8)));
if (RD(3) != RD(18)) { SET32(4, RW(3) + 4); goto L_002F0F98; }
SET64(3, (s32)rd32(c, (RW(18) + 4)));
if (RD(3) != RD(0)) { wr32(c, (RW(4) + 0), RW(3)); goto L_002F0FC8; }
wr32(c, (RW(4) + 0), RW(0)); goto L_002F0FC8;
L_002F0F98:;
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(18);  if (t) goto L_002F0FC0; }
L_002F0FA4:;
SET32(4, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(18);  if (t) { POLL(); goto L_002F0FA4; } }
L_002F0FC0:;
SET64(3, (s32)rd32(c, (RW(18) + 4)));
wr32(c, (RW(4) + 0), RW(3));
L_002F0FC8:;
wr32(c, (RW(18) + 4), RW(0));
L_002F0FCC:;
wr32(c, (RW(18) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002F0FF0(Ctx *c) { /* func_002F0FF0 */
ENTER(0x2f0ff0);
wr16(c, (RW(4) + 44), (u16)RW(5)); return;
}

void JP_F_002F1000(Ctx *c) { /* func_002F1000 */
ENTER(0x2f1000);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -3136);
SET64(6, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 12), RW(2));
SET32(5, RW(5) + 15776);
wr32(c, (RW(4) + 0), RW(0));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(4) + 4), RW(0));
SET32(2, RW(2) + -3104);
wr32(c, (RW(4) + 8), RW(0));
SET32(3, RW(0) + -1);
wr32(c, (RW(4) + 12), RW(2));
wr32(c, (RW(4) + 16), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 20), RW(6));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr8(c, (RW(4) + 32), (u8)RW(0));
wr32(c, (RW(4) + 12), RW(5));
wr16(c, (RW(4) + 44), (u16)RW(3));
wr32(c, (RW(4) + 48), RW(0)); return;
}

void JP_F_002F1070(Ctx *c) { /* func_002F1070 */
ENTER(0x2f1070);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
if (RD(3) == RD(0)) { wr32(c, (RW(4) + 4), RW(0)); goto L_002F10D4; }
SET32(5, RW(3) + 8);
SET64(3, (s32)rd32(c, (RW(3) + 8)));
if (RD(3) != RD(4)) { SET32(5, RW(3) + 4); goto L_002F10A0; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
if (RD(3) != RD(0)) { wr32(c, (RW(5) + 0), RW(3)); goto L_002F10D0; }
wr32(c, (RW(5) + 0), RW(0)); goto L_002F10D0;
L_002F10A0:;
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(4);  if (t) goto L_002F10C8; }
L_002F10AC:;
SET32(5, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(4);  if (t) { POLL(); goto L_002F10AC; } }
L_002F10C8:;
SET64(3, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(5) + 0), RW(3));
L_002F10D0:;
wr32(c, (RW(4) + 4), RW(0));
L_002F10D4:;
SET64(3, RD(0) | 0xffff);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 52), RW(0));
wr16(c, (RW(4) + 56), (u16)RW(3)); return;
}

void JP_F_002F10F0(Ctx *c) { /* func_002F10F0 */
ENTER(0x2f10f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(4) + 52), RW(5));
SET64(2, (s32)rd32(c, (RW(5) + 8)));
{ int t = RD(2) == RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_002F1158; }
SET32(3, RW(2) + 4);
SET64(2, (s32)rd32(c, (RW(2) + 4)));
if (RD(2) == RD(0)) { wr32(c, (RW(3) + 0), RW(17)); goto L_002F115C; }
SET32(3, RW(2) + 4);
SET64(2, (s32)rd32(c, (RW(2) + 4)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F1150; }
L_002F1134:;
SET32(3, RW(2) + 4);
SET64(2, (s32)rd32(c, (RW(2) + 4)));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002F1134; } }
L_002F1150:;
wr32(c, (RW(3) + 0), RW(17)); goto L_002F115C;
L_002F1158:;
wr32(c, (RW(5) + 8), RW(17));
L_002F115C:;
wr32(c, (RW(17) + 0), RW(5));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(17) + 16), RW(0));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 20), RW(2));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr32(c, (RW(17) + 40), RW(0));
wr32(c, (RW(17) + 36), RW(0));
SET64(31, 0x2f1188); wr8(c, (RW(17) + 32), (u8)RW(0)); JP_F_00141CB0(c);
wr16(c, (RW(17) + 56), (u16)RW(16));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002F11A0(Ctx *c) { /* func_002F11A0 */
ENTER(0x2f11a0);
SET64(2, (s32)rd32(c, (RW(4) + 52))); return;
}

void JP_F_002F11B0(Ctx *c) { /* func_002F11B0 */
ENTER(0x2f11b0);
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_002F11C0(Ctx *c) { /* func_002F11C0 */
ENTER(0x2f11c0);
SET32(29, RW(29) + -32);
SET64(2, RD(5) << 48);
wr64(c, (RW(29) + 16), RD(31));
SET64(2, RSD(2) >> 48);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002F11E8; }
SET32(4, RW(16) + 96);
SET64(31, 0x2f11e8); wr32(c, (RW(16) + 44), RW(4)); JP_F_002AF080(c);
L_002F11E8:;
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 12), RW(2));
SET32(5, RW(5) + -3104);
wr32(c, (RW(16) + 0), RW(0));
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 4), RW(0));
SET32(3, RW(3) + 14928);
wr32(c, (RW(16) + 8), RW(0));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 12), RW(5));
wr32(c, (RW(16) + 16), RW(0));
wr32(c, (RW(16) + 20), RW(4));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr32(c, (RW(16) + 40), RW(0));
wr32(c, (RW(16) + 36), RW(0));
wr8(c, (RW(16) + 32), (u8)RW(0));
wr32(c, (RW(16) + 12), RW(3));
wr32(c, (RW(16) + 52), RW(0));
wr32(c, (RW(16) + 64), RW(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 76), RW(4));
wr32(c, (RW(16) + 80), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 92), RW(4));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002F1270(Ctx *c) { /* func_002F1270 */
ENTER(0x2f1270);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -9376); return;
}

void JP_F_002F1280(Ctx *c) { /* func_002F1280 */
ENTER(0x2f1280);
 return;
}

void JP_F_002F1290(Ctx *c) { /* func_002F1290 */
ENTER(0x2f1290);
SET32(29, RW(29) + -16);
SET64(2, RD(5) & 0xffff);
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + RW(4));
SET64(31, 0x2f12ac); SET64(4, (s32)rd32(c, (RW(2) + 968))); JP_F_002ED670(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002F12C0(Ctx *c) { /* func_002F12C0 */
ENTER(0x2f12c0);
SET32(29, RW(29) + -16);
SET64(2, RD(5) & 0xffff);
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + RW(4));
SET64(4, (s32)rd32(c, (RW(2) + 968)));
SET64(31, 0x2f12e0); SET64(5, RD(6) + RD(0)); JP_F_002EAD30(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002F12F0(Ctx *c) { /* func_002F12F0 */
ENTER(0x2f12f0);
SET32(29, RW(29) + -80);
SET32(2, RW(0) + 3);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr8(c, (RW(4) + 724), (u8)RW(0));
wr8(c, (RW(4) + 725), (u8)RW(0));
SET64(3, rd16(c, (RW(4) + 728)));
{ int t = RD(3) == RD(2); SET64(19, RD(4) + RD(0)); if (t) goto L_002F1474; }
SET64(3, (s16)rd16(c, (RW(19) + 1896)));
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET64(6, RD(3) ^ RD(0)); goto L_002F1418; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(19) + RD(0));
SET64(16, RD(19) + RD(0));
L_002F133C:;
SET64(5, (s32)rd32(c, (RW(17) + 836)));
{ int t = RD(5) == RD(0); SET64(4, rd16(c, (RW(16) + 860))); if (t) goto L_002F1380; }
SET32(3, RW(4) << 1);
SET64(2, RD(0) | 0xffff);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET32(3, RW(5) + RW(3));
SET64(3, rd16(c, (RW(3) + 0)));
{ int t = RD(3) == RD(2);  if (t) goto L_002F1380; }
SET32(3, RW(0) + 1);
SET32(2, RW(19) + RW(18));
wr8(c, (RW(2) + 724), (u8)RW(3));
L_002F1380:;
SET64(2, rd8(c, (RW(19) + 1894)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F13E0; }
SET32(2, RW(19) + RW(18));
SET64(2, rd8(c, (RW(2) + 724)));
{ int t = RD(2) != RD(0);  if (t) goto L_002F13E0; }
SET64(3, RD(18) & 0xffff);
SET64(5, RD(0) + RD(0));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(19) + RW(2));
SET64(31, 0x2f13c4); SET32(4, RW(2) + 864); JP_F_002F0D70(c);
SET64(1, RD(0) | 0x87b0);
SET32(4, RW(2) + RW(1));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2f13dc);  JP_F_00323BA0(c);
L_002F13E0:;
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)2);
SET32(17, RW(17) + 4);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_002F133C; } }
SET64(2, rd8(c, (RW(19) + 724)));
if (RD(2) != RD(0)) { SET32(2, RW(0) + 1); goto L_002F1478; }
SET64(2, rd8(c, (RW(19) + 725)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002F1478; }
SET32(2, RW(0) + 1);
 goto L_002F1478;
L_002F1418:;
SET64(6, RD(6) < (u64)(s64)1);
SET32(2, RW(6) << 2);
SET32(2, RW(2) + RW(19));
SET64(5, (s32)rd32(c, (RW(2) + 836)));
{ int t = RD(5) == RD(0);  if (t) goto L_002F1474; }
SET32(3, RW(6) << 1);
SET64(2, RD(0) | 0xffff);
SET32(3, RW(3) + RW(19));
SET64(4, rd16(c, (RW(3) + 860)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET32(3, RW(5) + RW(3));
SET64(3, rd16(c, (RW(3) + 0)));
{ int t = RD(3) == RD(2);  if (t) goto L_002F1474; }
SET32(3, RW(6) + RW(19));
SET32(2, RW(0) + 1);
wr8(c, (RW(3) + 724), (u8)RW(2)); goto L_002F1478;
L_002F1474:;
SET64(2, RD(0) + RD(0));
L_002F1478:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002F14A0(Ctx *c) { /* func_002F14A0 */
ENTER(0x2f14a0);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, rd16(c, (RW(4) + 728)));
if (RD(4) != RD(3)) { SET64(10, RD(0) + RD(0)); goto L_002F1558; }
SET64(5, rd16(c, (RW(16) + 850)));
SET64(31, 0x2f14cc); SET64(4, (s32)rd32(c, (RW(28) + -29612))); JP_F_0032A6D0(c);
SET64(3, rd16(c, (RW(2) + 0)));
wr16(c, (RW(16) + 784), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 2)));
wr16(c, (RW(16) + 786), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 4)));
wr16(c, (RW(16) + 788), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 6)));
wr16(c, (RW(16) + 790), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 8)));
wr16(c, (RW(16) + 792), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 10)));
wr16(c, (RW(16) + 794), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 12)));
wr16(c, (RW(16) + 796), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 14)));
wr16(c, (RW(16) + 798), (u16)RW(3));
c->f[3].u = rd32(c, (RW(2) + 16));
c->f[2].u = rd32(c, (RW(2) + 20));
c->f[1].u = rd32(c, (RW(2) + 24));
c->f[0].u = rd32(c, (RW(2) + 28));
wr32(c, (RW(16) + 800), c->f[3].u);
wr32(c, (RW(16) + 804), c->f[2].u);
wr32(c, (RW(16) + 808), c->f[1].u);
wr32(c, (RW(16) + 812), c->f[0].u);
c->f[3].u = rd32(c, (RW(2) + 32));
c->f[2].u = rd32(c, (RW(2) + 36));
c->f[1].u = rd32(c, (RW(2) + 40));
c->f[0].u = rd32(c, (RW(2) + 44));
wr32(c, (RW(16) + 816), c->f[3].u);
wr32(c, (RW(16) + 820), c->f[2].u);
wr32(c, (RW(16) + 824), c->f[1].u);
wr32(c, (RW(16) + 828), c->f[0].u);
c->f[0].u = rd32(c, (RW(2) + 48));
wr32(c, (RW(16) + 832), c->f[0].u); goto L_002F1638;
L_002F1558:;
SET64(9, RD(16) + RD(0));
SET64(8, RD(16) + RD(0));
SET64(4, RD(0) | 0xffff);
L_002F1564:;
SET64(7, (s32)rd32(c, (RW(16) + 836)));
{ int t = RD(7) == RD(0);  if (t) goto L_002F1620; }
SET64(6, rd16(c, (RW(9) + 860)));
SET32(3, RW(6) << 1);
SET32(3, RW(3) + RW(6));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(6));
SET32(3, RW(3) << 2);
SET32(6, RW(7) + RW(3));
SET64(3, rd16(c, (RW(6) + 0)));
{ int t = RD(3) == RD(4); SET32(5, RW(8) + 732); if (t) goto L_002F1620; }
wr16(c, (RW(5) + 0), (u16)RW(3));
SET64(3, rd16(c, (RW(6) + 2)));
wr16(c, (RW(5) + 2), (u16)RW(3));
SET64(3, rd16(c, (RW(6) + 4)));
wr16(c, (RW(5) + 4), (u16)RW(3));
SET64(3, rd16(c, (RW(6) + 6)));
wr16(c, (RW(5) + 6), (u16)RW(3));
SET64(3, rd16(c, (RW(6) + 8)));
wr16(c, (RW(5) + 8), (u16)RW(3));
SET64(3, rd16(c, (RW(6) + 10)));
wr16(c, (RW(5) + 10), (u16)RW(3));
SET64(3, rd16(c, (RW(6) + 12)));
wr16(c, (RW(5) + 12), (u16)RW(3));
SET64(3, rd16(c, (RW(6) + 14)));
wr16(c, (RW(5) + 14), (u16)RW(3));
c->f[3].u = rd32(c, (RW(6) + 16));
c->f[2].u = rd32(c, (RW(6) + 20));
c->f[1].u = rd32(c, (RW(6) + 24));
c->f[0].u = rd32(c, (RW(6) + 28));
wr32(c, (RW(5) + 16), c->f[3].u);
wr32(c, (RW(5) + 20), c->f[2].u);
wr32(c, (RW(5) + 24), c->f[1].u);
wr32(c, (RW(5) + 28), c->f[0].u);
c->f[3].u = rd32(c, (RW(6) + 32));
c->f[2].u = rd32(c, (RW(6) + 36));
c->f[1].u = rd32(c, (RW(6) + 40));
c->f[0].u = rd32(c, (RW(6) + 44));
wr32(c, (RW(5) + 32), c->f[3].u);
wr32(c, (RW(5) + 36), c->f[2].u);
wr32(c, (RW(5) + 40), c->f[1].u);
wr32(c, (RW(5) + 44), c->f[0].u);
c->f[0].u = rd32(c, (RW(6) + 48));
wr32(c, (RW(5) + 48), c->f[0].u);
L_002F1620:;
SET32(10, RW(10) + 1);
SET64(3, RD(10) < (u64)(s64)2);
SET32(16, RW(16) + 4);
SET32(9, RW(9) + 2);
{ int t = RD(3) != RD(0); SET32(8, RW(8) + 52); if (t) { POLL(); goto L_002F1564; } }
L_002F1638:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002F1650(Ctx *c) { /* func_002F1650 */
ENTER(0x2f1650);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr16(c, (RW(4) + 860), (u16)RW(0));
SET64(31, 0x2f1664); wr16(c, (RW(4) + 862), (u16)RW(0)); JP_F_002F14A0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002F1670(Ctx *c) { /* func_002F1670 */
ENTER(0x2f1670);
SET32(29, RW(29) + -304);
SET32(5, RW(0) + 23);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 60)));
{ int t = RD(3) == RD(5); SET64(17, RD(4) + RD(0)); if (t) goto L_002F3854; }
SET32(5, RW(0) + 22);
if (RD(3) == RD(5)) { c->f[2].u = rd32(c, (RW(17) + 588)); goto L_002F37C4; }
SET32(5, RW(0) + 21);
if (RD(3) == RD(5)) { c->f[2].u = rd32(c, (RW(17) + 588)); goto L_002F3768; }
SET32(5, RW(0) + 20);
if (RD(3) == RD(5)) { SET64(5, (s32)rd32(c, (RW(17) + 652))); goto L_002F35B4; }
SET32(5, RW(0) + 75);
{ int t = RD(3) == RD(5);  if (t) goto L_002F3574; }
SET32(5, RW(0) + 74);
if (RD(3) == RD(5)) { SET32(4, RW(17) + 916); goto L_002F3508; }
SET32(5, RW(0) + 73);
if (RD(3) == RD(5)) { SET32(4, RW(17) + 864); goto L_002F349C; }
SET32(5, RW(0) + 72);
if (RD(3) == RD(5)) { SET64(4, (s32)rd32(c, (RW(17) + 1536))); goto L_002F343C; }
SET32(5, RW(0) + 71);
if (RD(3) == RD(5)) { SET64(4, (s32)rd32(c, (RW(17) + 680))); goto L_002F33E4; }
SET32(5, RW(0) + 70);
if (RD(3) == RD(5)) { SET64(4, (s32)rd32(c, (RW(17) + 1936))); goto L_002F3040; }
SET32(5, RW(0) + 62);
if (RD(3) == RD(5)) { SET64(3, (s16)rd16(c, (RW(17) + 1896))); goto L_002F2F48; }
SET32(5, RW(0) + 61);
if (RD(3) == RD(5)) { SET64(3, (s16)rd16(c, (RW(17) + 1896))); goto L_002F2E68; }
SET32(5, RW(0) + 60);
if (RD(3) == RD(5)) { SET64(3, (s16)rd16(c, (RW(17) + 1896))); goto L_002F2DC4; }
SET32(5, RW(0) + 51);
if (RD(3) == RD(5)) { SET64(4, (s32)rd32(c, (RW(17) + 700))); goto L_002F2C30; }
SET32(5, RW(0) + 50);
if (RD(3) == RD(5)) { SET64(18, (s32)rd32(c, (RW(17) + 968))); goto L_002F298C; }
SET32(5, RW(0) + 45);
if (RD(3) == RD(5)) { SET64(3, (s16)rd16(c, (RW(17) + 1896))); goto L_002F25E0; }
SET32(5, RW(0) + 44);
if (RD(3) == RD(5)) { SET64(3, (s16)rd16(c, (RW(17) + 1896))); goto L_002F2400; }
SET32(5, RW(0) + 43);
if (RD(3) == RD(5)) { SET64(3, (s16)rd16(c, (RW(17) + 1896))); goto L_002F2210; }
SET32(5, RW(0) + 42);
if (RD(3) == RD(5)) { SET64(3, (s16)rd16(c, (RW(17) + 1896))); goto L_002F21A0; }
SET32(5, RW(0) + 41);
if (RD(3) == RD(5)) { SET64(3, (s16)rd16(c, (RW(17) + 1896))); goto L_002F2114; }
SET32(5, RW(0) + 40);
if (RD(3) == RD(5)) { SET64(2, (s64)(s32)0x3f800000); goto L_002F2084; }
SET32(5, RW(0) + 32);
if (RD(3) == RD(5)) { SET64(3, (s16)rd16(c, (RW(17) + 1896))); goto L_002F1E6C; }
SET32(5, RW(0) + 31);
if (RD(3) == RD(5)) { SET64(4, RD(17) + RD(0)); goto L_002F1CC0; }
SET32(5, RW(0) + 30);
if (RD(3) == RD(5)) { SET64(2, (s64)(s32)0x3f800000); goto L_002F1A38; }
SET32(5, RW(0) + 11);
if (RD(3) == RD(5)) { SET64(4, RD(17) + RD(0)); goto L_002F1988; }
SET32(5, RW(0) + 10);
if (RD(3) == RD(5)) { SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_002F1970; }
SET32(4, RW(0) + 1);
if (RD(3) == RD(4)) { SET64(4, RD(17) + RD(0)); goto L_002F1914; }
if (RD(3) == RD(0)) { SET64(2, rd16(c, (RW(17) + 728))); goto L_002F17E0; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_002F38E0;
L_002F17E0:;
SET32(2, RW(2) + -2);
SET64(1, RD(2) < (u64)(s64)3);
if (RD(1) == RD(0)) { SET64(4, (s16)rd16(c, (RW(17) + 1896))); goto L_002F1818; }
SET64(2, (s16)rd16(c, (RW(17) + 1896)));
{ int t = RD(2) != RD(0);  if (t) goto L_002F1814; }
SET64(2, rd16(c, (RW(17) + 1910)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 1910), (u16)RW(2));
SET64(2, rd16(c, (RW(17) + 850)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 850), (u16)RW(2));
L_002F1814:;
SET64(4, (s16)rd16(c, (RW(17) + 1896)));
L_002F1818:;
SET32(2, RW(0) + -1);
if (RD(4) == RD(2)) { SET64(3, (s16)rd16(c, (RW(17) + 1896))); goto L_002F1854; }
SET64(3, RD(4) & 0xffff);
SET32(2, RW(4) + 1);
SET32(3, RW(3) << 1);
SET64(2, RD(2) & 0x1);
SET32(4, RW(3) + RW(17));
SET32(2, RW(2) << 1);
SET64(3, rd16(c, (RW(4) + 1922)));
SET32(2, RW(2) + RW(17));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 1922), (u16)RW(3));
wr16(c, (RW(2) + 1922), (u16)RW(0));
SET64(3, (s16)rd16(c, (RW(17) + 1896)));
L_002F1854:;
SET32(2, RW(0) + -1);
if (RD(3) == RD(2)) { SET64(2, rd8(c, (RW(17) + 1893))); goto L_002F18A0; }
SET32(2, RW(3) << 2);
SET64(1, RD(0) | 0x87b0);
SET32(2, RW(2) + RW(17));
SET64(16, (s32)rd32(c, (RW(2) + 968)));
SET64(31, 0x2f1878); SET32(4, RW(16) + RW(1)); JP_F_00323A40(c);
SET64(2, (s64)(s32)0x41200000);
SET64(1, RD(0) | 0x89d0);
c->f[1].u = RW(2);
SET32(4, RW(16) + RW(1));
c->f[12].f = fpu_div(F(0), F(1));
SET64(31, 0x2f189c);  JP_F_003628D0(c);
SET64(2, rd8(c, (RW(17) + 1893)));
L_002F18A0:;
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 1312), RW(0)); goto L_002F18EC; }
SET64(31, 0x2f18b0); SET64(4, (s32)rd32(c, (RW(17) + 1936))); JP_F_00361360(c);
SET64(8, rd16(c, (RW(17) + 1932)));
SET64(4, (s32)rd32(c, (RW(17) + 1936)));
SET64(6, (s32)rd32(c, (RW(17) + 652)));
SET64(7, (s32)rd32(c, (RW(17) + 716)));
SET64(31, 0x2f18c8); SET32(5, RW(0) + 1); JP_F_003614A0(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f18e4); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 1536))); goto L_002F1908;
L_002F18EC:;
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f1900); SET32(5, RW(0) + 10); rt_call(c, t); }
 goto L_002F38DC;
L_002F1908:;
SET64(31, 0x2f1910);  JP_F_001BA1B0(c);
SET64(4, RD(17) + RD(0));
L_002F1914:;
SET64(31, 0x2f191c);  JP_F_002FDEF0(c);
SET64(31, 0x2f1924); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_001BA1B0(c);
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f1930); SET64(4, RD(17) + RD(0)); JP_F_002FB090(c);
SET64(31, 0x2f1938); SET64(4, RD(17) + RD(0)); JP_F_002F73A0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002F38DC; }
SET64(31, 0x2f1948); SET64(4, (s32)rd32(c, (RW(17) + 1936))); JP_F_00361360(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002F38DC; }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f1964); SET32(5, RW(0) + 10); rt_call(c, t); }
SET64(3, (s64)(s32)0x430c0000);
wr32(c, (RW(17) + 1312), RW(3)); goto L_002F38DC;
L_002F1970:;
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f1984); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
L_002F1988:;
SET64(31, 0x2f1990);  JP_F_002FDEF0(c);
SET64(31, 0x2f1998); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_001BA1B0(c);
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f19a4); SET64(4, RD(17) + RD(0)); JP_F_002FB090(c);
SET64(31, 0x2f19ac); SET64(4, RD(17) + RD(0)); JP_F_002F73A0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002F38DC; }
c->f[2].u = rd32(c, (RW(17) + 588));
SET64(3, (s64)(s32)0x430c0000);
c->f[1].u = rd32(c, (RW(17) + 1312));
c->f[0].u = RW(3);
c->f[1].f = fpu(F(1) + F(2));
c->fcc = F(1) <= F(0);
{ int t = c->fcc; wr32(c, (RW(17) + 1312), c->f[1].u); if (t) goto L_002F38DC; }
SET64(4, (s32)rd32(c, (RW(17) + 688)));
SET64(31, 0x2f19e4); SET64(5, RD(0) + RD(0)); JP_F_0031F600(c);
SET64(4, (s32)rd32(c, (RW(17) + 688)));
SET64(31, 0x2f19f0); SET32(5, RW(0) + 1); JP_F_0031F600(c);
SET64(3, rd16(c, (RW(17) + 728)));
SET32(2, RW(0) + 3);
if (RD(3) != RD(2)) { SET64(25, (s32)rd32(c, (RW(17) + 56))); goto L_002F1A20; }
SET64(2, (s16)rd16(c, (RW(17) + 1896)));
{ int t = RD(2) != RD(0);  if (t) goto L_002F1A1C; }
SET64(5, rd16(c, (RW(17) + 850)));
SET64(31, 0x2f1a18); SET64(4, (s32)rd32(c, (RW(28) + -29612))); JP_F_0032A5D0(c);
wr8(c, (RW(17) + 1920), (u8)RW(2));
L_002F1A1C:;
SET64(25, (s32)rd32(c, (RW(17) + 56)));
L_002F1A20:;
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f1a30); SET32(5, RW(0) + 30); rt_call(c, t); }
 goto L_002F38DC;
L_002F1A38:;
wr32(c, (RW(29) + 284), RW(0));
wr32(c, (RW(29) + 272), RW(2));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 276), RW(2));
wr32(c, (RW(29) + 280), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 672)));
rd128(c, (RW(29) + 272) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(2) + 48) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(3) + 0), RW(0));
wr128(c, (RW(3) + 16) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(2) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(31, 0x2f1a8c); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00173B10(c);
SET64(2, (s32)rd32(c, (RW(17) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f1aa8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(17) + 1896)));
SET32(2, RW(0) + -1);
if (RD(3) == RD(2)) { SET64(5, (s32)rd32(c, (RW(17) + 836))); goto L_002F1B18; }
SET32(2, RW(3) + 1);
SET64(3, RD(2) & 0x1);
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(17));
SET64(6, (s32)rd32(c, (RW(2) + 836)));
if (RD(6) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002F1B98; }
SET32(3, RW(3) << 1);
SET64(2, RD(0) | 0xffff);
SET32(3, RW(3) + RW(17));
SET64(4, rd16(c, (RW(3) + 860)));
SET32(5, RW(3) + 860);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET32(3, RW(6) + RW(3));
SET64(3, rd16(c, (RW(3) + 0)));
{ int t = RD(3) == RD(2);  if (t) goto L_002F1B94; }
SET32(2, RW(4) + 1);
wr16(c, (RW(5) + 0), (u16)RW(2)); goto L_002F1B94;
L_002F1B18:;
if (RD(5) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 840))); goto L_002F1B58; }
SET64(4, rd16(c, (RW(17) + 860)));
SET64(2, RD(0) | 0xffff);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET32(3, RW(5) + RW(3));
SET64(3, rd16(c, (RW(3) + 0)));
{ int t = RD(3) == RD(2);  if (t) goto L_002F1B54; }
SET32(2, RW(4) + 1);
wr16(c, (RW(17) + 860), (u16)RW(2));
L_002F1B54:;
SET64(5, (s32)rd32(c, (RW(17) + 840)));
L_002F1B58:;
{ int t = RD(5) == RD(0);  if (t) goto L_002F1B94; }
SET64(4, rd16(c, (RW(17) + 862)));
SET64(2, RD(0) | 0xffff);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET32(3, RW(5) + RW(3));
SET64(3, rd16(c, (RW(3) + 0)));
{ int t = RD(3) == RD(2);  if (t) goto L_002F1B94; }
SET32(2, RW(4) + 1);
wr16(c, (RW(17) + 862), (u16)RW(2));
L_002F1B94:;
SET64(4, RD(17) + RD(0));
L_002F1B98:;
SET64(31, 0x2f1ba0);  JP_F_002F12F0(c);
if (RD(2) == RD(0)) { SET64(18, RD(0) + RD(0)); goto L_002F1BF0; }
SET64(2, rd8(c, (RW(17) + 1894)));
if (RD(2) == RD(0)) { SET64(25, (s32)rd32(c, (RW(17) + 56))); goto L_002F1BD8; }
SET64(31, 0x2f1bbc); SET64(4, (s32)rd32(c, (RW(17) + 1936))); JP_F_00361360(c);
SET64(8, rd16(c, (RW(17) + 1932)));
SET64(4, (s32)rd32(c, (RW(17) + 1936)));
SET64(6, (s32)rd32(c, (RW(17) + 652)));
SET64(7, (s32)rd32(c, (RW(17) + 716)));
SET64(31, 0x2f1bd4); SET32(5, RW(0) + 2); JP_F_003614A0(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
L_002F1BD8:;
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f1be8); SET32(5, RW(0) + 70); rt_call(c, t); }
 goto L_002F38DC;
L_002F1BF0:;
SET64(16, RD(17) + RD(0));
L_002F1BF4:;
SET64(2, (s32)rd32(c, (RW(16) + 968)));
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F1C10; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x2);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F1C10:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
{ int t = RD(3) == RD(0);  if (t) goto L_002F1C28; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x2);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F1C28:;
SET64(2, (s32)rd32(c, (RW(16) + 968)));
SET64(31, 0x2f1c34); SET32(4, RW(2) + 128); JP_F_001E9540(c);
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F1BF4; } }
SET64(3, (s16)rd16(c, (RW(17) + 1896)));
SET32(2, RW(0) + -1);
if (RD(3) == RD(2)) { SET64(25, (s32)rd32(c, (RW(17) + 56))); goto L_002F1CA4; }
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(17));
SET64(16, (s32)rd32(c, (RW(2) + 968)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2f1c6c); wr16(c, (RW(17) + 1532), (u16)RW(0)); JP_F_002EF6F0(c);
SET64(5, rd16(c, (RW(17) + 1532)));
SET64(6, RD(16) + RD(0));
SET64(4, (s32)rd32(c, (RW(17) + 1536)));
SET64(31, 0x2f1c80); SET64(7, RD(2) + RD(0)); JP_F_00328DB0(c);
SET64(2, (s16)rd16(c, (RW(17) + 1896)));
SET64(1, RD(0) | 0x87b0);
c->f[12].u = RW(0);
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(17));
SET64(2, (s32)rd32(c, (RW(2) + 968)));
SET64(31, 0x2f1ca0); SET32(4, RW(2) + RW(1)); JP_F_00323A50(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
L_002F1CA4:;
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f1cbc); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
L_002F1CC0:;
SET64(31, 0x2f1cc8);  JP_F_002FDEF0(c);
SET64(31, 0x2f1cd0); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_001BA1B0(c);
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f1cdc); SET64(4, RD(17) + RD(0)); JP_F_002FB090(c);
SET64(3, (s16)rd16(c, (RW(17) + 1896)));
SET32(2, RW(0) + -1);
if (RD(3) == RD(2)) { SET64(25, (s32)rd32(c, (RW(17) + 56))); goto L_002F1E4C; }
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f1cf8); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_00328C60(c);
SET64(3, (s32)rd32(c, (RW(17) + 1536)));
SET64(3, (s32)rd32(c, (RW(3) + 1920)));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) != RD(0);  if (t) goto L_002F38DC; }
SET64(4, (s32)rd32(c, (RW(17) + 676)));
SET64(31, 0x2f1d1c); SET32(5, RW(28) + -30984); JP_F_0015E5C0(c);
SET64(16, (s32)rd32(c, (RW(17) + 676)));
c->f[12].u = rd32(c, (RW(28) + -30960));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x2f1d30); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2f1d44);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f1d60); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3cf50000);
SET32(5, RW(29) + 300);
SET64(2, RD(2) | 0xc28f);
SET32(6, RW(28) + -30992);
wr32(c, (RW(29) + 300), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 676)));
SET64(31, 0x2f1d80); SET64(7, RD(0) + RD(0)); JP_F_0015E550(c);
SET64(3, rd16(c, (RW(17) + 1532)));
SET32(2, RW(0) + 6);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_002F1DBC; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)1); goto L_002F1DC0; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F1DBC; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_002F1DBC; }
 goto L_002F1DC0;
L_002F1DBC:;
SET64(4, RD(0) + (s64)1);
L_002F1DC0:;
if (RD(4) == RD(0)) { SET64(25, (s32)rd32(c, (RW(17) + 876))); goto L_002F1E04; }
SET64(2, (s32)rd32(c, (RW(17) + 680)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F1E00; }
SET64(31, 0x2f1ddc); SET32(4, RW(2) + 224); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002F1E00; }
SET64(4, (s32)rd32(c, (RW(17) + 680)));
SET64(6, (s32)rd32(c, (RW(17) + 660)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2f1e00); SET64(5, (s32)rd32(c, (RW(17) + 656))); rt_call(c, t); }
L_002F1E00:;
SET64(25, (s32)rd32(c, (RW(17) + 876)));
L_002F1E04:;
SET64(5, (s32)rd32(c, (RW(17) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f1e14); SET32(4, RW(17) + 864); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 928)));
SET64(5, (s32)rd32(c, (RW(17) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f1e28); SET32(4, RW(17) + 916); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f1e44); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F38DC;
L_002F1E4C:;
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f1e64); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F38DC;
L_002F1E6C:;
SET32(2, RW(0) + -1);
{ int t = RD(3) == RD(2); SET64(16, RD(0) + (s64)1); if (t) goto L_002F2044; }
SET64(3, (s32)rd32(c, (RW(17) + 672)));
SET64(2, (s64)(s32)0x530000);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x2f1e8c); c->f[12].u = rd32(c, (RW(2) + -22384)); JP_F_00173B10(c);
SET64(3, rd16(c, (RW(17) + 1532)));
SET32(2, RW(0) + 6);
SET32(4, RW(0) + 1);
SET64(19, RD(16) + RD(0));
{ int t = RD(3) == RD(2); SET64(5, RD(0) + RD(0)); if (t) goto L_002F1ECC; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)1); goto L_002F1ED0; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F1ECC; }
{ int t = RD(3) == RD(4);  if (t) goto L_002F1ECC; }
 goto L_002F1ED0;
L_002F1ECC:;
SET64(5, RD(0) + (s64)1);
L_002F1ED0:;
if (RD(5) == RD(0)) { SET64(18, RD(0) + RD(0)); goto L_002F1F08; }
SET64(4, (s32)rd32(c, (RW(17) + 680)));
{ int t = RD(4) == RD(0);  if (t) goto L_002F1F04; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2f1ef4);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F1F04; }
SET64(19, RD(0) + RD(0));
L_002F1F04:;
SET64(18, RD(0) + RD(0));
L_002F1F08:;
SET64(3, RD(18) & 0xffff);
L_002F1F0C:;
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(17) + RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 876)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2f1f34); SET32(4, RW(2) + 864); rt_call(c, t); }
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002F1F48; }
SET64(19, RD(0) + RD(0));
L_002F1F48:;
SET32(3, RW(18) + 1);
SET64(18, RD(3) & 0xffff);
SET64(3, RSD(18) < (s64)2);
if (RD(3) != RD(0)) { SET64(3, RD(18) & 0xffff); { POLL(); goto L_002F1F0C; } }
if (RD(19) == RD(0)) { SET64(16, RD(0) + RD(0)); goto L_002F2060; }
SET64(31, 0x2f1f6c); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_00328D40(c);
SET64(31, 0x2f1f74); SET64(4, RD(17) + RD(0)); JP_F_002F6BF0(c);
SET64(19, RD(0) + RD(0));
SET64(18, RD(17) + RD(0));
L_002F1F7C:;
SET64(3, (s32)rd32(c, (RW(18) + 968)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(3) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x2f1f98); SET32(4, RW(3) + 128); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 968)));
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F1FB8; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfff7);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F1FB8:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
{ int t = RD(3) == RD(0);  if (t) goto L_002F1FD0; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfff7);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F1FD0:;
SET64(2, (s32)rd32(c, (RW(18) + 968)));
SET64(25, (s32)rd32(c, (RW(2) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x2f1fe4); SET32(4, RW(2) + 128); rt_call(c, t); }
SET32(19, RW(19) + 1);
SET64(2, RD(19) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_002F1F7C; } }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2f2000); SET32(5, RW(0) + 1); JP_F_002FD7E0(c);
SET64(18, (s32)rd32(c, (RW(17) + 680)));
SET32(4, RW(29) + 112);
SET64(5, rd16(c, (RW(18) + 464)));
SET64(31, 0x2f2014); SET64(6, RD(0) + RD(0)); JP_F_00242590(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET32(4, RW(18) + 64);
wr128(c, (RW(18) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 80) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 96) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
SET64(31, 0x2f203c); wr128(c, (RW(18) + 112) & ~15u, &c->r[2]); JP_F_002A4D70(c);
 goto L_002F2060;
L_002F2044:;
SET64(31, 0x2f204c);  JP_F_002FDEF0(c);
SET64(31, 0x2f2054); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_001BA1B0(c);
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f2060); SET64(4, RD(17) + RD(0)); JP_F_002FB090(c);
L_002F2060:;
{ int t = RD(16) == RD(0);  if (t) goto L_002F38DC; }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f207c); SET32(5, RW(0) + 40); rt_call(c, t); }
 goto L_002F38DC;
L_002F2084:;
wr32(c, (RW(29) + 268), RW(0));
wr32(c, (RW(29) + 256), RW(2));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 260), RW(2));
wr32(c, (RW(29) + 264), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 672)));
rd128(c, (RW(29) + 256) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(2) + 48) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(3) + 0), RW(0));
wr128(c, (RW(3) + 16) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(2) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(31, 0x2f20d8); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00173B10(c);
SET64(31, 0x2f20e0);  JP_F_00139590(c);
SET64(31, 0x2f20e8);  JP_F_00139590(c);
c->f[12].u = RW(0);
SET64(31, 0x2f20f4); SET64(4, (s32)rd32(c, (RW(2) + 24))); JP_F_001B8110(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f2110); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(17) + 1896)));
L_002F2114:;
SET32(2, RW(0) + -1);
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 672))); goto L_002F2130; }
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f212c); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_00328C60(c);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
L_002F2130:;
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2f213c); c->f[12].u = rd32(c, (RW(17) + 588)); JP_F_00173B10(c);
SET64(31, 0x2f2144); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_001BA1B0(c);
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f2150); SET64(4, RD(17) + RD(0)); JP_F_002FB090(c);
SET64(31, 0x2f2158);  JP_F_00139590(c);
SET64(31, 0x2f2160);  JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 24)));
SET64(3, rd16(c, (RW(3) + 0)));
SET64(3, RD(3) ^ RD(0));
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) == RD(0);  if (t) goto L_002F38DC; }
SET64(31, 0x2f2180); SET64(4, RD(17) + RD(0)); JP_F_002F3EB0(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f219c); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(17) + 1896)));
L_002F21A0:;
SET32(2, RW(0) + -1);
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 672))); goto L_002F21BC; }
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f21b8); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_00328C60(c);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
L_002F21BC:;
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2f21c8); c->f[12].u = rd32(c, (RW(17) + 588)); JP_F_00173B10(c);
SET64(31, 0x2f21d0); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_001BA1B0(c);
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f21dc); SET64(4, RD(17) + RD(0)); JP_F_002FB090(c);
SET64(31, 0x2f21e4); SET64(4, (s32)rd32(c, (RW(17) + 1936))); JP_F_00361360(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002F38DC; }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f2208); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
wr32(c, (RW(17) + 1312), RW(0)); goto L_002F38DC;
L_002F2210:;
SET32(2, RW(0) + -1);
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 672))); goto L_002F222C; }
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f2228); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_00328C60(c);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
L_002F222C:;
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2f2238); c->f[12].u = rd32(c, (RW(17) + 588)); JP_F_00173B10(c);
SET64(31, 0x2f2240); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_001BA1B0(c);
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f224c); SET64(4, RD(17) + RD(0)); JP_F_002FB090(c);
c->f[2].u = rd32(c, (RW(17) + 588));
SET64(3, (s64)(s32)0x41200000);
c->f[1].u = rd32(c, (RW(17) + 1312));
c->f[0].u = RW(3);
c->f[1].f = fpu(F(1) + F(2));
c->fcc = F(1) <= F(0);
{ int t = c->fcc; wr32(c, (RW(17) + 1312), c->f[1].u); if (t) goto L_002F38DC; }
SET64(4, (s16)rd16(c, (RW(17) + 1896)));
SET32(2, RW(0) + -1);
if (RD(4) == RD(2)) { wr32(c, (RW(17) + 1312), RW(0)); goto L_002F23DC; }
SET64(3, rd16(c, (RW(17) + 728)));
SET32(2, RW(0) + 3);
{ int t = RD(3) == RD(2);  if (t) goto L_002F23D8; }
SET32(3, RW(4) << 2);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(3) + RW(17));
SET64(3, (s32)rd32(c, (RW(3) + 968)));
SET32(2, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30268)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x2f22b8);  rt_call(c, t); }
SET64(2, RD(2) & 0xffff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F23D8; }
SET64(31, 0x2f22cc); SET32(4, RW(0) + 120); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002F22DC; }
SET64(31, 0x2f22dc); SET64(4, RD(16) + RD(0)); JP_F_0032F1B0(c);
L_002F22DC:;
wr32(c, (RW(17) + 1928), RW(16));
SET64(2, (s64)(s32)0x10000);
SET64(3, (s16)rd16(c, (RW(17) + 1896)));
SET64(1, RD(0) | 0x89d0);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(17));
SET64(16, (s32)rd32(c, (RW(3) + 968)));
wr32(c, (RW(29) + 96), RW(0));
SET32(2, RW(16) + RW(2));
SET64(5, rd16(c, (RW(2) + -30710)));
SET64(31, 0x2f230c); SET32(4, RW(16) + RW(1)); JP_F_00362800(c);
SET64(1, RD(0) | 0x89d0);
SET32(5, RW(29) + 80);
SET64(31, 0x2f231c); SET32(4, RW(16) + RW(1)); JP_F_00361CC0(c);
SET64(2, rd16(c, (RW(17) + 728)));
SET64(3, RD(2) ^ 0x4);
SET64(2, RD(2) ^ 0x3);
SET64(3, RD(3) < (u64)(s64)1);
SET64(2, RD(2) < (u64)(s64)1);
SET64(2, RD(3) | RD(2));
SET64(2, RD(0) < RD(2));
wr8(c, (RW(29) + 100), (u8)RW(2));
SET64(2, rd8(c, (RW(29) + 100)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 684))); goto L_002F23A8; }
c->f[2].u = rd32(c, (RW(17) + 1904));
SET64(2, (s64)(s32)0x42700000);
c->f[3].u = RW(2);
SET64(3, (s64)(s32)0x447a0000);
SET64(2, (s64)(s32)0x4f000000);
c->f[2].f = fpu_div(F(2), F(3));
c->f[1].u = RW(3);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(1) * F(2));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002F238C; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(29) + 96), RW(3)); goto L_002F23A4;
L_002F238C:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
wr32(c, (RW(29) + 96), RW(3));
L_002F23A4:;
SET64(4, (s32)rd32(c, (RW(17) + 684)));
L_002F23A8:;
SET64(25, (s32)rd32(c, (RW(4) + 72)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x2f23b8); SET32(5, RW(0) + 250); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 1928)));
SET64(6, (s32)rd32(c, (RW(17) + 716)));
SET64(7, (s32)rd32(c, (RW(17) + 652)));
SET64(31, 0x2f23cc); SET32(5, RW(29) + 80); JP_F_0032F070(c);
SET64(5, (s32)rd32(c, (RW(17) + 1928)));
SET64(31, 0x2f23d8); SET64(4, RD(17) + RD(0)); JP_F_0013A470(c);
L_002F23D8:;
wr32(c, (RW(17) + 1312), RW(0));
L_002F23DC:;
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f23f8); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F38DC;
L_002F2400:;
SET32(2, RW(0) + -1);
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 672))); goto L_002F241C; }
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f2418); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_00328C60(c);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
L_002F241C:;
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2f2428); c->f[12].u = rd32(c, (RW(17) + 588)); JP_F_00173B10(c);
SET64(31, 0x2f2430); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_001BA1B0(c);
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f243c); SET64(4, RD(17) + RD(0)); JP_F_002FB090(c);
SET64(2, (s32)rd32(c, (RW(17) + 1928)));
{ int t = RD(2) == RD(0); SET64(16, RD(0) + (s64)1); if (t) goto L_002F24DC; }
SET64(31, 0x2f2450);  JP_F_00138DE0(c);
SET64(5, (s16)rd16(c, (RW(17) + 1896)));
SET64(31, 0x2f245c); SET64(4, RD(2) + RD(0)); JP_F_0013E200(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0xf008);
if (RD(2) == RD(0)) { c->f[1].u = rd32(c, (RW(17) + 1312)); goto L_002F24A0; }
SET64(31, 0x2f2474); SET64(4, (s32)rd32(c, (RW(17) + 1928))); JP_F_0032EF40(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F249C; }
SET64(2, (s64)(s32)0x47c30000);
SET64(2, RD(2) | 0x5000);
c->f[1].u = rd32(c, (RW(17) + 1312));
c->f[0].u = RW(2);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(17) + 1312), c->f[0].u);
L_002F249C:;
c->f[1].u = rd32(c, (RW(17) + 1312));
L_002F24A0:;
SET64(2, (s64)(s32)0x44160000);
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(2, (s32)rd32(c, (RW(17) + 1928))); goto L_002F24C4; }
SET64(31, 0x2f24c0); SET64(4, (s32)rd32(c, (RW(17) + 1928))); JP_F_0032EFF0(c);
SET64(2, (s32)rd32(c, (RW(17) + 1928)));
L_002F24C4:;
SET64(2, (s32)rd32(c, (RW(2) + 48)));
SET64(2, RD(2) ^ 0x4);
SET64(2, RD(2) < (u64)(s64)1);
{ int t = RD(2) != RD(0);  if (t) goto L_002F24DC; }
SET64(16, RD(0) + RD(0));
L_002F24DC:;
SET64(31, 0x2f24e4);  JP_F_00139590(c);
SET64(31, 0x2f24ec);  JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 24)));
SET64(3, rd16(c, (RW(3) + 0)));
SET64(3, RD(3) ^ RD(0));
SET64(3, RD(3) < (u64)(s64)1);
if (RD(3) != RD(0)) { SET64(3, RD(16) & 0xff); goto L_002F250C; }
SET64(16, RD(0) + RD(0));
SET64(3, RD(16) & 0xff);
L_002F250C:;
SET32(5, RW(0) + 1);
{ int t = RD(3) != RD(5);  if (t) goto L_002F38DC; }
SET64(4, (s32)rd32(c, (RW(17) + 1928)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 1928), RW(0)); goto L_002F2538; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2f2534);  rt_call(c, t); }
wr32(c, (RW(17) + 1928), RW(0));
L_002F2538:;
SET64(2, rd16(c, (RW(17) + 728)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 1536))); goto L_002F2598; }
SET64(31, 0x2f254c); SET32(4, RW(0) + 104); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002F255C; }
SET64(31, 0x2f255c); SET64(4, RD(16) + RD(0)); JP_F_00315620(c);
L_002F255C:;
wr32(c, (RW(17) + 1940), RW(16));
SET64(5, (s32)rd32(c, (RW(17) + 716)));
SET64(6, (s32)rd32(c, (RW(17) + 652)));
SET64(31, 0x2f2570); SET64(4, RD(16) + RD(0)); JP_F_003155B0(c);
SET64(5, (s32)rd32(c, (RW(17) + 1940)));
SET64(31, 0x2f257c); SET64(4, RD(17) + RD(0)); JP_F_0013A470(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f2590); SET32(5, RW(0) + 60); rt_call(c, t); }
 goto L_002F38DC;
L_002F2598:;
SET64(31, 0x2f25a0);  JP_F_00328D30(c);
SET64(2, (s32)rd32(c, (RW(17) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f25bc); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f25d8); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F38DC;
L_002F25E0:;
SET32(2, RW(0) + -1);
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 672))); goto L_002F25FC; }
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f25f8); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_00328C60(c);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
L_002F25FC:;
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2f2608); c->f[12].u = rd32(c, (RW(17) + 588)); JP_F_00173B10(c);
SET64(31, 0x2f2610); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_001BA1B0(c);
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f261c); SET64(4, RD(17) + RD(0)); JP_F_002FB090(c);
SET64(4, (s32)rd32(c, (RW(17) + 1536)));
SET32(3, RW(0) + 3);
SET64(5, (s32)rd32(c, (RW(4) + 1920)));
{ int t = RD(5) == RD(3); SET64(6, RD(0) + (s64)1); if (t) goto L_002F2640; }
SET32(3, RW(0) + 5);
if (RD(5) == RD(3)) { SET64(3, RD(6) & 0xff); goto L_002F2644; }
SET64(6, RD(0) + RD(0));
L_002F2640:;
SET64(3, RD(6) & 0xff);
L_002F2644:;
{ int t = RD(3) != RD(0);  if (t) goto L_002F38DC; }
SET64(31, 0x2f2654);  JP_F_00328C30(c);
SET64(4, (s32)rd32(c, (RW(17) + 676)));
SET64(31, 0x2f2660); SET32(5, RW(28) + -30984); JP_F_0015E5C0(c);
SET64(16, (s32)rd32(c, (RW(17) + 676)));
c->f[12].u = rd32(c, (RW(28) + -30960));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x2f2674); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2f2688);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f26a4); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3c230000);
SET32(5, RW(29) + 296);
SET64(2, RD(2) | 0xd70a);
SET32(6, RW(28) + -30992);
wr32(c, (RW(29) + 296), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 676)));
SET64(31, 0x2f26c4); SET64(7, RD(0) + RD(0)); JP_F_0015E550(c);
SET64(3, rd16(c, (RW(17) + 1532)));
SET32(2, RW(0) + 6);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_002F2700; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)1); goto L_002F2704; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F2700; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_002F2700; }
 goto L_002F2704;
L_002F2700:;
SET64(4, RD(0) + (s64)1);
L_002F2704:;
if (RD(4) == RD(0)) { SET64(25, (s32)rd32(c, (RW(17) + 876))); goto L_002F2748; }
SET64(2, (s32)rd32(c, (RW(17) + 680)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F2744; }
SET64(31, 0x2f2720); SET32(4, RW(2) + 224); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002F2744; }
SET64(4, (s32)rd32(c, (RW(17) + 680)));
SET64(6, (s32)rd32(c, (RW(17) + 660)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2f2744); SET64(5, (s32)rd32(c, (RW(17) + 656))); rt_call(c, t); }
L_002F2744:;
SET64(25, (s32)rd32(c, (RW(17) + 876)));
L_002F2748:;
SET64(5, (s32)rd32(c, (RW(17) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f2758); SET32(4, RW(17) + 864); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 928)));
SET64(5, (s32)rd32(c, (RW(17) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f276c); SET32(4, RW(17) + 916); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(17) + 680)));
if (RD(16) == RD(0)) { SET64(5, (s16)rd16(c, (RW(17) + 1896))); goto L_002F279C; }
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 204)));
{ u32 t = RW(25); SET64(31, 0x2f2788); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, 0x2f2790); SET64(4, RD(16) + RD(0)); JP_F_002419C0(c);
SET64(31, 0x2f2798); SET64(4, RD(17) + RD(0)); JP_F_002FDC40(c);
SET64(5, (s16)rd16(c, (RW(17) + 1896)));
L_002F279C:;
SET64(4, RD(5) ^ RD(0));
{ int t = RD(5) != RD(0); SET64(4, RD(4) < (u64)(s64)1); if (t) goto L_002F28B8; }
SET64(3, rd16(c, (RW(17) + 728)));
SET32(2, RW(0) + 3);
if (RD(3) != RD(2)) { SET64(25, (s32)rd32(c, (RW(17) + 56))); goto L_002F289C; }
SET32(3, RW(4) + RW(17));
SET32(2, RW(5) << 2);
SET32(4, RW(0) + 1);
SET32(2, RW(2) + RW(17));
wr8(c, (RW(3) + 724), (u8)RW(4));
SET32(16, RW(2) + 968);
SET64(3, (s32)rd32(c, (RW(2) + 968)));
SET64(1, RD(0) | 0x87b0);
SET64(2, (s64)(s32)0x4c0000);
SET32(4, RW(3) + RW(1));
c->f[1].u = rd32(c, (RW(2) + -4800));
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7536));
SET64(31, 0x2f27f4); c->f[12].f = fpu(F(1) * F(0)); JP_F_00323B40(c);
SET64(31, 0x2f27fc);  JP_F_00139590(c);
SET64(31, 0x2f2804);  JP_F_00139590(c);
SET64(18, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s32)rd32(c, (RW(17) + 856)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 680))); goto L_002F281C; }
SET64(4, RD(18) + RD(0)); goto L_002F2828;
L_002F281C:;
SET64(31, 0x2f2824); SET64(4, rd16(c, (RW(2) + 464))); JP_F_0030EE40(c);
SET64(4, RD(18) + RD(0));
L_002F2828:;
SET64(5, RD(2) + RD(0));
c->f[12].u = RW(0);
SET64(31, 0x2f2838); SET32(6, RW(0) + 1); JP_F_001B8120(c);
SET64(2, rd8(c, (RW(17) + 1920)));
if (RD(2) == RD(0)) { SET64(25, (s32)rd32(c, (RW(17) + 56))); goto L_002F2884; }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f2858); SET32(5, RW(0) + 20); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2f2868); SET32(4, RW(2) + RW(1)); JP_F_00323B90(c);
wr32(c, (RW(17) + 1916), c->f[0].u);
SET64(3, (s64)(s32)0x10000);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(4) + RW(3));
SET64(3, rd16(c, (RW(3) + -30710)));
wr16(c, (RW(17) + 1912), (u16)RW(3)); goto L_002F38DC;
L_002F2884:;
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f2894); SET32(5, RW(0) + 70); rt_call(c, t); }
 goto L_002F38DC;
L_002F289C:;
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f28ac); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(3, RW(0) + 1);
wr8(c, (RW(17) + 1898), (u8)RW(3)); goto L_002F38DC;
L_002F28B8:;
SET64(3, rd16(c, (RW(17) + 728)));
SET32(5, RW(0) + 1);
if (RD(3) == RD(5)) { SET64(2, rd8(c, (RW(17) + 852))); goto L_002F28E4; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F28E0; }
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(25, (s32)rd32(c, (RW(17) + 56))); goto L_002F2978; }
L_002F28E0:;
SET64(2, rd8(c, (RW(17) + 852)));
L_002F28E4:;
if (RD(2) == RD(0)) { SET64(25, (s32)rd32(c, (RW(17) + 56))); goto L_002F2960; }
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 240), RW(0));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 252), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 672)));
wr32(c, (RW(29) + 244), RW(0));
wr32(c, (RW(29) + 248), RW(0));
rd128(c, (RW(29) + 240) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(2) + 48) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(3) + 0), RW(0));
wr128(c, (RW(3) + 16) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(2) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(31, 0x2f2944); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00173B10(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f2958); SET32(5, RW(0) + 50); rt_call(c, t); }
 goto L_002F38DC;
L_002F2960:;
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f2970); SET32(5, RW(0) + 1); rt_call(c, t); }
 goto L_002F38DC;
L_002F2978:;
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f2984); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
 goto L_002F38DC;
L_002F298C:;
SET64(31, 0x2f2994); SET64(4, RD(18) + RD(0)); JP_F_002EF6F0(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f29b4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, rd16(c, (RW(17) + 1532)));
SET32(2, RW(0) + 6);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_002F29F0; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)1); goto L_002F29F4; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F29F0; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_002F29F0; }
 goto L_002F29F4;
L_002F29F0:;
SET64(4, RD(0) + (s64)1);
L_002F29F4:;
if (RD(4) == RD(0)) { SET64(25, (s32)rd32(c, (RW(17) + 876))); goto L_002F2A3C; }
SET64(2, (s32)rd32(c, (RW(17) + 680)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F2A38; }
SET64(31, 0x2f2a10); SET32(4, RW(2) + 224); JP_F_00141B90(c);
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
{ int t = RD(2) != RD(0);  if (t) goto L_002F2A38; }
SET64(4, (s32)rd32(c, (RW(17) + 680)));
SET64(6, (s32)rd32(c, (RW(17) + 660)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2f2a38); SET64(5, (s32)rd32(c, (RW(17) + 656))); rt_call(c, t); }
L_002F2A38:;
SET64(25, (s32)rd32(c, (RW(17) + 876)));
L_002F2A3C:;
SET64(5, (s32)rd32(c, (RW(17) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2f2a4c); SET32(4, RW(17) + 864); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 928)));
SET64(5, (s32)rd32(c, (RW(17) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f2a60); SET32(4, RW(17) + 916); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2f2a6c); SET32(5, RW(0) + 1); JP_F_002FD7E0(c);
SET64(4, (s32)rd32(c, (RW(17) + 680)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 204)));
{ u32 t = RW(25); SET64(31, 0x2f2a80);  rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 404)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x2f2a98); SET32(4, RW(18) + 128); rt_call(c, t); }
SET64(31, 0x2f2aa0); SET64(4, RD(18) + RD(0)); JP_F_002EED60(c);
SET32(2, RW(0) + 1);
SET32(4, RW(18) + 128);
SET64(31, 0x2f2ab0); wr8(c, (RW(18) + 2320), (u8)RW(2)); JP_F_001E9540(c);
SET64(3, (s32)rd32(c, (RW(18) + 4144)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 4148))); goto L_002F2ACC; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 4148)));
L_002F2ACC:;
if (RD(3) == RD(0)) { SET64(25, (s32)rd32(c, (RW(18) + 404))); goto L_002F2AE4; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET64(25, (s32)rd32(c, (RW(18) + 404)));
L_002F2AE4:;
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x2f2af0); SET32(4, RW(18) + 128); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 404)));
c->f[12].u = RW(0);
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x2f2b04); SET32(4, RW(16) + 128); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 4144)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4148))); goto L_002F2B20; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 4148)));
L_002F2B20:;
if (RD(3) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 404))); goto L_002F2B38; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 404)));
L_002F2B38:;
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x2f2b44); SET32(4, RW(16) + 128); rt_call(c, t); }
SET64(31, 0x2f2b4c);  JP_F_00139590(c);
SET64(31, 0x2f2b54);  JP_F_00139590(c);
c->f[12].u = RW(0);
SET64(31, 0x2f2b60); SET64(4, (s32)rd32(c, (RW(2) + 24))); JP_F_001B8110(c);
SET64(4, (s32)rd32(c, (RW(17) + 688)));
SET64(31, 0x2f2b6c); SET32(5, RW(0) + 1); JP_F_0031EC90(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 224), RW(0));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 236), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 672)));
wr32(c, (RW(29) + 228), RW(0));
wr32(c, (RW(29) + 232), RW(0));
rd128(c, (RW(29) + 224) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(2) + 48) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(3) + 0), RW(0));
wr128(c, (RW(3) + 16) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(2) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(31, 0x2f2bc4); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00173B10(c);
SET64(31, 0x2f2bcc); SET32(4, RW(0) + 128); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002F2BDC; }
SET64(31, 0x2f2bdc); SET64(4, RD(16) + RD(0)); JP_F_003691A0(c);
L_002F2BDC:;
SET64(5, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2f2bec); wr32(c, (RW(17) + 700), RW(16)); JP_F_0013A470(c);
SET64(4, (s32)rd32(c, (RW(17) + 700)));
SET64(6, (s32)rd32(c, (RW(17) + 680)));
SET64(7, (s32)rd32(c, (RW(17) + 716)));
SET64(8, (s32)rd32(c, (RW(17) + 1536)));
SET64(9, (s32)rd32(c, (RW(17) + 668)));
SET64(10, (s32)rd32(c, (RW(17) + 652)));
SET64(31, 0x2f2c0c); SET64(5, RD(18) + RD(0)); JP_F_00368840(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f2c28); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F38DC;
L_002F2C30:;
SET32(3, RW(0) + 4);
SET64(5, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(5) != RD(3);  if (t) goto L_002F38DC; }
SET64(31, 0x2f2c48);  JP_F_00368F20(c);
SET64(4, (s32)rd32(c, (RW(17) + 700)));
{ int t = RD(4) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002F2C64; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2f2c64); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002F2C64:;
SET64(31, 0x2f2c6c); wr32(c, (RW(17) + 700), RW(0)); JP_F_00139590(c);
SET64(31, 0x2f2c74);  JP_F_00139590(c);
c->f[12].u = RW(0);
SET64(31, 0x2f2c80); SET64(4, (s32)rd32(c, (RW(2) + 24))); JP_F_001B8110(c);
SET64(4, (s32)rd32(c, (RW(17) + 688)));
SET64(31, 0x2f2c8c); SET64(5, RD(0) + RD(0)); JP_F_0031EC90(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 208), RW(0));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 220), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 672)));
wr32(c, (RW(29) + 212), RW(0));
wr32(c, (RW(29) + 216), RW(0));
rd128(c, (RW(29) + 208) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(2) + 48) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(3) + 0), RW(0));
wr128(c, (RW(3) + 16) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(2) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(31, 0x2f2ce4); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00173B10(c);
SET32(5, RW(0) + 1);
if (RD(16) != RD(5)) { SET64(25, (s32)rd32(c, (RW(17) + 56))); goto L_002F2DAC; }
SET64(31, 0x2f2cf8); SET64(4, RD(17) + RD(0)); JP_F_002F3B60(c);
SET32(5, RW(0) + 1);
SET32(3, RW(0) + 3);
wr8(c, (RW(17) + 1908), (u8)RW(5));
wr8(c, (RW(17) + 1909), (u8)RW(5));
SET64(4, rd16(c, (RW(17) + 728)));
{ int t = RD(4) == RD(3);  if (t) goto L_002F38DC; }
SET64(6, RD(0) + RD(0));
SET64(4, RD(17) + RD(0));
L_002F2D1C:;
SET64(3, rd16(c, (RW(4) + 860)));
{ int t = RD(3) == RD(0);  if (t) goto L_002F2D38; }
wr16(c, (RW(4) + 860), (u16)RW(0));
SET32(3, RW(17) + RW(6));
wr8(c, (RW(3) + 724), (u8)RW(5)); goto L_002F2D40;
L_002F2D38:;
SET32(3, RW(17) + RW(6));
wr8(c, (RW(3) + 724), (u8)RW(0));
L_002F2D40:;
SET32(6, RW(6) + 1);
SET64(3, RD(6) < (u64)(s64)2);
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 2); if (t) { POLL(); goto L_002F2D1C; } }
SET64(3, rd8(c, (RW(17) + 724)));
SET32(4, RW(0) + 1);
{ int t = RD(3) == RD(4);  if (t) goto L_002F2D6C; }
SET64(3, rd8(c, (RW(17) + 725)));
{ int t = RD(3) != RD(4);  if (t) goto L_002F38DC; }
L_002F2D6C:;
SET64(2, (s64)(s32)0x4a0000);
c->f[12].u = rd32(c, (RW(2) + -18464));
SET64(31, 0x2f2d7c); SET64(4, RD(17) + RD(0)); JP_F_002FAD10(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f2d90); SET32(5, RW(0) + 7); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f2da4); SET32(5, RW(0) + 70); rt_call(c, t); }
 goto L_002F38DC;
L_002F2DAC:;
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f2db8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
wr8(c, (RW(17) + 1900), (u8)RW(3)); goto L_002F38DC;
L_002F2DC4:;
SET32(2, RW(0) + -1);
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 672))); goto L_002F2DE0; }
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f2ddc); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_00328C60(c);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
L_002F2DE0:;
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2f2dec); c->f[12].u = rd32(c, (RW(17) + 588)); JP_F_00173B10(c);
SET64(31, 0x2f2df4); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_001BA1B0(c);
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f2e00); SET64(4, RD(17) + RD(0)); JP_F_002FB090(c);
SET64(4, (s32)rd32(c, (RW(17) + 1940)));
SET32(3, RW(0) + 4);
SET64(4, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(4) != RD(3);  if (t) goto L_002F38DC; }
SET64(31, 0x2f2e1c);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 672))); goto L_002F2E30; }
SET32(5, RW(5) + 672);
SET64(3, (s32)rd32(c, (RW(17) + 672)));
L_002F2E30:;
SET64(2, (s64)(s32)0x3e4c0000);
SET64(2, RD(2) | 0xcccd);
c->f[12].u = RW(2);
SET64(31, 0x2f2e44); SET64(4, (s32)rd32(c, (RW(3) + 0))); JP_F_00173F60(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f2e60); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F38DC;
L_002F2E68:;
SET32(2, RW(0) + -1);
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 672))); goto L_002F2E84; }
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f2e80); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_00328C60(c);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
L_002F2E84:;
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2f2e90); c->f[12].u = rd32(c, (RW(17) + 588)); JP_F_00173B10(c);
SET64(31, 0x2f2e98); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_001BA1B0(c);
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f2ea4); SET64(4, RD(17) + RD(0)); JP_F_002FB090(c);
SET64(3, (s32)rd32(c, (RW(17) + 672)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
c->f[1].u = rd32(c, (RW(3) + 48));
c->f[0].u = rd32(c, (RW(3) + 16));
c->fcc = F(1) == F(0);
if (!c->fcc) { SET64(3, RD(0) + RD(0)); goto L_002F2F08; }
c->f[1].u = rd32(c, (RW(3) + 52));
c->f[0].u = rd32(c, (RW(3) + 20));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F2F04; }
c->f[1].u = rd32(c, (RW(3) + 56));
c->f[0].u = rd32(c, (RW(3) + 24));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F2F04; }
c->f[1].u = rd32(c, (RW(3) + 60));
c->f[0].u = rd32(c, (RW(3) + 28));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F2F04; }
SET64(3, RD(0) + (s64)1); goto L_002F2F08;
L_002F2F04:;
SET64(3, RD(0) + RD(0));
L_002F2F08:;
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002F38DC; }
SET64(31, 0x2f2f24); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_00328D30(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f2f40); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F38DC;
L_002F2F48:;
SET32(2, RW(0) + -1);
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 672))); goto L_002F2F64; }
c->f[12].u = rd32(c, (RW(17) + 588));
SET64(31, 0x2f2f60); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_00328C60(c);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
L_002F2F64:;
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2f2f70); c->f[12].u = rd32(c, (RW(17) + 588)); JP_F_00173B10(c);
SET64(4, (s32)rd32(c, (RW(17) + 1536)));
SET32(3, RW(0) + 3);
SET64(5, (s32)rd32(c, (RW(4) + 1920)));
{ int t = RD(5) == RD(3); SET64(6, RD(0) + (s64)1); if (t) goto L_002F2F94; }
SET32(3, RW(0) + 5);
if (RD(5) == RD(3)) { SET64(3, RD(6) & 0xff); goto L_002F2F98; }
SET64(6, RD(0) + RD(0));
L_002F2F94:;
SET64(3, RD(6) & 0xff);
L_002F2F98:;
{ int t = RD(3) != RD(0);  if (t) goto L_002F38DC; }
SET64(31, 0x2f2fa8);  JP_F_00328C30(c);
SET64(4, (s32)rd32(c, (RW(17) + 1940)));
SET32(3, RW(0) + 2);
SET64(4, (s32)rd32(c, (RW(4) + 60)));
if (RD(4) == RD(3)) { SET64(25, (s32)rd32(c, (RW(17) + 56))); goto L_002F3000; }
SET32(5, RW(0) + 1);
if (RD(4) == RD(5)) { SET64(25, (s32)rd32(c, (RW(17) + 56))); goto L_002F2FE8; }
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002F2FD8; }
SET64(4, (s32)rd32(c, (RW(17) + 1940))); goto L_002F301C;
L_002F2FD8:;
SET64(31, 0x2f2fe0);  JP_F_002F3B60(c);
 goto L_002F3018;
L_002F2FE8:;
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f2ff4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
wr8(c, (RW(17) + 1899), (u8)RW(3)); goto L_002F3018;
L_002F3000:;
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f3010); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(3, RW(0) + 1);
wr8(c, (RW(17) + 1900), (u8)RW(3));
L_002F3018:;
SET64(4, (s32)rd32(c, (RW(17) + 1940)));
L_002F301C:;
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 1940), RW(0)); goto L_002F38DC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2f3034); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 1940), RW(0));
 goto L_002F38DC;
L_002F3040:;
SET64(31, 0x2f3048);  JP_F_00361360(c);
SET64(4, RD(2) & 0xff);
SET32(3, RW(0) + 1);
{ int t = RD(4) != RD(3);  if (t) goto L_002F38DC; }
SET64(31, 0x2f3060); SET64(4, RD(17) + RD(0)); JP_F_002F14A0(c);
SET64(4, (s32)rd32(c, (RW(17) + 676)));
SET64(31, 0x2f306c); SET32(5, RW(28) + -30984); JP_F_0015E5C0(c);
SET64(16, (s32)rd32(c, (RW(17) + 676)));
c->f[12].u = rd32(c, (RW(28) + -30960));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x2f3080); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2f3094);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f30b0); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3c230000);
SET32(5, RW(29) + 292);
SET64(2, RD(2) | 0xd70a);
SET32(6, RW(28) + -30992);
wr32(c, (RW(29) + 292), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 676)));
SET64(31, 0x2f30d0); SET64(7, RD(0) + RD(0)); JP_F_0015E550(c);
SET64(18, RD(0) + RD(0));
SET64(16, RD(17) + RD(0));
L_002F30D8:;
SET64(2, (s32)rd32(c, (RW(16) + 1500)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2f30e8); SET64(4, (s32)rd32(c, (RW(2) + 256))); JP_F_00141B90(c);
SET64(3, RD(2) ^ 0x1);
SET32(2, RW(0) + 1);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) != RD(2);  if (t) goto L_002F3110; }
SET64(4, (s32)rd32(c, (RW(16) + 1500)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f3110); SET64(5, (s32)rd32(c, (RW(17) + 656))); rt_call(c, t); }
L_002F3110:;
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F30D8; } }
SET64(5, (s32)rd32(c, (RW(17) + 652)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 688))); goto L_002F3134; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 688)));
L_002F3134:;
SET64(31, 0x2f313c);  JP_F_00321110(c);
SET64(4, (s32)rd32(c, (RW(17) + 680)));
if (RD(4) == RD(0)) { SET64(19, RD(0) + RD(0)); goto L_002F3160; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(6, (s32)rd32(c, (RW(17) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2f315c); SET64(5, (s32)rd32(c, (RW(17) + 656))); rt_call(c, t); }
SET64(19, RD(0) + RD(0));
L_002F3160:;
SET64(16, RD(19) & 0xffff);
L_002F3164:;
SET64(5, RD(0) + RD(0));
SET32(2, RW(16) << 1);
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 2);
SET32(2, RW(17) + RW(2));
SET32(18, RW(2) + 864);
SET64(31, 0x2f318c); SET64(4, RD(18) + RD(0)); JP_F_002F0D70(c);
SET64(1, RD(0) | 0x87b0);
SET32(6, RW(0) + 18);
SET32(3, RW(2) + RW(1));
SET32(2, RW(16) << 5);
SET32(8, RW(3) + 100);
SET32(2, RW(2) - RW(16));
SET32(2, RW(2) << 3);
SET32(2, RW(17) + RW(2));
c->f[0].u = rd32(c, (RW(3) + 0));
SET32(7, RW(2) + 168);
wr32(c, (RW(2) + 68), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 4));
wr32(c, (RW(2) + 72), c->f[0].u);
SET64(4, rd16(c, (RW(3) + 8)));
wr16(c, (RW(2) + 76), (u16)RW(4));
SET64(4, rd8(c, (RW(3) + 10)));
wr8(c, (RW(2) + 78), (u8)RW(4));
c->f[0].u = rd32(c, (RW(3) + 12));
wr32(c, (RW(2) + 80), c->f[0].u);
SET64(4, rd8(c, (RW(3) + 16)));
wr8(c, (RW(2) + 84), (u8)RW(4));
c->f[0].u = rd32(c, (RW(3) + 20));
wr32(c, (RW(2) + 88), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 24));
wr32(c, (RW(2) + 92), c->f[0].u);
c->f[3].u = rd32(c, (RW(3) + 28));
c->f[2].u = rd32(c, (RW(3) + 32));
c->f[1].u = rd32(c, (RW(3) + 36));
c->f[0].u = rd32(c, (RW(3) + 40));
wr32(c, (RW(2) + 96), c->f[3].u);
wr32(c, (RW(2) + 100), c->f[2].u);
wr32(c, (RW(2) + 104), c->f[1].u);
wr32(c, (RW(2) + 108), c->f[0].u);
c->f[3].u = rd32(c, (RW(3) + 44));
c->f[2].u = rd32(c, (RW(3) + 48));
c->f[1].u = rd32(c, (RW(3) + 52));
c->f[0].u = rd32(c, (RW(3) + 56));
wr32(c, (RW(2) + 112), c->f[3].u);
wr32(c, (RW(2) + 116), c->f[2].u);
wr32(c, (RW(2) + 120), c->f[1].u);
wr32(c, (RW(2) + 124), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 60));
wr32(c, (RW(2) + 128), c->f[0].u);
SET64(4, rd8(c, (RW(3) + 64)));
wr8(c, (RW(2) + 132), (u8)RW(4));
SET64(4, rd8(c, (RW(3) + 65)));
wr8(c, (RW(2) + 133), (u8)RW(4));
c->f[0].u = rd32(c, (RW(3) + 68));
wr32(c, (RW(2) + 136), c->f[0].u);
SET64(4, rd16(c, (RW(3) + 72)));
wr16(c, (RW(2) + 140), (u16)RW(4));
SET64(4, rd16(c, (RW(3) + 74)));
wr16(c, (RW(2) + 142), (u16)RW(4));
SET64(4, rd16(c, (RW(3) + 76)));
wr16(c, (RW(2) + 144), (u16)RW(4));
SET64(4, rd8(c, (RW(3) + 78)));
wr8(c, (RW(2) + 146), (u8)RW(4));
SET64(4, rd8(c, (RW(3) + 79)));
wr8(c, (RW(2) + 147), (u8)RW(4));
SET64(5, (s16)rd16(c, (RW(3) + 80)));
SET64(4, (s16)rd16(c, (RW(3) + 82)));
wr16(c, (RW(2) + 148), (u16)RW(5));
wr16(c, (RW(2) + 150), (u16)RW(4));
SET64(4, rd8(c, (RW(3) + 84)));
wr8(c, (RW(2) + 152), (u8)RW(4));
SET64(4, rd8(c, (RW(3) + 85)));
wr8(c, (RW(2) + 153), (u8)RW(4));
SET64(4, rd16(c, (RW(3) + 86)));
wr16(c, (RW(2) + 154), (u16)RW(4));
SET64(4, rd8(c, (RW(3) + 88)));
wr8(c, (RW(2) + 156), (u8)RW(4));
SET64(4, rd16(c, (RW(3) + 90)));
wr16(c, (RW(2) + 158), (u16)RW(4));
SET64(4, rd8(c, (RW(3) + 92)));
wr8(c, (RW(2) + 160), (u8)RW(4));
SET64(4, rd16(c, (RW(3) + 94)));
wr16(c, (RW(2) + 162), (u16)RW(4));
SET64(4, (s32)rd32(c, (RW(3) + 96)));
wr32(c, (RW(2) + 164), RW(4));
L_002F32C8:;
SET64(5, (s32)rd32(c, (RW(8) + 0)));
SET32(6, RW(6) + -1);
SET64(4, (s32)rd32(c, (RW(8) + 4)));
wr32(c, (RW(7) + 0), RW(5));
SET32(8, RW(8) + 8);
wr32(c, (RW(7) + 4), RW(4));
{ int t = RSD(6) > 0; SET32(7, RW(7) + 8); if (t) { POLL(); goto L_002F32C8; } }
SET64(3, rd16(c, (RW(3) + 244)));
wr16(c, (RW(2) + 312), (u16)RW(3));
SET64(25, (s32)rd32(c, (RW(18) + 12)));
SET64(5, (s32)rd32(c, (RW(17) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f3304); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET32(2, RW(19) + 1);
SET64(19, RD(2) & 0xffff);
SET64(2, RSD(19) < (s64)2);
if (RD(2) != RD(0)) { SET64(16, RD(19) & 0xffff); { POLL(); goto L_002F3164; } }
SET64(3, (s16)rd16(c, (RW(17) + 1896)));
SET32(2, RW(0) + -1);
{ int t = RD(3) == RD(2);  if (t) goto L_002F3344; }
SET32(3, RW(3) << 2);
SET64(2, (s64)(s32)0x3f800000);
SET32(3, RW(3) + RW(17));
SET64(3, (s32)rd32(c, (RW(3) + 968)));
c->f[12].u = RW(2);
SET64(31, 0x2f3344); SET32(4, RW(3) + 128); JP_F_001E9550(c);
L_002F3344:;
SET64(31, 0x2f334c);  JP_F_00139590(c);
SET64(31, 0x2f3354);  JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 24)));
SET64(3, rd16(c, (RW(3) + 0)));
SET32(2, RW(0) + 1);
SET64(3, RD(3) ^ RD(0));
SET64(3, RD(3) < (u64)(s64)1);
if (RD(3) != RD(2)) { SET64(4, (s32)rd32(c, (RW(17) + 692))); goto L_002F33B8; }
SET64(31, 0x2f3378);  JP_F_00139590(c);
SET64(31, 0x2f3380);  JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s32)rd32(c, (RW(17) + 856)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 680))); goto L_002F3398; }
SET64(4, RD(16) + RD(0)); goto L_002F33A4;
L_002F3398:;
SET64(31, 0x2f33a0); SET64(4, rd16(c, (RW(2) + 464))); JP_F_0030EE40(c);
SET64(4, RD(16) + RD(0));
L_002F33A4:;
SET64(5, RD(2) + RD(0));
c->f[12].u = RW(0);
SET64(31, 0x2f33b4); SET32(6, RW(0) + 1); JP_F_001B8120(c);
SET64(4, (s32)rd32(c, (RW(17) + 692)));
L_002F33B8:;
SET64(31, 0x2f33c0);  JP_F_0023F3E0(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f33dc); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F38DC;
L_002F33E4:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2f33f4);  rt_call(c, t); }
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002F38DC; }
SET64(4, (s32)rd32(c, (RW(17) + 680)));
SET64(31, 0x2f340c); SET64(5, RD(0) + RD(0)); JP_F_002BCD00(c);
SET64(4, (s32)rd32(c, (RW(17) + 680)));
SET64(31, 0x2f3418); SET32(5, RW(0) + 1); JP_F_002BCD00(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f3434); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F38DC;
L_002F343C:;
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 1536), RW(0)); goto L_002F3458; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2f3454); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 1536), RW(0));
L_002F3458:;
SET64(4, (s32)rd32(c, (RW(17) + 688)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 688), RW(0)); goto L_002F3478; }
SET64(25, (s32)rd32(c, (RW(4) + 192)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f3474); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 688), RW(0));
L_002F3478:;
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f3494); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F38DC;
L_002F349C:;
SET64(31, 0x2f34a4);  JP_F_002F0E40(c);
SET64(4, (s32)rd32(c, (RW(17) + 976)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 976), RW(0)); goto L_002F34C4; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2f34c0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 976), RW(0));
L_002F34C4:;
SET64(4, (s32)rd32(c, (RW(17) + 968)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 968), RW(0)); goto L_002F34E4; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f34e0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 968), RW(0));
L_002F34E4:;
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f3500); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F38DC;
L_002F3508:;
SET64(31, 0x2f3510);  JP_F_002F0E40(c);
SET64(4, (s32)rd32(c, (RW(17) + 980)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 980), RW(0)); goto L_002F3530; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2f352c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 980), RW(0));
L_002F3530:;
SET64(4, (s32)rd32(c, (RW(17) + 972)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 972), RW(0)); goto L_002F3550; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f354c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 972), RW(0));
L_002F3550:;
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f356c); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F38DC;
L_002F3574:;
SET64(31, 0x2f357c);  JP_F_002FA2F0(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f3590); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(17) + 723), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 680)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 204)));
{ u32 t = RW(25); SET64(31, 0x2f35ac);  rt_call(c, t); }
 goto L_002F38DC;
L_002F35B4:;
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 688))); goto L_002F35C4; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 688)));
L_002F35C4:;
SET64(31, 0x2f35cc);  JP_F_00321110(c);
SET64(25, (s32)rd32(c, (RW(17) + 876)));
SET64(5, (s32)rd32(c, (RW(17) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f35e0); SET32(4, RW(17) + 864); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 928)));
SET64(5, (s32)rd32(c, (RW(17) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f35f4); SET32(4, RW(17) + 916); rt_call(c, t); }
SET64(18, RD(0) + RD(0));
SET64(16, RD(17) + RD(0));
L_002F35FC:;
SET64(2, (s32)rd32(c, (RW(16) + 1500)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2f360c); SET64(4, (s32)rd32(c, (RW(2) + 256))); JP_F_00141B90(c);
SET64(3, RD(2) ^ 0x1);
SET32(2, RW(0) + 1);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) != RD(2);  if (t) goto L_002F3638; }
SET64(4, (s32)rd32(c, (RW(16) + 1500)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f3634); SET64(5, (s32)rd32(c, (RW(17) + 656))); rt_call(c, t); }
L_002F3638:;
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F35FC; } }
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 204), RW(0));
wr32(c, (RW(29) + 192), RW(2));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 196), RW(2));
wr32(c, (RW(29) + 200), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 672)));
rd128(c, (RW(29) + 192) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(2) + 48) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(3) + 0), RW(0));
wr128(c, (RW(3) + 16) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(2) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(31, 0x2f36a0); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00173B10(c);
SET64(4, (s32)rd32(c, (RW(17) + 676)));
SET64(31, 0x2f36ac); SET32(5, RW(28) + -30984); JP_F_0015E5C0(c);
SET64(16, (s32)rd32(c, (RW(17) + 676)));
c->f[12].u = rd32(c, (RW(28) + -30960));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x2f36c0); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2f36d4);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f36f0); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3c230000);
SET32(5, RW(29) + 288);
SET64(2, RD(2) | 0xd70a);
SET32(6, RW(28) + -30992);
wr32(c, (RW(29) + 288), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 676)));
SET64(31, 0x2f3710); SET64(7, RD(0) + RD(0)); JP_F_0015E550(c);
wr32(c, (RW(17) + 1312), RW(0));
SET32(2, RW(0) + 1);
wr8(c, (RW(17) + 723), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 680)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 204)));
{ u32 t = RW(25); SET64(31, 0x2f3730);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 680)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x2f3744); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f3760); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F38DC;
L_002F3768:;
SET64(3, (s64)(s32)0x41200000);
c->f[1].u = rd32(c, (RW(17) + 1312));
c->f[0].u = RW(3);
c->f[1].f = fpu(F(1) + F(2));
c->fcc = F(1) <= F(0);
{ int t = c->fcc; wr32(c, (RW(17) + 1312), c->f[1].u); if (t) goto L_002F38DC; }
wr32(c, (RW(17) + 1312), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 680)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x2f37a0); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f37bc); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F38DC;
L_002F37C4:;
SET64(2, (s64)(s32)0x41a00000);
c->f[1].u = rd32(c, (RW(17) + 1312));
c->f[0].u = RW(2);
c->f[1].f = fpu(F(1) + F(2));
c->fcc = F(1) <= F(0);
{ int t = c->fcc; wr32(c, (RW(17) + 1312), c->f[1].u); if (t) goto L_002F3844; }
SET64(31, 0x2f37ec); SET64(4, (s32)rd32(c, (RW(17) + 1936))); JP_F_00361360(c);
SET64(8, rd16(c, (RW(17) + 1932)));
SET64(4, (s32)rd32(c, (RW(17) + 1936)));
SET64(6, (s32)rd32(c, (RW(17) + 652)));
SET64(7, (s32)rd32(c, (RW(17) + 716)));
SET64(31, 0x2f3804); SET32(5, RW(0) + 9); JP_F_003614A0(c);
SET64(5, rd16(c, (RW(17) + 1910)));
SET64(31, 0x2f3810); SET64(4, (s32)rd32(c, (RW(17) + 1936))); JP_F_00361320(c);
SET64(5, (s32)rd32(c, (RW(17) + 684)));
SET64(31, 0x2f381c); SET64(4, (s32)rd32(c, (RW(17) + 1936))); JP_F_00361310(c);
SET64(4, (s32)rd32(c, (RW(17) + 1936)));
SET64(31, 0x2f3828); SET32(5, RW(0) + 1); JP_F_00361490(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f3844); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
L_002F3844:;
SET64(31, 0x2f384c); SET64(4, RD(17) + RD(0)); JP_F_002FA9A0(c);
 goto L_002F38DC;
L_002F3854:;
SET64(31, 0x2f385c); SET64(4, (s32)rd32(c, (RW(17) + 1936))); JP_F_00361360(c);
if (RD(2) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002F38D4; }
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 176), RW(3));
c->f[12].u = RW(3);
wr32(c, (RW(29) + 180), RW(3));
wr32(c, (RW(29) + 184), RW(3));
wr32(c, (RW(29) + 188), RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
rd128(c, (RW(29) + 176) & ~15u, &c->r[4]);
wr128(c, (RW(2) + 48) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(3) + 0), RW(0));
wr128(c, (RW(3) + 16) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(2) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 672)));
SET64(31, 0x2f38bc); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00173B10(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f38d0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
L_002F38D4:;
SET64(31, 0x2f38dc);  JP_F_002FA9A0(c);
L_002F38DC:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002F38E0:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 304); return;
}

void JP_F_002F3900(Ctx *c) { /* func_002F3900 */
ENTER(0x2f3900);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002F3950; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15952);
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2f3938);  rt_call(c, t); }
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002F3954; }
SET64(31, 0x2f3950); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002F3950:;
SET64(2, RD(17) + RD(0));
L_002F3954:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002F3970(Ctx *c) { /* func_002F3970 */
ENTER(0x2f3970);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002F39B4; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15928);
SET64(31, 0x2f399c); wr32(c, (RW(17) + 192), RW(2)); JP_F_00321250(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002F39B8; }
SET64(31, 0x2f39b4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002F39B4:;
SET64(2, RD(17) + RD(0));
L_002F39B8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002F39D0(Ctx *c) { /* func_002F39D0 */
ENTER(0x2f39d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002F3A2C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 20800);
wr32(c, (RW(17) + 200), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2f3a08);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2f3a14); SET64(5, RD(0) + RD(0)); JP_F_001C61E0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002F3A30; }
SET64(31, 0x2f3a2c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002F3A2C:;
SET64(2, RD(17) + RD(0));
L_002F3A30:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002F3A50(Ctx *c) { /* func_002F3A50 */
ENTER(0x2f3a50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002F3AC4; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 17936);
SET32(3, RW(3) + 17944);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 17956);
SET64(31, 0x2f3a94); wr32(c, (RW(17) + 36), RW(2)); JP_F_003155C0(c);
SET32(4, RW(17) + 76);
SET64(31, 0x2f3aa0); SET32(5, RW(0) + -1); JP_F_00158110(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2f3aac); SET64(5, RD(0) + RD(0)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002F3AC8; }
SET64(31, 0x2f3ac4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002F3AC4:;
SET64(2, RD(17) + RD(0));
L_002F3AC8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002F3AE0(Ctx *c) { /* func_002F3AE0 */
ENTER(0x2f3ae0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002F3B40; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 21328);
SET32(3, RW(3) + 21336);
wr32(c, (RW(17) + 56), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 21348);
SET64(31, 0x2f3b28); wr32(c, (RW(17) + 36), RW(2)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002F3B44; }
SET64(31, 0x2f3b40); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002F3B40:;
SET64(2, RD(17) + RD(0));
L_002F3B44:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002F3B60(Ctx *c) { /* func_002F3B60 */
ENTER(0x2f3b60);
SET32(29, RW(29) + -80);
SET32(2, RW(0) + 6);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 1532)));
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_002F3BB8; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)1); goto L_002F3BBC; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F3BB8; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_002F3BB8; }
 goto L_002F3BBC;
L_002F3BB8:;
SET64(4, RD(0) + (s64)1);
L_002F3BBC:;
if (RD(4) == RD(0)) { SET64(25, (s32)rd32(c, (RW(19) + 876))); goto L_002F3C04; }
SET64(2, (s32)rd32(c, (RW(19) + 680)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F3C00; }
SET64(31, 0x2f3bd8); SET32(4, RW(2) + 224); JP_F_00141B90(c);
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
{ int t = RD(2) != RD(0);  if (t) goto L_002F3C00; }
SET64(4, (s32)rd32(c, (RW(19) + 680)));
SET64(6, (s32)rd32(c, (RW(19) + 660)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2f3c00); SET64(5, (s32)rd32(c, (RW(19) + 656))); rt_call(c, t); }
L_002F3C00:;
SET64(25, (s32)rd32(c, (RW(19) + 876)));
L_002F3C04:;
SET64(5, (s32)rd32(c, (RW(19) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2f3c14); SET32(4, RW(19) + 864); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 928)));
SET64(5, (s32)rd32(c, (RW(19) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2f3c28); SET32(4, RW(19) + 916); rt_call(c, t); }
SET64(18, RD(0) + RD(0));
SET64(17, RD(19) + RD(0));
SET64(16, RD(19) + RD(0));
L_002F3C34:;
SET64(4, (s32)rd32(c, (RW(17) + 968)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 388)));
{ u32 t = RW(25); SET64(31, 0x2f3c48);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 968)));
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2f3c58); SET32(4, RW(2) + RW(1)); JP_F_00323BB0(c);
SET64(2, (s32)rd32(c, (RW(17) + 968)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 2320), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 968)));
SET64(31, 0x2f3c70); SET32(4, RW(2) + 128); JP_F_001E69E0(c);
SET64(3, RD(18) & 0xffff);
SET64(5, RD(0) + RD(0));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(19) + RW(2));
SET64(31, 0x2f3c98); SET32(4, RW(2) + 864); JP_F_002F0D70(c);
SET64(1, RD(0) | 0x87b0);
SET32(6, RW(16) + 168);
SET32(2, RW(2) + RW(1));
SET32(5, RW(0) + 18);
c->f[0].u = rd32(c, (RW(2) + 0));
SET32(7, RW(2) + 100);
wr32(c, (RW(16) + 68), c->f[0].u);
c->f[0].u = rd32(c, (RW(2) + 4));
wr32(c, (RW(16) + 72), c->f[0].u);
SET64(3, rd16(c, (RW(2) + 8)));
wr16(c, (RW(16) + 76), (u16)RW(3));
SET64(3, rd8(c, (RW(2) + 10)));
wr8(c, (RW(16) + 78), (u8)RW(3));
c->f[0].u = rd32(c, (RW(2) + 12));
wr32(c, (RW(16) + 80), c->f[0].u);
SET64(3, rd8(c, (RW(2) + 16)));
wr8(c, (RW(16) + 84), (u8)RW(3));
c->f[0].u = rd32(c, (RW(2) + 20));
wr32(c, (RW(16) + 88), c->f[0].u);
c->f[0].u = rd32(c, (RW(2) + 24));
wr32(c, (RW(16) + 92), c->f[0].u);
c->f[3].u = rd32(c, (RW(2) + 28));
c->f[2].u = rd32(c, (RW(2) + 32));
c->f[1].u = rd32(c, (RW(2) + 36));
c->f[0].u = rd32(c, (RW(2) + 40));
wr32(c, (RW(16) + 96), c->f[3].u);
wr32(c, (RW(16) + 100), c->f[2].u);
wr32(c, (RW(16) + 104), c->f[1].u);
wr32(c, (RW(16) + 108), c->f[0].u);
c->f[3].u = rd32(c, (RW(2) + 44));
c->f[2].u = rd32(c, (RW(2) + 48));
c->f[1].u = rd32(c, (RW(2) + 52));
c->f[0].u = rd32(c, (RW(2) + 56));
wr32(c, (RW(16) + 112), c->f[3].u);
wr32(c, (RW(16) + 116), c->f[2].u);
wr32(c, (RW(16) + 120), c->f[1].u);
wr32(c, (RW(16) + 124), c->f[0].u);
c->f[0].u = rd32(c, (RW(2) + 60));
wr32(c, (RW(16) + 128), c->f[0].u);
SET64(3, rd8(c, (RW(2) + 64)));
wr8(c, (RW(16) + 132), (u8)RW(3));
SET64(3, rd8(c, (RW(2) + 65)));
wr8(c, (RW(16) + 133), (u8)RW(3));
c->f[0].u = rd32(c, (RW(2) + 68));
wr32(c, (RW(16) + 136), c->f[0].u);
SET64(3, rd16(c, (RW(2) + 72)));
wr16(c, (RW(16) + 140), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 74)));
wr16(c, (RW(16) + 142), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 76)));
wr16(c, (RW(16) + 144), (u16)RW(3));
SET64(3, rd8(c, (RW(2) + 78)));
wr8(c, (RW(16) + 146), (u8)RW(3));
SET64(3, rd8(c, (RW(2) + 79)));
wr8(c, (RW(16) + 147), (u8)RW(3));
SET64(4, (s16)rd16(c, (RW(2) + 80)));
SET64(3, (s16)rd16(c, (RW(2) + 82)));
wr16(c, (RW(16) + 148), (u16)RW(4));
wr16(c, (RW(16) + 150), (u16)RW(3));
SET64(3, rd8(c, (RW(2) + 84)));
wr8(c, (RW(16) + 152), (u8)RW(3));
SET64(3, rd8(c, (RW(2) + 85)));
wr8(c, (RW(16) + 153), (u8)RW(3));
SET64(3, rd16(c, (RW(2) + 86)));
wr16(c, (RW(16) + 154), (u16)RW(3));
SET64(3, rd8(c, (RW(2) + 88)));
wr8(c, (RW(16) + 156), (u8)RW(3));
SET64(3, rd16(c, (RW(2) + 90)));
wr16(c, (RW(16) + 158), (u16)RW(3));
SET64(3, rd8(c, (RW(2) + 92)));
wr8(c, (RW(16) + 160), (u8)RW(3));
SET64(3, rd16(c, (RW(2) + 94)));
wr16(c, (RW(16) + 162), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(2) + 96)));
wr32(c, (RW(16) + 164), RW(3));
L_002F3DC8:;
SET64(4, (s32)rd32(c, (RW(7) + 0)));
SET32(5, RW(5) + -1);
SET64(3, (s32)rd32(c, (RW(7) + 4)));
wr32(c, (RW(6) + 0), RW(4));
SET32(7, RW(7) + 8);
wr32(c, (RW(6) + 4), RW(3));
{ int t = RSD(5) > 0; SET32(6, RW(6) + 8); if (t) { POLL(); goto L_002F3DC8; } }
SET64(3, rd16(c, (RW(2) + 244)));
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 4);
wr16(c, (RW(16) + 312), (u16)RW(3));
SET64(2, RD(18) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 248); if (t) { POLL(); goto L_002F3C34; } }
SET64(25, (s32)rd32(c, (RW(19) + 56)));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f3e18); SET32(5, RW(0) + 3); rt_call(c, t); }
SET64(31, 0x2f3e20);  JP_F_00139590(c);
SET64(31, 0x2f3e28);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET32(3, RW(0) + 1);
SET64(4, rd16(c, (RW(4) + 0)));
SET64(4, RD(4) ^ RD(0));
SET64(4, RD(4) < (u64)(s64)1);
if (RD(4) != RD(3)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_002F3E8C; }
SET64(31, 0x2f3e4c);  JP_F_00139590(c);
SET64(31, 0x2f3e54);  JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s32)rd32(c, (RW(19) + 856)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(19) + 680))); goto L_002F3E6C; }
SET64(4, RD(16) + RD(0)); goto L_002F3E78;
L_002F3E6C:;
SET64(31, 0x2f3e74); SET64(4, rd16(c, (RW(2) + 464))); JP_F_0030EE40(c);
SET64(4, RD(16) + RD(0));
L_002F3E78:;
SET64(5, RD(2) + RD(0));
c->f[12].u = RW(0);
SET64(31, 0x2f3e88); SET32(6, RW(0) + 1); JP_F_001B8120(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_002F3E8C:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002F3EB0(Ctx *c) { /* func_002F3EB0 */
ENTER(0x2f3eb0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd8(c, (RW(4) + 1894)));
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002F3EF4; }
SET64(31, 0x2f3ed4); SET64(4, (s32)rd32(c, (RW(17) + 1936))); JP_F_00361360(c);
SET64(8, rd16(c, (RW(17) + 1932)));
SET64(4, (s32)rd32(c, (RW(17) + 1936)));
SET64(6, (s32)rd32(c, (RW(17) + 652)));
SET64(7, (s32)rd32(c, (RW(17) + 716)));
SET64(31, 0x2f3eec); SET32(5, RW(0) + 2); JP_F_003614A0(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_002F40A8;
L_002F3EF4:;
SET64(2, rd8(c, (RW(17) + 1892)));
if (RD(2) == RD(0)) { SET64(3, (s16)rd16(c, (RW(17) + 1896))); goto L_002F3F28; }
SET64(31, 0x2f3f08); SET64(4, (s32)rd32(c, (RW(17) + 1936))); JP_F_00361360(c);
SET64(8, rd16(c, (RW(17) + 1932)));
SET64(4, (s32)rd32(c, (RW(17) + 1936)));
SET64(6, (s32)rd32(c, (RW(17) + 652)));
SET64(7, (s32)rd32(c, (RW(17) + 716)));
SET64(31, 0x2f3f20); SET32(5, RW(0) + 3); JP_F_003614A0(c);
 goto L_002F40A4;
L_002F3F28:;
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(17));
SET64(3, (s32)rd32(c, (RW(3) + 968)));
SET32(2, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30268)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x2f3f50);  rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(17) + 1896)));
SET64(2, RD(2) & 0xffff);
SET64(16, RD(2) ^ RD(0));
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(3) + 1);
SET64(3, RD(3) & 0x1);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(17));
SET64(3, (s32)rd32(c, (RW(3) + 968)));
SET32(2, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30268)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x2f3f8c); SET64(16, RD(16) < (u64)(s64)1); rt_call(c, t); }
SET64(2, RD(2) & 0xffff);
SET64(4, RD(16) & 0xff);
SET64(5, RD(2) ^ RD(0));
SET32(3, RW(0) + 1);
{ int t = RD(4) != RD(3); SET64(5, RD(5) < (u64)(s64)1); if (t) goto L_002F3FB0; }
SET64(2, RD(5) & 0xff);
{ int t = RD(2) == RD(3);  if (t) goto L_002F3FDC; }
L_002F3FB0:;
if (RD(4) != RD(0)) { SET32(2, RW(0) + 1); goto L_002F3FC8; }
SET64(2, RD(5) & 0xff);
{ int t = RD(2) == RD(0);  if (t) goto L_002F3FDC; }
SET32(2, RW(0) + 1);
L_002F3FC8:;
if (RD(4) != RD(2)) { SET64(4, (s32)rd32(c, (RW(17) + 1936))); goto L_002F4060; }
SET64(2, RD(5) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F405C; }
L_002F3FDC:;
SET64(2, (s64)(s32)0x4c0000);
SET64(4, (s16)rd16(c, (RW(17) + 1896)));
c->f[0].u = rd32(c, (RW(2) + -4800));
SET64(3, (s64)(s32)0x10000);
SET32(2, RW(4) << 2);
SET32(2, RW(2) + RW(17));
SET64(2, (s32)rd32(c, (RW(2) + 968)));
SET32(3, RW(2) + RW(3));
c->f[1].u = rd32(c, (RW(3) + -30800));
c->fcc = F(1) == F(0);
if (!c->fcc) { SET32(16, RW(0) + 6); goto L_002F4010; }
SET32(16, RW(0) + 5);
L_002F4010:;
SET64(31, 0x2f4018); SET64(4, (s32)rd32(c, (RW(17) + 1936))); JP_F_00361360(c);
SET64(8, rd16(c, (RW(17) + 1932)));
SET64(4, (s32)rd32(c, (RW(17) + 1936)));
SET64(6, (s32)rd32(c, (RW(17) + 652)));
SET64(7, (s32)rd32(c, (RW(17) + 716)));
SET64(31, 0x2f4030); SET64(5, RD(16) + RD(0)); JP_F_003614A0(c);
SET64(31, 0x2f4038);  JP_F_00139590(c);
SET64(31, 0x2f4040);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
c->f[12].u = RW(0);
SET32(5, RW(0) + 162);
SET64(31, 0x2f4054); SET64(6, RD(0) + RD(0)); JP_F_001B8120(c);
 goto L_002F40A4;
L_002F405C:;
SET64(4, (s32)rd32(c, (RW(17) + 1936)));
L_002F4060:;
SET64(31, 0x2f4068);  JP_F_00361360(c);
SET64(8, rd16(c, (RW(17) + 1932)));
SET64(4, (s32)rd32(c, (RW(17) + 1936)));
SET64(6, (s32)rd32(c, (RW(17) + 652)));
SET64(7, (s32)rd32(c, (RW(17) + 716)));
SET64(31, 0x2f4080); SET32(5, RW(0) + 4); JP_F_003614A0(c);
SET64(31, 0x2f4088);  JP_F_00139590(c);
SET64(31, 0x2f4090);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
c->f[12].u = RW(0);
SET32(5, RW(0) + 163);
SET64(31, 0x2f40a4); SET64(6, RD(0) + RD(0)); JP_F_001B8120(c);
L_002F40A4:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002F40A8:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002F40C0(Ctx *c) { /* func_002F40C0 */
ENTER(0x2f40c0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[12].u = rd32(c, (RW(4) + 588));
SET64(31, 0x2f40e0); SET64(18, RD(4) + RD(0)); JP_F_002FB090(c);
SET64(4, rd16(c, (RW(18) + 60)));
SET32(3, RW(0) + 20);
if (RD(4) == RD(3)) { SET64(3, (s32)rd32(c, (RW(18) + 672))); goto L_002F4DAC; }
SET32(3, RW(0) + 12);
{ int t = RD(4) == RD(3);  if (t) goto L_002F4CC0; }
SET32(3, RW(0) + 11);
{ int t = RD(4) == RD(3);  if (t) goto L_002F49F0; }
SET32(3, RW(0) + 10);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(18) + 1536))); goto L_002F4870; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(18) + 1532))); goto L_002F4560; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(3, (s32)rd32(c, (RW(18) + 672))); goto L_002F4280; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 1); goto L_002F4170; }
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 1536))); goto L_002F4148; }
SET64(31, rd64(c, (RW(29) + 48))); goto L_002F4E58;
L_002F4148:;
SET64(31, 0x2f4150);  JP_F_001BA1B0(c);
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(4, RD(18) + RD(0));
SET64(2, rd16(c, (RW(18) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f416c); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET32(2, RW(0) + 1);
L_002F4170:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2f417c); wr8(c, (RW(18) + 1888), (u8)RW(2)); JP_F_002FDEF0(c);
SET64(3, rd8(c, (RW(18) + 1549)));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 1536))); goto L_002F4198; }
c->f[12].u = rd32(c, (RW(18) + 588));
SET64(31, 0x2f4194); SET64(4, (s32)rd32(c, (RW(18) + 1536))); JP_F_00328C60(c);
SET64(3, (s32)rd32(c, (RW(18) + 1536)));
L_002F4198:;
SET64(3, (s32)rd32(c, (RW(3) + 1920)));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1);
if (RD(3) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_002F41C0; }
SET64(4, rd8(c, (RW(18) + 1549)));
SET32(3, RW(0) + 1);
{ int t = RD(4) != RD(3);  if (t) goto L_002F4E54; }
SET64(4, RD(18) + RD(0));
L_002F41C0:;
SET64(31, 0x2f41c8);  JP_F_002FAAD0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002F4E54; }
SET64(2, (s64)(s32)0x4c0000);
SET64(16, (s32)rd32(c, (RW(18) + 676)));
c->f[12].u = rd32(c, (RW(2) + -7688));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x2f41e8); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2f41fc);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f4218); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, 0x2f4220);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(2, (s64)(s32)0x42700000); goto L_002F4234; }
SET32(5, RW(5) + 672);
SET64(2, (s64)(s32)0x42700000);
L_002F4234:;
SET64(3, (s32)rd32(c, (RW(18) + 672)));
c->f[1].u = RW(2);
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7672));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x2f425c);  JP_F_00173D00(c);
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(4, RD(18) + RD(0));
SET64(2, rd16(c, (RW(18) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f4278); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F4E54;
L_002F4280:;
SET64(2, (s64)(s32)0x530000);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x2f4290); c->f[12].u = rd32(c, (RW(2) + -22384)); JP_F_00173B10(c);
SET32(2, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2f42a0); wr8(c, (RW(18) + 1888), (u8)RW(2)); JP_F_002FDEF0(c);
SET64(2, (s32)rd32(c, (RW(18) + 672)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
c->f[1].u = rd32(c, (RW(2) + 48));
c->f[0].u = rd32(c, (RW(2) + 16));
c->fcc = F(1) == F(0);
if (!c->fcc) { SET64(2, RD(0) + RD(0)); goto L_002F4304; }
c->f[1].u = rd32(c, (RW(2) + 52));
c->f[0].u = rd32(c, (RW(2) + 20));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F4300; }
c->f[1].u = rd32(c, (RW(2) + 56));
c->f[0].u = rd32(c, (RW(2) + 24));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F4300; }
c->f[1].u = rd32(c, (RW(2) + 60));
c->f[0].u = rd32(c, (RW(2) + 28));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F4300; }
SET64(2, RD(0) + (s64)1); goto L_002F4304;
L_002F4300:;
SET64(2, RD(0) + RD(0));
L_002F4304:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F4510; }
c->f[1].u = rd32(c, (RW(18) + 584));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->fcc = F(1) == F(0);
{ int t = c->fcc; SET32(4, RW(18) + 564); if (t) goto L_002F4354; }
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr8(c, (RW(4) + 32), (u8)RW(0));
wr32(c, (RW(4) + 20), c->f[0].u);
c->f[1].u = rd32(c, (RW(4) + 24));
c->f[0].u = rd32(c, (RW(4) + 20));
SET64(31, 0x2f4354); c->f[12].f = fpu(F(1) * F(0)); JP_F_00141D40(c);
L_002F4354:;
SET64(3, rd8(c, (RW(18) + 1549)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(17, RD(0) + RD(0)); goto L_002F43E8; }
SET64(31, 0x2f436c);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(2, (s64)(s32)0x42700000); goto L_002F4380; }
SET32(5, RW(5) + 672);
SET64(2, (s64)(s32)0x42700000);
L_002F4380:;
SET64(3, (s32)rd32(c, (RW(18) + 672)));
c->f[2].u = RW(2);
SET64(2, (s64)(s32)0x4c0000);
c->f[1].u = rd32(c, (RW(2) + -7672));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
c->f[1].f = fpu_div(F(2), F(1));
SET64(2, (s64)(s32)0x3fc00000);
c->f[0].u = RW(2);
SET64(31, 0x2f43b0); c->f[12].f = fpu(F(0) * F(1)); JP_F_00173E80(c);
SET64(2, (s32)rd32(c, (RW(18) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f43cc); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f43e0); SET32(5, RW(0) + 20); rt_call(c, t); }
 goto L_002F4E54;
L_002F43E8:;
SET64(16, RD(18) + RD(0));
L_002F43EC:;
SET64(2, (s32)rd32(c, (RW(16) + 1500)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f4408); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F43EC; } }
SET64(2, (s32)rd32(c, (RW(18) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f4434); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(18) + 1540)));
SET64(31, 0x2f4440); SET32(4, RW(18) + 1552); JP_F_002F69B0(c);
SET64(5, (s32)rd32(c, (RW(18) + 1544)));
SET64(31, 0x2f444c); SET32(4, RW(18) + 1632); JP_F_002F69B0(c);
SET64(3, rd16(c, (RW(18) + 1532)));
SET32(2, RW(0) + 6);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_002F4488; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)1); goto L_002F448C; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F4488; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_002F4488; }
 goto L_002F448C;
L_002F4488:;
SET64(4, RD(0) + (s64)1);
L_002F448C:;
if (RD(4) == RD(0)) { SET64(25, (s32)rd32(c, (RW(18) + 876))); goto L_002F44D0; }
SET64(2, (s32)rd32(c, (RW(18) + 680)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F44CC; }
SET64(31, 0x2f44a8); SET32(4, RW(2) + 224); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002F44CC; }
SET64(4, (s32)rd32(c, (RW(18) + 680)));
SET64(6, (s32)rd32(c, (RW(18) + 660)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2f44cc); SET64(5, (s32)rd32(c, (RW(18) + 656))); rt_call(c, t); }
L_002F44CC:;
SET64(25, (s32)rd32(c, (RW(18) + 876)));
L_002F44D0:;
SET64(5, (s32)rd32(c, (RW(18) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f44e0); SET32(4, RW(18) + 864); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 928)));
SET64(5, (s32)rd32(c, (RW(18) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f44f4); SET32(4, RW(18) + 916); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(4, RD(18) + RD(0));
SET64(2, rd16(c, (RW(18) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f4510); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
L_002F4510:;
SET64(2, (s64)(s32)0x4c0000);
SET64(16, (s32)rd32(c, (RW(18) + 676)));
c->f[12].u = rd32(c, (RW(2) + -7688));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x2f4528); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2f453c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f4558); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
 goto L_002F4E54;
L_002F4560:;
SET32(2, RW(0) + 6);
SET32(4, RW(0) + 1);
SET64(17, RD(0) + (s64)1);
{ int t = RD(3) == RD(2); SET64(5, RD(0) + RD(0)); if (t) goto L_002F459C; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)1); goto L_002F45A0; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F459C; }
{ int t = RD(3) == RD(4);  if (t) goto L_002F459C; }
 goto L_002F45A0;
L_002F459C:;
SET64(5, RD(0) + (s64)1);
L_002F45A0:;
if (RD(5) == RD(0)) { SET64(16, RD(0) + RD(0)); goto L_002F45D8; }
SET64(4, (s32)rd32(c, (RW(18) + 680)));
{ int t = RD(4) == RD(0);  if (t) goto L_002F45D4; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2f45c4);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F45D4; }
SET64(17, RD(0) + RD(0));
L_002F45D4:;
SET64(16, RD(0) + RD(0));
L_002F45D8:;
SET64(3, RD(16) & 0xffff);
L_002F45DC:;
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(18) + RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 876)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2f4604); SET32(4, RW(2) + 864); rt_call(c, t); }
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002F4618; }
SET64(17, RD(0) + RD(0));
L_002F4618:;
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(3, RSD(16) < (s64)2);
if (RD(3) != RD(0)) { SET64(3, RD(16) & 0xffff); { POLL(); goto L_002F45DC; } }
{ int t = RD(17) == RD(0);  if (t) goto L_002F4E54; }
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 92), RW(0));
wr32(c, (RW(29) + 80), RW(2));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 84), RW(2));
wr32(c, (RW(29) + 88), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 672)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(2) + 48) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(18) + 672)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(3) + 0), RW(0));
wr128(c, (RW(3) + 16) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(18) + 672)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(2) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 672)));
SET64(31, 0x2f468c); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00173B10(c);
SET64(2, (s32)rd32(c, (RW(18) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f46a8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 1540)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(3) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x2f46c4); SET32(4, RW(3) + 128); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 1544)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(3) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x2f46e0); SET32(4, RW(3) + 128); rt_call(c, t); }
SET64(31, 0x2f46e8); SET64(4, (s32)rd32(c, (RW(18) + 692))); JP_F_0023F3E0(c);
SET64(31, 0x2f46f0); SET64(4, RD(18) + RD(0)); JP_F_002F6BF0(c);
SET64(31, 0x2f46f8); SET64(4, (s32)rd32(c, (RW(18) + 1536))); JP_F_00328D40(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2f4704); SET32(5, RW(0) + 3); JP_F_002FD7E0(c);
SET64(4, (s32)rd32(c, (RW(18) + 688)));
SET64(31, 0x2f4710); SET64(5, RD(0) + RD(0)); JP_F_0031F600(c);
SET64(4, (s32)rd32(c, (RW(18) + 688)));
SET64(31, 0x2f471c); SET32(5, RW(0) + 1); JP_F_0031F600(c);
SET64(2, (s32)rd32(c, (RW(18) + 1540)));
SET64(31, 0x2f4728); SET32(4, RW(2) + 128); JP_F_001E9540(c);
SET64(2, (s32)rd32(c, (RW(18) + 1544)));
SET64(31, 0x2f4734); SET32(4, RW(2) + 128); JP_F_001E9540(c);
SET64(2, (s32)rd32(c, (RW(18) + 1540)));
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F4750; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfff7);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F4750:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
if (RD(3) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1544))); goto L_002F476C; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfff7);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 1544)));
L_002F476C:;
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F4784; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfff7);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F4784:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
if (RD(3) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1540))); goto L_002F47A0; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfff7);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 1540)));
L_002F47A0:;
SET64(25, (s32)rd32(c, (RW(2) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x2f47b0); SET32(4, RW(2) + 128); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 1544)));
SET64(25, (s32)rd32(c, (RW(2) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x2f47c4); SET32(4, RW(2) + 128); rt_call(c, t); }
SET64(6, RD(0) + RD(0));
SET64(5, RD(18) + RD(0));
L_002F47CC:;
SET64(2, (s32)rd32(c, (RW(5) + 968)));
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F47E8; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfffd);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F47E8:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
{ int t = RD(3) == RD(0);  if (t) goto L_002F4800; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfffd);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F4800:;
SET64(2, (s32)rd32(c, (RW(5) + 968)));
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F4820; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfffb);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F4820:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
{ int t = RD(3) == RD(0);  if (t) goto L_002F4838; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfffb);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F4838:;
SET32(6, RW(6) + 1);
SET64(2, RD(6) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 4); if (t) { POLL(); goto L_002F47CC; } }
wr32(c, (RW(18) + 1872), RW(0));
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 1876), RW(0));
wr32(c, (RW(18) + 1880), RW(0));
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f4868); SET32(5, RW(0) + 10); rt_call(c, t); }
 goto L_002F4E54;
L_002F4870:;
SET64(31, 0x2f4878); c->f[12].u = rd32(c, (RW(18) + 588)); JP_F_00328C60(c);
SET64(4, (s32)rd32(c, (RW(18) + 1536)));
SET32(3, RW(0) + 3);
SET64(5, (s32)rd32(c, (RW(4) + 1920)));
{ int t = RD(5) == RD(3); SET64(6, RD(0) + (s64)1); if (t) goto L_002F489C; }
SET32(3, RW(0) + 5);
if (RD(5) == RD(3)) { SET64(3, RD(6) & 0xff); goto L_002F48A0; }
SET64(6, RD(0) + RD(0));
L_002F489C:;
SET64(3, RD(6) & 0xff);
L_002F48A0:;
{ int t = RD(3) != RD(0);  if (t) goto L_002F4E54; }
SET64(31, 0x2f48b0);  JP_F_00328C30(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2f48bc); SET64(5, RD(0) + RD(0)); JP_F_002FD7E0(c);
SET64(4, (s32)rd32(c, (RW(18) + 1536)));
SET64(2, rd8(c, (RW(4) + 1492)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F490C; }
SET64(31, 0x2f48d4);  JP_F_001BA1F0(c);
SET64(31, 0x2f48dc);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 672))); goto L_002F48F0; }
SET32(5, RW(5) + 672);
SET64(3, (s32)rd32(c, (RW(18) + 672)));
L_002F48F0:;
SET64(2, (s64)(s32)0x3d4c0000);
SET64(2, RD(2) | 0xcccd);
c->f[12].u = RW(2);
SET64(31, 0x2f4904); SET64(4, (s32)rd32(c, (RW(3) + 0))); JP_F_00173E80(c);
SET64(2, (s32)rd32(c, (RW(18) + 1540))); goto L_002F4940;
L_002F490C:;
SET64(31, 0x2f4914);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 672))); goto L_002F4928; }
SET32(5, RW(5) + 672);
SET64(3, (s32)rd32(c, (RW(18) + 672)));
L_002F4928:;
SET64(2, (s64)(s32)0x3d4c0000);
SET64(2, RD(2) | 0xcccd);
c->f[12].u = RW(2);
SET64(31, 0x2f493c); SET64(4, (s32)rd32(c, (RW(3) + 0))); JP_F_00174040(c);
SET64(2, (s32)rd32(c, (RW(18) + 1540)));
L_002F4940:;
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F4958; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F4958:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
if (RD(3) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1544))); goto L_002F4974; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 1544)));
L_002F4974:;
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F498C; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F498C:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
if (RD(3) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1540))); goto L_002F49A8; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 1540)));
L_002F49A8:;
SET64(25, (s32)rd32(c, (RW(2) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x2f49b8); SET32(4, RW(2) + 128); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 1544)));
SET64(25, (s32)rd32(c, (RW(2) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x2f49cc); SET32(4, RW(2) + 128); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(4, RD(18) + RD(0));
SET64(2, rd16(c, (RW(18) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f49e8); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F4E54;
L_002F49F0:;
SET64(31, 0x2f49f8);  JP_F_00139590(c);
SET64(31, 0x2f4a00);  JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s32)rd32(c, (RW(18) + 856)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 680))); goto L_002F4A18; }
SET64(4, RD(16) + RD(0)); goto L_002F4A24;
L_002F4A18:;
SET64(31, 0x2f4a20); SET64(4, rd16(c, (RW(2) + 464))); JP_F_0030EE40(c);
SET64(4, RD(16) + RD(0));
L_002F4A24:;
SET64(5, RD(2) + RD(0));
c->f[12].u = RW(0);
SET64(31, 0x2f4a34); SET32(6, RW(0) + 1); JP_F_001B8120(c);
SET64(4, (s32)rd32(c, (RW(18) + 1540)));
SET64(2, (s32)rd32(c, (RW(18) + 1536)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 388)));
{ u32 t = RW(25); SET64(31, 0x2f4a4c); SET64(16, rd8(c, (RW(2) + 1492))); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 1544)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 388)));
{ u32 t = RW(25); SET64(31, 0x2f4a60);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(18) + 1540)));
SET64(31, 0x2f4a6c); SET32(4, RW(18) + 1552); JP_F_002F6900(c);
SET64(5, (s32)rd32(c, (RW(18) + 1544)));
SET64(31, 0x2f4a78); SET32(4, RW(18) + 1632); JP_F_002F6900(c);
if (RD(16) == RD(0)) { SET32(4, RW(18) + 864); goto L_002F4AA8; }
SET64(4, (s32)rd32(c, (RW(18) + 1544)));
SET64(31, 0x2f4a8c); SET32(5, RW(0) + 27); JP_F_002EE5C0(c);
SET64(2, (s32)rd32(c, (RW(18) + 1544)));
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2f4a9c); SET32(4, RW(2) + RW(1)); JP_F_00323520(c);
SET64(31, 0x2f4aa4); SET64(4, (s32)rd32(c, (RW(18) + 1544))); JP_F_0030BFE0(c);
SET32(4, RW(18) + 864);
L_002F4AA8:;
SET64(31, 0x2f4ab0); SET64(5, RD(0) + RD(0)); JP_F_002F0D30(c);
SET64(31, 0x2f4ab8); SET64(4, RD(2) + RD(0)); JP_F_002EE600(c);
SET32(3, RW(0) + 26);
if (RD(2) == RD(3)) { SET64(2, RD(0) + (s64)1); goto L_002F4B38; }
SET32(4, RW(18) + 916);
SET64(31, 0x2f4ad0); SET64(5, RD(0) + RD(0)); JP_F_002F0D30(c);
SET64(31, 0x2f4ad8); SET64(4, RD(2) + RD(0)); JP_F_002EE600(c);
SET32(3, RW(0) + 26);
{ int t = RD(2) == RD(3);  if (t) goto L_002F4B34; }
SET32(4, RW(18) + 864);
SET64(31, 0x2f4af0); SET64(5, RD(0) + RD(0)); JP_F_002F0D30(c);
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2f4afc); SET32(4, RW(2) + RW(1)); JP_F_003238B0(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F4B34; }
SET32(4, RW(18) + 916);
SET64(31, 0x2f4b14); SET64(5, RD(0) + RD(0)); JP_F_002F0D30(c);
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2f4b20); SET32(4, RW(2) + RW(1)); JP_F_003238B0(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F4B34; }
SET64(2, RD(0) + RD(0)); goto L_002F4B38;
L_002F4B34:;
SET64(2, RD(0) + (s64)1);
L_002F4B38:;
SET64(3, RD(2) & 0xff);
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2);  if (t) goto L_002F4BE8; }
SET32(2, RW(0) + 30);
SET64(16, RD(0) + RD(0));
wr16(c, (RW(18) + 1352), (u16)RW(2));
SET64(17, RD(18) + RD(0));
wr32(c, (RW(18) + 1524), RW(0));
L_002F4B5C:;
SET64(2, (s32)rd32(c, (RW(17) + 1500)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f4b78); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(16, RW(16) + 1);
SET64(2, RD(16) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002F4B5C; } }
SET64(2, (s32)rd32(c, (RW(18) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f4ba4); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_002F4BAC:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 64), RW(2));
wr32(c, (RW(29) + 68), RW(2));
wr32(c, (RW(29) + 72), RW(2));
wr32(c, (RW(29) + 76), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 1500)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2f4bd4); SET32(5, RW(29) + 64); rt_call(c, t); }
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F4BAC; } }
L_002F4BE8:;
SET64(3, rd16(c, (RW(18) + 1532)));
SET32(2, RW(0) + 6);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_002F4C24; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)1); goto L_002F4C28; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F4C24; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_002F4C24; }
 goto L_002F4C28;
L_002F4C24:;
SET64(4, RD(0) + (s64)1);
L_002F4C28:;
if (RD(4) == RD(0)) { SET64(25, (s32)rd32(c, (RW(18) + 876))); goto L_002F4C70; }
SET64(2, (s32)rd32(c, (RW(18) + 680)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F4C6C; }
SET64(31, 0x2f4c44); SET32(4, RW(2) + 224); JP_F_00141B90(c);
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
{ int t = RD(2) != RD(0);  if (t) goto L_002F4C6C; }
SET64(4, (s32)rd32(c, (RW(18) + 680)));
SET64(6, (s32)rd32(c, (RW(18) + 660)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2f4c6c); SET64(5, (s32)rd32(c, (RW(18) + 656))); rt_call(c, t); }
L_002F4C6C:;
SET64(25, (s32)rd32(c, (RW(18) + 876)));
L_002F4C70:;
SET64(5, (s32)rd32(c, (RW(18) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2f4c80); SET32(4, RW(18) + 864); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 928)));
SET64(5, (s32)rd32(c, (RW(18) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2f4c94); SET32(4, RW(18) + 916); rt_call(c, t); }
SET64(31, 0x2f4c9c); SET64(4, RD(18) + RD(0)); JP_F_002FDEF0(c);
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(4, RD(18) + RD(0));
SET64(2, rd16(c, (RW(18) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f4cb8); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F4E54;
L_002F4CC0:;
SET64(2, (s64)(s32)0x530000);
SET64(3, (s32)rd32(c, (RW(18) + 1536)));
c->f[12].u = rd32(c, (RW(2) + -22384));
SET64(2, (s32)rd32(c, (RW(18) + 672)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2f4cdc); SET64(16, rd8(c, (RW(3) + 1492))); JP_F_00173B10(c);
SET64(3, (s32)rd32(c, (RW(18) + 672)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
c->f[1].u = rd32(c, (RW(3) + 48));
c->f[0].u = rd32(c, (RW(3) + 16));
c->fcc = F(1) == F(0);
if (!c->fcc) { SET64(3, RD(0) + RD(0)); goto L_002F4D40; }
c->f[1].u = rd32(c, (RW(3) + 52));
c->f[0].u = rd32(c, (RW(3) + 20));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F4D3C; }
c->f[1].u = rd32(c, (RW(3) + 56));
c->f[0].u = rd32(c, (RW(3) + 24));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F4D3C; }
c->f[1].u = rd32(c, (RW(3) + 60));
c->f[0].u = rd32(c, (RW(3) + 28));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F4D3C; }
SET64(3, RD(0) + (s64)1); goto L_002F4D40;
L_002F4D3C:;
SET64(3, RD(0) + RD(0));
L_002F4D40:;
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002F4E54; }
if (RD(16) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 1540))); goto L_002F4D80; }
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f4d70); SET32(5, RW(0) + 4); rt_call(c, t); }
SET32(3, RW(0) + 1);
wr8(c, (RW(18) + 64), (u8)RW(3));
wr8(c, (RW(18) + 65), (u8)RW(3)); goto L_002F4E54;
L_002F4D80:;
SET64(31, 0x2f4d88);  JP_F_002F11A0(c);
SET64(2, (s16)rd16(c, (RW(2) + 44)));
SET64(4, RD(18) + RD(0));
wr16(c, (RW(18) + 1896), (u16)RW(2));
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f4da4); SET32(5, RW(0) + 7); rt_call(c, t); }
 goto L_002F4E54;
L_002F4DAC:;
SET64(2, (s64)(s32)0x530000);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x2f4dbc); c->f[12].u = rd32(c, (RW(2) + -22384)); JP_F_00173B10(c);
SET64(2, (s32)rd32(c, (RW(18) + 672)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
c->f[1].u = rd32(c, (RW(2) + 48));
c->f[0].u = rd32(c, (RW(2) + 16));
c->fcc = F(1) == F(0);
if (!c->fcc) { SET64(2, RD(0) + RD(0)); goto L_002F4E20; }
c->f[1].u = rd32(c, (RW(2) + 52));
c->f[0].u = rd32(c, (RW(2) + 20));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F4E1C; }
c->f[1].u = rd32(c, (RW(2) + 56));
c->f[0].u = rd32(c, (RW(2) + 24));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F4E1C; }
c->f[1].u = rd32(c, (RW(2) + 60));
c->f[0].u = rd32(c, (RW(2) + 28));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F4E1C; }
SET64(2, RD(0) + (s64)1); goto L_002F4E20;
L_002F4E1C:;
SET64(2, RD(0) + RD(0));
L_002F4E20:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(4, RD(18) + RD(0)); goto L_002F4E4C; }
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f4e48); SET32(5, RW(0) + 7); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
L_002F4E4C:;
SET64(31, 0x2f4e54);  JP_F_002FDEF0(c);
L_002F4E54:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002F4E58:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002F4E70(Ctx *c) { /* func_002F4E70 */
ENTER(0x2f4e70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr8(c, (RW(4) + 1549), (u8)RW(0));
SET64(3, (s32)rd32(c, (RW(4) + 1536)));
SET64(3, (s32)rd32(c, (RW(3) + 1920)));
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002F4F8C; }
wr32(c, (RW(16) + 1540), RW(5));
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 1544), RW(6));
wr16(c, (RW(16) + 1532), (u16)RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f4eb4); SET32(5, RW(0) + 6); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr16(c, (RW(16) + 1532), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 1536)));
SET64(6, (s32)rd32(c, (RW(16) + 1544)));
SET64(7, (s32)rd32(c, (RW(16) + 1540)));
SET64(31, 0x2f4ed0); SET64(5, rd16(c, (RW(16) + 1532))); JP_F_00328DB0(c);
SET64(17, (s32)rd32(c, (RW(16) + 676)));
c->f[12].u = rd32(c, (RW(28) + -30956));
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x2f4ee4); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2f4ef8);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f4f14); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 676)));
SET64(31, 0x2f4f20); SET32(5, RW(28) + -30988); JP_F_0015E5C0(c);
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(16) + 1312), RW(0));
c->f[2].u = rd32(c, (RW(2) + -7720));
wr32(c, (RW(16) + 1316), RW(0));
c->f[1].u = rd32(c, (RW(16) + 584));
c->f[3].u = RW(0);
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7720));
c->fcc = F(1) == F(0);
{ int t = c->fcc; SET32(4, RW(16) + 564); if (t) goto L_002F4F6C; }
wr32(c, (RW(4) + 40), c->f[3].u);
wr32(c, (RW(4) + 36), c->f[3].u);
wr8(c, (RW(4) + 32), (u8)RW(0));
wr32(c, (RW(4) + 20), c->f[2].u);
c->f[1].u = rd32(c, (RW(4) + 24));
c->f[0].u = rd32(c, (RW(4) + 20));
SET64(31, 0x2f4f6c); c->f[12].f = fpu(F(1) * F(0)); JP_F_00141D40(c);
L_002F4F6C:;
SET64(31, 0x2f4f74);  JP_F_00139590(c);
SET64(31, 0x2f4f7c);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x4a0000);
SET64(31, 0x2f4f8c); c->f[12].u = rd32(c, (RW(2) + -18456)); JP_F_001B8110(c);
L_002F4F8C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002F4FA0(Ctx *c) { /* func_002F4FA0 */
ENTER(0x2f4fa0);
SET32(29, RW(29) + -416);
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
SET64(2, (s8)rd8(c, (RW(28) + -29868)));
SET64(16, RD(5) + RD(0));
{ int t = RD(2) != RD(0); wr32(c, (RW(29) + 284), RW(7)); if (t) goto L_002F51C8; }
SET64(2, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 7084), RW(0));
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(2) + 7088), RW(3));
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(2) + 7092), RW(0));
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(2) + 7096), RW(0));
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(2) + 7100), RW(3));
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(2) + 7104), RW(0));
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(2) + 7108), RW(0));
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(2) + 7112), RW(3));
SET64(2, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
SET32(3, RW(3) + 7120);
wr16(c, (RW(2) + 7116), (u16)RW(0));
wr32(c, (RW(3) + 0), RW(0));
SET32(2, RW(3) + 8);
wr32(c, (RW(3) + 4), RW(0));
SET64(3, (s64)(s32)0x540000);
SET32(3, RW(3) + 7152);
SET64(1, RD(2) < RD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002F5188; }
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 7128);
SET32(9, RW(3) - RW(4));
SET32(8, RW(9) + 7);
{ int t = RSD(8) >= 0; SET32(7, RSW(8) >> 3); if (t) goto L_002F5070; }
SET32(3, RW(8) + 7);
SET32(7, RSW(3) >> 3);
L_002F5070:;
SET32(6, RW(7) + 1);
SET64(5, (s64)(s32)0x540000);
SET64(1, RSD(6) < (s64)9);
{ int t = RD(1) != RD(0); SET32(5, RW(5) + 7088); if (t) goto L_002F5158; }
SET64(3, (s64)(s32)0x540000);
SET64(12, RD(0) + RD(0));
SET32(3, RW(3) + 7152);
SET64(1, RD(3) < RD(4));
{ int t = RD(1) != RD(0); SET64(11, RD(0) + RD(0)); if (t) goto L_002F50C8; }
SET64(4, (s64)(s32)0x80000000);
SET64(3, RD(9) & RD(4));
{ int t = RD(3) != RD(0); SET64(10, RD(0) + (s64)1); if (t) goto L_002F50BC; }
SET64(3, RD(8) & RD(4));
{ int t = RD(3) == RD(0);  if (t) goto L_002F50BC; }
SET64(10, RD(0) + RD(0));
L_002F50BC:;
{ int t = RD(10) == RD(0);  if (t) goto L_002F50C8; }
SET64(11, RD(0) + (s64)1);
L_002F50C8:;
{ int t = RD(11) == RD(0);  if (t) goto L_002F50FC; }
SET64(3, (s64)(s32)0x80000000);
SET64(4, RD(7) & RD(3));
{ int t = RD(4) != RD(0); SET64(8, RD(0) + (s64)1); if (t) goto L_002F50F0; }
SET64(3, RD(6) & RD(3));
{ int t = RD(4) == RD(3);  if (t) goto L_002F50F0; }
SET64(8, RD(0) + RD(0));
L_002F50F0:;
{ int t = RD(8) == RD(0);  if (t) goto L_002F50FC; }
SET64(12, RD(0) + (s64)1);
L_002F50FC:;
{ int t = RD(12) == RD(0);  if (t) goto L_002F5158; }
wr32(c, (RW(2) + 0), RW(0));
L_002F5108:;
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 16), RW(0));
wr32(c, (RW(2) + 20), RW(0));
wr32(c, (RW(2) + 24), RW(0));
wr32(c, (RW(2) + 28), RW(0));
wr32(c, (RW(2) + 32), RW(0));
wr32(c, (RW(2) + 36), RW(0));
wr32(c, (RW(2) + 40), RW(0));
wr32(c, (RW(2) + 44), RW(0));
wr32(c, (RW(2) + 48), RW(0));
wr32(c, (RW(2) + 52), RW(0));
wr32(c, (RW(2) + 56), RW(0));
wr32(c, (RW(2) + 60), RW(0));
SET32(2, RW(2) + 64);
SET64(3, RD(2) < RD(5));
if (RD(3) != RD(0)) { wr32(c, (RW(2) + 0), RW(0)); { POLL(); goto L_002F5108; } }
L_002F5158:;
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 7152);
SET64(1, RD(2) < RD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_002F5188; }
L_002F516C:;
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
SET32(2, RW(2) + 8);
SET64(3, RD(2) < RD(4));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002F516C; } }
L_002F5188:;
SET64(2, (s64)(s32)0x540000);
wr16(c, (RW(2) + 7160), (u16)RW(0));
SET64(2, (s64)(s32)0x540000);
wr16(c, (RW(2) + 7162), (u16)RW(0));
SET64(2, (s64)(s32)0x540000);
wr16(c, (RW(2) + 7164), (u16)RW(0));
SET64(2, (s64)(s32)0x540000);
wr16(c, (RW(2) + 7166), (u16)RW(0));
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(2) + 7168), RW(0));
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(2) + 7172), RW(0));
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(2) + 7176), RW(0));
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -29868), (u8)RW(2));
L_002F51C8:;
SET64(2, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 7072), RW(0));
SET64(4, (s64)(s32)0xbf800000);
SET64(2, (s64)(s32)0x540000);
wr8(c, (RW(2) + 7076), (u8)RW(0));
c->f[12].u = RW(0);
SET64(2, (s64)(s32)0x540000);
wr8(c, (RW(2) + 7077), (u8)RW(0));
c->f[13].u = RW(3);
SET64(2, (s64)(s32)0x540000);
wr8(c, (RW(2) + 7078), (u8)RW(0));
SET64(2, (s64)(s32)0x540000);
wr8(c, (RW(2) + 7079), (u8)RW(0));
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(2) + 7080), RW(4));
SET64(31, 0x2f5210); SET32(4, RW(29) + 384); JP_F_002F56F0(c);
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2f5220); SET32(4, RW(4) + 7084); JP_F_002F56D0(c);
c->f[12].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
c->f[14].u = RW(2);
SET32(4, RW(29) + 368);
SET64(31, 0x2f5238); c->f[13].u = c->f[12].u; JP_F_002F56B0(c);
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2f5248); SET32(4, RW(4) + 7092); JP_F_002F5690(c);
c->f[12].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
c->f[14].u = RW(2);
SET32(4, RW(29) + 320);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2f5264); c->f[13].u = c->f[12].u; JP_F_002F5670(c);
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2f5274); SET32(4, RW(4) + 7104); JP_F_002F5640(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2f5280); SET32(4, RW(4) + 7072); JP_F_0031E970(c);
SET64(17, (s64)(s32)0x540000);
SET64(18, RD(0) + RD(0));
SET32(17, RW(17) + 7072);
L_002F528C:;
c->f[12].u = RW(0);
SET32(4, RW(29) + 360);
SET64(31, 0x2f529c); c->f[13].u = c->f[12].u; JP_F_002F5630(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2f52a8); SET32(4, RW(17) + 48); JP_F_002F5610(c);
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)4);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 8); if (t) { POLL(); goto L_002F528C; } }
SET64(2, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
wr16(c, (RW(2) + 7152), (u16)RW(0));
c->f[12].u = RW(0);
SET64(2, (s64)(s32)0x540000);
wr8(c, (RW(3) + 7154), (u8)RW(0));
wr16(c, (RW(2) + 7156), (u16)RW(0));
SET32(4, RW(29) + 288);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
c->f[13].u = c->f[12].u;
SET64(31, 0x2f52f4); c->f[14].u = c->f[12].u; JP_F_002F55E0(c);
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2f5304); SET32(4, RW(4) + 7160); JP_F_002F55A0(c);
SET32(3, RW(0) + -1);
SET64(2, (s64)(s32)0x540000);
wr16(c, (RW(2) + 7180), (u16)RW(3));
SET64(6, (s64)(s32)0x540000);
SET64(2, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x40a00000);
wr16(c, (RW(2) + 7182), (u16)RW(0));
SET64(5, (s64)(s32)0x540000);
SET64(2, (s64)(s32)0x540000);
SET64(4, (s64)(s32)0x540000);
wr32(c, (RW(2) + 7184), RW(3));
SET64(22, (s64)(s32)0x540000);
c->f[0].u = rd32(c, (RW(16) + 0));
SET64(3, (s64)(s32)0x540000);
SET64(2, (s64)(s32)0x540000);
SET64(21, (s64)(s32)0x540000);
SET64(20, (s64)(s32)0x540000);
SET64(19, (s64)(s32)0x540000);
wr32(c, (RW(6) + 7072), c->f[0].u);
SET64(18, (s64)(s32)0x540000);
SET64(6, rd8(c, (RW(16) + 4)));
SET64(17, (s64)(s32)0x540000);
SET64(25, (s64)(s32)0x540000);
SET64(24, (s64)(s32)0x540000);
SET64(15, (s64)(s32)0x540000);
SET64(14, (s64)(s32)0x540000);
wr8(c, (RW(5) + 7076), (u8)RW(6));
SET64(13, (s64)(s32)0x540000);
SET64(5, rd8(c, (RW(16) + 5)));
SET64(12, (s64)(s32)0x540000);
SET64(11, (s64)(s32)0x540000);
SET64(10, (s64)(s32)0x540000);
SET64(9, (s64)(s32)0x540000);
SET64(8, (s64)(s32)0x540000);
wr8(c, (RW(3) + 7077), (u8)RW(5));
SET64(7, (s64)(s32)0x540000);
SET64(5, rd8(c, (RW(16) + 6)));
SET64(3, (s64)(s32)0x540000);
wr128(c, (RW(29) + 256) & ~15u, &c->r[3]);
SET64(6, (s64)(s32)0x540000);
SET64(30, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
wr8(c, (RW(4) + 7078), (u8)RW(5));
SET64(23, (s64)(s32)0x540000);
SET64(4, rd8(c, (RW(16) + 7)));
SET64(5, (s64)(s32)0x540000);
wr128(c, (RW(29) + 240) & ~15u, &c->r[5]);
SET64(5, (s64)(s32)0x540000);
wr8(c, (RW(2) + 7079), (u8)RW(4));
c->f[0].u = rd32(c, (RW(16) + 8));
wr128(c, (RW(29) + 224) & ~15u, &c->r[5]);
SET64(5, (s64)(s32)0x540000);
SET64(4, (s64)(s32)0x540000);
wr128(c, (RW(29) + 208) & ~15u, &c->r[5]);
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(22) + 7080), c->f[0].u);
SET64(5, (s64)(s32)0x540000);
c->f[1].u = rd32(c, (RW(16) + 12));
wr128(c, (RW(29) + 192) & ~15u, &c->r[5]);
c->f[0].u = rd32(c, (RW(16) + 16));
SET64(5, (s64)(s32)0x540000);
wr128(c, (RW(29) + 176) & ~15u, &c->r[5]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[4]);
SET32(5, RW(0) + 14);
wr32(c, (RW(21) + 7084), c->f[1].u);
SET64(4, (s64)(s32)0x540000);
wr32(c, (RW(20) + 7088), c->f[0].u);
SET32(4, RW(4) + 7072);
c->f[2].u = rd32(c, (RW(16) + 20));
c->f[1].u = rd32(c, (RW(16) + 24));
c->f[0].u = rd32(c, (RW(16) + 28));
wr32(c, (RW(19) + 7092), c->f[2].u);
wr32(c, (RW(18) + 7096), c->f[1].u);
wr32(c, (RW(17) + 7100), c->f[0].u);
c->f[3].u = rd32(c, (RW(16) + 32));
c->f[2].u = rd32(c, (RW(16) + 36));
c->f[1].u = rd32(c, (RW(16) + 40));
c->f[0].u = rd32(c, (RW(16) + 44));
wr32(c, (RW(25) + 7104), c->f[3].u);
wr32(c, (RW(24) + 7108), c->f[2].u);
wr32(c, (RW(15) + 7112), c->f[1].u);
wr32(c, (RW(14) + 7116), c->f[0].u);
c->f[3].u = rd32(c, (RW(16) + 48));
c->f[2].u = rd32(c, (RW(16) + 52));
c->f[1].u = rd32(c, (RW(16) + 56));
c->f[0].u = rd32(c, (RW(16) + 60));
wr32(c, (RW(13) + 7120), c->f[3].u);
wr32(c, (RW(12) + 7124), c->f[2].u);
wr32(c, (RW(11) + 7128), c->f[1].u);
wr32(c, (RW(10) + 7132), c->f[0].u);
c->f[3].u = rd32(c, (RW(16) + 64));
c->f[2].u = rd32(c, (RW(16) + 68));
c->f[1].u = rd32(c, (RW(16) + 72));
c->f[0].u = rd32(c, (RW(16) + 76));
wr32(c, (RW(9) + 7136), c->f[3].u);
wr32(c, (RW(8) + 7140), c->f[2].u);
wr32(c, (RW(7) + 7144), c->f[1].u);
wr32(c, (RW(6) + 7148), c->f[0].u);
SET64(6, rd16(c, (RW(16) + 80)));
wr16(c, (RW(30) + 7152), (u16)RW(6));
SET64(7, rd8(c, (RW(16) + 82)));
rd128(c, (RW(29) + 256) & ~15u, &c->r[6]);
wr8(c, (RW(6) + 7154), (u8)RW(7));
SET64(6, rd16(c, (RW(16) + 84)));
wr16(c, (RW(3) + 7156), (u16)RW(6));
c->f[3].u = rd32(c, (RW(16) + 88));
rd128(c, (RW(29) + 240) & ~15u, &c->r[3]);
c->f[2].u = rd32(c, (RW(16) + 92));
c->f[1].u = rd32(c, (RW(16) + 96));
c->f[0].u = rd32(c, (RW(16) + 100));
wr32(c, (RW(3) + 7160), c->f[3].u);
rd128(c, (RW(29) + 224) & ~15u, &c->r[3]);
wr32(c, (RW(3) + 7164), c->f[2].u);
rd128(c, (RW(29) + 208) & ~15u, &c->r[3]);
wr32(c, (RW(3) + 7168), c->f[1].u);
rd128(c, (RW(29) + 192) & ~15u, &c->r[3]);
wr32(c, (RW(3) + 7172), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 104));
rd128(c, (RW(29) + 176) & ~15u, &c->r[3]);
wr32(c, (RW(3) + 7176), c->f[0].u);
SET64(3, (s16)rd16(c, (RW(16) + 108)));
wr16(c, (RW(2) + 7180), (u16)RW(3));
SET64(2, rd16(c, (RW(16) + 110)));
wr16(c, (RW(23) + 7182), (u16)RW(2));
c->f[0].u = rd32(c, (RW(16) + 112));
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
SET64(31, 0x2f5504); wr32(c, (RW(2) + 7184), c->f[0].u); JP_F_0031E960(c);
SET64(3, (s64)(s32)0x41000000);
SET64(2, (s64)(s32)0x40400000);
wr32(c, (RW(29) + 408), RW(3));
SET64(4, (s64)(s32)0x540000);
wr32(c, (RW(29) + 412), RW(2));
SET64(5, rd64(c, (RW(29) + 408)));
SET64(31, 0x2f5524); SET32(4, RW(4) + 7072); JP_F_0031E9E0(c);
SET64(2, (s64)(s32)0x3f800000);
SET64(4, (s64)(s32)0x540000);
wr32(c, (RW(29) + 400), RW(2));
SET32(4, RW(4) + 7072);
SET32(5, RW(29) + 392);
wr32(c, (RW(29) + 392), RW(0));
SET64(31, 0x2f5544); wr32(c, (RW(29) + 396), RW(0)); JP_F_0031E9A0(c);
SET64(2, (s64)(s32)0xc1000000);
wr32(c, (RW(29) + 336), RW(0));
wr32(c, (RW(29) + 344), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 340), RW(0));
wr32(c, (RW(29) + 348), RW(2));
rd128(c, (RW(29) + 336) & ~15u, &c->r[4]);
SET64(2, (s64)(s32)0x540000);
SET64(3, (s32)rd32(c, (RW(29) + 284)));
SET32(2, RW(2) + 7072);
wr128(c, (RW(3) + 0) & ~15u, &c->r[4]);
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
SET32(29, RW(29) + 416); return;
}

void JP_F_002F55A0(Ctx *c) { /* func_002F55A0 */
ENTER(0x2f55a0);
SET64(3, rd16(c, (RW(5) + 0)));
SET64(2, RD(4) + RD(0));
wr16(c, (RW(4) + 0), (u16)RW(3));
SET64(3, rd16(c, (RW(5) + 2)));
wr16(c, (RW(4) + 2), (u16)RW(3));
SET64(3, rd16(c, (RW(5) + 4)));
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(3, rd16(c, (RW(5) + 6)));
wr16(c, (RW(4) + 6), (u16)RW(3));
c->f[0].u = rd32(c, (RW(5) + 8));
wr32(c, (RW(4) + 8), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 12));
wr32(c, (RW(4) + 12), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 16));
wr32(c, (RW(4) + 16), c->f[0].u); return;
}

void JP_F_002F55E0(Ctx *c) { /* func_002F55E0 */
ENTER(0x2f55e0);
wr16(c, (RW(4) + 0), (u16)RW(5));
SET64(2, RD(4) + RD(0));
wr16(c, (RW(4) + 2), (u16)RW(6));
wr16(c, (RW(4) + 4), (u16)RW(7));
wr16(c, (RW(4) + 6), (u16)RW(8));
wr32(c, (RW(4) + 8), c->f[12].u);
wr32(c, (RW(4) + 12), c->f[13].u);
wr32(c, (RW(4) + 16), c->f[14].u); return;
}

void JP_F_002F5610(Ctx *c) { /* func_002F5610 */
ENTER(0x2f5610);
c->f[0].u = rd32(c, (RW(5) + 0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 4));
wr32(c, (RW(4) + 4), c->f[0].u); return;
}

void JP_F_002F5630(Ctx *c) { /* func_002F5630 */
ENTER(0x2f5630);
wr32(c, (RW(4) + 0), c->f[12].u);
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), c->f[13].u); return;
}

void JP_F_002F5640(Ctx *c) { /* func_002F5640 */
ENTER(0x2f5640);
c->f[0].u = rd32(c, (RW(5) + 0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 4));
wr32(c, (RW(4) + 4), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 8));
wr32(c, (RW(4) + 8), c->f[0].u);
SET64(3, rd16(c, (RW(5) + 12)));
wr16(c, (RW(4) + 12), (u16)RW(3)); return;
}

void JP_F_002F5670(Ctx *c) { /* func_002F5670 */
ENTER(0x2f5670);
wr32(c, (RW(4) + 0), c->f[12].u);
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), c->f[13].u);
wr32(c, (RW(4) + 8), c->f[14].u);
wr16(c, (RW(4) + 12), (u16)RW(5)); return;
}

void JP_F_002F5690(Ctx *c) { /* func_002F5690 */
ENTER(0x2f5690);
c->f[0].u = rd32(c, (RW(5) + 0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 4));
wr32(c, (RW(4) + 4), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 8));
wr32(c, (RW(4) + 8), c->f[0].u); return;
}

void JP_F_002F56B0(Ctx *c) { /* func_002F56B0 */
ENTER(0x2f56b0);
wr32(c, (RW(4) + 0), c->f[12].u);
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), c->f[13].u);
wr32(c, (RW(4) + 8), c->f[14].u); return;
}

void JP_F_002F56D0(Ctx *c) { /* func_002F56D0 */
ENTER(0x2f56d0);
c->f[0].u = rd32(c, (RW(5) + 0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(5) + 4));
wr32(c, (RW(4) + 4), c->f[0].u); return;
}

void JP_F_002F56F0(Ctx *c) { /* func_002F56F0 */
ENTER(0x2f56f0);
wr32(c, (RW(4) + 0), c->f[12].u);
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), c->f[13].u); return;
}

void JP_F_002F5700(Ctx *c) { /* func_002F5700 */
ENTER(0x2f5700);
SET32(29, RW(29) + -240);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[12].u = rd32(c, (RW(4) + 588));
SET64(31, 0x2f5720); SET64(18, RD(4) + RD(0)); JP_F_002FB090(c);
SET64(7, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET32(4, RW(0) + 1);
L_002F572C:;
SET64(5, (s32)rd32(c, (RW(6) + 968)));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(5) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + -30268)));
{ int t = RD(3) == RD(0);  if (t) goto L_002F5750; }
wr8(c, (RW(3) + 12), (u8)RW(4));
wr8(c, (RW(3) + 13), (u8)RW(0));
L_002F5750:;
SET32(7, RW(7) + 1);
SET64(3, RD(7) < (u64)(s64)2);
{ int t = RD(3) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_002F572C; } }
SET64(4, rd16(c, (RW(18) + 60)));
SET32(3, RW(0) + 10);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(18) + 1540))); goto L_002F5D84; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(3, (s32)rd32(c, (RW(18) + 672))); goto L_002F5948; }
if (RD(4) == RD(0)) { SET64(2, (s64)(s32)0x41000000); goto L_002F578C; }
SET64(31, rd64(c, (RW(29) + 48))); goto L_002F6680;
L_002F578C:;
wr8(c, (RW(18) + 1888), (u8)RW(3));
c->f[12].u = RW(2);
SET64(1, RD(0) | 0x87b0);
SET64(2, (s32)rd32(c, (RW(18) + 1540)));
SET64(31, 0x2f57a4); SET32(4, RW(2) + RW(1)); JP_F_00323880(c);
SET64(31, 0x2f57ac); SET64(4, RD(18) + RD(0)); JP_F_002FDEF0(c);
c->f[12].u = rd32(c, (RW(18) + 588));
SET64(31, 0x2f57b8); SET64(4, (s32)rd32(c, (RW(18) + 1536))); JP_F_00328C60(c);
c->f[1].u = rd32(c, (RW(18) + 1312));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(3, (s32)rd32(c, (RW(18) + 1536))); goto L_002F57E0; }
c->f[0].u = rd32(c, (RW(18) + 588));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(18) + 1312), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(18) + 1536)));
L_002F57E0:;
SET64(3, (s32)rd32(c, (RW(3) + 1920)));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) != RD(0);  if (t) goto L_002F667C; }
c->f[1].u = rd32(c, (RW(18) + 1312));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc;  if (t) goto L_002F667C; }
SET64(4, (s32)rd32(c, (RW(18) + 676)));
SET64(31, 0x2f5818); SET32(5, RW(28) + -30984); JP_F_0015E5C0(c);
SET64(16, (s32)rd32(c, (RW(18) + 676)));
c->f[12].u = rd32(c, (RW(28) + -30960));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x2f582c); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2f5840);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f585c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3dcc0000);
SET32(5, RW(29) + 236);
SET64(2, RD(2) | 0xcccd);
SET32(6, RW(28) + -30992);
wr32(c, (RW(29) + 236), RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 676)));
SET64(31, 0x2f587c); SET64(7, RD(0) + RD(0)); JP_F_0015E550(c);
SET64(3, rd16(c, (RW(18) + 1532)));
SET32(2, RW(0) + 6);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_002F58B8; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)1); goto L_002F58BC; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F58B8; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_002F58B8; }
 goto L_002F58BC;
L_002F58B8:;
SET64(4, RD(0) + (s64)1);
L_002F58BC:;
if (RD(4) == RD(0)) { SET64(25, (s32)rd32(c, (RW(18) + 876))); goto L_002F5900; }
SET64(2, (s32)rd32(c, (RW(18) + 680)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F58FC; }
SET64(31, 0x2f58d8); SET32(4, RW(2) + 224); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002F58FC; }
SET64(4, (s32)rd32(c, (RW(18) + 680)));
SET64(6, (s32)rd32(c, (RW(18) + 660)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2f58fc); SET64(5, (s32)rd32(c, (RW(18) + 656))); rt_call(c, t); }
L_002F58FC:;
SET64(25, (s32)rd32(c, (RW(18) + 876)));
L_002F5900:;
SET64(5, (s32)rd32(c, (RW(18) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f5910); SET32(4, RW(18) + 864); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 928)));
SET64(5, (s32)rd32(c, (RW(18) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f5924); SET32(4, RW(18) + 916); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(4, RD(18) + RD(0));
SET64(2, rd16(c, (RW(18) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f5940); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F667C;
L_002F5948:;
SET64(2, (s64)(s32)0x530000);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x2f5958); c->f[12].u = rd32(c, (RW(2) + -22384)); JP_F_00173B10(c);
SET64(3, rd16(c, (RW(18) + 1532)));
SET32(2, RW(0) + 6);
SET32(4, RW(0) + 1);
SET64(17, RD(0) + (s64)1);
{ int t = RD(3) == RD(2); SET64(5, RD(0) + RD(0)); if (t) goto L_002F5998; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)1); goto L_002F599C; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F5998; }
{ int t = RD(3) == RD(4);  if (t) goto L_002F5998; }
 goto L_002F599C;
L_002F5998:;
SET64(5, RD(0) + (s64)1);
L_002F599C:;
if (RD(5) == RD(0)) { SET64(16, RD(0) + RD(0)); goto L_002F59D4; }
SET64(4, (s32)rd32(c, (RW(18) + 680)));
{ int t = RD(4) == RD(0);  if (t) goto L_002F59D0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2f59c0);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F59D0; }
SET64(17, RD(0) + RD(0));
L_002F59D0:;
SET64(16, RD(0) + RD(0));
L_002F59D4:;
SET64(3, RD(16) & 0xffff);
L_002F59D8:;
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(18) + RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 876)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2f5a00); SET32(4, RW(2) + 864); rt_call(c, t); }
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002F5A10; }
SET64(17, RD(0) + RD(0));
L_002F5A10:;
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(3, RSD(16) < (s64)2);
if (RD(3) != RD(0)) { SET64(3, RD(16) & 0xffff); { POLL(); goto L_002F59D8; } }
{ int t = RD(17) == RD(0);  if (t) goto L_002F667C; }
SET64(31, 0x2f5a34); SET64(4, RD(18) + RD(0)); JP_F_002FE3B0(c);
SET64(31, 0x2f5a3c); SET64(4, (s32)rd32(c, (RW(18) + 692))); JP_F_0023F3E0(c);
SET64(31, 0x2f5a44); SET64(4, RD(18) + RD(0)); JP_F_002F6BF0(c);
SET64(31, 0x2f5a4c); SET64(4, (s32)rd32(c, (RW(18) + 1536))); JP_F_00328D40(c);
SET64(2, (s16)rd16(c, (RW(18) + 1532)));
SET32(2, RW(2) + -4);
SET64(1, RD(2) < (u64)(s64)3);
if (RD(1) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_002F5B64; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x2f5a6c); SET32(5, RW(0) + 2); JP_F_002FD7E0(c);
SET64(16, (s32)rd32(c, (RW(28) + -29872)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2f5a7c); SET32(4, RW(16) + 864); JP_F_002F0D30(c);
SET64(31, 0x2f5a84); SET64(4, RD(2) + RD(0)); JP_F_002EE600(c);
SET32(3, RW(0) + 26);
if (RD(2) == RD(3)) { SET64(2, RD(0) + (s64)1); goto L_002F5B04; }
SET32(4, RW(16) + 916);
SET64(31, 0x2f5a9c); SET64(5, RD(0) + RD(0)); JP_F_002F0D30(c);
SET64(31, 0x2f5aa4); SET64(4, RD(2) + RD(0)); JP_F_002EE600(c);
SET32(3, RW(0) + 26);
{ int t = RD(2) == RD(3);  if (t) goto L_002F5B00; }
SET32(4, RW(16) + 864);
SET64(31, 0x2f5abc); SET64(5, RD(0) + RD(0)); JP_F_002F0D30(c);
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2f5ac8); SET32(4, RW(2) + RW(1)); JP_F_003238B0(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F5B00; }
SET32(4, RW(16) + 916);
SET64(31, 0x2f5ae0); SET64(5, RD(0) + RD(0)); JP_F_002F0D30(c);
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2f5aec); SET32(4, RW(2) + RW(1)); JP_F_003238B0(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F5B00; }
SET64(2, RD(0) + RD(0)); goto L_002F5B04;
L_002F5B00:;
SET64(2, RD(0) + (s64)1);
L_002F5B04:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 688))); goto L_002F5B70; }
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_002F5B14:;
SET64(2, (s32)rd32(c, (RW(16) + 1500)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f5b30); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F5B14; } }
SET64(2, (s32)rd32(c, (RW(18) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f5b5c); SET32(5, RW(0) + 1); rt_call(c, t); }
 goto L_002F5B6C;
L_002F5B64:;
SET64(31, 0x2f5b6c); SET32(5, RW(0) + 1); JP_F_002FD7E0(c);
L_002F5B6C:;
SET64(4, (s32)rd32(c, (RW(18) + 688)));
L_002F5B70:;
SET64(31, 0x2f5b78); SET64(5, RD(0) + RD(0)); JP_F_0031F600(c);
SET64(4, (s32)rd32(c, (RW(18) + 688)));
SET64(31, 0x2f5b84); SET32(5, RW(0) + 1); JP_F_0031F600(c);
SET64(16, (s32)rd32(c, (RW(18) + 680)));
SET32(4, RW(29) + 144);
SET64(5, rd16(c, (RW(16) + 464)));
SET64(31, 0x2f5b98); SET64(6, RD(0) + RD(0)); JP_F_00242320(c);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET32(4, RW(16) + 64);
wr128(c, (RW(16) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 80) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 96) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
SET64(31, 0x2f5bc0); wr128(c, (RW(16) + 112) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(31, 0x2f5bc8); SET64(4, (s32)rd32(c, (RW(18) + 1540))); JP_F_002E87C0(c);
SET64(31, 0x2f5bd0); SET64(4, (s32)rd32(c, (RW(18) + 1544))); JP_F_002E87C0(c);
SET64(31, 0x2f5bd8); SET64(4, (s32)rd32(c, (RW(18) + 1540))); JP_F_002E8770(c);
SET64(31, 0x2f5be0); SET64(4, (s32)rd32(c, (RW(18) + 1544))); JP_F_002E8770(c);
SET64(2, (s32)rd32(c, (RW(18) + 1540)));
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F5BFC; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfff7);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F5BFC:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
if (RD(3) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1544))); goto L_002F5C18; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfff7);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 1544)));
L_002F5C18:;
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F5C30; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfff7);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F5C30:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
if (RD(3) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1540))); goto L_002F5C4C; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfff7);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 1540)));
L_002F5C4C:;
SET64(25, (s32)rd32(c, (RW(2) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x2f5c5c); SET32(4, RW(2) + 128); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 1544)));
SET64(25, (s32)rd32(c, (RW(2) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x2f5c70); SET32(4, RW(2) + 128); rt_call(c, t); }
SET64(2, (s16)rd16(c, (RW(18) + 1532)));
SET32(2, RW(2) + -2);
SET64(1, RD(2) < (u64)(s64)2);
if (RD(1) == RD(0)) { SET64(6, RD(0) + RD(0)); goto L_002F5CE4; }
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_002F5C8C:;
SET64(2, (s32)rd32(c, (RW(16) + 968)));
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F5CA8; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x2);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F5CA8:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
{ int t = RD(3) == RD(0);  if (t) goto L_002F5CC0; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x2);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F5CC0:;
SET64(2, (s32)rd32(c, (RW(16) + 968)));
SET64(31, 0x2f5ccc); SET32(4, RW(2) + 128); JP_F_001E9540(c);
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F5C8C; } }
 goto L_002F5D68;
L_002F5CE4:;
SET64(5, RD(18) + RD(0));
L_002F5CE8:;
SET64(2, (s32)rd32(c, (RW(5) + 968)));
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F5D08; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfffd);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F5D08:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
{ int t = RD(3) == RD(0);  if (t) goto L_002F5D20; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfffd);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F5D20:;
SET64(2, (s32)rd32(c, (RW(5) + 968)));
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F5D40; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfffb);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F5D40:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
{ int t = RD(3) == RD(0);  if (t) goto L_002F5D58; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfffb);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F5D58:;
SET32(6, RW(6) + 1);
SET64(2, RD(6) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 4); if (t) { POLL(); goto L_002F5CE8; } }
L_002F5D68:;
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f5d7c); SET32(5, RW(0) + 10); rt_call(c, t); }
 goto L_002F667C;
L_002F5D84:;
SET64(31, 0x2f5d8c);  JP_F_002E8A30(c);
SET64(31, 0x2f5d94); SET64(4, (s32)rd32(c, (RW(18) + 1544))); JP_F_002E8A30(c);
SET64(3, (s32)rd32(c, (RW(18) + 672)));
SET64(2, (s64)(s32)0x530000);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x2f5da8); c->f[12].u = rd32(c, (RW(2) + -22384)); JP_F_00173B10(c);
c->f[12].u = rd32(c, (RW(18) + 588));
SET64(31, 0x2f5db4); SET64(4, (s32)rd32(c, (RW(18) + 1536))); JP_F_00328C60(c);
SET64(4, (s32)rd32(c, (RW(18) + 1536)));
SET32(3, RW(0) + 3);
SET64(5, (s32)rd32(c, (RW(4) + 1920)));
{ int t = RD(5) == RD(3); SET64(6, RD(0) + (s64)1); if (t) goto L_002F5DD8; }
SET32(3, RW(0) + 5);
if (RD(5) == RD(3)) { SET64(3, RD(6) & 0xff); goto L_002F5DDC; }
SET64(6, RD(0) + RD(0));
L_002F5DD8:;
SET64(3, RD(6) & 0xff);
L_002F5DDC:;
{ int t = RD(3) != RD(0);  if (t) goto L_002F667C; }
SET64(31, 0x2f5dec);  JP_F_00328C30(c);
SET64(4, (s32)rd32(c, (RW(18) + 680)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 204)));
{ u32 t = RW(25); SET64(31, 0x2f5e00);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 1540)));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30268)));
if (RD(4) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 1544))); goto L_002F5E34; }
wr8(c, (RW(4) + 12), (u8)RW(0));
wr8(c, (RW(4) + 13), (u8)RW(0));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x2f5e30);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 1544)));
L_002F5E34:;
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30268)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 1540))); goto L_002F5E64; }
wr8(c, (RW(4) + 12), (u8)RW(0));
wr8(c, (RW(4) + 13), (u8)RW(0));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x2f5e60);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 1540)));
L_002F5E64:;
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 388)));
{ u32 t = RW(25); SET64(31, 0x2f5e74);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 1544)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 388)));
{ u32 t = RW(25); SET64(31, 0x2f5e88);  rt_call(c, t); }
SET64(31, 0x2f5e90); SET64(4, (s32)rd32(c, (RW(18) + 688))); JP_F_003204E0(c);
SET64(5, (s32)rd32(c, (RW(18) + 1540)));
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(3) + RD(0));
SET32(4, RW(0) + 6);
SET32(3, RW(5) + RW(3));
rd128(c, (RW(3) + -30192) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 1840) & ~15u, &c->r[3]);
SET64(3, (s32)rd32(c, (RW(18) + 1540)));
SET32(2, RW(3) + RW(2));
rd128(c, (RW(2) + -30176) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 1856) & ~15u, &c->r[2]);
SET64(3, (s16)rd16(c, (RW(18) + 1532)));
{ int t = RD(3) == RD(4); SET64(6, RD(0) + RD(0)); if (t) goto L_002F5EE8; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(6, RD(0) + (s64)1); goto L_002F5EEC; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F5EE8; }
SET64(2, RD(3) ^ 0x3); goto L_002F5EF0;
L_002F5EE8:;
SET64(6, RD(0) + (s64)1);
L_002F5EEC:;
SET64(2, RD(3) ^ 0x3);
L_002F5EF0:;
SET64(2, RD(2) < (u64)(s64)1);
{ int t = RD(6) == RD(0); wr8(c, (RW(18) + 1832), (u8)RW(2)); if (t) goto L_002F6278; }
SET64(2, (s32)rd32(c, (RW(18) + 1536)));
SET64(2, rd8(c, (RW(2) + 1492)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1540))); goto L_002F602C; }
SET64(2, (s32)rd32(c, (RW(18) + 1544)));
wr32(c, (RW(18) + 1712), RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 1540)));
c->f[0].u = rd32(c, (RW(3) + 31056));
wr32(c, (RW(18) + 1716), c->f[0].u);
SET64(2, rd8(c, (RW(3) + 31060)));
wr8(c, (RW(18) + 1720), (u8)RW(2));
SET64(2, rd8(c, (RW(3) + 31061)));
wr8(c, (RW(18) + 1721), (u8)RW(2));
SET64(2, rd8(c, (RW(3) + 31062)));
wr8(c, (RW(18) + 1722), (u8)RW(2));
SET64(2, rd8(c, (RW(3) + 31063)));
wr8(c, (RW(18) + 1723), (u8)RW(2));
c->f[0].u = rd32(c, (RW(3) + 31064));
wr32(c, (RW(18) + 1724), c->f[0].u);
c->f[1].u = rd32(c, (RW(3) + 31068));
c->f[0].u = rd32(c, (RW(3) + 31072));
wr32(c, (RW(18) + 1728), c->f[1].u);
wr32(c, (RW(18) + 1732), c->f[0].u);
c->f[2].u = rd32(c, (RW(3) + 31076));
c->f[1].u = rd32(c, (RW(3) + 31080));
c->f[0].u = rd32(c, (RW(3) + 31084));
wr32(c, (RW(18) + 1736), c->f[2].u);
wr32(c, (RW(18) + 1740), c->f[1].u);
wr32(c, (RW(18) + 1744), c->f[0].u);
c->f[3].u = rd32(c, (RW(3) + 31088));
c->f[2].u = rd32(c, (RW(3) + 31092));
c->f[1].u = rd32(c, (RW(3) + 31096));
c->f[0].u = rd32(c, (RW(3) + 31100));
wr32(c, (RW(18) + 1748), c->f[3].u);
wr32(c, (RW(18) + 1752), c->f[2].u);
wr32(c, (RW(18) + 1756), c->f[1].u);
wr32(c, (RW(18) + 1760), c->f[0].u);
c->f[3].u = rd32(c, (RW(3) + 31104));
c->f[2].u = rd32(c, (RW(3) + 31108));
c->f[1].u = rd32(c, (RW(3) + 31112));
c->f[0].u = rd32(c, (RW(3) + 31116));
wr32(c, (RW(18) + 1764), c->f[3].u);
wr32(c, (RW(18) + 1768), c->f[2].u);
wr32(c, (RW(18) + 1772), c->f[1].u);
wr32(c, (RW(18) + 1776), c->f[0].u);
c->f[3].u = rd32(c, (RW(3) + 31120));
c->f[2].u = rd32(c, (RW(3) + 31124));
c->f[1].u = rd32(c, (RW(3) + 31128));
c->f[0].u = rd32(c, (RW(3) + 31132));
wr32(c, (RW(18) + 1780), c->f[3].u);
wr32(c, (RW(18) + 1784), c->f[2].u);
wr32(c, (RW(18) + 1788), c->f[1].u);
wr32(c, (RW(18) + 1792), c->f[0].u);
SET64(2, rd16(c, (RW(3) + 31136)));
wr16(c, (RW(18) + 1796), (u16)RW(2));
SET64(2, rd8(c, (RW(3) + 31138)));
wr8(c, (RW(18) + 1798), (u8)RW(2));
SET64(2, rd16(c, (RW(3) + 31140)));
wr16(c, (RW(18) + 1800), (u16)RW(2));
c->f[3].u = rd32(c, (RW(3) + 31144));
c->f[2].u = rd32(c, (RW(3) + 31148));
c->f[1].u = rd32(c, (RW(3) + 31152));
c->f[0].u = rd32(c, (RW(3) + 31156));
wr32(c, (RW(18) + 1804), c->f[3].u);
wr32(c, (RW(18) + 1808), c->f[2].u);
wr32(c, (RW(18) + 1812), c->f[1].u);
wr32(c, (RW(18) + 1816), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 31160));
wr32(c, (RW(18) + 1820), c->f[0].u);
SET64(2, (s16)rd16(c, (RW(3) + 31164)));
wr16(c, (RW(18) + 1824), (u16)RW(2));
SET64(2, rd16(c, (RW(3) + 31166)));
wr16(c, (RW(18) + 1826), (u16)RW(2));
c->f[0].u = rd32(c, (RW(3) + 31168));
wr32(c, (RW(18) + 1828), c->f[0].u); goto L_002F6174;
L_002F602C:;
SET64(4, RD(18) + RD(0));
SET32(7, RW(18) + 1840);
wr32(c, (RW(18) + 1712), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 1540)));
SET64(6, (s32)rd32(c, (RW(18) + 1544)));
SET64(31, 0x2f6048); SET32(5, RW(2) + 31056); JP_F_002F4FA0(c);
c->f[0].u = rd32(c, (RW(2) + 0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(18) + 1716), c->f[0].u);
wr32(c, (RW(29) + 140), RW(3));
SET64(4, rd8(c, (RW(2) + 4)));
wr32(c, (RW(29) + 136), RW(0));
rd128(c, (RW(29) + 128) & ~15u, &c->r[3]);
wr8(c, (RW(18) + 1720), (u8)RW(4));
SET64(4, rd8(c, (RW(2) + 5)));
wr8(c, (RW(18) + 1721), (u8)RW(4));
SET64(4, rd8(c, (RW(2) + 6)));
wr8(c, (RW(18) + 1722), (u8)RW(4));
SET64(4, rd8(c, (RW(2) + 7)));
wr8(c, (RW(18) + 1723), (u8)RW(4));
c->f[0].u = rd32(c, (RW(2) + 8));
wr32(c, (RW(18) + 1724), c->f[0].u);
c->f[1].u = rd32(c, (RW(2) + 12));
c->f[0].u = rd32(c, (RW(2) + 16));
wr32(c, (RW(18) + 1728), c->f[1].u);
wr32(c, (RW(18) + 1732), c->f[0].u);
c->f[2].u = rd32(c, (RW(2) + 20));
c->f[1].u = rd32(c, (RW(2) + 24));
c->f[0].u = rd32(c, (RW(2) + 28));
wr32(c, (RW(18) + 1736), c->f[2].u);
wr32(c, (RW(18) + 1740), c->f[1].u);
wr32(c, (RW(18) + 1744), c->f[0].u);
c->f[3].u = rd32(c, (RW(2) + 32));
c->f[2].u = rd32(c, (RW(2) + 36));
c->f[1].u = rd32(c, (RW(2) + 40));
c->f[0].u = rd32(c, (RW(2) + 44));
wr32(c, (RW(18) + 1748), c->f[3].u);
wr32(c, (RW(18) + 1752), c->f[2].u);
wr32(c, (RW(18) + 1756), c->f[1].u);
wr32(c, (RW(18) + 1760), c->f[0].u);
c->f[3].u = rd32(c, (RW(2) + 48));
c->f[2].u = rd32(c, (RW(2) + 52));
c->f[1].u = rd32(c, (RW(2) + 56));
c->f[0].u = rd32(c, (RW(2) + 60));
wr32(c, (RW(18) + 1764), c->f[3].u);
wr32(c, (RW(18) + 1768), c->f[2].u);
wr32(c, (RW(18) + 1772), c->f[1].u);
wr32(c, (RW(18) + 1776), c->f[0].u);
c->f[3].u = rd32(c, (RW(2) + 64));
c->f[2].u = rd32(c, (RW(2) + 68));
c->f[1].u = rd32(c, (RW(2) + 72));
c->f[0].u = rd32(c, (RW(2) + 76));
wr32(c, (RW(18) + 1780), c->f[3].u);
wr32(c, (RW(18) + 1784), c->f[2].u);
wr32(c, (RW(18) + 1788), c->f[1].u);
wr32(c, (RW(18) + 1792), c->f[0].u);
SET64(4, rd16(c, (RW(2) + 80)));
wr16(c, (RW(18) + 1796), (u16)RW(4));
SET64(4, rd8(c, (RW(2) + 82)));
wr8(c, (RW(18) + 1798), (u8)RW(4));
SET64(4, rd16(c, (RW(2) + 84)));
wr16(c, (RW(18) + 1800), (u16)RW(4));
c->f[3].u = rd32(c, (RW(2) + 88));
c->f[2].u = rd32(c, (RW(2) + 92));
c->f[1].u = rd32(c, (RW(2) + 96));
c->f[0].u = rd32(c, (RW(2) + 100));
wr32(c, (RW(18) + 1804), c->f[3].u);
wr32(c, (RW(18) + 1808), c->f[2].u);
wr32(c, (RW(18) + 1812), c->f[1].u);
wr32(c, (RW(18) + 1816), c->f[0].u);
c->f[0].u = rd32(c, (RW(2) + 104));
wr32(c, (RW(18) + 1820), c->f[0].u);
SET64(4, (s16)rd16(c, (RW(2) + 108)));
wr16(c, (RW(18) + 1824), (u16)RW(4));
SET64(4, rd16(c, (RW(2) + 110)));
wr16(c, (RW(18) + 1826), (u16)RW(4));
c->f[0].u = rd32(c, (RW(2) + 112));
wr32(c, (RW(18) + 1828), c->f[0].u);
wr128(c, (RW(18) + 1856) & ~15u, &c->r[3]);
L_002F6174:;
SET32(4, RW(18) + 1716);
SET64(31, 0x2f6180); SET32(5, RW(0) + 1); JP_F_0031EA40(c);
SET64(16, (s32)rd32(c, (RW(28) + -29872)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2f6190); SET32(4, RW(16) + 864); JP_F_002F0D30(c);
SET64(31, 0x2f6198); SET64(4, RD(2) + RD(0)); JP_F_002EE600(c);
SET32(3, RW(0) + 26);
if (RD(2) == RD(3)) { SET64(2, RD(0) + (s64)1); goto L_002F6218; }
SET32(4, RW(16) + 916);
SET64(31, 0x2f61b0); SET64(5, RD(0) + RD(0)); JP_F_002F0D30(c);
SET64(31, 0x2f61b8); SET64(4, RD(2) + RD(0)); JP_F_002EE600(c);
SET32(3, RW(0) + 26);
{ int t = RD(2) == RD(3);  if (t) goto L_002F6214; }
SET32(4, RW(16) + 864);
SET64(31, 0x2f61d0); SET64(5, RD(0) + RD(0)); JP_F_002F0D30(c);
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2f61dc); SET32(4, RW(2) + RW(1)); JP_F_003238B0(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F6214; }
SET32(4, RW(16) + 916);
SET64(31, 0x2f61f4); SET64(5, RD(0) + RD(0)); JP_F_002F0D30(c);
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2f6200); SET32(4, RW(2) + RW(1)); JP_F_003238B0(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F6214; }
SET64(2, RD(0) + RD(0)); goto L_002F6218;
L_002F6214:;
SET64(2, RD(0) + (s64)1);
L_002F6218:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1540))); goto L_002F6398; }
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_002F6228:;
SET64(2, (s32)rd32(c, (RW(16) + 1500)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f6244); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F6228; } }
SET64(2, (s32)rd32(c, (RW(18) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f6270); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
 goto L_002F6394;
L_002F6278:;
SET64(2, (s32)rd32(c, (RW(18) + 1544)));
wr32(c, (RW(18) + 1712), RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 1540)));
c->f[0].u = rd32(c, (RW(3) + 31056));
wr32(c, (RW(18) + 1716), c->f[0].u);
SET64(2, rd8(c, (RW(3) + 31060)));
wr8(c, (RW(18) + 1720), (u8)RW(2));
SET64(2, rd8(c, (RW(3) + 31061)));
wr8(c, (RW(18) + 1721), (u8)RW(2));
SET64(2, rd8(c, (RW(3) + 31062)));
wr8(c, (RW(18) + 1722), (u8)RW(2));
SET64(2, rd8(c, (RW(3) + 31063)));
wr8(c, (RW(18) + 1723), (u8)RW(2));
c->f[0].u = rd32(c, (RW(3) + 31064));
wr32(c, (RW(18) + 1724), c->f[0].u);
c->f[1].u = rd32(c, (RW(3) + 31068));
c->f[0].u = rd32(c, (RW(3) + 31072));
wr32(c, (RW(18) + 1728), c->f[1].u);
wr32(c, (RW(18) + 1732), c->f[0].u);
c->f[2].u = rd32(c, (RW(3) + 31076));
c->f[1].u = rd32(c, (RW(3) + 31080));
c->f[0].u = rd32(c, (RW(3) + 31084));
wr32(c, (RW(18) + 1736), c->f[2].u);
wr32(c, (RW(18) + 1740), c->f[1].u);
wr32(c, (RW(18) + 1744), c->f[0].u);
c->f[3].u = rd32(c, (RW(3) + 31088));
c->f[2].u = rd32(c, (RW(3) + 31092));
c->f[1].u = rd32(c, (RW(3) + 31096));
c->f[0].u = rd32(c, (RW(3) + 31100));
wr32(c, (RW(18) + 1748), c->f[3].u);
wr32(c, (RW(18) + 1752), c->f[2].u);
wr32(c, (RW(18) + 1756), c->f[1].u);
wr32(c, (RW(18) + 1760), c->f[0].u);
c->f[3].u = rd32(c, (RW(3) + 31104));
c->f[2].u = rd32(c, (RW(3) + 31108));
c->f[1].u = rd32(c, (RW(3) + 31112));
c->f[0].u = rd32(c, (RW(3) + 31116));
wr32(c, (RW(18) + 1764), c->f[3].u);
wr32(c, (RW(18) + 1768), c->f[2].u);
wr32(c, (RW(18) + 1772), c->f[1].u);
wr32(c, (RW(18) + 1776), c->f[0].u);
c->f[3].u = rd32(c, (RW(3) + 31120));
c->f[2].u = rd32(c, (RW(3) + 31124));
c->f[1].u = rd32(c, (RW(3) + 31128));
c->f[0].u = rd32(c, (RW(3) + 31132));
wr32(c, (RW(18) + 1780), c->f[3].u);
wr32(c, (RW(18) + 1784), c->f[2].u);
wr32(c, (RW(18) + 1788), c->f[1].u);
wr32(c, (RW(18) + 1792), c->f[0].u);
SET64(2, rd16(c, (RW(3) + 31136)));
wr16(c, (RW(18) + 1796), (u16)RW(2));
SET64(2, rd8(c, (RW(3) + 31138)));
wr8(c, (RW(18) + 1798), (u8)RW(2));
SET64(2, rd16(c, (RW(3) + 31140)));
wr16(c, (RW(18) + 1800), (u16)RW(2));
c->f[3].u = rd32(c, (RW(3) + 31144));
c->f[2].u = rd32(c, (RW(3) + 31148));
c->f[1].u = rd32(c, (RW(3) + 31152));
c->f[0].u = rd32(c, (RW(3) + 31156));
wr32(c, (RW(18) + 1804), c->f[3].u);
wr32(c, (RW(18) + 1808), c->f[2].u);
wr32(c, (RW(18) + 1812), c->f[1].u);
wr32(c, (RW(18) + 1816), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 31160));
wr32(c, (RW(18) + 1820), c->f[0].u);
SET64(2, (s16)rd16(c, (RW(3) + 31164)));
wr16(c, (RW(18) + 1824), (u16)RW(2));
SET64(2, rd16(c, (RW(3) + 31166)));
wr16(c, (RW(18) + 1826), (u16)RW(2));
c->f[0].u = rd32(c, (RW(3) + 31168));
wr32(c, (RW(18) + 1828), c->f[0].u);
L_002F6394:;
SET64(2, (s32)rd32(c, (RW(18) + 1540)));
L_002F6398:;
SET64(31, 0x2f63a0); SET32(4, RW(2) + 128); JP_F_0031D240(c);
SET64(6, (s64)(s32)0x3f800000);
SET64(5, (s64)(s32)0x10000);
wr32(c, (RW(29) + 112), RW(0));
SET64(4, RD(5) + RD(0));
SET64(8, (s32)rd32(c, (RW(18) + 1540)));
SET64(3, RD(5) + RD(0));
SET64(2, RD(5) + RD(0));
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
wr32(c, (RW(29) + 124), RW(6));
SET32(5, RW(8) + RW(5));
rd128(c, (RW(29) + 112) & ~15u, &c->r[7]);
SET32(4, RW(8) + RW(4));
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
wr32(c, (RW(29) + 108), RW(6));
wr32(c, (RW(29) + 92), RW(6));
wr32(c, (RW(29) + 76), RW(6));
rd128(c, (RW(29) + 96) & ~15u, &c->r[6]);
wr128(c, (RW(5) + -30192) & ~15u, &c->r[7]);
wr32(c, (RW(29) + 80), RW(0));
wr128(c, (RW(4) + -30176) & ~15u, &c->r[6]);
SET64(6, (s32)rd32(c, (RW(18) + 1544)));
wr32(c, (RW(29) + 84), RW(0));
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 64), RW(0));
SET32(3, RW(6) + RW(3));
rd128(c, (RW(29) + 80) & ~15u, &c->r[5]);
SET32(2, RW(6) + RW(2));
wr32(c, (RW(29) + 68), RW(0));
wr32(c, (RW(29) + 72), RW(0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[4]);
wr128(c, (RW(3) + -30192) & ~15u, &c->r[5]);
wr128(c, (RW(2) + -30176) & ~15u, &c->r[4]);
SET64(31, 0x2f6434); SET64(4, (s32)rd32(c, (RW(18) + 1540))); JP_F_002EED60(c);
SET64(31, 0x2f643c); SET64(4, (s32)rd32(c, (RW(18) + 1544))); JP_F_002EED60(c);
SET64(3, rd16(c, (RW(18) + 1532)));
SET32(2, RW(0) + 3);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + (s64)1); if (t) goto L_002F6460; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(4, RD(0) + RD(0)); goto L_002F6464; }
 goto L_002F6464;
L_002F6460:;
SET64(4, RD(0) + RD(0));
L_002F6464:;
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1540))); goto L_002F64B4; }
SET64(31, 0x2f6474);  JP_F_00139590(c);
SET64(31, 0x2f647c);  JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s32)rd32(c, (RW(18) + 856)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 680))); goto L_002F6494; }
SET64(4, RD(16) + RD(0)); goto L_002F64A0;
L_002F6494:;
SET64(31, 0x2f649c); SET64(4, rd16(c, (RW(2) + 464))); JP_F_0030EE40(c);
SET64(4, RD(16) + RD(0));
L_002F64A0:;
SET64(5, RD(2) + RD(0));
c->f[12].u = RW(0);
SET64(31, 0x2f64b0); SET32(6, RW(0) + 1); JP_F_001B8120(c);
SET64(2, (s32)rd32(c, (RW(18) + 1540)));
L_002F64B4:;
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F64CC; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F64CC:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
if (RD(3) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1544))); goto L_002F64E8; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 1544)));
L_002F64E8:;
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F6500; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F6500:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
if (RD(3) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 1540))); goto L_002F651C; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 1540)));
L_002F651C:;
SET64(25, (s32)rd32(c, (RW(2) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x2f652c); SET32(4, RW(2) + 128); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 1544)));
SET64(25, (s32)rd32(c, (RW(2) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x2f6540); SET32(4, RW(2) + 128); rt_call(c, t); }
SET64(3, rd16(c, (RW(18) + 1532)));
SET32(2, RW(0) + 6);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_002F657C; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)1); goto L_002F6580; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F657C; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_002F657C; }
 goto L_002F6580;
L_002F657C:;
SET64(4, RD(0) + (s64)1);
L_002F6580:;
if (RD(4) == RD(0)) { SET64(25, (s32)rd32(c, (RW(18) + 876))); goto L_002F65C8; }
SET64(2, (s32)rd32(c, (RW(18) + 680)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F65C4; }
SET64(31, 0x2f659c); SET32(4, RW(2) + 224); JP_F_00141B90(c);
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
{ int t = RD(2) != RD(0);  if (t) goto L_002F65C4; }
SET64(4, (s32)rd32(c, (RW(18) + 680)));
SET64(6, (s32)rd32(c, (RW(18) + 660)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2f65c4); SET64(5, (s32)rd32(c, (RW(18) + 656))); rt_call(c, t); }
L_002F65C4:;
SET64(25, (s32)rd32(c, (RW(18) + 876)));
L_002F65C8:;
SET64(5, (s32)rd32(c, (RW(18) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2f65d8); SET32(4, RW(18) + 864); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 928)));
SET64(5, (s32)rd32(c, (RW(18) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2f65ec); SET32(4, RW(18) + 916); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(31, 0x2f65f8); SET64(5, RD(0) + RD(0)); JP_F_002FD7E0(c);
SET64(31, 0x2f6600); SET64(4, RD(18) + RD(0)); JP_F_002FDEF0(c);
SET64(31, 0x2f6608); SET64(4, RD(18) + RD(0)); JP_F_002FDEF0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 208), RW(0));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 220), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 672)));
wr32(c, (RW(29) + 212), RW(0));
wr32(c, (RW(29) + 216), RW(0));
rd128(c, (RW(29) + 208) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(2) + 48) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(18) + 672)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(3) + 0), RW(0));
wr128(c, (RW(3) + 16) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(18) + 672)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(2) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 672)));
SET64(31, 0x2f6660); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00173B10(c);
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f6674); SET32(5, RW(0) + 4); rt_call(c, t); }
SET32(3, RW(0) + 1);
wr8(c, (RW(18) + 64), (u8)RW(3));
L_002F667C:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002F6680:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 240); return;
}

void JP_F_002F66A0(Ctx *c) { /* func_002F66A0 */
ENTER(0x2f66a0);
wr32(c, (RW(4) + 16), RW(0)); return;
}

void JP_F_002F66B0(Ctx *c) { /* func_002F66B0 */
ENTER(0x2f66b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 1536)));
SET64(2, (s32)rd32(c, (RW(2) + 1920)));
{ int t = RD(2) != RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002F684C; }
SET64(2, rd8(c, (RW(17) + 1548)));
if (RD(2) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_002F6850; }
wr8(c, (RW(17) + 1548), (u8)RW(0));
SET64(31, 0x2f66ec); SET64(4, (s32)rd32(c, (RW(17) + 1540))); JP_F_002EE150(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002F6844; }
SET64(2, (s32)rd32(c, (RW(17) + 1540)));
SET64(1, RD(0) | 0x8790);
SET64(31, 0x2f6708); SET32(4, RW(2) + RW(1)); JP_F_002F00F0(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F6840; }
SET64(2, rd16(c, (RW(17) + 846)));
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002F674C; }
c->f[1].u = rd32(c, (RW(17) + 1884));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc;  if (t) goto L_002F6748; }
SET64(2, RD(0) + (s64)1); goto L_002F674C;
L_002F6748:;
SET64(2, RD(0) + RD(0));
L_002F674C:;
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F6840; }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f676c); SET32(5, RW(0) + 5); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET32(2, RW(0) + 2);
wr8(c, (RW(17) + 1888), (u8)RW(3));
SET64(3, (s16)rd16(c, (RW(17) + 1532)));
{ int t = RD(3) != RD(2);  if (t) goto L_002F6790; }
SET64(2, (s64)(s32)0x4c0000);
SET64(2, rd16(c, (RW(2) + -7880))); goto L_002F6798;
L_002F6790:;
SET64(2, (s64)(s32)0x4c0000);
SET64(2, rd16(c, (RW(2) + -7872)));
L_002F6798:;
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002F67AC; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002F67C4;
L_002F67AC:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002F67C4:;
wr32(c, (RW(17) + 1312), c->f[0].u);
SET64(31, 0x2f67d0); SET64(4, (s32)rd32(c, (RW(17) + 1540))); JP_F_002E87C0(c);
SET64(3, rd16(c, (RW(17) + 1532)));
SET32(2, RW(0) + 3);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + (s64)1); if (t) goto L_002F67F4; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(4, RD(0) + RD(0)); goto L_002F67F8; }
 goto L_002F67F8;
L_002F67F4:;
SET64(4, RD(0) + RD(0));
L_002F67F8:;
if (RD(4) == RD(0)) { SET64(5, rd16(c, (RW(17) + 1532))); goto L_002F6828; }
SET64(31, 0x2f6808);  JP_F_00139590(c);
SET64(31, 0x2f6810);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x3e800000);
c->f[12].u = RW(2);
SET64(31, 0x2f6824);  JP_F_001B8110(c);
SET64(5, rd16(c, (RW(17) + 1532)));
L_002F6828:;
SET64(6, (s32)rd32(c, (RW(17) + 1540)));
SET64(7, (s32)rd32(c, (RW(17) + 1544)));
SET64(31, 0x2f6838); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_00328DB0(c);
SET64(16, RD(0) + (s64)1); goto L_002F684C;
L_002F6840:;
SET64(4, RD(17) + RD(0));
L_002F6844:;
SET64(31, 0x2f684c);  JP_F_002FE3B0(c);
L_002F684C:;
SET64(2, RD(16) + RD(0));
L_002F6850:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002F6870(Ctx *c) { /* func_002F6870 */
ENTER(0x2f6870);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, rd8(c, (RW(4) + 1548)));
{ int t = RD(3) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002F68AC; }
wr16(c, (RW(17) + 1532), (u16)RW(16));
SET32(3, RW(0) + 1);
wr32(c, (RW(17) + 1540), RW(6));
wr32(c, (RW(17) + 1544), RW(7));
wr8(c, (RW(17) + 1548), (u8)RW(3)); goto L_002F68E8;
L_002F68AC:;
SET64(3, (s32)rd32(c, (RW(17) + 1540)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002F68EC; }
SET64(31, 0x2f68c0); SET64(4, RD(6) + RD(0)); JP_F_002F11A0(c);
SET64(4, (s32)rd32(c, (RW(17) + 1540)));
SET64(31, 0x2f68cc); SET64(18, rd16(c, (RW(2) + 44))); JP_F_002F11A0(c);
SET64(4, rd16(c, (RW(2) + 44)));
SET64(3, RD(18) & 0xffff);
if (RD(4) == RD(3)) { wr16(c, (RW(17) + 1532), (u16)RW(16)); goto L_002F68E8; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2f68e8); wr8(c, (RW(17) + 1548), (u8)RW(0)); JP_F_002FE3B0(c);
L_002F68E8:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002F68EC:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002F6900(Ctx *c) { /* func_002F6900 */
ENTER(0x2f6900);
SET32(29, RW(29) + -48);
SET64(2, RD(0) | 0xffff);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(6, (s32)rd32(c, (RW(5) + 44)));
SET64(16, RD(5) + RD(0));
rd128(c, (RW(17) + 0) & ~15u, &c->r[3]);
SET32(4, RW(16) + 832);
wr128(c, (RW(6) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(17) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(6) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(17) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(6) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(17) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(6) + 48) & ~15u, &c->r[3]);
wr8(c, (RW(5) + 2244), (u8)RW(0));
SET64(31, 0x2f6950); wr16(c, (RW(5) + 2212), (u16)RW(2)); JP_F_00155B90(c);
SET64(5, rd16(c, (RW(17) + 64)));
c->f[12].u = RW(0);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2f6964); SET64(6, RD(0) + RD(0)); JP_F_002EE890(c);
SET64(2, (s32)rd32(c, (RW(16) + 860)));
SET64(2, rd16(c, (RW(2) + 16)));
{ int t = RD(2) == RD(0); c->f[0].u = rd32(c, (RW(17) + 68)); if (t) goto L_002F6984; }
SET64(2, (s32)rd32(c, (RW(16) + 900)));
if (RD(2) == RD(0)) { SET64(3, rd8(c, (RW(17) + 72))); goto L_002F6988; }
wr32(c, (RW(2) + 28), c->f[0].u);
L_002F6984:;
SET64(3, rd8(c, (RW(17) + 72)));
L_002F6988:;
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 900)));
SET64(31, 0x2f6998); wr8(c, (RW(2) + 42), (u8)RW(3)); JP_F_002EE770(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002F69B0(Ctx *c) { /* func_002F69B0 */
ENTER(0x2f69b0);
SET64(6, (s32)rd32(c, (RW(5) + 44)));
c->f[0].u = RW(0);
rd128(c, (RW(6) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(6) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(6) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(6) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 48) & ~15u, &c->r[3]);
SET64(3, rd16(c, (RW(5) + 2212)));
wr16(c, (RW(4) + 64), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(5) + 860)));
SET64(3, rd16(c, (RW(3) + 16)));
if (RD(3) == RD(0)) { wr32(c, (RW(4) + 68), c->f[0].u); goto L_002F6A04; }
SET64(3, (s32)rd32(c, (RW(5) + 900)));
{ int t = RD(3) == RD(0);  if (t) goto L_002F6A00; }
c->f[0].u = rd32(c, (RW(3) + 28));
L_002F6A00:;
wr32(c, (RW(4) + 68), c->f[0].u);
L_002F6A04:;
SET64(3, (s32)rd32(c, (RW(5) + 900)));
SET64(3, rd8(c, (RW(3) + 42)));
wr8(c, (RW(4) + 72), (u8)RW(3)); return;
}

void JP_F_002F6A20(Ctx *c) { /* func_002F6A20 */
ENTER(0x2f6a20);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(31, 0x2f6a50); SET64(4, (s32)rd32(c, (RW(4) + 1536))); JP_F_001C5CE0(c);
SET64(31, 0x2f6a58); SET64(4, (s32)rd32(c, (RW(17) + 1536))); JP_F_001C5B70(c);
SET64(2, (s64)(s32)0x4c0000);
SET64(16, RD(0) + RD(0));
c->f[20].u = rd32(c, (RW(2) + -4800));
SET64(21, RD(17) + RD(0));
SET64(20, RD(17) + RD(0));
L_002F6A6C:;
SET64(3, RD(16) & 0xffff);
SET64(5, RD(0) + RD(0));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(17) + RW(2));
SET64(31, 0x2f6a94); SET32(4, RW(2) + 864); JP_F_002F0D70(c);
SET64(19, RD(2) + RD(0));
SET64(1, RD(0) | 0x89d0);
SET64(31, 0x2f6aa4); SET32(4, RW(19) + RW(1)); JP_F_003628E0(c);
SET64(2, (s64)(s32)0x10000);
SET32(18, RW(21) + 732);
SET64(1, RD(0) | 0x87b0);
SET32(3, RW(0) + 1);
SET32(2, RW(19) + RW(2));
SET32(4, RW(19) + RW(1));
wr8(c, (RW(2) + -30256), (u8)RW(3));
SET64(31, 0x2f6ac8); SET32(5, RW(18) + 16); JP_F_00323800(c);
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2f6ad4); SET32(4, RW(19) + RW(1)); JP_F_00323BB0(c);
SET64(2, rd8(c, (RW(17) + 723)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F6B48; }
SET32(2, RW(17) + RW(16));
SET64(2, rd8(c, (RW(2) + 724)));
{ int t = RD(2) != RD(0);  if (t) goto L_002F6B48; }
SET32(18, RW(20) + 68);
SET64(31, 0x2f6afc); SET64(4, RD(18) + RD(0)); JP_F_00323B90(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
c->fcc = F(0) < F(12);
if (!c->fcc) { SET64(4, RD(18) + RD(0)); goto L_002F6B1C; }
SET64(1, RD(0) | 0x87b0); goto L_002F6B2C;
L_002F6B1C:;
SET64(31, 0x2f6b24);  JP_F_00323B90(c);
c->f[12].u = c->f[0].u;
SET64(1, RD(0) | 0x87b0);
L_002F6B2C:;
SET64(31, 0x2f6b34); SET32(4, RW(19) + RW(1)); JP_F_00323BA0(c);
SET64(4, rd16(c, (RW(18) + 90)));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(19) + RW(3));
wr16(c, (RW(3) + -30710), (u16)RW(4)); goto L_002F6BA8;
L_002F6B48:;
SET64(2, rd16(c, (RW(18) + 10)));
{ int t = RD(2) != RD(0);  if (t) goto L_002F6B5C; }
c->f[12].u = c->f[20].u; goto L_002F6B88;
L_002F6B5C:;
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002F6B70; }
c->f[0].u = RW(2);
c->f[12].f = (f32)(s32)c->f[0].u; goto L_002F6B88;
L_002F6B70:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[12].f = (f32)(s32)c->f[0].u;
c->f[12].f = fpu(F(12) + F(12));
L_002F6B88:;
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2f6b94); SET32(4, RW(19) + RW(1)); JP_F_00323BA0(c);
SET64(4, rd16(c, (RW(18) + 12)));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(19) + RW(3));
wr16(c, (RW(3) + -30710), (u16)RW(4));
L_002F6BA8:;
SET32(16, RW(16) + 1);
SET64(3, RD(16) < (u64)(s64)2);
SET32(21, RW(21) + 52);
{ int t = RD(3) != RD(0); SET32(20, RW(20) + 248); if (t) { POLL(); goto L_002F6A6C; } }
SET64(31, rd64(c, (RW(29) + 112)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002F6BF0(Ctx *c) { /* func_002F6BF0 */
ENTER(0x2f6bf0);
SET32(29, RW(29) + -80);
SET64(6, RD(0) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(5, RD(16) + RD(0));
SET32(3, RW(0) + 1);
L_002F6C18:;
SET64(4, (s32)rd32(c, (RW(5) + 968)));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30268)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F6C38; }
wr8(c, (RW(2) + 12), (u8)RW(3));
wr8(c, (RW(2) + 13), (u8)RW(0));
L_002F6C38:;
SET32(6, RW(6) + 1);
SET64(2, RD(6) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 4); if (t) { POLL(); goto L_002F6C18; } }
SET64(19, RD(0) + RD(0));
SET64(18, RD(16) + RD(0));
L_002F6C50:;
SET64(17, (s32)rd32(c, (RW(18) + 968)));
SET64(25, (s32)rd32(c, (RW(17) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 388)));
{ u32 t = RW(25); SET64(31, 0x2f6c64); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
SET32(4, RW(17) + 128);
wr8(c, (RW(17) + 2320), (u8)RW(2));
SET64(31, 0x2f6c78); SET64(5, RD(0) + RD(0)); JP_F_00158E90(c);
SET32(19, RW(19) + 1);
SET64(2, RD(19) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_002F6C50; } }
SET32(4, RW(16) + 1716);
SET64(31, 0x2f6c94); wr32(c, (RW(16) + 1712), RW(0)); JP_F_002F6CD0(c);
wr8(c, (RW(16) + 1832), (u8)RW(0));
SET32(4, RW(16) + 1840);
SET64(31, 0x2f6ca4); wr8(c, (RW(16) + 1833), (u8)RW(0)); JP_F_00147DA0(c);
SET64(31, 0x2f6cac); SET32(4, RW(16) + 1856); JP_F_00147DA0(c);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002F6CD0(Ctx *c) { /* func_002F6CD0 */
ENTER(0x2f6cd0);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0xbf800000);
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s64)(s32)0x3f800000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 0), RW(0));
SET64(16, RD(4) + RD(0));
wr8(c, (RW(4) + 4), (u8)RW(0));
wr8(c, (RW(4) + 5), (u8)RW(0));
wr8(c, (RW(4) + 6), (u8)RW(0));
wr8(c, (RW(4) + 7), (u8)RW(0));
wr32(c, (RW(4) + 8), RW(3));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(2));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(2));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(2));
SET64(31, 0x2f6d28); wr16(c, (RW(4) + 44), (u16)RW(0)); JP_F_0031E970(c);
wr32(c, (RW(16) + 48), RW(0));
SET32(4, RW(0) + -1);
wr32(c, (RW(16) + 52), RW(0));
SET64(3, (s64)(s32)0x40a00000);
wr32(c, (RW(16) + 56), RW(0));
wr32(c, (RW(16) + 60), RW(0));
wr32(c, (RW(16) + 64), RW(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 76), RW(0));
wr16(c, (RW(16) + 80), (u16)RW(0));
wr8(c, (RW(16) + 82), (u8)RW(0));
wr16(c, (RW(16) + 84), (u16)RW(0));
wr16(c, (RW(16) + 88), (u16)RW(0));
wr16(c, (RW(16) + 90), (u16)RW(0));
wr16(c, (RW(16) + 92), (u16)RW(0));
wr16(c, (RW(16) + 94), (u16)RW(0));
wr32(c, (RW(16) + 96), RW(0));
wr32(c, (RW(16) + 100), RW(0));
wr32(c, (RW(16) + 104), RW(0));
wr16(c, (RW(16) + 108), (u16)RW(4));
wr16(c, (RW(16) + 110), (u16)RW(0));
wr32(c, (RW(16) + 112), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

static void JP_B_002F6DA0(Ctx *c, u32 entry) { /* func_002F6DA0 */
ENTER(entry);
switch (entry) { case 0x2f6de0: goto L_002F6DE0; case 0x2f6e28: goto L_002F6E28; case 0x2f6e64: goto L_002F6E64; case 0x2f7204: goto L_002F7204; case 0x2f7248: goto L_002F7248; case 0x2f72c8: goto L_002F72C8; case 0x2f7314: goto L_002F7314; }
L_002F6DA0:;
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 60)));
SET64(1, RD(3) < (u64)(s64)7);
{ int t = RD(1) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002F7370; }
SET64(5, (s64)(s32)0x4c0000);
SET32(3, RW(3) << 2);
SET32(5, RW(5) + -9440);
SET32(3, RW(3) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x2f6da0: goto L_002F6DA0; case 0x2f6de0: goto L_002F6DE0; case 0x2f6e28: goto L_002F6E28; case 0x2f6e64: goto L_002F6E64; case 0x2f7204: goto L_002F7204; case 0x2f7248: goto L_002F7248; case 0x2f72c8: goto L_002F72C8; case 0x2f7314: goto L_002F7314; default: rt_jump(c, t); return; } }
L_002F6DE0:;
SET64(31, 0x2f6de8);  JP_F_00139590(c);
SET64(31, 0x2f6df0);  JP_F_00139590(c);
c->f[12].u = RW(0);
SET64(31, 0x2f6dfc); SET64(4, (s32)rd32(c, (RW(2) + 24))); JP_F_001B8110(c);
SET64(31, 0x2f6e04); SET64(4, RD(17) + RD(0)); JP_F_002FE840(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f6e20); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48))); goto L_002F7374;
L_002F6E28:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x2f6e38);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002F7370; }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f6e5c); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F7370;
L_002F6E64:;
SET64(31, 0x2f6e6c); SET32(4, RW(17) + 992); JP_F_003065E0(c);
SET64(2, (s32)rd32(c, (RW(17) + 992)));
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 996), RW(0)); goto L_002F6ED4; }
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET32(4, RW(2) + 8);
SET32(2, RW(17) + 992);
if (RD(3) != RD(2)) { SET32(4, RW(3) + 4); goto L_002F6EA0; }
SET64(2, (s32)rd32(c, (RW(17) + 996)));
if (RD(2) != RD(0)) { wr32(c, (RW(4) + 0), RW(2)); goto L_002F6ED0; }
wr32(c, (RW(4) + 0), RW(0)); goto L_002F6ED0;
L_002F6EA0:;
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(2);  if (t) goto L_002F6EC8; }
L_002F6EAC:;
SET32(4, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(2);  if (t) { POLL(); goto L_002F6EAC; } }
L_002F6EC8:;
SET64(2, (s32)rd32(c, (RW(17) + 996)));
wr32(c, (RW(4) + 0), RW(2));
L_002F6ED0:;
wr32(c, (RW(17) + 996), RW(0));
L_002F6ED4:;
wr32(c, (RW(17) + 992), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 1264)));
SET64(31, 0x2f6ee4); SET32(5, RW(0) + 1); JP_F_002E4160(c);
wr32(c, (RW(17) + 1264), RW(0));
SET64(16, RD(0) + RD(0));
SET64(3, RD(16) & 0xffff);
L_002F6EF0:;
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(17) + RW(2));
SET32(4, RW(2) + 864);
SET64(2, (s32)rd32(c, (RW(2) + 864)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F6F80; }
SET32(3, RW(2) + 8);
SET64(2, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(2) != RD(4);  if (t) goto L_002F6F48; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) != RD(0);  if (t) goto L_002F6F40; }
wr32(c, (RW(3) + 0), RW(0)); goto L_002F6F80;
L_002F6F40:;
wr32(c, (RW(3) + 0), RW(2)); goto L_002F6F80;
L_002F6F48:;
SET32(3, RW(2) + 4);
SET64(2, (s32)rd32(c, (RW(2) + 4)));
{ int t = RD(2) == RD(4);  if (t) goto L_002F6F78; }
L_002F6F58:;
SET32(3, RW(2) + 4);
SET64(2, (s32)rd32(c, (RW(2) + 4)));
{ int t = RD(2) != RD(4);  if (t) { POLL(); goto L_002F6F58; } }
L_002F6F78:;
SET64(2, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(3) + 0), RW(2));
L_002F6F80:;
wr32(c, (RW(4) + 4), RW(0));
SET64(31, 0x2f6f8c); wr32(c, (RW(4) + 0), RW(0)); JP_F_002F0EE0(c);
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
SET64(2, RSD(16) < (s64)2);
if (RD(2) != RD(0)) { SET64(3, RD(16) & 0xffff); { POLL(); goto L_002F6EF0; } }
SET64(2, (s32)rd32(c, (RW(17) + 992)));
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 996), RW(0)); goto L_002F700C; }
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET32(4, RW(2) + 8);
SET32(2, RW(17) + 992);
if (RD(3) != RD(2)) { SET32(4, RW(3) + 4); goto L_002F6FD4; }
SET64(2, (s32)rd32(c, (RW(17) + 996)));
if (RD(2) != RD(0)) { wr32(c, (RW(4) + 0), RW(2)); goto L_002F7008; }
wr32(c, (RW(4) + 0), RW(0)); goto L_002F7008;
L_002F6FD4:;
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(2);  if (t) goto L_002F7000; }
L_002F6FE0:;
SET32(4, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(2);  if (t) { POLL(); goto L_002F6FE0; } }
L_002F7000:;
SET64(2, (s32)rd32(c, (RW(17) + 996)));
wr32(c, (RW(4) + 0), RW(2));
L_002F7008:;
wr32(c, (RW(17) + 996), RW(0));
L_002F700C:;
wr32(c, (RW(17) + 992), RW(0));
SET64(25, (s32)rd32(c, (RW(17) + 620)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2f7020); SET32(4, RW(17) + 608); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 576)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2f7030); SET32(4, RW(17) + 564); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 684)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 684), RW(0)); goto L_002F7050; }
SET64(25, (s32)rd32(c, (RW(4) + 72)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f704c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 684), RW(0));
L_002F7050:;
SET64(4, (s32)rd32(c, (RW(17) + 688)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 688), RW(0)); goto L_002F7070; }
SET64(25, (s32)rd32(c, (RW(4) + 192)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f706c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 688), RW(0));
L_002F7070:;
SET64(31, 0x2f7078);  JP_F_00139590(c);
SET64(31, 0x2f7080); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_0022CA80(c);
SET64(4, (s32)rd32(c, (RW(17) + 716)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 716), RW(0)); goto L_002F70A0; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f709c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 716), RW(0));
L_002F70A0:;
wr32(c, (RW(28) + -30240), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 652)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 652), RW(0)); goto L_002F70C4; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f70c0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 652), RW(0));
L_002F70C4:;
SET64(4, (s32)rd32(c, (RW(17) + 656)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 656), RW(0)); goto L_002F70E4; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f70e0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 656), RW(0));
L_002F70E4:;
SET64(4, (s32)rd32(c, (RW(17) + 660)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 660), RW(0)); goto L_002F7104; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f7100); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 660), RW(0));
L_002F7104:;
SET64(4, (s32)rd32(c, (RW(17) + 664)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 664), RW(0)); goto L_002F7124; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f7120); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 664), RW(0));
L_002F7124:;
SET64(4, (s32)rd32(c, (RW(17) + 668)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 668))); goto L_002F713C; }
SET64(31, 0x2f7138);  JP_F_00163040(c);
SET64(4, (s32)rd32(c, (RW(17) + 668)));
L_002F713C:;
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 668), RW(0)); goto L_002F7158; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f7154); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 668), RW(0));
L_002F7158:;
SET64(4, (s32)rd32(c, (RW(17) + 672)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 672), RW(0)); goto L_002F7178; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f7174); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 672), RW(0));
L_002F7178:;
SET64(4, (s32)rd32(c, (RW(17) + 676)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 676), RW(0)); goto L_002F7198; }
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f7194); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 676), RW(0));
L_002F7198:;
SET64(4, (s32)rd32(c, (RW(17) + 1536)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 1536), RW(0)); goto L_002F71B8; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2f71b4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 1536), RW(0));
L_002F71B8:;
SET64(31, 0x2f71c0); SET64(4, (s32)rd32(c, (RW(17) + 1936))); JP_F_00139AB0(c);
SET64(4, (s32)rd32(c, (RW(17) + 1936)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 1936), RW(0)); goto L_002F71E0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2f71dc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 1936), RW(0));
L_002F71E0:;
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f71fc); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F7370;
L_002F7204:;
SET64(4, (s32)rd32(c, (RW(17) + 680)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 680), RW(0)); goto L_002F7224; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2f7220); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 680), RW(0));
L_002F7224:;
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f7240); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F7370;
L_002F7248:;
SET64(18, RD(0) + RD(0));
SET64(16, RD(17) + RD(0));
L_002F7250:;
SET64(4, (s32)rd32(c, (RW(16) + 976)));
{ int t = RD(4) == RD(0);  if (t) goto L_002F7270; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2f726c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002F7270:;
wr32(c, (RW(16) + 976), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 968)));
{ int t = RD(4) == RD(0);  if (t) goto L_002F7290; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f7290); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002F7290:;
SET32(18, RW(18) + 1);
wr32(c, (RW(16) + 968), RW(0));
SET64(2, RD(18) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F7250; } }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f72c0); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F7370;
L_002F72C8:;
SET64(4, (s32)rd32(c, (RW(17) + 692)));
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002F72E8; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f72e4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
L_002F72E8:;
SET64(31, 0x2f72f0); wr32(c, (RW(17) + 692), RW(0)); JP_F_002FC1D0(c);
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(4, RD(17) + RD(0));
SET64(2, rd16(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f730c); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F7370;
L_002F7314:;
SET32(3, RW(0) + 1);
SET64(4, (s64)(s32)0x530000);
SET32(2, RW(0) + -1);
wr8(c, (RW(17) + 722), (u8)RW(3));
wr16(c, (RW(17) + 1268), (u16)RW(2));
SET32(4, RW(4) + -22408);
c->f[0].u = rd32(c, (RW(4) + 20));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = RW(2);
c->fcc = F(0) == F(1);
if (c->fcc) { SET64(4, RD(17) + RD(0)); goto L_002F7368; }
c->f[0].u = rd32(c, (RW(4) + 24));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 20), c->f[1].u);
wr32(c, (RW(4) + 36), RW(0));
wr8(c, (RW(4) + 32), (u8)RW(0));
SET64(31, 0x2f7364); c->f[12].f = fpu(F(0) * F(1)); JP_F_00141D40(c);
SET64(4, RD(17) + RD(0));
L_002F7368:;
SET64(31, 0x2f7370);  JP_F_00139AB0(c);
L_002F7370:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002F7374:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}
void JP_F_002F6DA0(Ctx *c) { JP_B_002F6DA0(c, 0x2f6da0); }
void JP_F_002F6DE0(Ctx *c) { JP_B_002F6DA0(c, 0x2f6de0); }
void JP_F_002F6E28(Ctx *c) { JP_B_002F6DA0(c, 0x2f6e28); }
void JP_F_002F6E64(Ctx *c) { JP_B_002F6DA0(c, 0x2f6e64); }
void JP_F_002F7204(Ctx *c) { JP_B_002F6DA0(c, 0x2f7204); }
void JP_F_002F7248(Ctx *c) { JP_B_002F6DA0(c, 0x2f7248); }
void JP_F_002F72C8(Ctx *c) { JP_B_002F6DA0(c, 0x2f72c8); }
void JP_F_002F7314(Ctx *c) { JP_B_002F6DA0(c, 0x2f7314); }

void JP_F_002F7390(Ctx *c) { /* func_002F7390 */
ENTER(0x2f7390);
SET64(2, rd8(c, (RW(4) + 722))); return;
}

void JP_F_002F73A0(Ctx *c) { /* func_002F73A0 */
ENTER(0x2f73a0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
L_002F73C4:;
SET64(17, (s32)rd32(c, (RW(16) + 968)));
SET64(31, 0x2f73d0); SET64(4, RD(17) + RD(0)); JP_F_002EE610(c);
SET32(3, RW(0) + 8);
{ int t = RD(2) == RD(3);  if (t) goto L_002F7478; }
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3);  if (t) goto L_002F7410; }
SET32(3, RW(0) + 4);
{ int t = RD(2) == RD(3);  if (t) goto L_002F7410; }
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_002F7408; }
 goto L_002F74B0;
L_002F7408:;
SET32(19, RW(19) + 1); goto L_002F74B0;
L_002F7410:;
SET64(31, 0x2f7418); SET64(4, RD(17) + RD(0)); JP_F_002EA660(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F74B0; }
SET64(31, 0x2f742c); SET64(4, RD(17) + RD(0)); JP_F_002EE600(c);
SET32(3, RW(0) + 19);
{ int t = RD(2) == RD(3);  if (t) goto L_002F74B0; }
SET32(3, RW(0) + 16);
{ int t = RD(2) == RD(3);  if (t) goto L_002F74B0; }
SET32(3, RW(0) + 13);
{ int t = RD(2) == RD(3);  if (t) goto L_002F74B0; }
SET32(3, RW(0) + 10);
{ int t = RD(2) == RD(3);  if (t) goto L_002F74B0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2f746c); SET64(5, RD(0) + RD(0)); JP_F_002EE5C0(c);
 goto L_002F74B0;
L_002F7478:;
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(17) + RW(2));
c->f[1].u = rd32(c, (RW(2) + -30800));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_002F749C; }
SET64(3, RD(0) + RD(0));
L_002F749C:;
SET64(2, RD(3) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F74B0; }
SET32(19, RW(19) + 1);
L_002F74B0:;
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F73C4; } }
SET64(2, RD(19) ^ 0x2);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(2, RD(2) < (u64)(s64)1);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002F74F0(Ctx *c) { /* func_002F74F0 */
ENTER(0x2f74f0);
hle_revival_check(c);
SET32(29, RW(29) + -64);
SET64(1, RD(0) | 0x87b0);
wr64(c, (RW(29) + 48), RD(31));
c->f[0].u = RW(0);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET32(2, RW(0) + 1);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(6, (s32)rd32(c, (RW(4) + 968)));
SET32(5, RW(6) + RW(1));
c->f[1].u = rd32(c, (RW(5) + 0));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; SET64(16, RD(4) + RD(0)); if (t) goto L_002F7534; }
SET64(2, RD(0) + RD(0));
L_002F7534:;
SET64(7, (s32)rd32(c, (RW(16) + 972)));
SET64(1, RD(0) | 0x87b0);
SET64(2, RD(2) & 0xff);
SET64(4, RD(2) ^ RD(0));
SET32(3, RW(7) + RW(1));
SET64(4, RD(4) < (u64)(s64)1);
c->f[1].u = rd32(c, (RW(3) + 0));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; SET32(2, RW(0) + 1); if (t) goto L_002F7568; }
SET64(2, RD(0) + RD(0));
L_002F7568:;
SET64(2, RD(2) & 0xff);
SET64(2, RD(2) ^ RD(0));
{ int t = RD(4) == RD(0); SET64(2, RD(2) < (u64)(s64)1); if (t) goto L_002F7680; }
{ int t = RD(2) == RD(0);  if (t) goto L_002F7680; }
SET32(3, RW(0) + 1);
SET32(2, RW(0) + -1);
wr8(c, (RW(16) + 1894), (u8)RW(3));
SET64(4, RD(16) + RD(0));
wr16(c, (RW(16) + 1896), (u16)RW(2));
wr8(c, (RW(16) + 1549), (u8)RW(3));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f75a8); SET32(5, RW(0) + 6); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(16) + 676)));
c->f[12].u = rd32(c, (RW(28) + -30956));
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x2f75bc); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2f75d0);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f75ec); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 676)));
SET64(31, 0x2f75f8); SET32(5, RW(28) + -30988); JP_F_0015E5C0(c);
wr32(c, (RW(16) + 1312), RW(0));
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(16) + 1316), RW(0));
SET64(3, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7720));
c->f[1].u = rd32(c, (RW(16) + 584));
c->f[2].u = rd32(c, (RW(3) + -7720));
c->f[3].u = RW(0);
c->fcc = F(1) == F(0);
{ int t = c->fcc; SET32(4, RW(16) + 564); if (t) goto L_002F7644; }
wr32(c, (RW(4) + 40), c->f[3].u);
wr32(c, (RW(4) + 36), c->f[3].u);
wr8(c, (RW(4) + 32), (u8)RW(0));
wr32(c, (RW(4) + 20), c->f[2].u);
c->f[1].u = rd32(c, (RW(4) + 24));
c->f[0].u = rd32(c, (RW(4) + 20));
SET64(31, 0x2f7644); c->f[12].f = fpu(F(1) * F(0)); JP_F_00141D40(c);
L_002F7644:;
SET64(31, 0x2f764c);  JP_F_00139590(c);
SET64(31, 0x2f7654);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x4a0000);
SET64(31, 0x2f7664); c->f[12].u = rd32(c, (RW(2) + -18456)); JP_F_001B8110(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f7678); SET32(5, RW(0) + 6); rt_call(c, t); }
SET32(2, RW(0) + 1); goto L_002F7A3C;
L_002F7680:;
{ int t = RD(4) == RD(0);  if (t) goto L_002F77B4; }
SET64(2, rd8(c, (RW(5) + 92)));
if (RD(2) != RD(0)) { SET32(2, RW(0) + 1); goto L_002F76BC; }
SET64(3, rd16(c, (RW(16) + 728)));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F76B8; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2f76b0); SET64(5, RD(7) + RD(0)); JP_F_002F4E70(c);
SET32(2, RW(0) + 1); goto L_002F77AC;
L_002F76B8:;
SET32(2, RW(0) + 1);
L_002F76BC:;
SET64(4, RD(16) + RD(0));
wr16(c, (RW(16) + 1896), (u16)RW(2));
wr8(c, (RW(16) + 1549), (u8)RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f76d8); SET32(5, RW(0) + 6); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(16) + 676)));
c->f[12].u = rd32(c, (RW(28) + -30956));
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x2f76ec); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2f7700);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f771c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 676)));
SET64(31, 0x2f7728); SET32(5, RW(28) + -30988); JP_F_0015E5C0(c);
wr32(c, (RW(16) + 1312), RW(0));
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(16) + 1316), RW(0));
SET64(3, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7720));
c->f[1].u = rd32(c, (RW(16) + 584));
c->f[2].u = rd32(c, (RW(3) + -7720));
c->f[3].u = RW(0);
c->fcc = F(1) == F(0);
{ int t = c->fcc; SET32(4, RW(16) + 564); if (t) goto L_002F7774; }
wr32(c, (RW(4) + 40), c->f[3].u);
wr32(c, (RW(4) + 36), c->f[3].u);
wr8(c, (RW(4) + 32), (u8)RW(0));
wr32(c, (RW(4) + 20), c->f[2].u);
c->f[1].u = rd32(c, (RW(4) + 24));
c->f[0].u = rd32(c, (RW(4) + 20));
SET64(31, 0x2f7774); c->f[12].f = fpu(F(1) * F(0)); JP_F_00141D40(c);
L_002F7774:;
SET64(31, 0x2f777c);  JP_F_00139590(c);
SET64(31, 0x2f7784);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x4a0000);
SET64(31, 0x2f7794); c->f[12].u = rd32(c, (RW(2) + -18456)); JP_F_001B8110(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f77a8); SET32(5, RW(0) + 6); rt_call(c, t); }
SET32(2, RW(0) + 1);
L_002F77AC:;
SET64(31, rd64(c, (RW(29) + 48))); goto L_002F7A40;
L_002F77B4:;
if (RD(2) == RD(0)) { SET64(2, rd16(c, (RW(16) + 846))); goto L_002F78EC; }
SET64(2, rd8(c, (RW(3) + 92)));
if (RD(2) != RD(0)) { wr16(c, (RW(16) + 1896), (u16)RW(0)); goto L_002F77F4; }
SET64(3, rd16(c, (RW(16) + 728)));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F77F0; }
SET64(5, RD(6) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2f77e8); SET64(6, RD(7) + RD(0)); JP_F_002F4E70(c);
SET32(2, RW(0) + 1); goto L_002F78E4;
L_002F77F0:;
wr16(c, (RW(16) + 1896), (u16)RW(0));
L_002F77F4:;
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 1549), (u8)RW(2));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f7810); SET32(5, RW(0) + 6); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(16) + 676)));
c->f[12].u = rd32(c, (RW(28) + -30956));
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x2f7824); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2f7838);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f7854); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 676)));
SET64(31, 0x2f7860); SET32(5, RW(28) + -30988); JP_F_0015E5C0(c);
wr32(c, (RW(16) + 1312), RW(0));
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(16) + 1316), RW(0));
SET64(3, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7720));
c->f[1].u = rd32(c, (RW(16) + 584));
c->f[2].u = rd32(c, (RW(3) + -7720));
c->f[3].u = RW(0);
c->fcc = F(1) == F(0);
{ int t = c->fcc; SET32(4, RW(16) + 564); if (t) goto L_002F78AC; }
wr32(c, (RW(4) + 40), c->f[3].u);
wr32(c, (RW(4) + 36), c->f[3].u);
wr8(c, (RW(4) + 32), (u8)RW(0));
wr32(c, (RW(4) + 20), c->f[2].u);
c->f[1].u = rd32(c, (RW(4) + 24));
c->f[0].u = rd32(c, (RW(4) + 20));
SET64(31, 0x2f78ac); c->f[12].f = fpu(F(1) * F(0)); JP_F_00141D40(c);
L_002F78AC:;
SET64(31, 0x2f78b4);  JP_F_00139590(c);
SET64(31, 0x2f78bc);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x4a0000);
SET64(31, 0x2f78cc); c->f[12].u = rd32(c, (RW(2) + -18456)); JP_F_001B8110(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f78e0); SET32(5, RW(0) + 6); rt_call(c, t); }
SET32(2, RW(0) + 1);
L_002F78E4:;
 goto L_002F7A3C;
L_002F78EC:;
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002F7920; }
c->f[1].u = rd32(c, (RW(16) + 1884));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc;  if (t) goto L_002F791C; }
SET64(2, RD(0) + (s64)1); goto L_002F7920;
L_002F791C:;
SET64(2, RD(0) + RD(0));
L_002F7920:;
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002F7A3C; }
SET64(2, (s64)(s32)0x4c0000);
SET32(3, RW(0) + 1);
c->f[21].u = rd32(c, (RW(2) + -4800));
wr8(c, (RW(16) + 1893), (u8)RW(3));
SET64(1, RD(0) | 0x87b0);
SET64(2, (s32)rd32(c, (RW(16) + 968)));
SET32(4, RW(2) + RW(1));
SET64(2, rd16(c, (RW(4) + 90)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002F795C; }
c->f[0].u = RW(2);
c->f[20].f = (f32)(s32)c->f[0].u; goto L_002F7974;
L_002F795C:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[20].f = (f32)(s32)c->f[0].u;
c->f[20].f = fpu(F(20) + F(20));
L_002F7974:;
SET64(31, 0x2f797c);  JP_F_00323B90(c);
SET64(2, (s32)rd32(c, (RW(16) + 972)));
SET64(1, RD(0) | 0x87b0);
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(0));
SET32(4, RW(2) + RW(1));
SET64(2, rd16(c, (RW(4) + 90)));
{ int t = RSD(2) < 0; c->f[22].f = fpu(c->facc - F(21) * F(20)); if (t) goto L_002F79AC; }
c->f[0].u = RW(2);
c->f[20].f = (f32)(s32)c->f[0].u; goto L_002F79C8;
L_002F79AC:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[20].f = (f32)(s32)c->f[0].u;
c->f[20].f = fpu(F(20) + F(20));
L_002F79C8:;
SET64(31, 0x2f79d0);  JP_F_00323B90(c);
c->f[1].u = (u32)fpu_cvtw(F(22));
SET64(2, (s32)c->f[1].u);
c->f[1].u = RW(0);
SET64(2, RD(2) << 48);
c->facc = fpu(F(1) + F(0));
SET64(2, RSD(2) >> 48);
c->f[0].f = fpu(c->facc - F(21) * F(20));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) << 48);
SET64(3, RSD(3) >> 48);
if (RD(2) != RD(3)) { SET64(2, RSD(3) < RSD(2)); goto L_002F7A1C; }
SET32(3, RW(0) + 1);
SET32(2, RW(0) + -1);
wr8(c, (RW(16) + 1892), (u8)RW(3));
wr16(c, (RW(16) + 1896), (u16)RW(2)); goto L_002F7A24;
L_002F7A1C:;
SET64(2, RD(2) ^ 0x1);
wr16(c, (RW(16) + 1896), (u16)RW(2));
L_002F7A24:;
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f7a38); SET32(5, RW(0) + 7); rt_call(c, t); }
SET32(2, RW(0) + 1);
L_002F7A3C:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002F7A40:;
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 64); return;
}

void JP_F_002F7A60(Ctx *c) { /* func_002F7A60 */
ENTER(0x2f7a60);
SET32(29, RW(29) + -560);
SET32(3, RW(0) + 51);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(6, rd16(c, (RW(4) + 60)));
{ int t = RD(6) == RD(3); SET64(19, RD(4) + RD(0)); if (t) goto L_002F8864; }
SET32(3, RW(0) + 50);
if (RD(6) == RD(3)) { SET64(2, rd16(c, (RW(19) + 728))); goto L_002F8784; }
SET32(3, RW(0) + 41);
if (RD(6) == RD(3)) { SET32(2, RW(0) + 1); goto L_002F859C; }
SET32(3, RW(0) + 40);
if (RD(6) == RD(3)) { SET64(17, RD(0) + RD(0)); goto L_002F8468; }
SET32(3, RW(0) + 31);
{ int t = RD(6) == RD(3);  if (t) goto L_002F83F8; }
SET32(3, RW(0) + 30);
{ int t = RD(6) == RD(3);  if (t) goto L_002F82A4; }
SET32(3, RW(0) + 21);
{ int t = RD(6) == RD(3);  if (t) goto L_002F81CC; }
SET32(5, RW(0) + 20);
if (RD(6) == RD(5)) { SET64(2, (s64)(s32)0x3f800000); goto L_002F7B98; }
if (RD(6) == RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_002F7AF4; }
SET64(31, rd64(c, (RW(29) + 96))); goto L_002F8998;
L_002F7AF4:;
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f7b00);  rt_call(c, t); }
SET64(3, rd16(c, (RW(19) + 728)));
if (RD(3) != RD(0)) { SET32(2, RW(0) + 3); goto L_002F7B3C; }
SET64(17, RD(0) + RD(0));
SET64(16, RD(19) + RD(0));
L_002F7B14:;
SET64(4, (s32)rd32(c, (RW(19) + 688)));
SET64(6, rd16(c, (RW(16) + 1922)));
SET64(31, 0x2f7b24); SET64(5, RD(17) & 0xffff); JP_F_0031F4F0(c);
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 2); if (t) { POLL(); goto L_002F7B14; } }
SET64(6, RD(0) + RD(0)); goto L_002F7B58;
L_002F7B3C:;
{ int t = RD(3) != RD(2);  if (t) goto L_002F7B54; }
SET64(4, (s32)rd32(c, (RW(19) + 688)));
SET64(6, rd16(c, (RW(19) + 1922)));
SET64(31, 0x2f7b54); SET64(5, RD(0) + RD(0)); JP_F_0031F4F0(c);
L_002F7B54:;
SET64(6, RD(0) + RD(0));
L_002F7B58:;
SET64(5, RD(19) + RD(0));
SET32(3, RW(0) + 1);
L_002F7B60:;
SET64(4, (s32)rd32(c, (RW(5) + 968)));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30268)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F7B80; }
wr8(c, (RW(2) + 12), (u8)RW(3));
wr8(c, (RW(2) + 13), (u8)RW(0));
L_002F7B80:;
SET32(6, RW(6) + 1);
SET64(2, RD(6) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 4); if (t) { POLL(); goto L_002F7B60; } }
wr8(c, (RW(19) + 1548), (u8)RW(0));
SET64(2, (s64)(s32)0x3f800000);
L_002F7B98:;
wr32(c, (RW(29) + 528), RW(2));
wr32(c, (RW(29) + 532), RW(2));
wr32(c, (RW(29) + 536), RW(2));
wr32(c, (RW(29) + 540), RW(2));
SET64(4, (s32)rd32(c, (RW(19) + 680)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 188)));
{ u32 t = RW(25); SET64(31, 0x2f7bbc); SET32(5, RW(29) + 528); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 680)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 204)));
{ u32 t = RW(25); SET64(31, 0x2f7bd0);  rt_call(c, t); }
SET64(4, RD(19) + RD(0));
SET64(31, 0x2f7bdc); SET64(5, RD(0) + RD(0)); JP_F_002FD7E0(c);
SET64(2, rd8(c, (RW(19) + 65)));
if (RD(2) != RD(0)) { SET64(3, (s64)(s32)0x3f800000); goto L_002F7DC8; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002F7BF0:;
SET64(16, RD(19) + RD(0));
L_002F7BF8:;
SET32(2, RW(17) + 1);
SET64(20, RD(2) & 0x1);
SET64(6, RD(17) & 0xffff);
SET64(2, (s32)rd32(c, (RW(19) + 680)));
SET64(5, rd16(c, (RW(2) + 464)));
SET64(31, 0x2f7c14); SET32(4, RW(29) + 512); JP_F_00242810(c);
SET64(2, (s32)rd32(c, (RW(16) + 968)));
rd128(c, (RW(29) + 512) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(2) + 1040)));
wr128(c, (RW(2) + 48) & ~15u, &c->r[3]);
{ int t = RD(17) == RD(0); SET64(6, (s32)rd32(c, (RW(16) + 968))); if (t) goto L_002F7C34; }
SET32(4, RW(0) + 1); goto L_002F7C38;
L_002F7C34:;
SET64(4, RD(0) + RD(0));
L_002F7C38:;
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(3) + RD(0));
SET32(3, RW(6) + RW(3));
SET32(2, RW(6) + RW(2));
wr32(c, (RW(3) + -30816), RW(4));
{ int t = RD(17) == RD(0); wr32(c, (RW(2) + -30812), RW(4)); if (t) goto L_002F7C5C; }
SET32(3, RW(0) + 1); goto L_002F7C60;
L_002F7C5C:;
SET64(3, RD(0) + RD(0));
L_002F7C60:;
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(6) + RW(2));
{ int t = RD(17) == RD(0); wr32(c, (RW(2) + -30808), RW(3)); if (t) goto L_002F7C78; }
SET32(5, RW(0) + 1); goto L_002F7C7C;
L_002F7C78:;
SET64(5, RD(0) + RD(0));
L_002F7C7C:;
SET32(2, RW(20) << 2);
SET64(8, (s64)(s32)0x3f800000);
SET32(3, RW(19) + RW(2));
SET64(4, (s64)(s32)0xbf800000);
SET64(2, (s64)(s32)0x10000);
SET32(21, RW(3) + 968);
SET32(2, RW(6) + RW(2));
wr32(c, (RW(29) + 288), RW(0));
wr32(c, (RW(2) + -30804), RW(5));
SET32(6, RW(29) + 256);
wr32(c, (RW(29) + 500), RW(4));
SET32(5, RW(29) + 272);
wr32(c, (RW(29) + 496), RW(0));
SET32(7, RW(29) + 496);
wr32(c, (RW(29) + 504), RW(0));
wr32(c, (RW(29) + 508), RW(8));
SET64(3, (s32)rd32(c, (RW(3) + 968)));
SET64(2, (s32)rd32(c, (RW(16) + 968)));
wr32(c, (RW(29) + 292), RW(0));
SET64(3, (s32)rd32(c, (RW(3) + 44)));
SET64(20, (s32)rd32(c, (RW(2) + 44)));
wr32(c, (RW(29) + 296), RW(0));
c->f[1].u = rd32(c, (RW(3) + 56));
wr32(c, (RW(29) + 300), RW(8));
rd128(c, (RW(20) + 48) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(3) + 48));
SET64(4, RD(20) + RD(0));
wr128(c, (RW(29) + 288) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 256), c->f[0].u);
wr32(c, (RW(29) + 264), c->f[1].u);
wr32(c, (RW(29) + 268), RW(8));
c->f[1].u = rd32(c, (RW(29) + 288));
wr32(c, (RW(29) + 284), RW(8));
c->f[0].u = rd32(c, (RW(29) + 296));
wr32(c, (RW(29) + 260), RW(0));
wr32(c, (RW(29) + 276), RW(0));
wr32(c, (RW(29) + 272), c->f[1].u);
SET64(31, 0x2f7d18); wr32(c, (RW(29) + 280), c->f[0].u); JP_F_00147DE0(c);
c->f[0].u = rd32(c, (RW(29) + 292));
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(20) + 52), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(16) + 968)));
SET64(4, (s32)rd32(c, (RW(21) + 0)));
SET32(2, RW(3) + RW(2));
wr32(c, (RW(2) + -30852), RW(4));
SET64(31, 0x2f7d3c); SET64(4, (s32)rd32(c, (RW(16) + 968))); JP_F_002EF010(c);
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F7BF8; } }
SET64(31, 0x2f7d54); SET64(4, RD(19) + RD(0)); JP_F_002FD230(c);
SET64(31, 0x2f7d5c); SET64(4, RD(19) + RD(0)); JP_F_002FD0A0(c);
SET64(5, (s32)rd32(c, (RW(19) + 968)));
SET64(6, (s32)rd32(c, (RW(19) + 972)));
SET64(31, 0x2f7d6c); SET32(4, RW(19) + 992); JP_F_003065F0(c);
SET64(2, (s64)(s32)0x40000000);
c->f[12].u = RW(2);
SET64(31, 0x2f7d7c); SET64(4, RD(19) + RD(0)); JP_F_002FDDE0(c);
SET64(31, 0x2f7d84); SET64(4, RD(19) + RD(0)); JP_F_002FDEF0(c);
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)4);
if (RD(2) != RD(0)) { SET64(17, RD(0) + RD(0)); { POLL(); goto L_002F7BF0; } }
SET64(31, 0x2f7d9c);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(3, (s32)rd32(c, (RW(19) + 672))); goto L_002F7DB0; }
SET32(5, RW(5) + 672);
SET64(3, (s32)rd32(c, (RW(19) + 672)));
L_002F7DB0:;
SET64(2, (s64)(s32)0x3dcc0000);
SET64(2, RD(2) | 0xcccd);
c->f[12].u = RW(2);
SET64(31, 0x2f7dc4); SET64(4, (s32)rd32(c, (RW(3) + 0))); JP_F_00174040(c);
SET64(3, (s64)(s32)0x3f800000);
L_002F7DC8:;
SET64(2, (s64)(s32)0x3dcc0000);
wr32(c, (RW(19) + 1332), RW(3));
SET64(2, RD(2) | 0xcccd);
wr32(c, (RW(19) + 1336), RW(3));
wr32(c, (RW(19) + 1340), RW(2));
wr32(c, (RW(19) + 1348), RW(3));
wr32(c, (RW(19) + 1344), RW(3));
SET64(4, (s32)rd32(c, (RW(19) + 680)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 1540), RW(0)); goto L_002F7E1C; }
c->f[1].u = rd32(c, (RW(19) + 1348));
c->f[0].u = rd32(c, (RW(19) + 1332));
wr32(c, (RW(29) + 252), c->f[1].u);
wr32(c, (RW(29) + 240), c->f[0].u);
wr32(c, (RW(29) + 244), c->f[0].u);
wr32(c, (RW(29) + 248), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 188)));
{ u32 t = RW(25); SET64(31, 0x2f7e18); SET32(5, RW(29) + 240); rt_call(c, t); }
wr32(c, (RW(19) + 1540), RW(0));
L_002F7E1C:;
SET64(17, RD(0) + RD(0));
wr32(c, (RW(19) + 1544), RW(0));
SET64(16, RD(19) + RD(0));
L_002F7E28:;
SET64(2, (s32)rd32(c, (RW(16) + 968)));
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F7E48; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x2);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F7E48:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
{ int t = RD(3) == RD(0);  if (t) goto L_002F7E60; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x2);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F7E60:;
SET64(2, (s32)rd32(c, (RW(16) + 968)));
SET64(31, 0x2f7e6c); SET32(4, RW(2) + 128); JP_F_001E9540(c);
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F7E28; } }
SET64(6, RD(0) + RD(0));
SET64(5, RD(19) + RD(0));
SET32(3, RW(0) + 1);
L_002F7E88:;
SET64(4, (s32)rd32(c, (RW(5) + 968)));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30268)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F7EA8; }
wr8(c, (RW(2) + 12), (u8)RW(3));
wr8(c, (RW(2) + 13), (u8)RW(0));
L_002F7EA8:;
SET32(6, RW(6) + 1);
SET64(2, RD(6) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 4); if (t) { POLL(); goto L_002F7E88; } }
SET64(18, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
SET64(17, RD(19) + RD(0));
L_002F7EC4:;
SET64(20, (s32)rd32(c, (RW(17) + 968)));
SET64(5, RD(0) + RD(0));
SET32(4, RW(20) + 128);
SET64(31, 0x2f7ed8); wr8(c, (RW(20) + 2320), (u8)RW(0)); JP_F_00158AF0(c);
SET32(4, RW(20) + 128);
SET64(31, 0x2f7ee4); SET64(5, RD(0) + RD(0)); JP_F_00158E90(c);
SET64(25, (s32)rd32(c, (RW(20) + 404)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x2f7efc); SET32(4, RW(20) + 128); rt_call(c, t); }
SET64(31, 0x2f7f04); SET64(4, RD(20) + RD(0)); JP_F_002EED60(c);
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2f7f10); SET32(4, RW(20) + RW(1)); JP_F_00323890(c);
c->f[1].u = RW(0);
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F7F38; }
SET64(4, (s32)rd32(c, (RW(19) + 688)));
SET64(5, RD(16) & 0xffff);
SET64(31, 0x2f7f34); SET64(6, RD(0) + RD(0)); JP_F_0031FCC0(c);
L_002F7F38:;
SET32(16, RW(16) + 1);
SET64(2, RD(16) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002F7EC4; } }
SET64(16, (s32)rd32(c, (RW(19) + 1712)));
if (RD(16) == RD(0)) { SET32(4, RW(19) + 1716); goto L_002F80F4; }
SET64(31, 0x2f7f5c); SET64(4, RD(16) + RD(0)); JP_F_002EF6F0(c);
SET64(17, RD(2) + RD(0));
SET32(6, RW(0) + 1);
SET64(2, rd8(c, (RW(19) + 1832)));
{ int t = RD(2) == RD(0); SET64(18, RD(0) + (s64)1); if (t) goto L_002F7FA0; }
SET64(2, (s32)rd32(c, (RW(19) + 1536)));
SET64(5, RD(6) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(20, (s32)rd32(c, (RW(2) + 1520)));
SET64(31, 0x2f7f88); SET64(6, RD(20) + RD(0)); JP_F_002EA850(c);
SET64(6, RD(20) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2f7f98); SET64(5, RD(0) + RD(0)); JP_F_002EA850(c);
SET64(25, (s32)rd32(c, (RW(16) + 12))); goto L_002F7FB0;
L_002F7FA0:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2f7fac); SET32(5, RW(19) + 1716); JP_F_002EAEB0(c);
SET64(25, (s32)rd32(c, (RW(16) + 12)));
L_002F7FB0:;
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x2f7fbc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x2f7fcc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(17) + 44)));
SET64(31, 0x2f7fd8); SET32(4, RW(29) + 176); JP_F_0013ADA0(c);
SET64(31, 0x2f7fe0); SET32(4, RW(29) + 176); JP_F_00147DD0(c);
SET64(31, 0x2f7fe8); SET64(4, RD(2) + RD(0)); JP_F_00147DA0(c);
SET32(4, RW(29) + 400);
SET64(31, 0x2f7ff4); SET32(5, RW(29) + 176); JP_F_0013ADA0(c);
SET32(4, RW(29) + 464);
SET32(5, RW(19) + 1840);
SET64(31, 0x2f8004); SET32(6, RW(29) + 400); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 480), RW(0));
wr32(c, (RW(29) + 492), RW(2));
SET32(6, RW(29) + 480);
rd128(c, (RW(29) + 464) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 484), RW(0));
wr32(c, (RW(29) + 488), RW(0));
wr128(c, (RW(29) + 480) & ~15u, &c->r[2]);
SET64(4, (s32)rd32(c, (RW(17) + 44)));
SET64(31, 0x2f8030); SET64(5, RD(4) + RD(0)); JP_F_00106BA8(c);
SET64(5, (s32)rd32(c, (RW(16) + 44)));
SET64(31, 0x2f803c); SET32(4, RW(29) + 112); JP_F_0013ADA0(c);
SET64(31, 0x2f8044); SET32(4, RW(29) + 112); JP_F_00147DD0(c);
SET64(31, 0x2f804c); SET64(4, RD(2) + RD(0)); JP_F_00147DA0(c);
SET32(4, RW(29) + 304);
SET64(31, 0x2f8058); SET32(5, RW(29) + 112); JP_F_0013ADA0(c);
SET32(4, RW(29) + 368);
SET32(5, RW(19) + 1856);
SET64(31, 0x2f8068); SET32(6, RW(29) + 304); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 384), RW(0));
wr32(c, (RW(29) + 396), RW(2));
SET32(6, RW(29) + 384);
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 388), RW(0));
wr32(c, (RW(29) + 392), RW(0));
wr128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET64(4, (s32)rd32(c, (RW(16) + 44)));
SET64(31, 0x2f8094); SET64(5, RD(4) + RD(0)); JP_F_00106BA8(c);
SET64(25, (s32)rd32(c, (RW(17) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 60)));
{ u32 t = RW(25); SET64(31, 0x2f80a4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 60)));
{ u32 t = RW(25); SET64(31, 0x2f80b4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, 0x2f80bc); SET64(4, RD(19) + RD(0)); JP_F_002FD230(c);
SET64(31, 0x2f80c4); SET64(4, RD(19) + RD(0)); JP_F_002FD0A0(c);
SET64(17, RD(0) + RD(0));
SET64(16, RD(19) + RD(0));
L_002F80CC:;
SET64(31, 0x2f80d4); SET64(4, (s32)rd32(c, (RW(16) + 968))); JP_F_002EE770(c);
SET32(17, RW(17) + 1);
SET32(16, RW(16) + 4);
SET64(2, RD(17) < (u64)(s64)2);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002F80CC; } }
SET64(31, 0x2f80f0); SET64(4, RD(19) + RD(0)); JP_F_002FDEF0(c);
SET32(4, RW(19) + 1716);
L_002F80F4:;
SET64(31, 0x2f80fc); wr32(c, (RW(19) + 1712), RW(0)); JP_F_002F6CD0(c);
wr8(c, (RW(19) + 1832), (u8)RW(0));
SET32(4, RW(19) + 1840);
SET64(31, 0x2f810c); wr8(c, (RW(19) + 1833), (u8)RW(0)); JP_F_00147DA0(c);
SET64(31, 0x2f8114); SET32(4, RW(19) + 1856); JP_F_00147DA0(c);
SET64(2, RD(18) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F8160; }
SET64(2, (s64)(s32)0x40000000);
c->f[12].u = RW(2);
SET64(31, 0x2f8130); SET32(4, RW(19) + 564); JP_F_00141D40(c);
SET64(2, (s64)(s32)0x40000000);
c->f[12].u = RW(2);
SET64(31, 0x2f8140); SET32(4, RW(19) + 608); JP_F_00141D40(c);
SET64(16, RD(0) + RD(0));
L_002F8144:;
SET64(31, 0x2f814c); SET64(4, RD(19) + RD(0)); JP_F_002FDEF0(c);
SET32(16, RW(16) + 1);
SET64(2, RD(16) < (u64)(s64)10);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002F8144; } }
L_002F8160:;
SET64(2, rd8(c, (RW(19) + 64)));
if (RD(2) != RD(0)) { wr32(c, (RW(19) + 1312), RW(0)); goto L_002F81A8; }
SET64(2, rd8(c, (RW(19) + 65)));
{ int t = RD(2) != RD(0);  if (t) goto L_002F81A4; }
SET64(3, rd16(c, (RW(19) + 728)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2);  if (t) goto L_002F8194; }
SET32(2, RW(0) + 7);
wr16(c, (RW(19) + 1932), (u16)RW(2)); goto L_002F81A4;
L_002F8194:;
SET64(31, 0x2f819c);  JP_F_001953A0(c);
SET64(2, RD(2) & 0x7);
wr16(c, (RW(19) + 1932), (u16)RW(2));
L_002F81A4:;
wr32(c, (RW(19) + 1312), RW(0));
L_002F81A8:;
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 56)));
SET64(2, rd16(c, (RW(19) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f81c4); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F8994;
L_002F81CC:;
SET64(31, 0x2f81d4);  JP_F_002FDEF0(c);
c->f[2].u = rd32(c, (RW(19) + 1312));
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = RW(3);
SET64(3, (s64)(s32)0x40800000);
c->f[1].f = fpu(F(2) + F(1));
c->f[0].u = RW(3);
c->fcc = F(1) <= F(0);
{ int t = c->fcc; wr32(c, (RW(19) + 1312), c->f[1].u); if (t) goto L_002F8994; }
SET64(2, rd8(c, (RW(19) + 730)));
if (RD(2) == RD(0)) { SET64(25, (s32)rd32(c, (RW(19) + 56))); goto L_002F828C; }
SET64(17, RD(0) + RD(0));
SET64(16, RD(19) + RD(0));
L_002F8210:;
SET64(3, (s32)rd32(c, (RW(16) + 968)));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30268)));
{ int t = RD(4) == RD(0);  if (t) goto L_002F8258; }
wr8(c, (RW(4) + 12), (u8)RW(0));
wr8(c, (RW(4) + 13), (u8)RW(0));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x2f8240);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 968)));
SET64(2, (s64)(s32)0x10000);
SET64(4, (s64)(s32)0x40800000);
SET32(2, RW(3) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30268)));
wr32(c, (RW(2) + 16), RW(4));
L_002F8258:;
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F8210; } }
SET64(31, 0x2f8270); SET64(4, (s32)rd32(c, (RW(19) + 1536))); JP_F_001BA1F0(c);
SET64(25, (s32)rd32(c, (RW(19) + 56)));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f8284); SET32(5, RW(0) + 40); rt_call(c, t); }
 goto L_002F8994;
L_002F828C:;
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f829c); SET32(5, RW(0) + 30); rt_call(c, t); }
 goto L_002F8994;
L_002F82A4:;
SET64(31, 0x2f82ac);  JP_F_002FDEF0(c);
SET64(3, (s32)rd32(c, (RW(19) + 672)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
c->f[1].u = rd32(c, (RW(3) + 48));
c->f[0].u = rd32(c, (RW(3) + 16));
c->fcc = F(1) == F(0);
if (!c->fcc) { SET64(3, RD(0) + RD(0)); goto L_002F8310; }
c->f[1].u = rd32(c, (RW(3) + 52));
c->f[0].u = rd32(c, (RW(3) + 20));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F830C; }
c->f[1].u = rd32(c, (RW(3) + 56));
c->f[0].u = rd32(c, (RW(3) + 24));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F830C; }
c->f[1].u = rd32(c, (RW(3) + 60));
c->f[0].u = rd32(c, (RW(3) + 28));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F830C; }
SET64(3, RD(0) + (s64)1); goto L_002F8310;
L_002F830C:;
SET64(3, RD(0) + RD(0));
L_002F8310:;
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002F8994; }
SET64(2, rd8(c, (RW(19) + 64)));
if (RD(2) != RD(0)) { SET64(25, (s32)rd32(c, (RW(19) + 56))); goto L_002F83D8; }
SET64(2, rd8(c, (RW(19) + 65)));
{ int t = RD(2) != RD(0);  if (t) goto L_002F83D4; }
SET64(31, 0x2f8344); SET64(4, (s32)rd32(c, (RW(19) + 1936))); JP_F_00361360(c);
SET64(8, rd16(c, (RW(19) + 1932)));
SET64(4, (s32)rd32(c, (RW(19) + 1936)));
SET64(6, (s32)rd32(c, (RW(19) + 652)));
SET64(7, (s32)rd32(c, (RW(19) + 716)));
SET64(31, 0x2f835c); SET64(5, RD(0) + RD(0)); JP_F_003614A0(c);
SET64(31, 0x2f8364); SET64(4, (s32)rd32(c, (RW(19) + 1536))); JP_F_001BA1F0(c);
SET64(17, RD(0) + RD(0));
SET64(16, RD(19) + RD(0));
L_002F836C:;
SET64(3, (s32)rd32(c, (RW(16) + 968)));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30268)));
{ int t = RD(4) == RD(0);  if (t) goto L_002F83B8; }
wr8(c, (RW(4) + 12), (u8)RW(0));
wr8(c, (RW(4) + 13), (u8)RW(0));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x2f839c);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 968)));
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 1);
SET32(2, RW(3) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30268)));
wr8(c, (RW(2) + 13), (u8)RW(4));
L_002F83B8:;
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F836C; } }
SET64(4, (s32)rd32(c, (RW(19) + 1936)));
SET64(31, 0x2f83d4); SET32(5, RW(0) + 1); JP_F_00361490(c);
L_002F83D4:;
SET64(25, (s32)rd32(c, (RW(19) + 56)));
L_002F83D8:;
SET64(4, RD(19) + RD(0));
SET64(2, rd16(c, (RW(19) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f83f0); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F8994;
L_002F83F8:;
SET64(31, 0x2f8400);  JP_F_002FDEF0(c);
SET64(3, rd8(c, (RW(19) + 64)));
{ int t = RD(3) != RD(0); SET64(16, RD(0) + (s64)1); if (t) goto L_002F8444; }
SET64(3, rd8(c, (RW(19) + 65)));
{ int t = RD(3) != RD(0);  if (t) goto L_002F8444; }
SET64(31, 0x2f8420); SET64(4, (s32)rd32(c, (RW(19) + 1936))); JP_F_00361360(c);
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002F8444; }
SET64(31, 0x2f8434); SET64(4, (s32)rd32(c, (RW(19) + 1936))); JP_F_00361330(c);
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002F8444; }
SET64(16, RD(0) + RD(0));
L_002F8444:;
{ int t = RD(16) == RD(0);  if (t) goto L_002F8994; }
SET64(25, (s32)rd32(c, (RW(19) + 56)));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f8460); SET32(5, RW(0) + 40); rt_call(c, t); }
 goto L_002F8994;
L_002F8468:;
SET64(16, RD(19) + RD(0));
L_002F846C:;
SET64(3, (s32)rd32(c, (RW(16) + 968)));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30268)));
{ int t = RD(4) == RD(0);  if (t) goto L_002F84B8; }
wr8(c, (RW(4) + 12), (u8)RW(0));
wr8(c, (RW(4) + 13), (u8)RW(0));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x2f849c);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 968)));
SET64(2, (s64)(s32)0x10000);
SET64(4, (s64)(s32)0x40800000);
SET32(2, RW(3) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30268)));
wr32(c, (RW(2) + 16), RW(4));
L_002F84B8:;
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F846C; } }
SET64(17, RD(0) + RD(0));
SET64(16, RD(19) + RD(0));
L_002F84D0:;
SET64(3, (s32)rd32(c, (RW(16) + 968)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(3) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x2f84ec); SET32(4, RW(3) + 128); rt_call(c, t); }
SET64(31, 0x2f84f4); SET64(4, (s32)rd32(c, (RW(16) + 968))); JP_F_002EED60(c);
SET64(3, (s32)rd32(c, (RW(16) + 968)));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30268)));
{ int t = RD(4) == RD(0);  if (t) goto L_002F8520; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x2f851c);  rt_call(c, t); }
L_002F8520:;
SET64(2, (s32)rd32(c, (RW(16) + 968)));
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F8540; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F8540:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
{ int t = RD(3) == RD(0);  if (t) goto L_002F8558; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F8558:;
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002F84D0; } }
SET64(2, (s64)(s32)0x42960000);
SET64(4, RD(19) + RD(0));
wr32(c, (RW(19) + 1324), RW(2));
SET64(31, 0x2f857c); SET64(5, RD(0) + RD(0)); JP_F_002FD7E0(c);
SET64(25, (s32)rd32(c, (RW(19) + 56)));
SET64(4, RD(19) + RD(0));
SET64(2, rd16(c, (RW(19) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f8598); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET32(2, RW(0) + 1);
L_002F859C:;
SET64(4, RD(19) + RD(0));
wr8(c, (RW(19) + 721), (u8)RW(2));
SET64(2, (s16)rd16(c, (RW(19) + 1268)));
SET64(2, ~(RD(2) | RD(0)));
SET64(2, RD(0) < RD(2));
SET64(31, 0x2f85b8); wr8(c, (RW(19) + 1888), (u8)RW(2)); JP_F_002FDEF0(c);
SET64(3, rd8(c, (RW(19) + 730)));
if (RD(3) != RD(0)) { SET64(3, rd8(c, (RW(19) + 730))); goto L_002F85D8; }
SET64(31, 0x2f85cc); SET64(4, RD(19) + RD(0)); JP_F_002F66B0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002F8994; }
SET64(3, rd8(c, (RW(19) + 730)));
L_002F85D8:;
if (RD(3) != RD(0)) { SET64(3, rd8(c, (RW(19) + 730))); goto L_002F8618; }
SET64(31, 0x2f85e8); SET64(4, RD(19) + RD(0)); JP_F_002FB360(c);
SET64(4, (s16)rd16(c, (RW(19) + 1268)));
SET32(3, RW(0) + -1);
{ int t = RD(4) == RD(3);  if (t) goto L_002F8614; }
SET64(25, (s32)rd32(c, (RW(19) + 56)));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f860c); SET32(5, RW(0) + 50); rt_call(c, t); }
 goto L_002F8994;
L_002F8614:;
SET64(3, rd8(c, (RW(19) + 730)));
L_002F8618:;
if (RD(3) == RD(0)) { SET64(3, rd8(c, (RW(19) + 730))); goto L_002F8718; }
c->f[2].u = rd32(c, (RW(19) + 588));
SET64(2, (s64)(s32)0x45bb0000);
c->f[1].u = rd32(c, (RW(19) + 1320));
SET64(2, RD(2) | 0x8000);
c->f[0].u = RW(2);
SET64(16, RD(0) + RD(0));
c->f[1].f = fpu(F(1) + F(2));
c->fcc = F(1) < F(0);
{ int t = c->fcc; wr32(c, (RW(19) + 1320), c->f[1].u); if (t) goto L_002F864C; }
SET64(16, RD(0) + (s64)1);
L_002F864C:;
SET64(2, (s32)rd32(c, (RW(19) + 968)));
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2f865c); SET32(4, RW(2) + RW(1)); JP_F_00323B90(c);
SET64(2, (s64)(s32)0x41f00000);
c->f[1].u = RW(2);
c->fcc = F(0) < F(1);
if (c->fcc) { SET64(16, RD(0) + (s64)1); goto L_002F86A0; }
SET64(2, (s32)rd32(c, (RW(19) + 972)));
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2f8684); SET32(4, RW(2) + RW(1)); JP_F_00323B90(c);
SET64(2, (s64)(s32)0x41f00000);
c->f[1].u = RW(2);
c->fcc = F(0) < F(1);
if (!c->fcc) { SET64(2, rd8(c, (RW(19) + 1548))); goto L_002F86A4; }
SET64(16, RD(0) + (s64)1);
L_002F86A0:;
SET64(2, rd8(c, (RW(19) + 1548)));
L_002F86A4:;
{ int t = RD(2) == RD(0);  if (t) goto L_002F86B4; }
wr8(c, (RW(19) + 1548), (u8)RW(0));
SET64(16, RD(0) + (s64)1);
L_002F86B4:;
SET64(31, 0x2f86bc);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2f86c8); SET32(5, RW(0) + -1); JP_F_0013E200(c);
SET64(3, RD(2) & 0xffff);
SET64(3, RD(3) & 0x8);
{ int t = RD(3) == RD(0);  if (t) goto L_002F86DC; }
SET64(16, RD(0) + (s64)1);
L_002F86DC:;
{ int t = RD(16) == RD(0);  if (t) goto L_002F8714; }
SET64(25, (s32)rd32(c, (RW(19) + 56)));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f86f8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 56)));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f870c); SET32(5, RW(0) + 2); rt_call(c, t); }
 goto L_002F8994;
L_002F8714:;
SET64(3, rd8(c, (RW(19) + 730)));
L_002F8718:;
if (RD(3) != RD(0)) { c->f[1].u = rd32(c, (RW(19) + 588)); goto L_002F8774; }
SET64(31, 0x2f8728); SET64(4, RD(19) + RD(0)); JP_F_002F74F0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002F8770; }
SET64(6, RD(0) + RD(0));
SET32(4, RW(0) + 1);
L_002F8738:;
SET64(5, (s32)rd32(c, (RW(19) + 968)));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(5) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + -30268)));
{ int t = RD(3) == RD(0);  if (t) goto L_002F8758; }
wr8(c, (RW(3) + 12), (u8)RW(4));
wr8(c, (RW(3) + 13), (u8)RW(0));
L_002F8758:;
SET32(6, RW(6) + 1);
SET64(3, RD(6) < (u64)(s64)2);
{ int t = RD(3) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_002F8738; } }
 goto L_002F8994;
L_002F8770:;
c->f[1].u = rd32(c, (RW(19) + 588));
L_002F8774:;
c->f[0].u = rd32(c, (RW(19) + 1904));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(19) + 1904), c->f[0].u); goto L_002F8994;
L_002F8784:;
if (RD(2) != RD(0)) { SET64(4, RD(0) + RD(0)); goto L_002F8790; }
SET32(4, RW(0) + 1);
L_002F8790:;
SET64(31, 0x2f8798);  JP_F_002E68A0(c);
SET64(31, 0x2f87a0); wr32(c, (RW(19) + 704), RW(2)); JP_F_00139590(c);
SET64(31, 0x2f87a8);  JP_F_00139590(c);
SET64(31, 0x2f87b0); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_002F89C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2f87bc); SET64(5, RD(2) + RD(0)); JP_F_0022CB90(c);
SET64(4, (s32)rd32(c, (RW(19) + 704)));
SET64(7, RD(2) + RD(0));
SET64(5, (s16)rd16(c, (RW(19) + 1268)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2f87d8); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, 0x2f87e0);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 704))); goto L_002F87F4; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(19) + 704)));
L_002F87F4:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x41200000);
c->f[0].u = rd32(c, (RW(2) + -9456));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
c->f[1].u = RW(3);
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2f8814); c->f[12].f = fpu(F(1) + F(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 56)));
SET64(4, RD(19) + RD(0));
SET64(2, rd16(c, (RW(19) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f8830); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(19) + 1268)));
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(19));
SET64(2, (s32)rd32(c, (RW(2) + 968)));
SET64(2, rd16(c, (RW(2) + 1046)));
wr16(c, (RW(29) + 556), (u16)RW(2));
wr16(c, (RW(29) + 558), (u16)RW(3));
wr32(c, (RW(29) + 552), RW(0));
SET64(4, (s32)rd32(c, (RW(19) + 704)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x2f8864); SET32(5, RW(29) + 552); rt_call(c, t); }
L_002F8864:;
SET64(4, (s32)rd32(c, (RW(19) + 704)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f8878);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002F8994; }
SET32(2, RW(0) + 1);
wr8(c, (RW(19) + 721), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(19) + 704)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2f889c);  rt_call(c, t); }
SET32(3, RW(0) + 5);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 1); goto L_002F88D8; }
SET32(3, RW(0) + 4);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 1); goto L_002F88D0; }
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 1); goto L_002F88C8; }
SET64(2, rd8(c, (RW(19) + 1899))); goto L_002F88E0;
L_002F88C8:;
wr8(c, (RW(19) + 1899), (u8)RW(2)); goto L_002F88DC;
L_002F88D0:;
wr8(c, (RW(19) + 1900), (u8)RW(2)); goto L_002F88DC;
L_002F88D8:;
wr8(c, (RW(19) + 1901), (u8)RW(2));
L_002F88DC:;
SET64(2, rd8(c, (RW(19) + 1899)));
L_002F88E0:;
if (RD(2) != RD(0)) { SET64(25, (s32)rd32(c, (RW(19) + 56))); goto L_002F8904; }
SET64(2, rd8(c, (RW(19) + 1900)));
{ int t = RD(2) != RD(0);  if (t) goto L_002F8900; }
SET64(2, rd8(c, (RW(19) + 1901)));
if (RD(2) == RD(0)) { SET32(2, RW(0) + -1); goto L_002F891C; }
L_002F8900:;
SET64(25, (s32)rd32(c, (RW(19) + 56)));
L_002F8904:;
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f8914); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 704))); goto L_002F8978;
L_002F891C:;
SET64(4, (s64)(s32)0x530000);
wr16(c, (RW(19) + 1268), (u16)RW(2));
SET32(4, RW(4) + -22408);
c->f[0].u = rd32(c, (RW(4) + 20));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = RW(2);
c->fcc = F(0) == F(1);
if (c->fcc) { SET64(25, (s32)rd32(c, (RW(19) + 56))); goto L_002F8964; }
c->f[0].u = rd32(c, (RW(4) + 24));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 20), c->f[1].u);
wr32(c, (RW(4) + 36), RW(0));
wr8(c, (RW(4) + 32), (u8)RW(0));
SET64(31, 0x2f8960); c->f[12].f = fpu(F(0) * F(1)); JP_F_00141D40(c);
SET64(25, (s32)rd32(c, (RW(19) + 56)));
L_002F8964:;
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f8974); SET32(5, RW(0) + 40); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 704)));
L_002F8978:;
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 704), RW(0)); goto L_002F8994; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2f8990); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 704), RW(0));
L_002F8994:;
SET64(31, rd64(c, (RW(29) + 96)));
L_002F8998:;
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 560); return;
}

void JP_F_002F89C0(Ctx *c) { /* func_002F89C0 */
ENTER(0x2f89c0);
SET32(2, RW(0) + 2); return;
}

void JP_F_002F89D0(Ctx *c) { /* func_002F89D0 */
ENTER(0x2f89d0);
SET32(29, RW(29) + -176);
SET32(3, RW(0) + 11);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, rd16(c, (RW(4) + 60)));
if (RD(4) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 672))); goto L_002F9318; }
SET32(3, RW(0) + 10);
if (RD(4) == RD(3)) { SET64(2, rd8(c, (RW(16) + 730))); goto L_002F9174; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 672))); goto L_002F8F68; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 1536))); goto L_002F8E7C; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(18, RD(0) + RD(0)); goto L_002F8C7C; }
if (RD(4) == RD(0)) { SET64(2, rd16(c, (RW(16) + 846))); goto L_002F8A38; }
SET64(31, rd64(c, (RW(29) + 48))); goto L_002F949C;
L_002F8A38:;
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(16) + 846))); goto L_002F8A4C; }
c->f[0].u = RW(0);
wr32(c, (RW(16) + 1884), c->f[0].u); goto L_002F8A7C;
L_002F8A4C:;
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002F8A60; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002F8A78;
L_002F8A60:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002F8A78:;
wr32(c, (RW(16) + 1884), c->f[0].u);
L_002F8A7C:;
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 1888), (u8)RW(2));
SET64(31, 0x2f8a8c); SET64(4, RD(16) + RD(0)); JP_F_002F6A20(c);
SET64(18, RD(0) + RD(0));
SET64(17, RD(16) + RD(0));
L_002F8A94:;
SET64(2, (s32)rd32(c, (RW(17) + 1500)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2f8aa4); SET64(4, (s32)rd32(c, (RW(2) + 256))); JP_F_00141B90(c);
SET64(3, RD(2) ^ 0x1);
SET32(2, RW(0) + 1);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) != RD(2);  if (t) goto L_002F8AD0; }
SET64(4, (s32)rd32(c, (RW(17) + 1500)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f8acc); SET64(5, (s32)rd32(c, (RW(16) + 656))); rt_call(c, t); }
L_002F8AD0:;
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002F8A94; } }
wr8(c, (RW(16) + 1892), (u8)RW(0));
SET32(2, RW(0) + -1);
wr8(c, (RW(16) + 1893), (u8)RW(0));
wr8(c, (RW(16) + 1894), (u8)RW(0));
wr16(c, (RW(16) + 1896), (u16)RW(2));
SET64(17, (s32)rd32(c, (RW(16) + 680)));
if (RD(17) == RD(0)) { wr32(c, (RW(16) + 1324), RW(0)); goto L_002F8B24; }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 204)));
{ u32 t = RW(25); SET64(31, 0x2f8b10); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, 0x2f8b18); SET64(4, RD(17) + RD(0)); JP_F_002419C0(c);
SET64(31, 0x2f8b20); SET64(4, RD(16) + RD(0)); JP_F_002FDC40(c);
wr32(c, (RW(16) + 1324), RW(0));
L_002F8B24:;
SET64(4, (s32)rd32(c, (RW(16) + 688)));
{ int t = RD(4) == RD(0);  if (t) goto L_002F8BF0; }
SET64(31, 0x2f8b38);  JP_F_003204D0(c);
SET64(17, RD(0) + RD(0));
SET64(3, RD(17) & 0xffff);
L_002F8B40:;
SET64(5, RD(0) + RD(0));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(16) + RW(2));
SET64(31, 0x2f8b64); SET32(4, RW(2) + 864); JP_F_002F0D70(c);
SET64(4, (s32)rd32(c, (RW(16) + 688)));
SET64(18, RD(2) + RD(0));
SET64(31, 0x2f8b74); SET64(5, RD(17) & 0xffff); JP_F_0031F600(c);
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2f8b80); SET32(4, RW(18) + RW(1)); JP_F_00323AE0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc;  if (t) goto L_002F8BA0; }
 goto L_002F8BC8;
L_002F8BA0:;
c->f[1].u = RW(0);
c->fcc = F(0) < F(1);
{ int t = !c->fcc;  if (t) goto L_002F8BC0; }
 goto L_002F8BC8;
L_002F8BC0:;
c->f[1].u = c->f[0].u;
L_002F8BC8:;
SET64(5, RD(17) & 0xffff);
wr32(c, (RW(29) + 172), c->f[1].u);
SET32(6, RW(29) + 172);
SET64(4, (s32)rd32(c, (RW(16) + 688)));
SET64(31, 0x2f8be0); SET32(7, RW(0) + 1); JP_F_003204F0(c);
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)2);
if (RD(2) != RD(0)) { SET64(3, RD(17) & 0xffff); { POLL(); goto L_002F8B40; } }
L_002F8BF0:;
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
wr32(c, (RW(29) + 156), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 672)));
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 148), RW(0));
wr32(c, (RW(29) + 152), RW(0));
rd128(c, (RW(29) + 144) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(2) + 48) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(16) + 672)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(3) + 0), RW(0));
wr128(c, (RW(3) + 16) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(16) + 672)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(2) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 672)));
SET64(31, 0x2f8c48); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00173B10(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2f8c58); SET64(4, RD(16) + RD(0)); JP_F_002FB090(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f8c74); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F9498;
L_002F8C7C:;
SET64(17, RD(16) + RD(0));
L_002F8C80:;
SET64(2, (s32)rd32(c, (RW(17) + 968)));
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F8CA0; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x2);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F8CA0:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
{ int t = RD(3) == RD(0);  if (t) goto L_002F8CB8; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x2);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F8CB8:;
SET64(2, (s32)rd32(c, (RW(17) + 968)));
SET64(31, 0x2f8cc4); SET32(4, RW(2) + 128); JP_F_001E9540(c);
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002F8C80; } }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2f8ce0); SET32(5, RW(0) + 1); JP_F_002FD7E0(c);
SET64(2, rd8(c, (RW(16) + 730)));
if (RD(2) == RD(0)) { SET64(3, rd8(c, (RW(16) + 1909))); goto L_002F8DBC; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2f8cf8); SET32(5, RW(0) + 1); JP_F_002FE9A0(c);
SET64(3, rd16(c, (RW(16) + 1532)));
SET32(2, RW(0) + 6);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_002F8D34; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)1); goto L_002F8D38; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F8D34; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_002F8D34; }
 goto L_002F8D38;
L_002F8D34:;
SET64(4, RD(0) + (s64)1);
L_002F8D38:;
if (RD(4) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 876))); goto L_002F8D7C; }
SET64(2, (s32)rd32(c, (RW(16) + 680)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F8D78; }
SET64(31, 0x2f8d54); SET32(4, RW(2) + 224); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002F8D78; }
SET64(4, (s32)rd32(c, (RW(16) + 680)));
SET64(6, (s32)rd32(c, (RW(16) + 660)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2f8d78); SET64(5, (s32)rd32(c, (RW(16) + 656))); rt_call(c, t); }
L_002F8D78:;
SET64(25, (s32)rd32(c, (RW(16) + 876)));
L_002F8D7C:;
SET64(5, (s32)rd32(c, (RW(16) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f8d8c); SET32(4, RW(16) + 864); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 928)));
SET64(5, (s32)rd32(c, (RW(16) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f8da0); SET32(4, RW(16) + 916); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f8db4); SET32(5, RW(0) + 10); rt_call(c, t); }
 goto L_002F9498;
L_002F8DBC:;
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(2, rd16(c, (RW(16) + 728))); goto L_002F8DDC; }
SET64(3, rd8(c, (RW(16) + 724)));
SET64(2, rd8(c, (RW(16) + 725)));
if (RD(3) != RD(2)) { SET64(2, RD(0) < RD(3)); goto L_002F8E08; }
SET64(2, rd16(c, (RW(16) + 728)));
L_002F8DDC:;
if (RD(2) != RD(0)) { SET32(2, RW(0) + 9); goto L_002F8DE8; }
SET32(2, RW(0) + 8);
L_002F8DE8:;
wr16(c, (RW(16) + 1532), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 1536)));
SET64(6, (s32)rd32(c, (RW(16) + 968)));
SET64(7, (s32)rd32(c, (RW(16) + 972)));
SET64(31, 0x2f8e00); SET64(5, rd16(c, (RW(16) + 1532))); JP_F_00328DB0(c);
SET64(4, RD(16) + RD(0)); goto L_002F8E50;
L_002F8E08:;
SET64(2, RD(2) ^ 0x1);
SET64(4, RD(2) & 0xff);
if (RD(4) != RD(0)) { SET32(2, RW(0) + 11); goto L_002F8E1C; }
SET32(2, RW(0) + 10);
L_002F8E1C:;
wr16(c, (RW(16) + 1532), (u16)RW(2));
SET32(2, RW(4) << 2);
SET32(3, RW(2) + RW(16));
SET32(2, RW(4) + 1);
SET64(6, (s32)rd32(c, (RW(3) + 968)));
SET64(2, RD(2) & 0x1);
SET64(4, (s32)rd32(c, (RW(16) + 1536)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(7, (s32)rd32(c, (RW(2) + 968)));
SET64(31, 0x2f8e4c); SET64(5, rd16(c, (RW(16) + 1532))); JP_F_00328DB0(c);
SET64(4, RD(16) + RD(0));
L_002F8E50:;
SET64(31, 0x2f8e58); SET32(5, RW(0) + 1); JP_F_002FE9A0(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f8e74); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F9498;
L_002F8E7C:;
SET64(31, 0x2f8e84); c->f[12].u = rd32(c, (RW(16) + 588)); JP_F_00328C60(c);
SET64(3, (s32)rd32(c, (RW(16) + 1536)));
SET64(3, (s32)rd32(c, (RW(3) + 1920)));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) != RD(0);  if (t) goto L_002F9498; }
SET64(3, rd16(c, (RW(16) + 1532)));
SET32(2, RW(0) + 6);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_002F8ED8; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)1); goto L_002F8EDC; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F8ED8; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_002F8ED8; }
 goto L_002F8EDC;
L_002F8ED8:;
SET64(4, RD(0) + (s64)1);
L_002F8EDC:;
if (RD(4) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 876))); goto L_002F8F20; }
SET64(2, (s32)rd32(c, (RW(16) + 680)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F8F1C; }
SET64(31, 0x2f8ef8); SET32(4, RW(2) + 224); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002F8F1C; }
SET64(4, (s32)rd32(c, (RW(16) + 680)));
SET64(6, (s32)rd32(c, (RW(16) + 660)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2f8f1c); SET64(5, (s32)rd32(c, (RW(16) + 656))); rt_call(c, t); }
L_002F8F1C:;
SET64(25, (s32)rd32(c, (RW(16) + 876)));
L_002F8F20:;
SET64(5, (s32)rd32(c, (RW(16) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f8f30); SET32(4, RW(16) + 864); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 928)));
SET64(5, (s32)rd32(c, (RW(16) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f8f44); SET32(4, RW(16) + 916); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f8f60); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F9498;
L_002F8F68:;
SET64(2, (s64)(s32)0x530000);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x2f8f78); c->f[12].u = rd32(c, (RW(2) + -22384)); JP_F_00173B10(c);
SET64(3, rd16(c, (RW(16) + 1532)));
SET32(2, RW(0) + 6);
SET32(4, RW(0) + 1);
SET64(18, RD(0) + (s64)1);
{ int t = RD(3) == RD(2); SET64(5, RD(0) + RD(0)); if (t) goto L_002F8FB8; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)1); goto L_002F8FBC; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F8FB8; }
{ int t = RD(3) == RD(4);  if (t) goto L_002F8FB8; }
 goto L_002F8FBC;
L_002F8FB8:;
SET64(5, RD(0) + (s64)1);
L_002F8FBC:;
if (RD(5) == RD(0)) { SET64(17, RD(0) + RD(0)); goto L_002F8FF4; }
SET64(4, (s32)rd32(c, (RW(16) + 680)));
{ int t = RD(4) == RD(0);  if (t) goto L_002F8FF0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2f8fe0);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002F8FF0; }
SET64(18, RD(0) + RD(0));
L_002F8FF0:;
SET64(17, RD(0) + RD(0));
L_002F8FF4:;
SET64(3, RD(17) & 0xffff);
L_002F8FF8:;
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(16) + RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 876)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2f9020); SET32(4, RW(2) + 864); rt_call(c, t); }
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002F9030; }
SET64(18, RD(0) + RD(0));
L_002F9030:;
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(3, RSD(17) < (s64)2);
if (RD(3) != RD(0)) { SET64(3, RD(17) & 0xffff); { POLL(); goto L_002F8FF8; } }
{ int t = RD(18) == RD(0);  if (t) goto L_002F9498; }
SET64(31, 0x2f9054); SET64(4, (s32)rd32(c, (RW(16) + 1536))); JP_F_00328D40(c);
SET64(31, 0x2f905c);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 672))); goto L_002F9070; }
SET32(5, RW(5) + 672);
SET64(3, (s32)rd32(c, (RW(16) + 672)));
L_002F9070:;
SET64(2, (s64)(s32)0x3dcc0000);
SET64(2, RD(2) | 0xcccd);
c->f[12].u = RW(2);
SET64(31, 0x2f9084); SET64(4, (s32)rd32(c, (RW(3) + 0))); JP_F_00174040(c);
SET64(2, (s32)rd32(c, (RW(16) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f90a0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(18, RD(0) + RD(0));
SET64(17, RD(16) + RD(0));
L_002F90A8:;
SET64(3, (s32)rd32(c, (RW(17) + 968)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(3) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x2f90c4); SET32(4, RW(3) + 128); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 968)));
SET64(3, (s32)rd32(c, (RW(2) + 4144)));
{ int t = RD(3) == RD(0); SET32(4, RW(2) + 128); if (t) goto L_002F90E0; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F90E0:;
SET64(3, (s32)rd32(c, (RW(4) + 4020)));
{ int t = RD(3) == RD(0);  if (t) goto L_002F90F8; }
SET64(2, rd16(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr16(c, (RW(3) + 0), (u16)RW(2));
L_002F90F8:;
SET64(2, (s32)rd32(c, (RW(17) + 968)));
SET64(25, (s32)rd32(c, (RW(2) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 256)));
{ u32 t = RW(25); SET64(31, 0x2f910c); SET32(4, RW(2) + 128); rt_call(c, t); }
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002F90A8; } }
SET64(17, (s32)rd32(c, (RW(16) + 680)));
SET32(4, RW(29) + 64);
SET64(5, rd16(c, (RW(17) + 464)));
SET64(31, 0x2f9130); SET64(6, RD(0) + RD(0)); JP_F_00242590(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
SET32(4, RW(17) + 64);
wr128(c, (RW(17) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 80) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 96) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET64(31, 0x2f9158); wr128(c, (RW(17) + 112) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f916c); SET32(5, RW(0) + 10); rt_call(c, t); }
 goto L_002F9498;
L_002F9174:;
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 672))); goto L_002F9250; }
SET64(3, rd16(c, (RW(16) + 1532)));
SET32(2, RW(0) + 6);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_002F91B8; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)1); goto L_002F91BC; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F91B8; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_002F91B8; }
 goto L_002F91BC;
L_002F91B8:;
SET64(4, RD(0) + (s64)1);
L_002F91BC:;
if (RD(4) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 876))); goto L_002F9204; }
SET64(2, (s32)rd32(c, (RW(16) + 680)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F9200; }
SET64(31, 0x2f91d8); SET32(4, RW(2) + 224); JP_F_00141B90(c);
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
{ int t = RD(2) != RD(0);  if (t) goto L_002F9200; }
SET64(4, (s32)rd32(c, (RW(16) + 680)));
SET64(6, (s32)rd32(c, (RW(16) + 660)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2f9200); SET64(5, (s32)rd32(c, (RW(16) + 656))); rt_call(c, t); }
L_002F9200:;
SET64(25, (s32)rd32(c, (RW(16) + 876)));
L_002F9204:;
SET64(5, (s32)rd32(c, (RW(16) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2f9214); SET32(4, RW(16) + 864); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 928)));
SET64(5, (s32)rd32(c, (RW(16) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2f9228); SET32(4, RW(16) + 916); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2f9234); SET32(5, RW(0) + 2); JP_F_002FE9A0(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f9248); SET32(5, RW(0) + 4); rt_call(c, t); }
 goto L_002F9498;
L_002F9250:;
SET64(2, (s64)(s32)0x530000);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x2f9260); c->f[12].u = rd32(c, (RW(2) + -22384)); JP_F_00173B10(c);
c->f[12].u = rd32(c, (RW(16) + 588));
SET64(31, 0x2f926c); SET64(4, (s32)rd32(c, (RW(16) + 1536))); JP_F_00328C60(c);
SET64(4, (s32)rd32(c, (RW(16) + 1536)));
SET32(3, RW(0) + 3);
SET64(4, (s32)rd32(c, (RW(4) + 1920)));
{ int t = RD(4) == RD(3); SET64(5, RD(0) + (s64)1); if (t) goto L_002F9290; }
SET32(3, RW(0) + 5);
if (RD(4) == RD(3)) { SET64(3, RD(5) & 0xff); goto L_002F9294; }
SET64(5, RD(0) + RD(0));
L_002F9290:;
SET64(3, RD(5) & 0xff);
L_002F9294:;
{ int t = RD(3) != RD(0);  if (t) goto L_002F9498; }
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 128), RW(0));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 140), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 672)));
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
rd128(c, (RW(29) + 128) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr128(c, (RW(2) + 48) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(16) + 672)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(3) + 0), RW(0));
wr128(c, (RW(3) + 16) & ~15u, &c->r[4]);
SET64(2, (s32)rd32(c, (RW(16) + 672)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(2) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 672)));
SET64(31, 0x2f92f4); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00173B10(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f9310); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002F9498;
L_002F9318:;
SET64(2, (s64)(s32)0x530000);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x2f9328); c->f[12].u = rd32(c, (RW(2) + -22384)); JP_F_00173B10(c);
SET64(3, (s32)rd32(c, (RW(16) + 672)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
c->f[1].u = rd32(c, (RW(3) + 48));
c->f[0].u = rd32(c, (RW(3) + 16));
c->fcc = F(1) == F(0);
if (!c->fcc) { SET64(3, RD(0) + RD(0)); goto L_002F938C; }
c->f[1].u = rd32(c, (RW(3) + 52));
c->f[0].u = rd32(c, (RW(3) + 20));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F9388; }
c->f[1].u = rd32(c, (RW(3) + 56));
c->f[0].u = rd32(c, (RW(3) + 24));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F9388; }
c->f[1].u = rd32(c, (RW(3) + 60));
c->f[0].u = rd32(c, (RW(3) + 28));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002F9388; }
SET64(3, RD(0) + (s64)1); goto L_002F938C;
L_002F9388:;
SET64(3, RD(0) + RD(0));
L_002F938C:;
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002F9498; }
SET64(31, 0x2f93a8); SET64(4, (s32)rd32(c, (RW(16) + 1536))); JP_F_00328C30(c);
SET64(31, 0x2f93b0); SET64(4, (s32)rd32(c, (RW(16) + 1536))); JP_F_001BA1F0(c);
SET64(3, rd16(c, (RW(16) + 1532)));
SET32(2, RW(0) + 6);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_002F93EC; }
SET32(2, RW(0) + 5);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)1); goto L_002F93F0; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002F93EC; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_002F93EC; }
 goto L_002F93F0;
L_002F93EC:;
SET64(4, RD(0) + (s64)1);
L_002F93F0:;
if (RD(4) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 876))); goto L_002F9438; }
SET64(2, (s32)rd32(c, (RW(16) + 680)));
{ int t = RD(2) == RD(0);  if (t) goto L_002F9434; }
SET64(31, 0x2f940c); SET32(4, RW(2) + 224); JP_F_00141B90(c);
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
{ int t = RD(2) != RD(0);  if (t) goto L_002F9434; }
SET64(4, (s32)rd32(c, (RW(16) + 680)));
SET64(6, (s32)rd32(c, (RW(16) + 660)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2f9434); SET64(5, (s32)rd32(c, (RW(16) + 656))); rt_call(c, t); }
L_002F9434:;
SET64(25, (s32)rd32(c, (RW(16) + 876)));
L_002F9438:;
SET64(5, (s32)rd32(c, (RW(16) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2f9448); SET32(4, RW(16) + 864); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 928)));
SET64(5, (s32)rd32(c, (RW(16) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2f945c); SET32(4, RW(16) + 916); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2f9468); SET32(5, RW(0) + 2); JP_F_002FE9A0(c);
wr8(c, (RW(16) + 723), (u8)RW(0));
SET32(2, RW(0) + -1);
wr8(c, (RW(16) + 1893), (u8)RW(0));
SET64(4, RD(16) + RD(0));
wr8(c, (RW(16) + 1894), (u8)RW(0));
wr8(c, (RW(16) + 1892), (u8)RW(0));
wr8(c, (RW(16) + 1909), (u8)RW(0));
wr16(c, (RW(16) + 1896), (u16)RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2f9498); SET32(5, RW(0) + 4); rt_call(c, t); }
L_002F9498:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002F949C:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_002F94B0(Ctx *c) { /* func_002F94B0 */
ENTER(0x2f94b0);
SET32(29, RW(29) + -64);
SET32(5, RW(0) + 94);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 60)));
{ int t = RD(3) == RD(5); SET64(16, RD(4) + RD(0)); if (t) goto L_002FA108; }
SET32(5, RW(0) + 93);
if (RD(3) == RD(5)) { SET64(4, (s32)rd32(c, (RW(16) + 680))); goto L_002FA05C; }
SET32(5, RW(0) + 92);
{ int t = RD(3) == RD(5);  if (t) goto L_002F9FA0; }
SET32(5, RW(0) + 91);
{ int t = RD(3) == RD(5);  if (t) goto L_002F9EF4; }
SET32(5, RW(0) + 90);
{ int t = RD(3) == RD(5);  if (t) goto L_002F9E40; }
SET32(5, RW(0) + 72);
{ int t = RD(3) == RD(5);  if (t) goto L_002F9E0C; }
SET32(5, RW(0) + 71);
if (RD(3) == RD(5)) { SET64(4, RD(16) + RD(0)); goto L_002F9DB8; }
SET32(5, RW(0) + 70);
if (RD(3) == RD(5)) { SET64(3, (s32)rd32(c, (RW(16) + 716))); goto L_002F9CD8; }
SET32(5, RW(0) + 41);
if (RD(3) == RD(5)) { SET64(4, RD(16) + RD(0)); goto L_002F9C98; }
SET32(5, RW(0) + 40);
if (RD(3) == RD(5)) { SET32(4, RW(0) + 196); goto L_002F9C40; }
SET32(5, RW(0) + 62);
{ int t = RD(3) == RD(5);  if (t) goto L_002F9B0C; }
SET32(5, RW(0) + 61);
if (RD(3) == RD(5)) { SET64(4, RD(16) + RD(0)); goto L_002F9AB4; }
SET32(5, RW(0) + 60);
if (RD(3) == RD(5)) { wr16(c, (RW(16) + 1330), (u16)RW(0)); goto L_002F9A98; }
SET32(5, RW(0) + 81);
{ int t = RD(3) == RD(5);  if (t) goto L_002F9A58; }
SET32(5, RW(0) + 80);
{ int t = RD(3) == RD(5);  if (t) goto L_002F9A28; }
SET32(5, RW(0) + 51);
if (RD(3) == RD(5)) { SET64(4, RD(16) + RD(0)); goto L_002F99D8; }
SET32(5, RW(0) + 50);
if (RD(3) == RD(5)) { SET32(4, RW(0) + 76); goto L_002F9990; }
SET32(5, RW(0) + 32);
{ int t = RD(3) == RD(5);  if (t) goto L_002F9948; }
SET32(5, RW(0) + 31);
if (RD(3) == RD(5)) { SET64(4, RD(16) + RD(0)); goto L_002F98D4; }
SET32(5, RW(0) + 30);
if (RD(3) == RD(5)) { SET64(2, rd8(c, (RW(16) + 723))); goto L_002F9808; }
SET32(5, RW(0) + 20);
if (RD(3) == RD(5)) { SET64(5, RD(0) + RD(0)); goto L_002F9748; }
SET32(5, RW(0) + 11);
if (RD(3) == RD(5)) { SET64(4, (s32)rd32(c, (RW(16) + 680))); goto L_002F96DC; }
SET32(5, RW(0) + 10);
if (RD(3) == RD(5)) { SET32(4, RW(0) + 480); goto L_002F9690; }
SET32(5, RW(0) + 1);
if (RD(3) == RD(5)) { SET64(4, (s32)rd32(c, (RW(16) + 684))); goto L_002F9660; }
if (RD(3) == RD(0)) { SET64(2, rd8(c, (RW(16) + 723))); goto L_002F95F4; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_002FA170;
L_002F95F4:;
{ int t = RD(2) == RD(0);  if (t) goto L_002F962C; }
SET64(4, (s32)rd32(c, (RW(16) + 680)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 204)));
{ u32 t = RW(25); SET64(31, 0x2f9610);  rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f9624); SET32(5, RW(0) + 20); rt_call(c, t); }
 goto L_002FA16C;
L_002F962C:;
SET64(31, 0x2f9634);  JP_F_002FA3A0(c);
SET64(31, 0x2f963c); SET32(4, RW(0) + 255); JP_F_002E6310(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f9658); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002FA16C;
L_002F9660:;
SET64(31, 0x2f9668);  JP_F_001B74F0(c);
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002FA16C; }
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f9688); SET32(5, RW(0) + 10); rt_call(c, t); }
 goto L_002FA16C;
L_002F9690:;
SET64(31, 0x2f9698);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002F96A8; }
SET64(31, 0x2f96a8); SET64(4, RD(17) + RD(0)); JP_F_00242180(c);
L_002F96A8:;
wr32(c, (RW(16) + 680), RW(17));
SET64(5, rd16(c, (RW(16) + 844)));
SET64(31, 0x2f96b8); SET64(4, RD(17) + RD(0)); JP_F_00242140(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f96d4); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002FA16C;
L_002F96DC:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2f96ec);  rt_call(c, t); }
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002FA16C; }
SET64(31, 0x2f9700);  JP_F_002E6300(c);
SET64(31, 0x2f9708); SET64(4, (s32)rd32(c, (RW(16) + 680))); JP_F_002420C0(c);
SET64(4, (s32)rd32(c, (RW(16) + 680)));
SET32(6, RW(0) + 256);
SET32(5, RW(0) + 2);
SET64(31, 0x2f971c); SET64(7, RD(6) + RD(0)); JP_F_002BD040(c);
SET64(5, (s32)rd32(c, (RW(16) + 656)));
SET64(6, (s32)rd32(c, (RW(16) + 660)));
SET64(31, 0x2f972c); SET64(4, (s32)rd32(c, (RW(16) + 680))); JP_F_002414F0(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f9740); SET32(5, RW(0) + 20); rt_call(c, t); }
 goto L_002FA16C;
L_002F9748:;
SET64(31, 0x2f9750);  JP_F_002FE9A0(c);
SET64(4, (s32)rd32(c, (RW(16) + 676)));
SET64(31, 0x2f975c); SET32(5, RW(28) + -30984); JP_F_0015E5C0(c);
SET64(17, (s32)rd32(c, (RW(16) + 676)));
c->f[12].u = rd32(c, (RW(28) + -30960));
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x2f9770); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2f9784);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f97a0); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s64)(s32)0x3ca30000);
SET32(5, RW(29) + 60);
SET64(2, RD(2) | 0xd70a);
SET32(6, RW(28) + -30992);
wr32(c, (RW(29) + 60), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 676)));
SET64(31, 0x2f97c0); SET64(7, RD(0) + RD(0)); JP_F_0015E550(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f97d4); SET32(5, RW(0) + 30); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(16) + 680)));
{ int t = RD(17) == RD(0);  if (t) goto L_002FA16C; }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 204)));
{ u32 t = RW(25); SET64(31, 0x2f97f0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, 0x2f97f8); SET64(4, RD(17) + RD(0)); JP_F_002419C0(c);
SET64(31, 0x2f9800); SET64(4, RD(16) + RD(0)); JP_F_002FDC40(c);
 goto L_002FA16C;
L_002F9808:;
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(16) + 728))); goto L_002F9864; }
SET64(31, 0x2f9818); SET32(4, RW(0) + 132); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002F9828; }
SET64(31, 0x2f9828); SET64(4, RD(17) + RD(0)); JP_F_001CD870(c);
L_002F9828:;
wr32(c, (RW(16) + 696), RW(17));
SET64(5, (s32)rd32(c, (RW(16) + 716)));
SET64(6, (s32)rd32(c, (RW(16) + 652)));
SET64(7, (s32)rd32(c, (RW(16) + 684)));
SET64(31, 0x2f9840); SET64(4, RD(17) + RD(0)); JP_F_001CD860(c);
SET64(5, rd16(c, (RW(16) + 732)));
SET64(6, rd16(c, (RW(16) + 784)));
SET64(31, 0x2f9850); SET64(4, (s32)rd32(c, (RW(16) + 696))); JP_F_001CD840(c);
SET64(5, (s32)rd32(c, (RW(16) + 696)));
SET64(31, 0x2f985c); SET64(4, RD(16) + RD(0)); JP_F_0013A470(c);
SET64(25, (s32)rd32(c, (RW(16) + 56))); goto L_002F98B8;
L_002F9864:;
SET32(2, RW(0) + 3);
{ int t = RD(3) != RD(2);  if (t) goto L_002F98B4; }
SET64(31, 0x2f9878); SET64(4, (s32)rd32(c, (RW(16) + 1936))); JP_F_00361360(c);
SET64(8, rd16(c, (RW(16) + 1932)));
SET64(4, (s32)rd32(c, (RW(16) + 1936)));
SET64(6, (s32)rd32(c, (RW(16) + 652)));
SET64(7, (s32)rd32(c, (RW(16) + 716)));
SET64(31, 0x2f9890); SET32(5, RW(0) + 9); JP_F_003614A0(c);
SET64(5, rd16(c, (RW(16) + 1910)));
SET64(31, 0x2f989c); SET64(4, (s32)rd32(c, (RW(16) + 1936))); JP_F_00361320(c);
SET64(5, (s32)rd32(c, (RW(16) + 684)));
SET64(31, 0x2f98a8); SET64(4, (s32)rd32(c, (RW(16) + 1936))); JP_F_00361310(c);
SET64(4, (s32)rd32(c, (RW(16) + 1936)));
SET64(31, 0x2f98b4); SET32(5, RW(0) + 1); JP_F_00361490(c);
L_002F98B4:;
SET64(25, (s32)rd32(c, (RW(16) + 56)));
L_002F98B8:;
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f98d0); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_002F98D4:;
SET64(31, 0x2f98dc);  JP_F_002FA9A0(c);
SET64(2, rd8(c, (RW(16) + 723)));
if (RD(2) != RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 56))); goto L_002F9928; }
SET64(31, 0x2f98f0); SET64(4, (s32)rd32(c, (RW(16) + 696))); JP_F_001CD1E0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002FA16C; }
SET64(2, (s32)rd32(c, (RW(16) + 696)));
SET32(3, RW(0) + 256);
SET64(4, RD(16) + RD(0));
wr16(c, (RW(2) + 0), (u16)RW(3));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f9920); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002FA16C;
L_002F9928:;
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f9940); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002FA16C;
L_002F9948:;
SET64(31, 0x2f9950);  JP_F_002FA9A0(c);
SET64(2, rd8(c, (RW(16) + 723)));
if (RD(2) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 56))); goto L_002F9978; }
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f9970); SET32(5, RW(0) + 60); rt_call(c, t); }
 goto L_002FA16C;
L_002F9978:;
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f9988); SET32(5, RW(0) + 50); rt_call(c, t); }
 goto L_002FA16C;
L_002F9990:;
SET64(31, 0x2f9998);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002F99A8; }
SET64(31, 0x2f99a8); SET64(4, RD(17) + RD(0)); JP_F_0023F520(c);
L_002F99A8:;
wr32(c, (RW(16) + 692), RW(17));
SET64(5, (s32)rd32(c, (RW(16) + 660)));
SET64(31, 0x2f99b8); SET64(4, RD(17) + RD(0)); JP_F_0023F480(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f99d4); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_002F99D8:;
SET64(31, 0x2f99e0);  JP_F_002FA9A0(c);
SET64(4, (s32)rd32(c, (RW(16) + 692)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2f99f4);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002FA16C; }
SET64(4, (s32)rd32(c, (RW(16) + 692)));
SET64(5, (s32)rd32(c, (RW(16) + 716)));
SET64(31, 0x2f9a0c); SET32(6, RW(16) + 564); JP_F_0023F440(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f9a20); SET32(5, RW(0) + 80); rt_call(c, t); }
 goto L_002FA16C;
L_002F9A28:;
SET64(31, 0x2f9a30);  JP_F_002FA9A0(c);
wr16(c, (RW(16) + 1352), (u16)RW(0));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f9a50); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002FA16C;
L_002F9A58:;
SET64(31, 0x2f9a60);  JP_F_002FA9A0(c);
c->f[12].u = RW(0);
SET64(31, 0x2f9a6c); SET64(4, RD(16) + RD(0)); JP_F_002FB990(c);
SET64(4, rd16(c, (RW(16) + 1352)));
SET32(3, RW(0) + 20);
{ int t = RD(4) != RD(3);  if (t) goto L_002FA16C; }
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f9a90); SET32(5, RW(0) + 60); rt_call(c, t); }
 goto L_002FA16C;
L_002F9A98:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f9ab0); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_002F9AB4:;
SET64(31, 0x2f9abc);  JP_F_002FA9A0(c);
SET64(31, 0x2f9ac4); SET64(4, RD(16) + RD(0)); JP_F_002FA180(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 56))); goto L_002F9AF4; }
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f9aec); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002FA16C;
L_002F9AF4:;
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f9b04); SET32(5, RW(0) + 40); rt_call(c, t); }
 goto L_002FA16C;
L_002F9B0C:;
SET64(31, 0x2f9b14);  JP_F_002FA9A0(c);
SET64(2, rd16(c, (RW(16) + 1330)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 968)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 364)));
{ u32 t = RW(25); SET64(31, 0x2f9b34);  rt_call(c, t); }
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002FA16C; }
SET64(2, rd16(c, (RW(16) + 1330)));
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET64(7, RD(5) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(9, RD(5) + RD(0));
SET32(2, RW(2) << 2);
SET64(10, RD(0) + RD(0));
SET32(2, RW(2) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 968)));
SET64(31, 0x2f9b70); SET32(4, RW(2) + 128); JP_F_0015BA30(c);
SET64(2, rd16(c, (RW(16) + 1330)));
SET32(5, RW(0) + 32);
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 968)));
SET64(25, (s32)rd32(c, (RW(2) + 404)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2f9b94); SET32(4, RW(2) + 128); rt_call(c, t); }
SET64(2, rd16(c, (RW(16) + 1330)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(31, 0x2f9ba8); SET64(4, (s32)rd32(c, (RW(2) + 968))); JP_F_002EEDA0(c);
SET64(31, 0x2f9bb0);  JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(16) + 1330)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 968)));
SET64(4, (s32)rd32(c, (RW(2) + 1152)));
{ int t = RD(4) == RD(0); SET64(5, (s32)rd32(c, (RW(3) + 48))); if (t) goto L_002F9BD8; }
SET64(31, 0x2f9bd8);  JP_F_002BAB70(c);
L_002F9BD8:;
SET64(2, rd16(c, (RW(16) + 1330)));
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 968)));
SET64(31, 0x2f9bf4); SET32(4, RW(2) + 128); JP_F_001E71F0(c);
SET64(2, rd16(c, (RW(16) + 1330)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 968)));
SET64(4, (s32)rd32(c, (RW(2) + 1148)));
if (RD(4) == RD(0)) { SET64(2, rd16(c, (RW(16) + 1330))); goto L_002F9C1C; }
SET64(31, 0x2f9c18); SET64(5, (s32)rd32(c, (RW(16) + 668))); JP_F_0022CDA0(c);
SET64(2, rd16(c, (RW(16) + 1330)));
L_002F9C1C:;
SET64(4, RD(16) + RD(0));
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 1330), (u16)RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f9c38); SET32(5, RW(0) + 61); rt_call(c, t); }
 goto L_002FA16C;
L_002F9C40:;
SET64(31, 0x2f9c48);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002F9C58; }
SET64(31, 0x2f9c58); SET64(4, RD(17) + RD(0)); JP_F_003221A0(c);
L_002F9C58:;
wr32(c, (RW(16) + 688), RW(17));
SET64(5, (s32)rd32(c, (RW(16) + 716)));
SET64(31, 0x2f9c68); SET64(4, RD(17) + RD(0)); JP_F_00321FB0(c);
SET64(6, rd16(c, (RW(16) + 784)));
SET64(4, (s32)rd32(c, (RW(16) + 688)));
SET64(31, 0x2f9c78); SET64(5, rd16(c, (RW(16) + 732))); JP_F_00321F10(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f9c94); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_002F9C98:;
SET64(31, 0x2f9ca0);  JP_F_002FA9A0(c);
SET64(31, 0x2f9ca8); SET64(4, (s32)rd32(c, (RW(16) + 688))); JP_F_00321C90(c);
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002FA16C; }
SET64(31, 0x2f9cbc); SET64(4, (s32)rd32(c, (RW(16) + 688))); JP_F_00321470(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f9cd0); SET32(5, RW(0) + 70); rt_call(c, t); }
 goto L_002FA16C;
L_002F9CD8:;
SET64(2, (s32)rd32(c, (RW(16) + 1536)));
wr32(c, (RW(2) + 84), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 668)));
SET64(2, (s32)rd32(c, (RW(16) + 1536)));
SET32(3, RW(3) + 784);
wr32(c, (RW(2) + 80), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 652)));
SET64(5, (s32)rd32(c, (RW(16) + 1536)));
SET32(2, RW(3) + 928);
wr32(c, (RW(5) + 396), RW(2));
wr32(c, (RW(5) + 400), RW(3));
SET64(4, (s32)rd32(c, (RW(5) + 348)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 668))); goto L_002F9D24; }
SET64(3, (s32)rd32(c, (RW(5) + 400)));
SET64(2, (s32)rd32(c, (RW(5) + 396)));
wr32(c, (RW(4) + 44), RW(2));
wr32(c, (RW(4) + 48), RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 668)));
L_002F9D24:;
SET64(3, (s32)rd32(c, (RW(16) + 1536)));
SET64(2, (s32)rd32(c, (RW(16) + 660)));
wr32(c, (RW(3) + 1924), RW(2));
wr32(c, (RW(3) + 1928), RW(4));
SET64(3, (s32)rd32(c, (RW(16) + 656)));
SET64(2, (s32)rd32(c, (RW(16) + 1536)));
wr32(c, (RW(2) + 60), RW(3));
SET64(5, (s32)rd32(c, (RW(16) + 692)));
SET64(31, 0x2f9d4c); SET64(4, (s32)rd32(c, (RW(16) + 1536))); JP_F_001C5970(c);
SET64(4, (s32)rd32(c, (RW(16) + 1536)));
SET64(2, (s32)rd32(c, (RW(16) + 684)));
wr32(c, (RW(4) + 208), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 348)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 688))); goto L_002F9D70; }
SET64(2, (s32)rd32(c, (RW(4) + 208)));
wr32(c, (RW(3) + 40), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 688)));
L_002F9D70:;
SET64(2, (s32)rd32(c, (RW(16) + 1536)));
wr32(c, (RW(2) + 1604), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 680)));
SET64(2, (s32)rd32(c, (RW(16) + 1536)));
wr32(c, (RW(2) + 344), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 664)));
SET64(2, (s32)rd32(c, (RW(16) + 1536)));
wr32(c, (RW(2) + 128), RW(3));
SET64(31, 0x2f9d98); SET64(4, (s32)rd32(c, (RW(16) + 1536))); JP_F_001C5B20(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f9db4); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_002F9DB8:;
SET64(31, 0x2f9dc0);  JP_F_002FA9A0(c);
SET64(4, (s32)rd32(c, (RW(16) + 1536)));
SET64(6, (s32)rd32(c, (RW(16) + 968)));
SET64(31, 0x2f9dd0); SET64(5, RD(0) + RD(0)); JP_F_001C5990(c);
SET64(4, (s32)rd32(c, (RW(16) + 1536)));
SET64(6, (s32)rd32(c, (RW(16) + 972)));
SET64(31, 0x2f9de0); SET32(5, RW(0) + 1); JP_F_001C5990(c);
SET64(31, 0x2f9de8); SET64(4, (s32)rd32(c, (RW(16) + 1536))); JP_F_001C55E0(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f9e04); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002FA16C;
L_002F9E0C:;
SET64(31, 0x2f9e14);  JP_F_002FA9A0(c);
SET64(31, 0x2f9e1c); SET64(4, (s32)rd32(c, (RW(16) + 1536))); JP_F_001C53B0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002FA16C; }
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2f9e38); SET32(5, RW(0) + 90); rt_call(c, t); }
 goto L_002FA16C;
L_002F9E40:;
SET64(31, 0x2f9e48);  JP_F_002FA9A0(c);
SET64(2, rd8(c, (RW(16) + 723)));
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(16) + 728))); goto L_002F9E94; }
SET64(31, 0x2f9e5c); SET64(4, (s32)rd32(c, (RW(16) + 696))); JP_F_001CD160(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002FA16C; }
SET64(2, (s32)rd32(c, (RW(16) + 696)));
SET32(3, RW(0) + 512);
SET64(4, RD(16) + RD(0));
wr16(c, (RW(2) + 0), (u16)RW(3));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f9e8c); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002FA16C;
L_002F9E94:;
SET32(2, RW(0) + 3);
if (RD(3) != RD(2)) { SET64(25, (s32)rd32(c, (RW(16) + 56))); goto L_002F9ED4; }
SET64(31, 0x2f9ea8); SET64(4, (s32)rd32(c, (RW(16) + 1936))); JP_F_00361360(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002FA16C; }
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f9ecc); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002FA16C;
L_002F9ED4:;
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f9eec); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002FA16C;
L_002F9EF4:;
SET64(31, 0x2f9efc);  JP_F_002FA9A0(c);
SET64(3, rd8(c, (RW(16) + 723)));
{ int t = RD(3) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_002F9F40; }
SET64(4, (s32)rd32(c, (RW(16) + 696)));
SET32(3, RW(0) + 4);
SET64(5, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(5) != RD(3);  if (t) goto L_002F9F44; }
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 696), RW(0)); goto L_002F9F38; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2f9f34); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 696), RW(0));
L_002F9F38:;
SET64(6, RD(0) + (s64)1); goto L_002F9F44;
L_002F9F40:;
SET64(6, RD(0) + (s64)1);
L_002F9F44:;
{ int t = RD(6) == RD(0);  if (t) goto L_002FA16C; }
SET64(31, 0x2f9f54);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 672))); goto L_002F9F68; }
SET32(5, RW(5) + 672);
SET64(3, (s32)rd32(c, (RW(16) + 672)));
L_002F9F68:;
SET64(2, (s64)(s32)0x3dcc0000);
SET64(2, RD(2) | 0xcccd);
c->f[12].u = RW(2);
SET64(31, 0x2f9f7c); SET64(4, (s32)rd32(c, (RW(3) + 0))); JP_F_00173F60(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2f9f98); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002FA16C;
L_002F9FA0:;
SET64(31, 0x2f9fa8);  JP_F_002FA9A0(c);
SET64(3, (s32)rd32(c, (RW(16) + 672)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
c->f[1].u = rd32(c, (RW(3) + 48));
c->f[0].u = rd32(c, (RW(3) + 16));
c->fcc = F(1) == F(0);
if (!c->fcc) { SET64(3, RD(0) + RD(0)); goto L_002FA00C; }
c->f[1].u = rd32(c, (RW(3) + 52));
c->f[0].u = rd32(c, (RW(3) + 20));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002FA008; }
c->f[1].u = rd32(c, (RW(3) + 56));
c->f[0].u = rd32(c, (RW(3) + 24));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002FA008; }
c->f[1].u = rd32(c, (RW(3) + 60));
c->f[0].u = rd32(c, (RW(3) + 28));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002FA008; }
SET64(3, RD(0) + (s64)1); goto L_002FA00C;
L_002FA008:;
SET64(3, RD(0) + RD(0));
L_002FA00C:;
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002FA16C; }
SET64(4, (s32)rd32(c, (RW(16) + 680)));
SET64(6, (s32)rd32(c, (RW(16) + 660)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2fa038); SET64(5, (s32)rd32(c, (RW(16) + 656))); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2fa054); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002FA16C;
L_002FA05C:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2fa06c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002FA16C; }
SET64(5, (s32)rd32(c, (RW(16) + 968)));
SET64(6, (s32)rd32(c, (RW(16) + 972)));
SET64(31, 0x2fa084); SET32(4, RW(16) + 992); JP_F_003065F0(c);
SET64(31, 0x2fa08c); SET64(4, (s32)rd32(c, (RW(16) + 680))); JP_F_002BD190(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 680))); goto L_002FA0D0; }
SET32(4, RW(16) + 864);
SET64(31, 0x2fa0a0); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(5, (s32)rd32(c, (RW(16) + 680)));
SET32(4, RW(2) + 128);
SET64(31, 0x2fa0b0); SET64(6, RD(0) + RD(0)); JP_F_002BD9F0(c);
SET32(4, RW(16) + 916);
SET64(31, 0x2fa0bc); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(5, (s32)rd32(c, (RW(16) + 680)));
SET32(4, RW(2) + 128);
SET64(31, 0x2fa0cc); SET32(6, RW(0) + 1); JP_F_002BD9F0(c);
SET64(4, (s32)rd32(c, (RW(16) + 680)));
L_002FA0D0:;
SET64(6, (s32)rd32(c, (RW(16) + 660)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2fa0e4); SET64(5, (s32)rd32(c, (RW(16) + 656))); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2fa100); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
 goto L_002FA16C;
L_002FA108:;
SET64(2, rd8(c, (RW(16) + 723)));
if (RD(2) != RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 56))); goto L_002FA15C; }
SET64(31, 0x2fa11c);  JP_F_00139590(c);
SET64(31, 0x2fa124);  JP_F_00139590(c);
SET64(17, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s32)rd32(c, (RW(16) + 856)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 680))); goto L_002FA13C; }
SET64(4, RD(17) + RD(0)); goto L_002FA148;
L_002FA13C:;
SET64(31, 0x2fa144); SET64(4, rd16(c, (RW(2) + 464))); JP_F_0030EE40(c);
SET64(4, RD(17) + RD(0));
L_002FA148:;
SET64(5, RD(2) + RD(0));
c->f[12].u = RW(0);
SET64(31, 0x2fa158); SET32(6, RW(0) + 1); JP_F_001B8120(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
L_002FA15C:;
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2fa16c); SET32(5, RW(0) + 3); rt_call(c, t); }
L_002FA16C:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002FA170:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002FA180(Ctx *c) { /* func_002FA180 */
ENTER(0x2fa180);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(3, RW(0) + 255);
L_002FA1A0:;
SET64(4, rd16(c, (RW(19) + 1330)));
SET64(2, RSD(4) < (s64)2);
if (RD(2) != RD(0)) { SET32(2, RW(4) << 1); goto L_002FA1B8; }
SET32(2, RW(0) + 1); goto L_002FA2CC;
L_002FA1B8:;
SET32(2, RW(2) + RW(4));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(4));
SET32(2, RW(2) << 2);
SET32(2, RW(19) + RW(2));
SET64(18, rd16(c, (RW(2) + 732)));
{ int t = RD(18) == RD(3); SET32(16, RW(2) + 732); if (t) goto L_002FA2BC; }
SET64(31, 0x2fa1e0); SET64(4, RD(0) | 0x8ac0); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002FA1F4; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2fa1f4); SET32(5, RW(0) + 1); JP_F_002EF720(c);
L_002FA1F4:;
SET64(3, rd16(c, (RW(19) + 1330)));
SET32(2, RW(0) + 1);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(19));
wr32(c, (RW(3) + 968), RW(17));
SET64(4, rd16(c, (RW(19) + 1330)));
SET64(3, (s32)rd32(c, (RW(19) + 716)));
SET32(4, RW(4) << 2);
SET32(4, RW(4) + RW(19));
SET64(17, (s32)rd32(c, (RW(4) + 968)));
wr32(c, (RW(17) + 1876), RW(3));
SET32(4, RW(17) + 128);
SET64(31, 0x2fa22c); wr8(c, (RW(17) + 1874), (u8)RW(2)); JP_F_002BDCF0(c);
SET64(2, rd16(c, (RW(16) + 8)));
if (RD(2) != RD(0)) { SET32(2, RW(0) + 1); goto L_002FA23C; }
SET64(2, RD(0) + RD(0));
L_002FA23C:;
wr32(c, (RW(17) + 1052), RW(2));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2fa24c); SET64(4, RD(17) + RD(0)); JP_F_002EF480(c);
SET64(3, rd16(c, (RW(16) + 4)));
SET64(5, RD(17) + RD(0));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(19) + RW(2));
SET64(31, 0x2fa274); SET32(4, RW(2) + 864); JP_F_002F0DB0(c);
SET64(31, 0x2fa27c); SET64(4, rd16(c, (RW(16) + 2))); JP_F_00304440(c);
SET64(3, rd16(c, (RW(19) + 1330)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(19));
wr32(c, (RW(3) + 976), RW(2));
SET64(2, rd16(c, (RW(19) + 1330)));
c->f[12].u = rd32(c, (RW(16) + 48));
SET64(6, rd16(c, (RW(16) + 6)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 976)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x2fa2b4); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
 goto L_002FA2C8;
L_002FA2BC:;
SET32(2, RW(4) + 1);
wr16(c, (RW(19) + 1330), (u16)RW(2)); { POLL(); goto L_002FA1A0; }
L_002FA2C8:;
SET64(2, RD(0) + RD(0));
L_002FA2CC:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002FA2F0(Ctx *c) { /* func_002FA2F0 */
ENTER(0x2fa2f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2fa30c); SET32(4, RW(0) + 1936); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002FA31C; }
SET64(31, 0x2fa31c); SET64(4, RD(17) + RD(0)); JP_F_00328E50(c);
L_002FA31C:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2fa328); wr32(c, (RW(16) + 1536), RW(17)); JP_F_00328E20(c);
SET64(2, rd8(c, (RW(16) + 848)));
{ int t = RD(2) == RD(0);  if (t) goto L_002FA340; }
SET64(2, (s32)rd32(c, (RW(16) + 1536)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 420), (u8)RW(3));
L_002FA340:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x42c80000);
SET64(4, (s32)rd32(c, (RW(16) + 1536)));
c->f[1].u = rd32(c, (RW(2) + -9456));
SET32(5, RW(0) + 1);
c->f[0].u = RW(3);
wr8(c, (RW(4) + 421), (u8)RW(5));
SET64(4, (s32)rd32(c, (RW(16) + 1536)));
SET64(31, 0x2fa368); c->f[12].f = fpu(F(1) - F(0)); JP_F_001C2C00(c);
SET32(4, RW(16) + 1716);
SET64(31, 0x2fa374); wr32(c, (RW(16) + 1712), RW(0)); JP_F_002F6CD0(c);
wr8(c, (RW(16) + 1832), (u8)RW(0));
SET32(4, RW(16) + 1840);
SET64(31, 0x2fa384); wr8(c, (RW(16) + 1833), (u8)RW(0)); JP_F_00147DA0(c);
SET64(31, 0x2fa38c); SET32(4, RW(16) + 1856); JP_F_00147DA0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002FA3A0(Ctx *c) { /* func_002FA3A0 */
ENTER(0x2fa3a0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2fa3c0); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x2fa3d0); SET32(6, RW(0) + -1); JP_F_0013DEB0(c);
SET64(31, 0x2fa3d8); SET32(4, RW(0) + 1); JP_F_00138B20(c);
SET64(2, (s32)rd32(c, (RW(16) + 668)));
{ int t = RD(2) != RD(0);  if (t) goto L_002FA3F0; }
SET64(5, rd16(c, (RW(16) + 844)));
SET64(31, 0x2fa3f0); SET64(4, RD(16) + RD(0)); JP_F_002FEED0(c);
L_002FA3F0:;
SET64(31, 0x2fa3f8);  JP_F_00139590(c);
SET64(31, 0x2fa400);  JP_F_00139590(c);
c->f[12].u = RW(0);
SET64(31, 0x2fa40c); SET64(4, (s32)rd32(c, (RW(2) + 24))); JP_F_001B8110(c);
wr32(c, (RW(16) + 580), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 584), RW(2));
SET64(4, (s64)(s32)0x530000);
wr32(c, (RW(16) + 588), RW(0));
SET32(4, RW(4) + -22408);
wr32(c, (RW(16) + 592), RW(0));
wr32(c, (RW(16) + 604), RW(0));
wr32(c, (RW(16) + 600), RW(0));
wr8(c, (RW(16) + 596), (u8)RW(0));
wr32(c, (RW(16) + 624), RW(0));
wr32(c, (RW(16) + 628), RW(2));
wr32(c, (RW(16) + 632), RW(0));
wr32(c, (RW(16) + 636), RW(0));
wr32(c, (RW(16) + 648), RW(0));
wr32(c, (RW(16) + 644), RW(0));
wr8(c, (RW(16) + 640), (u8)RW(0));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2fa460); SET32(5, RW(16) + 564); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 576)));
SET32(4, RW(16) + 564);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2fa474); SET32(5, RW(16) + 608); rt_call(c, t); }
SET64(31, 0x2fa47c); SET32(4, RW(0) + 1168); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002FA560; }
SET32(4, RW(18) + 16);
SET32(2, RW(18) + 420);
wr32(c, (RW(18) + 0), RW(4));
SET32(3, RW(18) + 448);
wr32(c, (RW(18) + 704), RW(2));
SET32(17, RW(0) + 1);
SET32(2, RW(18) + 736);
wr32(c, (RW(18) + 4), RW(3));
SET64(31, 0x2fa4ac); wr32(c, (RW(18) + 8), RW(2)); JP_F_0019C2D0(c);
SET64(31, 0x2fa4b4); SET32(4, RW(18) + 420); JP_F_00141C80(c);
SET32(4, RW(18) + 448);
SET64(31, 0x2fa4c0); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET32(4, RW(18) + 736);
SET64(31, 0x2fa4cc); SET64(5, RD(17) + RD(0)); JP_F_002A5500(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4624);
SET64(9, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 12), RW(2));
SET64(8, (s64)(s32)0x4d0000);
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET32(6, RW(6) + 4672);
SET64(7, (s64)(s32)0x4d0000);
SET32(9, RW(9) + 4724);
SET32(8, RW(8) + 4688);
SET32(7, RW(7) + 4796);
wr32(c, (RW(2) + 388), RW(6));
SET32(5, RW(18) + 16);
SET64(6, (s32)rd32(c, (RW(18) + 4)));
SET32(4, RW(18) + 420);
SET32(3, RW(18) + 448);
SET32(2, RW(18) + 736);
wr32(c, (RW(6) + 276), RW(9));
SET64(6, (s32)rd32(c, (RW(18) + 4)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
wr32(c, (RW(6) + 16), RW(8));
SET64(6, (s32)rd32(c, (RW(18) + 8)));
wr32(c, (RW(6) + 144), RW(7));
SET64(6, (s32)rd32(c, (RW(18) + 0)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 400), RW(5));
SET64(5, (s32)rd32(c, (RW(18) + 4)));
SET64(5, (s32)rd32(c, (RW(5) + 256)));
SET32(4, RW(4) - RW(5));
wr32(c, (RW(5) + 20), RW(4));
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 280), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 8)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 416), RW(2));
L_002FA560:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2fa56c); wr32(c, (RW(16) + 672), RW(18)); JP_F_00173A30(c);
SET64(2, (s64)(s32)0x4c0000);
SET64(17, (s32)rd32(c, (RW(16) + 672)));
c->f[20].u = rd32(c, (RW(2) + -9456));
SET64(2, (s64)(s32)0x4c0000);
c->f[12].u = rd32(c, (RW(2) + -9456));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2fa58c); SET32(4, RW(2) + 64); JP_F_0014E9B0(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 72)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2fa5a0); SET32(4, RW(2) + 64); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 672)));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 124), RW(0));
SET32(4, RW(0) + 832);
wr32(c, (RW(29) + 112), RW(2));
wr32(c, (RW(29) + 116), RW(2));
wr32(c, (RW(29) + 120), RW(2));
rd128(c, (RW(29) + 112) & ~15u, &c->r[5]);
SET64(3, (s32)rd32(c, (RW(3) + 0)));
wr32(c, (RW(29) + 96), RW(2));
wr32(c, (RW(29) + 100), RW(2));
wr128(c, (RW(3) + 48) & ~15u, &c->r[5]);
SET64(3, (s32)rd32(c, (RW(16) + 672)));
wr32(c, (RW(29) + 104), RW(2));
wr32(c, (RW(29) + 108), RW(0));
SET64(5, (s32)rd32(c, (RW(3) + 0)));
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(5) + 32) & ~15u, &c->r[3]);
wr32(c, (RW(5) + 0), RW(0));
SET64(31, 0x2fa5f8); wr128(c, (RW(5) + 16) & ~15u, &c->r[2]); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002FA6C8; }
SET32(4, RW(18) + 84);
SET32(3, RW(18) + 112);
wr32(c, (RW(18) + 368), RW(4));
SET32(2, RW(18) + 400);
wr32(c, (RW(18) + 0), RW(3));
SET32(17, RW(0) + 1);
SET64(31, 0x2fa620); wr32(c, (RW(18) + 4), RW(2)); JP_F_00141C80(c);
SET32(4, RW(18) + 112);
SET64(31, 0x2fa62c); SET64(5, RD(0) + RD(0)); JP_F_00154430(c);
SET32(4, RW(18) + 400);
SET64(31, 0x2fa638); SET64(5, RD(17) + RD(0)); JP_F_002A5500(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 736);
SET64(8, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 80), RW(2));
SET64(7, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(18) + 0)));
SET32(9, RW(9) + 808);
SET32(8, RW(8) + 772);
SET32(7, RW(7) + 880);
SET32(5, RW(18) + 84);
SET32(3, RW(18) + 112);
wr32(c, (RW(6) + 276), RW(9));
SET32(2, RW(18) + 400);
SET64(6, (s32)rd32(c, (RW(18) + 0)));
SET32(4, RW(18) + 16);
SET64(6, (s32)rd32(c, (RW(6) + 256)));
wr32(c, (RW(6) + 16), RW(8));
SET64(6, (s32)rd32(c, (RW(18) + 4)));
wr32(c, (RW(6) + 144), RW(7));
SET64(6, (s32)rd32(c, (RW(18) + 0)));
SET64(6, (s32)rd32(c, (RW(6) + 256)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
SET64(5, (s32)rd32(c, (RW(18) + 0)));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(5) + 280), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 4)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 416), RW(2));
SET64(31, 0x2fa6b8); wr32(c, (RW(18) + 8), RW(0)); JP_F_002B4380(c);
wr16(c, (RW(18) + 72), (u16)RW(0));
wr16(c, (RW(18) + 74), (u16)RW(0));
wr8(c, (RW(18) + 76), (u8)RW(0));
wr8(c, (RW(18) + 77), (u8)RW(0));
L_002FA6C8:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2fa6d4); wr32(c, (RW(16) + 676), RW(18)); JP_F_0015ECB0(c);
SET64(17, (s32)rd32(c, (RW(16) + 676)));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x2fa6ec); c->f[12].f = fpu(F(20) - F(0)); JP_F_0014E9B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2fa700);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2fa71c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, 0x2fa724); SET32(4, RW(0) + 148); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002FA79C; }
SET64(31, 0x2fa734); SET64(4, RD(17) + RD(0)); JP_F_001F0D10(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15184);
SET32(3, RW(3) + 15204);
wr32(c, (RW(17) + 72), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 132), RW(3));
SET32(2, RW(2) + 15212);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 96), RW(2));
SET32(3, RW(3) + 15224);
wr32(c, (RW(17) + 112), RW(3));
SET64(2, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 144), RW(2));
SET32(3, RW(3) + 15056);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 72), RW(3));
SET32(2, RW(2) + 15076);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 132), RW(2));
SET32(3, RW(3) + 15084);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15096);
wr32(c, (RW(17) + 96), RW(3));
wr32(c, (RW(17) + 112), RW(2));
L_002FA79C:;
wr32(c, (RW(16) + 684), RW(17));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 72)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2fa7b4); SET32(5, RW(0) + 5); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 684)));
SET32(5, RW(0) + 5634);
SET64(31, 0x2fa7c4); SET32(6, RW(0) + -1); JP_F_001B7700(c);
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s32)rd32(c, (RW(16) + 684)));
c->f[0].u = rd32(c, (RW(2) + -8080));
SET32(4, RW(16) + 708);
SET64(31, 0x2fa7dc); wr32(c, (RW(3) + 144), c->f[0].u); JP_F_00361C20(c);
SET64(2, (s32)rd32(c, (RW(16) + 716)));
if (RD(2) != RD(0)) { SET64(17, (s32)rd32(c, (RW(16) + 716))); goto L_002FA820; }
SET64(31, 0x2fa7f0); SET32(4, RW(0) + 32); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002FA800; }
SET64(31, 0x2fa800); SET64(4, RD(17) + RD(0)); JP_F_001509B0(c);
L_002FA800:;
SET32(5, RW(0) + 512);
SET64(4, RD(17) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x2fa81c); wr32(c, (RW(16) + 716), RW(17)); JP_F_00150830(c);
SET64(17, (s32)rd32(c, (RW(16) + 716)));
L_002FA820:;
SET64(31, 0x2fa828);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2fa834); SET64(5, RD(17) + RD(0)); JP_F_0022CAC0(c);
SET64(17, RD(0) + RD(0));
SET64(3, RD(17) & 0xffff);
L_002FA83C:;
SET64(5, RD(17) + RD(0));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(16) + RW(2));
SET32(18, RW(2) + 864);
SET64(31, 0x2fa864); SET64(4, RD(18) + RD(0)); JP_F_002F0FF0(c);
SET64(25, (s32)rd32(c, (RW(16) + 576)));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2fa878); SET32(4, RW(16) + 564); rt_call(c, t); }
SET32(2, RW(17) + 1);
SET64(17, RD(2) & 0xffff);
SET64(2, RSD(17) < (s64)2);
if (RD(2) != RD(0)) { SET64(3, RD(17) & 0xffff); { POLL(); goto L_002FA83C; } }
wr32(c, (RW(16) + 968), RW(0));
SET32(4, RW(16) + 992);
wr32(c, (RW(16) + 972), RW(0));
wr32(c, (RW(16) + 976), RW(0));
SET64(31, 0x2fa8a4); wr32(c, (RW(16) + 980), RW(0)); JP_F_00306640(c);
SET64(4, (s64)(s32)0x530000);
SET32(4, RW(4) + -22408);
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2fa8bc); SET32(5, RW(16) + 992); rt_call(c, t); }
SET64(31, 0x2fa8c4); SET32(4, RW(0) + 24); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002FA8D4; }
SET64(31, 0x2fa8d4); SET64(4, RD(17) + RD(0)); JP_F_002E41B0(c);
L_002FA8D4:;
wr32(c, (RW(16) + 1264), RW(17));
SET64(5, rd16(c, (RW(16) + 844)));
SET64(31, 0x2fa8e4); SET64(4, RD(17) + RD(0)); JP_F_002E4060(c);
SET32(2, RW(0) + -1);
SET64(3, (s64)(s32)0x3f800000);
wr16(c, (RW(16) + 1268), (u16)RW(2));
SET64(2, (s64)(s32)0x3dcc0000);
wr32(c, (RW(16) + 1332), RW(3));
SET64(2, RD(2) | 0xcccd);
wr32(c, (RW(16) + 1336), RW(3));
wr32(c, (RW(16) + 1340), RW(2));
wr32(c, (RW(16) + 1348), RW(3));
wr32(c, (RW(16) + 1344), RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 680)));
if (RD(4) == RD(0)) { SET32(4, RW(0) + 108); goto L_002FA944; }
c->f[1].u = rd32(c, (RW(16) + 1348));
c->f[0].u = rd32(c, (RW(16) + 1332));
wr32(c, (RW(29) + 92), c->f[1].u);
wr32(c, (RW(29) + 80), c->f[0].u);
wr32(c, (RW(29) + 84), c->f[0].u);
wr32(c, (RW(29) + 88), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 188)));
{ u32 t = RW(25); SET64(31, 0x2fa940); SET32(5, RW(29) + 80); rt_call(c, t); }
SET32(4, RW(0) + 108);
L_002FA944:;
SET64(31, 0x2fa94c); wr16(c, (RW(16) + 1352), (u16)RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002FA95C; }
SET64(31, 0x2fa95c); SET64(4, RD(17) + RD(0)); JP_F_003617C0(c);
L_002FA95C:;
SET64(5, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2fa96c); wr32(c, (RW(16) + 1936), RW(17)); JP_F_0013A470(c);
wr32(c, (RW(16) + 1872), RW(0));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 1876), RW(0));
SET64(31, 0x2fa980); wr32(c, (RW(16) + 1880), RW(0)); JP_F_002FA2F0(c);
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002FA9A0(Ctx *c) { /* func_002FA9A0 */
ENTER(0x2fa9a0);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 672)));
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x2fa9c4); c->f[12].u = rd32(c, (RW(2) + -22384)); JP_F_00173B10(c);
SET64(2, (s32)rd32(c, (RW(16) + 668)));
c->f[12].u = rd32(c, (RW(16) + 588));
SET64(4, (s32)rd32(c, (RW(16) + 1264)));
SET64(6, (s32)rd32(c, (RW(16) + 680)));
SET64(31, 0x2fa9dc); SET32(5, RW(2) + 784); JP_F_002E3BC0(c);
SET64(3, (s32)rd32(c, (RW(16) + 680)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002FAA38; }
SET64(2, (s32)rd32(c, (RW(16) + 668)));
SET64(3, (s64)(s32)0x3f800000);
SET32(5, RW(29) + 48);
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0));
wr32(c, (RW(29) + 44), RW(3));
rd128(c, (RW(2) + 816) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(16) + 668)));
wr32(c, (RW(29) + 60), RW(3));
wr32(c, (RW(29) + 48), RW(0));
wr32(c, (RW(29) + 52), RW(0));
wr32(c, (RW(29) + 56), RW(0));
rd128(c, (RW(2) + 800) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[2]);
SET64(4, (s32)rd32(c, (RW(16) + 680)));
SET64(31, 0x2faa34); SET32(6, RW(29) + 32); JP_F_001649F0(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_002FAA38:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002FAA50(Ctx *c) { /* func_002FAA50 */
ENTER(0x2faa50);
SET64(2, rd16(c, (RW(4) + 846)));
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002FAA88; }
c->f[1].u = rd32(c, (RW(4) + 1884));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc;  if (t) goto L_002FAA84; }
SET32(2, RW(0) + 1); goto L_002FAA88;
L_002FAA84:;
SET64(2, RD(0) + RD(0));
L_002FAA88:;
 return;
}

void JP_F_002FAA90(Ctx *c) { /* func_002FAA90 */
ENTER(0x2faa90);
wr32(c, (RW(4) + 1872), RW(0));
wr32(c, (RW(4) + 1876), RW(0));
wr32(c, (RW(4) + 1880), RW(0));
wr32(c, (RW(4) + 1880), RW(5)); return;
}

void JP_F_002FAAB0(Ctx *c) { /* func_002FAAB0 */
ENTER(0x2faab0);
wr32(c, (RW(4) + 1872), RW(0));
wr32(c, (RW(4) + 1876), RW(0));
wr32(c, (RW(4) + 1880), RW(0));
wr32(c, (RW(4) + 1872), RW(5));
wr32(c, (RW(4) + 1876), RW(6)); return;
}

void JP_F_002FAAD0(Ctx *c) { /* func_002FAAD0 */
ENTER(0x2faad0);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x4c0000);
c->f[3].u = rd32(c, (RW(2) + -7720));
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(2, (s64)(s32)0x4c0000);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[1].u = rd32(c, (RW(2) + -7720));
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(0) + RD(0));
c->f[5].u = rd32(c, (RW(4) + 588));
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7712));
c->f[2].u = rd32(c, (RW(4) + 1312));
c->f[4].f = fpu(F(0) * F(1));
c->f[0].f = fpu(F(2) + F(5));
c->fcc = F(0) <= F(4);
{ int t = c->fcc; wr32(c, (RW(4) + 1312), c->f[0].u); if (t) goto L_002FAB2C; }
SET64(16, RD(0) + (s64)1); goto L_002FACF0;
L_002FAB2C:;
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7680));
c->f[2].u = rd32(c, (RW(17) + 588));
c->f[1].u = rd32(c, (RW(17) + 1316));
c->f[0].f = fpu(F(0) * F(3));
c->f[1].f = fpu(F(1) + F(2));
c->fcc = F(1) <= F(0);
{ int t = c->fcc; wr32(c, (RW(17) + 1316), c->f[1].u); if (t) goto L_002FAC00; }
c->f[0].f = fpu(F(1) - F(0));
SET64(2, (s64)(s32)0x3f000000);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(17) + 1316), c->f[0].u);
c->f[3].u = rd32(c, (RW(17) + 1312));
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu_div(F(3), F(4));
c->f[2].u = RW(3);
SET64(3, (s32)rd32(c, (RW(17) + 1872)));
c->f[0].f = fpu(F(2) - F(0));
{ int t = RD(3) == RD(0); c->f[20].f = fpu(c->facc + F(1) * F(0)); if (t) goto L_002FABD0; }
SET64(5, (s32)rd32(c, (RW(17) + 1876)));
if (RD(5) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 1880))); goto L_002FABD4; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30864)));
{ int t = RD(4) == RD(0);  if (t) goto L_002FABD0; }
SET64(2, (s64)(s32)0x42fe0000);
c->f[0].u = RW(2);
c->f[0].f = fpu(F(0) * F(20));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(6, (s32)c->f[0].u);
SET64(31, 0x2fabd0); SET32(7, RW(0) + 64); JP_F_001B7420(c);
L_002FABD0:;
SET64(5, (s32)rd32(c, (RW(17) + 1880)));
L_002FABD4:;
{ int t = RD(5) == RD(0);  if (t) goto L_002FAC00; }
SET64(2, (s64)(s32)0x42fe0000);
SET64(4, (s32)rd32(c, (RW(17) + 684)));
c->f[0].u = RW(2);
c->f[0].f = fpu(F(0) * F(20));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(6, (s32)c->f[0].u);
SET64(31, 0x2fac00); SET32(7, RW(0) + 64); JP_F_001B7420(c);
L_002FAC00:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
c->f[3].u = rd32(c, (RW(2) + -7720));
c->f[1].u = rd32(c, (RW(3) + -7704));
c->f[4].u = rd32(c, (RW(17) + 1312));
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7696));
c->f[2].f = fpu(F(1) * F(3));
c->fcc = F(4) < F(2);
{ int t = c->fcc; c->f[0].f = fpu(F(0) * F(3)); if (t) goto L_002FAC9C; }
c->fcc = F(4) < F(0);
{ int t = !c->fcc;  if (t) goto L_002FAC9C; }
c->f[1].f = fpu(F(4) - F(2));
SET64(18, (s32)rd32(c, (RW(17) + 676)));
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s32)rd32(c, (RW(18) + 8)));
c->f[0].f = fpu(F(0) - F(2));
SET32(4, RW(3) + 192);
c->f[1].f = fpu_div(F(1), F(0));
c->f[0].u = rd32(c, (RW(2) + -7688));
SET64(31, 0x2fac64); c->f[12].f = fpu(F(0) * F(1)); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2fac78);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2fac94); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) + RD(0)); goto L_002FACF4;
L_002FAC9C:;
c->fcc = F(4) < F(0);
{ int t = c->fcc;  if (t) goto L_002FACF0; }
SET64(2, (s64)(s32)0x4c0000);
SET64(18, (s32)rd32(c, (RW(17) + 676)));
c->f[12].u = rd32(c, (RW(2) + -7688));
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET64(31, 0x2facc0); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2facd4);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2facf0); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
L_002FACF0:;
SET64(2, RD(16) + RD(0));
L_002FACF4:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002FAD10(Ctx *c) { /* func_002FAD10 */
ENTER(0x2fad10);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 672)));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 48), RW(2));
wr32(c, (RW(29) + 52), RW(2));
wr32(c, (RW(29) + 56), RW(2));
wr32(c, (RW(29) + 60), RW(2));
rd128(c, (RW(29) + 48) & ~15u, &c->r[5]);
SET64(3, (s32)rd32(c, (RW(3) + 0)));
wr32(c, (RW(29) + 44), RW(0));
wr32(c, (RW(29) + 32), RW(2));
wr128(c, (RW(3) + 48) & ~15u, &c->r[5]);
SET64(3, (s32)rd32(c, (RW(4) + 672)));
wr32(c, (RW(29) + 36), RW(2));
wr32(c, (RW(29) + 40), RW(2));
SET64(5, (s32)rd32(c, (RW(3) + 0)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(5) + 32) & ~15u, &c->r[3]);
wr32(c, (RW(5) + 0), RW(0));
wr128(c, (RW(5) + 16) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(4) + 672)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2fad80); wr32(c, (RW(2) + 4), c->f[12].u); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 672))); goto L_002FAD94; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(16) + 672)));
L_002FAD94:;
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2fada4);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

static void JP_B_002FADC0(Ctx *c, u32 entry) { /* func_002FADC0 */
ENTER(entry);
switch (entry) { case 0x2fae5c: goto L_002FAE5C; case 0x2fae6c: goto L_002FAE6C; case 0x2fae7c: goto L_002FAE7C; case 0x2fae8c: goto L_002FAE8C; case 0x2fae9c: goto L_002FAE9C; case 0x2faffc: goto L_002FAFFC; case 0x2fb00c: goto L_002FB00C; case 0x2fb01c: goto L_002FB01C; }
L_002FADC0:;
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, (s32)rd32(c, (RW(28) + -29920)));
SET64(31, 0x2faddc); SET64(16, RD(4) + RD(0)); JP_F_002A7400(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 164))); goto L_002FADEC; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(17) + 164)));
L_002FADEC:;
SET64(31, 0x2fadf4); SET64(5, RD(2) + RD(0)); JP_F_002ADD30(c);
SET64(3, RD(0) < RD(2));
SET64(3, RD(3) ^ 0x1);
wr8(c, (RW(29) + 60), (u8)RW(3));
SET64(3, rd8(c, (RW(29) + 60)));
if (RD(3) != RD(0)) { wr8(c, (RW(16) + 721), (u8)RW(0)); goto L_002FAE30; }
SET64(31, 0x2fae14);  JP_F_002A7400(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -29920))); goto L_002FAE24; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
L_002FAE24:;
SET64(31, 0x2fae2c); SET64(5, RD(2) + RD(0)); JP_F_002ABF00(c);
wr8(c, (RW(16) + 721), (u8)RW(0));
L_002FAE30:;
SET64(3, rd16(c, (RW(16) + 0)));
SET64(1, RD(3) < (u64)(s64)8);
if (RD(1) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 1936))); goto L_002FB028; }
SET64(4, (s64)(s32)0x4c0000);
SET32(3, RW(3) << 2);
SET32(4, RW(4) + -9408);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x2fadc0: goto L_002FADC0; case 0x2fae5c: goto L_002FAE5C; case 0x2fae6c: goto L_002FAE6C; case 0x2fae7c: goto L_002FAE7C; case 0x2fae8c: goto L_002FAE8C; case 0x2fae9c: goto L_002FAE9C; case 0x2faffc: goto L_002FAFFC; case 0x2fb00c: goto L_002FB00C; case 0x2fb01c: goto L_002FB01C; default: rt_jump(c, t); return; } }
L_002FAE5C:;
SET64(31, 0x2fae64); SET64(4, RD(16) + RD(0)); JP_F_002F94B0(c);
 goto L_002FB024;
L_002FAE6C:;
SET64(31, 0x2fae74); SET64(4, RD(16) + RD(0)); JP_F_002F7A60(c);
 goto L_002FB024;
L_002FAE7C:;
SET64(31, 0x2fae84); SET64(4, RD(16) + RD(0)); JP_F_002F89D0(c);
 goto L_002FB024;
L_002FAE8C:;
SET64(31, 0x2fae94); SET64(4, RD(16) + RD(0)); JP_F_002F6DA0(c);
 goto L_002FB024;
L_002FAE9C:;
SET64(3, rd16(c, (RW(16) + 60)));
SET32(5, RW(0) + 1);
if (RD(3) == RD(5)) { SET64(4, RD(16) + RD(0)); goto L_002FAF4C; }
if (RD(3) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 676))); goto L_002FAEBC; }
 goto L_002FB024;
L_002FAEBC:;
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2faed4);  rt_call(c, t); }
SET64(31, 0x2faedc);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(2, (s64)(s32)0x42700000); goto L_002FAEF0; }
SET32(5, RW(5) + 672);
SET64(2, (s64)(s32)0x42700000);
L_002FAEF0:;
SET64(3, (s32)rd32(c, (RW(16) + 672)));
c->f[2].u = RW(2);
SET64(2, (s64)(s32)0x4c0000);
c->f[1].u = rd32(c, (RW(2) + -7672));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
c->f[1].f = fpu_div(F(2), F(1));
SET64(2, (s64)(s32)0x40000000);
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x2faf2c);  JP_F_00173F60(c);
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(2, rd16(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
SET32(2, RW(2) + 1);
{ u32 t = RW(25); SET64(31, 0x2faf48); SET64(5, RD(2) & 0xffff); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_002FAF4C:;
SET64(31, 0x2faf54);  JP_F_002FDEF0(c);
SET64(3, (s32)rd32(c, (RW(16) + 672)));
SET64(2, (s64)(s32)0x530000);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x2faf68); c->f[12].u = rd32(c, (RW(2) + -22384)); JP_F_00173B10(c);
SET64(3, (s32)rd32(c, (RW(16) + 672)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
c->f[1].u = rd32(c, (RW(3) + 48));
c->f[0].u = rd32(c, (RW(3) + 16));
c->fcc = F(1) == F(0);
if (!c->fcc) { SET64(3, RD(0) + RD(0)); goto L_002FAFCC; }
c->f[1].u = rd32(c, (RW(3) + 52));
c->f[0].u = rd32(c, (RW(3) + 20));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002FAFC8; }
c->f[1].u = rd32(c, (RW(3) + 56));
c->f[0].u = rd32(c, (RW(3) + 24));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002FAFC8; }
c->f[1].u = rd32(c, (RW(3) + 60));
c->f[0].u = rd32(c, (RW(3) + 28));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002FAFC8; }
SET64(3, RD(0) + (s64)1); goto L_002FAFCC;
L_002FAFC8:;
SET64(3, RD(0) + RD(0));
L_002FAFCC:;
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002FB024; }
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2faff4); SET32(5, RW(0) + 1); rt_call(c, t); }
 goto L_002FB024;
L_002FAFFC:;
SET64(31, 0x2fb004); SET64(4, RD(16) + RD(0)); JP_F_002F5700(c);
 goto L_002FB024;
L_002FB00C:;
SET64(31, 0x2fb014); SET64(4, RD(16) + RD(0)); JP_F_002F40C0(c);
 goto L_002FB024;
L_002FB01C:;
SET64(31, 0x2fb024); SET64(4, RD(16) + RD(0)); JP_F_002F1670(c);
L_002FB024:;
SET64(4, (s32)rd32(c, (RW(16) + 1936)));
L_002FB028:;
if (RD(4) == RD(0)) { SET64(3, rd8(c, (RW(29) + 60))); goto L_002FB04C; }
SET64(31, 0x2fb038);  JP_F_00361360(c);
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002FB048; }
wr8(c, (RW(16) + 721), (u8)RW(0));
L_002FB048:;
SET64(3, rd8(c, (RW(29) + 60)));
L_002FB04C:;
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002FB07C; }
SET64(31, 0x2fb05c);  JP_F_002A7400(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -29920))); goto L_002FB06C; }
SET32(2, RW(2) + 148);
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
L_002FB06C:;
SET64(5, RD(2) + RD(0));
SET64(31, 0x2fb078); SET64(6, RD(0) + RD(0)); JP_F_002ABF80(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_002FB07C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}
void JP_F_002FADC0(Ctx *c) { JP_B_002FADC0(c, 0x2fadc0); }
void JP_F_002FAE5C(Ctx *c) { JP_B_002FADC0(c, 0x2fae5c); }
void JP_F_002FAE6C(Ctx *c) { JP_B_002FADC0(c, 0x2fae6c); }
void JP_F_002FAE7C(Ctx *c) { JP_B_002FADC0(c, 0x2fae7c); }
void JP_F_002FAE8C(Ctx *c) { JP_B_002FADC0(c, 0x2fae8c); }
void JP_F_002FAE9C(Ctx *c) { JP_B_002FADC0(c, 0x2fae9c); }
void JP_F_002FAFFC(Ctx *c) { JP_B_002FADC0(c, 0x2faffc); }
void JP_F_002FB00C(Ctx *c) { JP_B_002FADC0(c, 0x2fb00c); }
void JP_F_002FB01C(Ctx *c) { JP_B_002FADC0(c, 0x2fb01c); }

void JP_F_002FB090(Ctx *c) { /* func_002FB090 */
ENTER(0x2fb090);
SET32(29, RW(29) + -112);
SET64(2, (s64)(s32)0x4c0000);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(19) + RD(0));
c->f[21].u = rd32(c, (RW(2) + -4792));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = c->f[12].u;
L_002FB0C8:;
SET64(3, RD(18) & 0xffff);
SET64(5, RD(0) + RD(0));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(19) + RW(2));
SET64(31, 0x2fb0f0); SET32(4, RW(2) + 864); JP_F_002F0D70(c);
SET64(1, RD(0) | 0x87b0);
SET32(17, RW(2) + RW(1));
SET64(31, 0x2fb100); SET64(4, RD(17) + RD(0)); JP_F_00323AE0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc;  if (t) goto L_002FB120; }
 goto L_002FB148;
L_002FB120:;
c->f[1].u = RW(0);
c->fcc = F(0) < F(1);
{ int t = !c->fcc;  if (t) goto L_002FB140; }
 goto L_002FB148;
L_002FB140:;
c->f[1].u = c->f[0].u;
L_002FB148:;
SET64(5, RD(18) & 0xffff);
wr32(c, (RW(29) + 108), c->f[1].u);
SET32(6, RW(29) + 108);
SET64(4, (s32)rd32(c, (RW(19) + 688)));
SET64(31, 0x2fb160); SET64(7, RD(0) + RD(0)); JP_F_003204F0(c);
SET64(31, 0x2fb168); SET64(4, RD(17) + RD(0)); JP_F_00323A40(c);
c->f[1].f = fpu_div(F(0), F(21));
SET64(3, (s64)(s32)0x40400000);
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->f[1].f = fpu(F(0) * F(1));
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_002FB1C0; }
L_002FB1A0:;
c->f[1].f = fpu(F(1) - F(0));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc;  if (t) { POLL(); goto L_002FB1A0; } }
L_002FB1C0:;
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_002FB1E0; }
 goto L_002FB208;
L_002FB1E0:;
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
{ int t = !c->fcc;  if (t) goto L_002FB200; }
 goto L_002FB208;
L_002FB200:;
c->f[0].u = c->f[1].u;
L_002FB208:;
SET64(5, RD(18) & 0xffff);
wr32(c, (RW(29) + 104), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(19) + 688)));
SET64(31, 0x2fb21c); SET32(6, RW(29) + 104); JP_F_00320130(c);
SET64(31, 0x2fb224); SET64(4, RD(17) + RD(0)); JP_F_003236A0(c);
SET64(4, (s32)rd32(c, (RW(19) + 688)));
SET64(6, RD(2) + RD(0));
SET64(31, 0x2fb234); SET64(5, RD(18) & 0xffff); JP_F_00320280(c);
SET64(3, (s32)rd32(c, (RW(16) + 968)));
SET64(2, (s64)(s32)0x10000);
SET64(4, (s32)rd32(c, (RW(19) + 688)));
SET32(2, RW(3) + RW(2));
SET64(6, rd16(c, (RW(2) + -30710)));
SET64(31, 0x2fb250); SET64(5, RD(18) & 0xffff); JP_F_0031F7D0(c);
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002FB0C8; } }
SET64(31, 0x2fb268); SET64(4, (s32)rd32(c, (RW(19) + 688))); JP_F_003204B0(c);
if (RD(2) == RD(0)) { SET64(2, rd16(c, (RW(19) + 846))); goto L_002FB2C4; }
c->f[2].u = rd32(c, (RW(19) + 1324));
c->f[1].u = RW(0);
c->fcc = F(2) <= F(1);
{ int t = c->fcc;  if (t) goto L_002FB2C0; }
c->f[0].u = rd32(c, (RW(19) + 588));
c->f[0].f = fpu(F(2) - F(0));
c->fcc = F(0) <= F(1);
{ int t = !c->fcc; wr32(c, (RW(19) + 1324), c->f[0].u); if (t) goto L_002FB2C0; }
wr32(c, (RW(19) + 1324), c->f[1].u);
SET64(31, 0x2fb2a8); SET64(4, (s32)rd32(c, (RW(19) + 688))); JP_F_003204D0(c);
SET64(4, (s32)rd32(c, (RW(19) + 688)));
SET64(31, 0x2fb2b4); SET64(5, RD(0) + RD(0)); JP_F_0031F600(c);
SET64(4, (s32)rd32(c, (RW(19) + 688)));
SET64(31, 0x2fb2c0); SET32(5, RW(0) + 1); JP_F_0031F600(c);
L_002FB2C0:;
SET64(2, rd16(c, (RW(19) + 846)));
L_002FB2C4:;
if (RD(2) != RD(0)) { c->f[1].u = rd32(c, (RW(19) + 1884)); goto L_002FB2D4; }
SET64(2, RD(0) | 0xffff); goto L_002FB318;
L_002FB2D4:;
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002FB2FC; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xffff); goto L_002FB314;
L_002FB2FC:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xffff);
L_002FB314:;
SET64(2, RD(3) & 0xffff);
L_002FB318:;
SET64(4, (s32)rd32(c, (RW(19) + 688)));
SET64(31, 0x2fb324); SET64(5, RD(2) & 0xffff); JP_F_0031F880(c);
SET64(4, (s32)rd32(c, (RW(19) + 688)));
SET64(31, 0x2fb330); c->f[12].u = c->f[20].u; JP_F_00320710(c);
SET64(31, rd64(c, (RW(29) + 80)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002FB360(Ctx *c) { /* func_002FB360 */
ENTER(0x2fb360);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 1936)));
if (RD(4) == RD(0)) { SET32(18, RW(0) + -1); goto L_002FB3A0; }
SET64(31, 0x2fb390);  JP_F_00361330(c);
SET64(3, RD(2) & 0xff);
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_002FB51C; }
SET32(18, RW(0) + -1);
L_002FB3A0:;
SET64(17, RD(0) + RD(0));
SET64(16, RD(19) + RD(0));
L_002FB3A8:;
SET64(31, 0x2fb3b0);  JP_F_00138DE0(c);
SET64(5, RD(17) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2fb3c0); SET64(5, RSD(5) >> 48); JP_F_0013E200(c);
SET64(3, RD(2) & 0xffff);
SET64(3, RD(3) & 0x8);
if (RD(3) == RD(0)) { SET32(17, RW(17) + 1); goto L_002FB440; }
SET64(3, (s32)rd32(c, (RW(16) + 968)));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + -30268)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x2fb3f0);  rt_call(c, t); }
SET64(3, RD(2) & 0xffff);
{ int t = RD(3) == RD(0);  if (t) goto L_002FB430; }
SET64(31, 0x2fb404); SET64(4, (s32)rd32(c, (RW(16) + 968))); JP_F_002EF6F0(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(3) + -30268)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x2fb420);  rt_call(c, t); }
SET64(4, RD(2) & 0xffff);
SET32(3, RW(0) + 1);
{ int t = RD(4) != RD(3);  if (t) goto L_002FB43C; }
L_002FB430:;
SET64(18, RD(17) << 48);
SET64(18, RSD(18) >> 48); goto L_002FB450;
L_002FB43C:;
SET32(17, RW(17) + 1);
L_002FB440:;
SET64(3, RD(17) < (u64)(s64)2);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002FB3A8; } }
L_002FB450:;
SET64(3, (s16)rd16(c, (RW(19) + 1268)));
SET64(3, ~(RD(3) | RD(0)));
SET64(3, RD(0) < RD(3));
if (RD(3) != RD(0)) { SET64(3, (s16)rd16(c, (RW(19) + 1268))); goto L_002FB4C0; }
SET64(4, RD(18) << 48);
SET32(3, RW(0) + -1);
SET64(4, RSD(4) >> 48);
{ int t = RD(4) == RD(3);  if (t) goto L_002FB518; }
SET64(4, (s64)(s32)0x530000);
wr16(c, (RW(19) + 1268), (u16)RW(18));
SET32(4, RW(4) + -22408);
c->f[0].u = rd32(c, (RW(4) + 20));
c->f[1].u = RW(0);
c->fcc = F(0) == F(1);
{ int t = c->fcc;  if (t) goto L_002FB518; }
c->f[0].u = rd32(c, (RW(4) + 24));
wr8(c, (RW(4) + 32), (u8)RW(0));
wr32(c, (RW(4) + 40), c->f[1].u);
wr32(c, (RW(4) + 36), c->f[1].u);
c->f[12].f = fpu(F(0) * F(1));
SET64(31, 0x2fb4b8); wr32(c, (RW(4) + 20), c->f[1].u); JP_F_00141D40(c);
 goto L_002FB518;
L_002FB4C0:;
SET64(4, RD(18) << 48);
SET64(4, RSD(4) >> 48);
{ int t = RD(4) != RD(3);  if (t) goto L_002FB518; }
SET32(3, RW(0) + -1);
SET64(4, (s64)(s32)0x530000);
wr16(c, (RW(19) + 1268), (u16)RW(3));
SET32(4, RW(4) + -22408);
c->f[0].u = rd32(c, (RW(4) + 20));
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = RW(3);
c->fcc = F(0) == F(1);
{ int t = c->fcc;  if (t) goto L_002FB518; }
c->f[0].u = rd32(c, (RW(4) + 24));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 20), c->f[1].u);
wr32(c, (RW(4) + 36), RW(0));
wr8(c, (RW(4) + 32), (u8)RW(0));
SET64(31, 0x2fb518); c->f[12].f = fpu(F(0) * F(1)); JP_F_00141D40(c);
L_002FB518:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002FB51C:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002FB540(Ctx *c) { /* func_002FB540 */
ENTER(0x2fb540);
SET32(29, RW(29) + -976);
SET64(2, (s64)(s32)0x4c0000);
wr64(c, (RW(29) + 192), RD(31));
c->f[1].u = rd32(c, (RW(2) + -7760));
wr128(c, (RW(29) + 176) & ~15u, &c->r[30]);
SET64(3, (s64)(s32)0x4c0000);
wr128(c, (RW(29) + 160) & ~15u, &c->r[23]);
SET32(30, RW(29) + 832);
wr128(c, (RW(29) + 144) & ~15u, &c->r[22]);
SET64(2, (s64)(s32)0x4c0000);
wr128(c, (RW(29) + 128) & ~15u, &c->r[21]);
c->f[0].u = rd32(c, (RW(2) + -7776));
wr128(c, (RW(29) + 112) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[19]);
SET64(4, (s64)(s32)0x4c0000);
wr128(c, (RW(29) + 80) & ~15u, &c->r[18]);
SET64(2, (s64)(s32)0x4c0000);
wr128(c, (RW(29) + 64) & ~15u, &c->r[17]);
SET64(18, (s64)(s32)0x4c0000);
wr128(c, (RW(29) + 48) & ~15u, &c->r[16]);
SET64(20, RD(0) + RD(0));
wr32(c, (RW(29) + 36), c->f[29].u);
wr32(c, (RW(29) + 960), RW(6));
wr32(c, (RW(29) + 32), c->f[28].u);
wr32(c, (RW(29) + 964), RW(7));
wr32(c, (RW(29) + 28), c->f[27].u);
wr32(c, (RW(29) + 968), RW(8));
wr32(c, (RW(29) + 24), c->f[26].u);
wr32(c, (RW(29) + 220), RW(5));
wr32(c, (RW(29) + 20), c->f[25].u);
SET32(19, RW(29) + 416);
wr32(c, (RW(29) + 16), c->f[24].u);
SET32(22, RW(29) + 640);
c->f[27].u = c->f[12].u;
SET32(23, RW(29) + 352);
c->f[25].u = rd32(c, (RW(3) + -7752));
SET32(18, RW(18) + -7816);
c->f[24].f = fpu(F(27) * F(0));
SET32(17, RW(29) + 960);
SET64(3, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
c->f[0].u = rd32(c, (RW(3) + -7792));
c->f[26].f = fpu(F(27) * F(1));
c->f[22].f = fpu(F(27) * F(0));
c->f[23].u = rd32(c, (RW(4) + -7768));
c->f[21].u = rd32(c, (RW(2) + -7784));
wr32(c, (RW(29) + 0), c->f[20].u);
L_002FB608:;
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(29) + 416);
wr32(c, (RW(29) + 628), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 624), RW(0));
wr32(c, (RW(29) + 636), RW(2));
SET64(31, 0x2fb628); wr32(c, (RW(29) + 632), RW(0)); JP_F_002AF080(c);
SET64(6, (s32)rd32(c, (RW(29) + 220)));
SET32(4, RW(29) + 416);
SET64(5, RD(21) + RD(0));
SET64(31, 0x2fb63c); SET32(7, RW(29) + 624); JP_F_00147DE0(c);
SET64(31, 0x2fb644); SET32(4, RW(29) + 640); JP_F_002AF080(c);
rd128(c, (RW(19) + 0) & ~15u, &c->r[5]);
SET32(4, RW(29) + 288);
rd128(c, (RW(19) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(19) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(22) + 0) & ~15u, &c->r[5]);
wr128(c, (RW(22) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(22) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(19) + 48) & ~15u, &c->r[2]);
SET64(31, 0x2fb66c); wr128(c, (RW(22) + 48) & ~15u, &c->r[2]); JP_F_0013AEA0(c);
SET64(5, (s64)(s32)0x4c0000);
SET32(4, RW(29) + 288);
SET64(31, 0x2fb67c); SET32(5, RW(5) + -7800); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2fb688); SET32(4, RW(29) + 704); JP_F_0013ADA0(c);
SET64(2, (s64)(s32)0x40490000);
SET32(4, RW(29) + 224);
SET64(2, RD(2) | 0xfdb);
c->f[2].u = rd32(c, (RW(18) + 0));
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(27) * F(2));
SET64(31, 0x2fb6b4); wr32(c, (RW(29) + 972), c->f[0].u); JP_F_0013AEA0(c);
SET32(4, RW(29) + 224);
SET64(31, 0x2fb6c0); SET32(5, RW(29) + 972); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2fb6cc); SET32(4, RW(29) + 768); JP_F_0013ADA0(c);
SET32(4, RW(29) + 352);
SET32(5, RW(29) + 768);
SET64(31, 0x2fb6dc); SET32(6, RW(29) + 704); JP_F_002AEAE0(c);
SET64(31, 0x2fb6e4); SET32(4, RW(29) + 832); JP_F_002AF080(c);
rd128(c, (RW(23) + 0) & ~15u, &c->r[7]);
SET32(4, RW(29) + 544);
rd128(c, (RW(23) + 16) & ~15u, &c->r[3]);
SET32(5, RW(29) + 832);
rd128(c, (RW(23) + 32) & ~15u, &c->r[2]);
SET32(6, RW(29) + 640);
wr128(c, (RW(30) + 0) & ~15u, &c->r[7]);
wr128(c, (RW(30) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(30) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(23) + 48) & ~15u, &c->r[2]);
SET64(31, 0x2fb714); wr128(c, (RW(30) + 48) & ~15u, &c->r[2]); JP_F_002AEAE0(c);
SET64(31, 0x2fb71c); SET32(4, RW(29) + 896); JP_F_002AF080(c);
SET32(2, RW(29) + 544);
rd128(c, (RW(2) + 0) & ~15u, &c->r[5]);
rd128(c, (RW(2) + 16) & ~15u, &c->r[4]);
rd128(c, (RW(2) + 32) & ~15u, &c->r[3]);
SET32(2, RW(29) + 896);
wr128(c, (RW(2) + 0) & ~15u, &c->r[5]);
wr128(c, (RW(2) + 16) & ~15u, &c->r[4]);
wr128(c, (RW(2) + 32) & ~15u, &c->r[3]);
SET32(2, RW(29) + 544);
rd128(c, (RW(2) + 48) & ~15u, &c->r[3]);
SET32(2, RW(29) + 896);
wr128(c, (RW(2) + 48) & ~15u, &c->r[3]);
{ int t = RSD(20) < 0; c->f[1].u = rd32(c, (RW(21) + 8)); if (t) goto L_002FB760; }
c->f[0].u = RW(20);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002FB77C;
L_002FB760:;
SET32(3, RW(20) >> 1);
SET64(2, RD(20) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002FB77C:;
c->f[2].f = fpu(F(1) + F(0));
{ int t = RSD(20) < 0; c->f[1].u = rd32(c, (RW(21) + 4)); if (t) goto L_002FB794; }
c->f[0].u = RW(20);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002FB7B0;
L_002FB794:;
SET32(3, RW(20) >> 1);
SET64(2, RD(20) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002FB7B0:;
c->f[3].f = fpu(F(1) + F(0));
{ int t = RSD(20) < 0; c->f[1].u = rd32(c, (RW(21) + 0)); if (t) goto L_002FB7C8; }
c->f[0].u = RW(20);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002FB7E4;
L_002FB7C8:;
SET32(3, RW(20) >> 1);
SET64(2, RD(20) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002FB7E4:;
c->f[0].f = fpu(F(1) + F(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 620), RW(2));
wr32(c, (RW(29) + 612), c->f[3].u);
wr32(c, (RW(29) + 616), c->f[2].u);
wr32(c, (RW(29) + 608), c->f[0].u);
rd128(c, (RW(29) + 608) & ~15u, &c->r[2]);
c->f[12].u = c->f[26].u;
SET64(31, 0x2fb80c); wr128(c, (RW(29) + 944) & ~15u, &c->r[2]); JP_F_0011F6F0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = RW(2);
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(2));
c->f[12].u = c->f[24].u;
SET64(31, 0x2fb82c); c->f[20].f = fpu(c->facc + F(25) * F(0)); JP_F_0011F6F0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = RW(2);
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(2));
c->f[12].u = c->f[22].u;
SET64(31, 0x2fb84c); c->f[29].f = fpu(c->facc + F(23) * F(0)); JP_F_0011F450(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 480);
c->f[2].u = RW(2);
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(2));
SET64(31, 0x2fb86c); c->f[28].f = fpu(c->facc + F(21) * F(0)); JP_F_002AF080(c);
SET64(31, 0x2fb874); SET32(4, RW(29) + 480); JP_F_002AF080(c);
SET32(4, RW(29) + 896);
SET32(6, RW(29) + 480);
SET64(5, RD(4) + RD(0));
wr32(c, (RW(29) + 480), c->f[28].u);
wr32(c, (RW(29) + 500), c->f[29].u);
SET64(31, 0x2fb890); wr32(c, (RW(29) + 520), c->f[20].u); JP_F_00106578(c);
SET64(16, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2fb89c); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_002A4D70(c);
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET32(20, RW(20) + 1);
rd128(c, (RW(29) + 896) & ~15u, &c->r[4]);
SET64(3, RD(20) < (u64)(s64)3);
SET32(18, RW(18) + 4);
SET32(17, RW(17) + 4);
wr128(c, (RW(5) + 0) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 912) & ~15u, &c->r[4]);
wr128(c, (RW(5) + 16) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 928) & ~15u, &c->r[4]);
wr128(c, (RW(5) + 32) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 944) & ~15u, &c->r[4]);
{ int t = RD(3) != RD(0); wr128(c, (RW(5) + 48) & ~15u, &c->r[4]); if (t) { POLL(); goto L_002FB608; } }
SET64(31, rd64(c, (RW(29) + 192)));
c->f[29].u = rd32(c, (RW(29) + 36));
rd128(c, (RW(29) + 176) & ~15u, &c->r[30]);
c->f[28].u = rd32(c, (RW(29) + 32));
rd128(c, (RW(29) + 160) & ~15u, &c->r[23]);
c->f[27].u = rd32(c, (RW(29) + 28));
rd128(c, (RW(29) + 144) & ~15u, &c->r[22]);
c->f[26].u = rd32(c, (RW(29) + 24));
rd128(c, (RW(29) + 128) & ~15u, &c->r[21]);
c->f[25].u = rd32(c, (RW(29) + 20));
rd128(c, (RW(29) + 112) & ~15u, &c->r[20]);
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 96) & ~15u, &c->r[19]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 80) & ~15u, &c->r[18]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 64) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 976); return;
}

void JP_F_002FB930(Ctx *c) { /* func_002FB930 */
ENTER(0x2fb930);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[20].u = c->f[12].u;
SET64(6, (s32)rd32(c, (RW(16) + 1500)));
c->f[12].u = rd32(c, (RW(4) + 1524));
SET64(7, (s32)rd32(c, (RW(16) + 1504)));
SET64(8, (s32)rd32(c, (RW(16) + 1508)));
SET32(5, RW(16) + 1232);
SET64(31, 0x2fb964); SET32(4, RW(16) + 1216); JP_F_002FB540(c);
c->f[0].u = rd32(c, (RW(16) + 1524));
c->f[0].f = fpu(F(0) + F(20));
wr32(c, (RW(16) + 1524), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002FB990(Ctx *c) { /* func_002FB990 */
ENTER(0x2fb990);
SET32(29, RW(29) + -160);
SET32(3, RW(0) + 30);
wr64(c, (RW(29) + 112), RD(31));
SET64(5, RD(0) + RD(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(4, rd16(c, (RW(4) + 1352)));
{ int t = RD(4) == RD(3); c->f[20].u = c->f[12].u; if (t) goto L_002FBD38; }
SET32(3, RW(0) + 20);
if (RD(4) == RD(3)) { SET64(5, RD(0) + (s64)1); goto L_002FBD38; }
SET32(3, RW(0) + 10);
if (RD(4) == RD(3)) { SET64(19, RD(0) + RD(0)); goto L_002FBAEC; }
if (RD(4) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 1372))); goto L_002FB9F8; }
SET64(31, rd64(c, (RW(29) + 112))); goto L_002FC028;
L_002FB9F8:;
SET32(4, RW(16) + 1356);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2fba08); SET32(5, RW(0) + 7); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1392)));
SET32(4, RW(16) + 1376);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2fba1c); SET32(5, RW(0) + 8); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1412)));
SET32(4, RW(16) + 1396);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2fba30); SET32(5, RW(0) + 9); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1432)));
SET32(4, RW(16) + 1416);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2fba44); SET32(5, RW(0) + 10); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1452)));
SET32(4, RW(16) + 1436);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2fba58); SET32(5, RW(0) + 11); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1472)));
SET32(4, RW(16) + 1456);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2fba6c); SET32(5, RW(0) + 12); rt_call(c, t); }
SET64(19, RD(0) + RD(0));
SET64(18, RD(16) + RD(0));
SET64(17, RD(16) + RD(0));
L_002FBA78:;
SET64(25, (s32)rd32(c, (RW(18) + 1372)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2fba88); SET32(4, RW(18) + 1356); rt_call(c, t); }
SET64(3, RD(19) & 0x1);
if (RD(3) != RD(0)) { SET64(4, RD(2) + RD(0)); goto L_002FBAA4; }
SET64(31, 0x2fba9c); SET64(4, RD(2) + RD(0)); JP_F_00100320(c);
wr32(c, (RW(17) + 1476), RW(2)); goto L_002FBAB0;
L_002FBAA4:;
SET64(31, 0x2fbaac);  JP_F_00100530(c);
wr32(c, (RW(17) + 1476), RW(2));
L_002FBAB0:;
SET32(4, RW(18) + 1356);
SET64(25, (s32)rd32(c, (RW(18) + 1372)));
SET64(5, RD(2) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2fbacc); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 20);
SET64(3, RD(19) < (u64)(s64)6);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002FBA78; } }
SET32(3, RW(0) + 10);
wr16(c, (RW(16) + 1352), (u16)RW(3)); goto L_002FC024;
L_002FBAEC:;
SET64(18, RD(0) + RD(0));
SET64(17, RD(16) + RD(0));
L_002FBAF4:;
SET64(25, (s32)rd32(c, (RW(17) + 1372)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2fbb04); SET32(4, RW(17) + 1356); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002FBB18; }
SET32(3, RW(19) + 1);
SET64(19, RD(3) & 0xffff);
L_002FBB18:;
SET32(18, RW(18) + 1);
SET64(3, RD(18) < (u64)(s64)6);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 20); if (t) { POLL(); goto L_002FBAF4; } }
SET64(3, RD(19) & 0xffff);
{ int t = RD(3) != RD(0);  if (t) goto L_002FC024; }
SET64(19, RD(0) + RD(0));
SET64(18, RD(16) + RD(0));
SET64(17, RD(16) + RD(0));
L_002FBB40:;
SET64(21, (s32)rd32(c, (RW(18) + 1476)));
SET64(31, 0x2fbb4c); SET64(4, RD(21) + RD(0)); JP_F_001400B0(c);
SET64(31, 0x2fbb54); SET32(4, RW(0) + 768); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002FBB68; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x2fbb68); SET32(5, RW(0) + 1); JP_F_001518B0(c);
L_002FBB68:;
wr32(c, (RW(17) + 1500), RW(20));
SET64(25, (s32)rd32(c, (RW(20) + 12)));
SET64(5, RD(21) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2fbb88); SET32(7, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 1500)));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 256)));
wr32(c, (RW(2) + 4), RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 1500)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2fbbb4); SET32(5, RW(0) + 128); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 1500)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x2fbbcc); SET64(5, RD(0) | 0x8002); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 1500)));
SET64(5, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2fbbe0); SET32(5, RW(5) + 7024); JP_F_001CC2E0(c);
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 8);
SET64(2, RD(19) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002FBB40; } }
SET64(17, RD(0) + RD(0));
SET64(19, RD(16) + RD(0));
SET64(18, RD(16) + RD(0));
L_002FBC00:;
SET64(31, 0x2fbc08); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002FBC18; }
SET64(31, 0x2fbc18); SET64(4, RD(20) + RD(0)); JP_F_00150480(c);
L_002FBC18:;
wr32(c, (RW(19) + 1512), RW(20));
SET64(5, (s32)rd32(c, (RW(18) + 1480)));
SET64(4, RD(20) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 716)));
SET32(7, RW(0) + -1);
SET64(31, 0x2fbc34); SET64(8, RD(0) + RD(0)); JP_F_0014F9B0(c);
SET64(2, (s32)rd32(c, (RW(19) + 1500)));
SET64(5, (s32)rd32(c, (RW(19) + 1512)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2fbc50); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET32(17, RW(17) + 1);
SET32(19, RW(19) + 4);
SET64(2, RD(17) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 8); if (t) { POLL(); goto L_002FBC00; } }
SET64(18, RD(0) + RD(0));
SET64(17, RD(16) + RD(0));
L_002FBC6C:;
SET64(31, 0x2fbc74); SET64(4, (s32)rd32(c, (RW(17) + 1476))); JP_F_00100430(c);
SET32(18, RW(18) + 1);
wr32(c, (RW(17) + 1476), RW(0));
SET64(2, RD(18) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 8); if (t) { POLL(); goto L_002FBC6C; } }
SET64(18, RD(0) + RD(0));
SET64(17, RD(16) + RD(0));
L_002FBC90:;
SET64(31, 0x2fbc98); SET32(4, RW(17) + 1356); JP_F_001580E0(c);
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 20);
SET64(3, RD(18) < (u64)(s64)6);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002FBC90; } }
SET32(3, RW(0) + 20);
SET64(19, RD(0) + RD(0));
wr16(c, (RW(16) + 1352), (u16)RW(3));
L_002FBCB8:;
SET64(3, (s32)rd32(c, (RW(16) + 1500)));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(3, rd16(c, (RW(4) + 264)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_002FBD20; }
SET64(17, RD(0) + RD(0));
L_002FBCD0:;
SET64(3, (s32)rd32(c, (RW(4) + 272)));
SET32(3, RW(3) + RW(17));
SET64(20, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(20) == RD(0);  if (t) goto L_002FBD00; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x2fbcf0); SET32(5, RW(0) + 64); JP_F_00154750(c);
SET64(31, 0x2fbcf8); SET32(4, RW(20) + 144); JP_F_001EC500(c);
SET64(31, 0x2fbd00); SET32(4, RW(20) + 240); JP_F_001EC1C0(c);
L_002FBD00:;
SET64(3, (s32)rd32(c, (RW(16) + 1500)));
SET32(18, RW(18) + 1);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(3, rd16(c, (RW(4) + 264)));
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002FBCD0; } }
L_002FBD20:;
SET32(19, RW(19) + 1);
SET64(3, RD(19) < (u64)(s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002FBCB8; } }
 goto L_002FC024;
L_002FBD38:;
SET64(3, rd16(c, (RW(16) + 0)));
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { SET64(2, RD(5) & 0xff); goto L_002FBD50; }
SET64(5, RD(0) + (s64)1);
SET64(2, RD(5) & 0xff);
L_002FBD50:;
{ int t = RD(2) != RD(0);  if (t) goto L_002FBD78; }
SET64(2, (s64)(s32)0x4c0000);
c->f[1].u = rd32(c, (RW(16) + 1348));
c->f[0].u = RW(0);
c->f[2].u = rd32(c, (RW(2) + -7840));
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc - F(2) * F(20));
wr32(c, (RW(16) + 1348), c->f[0].u); goto L_002FBD94;
L_002FBD78:;
SET64(2, (s64)(s32)0x4c0000);
c->f[1].u = rd32(c, (RW(16) + 1348));
c->f[0].u = RW(0);
c->f[2].u = rd32(c, (RW(2) + -7832));
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(2) * F(20));
wr32(c, (RW(16) + 1348), c->f[0].u);
L_002FBD94:;
c->f[1].u = rd32(c, (RW(16) + 1348));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_002FBE34; }
wr32(c, (RW(16) + 1348), c->f[0].u);
SET64(18, RD(0) + RD(0));
SET64(17, RD(16) + RD(0));
L_002FBDBC:;
SET64(2, (s32)rd32(c, (RW(17) + 1500)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2fbdd8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(2));
wr32(c, (RW(29) + 148), RW(2));
wr32(c, (RW(29) + 152), RW(2));
wr32(c, (RW(29) + 156), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 1500)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2fbe00); SET32(5, RW(29) + 144); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2fbe1c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(18, RW(18) + 1);
SET64(3, RD(18) < (u64)(s64)3);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002FBDBC; } }
SET64(4, rd16(c, (RW(16) + 1352))); goto L_002FBF48;
L_002FBE34:;
SET64(2, (s64)(s32)0x4c0000);
c->f[1].u = rd32(c, (RW(16) + 1524));
c->f[0].u = rd32(c, (RW(2) + -7744));
SET64(31, 0x2fbe48); c->f[12].f = fpu(F(1) * F(0)); JP_F_0011F6F0(c);
SET64(2, (s64)(s32)0x4c0000);
c->f[2].u = rd32(c, (RW(2) + -7736));
c->f[3].u = c->f[0].u & 0x7FFFFFFFu;
c->f[0].u = RW(0);
SET64(2, (s64)(s32)0x4c0000);
c->f[1].u = rd32(c, (RW(2) + -7728));
c->facc = fpu(F(0) + F(1));
c->f[21].f = fpu(c->facc + F(2) * F(3));
c->fcc = F(21) == F(0);
if (c->fcc) { SET64(18, RD(0) + RD(0)); goto L_002FBEBC; }
SET64(2, (s32)rd32(c, (RW(16) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2fbe90); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(16) + 676)));
c->f[12].u = c->f[21].u;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x2fbea4); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2fbeb8);  rt_call(c, t); }
SET64(18, RD(0) + RD(0));
L_002FBEBC:;
SET64(17, RD(16) + RD(0));
L_002FBEC0:;
SET64(2, (s32)rd32(c, (RW(17) + 1500)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2fbedc); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(16) + 1348));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(29) + 128), RW(2));
wr32(c, (RW(29) + 132), RW(2));
wr32(c, (RW(29) + 136), RW(2));
wr32(c, (RW(29) + 140), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(17) + 1500)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2fbf14); SET32(5, RW(29) + 128); rt_call(c, t); }
SET32(18, RW(18) + 1);
SET64(3, RD(18) < (u64)(s64)3);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002FBEC0; } }
SET64(3, (s64)(s32)0x4c0000);
SET64(4, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(3) + -7824));
c->f[1].u = rd32(c, (RW(16) + 1348));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; c->f[2].u = rd32(c, (RW(4) + -7824)); if (t) goto L_002FBF44; }
wr32(c, (RW(16) + 1348), c->f[2].u);
L_002FBF44:;
SET64(4, rd16(c, (RW(16) + 1352)));
L_002FBF48:;
SET32(3, RW(0) + 30);
if (RD(4) != RD(3)) { c->f[1].u = rd32(c, (RW(16) + 1348)); goto L_002FC000; }
SET32(4, RW(16) + 864);
SET64(31, 0x2fbf60); SET64(5, RD(0) + RD(0)); JP_F_002F0D30(c);
SET64(31, 0x2fbf68); SET64(4, RD(2) + RD(0)); JP_F_002EE600(c);
SET32(3, RW(0) + 26);
if (RD(2) == RD(3)) { SET64(3, RD(0) + (s64)1); goto L_002FBFE8; }
SET32(4, RW(16) + 916);
SET64(31, 0x2fbf80); SET64(5, RD(0) + RD(0)); JP_F_002F0D30(c);
SET64(31, 0x2fbf88); SET64(4, RD(2) + RD(0)); JP_F_002EE600(c);
SET32(3, RW(0) + 26);
{ int t = RD(2) == RD(3);  if (t) goto L_002FBFE4; }
SET32(4, RW(16) + 864);
SET64(31, 0x2fbfa0); SET64(5, RD(0) + RD(0)); JP_F_002F0D30(c);
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2fbfac); SET32(4, RW(2) + RW(1)); JP_F_003238B0(c);
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002FBFE4; }
SET32(4, RW(16) + 916);
SET64(31, 0x2fbfc4); SET64(5, RD(0) + RD(0)); JP_F_002F0D30(c);
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2fbfd0); SET32(4, RW(2) + RW(1)); JP_F_003238B0(c);
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002FBFE4; }
SET64(3, RD(0) + RD(0)); goto L_002FBFE8;
L_002FBFE4:;
SET64(3, RD(0) + (s64)1);
L_002FBFE8:;
SET64(3, RD(3) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002FBFFC; }
SET32(3, RW(0) + 20);
wr16(c, (RW(16) + 1352), (u16)RW(3));
L_002FBFFC:;
c->f[1].u = rd32(c, (RW(16) + 1348));
L_002FC000:;
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->fcc = F(0) == F(1);
{ int t = c->fcc;  if (t) goto L_002FC024; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2fc024); c->f[12].u = c->f[20].u; JP_F_002FB930(c);
L_002FC024:;
SET64(31, rd64(c, (RW(29) + 112)));
L_002FC028:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_002FC050(Ctx *c) { /* func_002FC050 */
ENTER(0x2fc050);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_002FC070:;
SET64(2, (s32)rd32(c, (RW(16) + 1500)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2fc08c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002FC070; } }
SET64(2, (s32)rd32(c, (RW(18) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2fc0b8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002FC0D0(Ctx *c) { /* func_002FC0D0 */
ENTER(0x2fc0d0);
SET32(29, RW(29) + -80);
SET32(2, RW(0) + 30);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr16(c, (RW(4) + 1352), (u16)RW(2));
SET64(16, RD(0) + RD(0));
SET64(18, RD(17) + RD(0));
wr32(c, (RW(4) + 1524), RW(0));
L_002FC0FC:;
SET64(2, (s32)rd32(c, (RW(18) + 1500)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2fc118); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(16, RW(16) + 1);
SET64(2, RD(16) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_002FC0FC; } }
SET64(2, (s32)rd32(c, (RW(17) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2fc144); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(16, RD(0) + RD(0));
L_002FC148:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 64), RW(2));
wr32(c, (RW(29) + 68), RW(2));
wr32(c, (RW(29) + 72), RW(2));
wr32(c, (RW(29) + 76), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 1500)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2fc170); SET32(5, RW(29) + 64); rt_call(c, t); }
SET32(16, RW(16) + 1);
SET64(3, RD(16) < (u64)(s64)3);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002FC148; } }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002FC1A0(Ctx *c) { /* func_002FC1A0 */
ENTER(0x2fc1a0);
SET64(5, rd16(c, (RW(4) + 1352)));
SET32(3, RW(0) + 20);
{ int t = RD(5) != RD(3);  if (t) goto L_002FC1BC; }
SET32(3, RW(0) + 30);
wr16(c, (RW(4) + 1352), (u16)RW(3));
wr32(c, (RW(4) + 1524), RW(0));
L_002FC1BC:;
 return;
}

void JP_F_002FC1D0(Ctx *c) { /* func_002FC1D0 */
ENTER(0x2fc1d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(17, RD(16) + RD(0));
L_002FC1F0:;
SET64(2, (s32)rd32(c, (RW(17) + 1500)));
SET64(5, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2fc204); SET32(5, RW(5) + 7024); JP_F_001CC2C0(c);
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002FC1F0; } }
SET64(18, RD(0) + RD(0));
SET64(17, RD(16) + RD(0));
L_002FC21C:;
SET64(31, 0x2fc224); SET64(4, (s32)rd32(c, (RW(17) + 1476))); JP_F_00100430(c);
SET32(18, RW(18) + 1);
wr32(c, (RW(17) + 1476), RW(0));
SET64(3, RD(18) < (u64)(s64)6);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002FC21C; } }
SET64(17, RD(0) + RD(0));
L_002FC23C:;
SET64(4, (s32)rd32(c, (RW(16) + 1500)));
{ int t = RD(4) == RD(0);  if (t) goto L_002FC258; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2fc258); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002FC258:;
wr32(c, (RW(16) + 1500), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 1512)));
{ int t = RD(4) == RD(0);  if (t) goto L_002FC278; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2fc278); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002FC278:;
SET32(17, RW(17) + 1);
wr32(c, (RW(16) + 1512), RW(0));
SET64(3, RD(17) < (u64)(s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002FC23C; } }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002FC2B0(Ctx *c) { /* func_002FC2B0 */
ENTER(0x2fc2b0);
wr32(c, (RW(4) + 1340), c->f[12].u); return;
}

void JP_F_002FC2C0(Ctx *c) { /* func_002FC2C0 */
ENTER(0x2fc2c0);
wr32(c, (RW(4) + 1336), c->f[12].u); return;
}

void JP_F_002FC2D0(Ctx *c) { /* func_002FC2D0 */
ENTER(0x2fc2d0);
SET32(29, RW(29) + -960);
SET64(2, (s64)(s32)0x3dcc0000);
wr64(c, (RW(29) + 128), RD(31));
SET64(2, RD(2) | 0xcccd);
wr128(c, (RW(29) + 112) & ~15u, &c->r[21]);
c->f[0].u = RW(2);
wr128(c, (RW(29) + 96) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[1].u = rd32(c, (RW(4) + 588));
SET64(31, 0x2fc320); c->f[12].f = fpu(F(0) * F(1)); JP_F_002FCB90(c);
SET32(4, RW(20) + 864);
SET64(31, 0x2fc32c); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(19, RD(2) + RD(0));
SET32(4, RW(20) + 916);
SET64(31, 0x2fc33c); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(19) + RW(3));
SET64(3, rd8(c, (RW(3) + -30416)));
{ int t = RD(3) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002FCA88; }
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(18) + RW(3));
SET64(3, rd8(c, (RW(3) + -30416)));
if (RD(3) == RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002FCA8C; }
SET64(2, (s64)(s32)0x10000);
SET64(4, (s32)rd32(c, (RW(19) + 44)));
SET32(2, RW(19) + RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 44)));
c->f[23].u = rd32(c, (RW(2) + -30412));
SET64(5, RD(0) + RD(0));
SET32(17, RW(4) + 48);
SET32(16, RW(3) + 48);
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(18) + RW(2));
c->f[22].u = rd32(c, (RW(2) + -30412));
SET64(31, 0x2fc398); SET32(4, RW(20) + 864); JP_F_002F0D30(c);
SET64(21, RD(2) + RD(0));
SET32(4, RW(20) + 916);
SET64(31, 0x2fc3a8); SET64(5, RD(0) + RD(0)); JP_F_002F0D30(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(21) + RW(3));
SET64(3, rd8(c, (RW(3) + -30848)));
SET64(3, RD(3) ^ RD(0));
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) == RD(0);  if (t) goto L_002FC3D8; }
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, rd8(c, (RW(3) + -30848)));
SET64(3, RD(2) ^ RD(0));
SET64(3, RD(3) < (u64)(s64)1);
L_002FC3D8:;
if (RD(3) == RD(0)) { SET64(2, (s64)(s32)0x3f800000); goto L_002FC964; }
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
SET64(5, (s64)(s32)0x3f800000);
rd128(c, (RW(17) + 0) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(28) + -30944));
wr32(c, (RW(29) + 400), RW(0));
SET32(4, RW(29) + 384);
wr32(c, (RW(29) + 408), RW(0));
wr32(c, (RW(29) + 412), RW(5));
wr128(c, (RW(29) + 400) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 404), c->f[0].u);
wr32(c, (RW(29) + 416), RW(0));
wr32(c, (RW(29) + 424), RW(0));
wr32(c, (RW(29) + 428), RW(5));
wr128(c, (RW(29) + 416) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 420), c->f[0].u);
rd128(c, (RW(29) + 400) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 416) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 848), RW(0));
wr32(c, (RW(29) + 852), RW(0));
wr32(c, (RW(29) + 856), RW(0));
wr32(c, (RW(29) + 860), RW(5));
wr128(c, (RW(29) + 848) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 864), RW(0));
c->f[0].u = rd32(c, (RW(29) + 848));
wr32(c, (RW(29) + 868), RW(0));
c->f[2].u = rd32(c, (RW(29) + 852));
wr32(c, (RW(29) + 872), RW(0));
wr32(c, (RW(29) + 876), RW(5));
wr128(c, (RW(29) + 864) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(29) + 864));
wr32(c, (RW(29) + 396), RW(5));
c->f[3].u = rd32(c, (RW(29) + 868));
c->f[4].f = fpu(F(1) - F(0));
c->f[2].f = fpu(F(3) - F(2));
c->f[1].u = rd32(c, (RW(29) + 872));
c->f[0].u = rd32(c, (RW(29) + 856));
wr32(c, (RW(29) + 384), c->f[4].u);
wr32(c, (RW(29) + 388), c->f[2].u);
c->f[0].f = fpu(F(1) - F(0));
SET64(31, 0x2fc484); wr32(c, (RW(29) + 392), c->f[0].u); JP_F_002B0290(c);
c->f[2].u = rd32(c, (RW(17) + 4));
c->f[1].u = rd32(c, (RW(16) + 4));
c->f[1].f = fpu(F(2) - F(1));
c->f[1].u = c->f[1].u & 0x7FFFFFFFu;
c->fcc = F(1) < F(0);
{ int t = !c->fcc;  if (t) goto L_002FC960; }
SET64(2, (s64)(s32)0x10000);
rd128(c, (RW(17) + 0) & ~15u, &c->r[4]);
SET32(2, RW(19) + RW(2));
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(2) + -31040) & ~15u, &c->r[5]);
wr128(c, (RW(29) + 912) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 896) & ~15u, &c->r[3]);
SET32(4, RW(29) + 208);
SET64(2, (s64)(s32)0x10000);
wr128(c, (RW(29) + 944) & ~15u, &c->r[5]);
SET32(2, RW(18) + RW(2));
SET64(5, (s32)rd32(c, (RW(19) + 44)));
rd128(c, (RW(2) + -31040) & ~15u, &c->r[2]);
SET64(31, 0x2fc4dc); wr128(c, (RW(29) + 928) & ~15u, &c->r[2]); JP_F_0013ADA0(c);
SET64(31, 0x2fc4e4); SET32(4, RW(29) + 208); JP_F_00147DD0(c);
SET64(31, 0x2fc4ec); SET64(4, RD(2) + RD(0)); JP_F_00147DA0(c);
SET32(4, RW(29) + 720);
SET64(31, 0x2fc4f8); SET32(5, RW(29) + 208); JP_F_0013ADA0(c);
SET64(31, 0x2fc500); SET32(4, RW(29) + 720); JP_F_002AE990(c);
c->f[2].u = rd32(c, (RW(29) + 912));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(29) + 944));
wr32(c, (RW(29) + 796), RW(2));
c->f[4].u = rd32(c, (RW(29) + 916));
wr32(c, (RW(29) + 380), RW(2));
c->f[3].u = rd32(c, (RW(29) + 948));
wr32(c, (RW(29) + 812), RW(2));
c->f[5].f = fpu(F(2) - F(1));
wr32(c, (RW(29) + 368), RW(0));
wr32(c, (RW(29) + 376), RW(0));
SET32(4, RW(29) + 816);
wr32(c, (RW(29) + 800), RW(0));
SET32(5, RW(29) + 800);
wr32(c, (RW(29) + 804), RW(0));
SET32(6, RW(29) + 720);
c->f[2].u = rd32(c, (RW(29) + 920));
wr32(c, (RW(29) + 808), RW(0));
c->f[1].u = rd32(c, (RW(29) + 952));
c->f[3].f = fpu(F(4) - F(3));
c->f[1].f = fpu(F(2) - F(1));
wr32(c, (RW(29) + 784), c->f[5].u);
wr32(c, (RW(29) + 788), c->f[3].u);
wr32(c, (RW(29) + 792), c->f[1].u);
rd128(c, (RW(29) + 784) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(28) + -30944));
wr128(c, (RW(29) + 368) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 372), c->f[0].u);
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
SET64(31, 0x2fc57c); wr128(c, (RW(29) + 800) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 832), RW(0));
wr32(c, (RW(29) + 844), RW(2));
SET32(4, RW(29) + 144);
rd128(c, (RW(29) + 816) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 836), RW(0));
wr32(c, (RW(29) + 840), RW(0));
wr128(c, (RW(29) + 832) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 840));
SET64(5, (s32)rd32(c, (RW(18) + 44)));
SET64(31, 0x2fc5ac); c->f[24].u = c->f[0].u & 0x7FFFFFFFu; JP_F_0013ADA0(c);
SET64(31, 0x2fc5b4); SET32(4, RW(29) + 144); JP_F_00147DD0(c);
SET64(31, 0x2fc5bc); SET64(4, RD(2) + RD(0)); JP_F_00147DA0(c);
SET32(4, RW(29) + 592);
SET64(31, 0x2fc5c8); SET32(5, RW(29) + 144); JP_F_0013ADA0(c);
SET64(31, 0x2fc5d0); SET32(4, RW(29) + 592); JP_F_002AE990(c);
c->f[2].u = rd32(c, (RW(29) + 896));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(29) + 928));
wr32(c, (RW(29) + 668), RW(2));
c->f[4].u = rd32(c, (RW(29) + 900));
wr32(c, (RW(29) + 364), RW(2));
c->f[3].u = rd32(c, (RW(29) + 932));
wr32(c, (RW(29) + 684), RW(2));
c->f[5].f = fpu(F(2) - F(1));
wr32(c, (RW(29) + 352), RW(0));
wr32(c, (RW(29) + 360), RW(0));
SET32(4, RW(29) + 688);
wr32(c, (RW(29) + 672), RW(0));
SET32(5, RW(29) + 672);
wr32(c, (RW(29) + 676), RW(0));
SET32(6, RW(29) + 592);
c->f[2].u = rd32(c, (RW(29) + 904));
wr32(c, (RW(29) + 680), RW(0));
c->f[1].u = rd32(c, (RW(29) + 936));
c->f[3].f = fpu(F(4) - F(3));
c->f[1].f = fpu(F(2) - F(1));
wr32(c, (RW(29) + 656), c->f[5].u);
wr32(c, (RW(29) + 660), c->f[3].u);
wr32(c, (RW(29) + 664), c->f[1].u);
rd128(c, (RW(29) + 656) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(28) + -30944));
wr128(c, (RW(29) + 352) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 356), c->f[0].u);
rd128(c, (RW(29) + 352) & ~15u, &c->r[2]);
SET64(31, 0x2fc64c); wr128(c, (RW(29) + 672) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
c->f[1].u = rd32(c, (RW(29) + 912));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(29) + 944));
wr32(c, (RW(29) + 716), RW(2));
c->f[3].u = rd32(c, (RW(29) + 916));
wr32(c, (RW(29) + 540), RW(2));
c->f[2].u = rd32(c, (RW(29) + 948));
wr32(c, (RW(29) + 332), RW(2));
c->f[4].f = fpu(F(1) - F(0));
rd128(c, (RW(29) + 688) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 704), RW(0));
SET32(4, RW(29) + 320);
wr32(c, (RW(29) + 708), RW(0));
wr32(c, (RW(29) + 712), RW(0));
c->f[1].u = rd32(c, (RW(29) + 920));
wr128(c, (RW(29) + 704) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 952));
wr32(c, (RW(29) + 320), RW(0));
c->f[2].f = fpu(F(3) - F(2));
wr32(c, (RW(29) + 324), RW(0));
wr32(c, (RW(29) + 328), RW(0));
c->f[0].f = fpu(F(1) - F(0));
c->f[5].u = rd32(c, (RW(29) + 712));
wr32(c, (RW(29) + 528), c->f[4].u);
wr32(c, (RW(29) + 532), c->f[2].u);
wr32(c, (RW(29) + 536), c->f[0].u);
rd128(c, (RW(29) + 528) & ~15u, &c->r[2]);
c->f[21].u = c->f[5].u & 0x7FFFFFFFu;
SET64(31, 0x2fc6c4); wr128(c, (RW(29) + 320) & ~15u, &c->r[2]); JP_F_002B0360(c);
c->f[1].u = rd32(c, (RW(29) + 928));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(29) + 944));
wr32(c, (RW(29) + 556), RW(2));
c->f[3].u = rd32(c, (RW(29) + 932));
wr32(c, (RW(29) + 572), RW(2));
c->f[2].u = rd32(c, (RW(29) + 948));
wr32(c, (RW(29) + 348), RW(2));
c->f[4].f = fpu(F(1) - F(0));
rd128(c, (RW(29) + 320) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 544), RW(0));
SET32(4, RW(29) + 336);
wr32(c, (RW(29) + 548), RW(0));
wr32(c, (RW(29) + 552), RW(0));
c->f[1].u = rd32(c, (RW(29) + 936));
wr128(c, (RW(29) + 544) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 952));
wr32(c, (RW(29) + 336), RW(0));
c->f[2].f = fpu(F(3) - F(2));
wr32(c, (RW(29) + 340), RW(0));
wr32(c, (RW(29) + 344), RW(0));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 560), c->f[4].u);
wr32(c, (RW(29) + 564), c->f[2].u);
wr32(c, (RW(29) + 568), c->f[0].u);
rd128(c, (RW(29) + 560) & ~15u, &c->r[2]);
SET64(31, 0x2fc734); wr128(c, (RW(29) + 336) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 576), RW(0));
wr32(c, (RW(29) + 588), RW(2));
SET32(4, RW(29) + 576);
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
SET32(5, RW(29) + 544);
wr32(c, (RW(29) + 580), RW(0));
wr32(c, (RW(29) + 584), RW(0));
SET64(31, 0x2fc75c); wr128(c, (RW(29) + 576) & ~15u, &c->r[2]); JP_F_002B0230(c);
c->f[20].u = c->f[0].u;
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(29) + 896));
wr32(c, (RW(29) + 476), RW(2));
c->f[0].u = rd32(c, (RW(29) + 928));
wr32(c, (RW(29) + 300), RW(2));
c->f[3].u = rd32(c, (RW(29) + 900));
wr32(c, (RW(29) + 288), RW(0));
c->f[2].u = rd32(c, (RW(29) + 932));
wr32(c, (RW(29) + 292), RW(0));
c->f[4].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 296), RW(0));
SET32(4, RW(29) + 288);
c->f[1].u = rd32(c, (RW(29) + 904));
c->f[0].u = rd32(c, (RW(29) + 936));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 464), c->f[4].u);
wr32(c, (RW(29) + 468), c->f[2].u);
wr32(c, (RW(29) + 472), c->f[0].u);
rd128(c, (RW(29) + 464) & ~15u, &c->r[2]);
SET64(31, 0x2fc7b8); wr128(c, (RW(29) + 288) & ~15u, &c->r[2]); JP_F_002B0360(c);
c->f[1].u = rd32(c, (RW(29) + 944));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(29) + 928));
wr32(c, (RW(29) + 492), RW(2));
c->f[3].u = rd32(c, (RW(29) + 948));
wr32(c, (RW(29) + 508), RW(2));
c->f[2].u = rd32(c, (RW(29) + 932));
wr32(c, (RW(29) + 316), RW(2));
c->f[4].f = fpu(F(1) - F(0));
rd128(c, (RW(29) + 288) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 480), RW(0));
SET32(4, RW(29) + 304);
wr32(c, (RW(29) + 484), RW(0));
wr32(c, (RW(29) + 488), RW(0));
c->f[1].u = rd32(c, (RW(29) + 952));
wr128(c, (RW(29) + 480) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 936));
wr32(c, (RW(29) + 304), RW(0));
c->f[2].f = fpu(F(3) - F(2));
wr32(c, (RW(29) + 308), RW(0));
wr32(c, (RW(29) + 312), RW(0));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 496), c->f[4].u);
wr32(c, (RW(29) + 500), c->f[2].u);
wr32(c, (RW(29) + 504), c->f[0].u);
rd128(c, (RW(29) + 496) & ~15u, &c->r[2]);
SET64(31, 0x2fc828); wr128(c, (RW(29) + 304) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 512), RW(0));
wr32(c, (RW(29) + 524), RW(2));
SET32(4, RW(29) + 512);
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
SET32(5, RW(29) + 480);
wr32(c, (RW(29) + 516), RW(0));
wr32(c, (RW(29) + 520), RW(0));
SET64(31, 0x2fc850); wr128(c, (RW(29) + 512) & ~15u, &c->r[2]); JP_F_002B0230(c);
c->f[1].u = RW(0);
c->fcc = F(0) < F(1);
{ int t = !c->fcc; SET32(2, RW(0) + 1); if (t) goto L_002FC868; }
SET64(2, RD(0) + RD(0));
L_002FC868:;
c->f[0].u = RW(0);
c->fcc = F(20) < F(0);
{ int t = c->fcc; SET64(2, RD(2) & 0xff); if (t) goto L_002FC884; }
 goto L_002FC888;
L_002FC884:;
c->f[24].u = c->f[24].u ^ 0x80000000u;
L_002FC888:;
{ int t = RD(2) == RD(0);  if (t) goto L_002FC894; }
c->f[21].u = c->f[21].u ^ 0x80000000u;
L_002FC894:;
c->f[1].u = rd32(c, (RW(20) + 1300));
SET32(7, RW(20) + 1296);
c->f[2].u = rd32(c, (RW(20) + 1296));
c->f[0].f = fpu(F(23) + F(22));
c->f[1].f = fpu(F(1) - F(2));
c->f[1].u = c->f[1].u & 0x7FFFFFFFu;
c->f[1].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(24) - F(21));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; SET32(6, RW(20) + 1300); if (t) goto L_002FC924; }
c->f[0].f = fpu(F(2) + F(24));
SET64(5, (s64)(s32)0x3f000000);
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 1);
SET32(3, RW(19) + RW(3));
SET32(2, RW(18) + RW(2));
wr32(c, (RW(7) + 0), c->f[0].u);
c->f[2].u = rd32(c, (RW(6) + 0));
c->f[0].u = RW(0);
c->f[1].u = RW(5);
c->f[2].f = fpu(F(2) + F(21));
wr32(c, (RW(6) + 0), c->f[2].u);
c->f[3].u = rd32(c, (RW(7) + 0));
c->f[2].u = rd32(c, (RW(6) + 0));
c->facc = fpu(F(0) + F(3));
c->f[0].f = fpu(F(2) - F(3));
c->f[1].f = fpu(c->facc + F(1) * F(0));
c->f[0].f = fpu(F(1) - F(23));
wr32(c, (RW(7) + 0), c->f[0].u);
c->f[0].f = fpu(F(1) + F(22));
wr32(c, (RW(6) + 0), c->f[0].u);
wr8(c, (RW(3) + -30840), (u8)RW(4));
wr8(c, (RW(2) + -30840), (u8)RW(4)); goto L_002FC950;
L_002FC924:;
c->f[0].f = fpu(F(2) + F(24));
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(19) + RW(3));
SET32(2, RW(18) + RW(2));
wr32(c, (RW(7) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[0].f = fpu(F(0) + F(21));
wr32(c, (RW(6) + 0), c->f[0].u);
wr8(c, (RW(3) + -30840), (u8)RW(0));
wr8(c, (RW(2) + -30840), (u8)RW(0));
L_002FC950:;
SET64(31, 0x2fc958); SET64(4, RD(20) + RD(0)); JP_F_002FD0A0(c);
 goto L_002FCA88;
L_002FC960:;
SET64(2, (s64)(s32)0x3f800000);
L_002FC964:;
c->f[12].u = RW(2);
SET64(31, 0x2fc970); SET64(4, RD(20) + RD(0)); JP_F_002FCB90(c);
c->f[1].u = rd32(c, (RW(17) + 8));
SET64(4, (s32)rd32(c, (RW(19) + 44)));
c->f[0].u = rd32(c, (RW(16) + 8));
SET64(3, (s32)rd32(c, (RW(18) + 44)));
SET64(2, (s64)(s32)0x3f800000);
c->f[21].u = rd32(c, (RW(4) + 52));
wr32(c, (RW(29) + 460), RW(2));
c->f[0].f = fpu(F(1) - F(0));
SET32(4, RW(29) + 272);
wr32(c, (RW(29) + 456), c->f[0].u);
c->f[3].u = rd32(c, (RW(17) + 4));
c->f[2].u = rd32(c, (RW(16) + 4));
c->f[1].u = rd32(c, (RW(17) + 0));
c->f[0].u = rd32(c, (RW(16) + 0));
c->f[20].u = rd32(c, (RW(3) + 52));
c->f[2].f = fpu(F(3) - F(2));
wr32(c, (RW(29) + 284), RW(2));
wr32(c, (RW(29) + 272), RW(0));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 276), RW(0));
wr32(c, (RW(29) + 280), RW(0));
wr32(c, (RW(29) + 452), c->f[2].u);
wr32(c, (RW(29) + 448), c->f[0].u);
rd128(c, (RW(29) + 448) & ~15u, &c->r[2]);
SET64(31, 0x2fc9d8); wr128(c, (RW(29) + 272) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 880), RW(0));
wr32(c, (RW(29) + 892), RW(2));
c->f[12].u = c->f[23].u;
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
c->f[13].u = c->f[22].u;
wr32(c, (RW(29) + 884), RW(0));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(29) + 888), RW(0));
SET64(5, RD(16) + RD(0));
wr128(c, (RW(29) + 880) & ~15u, &c->r[2]);
SET32(6, RW(29) + 880);
c->f[0].u = rd32(c, (RW(29) + 880));
SET32(7, RW(29) + 432);
c->f[2].u = rd32(c, (RW(29) + 884));
c->f[1].u = rd32(c, (RW(29) + 888));
c->f[3].u = c->f[0].u ^ 0x80000000u;
c->f[0].u = rd32(c, (RW(29) + 892));
c->f[2].u = c->f[2].u ^ 0x80000000u;
c->f[1].u = c->f[1].u ^ 0x80000000u;
wr32(c, (RW(29) + 432), c->f[3].u);
wr32(c, (RW(29) + 436), c->f[2].u);
wr32(c, (RW(29) + 440), c->f[1].u);
SET64(31, 0x2fca3c); wr32(c, (RW(29) + 444), c->f[0].u); JP_F_001486B0(c);
if (RD(2) == RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002FCA6C; }
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(4, RW(0) + 1);
SET32(3, RW(19) + RW(3));
wr8(c, (RW(3) + -30840), (u8)RW(4));
SET32(2, RW(18) + RW(2));
wr8(c, (RW(2) + -30840), (u8)RW(4));
wr32(c, (RW(17) + 4), c->f[21].u);
wr32(c, (RW(16) + 4), c->f[20].u); goto L_002FCA80;
L_002FCA6C:;
SET64(2, RD(3) + RD(0));
SET32(3, RW(19) + RW(3));
SET32(2, RW(18) + RW(2));
wr8(c, (RW(3) + -30840), (u8)RW(0));
wr8(c, (RW(2) + -30840), (u8)RW(0));
L_002FCA80:;
SET64(31, 0x2fca88); SET64(4, RD(20) + RD(0)); JP_F_002FD230(c);
L_002FCA88:;
SET64(3, (s64)(s32)0x10000);
L_002FCA8C:;
SET64(6, RD(0) + RD(0));
SET32(3, RW(19) + RW(3));
SET64(5, rd8(c, (RW(3) + -30847)));
{ int t = RD(5) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002FCAB8; }
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(18) + RW(3));
SET64(3, rd8(c, (RW(3) + -30846)));
if (RD(3) != RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002FCABC; }
SET64(6, RD(0) + (s64)1);
L_002FCAB8:;
SET64(3, (s64)(s32)0x10000);
L_002FCABC:;
SET32(3, RW(18) + RW(3));
SET64(4, rd8(c, (RW(3) + -30847)));
if (RD(4) == RD(0)) { SET64(3, (s64)(s32)0x10000); goto L_002FCAE8; }
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(19) + RW(3));
SET64(3, rd8(c, (RW(3) + -30846)));
{ int t = RD(3) != RD(0);  if (t) goto L_002FCAE4; }
SET64(16, RD(0) + (s64)1);
L_002FCAE4:;
SET64(3, (s64)(s32)0x10000);
L_002FCAE8:;
SET32(3, RW(19) + RW(3));
SET64(3, rd8(c, (RW(3) + -30846)));
{ int t = RD(3) == RD(0);  if (t) goto L_002FCB24; }
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(18) + RW(3));
SET64(3, rd8(c, (RW(3) + -30846)));
{ int t = RD(3) == RD(0);  if (t) goto L_002FCB24; }
{ int t = RD(5) == RD(0);  if (t) goto L_002FCB18; }
SET64(6, RD(0) + (s64)1);
L_002FCB18:;
{ int t = RD(4) == RD(0);  if (t) goto L_002FCB24; }
SET64(16, RD(0) + (s64)1);
L_002FCB24:;
{ int t = RD(6) == RD(0);  if (t) goto L_002FCB38; }
SET64(4, RD(19) + RD(0));
SET64(31, 0x2fcb38); SET64(5, RD(18) + RD(0)); JP_F_002FD580(c);
L_002FCB38:;
if (RD(16) == RD(0)) { SET64(31, rd64(c, (RW(29) + 128))); goto L_002FCB50; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x2fcb4c); SET64(5, RD(19) + RD(0)); JP_F_002FD580(c);
SET64(31, rd64(c, (RW(29) + 128)));
L_002FCB50:;
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 112) & ~15u, &c->r[21]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 96) & ~15u, &c->r[20]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET32(29, RW(29) + 960); return;
}

void JP_F_002FCB90(Ctx *c) { /* func_002FCB90 */
ENTER(0x2fcb90);
SET32(29, RW(29) + -608);
SET64(6, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 80), RD(31));
SET64(3, (s64)(s32)0x10000);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(2, RD(3) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 320), RW(0));
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 328), RW(0));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 332), RW(6));
wr32(c, (RW(29) + 0), c->f[20].u);
wr32(c, (RW(29) + 336), RW(0));
SET64(18, (s32)rd32(c, (RW(4) + 972)));
c->f[1].u = rd32(c, (RW(28) + -30944));
SET64(19, (s32)rd32(c, (RW(4) + 968)));
c->f[23].u = c->f[12].u;
wr32(c, (RW(29) + 344), RW(0));
SET32(2, RW(18) + RW(2));
SET64(16, (s32)rd32(c, (RW(18) + 44)));
SET32(3, RW(19) + RW(3));
rd128(c, (RW(2) + -31040) & ~15u, &c->r[2]);
SET64(17, (s32)rd32(c, (RW(19) + 44)));
SET32(4, RW(29) + 272);
rd128(c, (RW(3) + -31040) & ~15u, &c->r[3]);
c->f[21].u = rd32(c, (RW(16) + 52));
wr128(c, (RW(29) + 320) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 348), RW(6));
wr32(c, (RW(29) + 324), c->f[1].u);
wr128(c, (RW(29) + 336) & ~15u, &c->r[3]);
c->f[22].u = rd32(c, (RW(17) + 52));
rd128(c, (RW(17) + 48) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 340), c->f[1].u);
rd128(c, (RW(29) + 320) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 304), RW(0));
wr32(c, (RW(29) + 312), RW(0));
wr32(c, (RW(29) + 316), RW(6));
wr128(c, (RW(29) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 308), c->f[1].u);
wr32(c, (RW(29) + 576), RW(0));
wr32(c, (RW(29) + 580), RW(0));
wr32(c, (RW(29) + 584), RW(0));
wr32(c, (RW(29) + 588), RW(6));
wr128(c, (RW(29) + 576) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 304) & ~15u, &c->r[3]);
c->f[0].u = rd32(c, (RW(29) + 576));
wr32(c, (RW(29) + 288), RW(0));
c->f[2].u = rd32(c, (RW(29) + 580));
wr32(c, (RW(29) + 296), RW(0));
wr32(c, (RW(29) + 300), RW(6));
wr128(c, (RW(29) + 288) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 292), c->f[1].u);
wr32(c, (RW(29) + 560), RW(0));
rd128(c, (RW(29) + 336) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 288) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 564), RW(0));
wr32(c, (RW(29) + 568), RW(0));
wr32(c, (RW(29) + 572), RW(6));
wr128(c, (RW(29) + 560) & ~15u, &c->r[3]);
c->f[1].u = rd32(c, (RW(29) + 560));
wr128(c, (RW(29) + 592) & ~15u, &c->r[5]);
c->f[3].u = rd32(c, (RW(29) + 564));
wr32(c, (RW(29) + 284), RW(6));
wr128(c, (RW(29) + 544) & ~15u, &c->r[2]);
c->f[4].f = fpu(F(1) - F(0));
c->f[2].f = fpu(F(3) - F(2));
c->f[1].u = rd32(c, (RW(29) + 568));
c->f[0].u = rd32(c, (RW(29) + 584));
wr32(c, (RW(29) + 272), c->f[4].u);
wr32(c, (RW(29) + 276), c->f[2].u);
c->f[0].f = fpu(F(1) - F(0));
SET64(31, 0x2fccc8); wr32(c, (RW(29) + 280), c->f[0].u); JP_F_002B0290(c);
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
c->f[1].u = rd32(c, (RW(2) + -8336));
c->fcc = F(0) <= F(1);
{ int t = c->fcc; c->f[20].u = rd32(c, (RW(3) + -8336)); if (t) goto L_002FCE4C; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(19) + RW(2));
SET64(2, rd8(c, (RW(2) + -30848)));
if (RD(2) != RD(0)) { c->f[1].u = rd32(c, (RW(29) + 560)); goto L_002FCD00; }
rd128(c, (RW(29) + 592) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 48) & ~15u, &c->r[2]); goto L_002FCE48;
L_002FCD00:;
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(29) + 544));
wr32(c, (RW(29) + 428), RW(2));
c->f[3].u = rd32(c, (RW(29) + 564));
wr32(c, (RW(29) + 252), RW(2));
c->f[2].u = rd32(c, (RW(29) + 548));
wr32(c, (RW(29) + 240), RW(0));
c->f[4].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 244), RW(0));
wr32(c, (RW(29) + 248), RW(0));
SET32(4, RW(29) + 240);
c->f[1].u = rd32(c, (RW(29) + 568));
c->f[0].u = rd32(c, (RW(29) + 552));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 416), c->f[4].u);
wr32(c, (RW(29) + 420), c->f[2].u);
wr32(c, (RW(29) + 424), c->f[0].u);
rd128(c, (RW(29) + 416) & ~15u, &c->r[2]);
SET64(31, 0x2fcd54); wr128(c, (RW(29) + 240) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 432), RW(0));
wr32(c, (RW(29) + 444), RW(2));
SET32(4, RW(29) + 448);
rd128(c, (RW(29) + 240) & ~15u, &c->r[2]);
SET32(5, RW(29) + 432);
wr32(c, (RW(29) + 436), RW(0));
c->f[12].u = c->f[20].u;
wr32(c, (RW(29) + 440), RW(0));
SET64(31, 0x2fcd80); wr128(c, (RW(29) + 432) & ~15u, &c->r[2]); JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 464), RW(0));
wr32(c, (RW(29) + 476), RW(2));
c->f[5].u = RW(2);
wr32(c, (RW(29) + 540), RW(2));
c->f[0].u = RW(0);
rd128(c, (RW(29) + 448) & ~15u, &c->r[2]);
c->fcc = F(23) <= F(0);
wr32(c, (RW(29) + 468), RW(0));
SET32(19, RW(17) + 48);
wr32(c, (RW(29) + 472), RW(0));
c->f[4].u = rd32(c, (RW(29) + 544));
wr128(c, (RW(29) + 464) & ~15u, &c->r[2]);
c->f[3].u = rd32(c, (RW(29) + 548));
c->f[0].u = rd32(c, (RW(29) + 464));
c->f[2].u = rd32(c, (RW(29) + 468));
c->f[1].u = rd32(c, (RW(29) + 552));
c->f[4].f = fpu(F(4) + F(0));
c->f[0].u = rd32(c, (RW(29) + 472));
c->f[2].f = fpu(F(3) + F(2));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 528), c->f[4].u);
wr32(c, (RW(29) + 532), c->f[2].u);
{ int t = c->fcc; wr32(c, (RW(29) + 536), c->f[0].u); if (t) goto L_002FCE48; }
c->fcc = F(23) < F(5);
if (!c->fcc) { SET64(4, RD(19) + RD(0)); goto L_002FCE40; }
SET32(4, RW(29) + 208);
SET32(5, RW(29) + 528);
SET64(31, 0x2fce00); SET64(6, RD(19) + RD(0)); JP_F_001A08D0(c);
SET32(4, RW(29) + 176);
SET32(5, RW(29) + 208);
SET64(31, 0x2fce10); c->f[12].u = c->f[23].u; JP_F_002AFF20(c);
SET32(4, RW(29) + 192);
SET64(31, 0x2fce1c); SET32(5, RW(29) + 176); JP_F_00240250(c);
SET32(4, RW(29) + 160);
SET64(5, RD(19) + RD(0));
SET64(31, 0x2fce2c); SET32(6, RW(29) + 192); JP_F_00240210(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2fce38); SET32(5, RW(29) + 160); JP_F_00149670(c);
wr32(c, (RW(17) + 52), c->f[22].u); goto L_002FCE4C;
L_002FCE40:;
SET64(31, 0x2fce48); SET32(5, RW(29) + 528); JP_F_00149670(c);
L_002FCE48:;
wr32(c, (RW(17) + 52), c->f[22].u);
L_002FCE4C:;
c->f[1].u = rd32(c, (RW(29) + 544));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(29) + 592));
wr32(c, (RW(29) + 268), RW(2));
c->f[3].u = rd32(c, (RW(29) + 548));
SET32(4, RW(29) + 256);
c->f[2].u = rd32(c, (RW(29) + 596));
c->f[4].f = fpu(F(1) - F(0));
c->f[1].u = rd32(c, (RW(29) + 552));
c->f[0].u = rd32(c, (RW(29) + 600));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 256), c->f[4].u);
wr32(c, (RW(29) + 260), c->f[2].u);
SET64(31, 0x2fce8c); wr32(c, (RW(29) + 264), c->f[0].u); JP_F_002B0290(c);
c->fcc = F(0) <= F(20);
if (c->fcc) { SET64(31, rd64(c, (RW(29) + 80))); goto L_002FD008; }
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(18) + RW(3));
SET64(3, rd8(c, (RW(3) + -30848)));
if (RD(3) != RD(0)) { c->f[1].u = rd32(c, (RW(29) + 544)); goto L_002FCEB8; }
rd128(c, (RW(29) + 576) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[3]); goto L_002FD000;
L_002FCEB8:;
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(29) + 560));
wr32(c, (RW(29) + 364), RW(2));
c->f[3].u = rd32(c, (RW(29) + 548));
wr32(c, (RW(29) + 236), RW(2));
c->f[2].u = rd32(c, (RW(29) + 564));
wr32(c, (RW(29) + 224), RW(0));
c->f[4].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 228), RW(0));
wr32(c, (RW(29) + 232), RW(0));
SET32(4, RW(29) + 224);
c->f[1].u = rd32(c, (RW(29) + 552));
c->f[0].u = rd32(c, (RW(29) + 568));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 352), c->f[4].u);
wr32(c, (RW(29) + 356), c->f[2].u);
wr32(c, (RW(29) + 360), c->f[0].u);
rd128(c, (RW(29) + 352) & ~15u, &c->r[2]);
SET64(31, 0x2fcf0c); wr128(c, (RW(29) + 224) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 368), RW(0));
wr32(c, (RW(29) + 380), RW(2));
c->f[12].u = c->f[20].u;
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
SET32(4, RW(29) + 384);
wr32(c, (RW(29) + 372), RW(0));
SET32(5, RW(29) + 368);
wr32(c, (RW(29) + 376), RW(0));
SET64(31, 0x2fcf38); wr128(c, (RW(29) + 368) & ~15u, &c->r[2]); JP_F_002AFF20(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 400), RW(0));
wr32(c, (RW(29) + 412), RW(3));
c->f[5].u = RW(3);
wr32(c, (RW(29) + 524), RW(3));
c->f[0].u = RW(0);
rd128(c, (RW(29) + 384) & ~15u, &c->r[3]);
c->fcc = F(23) <= F(0);
wr32(c, (RW(29) + 404), RW(0));
SET32(17, RW(16) + 48);
wr32(c, (RW(29) + 408), RW(0));
c->f[4].u = rd32(c, (RW(29) + 560));
wr128(c, (RW(29) + 400) & ~15u, &c->r[3]);
c->f[3].u = rd32(c, (RW(29) + 564));
c->f[0].u = rd32(c, (RW(29) + 400));
c->f[2].u = rd32(c, (RW(29) + 404));
c->f[1].u = rd32(c, (RW(29) + 568));
c->f[4].f = fpu(F(4) + F(0));
c->f[0].u = rd32(c, (RW(29) + 408));
c->f[2].f = fpu(F(3) + F(2));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 512), c->f[4].u);
wr32(c, (RW(29) + 516), c->f[2].u);
{ int t = c->fcc; wr32(c, (RW(29) + 520), c->f[0].u); if (t) goto L_002FD000; }
c->fcc = F(23) < F(5);
if (!c->fcc) { SET64(4, RD(17) + RD(0)); goto L_002FCFF8; }
SET32(4, RW(29) + 144);
SET32(5, RW(29) + 512);
SET64(31, 0x2fcfb8); SET64(6, RD(17) + RD(0)); JP_F_001A08D0(c);
c->f[12].u = c->f[23].u;
SET32(4, RW(29) + 112);
SET64(31, 0x2fcfc8); SET32(5, RW(29) + 144); JP_F_002AFF20(c);
SET32(4, RW(29) + 128);
SET64(31, 0x2fcfd4); SET32(5, RW(29) + 112); JP_F_00240250(c);
SET32(4, RW(29) + 96);
SET64(5, RD(17) + RD(0));
SET64(31, 0x2fcfe4); SET32(6, RW(29) + 128); JP_F_00240210(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2fcff0); SET32(5, RW(29) + 96); JP_F_00149670(c);
wr32(c, (RW(16) + 52), c->f[21].u); goto L_002FD004;
L_002FCFF8:;
SET64(31, 0x2fd000); SET32(5, RW(29) + 512); JP_F_00149670(c);
L_002FD000:;
wr32(c, (RW(16) + 52), c->f[21].u);
L_002FD004:;
SET64(31, rd64(c, (RW(29) + 80)));
L_002FD008:;
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 608); return;
}

void JP_F_002FD030(Ctx *c) { /* func_002FD030 */
ENTER(0x2fd030);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2fd04c); SET32(4, RW(16) + 864); JP_F_002F0D30(c);
SET32(4, RW(16) + 916);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2fd05c); SET64(16, RD(2) + RD(0)); JP_F_002F0D30(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(16) + RW(3));
SET64(3, rd8(c, (RW(3) + -30848)));
SET64(3, RD(3) ^ RD(0));
SET64(3, RD(3) < (u64)(s64)1);
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002FD090; }
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, rd8(c, (RW(3) + -30848)));
SET64(3, RD(2) ^ RD(0));
SET64(3, RD(3) < (u64)(s64)1);
SET64(31, rd64(c, (RW(29) + 16)));
L_002FD090:;
SET64(2, RD(3) + RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002FD0A0(Ctx *c) { /* func_002FD0A0 */
ENTER(0x2fd0a0);
SET32(29, RW(29) + -480);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(4, RW(18) + 864);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(31, 0x2fd0cc); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_002F0D70(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(18) + 916);
SET64(31, 0x2fd0dc); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(16, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(17) + 44)));
SET64(2, (s32)rd32(c, (RW(2) + 44)));
c->f[0].u = rd32(c, (RW(18) + 1304));
SET32(4, RW(29) + 144);
c->f[21].u = rd32(c, (RW(3) + 52));
c->f[20].u = rd32(c, (RW(2) + 52));
c->f[0].u = c->f[0].u ^ 0x80000000u;
SET64(31, 0x2fd104); wr32(c, (RW(29) + 476), c->f[0].u); JP_F_0013AEA0(c);
SET32(4, RW(29) + 144);
SET64(31, 0x2fd110); SET32(5, RW(29) + 476); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2fd11c); SET32(4, RW(29) + 320); JP_F_0013ADA0(c);
c->f[0].u = rd32(c, (RW(18) + 1296));
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 400);
SET32(5, RW(29) + 384);
SET32(6, RW(29) + 320);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(29) + 396), RW(2));
wr32(c, (RW(29) + 392), c->f[0].u);
wr32(c, (RW(29) + 384), RW(0));
SET64(31, 0x2fd148); wr32(c, (RW(29) + 388), RW(0)); JP_F_002AFDD0(c);
SET32(4, RW(29) + 416);
SET32(5, RW(29) + 400);
SET64(31, 0x2fd158); SET32(6, RW(18) + 1280); JP_F_002B0040(c);
c->f[0].u = rd32(c, (RW(18) + 1304));
rd128(c, (RW(29) + 416) & ~15u, &c->r[2]);
SET32(4, RW(29) + 80);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr128(c, (RW(29) + 448) & ~15u, &c->r[2]);
SET64(31, 0x2fd174); wr32(c, (RW(29) + 472), c->f[0].u); JP_F_0013AEA0(c);
SET32(4, RW(29) + 80);
SET64(31, 0x2fd180); SET32(5, RW(29) + 472); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2fd18c); SET32(4, RW(29) + 208); JP_F_0013ADA0(c);
c->f[0].u = rd32(c, (RW(18) + 1300));
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 288);
SET32(5, RW(29) + 272);
SET32(6, RW(29) + 208);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(29) + 284), RW(2));
wr32(c, (RW(29) + 280), c->f[0].u);
wr32(c, (RW(29) + 272), RW(0));
SET64(31, 0x2fd1b8); wr32(c, (RW(29) + 276), RW(0)); JP_F_002AFDD0(c);
SET32(6, RW(18) + 1280);
SET32(4, RW(29) + 304);
SET64(31, 0x2fd1c8); SET32(5, RW(29) + 288); JP_F_002B0040(c);
c->f[1].u = rd32(c, (RW(28) + -30968));
rd128(c, (RW(29) + 304) & ~15u, &c->r[5]);
wr32(c, (RW(29) + 452), c->f[21].u);
SET64(3, (s32)rd32(c, (RW(17) + 44)));
c->f[0].u = rd32(c, (RW(28) + -30964));
wr32(c, (RW(29) + 432), RW(0));
wr32(c, (RW(29) + 460), c->f[1].u);
wr32(c, (RW(29) + 440), RW(0));
rd128(c, (RW(29) + 448) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 432) & ~15u, &c->r[5]);
wr32(c, (RW(29) + 436), c->f[20].u);
wr128(c, (RW(3) + 48) & ~15u, &c->r[4]);
wr32(c, (RW(29) + 444), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(16) + 44)));
rd128(c, (RW(29) + 432) & ~15u, &c->r[4]);
wr128(c, (RW(3) + 48) & ~15u, &c->r[4]);
SET64(31, rd64(c, (RW(29) + 64)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 480); return;
}

void JP_F_002FD230(Ctx *c) { /* func_002FD230 */
ENTER(0x2fd230);
SET32(29, RW(29) + -400);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 8), c->f[22].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET32(4, RW(16) + 864);
SET64(31, 0x2fd25c); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_002F0D70(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(16) + 916);
SET64(31, 0x2fd26c); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(3, (s32)rd32(c, (RW(2) + 44)));
SET64(7, (s64)(s32)0x3f800000);
SET64(4, (s32)rd32(c, (RW(17) + 44)));
c->f[0].u = rd32(c, (RW(28) + -30944));
wr32(c, (RW(29) + 192), RW(0));
SET32(5, RW(29) + 224);
SET64(2, (s64)(s32)0x3f000000);
wr32(c, (RW(29) + 200), RW(0));
c->f[12].u = RW(2);
rd128(c, (RW(4) + 48) & ~15u, &c->r[6]);
rd128(c, (RW(3) + 48) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 204), RW(7));
wr32(c, (RW(29) + 176), RW(0));
SET32(4, RW(29) + 240);
wr128(c, (RW(29) + 192) & ~15u, &c->r[6]);
wr32(c, (RW(29) + 196), c->f[0].u);
wr32(c, (RW(29) + 184), RW(0));
wr32(c, (RW(29) + 188), RW(7));
wr128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 180), c->f[0].u);
rd128(c, (RW(29) + 192) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 368), RW(0));
wr32(c, (RW(29) + 372), RW(0));
wr32(c, (RW(29) + 376), RW(0));
wr32(c, (RW(29) + 380), RW(7));
wr128(c, (RW(29) + 368) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 352), RW(0));
c->f[0].u = rd32(c, (RW(29) + 368));
wr32(c, (RW(29) + 356), RW(0));
c->f[2].u = rd32(c, (RW(29) + 372));
wr32(c, (RW(29) + 360), RW(0));
wr32(c, (RW(29) + 364), RW(7));
wr128(c, (RW(29) + 352) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(29) + 352));
wr32(c, (RW(29) + 236), RW(7));
c->f[3].u = rd32(c, (RW(29) + 356));
c->f[4].f = fpu(F(1) - F(0));
c->f[2].f = fpu(F(3) - F(2));
c->f[1].u = rd32(c, (RW(29) + 360));
c->f[0].u = rd32(c, (RW(29) + 376));
wr32(c, (RW(29) + 224), c->f[4].u);
wr32(c, (RW(29) + 228), c->f[2].u);
c->f[0].f = fpu(F(1) - F(0));
SET64(31, 0x2fd324); wr32(c, (RW(29) + 232), c->f[0].u); JP_F_002AFF20(c);
rd128(c, (RW(29) + 240) & ~15u, &c->r[2]);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 256), RW(0));
c->f[6].u = rd32(c, (RW(29) + 368));
wr32(c, (RW(29) + 260), RW(0));
c->f[4].u = rd32(c, (RW(29) + 372));
wr32(c, (RW(29) + 264), RW(0));
c->f[3].u = rd32(c, (RW(29) + 376));
wr32(c, (RW(29) + 268), RW(3));
c->f[0].u = rd32(c, (RW(28) + -30944));
wr128(c, (RW(29) + 256) & ~15u, &c->r[2]);
SET32(4, RW(29) + 160);
c->f[1].u = rd32(c, (RW(29) + 256));
wr32(c, (RW(29) + 284), RW(3));
c->f[2].u = rd32(c, (RW(29) + 260));
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 120), RW(0));
c->f[5].f = fpu(F(6) + F(1));
wr32(c, (RW(29) + 124), RW(3));
c->f[1].u = rd32(c, (RW(29) + 264));
c->f[2].f = fpu(F(4) + F(2));
c->f[1].f = fpu(F(3) + F(1));
wr32(c, (RW(29) + 272), c->f[5].u);
wr32(c, (RW(29) + 276), c->f[2].u);
wr32(c, (RW(29) + 280), c->f[1].u);
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 116), c->f[0].u);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 1280) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(16) + 1288));
c->f[1].u = rd32(c, (RW(16) + 1284));
c->f[0].u = rd32(c, (RW(16) + 1280));
c->f[2].f = fpu(F(3) - F(2));
wr32(c, (RW(29) + 172), RW(3));
c->f[1].f = fpu(F(4) - F(1));
c->f[0].f = fpu(F(6) - F(0));
wr32(c, (RW(29) + 168), c->f[2].u);
wr32(c, (RW(29) + 164), c->f[1].u);
SET64(31, 0x2fd3c8); wr32(c, (RW(29) + 160), c->f[0].u); JP_F_002B0290(c);
c->f[0].u = c->f[0].u ^ 0x80000000u;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 1296), c->f[0].u);
SET32(4, RW(29) + 144);
c->f[4].u = rd32(c, (RW(29) + 360));
c->f[5].u = rd32(c, (RW(16) + 1288));
c->f[2].u = rd32(c, (RW(29) + 356));
c->f[3].u = rd32(c, (RW(16) + 1284));
c->f[1].u = rd32(c, (RW(16) + 1280));
c->f[0].u = rd32(c, (RW(29) + 352));
c->f[4].f = fpu(F(4) - F(5));
wr32(c, (RW(29) + 156), RW(2));
c->f[2].f = fpu(F(2) - F(3));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(29) + 152), c->f[4].u);
wr32(c, (RW(29) + 148), c->f[2].u);
SET64(31, 0x2fd410); wr32(c, (RW(29) + 144), c->f[0].u); JP_F_002B0290(c);
wr32(c, (RW(16) + 1300), c->f[0].u);
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(29) + 352));
wr32(c, (RW(29) + 220), RW(2));
c->f[0].u = rd32(c, (RW(29) + 368));
wr32(c, (RW(29) + 140), RW(2));
c->f[3].u = rd32(c, (RW(29) + 356));
wr32(c, (RW(29) + 128), RW(0));
c->f[2].u = rd32(c, (RW(29) + 372));
wr32(c, (RW(29) + 132), RW(0));
c->f[4].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 136), RW(0));
SET32(4, RW(29) + 128);
c->f[1].u = rd32(c, (RW(29) + 360));
c->f[0].u = rd32(c, (RW(29) + 376));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 208), c->f[4].u);
wr32(c, (RW(29) + 212), c->f[2].u);
wr32(c, (RW(29) + 216), c->f[0].u);
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
SET64(31, 0x2fd46c); wr128(c, (RW(29) + 128) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 336), RW(0));
wr32(c, (RW(29) + 348), RW(3));
c->f[0].u = rd32(c, (RW(28) + -30976));
rd128(c, (RW(29) + 128) & ~15u, &c->r[3]);
c->f[21].u = RW(0);
wr32(c, (RW(29) + 340), RW(0));
wr32(c, (RW(29) + 344), RW(0));
wr128(c, (RW(29) + 336) & ~15u, &c->r[3]);
c->f[22].u = rd32(c, (RW(29) + 336));
c->fcc = F(0) == F(22);
{ int t = !c->fcc; c->f[2].u = rd32(c, (RW(29) + 344)); if (t) goto L_002FD4B0; }
c->f[0].u = rd32(c, (RW(28) + -30972));
c->fcc = F(0) == F(2);
if (c->fcc) { wr32(c, (RW(16) + 1304), c->f[21].u); goto L_002FD560; }
L_002FD4B0:;
c->f[1].u = rd32(c, (RW(28) + -30976));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(28) + -30972));
SET32(4, RW(29) + 80);
c->f[15].u = RW(2);
c->f[12].f = fpu(F(22) - F(1));
c->f[14].u = RW(0);
SET64(31, 0x2fd4d4); c->f[13].f = fpu(F(2) - F(0)); JP_F_0013E810(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2fd4e0); SET32(4, RW(29) + 96); JP_F_0013E7B0(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(29) + 64);
c->f[13].u = RW(2);
c->f[12].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
c->f[15].u = RW(2);
SET64(31, 0x2fd500); c->f[14].u = c->f[12].u; JP_F_0013E810(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2fd50c); SET32(4, RW(29) + 96); JP_F_0013E790(c);
wr32(c, (RW(29) + 396), c->f[0].u);
SET32(4, RW(29) + 396);
SET32(5, RW(28) + -30948);
SET64(31, 0x2fd520); SET32(6, RW(28) + -30952); JP_F_0013E750(c);
wr32(c, (RW(29) + 396), c->f[0].u);
SET64(31, 0x2fd52c); c->f[12].u = c->f[0].u; JP_F_0011F880(c);
c->f[20].u = c->f[0].u;
SET64(31, 0x2fd538); c->f[12].u = c->f[20].u; JP_F_00121728(c);
SET64(31, 0x2fd540); SET64(4, RD(2) + RD(0)); JP_F_0011EE20(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002FD55C; }
c->f[0].u = rd32(c, (RW(28) + -30976));
c->fcc = F(22) < F(0);
if (c->fcc) { c->f[20].u = c->f[20].u ^ 0x80000000u; goto L_002FD558; }
L_002FD558:;
c->f[21].u = c->f[20].u;
L_002FD55C:;
wr32(c, (RW(16) + 1304), c->f[21].u);
L_002FD560:;
SET64(31, rd64(c, (RW(29) + 48)));
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 400); return;
}

void JP_F_002FD580(Ctx *c) { /* func_002FD580 */
ENTER(0x2fd580);
SET32(29, RW(29) + -272);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 44)));
SET64(31, 0x2fd5a4); SET32(4, RW(29) + 48); JP_F_0013ADA0(c);
SET64(31, 0x2fd5ac); SET32(4, RW(29) + 48); JP_F_00147DD0(c);
SET64(31, 0x2fd5b4); SET64(4, RD(2) + RD(0)); JP_F_00147DA0(c);
SET32(4, RW(29) + 144);
SET64(31, 0x2fd5c0); SET32(5, RW(29) + 48); JP_F_0013ADA0(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 224);
wr32(c, (RW(29) + 216), RW(2));
SET32(5, RW(29) + 208);
wr32(c, (RW(29) + 220), RW(2));
SET32(6, RW(29) + 144);
wr32(c, (RW(29) + 208), RW(0));
SET64(31, 0x2fd5e4); wr32(c, (RW(29) + 212), RW(0)); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
SET64(5, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 256), RW(0));
c->f[0].u = rd32(c, (RW(28) + -30980));
wr32(c, (RW(29) + 260), RW(0));
SET32(4, RW(29) + 240);
wr32(c, (RW(29) + 264), RW(0));
wr32(c, (RW(29) + 268), RW(5));
wr128(c, (RW(29) + 256) & ~15u, &c->r[2]);
SET64(3, (s32)rd32(c, (RW(17) + 44)));
SET64(2, (s32)rd32(c, (RW(16) + 44)));
wr32(c, (RW(29) + 112), RW(0));
rd128(c, (RW(3) + 48) & ~15u, &c->r[3]);
rd128(c, (RW(2) + 48) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
wr32(c, (RW(29) + 124), RW(5));
wr128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 128), RW(0));
c->f[1].u = rd32(c, (RW(29) + 112));
wr32(c, (RW(29) + 132), RW(0));
c->f[3].u = rd32(c, (RW(29) + 116));
wr32(c, (RW(29) + 136), RW(0));
wr32(c, (RW(29) + 140), RW(5));
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 128));
wr32(c, (RW(29) + 252), RW(5));
c->f[4].u = rd32(c, (RW(29) + 132));
c->f[5].f = fpu(F(2) - F(1));
c->f[3].f = fpu(F(4) - F(3));
wr32(c, (RW(29) + 244), c->f[3].u);
c->f[2].u = rd32(c, (RW(29) + 136));
c->f[1].u = rd32(c, (RW(29) + 120));
wr32(c, (RW(29) + 240), c->f[5].u);
wr32(c, (RW(29) + 244), c->f[0].u);
c->f[1].f = fpu(F(2) - F(1));
SET64(31, 0x2fd67c); wr32(c, (RW(29) + 248), c->f[1].u); JP_F_002B0360(c);
SET32(4, RW(29) + 256);
SET64(31, 0x2fd688); SET32(5, RW(29) + 240); JP_F_002B0230(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
c->f[1].u = rd32(c, (RW(3) + -30844));
c->fcc = F(0) < F(1);
if (c->fcc) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002FD6B0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2fd6ac); SET64(5, RD(16) + RD(0)); JP_F_002EEDF0(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_002FD6B0:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 272); return;
}

void JP_F_002FD6C0(Ctx *c) { /* func_002FD6C0 */
ENTER(0x2fd6c0);
SET32(29, RW(29) + -160);
SET64(4, RD(4) & 0xffff);
wr64(c, (RW(29) + 16), RD(31));
SET32(3, RW(0) + 3);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(4) == RD(3); SET64(16, RD(6) + RD(0)); if (t) goto L_002FD7A0; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET32(4, RW(29) + 64); goto L_002FD76C; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(4, RW(29) + 96); goto L_002FD738; }
if (RD(4) == RD(0)) { SET64(5, RD(5) & 0xffff); goto L_002FD704; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_002FD7D4;
L_002FD704:;
SET64(31, 0x2fd70c); SET32(4, RW(29) + 128); JP_F_0030C6C0(c);
SET64(3, (s32)rd32(c, (RW(29) + 128)));
wr32(c, (RW(16) + 0), RW(3));
c->f[0].u = rd32(c, (RW(29) + 132));
wr32(c, (RW(16) + 4), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 136));
wr32(c, (RW(16) + 8), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 140));
wr32(c, (RW(16) + 12), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 144));
wr32(c, (RW(16) + 16), c->f[0].u); goto L_002FD7D0;
L_002FD738:;
SET64(31, 0x2fd740);  JP_F_0030C670(c);
SET64(3, (s32)rd32(c, (RW(29) + 96)));
wr32(c, (RW(16) + 0), RW(3));
c->f[0].u = rd32(c, (RW(29) + 100));
wr32(c, (RW(16) + 4), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 104));
wr32(c, (RW(16) + 8), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 108));
wr32(c, (RW(16) + 12), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 112));
wr32(c, (RW(16) + 16), c->f[0].u); goto L_002FD7D0;
L_002FD76C:;
SET64(31, 0x2fd774);  JP_F_0030C620(c);
SET64(3, (s32)rd32(c, (RW(29) + 64)));
wr32(c, (RW(16) + 0), RW(3));
c->f[0].u = rd32(c, (RW(29) + 68));
wr32(c, (RW(16) + 4), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 72));
wr32(c, (RW(16) + 8), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 76));
wr32(c, (RW(16) + 12), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 80));
wr32(c, (RW(16) + 16), c->f[0].u); goto L_002FD7D0;
L_002FD7A0:;
SET64(31, 0x2fd7a8); SET32(4, RW(29) + 32); JP_F_0030C5D0(c);
SET64(3, (s32)rd32(c, (RW(29) + 32)));
wr32(c, (RW(16) + 0), RW(3));
c->f[0].u = rd32(c, (RW(29) + 36));
wr32(c, (RW(16) + 4), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 40));
wr32(c, (RW(16) + 8), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 44));
wr32(c, (RW(16) + 12), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 48));
wr32(c, (RW(16) + 16), c->f[0].u);
L_002FD7D0:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002FD7D4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_002FD7E0(Ctx *c) { /* func_002FD7E0 */
ENTER(0x2fd7e0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, RD(5) + RD(0));
SET64(5, rd16(c, (RW(16) + 844)));
SET64(31, 0x2fd800); SET32(6, RW(29) + 32); JP_F_002FD6C0(c);
c->f[12].u = rd32(c, (RW(29) + 36));
SET64(5, (s32)rd32(c, (RW(29) + 32)));
c->f[13].u = rd32(c, (RW(29) + 40));
c->f[14].u = rd32(c, (RW(29) + 44));
c->f[15].u = rd32(c, (RW(29) + 48));
SET64(31, 0x2fd81c); SET64(4, (s32)rd32(c, (RW(16) + 664))); JP_F_003BE0E0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002FD830(Ctx *c) { /* func_002FD830 */
ENTER(0x2fd830);
SET32(29, RW(29) + -304);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(20, (s32)rd32(c, (RW(4) + 680)));
{ int t = RD(20) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002FDC00; }
SET64(18, (s32)rd32(c, (RW(17) + 668)));
SET64(31, 0x2fd878); SET32(4, RW(29) + 240); JP_F_002AF080(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 224), RW(0));
wr32(c, (RW(29) + 236), RW(3));
c->f[0].u = RW(0);
wr32(c, (RW(29) + 220), RW(3));
c->f[0].f = fpu(F(0) - F(0));
rd128(c, (RW(18) + 0) & ~15u, &c->r[3]);
SET64(16, RD(0) + RD(0));
wr32(c, (RW(29) + 232), RW(0));
wr32(c, (RW(29) + 208), RW(0));
wr128(c, (RW(29) + 240) & ~15u, &c->r[3]);
c->facc = fpu(F(0) * F(0));
rd128(c, (RW(18) + 16) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 216), RW(0));
wr128(c, (RW(29) + 256) & ~15u, &c->r[3]);
rd128(c, (RW(18) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 272) & ~15u, &c->r[3]);
rd128(c, (RW(18) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 288) & ~15u, &c->r[3]);
rd128(c, (RW(17) + 1216) & ~15u, &c->r[5]);
rd128(c, (RW(17) + 1232) & ~15u, &c->r[4]);
SET64(3, rd16(c, (RW(20) + 328)));
wr128(c, (RW(29) + 224) & ~15u, &c->r[5]);
wr128(c, (RW(29) + 208) & ~15u, &c->r[4]);
c->f[2].u = rd32(c, (RW(29) + 224));
c->f[3].u = rd32(c, (RW(29) + 208));
wr32(c, (RW(29) + 228), RW(0));
c->f[1].u = rd32(c, (RW(29) + 216));
wr32(c, (RW(29) + 212), RW(0));
c->f[0].u = rd32(c, (RW(29) + 232));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
c->facc = fpu(c->facc + F(2) * F(2));
{ int t = RSD(3) <= 0; c->f[22].f = fpu(c->facc + F(0) * F(0)); if (t) goto L_002FDC00; }
SET64(3, (s64)(s32)0x4c0000);
SET64(2, (s64)(s32)0x4c0000);
c->f[21].u = rd32(c, (RW(3) + -8352));
c->f[20].u = rd32(c, (RW(2) + -8344));
SET64(2, (s32)rd32(c, (RW(20) + 336)));
L_002FD918:;
SET64(18, RD(16) & 0xffff);
SET32(3, RW(18) << 2);
SET64(4, RD(20) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(19, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2fd934); SET64(5, RD(16) + RD(0)); JP_F_00241A50(c);
SET64(31, 0x2fd93c); SET64(4, RD(2) + RD(0)); JP_F_0030ACE0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002FD958; }
SET64(5, (s32)rd32(c, (RW(17) + 656)));
SET64(31, 0x2fd950); SET64(4, RD(19) + RD(0)); JP_F_0019E8F0(c);
 goto L_002FDBE8;
L_002FD958:;
rd128(c, (RW(19) + 400) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 192), RW(0));
wr32(c, (RW(29) + 204), RW(2));
c->f[0].u = rd32(c, (RW(29) + 224));
wr32(c, (RW(29) + 200), RW(0));
c->f[2].u = rd32(c, (RW(29) + 228));
wr128(c, (RW(29) + 192) & ~15u, &c->r[3]);
c->f[4].u = RW(0);
c->f[3].u = rd32(c, (RW(29) + 192));
SET32(2, RW(0) + 1);
c->f[2].f = fpu(F(4) - F(2));
c->f[3].f = fpu(F(3) - F(0));
c->f[1].u = rd32(c, (RW(29) + 200));
c->f[0].u = rd32(c, (RW(29) + 232));
c->facc = fpu(F(2) * F(2));
c->facc = fpu(c->facc + F(3) * F(3));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(c->facc + F(0) * F(0));
c->fcc = F(0) < F(22);
{ int t = c->fcc; wr32(c, (RW(29) + 196), RW(0)); if (t) goto L_002FD9B4; }
SET64(2, RD(0) + RD(0));
L_002FD9B4:;
SET64(21, RD(2) & 0xff);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2fd9c4); SET64(5, RD(16) + RD(0)); JP_F_00241A50(c);
SET64(3, rd16(c, (RW(2) + 0)));
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2);  if (t) goto L_002FD9E8; }
SET32(2, RW(0) + 3);
{ int t = RD(3) == RD(2);  if (t) goto L_002FD9E8; }
 goto L_002FD9F0;
L_002FD9E8:;
SET64(21, RD(0) + RD(0));
L_002FD9F0:;
{ int t = RD(21) == RD(0);  if (t) goto L_002FDA28; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x2fda04); SET64(5, RD(16) + RD(0)); JP_F_00241A50(c);
SET64(31, 0x2fda0c); SET64(4, RD(2) + RD(0)); JP_F_0030ACF0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002FDA1C; }
c->f[23].u = c->f[21].u; goto L_002FDA20;
L_002FDA1C:;
c->f[23].u = RW(0);
L_002FDA20:;
 goto L_002FDA30;
L_002FDA28:;
SET64(2, (s64)(s32)0x3f800000);
c->f[23].u = RW(2);
L_002FDA30:;
SET64(25, (s32)rd32(c, (RW(19) + 276)));
SET32(4, RW(29) + 160);
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2fda44); SET64(5, RD(19) + RD(0)); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(29) + 172));
SET64(2, (s64)(s32)0x3f660000);
c->f[0].u = RW(0);
SET64(2, RD(2) | 0x6666);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(F(23) - F(1));
c->f[23].f = fpu(c->facc + F(20) * F(0));
c->f[0].u = RW(2);
c->fcc = F(23) <= F(0);
{ int t = c->fcc;  if (t) goto L_002FDAD0; }
SET32(2, RW(18) << 3);
SET64(4, (s64)(s32)0x3f800000);
SET32(3, RW(2) - RW(18));
SET64(2, (s32)rd32(c, (RW(20) + 332)));
SET32(3, RW(3) << 4);
c->f[23].u = RW(4);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 98)));
SET64(2, RD(2) & 0x10);
{ int t = RD(2) != RD(0);  if (t) goto L_002FDAB0; }
SET64(5, (s32)rd32(c, (RW(17) + 656)));
SET64(31, 0x2fdaac); SET64(4, RD(19) + RD(0)); JP_F_0019E8F0(c);
L_002FDAB0:;
SET64(25, (s32)rd32(c, (RW(19) + 276)));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 60)));
{ u32 t = RW(25); SET64(31, 0x2fdac4); SET32(5, RW(0) + 1); rt_call(c, t); }
 goto L_002FDB18;
L_002FDAD0:;
SET32(2, RW(18) << 3);
SET32(3, RW(2) - RW(18));
SET64(2, (s32)rd32(c, (RW(20) + 332)));
SET32(3, RW(3) << 4);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 98)));
SET64(2, RD(2) & 0x10);
{ int t = RD(2) != RD(0);  if (t) goto L_002FDB00; }
SET64(5, (s32)rd32(c, (RW(17) + 660)));
SET64(31, 0x2fdb00); SET64(4, RD(19) + RD(0)); JP_F_0019E8F0(c);
L_002FDB00:;
SET64(25, (s32)rd32(c, (RW(19) + 276)));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2fdb14); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002FDB18:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 156), c->f[23].u);
wr32(c, (RW(29) + 144), RW(2));
wr32(c, (RW(29) + 148), RW(2));
SET64(4, RD(19) + RD(0));
wr32(c, (RW(29) + 152), RW(2));
SET64(25, (s32)rd32(c, (RW(19) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x2fdb40); SET32(5, RW(29) + 144); rt_call(c, t); }
SET64(4, RD(20) + RD(0));
SET64(31, 0x2fdb4c); SET64(5, RD(16) + RD(0)); JP_F_00241A50(c);
SET64(3, rd16(c, (RW(2) + 18)));
SET64(2, RD(0) | 0xffff);
{ int t = RD(3) == RD(2);  if (t) goto L_002FDB98; }
SET64(2, (s64)(s32)0x3f800000);
SET32(3, RW(3) << 2);
wr32(c, (RW(29) + 188), c->f[23].u);
wr32(c, (RW(29) + 176), RW(2));
wr32(c, (RW(29) + 180), RW(2));
SET32(5, RW(0) + 3);
wr32(c, (RW(29) + 184), RW(2));
SET64(2, (s32)rd32(c, (RW(20) + 360)));
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x2fdb94); SET32(6, RW(29) + 176); rt_call(c, t); }
L_002FDB98:;
SET64(4, RD(20) + RD(0));
SET64(31, 0x2fdba4); SET64(5, RD(16) + RD(0)); JP_F_00241A50(c);
SET64(4, rd16(c, (RW(2) + 20)));
SET64(3, RD(0) | 0xffff);
{ int t = RD(4) == RD(3);  if (t) goto L_002FDBE8; }
SET64(3, (s32)rd32(c, (RW(20) + 336)));
SET32(4, RW(4) << 2);
SET64(2, (s64)(s32)0x3f800000);
SET32(3, RW(3) + RW(4));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
wr32(c, (RW(29) + 140), c->f[23].u);
wr32(c, (RW(29) + 128), RW(2));
wr32(c, (RW(29) + 132), RW(2));
wr32(c, (RW(29) + 136), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x2fdbe8); SET32(5, RW(29) + 128); rt_call(c, t); }
L_002FDBE8:;
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(20) + 328)));
SET64(3, RSD(16) < RSD(3));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(20) + 336))); { POLL(); goto L_002FD918; } }
L_002FDC00:;
SET64(31, rd64(c, (RW(29) + 112)));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 304); return;
}

void JP_F_002FDC40(Ctx *c) { /* func_002FDC40 */
ENTER(0x2fdc40);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(19, (s32)rd32(c, (RW(4) + 680)));
{ int t = RD(19) == RD(0); SET64(20, RD(4) + RD(0)); if (t) goto L_002FDDC0; }
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(3));
wr32(c, (RW(29) + 100), RW(3));
wr32(c, (RW(29) + 104), RW(3));
wr32(c, (RW(29) + 108), RW(3));
SET64(3, rd16(c, (RW(19) + 328)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_002FDDC0; }
SET64(2, (s32)rd32(c, (RW(19) + 336)));
L_002FDC8C:;
SET64(16, RD(18) & 0xffff);
SET32(3, RW(16) << 2);
SET64(4, RD(19) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(17, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2fdca8); SET64(5, RD(18) + RD(0)); JP_F_00241A50(c);
SET64(31, 0x2fdcb0); SET64(4, RD(2) + RD(0)); JP_F_0030ACE0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002FDCD0; }
SET64(5, (s32)rd32(c, (RW(20) + 656)));
SET64(31, 0x2fdcc4); SET64(4, RD(17) + RD(0)); JP_F_0019E8F0(c);
 goto L_002FDDA8;
L_002FDCD0:;
SET32(2, RW(16) << 3);
SET32(3, RW(2) - RW(16));
SET64(2, (s32)rd32(c, (RW(19) + 332)));
SET32(3, RW(3) << 4);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 98)));
SET64(2, RD(2) & 0x10);
{ int t = RD(2) != RD(0);  if (t) goto L_002FDD00; }
SET64(5, (s32)rd32(c, (RW(20) + 656)));
SET64(31, 0x2fdd00); SET64(4, RD(17) + RD(0)); JP_F_0019E8F0(c);
L_002FDD00:;
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 60)));
{ u32 t = RW(25); SET64(31, 0x2fdd14); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x2fdd28); SET32(5, RW(29) + 96); rt_call(c, t); }
SET64(4, RD(19) + RD(0));
SET64(31, 0x2fdd34); SET64(5, RD(18) + RD(0)); JP_F_00241A50(c);
SET64(3, rd16(c, (RW(2) + 18)));
SET64(2, RD(0) | 0xffff);
{ int t = RD(3) == RD(2);  if (t) goto L_002FDD68; }
SET64(2, (s32)rd32(c, (RW(19) + 360)));
SET32(3, RW(3) << 2);
SET32(5, RW(0) + 3);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x2fdd68); SET32(6, RW(29) + 96); rt_call(c, t); }
L_002FDD68:;
SET64(4, RD(19) + RD(0));
SET64(31, 0x2fdd74); SET64(5, RD(18) + RD(0)); JP_F_00241A50(c);
SET64(4, rd16(c, (RW(2) + 20)));
SET64(3, RD(0) | 0xffff);
{ int t = RD(4) == RD(3);  if (t) goto L_002FDDA8; }
SET64(2, (s32)rd32(c, (RW(19) + 336)));
SET32(3, RW(4) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x2fdda4); SET32(5, RW(29) + 96); rt_call(c, t); }
L_002FDDA8:;
SET32(3, RW(18) + 1);
SET64(18, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(19) + 328)));
SET64(3, RSD(18) < RSD(3));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(19) + 336))); { POLL(); goto L_002FDC8C; } }
L_002FDDC0:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002FDDE0(Ctx *c) { /* func_002FDDE0 */
ENTER(0x2fdde0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET32(4, RW(29) + 96);
SET64(25, (s32)rd32(c, (RW(16) + 1004)));
c->f[20].u = c->f[12].u;
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2fde0c); SET32(5, RW(16) + 992); rt_call(c, t); }
c->f[12].u = c->f[20].u;
SET32(4, RW(29) + 80);
SET64(31, 0x2fde1c); SET32(5, RW(16) + 708); JP_F_00361B10(c);
c->f[7].u = rd32(c, (RW(29) + 88));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(29) + 120));
SET64(5, (s32)rd32(c, (RW(16) + 668)));
c->f[6].u = rd32(c, (RW(29) + 84));
wr32(c, (RW(29) + 76), RW(2));
c->f[0].u = rd32(c, (RW(29) + 116));
wr32(c, (RW(29) + 60), RW(2));
c->f[5].f = fpu(F(1) + F(7));
SET32(4, RW(5) + 784);
wr32(c, (RW(29) + 56), c->f[5].u);
c->f[5].f = fpu(F(0) + F(6));
c->f[0].u = rd32(c, (RW(29) + 104));
c->f[1].u = rd32(c, (RW(29) + 100));
c->f[4].u = rd32(c, (RW(29) + 80));
c->f[0].f = fpu(F(0) + F(7));
c->f[1].f = fpu(F(1) + F(6));
c->f[2].u = rd32(c, (RW(29) + 96));
wr32(c, (RW(29) + 72), c->f[0].u);
c->f[3].u = rd32(c, (RW(29) + 112));
wr32(c, (RW(29) + 68), c->f[1].u);
c->f[0].f = fpu(F(2) + F(4));
c->f[1].f = fpu(F(3) + F(4));
wr32(c, (RW(29) + 64), c->f[0].u);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 52), c->f[5].u);
wr32(c, (RW(29) + 48), c->f[1].u);
rd128(c, (RW(29) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(5) + 800) & ~15u, &c->r[3]);
wr128(c, (RW(5) + 816) & ~15u, &c->r[2]);
SET64(31, 0x2fde9c); wr32(c, (RW(5) + 832), RW(0)); JP_F_0015DAB0(c);
SET64(4, (s32)rd32(c, (RW(16) + 652)));
{ int t = RD(4) == RD(0); c->f[20].u = rd32(c, (RW(29) + 128)); if (t) goto L_002FDEB0; }
SET64(31, 0x2fdeb0); c->f[12].u = c->f[20].u; JP_F_00162D00(c);
L_002FDEB0:;
SET64(4, (s32)rd32(c, (RW(16) + 668)));
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002FDEC8; }
SET64(31, 0x2fdec4); c->f[12].u = c->f[20].u; JP_F_00162D00(c);
SET64(4, RD(16) + RD(0));
L_002FDEC8:;
SET64(31, 0x2fded0);  JP_F_002FD830(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_002FDEF0(Ctx *c) { /* func_002FDEF0 */
ENTER(0x2fdef0);
hle_training_battle(c);
SET32(29, RW(29) + -144);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 16), c->f[24].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = rd32(c, (RW(4) + 588));
SET64(31, 0x2fdf30); SET32(4, RW(16) + 864); JP_F_002F0D70(c);
SET64(31, 0x2fdf38); SET64(4, RD(2) + RD(0)); JP_F_002E8280(c);
SET32(4, RW(16) + 916);
SET64(31, 0x2fdf44); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(31, 0x2fdf4c); SET64(4, RD(2) + RD(0)); JP_F_002E8280(c);
SET64(4, (s16)rd16(c, (RW(16) + 1268)));
SET32(3, RW(0) + -1);
if (RD(4) != RD(3)) { SET64(31, rd64(c, (RW(29) + 96))); goto L_002FE374; }
c->f[0].u = RW(0);
c->fcc = F(0) == F(20);
if (!c->fcc) { SET64(3, (s32)rd32(c, (RW(16) + 672))); goto L_002FDF7C; }
 goto L_002FE370;
SET64(3, (s32)rd32(c, (RW(16) + 672)));
L_002FDF7C:;
SET64(2, (s64)(s32)0x530000);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x2fdf8c); c->f[12].u = rd32(c, (RW(2) + -22384)); JP_F_00173B10(c);
SET64(2, rd8(c, (RW(16) + 1888)));
if (RD(2) != RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002FDFD8; }
SET64(2, rd16(c, (RW(16) + 846)));
{ int t = RD(2) != RD(0);  if (t) goto L_002FDFAC; }
wr32(c, (RW(16) + 1884), RW(0)); goto L_002FDFD4;
L_002FDFAC:;
SET64(2, (s64)(s32)0x4c0000);
c->f[1].u = rd32(c, (RW(16) + 1884));
c->f[0].u = RW(0);
c->f[2].u = rd32(c, (RW(2) + -8160));
c->facc = fpu(F(0) + F(1));
c->f[1].f = fpu(c->facc - F(2) * F(20));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; wr32(c, (RW(16) + 1884), c->f[1].u); if (t) goto L_002FDFD4; }
wr32(c, (RW(16) + 1884), c->f[0].u);
L_002FDFD4:;
SET64(4, RD(16) + RD(0));
L_002FDFD8:;
SET64(31, 0x2fdfe0); c->f[12].u = c->f[20].u; JP_F_002FB090(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(2, RW(0) + 1);
SET64(3, RD(3) ^ 0x4);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) != RD(2);  if (t) goto L_002FE078; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(16) + RD(0));
L_002FE000:;
SET64(19, (s32)rd32(c, (RW(17) + 968)));
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2fe010); SET32(4, RW(19) + RW(1)); JP_F_00323890(c);
c->f[1].u = RW(0);
c->fcc = F(1) == F(0);
{ int t = c->fcc;  if (t) goto L_002FE068; }
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x2fe030); SET32(4, RW(19) + RW(1)); JP_F_003238B0(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002FE068; }
SET64(4, (s32)rd32(c, (RW(16) + 688)));
SET64(5, RD(18) & 0xffff);
SET32(2, RW(5) << 6);
SET32(2, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_002FE068; }
SET64(31, 0x2fe064); SET32(6, RW(0) + 1); JP_F_0031FCC0(c);
L_002FE068:;
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002FE000; } }
L_002FE078:;
SET64(31, 0x2fe080); SET64(4, RD(0) + RD(0)); JP_F_0023F760(c);
SET64(31, 0x2fe088); SET32(4, RW(0) + 1); JP_F_0023F760(c);
SET64(18, RD(0) + RD(0));
SET64(17, RD(16) + RD(0));
L_002FE090:;
SET64(4, (s32)rd32(c, (RW(17) + 976)));
{ int t = RD(4) == RD(0);  if (t) goto L_002FE0B0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2fe0ac); c->f[12].u = c->f[20].u; rt_call(c, t); }
L_002FE0B0:;
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002FE090; } }
SET64(2, (s32)rd32(c, (RW(16) + 564)));
c->f[0].u = RW(0);
c->f[22].u = rd32(c, (RW(2) + 24));
c->fcc = F(22) <= F(0);
{ int t = c->fcc; c->f[24].u = c->f[22].u; if (t) goto L_002FE280; }
c->fcc = F(22) <= F(0);
SET32(18, RW(16) + 916);
{ int t = c->fcc; SET32(17, RW(16) + 864); if (t) goto L_002FE280; }
L_002FE0E8:;
SET64(31, 0x2fe0f0);  JP_F_002C2AA0(c);
SET64(3, (s64)(s32)0x42700000);
SET64(2, (s64)(s32)0x40000000);
c->f[1].u = RW(3);
c->f[1].f = fpu_div(F(1), F(0));
c->f[0].u = RW(2);
c->f[23].f = fpu(F(0) * F(1));
c->fcc = F(24) <= F(23);
if (c->fcc) { c->f[21].u = c->f[24].u; goto L_002FE128; }
c->f[21].u = c->f[23].u; goto L_002FE128;
c->f[21].u = c->f[24].u;
L_002FE128:;
SET32(4, RW(16) + 564);
SET64(31, 0x2fe134); c->f[12].u = c->f[21].u; JP_F_00141D40(c);
c->f[24].f = fpu(F(24) - F(23));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2fe144); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET64(19, RD(2) + RD(0));
SET64(4, RD(18) + RD(0));
SET64(31, 0x2fe154); SET64(5, RD(0) + RD(0)); JP_F_002F0D70(c);
SET32(4, RW(19) + 128);
SET64(31, 0x2fe160); SET32(5, RW(2) + 128); JP_F_0031C4E0(c);
SET64(19, RD(0) + RD(0));
L_002FE168:;
SET64(3, RD(19) & 0xffff);
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(16) + RW(2));
SET64(31, 0x2fe18c); SET32(4, RW(2) + 864); JP_F_002F0B90(c);
SET32(2, RW(19) + 1);
SET64(19, RD(2) & 0xffff);
SET64(2, RSD(19) < (s64)2);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002FE168; } }
SET64(19, RD(0) + RD(0));
L_002FE1A8:;
SET64(3, RD(19) & 0xffff);
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(16) + RW(2));
SET64(31, 0x2fe1cc); SET32(4, RW(2) + 864); JP_F_002F0B60(c);
SET32(2, RW(19) + 1);
SET64(19, RD(2) & 0xffff);
SET64(2, RSD(19) < (s64)2);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002FE1A8; } }
SET64(31, 0x2fe1e8); SET64(4, RD(16) + RD(0)); JP_F_002FC2D0(c);
SET64(19, RD(0) + RD(0));
L_002FE1F0:;
SET64(3, RD(19) & 0xffff);
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(16) + RW(2));
SET64(31, 0x2fe214); SET32(4, RW(2) + 864); JP_F_002F0B30(c);
SET32(2, RW(19) + 1);
SET64(19, RD(2) & 0xffff);
SET64(2, RSD(19) < (s64)2);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002FE1F0; } }
SET64(3, (s32)rd32(c, (RW(16) + 968)));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(3) + RW(2));
SET64(2, rd8(c, (RW(2) + -30542)));
{ int t = RD(2) != RD(0);  if (t) goto L_002FE258; }
SET64(3, (s32)rd32(c, (RW(16) + 972)));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(3) + RW(2));
SET64(2, rd8(c, (RW(2) + -30542)));
{ int t = RD(2) == RD(0);  if (t) goto L_002FE260; }
L_002FE258:;
SET64(31, 0x2fe260); SET64(4, RD(16) + RD(0)); JP_F_002FD230(c);
L_002FE260:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2fe26c); c->f[12].u = c->f[21].u; JP_F_002FDDE0(c);
c->f[0].u = RW(0);
c->fcc = F(24) <= F(0);
{ int t = !c->fcc;  if (t) { POLL(); goto L_002FE0E8; } }
L_002FE280:;
SET32(4, RW(16) + 564);
SET64(31, 0x2fe28c); c->f[12].u = c->f[22].u; JP_F_00141D40(c);
c->f[3].u = rd32(c, (RW(16) + 1336));
c->f[2].u = rd32(c, (RW(16) + 1332));
c->fcc = F(2) == F(3);
if (!c->fcc) { c->f[1].u = rd32(c, (RW(16) + 1340)); goto L_002FE2B8; }
c->f[1].u = rd32(c, (RW(16) + 1344));
c->f[0].u = rd32(c, (RW(16) + 1348));
c->fcc = F(1) == F(0);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 680))); goto L_002FE34C; }
c->f[1].u = rd32(c, (RW(16) + 1340));
L_002FE2B8:;
c->f[0].f = fpu(F(2) - F(3));
c->f[21].f = fpu(F(1) * F(20));
c->f[0].u = c->f[0].u & 0x7FFFFFFFu;
c->fcc = F(0) < F(21);
if (!c->fcc) { c->f[1].u = rd32(c, (RW(16) + 1336)); goto L_002FE2E0; }
c->f[0].u = rd32(c, (RW(16) + 1336));
wr32(c, (RW(16) + 1332), c->f[0].u); goto L_002FE30C;
c->f[1].u = rd32(c, (RW(16) + 1336));
L_002FE2E0:;
SET32(4, RW(29) + 140);
c->f[0].u = rd32(c, (RW(16) + 1332));
c->f[0].f = fpu(F(1) - F(0));
SET64(31, 0x2fe2f4); wr32(c, (RW(29) + 140), c->f[0].u); JP_F_002FFCB0(c);
c->f[2].u = rd32(c, (RW(16) + 1332));
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(2));
c->f[0].f = fpu(c->facc + F(21) * F(0));
wr32(c, (RW(16) + 1332), c->f[0].u);
L_002FE30C:;
SET64(4, (s32)rd32(c, (RW(16) + 680)));
{ int t = RD(4) == RD(0);  if (t) goto L_002FE348; }
c->f[0].u = rd32(c, (RW(16) + 1332));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 124), RW(2));
wr32(c, (RW(29) + 112), c->f[0].u);
wr32(c, (RW(29) + 116), c->f[0].u);
wr32(c, (RW(29) + 120), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 188)));
{ u32 t = RW(25); SET64(31, 0x2fe340); SET32(5, RW(29) + 112); rt_call(c, t); }
c->f[0].u = rd32(c, (RW(16) + 1348));
wr32(c, (RW(16) + 1344), c->f[0].u);
L_002FE348:;
SET64(4, (s32)rd32(c, (RW(16) + 680)));
L_002FE34C:;
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002FE368; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 192)));
{ u32 t = RW(25); SET64(31, 0x2fe364); c->f[12].u = c->f[20].u; rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_002FE368:;
SET64(31, 0x2fe370); c->f[12].u = c->f[20].u; JP_F_002FB990(c);
L_002FE370:;
SET64(31, rd64(c, (RW(29) + 96)));
L_002FE374:;
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 144); return;
}

void JP_F_002FE3A0(Ctx *c) { /* func_002FE3A0 */
ENTER(0x2fe3a0);
SET64(2, (s32)rd32(c, (RW(4) + 688))); return;
}

void JP_F_002FE3B0(Ctx *c) { /* func_002FE3B0 */
ENTER(0x2fe3b0);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
c->f[0].u = RW(3);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[2].u = RW(0);
wr32(c, (RW(4) + 604), RW(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 600), RW(0));
wr8(c, (RW(4) + 596), (u8)RW(0));
wr32(c, (RW(4) + 592), RW(0));
c->f[1].u = rd32(c, (RW(4) + 584));
c->fcc = F(1) == F(0);
{ int t = c->fcc; SET32(5, RW(16) + 564); if (t) goto L_002FE410; }
wr32(c, (RW(5) + 40), c->f[2].u);
SET64(4, RD(5) + RD(0));
wr32(c, (RW(5) + 36), c->f[2].u);
wr8(c, (RW(5) + 32), (u8)RW(0));
wr32(c, (RW(5) + 20), c->f[0].u);
c->f[1].u = rd32(c, (RW(5) + 24));
c->f[0].u = rd32(c, (RW(5) + 20));
SET64(31, 0x2fe410); c->f[12].f = fpu(F(1) * F(0)); JP_F_00141D40(c);
L_002FE410:;
wr32(c, (RW(16) + 648), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 644), RW(0));
c->f[0].u = RW(3);
wr8(c, (RW(16) + 640), (u8)RW(0));
wr32(c, (RW(16) + 636), RW(0));
c->f[2].u = RW(0);
c->f[1].u = rd32(c, (RW(16) + 628));
c->fcc = F(1) == F(0);
{ int t = c->fcc; SET32(4, RW(16) + 608); if (t) goto L_002FE45C; }
wr32(c, (RW(4) + 40), c->f[2].u);
wr32(c, (RW(4) + 36), c->f[2].u);
wr8(c, (RW(4) + 32), (u8)RW(0));
wr32(c, (RW(4) + 20), c->f[0].u);
c->f[1].u = rd32(c, (RW(4) + 24));
c->f[0].u = rd32(c, (RW(4) + 20));
SET64(31, 0x2fe45c); c->f[12].f = fpu(F(1) * F(0)); JP_F_00141D40(c);
L_002FE45C:;
wr32(c, (RW(16) + 904), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 900), RW(0));
c->f[0].u = RW(3);
wr8(c, (RW(16) + 896), (u8)RW(0));
wr32(c, (RW(16) + 892), RW(0));
c->f[2].u = RW(0);
c->f[1].u = rd32(c, (RW(16) + 884));
c->fcc = F(1) == F(0);
{ int t = c->fcc; SET32(4, RW(16) + 864); if (t) goto L_002FE4A8; }
wr32(c, (RW(4) + 40), c->f[2].u);
wr32(c, (RW(4) + 36), c->f[2].u);
wr8(c, (RW(4) + 32), (u8)RW(0));
wr32(c, (RW(4) + 20), c->f[0].u);
c->f[1].u = rd32(c, (RW(4) + 24));
c->f[0].u = rd32(c, (RW(4) + 20));
SET64(31, 0x2fe4a8); c->f[12].f = fpu(F(1) * F(0)); JP_F_00141D40(c);
L_002FE4A8:;
wr32(c, (RW(16) + 956), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 952), RW(0));
c->f[0].u = RW(3);
wr8(c, (RW(16) + 948), (u8)RW(0));
wr32(c, (RW(16) + 944), RW(0));
c->f[2].u = RW(0);
c->f[1].u = rd32(c, (RW(16) + 936));
c->fcc = F(1) == F(0);
{ int t = c->fcc; SET32(4, RW(16) + 916); if (t) goto L_002FE4F4; }
wr32(c, (RW(4) + 40), c->f[2].u);
wr32(c, (RW(4) + 36), c->f[2].u);
wr8(c, (RW(4) + 32), (u8)RW(0));
wr32(c, (RW(4) + 20), c->f[0].u);
c->f[1].u = rd32(c, (RW(4) + 24));
c->f[0].u = rd32(c, (RW(4) + 20));
SET64(31, 0x2fe4f4); c->f[12].f = fpu(F(1) * F(0)); JP_F_00141D40(c);
L_002FE4F4:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002FE510(Ctx *c) { /* func_002FE510 */
ENTER(0x2fe510);
SET32(29, RW(29) + -32);
SET64(5, RD(5) & 0xffff);
wr64(c, (RW(29) + 16), RD(31));
SET32(3, RW(0) + 3);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[21].u = c->f[12].u;
{ int t = RD(5) == RD(3); c->f[20].u = c->f[13].u; if (t) goto L_002FE574; }
SET32(3, RW(0) + 2);
if (RD(5) == RD(3)) { SET64(5, RD(6) & 0xffff); goto L_002FE554; }
SET32(3, RW(0) + 1);
if (RD(5) == RD(3)) { SET32(4, RW(4) + 608); goto L_002FE59C; }
SET32(4, RW(4) + 564); goto L_002FE59C;
L_002FE554:;
SET32(3, RW(5) << 1);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 2);
SET32(3, RW(4) + RW(3));
SET32(4, RW(3) + 864); goto L_002FE59C;
L_002FE574:;
SET64(3, RD(6) & 0xffff);
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(4) + RW(2));
SET64(31, 0x2fe598); SET32(4, RW(2) + 864); JP_F_002F0BC0(c);
SET64(4, RD(2) + RD(0));
L_002FE59C:;
c->f[1].u = RW(0);
c->fcc = F(1) == F(21);
{ int t = !c->fcc;  if (t) goto L_002FE5C4; }
wr32(c, (RW(4) + 40), c->f[1].u);
wr32(c, (RW(4) + 36), c->f[1].u);
wr8(c, (RW(4) + 32), (u8)RW(0));
wr32(c, (RW(4) + 28), c->f[1].u); goto L_002FE60C;
L_002FE5C4:;
c->fcc = F(1) == F(20);
if (c->fcc) { wr32(c, (RW(4) + 40), c->f[1].u); goto L_002FE600; }
c->f[0].f = fpu_div(F(21), F(20));
c->f[13].f = fpu(F(20) * F(20));
wr32(c, (RW(4) + 40), c->f[1].u);
wr32(c, (RW(4) + 36), c->f[1].u);
wr8(c, (RW(4) + 32), (u8)RW(0));
c->f[12].f = fpu(F(0) * F(13));
SET64(31, 0x2fe5f8); wr32(c, (RW(4) + 28), c->f[1].u); JP_F_00142050(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_002FE610;
L_002FE600:;
wr32(c, (RW(4) + 36), c->f[1].u);
wr8(c, (RW(4) + 32), (u8)RW(0));
wr32(c, (RW(4) + 28), c->f[21].u);
L_002FE60C:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002FE610:;
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 32); return;
}

void JP_F_002FE620(Ctx *c) { /* func_002FE620 */
ENTER(0x2fe620);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2fe630);  JP_F_002FE670(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002FE644; }
SET64(2, RD(0) + RD(0)); goto L_002FE664;
L_002FE644:;
SET64(31, 0x2fe64c);  JP_F_00139590(c);
SET64(31, 0x2fe654);  JP_F_00139590(c);
SET64(31, 0x2fe65c); SET64(4, (s32)rd32(c, (RW(2) + 20))); JP_F_001B85D0(c);
SET64(2, RD(2) & 0xff);
SET64(2, RD(0) < RD(2));
L_002FE664:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002FE670(Ctx *c) { /* func_002FE670 */
ENTER(0x2fe670);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 672)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2fe69c); SET64(17, RD(0) + (s64)1); rt_call(c, t); }
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 676))); goto L_002FE6B0; }
SET64(17, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 676)));
L_002FE6B0:;
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2fe6c4);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 680))); goto L_002FE6D8; }
SET64(17, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 680)));
L_002FE6D8:;
if (RD(4) == RD(0)) { SET64(16, RD(0) + RD(0)); goto L_002FE704; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2fe6f0);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002FE700; }
SET64(17, RD(0) + RD(0));
L_002FE700:;
SET64(16, RD(0) + RD(0));
L_002FE704:;
SET64(3, RD(16) & 0xffff);
L_002FE708:;
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(18) + RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 876)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2fe730); SET32(4, RW(2) + 864); rt_call(c, t); }
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002FE740; }
SET64(17, RD(0) + RD(0));
L_002FE740:;
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
SET64(2, RSD(16) < (s64)2);
if (RD(2) != RD(0)) { SET64(3, RD(16) & 0xffff); { POLL(); goto L_002FE708; } }
SET64(31, 0x2fe75c); SET64(4, (s32)rd32(c, (RW(18) + 688))); JP_F_00321040(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 692))); goto L_002FE770; }
SET64(17, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 692)));
L_002FE770:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 1536))); goto L_002FE79C; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2fe788);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002FE798; }
SET64(17, RD(0) + RD(0));
L_002FE798:;
SET64(4, (s32)rd32(c, (RW(18) + 1536)));
L_002FE79C:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 664))); goto L_002FE7C8; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2fe7b4);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002FE7C4; }
SET64(17, RD(0) + RD(0));
L_002FE7C4:;
SET64(4, (s32)rd32(c, (RW(18) + 664)));
L_002FE7C8:;
SET64(31, 0x2fe7d0);  JP_F_003BDFC0(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(16, RD(0) + RD(0)); goto L_002FE7E4; }
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_002FE7E4:;
SET64(2, (s32)rd32(c, (RW(18) + 1500)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2fe7fc);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET32(16, RW(16) + 1); goto L_002FE810; }
SET64(17, RD(0) + RD(0)); goto L_002FE820;
L_002FE810:;
SET64(2, RD(16) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_002FE7E4; } }
L_002FE820:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002FE840(Ctx *c) { /* func_002FE840 */
ENTER(0x2fe840);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s32)rd32(c, (RW(4) + 652)));
{ int t = RD(5) == RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_002FE864; }
SET32(5, RW(5) + 672);
L_002FE864:;
SET64(31, 0x2fe86c); SET64(4, (s32)rd32(c, (RW(18) + 688))); JP_F_00321110(c);
SET64(2, (s32)rd32(c, (RW(18) + 652)));
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 668)));
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 672)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2fe890);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 676)));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2fe8a4); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_002FE8AC:;
SET64(2, (s32)rd32(c, (RW(16) + 1500)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2fe8bc); SET64(4, (s32)rd32(c, (RW(2) + 256))); JP_F_00141B90(c);
SET64(3, RD(2) ^ 0x1);
SET32(2, RW(0) + 1);
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) != RD(2);  if (t) goto L_002FE8E8; }
SET64(4, (s32)rd32(c, (RW(16) + 1500)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2fe8e4); SET64(5, (s32)rd32(c, (RW(18) + 656))); rt_call(c, t); }
L_002FE8E8:;
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002FE8AC; } }
SET64(31, 0x2fe900); SET64(4, (s32)rd32(c, (RW(18) + 664))); JP_F_003BE020(c);
SET64(4, (s32)rd32(c, (RW(18) + 680)));
if (RD(4) == RD(0)) { SET64(16, RD(0) + RD(0)); goto L_002FE924; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(6, (s32)rd32(c, (RW(18) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2fe920); SET64(5, (s32)rd32(c, (RW(18) + 656))); rt_call(c, t); }
SET64(16, RD(0) + RD(0));
L_002FE924:;
SET64(3, RD(16) & 0xffff);
L_002FE928:;
SET64(5, (s32)rd32(c, (RW(18) + 660)));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(18) + RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 876)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2fe954); SET32(4, RW(2) + 864); rt_call(c, t); }
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
SET64(2, RSD(16) < (s64)2);
if (RD(2) != RD(0)) { SET64(3, RD(16) & 0xffff); { POLL(); goto L_002FE928; } }
SET64(31, 0x2fe970); SET64(4, (s32)rd32(c, (RW(18) + 692))); JP_F_0023F3E0(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002FE990(Ctx *c) { /* func_002FE990 */
ENTER(0x2fe990);
 return;
}

void JP_F_002FE9A0(Ctx *c) { /* func_002FE9A0 */
ENTER(0x2fe9a0);
SET32(29, RW(29) + -80);
SET32(3, RW(0) + 2);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(4, RD(5) & 0xffff);
{ int t = RD(4) == RD(3); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_002FEB88; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(17, RD(0) + RD(0)); goto L_002FEACC; }
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 652))); goto L_002FE9E0; }
SET64(31, rd64(c, (RW(29) + 48))); goto L_002FEBA8;
L_002FE9E0:;
wr8(c, (RW(2) + 228), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 668)));
SET64(31, 0x2fe9f0); wr8(c, (RW(2) + 228), (u8)RW(3)); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 672))); goto L_002FEA04; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(18) + 672)));
L_002FEA04:;
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2fea14);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 676)));
SET64(25, (s32)rd32(c, (RW(4) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2fea28); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 676)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2fea44); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 680)));
if (RD(4) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_002FEABC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(6, (s32)rd32(c, (RW(18) + 660)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2fea64); SET64(5, (s32)rd32(c, (RW(18) + 656))); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x3dcc0000);
wr32(c, (RW(18) + 1332), RW(3));
SET64(2, RD(2) | 0xcccd);
wr32(c, (RW(18) + 1336), RW(3));
wr32(c, (RW(18) + 1340), RW(2));
wr32(c, (RW(18) + 1348), RW(3));
wr32(c, (RW(18) + 1344), RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 680)));
{ int t = RD(4) == RD(0);  if (t) goto L_002FEAB8; }
c->f[1].u = rd32(c, (RW(18) + 1348));
c->f[0].u = rd32(c, (RW(18) + 1332));
wr32(c, (RW(29) + 76), c->f[1].u);
wr32(c, (RW(29) + 64), c->f[0].u);
wr32(c, (RW(29) + 68), c->f[0].u);
wr32(c, (RW(29) + 72), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 188)));
{ u32 t = RW(25); SET64(31, 0x2feab8); SET32(5, RW(29) + 64); rt_call(c, t); }
L_002FEAB8:;
SET64(4, RD(18) + RD(0));
L_002FEABC:;
SET64(31, 0x2feac4); SET64(5, RD(0) + RD(0)); JP_F_002FD7E0(c);
 goto L_002FEBA4;
L_002FEACC:;
SET64(16, RD(18) + RD(0));
L_002FEAD0:;
SET64(2, (s32)rd32(c, (RW(16) + 1500)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2feae0); SET64(4, (s32)rd32(c, (RW(2) + 256))); JP_F_00141B90(c);
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
{ int t = RD(2) != RD(0);  if (t) goto L_002FEB28; }
SET64(4, (s32)rd32(c, (RW(16) + 1500)));
SET64(5, (s32)rd32(c, (RW(18) + 656)));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2feb08); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 1500)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2feb24); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002FEB28:;
SET32(17, RW(17) + 1);
SET64(2, RD(17) < (u64)(s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002FEAD0; } }
SET64(16, RD(0) + RD(0));
SET64(3, RD(16) & 0xffff);
L_002FEB40:;
SET64(5, (s32)rd32(c, (RW(18) + 660)));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(18) + RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 876)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2feb6c); SET32(4, RW(2) + 864); rt_call(c, t); }
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(3, RSD(16) < (s64)2);
if (RD(3) != RD(0)) { SET64(3, RD(16) & 0xffff); { POLL(); goto L_002FEB40; } }
 goto L_002FEBA4;
L_002FEB88:;
SET64(5, (s32)rd32(c, (RW(18) + 652)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 688))); goto L_002FEB9C; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(18) + 688)));
L_002FEB9C:;
SET64(31, 0x2feba4);  JP_F_003211C0(c);
L_002FEBA4:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002FEBA8:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002FEBC0(Ctx *c) { /* func_002FEBC0 */
ENTER(0x2febc0);
 return;
}

void JP_F_002FEBD0(Ctx *c) { /* func_002FEBD0 */
ENTER(0x2febd0);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
wr8(c, (RW(4) + 720), (u8)RW(0));
wr8(c, (RW(4) + 721), (u8)RW(2));
SET64(31, 0x2febec); wr8(c, (RW(4) + 722), (u8)RW(2)); JP_F_00139590(c);
SET64(31, 0x2febf4);  JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 20)));
wr32(c, (RW(3) + 12), RW(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002FEC10(Ctx *c) { /* func_002FEC10 */
ENTER(0x2fec10);
SET32(29, RW(29) + -48);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 32), RD(31));
SET32(6, RW(0) + 13);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr8(c, (RW(4) + 720), (u8)RW(2));
SET64(16, RD(5) + RD(0));
wr8(c, (RW(4) + 721), (u8)RW(0));
SET32(8, RW(16) + 4);
wr8(c, (RW(4) + 722), (u8)RW(0));
SET32(7, RW(17) + 732);
wr8(c, (RW(4) + 723), (u8)RW(0));
wr8(c, (RW(4) + 1328), (u8)RW(0));
wr32(c, (RW(4) + 1320), RW(0));
wr8(c, (RW(4) + 724), (u8)RW(0));
wr8(c, (RW(4) + 725), (u8)RW(0));
SET64(2, rd16(c, (RW(5) + 0)));
wr16(c, (RW(4) + 728), (u16)RW(2));
SET64(2, rd8(c, (RW(5) + 2)));
wr8(c, (RW(4) + 730), (u8)RW(2));
L_002FEC68:;
SET64(3, (s32)rd32(c, (RW(8) + 0)));
SET32(6, RW(6) + -1);
SET64(2, (s32)rd32(c, (RW(8) + 4)));
wr32(c, (RW(7) + 0), RW(3));
SET32(8, RW(8) + 8);
wr32(c, (RW(7) + 4), RW(2));
{ int t = RSD(6) > 0; SET32(7, RW(7) + 8); if (t) { POLL(); goto L_002FEC68; } }
c->f[1].u = rd32(c, (RW(16) + 108));
SET64(4, RD(17) + RD(0));
c->f[0].u = rd32(c, (RW(16) + 112));
wr32(c, (RW(17) + 836), c->f[1].u);
wr32(c, (RW(17) + 840), c->f[0].u);
SET64(2, rd16(c, (RW(16) + 116)));
wr16(c, (RW(17) + 844), (u16)RW(2));
SET64(2, rd16(c, (RW(16) + 118)));
wr16(c, (RW(17) + 846), (u16)RW(2));
SET64(2, rd8(c, (RW(16) + 120)));
wr8(c, (RW(17) + 848), (u8)RW(2));
SET64(2, rd16(c, (RW(16) + 122)));
wr16(c, (RW(17) + 850), (u16)RW(2));
SET64(2, rd8(c, (RW(16) + 124)));
wr8(c, (RW(17) + 852), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 128)));
SET64(31, 0x2fecd0); wr32(c, (RW(17) + 856), RW(2)); JP_F_002F1650(c);
wr8(c, (RW(17) + 1892), (u8)RW(0));
SET64(2, (s64)(s32)0x4c0000);
wr8(c, (RW(17) + 1893), (u8)RW(0));
c->f[0].u = rd32(c, (RW(2) + -4800));
SET32(3, RW(0) + -1);
wr8(c, (RW(17) + 1894), (u8)RW(0));
wr16(c, (RW(17) + 1896), (u16)RW(3));
wr8(c, (RW(17) + 1898), (u8)RW(0));
SET32(2, RW(0) + 3);
wr8(c, (RW(17) + 1899), (u8)RW(0));
wr8(c, (RW(17) + 1900), (u8)RW(0));
wr8(c, (RW(17) + 1901), (u8)RW(0));
wr32(c, (RW(17) + 1904), RW(0));
wr8(c, (RW(17) + 1908), (u8)RW(0));
wr8(c, (RW(17) + 1909), (u8)RW(0));
wr16(c, (RW(17) + 1910), (u16)RW(0));
wr16(c, (RW(17) + 1912), (u16)RW(0));
wr32(c, (RW(17) + 1916), c->f[0].u);
wr8(c, (RW(17) + 1920), (u8)RW(0));
wr16(c, (RW(17) + 1922), (u16)RW(0));
wr16(c, (RW(17) + 1924), (u16)RW(0));
SET64(3, rd16(c, (RW(17) + 850)));
wr16(c, (RW(17) + 1910), (u16)RW(3));
SET64(3, rd16(c, (RW(17) + 728)));
if (RD(3) != RD(2)) { SET64(6, RD(0) + RD(0)); goto L_002FEDD8; }
SET64(5, rd16(c, (RW(17) + 850)));
SET64(31, 0x2fed44); SET64(4, (s32)rd32(c, (RW(28) + -29612))); JP_F_0032A6D0(c);
SET64(3, rd16(c, (RW(2) + 0)));
wr16(c, (RW(17) + 784), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 2)));
wr16(c, (RW(17) + 786), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 4)));
wr16(c, (RW(17) + 788), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 6)));
wr16(c, (RW(17) + 790), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 8)));
wr16(c, (RW(17) + 792), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 10)));
wr16(c, (RW(17) + 794), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 12)));
wr16(c, (RW(17) + 796), (u16)RW(3));
SET64(3, rd16(c, (RW(2) + 14)));
wr16(c, (RW(17) + 798), (u16)RW(3));
c->f[3].u = rd32(c, (RW(2) + 16));
c->f[2].u = rd32(c, (RW(2) + 20));
c->f[1].u = rd32(c, (RW(2) + 24));
c->f[0].u = rd32(c, (RW(2) + 28));
wr32(c, (RW(17) + 800), c->f[3].u);
wr32(c, (RW(17) + 804), c->f[2].u);
wr32(c, (RW(17) + 808), c->f[1].u);
wr32(c, (RW(17) + 812), c->f[0].u);
c->f[3].u = rd32(c, (RW(2) + 32));
c->f[2].u = rd32(c, (RW(2) + 36));
c->f[1].u = rd32(c, (RW(2) + 40));
c->f[0].u = rd32(c, (RW(2) + 44));
wr32(c, (RW(17) + 816), c->f[3].u);
wr32(c, (RW(17) + 820), c->f[2].u);
wr32(c, (RW(17) + 824), c->f[1].u);
wr32(c, (RW(17) + 828), c->f[0].u);
c->f[0].u = rd32(c, (RW(2) + 48));
wr32(c, (RW(17) + 832), c->f[0].u);
SET64(2, rd16(c, (RW(17) + 1910)));
wr16(c, (RW(17) + 1922), (u16)RW(2)); goto L_002FEE90;
L_002FEDD8:;
SET64(5, RD(17) + RD(0));
SET64(4, RD(17) + RD(0));
L_002FEDE0:;
SET64(3, (s32)rd32(c, (RW(5) + 836)));
{ int t = RD(3) == RD(0);  if (t) goto L_002FEE78; }
SET64(2, rd16(c, (RW(3) + 0)));
wr16(c, (RW(4) + 732), (u16)RW(2));
SET64(2, rd16(c, (RW(3) + 2)));
wr16(c, (RW(4) + 734), (u16)RW(2));
SET64(2, rd16(c, (RW(3) + 4)));
wr16(c, (RW(4) + 736), (u16)RW(2));
SET64(2, rd16(c, (RW(3) + 6)));
wr16(c, (RW(4) + 738), (u16)RW(2));
SET64(2, rd16(c, (RW(3) + 8)));
wr16(c, (RW(4) + 740), (u16)RW(2));
SET64(2, rd16(c, (RW(3) + 10)));
wr16(c, (RW(4) + 742), (u16)RW(2));
SET64(2, rd16(c, (RW(3) + 12)));
wr16(c, (RW(4) + 744), (u16)RW(2));
SET64(2, rd16(c, (RW(3) + 14)));
wr16(c, (RW(4) + 746), (u16)RW(2));
c->f[3].u = rd32(c, (RW(3) + 16));
c->f[2].u = rd32(c, (RW(3) + 20));
c->f[1].u = rd32(c, (RW(3) + 24));
c->f[0].u = rd32(c, (RW(3) + 28));
wr32(c, (RW(4) + 748), c->f[3].u);
wr32(c, (RW(4) + 752), c->f[2].u);
wr32(c, (RW(4) + 756), c->f[1].u);
wr32(c, (RW(4) + 760), c->f[0].u);
c->f[3].u = rd32(c, (RW(3) + 32));
c->f[2].u = rd32(c, (RW(3) + 36));
c->f[1].u = rd32(c, (RW(3) + 40));
c->f[0].u = rd32(c, (RW(3) + 44));
wr32(c, (RW(4) + 764), c->f[3].u);
wr32(c, (RW(4) + 768), c->f[2].u);
wr32(c, (RW(4) + 772), c->f[1].u);
wr32(c, (RW(4) + 776), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 48));
wr32(c, (RW(4) + 780), c->f[0].u);
L_002FEE78:;
SET32(6, RW(6) + 1);
SET64(2, RD(6) < (u64)(s64)2);
SET32(5, RW(5) + 4);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 52); if (t) { POLL(); goto L_002FEDE0; } }
L_002FEE90:;
SET64(2, rd8(c, (RW(16) + 2)));
if (RD(2) == RD(0)) { SET64(25, (s32)rd32(c, (RW(17) + 56))); goto L_002FEEA4; }
wr16(c, (RW(17) + 846), (u16)RW(0));
SET64(25, (s32)rd32(c, (RW(17) + 56)));
L_002FEEA4:;
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2feeb4); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, 0x2feebc);  JP_F_0023F590(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002FEED0(Ctx *c) { /* func_002FEED0 */
ENTER(0x2feed0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2feef8); SET32(4, RW(0) + 1424); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002FEF18; }
SET32(6, RW(0) + 100);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 6144);
SET64(7, RD(6) + RD(0));
SET64(31, 0x2fef18); SET64(8, RD(6) + RD(0)); JP_F_00162820(c);
L_002FEF18:;
wr32(c, (RW(17) + 652), RW(16));
SET64(2, (s64)(s32)0x4c0000);
SET64(16, RD(18) & 0xffff);
SET32(2, RW(2) + -15680);
SET32(3, RW(16) << 4);
SET32(5, RW(2) + RW(3));
SET64(3, rd8(c, (RW(5) + 9)));
SET64(2, rd8(c, (RW(5) + 10)));
SET64(4, rd8(c, (RW(5) + 8)));
wr8(c, (RW(29) + 109), (u8)RW(3));
wr8(c, (RW(29) + 110), (u8)RW(2));
SET64(3, rd8(c, (RW(5) + 11)));
SET64(2, rd8(c, (RW(5) + 12)));
wr8(c, (RW(29) + 108), (u8)RW(4));
{ int t = RSD(2) < 0; wr8(c, (RW(29) + 111), (u8)RW(3)); if (t) goto L_002FEF64; }
c->f[0].u = RW(2);
c->f[14].f = (f32)(s32)c->f[0].u; goto L_002FEF80;
L_002FEF64:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[14].f = (f32)(s32)c->f[0].u;
c->f[14].f = fpu(F(14) + F(14));
L_002FEF80:;
SET64(2, rd8(c, (RW(5) + 13)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002FEF98; }
c->f[0].u = RW(2);
c->f[15].f = (f32)(s32)c->f[0].u; goto L_002FEFB0;
L_002FEF98:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[15].f = (f32)(s32)c->f[0].u;
c->f[15].f = fpu(F(15) + F(15));
L_002FEFB0:;
c->f[12].u = rd32(c, (RW(5) + 0));
SET64(4, (s32)rd32(c, (RW(17) + 652)));
c->f[13].u = rd32(c, (RW(5) + 4));
SET64(31, 0x2fefc4); SET32(5, RW(29) + 108); JP_F_00162AA0(c);
SET64(31, 0x2fefcc); SET32(4, RW(0) + 496); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002FF024; }
SET32(5, RW(0) + 60);
SET64(4, RD(19) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x2fefe8); SET64(7, RD(5) + RD(0)); JP_F_002A6630(c);
SET32(18, RW(19) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(18) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2ff000); wr32(c, (RW(19) + 240), RW(4)); JP_F_002AE1F0(c);
SET64(31, 0x2ff008); SET32(4, RW(18) + 32); JP_F_002A88F0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 240), RW(18));
SET32(2, RW(2) + -3920);
SET64(4, RD(19) + RD(0));
wr32(c, (RW(19) + 144), RW(2));
SET64(31, 0x2ff024); SET32(5, RW(19) + 272); JP_F_002A6520(c);
L_002FF024:;
SET32(4, RW(0) + 496);
SET64(31, 0x2ff030); wr32(c, (RW(17) + 656), RW(19)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002FF088; }
SET32(5, RW(0) + 60);
SET64(4, RD(19) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x2ff04c); SET64(7, RD(5) + RD(0)); JP_F_002A6630(c);
SET32(18, RW(19) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(18) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2ff064); wr32(c, (RW(19) + 240), RW(4)); JP_F_002AE1F0(c);
SET64(31, 0x2ff06c); SET32(4, RW(18) + 32); JP_F_002A88F0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 240), RW(18));
SET32(2, RW(2) + -3920);
SET64(4, RD(19) + RD(0));
wr32(c, (RW(19) + 144), RW(2));
SET64(31, 0x2ff088); SET32(5, RW(19) + 272); JP_F_002A6520(c);
L_002FF088:;
SET32(4, RW(0) + 8);
SET64(31, 0x2ff094); wr32(c, (RW(17) + 660), RW(19)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002FF0A4; }
SET64(31, 0x2ff0a4); SET64(4, RD(18) + RD(0)); JP_F_003BE340(c);
L_002FF0A4:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2ff0b0); wr32(c, (RW(17) + 664), RW(18)); JP_F_003BE270(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ff0bc); SET64(5, RD(0) + RD(0)); JP_F_002FD7E0(c);
SET64(31, 0x2ff0c4); SET32(4, RW(0) + 928); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002FF0DC; }
SET64(5, (s32)rd32(c, (RW(28) + -29932)));
SET64(4, RD(18) + RD(0));
SET64(31, 0x2ff0dc); SET64(6, RD(0) | 0xc000); JP_F_001632E0(c);
L_002FF0DC:;
SET64(31, 0x2ff0e4); wr32(c, (RW(17) + 668), RW(18)); JP_F_002C29D0(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(18, (s32)c->f[0].u);
SET64(31, 0x2ff0f4);  JP_F_002C2A00(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
wr32(c, (RW(29) + 92), RW(18));
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 84), RW(0));
SET64(2, (s32)c->f[0].u);
wr32(c, (RW(29) + 88), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 668)));
SET64(31, 0x2ff11c); SET32(5, RW(29) + 80); JP_F_00162E90(c);
SET64(2, (s32)rd32(c, (RW(17) + 668)));
SET64(2, (s32)rd32(c, (RW(2) + 236)));
wr8(c, (RW(2) + 324), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 668)));
SET64(31, 0x2ff134); SET64(5, RD(0) + RD(0)); JP_F_001630B0(c);
SET64(2, (s32)rd32(c, (RW(17) + 668)));
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 668)));
SET64(4, (s32)rd32(c, (RW(2) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2ff150); SET64(5, (s32)rd32(c, (RW(17) + 656))); JP_F_002ADFE0(c);
SET64(2, (s32)rd32(c, (RW(17) + 668)));
SET64(4, (s32)rd32(c, (RW(2) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2ff164); SET64(5, (s32)rd32(c, (RW(17) + 660))); JP_F_002ADFE0(c);
SET64(3, RD(16) & 0xffff);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -15680);
SET32(3, RW(3) << 4);
SET32(5, RW(2) + RW(3));
SET64(3, rd8(c, (RW(5) + 9)));
SET64(2, rd8(c, (RW(5) + 10)));
SET64(4, rd8(c, (RW(5) + 8)));
wr8(c, (RW(29) + 105), (u8)RW(3));
wr8(c, (RW(29) + 106), (u8)RW(2));
SET64(3, rd8(c, (RW(5) + 11)));
SET64(2, rd8(c, (RW(5) + 12)));
wr8(c, (RW(29) + 104), (u8)RW(4));
{ int t = RSD(2) < 0; wr8(c, (RW(29) + 107), (u8)RW(3)); if (t) goto L_002FF1AC; }
c->f[0].u = RW(2);
c->f[14].f = (f32)(s32)c->f[0].u; goto L_002FF1C8;
L_002FF1AC:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[14].f = (f32)(s32)c->f[0].u;
c->f[14].f = fpu(F(14) + F(14));
L_002FF1C8:;
SET64(2, rd8(c, (RW(5) + 13)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002FF1E0; }
c->f[0].u = RW(2);
c->f[15].f = (f32)(s32)c->f[0].u; goto L_002FF1F8;
L_002FF1E0:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[15].f = (f32)(s32)c->f[0].u;
c->f[15].f = fpu(F(15) + F(15));
L_002FF1F8:;
c->f[12].u = rd32(c, (RW(5) + 0));
SET64(4, (s32)rd32(c, (RW(17) + 668)));
c->f[13].u = rd32(c, (RW(5) + 4));
SET64(31, 0x2ff20c); SET32(5, RW(29) + 104); JP_F_00162AA0(c);
SET64(3, (s32)rd32(c, (RW(17) + 668)));
wr32(c, (RW(28) + -30240), RW(3));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002FF230(Ctx *c) { /* func_002FF230 */
ENTER(0x2ff230);
SET32(29, RW(29) + -64);
SET32(5, RW(0) + 2048);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2ff24c); wr128(c, (RW(29) + 16) & ~15u, &c->r[16]); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31216);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 56), RW(2));
SET32(3, RW(3) + -31208);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -31196);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 36), RW(2));
SET64(5, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -31120);
wr16(c, (RW(17) + 60), (u16)RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 56), RW(3));
SET32(4, RW(4) + -31112);
SET32(2, RW(2) + -31100);
wr32(c, (RW(17) + 20), RW(4));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 36), RW(2));
SET64(4, (s64)(s32)0x4e0000);
wr8(c, (RW(17) + 64), (u8)RW(0));
SET32(3, RW(3) + 15824);
wr8(c, (RW(17) + 65), (u8)RW(0));
SET32(5, RW(5) + 15832);
wr32(c, (RW(17) + 56), RW(3));
SET32(4, RW(4) + 15844);
wr32(c, (RW(17) + 20), RW(5));
SET32(2, RW(17) + 68);
SET32(3, RW(0) + -1);
wr32(c, (RW(17) + 36), RW(4));
wr16(c, (RW(17) + 148), (u16)RW(3));
SET32(2, RW(2) + 248);
SET32(11, RW(17) + 564);
wr8(c, (RW(17) + 150), (u8)RW(0));
SET64(1, RD(2) < RD(11));
{ int t = RD(1) == RD(0); wr8(c, (RW(17) + 151), (u8)RW(0)); if (t) goto L_002FF448; }
SET32(10, RW(17) + 316);
SET64(3, (s64)(s32)0x84210000);
SET32(9, RW(11) - RW(10));
SET64(3, RD(3) | 0x843);
SET32(8, RW(9) + 247);
mul_s(c, 0, 0, RSW(3), RSW(8));
SET32(4, RW(8) >> 31);
SET64(3, c->hi.d[0]);
SET32(3, RW(3) + RW(8));
SET32(3, RSW(3) >> 7);
SET32(7, RW(3) + RW(4));
SET32(6, RW(7) + 1);
SET64(1, RSD(6) < (s64)9);
{ int t = RD(1) != RD(0); SET32(5, RW(17) + -1420); if (t) goto L_002FF418; }
SET64(1, RD(11) < RD(10));
SET64(13, RD(0) + RD(0));
{ int t = RD(1) != RD(0); SET64(12, RD(0) + RD(0)); if (t) goto L_002FF364; }
SET64(4, (s64)(s32)0x80000000);
SET64(3, RD(9) & RD(4));
{ int t = RD(3) != RD(0); SET64(10, RD(0) + (s64)1); if (t) goto L_002FF358; }
SET64(3, RD(8) & RD(4));
{ int t = RD(3) == RD(0);  if (t) goto L_002FF358; }
SET64(10, RD(0) + RD(0));
L_002FF358:;
{ int t = RD(10) == RD(0);  if (t) goto L_002FF364; }
SET64(12, RD(0) + (s64)1);
L_002FF364:;
{ int t = RD(12) == RD(0);  if (t) goto L_002FF398; }
SET64(3, (s64)(s32)0x80000000);
SET64(4, RD(7) & RD(3));
{ int t = RD(4) != RD(0); SET64(8, RD(0) + (s64)1); if (t) goto L_002FF38C; }
SET64(3, RD(6) & RD(3));
{ int t = RD(4) == RD(3);  if (t) goto L_002FF38C; }
SET64(8, RD(0) + RD(0));
L_002FF38C:;
{ int t = RD(8) == RD(0);  if (t) goto L_002FF398; }
SET64(13, RD(0) + (s64)1);
L_002FF398:;
{ int t = RD(13) == RD(0);  if (t) goto L_002FF418; }
SET32(4, RW(0) + -1);
wr16(c, (RW(2) + 80), (u16)RW(4));
L_002FF3A8:;
wr8(c, (RW(2) + 82), (u8)RW(0));
wr8(c, (RW(2) + 83), (u8)RW(0));
wr16(c, (RW(2) + 328), (u16)RW(4));
wr8(c, (RW(2) + 330), (u8)RW(0));
wr8(c, (RW(2) + 331), (u8)RW(0));
wr16(c, (RW(2) + 576), (u16)RW(4));
wr8(c, (RW(2) + 578), (u8)RW(0));
wr8(c, (RW(2) + 579), (u8)RW(0));
wr16(c, (RW(2) + 824), (u16)RW(4));
wr8(c, (RW(2) + 826), (u8)RW(0));
wr8(c, (RW(2) + 827), (u8)RW(0));
wr16(c, (RW(2) + 1072), (u16)RW(4));
wr8(c, (RW(2) + 1074), (u8)RW(0));
wr8(c, (RW(2) + 1075), (u8)RW(0));
wr16(c, (RW(2) + 1320), (u16)RW(4));
wr8(c, (RW(2) + 1322), (u8)RW(0));
wr8(c, (RW(2) + 1323), (u8)RW(0));
wr16(c, (RW(2) + 1568), (u16)RW(4));
wr8(c, (RW(2) + 1570), (u8)RW(0));
wr8(c, (RW(2) + 1571), (u8)RW(0));
wr16(c, (RW(2) + 1816), (u16)RW(4));
wr8(c, (RW(2) + 1818), (u8)RW(0));
wr8(c, (RW(2) + 1819), (u8)RW(0));
SET32(2, RW(2) + 1984);
SET64(3, RD(2) < RD(5));
if (RD(3) != RD(0)) { wr16(c, (RW(2) + 80), (u16)RW(4)); { POLL(); goto L_002FF3A8; } }
L_002FF418:;
SET32(5, RW(17) + 564);
SET64(1, RD(2) < RD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002FF448; }
SET32(4, RW(0) + -1);
L_002FF42C:;
wr16(c, (RW(2) + 80), (u16)RW(4));
wr8(c, (RW(2) + 82), (u8)RW(0));
wr8(c, (RW(2) + 83), (u8)RW(0));
SET32(2, RW(2) + 248);
SET64(3, RD(2) < RD(5));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002FF42C; } }
L_002FF448:;
SET64(5, (s64)(s32)0x4d0000);
SET32(5, RW(5) + -3136);
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 576), RW(5));
SET32(4, RW(4) + -3104);
wr32(c, (RW(17) + 564), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(17) + 568), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 572), RW(0));
SET32(16, RW(17) + 732);
wr32(c, (RW(17) + 576), RW(4));
wr32(c, (RW(17) + 580), RW(0));
wr32(c, (RW(17) + 584), RW(3));
wr32(c, (RW(17) + 588), RW(0));
wr32(c, (RW(17) + 592), RW(0));
wr32(c, (RW(17) + 604), RW(0));
wr32(c, (RW(17) + 600), RW(0));
wr8(c, (RW(17) + 596), (u8)RW(0));
wr32(c, (RW(17) + 620), RW(5));
wr32(c, (RW(17) + 608), RW(0));
wr32(c, (RW(17) + 612), RW(0));
wr32(c, (RW(17) + 616), RW(0));
wr32(c, (RW(17) + 620), RW(4));
wr32(c, (RW(17) + 624), RW(0));
wr32(c, (RW(17) + 628), RW(3));
wr32(c, (RW(17) + 632), RW(0));
wr32(c, (RW(17) + 636), RW(0));
wr32(c, (RW(17) + 648), RW(0));
wr32(c, (RW(17) + 644), RW(0));
wr8(c, (RW(17) + 640), (u8)RW(0));
wr32(c, (RW(17) + 652), RW(0));
wr32(c, (RW(17) + 656), RW(0));
wr32(c, (RW(17) + 660), RW(0));
wr32(c, (RW(17) + 664), RW(0));
wr32(c, (RW(17) + 668), RW(0));
wr32(c, (RW(17) + 672), RW(0));
wr32(c, (RW(17) + 676), RW(0));
wr32(c, (RW(17) + 680), RW(0));
wr32(c, (RW(17) + 684), RW(0));
wr32(c, (RW(17) + 688), RW(0));
wr32(c, (RW(17) + 692), RW(0));
wr32(c, (RW(17) + 696), RW(0));
wr32(c, (RW(17) + 700), RW(0));
wr32(c, (RW(17) + 704), RW(0));
wr32(c, (RW(17) + 716), RW(0));
wr8(c, (RW(17) + 720), (u8)RW(0));
wr8(c, (RW(17) + 721), (u8)RW(0));
wr8(c, (RW(17) + 722), (u8)RW(2));
L_002FF50C:;
c->f[12].u = RW(0);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(10, RD(0) + RD(0));
SET64(11, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(0));
c->f[13].u = c->f[12].u;
c->f[14].u = c->f[12].u;
SET64(31, 0x2ff544); c->f[15].u = c->f[12].u; JP_F_0013C6B0(c);
SET32(16, RW(16) + 52);
SET32(2, RW(17) + 836);
SET64(2, RD(16) < RD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002FF50C; } }
SET64(31, 0x2ff560); SET32(4, RW(17) + 728); JP_F_00356210(c);
SET64(5, (s64)(s32)0x2f0000);
SET64(6, (s64)(s32)0x1f0000);
SET32(4, RW(17) + 864);
SET32(5, RW(5) + 4096);
SET32(6, RW(6) + 10928);
SET32(7, RW(0) + 52);
SET64(31, 0x2ff580); SET32(8, RW(0) + 2); JP_F_001023D0(c);
SET32(16, RW(17) + 992);
SET64(31, 0x2ff58c); SET64(4, RD(16) + RD(0)); JP_F_0015CC10(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(16) + 64);
SET32(2, RW(2) + 16416);
SET64(31, 0x2ff5a0); wr32(c, (RW(16) + 12), RW(2)); JP_F_002FFA70(c);
SET64(31, 0x2ff5a8); SET32(4, RW(16) + 224); JP_F_002FFA00(c);
wr32(c, (RW(17) + 1264), RW(0));
SET64(5, (s64)(s32)0x160000);
wr32(c, (RW(17) + 1280), RW(0));
SET64(6, (s64)(s32)0x160000);
wr32(c, (RW(17) + 1284), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(17) + 1288), RW(0));
SET32(4, RW(17) + 1356);
wr32(c, (RW(17) + 1292), RW(2));
SET32(5, RW(5) + -32384);
SET32(6, RW(6) + -32496);
SET32(7, RW(0) + 20);
SET32(8, RW(0) + 6);
SET64(31, 0x2ff5e4); wr32(c, (RW(17) + 1324), RW(0)); JP_F_001023D0(c);
wr32(c, (RW(17) + 1536), RW(0));
SET32(16, RW(17) + 1552);
L_002FF5EC:;
SET64(31, 0x2ff5f4); SET64(4, RD(16) + RD(0)); JP_F_002AF080(c);
SET32(16, RW(16) + 80);
SET32(2, RW(17) + 1712);
SET64(2, RD(16) < RD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002FF5EC; } }
SET64(31, 0x2ff610); SET32(4, RW(17) + 1716); JP_F_002FF860(c);
SET64(31, 0x2ff618); SET32(4, RW(17) + 1840); JP_F_00149680(c);
SET64(31, 0x2ff620); SET32(4, RW(17) + 1856); JP_F_00149680(c);
wr32(c, (RW(17) + 1928), RW(0));
SET64(2, RD(0) | 0xffff);
wr16(c, (RW(17) + 1932), (u16)RW(2));
wr32(c, (RW(17) + 1936), RW(0));
SET64(2, RD(17) + RD(0));
wr32(c, (RW(17) + 1940), RW(0));
wr32(c, (RW(28) + -29872), RW(17));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002FF650(Ctx *c) { /* func_002FF650 */
ENTER(0x2ff650);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002FF70C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(17) + 64);
SET32(2, RW(2) + 16416);
{ int t = RD(3) == RD(0); wr32(c, (RW(17) + 12), RW(2)); if (t) goto L_002FF6A4; }
{ int t = RD(3) == RD(0);  if (t) goto L_002FF6A4; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 16448);
{ int t = RD(3) == RD(0); wr32(c, (RW(17) + 128), RW(2)); if (t) goto L_002FF6A4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 656);
wr32(c, (RW(17) + 128), RW(2));
L_002FF6A4:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002FF6F8; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + 624);
SET64(31, 0x2ff6c0); wr32(c, (RW(17) + 12), RW(2)); JP_F_0015CB10(c);
{ int t = RD(17) == RD(0);  if (t) goto L_002FF6F4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(25); SET64(31, 0x2ff6e0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_002FF6F4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 12), RW(2));
L_002FF6F4:;
SET64(2, RD(16) << 48);
L_002FF6F8:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002FF710; }
SET64(31, 0x2ff70c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002FF70C:;
SET64(2, RD(17) + RD(0));
L_002FF710:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002FF730(Ctx *c) { /* func_002FF730 */
ENTER(0x2ff730);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
if (RD(16) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_002FF788; }
if (RD(16) == RD(0)) { SET64(2, RD(5) << 48); goto L_002FF770; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 16448);
{ int t = RD(16) == RD(0); wr32(c, (RW(16) + 64), RW(2)); if (t) goto L_002FF76C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 656);
wr32(c, (RW(16) + 64), RW(2));
L_002FF76C:;
SET64(2, RD(5) << 48);
L_002FF770:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0;  if (t) goto L_002FF784; }
SET64(31, 0x2ff784); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_002FF784:;
SET64(2, RD(16) + RD(0));
L_002FF788:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002FF7A0(Ctx *c) { /* func_002FF7A0 */
ENTER(0x2ff7a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002FF848; }
SET32(4, RW(17) + 44);
{ int t = RD(4) == RD(0);  if (t) goto L_002FF7FC; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2ff7e4);  rt_call(c, t); }
SET32(2, RW(17) + 44);
{ int t = RD(2) == RD(0);  if (t) goto L_002FF7FC; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 56), RW(2));
L_002FF7FC:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002FF834; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(25); SET64(31, 0x2ff81c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_002FF830; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 12), RW(2));
L_002FF830:;
SET64(2, RD(16) << 48);
L_002FF834:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002FF84C; }
SET64(31, 0x2ff848); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002FF848:;
SET64(2, RD(17) + RD(0));
L_002FF84C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002FF860(Ctx *c) { /* func_002FF860 */
ENTER(0x2ff860);
wr32(c, (RW(4) + 12), RW(0));
SET64(5, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 16), RW(5));
SET32(2, RW(4) + 48);
wr32(c, (RW(4) + 20), RW(0));
SET32(2, RW(2) + 8);
wr32(c, (RW(4) + 24), RW(0));
SET32(3, RW(4) + 80);
wr32(c, (RW(4) + 28), RW(5));
SET64(1, RD(2) < RD(3));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(5));
wr16(c, (RW(4) + 44), (u16)RW(0));
wr32(c, (RW(4) + 48), RW(0));
{ int t = RD(1) == RD(0); wr32(c, (RW(4) + 52), RW(0)); if (t) goto L_002FF9D0; }
SET32(5, RW(4) + 56);
SET32(10, RW(3) - RW(5));
SET32(9, RW(10) + 7);
{ int t = RSD(9) >= 0; SET32(8, RSW(9) >> 3); if (t) goto L_002FF8C0; }
SET32(3, RW(9) + 7);
SET32(8, RSW(3) >> 3);
L_002FF8C0:;
SET32(7, RW(8) + 1);
SET64(1, RSD(7) < (s64)9);
{ int t = RD(1) != RD(0); SET32(6, RW(4) + 16); if (t) goto L_002FF9A0; }
SET32(3, RW(4) + 80);
SET64(13, RD(0) + RD(0));
SET64(1, RD(3) < RD(5));
{ int t = RD(1) != RD(0); SET64(12, RD(0) + RD(0)); if (t) goto L_002FF910; }
SET64(5, (s64)(s32)0x80000000);
SET64(3, RD(10) & RD(5));
{ int t = RD(3) != RD(0); SET64(11, RD(0) + (s64)1); if (t) goto L_002FF904; }
SET64(3, RD(9) & RD(5));
{ int t = RD(3) == RD(0);  if (t) goto L_002FF904; }
SET64(11, RD(0) + RD(0));
L_002FF904:;
{ int t = RD(11) == RD(0);  if (t) goto L_002FF910; }
SET64(12, RD(0) + (s64)1);
L_002FF910:;
{ int t = RD(12) == RD(0);  if (t) goto L_002FF944; }
SET64(3, (s64)(s32)0x80000000);
SET64(5, RD(8) & RD(3));
{ int t = RD(5) != RD(0); SET64(9, RD(0) + (s64)1); if (t) goto L_002FF938; }
SET64(3, RD(7) & RD(3));
{ int t = RD(5) == RD(3);  if (t) goto L_002FF938; }
SET64(9, RD(0) + RD(0));
L_002FF938:;
{ int t = RD(9) == RD(0);  if (t) goto L_002FF944; }
SET64(13, RD(0) + (s64)1);
L_002FF944:;
{ int t = RD(13) == RD(0);  if (t) goto L_002FF9A0; }
wr32(c, (RW(2) + 0), RW(0));
L_002FF950:;
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 16), RW(0));
wr32(c, (RW(2) + 20), RW(0));
wr32(c, (RW(2) + 24), RW(0));
wr32(c, (RW(2) + 28), RW(0));
wr32(c, (RW(2) + 32), RW(0));
wr32(c, (RW(2) + 36), RW(0));
wr32(c, (RW(2) + 40), RW(0));
wr32(c, (RW(2) + 44), RW(0));
wr32(c, (RW(2) + 48), RW(0));
wr32(c, (RW(2) + 52), RW(0));
wr32(c, (RW(2) + 56), RW(0));
wr32(c, (RW(2) + 60), RW(0));
SET32(2, RW(2) + 64);
SET64(3, RD(2) < RD(6));
if (RD(3) != RD(0)) { wr32(c, (RW(2) + 0), RW(0)); { POLL(); goto L_002FF950; } }
L_002FF9A0:;
SET32(5, RW(4) + 80);
SET64(1, RD(2) < RD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002FF9D0; }
L_002FF9B0:;
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
SET32(2, RW(2) + 8);
SET64(3, RD(2) < RD(5));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002FF9B0; } }
L_002FF9D0:;
wr16(c, (RW(4) + 88), (u16)RW(0));
wr16(c, (RW(4) + 90), (u16)RW(0));
SET64(2, RD(4) + RD(0));
wr16(c, (RW(4) + 92), (u16)RW(0));
wr16(c, (RW(4) + 94), (u16)RW(0));
wr32(c, (RW(4) + 96), RW(0));
wr32(c, (RW(4) + 100), RW(0));
wr32(c, (RW(4) + 104), RW(0)); return;
}

void JP_F_002FFA00(Ctx *c) { /* func_002FFA00 */
ENTER(0x2ffa00);
SET32(29, RW(29) + -32);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 8), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 12), RW(3));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 24), RW(0));
wr32(c, (RW(29) + 28), RW(3));
wr32(c, (RW(4) + 28), RW(3));
rd128(c, (RW(29) + 16) & ~15u, &c->r[5]);
wr32(c, (RW(29) + 12), RW(3));
wr32(c, (RW(29) + 0), RW(0));
wr32(c, (RW(29) + 4), RW(0));
wr32(c, (RW(29) + 8), RW(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[5]);
wr128(c, (RW(4) + 16) & ~15u, &c->r[3]);
wr32(c, (RW(4) + 32), RW(0));
SET32(29, RW(29) + 32); return;
}

void JP_F_002FFA70(Ctx *c) { /* func_002FFA70 */
ENTER(0x2ffa70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2ffa84); SET64(16, RD(4) + RD(0)); JP_F_0015CBB0(c);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(16) + 80);
SET32(3, RW(3) + 16448);
SET32(2, RW(2) + 32);
wr32(c, (RW(16) + 64), RW(3));
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 96), RW(0));
SET32(3, RW(16) + 144);
wr32(c, (RW(16) + 100), RW(0));
SET64(1, RD(2) < RD(3));
wr32(c, (RW(16) + 104), RW(0));
{ int t = RD(1) == RD(0); wr32(c, (RW(16) + 108), RW(4)); if (t) goto L_002FFC30; }
SET32(4, RW(16) + 112);
SET32(9, RW(3) - RW(4));
SET32(8, RW(9) + 31);
{ int t = RSD(8) >= 0; SET32(7, RSW(8) >> 5); if (t) goto L_002FFAD4; }
SET32(3, RW(8) + 31);
SET32(7, RSW(3) >> 5);
L_002FFAD4:;
SET32(6, RW(7) + 1);
SET64(1, RSD(6) < (s64)9);
{ int t = RD(1) != RD(0); SET32(5, RW(16) + -112); if (t) goto L_002FFBF8; }
SET32(3, RW(16) + 144);
SET64(12, RD(0) + RD(0));
SET64(1, RD(3) < RD(4));
{ int t = RD(1) != RD(0); SET64(11, RD(0) + RD(0)); if (t) goto L_002FFB24; }
SET64(4, (s64)(s32)0x80000000);
SET64(3, RD(9) & RD(4));
{ int t = RD(3) != RD(0); SET64(10, RD(0) + (s64)1); if (t) goto L_002FFB18; }
SET64(3, RD(8) & RD(4));
{ int t = RD(3) == RD(0);  if (t) goto L_002FFB18; }
SET64(10, RD(0) + RD(0));
L_002FFB18:;
{ int t = RD(10) == RD(0);  if (t) goto L_002FFB24; }
SET64(11, RD(0) + (s64)1);
L_002FFB24:;
{ int t = RD(11) == RD(0);  if (t) goto L_002FFB58; }
SET64(3, (s64)(s32)0x80000000);
SET64(4, RD(7) & RD(3));
{ int t = RD(4) != RD(0); SET64(8, RD(0) + (s64)1); if (t) goto L_002FFB4C; }
SET64(3, RD(6) & RD(3));
{ int t = RD(4) == RD(3);  if (t) goto L_002FFB4C; }
SET64(8, RD(0) + RD(0));
L_002FFB4C:;
{ int t = RD(8) == RD(0);  if (t) goto L_002FFB58; }
SET64(12, RD(0) + (s64)1);
L_002FFB58:;
{ int t = RD(12) == RD(0);  if (t) goto L_002FFBF8; }
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 16), RW(0));
L_002FFB68:;
wr32(c, (RW(2) + 20), RW(0));
wr32(c, (RW(2) + 24), RW(0));
wr32(c, (RW(2) + 28), RW(4));
wr32(c, (RW(2) + 48), RW(0));
wr32(c, (RW(2) + 52), RW(0));
wr32(c, (RW(2) + 56), RW(0));
wr32(c, (RW(2) + 60), RW(4));
wr32(c, (RW(2) + 80), RW(0));
wr32(c, (RW(2) + 84), RW(0));
wr32(c, (RW(2) + 88), RW(0));
wr32(c, (RW(2) + 92), RW(4));
wr32(c, (RW(2) + 112), RW(0));
wr32(c, (RW(2) + 116), RW(0));
wr32(c, (RW(2) + 120), RW(0));
wr32(c, (RW(2) + 124), RW(4));
wr32(c, (RW(2) + 144), RW(0));
wr32(c, (RW(2) + 148), RW(0));
wr32(c, (RW(2) + 152), RW(0));
wr32(c, (RW(2) + 156), RW(4));
wr32(c, (RW(2) + 176), RW(0));
wr32(c, (RW(2) + 180), RW(0));
wr32(c, (RW(2) + 184), RW(0));
wr32(c, (RW(2) + 188), RW(4));
wr32(c, (RW(2) + 208), RW(0));
wr32(c, (RW(2) + 212), RW(0));
wr32(c, (RW(2) + 216), RW(0));
wr32(c, (RW(2) + 220), RW(4));
wr32(c, (RW(2) + 240), RW(0));
wr32(c, (RW(2) + 244), RW(0));
wr32(c, (RW(2) + 248), RW(0));
wr32(c, (RW(2) + 252), RW(4));
SET32(2, RW(2) + 256);
SET64(3, RD(2) < RD(5));
if (RD(3) != RD(0)) { wr32(c, (RW(2) + 16), RW(0)); { POLL(); goto L_002FFB68; } }
L_002FFBF8:;
SET32(5, RW(16) + 144);
SET64(1, RD(2) < RD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002FFC30; }
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 16), RW(0));
L_002FFC10:;
wr32(c, (RW(2) + 20), RW(0));
wr32(c, (RW(2) + 24), RW(0));
wr32(c, (RW(2) + 28), RW(4));
SET32(2, RW(2) + 32);
SET64(3, RD(2) < RD(5));
if (RD(3) != RD(0)) { wr32(c, (RW(2) + 16), RW(0)); { POLL(); goto L_002FFC10; } }
L_002FFC30:;
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002FFC50(Ctx *c) { /* func_002FFC50 */
ENTER(0x2ffc50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
if (RD(16) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_002FFCA0; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 16448);
{ int t = RD(16) == RD(0); wr32(c, (RW(16) + 64), RW(2)); if (t) goto L_002FFC84; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 656);
wr32(c, (RW(16) + 64), RW(2));
L_002FFC84:;
SET64(2, RD(5) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0;  if (t) goto L_002FFC9C; }
SET64(31, 0x2ffc9c); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_002FFC9C:;
SET64(2, RD(16) + RD(0));
L_002FFCA0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002FFCB0(Ctx *c) { /* func_002FFCB0 */
ENTER(0x2ffcb0);
c->f[1].u = rd32(c, (RW(4) + 0));
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
{ int t = !c->fcc;  if (t) goto L_002FFCD8; }
SET64(2, (s64)(s32)0xbf800000);
c->f[0].u = RW(2);
 goto L_002FFCF4;
L_002FFCD8:;
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_002FFCF4; }
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
 goto L_002FFCF4;
L_002FFCF4:;
 return;
}

void JP_F_002FFD00(Ctx *c) { /* func_002FFD00 */
ENTER(0x2ffd00);
SET32(4, RW(4) + -4); { JP_F_001F2870(c); return; }
}

void JP_F_002FFD10(Ctx *c) { /* func_002FFD10 */
ENTER(0x2ffd10);
SET32(4, RW(4) + -24); { JP_F_001F2870(c); return; }
}

void JP_F_002FFD20(Ctx *c) { /* func_002FFD20 */
ENTER(0x2ffd20);
SET32(29, RW(29) + -16);
SET64(7, (s64)(s32)0x300000);
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 8);
SET64(5, rd16(c, (RW(4) + 4)));
SET64(4, (s32)rd32(c, (RW(4) + 24)));
SET64(31, 0x2ffd40); SET32(7, RW(7) + -688); JP_F_00128648(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002FFD50(Ctx *c) { /* func_002FFD50 */
ENTER(0x2ffd50);
SET64(3, rd16(c, (RW(4) + 0)));
SET64(2, rd16(c, (RW(5) + 0)));
SET32(2, RW(3) - RW(2)); return;
}

void JP_F_002FFD60(Ctx *c) { /* func_002FFD60 */
ENTER(0x2ffd60);
SET64(2, RD(5) & 0xffff);
SET32(3, RW(2) << 1);
SET64(2, (s32)rd32(c, (RW(4) + 20)));
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 0))); return;
}

void JP_F_002FFD80(Ctx *c) { /* func_002FFD80 */
ENTER(0x2ffd80);
SET64(2, RD(5) & 0xffff);
SET32(3, RW(2) << 1);
SET64(2, (s32)rd32(c, (RW(4) + 16)));
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 0))); return;
}

void JP_F_002FFDA0(Ctx *c) { /* func_002FFDA0 */
ENTER(0x2ffda0);
SET64(2, rd16(c, (RW(4) + 6)));
SET64(3, RD(5) & 0xffff);
SET64(1, RSD(3) < RSD(2));
if (RD(1) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002FFDC4; }
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
L_002FFDC4:;
 return;
}

void JP_F_002FFDD0(Ctx *c) { /* func_002FFDD0 */
ENTER(0x2ffdd0);
SET64(2, RD(5) & 0xffff);
SET32(3, RW(2) << 2);
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0))); return;
}

static void JP_B_002FFDF0(Ctx *c, u32 entry) { /* func_002FFDF0 */
ENTER(entry);
switch (entry) { case 0x300000: goto L_00300000; case 0x300008: goto L_00300008; case 0x300010: goto L_00300010; case 0x300018: goto L_00300018; case 0x300024: goto L_00300024; case 0x300028: goto L_00300028; case 0x30002c: goto L_0030002C; case 0x300030: goto L_00300030; case 0x300038: goto L_00300038; case 0x300048: goto L_00300048; case 0x300054: goto L_00300054; case 0x300060: goto L_00300060; }
SET32(29, RW(29) + -208);
SET64(2, (s64)(s32)0x4f000000);
wr64(c, (RW(29) + 160), RD(31));
c->f[0].u = RW(2);
wr128(c, (RW(29) + 144) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[23]);
SET64(30, RD(6) + RD(0));
wr128(c, (RW(29) + 112) & ~15u, &c->r[22]);
SET64(23, RD(0) + RD(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(22, rd8(c, (RW(29) + 201)));
c->f[1].u = rd32(c, (RW(5) + 4));
SET64(17, rd16(c, (RW(29) + 202)));
c->f[20].u = c->f[12].u;
c->fcc = F(0) <= F(1);
{ int t = c->fcc; SET64(16, RD(0) + RD(0)); if (t) goto L_002FFE64; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xffff); goto L_002FFE80;
L_002FFE64:;
c->f[0].f = fpu(F(1) - F(0));
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xffff);
L_002FFE80:;
SET64(19, RD(3) & 0xffff);
L_002FFE84:;
SET64(5, rd16(c, (RW(20) + 8)));
SET64(31, 0x2ffe90); SET64(4, (s32)rd32(c, (RW(20) + 0))); JP_F_002FFDD0(c);
SET64(4, rd16(c, (RW(2) + 2)));
SET32(3, RW(0) + 2);
{ int t = RD(4) != RD(3); SET64(18, RD(2) + RD(0)); if (t) goto L_002FFED8; }
{ int t = RD(30) == RD(0);  if (t) goto L_00300038; }
SET64(18, rd16(c, (RW(20) + 12)));
SET64(4, (s32)rd32(c, (RW(20) + 0)));
SET64(31, 0x2ffeb8); SET64(5, RD(18) + RD(0)); JP_F_002FFD60(c);
wr32(c, (RW(20) + 4), RW(0));
SET32(3, RW(0) + 1);
wr16(c, (RW(20) + 8), (u16)RW(2));
wr16(c, (RW(20) + 10), (u16)RW(0));
wr8(c, (RW(20) + 14), (u8)RW(0));
wr16(c, (RW(20) + 12), (u16)RW(18));
wr8(c, (RW(20) + 14), (u8)RW(3)); goto L_00300038;
L_002FFED8:;
SET64(4, rd16(c, (RW(20) + 10)));
SET32(3, RW(0) + 1);
{ int t = RD(4) == RD(3);  if (t) goto L_00300038; }
SET64(3, rd16(c, (RW(18) + 0)));
SET64(4, RD(19) & 0xffff);
SET64(3, RSD(4) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) goto L_00300038; }
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET32(4, RW(29) + 184);
SET64(5, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2fff14); SET64(6, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(18) + 2)));
wr16(c, (RW(20) + 10), (u16)RW(3));
SET64(3, rd8(c, (RW(29) + 184)));
{ int t = RD(3) == RD(0);  if (t) goto L_002FFF60; }
SET64(19, rd16(c, (RW(29) + 186)));
if (RSD(19) < 0) { SET32(4, RW(19) >> 1); goto L_002FFF40; }
c->f[0].u = RW(19);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002FFF58;
L_002FFF40:;
SET64(3, RD(19) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002FFF58:;
wr32(c, (RW(20) + 4), c->f[0].u);
L_002FFF60:;
SET64(3, rd8(c, (RW(29) + 188)));
{ int t = RD(3) == RD(0);  if (t) goto L_002FFFC0; }
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(0);
c->f[0].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; wr32(c, (RW(20) + 4), RW(0)); if (t) goto L_002FFF98; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xffff); goto L_002FFFB4;
L_002FFF98:;
c->f[0].f = fpu(F(1) - F(0));
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xffff);
L_002FFFB4:;
SET64(19, RD(3) & 0xffff);
SET64(16, RD(0) + (s64)1); { POLL(); goto L_002FFE84; }
L_002FFFC0:;
SET64(3, rd8(c, (RW(29) + 189)));
if (RD(3) == RD(0)) { SET64(3, rd8(c, (RW(29) + 190))); goto L_002FFFDC; }
c->f[0].u = rd32(c, (RW(20) + 4));
c->f[0].f = fpu(F(0) - F(20));
wr32(c, (RW(20) + 4), c->f[0].u); goto L_00300038;
L_002FFFDC:;
if (RD(3) == RD(0)) { SET64(4, rd16(c, (RW(20) + 10))); goto L_00300000; }
SET64(3, rd8(c, (RW(29) + 191)));
SET64(23, RD(0) + (s64)1);
SET64(17, rd16(c, (RW(29) + 192)));
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
SET64(22, RD(3) & 0xff); goto L_00300038;
L_00300000:;
SET32(3, RW(0) + 3);
{ int t = RD(4) == RD(3);  if (t) goto L_00300038; }
if (0) { L_00300008:;  }
SET64(2, rd16(c, (RW(20) + 8)));
L_00300010:;
SET64(4, (s32)rd32(c, (RW(20) + 0)));
SET32(2, RW(2) + 1);
L_00300018:;
SET64(31, 0x300020); SET64(5, RD(2) & 0xffff); JP_F_002FFDA0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00300038; }
if (0) { L_00300024:;  }
L_00300028:;
SET64(2, rd16(c, (RW(20) + 8)));
L_0030002C:;
SET32(2, RW(2) + 1);
L_00300030:;
wr16(c, (RW(20) + 8), (u16)RW(2)); { POLL(); goto L_002FFE84; }
L_00300038:;
c->f[0].u = rd32(c, (RW(20) + 4));
c->f[0].f = fpu(F(0) + F(20));
wr32(c, (RW(20) + 4), c->f[0].u);
wr8(c, (RW(21) + 0), (u8)RW(23));
L_00300048:;
wr8(c, (RW(21) + 1), (u8)RW(22));
wr16(c, (RW(21) + 2), (u16)RW(17));
wr8(c, (RW(21) + 4), (u8)RW(16));
L_00300054:;
SET64(31, rd64(c, (RW(29) + 160)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 144) & ~15u, &c->r[30]);
L_00300060:;
rd128(c, (RW(29) + 128) & ~15u, &c->r[23]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 208); return;
}
void JP_F_002FFDF0(Ctx *c) { JP_B_002FFDF0(c, 0x2ffdf0); }
void JP_F_00300000(Ctx *c) { JP_B_002FFDF0(c, 0x300000); }
void JP_F_00300008(Ctx *c) { JP_B_002FFDF0(c, 0x300008); }
void JP_F_00300010(Ctx *c) { JP_B_002FFDF0(c, 0x300010); }
void JP_F_00300018(Ctx *c) { JP_B_002FFDF0(c, 0x300018); }
void JP_F_00300024(Ctx *c) { JP_B_002FFDF0(c, 0x300024); }
void JP_F_00300028(Ctx *c) { JP_B_002FFDF0(c, 0x300028); }
void JP_F_0030002C(Ctx *c) { JP_B_002FFDF0(c, 0x30002c); }
void JP_F_00300030(Ctx *c) { JP_B_002FFDF0(c, 0x300030); }
void JP_F_00300038(Ctx *c) { JP_B_002FFDF0(c, 0x300038); }
void JP_F_00300048(Ctx *c) { JP_B_002FFDF0(c, 0x300048); }
void JP_F_00300054(Ctx *c) { JP_B_002FFDF0(c, 0x300054); }
void JP_F_00300060(Ctx *c) { JP_B_002FFDF0(c, 0x300060); }

void JP_F_00300090(Ctx *c) { /* func_00300090 */
ENTER(0x300090);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, rd16(c, (RW(4) + 10)));
if (RD(4) != RD(3)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_003000DC; }
SET64(2, rd16(c, (RW(16) + 8)));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(2) + 1);
SET64(31, 0x3000c4); SET64(5, RD(2) & 0xffff); JP_F_002FFDA0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_003000D8; }
SET64(3, rd16(c, (RW(16) + 8)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 8), (u16)RW(3));
L_003000D8:;
SET64(31, rd64(c, (RW(29) + 16)));
L_003000DC:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_003000F0(Ctx *c) { /* func_003000F0 */
ENTER(0x3000f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x300108); SET64(4, (s32)rd32(c, (RW(4) + 0))); JP_F_002FFD80(c);
wr32(c, (RW(16) + 4), RW(0));
wr16(c, (RW(16) + 8), (u16)RW(2));
wr16(c, (RW(16) + 10), (u16)RW(0));
wr8(c, (RW(16) + 14), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00300130(Ctx *c) { /* func_00300130 */
ENTER(0x300130);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET64(31, 0x300150); SET64(16, RD(5) + RD(0)); JP_F_002FFD60(c);
wr32(c, (RW(17) + 4), RW(0));
wr16(c, (RW(17) + 8), (u16)RW(2));
wr16(c, (RW(17) + 10), (u16)RW(0));
wr8(c, (RW(17) + 14), (u8)RW(0));
wr16(c, (RW(17) + 12), (u16)RW(16));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00300180(Ctx *c) { /* func_00300180 */
ENTER(0x300180);
wr32(c, (RW(4) + 0), RW(0)); return;
}

void JP_F_00300190(Ctx *c) { /* func_00300190 */
ENTER(0x300190);
SET64(3, (s32)rd32(c, (RW(5) + 8)));
wr32(c, (RW(4) + 0), RW(3));
wr32(c, (RW(4) + 4), RW(0));
wr16(c, (RW(4) + 8), (u16)RW(0));
wr16(c, (RW(4) + 10), (u16)RW(0));
wr8(c, (RW(4) + 14), (u8)RW(0));
wr16(c, (RW(4) + 12), (u16)RW(0)); return;
}

void JP_F_003001B0(Ctx *c) { /* func_003001B0 */
ENTER(0x3001b0);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15008);
wr32(c, (RW(4) + 16), RW(2));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 0), RW(0)); return;
}

void JP_F_003001D0(Ctx *c) { /* func_003001D0 */
ENTER(0x3001d0);
 return;
}

void JP_F_003001E0(Ctx *c) { /* func_003001E0 */
ENTER(0x3001e0);
SET32(29, RW(29) + -224);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 44)));
SET64(31, 0x300204); SET32(4, RW(29) + 48); JP_F_0013ADA0(c);
SET64(31, 0x30020c); SET32(4, RW(29) + 48); JP_F_00147DD0(c);
SET64(31, 0x300214); SET64(4, RD(2) + RD(0)); JP_F_00147DA0(c);
SET32(4, RW(29) + 112);
SET64(31, 0x300220); SET32(5, RW(29) + 48); JP_F_0013ADA0(c);
c->f[2].u = rd32(c, (RW(16) + 12));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(16) + 8));
SET32(4, RW(29) + 192);
c->f[0].u = rd32(c, (RW(16) + 4));
SET32(5, RW(29) + 176);
SET32(6, RW(29) + 112);
wr32(c, (RW(29) + 176), c->f[0].u);
wr32(c, (RW(29) + 188), RW(2));
wr32(c, (RW(29) + 180), c->f[1].u);
SET64(31, 0x300250); wr32(c, (RW(29) + 184), c->f[2].u); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 208), RW(0));
wr32(c, (RW(29) + 220), RW(2));
SET64(4, RD(17) + RD(0));
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
SET32(5, RW(29) + 208);
wr32(c, (RW(29) + 212), RW(0));
wr32(c, (RW(29) + 216), RW(0));
SET64(31, 0x300278); wr128(c, (RW(29) + 208) & ~15u, &c->r[2]); JP_F_002ED690(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 224); return;
}

void JP_F_00300290(Ctx *c) { /* func_00300290 */
ENTER(0x300290);
SET32(29, RW(29) + -352);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
SET64(7, (s32)rd32(c, (RW(2) + 660)));
{ int t = RD(19) == RD(0); SET64(6, RD(19) + RD(0)); if (t) goto L_003002C4; }
SET32(6, RW(6) + 416);
L_003002C4:;
SET64(5, rd16(c, (RW(18) + 4)));
SET32(4, RW(19) + 128);
SET64(31, 0x3002d4); SET64(8, RD(0) + RD(0)); JP_F_001EA7B0(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_0030040C; }
SET64(5, (s32)rd32(c, (RW(19) + 44)));
SET64(31, 0x3002ec); SET32(4, RW(29) + 80); JP_F_0013ADA0(c);
SET64(31, 0x3002f4); SET32(4, RW(29) + 80); JP_F_00147DD0(c);
SET64(31, 0x3002fc); SET64(4, RD(2) + RD(0)); JP_F_00147DA0(c);
SET32(4, RW(29) + 176);
SET64(31, 0x300308); SET32(5, RW(29) + 80); JP_F_0013ADA0(c);
c->f[2].u = rd32(c, (RW(18) + 16));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(18) + 12));
SET32(4, RW(29) + 256);
c->f[0].u = rd32(c, (RW(18) + 8));
SET32(5, RW(29) + 240);
SET32(6, RW(29) + 176);
wr32(c, (RW(29) + 240), c->f[0].u);
wr32(c, (RW(29) + 252), RW(2));
wr32(c, (RW(29) + 244), c->f[1].u);
SET64(31, 0x300338); wr32(c, (RW(29) + 248), c->f[2].u); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
SET32(4, RW(29) + 272);
SET64(16, (s32)rd32(c, (RW(19) + 44)));
SET64(31, 0x30034c); wr128(c, (RW(29) + 336) & ~15u, &c->r[2]); JP_F_002AF080(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 156), RW(2));
c->f[5].u = rd32(c, (RW(29) + 336));
wr32(c, (RW(29) + 172), RW(2));
c->f[3].u = rd32(c, (RW(29) + 340));
rd128(c, (RW(16) + 0) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(29) + 344));
wr32(c, (RW(29) + 148), RW(0));
SET32(5, RW(29) + 272);
wr32(c, (RW(29) + 152), RW(0));
wr128(c, (RW(29) + 272) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 288) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 320) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(19) + 44)));
rd128(c, (RW(2) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
c->f[4].u = rd32(c, (RW(29) + 144));
c->f[2].u = rd32(c, (RW(29) + 148));
c->f[0].u = rd32(c, (RW(29) + 152));
c->f[4].f = fpu(F(5) + F(4));
c->f[2].f = fpu(F(3) + F(2));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 160), c->f[4].u);
wr32(c, (RW(29) + 164), c->f[2].u);
wr32(c, (RW(29) + 168), c->f[0].u);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 320) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x3003dc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(19) == RD(0); SET64(5, RD(19) + RD(0)); if (t) goto L_003003E8; }
SET32(5, RW(19) + 128);
L_003003E8:;
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x3003f8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(6, rd16(c, (RW(18) + 4)));
SET32(4, RW(19) + 128);
SET64(31, 0x300408); SET64(5, RD(17) + RD(0)); JP_F_001E9140(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_0030040C:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 352); return;
}

void JP_F_00300430(Ctx *c) { /* func_00300430 */
ENTER(0x300430);
SET32(3, RW(0) + -1);
wr16(c, (RW(4) + 756), (u16)RW(3));
wr8(c, (RW(4) + 528), (u8)RW(0)); return;
}

static void JP_B_00300440(Ctx *c, u32 entry) { /* func_00300440 */
ENTER(entry);
switch (entry) { case 0x300504: goto L_00300504; }
SET32(29, RW(29) + -80);
SET64(2, RD(0) | 0xfffe);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(5) + 4)));
{ int t = RD(3) == RD(2); SET64(17, RD(5) + RD(0)); if (t) goto L_0030047C; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(16, RW(18) + 29648); goto L_00300494; }
SET32(2, RW(3) << 1); goto L_00300484;
L_0030047C:;
SET32(16, RW(18) + 30416); goto L_00300494;
L_00300484:;
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(18));
SET32(16, RW(2) + 11216);
L_00300494:;
c->f[12].u = rd32(c, (RW(17) + 20));
SET64(31, 0x3004a0); SET64(4, RD(16) + RD(0)); JP_F_0031EAD0(c);
SET64(25, (s32)rd32(c, (RW(16) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x3004b0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
c->f[2].u = rd32(c, (RW(17) + 16));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(17) + 12));
wr32(c, (RW(29) + 76), RW(2));
c->f[0].u = rd32(c, (RW(17) + 8));
SET32(2, RW(0) + 24);
wr32(c, (RW(29) + 72), c->f[2].u);
wr32(c, (RW(29) + 68), c->f[1].u);
wr32(c, (RW(29) + 64), c->f[0].u);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 544) & ~15u, &c->r[3]);
SET64(3, rd16(c, (RW(17) + 6)));
{ int t = RD(3) == RD(2);  if (t) goto L_0030053C; }
SET32(2, RW(0) + 23);
{ int t = RD(3) == RD(2);  if (t) goto L_0030051C; }
SET64(2, (s64)(s32)0x3f0000);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + -4256);
SET32(4, RW(18) + 128);
L_00300504:;
SET32(2, RW(2) + RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x300514);  JP_F_001520D0(c);
SET64(3, RD(2) & 0xffff); goto L_00300558;
L_0030051C:;
SET64(5, (s64)(s32)0x4c0000);
SET32(4, RW(18) + 128);
SET64(31, 0x30052c); SET32(5, RW(5) + -9368); JP_F_001520D0(c);
SET64(3, RD(2) & 0xffff);
SET32(2, RW(0) + 1);
wr16(c, (RW(16) + 758), (u16)RW(2)); goto L_00300558;
L_0030053C:;
SET64(5, (s64)(s32)0x4c0000);
SET32(4, RW(18) + 128);
SET64(31, 0x30054c); SET32(5, RW(5) + -9352); JP_F_001520D0(c);
SET64(3, RD(2) & 0xffff);
SET32(2, RW(0) + 2);
wr16(c, (RW(16) + 758), (u16)RW(2));
L_00300558:;
wr16(c, (RW(16) + 756), (u16)RW(3));
SET64(31, 0x300564); SET64(4, RD(18) + RD(0)); JP_F_002EF6F0(c);
SET64(1, RD(0) | 0x89d0);
SET64(31, 0x300570); SET32(4, RW(2) + RW(1)); JP_F_00362780(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}
void JP_F_00300440(Ctx *c) { JP_B_00300440(c, 0x300440); }
void JP_F_00300504(Ctx *c) { JP_B_00300440(c, 0x300504); }

void JP_F_00300590(Ctx *c) { /* func_00300590 */
ENTER(0x300590);
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 528), (u8)RW(3));
wr8(c, (RW(4) + 529), (u8)RW(0));
wr16(c, (RW(4) + 758), (u16)RW(0));
wr8(c, (RW(4) + 760), (u8)RW(0)); return;
}

void JP_F_003005B0(Ctx *c) { /* func_003005B0 */
ENTER(0x3005b0);
SET64(2, RD(0) + RD(0)); return;
}

static void JP_B_003005C0(Ctx *c, u32 entry) { /* func_003005C0 */
ENTER(entry);
switch (entry) { case 0x3006a8: goto L_003006A8; case 0x3006fc: goto L_003006FC; case 0x300720: goto L_00300720; case 0x300744: goto L_00300744; case 0x300760: goto L_00300760; case 0x300774: goto L_00300774; case 0x3007a0: goto L_003007A0; case 0x3007a8: goto L_003007A8; case 0x3007b8: goto L_003007B8; case 0x3007fc: goto L_003007FC; case 0x300810: goto L_00300810; case 0x30083c: goto L_0030083C; case 0x30085c: goto L_0030085C; case 0x300878: goto L_00300878; case 0x3008b0: goto L_003008B0; case 0x3008dc: goto L_003008DC; case 0x3008e4: goto L_003008E4; case 0x3008f4: goto L_003008F4; case 0x300904: goto L_00300904; case 0x300938: goto L_00300938; case 0x30094c: goto L_0030094C; case 0x300978: goto L_00300978; case 0x300998: goto L_00300998; case 0x3009b4: goto L_003009B4; case 0x3009f0: goto L_003009F0; case 0x300a48: goto L_00300A48; case 0x300acc: goto L_00300ACC; case 0x300b50: goto L_00300B50; case 0x300b60: goto L_00300B60; case 0x300b70: goto L_00300B70; case 0x300b80: goto L_00300B80; case 0x300b94: goto L_00300B94; case 0x300ba4: goto L_00300BA4; case 0x300bc8: goto L_00300BC8; case 0x300c18: goto L_00300C18; case 0x300c30: goto L_00300C30; case 0x300c48: goto L_00300C48; case 0x300c60: goto L_00300C60; case 0x300c78: goto L_00300C78; case 0x300c8c: goto L_00300C8C; case 0x300ca8: goto L_00300CA8; case 0x300cc0: goto L_00300CC0; case 0x300cd8: goto L_00300CD8; case 0x300d30: goto L_00300D30; case 0x300db0: goto L_00300DB0; case 0x300df8: goto L_00300DF8; case 0x300e40: goto L_00300E40; case 0x300e88: goto L_00300E88; case 0x300ef8: goto L_00300EF8; case 0x300f40: goto L_00300F40; case 0x300f88: goto L_00300F88; case 0x301004: goto L_00301004; case 0x301048: goto L_00301048; case 0x301084: goto L_00301084; case 0x3010e0: goto L_003010E0; case 0x30113c: goto L_0030113C; case 0x3011e8: goto L_003011E8; case 0x301264: goto L_00301264; case 0x3012a8: goto L_003012A8; case 0x3012ec: goto L_003012EC; case 0x301330: goto L_00301330; case 0x301364: goto L_00301364; case 0x301398: goto L_00301398; case 0x3013a8: goto L_003013A8; case 0x3013c8: goto L_003013C8; case 0x301428: goto L_00301428; case 0x301458: goto L_00301458; case 0x301470: goto L_00301470; case 0x301488: goto L_00301488; case 0x3014ac: goto L_003014AC; case 0x3014d0: goto L_003014D0; case 0x301504: goto L_00301504; case 0x301528: goto L_00301528; case 0x30154c: goto L_0030154C; case 0x301570: goto L_00301570; case 0x301598: goto L_00301598; case 0x3015c8: goto L_003015C8; case 0x3015e0: goto L_003015E0; case 0x301608: goto L_00301608; case 0x301624: goto L_00301624; case 0x30163c: goto L_0030163C; case 0x301658: goto L_00301658; case 0x301694: goto L_00301694; case 0x3016c8: goto L_003016C8; case 0x3016fc: goto L_003016FC; case 0x301730: goto L_00301730; case 0x301764: goto L_00301764; case 0x301778: goto L_00301778; case 0x30178c: goto L_0030178C; case 0x3017a8: goto L_003017A8; case 0x3017d0: goto L_003017D0; case 0x301800: goto L_00301800; case 0x301830: goto L_00301830; case 0x30184c: goto L_0030184C; case 0x301860: goto L_00301860; case 0x3018b4: goto L_003018B4; case 0x3018cc: goto L_003018CC; case 0x3018f0: goto L_003018F0; case 0x301914: goto L_00301914; case 0x301928: goto L_00301928; case 0x301938: goto L_00301938; case 0x30194c: goto L_0030194C; case 0x301978: goto L_00301978; case 0x3019a8: goto L_003019A8; case 0x3019e4: goto L_003019E4; }
L_003005C0:;
SET32(29, RW(29) + -256);
SET64(3, (s64)(s32)0x10000);
wr64(c, (RW(29) + 48), RD(31));
SET32(3, RW(5) + RW(3));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr8(c, (RW(29) + 240), (u8)RW(0));
wr8(c, (RW(29) + 244), (u8)RW(0));
wr8(c, (RW(29) + 245), (u8)RW(0));
wr8(c, (RW(29) + 246), (u8)RW(0));
SET64(3, rd8(c, (RW(3) + -30819)));
{ int t = RD(3) == RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_0030067C; }
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x30060c); SET32(4, RW(17) + RW(1)); JP_F_003238B0(c);
SET64(3, RD(2) & 0xff);
if (RD(3) != RD(0)) { SET64(3, rd16(c, (RW(16) + 2))); goto L_00300680; }
SET64(4, rd16(c, (RW(16) + 2)));
SET32(3, RW(0) + 80);
{ int t = RD(4) == RD(3);  if (t) goto L_0030067C; }
SET32(3, RW(0) + 1);
{ int t = RD(4) == RD(3);  if (t) goto L_0030067C; }
SET32(3, RW(0) + 4);
{ int t = RD(4) == RD(3);  if (t) goto L_0030067C; }
SET64(3, rd8(c, (RW(29) + 240)));
wr8(c, (RW(18) + 0), (u8)RW(3));
SET64(3, rd16(c, (RW(29) + 242)));
wr16(c, (RW(18) + 2), (u16)RW(3));
SET64(3, rd8(c, (RW(29) + 244)));
wr8(c, (RW(18) + 4), (u8)RW(3));
SET64(3, rd8(c, (RW(29) + 245)));
wr8(c, (RW(18) + 5), (u8)RW(3));
SET64(3, rd8(c, (RW(29) + 246)));
wr8(c, (RW(18) + 6), (u8)RW(3));
SET64(3, rd8(c, (RW(29) + 247)));
wr8(c, (RW(18) + 7), (u8)RW(3));
SET64(3, rd16(c, (RW(29) + 248)));
wr16(c, (RW(18) + 8), (u16)RW(3)); goto L_00301A1C;
L_0030067C:;
SET64(3, rd16(c, (RW(16) + 2)));
L_00300680:;
SET64(1, RD(3) < (u64)(s64)90);
if (RD(1) == RD(0)) { SET64(3, rd8(c, (RW(29) + 240))); goto L_003019E8; }
SET64(4, (s64)(s32)0x4c0000);
SET32(3, RW(3) << 2);
SET32(4, RW(4) + -9264);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x3005c0: goto L_003005C0; case 0x3006a8: goto L_003006A8; case 0x3006fc: goto L_003006FC; case 0x300720: goto L_00300720; case 0x300744: goto L_00300744; case 0x300760: goto L_00300760; case 0x300774: goto L_00300774; case 0x3007a0: goto L_003007A0; case 0x3007a8: goto L_003007A8; case 0x3007b8: goto L_003007B8; case 0x3007fc: goto L_003007FC; case 0x300810: goto L_00300810; case 0x30083c: goto L_0030083C; case 0x30085c: goto L_0030085C; case 0x300878: goto L_00300878; case 0x3008b0: goto L_003008B0; case 0x3008dc: goto L_003008DC; case 0x3008e4: goto L_003008E4; case 0x3008f4: goto L_003008F4; case 0x300904: goto L_00300904; case 0x300938: goto L_00300938; case 0x30094c: goto L_0030094C; case 0x300978: goto L_00300978; case 0x300998: goto L_00300998; case 0x3009b4: goto L_003009B4; case 0x3009f0: goto L_003009F0; case 0x300a48: goto L_00300A48; case 0x300acc: goto L_00300ACC; case 0x300b50: goto L_00300B50; case 0x300b60: goto L_00300B60; case 0x300b70: goto L_00300B70; case 0x300b80: goto L_00300B80; case 0x300b94: goto L_00300B94; case 0x300ba4: goto L_00300BA4; case 0x300bc8: goto L_00300BC8; case 0x300c18: goto L_00300C18; case 0x300c30: goto L_00300C30; case 0x300c48: goto L_00300C48; case 0x300c60: goto L_00300C60; case 0x300c78: goto L_00300C78; case 0x300c8c: goto L_00300C8C; case 0x300ca8: goto L_00300CA8; case 0x300cc0: goto L_00300CC0; case 0x300cd8: goto L_00300CD8; case 0x300d30: goto L_00300D30; case 0x300db0: goto L_00300DB0; case 0x300df8: goto L_00300DF8; case 0x300e40: goto L_00300E40; case 0x300e88: goto L_00300E88; case 0x300ef8: goto L_00300EF8; case 0x300f40: goto L_00300F40; case 0x300f88: goto L_00300F88; case 0x301004: goto L_00301004; case 0x301048: goto L_00301048; case 0x301084: goto L_00301084; case 0x3010e0: goto L_003010E0; case 0x30113c: goto L_0030113C; case 0x3011e8: goto L_003011E8; case 0x301264: goto L_00301264; case 0x3012a8: goto L_003012A8; case 0x3012ec: goto L_003012EC; case 0x301330: goto L_00301330; case 0x301364: goto L_00301364; case 0x301398: goto L_00301398; case 0x3013a8: goto L_003013A8; case 0x3013c8: goto L_003013C8; case 0x301428: goto L_00301428; case 0x301458: goto L_00301458; case 0x301470: goto L_00301470; case 0x301488: goto L_00301488; case 0x3014ac: goto L_003014AC; case 0x3014d0: goto L_003014D0; case 0x301504: goto L_00301504; case 0x301528: goto L_00301528; case 0x30154c: goto L_0030154C; case 0x301570: goto L_00301570; case 0x301598: goto L_00301598; case 0x3015c8: goto L_003015C8; case 0x3015e0: goto L_003015E0; case 0x301608: goto L_00301608; case 0x301624: goto L_00301624; case 0x30163c: goto L_0030163C; case 0x301658: goto L_00301658; case 0x301694: goto L_00301694; case 0x3016c8: goto L_003016C8; case 0x3016fc: goto L_003016FC; case 0x301730: goto L_00301730; case 0x301764: goto L_00301764; case 0x301778: goto L_00301778; case 0x30178c: goto L_0030178C; case 0x3017a8: goto L_003017A8; case 0x3017d0: goto L_003017D0; case 0x301800: goto L_00301800; case 0x301830: goto L_00301830; case 0x30184c: goto L_0030184C; case 0x301860: goto L_00301860; case 0x3018b4: goto L_003018B4; case 0x3018cc: goto L_003018CC; case 0x3018f0: goto L_003018F0; case 0x301914: goto L_00301914; case 0x301928: goto L_00301928; case 0x301938: goto L_00301938; case 0x30194c: goto L_0030194C; case 0x301978: goto L_00301978; case 0x3019a8: goto L_003019A8; case 0x3019e4: goto L_003019E4; default: rt_jump(c, t); return; } }
L_003006A8:;
SET64(6, rd16(c, (RW(16) + 4)));
SET64(5, (s64)(s32)0x10000);
SET32(5, RW(17) + RW(5));
SET64(4, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(17) + RW(4));
wr32(c, (RW(5) + -30836), RW(6));
SET32(3, RW(17) + RW(3));
SET64(6, rd16(c, (RW(16) + 6)));
SET32(5, RW(0) + 3);
wr16(c, (RW(4) + -30724), (u16)RW(6));
SET64(3, (s32)rd32(c, (RW(3) + -30836)));
{ int t = RD(3) != RD(5);  if (t) goto L_003019E4; }
SET64(1, RD(0) | 0x87b0);
SET64(2, (s64)(s32)0x42f00000);
c->f[12].u = RW(2);
SET64(31, 0x3006f4); SET32(4, RW(17) + RW(1)); JP_F_00323860(c);
 goto L_003019E4;
L_003006FC:;
SET64(31, 0x300704); SET64(4, RD(17) + RD(0)); JP_F_002EE600(c);
{ int t = RD(2) == RD(0);  if (t) goto L_003019E4; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x300718); SET64(5, RD(0) + RD(0)); JP_F_002EE5C0(c);
 goto L_003019E4;
L_00300720:;
SET64(5, rd16(c, (RW(16) + 4)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x300730); SET32(6, RW(0) + 1); JP_F_002EDEE0(c);
SET64(31, 0x300738); SET64(4, RD(17) + RD(0)); JP_F_002EE170(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(29) + 244), (u8)RW(3)); goto L_003019E4;
L_00300744:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + -30268)));
{ int t = RD(3) == RD(0);  if (t) goto L_003019E4; }
wr8(c, (RW(3) + 20), (u8)RW(0)); goto L_003019E4;
L_00300760:;
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
wr32(c, (RW(3) + -30260), c->f[0].u); goto L_003019E4;
L_00300774:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(1, RD(3) < (u64)(s64)8);
if (RD(1) == RD(0)) { SET64(5, RD(0) + RD(0)); goto L_0030087C; }
SET64(4, (s64)(s32)0x4c0000);
SET32(3, RW(3) << 2);
SET32(4, RW(4) + -9296);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x3005c0: goto L_003005C0; case 0x3006a8: goto L_003006A8; case 0x3006fc: goto L_003006FC; case 0x300720: goto L_00300720; case 0x300744: goto L_00300744; case 0x300760: goto L_00300760; case 0x300774: goto L_00300774; case 0x3007a0: goto L_003007A0; case 0x3007a8: goto L_003007A8; case 0x3007b8: goto L_003007B8; case 0x3007fc: goto L_003007FC; case 0x300810: goto L_00300810; case 0x30083c: goto L_0030083C; case 0x30085c: goto L_0030085C; case 0x300878: goto L_00300878; case 0x3008b0: goto L_003008B0; case 0x3008dc: goto L_003008DC; case 0x3008e4: goto L_003008E4; case 0x3008f4: goto L_003008F4; case 0x300904: goto L_00300904; case 0x300938: goto L_00300938; case 0x30094c: goto L_0030094C; case 0x300978: goto L_00300978; case 0x300998: goto L_00300998; case 0x3009b4: goto L_003009B4; case 0x3009f0: goto L_003009F0; case 0x300a48: goto L_00300A48; case 0x300acc: goto L_00300ACC; case 0x300b50: goto L_00300B50; case 0x300b60: goto L_00300B60; case 0x300b70: goto L_00300B70; case 0x300b80: goto L_00300B80; case 0x300b94: goto L_00300B94; case 0x300ba4: goto L_00300BA4; case 0x300bc8: goto L_00300BC8; case 0x300c18: goto L_00300C18; case 0x300c30: goto L_00300C30; case 0x300c48: goto L_00300C48; case 0x300c60: goto L_00300C60; case 0x300c78: goto L_00300C78; case 0x300c8c: goto L_00300C8C; case 0x300ca8: goto L_00300CA8; case 0x300cc0: goto L_00300CC0; case 0x300cd8: goto L_00300CD8; case 0x300d30: goto L_00300D30; case 0x300db0: goto L_00300DB0; case 0x300df8: goto L_00300DF8; case 0x300e40: goto L_00300E40; case 0x300e88: goto L_00300E88; case 0x300ef8: goto L_00300EF8; case 0x300f40: goto L_00300F40; case 0x300f88: goto L_00300F88; case 0x301004: goto L_00301004; case 0x301048: goto L_00301048; case 0x301084: goto L_00301084; case 0x3010e0: goto L_003010E0; case 0x30113c: goto L_0030113C; case 0x3011e8: goto L_003011E8; case 0x301264: goto L_00301264; case 0x3012a8: goto L_003012A8; case 0x3012ec: goto L_003012EC; case 0x301330: goto L_00301330; case 0x301364: goto L_00301364; case 0x301398: goto L_00301398; case 0x3013a8: goto L_003013A8; case 0x3013c8: goto L_003013C8; case 0x301428: goto L_00301428; case 0x301458: goto L_00301458; case 0x301470: goto L_00301470; case 0x301488: goto L_00301488; case 0x3014ac: goto L_003014AC; case 0x3014d0: goto L_003014D0; case 0x301504: goto L_00301504; case 0x301528: goto L_00301528; case 0x30154c: goto L_0030154C; case 0x301570: goto L_00301570; case 0x301598: goto L_00301598; case 0x3015c8: goto L_003015C8; case 0x3015e0: goto L_003015E0; case 0x301608: goto L_00301608; case 0x301624: goto L_00301624; case 0x30163c: goto L_0030163C; case 0x301658: goto L_00301658; case 0x301694: goto L_00301694; case 0x3016c8: goto L_003016C8; case 0x3016fc: goto L_003016FC; case 0x301730: goto L_00301730; case 0x301764: goto L_00301764; case 0x301778: goto L_00301778; case 0x30178c: goto L_0030178C; case 0x3017a8: goto L_003017A8; case 0x3017d0: goto L_003017D0; case 0x301800: goto L_00301800; case 0x301830: goto L_00301830; case 0x30184c: goto L_0030184C; case 0x301860: goto L_00301860; case 0x3018b4: goto L_003018B4; case 0x3018cc: goto L_003018CC; case 0x3018f0: goto L_003018F0; case 0x301914: goto L_00301914; case 0x301928: goto L_00301928; case 0x301938: goto L_00301938; case 0x30194c: goto L_0030194C; case 0x301978: goto L_00301978; case 0x3019a8: goto L_003019A8; case 0x3019e4: goto L_003019E4; default: rt_jump(c, t); return; } }
L_003007A0:;
SET64(5, RD(0) + (s64)1); goto L_0030087C;
L_003007A8:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(5, rd8(c, (RW(3) + -30736))); goto L_0030087C;
L_003007B8:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(4, (s32)rd32(c, (RW(3) + -30268)));
{ int t = RD(4) == RD(0);  if (t) goto L_00300878; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x3007dc);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00300878; }
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(0) + 1);
SET32(3, RW(17) + RW(3));
SET64(5, RD(0) + (s64)1);
wr8(c, (RW(3) + -30820), (u8)RW(4)); goto L_0030087C;
L_003007FC:;
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x300808); SET32(4, RW(17) + RW(1)); JP_F_003238B0(c);
SET64(5, RD(2) & 0xff); goto L_0030087C;
L_00300810:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
c->f[1].u = rd32(c, (RW(3) + -30800));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; SET32(4, RW(0) + 1); if (t) goto L_00300834; }
SET64(4, RD(0) + RD(0));
L_00300834:;
SET64(5, RD(4) & 0xff); goto L_0030087C;
L_0030083C:;
SET64(31, 0x300844); SET64(4, RD(17) + RD(0)); JP_F_002EF6F0(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + -30832)));
SET64(3, RD(3) ^ 0x2);
SET64(5, RD(3) < (u64)(s64)1); goto L_0030087C;
L_0030085C:;
SET64(31, 0x300864); SET64(4, RD(17) + RD(0)); JP_F_002EF6F0(c);
SET64(1, RD(0) | 0x8790);
SET64(31, 0x300870); SET32(4, RW(2) + RW(1)); JP_F_002F00B0(c);
SET64(5, RD(2) & 0xff); goto L_0030087C;
L_00300878:;
SET64(5, RD(0) + RD(0));
L_0030087C:;
{ int t = RD(5) == RD(0);  if (t) goto L_003019E4; }
SET32(4, RW(0) + 1);
SET64(3, (s64)(s32)0xffff0000);
wr8(c, (RW(29) + 246), (u8)RW(4));
SET64(3, RD(3) | 0x7fff);
SET64(4, rd16(c, (RW(16) + 6)));
SET64(3, RD(4) & RD(3));
SET64(4, RD(4) & 0x8000);
wr16(c, (RW(29) + 248), (u16)RW(3));
SET64(3, RD(0) < RD(4));
wr8(c, (RW(29) + 247), (u8)RW(3)); goto L_003019E4;
L_003008B0:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(1, RD(3) < (u64)(s64)8);
if (RD(1) == RD(0)) { SET64(5, RD(0) + RD(0)); goto L_003009B8; }
SET64(4, (s64)(s32)0x4c0000);
SET32(3, RW(3) << 2);
SET32(4, RW(4) + -9328);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x3005c0: goto L_003005C0; case 0x3006a8: goto L_003006A8; case 0x3006fc: goto L_003006FC; case 0x300720: goto L_00300720; case 0x300744: goto L_00300744; case 0x300760: goto L_00300760; case 0x300774: goto L_00300774; case 0x3007a0: goto L_003007A0; case 0x3007a8: goto L_003007A8; case 0x3007b8: goto L_003007B8; case 0x3007fc: goto L_003007FC; case 0x300810: goto L_00300810; case 0x30083c: goto L_0030083C; case 0x30085c: goto L_0030085C; case 0x300878: goto L_00300878; case 0x3008b0: goto L_003008B0; case 0x3008dc: goto L_003008DC; case 0x3008e4: goto L_003008E4; case 0x3008f4: goto L_003008F4; case 0x300904: goto L_00300904; case 0x300938: goto L_00300938; case 0x30094c: goto L_0030094C; case 0x300978: goto L_00300978; case 0x300998: goto L_00300998; case 0x3009b4: goto L_003009B4; case 0x3009f0: goto L_003009F0; case 0x300a48: goto L_00300A48; case 0x300acc: goto L_00300ACC; case 0x300b50: goto L_00300B50; case 0x300b60: goto L_00300B60; case 0x300b70: goto L_00300B70; case 0x300b80: goto L_00300B80; case 0x300b94: goto L_00300B94; case 0x300ba4: goto L_00300BA4; case 0x300bc8: goto L_00300BC8; case 0x300c18: goto L_00300C18; case 0x300c30: goto L_00300C30; case 0x300c48: goto L_00300C48; case 0x300c60: goto L_00300C60; case 0x300c78: goto L_00300C78; case 0x300c8c: goto L_00300C8C; case 0x300ca8: goto L_00300CA8; case 0x300cc0: goto L_00300CC0; case 0x300cd8: goto L_00300CD8; case 0x300d30: goto L_00300D30; case 0x300db0: goto L_00300DB0; case 0x300df8: goto L_00300DF8; case 0x300e40: goto L_00300E40; case 0x300e88: goto L_00300E88; case 0x300ef8: goto L_00300EF8; case 0x300f40: goto L_00300F40; case 0x300f88: goto L_00300F88; case 0x301004: goto L_00301004; case 0x301048: goto L_00301048; case 0x301084: goto L_00301084; case 0x3010e0: goto L_003010E0; case 0x30113c: goto L_0030113C; case 0x3011e8: goto L_003011E8; case 0x301264: goto L_00301264; case 0x3012a8: goto L_003012A8; case 0x3012ec: goto L_003012EC; case 0x301330: goto L_00301330; case 0x301364: goto L_00301364; case 0x301398: goto L_00301398; case 0x3013a8: goto L_003013A8; case 0x3013c8: goto L_003013C8; case 0x301428: goto L_00301428; case 0x301458: goto L_00301458; case 0x301470: goto L_00301470; case 0x301488: goto L_00301488; case 0x3014ac: goto L_003014AC; case 0x3014d0: goto L_003014D0; case 0x301504: goto L_00301504; case 0x301528: goto L_00301528; case 0x30154c: goto L_0030154C; case 0x301570: goto L_00301570; case 0x301598: goto L_00301598; case 0x3015c8: goto L_003015C8; case 0x3015e0: goto L_003015E0; case 0x301608: goto L_00301608; case 0x301624: goto L_00301624; case 0x30163c: goto L_0030163C; case 0x301658: goto L_00301658; case 0x301694: goto L_00301694; case 0x3016c8: goto L_003016C8; case 0x3016fc: goto L_003016FC; case 0x301730: goto L_00301730; case 0x301764: goto L_00301764; case 0x301778: goto L_00301778; case 0x30178c: goto L_0030178C; case 0x3017a8: goto L_003017A8; case 0x3017d0: goto L_003017D0; case 0x301800: goto L_00301800; case 0x301830: goto L_00301830; case 0x30184c: goto L_0030184C; case 0x301860: goto L_00301860; case 0x3018b4: goto L_003018B4; case 0x3018cc: goto L_003018CC; case 0x3018f0: goto L_003018F0; case 0x301914: goto L_00301914; case 0x301928: goto L_00301928; case 0x301938: goto L_00301938; case 0x30194c: goto L_0030194C; case 0x301978: goto L_00301978; case 0x3019a8: goto L_003019A8; case 0x3019e4: goto L_003019E4; default: rt_jump(c, t); return; } }
L_003008DC:;
SET64(5, RD(0) + (s64)1); goto L_003009B8;
L_003008E4:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(5, rd8(c, (RW(3) + -30736))); goto L_003009B8;
L_003008F4:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(4, (s32)rd32(c, (RW(3) + -30268)));
{ int t = RD(4) == RD(0);  if (t) goto L_003009B4; }
if (0) { L_00300904:;  }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x300918);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_003009B4; }
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(0) + 1);
SET32(3, RW(17) + RW(3));
SET64(5, RD(0) + (s64)1);
wr8(c, (RW(3) + -30820), (u8)RW(4)); goto L_003009B8;
L_00300938:;
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x300944); SET32(4, RW(17) + RW(1)); JP_F_003238B0(c);
SET64(5, RD(2) & 0xff); goto L_003009B8;
L_0030094C:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
c->f[1].u = rd32(c, (RW(3) + -30800));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; SET32(4, RW(0) + 1); if (t) goto L_00300970; }
SET64(4, RD(0) + RD(0));
L_00300970:;
SET64(5, RD(4) & 0xff); goto L_003009B8;
L_00300978:;
SET64(31, 0x300980); SET64(4, RD(17) + RD(0)); JP_F_002EF6F0(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + -30832)));
SET64(3, RD(3) ^ 0x2);
SET64(5, RD(3) < (u64)(s64)1); goto L_003009B8;
L_00300998:;
SET64(31, 0x3009a0); SET64(4, RD(17) + RD(0)); JP_F_002EF6F0(c);
SET64(1, RD(0) | 0x8790);
SET64(31, 0x3009ac); SET32(4, RW(2) + RW(1)); JP_F_002F00B0(c);
SET64(5, RD(2) & 0xff); goto L_003009B8;
L_003009B4:;
SET64(5, RD(0) + RD(0));
L_003009B8:;
SET64(3, RD(5) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_003019E4; }
SET32(4, RW(0) + 1);
SET64(3, (s64)(s32)0xffff0000);
wr8(c, (RW(29) + 246), (u8)RW(4));
SET64(3, RD(3) | 0x7fff);
SET64(4, rd16(c, (RW(16) + 6)));
SET64(3, RD(4) & RD(3));
SET64(4, RD(4) & 0x8000);
wr16(c, (RW(29) + 248), (u16)RW(3));
SET64(3, RD(0) < RD(4));
wr8(c, (RW(29) + 247), (u8)RW(3)); goto L_003019E4;
L_003009F0:;
SET64(4, rd16(c, (RW(16) + 4)));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(4, RD(0) < RD(4));
wr8(c, (RW(3) + -30715), (u8)RW(4));
SET64(3, rd16(c, (RW(16) + 4)));
{ int t = RD(3) == RD(0);  if (t) goto L_003019E4; }
SET64(6, rd16(c, (RW(16) + 6)));
SET64(4, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0xffff0000);
SET32(4, RW(17) + RW(4));
SET64(5, RD(3) | 0x7fff);
SET64(6, RD(6) & 0x8000);
SET64(3, (s64)(s32)0x10000);
SET64(6, RD(0) < RD(6));
SET32(3, RW(17) + RW(3));
wr8(c, (RW(4) + -30712), (u8)RW(6));
SET64(4, rd16(c, (RW(16) + 6)));
SET64(4, RD(4) & RD(5));
wr16(c, (RW(3) + -30714), (u16)RW(4)); goto L_003019E4;
L_00300A48:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(3, rd8(c, (RW(3) + -31058)));
{ int t = RD(3) != RD(0);  if (t) goto L_003019E4; }
SET32(2, RW(0) + 1);
SET64(4, RD(17) + RD(0));
wr8(c, (RW(17) + 1032), (u8)RW(2));
SET64(2, rd16(c, (RW(16) + 6)));
c->f[12].u = rd32(c, (RW(16) + 8));
SET64(5, rd16(c, (RW(16) + 4)));
SET64(31, 0x300a7c); SET64(6, RD(0) < RD(2)); JP_F_002EE890(c);
SET64(3, (s64)(s32)0x10000);
SET32(5, RW(0) + -1);
SET64(4, RD(3) + RD(0));
SET32(3, RW(17) + RW(3));
SET32(4, RW(17) + RW(4));
wr8(c, (RW(3) + -30735), (u8)RW(0));
SET64(3, (s64)(s32)0x10000);
wr8(c, (RW(4) + -30722), (u8)RW(0));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr8(c, (RW(3) + -30721), (u8)RW(0));
SET64(3, RD(4) + RD(0));
SET32(4, RW(17) + RW(4));
SET32(3, RW(17) + RW(3));
wr16(c, (RW(4) + -30720), (u16)RW(5));
wr8(c, (RW(3) + -30716), (u8)RW(0));
SET32(4, RW(0) + 1);
wr8(c, (RW(29) + 240), (u8)RW(4));
wr16(c, (RW(29) + 242), (u16)RW(0)); goto L_003019E4;
L_00300ACC:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(3, rd8(c, (RW(3) + -31058)));
{ int t = RD(3) != RD(0);  if (t) goto L_003019E4; }
SET32(2, RW(0) + 1);
SET64(4, RD(17) + RD(0));
wr8(c, (RW(17) + 1032), (u8)RW(2));
SET64(2, rd16(c, (RW(16) + 6)));
c->f[12].u = rd32(c, (RW(16) + 8));
SET64(5, rd16(c, (RW(16) + 4)));
SET64(31, 0x300b00); SET64(6, RD(0) < RD(2)); JP_F_002EE850(c);
SET64(3, (s64)(s32)0x10000);
SET32(5, RW(0) + -1);
SET64(4, RD(3) + RD(0));
SET32(3, RW(17) + RW(3));
SET32(4, RW(17) + RW(4));
wr8(c, (RW(3) + -30735), (u8)RW(0));
SET64(3, (s64)(s32)0x10000);
wr8(c, (RW(4) + -30722), (u8)RW(0));
SET32(3, RW(17) + RW(3));
SET64(4, (s64)(s32)0x10000);
wr8(c, (RW(3) + -30721), (u8)RW(0));
SET64(3, RD(4) + RD(0));
SET32(4, RW(17) + RW(4));
SET32(3, RW(17) + RW(3));
wr16(c, (RW(4) + -30720), (u16)RW(5));
wr8(c, (RW(3) + -30716), (u8)RW(0));
SET32(4, RW(0) + 1);
wr8(c, (RW(29) + 240), (u8)RW(4));
wr16(c, (RW(29) + 242), (u16)RW(0)); goto L_003019E4;
L_00300B50:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(3, RD(0) < RD(3));
wr8(c, (RW(17) + 1032), (u8)RW(3)); goto L_003019E4;
L_00300B60:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(3, RD(0) < RD(3));
wr8(c, (RW(17) + 2240), (u8)RW(3)); goto L_003019E4;
L_00300B70:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(3, RD(0) < RD(3));
wr8(c, (RW(17) + 2241), (u8)RW(3)); goto L_003019E4;
L_00300B80:;
SET64(4, rd16(c, (RW(16) + 4)));
SET64(3, (s32)rd32(c, (RW(17) + 900)));
SET64(4, RD(0) < RD(4));
wr8(c, (RW(3) + 42), (u8)RW(4)); goto L_003019E4;
L_00300B94:;
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(3, (s32)rd32(c, (RW(17) + 900)));
wr32(c, (RW(3) + 36), c->f[0].u); goto L_003019E4;
L_00300BA4:;
SET64(3, (s32)rd32(c, (RW(17) + 860)));
SET64(3, rd16(c, (RW(3) + 16)));
{ int t = RD(3) == RD(0); c->f[0].u = rd32(c, (RW(16) + 4)); if (t) goto L_003019E4; }
SET64(3, (s32)rd32(c, (RW(17) + 900)));
{ int t = RD(3) == RD(0);  if (t) goto L_003019E4; }
wr32(c, (RW(3) + 28), c->f[0].u); goto L_003019E4;
L_00300BC8:;
SET64(31, 0x300bd0); SET32(4, RW(17) + 832); JP_F_001557B0(c);
SET64(3, rd16(c, (RW(16) + 4)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_00300BE8; }
c->f[1].u = RW(3);
c->f[1].f = (f32)(s32)c->f[1].u; goto L_00300C00;
L_00300BE8:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[1].u = RW(4);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[1].f = fpu(F(1) + F(1));
L_00300C00:;
c->fcc = F(0) <= F(1);
{ int t = c->fcc;  if (t) goto L_003019E4; }
SET32(3, RW(0) + 1);
wr8(c, (RW(29) + 245), (u8)RW(3)); goto L_003019E4;
L_00300C18:;
c->f[12].u = rd32(c, (RW(16) + 4));
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x300c28); SET32(4, RW(17) + RW(1)); JP_F_00323860(c);
 goto L_003019E4;
L_00300C30:;
SET64(4, rd16(c, (RW(16) + 4)));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(4, RD(0) < RD(4));
wr8(c, (RW(3) + -30848), (u8)RW(4)); goto L_003019E4;
L_00300C48:;
SET64(4, rd16(c, (RW(16) + 4)));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(4, RD(0) < RD(4));
wr8(c, (RW(3) + -30847), (u8)RW(4)); goto L_003019E4;
L_00300C60:;
SET64(4, rd16(c, (RW(16) + 4)));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(4, RD(0) < RD(4));
wr8(c, (RW(3) + -30846), (u8)RW(4)); goto L_003019E4;
L_00300C78:;
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
wr32(c, (RW(3) + -30844), c->f[0].u); goto L_003019E4;
L_00300C8C:;
SET64(2, rd16(c, (RW(16) + 4)));
SET32(4, RW(17) + 128);
SET64(2, RD(0) < RD(2));
SET64(31, 0x300ca0); SET64(5, RD(2) ^ 0x1); JP_F_0031CFA0(c);
 goto L_003019E4;
L_00300CA8:;
c->f[12].u = rd32(c, (RW(16) + 4));
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x300cb8); SET32(4, RW(17) + RW(1)); JP_F_00323880(c);
 goto L_003019E4;
L_00300CC0:;
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x300cd0); SET32(6, RW(29) + 240); JP_F_00300440(c);
 goto L_003019E4;
L_00300CD8:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(2, RD(0) | 0xfffe);
if (RD(3) == RD(2)) { SET32(4, RW(17) + 30416); goto L_00300D08; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(4, RW(17) + 29648); goto L_00300D08; }
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(17));
SET32(4, RW(2) + 11216);
L_00300D08:;
SET64(25, (s32)rd32(c, (RW(4) + 624)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x300d18);  rt_call(c, t); }
SET64(1, RD(0) | 0x87b0);
c->f[12].u = RW(0);
SET64(31, 0x300d28); SET32(4, RW(17) + RW(1)); JP_F_00323860(c);
 goto L_003019E4;
L_00300D30:;
SET64(2, rd16(c, (RW(16) + 6)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_00300D48; }
c->f[0].u = RW(2);
c->f[12].f = (f32)(s32)c->f[0].u; goto L_00300D60;
L_00300D48:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[12].f = (f32)(s32)c->f[0].u;
c->f[12].f = fpu(F(12) + F(12));
L_00300D60:;
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x300d6c); SET32(4, RW(17) + RW(1)); JP_F_003234A0(c);
SET64(3, rd16(c, (RW(16) + 4)));
SET64(2, RD(0) | 0xfffe);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 30416); goto L_00300D9C; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 29648); goto L_00300D9C; }
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) + 11216);
L_00300D9C:;
SET32(4, RW(2) + 640);
SET64(31, 0x300da8); c->f[12].u = c->f[0].u; JP_F_0031EA50(c);
 goto L_003019E4;
L_00300DB0:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(2, RD(0) | 0xfffe);
if (RD(3) == RD(2)) { SET32(3, RW(17) + 30416); goto L_00300DE0; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(3, RW(17) + 29648); goto L_00300DE0; }
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(17));
SET32(3, RW(2) + 11216);
L_00300DE0:;
SET64(2, rd16(c, (RW(16) + 6)));
SET32(4, RW(3) + 640);
SET64(31, 0x300df0); SET64(5, RD(0) < RD(2)); JP_F_0031EA30(c);
 goto L_003019E4;
L_00300DF8:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(2, RD(0) | 0xfffe);
if (RD(3) == RD(2)) { SET32(3, RW(17) + 30416); goto L_00300E28; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(3, RW(17) + 29648); goto L_00300E28; }
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(17));
SET32(3, RW(2) + 11216);
L_00300E28:;
SET64(2, rd16(c, (RW(16) + 6)));
SET32(4, RW(3) + 640);
SET64(31, 0x300e38); SET64(5, RD(0) < RD(2)); JP_F_0031EA20(c);
 goto L_003019E4;
L_00300E40:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(2, RD(0) | 0xfffe);
if (RD(3) == RD(2)) { SET32(3, RW(17) + 30416); goto L_00300E70; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(3, RW(17) + 29648); goto L_00300E70; }
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(17));
SET32(3, RW(2) + 11216);
L_00300E70:;
SET64(2, rd16(c, (RW(16) + 6)));
SET32(4, RW(3) + 640);
SET64(31, 0x300e80); SET64(5, RD(0) < RD(2)); JP_F_0031EA10(c);
 goto L_003019E4;
L_00300E88:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(2, RD(0) | 0xfffe);
if (RD(3) == RD(2)) { SET32(4, RW(17) + 30416); goto L_00300EB8; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(4, RW(17) + 29648); goto L_00300EB8; }
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(17));
SET32(4, RW(2) + 11216);
L_00300EB8:;
SET64(2, rd16(c, (RW(16) + 6)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_00300ED0; }
c->f[0].u = RW(2);
c->f[12].f = (f32)(s32)c->f[0].u; goto L_00300EE8;
L_00300ED0:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[12].f = (f32)(s32)c->f[0].u;
c->f[12].f = fpu(F(12) + F(12));
L_00300EE8:;
SET64(31, 0x300ef0); SET32(4, RW(4) + 640); JP_F_0031EA00(c);
 goto L_003019E4;
L_00300EF8:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(2, RD(0) | 0xfffe);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 30416); goto L_00300F28; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 29648); goto L_00300F28; }
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) + 11216);
L_00300F28:;
SET64(6, rd16(c, (RW(16) + 6)));
SET32(4, RW(2) + 640);
SET64(31, 0x300f38); SET32(5, RW(0) + 1); JP_F_0031E950(c);
 goto L_003019E4;
L_00300F40:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(2, RD(0) | 0xfffe);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 30416); goto L_00300F70; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 29648); goto L_00300F70; }
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) + 11216);
L_00300F70:;
SET64(6, rd16(c, (RW(16) + 6)));
SET32(4, RW(2) + 640);
SET64(31, 0x300f80); SET64(5, RD(0) + RD(0)); JP_F_0031E950(c);
 goto L_003019E4;
L_00300F88:;
c->f[2].u = rd32(c, (RW(16) + 24));
SET64(6, rd16(c, (RW(16) + 14)));
c->f[1].u = rd32(c, (RW(16) + 20));
SET64(5, rd16(c, (RW(16) + 12)));
c->f[0].u = rd32(c, (RW(16) + 16));
SET64(4, rd16(c, (RW(16) + 10)));
SET64(3, rd16(c, (RW(16) + 8)));
SET64(2, RD(0) | 0xfffe);
wr16(c, (RW(29) + 176), (u16)RW(3));
wr32(c, (RW(29) + 184), c->f[0].u);
wr16(c, (RW(29) + 178), (u16)RW(4));
wr32(c, (RW(29) + 188), c->f[1].u);
wr16(c, (RW(29) + 180), (u16)RW(5));
wr32(c, (RW(29) + 192), c->f[2].u);
wr16(c, (RW(29) + 182), (u16)RW(6));
SET64(3, rd16(c, (RW(16) + 4)));
if (RD(3) == RD(2)) { SET32(2, RW(17) + 30416); goto L_00300FF0; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 29648); goto L_00300FF0; }
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) + 11216);
L_00300FF0:;
SET32(4, RW(2) + 640);
SET64(31, 0x300ffc); SET32(5, RW(29) + 176); JP_F_0031E910(c);
 goto L_003019E4;
L_00301004:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(2, RD(0) | 0xfffe);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 30416); goto L_00301034; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 29648); goto L_00301034; }
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) + 11216);
L_00301034:;
SET64(5, rd16(c, (RW(16) + 6)));
SET64(31, 0x301040); SET32(4, RW(2) + 640); JP_F_0031E960(c);
 goto L_003019E4;
L_00301048:;
SET64(4, rd16(c, (RW(16) + 4)));
SET64(3, RD(0) | 0xfffe);
if (RD(4) == RD(3)) { SET32(4, RW(17) + 30416); goto L_00301078; }
SET64(3, RD(0) | 0xffff);
if (RD(4) == RD(3)) { SET32(4, RW(17) + 29648); goto L_00301078; }
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 8);
SET32(3, RW(3) + RW(17));
SET32(4, RW(3) + 11216);
L_00301078:;
SET64(3, rd16(c, (RW(16) + 6)));
wr16(c, (RW(4) + 684), (u16)RW(3)); goto L_003019E4;
L_00301084:;
c->f[1].u = rd32(c, (RW(16) + 12));
SET64(3, rd16(c, (RW(16) + 4)));
c->f[0].u = rd32(c, (RW(16) + 8));
SET64(2, RD(0) | 0xfffe);
wr32(c, (RW(29) + 232), c->f[1].u);
{ int t = RD(3) == RD(2); wr32(c, (RW(29) + 236), c->f[0].u); if (t) goto L_003010B4; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 29648); goto L_003010CC; }
SET32(2, RW(3) << 1); goto L_003010BC;
L_003010B4:;
SET32(2, RW(17) + 30416); goto L_003010CC;
L_003010BC:;
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) + 11216);
L_003010CC:;
SET64(5, rd64(c, (RW(29) + 232)));
SET64(31, 0x3010d8); SET32(4, RW(2) + 640); JP_F_0031E9E0(c);
 goto L_003019E4;
L_003010E0:;
c->f[2].u = rd32(c, (RW(16) + 8));
SET64(2, RD(0) | 0xfffe);
c->f[1].u = rd32(c, (RW(16) + 12));
c->f[0].u = rd32(c, (RW(16) + 16));
wr32(c, (RW(29) + 216), c->f[0].u);
wr32(c, (RW(29) + 220), c->f[1].u);
wr32(c, (RW(29) + 224), c->f[2].u);
SET64(3, rd16(c, (RW(16) + 4)));
if (RD(3) == RD(2)) { SET32(2, RW(17) + 30416); goto L_00301128; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 29648); goto L_00301128; }
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) + 11216);
L_00301128:;
SET32(4, RW(2) + 640);
SET64(31, 0x301134); SET32(5, RW(29) + 216); JP_F_0031E9A0(c);
 goto L_003019E4;
L_0030113C:;
SET64(4, rd16(c, (RW(16) + 4)));
SET64(3, RD(0) | 0xfffe);
if (RD(4) == RD(3)) { SET32(4, RW(17) + 30416); goto L_0030116C; }
SET64(3, RD(0) | 0xffff);
if (RD(4) == RD(3)) { SET32(4, RW(17) + 29648); goto L_0030116C; }
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 8);
SET32(3, RW(3) + RW(17));
SET32(4, RW(3) + 11216);
L_0030116C:;
c->f[0].u = rd32(c, (RW(16) + 16));
SET64(3, RD(0) | 0xfffe);
wr32(c, (RW(4) + 672), c->f[0].u);
SET64(4, rd16(c, (RW(16) + 4)));
if (RD(4) == RD(3)) { SET32(4, RW(17) + 30416); goto L_003011A4; }
SET64(3, RD(0) | 0xffff);
if (RD(4) == RD(3)) { SET32(4, RW(17) + 29648); goto L_003011A4; }
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 8);
SET32(3, RW(3) + RW(17));
SET32(4, RW(3) + 11216);
L_003011A4:;
c->f[0].u = rd32(c, (RW(16) + 12));
SET64(3, RD(0) | 0xfffe);
wr32(c, (RW(4) + 676), c->f[0].u);
SET64(4, rd16(c, (RW(16) + 4)));
if (RD(4) == RD(3)) { SET32(3, RW(17) + 30416); goto L_003011DC; }
SET64(3, RD(0) | 0xffff);
if (RD(4) == RD(3)) { SET32(3, RW(17) + 29648); goto L_003011DC; }
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 8);
SET32(3, RW(3) + RW(17));
SET32(3, RW(3) + 11216);
L_003011DC:;
c->f[0].u = rd32(c, (RW(16) + 8));
wr32(c, (RW(3) + 680), c->f[0].u); goto L_003019E4;
L_003011E8:;
c->f[1].u = rd32(c, (RW(16) + 8));
SET64(4, rd16(c, (RW(16) + 4)));
c->f[0].u = rd32(c, (RW(16) + 12));
SET64(5, rd16(c, (RW(16) + 6)));
SET64(3, RD(0) | 0xfffe);
wr32(c, (RW(29) + 208), c->f[1].u);
wr32(c, (RW(29) + 212), c->f[0].u);
c->f[1].u = rd32(c, (RW(29) + 208));
c->f[0].u = rd32(c, (RW(29) + 212));
wr32(c, (RW(29) + 200), c->f[1].u);
{ int t = RD(4) == RD(3); wr32(c, (RW(29) + 204), c->f[0].u); if (t) goto L_0030122C; }
SET64(3, RD(0) | 0xffff);
if (RD(4) == RD(3)) { SET32(4, RW(17) + 29648); goto L_00301244; }
SET32(3, RW(4) << 1); goto L_00301234;
L_0030122C:;
SET32(4, RW(17) + 30416); goto L_00301244;
L_00301234:;
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 8);
SET32(3, RW(3) + RW(17));
SET32(4, RW(3) + 11216);
L_00301244:;
SET64(3, RD(5) & 0xffff);
SET32(3, RW(3) << 3);
c->f[1].u = rd32(c, (RW(29) + 200));
SET32(3, RW(3) + RW(4));
c->f[0].u = rd32(c, (RW(29) + 204));
wr32(c, (RW(3) + 688), c->f[1].u);
wr32(c, (RW(3) + 692), c->f[0].u); goto L_003019E4;
L_00301264:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(2, RD(0) | 0xfffe);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 30416); goto L_00301294; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 29648); goto L_00301294; }
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) + 11216);
L_00301294:;
SET64(5, rd16(c, (RW(16) + 6)));
SET64(31, 0x3012a0); SET32(4, RW(2) + 640); JP_F_0031E900(c);
 goto L_003019E4;
L_003012A8:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(2, RD(0) | 0xfffe);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 30416); goto L_003012D8; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 29648); goto L_003012D8; }
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) + 11216);
L_003012D8:;
SET64(5, rd16(c, (RW(16) + 6)));
SET64(31, 0x3012e4); SET32(4, RW(2) + 640); JP_F_0031E8F0(c);
 goto L_003019E4;
L_003012EC:;
SET64(3, rd16(c, (RW(16) + 4)));
SET64(2, RD(0) | 0xfffe);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 30416); goto L_0030131C; }
SET64(2, RD(0) | 0xffff);
if (RD(3) == RD(2)) { SET32(2, RW(17) + 29648); goto L_0030131C; }
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 8);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) + 11216);
L_0030131C:;
c->f[12].u = rd32(c, (RW(16) + 8));
SET64(31, 0x301328); SET32(4, RW(2) + 640); JP_F_0031E8E0(c);
 goto L_003019E4;
L_00301330:;
c->f[2].u = rd32(c, (RW(16) + 12));
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(16) + 8));
wr32(c, (RW(29) + 172), RW(3));
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(29) + 168), c->f[2].u);
SET32(3, RW(17) + RW(3));
wr32(c, (RW(29) + 164), c->f[1].u);
wr32(c, (RW(29) + 160), c->f[0].u);
rd128(c, (RW(29) + 160) & ~15u, &c->r[4]);
wr128(c, (RW(3) + -30192) & ~15u, &c->r[4]); goto L_003019E4;
L_00301364:;
c->f[2].u = rd32(c, (RW(16) + 12));
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(16) + 8));
wr32(c, (RW(29) + 156), RW(3));
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(29) + 152), c->f[2].u);
SET32(3, RW(17) + RW(3));
wr32(c, (RW(29) + 148), c->f[1].u);
wr32(c, (RW(29) + 144), c->f[0].u);
rd128(c, (RW(29) + 144) & ~15u, &c->r[4]);
wr128(c, (RW(3) + -30176) & ~15u, &c->r[4]); goto L_003019E4;
L_00301398:;
SET64(31, 0x3013a0); SET64(4, RD(17) + RD(0)); JP_F_002ED540(c);
 goto L_003019E4;
L_003013A8:;
SET64(4, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x10000);
SET32(5, RW(0) + -1);
SET32(4, RW(17) + RW(4));
wr16(c, (RW(4) + -30436), (u16)RW(5));
SET32(3, RW(17) + RW(3));
wr16(c, (RW(3) + -30428), (u16)RW(5)); goto L_003019E4;
L_003013C8:;
c->f[0].u = rd32(c, (RW(16) + 8));
SET64(6, rd16(c, (RW(16) + 4)));
SET64(7, RD(0) + RD(0));
SET64(5, RD(17) + RD(0));
SET32(4, RW(0) + -1);
L_003013DC:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(5) + RW(3));
SET64(3, (s16)rd16(c, (RW(3) + -30436)));
if (RD(3) != RD(4)) { SET32(7, RW(7) + 1); goto L_00301414; }
SET32(3, RW(7) << 3);
SET64(4, (s64)(s32)0x10000);
SET32(5, RW(3) + RW(17));
SET64(3, RD(4) + RD(0));
SET32(4, RW(5) + RW(4));
SET32(3, RW(5) + RW(3));
wr16(c, (RW(4) + -30436), (u16)RW(6));
wr32(c, (RW(3) + -30432), c->f[0].u); goto L_003019E4;
L_00301414:;
SET64(3, RD(7) < (u64)(s64)2);
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 8); if (t) { POLL(); goto L_003013DC; } }
 goto L_003019E4;
L_00301428:;
SET64(4, rd16(c, (RW(16) + 4)));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(4, RD(0) < RD(4));
wr8(c, (RW(3) + -30722), (u8)RW(4));
SET64(3, rd16(c, (RW(16) + 4)));
{ int t = RD(3) != RD(0);  if (t) goto L_003019E4; }
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
wr8(c, (RW(3) + -30721), (u8)RW(0)); goto L_003019E4;
L_00301458:;
SET64(4, rd16(c, (RW(16) + 4)));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(4, RD(0) < RD(4));
wr8(c, (RW(3) + -30721), (u8)RW(4)); goto L_003019E4;
L_00301470:;
SET64(4, rd16(c, (RW(16) + 4)));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(4, RD(0) < RD(4));
wr8(c, (RW(3) + -30716), (u8)RW(4)); goto L_003019E4;
L_00301488:;
SET64(5, (s16)rd16(c, (RW(16) + 4)));
SET64(4, RD(17) + RD(0));
SET64(6, (s16)rd16(c, (RW(16) + 6)));
SET64(7, (s16)rd16(c, (RW(16) + 8)));
SET64(8, (s16)rd16(c, (RW(16) + 10)));
SET64(31, 0x3014a4); SET64(9, RD(0) + RD(0)); JP_F_002E85F0(c);
 goto L_003019E4;
L_003014AC:;
SET64(5, (s16)rd16(c, (RW(16) + 4)));
SET64(4, RD(17) + RD(0));
SET64(6, (s16)rd16(c, (RW(16) + 6)));
SET64(7, (s16)rd16(c, (RW(16) + 8)));
SET64(8, (s16)rd16(c, (RW(16) + 10)));
SET64(31, 0x3014c8); SET32(9, RW(0) + 1); JP_F_002E85F0(c);
 goto L_003019E4;
L_003014D0:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(3, rd8(c, (RW(3) + -31058)));
{ int t = RD(3) != RD(0);  if (t) goto L_003019E4; }
SET64(5, (s16)rd16(c, (RW(16) + 4)));
SET64(6, (s16)rd16(c, (RW(16) + 6)));
SET64(7, (s16)rd16(c, (RW(16) + 8)));
SET64(8, (s16)rd16(c, (RW(16) + 10)));
SET64(31, 0x3014fc); SET64(4, RD(17) + RD(0)); JP_F_002E8500(c);
 goto L_003019E4;
L_00301504:;
SET64(5, (s16)rd16(c, (RW(16) + 4)));
SET64(4, RD(17) + RD(0));
SET64(6, (s16)rd16(c, (RW(16) + 6)));
SET64(7, (s16)rd16(c, (RW(16) + 8)));
SET64(8, (s16)rd16(c, (RW(16) + 10)));
SET64(31, 0x301520); SET64(9, RD(0) + RD(0)); JP_F_002E8570(c);
 goto L_003019E4;
L_00301528:;
SET64(5, (s16)rd16(c, (RW(16) + 4)));
SET64(4, RD(17) + RD(0));
SET64(6, (s16)rd16(c, (RW(16) + 6)));
SET64(7, (s16)rd16(c, (RW(16) + 8)));
SET64(8, (s16)rd16(c, (RW(16) + 10)));
SET64(31, 0x301544); SET32(9, RW(0) + 1); JP_F_002E8570(c);
 goto L_003019E4;
L_0030154C:;
SET32(6, RW(0) + -2);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 27);
SET64(9, RD(0) + RD(0));
SET64(7, RD(6) + RD(0));
SET64(31, 0x301568); SET64(8, RD(6) + RD(0)); JP_F_002E85F0(c);
 goto L_003019E4;
L_00301570:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(3, rd8(c, (RW(3) + -31058)));
{ int t = RD(3) != RD(0);  if (t) goto L_003019E4; }
SET64(5, rd16(c, (RW(16) + 4)));
SET64(31, 0x301590); SET64(4, RD(17) + RD(0)); JP_F_002E8BC0(c);
 goto L_003019E4;
L_00301598:;
SET64(5, rd16(c, (RW(16) + 4)));
c->f[12].u = rd32(c, (RW(16) + 12));
SET64(6, rd16(c, (RW(16) + 6)));
c->f[13].u = rd32(c, (RW(16) + 16));
SET64(7, rd16(c, (RW(16) + 8)));
c->f[14].u = rd32(c, (RW(16) + 20));
SET64(8, rd16(c, (RW(16) + 10)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x3015c0); SET64(9, RD(0) + RD(0)); JP_F_002EA1D0(c);
 goto L_003019E4;
L_003015C8:;
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x3015d8); SET32(6, RW(29) + 240); JP_F_00300290(c);
 goto L_003019E4;
L_003015E0:;
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
{ int t = RD(4) == RD(0);  if (t) goto L_003019E4; }
SET64(31, 0x3015f4); c->f[12].u = rd32(c, (RW(16) + 4)); JP_F_002FC2C0(c);
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
SET64(31, 0x301600); c->f[12].u = rd32(c, (RW(16) + 8)); JP_F_002FC2B0(c);
 goto L_003019E4;
L_00301608:;
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
c->f[12].u = rd32(c, (RW(16) + 4));
c->f[13].u = rd32(c, (RW(16) + 8));
SET64(31, 0x30161c); SET32(4, RW(2) + 708); JP_F_00361C10(c);
 goto L_003019E4;
L_00301624:;
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x301634); SET32(6, RW(29) + 240); JP_F_003001E0(c);
 goto L_003019E4;
L_0030163C:;
SET64(25, (s32)rd32(c, (RW(17) + 404)));
c->f[12].u = rd32(c, (RW(16) + 4));
SET64(25, (s32)rd32(c, (RW(25) + 232)));
{ u32 t = RW(25); SET64(31, 0x301650); SET32(4, RW(17) + 128); rt_call(c, t); }
 goto L_003019E4;
L_00301658:;
SET64(4, (s32)rd32(c, (RW(17) + 44)));
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
wr32(c, (RW(29) + 140), RW(3));
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
rd128(c, (RW(4) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[3]);
SET64(4, (s32)rd32(c, (RW(2) + 680)));
c->f[12].u = rd32(c, (RW(16) + 4));
SET64(31, 0x30168c); SET32(5, RW(29) + 128); JP_F_00241620(c);
 goto L_003019E4;
L_00301694:;
c->f[2].u = rd32(c, (RW(16) + 12));
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(16) + 8));
wr32(c, (RW(29) + 124), RW(3));
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(29) + 120), c->f[2].u);
SET32(3, RW(17) + RW(3));
wr32(c, (RW(29) + 116), c->f[1].u);
wr32(c, (RW(29) + 112), c->f[0].u);
rd128(c, (RW(29) + 112) & ~15u, &c->r[4]);
wr128(c, (RW(3) + -31152) & ~15u, &c->r[4]); goto L_003019E4;
L_003016C8:;
c->f[2].u = rd32(c, (RW(16) + 12));
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(16) + 8));
wr32(c, (RW(29) + 108), RW(3));
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(29) + 104), c->f[2].u);
SET32(3, RW(17) + RW(3));
wr32(c, (RW(29) + 100), c->f[1].u);
wr32(c, (RW(29) + 96), c->f[0].u);
rd128(c, (RW(29) + 96) & ~15u, &c->r[4]);
wr128(c, (RW(3) + -31136) & ~15u, &c->r[4]); goto L_003019E4;
L_003016FC:;
c->f[2].u = rd32(c, (RW(16) + 12));
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(16) + 8));
wr32(c, (RW(29) + 92), RW(3));
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(29) + 88), c->f[2].u);
SET32(3, RW(17) + RW(3));
wr32(c, (RW(29) + 84), c->f[1].u);
wr32(c, (RW(29) + 80), c->f[0].u);
rd128(c, (RW(29) + 80) & ~15u, &c->r[4]);
wr128(c, (RW(3) + -31120) & ~15u, &c->r[4]); goto L_003019E4;
L_00301730:;
c->f[2].u = rd32(c, (RW(16) + 12));
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(16) + 8));
wr32(c, (RW(29) + 76), RW(3));
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(3, (s64)(s32)0x10000);
wr32(c, (RW(29) + 72), c->f[2].u);
SET32(3, RW(17) + RW(3));
wr32(c, (RW(29) + 68), c->f[1].u);
wr32(c, (RW(29) + 64), c->f[0].u);
rd128(c, (RW(29) + 64) & ~15u, &c->r[4]);
wr128(c, (RW(3) + -31104) & ~15u, &c->r[4]); goto L_003019E4;
L_00301764:;
SET64(4, rd16(c, (RW(16) + 4)));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
wr16(c, (RW(3) + -31088), (u16)RW(4)); goto L_003019E4;
L_00301778:;
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
wr32(c, (RW(3) + -31084), c->f[0].u); goto L_003019E4;
L_0030178C:;
c->f[12].u = rd32(c, (RW(16) + 4));
c->f[13].u = rd32(c, (RW(16) + 8));
c->f[14].u = rd32(c, (RW(16) + 12));
SET64(31, 0x3017a0); SET32(4, RW(17) + 128); JP_F_0031D670(c);
 goto L_003019E4;
L_003017A8:;
SET64(31, 0x3017b0); SET64(4, RD(17) + RD(0)); JP_F_002F11A0(c);
c->f[12].u = rd32(c, (RW(16) + 8));
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
c->f[13].u = rd32(c, (RW(16) + 12));
SET64(5, rd16(c, (RW(16) + 6)));
SET64(31, 0x3017c8); SET64(6, (s16)rd16(c, (RW(2) + 44))); JP_F_002FE510(c);
 goto L_003019E4;
L_003017D0:;
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x3017dc); SET32(4, RW(17) + RW(1)); JP_F_003238B0(c);
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_003019E4; }
c->f[12].u = rd32(c, (RW(16) + 4));
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x3017f8); SET32(4, RW(17) + RW(1)); JP_F_00323900(c);
 goto L_003019E4;
L_00301800:;
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x30180c); SET32(4, RW(17) + RW(1)); JP_F_003238B0(c);
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_003019E4; }
SET64(1, RD(0) | 0x87b0);
c->f[12].u = RW(0);
SET64(31, 0x301828); SET32(4, RW(17) + RW(1)); JP_F_00323A50(c);
 goto L_003019E4;
L_00301830:;
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
{ int t = RD(4) == RD(0);  if (t) goto L_003019E4; }
SET64(31, 0x301844);  JP_F_002FC1A0(c);
 goto L_003019E4;
L_0030184C:;
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x301858); SET32(4, RW(17) + RW(1)); JP_F_003238E0(c);
 goto L_003019E4;
L_00301860:;
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x30186c); SET32(4, RW(17) + RW(1)); JP_F_003238B0(c);
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_003019E4; }
c->f[12].u = rd32(c, (RW(16) + 4));
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x301888); SET32(4, RW(17) + RW(1)); JP_F_003238A0(c);
SET64(31, 0x301890); SET64(4, RD(17) + RD(0)); JP_F_002F11A0(c);
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
SET64(31, 0x30189c); SET64(16, RD(2) + RD(0)); JP_F_002FE3A0(c);
SET64(5, rd16(c, (RW(16) + 44)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x3018ac); SET32(6, RW(0) + 1); JP_F_0031FCC0(c);
 goto L_003019E4;
L_003018B4:;
SET64(4, rd16(c, (RW(16) + 4)));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(4, RD(0) < RD(4));
wr8(c, (RW(3) + -30819), (u8)RW(4)); goto L_003019E4;
L_003018CC:;
SET64(31, 0x3018d4); SET64(4, RD(17) + RD(0)); JP_F_002EF6F0(c);
c->f[12].u = rd32(c, (RW(16) + 4));
SET64(4, RD(2) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x3018e8); SET64(6, RD(0) + RD(0)); JP_F_002EB760(c);
 goto L_003019E4;
L_003018F0:;
SET64(31, 0x3018f8); SET64(4, RD(17) + RD(0)); JP_F_002EF6F0(c);
c->f[12].u = rd32(c, (RW(16) + 4));
SET64(4, RD(2) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x30190c); SET32(6, RW(0) + 1); JP_F_002EB760(c);
 goto L_003019E4;
L_00301914:;
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
wr32(c, (RW(3) + -30440), c->f[0].u); goto L_003019E4;
L_00301928:;
SET64(31, 0x301930); SET64(4, RD(17) + RD(0)); JP_F_002EEFF0(c);
 goto L_003019E4;
L_00301938:;
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(0) + 1);
SET32(3, RW(17) + RW(3));
wr8(c, (RW(3) + -30735), (u8)RW(4)); goto L_003019E4;
L_0030194C:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(4, (s32)rd32(c, (RW(3) + -30268)));
{ int t = RD(4) == RD(0);  if (t) goto L_003019E4; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 204)));
{ u32 t = RW(25); SET64(31, 0x301970); c->f[12].u = rd32(c, (RW(16) + 4)); rt_call(c, t); }
 goto L_003019E4;
L_00301978:;
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(17) + RW(3));
SET64(4, (s32)rd32(c, (RW(3) + -30268)));
{ int t = RD(4) == RD(0);  if (t) goto L_003019E4; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
c->f[13].u = rd32(c, (RW(16) + 8));
SET64(25, (s32)rd32(c, (RW(25) + 208)));
{ u32 t = RW(25); SET64(31, 0x3019a0); c->f[12].u = rd32(c, (RW(16) + 4)); rt_call(c, t); }
 goto L_003019E4;
L_003019A8:;
SET64(31, 0x3019b0); SET64(4, RD(17) + RD(0)); JP_F_002F11A0(c);
SET64(4, rd16(c, (RW(2) + 44)));
SET32(3, RW(0) + 1);
{ int t = RD(4) != RD(3);  if (t) goto L_003019E4; }
SET64(31, 0x3019c8); SET64(4, RD(17) + RD(0)); JP_F_002EF6F0(c);
SET64(31, 0x3019d0); SET64(4, RD(2) + RD(0)); JP_F_002EE600(c);
SET32(3, RW(0) + 26);
{ int t = RD(2) != RD(3);  if (t) goto L_003019E4; }
SET32(3, RW(0) + 1);
wr8(c, (RW(29) + 245), (u8)RW(3));
L_003019E4:;
SET64(3, rd8(c, (RW(29) + 240)));
L_003019E8:;
wr8(c, (RW(18) + 0), (u8)RW(3));
SET64(3, rd16(c, (RW(29) + 242)));
wr16(c, (RW(18) + 2), (u16)RW(3));
SET64(3, rd8(c, (RW(29) + 244)));
wr8(c, (RW(18) + 4), (u8)RW(3));
SET64(3, rd8(c, (RW(29) + 245)));
wr8(c, (RW(18) + 5), (u8)RW(3));
SET64(3, rd8(c, (RW(29) + 246)));
wr8(c, (RW(18) + 6), (u8)RW(3));
SET64(3, rd8(c, (RW(29) + 247)));
wr8(c, (RW(18) + 7), (u8)RW(3));
SET64(3, rd16(c, (RW(29) + 248)));
wr16(c, (RW(18) + 8), (u16)RW(3));
L_00301A1C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 256); return;
}
void JP_F_003005C0(Ctx *c) { JP_B_003005C0(c, 0x3005c0); }
void JP_F_003006A8(Ctx *c) { JP_B_003005C0(c, 0x3006a8); }
void JP_F_003006FC(Ctx *c) { JP_B_003005C0(c, 0x3006fc); }
void JP_F_00300720(Ctx *c) { JP_B_003005C0(c, 0x300720); }
void JP_F_00300744(Ctx *c) { JP_B_003005C0(c, 0x300744); }
void JP_F_00300760(Ctx *c) { JP_B_003005C0(c, 0x300760); }
void JP_F_00300774(Ctx *c) { JP_B_003005C0(c, 0x300774); }
void JP_F_003007A0(Ctx *c) { JP_B_003005C0(c, 0x3007a0); }
void JP_F_003007A8(Ctx *c) { JP_B_003005C0(c, 0x3007a8); }
void JP_F_003007B8(Ctx *c) { JP_B_003005C0(c, 0x3007b8); }
void JP_F_003007FC(Ctx *c) { JP_B_003005C0(c, 0x3007fc); }
void JP_F_00300810(Ctx *c) { JP_B_003005C0(c, 0x300810); }
void JP_F_0030083C(Ctx *c) { JP_B_003005C0(c, 0x30083c); }
void JP_F_0030085C(Ctx *c) { JP_B_003005C0(c, 0x30085c); }
void JP_F_00300878(Ctx *c) { JP_B_003005C0(c, 0x300878); }
void JP_F_003008B0(Ctx *c) { JP_B_003005C0(c, 0x3008b0); }
void JP_F_003008DC(Ctx *c) { JP_B_003005C0(c, 0x3008dc); }
void JP_F_003008E4(Ctx *c) { JP_B_003005C0(c, 0x3008e4); }
void JP_F_003008F4(Ctx *c) { JP_B_003005C0(c, 0x3008f4); }
void JP_F_00300904(Ctx *c) { JP_B_003005C0(c, 0x300904); }
void JP_F_00300938(Ctx *c) { JP_B_003005C0(c, 0x300938); }
void JP_F_0030094C(Ctx *c) { JP_B_003005C0(c, 0x30094c); }
void JP_F_00300978(Ctx *c) { JP_B_003005C0(c, 0x300978); }
void JP_F_00300998(Ctx *c) { JP_B_003005C0(c, 0x300998); }
void JP_F_003009B4(Ctx *c) { JP_B_003005C0(c, 0x3009b4); }
void JP_F_003009F0(Ctx *c) { JP_B_003005C0(c, 0x3009f0); }
void JP_F_00300A48(Ctx *c) { JP_B_003005C0(c, 0x300a48); }
void JP_F_00300ACC(Ctx *c) { JP_B_003005C0(c, 0x300acc); }
void JP_F_00300B50(Ctx *c) { JP_B_003005C0(c, 0x300b50); }
void JP_F_00300B60(Ctx *c) { JP_B_003005C0(c, 0x300b60); }
void JP_F_00300B70(Ctx *c) { JP_B_003005C0(c, 0x300b70); }
void JP_F_00300B80(Ctx *c) { JP_B_003005C0(c, 0x300b80); }
void JP_F_00300B94(Ctx *c) { JP_B_003005C0(c, 0x300b94); }
void JP_F_00300BA4(Ctx *c) { JP_B_003005C0(c, 0x300ba4); }
void JP_F_00300BC8(Ctx *c) { JP_B_003005C0(c, 0x300bc8); }
void JP_F_00300C18(Ctx *c) { JP_B_003005C0(c, 0x300c18); }
void JP_F_00300C30(Ctx *c) { JP_B_003005C0(c, 0x300c30); }
void JP_F_00300C48(Ctx *c) { JP_B_003005C0(c, 0x300c48); }
void JP_F_00300C60(Ctx *c) { JP_B_003005C0(c, 0x300c60); }
void JP_F_00300C78(Ctx *c) { JP_B_003005C0(c, 0x300c78); }
void JP_F_00300C8C(Ctx *c) { JP_B_003005C0(c, 0x300c8c); }
void JP_F_00300CA8(Ctx *c) { JP_B_003005C0(c, 0x300ca8); }
void JP_F_00300CC0(Ctx *c) { JP_B_003005C0(c, 0x300cc0); }
void JP_F_00300CD8(Ctx *c) { JP_B_003005C0(c, 0x300cd8); }
void JP_F_00300D30(Ctx *c) { JP_B_003005C0(c, 0x300d30); }
void JP_F_00300DB0(Ctx *c) { JP_B_003005C0(c, 0x300db0); }
void JP_F_00300DF8(Ctx *c) { JP_B_003005C0(c, 0x300df8); }
void JP_F_00300E40(Ctx *c) { JP_B_003005C0(c, 0x300e40); }
void JP_F_00300E88(Ctx *c) { JP_B_003005C0(c, 0x300e88); }
void JP_F_00300EF8(Ctx *c) { JP_B_003005C0(c, 0x300ef8); }
void JP_F_00300F40(Ctx *c) { JP_B_003005C0(c, 0x300f40); }
void JP_F_00300F88(Ctx *c) { JP_B_003005C0(c, 0x300f88); }
void JP_F_00301004(Ctx *c) { JP_B_003005C0(c, 0x301004); }
void JP_F_00301048(Ctx *c) { JP_B_003005C0(c, 0x301048); }
void JP_F_00301084(Ctx *c) { JP_B_003005C0(c, 0x301084); }
void JP_F_003010E0(Ctx *c) { JP_B_003005C0(c, 0x3010e0); }
void JP_F_0030113C(Ctx *c) { JP_B_003005C0(c, 0x30113c); }
void JP_F_003011E8(Ctx *c) { JP_B_003005C0(c, 0x3011e8); }
void JP_F_00301264(Ctx *c) { JP_B_003005C0(c, 0x301264); }
void JP_F_003012A8(Ctx *c) { JP_B_003005C0(c, 0x3012a8); }
void JP_F_003012EC(Ctx *c) { JP_B_003005C0(c, 0x3012ec); }
void JP_F_00301330(Ctx *c) { JP_B_003005C0(c, 0x301330); }
void JP_F_00301364(Ctx *c) { JP_B_003005C0(c, 0x301364); }
void JP_F_00301398(Ctx *c) { JP_B_003005C0(c, 0x301398); }
void JP_F_003013A8(Ctx *c) { JP_B_003005C0(c, 0x3013a8); }
void JP_F_003013C8(Ctx *c) { JP_B_003005C0(c, 0x3013c8); }
void JP_F_00301428(Ctx *c) { JP_B_003005C0(c, 0x301428); }
void JP_F_00301458(Ctx *c) { JP_B_003005C0(c, 0x301458); }
void JP_F_00301470(Ctx *c) { JP_B_003005C0(c, 0x301470); }
void JP_F_00301488(Ctx *c) { JP_B_003005C0(c, 0x301488); }
void JP_F_003014AC(Ctx *c) { JP_B_003005C0(c, 0x3014ac); }
void JP_F_003014D0(Ctx *c) { JP_B_003005C0(c, 0x3014d0); }
void JP_F_00301504(Ctx *c) { JP_B_003005C0(c, 0x301504); }
void JP_F_00301528(Ctx *c) { JP_B_003005C0(c, 0x301528); }
void JP_F_0030154C(Ctx *c) { JP_B_003005C0(c, 0x30154c); }
void JP_F_00301570(Ctx *c) { JP_B_003005C0(c, 0x301570); }
void JP_F_00301598(Ctx *c) { JP_B_003005C0(c, 0x301598); }
void JP_F_003015C8(Ctx *c) { JP_B_003005C0(c, 0x3015c8); }
void JP_F_003015E0(Ctx *c) { JP_B_003005C0(c, 0x3015e0); }
void JP_F_00301608(Ctx *c) { JP_B_003005C0(c, 0x301608); }
void JP_F_00301624(Ctx *c) { JP_B_003005C0(c, 0x301624); }
void JP_F_0030163C(Ctx *c) { JP_B_003005C0(c, 0x30163c); }
void JP_F_00301658(Ctx *c) { JP_B_003005C0(c, 0x301658); }
void JP_F_00301694(Ctx *c) { JP_B_003005C0(c, 0x301694); }
void JP_F_003016C8(Ctx *c) { JP_B_003005C0(c, 0x3016c8); }
void JP_F_003016FC(Ctx *c) { JP_B_003005C0(c, 0x3016fc); }
void JP_F_00301730(Ctx *c) { JP_B_003005C0(c, 0x301730); }
void JP_F_00301764(Ctx *c) { JP_B_003005C0(c, 0x301764); }
void JP_F_00301778(Ctx *c) { JP_B_003005C0(c, 0x301778); }
void JP_F_0030178C(Ctx *c) { JP_B_003005C0(c, 0x30178c); }
void JP_F_003017A8(Ctx *c) { JP_B_003005C0(c, 0x3017a8); }
void JP_F_003017D0(Ctx *c) { JP_B_003005C0(c, 0x3017d0); }
void JP_F_00301800(Ctx *c) { JP_B_003005C0(c, 0x301800); }
void JP_F_00301830(Ctx *c) { JP_B_003005C0(c, 0x301830); }
void JP_F_0030184C(Ctx *c) { JP_B_003005C0(c, 0x30184c); }
void JP_F_00301860(Ctx *c) { JP_B_003005C0(c, 0x301860); }
void JP_F_003018B4(Ctx *c) { JP_B_003005C0(c, 0x3018b4); }
void JP_F_003018CC(Ctx *c) { JP_B_003005C0(c, 0x3018cc); }
void JP_F_003018F0(Ctx *c) { JP_B_003005C0(c, 0x3018f0); }
void JP_F_00301914(Ctx *c) { JP_B_003005C0(c, 0x301914); }
void JP_F_00301928(Ctx *c) { JP_B_003005C0(c, 0x301928); }
void JP_F_00301938(Ctx *c) { JP_B_003005C0(c, 0x301938); }
void JP_F_0030194C(Ctx *c) { JP_B_003005C0(c, 0x30194c); }
void JP_F_00301978(Ctx *c) { JP_B_003005C0(c, 0x301978); }
void JP_F_003019A8(Ctx *c) { JP_B_003005C0(c, 0x3019a8); }
void JP_F_003019E4(Ctx *c) { JP_B_003005C0(c, 0x3019e4); }

void JP_F_00301A40(Ctx *c) { /* func_00301A40 */
ENTER(0x301a40);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301A50(Ctx *c) { /* func_00301A50 */
ENTER(0x301a50);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301A60(Ctx *c) { /* func_00301A60 */
ENTER(0x301a60);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301A70(Ctx *c) { /* func_00301A70 */
ENTER(0x301a70);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301A80(Ctx *c) { /* func_00301A80 */
ENTER(0x301a80);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301A90(Ctx *c) { /* func_00301A90 */
ENTER(0x301a90);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301AA0(Ctx *c) { /* func_00301AA0 */
ENTER(0x301aa0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301AB0(Ctx *c) { /* func_00301AB0 */
ENTER(0x301ab0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301AC0(Ctx *c) { /* func_00301AC0 */
ENTER(0x301ac0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301AD0(Ctx *c) { /* func_00301AD0 */
ENTER(0x301ad0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301AE0(Ctx *c) { /* func_00301AE0 */
ENTER(0x301ae0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301AF0(Ctx *c) { /* func_00301AF0 */
ENTER(0x301af0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301B00(Ctx *c) { /* func_00301B00 */
ENTER(0x301b00);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301B10(Ctx *c) { /* func_00301B10 */
ENTER(0x301b10);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301B20(Ctx *c) { /* func_00301B20 */
ENTER(0x301b20);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301B30(Ctx *c) { /* func_00301B30 */
ENTER(0x301b30);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301B40(Ctx *c) { /* func_00301B40 */
ENTER(0x301b40);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301B50(Ctx *c) { /* func_00301B50 */
ENTER(0x301b50);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301B60(Ctx *c) { /* func_00301B60 */
ENTER(0x301b60);
SET64(2, RD(0) | 0xffff); return;
}

void JP_F_00301B70(Ctx *c) { /* func_00301B70 */
ENTER(0x301b70);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301B80(Ctx *c) { /* func_00301B80 */
ENTER(0x301b80);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301B90(Ctx *c) { /* func_00301B90 */
ENTER(0x301b90);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301BA0(Ctx *c) { /* func_00301BA0 */
ENTER(0x301ba0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00301BB0(Ctx *c) { /* func_00301BB0 */
ENTER(0x301bb0);
SET32(2, RW(0) + 1); return;
}

static void JP_B_00301BC0(Ctx *c, u32 entry) { /* func_00301BC0 */
ENTER(entry);
switch (entry) { case 0x301cfc: goto L_00301CFC; case 0x301d00: goto L_00301D00; case 0x301e30: goto L_00301E30; case 0x301ec0: goto L_00301EC0; }
L_00301BC0:;
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
SET64(2, rd8(c, (RW(4) + 12)));
{ int t = RD(2) == RD(0); SET64(20, RD(4) + RD(0)); if (t) goto L_00301C00; }
SET64(2, RD(0) + (s64)1); goto L_00301C6C;
L_00301C00:;
c->f[0].u = rd32(c, (RW(20) + 16));
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(20) + 0))); goto L_00301C20; }
SET64(2, RD(0) + (s64)1); goto L_00301C6C;
L_00301C20:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00301C44; }
SET64(2, RD(0) + (s64)1); goto L_00301C6C;
L_00301C44:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00301C5C; }
SET64(3, RD(0) + RD(0));
L_00301C5C:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00301C6C; }
SET64(2, RD(0) + (s64)1);
L_00301C6C:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(20) + 13))); goto L_00301C7C; }
SET64(2, RD(0) + RD(0)); goto L_00301F94;
L_00301C7C:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(20) + 0))); goto L_00301C8C; }
SET64(2, RD(0) + RD(0)); goto L_00301F94;
L_00301C8C:;
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(2, rd8(c, (RW(2) + -30721)));
{ int t = RD(2) == RD(0);  if (t) goto L_00301EF8; }
SET64(3, (s32)rd32(c, (RW(4) + 1144)));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(1, RD(0) | 0x87b0);
SET64(18, rd16(c, (RW(2) + -30724)));
SET64(17, (s32)rd32(c, (RW(3) + 8)));
SET64(16, rd16(c, (RW(17) + 4)));
SET64(31, 0x301cc4); SET32(4, RW(4) + RW(1)); JP_F_003238B0(c);
if (RD(2) == RD(0)) { SET64(2, RD(18) & 0xffff); goto L_00301D04; }
SET64(4, RD(18) & 0xffff);
SET32(2, RW(4) + -8);
SET64(1, RD(2) < (u64)(s64)7);
if (RD(1) == RD(0)) { SET64(2, RD(4) & 0xffff); goto L_00301D04; }
SET64(3, (s64)(s32)0x4c0000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + -8832);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x301bc0: goto L_00301BC0; case 0x301cfc: goto L_00301CFC; case 0x301d00: goto L_00301D00; case 0x301e30: goto L_00301E30; case 0x301ec0: goto L_00301EC0; default: rt_jump(c, t); return; } }
L_00301CFC:;
SET64(4, RD(0) + (s64)1);
L_00301D00:;
SET64(2, RD(4) & 0xffff);
L_00301D04:;
SET64(23, RD(2) & 0xffff);
SET64(30, RD(0) + RD(0));
SET64(2, RD(16) & 0xffff);
SET64(19, RD(0) + RD(0));
{ int t = RD(2) == RD(0); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); if (t) goto L_00301EF8; }
SET64(21, RD(0) + RD(0));
L_00301D20:;
SET64(3, (s32)rd32(c, (RW(17) + 24)));
SET64(1, RD(0) | 0x87b0);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(18, RW(3) + RW(21));
SET64(31, 0x301d38); SET32(4, RW(2) + RW(1)); JP_F_003236A0(c);
SET64(3, RD(2) & 0xffff);
SET64(2, rd16(c, (RW(18) + 6)));
SET32(2, RW(2) + -1);
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00301EE0; }
SET64(2, rd16(c, (RW(18) + 4)));
if (RD(2) == RD(0)) { SET64(5, rd16(c, (RW(18) + 2))); goto L_00301D70; }
SET64(5, rd16(c, (RW(18) + 2)));
SET64(31, 0x301d68); SET64(4, RD(17) + RD(0)); JP_F_002FFD60(c);
SET64(5, RD(2) & 0xffff); goto L_00301D7C;
L_00301D70:;
SET64(31, 0x301d78); SET64(4, RD(17) + RD(0)); JP_F_002FFD80(c);
SET64(5, RD(2) & 0xffff);
L_00301D7C:;
SET64(31, 0x301d84); SET64(4, RD(17) + RD(0)); JP_F_002FFDD0(c);
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(22, RD(2) + RD(0));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(3) + RW(2));
SET64(2, rd8(c, (RW(2) + -30716)));
{ int t = RD(2) == RD(0);  if (t) goto L_00301DA8; }
SET64(23, RD(0) + RD(0));
L_00301DA8:;
SET64(3, rd16(c, (RW(22) + 6)));
SET64(2, RD(23) & 0xffff);
SET64(1, RSD(2) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_00301EE0; }
SET64(31, 0x301dc4); SET64(4, rd16(c, (RW(18) + 0))); JP_F_0023F180(c);
SET64(16, RD(2) & 0xffff);
SET32(2, RW(0) + 3);
{ int t = RD(16) == RD(2);  if (t) goto L_00301EF8; }
SET32(2, RW(0) + 4);
{ int t = RD(16) == RD(2);  if (t) goto L_00301EF8; }
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x301df4); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(2, rd16(c, (RW(18) + 0))); goto L_00301E90; }
SET64(2, rd16(c, (RW(18) + 0)));
SET32(2, RW(2) + -35);
SET64(1, RD(2) < (u64)(s64)6);
{ int t = RD(1) == RD(0);  if (t) goto L_00301E38; }
SET64(3, (s64)(s32)0x4c0000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + -8864);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x301bc0: goto L_00301BC0; case 0x301cfc: goto L_00301CFC; case 0x301d00: goto L_00301D00; case 0x301e30: goto L_00301E30; case 0x301ec0: goto L_00301EC0; default: rt_jump(c, t); return; } }
L_00301E30:;
SET64(2, RD(0) + (s64)1); goto L_00301E40;
L_00301E38:;
SET64(2, RD(0) + RD(0));
L_00301E40:;
{ int t = RD(2) == RD(0);  if (t) goto L_00301E50; }
{ int t = RD(30) != RD(0);  if (t) goto L_00301EE0; }
L_00301E50:;
SET64(4, rd16(c, (RW(22) + 8)));
SET64(5, rd16(c, (RW(18) + 4)));
SET64(1, RD(0) | 0x87b0);
SET64(3, rd16(c, (RW(18) + 2)));
SET64(2, (s64)(s32)0x10000);
SET64(6, RD(0) < RD(4));
SET64(4, (s32)rd32(c, (RW(20) + 0)));
SET64(5, RD(0) < RD(5));
SET32(4, RW(4) + RW(1));
wr16(c, (RW(4) + 80), (u16)RW(3));
wr8(c, (RW(4) + 82), (u8)RW(5));
wr8(c, (RW(4) + 83), (u8)RW(6));
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET32(2, RW(3) + RW(2));
wr16(c, (RW(2) + -30556), (u16)RW(16)); goto L_00301EF8;
L_00301E90:;
SET32(2, RW(2) + -35);
SET64(1, RD(2) < (u64)(s64)6);
{ int t = RD(1) == RD(0);  if (t) goto L_00301EC8; }
SET64(3, (s64)(s32)0x4c0000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + -8896);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x301bc0: goto L_00301BC0; case 0x301cfc: goto L_00301CFC; case 0x301d00: goto L_00301D00; case 0x301e30: goto L_00301E30; case 0x301ec0: goto L_00301EC0; default: rt_jump(c, t); return; } }
L_00301EC0:;
SET64(2, RD(0) + (s64)1); goto L_00301ED0;
L_00301EC8:;
SET64(2, RD(0) + RD(0));
L_00301ED0:;
{ int t = RD(2) == RD(0);  if (t) goto L_00301EE0; }
SET64(30, RD(0) + (s64)1);
L_00301EE0:;
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
SET32(19, RW(19) + 1);
SET64(2, RD(19) < RD(2));
{ int t = RD(2) != RD(0); SET32(21, RW(21) + 8); if (t) { POLL(); goto L_00301D20; } }
L_00301EF8:;
SET64(4, (s32)rd32(c, (RW(20) + 0)));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(2, rd8(c, (RW(2) + -30722)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00301F94; }
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(0) + -1);
SET32(2, RW(4) + RW(2));
SET64(2, (s16)rd16(c, (RW(2) + -30720)));
{ int t = RD(2) == RD(3);  if (t) goto L_00301F90; }
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x8800);
SET32(2, RW(4) + RW(2));
SET64(2, rd8(c, (RW(2) + -30736)));
{ int t = RD(2) != RD(0); SET32(3, RW(4) + RW(1)); if (t) goto L_00301F60; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(2, rd8(c, (RW(2) + -30716)));
if (RD(2) != RD(0)) { SET64(2, rd8(c, (RW(3) + 2))); goto L_00301F64; }
SET64(2, rd8(c, (RW(3) + 3)));
{ int t = RD(2) == RD(0);  if (t) goto L_00301F90; }
L_00301F60:;
SET64(2, rd8(c, (RW(3) + 2)));
L_00301F64:;
if (RD(2) == RD(0)) { SET64(5, (s16)rd16(c, (RW(3) + 0))); goto L_00301F7C; }
SET64(31, 0x301f74); SET64(5, (s16)rd16(c, (RW(3) + 0))); JP_F_002EE5C0(c);
SET32(2, RW(0) + 1); goto L_00301F88;
L_00301F7C:;
SET64(31, 0x301f84);  JP_F_002EE580(c);
SET32(2, RW(0) + 1);
L_00301F88:;
SET64(31, rd64(c, (RW(29) + 144))); goto L_00301F98;
L_00301F90:;
SET64(2, RD(0) + RD(0));
L_00301F94:;
SET64(31, rd64(c, (RW(29) + 144)));
L_00301F98:;
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
void JP_F_00301BC0(Ctx *c) { JP_B_00301BC0(c, 0x301bc0); }
void JP_F_00301CFC(Ctx *c) { JP_B_00301BC0(c, 0x301cfc); }
void JP_F_00301D00(Ctx *c) { JP_B_00301BC0(c, 0x301d00); }
void JP_F_00301E30(Ctx *c) { JP_B_00301BC0(c, 0x301e30); }
void JP_F_00301EC0(Ctx *c) { JP_B_00301BC0(c, 0x301ec0); }

static void JP_B_00301FD0(Ctx *c, u32 entry) { /* func_00301FD0 */
ENTER(entry);
switch (entry) { case 0x3020e0: goto L_003020E0; }
L_00301FD0:;
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd8(c, (RW(4) + 12)));
{ int t = RD(2) == RD(0); SET64(20, RD(4) + RD(0)); if (t) goto L_00302004; }
SET64(2, RD(0) + (s64)1); goto L_00302070;
L_00302004:;
c->f[0].u = rd32(c, (RW(20) + 16));
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(20) + 0))); goto L_00302024; }
SET64(2, RD(0) + (s64)1); goto L_00302070;
L_00302024:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00302048; }
SET64(2, RD(0) + (s64)1); goto L_00302070;
L_00302048:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00302060; }
SET64(3, RD(0) + RD(0));
L_00302060:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00302070; }
SET64(2, RD(0) + (s64)1);
L_00302070:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(20) + 13))); goto L_00302080; }
SET64(2, RD(0) + RD(0)); goto L_003021CC;
L_00302080:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(20) + 0))); goto L_00302090; }
SET64(2, RD(0) + RD(0)); goto L_003021CC;
L_00302090:;
SET64(2, (s32)rd32(c, (RW(2) + 1144)));
SET64(16, (s32)rd32(c, (RW(2) + 8)));
SET64(21, rd16(c, (RW(16) + 4)));
{ int t = RD(21) == RD(0); SET64(19, RD(0) + RD(0)); if (t) goto L_003021C8; }
SET64(17, RD(0) + RD(0));
L_003020A8:;
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET32(18, RW(2) + RW(17));
SET64(2, rd16(c, (RW(18) + 0)));
SET32(2, RW(2) + -35);
SET64(1, RD(2) < (u64)(s64)6);
{ int t = RD(1) == RD(0);  if (t) goto L_003020E8; }
SET64(3, (s64)(s32)0x4c0000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + -8800);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x301fd0: goto L_00301FD0; case 0x3020e0: goto L_003020E0; default: rt_jump(c, t); return; } }
L_003020E0:;
SET64(2, RD(0) + (s64)1); goto L_003020F0;
L_003020E8:;
SET64(2, RD(0) + RD(0));
L_003020F0:;
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET32(19, RW(19) + 1); goto L_003021BC; }
SET64(25, (s32)rd32(c, (RW(20) + 8)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x302110); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_003021B8; }
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x302128); SET32(4, RW(2) + RW(1)); JP_F_003236A0(c);
SET64(3, RD(2) & 0xffff);
SET64(2, rd16(c, (RW(18) + 6)));
SET32(2, RW(2) + -1);
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_003021B8; }
SET64(31, 0x302148); SET64(4, rd16(c, (RW(18) + 0))); JP_F_0023F180(c);
SET64(16, RD(2) & 0xffff);
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
SET64(2, rd8(c, (RW(2) + 730)));
if (RD(2) == RD(0)) { SET64(2, rd16(c, (RW(18) + 4))); goto L_0030217C; }
SET64(3, RD(16) & 0xffff);
SET32(2, RW(0) + 3);
{ int t = RD(3) == RD(2);  if (t) goto L_003021C8; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_003021C8; }
SET64(2, rd16(c, (RW(18) + 4)));
L_0030217C:;
if (RD(2) == RD(0)) { SET64(5, rd16(c, (RW(18) + 2))); goto L_00302198; }
SET64(4, (s32)rd32(c, (RW(20) + 0)));
SET64(31, 0x302190); SET64(5, rd16(c, (RW(18) + 2))); JP_F_002EE5C0(c);
SET64(4, (s32)rd32(c, (RW(20) + 0))); goto L_003021A4;
L_00302198:;
SET64(31, 0x3021a0); SET64(4, (s32)rd32(c, (RW(20) + 0))); JP_F_002EE580(c);
SET64(4, (s32)rd32(c, (RW(20) + 0)));
L_003021A4:;
SET64(3, (s64)(s32)0x10000);
SET32(2, RW(0) + 1);
SET32(3, RW(4) + RW(3));
wr16(c, (RW(3) + -30556), (u16)RW(16)); goto L_003021CC;
L_003021B8:;
SET32(19, RW(19) + 1);
L_003021BC:;
SET64(2, RD(19) < RD(21));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 8); if (t) { POLL(); goto L_003020A8; } }
L_003021C8:;
SET64(2, RD(0) + RD(0));
L_003021CC:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}
void JP_F_00301FD0(Ctx *c) { JP_B_00301FD0(c, 0x301fd0); }
void JP_F_003020E0(Ctx *c) { JP_B_00301FD0(c, 0x3020e0); }

static void JP_B_003021F0(Ctx *c, u32 entry) { /* func_003021F0 */
ENTER(entry);
switch (entry) { case 0x302218: goto L_00302218; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd8(c, (RW(4) + 12)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00302214; }
SET64(2, RD(0) + (s64)1); goto L_00302280;
L_00302214:;
c->f[0].u = rd32(c, (RW(16) + 16));
L_00302218:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302234; }
SET64(2, RD(0) + (s64)1); goto L_00302280;
L_00302234:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00302258; }
SET64(2, RD(0) + (s64)1); goto L_00302280;
L_00302258:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00302270; }
SET64(3, RD(0) + RD(0));
L_00302270:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00302280; }
SET64(2, RD(0) + (s64)1);
L_00302280:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 13))); goto L_00302290; }
SET64(2, RD(0) + RD(0)); goto L_0030236C;
L_00302290:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_003022A0; }
SET64(2, RD(0) + RD(0)); goto L_0030236C;
L_003022A0:;
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x3022ac); SET32(4, RW(2) + RW(1)); JP_F_003236A0(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RSD(2) < (s64)2);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0030236C; }
SET64(31, 0x3022c4); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EE600(c);
SET32(3, RW(0) + 25);
{ int t = RD(2) == RD(3);  if (t) goto L_00302368; }
SET64(31, 0x3022d8); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EE600(c);
SET32(3, RW(0) + 26);
{ int t = RD(2) == RD(3);  if (t) goto L_00302368; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x3022f4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00302368; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x302308); SET32(5, RW(0) + 25); JP_F_002EE5C0(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x302318); SET32(4, RW(2) + RW(1)); JP_F_003238B0(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET32(2, RW(0) + 1); goto L_0030236C; }
SET64(31, 0x30232c); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002F11A0(c);
SET64(4, (s32)rd32(c, (RW(28) + -29872)));
SET64(31, 0x302338); SET64(17, RD(2) + RD(0)); JP_F_002FE3A0(c);
SET64(5, rd16(c, (RW(17) + 44)));
SET64(31, 0x302344); SET64(4, RD(2) + RD(0)); JP_F_00320010(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x41000000);
SET64(1, RD(0) | 0x87b0);
c->f[12].u = RW(2);
SET64(31, 0x30235c); SET32(4, RW(3) + RW(1)); JP_F_00323880(c);
SET32(2, RW(0) + 1);
 goto L_0030236C;
L_00302368:;
SET64(2, RD(0) + RD(0));
L_0030236C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_003021F0(Ctx *c) { JP_B_003021F0(c, 0x3021f0); }
void JP_F_00302218(Ctx *c) { JP_B_003021F0(c, 0x302218); }

void JP_F_00302380(Ctx *c) { /* func_00302380 */
ENTER(0x302380);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd8(c, (RW(4) + 12)));
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_003023A0; }
SET64(2, RD(0) + (s64)1); goto L_0030240C;
L_003023A0:;
c->f[0].u = rd32(c, (RW(16) + 16));
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_003023C0; }
SET64(2, RD(0) + (s64)1); goto L_0030240C;
L_003023C0:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_003023E4; }
SET64(2, RD(0) + (s64)1); goto L_0030240C;
L_003023E4:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_003023FC; }
SET64(3, RD(0) + RD(0));
L_003023FC:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0030240C; }
SET64(2, RD(0) + (s64)1);
L_0030240C:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 13))); goto L_0030241C; }
SET64(2, RD(0) + RD(0)); goto L_0030295C;
L_0030241C:;
{ int t = RD(2) == RD(0);  if (t) goto L_0030242C; }
SET64(2, RD(0) + RD(0)); goto L_0030295C;
L_0030242C:;
if (RD(5) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_0030243C; }
SET64(2, RD(0) + (s64)1); goto L_003024A4;
L_0030243C:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302458; }
SET64(2, RD(0) + (s64)1); goto L_003024A4;
L_00302458:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_0030247C; }
SET64(2, RD(0) + (s64)1); goto L_003024A4;
L_0030247C:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00302494; }
SET64(3, RD(0) + RD(0));
L_00302494:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_003024A4; }
SET64(2, RD(0) + (s64)1);
L_003024A4:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_003024B4; }
SET64(2, RD(0) + RD(0)); goto L_0030256C;
L_003024B4:;
SET64(31, 0x3024bc);  JP_F_002EE600(c);
SET32(3, RW(0) + 8);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_0030256C; }
SET64(31, 0x3024d0); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EE600(c);
SET32(3, RW(0) + 9);
{ int t = RD(2) == RD(3);  if (t) goto L_00302568; }
SET64(31, 0x3024e4); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EE600(c);
SET32(3, RW(0) + 10);
{ int t = RD(2) == RD(3);  if (t) goto L_00302568; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x302500); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00302568; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(0) | 0x8790);
SET64(31, 0x302518); SET32(4, RW(2) + RW(1)); JP_F_002F02B0(c);
if (RD(2) == RD(0)) { SET32(5, RW(0) + 8); goto L_00302524; }
SET32(5, RW(0) + 9);
L_00302524:;
SET64(31, 0x30252c); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EE5C0(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(0) | 0x8790);
SET64(31, 0x30253c); SET32(4, RW(2) + RW(1)); JP_F_002F02B0(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + (s64)1); goto L_0030256C; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(0) | 0x89d0);
SET64(5, RD(0) + RD(0));
SET64(31, 0x30255c); SET32(4, RW(2) + RW(1)); JP_F_003626A0(c);
SET64(2, RD(0) + (s64)1);
 goto L_0030256C;
L_00302568:;
SET64(2, RD(0) + RD(0));
L_0030256C:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_0030257C; }
SET32(2, RW(0) + 1); goto L_0030295C;
L_0030257C:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_0030258C; }
SET64(2, RD(0) + (s64)1); goto L_003025F4;
L_0030258C:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_003025A8; }
SET64(2, RD(0) + (s64)1); goto L_003025F4;
L_003025A8:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_003025CC; }
SET64(2, RD(0) + (s64)1); goto L_003025F4;
L_003025CC:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_003025E4; }
SET64(3, RD(0) + RD(0));
L_003025E4:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_003025F4; }
SET64(2, RD(0) + (s64)1);
L_003025F4:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302604; }
SET64(2, RD(0) + RD(0)); goto L_003026BC;
L_00302604:;
SET64(31, 0x30260c);  JP_F_002EE600(c);
SET32(3, RW(0) + 11);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_003026BC; }
SET64(31, 0x302620); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EE600(c);
SET32(3, RW(0) + 12);
{ int t = RD(2) == RD(3);  if (t) goto L_003026B8; }
SET64(31, 0x302634); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EE600(c);
SET32(3, RW(0) + 13);
{ int t = RD(2) == RD(3);  if (t) goto L_003026B8; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x302650); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_003026B8; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(0) | 0x8790);
SET64(31, 0x302668); SET32(4, RW(2) + RW(1)); JP_F_002F02B0(c);
if (RD(2) == RD(0)) { SET32(5, RW(0) + 11); goto L_00302674; }
SET32(5, RW(0) + 12);
L_00302674:;
SET64(31, 0x30267c); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EE5C0(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(0) | 0x8790);
SET64(31, 0x30268c); SET32(4, RW(2) + RW(1)); JP_F_002F02B0(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + (s64)1); goto L_003026BC; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(0) | 0x89d0);
SET32(5, RW(0) + 1);
SET64(31, 0x3026ac); SET32(4, RW(2) + RW(1)); JP_F_003626A0(c);
SET64(2, RD(0) + (s64)1);
 goto L_003026BC;
L_003026B8:;
SET64(2, RD(0) + RD(0));
L_003026BC:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_003026CC; }
SET32(2, RW(0) + 1); goto L_0030295C;
L_003026CC:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_003026DC; }
SET64(2, RD(0) + (s64)1); goto L_00302744;
L_003026DC:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_003026F8; }
SET64(2, RD(0) + (s64)1); goto L_00302744;
L_003026F8:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_0030271C; }
SET64(2, RD(0) + (s64)1); goto L_00302744;
L_0030271C:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00302734; }
SET64(3, RD(0) + RD(0));
L_00302734:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00302744; }
SET64(2, RD(0) + (s64)1);
L_00302744:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302754; }
SET64(2, RD(0) + RD(0)); goto L_0030280C;
L_00302754:;
SET64(31, 0x30275c);  JP_F_002EE600(c);
SET32(3, RW(0) + 14);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_0030280C; }
SET64(31, 0x302770); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EE600(c);
SET32(3, RW(0) + 15);
{ int t = RD(2) == RD(3);  if (t) goto L_00302808; }
SET64(31, 0x302784); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EE600(c);
SET32(3, RW(0) + 16);
{ int t = RD(2) == RD(3);  if (t) goto L_00302808; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x3027a0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00302808; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(0) | 0x8790);
SET64(31, 0x3027b8); SET32(4, RW(2) + RW(1)); JP_F_002F02B0(c);
if (RD(2) == RD(0)) { SET32(5, RW(0) + 14); goto L_003027C4; }
SET32(5, RW(0) + 15);
L_003027C4:;
SET64(31, 0x3027cc); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EE5C0(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(0) | 0x8790);
SET64(31, 0x3027dc); SET32(4, RW(2) + RW(1)); JP_F_002F02B0(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + (s64)1); goto L_0030280C; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(0) | 0x89d0);
SET64(5, RD(0) + RD(0));
SET64(31, 0x3027fc); SET32(4, RW(2) + RW(1)); JP_F_003626A0(c);
SET64(2, RD(0) + (s64)1);
 goto L_0030280C;
L_00302808:;
SET64(2, RD(0) + RD(0));
L_0030280C:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_0030281C; }
SET32(2, RW(0) + 1); goto L_0030295C;
L_0030281C:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_0030282C; }
SET64(2, RD(0) + (s64)1); goto L_00302894;
L_0030282C:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302848; }
SET64(2, RD(0) + (s64)1); goto L_00302894;
L_00302848:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_0030286C; }
SET64(2, RD(0) + (s64)1); goto L_00302894;
L_0030286C:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00302884; }
SET64(3, RD(0) + RD(0));
L_00302884:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00302894; }
SET64(2, RD(0) + (s64)1);
L_00302894:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_003028A4; }
SET64(2, RD(0) + RD(0)); goto L_0030295C;
L_003028A4:;
SET64(31, 0x3028ac);  JP_F_002EE600(c);
SET32(3, RW(0) + 17);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_0030295C; }
SET64(31, 0x3028c0); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EE600(c);
SET32(3, RW(0) + 18);
{ int t = RD(2) == RD(3);  if (t) goto L_00302958; }
SET64(31, 0x3028d4); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EE600(c);
SET32(3, RW(0) + 19);
{ int t = RD(2) == RD(3);  if (t) goto L_00302958; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x3028f0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00302958; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(0) | 0x8790);
SET64(31, 0x302908); SET32(4, RW(2) + RW(1)); JP_F_002F02B0(c);
if (RD(2) == RD(0)) { SET32(5, RW(0) + 17); goto L_00302914; }
SET32(5, RW(0) + 18);
L_00302914:;
SET64(31, 0x30291c); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EE5C0(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(0) | 0x8790);
SET64(31, 0x30292c); SET32(4, RW(2) + RW(1)); JP_F_002F02B0(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + (s64)1); goto L_0030295C; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(0) | 0x89d0);
SET64(5, RD(0) + RD(0));
SET64(31, 0x30294c); SET32(4, RW(2) + RW(1)); JP_F_003626A0(c);
SET64(2, RD(0) + (s64)1);
 goto L_0030295C;
L_00302958:;
SET64(2, RD(0) + RD(0));
L_0030295C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00302970(Ctx *c) { /* func_00302970 */
ENTER(0x302970);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd8(c, (RW(4) + 12)));
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00302990; }
SET64(2, RD(0) + (s64)1); goto L_003029FC;
L_00302990:;
c->f[0].u = rd32(c, (RW(16) + 16));
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_003029B0; }
SET64(2, RD(0) + (s64)1); goto L_003029FC;
L_003029B0:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_003029D4; }
SET64(2, RD(0) + (s64)1); goto L_003029FC;
L_003029D4:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_003029EC; }
SET64(3, RD(0) + RD(0));
L_003029EC:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_003029FC; }
SET64(2, RD(0) + (s64)1);
L_003029FC:;
{ int t = RD(2) == RD(0);  if (t) goto L_00302A0C; }
SET64(2, RD(0) + RD(0)); goto L_00302D6C;
L_00302A0C:;
if (RD(5) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_00302A1C; }
SET64(2, RD(0) + (s64)1); goto L_00302A84;
L_00302A1C:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302A38; }
SET64(2, RD(0) + (s64)1); goto L_00302A84;
L_00302A38:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00302A5C; }
SET64(2, RD(0) + (s64)1); goto L_00302A84;
L_00302A5C:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00302A74; }
SET64(3, RD(0) + RD(0));
L_00302A74:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00302A84; }
SET64(2, RD(0) + (s64)1);
L_00302A84:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302A94; }
SET64(2, RD(0) + RD(0)); goto L_00302AD8;
L_00302A94:;
SET64(31, 0x302a9c);  JP_F_002EE600(c);
SET32(3, RW(0) + 4);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_00302AD8; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x302ab8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00302AD4; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x302acc); SET32(5, RW(0) + 4); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_00302AD8;
L_00302AD4:;
SET64(2, RD(0) + RD(0));
L_00302AD8:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_00302AE8; }
SET32(2, RW(0) + 1); goto L_00302D6C;
L_00302AE8:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_00302AF8; }
SET64(2, RD(0) + (s64)1); goto L_00302B60;
L_00302AF8:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302B14; }
SET64(2, RD(0) + (s64)1); goto L_00302B60;
L_00302B14:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00302B38; }
SET64(2, RD(0) + (s64)1); goto L_00302B60;
L_00302B38:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00302B50; }
SET64(3, RD(0) + RD(0));
L_00302B50:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00302B60; }
SET64(2, RD(0) + (s64)1);
L_00302B60:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302B70; }
SET64(2, RD(0) + RD(0)); goto L_00302BB4;
L_00302B70:;
SET64(31, 0x302b78);  JP_F_002EE600(c);
SET32(3, RW(0) + 5);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_00302BB4; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 72)));
{ u32 t = RW(25); SET64(31, 0x302b94); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00302BB0; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x302ba8); SET32(5, RW(0) + 5); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_00302BB4;
L_00302BB0:;
SET64(2, RD(0) + RD(0));
L_00302BB4:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_00302BC4; }
SET32(2, RW(0) + 1); goto L_00302D6C;
L_00302BC4:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_00302BD4; }
SET64(2, RD(0) + (s64)1); goto L_00302C3C;
L_00302BD4:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302BF0; }
SET64(2, RD(0) + (s64)1); goto L_00302C3C;
L_00302BF0:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00302C14; }
SET64(2, RD(0) + (s64)1); goto L_00302C3C;
L_00302C14:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00302C2C; }
SET64(3, RD(0) + RD(0));
L_00302C2C:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00302C3C; }
SET64(2, RD(0) + (s64)1);
L_00302C3C:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302C4C; }
SET64(2, RD(0) + RD(0)); goto L_00302C90;
L_00302C4C:;
SET64(31, 0x302c54);  JP_F_002EE600(c);
SET32(3, RW(0) + 6);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_00302C90; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x302c70); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00302C8C; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x302c84); SET32(5, RW(0) + 6); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_00302C90;
L_00302C8C:;
SET64(2, RD(0) + RD(0));
L_00302C90:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_00302CA0; }
SET32(2, RW(0) + 1); goto L_00302D6C;
L_00302CA0:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_00302CB0; }
SET64(2, RD(0) + (s64)1); goto L_00302D18;
L_00302CB0:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302CCC; }
SET64(2, RD(0) + (s64)1); goto L_00302D18;
L_00302CCC:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00302CF0; }
SET64(2, RD(0) + (s64)1); goto L_00302D18;
L_00302CF0:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00302D08; }
SET64(3, RD(0) + RD(0));
L_00302D08:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00302D18; }
SET64(2, RD(0) + (s64)1);
L_00302D18:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302D28; }
SET64(2, RD(0) + RD(0)); goto L_00302D6C;
L_00302D28:;
SET64(31, 0x302d30);  JP_F_002EE600(c);
SET32(3, RW(0) + 7);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_00302D6C; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x302d4c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00302D68; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x302d60); SET32(5, RW(0) + 7); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_00302D6C;
L_00302D68:;
SET64(2, RD(0) + RD(0));
L_00302D6C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00302D80(Ctx *c) { /* func_00302D80 */
ENTER(0x302d80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x302d90); SET64(4, (s32)rd32(c, (RW(4) + 0))); JP_F_002EC120(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00302DA0(Ctx *c) { /* func_00302DA0 */
ENTER(0x302da0);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 0), RD(31));
c->f[0].u = RW(0);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(3) + RW(2));
c->f[1].u = rd32(c, (RW(2) + -30732));
c->fcc = F(0) == F(1);
if (!c->fcc) { SET64(2, RD(0) + RD(0)); goto L_00302DEC; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x302dd8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00302DE8; }
SET32(2, RW(0) + 1); goto L_00302DEC;
L_00302DE8:;
SET64(2, RD(0) + RD(0));
L_00302DEC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

static void JP_B_00302E00(Ctx *c, u32 entry) { /* func_00302E00 */
ENTER(entry);
switch (entry) { case 0x302e18: goto L_00302E18; }
SET32(29, RW(29) + -64);
SET64(1, RD(0) | 0x87b0);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
L_00302E18:;
SET64(16, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(31, 0x302e28); SET32(4, RW(2) + RW(1)); JP_F_00323A40(c);
SET64(2, (s64)(s32)0x530000);
SET64(1, RD(0) | 0x87b0);
c->f[1].u = rd32(c, (RW(2) + -22384));
c->f[20].u = c->f[0].u;
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -8056));
c->f[12].f = fpu(F(0) * F(1));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x302e50); SET32(4, RW(2) + RW(1)); JP_F_00323900(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(1, RD(0) | 0x89d0);
SET32(17, RW(2) + RW(1));
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x302e68); SET32(4, RW(2) + RW(1)); JP_F_00323A40(c);
c->f[1].f = fpu(F(0) - F(20));
c->f[0].u = rd32(c, (RW(28) + -30940));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; c->f[12].u = rd32(c, (RW(28) + -30940)); if (t) goto L_00302E84; }
SET64(4, RD(17) + RD(0)); goto L_00302E8C;
L_00302E84:;
c->f[12].u = c->f[1].u;
SET64(4, RD(17) + RD(0));
L_00302E8C:;
SET64(31, 0x302e94);  JP_F_00362740(c);
SET64(31, 0x302e9c); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EE600(c);
SET32(3, RW(0) + 24);
if (RD(2) != RD(3)) { SET64(2, RD(0) + RD(0)); goto L_00302F70; }
SET64(2, rd8(c, (RW(16) + 12)));
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_00302EBC; }
SET64(2, RD(0) + (s64)1); goto L_00302F24;
L_00302EBC:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302ED8; }
SET64(2, RD(0) + (s64)1); goto L_00302F24;
L_00302ED8:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00302EFC; }
SET64(2, RD(0) + (s64)1); goto L_00302F24;
L_00302EFC:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00302F14; }
SET64(3, RD(0) + RD(0));
L_00302F14:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00302F24; }
SET64(2, RD(0) + (s64)1);
L_00302F24:;
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302F54; }
SET64(2, rd8(c, (RW(16) + 13)));
{ int t = RD(2) != RD(0);  if (t) goto L_00302F50; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x302f48); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00302F6C; }
L_00302F50:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_00302F54:;
SET64(31, 0x302f5c); SET64(5, RD(0) + RD(0)); JP_F_002EE5C0(c);
SET64(31, 0x302f64); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002E8770(c);
SET64(2, RD(0) + (s64)1); goto L_00302F70;
L_00302F6C:;
SET64(2, RD(0) + RD(0));
L_00302F70:;
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_00302F80; }
SET32(2, RW(0) + 1); goto L_00303078;
L_00302F80:;
SET64(31, 0x302f88);  JP_F_00302380(c);
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_00302F98; }
SET32(2, RW(0) + 1); goto L_00303078;
L_00302F98:;
SET64(31, 0x302fa0);  JP_F_00301FD0(c);
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_00302FB0; }
SET32(2, RW(0) + 1); goto L_00303078;
L_00302FB0:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_00302FC0; }
SET64(2, RD(0) + (s64)1); goto L_00303028;
L_00302FC0:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00302FDC; }
SET64(2, RD(0) + (s64)1); goto L_00303028;
L_00302FDC:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00303000; }
SET64(2, RD(0) + (s64)1); goto L_00303028;
L_00303000:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00303018; }
SET64(3, RD(0) + RD(0));
L_00303018:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00303028; }
SET64(2, RD(0) + (s64)1);
L_00303028:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303038; }
SET64(2, RD(0) + RD(0)); goto L_00303078;
L_00303038:;
SET64(31, 0x303040);  JP_F_002EE600(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00303078; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x303058); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00303074; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x30306c); SET64(5, RD(0) + RD(0)); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_00303078;
L_00303074:;
SET64(2, RD(0) + RD(0));
L_00303078:;
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}
void JP_F_00302E00(Ctx *c) { JP_B_00302E00(c, 0x302e00); }
void JP_F_00302E18(Ctx *c) { JP_B_00302E00(c, 0x302e18); }

void JP_F_00303090(Ctx *c) { /* func_00303090 */
ENTER(0x303090);
SET64(2, RD(0) + RD(0)); return;
}

static void JP_B_003030A0(Ctx *c, u32 entry) { /* func_003030A0 */
ENTER(entry);
switch (entry) { case 0x303174: goto L_00303174; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x3030bc); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(3, RD(2) & 0xffff);
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_003030FC; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x10000);
SET64(3, (s64)(s32)0x41000000);
c->f[0].u = RW(3);
SET32(2, RW(4) + RW(2));
c->f[1].u = rd32(c, (RW(2) + -30824));
c->fcc = F(1) < F(0);
{ int t = !c->fcc;  if (t) goto L_003030F8; }
SET64(2, RD(0) + RD(0)); goto L_00303204;
L_003030F8:;
SET64(2, rd8(c, (RW(16) + 12)));
L_003030FC:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_0030310C; }
SET64(2, RD(0) + (s64)1); goto L_00303174;
L_0030310C:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303128; }
SET64(2, RD(0) + (s64)1); goto L_00303174;
L_00303128:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_0030314C; }
SET64(2, RD(0) + (s64)1); goto L_00303174;
L_0030314C:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00303164; }
SET64(3, RD(0) + RD(0));
L_00303164:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00303174; }
SET64(2, RD(0) + (s64)1);
L_00303174:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 13))); goto L_00303184; }
SET64(2, RD(0) + RD(0)); goto L_003031D8;
L_00303184:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303194; }
SET64(2, RD(0) + RD(0)); goto L_003031D8;
L_00303194:;
SET64(31, 0x30319c);  JP_F_002EE600(c);
SET32(3, RW(0) + 24);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_003031D8; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x3031b8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_003031D4; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x3031cc); SET32(5, RW(0) + 24); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_003031D8;
L_003031D4:;
SET64(2, RD(0) + RD(0));
L_003031D8:;
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_003031E8; }
SET32(2, RW(0) + 1); goto L_00303204;
L_003031E8:;
SET64(31, 0x3031f0);  JP_F_00301FD0(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00303204; }
SET64(31, 0x303200); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EDDB0(c);
SET32(2, RW(0) + 1);
L_00303204:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}
void JP_F_003030A0(Ctx *c) { JP_B_003030A0(c, 0x3030a0); }
void JP_F_00303174(Ctx *c) { JP_B_003030A0(c, 0x303174); }

void JP_F_00303220(Ctx *c) { /* func_00303220 */
ENTER(0x303220);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00303230(Ctx *c) { /* func_00303230 */
ENTER(0x303230);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00303240(Ctx *c) { /* func_00303240 */
ENTER(0x303240);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 16), RD(31));
SET64(1, RD(0) | 0x89d0);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(16, RD(4) + RD(0));
SET32(2, RW(3) + RW(2));
c->f[12].u = rd32(c, (RW(2) + -30264));
SET64(31, 0x303270); SET32(4, RW(3) + RW(1)); JP_F_00362700(c);
SET64(31, 0x303278); SET64(4, RD(16) + RD(0)); JP_F_00301FD0(c);
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_00303288; }
SET32(2, RW(0) + 1); goto L_003033C4;
L_00303288:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_00303298; }
SET64(2, RD(0) + (s64)1); goto L_00303300;
L_00303298:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_003032B4; }
SET64(2, RD(0) + (s64)1); goto L_00303300;
L_003032B4:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_003032D8; }
SET64(2, RD(0) + (s64)1); goto L_00303300;
L_003032D8:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_003032F0; }
SET64(3, RD(0) + RD(0));
L_003032F0:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00303300; }
SET64(2, RD(0) + (s64)1);
L_00303300:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 13))); goto L_00303310; }
SET64(2, RD(0) + RD(0)); goto L_00303364;
L_00303310:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303320; }
SET64(2, RD(0) + RD(0)); goto L_00303364;
L_00303320:;
SET64(31, 0x303328);  JP_F_002EE600(c);
SET32(3, RW(0) + 24);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_00303364; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x303344); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00303360; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x303358); SET32(5, RW(0) + 24); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_00303364;
L_00303360:;
SET64(2, RD(0) + RD(0));
L_00303364:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303374; }
SET32(2, RW(0) + 1); goto L_003033C4;
L_00303374:;
SET64(31, 0x30337c);  JP_F_002EE600(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(2, RD(0) + RD(0)); goto L_003033B8; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 108)));
{ u32 t = RW(25); SET64(31, 0x303398); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_003033B4; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x3033ac); SET64(5, RD(0) + RD(0)); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_003033B8;
L_003033B4:;
SET64(2, RD(0) + RD(0));
L_003033B8:;
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_003033C4; }
SET32(2, RW(0) + 1);
L_003033C4:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

static void JP_B_003033E0(Ctx *c, u32 entry) { /* func_003033E0 */
ENTER(entry);
switch (entry) { case 0x303400: goto L_00303400; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x3033f4); SET64(16, RD(4) + RD(0)); JP_F_00301FD0(c);
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_00303404; }
SET32(2, RW(0) + 1); goto L_0030359C;
if (0) { L_00303400:; SET32(2, RW(0) + 1); }
L_00303404:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_00303414; }
SET64(2, RD(0) + (s64)1); goto L_0030347C;
L_00303414:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303430; }
SET64(2, RD(0) + (s64)1); goto L_0030347C;
L_00303430:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00303454; }
SET64(2, RD(0) + (s64)1); goto L_0030347C;
L_00303454:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_0030346C; }
SET64(3, RD(0) + RD(0));
L_0030346C:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0030347C; }
SET64(2, RD(0) + (s64)1);
L_0030347C:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 13))); goto L_0030348C; }
SET64(2, RD(0) + RD(0)); goto L_00303520;
L_0030348C:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_0030349C; }
SET64(2, RD(0) + RD(0)); goto L_00303520;
L_0030349C:;
SET64(1, RD(0) | 0x87b0);
SET32(5, RW(0) + 3);
SET64(31, 0x3034ac); SET32(4, RW(2) + RW(1)); JP_F_003231C0(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_003034BC; }
SET64(2, RD(0) + RD(0)); goto L_00303520;
L_003034BC:;
SET64(31, 0x3034c4);  JP_F_002EE600(c);
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_00303520; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x89d0);
SET64(5, RD(0) + RD(0));
SET32(2, RW(3) + RW(2));
c->f[12].u = rd32(c, (RW(2) + -30264));
SET64(31, 0x3034f0); SET32(4, RW(3) + RW(1)); JP_F_00362700(c);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x303500); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0030351C; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x303514); SET32(5, RW(0) + 1); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_00303520;
L_0030351C:;
SET64(2, RD(0) + RD(0));
L_00303520:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303530; }
SET32(2, RW(0) + 1); goto L_0030359C;
L_00303530:;
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -8144));
SET32(3, RW(4) + RW(3));
c->f[1].u = rd32(c, (RW(3) + -30824));
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(2, RD(0) + RD(0)); goto L_0030359C; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
c->f[1].u = rd32(c, (RW(2) + -30276));
c->f[0].u = RW(0);
c->fcc = F(1) == F(0);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00303574; }
SET64(3, RD(0) + RD(0));
L_00303574:;
SET64(2, RD(3) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_00303598; }
SET64(31, 0x303588); SET64(4, RD(16) + RD(0)); JP_F_00302380(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00303598; }
SET32(2, RW(0) + 1); goto L_0030359C;
L_00303598:;
SET64(2, RD(0) + RD(0));
L_0030359C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}
void JP_F_003033E0(Ctx *c) { JP_B_003033E0(c, 0x3033e0); }
void JP_F_00303400(Ctx *c) { JP_B_003033E0(c, 0x303400); }

void JP_F_003035B0(Ctx *c) { /* func_003035B0 */
ENTER(0x3035b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x3035c8); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00301FD0(c);
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(17) + 12))); goto L_003035D8; }
SET32(2, RW(0) + 1); goto L_003037BC;
L_003035D8:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(17) + 16)); goto L_003035E8; }
SET64(2, RD(0) + (s64)1); goto L_00303650;
L_003035E8:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(17) + 0))); goto L_00303604; }
SET64(2, RD(0) + (s64)1); goto L_00303650;
L_00303604:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00303628; }
SET64(2, RD(0) + (s64)1); goto L_00303650;
L_00303628:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00303640; }
SET64(3, RD(0) + RD(0));
L_00303640:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00303650; }
SET64(2, RD(0) + (s64)1);
L_00303650:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(17) + 13))); goto L_00303660; }
SET64(2, RD(0) + RD(0)); goto L_003036F4;
L_00303660:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_00303670; }
SET64(2, RD(0) + RD(0)); goto L_003036F4;
L_00303670:;
SET64(1, RD(0) | 0x87b0);
SET32(5, RW(0) + 3);
SET64(31, 0x303680); SET32(4, RW(2) + RW(1)); JP_F_003231C0(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 0))); goto L_00303690; }
SET64(2, RD(0) + RD(0)); goto L_003036F4;
L_00303690:;
SET64(31, 0x303698);  JP_F_002EE600(c);
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_003036F4; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x89d0);
SET64(5, RD(0) + RD(0));
SET32(2, RW(3) + RW(2));
c->f[12].u = rd32(c, (RW(2) + -30264));
SET64(31, 0x3036c4); SET32(4, RW(3) + RW(1)); JP_F_00362700(c);
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x3036d4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_003036F0; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x3036e8); SET32(5, RW(0) + 1); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_003036F4;
L_003036F0:;
SET64(2, RD(0) + RD(0));
L_003036F4:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_00303704; }
SET32(2, RW(0) + 1); goto L_003037BC;
L_00303704:;
SET64(1, RD(0) | 0x8790);
SET64(31, 0x303710); SET32(4, RW(2) + RW(1)); JP_F_002F0300(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_003037A4; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x303728); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(2) & 0xff);
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -8136));
SET32(3, RW(4) + RW(3));
c->f[1].u = rd32(c, (RW(3) + -30272));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; SET64(16, RD(0) + (s64)1); if (t) goto L_00303768; }
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(4) + RW(2));
SET64(2, rd8(c, (RW(2) + -30840)));
{ int t = RD(2) != RD(0);  if (t) goto L_00303768; }
SET64(16, RD(0) + RD(0));
L_00303768:;
if (RD(5) != RD(0)) { SET64(1, RD(0) | 0x86a0); goto L_0030377C; }
{ int t = RD(16) == RD(0);  if (t) goto L_003037A0; }
SET64(1, RD(0) | 0x86a0);
L_0030377C:;
SET64(31, 0x303784); SET32(4, RW(4) + RW(1)); JP_F_00300090(c);
if (RD(16) == RD(0)) { SET64(2, RD(0) + (s64)1); goto L_003037A4; }
SET64(31, 0x303794); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_002EA640(c);
SET64(2, RD(0) + (s64)1);
 goto L_003037A4;
L_003037A0:;
SET64(2, RD(0) + RD(0));
L_003037A4:;
if (RD(2) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_003037B4; }
SET32(2, RW(0) + 1); goto L_003037BC;
L_003037B4:;
SET64(31, 0x3037bc);  JP_F_00302380(c);
L_003037BC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_003037D0(Ctx *c) { /* func_003037D0 */
ENTER(0x3037d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x3037e4); SET64(16, RD(4) + RD(0)); JP_F_00301FD0(c);
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_003037F4; }
SET32(2, RW(0) + 1); goto L_003039B0;
L_003037F4:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_00303804; }
SET64(2, RD(0) + (s64)1); goto L_0030386C;
L_00303804:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303820; }
SET64(2, RD(0) + (s64)1); goto L_0030386C;
L_00303820:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00303844; }
SET64(2, RD(0) + (s64)1); goto L_0030386C;
L_00303844:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_0030385C; }
SET64(3, RD(0) + RD(0));
L_0030385C:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0030386C; }
SET64(2, RD(0) + (s64)1);
L_0030386C:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 13))); goto L_0030387C; }
SET64(2, RD(0) + RD(0)); goto L_00303910;
L_0030387C:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_0030388C; }
SET64(2, RD(0) + RD(0)); goto L_00303910;
L_0030388C:;
SET64(1, RD(0) | 0x87b0);
SET32(5, RW(0) + 3);
SET64(31, 0x30389c); SET32(4, RW(2) + RW(1)); JP_F_003231C0(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_003038AC; }
SET64(2, RD(0) + RD(0)); goto L_00303910;
L_003038AC:;
SET64(31, 0x3038b4);  JP_F_002EE600(c);
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_00303910; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x89d0);
SET64(5, RD(0) + RD(0));
SET32(2, RW(3) + RW(2));
c->f[12].u = rd32(c, (RW(2) + -30264));
SET64(31, 0x3038e0); SET32(4, RW(3) + RW(1)); JP_F_00362700(c);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x3038f0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_0030390C; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x303904); SET32(5, RW(0) + 1); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_00303910;
L_0030390C:;
SET64(2, RD(0) + RD(0));
L_00303910:;
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_00303920; }
SET32(2, RW(0) + 1); goto L_003039B0;
L_00303920:;
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(3) + RW(2));
SET64(2, rd8(c, (RW(2) + -30820)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_003039B0; }
SET64(31, 0x30393c); SET64(4, RD(16) + RD(0)); JP_F_00302380(c);
if (RD(2) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 8))); goto L_00303954; }
SET64(31, 0x30394c); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002EA760(c);
SET32(2, RW(0) + 1); goto L_003039B0;
L_00303954:;
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x303960); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(2) & 0xff);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(3, RD(2) ^ RD(0));
SET64(2, (s64)(s32)0x10000);
SET64(3, RD(3) < (u64)(s64)1);
SET32(2, RW(4) + RW(2));
{ int t = RD(3) != RD(0); SET64(2, rd8(c, (RW(2) + -30840))); if (t) goto L_00303988; }
{ int t = RD(2) == RD(0);  if (t) goto L_003039AC; }
L_00303988:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_0030399C; }
SET64(31, 0x303998);  JP_F_002EA640(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_0030399C:;
SET64(31, 0x3039a4);  JP_F_002EA660(c);
SET32(2, RW(0) + 1); goto L_003039B0;
L_003039AC:;
SET64(2, RD(0) + RD(0));
L_003039B0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

static void JP_B_003039C0(Ctx *c, u32 entry) { /* func_003039C0 */
ENTER(entry);
switch (entry) { case 0x303a00: goto L_00303A00; }
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x10000);
wr64(c, (RW(29) + 16), RD(31));
SET64(2, RD(3) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(1, RD(0) | 0x89d0);
SET64(5, (s32)rd32(c, (RW(4) + 0)));
SET64(16, RD(4) + RD(0));
SET32(3, RW(5) + RW(3));
SET32(2, RW(5) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + -30832)));
c->f[12].u = rd32(c, (RW(2) + -30264));
SET32(4, RW(5) + RW(1));
SET64(2, RD(3) ^ 0x5);
SET64(31, 0x303a00); SET64(5, RD(2) < (u64)(s64)1); JP_F_00362660(c);
L_00303A00:;
SET64(2, rd8(c, (RW(16) + 12)));
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_00303A14; }
SET64(2, RD(0) + (s64)1); goto L_00303A7C;
L_00303A14:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303A30; }
SET64(2, RD(0) + (s64)1); goto L_00303A7C;
L_00303A30:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00303A54; }
SET64(2, RD(0) + (s64)1); goto L_00303A7C;
L_00303A54:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00303A6C; }
SET64(3, RD(0) + RD(0));
L_00303A6C:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00303A7C; }
SET64(2, RD(0) + (s64)1);
L_00303A7C:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 13))); goto L_00303A8C; }
SET64(2, RD(0) + RD(0)); goto L_00303B20;
L_00303A8C:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_00303A9C; }
SET64(2, RD(0) + RD(0)); goto L_00303B20;
L_00303A9C:;
SET64(1, RD(0) | 0x87b0);
SET32(5, RW(0) + 3);
SET64(31, 0x303aac); SET32(4, RW(2) + RW(1)); JP_F_003231C0(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303ABC; }
SET64(2, RD(0) + RD(0)); goto L_00303B20;
L_00303ABC:;
SET64(31, 0x303ac4);  JP_F_002EE600(c);
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_00303B20; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x89d0);
SET64(5, RD(0) + RD(0));
SET32(2, RW(3) + RW(2));
c->f[12].u = rd32(c, (RW(2) + -30264));
SET64(31, 0x303af0); SET32(4, RW(3) + RW(1)); JP_F_00362700(c);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x303b00); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00303B1C; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x303b14); SET32(5, RW(0) + 1); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_00303B20;
L_00303B1C:;
SET64(2, RD(0) + RD(0));
L_00303B20:;
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_00303B30; }
SET32(2, RW(0) + 1); goto L_00303D2C;
L_00303B30:;
SET64(31, 0x303b38);  JP_F_00301FD0(c);
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_00303B48; }
SET32(2, RW(0) + 1); goto L_00303D2C;
L_00303B48:;
SET64(31, 0x303b50);  JP_F_00302380(c);
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_00303B60; }
SET32(2, RW(0) + 1); goto L_00303D2C;
L_00303B60:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_00303B70; }
SET64(2, RD(0) + (s64)1); goto L_00303BD8;
L_00303B70:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303B8C; }
SET64(2, RD(0) + (s64)1); goto L_00303BD8;
L_00303B8C:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00303BB0; }
SET64(2, RD(0) + (s64)1); goto L_00303BD8;
L_00303BB0:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00303BC8; }
SET64(3, RD(0) + RD(0));
L_00303BC8:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00303BD8; }
SET64(2, RD(0) + (s64)1);
L_00303BD8:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 13))); goto L_00303BE8; }
SET64(2, RD(0) + RD(0)); goto L_00303C3C;
L_00303BE8:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303BF8; }
SET64(2, RD(0) + RD(0)); goto L_00303C3C;
L_00303BF8:;
SET64(31, 0x303c00);  JP_F_002EE600(c);
SET32(3, RW(0) + 24);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_00303C3C; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x303c1c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00303C38; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x303c30); SET32(5, RW(0) + 24); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_00303C3C;
L_00303C38:;
SET64(2, RD(0) + RD(0));
L_00303C3C:;
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_00303C4C; }
SET32(2, RW(0) + 1); goto L_00303D2C;
L_00303C4C:;
SET64(31, 0x303c54);  JP_F_00302970(c);
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_00303C64; }
SET32(2, RW(0) + 1); goto L_00303D2C;
L_00303C64:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_00303C74; }
SET64(2, RD(0) + (s64)1); goto L_00303CDC;
L_00303C74:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303C90; }
SET64(2, RD(0) + (s64)1); goto L_00303CDC;
L_00303C90:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00303CB4; }
SET64(2, RD(0) + (s64)1); goto L_00303CDC;
L_00303CB4:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00303CCC; }
SET64(3, RD(0) + RD(0));
L_00303CCC:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00303CDC; }
SET64(2, RD(0) + (s64)1);
L_00303CDC:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303CEC; }
SET64(2, RD(0) + RD(0)); goto L_00303D2C;
L_00303CEC:;
SET64(31, 0x303cf4);  JP_F_002EE600(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00303D2C; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x303d0c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00303D28; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x303d20); SET64(5, RD(0) + RD(0)); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_00303D2C;
L_00303D28:;
SET64(2, RD(0) + RD(0));
L_00303D2C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}
void JP_F_003039C0(Ctx *c) { JP_B_003039C0(c, 0x3039c0); }
void JP_F_00303A00(Ctx *c) { JP_B_003039C0(c, 0x303a00); }

void JP_F_00303D40(Ctx *c) { /* func_00303D40 */
ENTER(0x303d40);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(4) + RW(2));
SET64(2, rd8(c, (RW(2) + -30544)));
if (RD(2) != RD(0)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_00303D70; }
SET64(2, RD(0) + RD(0)); goto L_00303FBC;
L_00303D70:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_00303D80; }
SET64(2, RD(0) + (s64)1); goto L_00303DE8;
L_00303D80:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(2, (s64)(s32)0x3a830000); goto L_00303D9C; }
SET64(2, RD(0) + (s64)1); goto L_00303DE8;
L_00303D9C:;
SET64(2, RD(2) | 0x126f);
c->f[1].u = rd32(c, (RW(4) + 24));
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00303DC0; }
SET64(2, RD(0) + (s64)1); goto L_00303DE8;
L_00303DC0:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00303DD8; }
SET64(3, RD(0) + RD(0));
L_00303DD8:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00303DE8; }
SET64(2, RD(0) + (s64)1);
L_00303DE8:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 13))); goto L_00303DF8; }
SET64(2, RD(0) + RD(0)); goto L_00303E88;
L_00303DF8:;
if (RD(2) == RD(0)) { SET64(1, RD(0) | 0x87b0); goto L_00303E08; }
SET64(2, RD(0) + RD(0)); goto L_00303E88;
L_00303E08:;
SET32(5, RW(0) + 3);
SET64(31, 0x303e14); SET32(4, RW(4) + RW(1)); JP_F_003231C0(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303E24; }
SET64(2, RD(0) + RD(0)); goto L_00303E88;
L_00303E24:;
SET64(31, 0x303e2c);  JP_F_002EE600(c);
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_00303E88; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x10000);
SET64(1, RD(0) | 0x89d0);
SET64(5, RD(0) + RD(0));
SET32(2, RW(3) + RW(2));
c->f[12].u = rd32(c, (RW(2) + -30264));
SET64(31, 0x303e58); SET32(4, RW(3) + RW(1)); JP_F_00362700(c);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x303e68); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00303E84; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x303e7c); SET32(5, RW(0) + 1); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_00303E88;
L_00303E84:;
SET64(2, RD(0) + RD(0));
L_00303E88:;
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_00303E98; }
SET32(2, RW(0) + 1); goto L_00303FBC;
L_00303E98:;
SET64(31, 0x303ea0);  JP_F_00301FD0(c);
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_00303EB0; }
SET32(2, RW(0) + 1); goto L_00303FBC;
L_00303EB0:;
SET64(31, 0x303eb8);  JP_F_00302380(c);
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 12))); goto L_00303EC8; }
SET32(2, RW(0) + 1); goto L_00303FBC;
L_00303EC8:;
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(16) + 16)); goto L_00303ED8; }
SET64(2, RD(0) + (s64)1); goto L_00303F40;
L_00303ED8:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303EF4; }
SET64(2, RD(0) + (s64)1); goto L_00303F40;
L_00303EF4:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_00303F18; }
SET64(2, RD(0) + (s64)1); goto L_00303F40;
L_00303F18:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00303F30; }
SET64(3, RD(0) + RD(0));
L_00303F30:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00303F40; }
SET64(2, RD(0) + (s64)1);
L_00303F40:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(16) + 13))); goto L_00303F50; }
SET64(2, RD(0) + RD(0)); goto L_00303FA4;
L_00303F50:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00303F60; }
SET64(2, RD(0) + RD(0)); goto L_00303FA4;
L_00303F60:;
SET64(31, 0x303f68);  JP_F_002EE600(c);
SET32(3, RW(0) + 24);
if (RD(2) == RD(3)) { SET64(2, RD(0) + RD(0)); goto L_00303FA4; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x303f84); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00303FA0; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x303f98); SET32(5, RW(0) + 24); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_00303FA4;
L_00303FA0:;
SET64(2, RD(0) + RD(0));
L_00303FA4:;
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_00303FB4; }
SET32(2, RW(0) + 1); goto L_00303FBC;
L_00303FB4:;
SET64(31, 0x303fbc);  JP_F_00302970(c);
L_00303FBC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00303FD0(Ctx *c) { /* func_00303FD0 */
ENTER(0x303fd0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x303fe8); SET64(4, (s32)rd32(c, (RW(4) + 0))); JP_F_002EE610(c);
SET32(3, RW(0) + 3);
if (RD(2) != RD(3)) { SET64(2, rd8(c, (RW(16) + 20))); goto L_00304010; }
SET64(31, 0x303ffc); SET64(4, RD(16) + RD(0)); JP_F_00301BC0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0030400C; }
SET32(2, RW(0) + 1); goto L_0030403C;
L_0030400C:;
SET64(2, rd8(c, (RW(16) + 20)));
L_00304010:;
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0030403C; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x304028); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00304038; }
SET32(2, RW(0) + 1); goto L_0030403C;
L_00304038:;
SET64(2, RD(0) + RD(0));
L_0030403C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

static void JP_B_00304050(Ctx *c, u32 entry) { /* func_00304050 */
ENTER(entry);
switch (entry) { case 0x3041c4: goto L_003041C4; case 0x304204: goto L_00304204; case 0x30421c: goto L_0030421C; case 0x304234: goto L_00304234; case 0x30424c: goto L_0030424C; case 0x304264: goto L_00304264; case 0x30427c: goto L_0030427C; case 0x304294: goto L_00304294; case 0x3042ac: goto L_003042AC; case 0x3042c4: goto L_003042C4; case 0x3042dc: goto L_003042DC; case 0x3042f4: goto L_003042F4; case 0x30430c: goto L_0030430C; case 0x304324: goto L_00304324; case 0x304338: goto L_00304338; }
L_00304050:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x304068); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_003021F0(c);
SET64(16, RD(2) & 0xff);
if (RD(16) != RD(0)) { SET64(2, RD(16) & 0xff); goto L_0030418C; }
SET64(2, rd8(c, (RW(17) + 12)));
if (RD(2) == RD(0)) { c->f[0].u = rd32(c, (RW(17) + 16)); goto L_00304088; }
SET64(2, RD(0) + (s64)1); goto L_003040F0;
L_00304088:;
c->f[2].u = RW(0);
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(4, (s32)rd32(c, (RW(17) + 0))); goto L_003040A4; }
SET64(2, RD(0) + (s64)1); goto L_003040F0;
L_003040A4:;
SET64(2, (s64)(s32)0x3a830000);
SET64(2, RD(2) | 0x126f);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(4) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x10000); goto L_003040C8; }
SET64(2, RD(0) + (s64)1); goto L_003040F0;
L_003040C8:;
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(3, RW(0) + 1); if (t) goto L_003040E0; }
SET64(3, RD(0) + RD(0));
L_003040E0:;
SET64(2, RD(3) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_003040F0; }
SET64(2, RD(0) + (s64)1);
L_003040F0:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(17) + 13))); goto L_00304100; }
SET64(2, RD(0) + RD(0)); goto L_00304184;
L_00304100:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_00304110; }
SET64(2, RD(0) + RD(0)); goto L_00304184;
L_00304110:;
SET64(1, RD(0) | 0x87b0);
SET64(31, 0x30411c); SET32(4, RW(2) + RW(1)); JP_F_003236A0(c);
SET64(3, RD(2) & 0xffff);
SET32(2, RW(0) + 3);
if (RD(3) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_00304184; }
SET64(31, 0x304134); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_002EE600(c);
SET32(3, RW(0) + 25);
{ int t = RD(2) == RD(3);  if (t) goto L_00304180; }
SET64(31, 0x304148); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_002EE600(c);
SET32(3, RW(0) + 26);
{ int t = RD(2) == RD(3);  if (t) goto L_00304180; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x304164); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00304180; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x304178); SET32(5, RW(0) + 26); JP_F_002EE5C0(c);
SET64(2, RD(0) + (s64)1); goto L_00304184;
L_00304180:;
SET64(2, RD(0) + RD(0));
L_00304184:;
SET64(16, RD(2) & 0xff);
SET64(2, RD(16) & 0xff);
L_0030418C:;
if (RD(2) != RD(0)) { SET64(2, RD(16) + RD(0)); goto L_0030433C; }
SET64(31, 0x30419c); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_002EE600(c);
SET64(1, RD(2) < (u64)(s64)63);
if (RD(1) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 0))); goto L_003041C8; }
SET64(3, (s64)(s32)0x4c0000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + -8768);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x304050: goto L_00304050; case 0x3041c4: goto L_003041C4; case 0x304204: goto L_00304204; case 0x30421c: goto L_0030421C; case 0x304234: goto L_00304234; case 0x30424c: goto L_0030424C; case 0x304264: goto L_00304264; case 0x30427c: goto L_0030427C; case 0x304294: goto L_00304294; case 0x3042ac: goto L_003042AC; case 0x3042c4: goto L_003042C4; case 0x3042dc: goto L_003042DC; case 0x3042f4: goto L_003042F4; case 0x30430c: goto L_0030430C; case 0x304324: goto L_00304324; case 0x304338: goto L_00304338; default: rt_jump(c, t); return; } }
L_003041C4:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
L_003041C8:;
SET64(31, 0x3041d0);  JP_F_002EE600(c);
SET64(2, RSD(2) < (s64)63);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 0))); goto L_003041F4; }
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x3041ec); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) & 0xff); goto L_00304338;
L_003041F4:;
SET64(31, 0x3041fc);  JP_F_002EE600(c);
 goto L_00304338;
L_00304204:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x304214); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) & 0xff); goto L_00304338;
L_0030421C:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x30422c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) & 0xff); goto L_00304338;
L_00304234:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x304244); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) & 0xff); goto L_00304338;
L_0030424C:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x30425c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) & 0xff); goto L_00304338;
L_00304264:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x304274); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) & 0xff); goto L_00304338;
L_0030427C:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x30428c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) & 0xff); goto L_00304338;
L_00304294:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x3042a4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) & 0xff); goto L_00304338;
L_003042AC:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x3042bc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) & 0xff); goto L_00304338;
L_003042C4:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x3042d4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) & 0xff); goto L_00304338;
L_003042DC:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x3042ec); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) & 0xff); goto L_00304338;
L_003042F4:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x304304); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) & 0xff); goto L_00304338;
L_0030430C:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x30431c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) & 0xff); goto L_00304338;
L_00304324:;
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 60)));
{ u32 t = RW(25); SET64(31, 0x304334); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) & 0xff);
L_00304338:;
SET64(2, RD(16) + RD(0));
L_0030433C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_00304050(Ctx *c) { JP_B_00304050(c, 0x304050); }
void JP_F_003041C4(Ctx *c) { JP_B_00304050(c, 0x3041c4); }
void JP_F_00304204(Ctx *c) { JP_B_00304050(c, 0x304204); }
void JP_F_0030421C(Ctx *c) { JP_B_00304050(c, 0x30421c); }
void JP_F_00304234(Ctx *c) { JP_B_00304050(c, 0x304234); }
void JP_F_0030424C(Ctx *c) { JP_B_00304050(c, 0x30424c); }
void JP_F_00304264(Ctx *c) { JP_B_00304050(c, 0x304264); }
void JP_F_0030427C(Ctx *c) { JP_B_00304050(c, 0x30427c); }
void JP_F_00304294(Ctx *c) { JP_B_00304050(c, 0x304294); }
void JP_F_003042AC(Ctx *c) { JP_B_00304050(c, 0x3042ac); }
void JP_F_003042C4(Ctx *c) { JP_B_00304050(c, 0x3042c4); }
void JP_F_003042DC(Ctx *c) { JP_B_00304050(c, 0x3042dc); }
void JP_F_003042F4(Ctx *c) { JP_B_00304050(c, 0x3042f4); }
void JP_F_0030430C(Ctx *c) { JP_B_00304050(c, 0x30430c); }
void JP_F_00304324(Ctx *c) { JP_B_00304050(c, 0x304324); }
void JP_F_00304338(Ctx *c) { JP_B_00304050(c, 0x304338); }

static void JP_B_00304350(Ctx *c, u32 entry) { /* func_00304350 */
ENTER(entry);
if (entry == 0x304350) hle_training_controller(c);
switch (entry) { case 0x304400: goto L_00304400; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[1].u = RW(0);
c->f[0].u = rd32(c, (RW(4) + 16));
c->fcc = F(0) <= F(1);
if (c->fcc) { SET64(3, (s32)rd32(c, (RW(28) + -29872))); goto L_00304384; }
c->f[0].f = fpu(F(0) - F(12));
c->fcc = F(0) < F(1);
{ int t = !c->fcc; wr32(c, (RW(4) + 16), c->f[0].u); if (t) goto L_00304380; }
wr32(c, (RW(4) + 16), c->f[1].u);
L_00304380:;
SET64(3, (s32)rd32(c, (RW(28) + -29872)));
L_00304384:;
c->f[2].u = RW(0);
c->f[0].u = rd32(c, (RW(3) + 588));
c->fcc = F(2) == F(0);
if (c->fcc) { SET64(31, rd64(c, (RW(29) + 0))); goto L_00304424; }
SET64(3, rd8(c, (RW(4) + 12)));
if (RD(3) == RD(0)) { c->f[0].u = rd32(c, (RW(4) + 16)); goto L_003043AC; }
SET64(3, RD(0) + (s64)1); goto L_0030440C;
L_003043AC:;
c->fcc = F(0) <= F(2);
if (c->fcc) { SET64(6, (s32)rd32(c, (RW(4) + 0))); goto L_003043C0; }
SET64(3, RD(0) + (s64)1); goto L_0030440C;
L_003043C0:;
SET64(3, (s64)(s32)0x3a830000);
SET64(3, RD(3) | 0x126f);
c->f[0].u = RW(3);
c->f[1].u = rd32(c, (RW(6) + 24));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(3, (s64)(s32)0x10000); goto L_003043E4; }
SET64(3, RD(0) + (s64)1); goto L_0030440C;
L_003043E4:;
SET32(3, RW(6) + RW(3));
c->f[0].u = rd32(c, (RW(3) + -30800));
c->fcc = F(0) <= F(2);
{ int t = !c->fcc; SET32(5, RW(0) + 1); if (t) goto L_003043FC; }
SET64(5, RD(0) + RD(0));
L_003043FC:;
SET64(3, RD(5) & 0xff);
L_00304400:;
if (RD(3) != RD(0)) { SET64(3, RD(0) + RD(0)); goto L_0030440C; }
SET64(3, RD(0) + (s64)1);
L_0030440C:;
SET64(3, RD(3) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_00304420; }
SET64(31, 0x304420);  JP_F_00304050(c);
L_00304420:;
SET64(31, rd64(c, (RW(29) + 0)));
L_00304424:;
SET32(29, RW(29) + 16); return;
}
void JP_F_00304350(Ctx *c) { JP_B_00304350(c, 0x304350); }
void JP_F_00304400(Ctx *c) { JP_B_00304350(c, 0x304400); }

void JP_F_00304430(Ctx *c) { /* func_00304430 */
ENTER(0x304430);
SET64(2, (s32)rd32(c, (RW(4) + 0))); return;
}

void JP_F_00304440(Ctx *c) { /* func_00304440 */
ENTER(0x304440);
SET32(29, RW(29) + -32);
SET64(3, RD(4) & 0xffff);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_003044A4; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET32(4, RW(0) + 368); goto L_00304484; }
SET64(31, 0x30446c); SET32(4, RW(0) + 56); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0030447C; }
SET64(31, 0x30447c); SET64(4, RD(16) + RD(0)); JP_F_00306470(c);
L_0030447C:;
SET64(2, RD(16) + RD(0)); goto L_003044C0;
L_00304484:;
SET64(31, 0x30448c);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0030449C; }
SET64(31, 0x30449c); SET64(4, RD(16) + RD(0)); JP_F_0031A660(c);
L_0030449C:;
SET64(2, RD(16) + RD(0)); goto L_003044C0;
L_003044A4:;
SET64(31, 0x3044ac); SET32(4, RW(0) + 56); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_003044BC; }
SET64(31, 0x3044bc); SET64(4, RD(16) + RD(0)); JP_F_00306470(c);
L_003044BC:;
SET64(2, RD(16) + RD(0));
L_003044C0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_003044D0(Ctx *c) { /* func_003044D0 */
ENTER(0x3044d0);
SET64(5, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(5) == RD(0);  if (t) goto L_003044EC; }
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(5) + RW(3));
wr32(c, (RW(3) + -30268), RW(0));
wr32(c, (RW(4) + 0), RW(0));
L_003044EC:;
 return;
}

void JP_F_00304500(Ctx *c) { /* func_00304500 */
ENTER(0x304500);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(5) + RW(2));
wr32(c, (RW(4) + 0), RW(5));
wr32(c, (RW(2) + -30268), RW(4));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x304528);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00304540(Ctx *c) { /* func_00304540 */
ENTER(0x304540);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15952);
wr32(c, (RW(4) + 8), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr8(c, (RW(4) + 12), (u8)RW(0)); return;
}

void JP_F_00304560(Ctx *c) { /* func_00304560 */
ENTER(0x304560);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00304570(Ctx *c) { /* func_00304570 */
ENTER(0x304570);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_00304620; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 16176);
wr32(c, (RW(16) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x3045a8);  rt_call(c, t); }
SET32(4, RW(16) + 28);
{ int t = RD(4) == RD(0);  if (t) goto L_003045E8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 16392);
{ int t = RD(4) == RD(0); wr32(c, (RW(16) + 44), RW(2)); if (t) goto L_003045E8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2904);
SET64(31, 0x3045d4); wr32(c, (RW(16) + 44), RW(2)); JP_F_0023F0F0(c);
SET32(4, RW(16) + 32);
{ int t = RD(4) == RD(0);  if (t) goto L_003045E8; }
SET64(31, 0x3045e8);  JP_F_0013E5D0(c);
L_003045E8:;
if (RD(16) == RD(0)) { SET64(2, RD(17) << 48); goto L_0030460C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15952);
wr32(c, (RW(16) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 164)));
{ u32 t = RW(25); SET64(31, 0x304608); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) << 48);
L_0030460C:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(16) + RD(0)); goto L_00304624; }
SET64(31, 0x304620); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_00304620:;
SET64(2, RD(16) + RD(0));
L_00304624:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00304640(Ctx *c) { /* func_00304640 */
ENTER(0x304640);
SET64(2, rd16(c, (RW(4) + 24))); return;
}

void JP_F_00304650(Ctx *c) { /* func_00304650 */
ENTER(0x304650);
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_00304660(Ctx *c) { /* func_00304660 */
ENTER(0x304660);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[21].u = c->f[12].u;
SET64(31, 0x304684); c->f[20].u = c->f[13].u; JP_F_00138DE0(c);
SET64(5, rd16(c, (RW(16) + 24)));
SET64(31, 0x304690); SET64(4, RD(2) + RD(0)); JP_F_0013E2C0(c);
SET64(4, (s64)(s32)0x437f0000);
SET64(3, (s64)(s32)0x4f000000);
c->f[0].u = RW(4);
c->f[1].f = fpu(F(0) * F(20));
c->f[0].u = RW(3);
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_003046C8; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(5, (s32)c->f[0].u);
SET64(5, RD(5) & 0xff); goto L_003046E0;
L_003046C8:;
SET64(3, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
SET64(5, RD(5) | RD(3));
SET64(5, RD(5) & 0xff);
L_003046E0:;
c->f[12].u = c->f[21].u;
SET64(31, 0x3046ec); SET64(4, RD(2) + RD(0)); JP_F_0013E990(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void JP_F_00304710(Ctx *c) { /* func_00304710 */
ENTER(0x304710);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x30472c); c->f[20].u = c->f[12].u; JP_F_00138DE0(c);
SET64(5, rd16(c, (RW(16) + 24)));
SET64(31, 0x304738); SET64(4, RD(2) + RD(0)); JP_F_0013E2C0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x304744); SET64(4, RD(2) + RD(0)); JP_F_0013EA40(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00304760(Ctx *c) { /* func_00304760 */
ENTER(0x304760);
hle_mash_face(c);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x30477c); SET64(16, RD(5) + RD(0)); JP_F_00138DE0(c);
SET64(5, (s16)rd16(c, (RW(17) + 24)));
SET64(31, 0x304788); SET64(4, RD(2) + RD(0)); JP_F_0013E200(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0xf000);
SET64(3, RD(2) & 0xffff);
if (RD(3) != RD(0)) { SET64(2, RD(16) & 0xffff); goto L_003047A4; }
SET64(2, RD(0) + RD(0)); goto L_003047B4;
L_003047A4:;
if (RD(3) != RD(2)) { SET32(2, RW(0) + 2); goto L_003047B0; }
SET32(2, RW(0) + 1);
L_003047B0:;
SET64(2, RD(2) & 0xffff);
L_003047B4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

static void JP_B_003047D0(Ctx *c, u32 entry) { /* func_003047D0 */
ENTER(entry);
if (entry == 0x3047d0) hle_mash_some(c);
switch (entry) { case 0x304800: goto L_00304800; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x3047ec); SET64(16, RD(5) + RD(0)); JP_F_00138DE0(c);
SET64(5, (s16)rd16(c, (RW(17) + 24)));
SET64(31, 0x3047f8); SET64(4, RD(2) + RD(0)); JP_F_0013E200(c);
SET64(3, RD(16) & 0xffff);
SET64(2, RD(2) & 0xffff);
L_00304800:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(2, RD(3) & RD(2));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RD(0) < RD(2));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_003047D0(Ctx *c) { JP_B_003047D0(c, 0x3047d0); }
void JP_F_00304800(Ctx *c) { JP_B_003047D0(c, 0x304800); }

void JP_F_00304820(Ctx *c) { /* func_00304820 */
ENTER(0x304820);
hle_mash_face(c);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x30483c); SET64(16, RD(5) + RD(0)); JP_F_00138DE0(c);
SET64(5, (s16)rd16(c, (RW(17) + 24)));
SET64(31, 0x304848); SET64(4, RD(2) + RD(0)); JP_F_0013E200(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0xf000);
SET64(3, RD(2) & 0xffff);
if (RD(3) != RD(0)) { SET64(2, RD(16) & 0xffff); goto L_00304864; }
SET64(2, RD(0) + RD(0)); goto L_00304874;
L_00304864:;
if (RD(3) != RD(2)) { SET32(2, RW(0) + 2); goto L_00304870; }
SET32(2, RW(0) + 1);
L_00304870:;
SET64(2, RD(2) & 0xffff);
L_00304874:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00304890(Ctx *c) { /* func_00304890 */
ENTER(0x304890);
hle_mash_any(c);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x3048ac); SET64(16, RD(0) + (s64)1); JP_F_00138DE0(c);
SET64(5, (s16)rd16(c, (RW(17) + 24)));
SET64(31, 0x3048b8); SET64(4, RD(2) + RD(0)); JP_F_0013E200(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0xf0f0);
if (RD(2) != RD(0)) { SET64(2, RD(0) < RD(16)); goto L_003048F4; }
SET64(31, 0x3048d0);  JP_F_00138DE0(c);
SET64(5, rd16(c, (RW(17) + 24)));
SET64(31, 0x3048dc); SET64(4, RD(2) + RD(0)); JP_F_0013E2C0(c);
SET64(2, rd8(c, (RW(2) + 61)));
SET64(2, RD(2) & 0xf0);
{ int t = RD(2) != RD(0);  if (t) goto L_003048F0; }
SET64(16, RD(0) + RD(0));
L_003048F0:;
SET64(2, RD(0) < RD(16));
L_003048F4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00304910(Ctx *c) { /* func_00304910 */
ENTER(0x304910);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x304924); SET64(16, RD(4) + RD(0)); JP_F_00138DE0(c);
SET64(6, (s16)rd16(c, (RW(16) + 24)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x304934); SET32(5, RW(0) + 30); JP_F_0013E030(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET64(2, RD(2) & 0xffff);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(2) & 0xf000);
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 32); return;
}

static void JP_B_00304950(Ctx *c, u32 entry) { /* func_00304950 */
ENTER(entry);
switch (entry) { case 0x304a00: goto L_00304A00; }
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x30496c); SET64(16, RD(4) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(18, rd16(c, (RW(16) + 24))); if (t) goto L_00304988; }
SET32(17, RW(0) + 16); goto L_0030498C;
L_00304988:;
SET32(17, RW(0) + 64);
L_0030498C:;
SET64(31, 0x304994);  JP_F_00138DE0(c);
SET64(5, RD(18) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x3049a4); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(17) & 0xffff);
SET64(2, RD(3) & RD(2));
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_003049C0; }
SET32(2, RW(0) + 1); goto L_00304A18;
L_003049C0:;
SET64(31, 0x3049c8);  JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(17, rd16(c, (RW(16) + 24))); if (t) goto L_003049E4; }
SET32(16, RW(0) + 64); goto L_003049E8;
L_003049E4:;
SET32(16, RW(0) + 16);
L_003049E8:;
SET64(31, 0x3049f0);  JP_F_00138DE0(c);
SET64(5, RD(17) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x304a00); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
L_00304A00:;
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00304A18; }
SET32(2, RW(0) + 2);
L_00304A18:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}
void JP_F_00304950(Ctx *c) { JP_B_00304950(c, 0x304950); }
void JP_F_00304A00(Ctx *c) { JP_B_00304950(c, 0x304a00); }

void JP_F_00304A30(Ctx *c) { /* func_00304A30 */
ENTER(0x304a30);
c->f[1].u = rd32(c, (RW(4) + 48));
c->f[0].u = RW(0);
c->fcc = F(0) == F(1);
{ int t = !c->fcc; SET32(2, RW(0) + 1); if (t) goto L_00304A4C; }
SET64(2, RD(0) + RD(0));
L_00304A4C:;
 return;
}

void JP_F_00304A60(Ctx *c) { /* func_00304A60 */
ENTER(0x304a60);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x304a80); SET64(16, RD(5) + RD(0)); JP_F_00304430(c);
SET64(17, rd16(c, (RW(16) + 0)));
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET32(4, RW(18) + 28);
SET64(7, RD(0) + RD(0));
SET64(16, (s32)rd32(c, (RW(3) + -30816)));
SET64(6, RD(17) + RD(0));
SET64(31, 0x304aa4); SET64(5, RD(16) + RD(0)); JP_F_0023E9D0(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00304AC4; }
SET32(4, RW(18) + 28);
SET64(5, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x304ac0); SET32(7, RW(0) + 1); JP_F_0023E9D0(c);
SET64(2, RD(0) + (s64)1);
L_00304AC4:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00304AE0(Ctx *c) { /* func_00304AE0 */
ENTER(0x304ae0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x304af8); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(17) + 28);
SET32(3, RW(2) + RW(3));
SET32(6, RW(0) + 24);
SET64(16, (s32)rd32(c, (RW(3) + -30816)));
SET64(7, RD(0) + RD(0));
SET64(31, 0x304b18); SET64(5, RD(16) + RD(0)); JP_F_0023E9D0(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00304B38; }
SET32(4, RW(17) + 28);
SET64(5, RD(16) + RD(0));
SET32(6, RW(0) + 24);
SET64(31, 0x304b34); SET32(7, RW(0) + 1); JP_F_0023E9D0(c);
SET64(2, RD(0) + (s64)1);
L_00304B38:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00304B50(Ctx *c) { /* func_00304B50 */
ENTER(0x304b50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x304b68); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(17) + 28);
SET32(3, RW(2) + RW(3));
SET32(6, RW(0) + 23);
SET64(16, (s32)rd32(c, (RW(3) + -30816)));
SET64(7, RD(0) + RD(0));
SET64(31, 0x304b88); SET64(5, RD(16) + RD(0)); JP_F_0023E9D0(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00304BA8; }
SET32(4, RW(17) + 28);
SET64(5, RD(16) + RD(0));
SET32(6, RW(0) + 23);
SET64(31, 0x304ba4); SET32(7, RW(0) + 1); JP_F_0023E9D0(c);
SET64(2, RD(0) + (s64)1);
L_00304BA8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00304BC0(Ctx *c) { /* func_00304BC0 */
ENTER(0x304bc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x304bd8);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) & 0xff);
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_00304BF0(Ctx *c) { /* func_00304BF0 */
ENTER(0x304bf0);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 64), RD(31));
SET32(2, RW(2) + -16848);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, rd16(c, (RW(4) + 24)));
SET32(3, RW(16) << 3);
SET32(3, RW(3) + RW(16));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(19, rd16(c, (RW(2) + 12)));
SET64(31, 0x304c34); SET64(17, RD(0) + RD(0)); JP_F_00138DE0(c);
SET64(5, RD(16) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x304c44); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(19) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
if (RD(2) == RD(0)) { SET64(2, RD(17) + RD(0)); goto L_00304C8C; }
SET64(31, 0x304c64);  JP_F_00138DE0(c);
SET64(5, (s16)rd16(c, (RW(18) + 24)));
SET64(31, 0x304c70); SET64(4, RD(2) + RD(0)); JP_F_0013E260(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0xf0);
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00304C88; }
SET64(17, RD(0) + (s64)1);
L_00304C88:;
SET64(2, RD(17) + RD(0));
L_00304C8C:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00304CB0(Ctx *c) { /* func_00304CB0 */
ENTER(0x304cb0);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 32), RD(31));
SET32(2, RW(2) + -16848);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, rd16(c, (RW(4) + 24)));
SET32(3, RW(16) << 3);
SET32(3, RW(3) + RW(16));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(31, 0x304ce4); SET64(17, rd16(c, (RW(2) + 10))); JP_F_00138DE0(c);
SET64(5, RD(16) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x304cf4); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(17) & 0xffff);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & RD(3));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(2, RD(0) < RD(2));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RD(2) ^ RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 48); return;
}

void JP_F_00304D20(Ctx *c) { /* func_00304D20 */
ENTER(0x304d20);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 32), RD(31));
SET32(2, RW(2) + -16848);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, rd16(c, (RW(4) + 24)));
SET32(3, RW(16) << 3);
SET32(3, RW(3) + RW(16));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(31, 0x304d54); SET64(17, rd16(c, (RW(2) + 10))); JP_F_00138DE0(c);
SET64(5, RD(16) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x304d64); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(17) & 0xffff);
SET64(2, RD(2) & 0xffff);
SET64(31, rd64(c, (RW(29) + 32)));
SET64(2, RD(2) & RD(3));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RD(0) < RD(2));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

static void JP_B_00304D90(Ctx *c, u32 entry) { /* func_00304D90 */
ENTER(entry);
switch (entry) { case 0x304ddc: goto L_00304DDC; case 0x304e38: goto L_00304E38; case 0x304e94: goto L_00304E94; case 0x304ef0: goto L_00304EF0; case 0x304f4c: goto L_00304F4C; }
L_00304D90:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x304da8); SET64(16, RD(4) + RD(0)); JP_F_00304430(c);
SET64(31, 0x304db0); SET64(4, RD(2) + RD(0)); JP_F_002EE600(c);
SET32(2, RW(2) + -8);
SET64(1, RD(2) < (u64)(s64)11);
if (RD(1) == RD(0)) { SET32(2, RW(0) + 1); goto L_00304F50; }
SET64(3, (s64)(s32)0x4c0000);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + -8512);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x304d90: goto L_00304D90; case 0x304ddc: goto L_00304DDC; case 0x304e38: goto L_00304E38; case 0x304e94: goto L_00304E94; case 0x304ef0: goto L_00304EF0; case 0x304f4c: goto L_00304F4C; default: rt_jump(c, t); return; } }
L_00304DDC:;
SET64(31, 0x304de4); SET64(4, RD(16) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(17, rd16(c, (RW(16) + 24))); if (t) goto L_00304E00; }
SET32(16, RW(0) + 32); goto L_00304E04;
L_00304E00:;
SET32(16, RW(0) + 128);
L_00304E04:;
SET64(31, 0x304e0c);  JP_F_00138DE0(c);
SET64(5, RD(17) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x304e1c); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(16) & 0xffff);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & RD(3));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1); goto L_00304F50;
L_00304E38:;
SET64(31, 0x304e40); SET64(4, RD(16) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(17, rd16(c, (RW(16) + 24))); if (t) goto L_00304E5C; }
SET32(16, RW(0) + 128); goto L_00304E60;
L_00304E5C:;
SET32(16, RW(0) + 32);
L_00304E60:;
SET64(31, 0x304e68);  JP_F_00138DE0(c);
SET64(5, RD(17) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x304e78); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(16) & 0xffff);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & RD(3));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1); goto L_00304F50;
L_00304E94:;
SET64(31, 0x304e9c); SET64(4, RD(16) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(17, rd16(c, (RW(16) + 24))); if (t) goto L_00304EB8; }
SET32(16, RW(0) + 16); goto L_00304EBC;
L_00304EB8:;
SET32(16, RW(0) + 64);
L_00304EBC:;
SET64(31, 0x304ec4);  JP_F_00138DE0(c);
SET64(5, RD(17) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x304ed4); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(16) & 0xffff);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & RD(3));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1); goto L_00304F50;
L_00304EF0:;
SET64(31, 0x304ef8); SET64(4, RD(16) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(17, rd16(c, (RW(16) + 24))); if (t) goto L_00304F14; }
SET32(16, RW(0) + 64); goto L_00304F18;
L_00304F14:;
SET32(16, RW(0) + 16);
L_00304F18:;
SET64(31, 0x304f20);  JP_F_00138DE0(c);
SET64(5, RD(17) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x304f30); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(16) & 0xffff);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & RD(3));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1); goto L_00304F50;
L_00304F4C:;
SET32(2, RW(0) + 1);
L_00304F50:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_00304D90(Ctx *c) { JP_B_00304D90(c, 0x304d90); }
void JP_F_00304DDC(Ctx *c) { JP_B_00304D90(c, 0x304ddc); }
void JP_F_00304E38(Ctx *c) { JP_B_00304D90(c, 0x304e38); }
void JP_F_00304E94(Ctx *c) { JP_B_00304D90(c, 0x304e94); }
void JP_F_00304EF0(Ctx *c) { JP_B_00304D90(c, 0x304ef0); }
void JP_F_00304F4C(Ctx *c) { JP_B_00304D90(c, 0x304f4c); }

static void JP_B_00304F70(Ctx *c, u32 entry) { /* func_00304F70 */
ENTER(entry);
switch (entry) { case 0x305000: goto L_00305000; }
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + (s64)1);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(18) + RD(0));
SET64(31, 0x304fa4); SET64(16, RD(18) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(21, rd16(c, (RW(19) + 24))); if (t) goto L_00304FC0; }
SET32(20, RW(0) + 32); goto L_00304FC4;
L_00304FC0:;
SET32(20, RW(0) + 128);
L_00304FC4:;
SET64(31, 0x304fcc);  JP_F_00138DE0(c);
SET64(5, RD(21) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x304fdc); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(20) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00305050; }
SET64(31, 0x304ffc); SET64(4, RD(19) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
L_00305000:;
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(21, rd16(c, (RW(19) + 24))); if (t) goto L_00305018; }
SET32(20, RW(0) + 128); goto L_0030501C;
L_00305018:;
SET32(20, RW(0) + 32);
L_0030501C:;
SET64(31, 0x305024);  JP_F_00138DE0(c);
SET64(5, RD(21) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305034); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(20) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00305050; }
SET64(16, RD(0) + RD(0));
L_00305050:;
{ int t = RD(16) != RD(0);  if (t) goto L_003050B4; }
SET64(31, 0x305060); SET64(4, RD(19) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(20, rd16(c, (RW(19) + 24))); if (t) goto L_0030507C; }
SET32(16, RW(0) + 16); goto L_00305080;
L_0030507C:;
SET32(16, RW(0) + 64);
L_00305080:;
SET64(31, 0x305088);  JP_F_00138DE0(c);
SET64(5, RD(20) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305098); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_003050B4; }
SET64(17, RD(0) + RD(0));
L_003050B4:;
if (RD(17) != RD(0)) { SET64(2, RD(18) + RD(0)); goto L_0030511C; }
SET64(31, 0x3050c4); SET64(4, RD(19) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(17, rd16(c, (RW(19) + 24))); if (t) goto L_003050E0; }
SET32(16, RW(0) + 64); goto L_003050E4;
L_003050E0:;
SET32(16, RW(0) + 16);
L_003050E4:;
SET64(31, 0x3050ec);  JP_F_00138DE0(c);
SET64(5, RD(17) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x3050fc); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00305118; }
SET64(18, RD(0) + RD(0));
L_00305118:;
SET64(2, RD(18) + RD(0));
L_0030511C:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}
void JP_F_00304F70(Ctx *c) { JP_B_00304F70(c, 0x304f70); }
void JP_F_00305000(Ctx *c) { JP_B_00304F70(c, 0x305000); }

void JP_F_00305140(Ctx *c) { /* func_00305140 */
ENTER(0x305140);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x30515c); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00304430(c);
SET64(1, RD(0) | 0x8790);
SET64(31, 0x305168); SET32(4, RW(2) + RW(1)); JP_F_002F0300(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(4, RD(17) + RD(0)); goto L_003053AC; }
SET64(16, rd16(c, (RW(17) + 24)));
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -16848);
SET32(3, RW(16) << 3);
SET32(3, RW(3) + RW(16));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(31, 0x305198); SET64(18, rd16(c, (RW(2) + 12))); JP_F_00138DE0(c);
SET64(5, RD(16) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x3051a8); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(18) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(3, RD(0) < RD(2));
if (RD(3) == RD(0)) { SET64(2, RD(3) & 0xff); goto L_00305214; }
SET64(31, 0x3051c8); SET64(4, RD(17) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(18, rd16(c, (RW(17) + 24))); if (t) goto L_003051E4; }
SET32(16, RW(0) + 64); goto L_003051E8;
L_003051E4:;
SET32(16, RW(0) + 16);
L_003051E8:;
SET64(31, 0x3051f0);  JP_F_00138DE0(c);
SET64(5, RD(18) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305200); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(3, RD(0) < RD(2));
SET64(2, RD(3) & 0xff);
L_00305214:;
if (RD(3) == RD(0)) { SET64(3, RD(2) & 0xff); goto L_00305278; }
SET64(31, 0x305224); SET64(4, RD(17) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(18, rd16(c, (RW(17) + 24))); if (t) goto L_00305240; }
SET32(16, RW(0) + 32); goto L_00305244;
L_00305240:;
SET32(16, RW(0) + 128);
L_00305244:;
SET64(31, 0x30524c);  JP_F_00138DE0(c);
SET64(5, RD(18) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x30525c); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1);
SET64(3, RD(2) & 0xff);
L_00305278:;
if (RD(2) == RD(0)) { SET64(2, RD(3) & 0xff); goto L_003052DC; }
SET64(31, 0x305288); SET64(4, RD(17) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(18, rd16(c, (RW(17) + 24))); if (t) goto L_003052A4; }
SET32(16, RW(0) + 128); goto L_003052A8;
L_003052A4:;
SET32(16, RW(0) + 32);
L_003052A8:;
SET64(31, 0x3052b0);  JP_F_00138DE0(c);
SET64(5, RD(18) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x3052c0); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
SET64(3, RD(2) ^ RD(0));
SET64(3, RD(3) < (u64)(s64)1);
SET64(2, RD(3) & 0xff);
L_003052DC:;
if (RD(3) != RD(0)) { SET64(2, RD(2) & 0xff); goto L_003054C4; }
SET64(31, 0x3052ec); SET64(4, RD(17) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
if (RD(2) != RD(0)) { SET64(4, RD(17) + RD(0)); goto L_00305350; }
SET64(31, 0x305308); SET64(4, RD(17) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(17) + 28);
SET32(3, RW(2) + RW(3));
SET32(6, RW(0) + 15);
SET64(16, (s32)rd32(c, (RW(3) + -30816)));
SET64(7, RD(0) + RD(0));
SET64(31, 0x305328); SET64(5, RD(16) + RD(0)); JP_F_0023E9D0(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00305348; }
SET32(4, RW(17) + 28);
SET64(5, RD(16) + RD(0));
SET32(6, RW(0) + 15);
SET64(31, 0x305344); SET32(7, RW(0) + 1); JP_F_0023E9D0(c);
SET64(2, RD(0) + (s64)1);
L_00305348:;
SET64(2, RD(2) & 0xff); goto L_0030539C;
L_00305350:;
SET64(31, 0x305358);  JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(17) + 28);
SET32(3, RW(2) + RW(3));
SET32(6, RW(0) + 14);
SET64(16, (s32)rd32(c, (RW(3) + -30816)));
SET64(7, RD(0) + RD(0));
SET64(31, 0x305378); SET64(5, RD(16) + RD(0)); JP_F_0023E9D0(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00305398; }
SET32(4, RW(17) + 28);
SET64(5, RD(16) + RD(0));
SET32(6, RW(0) + 14);
SET64(31, 0x305394); SET32(7, RW(0) + 1); JP_F_0023E9D0(c);
SET64(2, RD(0) + (s64)1);
L_00305398:;
SET64(2, RD(2) & 0xff);
L_0030539C:;
SET64(2, RD(2) & 0xff);
SET64(2, RD(2) & 0xff);
 goto L_003054C4;
L_003053AC:;
SET64(31, 0x3053b4);  JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(18, rd16(c, (RW(17) + 24))); if (t) goto L_003053D0; }
SET32(16, RW(0) + 64); goto L_003053D4;
L_003053D0:;
SET32(16, RW(0) + 16);
L_003053D4:;
SET64(31, 0x3053dc);  JP_F_00138DE0(c);
SET64(5, RD(18) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x3053ec); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(3, RD(0) < RD(2));
if (RD(3) == RD(0)) { SET64(2, RD(3) & 0xff); goto L_00305460; }
SET64(31, 0x30540c); SET64(4, RD(17) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(18, rd16(c, (RW(17) + 24))); if (t) goto L_00305428; }
SET32(16, RW(0) + 32); goto L_0030542C;
L_00305428:;
SET32(16, RW(0) + 128);
L_0030542C:;
SET64(31, 0x305434);  JP_F_00138DE0(c);
SET64(5, RD(18) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305444); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
SET64(3, RD(2) ^ RD(0));
SET64(3, RD(3) < (u64)(s64)1);
SET64(2, RD(3) & 0xff);
L_00305460:;
if (RD(3) == RD(0)) { SET64(2, RD(2) & 0xff); goto L_003054C4; }
SET64(31, 0x305470); SET64(4, RD(17) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(17, rd16(c, (RW(17) + 24))); if (t) goto L_0030548C; }
SET32(16, RW(0) + 128); goto L_00305490;
L_0030548C:;
SET32(16, RW(0) + 32);
L_00305490:;
SET64(31, 0x305498);  JP_F_00138DE0(c);
SET64(5, RD(17) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x3054a8); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1);
SET64(2, RD(2) & 0xff);
L_003054C4:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_003054E0(Ctx *c) { /* func_003054E0 */
ENTER(0x3054e0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x3054fc); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00304430(c);
SET64(1, RD(0) | 0x8790);
SET64(31, 0x305508); SET32(4, RW(2) + RW(1)); JP_F_002F0300(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(4, RD(17) + RD(0)); goto L_0030574C; }
SET64(16, rd16(c, (RW(17) + 24)));
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -16848);
SET32(3, RW(16) << 3);
SET32(3, RW(3) + RW(16));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(31, 0x305538); SET64(18, rd16(c, (RW(2) + 12))); JP_F_00138DE0(c);
SET64(5, RD(16) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305548); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(18) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(3, RD(0) < RD(2));
if (RD(3) == RD(0)) { SET64(2, RD(3) & 0xff); goto L_003055B4; }
SET64(31, 0x305568); SET64(4, RD(17) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(18, rd16(c, (RW(17) + 24))); if (t) goto L_00305584; }
SET32(16, RW(0) + 16); goto L_00305588;
L_00305584:;
SET32(16, RW(0) + 64);
L_00305588:;
SET64(31, 0x305590);  JP_F_00138DE0(c);
SET64(5, RD(18) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x3055a0); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(3, RD(0) < RD(2));
SET64(2, RD(3) & 0xff);
L_003055B4:;
if (RD(3) == RD(0)) { SET64(3, RD(2) & 0xff); goto L_00305618; }
SET64(31, 0x3055c4); SET64(4, RD(17) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(18, rd16(c, (RW(17) + 24))); if (t) goto L_003055E0; }
SET32(16, RW(0) + 32); goto L_003055E4;
L_003055E0:;
SET32(16, RW(0) + 128);
L_003055E4:;
SET64(31, 0x3055ec);  JP_F_00138DE0(c);
SET64(5, RD(18) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x3055fc); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1);
SET64(3, RD(2) & 0xff);
L_00305618:;
if (RD(2) == RD(0)) { SET64(2, RD(3) & 0xff); goto L_0030567C; }
SET64(31, 0x305628); SET64(4, RD(17) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(18, rd16(c, (RW(17) + 24))); if (t) goto L_00305644; }
SET32(16, RW(0) + 128); goto L_00305648;
L_00305644:;
SET32(16, RW(0) + 32);
L_00305648:;
SET64(31, 0x305650);  JP_F_00138DE0(c);
SET64(5, RD(18) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305660); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
SET64(3, RD(2) ^ RD(0));
SET64(3, RD(3) < (u64)(s64)1);
SET64(2, RD(3) & 0xff);
L_0030567C:;
if (RD(3) != RD(0)) { SET64(2, RD(2) & 0xff); goto L_00305864; }
SET64(31, 0x30568c); SET64(4, RD(17) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
if (RD(2) != RD(0)) { SET64(4, RD(17) + RD(0)); goto L_003056F0; }
SET64(31, 0x3056a8); SET64(4, RD(17) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(17) + 28);
SET32(3, RW(2) + RW(3));
SET32(6, RW(0) + 14);
SET64(16, (s32)rd32(c, (RW(3) + -30816)));
SET64(7, RD(0) + RD(0));
SET64(31, 0x3056c8); SET64(5, RD(16) + RD(0)); JP_F_0023E9D0(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_003056E8; }
SET32(4, RW(17) + 28);
SET64(5, RD(16) + RD(0));
SET32(6, RW(0) + 14);
SET64(31, 0x3056e4); SET32(7, RW(0) + 1); JP_F_0023E9D0(c);
SET64(2, RD(0) + (s64)1);
L_003056E8:;
SET64(2, RD(2) & 0xff); goto L_0030573C;
L_003056F0:;
SET64(31, 0x3056f8);  JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(17) + 28);
SET32(3, RW(2) + RW(3));
SET32(6, RW(0) + 15);
SET64(16, (s32)rd32(c, (RW(3) + -30816)));
SET64(7, RD(0) + RD(0));
SET64(31, 0x305718); SET64(5, RD(16) + RD(0)); JP_F_0023E9D0(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00305738; }
SET32(4, RW(17) + 28);
SET64(5, RD(16) + RD(0));
SET32(6, RW(0) + 15);
SET64(31, 0x305734); SET32(7, RW(0) + 1); JP_F_0023E9D0(c);
SET64(2, RD(0) + (s64)1);
L_00305738:;
SET64(2, RD(2) & 0xff);
L_0030573C:;
SET64(2, RD(2) & 0xff);
SET64(2, RD(2) & 0xff);
 goto L_00305864;
L_0030574C:;
SET64(31, 0x305754);  JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(18, rd16(c, (RW(17) + 24))); if (t) goto L_00305770; }
SET32(16, RW(0) + 16); goto L_00305774;
L_00305770:;
SET32(16, RW(0) + 64);
L_00305774:;
SET64(31, 0x30577c);  JP_F_00138DE0(c);
SET64(5, RD(18) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x30578c); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(3, RD(0) < RD(2));
if (RD(3) == RD(0)) { SET64(2, RD(3) & 0xff); goto L_00305800; }
SET64(31, 0x3057ac); SET64(4, RD(17) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(18, rd16(c, (RW(17) + 24))); if (t) goto L_003057C8; }
SET32(16, RW(0) + 32); goto L_003057CC;
L_003057C8:;
SET32(16, RW(0) + 128);
L_003057CC:;
SET64(31, 0x3057d4);  JP_F_00138DE0(c);
SET64(5, RD(18) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x3057e4); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
SET64(3, RD(2) ^ RD(0));
SET64(3, RD(3) < (u64)(s64)1);
SET64(2, RD(3) & 0xff);
L_00305800:;
if (RD(3) == RD(0)) { SET64(2, RD(2) & 0xff); goto L_00305864; }
SET64(31, 0x305810); SET64(4, RD(17) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(17, rd16(c, (RW(17) + 24))); if (t) goto L_0030582C; }
SET32(16, RW(0) + 128); goto L_00305830;
L_0030582C:;
SET32(16, RW(0) + 32);
L_00305830:;
SET64(31, 0x305838);  JP_F_00138DE0(c);
SET64(5, RD(17) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305848); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1);
SET64(2, RD(2) & 0xff);
L_00305864:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00305880(Ctx *c) { /* func_00305880 */
ENTER(0x305880);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x3058a4); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00304430(c);
SET64(1, RD(0) | 0x8790);
SET64(31, 0x3058b0); SET32(4, RW(2) + RW(1)); JP_F_002F0300(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(4, RD(19) + RD(0)); goto L_003059B0; }
SET64(16, rd16(c, (RW(19) + 24)));
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -16848);
SET64(18, RD(0) + (s64)1);
SET32(3, RW(16) << 3);
SET32(3, RW(3) + RW(16));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(20, rd16(c, (RW(2) + 12)));
SET64(31, 0x3058e8); SET64(17, RD(0) + RD(0)); JP_F_00138DE0(c);
SET64(5, RD(16) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x3058f8); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(20) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_0030596C; }
SET64(31, 0x305918); SET64(4, RD(19) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(20, rd16(c, (RW(19) + 24))); if (t) goto L_00305934; }
SET32(16, RW(0) + 128); goto L_00305938;
L_00305934:;
SET32(16, RW(0) + 32);
L_00305938:;
SET64(31, 0x305940);  JP_F_00138DE0(c);
SET64(5, RD(20) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305950); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_0030596C; }
SET64(17, RD(0) + (s64)1);
L_0030596C:;
if (RD(17) != RD(0)) { SET64(2, RD(18) & 0xff); goto L_00305A00; }
SET64(31, 0x30597c); SET64(4, RD(19) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(19) + 28);
SET32(3, RW(2) + RW(3));
SET32(6, RW(0) + 13);
SET64(5, (s32)rd32(c, (RW(3) + -30816)));
SET64(31, 0x305998); SET64(7, RD(0) + RD(0)); JP_F_0023E9D0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_003059A4; }
SET64(18, RD(0) + RD(0));
L_003059A4:;
SET64(2, RD(18) & 0xff);
 goto L_00305A00;
L_003059B0:;
SET64(31, 0x3059b8);  JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(17, rd16(c, (RW(19) + 24))); if (t) goto L_003059D4; }
SET32(16, RW(0) + 128); goto L_003059D8;
L_003059D4:;
SET32(16, RW(0) + 32);
L_003059D8:;
SET64(31, 0x3059e0);  JP_F_00138DE0(c);
SET64(5, RD(17) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x3059f0); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(16) & 0xffff);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & RD(3));
SET64(2, RD(0) < RD(2));
L_00305A00:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00305A20(Ctx *c) { /* func_00305A20 */
ENTER(0x305a20);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x305a44); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00304430(c);
SET64(1, RD(0) | 0x8790);
SET64(31, 0x305a50); SET32(4, RW(2) + RW(1)); JP_F_002F0300(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(4, RD(19) + RD(0)); goto L_00305B50; }
SET64(16, rd16(c, (RW(19) + 24)));
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -16848);
SET64(18, RD(0) + (s64)1);
SET32(3, RW(16) << 3);
SET32(3, RW(3) + RW(16));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(20, rd16(c, (RW(2) + 12)));
SET64(31, 0x305a88); SET64(17, RD(0) + RD(0)); JP_F_00138DE0(c);
SET64(5, RD(16) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305a98); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(20) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_00305B0C; }
SET64(31, 0x305ab8); SET64(4, RD(19) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(20, rd16(c, (RW(19) + 24))); if (t) goto L_00305AD4; }
SET32(16, RW(0) + 32); goto L_00305AD8;
L_00305AD4:;
SET32(16, RW(0) + 128);
L_00305AD8:;
SET64(31, 0x305ae0);  JP_F_00138DE0(c);
SET64(5, RD(20) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305af0); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_00305B0C; }
SET64(17, RD(0) + (s64)1);
L_00305B0C:;
if (RD(17) != RD(0)) { SET64(2, RD(18) & 0xff); goto L_00305BA0; }
SET64(31, 0x305b1c); SET64(4, RD(19) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(4, RW(19) + 28);
SET32(3, RW(2) + RW(3));
SET32(6, RW(0) + 12);
SET64(5, (s32)rd32(c, (RW(3) + -30816)));
SET64(31, 0x305b38); SET64(7, RD(0) + RD(0)); JP_F_0023E9D0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00305B44; }
SET64(18, RD(0) + RD(0));
L_00305B44:;
SET64(2, RD(18) & 0xff);
 goto L_00305BA0;
L_00305B50:;
SET64(31, 0x305b58);  JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(17, rd16(c, (RW(19) + 24))); if (t) goto L_00305B74; }
SET32(16, RW(0) + 32); goto L_00305B78;
L_00305B74:;
SET32(16, RW(0) + 128);
L_00305B78:;
SET64(31, 0x305b80);  JP_F_00138DE0(c);
SET64(5, RD(17) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305b90); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(16) & 0xffff);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & RD(3));
SET64(2, RD(0) < RD(2));
L_00305BA0:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00305BC0(Ctx *c) { /* func_00305BC0 */
ENTER(0x305bc0);
SET32(29, RW(29) + -112);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 96), RD(31));
SET32(2, RW(2) + -16848);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(21, rd16(c, (RW(4) + 24)));
SET32(3, RW(21) << 3);
SET32(3, RW(3) + RW(21));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(20, rd16(c, (RW(2) + 12)));
SET64(31, 0x305c14); SET64(16, RD(0) + RD(0)); JP_F_00138DE0(c);
SET64(5, RD(21) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305c24); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(20) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00305C98; }
SET64(31, 0x305c44); SET64(4, RD(19) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(21, rd16(c, (RW(19) + 24))); if (t) goto L_00305C60; }
SET32(20, RW(0) + 64); goto L_00305C64;
L_00305C60:;
SET32(20, RW(0) + 16);
L_00305C64:;
SET64(31, 0x305c6c);  JP_F_00138DE0(c);
SET64(5, RD(21) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305c7c); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(20) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_00305C98; }
SET64(16, RD(0) + (s64)1);
L_00305C98:;
{ int t = RD(16) == RD(0);  if (t) goto L_00305CFC; }
SET64(31, 0x305ca8); SET64(4, RD(19) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(20, rd16(c, (RW(19) + 24))); if (t) goto L_00305CC4; }
SET32(16, RW(0) + 32); goto L_00305CC8;
L_00305CC4:;
SET32(16, RW(0) + 128);
L_00305CC8:;
SET64(31, 0x305cd0);  JP_F_00138DE0(c);
SET64(5, RD(20) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305ce0); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00305CFC; }
SET64(17, RD(0) + (s64)1);
L_00305CFC:;
if (RD(17) == RD(0)) { SET64(2, RD(18) + RD(0)); goto L_00305D64; }
SET64(31, 0x305d0c); SET64(4, RD(19) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(17, rd16(c, (RW(19) + 24))); if (t) goto L_00305D28; }
SET32(16, RW(0) + 128); goto L_00305D2C;
L_00305D28:;
SET32(16, RW(0) + 32);
L_00305D2C:;
SET64(31, 0x305d34);  JP_F_00138DE0(c);
SET64(5, RD(17) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305d44); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00305D60; }
SET64(18, RD(0) + (s64)1);
L_00305D60:;
SET64(2, RD(18) + RD(0));
L_00305D64:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_00305D90(Ctx *c) { /* func_00305D90 */
ENTER(0x305d90);
SET32(29, RW(29) + -112);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 96), RD(31));
SET32(2, RW(2) + -16848);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(21, rd16(c, (RW(4) + 24)));
SET32(3, RW(21) << 3);
SET32(3, RW(3) + RW(21));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(20, rd16(c, (RW(2) + 12)));
SET64(31, 0x305de4); SET64(16, RD(0) + RD(0)); JP_F_00138DE0(c);
SET64(5, RD(21) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305df4); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(20) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00305E68; }
SET64(31, 0x305e14); SET64(4, RD(19) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(21, rd16(c, (RW(19) + 24))); if (t) goto L_00305E30; }
SET32(20, RW(0) + 16); goto L_00305E34;
L_00305E30:;
SET32(20, RW(0) + 64);
L_00305E34:;
SET64(31, 0x305e3c);  JP_F_00138DE0(c);
SET64(5, RD(21) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305e4c); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(20) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_00305E68; }
SET64(16, RD(0) + (s64)1);
L_00305E68:;
{ int t = RD(16) == RD(0);  if (t) goto L_00305ECC; }
SET64(31, 0x305e78); SET64(4, RD(19) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(20, rd16(c, (RW(19) + 24))); if (t) goto L_00305E94; }
SET32(16, RW(0) + 32); goto L_00305E98;
L_00305E94:;
SET32(16, RW(0) + 128);
L_00305E98:;
SET64(31, 0x305ea0);  JP_F_00138DE0(c);
SET64(5, RD(20) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305eb0); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00305ECC; }
SET64(17, RD(0) + (s64)1);
L_00305ECC:;
if (RD(17) == RD(0)) { SET64(2, RD(18) + RD(0)); goto L_00305F34; }
SET64(31, 0x305edc); SET64(4, RD(19) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(17, rd16(c, (RW(19) + 24))); if (t) goto L_00305EF8; }
SET32(16, RW(0) + 128); goto L_00305EFC;
L_00305EF8:;
SET32(16, RW(0) + 32);
L_00305EFC:;
SET64(31, 0x305f04);  JP_F_00138DE0(c);
SET64(5, RD(17) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305f14); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00305F30; }
SET64(18, RD(0) + (s64)1);
L_00305F30:;
SET64(2, RD(18) + RD(0));
L_00305F34:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_00305F60(Ctx *c) { /* func_00305F60 */
ENTER(0x305f60);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 64), RD(31));
SET32(2, RW(2) + -16848);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, rd16(c, (RW(4) + 24)));
SET32(3, RW(16) << 3);
SET32(3, RW(3) + RW(16));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(19, rd16(c, (RW(2) + 12)));
SET64(31, 0x305fa4); SET64(17, RD(0) + RD(0)); JP_F_00138DE0(c);
SET64(5, RD(16) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x305fb4); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(19) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
if (RD(2) != RD(0)) { SET64(2, RD(17) + RD(0)); goto L_0030602C; }
SET64(31, 0x305fd4); SET64(4, RD(18) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(18, rd16(c, (RW(18) + 24))); if (t) goto L_00305FF0; }
SET32(16, RW(0) + 128); goto L_00305FF4;
L_00305FF0:;
SET32(16, RW(0) + 32);
L_00305FF4:;
SET64(31, 0x305ffc);  JP_F_00138DE0(c);
SET64(5, RD(18) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x30600c); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_00306028; }
SET64(17, RD(0) + (s64)1);
L_00306028:;
SET64(2, RD(17) + RD(0));
L_0030602C:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00306050(Ctx *c) { /* func_00306050 */
ENTER(0x306050);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 64), RD(31));
SET32(2, RW(2) + -16848);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, rd16(c, (RW(4) + 24)));
SET32(3, RW(16) << 3);
SET32(3, RW(3) + RW(16));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(19, rd16(c, (RW(2) + 12)));
SET64(31, 0x306094); SET64(17, RD(0) + RD(0)); JP_F_00138DE0(c);
SET64(5, RD(16) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x3060a4); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(19) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
if (RD(2) != RD(0)) { SET64(2, RD(17) + RD(0)); goto L_0030611C; }
SET64(31, 0x3060c4); SET64(4, RD(18) + RD(0)); JP_F_00304430(c);
SET64(3, (s64)(s32)0x10000);
SET32(3, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(3) + -30816)));
{ int t = RD(2) != RD(0); SET64(18, rd16(c, (RW(18) + 24))); if (t) goto L_003060E0; }
SET32(16, RW(0) + 32); goto L_003060E4;
L_003060E0:;
SET32(16, RW(0) + 128);
L_003060E4:;
SET64(31, 0x3060ec);  JP_F_00138DE0(c);
SET64(5, RD(18) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x3060fc); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(16) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_00306118; }
SET64(17, RD(0) + (s64)1);
L_00306118:;
SET64(2, RD(17) + RD(0));
L_0030611C:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00306140(Ctx *c) { /* func_00306140 */
ENTER(0x306140);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x30616c); SET64(17, RD(0) + RD(0)); JP_F_00138DE0(c);
SET64(5, (s16)rd16(c, (RW(19) + 24)));
SET64(31, 0x306178); SET64(4, RD(2) + RD(0)); JP_F_0013E260(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0xf0);
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_003061DC; }
SET64(16, rd16(c, (RW(19) + 24)));
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -16848);
SET32(3, RW(16) << 3);
SET32(3, RW(3) + RW(16));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(31, 0x3061b0); SET64(20, rd16(c, (RW(2) + 10))); JP_F_00138DE0(c);
SET64(5, RD(16) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x3061c0); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(20) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_003061DC; }
SET64(17, RD(0) + (s64)1);
L_003061DC:;
if (RD(17) == RD(0)) { SET64(2, RD(18) + RD(0)); goto L_00306238; }
SET64(16, rd16(c, (RW(19) + 24)));
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -16848);
SET32(3, RW(16) << 3);
SET32(3, RW(3) + RW(16));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(31, 0x306208); SET64(17, rd16(c, (RW(2) + 12))); JP_F_00138DE0(c);
SET64(5, RD(16) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x306218); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(17) & 0xffff);
SET64(2, RD(3) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00306234; }
SET64(18, RD(0) + (s64)1);
L_00306234:;
SET64(2, RD(18) + RD(0));
L_00306238:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00306260(Ctx *c) { /* func_00306260 */
ENTER(0x306260);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(4, RW(18) + 28);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(31, 0x30628c); c->f[20].u = c->f[12].u; JP_F_0023F070(c);
SET64(16, rd16(c, (RW(18) + 24)));
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -16848);
SET32(3, RW(16) << 3);
SET32(3, RW(3) + RW(16));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(31, 0x3062b0); SET64(17, rd16(c, (RW(2) + 10))); JP_F_00138DE0(c);
SET64(5, RD(16) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x3062c0); SET64(5, RSD(5) >> 48); JP_F_0013E260(c);
SET64(16, rd16(c, (RW(18) + 24)));
SET64(3, RD(17) & 0xffff);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & RD(3));
SET64(17, RD(0) < RD(2));
SET32(3, RW(16) << 3);
SET64(2, (s64)(s32)0x530000);
SET32(3, RW(3) + RW(16));
SET32(2, RW(2) + -16848);
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(31, 0x3062f4); SET64(19, rd16(c, (RW(2) + 10))); JP_F_00138DE0(c);
SET64(5, RD(16) << 48);
SET64(4, RD(2) + RD(0));
SET64(31, 0x306304); SET64(5, RSD(5) >> 48); JP_F_0013E200(c);
c->f[1].u = rd32(c, (RW(18) + 48));
SET64(3, RD(2) & 0xffff);
SET64(2, RD(19) & 0xffff);
SET64(2, RD(3) & RD(2));
c->f[1].f = fpu(F(1) - F(20));
SET64(3, RD(0) + RD(0));
SET64(2, RD(0) < RD(2));
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
{ int t = !c->fcc; wr32(c, (RW(18) + 48), c->f[1].u); if (t) goto L_00306338; }
wr32(c, (RW(18) + 48), c->f[0].u);
L_00306338:;
if (RD(2) == RD(0)) { SET64(2, RD(17) & 0xff); goto L_0030636C; }
c->f[1].u = rd32(c, (RW(18) + 52));
c->f[0].u = RW(0);
c->fcc = F(0) == F(1);
{ int t = !c->fcc;  if (t) goto L_00306368; }
SET64(2, (s64)(s32)0x4c0000);
SET64(3, RD(0) + (s64)1);
c->f[0].u = rd32(c, (RW(2) + -8008));
wr32(c, (RW(18) + 48), c->f[0].u);
L_00306368:;
SET64(2, RD(17) & 0xff);
L_0030636C:;
if (RD(2) != RD(0)) { SET64(3, RD(0) + (s64)1); goto L_00306394; }
c->f[1].u = rd32(c, (RW(18) + 52));
c->f[0].u = RW(0);
c->f[1].f = fpu(F(1) - F(20));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; wr32(c, (RW(18) + 52), c->f[1].u); if (t) goto L_00306394; }
wr32(c, (RW(18) + 52), c->f[0].u);
L_00306394:;
if (RD(3) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_003063AC; }
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -8000));
wr32(c, (RW(18) + 52), c->f[0].u);
SET64(4, RD(18) + RD(0));
L_003063AC:;
SET64(31, 0x3063b4); c->f[12].u = c->f[20].u; JP_F_00304350(c);
SET64(31, rd64(c, (RW(29) + 80)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_003063E0(Ctx *c) { /* func_003063E0 */
ENTER(0x3063e0);
SET32(29, RW(29) + -32);
SET64(2, RD(0) | 0xffff);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x3063fc); wr16(c, (RW(4) + 24), (u16)RW(2)); JP_F_003044D0(c);
SET64(31, 0x306404); SET32(4, RW(16) + 28); JP_F_0023F0F0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00306420(Ctx *c) { /* func_00306420 */
ENTER(0x306420);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(6) + RD(0));
SET64(31, 0x306440); wr16(c, (RW(4) + 24), (u16)RW(16)); JP_F_00304500(c);
SET64(5, RD(16) + RD(0));
SET64(31, 0x30644c); SET32(4, RW(17) + 28); JP_F_0023F110(c);
wr32(c, (RW(17) + 48), RW(0));
wr32(c, (RW(17) + 52), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00306470(Ctx *c) { /* func_00306470 */
ENTER(0x306470);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x306488); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00304540(c);
SET64(3, (s64)(s32)0x4e0000);
SET32(16, RW(17) + 28);
SET32(3, RW(3) + 16176);
SET64(2, RD(0) | 0xffff);
wr32(c, (RW(17) + 8), RW(3));
SET64(4, RD(16) + RD(0));
SET64(31, 0x3064a8); wr16(c, (RW(17) + 24), (u16)RW(2)); JP_F_0023F140(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, RD(17) + RD(0));
SET32(3, RW(3) + 16392);
wr32(c, (RW(16) + 16), RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_003064D0(Ctx *c) { /* func_003064D0 */
ENTER(0x3064d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00306538; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 16392);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 16), RW(2)); if (t) goto L_00306520; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2904);
SET64(31, 0x30650c); wr32(c, (RW(17) + 16), RW(2)); JP_F_0023F0F0(c);
SET32(4, RW(17) + 4);
if (RD(4) == RD(0)) { SET64(2, RD(16) << 48); goto L_00306524; }
SET64(31, 0x306520);  JP_F_0013E5D0(c);
L_00306520:;
SET64(2, RD(16) << 48);
L_00306524:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0030653C; }
SET64(31, 0x306538); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00306538:;
SET64(2, RD(17) + RD(0));
L_0030653C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00306550(Ctx *c) { /* func_00306550 */
ENTER(0x306550);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x306570); SET32(4, RW(29) + 48); JP_F_0015C9C0(c);
rd128(c, (RW(29) + 48) & ~15u, &c->r[2]);
SET64(4, RD(16) + RD(0));
wr128(c, (RW(16) + 224) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 240) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 80));
SET64(31, 0x306590); wr32(c, (RW(16) + 256), c->f[0].u); JP_F_003066A0(c);
wr32(c, (RW(17) + 0), RW(0));
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(17) + 4), RW(0));
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 12), RW(4));
rd128(c, (RW(16) + 224) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[3]);
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(4));
rd128(c, (RW(16) + 240) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 16) & ~15u, &c->r[3]);
c->f[0].u = rd32(c, (RW(16) + 256));
wr32(c, (RW(17) + 32), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_003065E0(Ctx *c) { /* func_003065E0 */
ENTER(0x3065e0);
 return;
}

void JP_F_003065F0(Ctx *c) { /* func_003065F0 */
ENTER(0x3065f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 144), RW(5));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 176), RW(6));
SET64(25, (s32)rd32(c, (RW(16) + 128)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x306618); SET32(4, RW(16) + 64); rt_call(c, t); }
rd128(c, (RW(16) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 224) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 96) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 240) & ~15u, &c->r[3]);
c->f[0].u = rd32(c, (RW(16) + 112));
wr32(c, (RW(16) + 256), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00306640(Ctx *c) { /* func_00306640 */
ENTER(0x306640);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 4);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x306658); SET64(16, RD(4) + RD(0)); JP_F_0015CB40(c);
SET64(25, (s32)rd32(c, (RW(16) + 128)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x306668); SET32(4, RW(16) + 64); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(31, 0x306674); SET32(5, RW(16) + 64); JP_F_0015C970(c);
SET64(25, (s32)rd32(c, (RW(16) + 128)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x306684); SET32(4, RW(16) + 64); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_003066A0(Ctx *c) { /* func_003066A0 */
ENTER(0x3066a0);
SET32(29, RW(29) + -16);
SET64(5, (s32)rd32(c, (RW(28) + -29864)));
SET32(3, RW(0) + 1);
if (RD(5) == RD(3)) { SET64(5, (s32)rd32(c, (RW(28) + -29872))); goto L_003066BC; }
SET32(29, RW(29) + 16); goto L_00306760;
L_003066BC:;
SET64(3, (s64)(s32)0xc2c80000);
c->f[2].u = RW(3);
SET64(7, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0xc28c0000);
SET64(6, (s64)(s32)0x4c0000);
SET64(8, (s32)rd32(c, (RW(5) + 680)));
c->f[0].u = RW(3);
SET64(3, (s64)(s32)0x3f800000);
SET32(7, RW(7) + -16384);
wr32(c, (RW(29) + 12), RW(3));
SET32(6, RW(6) + -16382);
SET64(8, rd16(c, (RW(8) + 464)));
SET64(5, (s64)(s32)0x4c0000);
SET32(5, RW(5) + -16380);
SET32(3, RW(8) << 1);
SET32(3, RW(3) + RW(8));
SET32(3, RW(3) << 3);
SET32(7, RW(7) + RW(3));
SET32(6, RW(6) + RW(3));
SET64(7, (s16)rd16(c, (RW(7) + 0)));
SET32(3, RW(5) + RW(3));
SET64(5, (s16)rd16(c, (RW(6) + 0)));
SET64(3, (s16)rd16(c, (RW(3) + 0)));
c->f[1].u = RW(7);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[1].f = fpu(F(1) + F(2));
wr32(c, (RW(29) + 0), c->f[1].u);
c->f[1].u = RW(5);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 4), c->f[0].u);
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(2));
wr32(c, (RW(29) + 8), c->f[0].u);
rd128(c, (RW(29) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 224) & ~15u, &c->r[3]);
SET32(29, RW(29) + 16);
L_00306760:;
 return;
}

static void JP_B_00306770(Ctx *c, u32 entry) { /* func_00306770 */
ENTER(entry);
switch (entry) { case 0x306e00: goto L_00306E00; }
SET32(29, RW(29) + -1168);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET32(4, RW(18) + 80);
wr32(c, (RW(29) + 28), c->f[27].u);
wr32(c, (RW(29) + 24), c->f[26].u);
wr32(c, (RW(29) + 20), c->f[25].u);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
c->f[27].u = c->f[12].u;
SET64(31, 0x3067bc); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_00306F70(c);
SET32(4, RW(18) + 112);
SET64(31, 0x3067c8); c->f[12].u = c->f[27].u; JP_F_00306F70(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 1136), RW(0));
wr32(c, (RW(29) + 1140), RW(0));
c->f[20].u = RW(3);
wr32(c, (RW(29) + 1144), RW(0));
SET64(4, RD(18) + RD(0));
wr32(c, (RW(29) + 1148), RW(3));
SET32(5, RW(29) + 1104);
rd128(c, (RW(18) + 16) & ~15u, &c->r[2]);
SET32(6, RW(29) + 1088);
SET32(7, RW(29) + 1164);
SET32(8, RW(29) + 1136);
SET32(9, RW(29) + 1120);
wr128(c, (RW(29) + 1136) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 1120), RW(0));
wr32(c, (RW(29) + 1124), RW(0));
wr32(c, (RW(29) + 1128), RW(0));
wr32(c, (RW(29) + 1132), RW(3));
rd128(c, (RW(18) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 1120) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 1116), RW(3));
wr32(c, (RW(29) + 1100), RW(3));
wr32(c, (RW(29) + 1104), RW(0));
wr32(c, (RW(29) + 1108), RW(0));
wr32(c, (RW(29) + 1112), RW(0));
wr32(c, (RW(29) + 1088), RW(0));
wr32(c, (RW(29) + 1092), RW(0));
SET64(31, 0x30683c); wr32(c, (RW(29) + 1096), RW(0)); JP_F_00307330(c);
SET64(2, (s64)(s32)0x4c0000);
SET32(17, RW(18) + 96);
c->f[22].u = rd32(c, (RW(2) + -8304));
SET32(4, RW(29) + 1104);
c->f[21].u = rd32(c, (RW(18) + 48));
SET64(5, RD(17) + RD(0));
c->f[13].u = RW(0);
SET32(16, RW(18) + 128);
SET64(31, 0x306864); c->f[12].u = c->f[22].u; JP_F_001488D0(c);
c->f[13].u = RW(0);
SET32(4, RW(29) + 1104);
SET64(5, RD(16) + RD(0));
SET64(31, 0x306878); c->f[12].u = c->f[22].u; JP_F_001488D0(c);
c->f[13].u = RW(0);
SET32(4, RW(29) + 1104);
SET32(5, RW(29) + 1088);
SET64(31, 0x30688c); c->f[12].u = c->f[22].u; JP_F_001488D0(c);
c->f[12].u = c->f[22].u;
SET32(4, RW(29) + 1104);
c->f[13].u = RW(0);
SET64(31, 0x3068a0); SET32(5, RW(29) + 1120); JP_F_001488D0(c);
c->f[1].u = rd32(c, (RW(16) + 8));
SET64(2, (s64)(s32)0x3f000000);
c->f[0].u = rd32(c, (RW(17) + 8));
SET64(3, (s64)(s32)0x3f800000);
c->f[3].u = rd32(c, (RW(16) + 4));
SET32(4, RW(29) + 800);
c->f[2].u = rd32(c, (RW(17) + 4));
SET32(5, RW(29) + 784);
c->f[4].f = fpu(F(1) - F(0));
c->f[1].u = rd32(c, (RW(16) + 0));
c->f[0].u = rd32(c, (RW(17) + 0));
c->f[2].f = fpu(F(3) - F(2));
wr32(c, (RW(29) + 796), RW(3));
c->f[0].f = fpu(F(1) - F(0));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 792), c->f[4].u);
wr32(c, (RW(29) + 788), c->f[2].u);
SET64(31, 0x3068ec); wr32(c, (RW(29) + 784), c->f[0].u); JP_F_002AFF20(c);
c->f[6].u = rd32(c, (RW(17) + 8));
SET64(2, (s64)(s32)0x3f800000);
c->f[4].u = rd32(c, (RW(17) + 4));
wr32(c, (RW(29) + 828), RW(2));
c->f[2].u = rd32(c, (RW(17) + 0));
wr32(c, (RW(29) + 764), RW(2));
wr32(c, (RW(29) + 444), RW(2));
c->f[0].u = rd32(c, (RW(28) + -30912));
wr32(c, (RW(29) + 816), RW(0));
SET32(4, RW(29) + 464);
wr32(c, (RW(29) + 476), RW(2));
rd128(c, (RW(29) + 800) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 820), RW(0));
wr32(c, (RW(29) + 824), RW(0));
wr128(c, (RW(29) + 816) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(29) + 816));
wr32(c, (RW(29) + 432), RW(0));
c->f[3].u = rd32(c, (RW(29) + 820));
wr32(c, (RW(29) + 440), RW(0));
c->f[5].u = rd32(c, (RW(29) + 824));
wr32(c, (RW(29) + 464), RW(0));
c->f[25].f = fpu(F(2) + F(1));
wr32(c, (RW(29) + 468), RW(0));
wr32(c, (RW(29) + 472), RW(0));
c->f[1].f = fpu(F(2) - F(25));
c->f[22].f = fpu(F(4) + F(3));
wr32(c, (RW(29) + 752), c->f[1].u);
c->f[1].f = fpu(F(4) - F(22));
c->f[24].f = fpu(F(6) + F(5));
wr32(c, (RW(29) + 756), c->f[1].u);
c->f[1].f = fpu(F(6) - F(24));
wr32(c, (RW(29) + 760), c->f[1].u);
rd128(c, (RW(29) + 752) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 432) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 436), c->f[0].u);
rd128(c, (RW(29) + 432) & ~15u, &c->r[2]);
SET64(31, 0x306984); wr128(c, (RW(29) + 464) & ~15u, &c->r[2]); JP_F_002B0360(c);
c->f[1].u = rd32(c, (RW(29) + 1136));
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = rd32(c, (RW(29) + 1140));
wr32(c, (RW(29) + 1084), RW(2));
wr32(c, (RW(29) + 732), RW(2));
c->f[0].u = rd32(c, (RW(28) + -30912));
c->f[3].f = fpu(F(1) - F(25));
wr32(c, (RW(29) + 428), RW(2));
wr32(c, (RW(29) + 460), RW(2));
SET32(4, RW(29) + 448);
rd128(c, (RW(29) + 464) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 1072), RW(0));
c->f[1].u = rd32(c, (RW(29) + 1144));
wr32(c, (RW(29) + 1076), RW(0));
c->f[2].f = fpu(F(2) - F(22));
wr32(c, (RW(29) + 1080), RW(0));
wr128(c, (RW(29) + 1072) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 416), RW(0));
wr32(c, (RW(29) + 424), RW(0));
c->f[1].f = fpu(F(1) - F(24));
wr32(c, (RW(29) + 448), RW(0));
wr32(c, (RW(29) + 452), RW(0));
wr32(c, (RW(29) + 456), RW(0));
wr32(c, (RW(29) + 720), c->f[3].u);
wr32(c, (RW(29) + 724), c->f[2].u);
wr32(c, (RW(29) + 728), c->f[1].u);
rd128(c, (RW(29) + 720) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 416) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 420), c->f[0].u);
rd128(c, (RW(29) + 416) & ~15u, &c->r[2]);
SET64(31, 0x306a04); wr128(c, (RW(29) + 448) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 1056), RW(0));
wr32(c, (RW(29) + 1068), RW(2));
SET32(4, RW(29) + 1056);
rd128(c, (RW(29) + 448) & ~15u, &c->r[2]);
SET32(5, RW(29) + 1072);
wr32(c, (RW(29) + 1060), RW(0));
wr32(c, (RW(29) + 1064), RW(0));
SET64(31, 0x306a2c); wr128(c, (RW(29) + 1056) & ~15u, &c->r[2]); JP_F_002B0230(c);
SET64(2, (s64)(s32)0x4c0000);
c->f[2].u = rd32(c, (RW(2) + -8272));
c->f[23].u = rd32(c, (RW(29) + 1136));
c->f[22].u = RW(0);
c->f[1].u = c->f[0].u & 0x7FFFFFFFu;
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -8264));
c->f[3].u = rd32(c, (RW(29) + 1144));
c->fcc = F(23) == F(25);
c->f[0].f = fpu(F(0) - F(2));
c->facc = fpu(F(22) + F(2));
{ int t = !c->fcc; c->f[26].f = fpu(c->facc + F(0) * F(1)); if (t) goto L_00306A6C; }
c->fcc = F(3) == F(24);
if (c->fcc) { SET32(4, RW(29) + 304); goto L_00306B10; }
L_00306A6C:;
c->f[13].f = fpu(F(24) - F(3));
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 384);
c->f[15].u = RW(2);
c->f[14].u = RW(0);
SET64(31, 0x306a88); c->f[12].f = fpu(F(25) - F(23)); JP_F_0013E810(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x306a94); SET32(4, RW(29) + 400); JP_F_0013E7B0(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(29) + 368);
c->f[13].u = RW(2);
c->f[12].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
c->f[15].u = RW(2);
SET64(31, 0x306ab4); c->f[14].u = c->f[12].u; JP_F_0013E810(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x306ac0); SET32(4, RW(29) + 400); JP_F_0013E790(c);
wr32(c, (RW(29) + 1152), c->f[0].u);
SET32(4, RW(29) + 1152);
SET32(5, RW(28) + -30916);
SET64(31, 0x306ad4); SET32(6, RW(28) + -30920); JP_F_0013E750(c);
wr32(c, (RW(29) + 1152), c->f[0].u);
SET64(31, 0x306ae0); c->f[12].u = c->f[0].u; JP_F_0011F880(c);
c->f[24].u = c->f[0].u;
SET64(31, 0x306aec); c->f[12].u = c->f[24].u; JP_F_00121728(c);
SET64(31, 0x306af4); SET64(4, RD(2) + RD(0)); JP_F_0011EE20(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00306B0C; }
c->fcc = F(25) < F(23);
if (c->fcc) { c->f[24].u = c->f[24].u ^ 0x80000000u; goto L_00306B08; }
L_00306B08:;
c->f[22].u = c->f[24].u;
L_00306B0C:;
SET32(4, RW(29) + 304);
L_00306B10:;
SET64(31, 0x306b18); wr32(c, (RW(29) + 1160), c->f[22].u); JP_F_0013AEA0(c);
SET32(4, RW(29) + 304);
SET64(31, 0x306b24); SET32(5, RW(29) + 1160); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x306b30); SET32(4, RW(29) + 640); JP_F_0013ADA0(c);
SET32(4, RW(29) + 704);
SET32(5, RW(29) + 1136);
SET64(31, 0x306b40); SET32(6, RW(29) + 640); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 704) & ~15u, &c->r[2]);
SET32(4, RW(29) + 240);
SET64(31, 0x306b50); wr128(c, (RW(29) + 1040) & ~15u, &c->r[2]); JP_F_0013AEA0(c);
SET32(4, RW(29) + 240);
SET64(31, 0x306b5c); SET32(5, RW(29) + 1160); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x306b68); SET32(4, RW(29) + 560); JP_F_0013ADA0(c);
SET32(4, RW(29) + 624);
SET32(5, RW(29) + 1104);
SET64(31, 0x306b78); SET32(6, RW(29) + 560); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 624) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 1036), RW(2));
c->f[7].u = rd32(c, (RW(29) + 1048));
wr32(c, (RW(29) + 1024), RW(0));
c->f[1].u = RW(0);
wr32(c, (RW(29) + 1028), RW(0));
wr32(c, (RW(29) + 1032), RW(0));
wr128(c, (RW(29) + 1024) & ~15u, &c->r[3]);
c->f[0].u = rd32(c, (RW(29) + 1032));
c->f[8].f = fpu(F(0) - F(7));
c->fcc = F(8) < F(1);
{ int t = !c->fcc; SET32(2, RW(0) + 1); if (t) goto L_00306BB4; }
SET64(2, RD(0) + RD(0));
L_00306BB4:;
SET64(3, RD(2) & 0xff);
{ int t = RD(3) == RD(0); c->f[10].f = fpu(F(26) * F(27)); if (t) goto L_00306BCC; }
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -8248)); goto L_00306BD4;
L_00306BCC:;
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -8256));
L_00306BD4:;
{ int t = RD(3) == RD(0); c->f[9].f = fpu(F(27) * F(0)); if (t) goto L_00306BE8; }
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -8232)); goto L_00306BF0;
L_00306BE8:;
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -8240));
L_00306BF0:;
c->f[1].f = fpu(F(27) * F(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 1020), RW(2));
SET32(4, RW(29) + 176);
c->f[6].u = rd32(c, (RW(29) + 1040));
c->f[2].u = rd32(c, (RW(29) + 1024));
c->f[3].u = rd32(c, (RW(29) + 1044));
c->f[0].u = rd32(c, (RW(29) + 1028));
c->f[5].f = fpu(F(2) - F(6));
c->f[2].f = fpu(F(0) - F(3));
c->f[0].u = c->f[22].u ^ 0x80000000u;
c->f[4].u = RW(0);
wr32(c, (RW(29) + 1156), c->f[0].u);
c->facc = fpu(F(4) + F(6));
c->f[0].f = fpu(c->facc + F(10) * F(5));
wr32(c, (RW(29) + 1008), c->f[0].u);
c->facc = fpu(F(4) + F(3));
c->f[0].f = fpu(c->facc + F(9) * F(2));
c->facc = fpu(F(4) + F(7));
wr32(c, (RW(29) + 1012), c->f[0].u);
c->f[0].f = fpu(c->facc + F(1) * F(8));
SET64(31, 0x306c4c); wr32(c, (RW(29) + 1016), c->f[0].u); JP_F_0013AEA0(c);
SET32(4, RW(29) + 176);
SET64(31, 0x306c58); SET32(5, RW(29) + 1156); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x306c64); SET32(4, RW(29) + 480); JP_F_0013ADA0(c);
SET32(4, RW(29) + 544);
SET32(5, RW(29) + 1008);
SET64(31, 0x306c74); SET32(6, RW(29) + 480); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 992), RW(0));
wr32(c, (RW(29) + 1004), RW(2));
SET64(5, RD(17) + RD(0));
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 996), RW(0));
c->f[22].u = rd32(c, (RW(2) + -8304));
wr32(c, (RW(29) + 1000), RW(0));
c->f[13].u = RW(0);
SET32(4, RW(29) + 992);
rd128(c, (RW(29) + 544) & ~15u, &c->r[2]);
c->f[12].u = c->f[22].u;
SET64(31, 0x306cac); wr128(c, (RW(29) + 992) & ~15u, &c->r[2]); JP_F_001488D0(c);
SET64(5, RD(16) + RD(0));
SET32(4, RW(29) + 992);
c->f[13].u = RW(0);
SET64(31, 0x306cc0); c->f[12].u = c->f[22].u; JP_F_001488D0(c);
c->f[13].u = RW(0);
SET32(4, RW(29) + 992);
SET32(5, RW(29) + 1088);
SET64(31, 0x306cd4); c->f[12].u = c->f[22].u; JP_F_001488D0(c);
c->f[12].u = c->f[22].u;
SET32(4, RW(29) + 992);
c->f[13].u = RW(0);
SET64(31, 0x306ce8); SET32(5, RW(29) + 1120); JP_F_001488D0(c);
wr8(c, (RW(18) + 148), (u8)RW(0));
SET64(3, (s32)rd32(c, (RW(28) + -29872)));
if (RD(3) == RD(0)) { rd128(c, (RW(29) + 992) & ~15u, &c->r[4]); goto L_00306DD4; }
SET64(4, (s32)rd32(c, (RW(3) + 680)));
SET32(2, RW(29) + 944);
SET32(6, RW(2) + 16);
SET64(5, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 944), RW(0));
SET32(3, RW(29) + 976);
wr32(c, (RW(29) + 948), RW(0));
SET64(1, RD(6) < RD(3));
wr32(c, (RW(29) + 952), RW(0));
{ int t = RD(1) == RD(0); wr32(c, (RW(29) + 956), RW(5)); if (t) goto L_00306D50; }
SET64(1, RD(6) < RD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_00306D50; }
wr32(c, (RW(6) + 0), RW(0));
L_00306D34:;
wr32(c, (RW(6) + 4), RW(0));
wr32(c, (RW(6) + 8), RW(0));
wr32(c, (RW(6) + 12), RW(5));
SET32(6, RW(6) + 16);
SET64(2, RD(6) < RD(3));
if (RD(2) != RD(0)) { wr32(c, (RW(6) + 0), RW(0)); { POLL(); goto L_00306D34; } }
L_00306D50:;
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x40000000);
wr32(c, (RW(29) + 908), RW(3));
c->f[20].u = RW(3);
wr32(c, (RW(29) + 940), RW(3));
c->f[13].u = RW(2);
wr32(c, (RW(29) + 860), RW(3));
rd128(c, (RW(29) + 1136) & ~15u, &c->r[3]);
SET32(5, RW(29) + 864);
rd128(c, (RW(29) + 992) & ~15u, &c->r[2]);
SET32(6, RW(0) + 1);
SET32(7, RW(29) + 944);
SET32(8, RW(29) + 848);
c->f[12].u = c->f[20].u;
wr128(c, (RW(29) + 944) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 960) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 896), RW(0));
wr32(c, (RW(29) + 900), RW(0));
wr32(c, (RW(29) + 904), RW(0));
wr32(c, (RW(29) + 928), RW(0));
wr32(c, (RW(29) + 932), RW(0));
wr32(c, (RW(29) + 936), RW(0));
wr32(c, (RW(29) + 848), RW(0));
wr32(c, (RW(29) + 852), RW(0));
SET64(31, 0x306db8); wr32(c, (RW(29) + 856), RW(0)); JP_F_0023FB50(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00306DD0; }
rd128(c, (RW(29) + 848) & ~15u, &c->r[4]);
SET32(3, RW(0) + 1);
wr128(c, (RW(29) + 992) & ~15u, &c->r[4]);
wr8(c, (RW(18) + 148), (u8)RW(3));
L_00306DD0:;
rd128(c, (RW(29) + 992) & ~15u, &c->r[4]);
L_00306DD4:;
SET64(3, (s64)(s32)0x3dcc0000);
SET64(3, RD(3) | 0xcccd);
c->f[0].u = RW(3);
wr128(c, (RW(18) + 16) & ~15u, &c->r[4]);
c->f[0].f = fpu(F(0) * F(27));
c->f[2].u = rd32(c, (RW(29) + 1164));
c->f[1].f = fpu(F(2) - F(21));
c->f[1].u = c->f[1].u & 0x7FFFFFFFu;
c->fcc = F(1) < F(0);
{ int t = !c->fcc;  if (t) goto L_00306E08; }
L_00306E00:;
 goto L_00306E18;
L_00306E08:;
c->fcc = F(21) < F(2);
if (!c->fcc) { c->f[2].f = fpu(F(21) - F(2)); goto L_00306E18; }
c->f[2].f = fpu(F(21) + F(2));
L_00306E18:;
SET64(3, (s64)(s32)0x4c0000);
c->f[21].u = rd32(c, (RW(3) + -8280));
wr32(c, (RW(18) + 48), c->f[2].u);
rd128(c, (RW(29) + 1120) & ~15u, &c->r[4]);
c->f[1].u = RW(0);
SET64(3, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(3) + -8280));
c->fcc = F(0) <= F(1);
{ int t = c->fcc; wr128(c, (RW(29) + 832) & ~15u, &c->r[4]); if (t) goto L_00306EA4; }
c->fcc = F(21) < F(20);
if (!c->fcc) { SET32(4, RW(29) + 832); goto L_00306E9C; }
SET32(4, RW(29) + 160);
SET32(5, RW(29) + 1088);
SET64(31, 0x306e5c); SET32(6, RW(29) + 832); JP_F_001A08D0(c);
c->f[12].u = c->f[21].u;
SET32(4, RW(29) + 128);
SET64(31, 0x306e6c); SET32(5, RW(29) + 160); JP_F_002AFF20(c);
SET32(4, RW(29) + 144);
SET64(31, 0x306e78); SET32(5, RW(29) + 128); JP_F_00240250(c);
SET32(4, RW(29) + 112);
SET32(5, RW(29) + 832);
SET64(31, 0x306e88); SET32(6, RW(29) + 144); JP_F_00240210(c);
SET32(4, RW(29) + 832);
SET64(31, 0x306e94); SET32(5, RW(29) + 112); JP_F_00149670(c);
rd128(c, (RW(29) + 832) & ~15u, &c->r[3]); goto L_00306EA8;
L_00306E9C:;
SET64(31, 0x306ea4); SET32(5, RW(29) + 1088); JP_F_00149670(c);
L_00306EA4:;
rd128(c, (RW(29) + 832) & ~15u, &c->r[3]);
L_00306EA8:;
c->f[1].u = RW(0);
wr128(c, (RW(18) + 32) & ~15u, &c->r[3]);
c->f[0].u = rd32(c, (RW(18) + 144));
c->fcc = F(1) == F(0);
if (!c->fcc) { c->f[0].f = fpu(F(0) - F(27)); goto L_00306EDC; }
SET64(31, 0x306ec8); SET64(4, RD(18) + RD(0)); JP_F_00307010(c);
if (RD(2) == RD(0)) { wr32(c, (RW(19) + 0), RW(0)); goto L_00306EF0; }
SET64(3, (s64)(s32)0x41200000);
wr32(c, (RW(18) + 144), RW(3)); goto L_00306EEC;
L_00306EDC:;
c->fcc = F(0) < F(1);
{ int t = !c->fcc; wr32(c, (RW(18) + 144), c->f[0].u); if (t) goto L_00306EEC; }
wr32(c, (RW(18) + 144), c->f[1].u);
L_00306EEC:;
wr32(c, (RW(19) + 0), RW(0));
L_00306EF0:;
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(19) + 4), RW(0));
wr32(c, (RW(19) + 8), RW(0));
wr32(c, (RW(19) + 12), RW(4));
rd128(c, (RW(18) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(19) + 0) & ~15u, &c->r[3]);
wr32(c, (RW(19) + 16), RW(0));
wr32(c, (RW(19) + 20), RW(0));
wr32(c, (RW(19) + 24), RW(0));
wr32(c, (RW(19) + 28), RW(4));
rd128(c, (RW(18) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(19) + 16) & ~15u, &c->r[3]);
c->f[0].u = rd32(c, (RW(18) + 48));
wr32(c, (RW(19) + 32), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 96)));
c->f[27].u = rd32(c, (RW(29) + 28));
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
SET32(29, RW(29) + 1168); return;
}
void JP_F_00306770(Ctx *c) { JP_B_00306770(c, 0x306770); }
void JP_F_00306E00(Ctx *c) { JP_B_00306770(c, 0x306e00); }

void JP_F_00306F70(Ctx *c) { /* func_00306F70 */
ENTER(0x306f70);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(16, RD(4) + RD(0));
SET64(5, rd16(c, (RW(2) + 1024)));
SET64(31, 0x306f90); SET32(4, RW(2) + 128); JP_F_001520B0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 48), RW(0));
wr32(c, (RW(29) + 60), RW(2));
wr32(c, (RW(29) + 52), RW(0));
wr32(c, (RW(29) + 56), RW(0));
rd128(c, (RW(16) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(5, rd16(c, (RW(2) + 1024)));
SET64(31, 0x306fbc); SET32(4, RW(2) + 128); JP_F_001520B0(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 44), RW(3));
SET32(4, RW(29) + 48);
wr32(c, (RW(29) + 36), RW(0));
SET64(3, (s64)(s32)0x40000000);
wr32(c, (RW(29) + 40), RW(0));
c->f[12].u = RW(3);
rd128(c, (RW(2) + 112) & ~15u, &c->r[2]);
SET32(5, RW(29) + 32);
SET64(31, 0x306fec); wr128(c, (RW(29) + 32) & ~15u, &c->r[2]); JP_F_00148510(c);
rd128(c, (RW(29) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00307010(Ctx *c) { /* func_00307010 */
ENTER(0x307010);
SET32(29, RW(29) + -256);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 80)));
SET64(5, rd16(c, (RW(2) + 1024)));
SET64(31, 0x307034); SET32(4, RW(2) + 128); JP_F_001520B0(c);
rd128(c, (RW(2) + 112) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(17) + 112)));
wr128(c, (RW(29) + 240) & ~15u, &c->r[3]);
SET64(5, rd16(c, (RW(2) + 1024)));
SET64(31, 0x30704c); SET32(4, RW(2) + 128); JP_F_001520B0(c);
rd128(c, (RW(2) + 112) & ~15u, &c->r[3]);
SET32(4, RW(29) + 160);
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
SET64(16, (s32)rd32(c, (RW(2) + 668)));
SET64(31, 0x307064); wr128(c, (RW(29) + 224) & ~15u, &c->r[3]); JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[4]);
SET64(7, (s64)(s32)0x3f800000);
rd128(c, (RW(29) + 240) & ~15u, &c->r[3]);
c->f[1].u = rd32(c, (RW(28) + -30928));
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(28) + -30924));
wr128(c, (RW(29) + 160) & ~15u, &c->r[4]);
SET32(6, RW(29) + 160);
rd128(c, (RW(16) + 16) & ~15u, &c->r[8]);
SET32(4, RW(29) + 80);
SET32(5, RW(29) + 144);
wr128(c, (RW(29) + 176) & ~15u, &c->r[8]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[8]);
wr128(c, (RW(29) + 192) & ~15u, &c->r[8]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[8]);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 156), RW(7));
wr128(c, (RW(29) + 144) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 140), RW(7));
wr32(c, (RW(29) + 148), c->f[1].u);
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 136), RW(0));
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 208) & ~15u, &c->r[8]);
SET64(31, 0x3070d0); wr32(c, (RW(29) + 132), c->f[0].u); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
SET32(4, RW(29) + 64);
SET32(5, RW(29) + 128);
SET32(6, RW(29) + 160);
SET64(31, 0x3070e8); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(2));
c->f[1].u = rd32(c, (RW(29) + 112));
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 96));
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(5, (s32)rd32(c, (RW(17) + 112))); goto L_00307140; }
SET64(5, (s32)rd32(c, (RW(17) + 80)));
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(3) + RD(0));
SET32(4, RW(0) + 1);
SET32(3, RW(5) + RW(3));
wr32(c, (RW(3) + -30808), RW(0));
SET64(3, (s32)rd32(c, (RW(17) + 112)));
SET32(2, RW(3) + RW(2));
wr32(c, (RW(2) + -30808), RW(4)); goto L_00307160;
L_00307140:;
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(3) + RD(0));
SET32(4, RW(0) + 1);
SET32(3, RW(5) + RW(3));
wr32(c, (RW(3) + -30808), RW(0));
SET64(3, (s32)rd32(c, (RW(17) + 80)));
SET32(2, RW(3) + RW(2));
wr32(c, (RW(2) + -30808), RW(4));
L_00307160:;
SET64(31, 0x307168); SET64(4, (s32)rd32(c, (RW(28) + -29872))); JP_F_002FD030(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00307238; }
SET64(31, 0x30717c); SET64(4, (s32)rd32(c, (RW(17) + 80))); JP_F_002EE610(c);
SET32(3, RW(0) + 7);
if (RD(2) == RD(3)) { SET64(2, RD(0) + (s64)1); goto L_003071C4; }
SET32(3, RW(0) + 6);
{ int t = RD(2) == RD(3);  if (t) goto L_003071C0; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_003071C0; }
SET32(3, RW(0) + 3);
{ int t = RD(2) == RD(3);  if (t) goto L_003071C0; }
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3);  if (t) goto L_003071C0; }
SET64(2, RD(0) + RD(0)); goto L_003071C4;
L_003071C0:;
SET64(2, RD(0) + (s64)1);
L_003071C4:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 112))); goto L_003071D4; }
SET64(2, RD(0) + (s64)1); goto L_00307238;
L_003071D4:;
SET64(31, 0x3071dc);  JP_F_002EE610(c);
SET32(3, RW(0) + 7);
if (RD(2) == RD(3)) { SET64(2, RD(0) + (s64)1); goto L_00307224; }
SET32(3, RW(0) + 6);
{ int t = RD(2) == RD(3);  if (t) goto L_00307220; }
SET32(3, RW(0) + 5);
{ int t = RD(2) == RD(3);  if (t) goto L_00307220; }
SET32(3, RW(0) + 3);
{ int t = RD(2) == RD(3);  if (t) goto L_00307220; }
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3);  if (t) goto L_00307220; }
SET64(2, RD(0) + RD(0)); goto L_00307224;
L_00307220:;
SET64(2, RD(0) + (s64)1);
L_00307224:;
{ int t = RD(2) == RD(0);  if (t) goto L_00307234; }
SET64(2, RD(0) + (s64)1); goto L_00307238;
L_00307234:;
SET64(2, RD(0) + RD(0));
L_00307238:;
if (RD(2) != RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 80))); goto L_0030729C; }
c->f[1].u = rd32(c, (RW(29) + 248));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(29) + 232));
wr32(c, (RW(29) + 60), RW(2));
c->f[3].u = rd32(c, (RW(29) + 244));
SET32(4, RW(29) + 48);
c->f[2].u = rd32(c, (RW(29) + 228));
c->f[4].f = fpu(F(1) - F(0));
c->f[1].u = rd32(c, (RW(29) + 240));
c->f[0].u = rd32(c, (RW(29) + 224));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 56), c->f[4].u);
wr32(c, (RW(29) + 52), c->f[2].u);
SET64(31, 0x307280); wr32(c, (RW(29) + 48), c->f[0].u); JP_F_002B0290(c);
SET64(2, (s64)(s32)0x41a00000);
c->f[1].u = RW(2);
c->fcc = F(0) <= F(1);
if (c->fcc) { SET64(2, RD(0) + RD(0)); goto L_00307318; }
SET64(5, (s32)rd32(c, (RW(17) + 80)));
L_0030729C:;
SET64(2, (s64)(s32)0x10000);
c->f[1].u = rd32(c, (RW(29) + 112));
c->f[0].u = rd32(c, (RW(29) + 96));
SET32(2, RW(5) + RW(2));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; SET64(6, (s32)rd32(c, (RW(2) + -30812))); if (t) goto L_003072DC; }
SET64(3, (s64)(s32)0x10000);
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(5) + RW(3));
SET32(4, RW(0) + 1);
wr32(c, (RW(3) + -30812), RW(0));
SET64(3, (s32)rd32(c, (RW(17) + 112)));
SET32(2, RW(3) + RW(2));
wr32(c, (RW(2) + -30812), RW(4)); goto L_00307300;
L_003072DC:;
SET64(5, (s32)rd32(c, (RW(17) + 112)));
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(3) + RD(0));
SET32(4, RW(0) + 1);
SET32(3, RW(5) + RW(3));
wr32(c, (RW(3) + -30812), RW(0));
SET64(3, (s32)rd32(c, (RW(17) + 80)));
SET32(2, RW(3) + RW(2));
wr32(c, (RW(2) + -30812), RW(4));
L_00307300:;
SET64(3, (s32)rd32(c, (RW(17) + 80)));
SET64(2, (s64)(s32)0x10000);
SET32(2, RW(3) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30812)));
SET64(2, RD(6) ^ RD(2));
SET64(2, RD(0) < RD(2));
L_00307318:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 256); return;
}

static void JP_B_00307330(Ctx *c, u32 entry) { /* func_00307330 */
ENTER(entry);
switch (entry) { case 0x307400: goto L_00307400; case 0x307a00: goto L_00307A00; case 0x307e28: goto L_00307E28; }
SET32(29, RW(29) + -1408);
SET64(3, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 112), RD(31));
SET64(2, (s64)(s32)0x3f000000);
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
c->f[12].u = RW(2);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(7) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(8) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 1196), RW(3));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 256), RW(0));
wr32(c, (RW(29) + 0), c->f[20].u);
wr32(c, (RW(29) + 264), RW(0));
wr32(c, (RW(29) + 1392), RW(0));
c->f[0].u = rd32(c, (RW(28) + -30912));
wr32(c, (RW(29) + 1396), RW(0));
SET64(16, RD(9) + RD(0));
wr32(c, (RW(29) + 1400), RW(0));
SET32(4, RW(29) + 1216);
wr32(c, (RW(29) + 1404), RW(3));
SET32(5, RW(29) + 1200);
rd128(c, (RW(20) + 96) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 268), RW(3));
wr128(c, (RW(29) + 1392) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 1376), RW(0));
c->f[1].u = rd32(c, (RW(29) + 1392));
wr32(c, (RW(29) + 1380), RW(0));
c->f[3].u = rd32(c, (RW(29) + 1396));
wr32(c, (RW(29) + 1384), RW(0));
wr32(c, (RW(29) + 1388), RW(3));
rd128(c, (RW(20) + 128) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 1376) & ~15u, &c->r[2]);
c->f[5].u = rd32(c, (RW(29) + 1376));
wr32(c, (RW(29) + 1212), RW(3));
c->f[4].u = rd32(c, (RW(29) + 1380));
wr32(c, (RW(29) + 1200), RW(0));
c->f[2].u = rd32(c, (RW(29) + 1384));
wr32(c, (RW(29) + 1204), RW(0));
c->f[5].f = fpu(F(5) - F(1));
wr32(c, (RW(29) + 1208), RW(0));
wr32(c, (RW(29) + 1372), RW(3));
wr32(c, (RW(29) + 1360), RW(0));
wr32(c, (RW(29) + 1364), RW(0));
L_00307400:;
c->f[1].u = rd32(c, (RW(29) + 1400));
wr32(c, (RW(29) + 1368), RW(0));
c->f[3].f = fpu(F(4) - F(3));
c->f[1].f = fpu(F(2) - F(1));
wr32(c, (RW(29) + 1184), c->f[5].u);
wr32(c, (RW(29) + 1188), c->f[3].u);
wr32(c, (RW(29) + 1192), c->f[1].u);
rd128(c, (RW(29) + 1184) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 256) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 260), c->f[0].u);
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
SET64(31, 0x307434); wr128(c, (RW(29) + 1200) & ~15u, &c->r[2]); JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 1232), RW(0));
wr32(c, (RW(29) + 1244), RW(2));
c->f[8].u = rd32(c, (RW(29) + 1392));
wr32(c, (RW(29) + 1260), RW(2));
c->f[2].u = rd32(c, (RW(29) + 1376));
wr32(c, (RW(29) + 1340), RW(2));
c->f[6].u = rd32(c, (RW(29) + 1396));
c->f[1].u = rd32(c, (RW(29) + 1380));
rd128(c, (RW(29) + 1216) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 1236), RW(0));
c->f[2].f = fpu(F(2) - F(8));
wr32(c, (RW(29) + 1240), RW(0));
SET32(4, RW(29) + 1328);
wr128(c, (RW(29) + 1232) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 1232));
c->f[1].f = fpu(F(1) - F(6));
c->f[7].f = fpu(F(8) + F(0));
c->f[5].u = rd32(c, (RW(29) + 1236));
wr32(c, (RW(29) + 1328), c->f[2].u);
c->f[4].u = rd32(c, (RW(29) + 1400));
c->f[2].f = fpu(F(6) + F(5));
c->f[0].u = rd32(c, (RW(29) + 1384));
c->f[3].u = rd32(c, (RW(29) + 1240));
wr32(c, (RW(29) + 1332), c->f[1].u);
c->f[0].f = fpu(F(0) - F(4));
c->f[1].f = fpu(F(4) + F(3));
wr32(c, (RW(29) + 1248), c->f[7].u);
wr32(c, (RW(29) + 1252), c->f[2].u);
wr32(c, (RW(29) + 1256), c->f[1].u);
rd128(c, (RW(29) + 1248) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 1336), c->f[0].u);
SET64(31, 0x3074bc); wr128(c, (RW(29) + 1344) & ~15u, &c->r[2]); JP_F_002B0290(c);
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
c->f[2].u = rd32(c, (RW(2) + -8312));
SET64(2, (s64)(s32)0x4c0000);
c->f[1].u = rd32(c, (RW(2) + -8312));
c->fcc = F(0) < F(1);
{ int t = !c->fcc; c->f[3].u = rd32(c, (RW(3) + -8336)); if (t) goto L_003074E4; }
c->f[1].u = c->f[2].u; goto L_003074F8;
L_003074E4:;
c->fcc = F(0) <= F(3);
if (c->fcc) { c->f[1].u = c->f[0].u; goto L_003074F8; }
c->f[1].u = c->f[3].u; goto L_003074F8;
L_003074F8:;
c->fcc = F(0) < F(2);
{ int t = !c->fcc; c->f[20].u = c->f[0].u; if (t) goto L_00307508; }
c->f[20].u = c->f[2].u;
L_00307508:;
c->f[0].f = fpu(F(3) - F(2));
SET64(5, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0x4c0000);
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 1132), RW(5));
SET32(4, RW(29) + 368);
wr32(c, (RW(29) + 384), RW(0));
c->f[1].f = fpu(F(1) - F(2));
wr32(c, (RW(29) + 392), RW(0));
wr32(c, (RW(29) + 396), RW(5));
wr32(c, (RW(29) + 368), RW(0));
wr32(c, (RW(29) + 372), RW(0));
c->f[6].f = fpu_div(F(1), F(0));
wr32(c, (RW(29) + 380), RW(5));
wr32(c, (RW(29) + 376), RW(0));
c->f[3].u = rd32(c, (RW(29) + 1380));
c->f[2].u = rd32(c, (RW(29) + 1396));
c->f[1].u = rd32(c, (RW(29) + 1384));
c->f[0].u = rd32(c, (RW(29) + 1400));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 1124), c->f[2].u);
wr32(c, (RW(29) + 1128), c->f[0].u);
c->f[2].u = rd32(c, (RW(3) + -8328));
c->f[0].u = RW(0);
c->f[1].u = rd32(c, (RW(2) + -8320));
c->facc = fpu(F(0) + F(2));
c->f[5].u = rd32(c, (RW(29) + 1376));
c->f[0].f = fpu(F(1) - F(2));
c->f[4].u = rd32(c, (RW(29) + 1392));
c->f[0].f = fpu(c->facc + F(6) * F(0));
c->f[20].f = fpu(F(20) * F(0));
c->f[4].f = fpu(F(5) - F(4));
wr32(c, (RW(29) + 1120), c->f[4].u);
rd128(c, (RW(29) + 1120) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(28) + -30912));
wr128(c, (RW(29) + 384) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 388), c->f[0].u);
rd128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET64(31, 0x3075ac); wr128(c, (RW(29) + 368) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 1152), RW(0));
wr32(c, (RW(29) + 1164), RW(2));
c->f[12].u = c->f[20].u;
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
SET32(4, RW(29) + 1168);
wr32(c, (RW(29) + 1156), RW(0));
SET32(5, RW(29) + 1152);
wr32(c, (RW(29) + 1160), RW(0));
SET64(31, 0x3075d8); wr128(c, (RW(29) + 1152) & ~15u, &c->r[2]); JP_F_002AFF20(c);
rd128(c, (RW(29) + 1168) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 1324), RW(2));
wr32(c, (RW(29) + 1312), RW(0));
SET64(2, (s64)(s32)0x10000);
wr32(c, (RW(29) + 1316), RW(0));
wr32(c, (RW(29) + 1320), RW(0));
wr128(c, (RW(29) + 1312) & ~15u, &c->r[3]);
SET64(3, (s32)rd32(c, (RW(20) + 80)));
SET32(2, RW(3) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30812)));
if (RD(2) != RD(0)) { SET32(4, RW(29) + 128); goto L_003076B8; }
SET64(4, (s32)rd32(c, (RW(20) + 112)));
SET64(2, (s64)(s32)0x10000);
SET32(3, RW(0) + 1);
SET32(2, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + -30812)));
{ int t = RD(2) != RD(3);  if (t) goto L_003076B4; }
SET64(31, 0x307630); SET32(4, RW(29) + 192); JP_F_0013AEA0(c);
SET32(4, RW(29) + 192);
SET64(31, 0x30763c); SET32(5, RW(28) + -30936); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x307648); SET32(4, RW(29) + 1008); JP_F_0013ADA0(c);
SET32(4, RW(29) + 1072);
SET32(5, RW(29) + 1312);
SET64(31, 0x307658); SET32(6, RW(29) + 1008); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 1088), RW(0));
wr32(c, (RW(29) + 1100), RW(2));
c->f[4].u = rd32(c, (RW(29) + 1344));
wr32(c, (RW(29) + 1116), RW(2));
c->f[3].u = rd32(c, (RW(29) + 1348));
rd128(c, (RW(29) + 1072) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(29) + 1352));
wr32(c, (RW(29) + 1092), RW(0));
wr32(c, (RW(29) + 1096), RW(0));
wr128(c, (RW(29) + 1088) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 1088));
c->f[2].u = rd32(c, (RW(29) + 1092));
c->f[4].f = fpu(F(4) + F(0));
c->f[0].u = rd32(c, (RW(29) + 1096));
c->f[2].f = fpu(F(3) + F(2));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 1104), c->f[4].u);
wr32(c, (RW(29) + 1108), c->f[2].u);
wr32(c, (RW(29) + 1112), c->f[0].u);
rd128(c, (RW(29) + 1104) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 1360) & ~15u, &c->r[2]); goto L_00307740;
L_003076B4:;
SET32(4, RW(29) + 128);
L_003076B8:;
SET64(31, 0x3076c0);  JP_F_0013AEA0(c);
SET32(4, RW(29) + 128);
SET64(31, 0x3076cc); SET32(5, RW(28) + -30932); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x3076d8); SET32(4, RW(29) + 896); JP_F_0013ADA0(c);
SET32(4, RW(29) + 960);
SET32(5, RW(29) + 1312);
SET64(31, 0x3076e8); SET32(6, RW(29) + 896); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 976), RW(0));
wr32(c, (RW(29) + 988), RW(2));
c->f[4].u = rd32(c, (RW(29) + 1344));
wr32(c, (RW(29) + 1004), RW(2));
c->f[3].u = rd32(c, (RW(29) + 1348));
rd128(c, (RW(29) + 960) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(29) + 1352));
wr32(c, (RW(29) + 980), RW(0));
wr32(c, (RW(29) + 984), RW(0));
wr128(c, (RW(29) + 976) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 976));
c->f[2].u = rd32(c, (RW(29) + 980));
c->f[4].f = fpu(F(4) + F(0));
c->f[0].u = rd32(c, (RW(29) + 984));
c->f[2].f = fpu(F(3) + F(2));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 992), c->f[4].u);
wr32(c, (RW(29) + 996), c->f[2].u);
wr32(c, (RW(29) + 1000), c->f[0].u);
rd128(c, (RW(29) + 992) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 1360) & ~15u, &c->r[2]);
L_00307740:;
c->f[0].u = rd32(c, (RW(29) + 1348));
SET64(2, (s32)rd32(c, (RW(28) + -29872)));
{ int t = RD(2) == RD(0); wr32(c, (RW(29) + 1364), c->f[0].u); if (t) goto L_003078E8; }
SET64(2, (s32)rd32(c, (RW(2) + 680)));
{ int t = RD(2) == RD(0);  if (t) goto L_003078E8; }
SET64(5, rd16(c, (RW(2) + 464)));
SET64(4, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0xc1000000);
SET32(4, RW(4) + -20912);
c->f[3].u = RW(3);
SET64(2, (s64)(s32)0xc1100000);
c->f[2].u = RW(2);
SET32(2, RW(5) << 1);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(4) + RW(2));
SET64(2, (s16)rd16(c, (RW(2) + 6)));
c->f[0].u = rd32(c, (RW(29) + 1380));
c->f[1].u = rd32(c, (RW(29) + 1396));
c->f[4].u = RW(2);
c->f[4].f = (f32)(s32)c->f[4].u;
c->f[3].f = fpu(F(3) + F(4));
c->f[2].f = fpu(F(2) + F(4));
c->fcc = F(1) < F(0);
wr32(c, (RW(29) + 1364), c->f[3].u);
{ int t = !c->fcc; wr32(c, (RW(29) + 1348), c->f[2].u); if (t) goto L_003077C0; }
c->f[8].u = rd32(c, (RW(29) + 1348)); goto L_003077C8;
L_003077C0:;
c->f[1].u = c->f[0].u;
c->f[8].u = rd32(c, (RW(29) + 1348));
L_003077C8:;
SET64(2, (s64)(s32)0x4c0000);
c->f[3].u = rd32(c, (RW(29) + 1364));
wr32(c, (RW(29) + 352), RW(0));
c->f[6].u = rd32(c, (RW(2) + -8224));
wr32(c, (RW(29) + 360), RW(0));
c->f[7].f = fpu(F(1) - F(8));
wr32(c, (RW(29) + 336), RW(0));
wr32(c, (RW(29) + 340), RW(0));
SET32(4, RW(29) + 336);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 344), RW(0));
wr32(c, (RW(29) + 828), RW(2));
c->f[5].u = rd32(c, (RW(29) + 1360));
wr32(c, (RW(29) + 364), RW(2));
c->f[4].u = rd32(c, (RW(29) + 1344));
wr32(c, (RW(29) + 348), RW(2));
c->f[2].u = rd32(c, (RW(29) + 1368));
c->f[1].u = rd32(c, (RW(29) + 1352));
c->f[4].f = fpu(F(5) - F(4));
c->f[3].f = fpu(F(3) - F(8));
c->f[1].f = fpu(F(2) - F(1));
wr32(c, (RW(29) + 824), c->f[1].u);
c->f[1].u = c->f[7].u & 0x7FFFFFFFu;
wr32(c, (RW(29) + 816), c->f[4].u);
wr32(c, (RW(29) + 820), c->f[3].u);
rd128(c, (RW(29) + 816) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(28) + -30912));
c->f[20].f = fpu(F(6) * F(1));
wr128(c, (RW(29) + 352) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 356), c->f[0].u);
rd128(c, (RW(29) + 352) & ~15u, &c->r[2]);
SET64(31, 0x30784c); wr128(c, (RW(29) + 336) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 848), RW(0));
wr32(c, (RW(29) + 860), RW(2));
SET32(4, RW(29) + 864);
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
SET32(5, RW(29) + 848);
wr32(c, (RW(29) + 852), RW(0));
c->f[12].u = c->f[20].u;
wr32(c, (RW(29) + 856), RW(0));
SET64(31, 0x307878); wr128(c, (RW(29) + 848) & ~15u, &c->r[2]); JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 880), RW(0));
wr32(c, (RW(29) + 892), RW(2));
c->f[1].u = c->f[20].u ^ 0x80000000u;
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 884), RW(0));
c->f[0].u = rd32(c, (RW(2) + -8216));
wr32(c, (RW(29) + 888), RW(0));
c->f[6].u = rd32(c, (RW(29) + 1360));
c->f[3].u = rd32(c, (RW(29) + 1368));
c->f[2].f = fpu(F(1) * F(0));
rd128(c, (RW(29) + 864) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 880) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 880));
c->f[1].u = rd32(c, (RW(29) + 888));
c->f[5].u = rd32(c, (RW(29) + 1364));
c->f[6].f = fpu(F(6) + F(0));
c->f[1].f = fpu(F(3) + F(1));
c->f[4].u = rd32(c, (RW(29) + 884));
c->f[0].u = rd32(c, (RW(29) + 1348));
wr32(c, (RW(29) + 1368), c->f[1].u);
c->f[4].f = fpu(F(5) + F(4));
c->f[1].f = fpu(F(0) + F(2));
c->f[0].f = fpu(F(4) + F(2));
wr32(c, (RW(29) + 1364), c->f[4].u);
wr32(c, (RW(29) + 1360), c->f[6].u);
wr32(c, (RW(29) + 1348), c->f[1].u);
wr32(c, (RW(29) + 1364), c->f[0].u);
L_003078E8:;
if (RD(17) == RD(0)) { SET32(17, RW(29) + 1360); goto L_003078F0; }
L_003078F0:;
rd128(c, (RW(17) + 0) & ~15u, &c->r[2]);
{ int t = RD(16) == RD(0); wr128(c, (RW(29) + 1296) & ~15u, &c->r[2]); if (t) goto L_00307904; }
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]); goto L_0030790C;
L_00307904:;
SET32(16, RW(29) + 1344);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
L_0030790C:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 492), RW(2));
c->f[0].u = rd32(c, (RW(28) + -30912));
wr32(c, (RW(29) + 480), RW(0));
SET32(4, RW(29) + 464);
wr32(c, (RW(29) + 476), RW(2));
rd128(c, (RW(29) + 1328) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 488), RW(0));
wr32(c, (RW(29) + 464), RW(0));
wr128(c, (RW(29) + 480) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 484), c->f[0].u);
wr32(c, (RW(29) + 468), RW(0));
rd128(c, (RW(29) + 480) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 472), RW(0));
wr128(c, (RW(29) + 1280) & ~15u, &c->r[3]);
SET64(31, 0x307950); wr128(c, (RW(29) + 464) & ~15u, &c->r[2]); JP_F_002B0360(c);
c->f[2].u = rd32(c, (RW(29) + 1280));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(29) + 1296));
wr32(c, (RW(29) + 764), RW(2));
c->f[4].u = rd32(c, (RW(29) + 1284));
wr32(c, (RW(29) + 780), RW(2));
c->f[3].u = rd32(c, (RW(29) + 1300));
wr32(c, (RW(29) + 524), RW(2));
c->f[5].f = fpu(F(2) - F(1));
wr32(c, (RW(29) + 508), RW(2));
rd128(c, (RW(29) + 464) & ~15u, &c->r[2]);
SET32(4, RW(29) + 496);
wr32(c, (RW(29) + 752), RW(0));
wr32(c, (RW(29) + 756), RW(0));
c->f[2].u = rd32(c, (RW(29) + 1288));
wr32(c, (RW(29) + 760), RW(0));
c->f[1].u = rd32(c, (RW(29) + 1304));
wr128(c, (RW(29) + 752) & ~15u, &c->r[2]);
c->f[3].f = fpu(F(4) - F(3));
wr32(c, (RW(29) + 512), RW(0));
wr32(c, (RW(29) + 520), RW(0));
wr32(c, (RW(29) + 496), RW(0));
wr32(c, (RW(29) + 500), RW(0));
c->f[1].f = fpu(F(2) - F(1));
wr32(c, (RW(29) + 504), RW(0));
wr32(c, (RW(29) + 768), c->f[5].u);
wr32(c, (RW(29) + 772), c->f[3].u);
wr32(c, (RW(29) + 776), c->f[1].u);
rd128(c, (RW(29) + 768) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(28) + -30912));
wr128(c, (RW(29) + 512) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 516), c->f[0].u);
rd128(c, (RW(29) + 512) & ~15u, &c->r[2]);
SET64(31, 0x3079dc); wr128(c, (RW(29) + 496) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 800), RW(0));
wr32(c, (RW(29) + 812), RW(2));
SET32(4, RW(29) + 800);
rd128(c, (RW(29) + 496) & ~15u, &c->r[2]);
SET32(5, RW(29) + 752);
wr32(c, (RW(29) + 804), RW(0));
wr32(c, (RW(29) + 808), RW(0));
SET64(31, 0x307a04); wr128(c, (RW(29) + 800) & ~15u, &c->r[2]); JP_F_002B0230(c);
if (0) { L_00307A00:; wr128(c, (RW(29) + 800) & ~15u, &c->r[2]); }
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 448), RW(0));
wr32(c, (RW(29) + 460), RW(2));
c->f[21].u = c->f[0].u;
wr32(c, (RW(29) + 732), RW(2));
c->f[0].u = rd32(c, (RW(28) + -30912));
rd128(c, (RW(29) + 1328) & ~15u, &c->r[2]);
SET32(4, RW(29) + 720);
wr32(c, (RW(29) + 456), RW(0));
wr32(c, (RW(29) + 720), RW(0));
wr128(c, (RW(29) + 448) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 452), c->f[0].u);
wr32(c, (RW(29) + 724), RW(0));
rd128(c, (RW(29) + 448) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 728), RW(0));
SET64(31, 0x307a48); wr128(c, (RW(29) + 720) & ~15u, &c->r[2]); JP_F_002B0290(c);
SET64(2, (s64)(s32)0x4c0000);
c->f[2].u = rd32(c, (RW(2) + -8296));
c->f[1].u = RW(0);
c->f[4].f = fpu(F(0) - F(2));
c->fcc = F(4) <= F(1);
if (c->fcc) { SET64(2, (s64)(s32)0x3f800000); goto L_00307A98; }
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x3f800000);
c->f[3].u = rd32(c, (RW(2) + -8288));
c->f[1].u = RW(3);
c->f[2].u = c->f[21].u & 0x7FFFFFFFu;
c->f[3].f = fpu(F(4) * F(3));
c->f[1].f = fpu(F(1) - F(2));
c->f[1].f = fpu(F(3) * F(1));
c->f[0].u = rd32(c, (RW(29) + 1364));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 1364), c->f[0].u);
SET64(2, (s64)(s32)0x3f800000);
L_00307A98:;
wr32(c, (RW(29) + 432), RW(0));
wr32(c, (RW(29) + 444), RW(2));
c->f[0].u = rd32(c, (RW(28) + -30912));
wr32(c, (RW(29) + 716), RW(2));
SET32(4, RW(29) + 704);
rd128(c, (RW(29) + 1328) & ~15u, &c->r[2]);
c->f[22].u = c->f[21].u & 0x7FFFFFFFu;
wr32(c, (RW(29) + 440), RW(0));
wr32(c, (RW(29) + 704), RW(0));
wr128(c, (RW(29) + 432) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 436), c->f[0].u);
wr32(c, (RW(29) + 708), RW(0));
rd128(c, (RW(29) + 432) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 712), RW(0));
SET64(31, 0x307ad8); wr128(c, (RW(29) + 704) & ~15u, &c->r[2]); JP_F_002B0290(c);
c->f[2].u = rd32(c, (RW(29) + 1360));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(29) + 1344));
wr32(c, (RW(29) + 636), RW(2));
c->f[20].u = c->f[0].u;
wr32(c, (RW(29) + 332), RW(2));
c->f[4].u = rd32(c, (RW(29) + 1364));
wr32(c, (RW(29) + 316), RW(2));
c->f[5].f = fpu(F(2) - F(1));
wr32(c, (RW(29) + 320), RW(0));
wr32(c, (RW(29) + 328), RW(0));
SET32(4, RW(29) + 304);
wr32(c, (RW(29) + 304), RW(0));
wr32(c, (RW(29) + 308), RW(0));
c->f[3].u = rd32(c, (RW(29) + 1348));
wr32(c, (RW(29) + 312), RW(0));
c->f[2].u = rd32(c, (RW(29) + 1368));
c->f[1].u = rd32(c, (RW(29) + 1352));
c->f[3].f = fpu(F(4) - F(3));
c->f[1].f = fpu(F(2) - F(1));
wr32(c, (RW(29) + 624), c->f[5].u);
wr32(c, (RW(29) + 628), c->f[3].u);
wr32(c, (RW(29) + 632), c->f[1].u);
rd128(c, (RW(29) + 624) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(28) + -30912));
wr128(c, (RW(29) + 320) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 324), c->f[0].u);
rd128(c, (RW(29) + 320) & ~15u, &c->r[2]);
SET64(31, 0x307b50); wr128(c, (RW(29) + 304) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 656), RW(0));
wr32(c, (RW(29) + 668), RW(2));
SET32(4, RW(29) + 672);
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 660), RW(0));
c->f[0].u = rd32(c, (RW(2) + -8176));
wr32(c, (RW(29) + 664), RW(0));
SET32(5, RW(29) + 656);
c->f[0].f = fpu(F(0) * F(20));
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 656) & ~15u, &c->r[2]);
SET64(31, 0x307b88); c->f[12].f = fpu(F(22) * F(0)); JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 688), RW(0));
wr32(c, (RW(29) + 700), RW(2));
c->f[5].u = rd32(c, (RW(29) + 1360));
wr32(c, (RW(29) + 428), RW(2));
c->f[0].u = rd32(c, (RW(28) + -30912));
wr32(c, (RW(29) + 620), RW(2));
c->f[4].u = rd32(c, (RW(29) + 1364));
rd128(c, (RW(29) + 672) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 1368));
wr32(c, (RW(29) + 692), RW(0));
SET32(4, RW(29) + 608);
wr32(c, (RW(29) + 696), RW(0));
c->f[20].u = c->f[22].u;
wr128(c, (RW(29) + 688) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(29) + 688));
rd128(c, (RW(29) + 1328) & ~15u, &c->r[2]);
c->f[3].u = rd32(c, (RW(29) + 692));
wr32(c, (RW(29) + 416), RW(0));
wr32(c, (RW(29) + 424), RW(0));
c->f[5].f = fpu(F(5) + F(1));
wr128(c, (RW(29) + 416) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 608), RW(0));
wr32(c, (RW(29) + 612), RW(0));
wr32(c, (RW(29) + 616), RW(0));
wr32(c, (RW(29) + 420), c->f[0].u);
c->f[1].u = rd32(c, (RW(29) + 696));
rd128(c, (RW(29) + 416) & ~15u, &c->r[2]);
c->f[3].f = fpu(F(4) + F(3));
wr128(c, (RW(29) + 608) & ~15u, &c->r[2]);
c->f[0].f = fpu(F(2) + F(1));
wr32(c, (RW(29) + 1360), c->f[5].u);
wr32(c, (RW(29) + 1364), c->f[3].u);
SET64(31, 0x307c14); wr32(c, (RW(29) + 1368), c->f[0].u); JP_F_002B0290(c);
SET64(2, (s64)(s32)0x4c0000);
c->f[1].u = rd32(c, (RW(2) + -8168));
c->f[6].u = rd32(c, (RW(29) + 1300));
c->f[5].u = rd32(c, (RW(29) + 1380));
c->f[9].f = fpu(F(1) * F(0));
c->f[1].u = rd32(c, (RW(29) + 1396));
c->f[8].u = rd32(c, (RW(29) + 1296));
c->f[2].u = rd32(c, (RW(29) + 1392));
c->f[1].f = fpu(F(6) - F(1));
c->f[7].u = rd32(c, (RW(29) + 1376));
c->f[4].u = rd32(c, (RW(29) + 1304));
c->f[0].u = rd32(c, (RW(29) + 1400));
c->f[2].f = fpu(F(8) - F(2));
c->facc = fpu(F(1) * F(1));
c->f[3].u = rd32(c, (RW(29) + 1384));
c->facc = fpu(c->facc + F(2) * F(2));
c->f[0].f = fpu(F(4) - F(0));
c->f[5].f = fpu(F(6) - F(5));
c->f[1].f = fpu(c->facc + F(0) * F(0));
c->f[7].f = fpu(F(8) - F(7));
c->facc = fpu(F(5) * F(5));
c->f[2].f = fpu(F(4) - F(3));
c->facc = fpu(c->facc + F(7) * F(7));
c->f[0].f = fpu(c->facc + F(2) * F(2));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; c->f[20].f = fpu(F(20) * F(9)); if (t) goto L_00307C88; }
SET32(2, RW(29) + 1392); goto L_00307C8C;
L_00307C88:;
SET32(2, RW(29) + 1376);
L_00307C8C:;
rd128(c, (RW(2) + 0) & ~15u, &c->r[2]);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 1264), RW(0));
c->f[1].u = rd32(c, (RW(29) + 1344));
wr32(c, (RW(29) + 1268), RW(0));
c->f[3].u = rd32(c, (RW(29) + 1348));
wr32(c, (RW(29) + 1272), RW(0));
c->f[0].u = rd32(c, (RW(28) + -30912));
wr32(c, (RW(29) + 1276), RW(3));
SET32(4, RW(29) + 272);
wr128(c, (RW(29) + 1264) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 1264));
wr32(c, (RW(29) + 540), RW(3));
c->f[4].u = rd32(c, (RW(29) + 1268));
wr32(c, (RW(29) + 288), RW(0));
wr32(c, (RW(29) + 296), RW(0));
c->f[5].f = fpu(F(2) - F(1));
wr32(c, (RW(29) + 300), RW(3));
wr32(c, (RW(29) + 284), RW(3));
wr32(c, (RW(29) + 272), RW(0));
wr32(c, (RW(29) + 276), RW(0));
c->f[2].u = rd32(c, (RW(29) + 1272));
wr32(c, (RW(29) + 280), RW(0));
c->f[1].u = rd32(c, (RW(29) + 1352));
c->f[3].f = fpu(F(4) - F(3));
c->f[1].f = fpu(F(2) - F(1));
wr32(c, (RW(29) + 528), c->f[5].u);
wr32(c, (RW(29) + 532), c->f[3].u);
wr32(c, (RW(29) + 536), c->f[1].u);
rd128(c, (RW(29) + 528) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 288) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 292), c->f[0].u);
rd128(c, (RW(29) + 288) & ~15u, &c->r[2]);
SET64(31, 0x307d18); wr128(c, (RW(29) + 272) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 560), RW(0));
wr32(c, (RW(29) + 572), RW(2));
c->f[12].u = c->f[20].u;
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
SET32(4, RW(29) + 576);
wr32(c, (RW(29) + 564), RW(0));
SET32(5, RW(29) + 560);
wr32(c, (RW(29) + 568), RW(0));
SET64(31, 0x307d44); wr128(c, (RW(29) + 560) & ~15u, &c->r[2]); JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x3f800000);
c->f[20].u = rd32(c, (RW(2) + -8208));
wr32(c, (RW(29) + 592), RW(0));
wr32(c, (RW(29) + 596), RW(0));
c->f[1].u = rd32(c, (RW(29) + 1344));
wr32(c, (RW(29) + 600), RW(0));
c->f[6].u = rd32(c, (RW(29) + 1348));
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 604), RW(3));
c->f[21].u = rd32(c, (RW(2) + -8200));
wr32(c, (RW(29) + 412), RW(3));
c->f[4].u = rd32(c, (RW(29) + 1352));
SET32(4, RW(29) + 400);
c->f[2].u = rd32(c, (RW(29) + 1360));
rd128(c, (RW(29) + 576) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 592) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 592));
c->f[5].u = rd32(c, (RW(29) + 596));
c->f[3].u = rd32(c, (RW(29) + 600));
c->f[7].f = fpu(F(1) + F(0));
c->f[5].f = fpu(F(6) + F(5));
c->f[3].f = fpu(F(4) + F(3));
c->f[1].u = rd32(c, (RW(29) + 1364));
c->f[0].u = rd32(c, (RW(29) + 1368));
c->f[2].f = fpu(F(2) - F(7));
c->f[1].f = fpu(F(1) - F(5));
c->f[0].f = fpu(F(0) - F(3));
wr32(c, (RW(29) + 1344), c->f[7].u);
wr32(c, (RW(29) + 1348), c->f[5].u);
wr32(c, (RW(29) + 1352), c->f[3].u);
wr32(c, (RW(29) + 400), c->f[2].u);
wr32(c, (RW(29) + 404), c->f[1].u);
SET64(31, 0x307dd0); wr32(c, (RW(29) + 408), c->f[0].u); JP_F_002B0290(c);
SET64(3, (s64)(s32)0x4c0000);
c->f[1].u = rd32(c, (RW(3) + -8208));
c->fcc = F(0) < F(1);
{ int t = !c->fcc;  if (t) goto L_00307DE8; }
c->f[0].u = c->f[20].u;
L_00307DE8:;
c->fcc = F(0) <= F(21);
if (c->fcc) { c->f[1].f = fpu(F(0) - F(20)); goto L_00307DFC; }
c->f[0].u = c->f[21].u;
c->f[1].f = fpu(F(0) - F(20));
L_00307DFC:;
SET64(4, (s64)(s32)0x4c0000);
SET64(5, (s64)(s32)0x40490000);
SET64(3, (s64)(s32)0x4c0000);
SET64(7, RD(5) | 0xfdb);
SET64(6, (s64)(s32)0x43340000);
SET64(5, (s64)(s32)0x40000000);
c->f[0].f = fpu(F(21) - F(20));
c->f[5].f = fpu_div(F(1), F(0));
c->f[6].u = rd32(c, (RW(4) + -8192));
c->f[0].u = rd32(c, (RW(3) + -8184));
c->f[3].u = RW(0);
L_00307E28:;
c->facc = fpu(F(3) + F(6));
c->f[4].f = fpu(F(0) - F(6));
c->f[2].u = RW(7);
c->f[3].f = fpu(c->facc + F(5) * F(4));
c->f[2].f = fpu(F(2) * F(3));
c->f[1].u = RW(6);
c->f[1].f = fpu_div(F(2), F(1));
c->f[0].u = RW(5);
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(21) + 0), c->f[0].u);
rd128(c, (RW(29) + 1360) & ~15u, &c->r[3]);
wr128(c, (RW(19) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 1344) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
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
SET32(29, RW(29) + 1408); return;
}
void JP_F_00307330(Ctx *c) { JP_B_00307330(c, 0x307330); }
void JP_F_00307400(Ctx *c) { JP_B_00307330(c, 0x307400); }
void JP_F_00307A00(Ctx *c) { JP_B_00307330(c, 0x307a00); }
void JP_F_00307E28(Ctx *c) { JP_B_00307330(c, 0x307e28); }

static void JP_B_00307EA0(Ctx *c, u32 entry) { /* func_00307EA0 */
ENTER(entry);
switch (entry) { case 0x307ea8: goto L_00307EA8; }
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 16), RD(31));
L_00307EA8:;
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 80)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 144), RW(0)); goto L_00307F64; }
SET64(3, (s32)rd32(c, (RW(16) + 112)));
{ int t = RD(3) == RD(0);  if (t) goto L_00307F60; }
SET64(31, 0x307ed0);  JP_F_002EE770(c);
SET64(31, 0x307ed8); SET64(4, (s32)rd32(c, (RW(16) + 112))); JP_F_002EE770(c);
SET64(2, (s32)rd32(c, (RW(16) + 80)));
SET64(5, rd16(c, (RW(2) + 1024)));
SET64(31, 0x307ee8); SET32(4, RW(2) + 128); JP_F_001520B0(c);
rd128(c, (RW(2) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 96) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(16) + 112)));
SET64(5, rd16(c, (RW(2) + 1024)));
SET64(31, 0x307f00); SET32(4, RW(2) + 128); JP_F_001520B0(c);
rd128(c, (RW(2) + 112) & ~15u, &c->r[2]);
SET64(3, (s64)(s32)0x3f800000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 80);
SET32(6, RW(29) + 64);
SET32(7, RW(29) + 108);
wr128(c, (RW(16) + 128) & ~15u, &c->r[2]);
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
wr32(c, (RW(29) + 92), RW(3));
wr32(c, (RW(29) + 76), RW(3));
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 84), RW(0));
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 68), RW(0));
SET64(31, 0x307f48); wr32(c, (RW(29) + 72), RW(0)); JP_F_00307330(c);
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 32) & ~15u, &c->r[3]);
c->f[0].u = rd32(c, (RW(29) + 108));
wr32(c, (RW(16) + 48), c->f[0].u);
L_00307F60:;
wr32(c, (RW(16) + 144), RW(0));
L_00307F64:;
wr8(c, (RW(16) + 148), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}
void JP_F_00307EA0(Ctx *c) { JP_B_00307EA0(c, 0x307ea0); }
void JP_F_00307EA8(Ctx *c) { JP_B_00307EA0(c, 0x307ea8); }

void JP_F_00307F80(Ctx *c) { /* func_00307F80 */
ENTER(0x307f80);
wr32(c, (RW(4) + 80), RW(0));
wr32(c, (RW(4) + 112), RW(0)); return;
}

void JP_F_00307F90(Ctx *c) { /* func_00307F90 */
ENTER(0x307f90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00308000; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 16480);
wr32(c, (RW(17) + 4), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x307fc8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_00307FEC; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x307fe8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_00307FEC:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00308004; }
SET64(31, 0x308000); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00308000:;
SET64(2, RD(17) + RD(0));
L_00308004:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00308020(Ctx *c) { /* func_00308020 */
ENTER(0x308020);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_00308040:;
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x308058);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET32(17, RW(17) + 1); goto L_00308068; }
SET64(2, RD(0) + RD(0)); goto L_00308078;
L_00308068:;
SET64(2, RSD(17) < (s64)3);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 1056); if (t) { POLL(); goto L_00308040; } }
SET32(2, RW(0) + 1);
L_00308078:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00308090(Ctx *c) { /* func_00308090 */
ENTER(0x308090);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_003080F8; }
wr32(c, (RW(16) + 16), RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(3) == RD(0);  if (t) goto L_003080F8; }
wr32(c, (RW(16) + 12), RW(0));
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_003080CC:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x3080e4);  rt_call(c, t); }
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < (s64)3);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 1056); if (t) { POLL(); goto L_003080CC; } }
L_003080F8:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00308110(Ctx *c) { /* func_00308110 */
ENTER(0x308110);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
{ int t = RD(3) != RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_003081D8; }
wr32(c, (RW(18) + 16), RW(6));
wr32(c, (RW(18) + 12), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(3, rd16(c, (RW(4) + 352)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_003081D8; }
SET64(16, RD(0) + RD(0));
L_00308150:;
SET64(2, (s32)rd32(c, (RW(4) + 356)));
SET64(5, (s64)(s32)0x4c0000);
SET32(5, RW(5) + -8400);
SET32(19, RW(2) + RW(16));
SET64(31, 0x308168); SET32(4, RW(19) + 64); JP_F_0012AB88(c);
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 0))); goto L_003081C0; }
SET64(2, rd16(c, (RW(19) + 96)));
SET64(17, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(16, RD(0) + RD(0));
SET32(3, RW(2) << 2);
SET64(2, (s32)rd32(c, (RW(4) + 312)));
SET32(2, RW(2) + RW(3));
SET64(19, (s32)rd32(c, (RW(2) + 0)));
L_00308190:;
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x3081a8); SET64(5, RD(19) + RD(0)); rt_call(c, t); }
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 1056); if (t) { POLL(); goto L_00308190; } }
 goto L_003081D8;
L_003081C0:;
SET32(17, RW(17) + 1);
SET64(3, rd16(c, (RW(4) + 352)));
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 112); if (t) { POLL(); goto L_00308150; } }
L_003081D8:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00308200(Ctx *c) { /* func_00308200 */
ENTER(0x308200);
SET32(29, RW(29) + -32);
SET64(5, (s64)(s32)0x2c0000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(31, 0x308220); SET32(5, RW(5) + -5504); JP_F_001022C0(c);
wr32(c, (RW(16) + 8), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00308240(Ctx *c) { /* func_00308240 */
ENTER(0x308240);
SET32(29, RW(29) + -480);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(3) == RD(0); c->f[20].u = c->f[12].u; if (t) goto L_003084F0; }
SET64(3, (s32)rd32(c, (RW(18) + 16)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_003084F4; }
c->f[0].u = RW(0);
c->fcc = F(0) < F(20);
if (c->fcc) { SET64(17, RD(0) + RD(0)); goto L_00308294; }
 goto L_003084F0;
SET64(17, RD(0) + RD(0));
L_00308294:;
SET64(16, RD(0) + RD(0));
L_00308298:;
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x3082b0);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_003084A8; }
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET64(5, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(18) + 16)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x3082d8); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, 0x3082e0); SET32(4, RW(29) + 144); JP_F_0013AEA0(c);
SET64(5, (s64)(s32)0x4c0000);
SET32(4, RW(29) + 144);
SET64(31, 0x3082f0); SET32(5, RW(5) + -8416); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x3082fc); SET32(4, RW(29) + 400); JP_F_0013ADA0(c);
SET64(31, 0x308304);  JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0030831C; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00308334;
SET32(3, RW(2) >> 1);
L_0030831C:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00308334:;
SET64(2, (s64)(s32)0x4f800000);
SET64(3, (s64)(s32)0x436b0000);
c->f[0].u = RW(2);
c->f[3].f = fpu_div(F(1), F(0));
SET64(2, (s64)(s32)0xc2c80000);
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->f[2].u = RW(3);
c->facc = fpu(F(0) + F(1));
SET64(31, 0x308364); c->f[12].f = fpu(c->facc + F(2) * F(3)); JP_F_00121728(c);
SET64(4, (s64)(s32)0x40090000);
SET64(3, (s64)(s32)0x54440000);
SET64(4, RD(4) | 0x21fb);
SET64(3, RD(3) | 0x2d18);
SET64(4, RD(4) << 32);
SET64(5, RD(2) + RD(0));
SET64(31, 0x308384); SET64(4, RD(3) | RD(4)); JP_F_00121C20(c);
SET64(3, (s64)(s32)0x40660000);
SET64(4, RD(2) + RD(0));
SET64(2, RD(3) | 0x8000);
SET64(31, 0x308398); SET64(5, RD(2) << 32); JP_F_00121EA8(c);
SET64(31, 0x3083a0); SET64(4, RD(2) + RD(0)); JP_F_001222E0(c);
wr32(c, (RW(29) + 476), c->f[0].u);
SET64(31, 0x3083ac); SET32(4, RW(29) + 80); JP_F_0013AEA0(c);
SET32(4, RW(29) + 80);
SET64(31, 0x3083b8); SET32(5, RW(29) + 476); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x3083c4); SET32(4, RW(29) + 272); JP_F_0013ADA0(c);
SET32(4, RW(29) + 208);
SET32(5, RW(29) + 400);
SET64(31, 0x3083d4); SET32(6, RW(29) + 272); JP_F_002AEAE0(c);
SET64(31, 0x3083dc); SET32(4, RW(29) + 336); JP_F_002AF080(c);
rd128(c, (RW(29) + 208) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 224) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 240) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 336) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 352) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 368) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 384) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 336) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 352) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 432) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 384) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 400) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 416) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 448) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x308434); SET32(5, RW(29) + 400); rt_call(c, t); }
SET64(31, 0x30843c);  JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_00308454; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_0030846C;
SET32(3, RW(2) >> 1);
L_00308454:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_0030846C:;
SET64(2, (s64)(s32)0x4f800000);
SET64(4, (s32)rd32(c, (RW(18) + 8)));
c->f[0].u = RW(2);
SET64(3, (s64)(s32)0x41700000);
c->f[3].f = fpu_div(F(1), F(0));
SET64(2, (s64)(s32)0x42480000);
SET32(4, RW(4) + RW(16));
SET32(4, RW(4) + 352);
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->f[2].u = RW(3);
c->facc = fpu(F(0) + F(1));
SET64(31, 0x3084a4); c->f[12].f = fpu(c->facc + F(2) * F(3)); JP_F_002249C0(c);
L_003084A8:;
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x3084c0); c->f[12].u = c->f[20].u; rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_003084E0; }
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x3084e0);  rt_call(c, t); }
L_003084E0:;
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 1056); if (t) { POLL(); goto L_00308298; } }
L_003084F0:;
SET64(31, rd64(c, (RW(29) + 64)));
L_003084F4:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 480); return;
}

void JP_F_00308510(Ctx *c) { /* func_00308510 */
ENTER(0x308510);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 16)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_00308550; }
c->f[1].u = rd32(c, (RW(4) + 12));
SET64(3, (s64)(s32)0x42700000);
c->f[0].u = RW(3);
c->f[1].f = fpu(F(1) + F(12));
c->fcc = F(0) <= F(1);
{ int t = !c->fcc; wr32(c, (RW(4) + 12), c->f[1].u); if (t) goto L_0030854C; }
SET64(31, 0x30854c);  JP_F_00308240(c);
L_0030854C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_00308550:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00308560(Ctx *c) { /* func_00308560 */
ENTER(0x308560);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 0), RW(5));
SET64(31, 0x308584); SET32(4, RW(0) + 3184); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_003085B0; }
SET64(5, (s64)(s32)0x310000);
SET64(6, (s64)(s32)0x2c0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -31232);
SET32(6, RW(6) + -5504);
SET32(7, RW(0) + 1056);
SET64(31, 0x3085ac); SET32(8, RW(0) + 3); JP_F_00102580(c);
SET64(16, RD(2) + RD(0));
L_003085B0:;
wr32(c, (RW(18) + 8), RW(16));
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_003085BC:;
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x3085cc); SET32(4, RW(2) + RW(16)); JP_F_002BEC00(c);
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < (s64)3);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 1056); if (t) { POLL(); goto L_003085BC; } }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00308600(Ctx *c) { /* func_00308600 */
ENTER(0x308600);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x308618); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00243A30(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 172), RW(2));
SET32(5, RW(5) + -3104);
wr32(c, (RW(17) + 160), RW(0));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 164), RW(0));
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(17) + 168), RW(0));
SET32(3, RW(3) + 16640);
wr32(c, (RW(17) + 172), RW(5));
SET32(2, RW(2) + 16664);
wr32(c, (RW(17) + 176), RW(0));
SET64(6, RD(0) + RD(0));
wr32(c, (RW(17) + 180), RW(4));
SET64(5, RD(17) + RD(0));
wr32(c, (RW(17) + 184), RW(0));
wr32(c, (RW(17) + 188), RW(0));
wr32(c, (RW(17) + 200), RW(0));
wr32(c, (RW(17) + 196), RW(0));
wr8(c, (RW(17) + 192), (u8)RW(0));
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
wr32(c, (RW(17) + 332), RW(0));
wr32(c, (RW(17) + 336), RW(0));
wr32(c, (RW(17) + 340), RW(0));
wr16(c, (RW(17) + 344), (u16)RW(0));
wr16(c, (RW(17) + 346), (u16)RW(0));
wr16(c, (RW(17) + 348), (u16)RW(0));
L_00308694:;
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
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 32); if (t) { POLL(); goto L_00308694; } }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 9984);
SET32(16, RW(17) + 352);
SET32(2, RW(2) + 10008);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(31, 0x3086e8); SET64(4, RD(16) + RD(0)); JP_F_00308740(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, RD(17) + RD(0));
SET32(3, RW(3) + 10112);
wr32(c, (RW(16) + 8), RW(3));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 10132);
wr32(c, (RW(16) + 104), RW(3));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 10152);
wr32(c, (RW(16) + 160), RW(3));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 10216);
wr32(c, (RW(16) + 320), RW(3));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 10248);
wr32(c, (RW(16) + 496), RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00308740(Ctx *c) { /* func_00308740 */
ENTER(0x308740);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x308754); SET64(16, RD(4) + RD(0)); JP_F_00308830(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 17232);
SET64(7, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 8), RW(2));
SET32(3, RW(3) + 17252);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 104), RW(3));
SET32(2, RW(2) + 17272);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 160), RW(2));
SET32(3, RW(3) + 17336);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 320), RW(3));
SET32(2, RW(2) + 17368);
SET64(6, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 496), RW(2));
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 624), RW(0));
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 628), RW(0));
SET64(3, (s64)(s32)0x4e0000);
SET64(8, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 632), RW(0));
wr32(c, (RW(16) + 636), RW(8));
SET32(7, RW(7) + -29584);
wr32(c, (RW(16) + 640), RW(8));
SET32(6, RW(6) + -29564);
wr32(c, (RW(16) + 644), RW(0));
SET32(5, RW(5) + -29544);
wr32(c, (RW(16) + 648), RW(0));
SET32(4, RW(4) + -29480);
wr16(c, (RW(16) + 652), (u16)RW(0));
SET32(3, RW(3) + -29448);
wr16(c, (RW(16) + 654), (u16)RW(0));
SET64(2, RD(16) + RD(0));
wr8(c, (RW(16) + 656), (u8)RW(0));
wr32(c, (RW(16) + 8), RW(7));
wr32(c, (RW(16) + 104), RW(6));
wr32(c, (RW(16) + 160), RW(5));
wr32(c, (RW(16) + 320), RW(4));
wr32(c, (RW(16) + 496), RW(3));
wr32(c, (RW(16) + 672), RW(0));
wr32(c, (RW(16) + 680), RW(0));
wr32(c, (RW(16) + 688), RW(0));
wr32(c, (RW(16) + 692), RW(0));
wr32(c, (RW(16) + 696), RW(0));
wr32(c, (RW(16) + 700), RW(8));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00308830(Ctx *c) { /* func_00308830 */
ENTER(0x308830);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x308848); SET64(16, RD(4) + RD(0)); JP_F_002B3FD0(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(17, RW(16) + 96);
SET32(2, RW(2) + 512);
SET64(4, RD(17) + RD(0));
SET64(31, 0x308860); wr32(c, (RW(16) + 8), RW(2)); JP_F_002B4380(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(16) + 144);
SET32(2, RW(2) + 480);
SET64(31, 0x308874); wr32(c, (RW(17) + 8), RW(2)); JP_F_00141C80(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 6992);
SET32(3, RW(3) + 7012);
wr32(c, (RW(16) + 8), RW(2));
SET32(4, RW(16) + 176);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 104), RW(3));
SET32(2, RW(2) + 7032);
SET32(5, RW(0) + 1);
SET64(31, 0x3088a4); wr32(c, (RW(16) + 160), RW(2)); JP_F_002BAA90(c);
SET32(4, RW(16) + 496);
SET64(31, 0x3088b0); SET64(5, RD(0) + RD(0)); JP_F_002A58A0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 31760);
SET32(3, RW(3) + 31780);
wr32(c, (RW(16) + 8), RW(2));
SET32(4, RW(16) + 544);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 104), RW(3));
SET32(2, RW(2) + 31800);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 160), RW(2));
SET32(3, RW(3) + 31864);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 320), RW(3));
SET32(2, RW(2) + 31896);
SET64(31, 0x3088f4); wr32(c, (RW(16) + 496), RW(2)); JP_F_002B5760(c);
wr32(c, (RW(16) + 608), RW(0));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 612), RW(0));
wr32(c, (RW(16) + 616), RW(0));
wr32(c, (RW(16) + 620), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00308920(Ctx *c) { /* func_00308920 */
ENTER(0x308920);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2976);
SET32(3, RW(3) + 16480);
wr32(c, (RW(4) + 4), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0)); return;
}

void JP_F_00308950(Ctx *c) { /* func_00308950 */
ENTER(0x308950);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr8(c, (RW(4) + 168), (u8)RW(5));
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_003089C0; }
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 64))); goto L_003089A8; }
SET64(2, rd8(c, (RW(16) + 168)));
{ int t = RD(2) != RD(0);  if (t) goto L_003089A4; }
SET64(6, (s32)rd32(c, (RW(16) + 0)));
if (RD(6) == RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 8))); goto L_00308998; }
SET32(6, RW(6) + 64);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
L_00308998:;
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x3089a4); SET64(5, (s32)rd32(c, (RW(16) + 68))); rt_call(c, t); }
L_003089A4:;
SET64(2, (s32)rd32(c, (RW(16) + 64)));
L_003089A8:;
SET64(5, rd8(c, (RW(16) + 168)));
SET64(25, (s32)rd32(c, (RW(2) + 160)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x3089bc); SET32(4, RW(2) + 144); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
L_003089C0:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_003089D0(Ctx *c) { /* func_003089D0 */
ENTER(0x3089d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x3089e8); SET32(4, RW(16) + 136); JP_F_00157DA0(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 64))); goto L_003089F8; }
SET64(2, RD(0) + RD(0)); goto L_00308A50;
L_003089F8:;
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 16))); goto L_00308A24; }
SET64(25, (s32)rd32(c, (RW(2) + 160)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x308a10); SET32(4, RW(2) + 144); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00308A20; }
SET64(2, RD(0) + RD(0)); goto L_00308A50;
L_00308A20:;
SET64(2, (s32)rd32(c, (RW(16) + 16)));
L_00308A24:;
if (RD(2) == RD(0)) { SET64(2, RD(0) + (s64)1); goto L_00308A50; }
SET64(25, (s32)rd32(c, (RW(2) + 160)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x308a3c); SET32(4, RW(2) + 144); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00308A4C; }
SET64(2, RD(0) + RD(0)); goto L_00308A50;
L_00308A4C:;
SET64(2, RD(0) + (s64)1);
L_00308A50:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00308A60(Ctx *c) { /* func_00308A60 */
ENTER(0x308a60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 68)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00308AB4; }
wr32(c, (RW(16) + 68), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 64)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 16))); goto L_00308A9C; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x308a98);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 16)));
L_00308A9C:;
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_00308AB8; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x308ab4);  rt_call(c, t); }
L_00308AB4:;
SET64(31, rd64(c, (RW(29) + 16)));
L_00308AB8:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00308AD0(Ctx *c) { /* func_00308AD0 */
ENTER(0x308ad0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 68)));
SET64(16, RD(6) + RD(0));
{ int t = RD(3) == RD(16); SET64(17, RD(5) + RD(0)); if (t) goto L_00308B48; }
wr32(c, (RW(18) + 68), RW(16));
SET64(4, (s32)rd32(c, (RW(18) + 64)));
if (RD(4) == RD(0)) { SET64(7, (s32)rd32(c, (RW(18) + 0))); goto L_00308B38; }
SET64(2, rd8(c, (RW(18) + 168)));
{ int t = RD(2) != RD(0);  if (t) goto L_00308B34; }
SET64(6, (s32)rd32(c, (RW(18) + 0)));
if (RD(6) == RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 8))); goto L_00308B28; }
SET32(6, RW(6) + 64);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
L_00308B28:;
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x308b34); SET64(5, (s32)rd32(c, (RW(18) + 68))); rt_call(c, t); }
L_00308B34:;
SET64(7, (s32)rd32(c, (RW(18) + 0)));
L_00308B38:;
SET64(5, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x308b48); SET32(4, RW(18) + 16); JP_F_00309900(c);
L_00308B48:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00308B60(Ctx *c) { /* func_00308B60 */
ENTER(0x308b60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 164)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 164), RW(0)); goto L_00308B90; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x308b8c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 164), RW(0));
L_00308B90:;
SET64(4, (s32)rd32(c, (RW(16) + 64)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 64), RW(0)); goto L_00308BB0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x308bac); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 64), RW(0));
L_00308BB0:;
SET64(25, (s32)rd32(c, (RW(16) + 132)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x308bc0); SET32(4, RW(16) + 72); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 16), RW(0)); goto L_00308BE0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x308bdc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 16), RW(0));
L_00308BE0:;
SET64(31, 0x308be8); SET64(4, (s32)rd32(c, (RW(16) + 52))); JP_F_001004B0(c);
wr32(c, (RW(16) + 52), RW(0));
wr32(c, (RW(16) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00308C00(Ctx *c) { /* func_00308C00 */
ENTER(0x308c00);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(4, (s32)rd32(c, (RW(4) + 16)));
{ int t = RD(4) == RD(0); c->f[20].u = c->f[12].u; if (t) goto L_00308C34; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x308c34);  rt_call(c, t); }
L_00308C34:;
SET64(4, (s32)rd32(c, (RW(17) + 52)));
if (RD(4) == RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 64))); goto L_00308C4C; }
SET64(31, 0x308c48); c->f[12].u = c->f[20].u; JP_F_002BF3B0(c);
SET64(3, (s32)rd32(c, (RW(17) + 64)));
L_00308C4C:;
if (RD(3) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 64))); goto L_00308D54; }
SET64(5, (s32)rd32(c, (RW(17) + 164)));
SET64(31, 0x308c60); SET32(4, RW(17) + 72); JP_F_00309E30(c);
if (RD(2) != RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_00308D70; }
SET64(31, 0x308c70); SET32(4, RW(0) + 720); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00308CC4; }
SET64(31, 0x308c80); SET64(4, RD(16) + RD(0)); JP_F_00308D90(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 10304);
SET32(3, RW(3) + 10324);
wr32(c, (RW(16) + 8), RW(2));
SET32(4, RW(16) + 704);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 104), RW(3));
SET32(2, RW(2) + 10344);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 160), RW(2));
SET32(3, RW(3) + 10408);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 320), RW(3));
SET32(2, RW(2) + 10440);
SET64(31, 0x308cc4); wr32(c, (RW(16) + 496), RW(2)); JP_F_00149680(c);
L_00308CC4:;
SET64(2, (s64)(s32)0xbdcc0000);
wr32(c, (RW(17) + 64), RW(16));
SET64(3, RD(2) | 0xcccd);
SET32(5, RW(29) + 64);
SET64(2, (s64)(s32)0x3d4c0000);
wr32(c, (RW(29) + 64), RW(3));
SET64(2, RD(2) | 0xcccd);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 68), RW(2));
wr32(c, (RW(29) + 72), RW(2));
wr32(c, (RW(29) + 76), RW(3));
SET64(2, (s64)(s32)0x3fc00000);
SET64(4, (s32)rd32(c, (RW(17) + 64)));
c->f[12].u = RW(2);
SET64(31, 0x308d04); SET32(6, RW(0) + 80); JP_F_002BF2F0(c);
SET64(4, (s32)rd32(c, (RW(17) + 64)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x308d18); SET32(5, RW(17) + 72); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 64)));
{ int t = RD(4) == RD(0);  if (t) goto L_00308D50; }
SET64(3, rd8(c, (RW(17) + 168)));
{ int t = RD(3) != RD(0);  if (t) goto L_00308D50; }
SET64(6, (s32)rd32(c, (RW(17) + 0)));
if (RD(6) == RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 8))); goto L_00308D44; }
SET32(6, RW(6) + 64);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
L_00308D44:;
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x308d50); SET64(5, (s32)rd32(c, (RW(17) + 68))); rt_call(c, t); }
L_00308D50:;
SET64(4, (s32)rd32(c, (RW(17) + 64)));
L_00308D54:;
{ int t = RD(4) == RD(0);  if (t) goto L_00308D6C; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x308d6c); c->f[12].u = c->f[20].u; rt_call(c, t); }
L_00308D6C:;
SET64(31, rd64(c, (RW(29) + 48)));
L_00308D70:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00308D90(Ctx *c) { /* func_00308D90 */
ENTER(0x308d90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x308da4); SET64(16, RD(4) + RD(0)); JP_F_00308E80(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 21136);
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 8), RW(2));
SET32(3, RW(3) + 21156);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 104), RW(3));
SET32(2, RW(2) + 21176);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 160), RW(2));
SET32(3, RW(3) + 21240);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 320), RW(3));
SET32(2, RW(2) + 21272);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 496), RW(2));
SET64(6, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 640), RW(0));
wr32(c, (RW(16) + 644), RW(7));
SET64(2, (s64)(s32)0x4d0000);
wr8(c, (RW(16) + 648), (u8)RW(0));
SET64(5, (s64)(s32)0x4d0000);
SET32(4, RW(4) + 20944);
wr32(c, (RW(16) + 652), RW(0));
wr32(c, (RW(16) + 8), RW(4));
SET32(3, RW(3) + 20964);
wr32(c, (RW(16) + 104), RW(3));
SET32(2, RW(2) + 20984);
wr32(c, (RW(16) + 160), RW(2));
SET32(6, RW(6) + 21048);
SET32(5, RW(5) + 21080);
wr32(c, (RW(16) + 320), RW(6));
SET64(4, (s64)(s32)0x42700000);
wr32(c, (RW(16) + 496), RW(5));
SET64(3, (s64)(s32)0x42f00000);
wr32(c, (RW(16) + 656), RW(4));
wr32(c, (RW(16) + 660), RW(3));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 664), RW(0));
wr32(c, (RW(16) + 668), RW(0));
wr32(c, (RW(16) + 672), RW(0));
wr32(c, (RW(16) + 676), RW(0));
wr32(c, (RW(16) + 680), RW(0));
wr32(c, (RW(16) + 684), RW(7));
wr32(c, (RW(16) + 688), RW(0));
wr32(c, (RW(16) + 692), RW(0));
wr32(c, (RW(16) + 696), RW(0));
wr32(c, (RW(16) + 700), RW(7));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00308E80(Ctx *c) { /* func_00308E80 */
ENTER(0x308e80);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x308ea0); SET64(17, RD(16) + RD(0)); JP_F_002B3FD0(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(18, RW(16) + 96);
SET32(2, RW(2) + 512);
SET64(4, RD(18) + RD(0));
SET64(31, 0x308eb8); wr32(c, (RW(16) + 8), RW(2)); JP_F_002B4380(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(16) + 144);
SET32(2, RW(2) + 480);
SET64(31, 0x308ecc); wr32(c, (RW(18) + 8), RW(2)); JP_F_00141C80(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 6992);
SET32(3, RW(3) + 7012);
wr32(c, (RW(16) + 8), RW(2));
SET32(4, RW(16) + 176);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 104), RW(3));
SET32(2, RW(2) + 7032);
SET32(5, RW(0) + 1);
SET64(31, 0x308efc); wr32(c, (RW(16) + 160), RW(2)); JP_F_002BAA90(c);
SET32(4, RW(17) + 496);
SET64(31, 0x308f08); SET64(5, RD(0) + RD(0)); JP_F_002A58A0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 31760);
SET32(3, RW(3) + 31780);
wr32(c, (RW(17) + 8), RW(2));
SET32(4, RW(17) + 544);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + 31800);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + 31864);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 320), RW(3));
SET32(2, RW(2) + 31896);
SET64(31, 0x308f4c); wr32(c, (RW(17) + 496), RW(2)); JP_F_002B5760(c);
wr32(c, (RW(17) + 608), RW(0));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 612), RW(0));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 616), RW(0));
SET64(5, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 21344);
wr32(c, (RW(17) + 620), RW(0));
wr32(c, (RW(16) + 8), RW(3));
SET32(2, RW(2) + 21364);
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 104), RW(2));
SET32(5, RW(5) + 21384);
SET64(3, (s64)(s32)0x4d0000);
SET32(4, RW(4) + 21448);
wr32(c, (RW(16) + 160), RW(5));
SET32(3, RW(3) + 21480);
wr32(c, (RW(16) + 320), RW(4));
wr32(c, (RW(16) + 496), RW(3));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 624), RW(0));
wr32(c, (RW(16) + 628), RW(0));
wr16(c, (RW(16) + 632), (u16)RW(0));
wr16(c, (RW(16) + 634), (u16)RW(0));
wr8(c, (RW(16) + 636), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00308FD0(Ctx *c) { /* func_00308FD0 */
ENTER(0x308fd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(4) + 0), RW(5));
SET64(31, 0x308ff0); SET32(4, RW(17) + 16); JP_F_00309AD0(c);
SET64(31, 0x308ff8); SET32(4, RW(0) + 32); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00309008; }
SET64(31, 0x309008); SET64(4, RD(16) + RD(0)); JP_F_001509B0(c);
L_00309008:;
SET32(5, RW(0) + 64);
SET64(4, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x309024); wr32(c, (RW(17) + 164), RW(16)); JP_F_00150830(c);
SET32(4, RW(17) + 136);
SET32(5, RW(0) + 1535);
SET64(31, 0x309034); wr8(c, (RW(17) + 161), (u8)RW(0)); JP_F_00158060(c);
SET64(31, 0x30903c); SET32(4, RW(17) + 136); JP_F_00157C30(c);
SET64(31, 0x309044); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
wr32(c, (RW(17) + 156), RW(2));
SET32(4, RW(17) + 136);
SET64(5, RD(2) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x30905c); SET64(7, RD(0) + RD(0)); JP_F_00157E20(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00309070(Ctx *c) { /* func_00309070 */
ENTER(0x309070);
SET32(29, RW(29) + -80);
SET64(8, (s64)(s32)0x3f410000);
wr64(c, (RW(29) + 32), RD(31));
SET64(7, (s64)(s32)0x3f5f0000);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(3, (s64)(s32)0x4d0000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(3, RW(3) + 2976);
wr32(c, (RW(4) + 4), RW(3));
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 56), RW(2));
SET64(17, RD(4) + RD(0));
wr32(c, (RW(4) + 16), RW(0));
SET64(6, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 32), RW(0));
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 36), RW(0));
SET64(3, (s64)(s32)0x4e0000);
SET64(9, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 44), RW(9));
SET64(2, (s64)(s32)0x4e0000);
wr16(c, (RW(4) + 48), (u16)RW(0));
SET32(6, RW(6) + 16656);
wr32(c, (RW(29) + 48), RW(8));
SET32(5, RW(5) + 16696);
wr32(c, (RW(29) + 52), RW(8));
SET32(3, RW(3) + 16528);
wr32(c, (RW(29) + 56), RW(7));
SET32(2, RW(2) + 16568);
wr32(c, (RW(29) + 60), RW(7));
SET32(16, RW(17) + 72);
rd128(c, (RW(29) + 48) & ~15u, &c->r[7]);
wr32(c, (RW(4) + 52), RW(0));
wr128(c, (RW(17) + 32) & ~15u, &c->r[7]);
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 56), RW(5));
wr32(c, (RW(4) + 4), RW(3));
wr32(c, (RW(4) + 56), RW(2));
wr32(c, (RW(4) + 64), RW(0));
wr32(c, (RW(4) + 68), RW(0));
SET64(31, 0x309124); SET64(4, RD(16) + RD(0)); JP_F_00150480(c);
SET64(31, 0x30912c); SET32(4, RW(16) + 64); JP_F_00158180(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16720);
SET32(2, RW(2) + 16740);
wr32(c, (RW(16) + 60), RW(3));
wr32(c, (RW(16) + 80), RW(2));
SET32(3, RW(0) + 19);
SET64(2, (s64)(s32)0x3f420000);
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(29) + 64), RW(2));
SET64(2, (s64)(s32)0x3f010000);
wr8(c, (RW(16) + 88), (u8)RW(0));
wr32(c, (RW(29) + 68), RW(2));
SET64(2, (s64)(s32)0x3f7e0000);
wr8(c, (RW(16) + 89), (u8)RW(0));
wr32(c, (RW(29) + 72), RW(2));
wr32(c, (RW(17) + 164), RW(0));
SET64(2, (s64)(s32)0x3f1f0000);
wr8(c, (RW(17) + 168), (u8)RW(0));
wr32(c, (RW(29) + 76), RW(2));
wr16(c, (RW(17) + 48), (u16)RW(3));
SET64(2, RD(17) + RD(0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_003091A0(Ctx *c) { /* func_003091A0 */
ENTER(0x3091a0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(5) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(6) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 176)));
{ int t = RD(3) != RD(0); SET64(21, RD(4) + RD(0)); if (t) goto L_00309338; }
SET64(4, (s32)rd32(c, (RW(21) + 0)));
SET64(19, RD(0) + RD(0));
SET64(3, rd16(c, (RW(4) + 340)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00309248; }
SET64(17, RD(0) + RD(0));
L_003091F4:;
SET64(2, (s32)rd32(c, (RW(4) + 344)));
SET64(5, (s64)(s32)0x4c0000);
SET32(5, RW(5) + -8392);
SET32(16, RW(2) + RW(17));
SET64(31, 0x30920c); SET32(4, RW(16) + 64); JP_F_0012AB88(c);
SET64(5, (s64)(s32)0x4c0000);
SET32(4, RW(16) + 64);
SET64(31, 0x30921c); SET32(5, RW(5) + -8384); JP_F_0012AB88(c);
SET64(3, RD(0) < RD(2));
{ int t = RD(3) == RD(0);  if (t) goto L_00309230; }
SET32(19, RW(19) + 1);
L_00309230:;
SET64(4, (s32)rd32(c, (RW(21) + 0)));
SET32(18, RW(18) + 1);
SET64(3, rd16(c, (RW(4) + 340)));
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 112); if (t) { POLL(); goto L_003091F4; } }
L_00309248:;
{ int t = RD(19) == RD(0);  if (t) goto L_00309338; }
SET32(2, RW(19) << 2);
SET64(16, RD(0) + RD(0));
SET32(2, RW(2) + RW(19));
wr32(c, (RW(21) + 180), RW(19));
SET32(2, RW(2) << 4);
SET64(31, 0x30926c); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_00309298; }
SET64(5, (s64)(s32)0x310000);
SET64(8, RD(19) + RD(0));
SET32(16, RW(0) + 1);
SET64(4, RD(20) + RD(0));
SET32(5, RW(5) + -27712);
SET64(6, RD(0) + RD(0));
SET64(31, 0x309294); SET32(7, RW(0) + 80); JP_F_00102580(c);
SET64(20, RD(2) + RD(0));
L_00309298:;
wr32(c, (RW(21) + 176), RW(20));
SET64(4, (s32)rd32(c, (RW(21) + 0)));
SET64(3, rd16(c, (RW(4) + 340)));
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00309338; }
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_003092B8:;
SET64(2, (s32)rd32(c, (RW(4) + 344)));
SET64(5, (s64)(s32)0x4c0000);
SET32(5, RW(5) + -8392);
SET32(16, RW(2) + RW(19));
SET64(31, 0x3092d0); SET32(4, RW(16) + 64); JP_F_0012AB88(c);
SET64(5, (s64)(s32)0x4c0000);
SET32(4, RW(16) + 64);
SET64(31, 0x3092e0); SET32(5, RW(5) + -8384); JP_F_0012AB88(c);
SET64(3, RD(0) < RD(2));
{ int t = RD(3) == RD(0);  if (t) goto L_00309318; }
SET64(2, (s64)(s32)0x44160000);
SET64(3, (s32)rd32(c, (RW(21) + 176)));
c->f[12].u = RW(2);
SET64(2, (s32)rd32(c, (RW(21) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 348)));
SET32(2, RW(2) + RW(18));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x309310); SET32(4, RW(3) + RW(17)); JP_F_002BFE40(c);
SET32(17, RW(17) + 80);
L_00309318:;
SET64(4, (s32)rd32(c, (RW(21) + 0)));
SET32(20, RW(20) + 1);
SET32(19, RW(19) + 112);
SET64(3, rd16(c, (RW(4) + 340)));
SET64(3, RSD(20) < RSD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_003092B8; } }
L_00309338:;
SET64(3, (s32)rd32(c, (RW(21) + 68)));
if (RD(3) == RD(22)) { SET64(31, rd64(c, (RW(29) + 128))); goto L_00309398; }
wr32(c, (RW(21) + 68), RW(22));
SET64(4, (s32)rd32(c, (RW(21) + 64)));
if (RD(4) == RD(0)) { SET64(7, (s32)rd32(c, (RW(21) + 0))); goto L_00309384; }
SET64(2, rd8(c, (RW(21) + 168)));
{ int t = RD(2) != RD(0);  if (t) goto L_00309380; }
SET64(6, (s32)rd32(c, (RW(21) + 0)));
if (RD(6) == RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 8))); goto L_00309374; }
SET32(6, RW(6) + 64);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
L_00309374:;
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x309380); SET64(5, (s32)rd32(c, (RW(21) + 68))); rt_call(c, t); }
L_00309380:;
SET64(7, (s32)rd32(c, (RW(21) + 0)));
L_00309384:;
SET64(5, RD(23) + RD(0));
SET64(6, RD(22) + RD(0));
SET64(31, 0x309394); SET32(4, RW(21) + 16); JP_F_00309900(c);
SET64(31, rd64(c, (RW(29) + 128)));
L_00309398:;
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

void JP_F_003093C0(Ctx *c) { /* func_003093C0 */
ENTER(0x3093c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x3093d4); SET64(16, RD(4) + RD(0)); JP_F_002AF080(c);
wr32(c, (RW(16) + 64), RW(0));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 72), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00309400(Ctx *c) { /* func_00309400 */
ENTER(0x309400);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x309418); SET64(4, (s32)rd32(c, (RW(4) + 176))); JP_F_001004B0(c);
wr32(c, (RW(16) + 176), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 164)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 164), RW(0)); goto L_0030943C; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x309438); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 164), RW(0));
L_0030943C:;
SET64(4, (s32)rd32(c, (RW(16) + 64)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 64), RW(0)); goto L_0030945C; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x309458); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 64), RW(0));
L_0030945C:;
SET64(25, (s32)rd32(c, (RW(16) + 132)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x30946c); SET32(4, RW(16) + 72); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 16), RW(0)); goto L_0030948C; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x309488); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 16), RW(0));
L_0030948C:;
SET64(31, 0x309494); SET64(4, (s32)rd32(c, (RW(16) + 52))); JP_F_001004B0(c);
wr32(c, (RW(16) + 52), RW(0));
wr32(c, (RW(16) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_003094B0(Ctx *c) { /* func_003094B0 */
ENTER(0x3094b0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 176)));
{ int t = RD(2) == RD(0); c->f[20].u = c->f[12].u; if (t) goto L_00309510; }
SET64(2, (s32)rd32(c, (RW(16) + 180)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00309510; }
SET64(17, RD(0) + RD(0));
L_003094E8:;
SET64(2, (s32)rd32(c, (RW(16) + 176)));
c->f[12].u = c->f[20].u;
SET64(31, 0x3094f8); SET32(4, RW(2) + RW(17)); JP_F_002BFDE0(c);
SET64(2, (s32)rd32(c, (RW(16) + 180)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 80); if (t) { POLL(); goto L_003094E8; } }
L_00309510:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x30951c); c->f[12].u = c->f[20].u; JP_F_00308C00(c);
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00309540(Ctx *c) { /* func_00309540 */
ENTER(0x309540);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x309554); SET64(16, RD(4) + RD(0)); JP_F_00309070(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 16592);
SET32(3, RW(3) + 16632);
wr32(c, (RW(16) + 4), RW(2));
wr32(c, (RW(16) + 56), RW(3));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 176), RW(0));
wr32(c, (RW(16) + 180), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00309590(Ctx *c) { /* func_00309590 */
ENTER(0x309590);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_003096CC; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16528);
SET32(2, RW(2) + 16568);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x3095d4);  rt_call(c, t); }
SET32(4, RW(17) + 72);
{ int t = RD(4) == RD(0);  if (t) goto L_00309620; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16720);
SET32(2, RW(2) + 16740);
wr32(c, (RW(17) + 132), RW(3));
wr32(c, (RW(17) + 152), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x309608);  rt_call(c, t); }
SET32(4, RW(17) + 136);
SET64(31, 0x309614); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET32(4, RW(17) + 72);
SET64(31, 0x309620); SET64(5, RD(0) + RD(0)); JP_F_00150410(c);
L_00309620:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_003096B8; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x309650); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(2, RW(17) + 16);
{ int t = RD(2) == RD(0);  if (t) goto L_00309694; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
wr32(c, (RW(17) + 56), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 16), RW(0)); goto L_00309688; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x309684); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 16), RW(0));
L_00309688:;
SET64(31, 0x309690); SET64(4, (s32)rd32(c, (RW(17) + 52))); JP_F_001004B0(c);
wr32(c, (RW(17) + 52), RW(0));
L_00309694:;
{ int t = RD(17) == RD(0);  if (t) goto L_003096B4; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x3096b4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_003096B4:;
SET64(2, RD(16) << 48);
L_003096B8:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_003096D0; }
SET64(31, 0x3096cc); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_003096CC:;
SET64(2, RD(17) + RD(0));
L_003096D0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_003096F0(Ctx *c) { /* func_003096F0 */
ENTER(0x3096f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 16)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + (s64)1); goto L_00309728; }
SET64(25, (s32)rd32(c, (RW(2) + 160)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x309714); SET32(4, RW(2) + 144); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00309724; }
SET64(2, RD(0) + RD(0)); goto L_00309728;
L_00309724:;
SET64(2, RD(0) + (s64)1);
L_00309728:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00309740(Ctx *c) { /* func_00309740 */
ENTER(0x309740);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_00309768; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x309764);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_00309768:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00309770(Ctx *c) { /* func_00309770 */
ENTER(0x309770);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(7, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x309788); SET32(4, RW(2) + 16); JP_F_00309900(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_003097A0(Ctx *c) { /* func_003097A0 */
ENTER(0x3097a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 16), RW(0)); goto L_003097D0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x3097cc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 16), RW(0));
L_003097D0:;
SET64(31, 0x3097d8); SET64(4, (s32)rd32(c, (RW(16) + 52))); JP_F_001004B0(c);
wr32(c, (RW(16) + 52), RW(0));
wr32(c, (RW(16) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_003097F0(Ctx *c) { /* func_003097F0 */
ENTER(0x3097f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
{ int t = RD(4) == RD(0); c->f[20].u = c->f[12].u; if (t) goto L_00309820; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x309820);  rt_call(c, t); }
L_00309820:;
SET64(4, (s32)rd32(c, (RW(16) + 52)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_00309838; }
SET64(31, 0x309834); c->f[12].u = c->f[20].u; JP_F_002BF3B0(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_00309838:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00309850(Ctx *c) { /* func_00309850 */
ENTER(0x309850);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 0), RW(5));
SET64(31, 0x309864); SET32(4, RW(4) + 16); JP_F_00309AD0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00309870(Ctx *c) { /* func_00309870 */
ENTER(0x309870);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2976);
SET64(7, (s64)(s32)0x3f410000);
wr32(c, (RW(4) + 4), RW(2));
SET64(6, (s64)(s32)0x3f5f0000);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2064);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 56), RW(2));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 16), RW(0));
SET64(8, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 32), RW(0));
SET32(5, RW(5) + 16656);
wr32(c, (RW(4) + 36), RW(0));
SET32(3, RW(3) + 16696);
wr32(c, (RW(4) + 40), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 44), RW(8));
wr16(c, (RW(4) + 48), (u16)RW(0));
wr32(c, (RW(29) + 0), RW(7));
wr32(c, (RW(29) + 4), RW(7));
wr32(c, (RW(29) + 8), RW(6));
wr32(c, (RW(29) + 12), RW(6));
rd128(c, (RW(29) + 0) & ~15u, &c->r[6]);
wr32(c, (RW(4) + 52), RW(0));
wr128(c, (RW(4) + 32) & ~15u, &c->r[6]);
wr32(c, (RW(4) + 4), RW(5));
wr32(c, (RW(4) + 56), RW(3));
SET32(29, RW(29) + 16); return;
}

void JP_F_00309900(Ctx *c) { /* func_00309900 */
ENTER(0x309900);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(5) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(4) == RD(0); SET64(21, RD(7) + RD(0)); if (t) goto L_0030997C; }
SET64(3, rd16(c, (RW(22) + 32)));
SET64(2, (s32)rd32(c, (RW(21) + 312)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x30995c); SET64(5, (s32)rd32(c, (RW(2) + 0))); rt_call(c, t); }
{ int t = RD(21) == RD(0); SET64(6, RD(21) + RD(0)); if (t) goto L_00309968; }
SET32(6, RW(21) + 64);
L_00309968:;
SET64(4, (s32)rd32(c, (RW(22) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x30997c); SET64(5, RD(23) + RD(0)); rt_call(c, t); }
L_0030997C:;
SET64(3, rd16(c, (RW(21) + 340)));
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00309A50; }
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_00309990:;
SET64(2, (s32)rd32(c, (RW(21) + 348)));
SET64(4, (s64)(s32)0x4c0000);
SET64(3, (s32)rd32(c, (RW(21) + 344)));
SET32(4, RW(4) + -8376);
SET32(6, RW(0) + 4);
SET32(2, RW(2) + RW(16));
SET64(18, (s32)rd32(c, (RW(2) + 0)));
SET32(19, RW(3) + RW(17));
SET64(31, 0x3099b8); SET32(5, RW(19) + 64); JP_F_0012A7C0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_003099E0; }
SET64(25, (s32)rd32(c, (RW(18) + 276)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x3099d4); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
 goto L_00309A38;
L_003099E0:;
SET64(4, (s64)(s32)0x4c0000);
SET32(4, RW(4) + -8368);
SET32(5, RW(19) + 64);
SET64(31, 0x3099f4); SET32(6, RW(0) + 12); JP_F_0012A7C0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00309A38; }
SET64(2, (s64)(s32)0xbf060000);
SET64(4, (s32)rd32(c, (RW(22) + 36)));
SET64(2, RD(2) | 0xa92);
SET64(7, (s64)(s32)0x4c0000);
SET64(8, (s64)(s32)0x4c0000);
SET64(6, RD(19) + RD(0));
c->f[12].u = RW(2);
SET64(5, RD(18) + RD(0));
SET32(7, RW(7) + -8448);
SET64(31, 0x309a28); SET32(8, RW(8) + -8432); JP_F_002BF6D0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x309a34); SET64(5, RD(23) + RD(0)); JP_F_0019E8F0(c);
L_00309A38:;
SET64(3, rd16(c, (RW(21) + 340)));
SET32(20, RW(20) + 1);
SET32(17, RW(17) + 112);
SET64(3, RSD(20) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00309990; } }
L_00309A50:;
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

void JP_F_00309A80(Ctx *c) { /* func_00309A80 */
ENTER(0x309a80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_00309AB0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x309aac); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
L_00309AB0:;
SET64(31, 0x309ab8); SET64(4, (s32)rd32(c, (RW(16) + 36))); JP_F_001004B0(c);
wr32(c, (RW(16) + 36), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00309AD0(Ctx *c) { /* func_00309AD0 */
ENTER(0x309ad0);
SET32(29, RW(29) + -224);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(4, (s64)(s32)0x4c0000);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(21, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(4, RW(4) + -8464);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x309b08); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_0012A4D8(c);
SET64(20, RD(2) + RD(0));
SET64(16, RD(0) + RD(0));
SET64(2, rd16(c, (RW(21) + 340)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00309B60; }
SET64(17, RD(0) + RD(0));
L_00309B20:;
SET64(2, (s32)rd32(c, (RW(21) + 344)));
SET64(4, (s64)(s32)0x4c0000);
SET32(4, RW(4) + -8464);
SET64(6, RD(20) + RD(0));
SET32(2, RW(2) + RW(17));
SET64(31, 0x309b3c); SET32(5, RW(2) + 64); JP_F_0012A7C0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00309B48; }
SET32(16, RW(16) + 1);
L_00309B48:;
SET64(2, rd16(c, (RW(21) + 340)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 112); if (t) { POLL(); goto L_00309B20; } }
L_00309B60:;
{ int t = RD(16) == RD(0);  if (t) goto L_00309CD8; }
SET32(2, RW(0) + 80);
SET32(3, RW(0) + 112);
wr8(c, (RW(29) + 220), (u8)RW(2));
SET32(4, RW(0) + 656);
SET32(2, RW(0) + 128);
wr8(c, (RW(29) + 221), (u8)RW(3));
wr8(c, (RW(29) + 222), (u8)RW(2));
SET64(31, 0x309b8c); wr8(c, (RW(29) + 223), (u8)RW(2)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00309C04; }
SET64(31, 0x309b9c); SET64(4, RD(17) + RD(0)); JP_F_00308830(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(5, RW(0) + 128);
SET32(2, RW(2) + 10496);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 8), RW(2));
SET32(3, RW(3) + 10516);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + 10536);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + 10600);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 320), RW(3));
SET32(2, RW(2) + 10632);
SET32(4, RW(17) + 636);
wr32(c, (RW(17) + 496), RW(2));
SET64(6, RD(5) + RD(0));
wr32(c, (RW(17) + 624), RW(0));
SET64(7, RD(5) + RD(0));
wr32(c, (RW(17) + 628), RW(0));
SET64(8, RD(5) + RD(0));
SET64(31, 0x309bfc); wr16(c, (RW(17) + 632), (u16)RW(0)); JP_F_002D2490(c);
wr8(c, (RW(17) + 640), (u8)RW(0));
wr8(c, (RW(17) + 641), (u8)RW(0));
L_00309C04:;
SET64(2, (s64)(s32)0x41a00000);
SET64(5, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
SET32(6, RW(22) + 16);
c->f[12].u = RW(2);
SET32(7, RW(29) + 220);
SET32(8, RW(0) + 64);
SET32(9, RW(0) + 128);
SET64(31, 0x309c2c); wr32(c, (RW(22) + 0), RW(17)); JP_F_002BFC70(c);
SET64(2, rd16(c, (RW(21) + 340)));
SET64(19, RD(0) + RD(0));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00309CD8; }
SET64(16, RD(0) + RD(0));
L_00309C40:;
SET64(2, (s32)rd32(c, (RW(21) + 344)));
SET64(4, (s64)(s32)0x4c0000);
SET32(4, RW(4) + -8464);
SET64(6, RD(20) + RD(0));
SET32(17, RW(2) + RW(16));
SET64(31, 0x309c5c); SET32(5, RW(17) + 64); JP_F_0012A7C0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00309CC0; }
SET64(31, 0x309c6c); SET32(4, RW(29) + 128); JP_F_002AF080(c);
rd128(c, (RW(17) + 0) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3f800000);
SET64(5, RD(19) + RD(0));
wr128(c, (RW(29) + 128) & ~15u, &c->r[3]);
rd128(c, (RW(17) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[3]);
rd128(c, (RW(17) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[3]);
rd128(c, (RW(17) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 176) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 204), RW(2));
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 192), RW(0));
wr32(c, (RW(29) + 196), RW(0));
wr32(c, (RW(29) + 200), RW(0));
wr128(c, (RW(29) + 192) & ~15u, &c->r[2]);
SET64(4, (s32)rd32(c, (RW(22) + 0)));
SET64(31, 0x309cb8); SET32(6, RW(29) + 192); JP_F_002BFA00(c);
SET32(19, RW(19) + 1);
L_00309CC0:;
SET64(2, rd16(c, (RW(21) + 340)));
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 112); if (t) { POLL(); goto L_00309C40; } }
L_00309CD8:;
SET64(31, 0x309ce0); SET32(4, RW(0) + 256); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00309D2C; }
wr32(c, (RW(16) + 0), RW(0));
SET32(4, RW(16) + 16);
SET64(31, 0x309cf8); wr32(c, (RW(16) + 4), RW(0)); JP_F_002AF080(c);
SET64(31, 0x309d00); SET32(4, RW(16) + 80); JP_F_002AF080(c);
wr32(c, (RW(16) + 144), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 148), RW(0));
SET32(4, RW(16) + 176);
wr32(c, (RW(16) + 152), RW(0));
wr32(c, (RW(16) + 156), RW(2));
wr32(c, (RW(16) + 160), RW(0));
wr32(c, (RW(16) + 164), RW(0));
wr32(c, (RW(16) + 168), RW(0));
SET64(31, 0x309d2c); wr32(c, (RW(16) + 172), RW(2)); JP_F_002AF080(c);
L_00309D2C:;
wr32(c, (RW(22) + 36), RW(16));
SET64(31, rd64(c, (RW(29) + 112)));
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 224); return;
}

void JP_F_00309D60(Ctx *c) { /* func_00309D60 */
ENTER(0x309d60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr8(c, (RW(4) + 88), (u8)RW(0));
SET64(16, RD(4) + RD(0));
SET64(31, 0x309d7c); SET32(4, RW(16) + 64); JP_F_001580E0(c);
SET64(31, 0x309d84); SET64(4, RD(16) + RD(0)); JP_F_00150310(c);
SET64(31, 0x309d8c); SET64(4, (s32)rd32(c, (RW(16) + 84))); JP_F_001004B0(c);
wr32(c, (RW(16) + 84), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00309DA0(Ctx *c) { /* func_00309DA0 */
ENTER(0x309da0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00309E14; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16720);
SET32(2, RW(2) + 16740);
wr32(c, (RW(17) + 60), RW(3));
wr32(c, (RW(17) + 80), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x309de4);  rt_call(c, t); }
SET32(4, RW(17) + 64);
SET64(31, 0x309df0); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x309dfc); SET64(5, RD(0) + RD(0)); JP_F_00150410(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00309E18; }
SET64(31, 0x309e14); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00309E14:;
SET64(2, RD(17) + RD(0));
L_00309E18:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00309E30(Ctx *c) { /* func_00309E30 */
ENTER(0x309e30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x309e50); SET32(4, RW(17) + 64); JP_F_00157DA0(c);
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(17) + 88))); goto L_00309E60; }
SET32(2, RW(0) + 1); goto L_00309F24;
L_00309E60:;
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00309F24; }
SET64(31, 0x309e70); SET32(4, RW(17) + 64); JP_F_00157C60(c);
SET64(2, rd8(c, (RW(17) + 89)));
{ int t = RD(2) == RD(0);  if (t) goto L_00309F00; }
SET64(5, (s32)rd32(c, (RW(17) + 84)));
SET64(2, rd16(c, (RW(5) + 30)));
if (RD(2) == RD(0)) { SET64(7, RD(0) + RD(0)); goto L_00309EA4; }
SET64(3, rd16(c, (RW(5) + 28)));
SET64(2, (s32)rd32(c, (RW(5) + 24)));
SET32(3, RW(3) + 8);
SET32(3, RW(5) + RW(3));
SET32(3, RW(3) + 8);
SET32(7, RW(2) + RW(3));
L_00309EA4:;
SET64(2, rd16(c, (RW(5) + 30)));
{ int t = RSD(2) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_00309F00; }
SET64(4, (s64)(s32)0xff000000);
L_00309EB4:;
SET64(3, (s32)rd32(c, (RW(7) + 0)));
SET64(2, RD(3) & RD(4));
{ int t = RD(2) == RD(0);  if (t) goto L_00309EE8; }
SET32(2, RW(2) >> 1);
SET64(3, RD(3) << 40);
SET32(2, RW(2) + 1);
SET64(3, RD(3) >> 40);
SET64(2, RD(2) & RD(4));
wr32(c, (RW(7) + 0), RW(3));
SET64(2, RD(3) | RD(2));
wr32(c, (RW(7) + 0), RW(2));
L_00309EE8:;
SET64(2, rd16(c, (RW(5) + 30)));
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(2));
{ int t = RD(2) != RD(0); SET32(7, RW(7) + 4); if (t) { POLL(); goto L_00309EB4; } }
L_00309F00:;
SET64(5, (s32)rd32(c, (RW(17) + 84)));
SET64(6, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
SET32(7, RW(0) + -1);
SET64(31, 0x309f18); SET64(8, RD(0) + RD(0)); JP_F_0014F9B0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(17) + 88), (u8)RW(2));
SET64(2, RD(0) + RD(0));
L_00309F24:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00309F40(Ctx *c) { /* func_00309F40 */
ENTER(0x309f40);
 return;
}

void JP_F_00309F50(Ctx *c) { /* func_00309F50 */
ENTER(0x309f50);
 return;
}

void JP_F_00309F60(Ctx *c) { /* func_00309F60 */
ENTER(0x309f60);
 return;
}

void JP_F_00309F70(Ctx *c) { /* func_00309F70 */
ENTER(0x309f70);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2976);
SET32(3, RW(3) + 16784);
wr32(c, (RW(4) + 4), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void JP_F_00309FA0(Ctx *c) { /* func_00309FA0 */
ENTER(0x309fa0);
 return;
}

void JP_F_00309FB0(Ctx *c) { /* func_00309FB0 */
ENTER(0x309fb0);
 return;
}

void JP_F_00309FC0(Ctx *c) { /* func_00309FC0 */
ENTER(0x309fc0);
 return;
}

void JP_F_00309FD0(Ctx *c) { /* func_00309FD0 */
ENTER(0x309fd0);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2976);
SET32(3, RW(3) + 16832);
wr32(c, (RW(4) + 4), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void JP_F_0030A000(Ctx *c) { /* func_0030A000 */
ENTER(0x30a000);
 return;
}

void JP_F_0030A010(Ctx *c) { /* func_0030A010 */
ENTER(0x30a010);
 return;
}

void JP_F_0030A020(Ctx *c) { /* func_0030A020 */
ENTER(0x30a020);
 return;
}

void JP_F_0030A030(Ctx *c) { /* func_0030A030 */
ENTER(0x30a030);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2976);
SET32(3, RW(3) + 16880);
wr32(c, (RW(4) + 4), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void JP_F_0030A060(Ctx *c) { /* func_0030A060 */
ENTER(0x30a060);
 return;
}

void JP_F_0030A070(Ctx *c) { /* func_0030A070 */
ENTER(0x30a070);
 return;
}

void JP_F_0030A080(Ctx *c) { /* func_0030A080 */
ENTER(0x30a080);
 return;
}

void JP_F_0030A090(Ctx *c) { /* func_0030A090 */
ENTER(0x30a090);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2976);
SET32(3, RW(3) + 16928);
wr32(c, (RW(4) + 4), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void JP_F_0030A0C0(Ctx *c) { /* func_0030A0C0 */
ENTER(0x30a0c0);
 return;
}

void JP_F_0030A0D0(Ctx *c) { /* func_0030A0D0 */
ENTER(0x30a0d0);
 return;
}

void JP_F_0030A0E0(Ctx *c) { /* func_0030A0E0 */
ENTER(0x30a0e0);
 return;
}

void JP_F_0030A0F0(Ctx *c) { /* func_0030A0F0 */
ENTER(0x30a0f0);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2976);
SET32(3, RW(3) + 16976);
wr32(c, (RW(4) + 4), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void JP_F_0030A120(Ctx *c) { /* func_0030A120 */
ENTER(0x30a120);
 return;
}

void JP_F_0030A130(Ctx *c) { /* func_0030A130 */
ENTER(0x30a130);
 return;
}

void JP_F_0030A140(Ctx *c) { /* func_0030A140 */
ENTER(0x30a140);
 return;
}

void JP_F_0030A150(Ctx *c) { /* func_0030A150 */
ENTER(0x30a150);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2976);
SET32(3, RW(3) + 17024);
wr32(c, (RW(4) + 4), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void JP_F_0030A180(Ctx *c) { /* func_0030A180 */
ENTER(0x30a180);
 return;
}

void JP_F_0030A190(Ctx *c) { /* func_0030A190 */
ENTER(0x30a190);
 return;
}

void JP_F_0030A1A0(Ctx *c) { /* func_0030A1A0 */
ENTER(0x30a1a0);
 return;
}

void JP_F_0030A1B0(Ctx *c) { /* func_0030A1B0 */
ENTER(0x30a1b0);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2976);
SET32(3, RW(3) + 17072);
wr32(c, (RW(4) + 4), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void JP_F_0030A1E0(Ctx *c) { /* func_0030A1E0 */
ENTER(0x30a1e0);
 return;
}

void JP_F_0030A1F0(Ctx *c) { /* func_0030A1F0 */
ENTER(0x30a1f0);
 return;
}

void JP_F_0030A200(Ctx *c) { /* func_0030A200 */
ENTER(0x30a200);
 return;
}

void JP_F_0030A210(Ctx *c) { /* func_0030A210 */
ENTER(0x30a210);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2976);
SET32(3, RW(3) + 17120);
wr32(c, (RW(4) + 4), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void JP_F_0030A240(Ctx *c) { /* func_0030A240 */
ENTER(0x30a240);
 return;
}

void JP_F_0030A250(Ctx *c) { /* func_0030A250 */
ENTER(0x30a250);
 return;
}

void JP_F_0030A260(Ctx *c) { /* func_0030A260 */
ENTER(0x30a260);
 return;
}

void JP_F_0030A270(Ctx *c) { /* func_0030A270 */
ENTER(0x30a270);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2976);
SET32(3, RW(3) + 17168);
wr32(c, (RW(4) + 4), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void JP_F_0030A2A0(Ctx *c) { /* func_0030A2A0 */
ENTER(0x30a2a0);
 return;
}

void JP_F_0030A2B0(Ctx *c) { /* func_0030A2B0 */
ENTER(0x30a2b0);
 return;
}

void JP_F_0030A2C0(Ctx *c) { /* func_0030A2C0 */
ENTER(0x30a2c0);
 return;
}

void JP_F_0030A2D0(Ctx *c) { /* func_0030A2D0 */
ENTER(0x30a2d0);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2976);
SET32(3, RW(3) + 17216);
wr32(c, (RW(4) + 4), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void JP_F_0030A300(Ctx *c) { /* func_0030A300 */
ENTER(0x30a300);
 return;
}

void JP_F_0030A310(Ctx *c) { /* func_0030A310 */
ENTER(0x30a310);
 return;
}

void JP_F_0030A320(Ctx *c) { /* func_0030A320 */
ENTER(0x30a320);
 return;
}

void JP_F_0030A330(Ctx *c) { /* func_0030A330 */
ENTER(0x30a330);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2976);
SET32(3, RW(3) + 17264);
wr32(c, (RW(4) + 4), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void JP_F_0030A360(Ctx *c) { /* func_0030A360 */
ENTER(0x30a360);
 return;
}

void JP_F_0030A370(Ctx *c) { /* func_0030A370 */
ENTER(0x30a370);
 return;
}

void JP_F_0030A380(Ctx *c) { /* func_0030A380 */
ENTER(0x30a380);
 return;
}

void JP_F_0030A390(Ctx *c) { /* func_0030A390 */
ENTER(0x30a390);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 2976);
SET32(3, RW(3) + 17312);
wr32(c, (RW(4) + 4), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void JP_F_0030A3C0(Ctx *c) { /* func_0030A3C0 */
ENTER(0x30a3c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0030A52C; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16592);
SET32(2, RW(2) + 16632);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x30a404);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0030A518; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16528);
SET32(2, RW(2) + 16568);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x30a434); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 72);
{ int t = RD(4) == RD(0);  if (t) goto L_0030A480; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16720);
SET32(2, RW(2) + 16740);
wr32(c, (RW(17) + 132), RW(3));
wr32(c, (RW(17) + 152), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x30a468);  rt_call(c, t); }
SET32(4, RW(17) + 136);
SET64(31, 0x30a474); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET32(4, RW(17) + 72);
SET64(31, 0x30a480); SET64(5, RD(0) + RD(0)); JP_F_00150410(c);
L_0030A480:;
{ int t = RD(17) == RD(0);  if (t) goto L_0030A514; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 16656);
SET32(2, RW(2) + 16696);
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 56), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x30a4b0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(2, RW(17) + 16);
{ int t = RD(2) == RD(0);  if (t) goto L_0030A4F4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 2064);
wr32(c, (RW(17) + 56), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 16), RW(0)); goto L_0030A4E8; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x30a4e4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 16), RW(0));
L_0030A4E8:;
SET64(31, 0x30a4f0); SET64(4, (s32)rd32(c, (RW(17) + 52))); JP_F_001004B0(c);
wr32(c, (RW(17) + 52), RW(0));
L_0030A4F4:;
{ int t = RD(17) == RD(0);  if (t) goto L_0030A514; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x30a514); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_0030A514:;
SET64(2, RD(16) << 48);
L_0030A518:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0030A530; }
SET64(31, 0x30a52c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0030A52C:;
SET64(2, RD(17) + RD(0));
L_0030A530:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0030A550(Ctx *c) { /* func_0030A550 */
ENTER(0x30a550);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0030A5C0; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 16784);
wr32(c, (RW(17) + 4), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x30a588);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0030A5AC; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x30a5a8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_0030A5AC:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0030A5C4; }
SET64(31, 0x30a5c0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0030A5C0:;
SET64(2, RD(17) + RD(0));
L_0030A5C4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0030A5E0(Ctx *c) { /* func_0030A5E0 */
ENTER(0x30a5e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0030A650; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 16832);
wr32(c, (RW(17) + 4), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x30a618);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_0030A63C; }
SET64(25, (s64)(s32)0x4d0000);
SET32(25, RW(25) + 2976);
wr32(c, (RW(17) + 4), RW(25));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x30a638); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_0030A63C:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0030A654; }
SET64(31, 0x30a650); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0030A650:;
SET64(2, RD(17) + RD(0));
L_0030A654:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

